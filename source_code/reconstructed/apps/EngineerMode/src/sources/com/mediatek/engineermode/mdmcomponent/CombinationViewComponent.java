package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.os.AsyncTask;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.view.View;
import android.view.ViewGroup;
import android.widget.LinearLayout;
import android.widget.ScrollView;
import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.Msg;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;

/* JADX INFO: compiled from: MDMComponentFT.java */
/* JADX INFO: loaded from: classes.dex */
abstract class CombinationViewComponent extends MDMComponent {
    private static final int SHOW_SIM_ALL = -1;
    private static final int SHOW_SIM_ONE = 0;
    private static final int SHOW_SIM_TWO = 1;
    TableInfoAdapter commonInfoAdapter;
    MdmLinearLayout commonView;
    private int currentSimID;
    List<HashMap<String, TableInfoAdapter>> hmapAdapterList;
    List<LinkedHashMap<String, LinkedHashMap>> hmapLabelsList;
    List<HashMap<String, MdmLinearLayout>> hmapViewList;
    String[] imsi;
    LinearLayout layout;
    String location;
    Activity mContext;
    HandlerThread mHandlerThread;
    UpdateTaskDriven mUpdateTaskDriven;
    ScrollView scrollView;
    private int supportSimCount;

    /* JADX INFO: compiled from: MDMComponentFT.java */
    private class InitViewTask extends AsyncTask<Void, String[], Void> {
        long startTime;

