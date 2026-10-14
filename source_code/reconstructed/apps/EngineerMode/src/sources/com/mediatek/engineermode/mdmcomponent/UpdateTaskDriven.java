package com.mediatek.engineermode.mdmcomponent;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class UpdateTaskDriven extends Handler {
    private static final int DRIVER_DEAD = 0;
    private static final int DRIVER_NOT_READY = 2;
    private static final int DRIVER_READY = 1;
    private static final int EVENT_DONE = 2;
    private static final int EVENT_EXEC_NEXT = 1;
    private static final int STATE_DOING = 1;
    private static final int STATE_DONE = 2;
    private static final int STATE_NO_PENDING = 0;
    private static final String TAG = "EmInfo/UpdateTaskDriven";
    protected static final int TASK_INIT_VIEW = 0;
    protected static final int TASK_REMOVE_VIEW = 2;
    protected static final int TASK_UPDATE_DATA = 1;
    private int mDriverState;
    private Object mDriverStateLock;
    private ArrayList<Task> mPendingTask;
    private int mState;
    private Object mStateLock;
    private Object mTaskLock;

    public UpdateTaskDriven() {
        this.mPendingTask = new ArrayList<>();
        this.mTaskLock = new Object();
        this.mStateLock = new Object();
        this.mDriverStateLock = new Object();
        this.mState = 0;
        this.mDriverState = 2;
    }

    public UpdateTaskDriven(Looper looper) {
        super(looper);
        this.mPendingTask = new ArrayList<>();
        this.mTaskLock = new Object();
        this.mStateLock = new Object();
        this.mDriverStateLock = new Object();
        this.mState = 0;
        this.mDriverState = 2;
    }

    private String eventToString(int i) {
        if (i != 1) {
            return i != 2 ? "UNKNOWN_EVENT" : "EVENT_DONE";
        }
        return "EVENT_EXEC_NEXT";
    }

    private Task getCurrentPendingTask() {
        synchronized (this.mTaskLock) {
            if (this.mPendingTask.size() == 0) {
                return null;
            }
            return this.mPendingTask.get(0);
        }
    }

    private int getDriverState() {
        int i;
        synchronized (this.mDriverStateLock) {
            i = this.mDriverState;
        }
        return i;
    }

    private int getState() {
        int i;
        synchronized (this.mStateLock) {
            i = this.mState;
        }
        return i;
    }

    private void removePendingTask(int i) {
        synchronized (this.mTaskLock) {
            if (this.mPendingTask.size() > 0) {
                this.mPendingTask.remove(i);
            }
        }
    }

    private void setDriverState(int i) {
        synchronized (this.mDriverStateLock) {
            this.mDriverState = i;
        }
    }

    private void setState(int i) {
        synchronized (this.mStateLock) {
            this.mState = i;
        }
    }

    private String stateToString(int i) {
        if (i == 0) {
            return "STATE_NO_PENDING";
        }
        if (i != 1) {
            return i != 2 ? "UNKNOWN_STATE" : "STATE_DONE";
        }
        return "STATE_DOING";
    }

    public void appendEmTask(Object obj, int i) {
        appendTask(new Task(1, obj, i, 3));
    }

    public void appendIcdTask(MDMContentICD.MDMHeaderICD mDMHeaderICD, ByteBuffer byteBuffer) {
        appendTask(new Task(1, mDMHeaderICD, byteBuffer, 1));
    }

    public void appendTask(Task task) {
        synchronized (this.mTaskLock) {
            if (isDriverDead()) {
                Elog.d(TAG, "Driver dead! current task returned " + task.toString());
                return;
            }
            for (int i = 1; i < this.mPendingTask.size(); i++) {
                if (isTaskRepeate(task, this.mPendingTask.get(i))) {
                    this.mPendingTask.remove(i);
                    break;
                }
            }
            this.mPendingTask.add(task);
            if (isDriverReady()) {
                obtainMessage(1).sendToTarget();
            }
        }
    }

    public void clearPendingTask() {
        synchronized (this.mTaskLock) {
            this.mPendingTask.clear();
        }
    }

    public void exec() {
        Task currentPendingTask = getCurrentPendingTask();
        if (currentPendingTask == null) {
            setState(0);
            return;
        }
        if (getState() == 1) {
            return;
        }
        if (isDriverDead() && !isStopTask(currentPendingTask)) {
            Elog.d(TAG, "Driver is Stopped");
            taskDone();
            return;
        }
        setState(1);
        if (currentPendingTask.getTaskId() != 1) {
            taskDone();
            return;
        }
        Message messageObtainMessage = MDMComponentDetailActivity.mUpdateUiHandler.obtainMessage();
        messageObtainMessage.what = currentPendingTask.getType();
        messageObtainMessage.obj = currentPendingTask;
        MDMComponentDetailActivity.mUpdateUiHandler.sendMessage(messageObtainMessage);
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        int i = message.what;
        if (i != 1) {
            if (i != 2) {
                return;
            }
            removePendingTask(0);
            setState(2);
        }
        exec();
    }

    public boolean isDriverDead() {
        return getDriverState() == 0;
    }

    public boolean isDriverReady() {
        return getDriverState() == 1;
    }

    public boolean isStopTask(Task task) {
        return task.getTaskId() == 2;
    }

    public boolean isTaskRepeate(Task task, Task task2) {
        return false;
    }

    public boolean isTaskRunning() {
        return getState() == 1;
    }

    public void resetDriver() {
        this.mPendingTask.clear();
        setDriverState(2);
    }

    public void setDriverReady() {
        setDriverState(1);
    }

    void taskDone() {
        obtainMessage(2).sendToTarget();
    }

    public void taskStart() {
        setDriverState(1);
        exec();
    }

    public void taskStop() {
        setDriverState(0);
        clearPendingTask();
    }
}