        private InitViewTask() {
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public Void doInBackground(Void... voidArr) {
            for (int i = 0; i < CombinationViewComponent.this.getSupportSimCount(); i++) {
                CombinationViewComponent.this.initHashMap(i);
                if (CombinationViewComponent.this.hmapLabelsList.get(i) != null) {
                    for (String str : CombinationViewComponent.this.hmapLabelsList.get(i).keySet()) {
                        if (str.split("-").length > 1 && str.split("-")[1].indexOf(".") < 0) {
                            publishProgress(new String[]{i + "", str});
                        }
                    }
                }
            }
            return null;
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(Void r6) {
            super.onPostExecute(r6);
            CombinationViewComponent.this.mUpdateTaskDriven.setDriverState(1);
            CombinationViewComponent.this.taskDone();
            Elog.d("EmInfo/MDMComponent", "InitViewTask cost: " + (System.currentTimeMillis() - this.startTime) + "ms");
        }

        @Override // android.os.AsyncTask
        protected void onPreExecute() {
            super.onPreExecute();
            this.startTime = System.currentTimeMillis();
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onProgressUpdate(String[]... strArr) {
            super.onProgressUpdate((Object[]) strArr);
            int iIntValue = Integer.valueOf(strArr[0][0]).intValue();
            String str = strArr[0][1];
            if (str.split("-").length > 1 && str.split("-")[1].indexOf(".") < 0) {
                CombinationViewComponent.this.hmapViewList.get(iIntValue).get(str).showTitle();
                CombinationViewComponent.this.hmapViewList.get(iIntValue).get(str).setTextContent("SIM" + (iIntValue + 1) + ":" + str);
            }
            CombinationViewComponent.this.setHmapAdapterByLabel(str, iIntValue);
            CombinationViewComponent.this.hmapViewList.get(iIntValue).get(str).setAdapter(CombinationViewComponent.this.hmapAdapterList.get(iIntValue).get(str));
            CombinationViewComponent.this.hmapAdapterList.get(iIntValue).get(str).notifyDataSetChanged();
            CombinationViewComponent.this.hmapViewList.get(iIntValue).get(str).setListViewHeightBasedOnChildren();
            if (CombinationViewComponent.this.hmapViewList.get(iIntValue).get(str).getParent() != null) {
                ((ViewGroup) CombinationViewComponent.this.hmapViewList.get(iIntValue).get(str).getParent()).removeView(CombinationViewComponent.this.hmapViewList.get(iIntValue).get(str));
            }
            CombinationViewComponent combinationViewComponent = CombinationViewComponent.this;
            combinationViewComponent.safeAddView(combinationViewComponent.layout, CombinationViewComponent.this.hmapViewList.get(iIntValue).get(str));
        }
    }

    /* JADX INFO: compiled from: MDMComponentFT.java */
    class Task {
        private boolean canRepeate;
        private Object mData;
        private String mName;
        private int mSimID;
        private int mTaskId;

        public Task(int i) {
            this.mTaskId = -1;
            this.mName = "";
            this.mData = null;
            this.mSimID = 0;
            this.canRepeate = true;
            this.mTaskId = i;
        }

        public Task(int i, String str, Msg msg, int i2) {
            this.mTaskId = -1;
            this.mName = "";
            this.mData = null;
            this.mSimID = 0;
            this.canRepeate = true;
            this.mTaskId = i;
            this.mName = str;
            this.mData = msg;
            this.mSimID = i2;
        }

        public Task(int i, String str, Msg msg, int i2, boolean z) {
            this.mTaskId = -1;
            this.mName = "";
            this.mData = null;
            this.mSimID = 0;
            this.canRepeate = true;
            this.mTaskId = i;
            this.mName = str;
            this.mData = msg;
            this.mSimID = i2;
            this.canRepeate = z;
        }

        public Object getExtraMsg() {
            return this.mData;
        }

        public String getExtraName() {
            return this.mName;
        }

        public int getExtraSimID() {
            return this.mSimID;
        }

        public int getTaskId() {
            return this.mTaskId;
        }

        public String toString() {
            return "Task ID: " + this.mTaskId + ", msgName: " + this.mName + ", mSimID: " + this.mSimID;
        }
    }

    /* JADX INFO: compiled from: MDMComponentFT.java */
    class UpdateTaskDriven extends Handler {
        private static final int DRIVER_DEAD = 0;
        private static final int DRIVER_NOT_READY = 2;
        private static final int DRIVER_READY = 1;
        private static final int EVENT_DONE = 2;
        private static final int EVENT_EXEC_NEXT = 1;
        private static final int STATE_DOING = 1;
        private static final int STATE_DONE = 2;
        private static final int STATE_NO_PENDING = 0;
        private static final String TAG = "EmInfo/MDMComponentFT/UpdateTaskDriven";
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

        private String driverStateToStr(int i) {
            if (i == 0) {
                return "Dead";
            }
            if (i == 1) {
                return "Ready";
            }
            if (i == 2) {
                return "Not Ready";
            }
            return "Unknown: " + i;
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

        /* JADX INFO: Access modifiers changed from: private */
        public void setDriverState(int i) {
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

        /* JADX WARN: Multi-variable type inference failed */
        /* JADX WARN: Type inference failed for: r4v3, types: [int] */
        /* JADX WARN: Type inference failed for: r4v7 */
        /* JADX WARN: Type inference failed for: r4v8 */
        public void addFirstTask(Task task, int i) {
            setDriverState(i);
            synchronized (this.mTaskLock) {
                try {
                    if (i == 0) {
                        if (isTaskRunning()) {
                            Task task2 = this.mPendingTask.get(0);
                            this.mPendingTask.clear();
                            this.mPendingTask.add(task2);
                        } else {
                            this.mPendingTask.clear();
                        }
                        this.mPendingTask.add(task);
                    } else {
                        int i2 = 0;
                        for (int i3 = 0; i3 < this.mPendingTask.size(); i3++) {
                            if (this.mPendingTask.get(i3).getTaskId() == 2) {
                                i2 = i3;
                                break;
                            }
                        }
                        for (?? IsTaskRunning = isTaskRunning(); IsTaskRunning <= i2 && IsTaskRunning < this.mPendingTask.size(); IsTaskRunning++) {
                            this.mPendingTask.remove((int) IsTaskRunning);
                        }
                        this.mPendingTask.add(isTaskRunning() ? 1 : 0, task);
                    }
                } catch (Throwable th) {
                    throw th;
                }
            }
            obtainMessage(1).sendToTarget();
        }

        public void appendTask(Task task) {
            synchronized (this.mTaskLock) {
                if (isDriverDead()) {
                    Elog.d(TAG, "Driver dead! current task returned " + task.toString());
                    return;
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
                CombinationViewComponent.this.taskStop();
                return;
            }
            setState(1);
            int taskId = currentPendingTask.getTaskId();
            if (taskId == 0) {
                new InitViewTask().execute(new Void[0]);
                return;
            }
            if (taskId == 1) {
                CombinationViewComponent.this.startUpdateProcess(currentPendingTask);
            } else if (taskId != 2) {
                CombinationViewComponent.this.taskDone();
            } else {
                CombinationViewComponent.this.taskDone();
            }
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
            return !task.canRepeate && task.getTaskId() == task2.getTaskId() && task.getExtraName() == task2.getExtraName() && task.getExtraSimID() == task2.getExtraSimID();
        }

        public boolean isTaskRunning() {
            return getState() == 1;
        }

        public void resetDriver() {
            this.mPendingTask.clear();
            setDriverState(2);
        }
    }

    public CombinationViewComponent(Activity activity, int i) {
        super(activity);
        this.currentSimID = 0;
        this.supportSimCount = 2;
        this.hmapLabelsList = null;
        this.hmapViewList = null;
        this.hmapAdapterList = null;
        this.mContext = activity;
        this.commonView = new MdmLinearLayout(activity);
        this.commonInfoAdapter = new TableInfoAdapter(activity);
        this.supportSimCount = i;
        this.imsi = new String[getSupportSimCount()];
        if (this.scrollView == null) {
            ScrollView scrollView = new ScrollView(this.mContext);
            this.scrollView = scrollView;
            scrollView.setLayoutParams(new ViewGroup.LayoutParams(-1, -1));
        }
        if (this.layout == null) {
            LinearLayout linearLayout = new LinearLayout(this.mContext);
            this.layout = linearLayout;
            linearLayout.setOrientation(1);
            this.layout.setLayoutParams(new ViewGroup.LayoutParams(-1, -2));
        }
        if (this.hmapLabelsList == null) {
            this.hmapLabelsList = new ArrayList();
            this.hmapViewList = new ArrayList();
            this.hmapAdapterList = new ArrayList();
            for (int i2 = 0; i2 < getSupportSimCount(); i2++) {
                this.hmapLabelsList.add(i2, new LinkedHashMap<>());
                this.hmapViewList.add(i2, new HashMap<>());
                this.hmapAdapterList.add(i2, new HashMap<>());
            }
        }
        if (this.mHandlerThread != null) {
            this.mUpdateTaskDriven.setDriverState(2);
            return;
        }
        HandlerThread handlerThread = new HandlerThread("MtkMdmViewManager");
        this.mHandlerThread = handlerThread;
        handlerThread.start();
        this.mUpdateTaskDriven = new UpdateTaskDriven(this.mHandlerThread.getLooper());
    }

    private void taskStart() {
        this.mUpdateTaskDriven.addFirstTask(new Task(0), 2);
    }

    void addData(String str, int i) {
        if (isValidSimID(i)) {
            setHmapAdapterByLabel(str, i);
            this.hmapViewList.get(i).get(str).setAdapter(this.hmapAdapterList.get(i).get(str));
            this.hmapAdapterList.get(i).get(str).notifyDataSetChanged();
            this.hmapViewList.get(i).get(str).setListViewHeightBasedOnChildren();
        }
    }

    void addHashMapKeyValues(String str, int i, String str2, Object obj) {
        if (!isLabelArrayType(str)) {
            setHashMapKeyValues(str, i, str2, obj);
            return;
        }
        String[] strArr = this.hmapLabelsList.get(i).get(str).get(str2) != null ? (String[]) this.hmapLabelsList.get(i).get(str).get(str2) : new String[0];
        String[] strArr2 = obj instanceof String[] ? (String[]) obj : new String[]{obj.toString()};
        String[] strArr3 = new String[strArr.length + strArr2.length];
        System.arraycopy(strArr, 0, strArr3, 0, strArr.length);
        System.arraycopy(strArr2, 0, strArr3, strArr.length, strArr2.length);
        this.hmapLabelsList.get(i).get(str).put(str2, strArr3);
    }

    void addHashMapKeyValues(String str, int i, String[] strArr) {
        String[] strArr2 = new String[this.hmapLabelsList.get(i).get(str).keySet().size()];
        this.hmapLabelsList.get(i).get(str).keySet().toArray(strArr2);
        for (int i2 = 0; i2 < strArr2.length; i2++) {
            addHashMapKeyValues(str, i, strArr2[i2], strArr[i2]);
        }
    }

    void clearData(String str, int i) {
        if (isValidSimID(i)) {
            if (this.hmapAdapterList.get(i).get(str) != null) {
                this.hmapAdapterList.get(i).get(str).clear();
            }
        } else {
            for (int i2 = 0; i2 < this.hmapLabelsList.size(); i2++) {
                if (this.hmapAdapterList.get(i2).get(str) != null) {
                    this.hmapAdapterList.get(i2).get(str).clear();
                }
            }
        }
    }

    void clearViewData(int i) {
        if (isValidSimID(i)) {
            if (this.hmapLabelsList.contains(Integer.valueOf(i))) {
                this.hmapLabelsList.get(i).clear();
                this.hmapViewList.get(i).clear();
                this.hmapAdapterList.get(i).clear();
                return;
            }
            return;
        }
        for (int i2 = 0; i2 < getSupportSimCount(); i2++) {
            if (this.hmapLabelsList.size() > i2 && this.hmapLabelsList.get(i2) != null) {
                this.hmapLabelsList.get(i2).clear();
                this.hmapViewList.get(i2).clear();
                this.hmapAdapterList.get(i2).clear();
            }
        }
    }

    void displayView(String str, int i, boolean z) {
        if (this.mUpdateTaskDriven.isDriverDead()) {
            Elog.e("EmInfo/MDMComponent", "Exit displayView, Driver dead");
            return;
        }
        if (isValidSimID(i)) {
            if (!z || (isValidSimID(getCurrentSimID()) && getCurrentSimID() != i)) {
                this.hmapViewList.get(i).get(str).hideView();
                return;
            } else {
                this.hmapViewList.get(i).get(str).showView();
                return;
            }
        }
        for (int i2 = 0; i2 < getSupportSimCount(); i2++) {
            if (z) {
                this.hmapViewList.get(i2).get(str).showView();
            } else {
                this.hmapViewList.get(i2).get(str).hideView();
            }
        }
    }

    public int getCurrentSimID() {
        return this.currentSimID;
    }

    LinkedHashMap<String, LinkedHashMap> getHashMapLabels() {
        LinkedHashMap<String, LinkedHashMap> linkedHashMap = new LinkedHashMap<>();
        if (linkedHashMap.size() == 0) {
            ArrayList<LinkedHashMap> arrayListInitHashMapValues = initHashMapValues();
            String[] strArrInitLabels = initLabels();
            for (int i = 0; i < strArrInitLabels.length; i++) {
                linkedHashMap.put(strArrInitLabels[i], arrayListInitHashMapValues.get(i));
            }
        }
        return linkedHashMap;
    }

    public int getSupportSimCount() {
        return this.supportSimCount;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    View getView() {
        long jCurrentTimeMillis = System.currentTimeMillis();
        registeListener();
        if (this.scrollView.getParent() != null) {
            ((ViewGroup) this.scrollView.getParent()).removeView(this.scrollView);
        }
        if (this.scrollView.getChildCount() > 0) {
            this.scrollView.removeAllViews();
        }
        if (this.layout.getParent() != null) {
            ((ViewGroup) this.layout.getParent()).removeView(this.layout);
        }
        safeAddView(this.scrollView, this.layout);
        updateCommonView(getCurrentSimID());
        safeAddView(this.layout, this.commonView);
        taskStart();
        Elog.d("EmInfo/MDMComponent", "getView done! cost: " + (System.currentTimeMillis() - jCurrentTimeMillis) + "ms");
        return this.scrollView;
    }

    LinkedHashMap<String, String> initHashMap(Object[] objArr) {
        LinkedHashMap<String, String> linkedHashMap = new LinkedHashMap<>();
        for (Object obj : objArr) {
            linkedHashMap.put((String) obj, null);
        }
        return linkedHashMap;
    }

    void initHashMap(int i) {
        if (isValidSimID(i)) {
            initHashMapByID(i);
            return;
        }
        for (int i2 = 0; i2 < getSupportSimCount(); i2++) {
            initHashMapByID(i2);
        }
    }

    void initHashMapByID(int i) {
        if (i >= this.hmapLabelsList.size() || !this.hmapLabelsList.get(i).isEmpty()) {
            return;
        }
        this.hmapLabelsList.set(i, getHashMapLabels());
        for (String str : this.hmapLabelsList.get(i).keySet()) {
            this.hmapAdapterList.get(i).put(str, new TableInfoAdapter(this.mContext));
            this.hmapViewList.get(i).put(str, new MdmLinearLayout(this.mContext));
        }
    }

    abstract ArrayList<LinkedHashMap> initHashMapValues();

    abstract String[] initLabels();

    abstract boolean isLabelArrayType(String str);

    boolean isValidSimID(int i) {
        return i < getSupportSimCount() && i >= 0;
    }

    abstract void registeListener();

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void removeView() {
        unRegisteListener();
        LinearLayout linearLayout = this.layout;
        if (linearLayout != null && linearLayout.getChildCount() > 0) {
            this.layout.removeAllViews();
            this.scrollView.removeAllViews();
        }
        taskStop();
    }

    void resetHashMapKeyValues(String str, int i) {
        if (isValidSimID(i)) {
            new LinkedHashMap();
            LinkedHashMap<String, String> linkedHashMapInitHashMap = initHashMap(this.hmapLabelsList.get(i).get(str).keySet().toArray());
            this.hmapLabelsList.get(i).get(str).clear();
            this.hmapLabelsList.get(i).get(str).putAll(linkedHashMapInitHashMap);
            return;
        }
        for (int i2 = 0; i2 < getSupportSimCount(); i2++) {
            new LinkedHashMap();
            LinkedHashMap<String, String> linkedHashMapInitHashMap2 = initHashMap(this.hmapLabelsList.get(i).get(str).keySet().toArray());
            this.hmapLabelsList.get(i).get(str).clear();
            this.hmapLabelsList.get(i).get(str).putAll(linkedHashMapInitHashMap2);
        }
    }

    public void safeAddView(ViewGroup viewGroup, View view) {
        if (view.getParent() != null) {
            ((ViewGroup) view.getParent()).removeView(view);
        }
        viewGroup.addView(view);
    }

    public void setCurrentSimID(int i) {
        this.currentSimID = i;
    }

    void setHashMapKeyValues(String str, int i, String str2, Object obj) {
        if (!isLabelArrayType(str)) {
            this.hmapLabelsList.get(i).get(str).put(str2, String.valueOf(obj));
        } else if (obj instanceof String[]) {
            this.hmapLabelsList.get(i).get(str).put(str2, (String[]) obj);
        } else {
            this.hmapLabelsList.get(i).get(str).put(str2, new String[]{obj.toString()});
        }
    }

    void setHashMapKeyValues(String str, int i, String str2, String[] strArr) {
        if (isLabelArrayType(str)) {
            this.hmapLabelsList.get(i).get(str).put(str2, strArr);
        } else {
            setHashMapKeyValues(str, i, strArr);
        }
    }

    void setHashMapKeyValues(String str, int i, LinkedHashMap<String, String> linkedHashMap) {
        this.hmapLabelsList.get(i).put(str, linkedHashMap);
    }

    void setHashMapKeyValues(String str, int i, String[] strArr) {
        String[] strArr2 = new String[this.hmapLabelsList.get(i).get(str).keySet().size()];
        this.hmapLabelsList.get(i).get(str).keySet().toArray(strArr2);
        for (int i2 = 0; i2 < strArr2.length; i2++) {
            if (isLabelArrayType(str)) {
                addHashMapKeyValues(str, i, strArr2[i2], strArr[i2]);
            } else {
                setHashMapKeyValues(str, i, strArr2[i2], strArr[i2]);
            }
        }
    }

    void setHmapAdapter(int i) {
        for (String str : this.hmapLabelsList.get(i).keySet()) {
            if (this.hmapAdapterList.get(i).get(str).getCount() == 0) {
                setHmapAdapterByLabel(str, i);
            }
        }
    }

    void setHmapAdapterByLabel(String str, int i) {
        if (isValidSimID(i)) {
            this.hmapAdapterList.get(i).get(str).clear();
            String[] strArr = new String[this.hmapLabelsList.get(i).get(str).keySet().size()];
            this.hmapLabelsList.get(i).get(str).keySet().toArray(strArr);
            if (!isLabelArrayType(str)) {
                for (int i2 = 0; i2 < strArr.length; i2 += 2) {
                    if (i2 + 1 < strArr.length) {
                        TableInfoAdapter tableInfoAdapter = this.hmapAdapterList.get(i).get(str);
                        String[] strArr2 = new String[4];
                        strArr2[0] = strArr[i2];
                        strArr2[1] = (String) (this.hmapLabelsList.get(i).get(str).get(strArr[i2]) == null ? "" : this.hmapLabelsList.get(i).get(str).get(strArr[i2]));
                        strArr2[2] = strArr[i2 + 1];
                        strArr2[3] = (String) (this.hmapLabelsList.get(i).get(str).get(strArr[i2 + 1]) == null ? "" : this.hmapLabelsList.get(i).get(str).get(strArr[i2 + 1]));
                        tableInfoAdapter.add(strArr2);
                    } else {
                        TableInfoAdapter tableInfoAdapter2 = this.hmapAdapterList.get(i).get(str);
                        String[] strArr3 = new String[4];
                        strArr3[0] = strArr[i2];
                        strArr3[1] = (String) (this.hmapLabelsList.get(i).get(str).get(strArr[i2]) == null ? "" : this.hmapLabelsList.get(i).get(str).get(strArr[i2]));
                        strArr3[2] = "";
                        strArr3[3] = "";
                        tableInfoAdapter2.add(strArr3);
                    }
                }
                return;
            }
            HashMap map = new HashMap();
            int length = 0;
            this.hmapAdapterList.get(i).get(str).add(strArr);
            for (int i3 = 0; i3 < strArr.length; i3++) {
                if (this.hmapLabelsList.get(i).get(str).get(strArr[i3]) == null) {
                    map.put(strArr[i3], new String[]{""});
                } else {
                    Object[] objArr = (Object[]) this.hmapLabelsList.get(i).get(str).get(strArr[i3]);
                    length = length < objArr.length ? objArr.length : length;
                    map.put(strArr[i3], (String[]) objArr);
                }
            }
            int i4 = 0;
            while (i4 < length) {
                String[] strArr4 = new String[strArr.length];
                boolean z = false;
                for (int i5 = 0; i5 < strArr.length; i5++) {
                    strArr4[i5] = (map.get(strArr[i5]) == null || i4 >= ((String[]) map.get(strArr[i5])).length) ? "" : ((String[]) map.get(strArr[i5]))[i4];
                    if (strArr4[i5] != null && !strArr4[i5].equals("")) {
                        z = true;
                    }
                }
                if (z) {
                    this.hmapAdapterList.get(i).get(str).add(strArr4);
                    Elog.d("EmInfo/MDMComponent", "[setHmapAdapter][ArrayType] label: " + str + " ,values: " + Arrays.toString(strArr4));
                }
                i4++;
            }
        }
    }

    abstract void startUpdateProcess(Task task);

    void taskDone() {
        this.mUpdateTaskDriven.obtainMessage(2).sendToTarget();
    }

    protected void taskStop() {
        this.mUpdateTaskDriven.addFirstTask(new Task(2), 0);
    }

    abstract void unRegisteListener();

    public void updateCommonView(int i) {
        this.commonInfoAdapter.clear();
        if (isValidSimID(i)) {
            this.commonInfoAdapter.add(new String[]{"Location", "IMSI" + (i + 1)});
            this.commonInfoAdapter.add(new String[]{this.location, this.imsi[i]});
        } else {
            String[] strArr = new String[getSupportSimCount() + 1];
            String[] strArr2 = new String[getSupportSimCount() + 1];
            strArr[0] = "Location";
            strArr2[0] = this.location;
            for (int i2 = 0; i2 < getSupportSimCount(); i2++) {
                strArr[i2 + 1] = "IMSI" + (i2 + 1);
                int i3 = i2 + 1;
                String[] strArr3 = this.imsi;
                strArr2[i3] = strArr3[i2] == null ? " " : strArr3[i2];
            }
            this.commonInfoAdapter.add(strArr);
            this.commonInfoAdapter.add(strArr2);
        }
        this.commonView.setAdapter(this.commonInfoAdapter);
        this.commonView.setTextContent("Common");
        this.commonInfoAdapter.notifyDataSetChanged();
        this.commonView.setListViewHeightBasedOnChildren();
    }
}
