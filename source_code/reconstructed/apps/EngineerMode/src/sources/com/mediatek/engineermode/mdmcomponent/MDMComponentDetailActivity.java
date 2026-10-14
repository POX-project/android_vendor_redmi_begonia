package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.app.ProgressDialog;
import android.content.DialogInterface;
import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.telephony.TelephonyManager;
import android.view.View;
import android.view.ViewGroup;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.R;
import com.mediatek.mdml.Msg;
import com.mediatek.mdml.TRAP_TYPE;
import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class MDMComponentDetailActivity extends Activity implements View.OnClickListener {
    private static final int DIALOG_MDM_ERROR = 1;
    private static final int DIALOG_WAIT_UNSUBSCRIB = 0;
    private static final int ENABLETRAP_DONE = 3;
    private static final int MDM_ERROR = 4;
    public static final int MSG_INIT_UI = 5;
    private static final int MSG_MDM_ENABLETRAP = 0;
    public static final int MSG_MDM_UNSUBSCRIBE = 1;
    public static final int MSG_TASK_DONE = 1;
    public static final int MSG_TASK_START = 0;
    public static final int MSG_TASK_STOP = 2;
    private static final String TAG = "EmInfo/MDMComponentDetailActivity";
    private static final int UNSUBSCRIBE_DONE = 2;
    public static int mModemType;
    public static int mSimType;
    public static Handler mUpdateUiHandler;
    public static UpdateTaskDriven taskDriver;
    private List<MDMComponent> allComponents;
    private ArrayList<String> checked;
    private View content;
    private int leftEdge;
    List<MDMComponent> mComponents;
    private MDMComponent mCurrentItem;
    private FrameLayout mInfoFrameLayout;
    private Button mPageDown;
    private Button mPageUp;
    private ProgressDialog mProgressDialog;
    private TextView mTitle;
    private View menu;
    private LinearLayout.LayoutParams menuParams;
    private int screenHeight;
    private int screenWidth;
    public static String[] mSimMccMnc = new String[2];
    private static boolean isMsgShow = false;
    ArrayList<Long> mCheckedEmInteger = new ArrayList<>();
    private int mCurrentItemIndex = 0;
    private int mItemCount = 0;
    private int menuPadding = 80;
    private Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.mdmcomponent.MDMComponentDetailActivity.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 2) {
                Elog.d(MDMComponentDetailActivity.TAG, "Wait unSubscribe message done");
                if (MDMComponentDetailActivity.this.mProgressDialog == null || !MDMComponentDetailActivity.this.mProgressDialog.isShowing()) {
                    return;
                }
                MDMComponentDetailActivity.this.removeDialog(0);
                MDMComponentDetailActivity.this.finish();
                return;
            }
            if (i != 3) {
                if (i == 4 && !MDMComponentDetailActivity.this.isDestroyed()) {
                    MDMComponentDetailActivity.this.showDialog(1);
                    return;
                }
                return;
            }
            if (!ComponentSelectActivity.checkMonitorAlive()) {
                Elog.d(MDMComponentDetailActivity.TAG, "[InitTask] m_cmdProxy is null, md_monitor is stopped, finish");
                if (MDMComponentDetailActivity.this.isDestroyed()) {
                    return;
                }
                MDMComponentDetailActivity.this.showDialog(1);
                return;
            }
            if (MDMComponentDetailActivity.taskDriver == null) {
                MDMComponentDetailActivity.taskDriver = new UpdateTaskDriven();
            }
            MDMComponentDetailActivity.this.updateUI();
            MDMComponentDetailActivity.this.taskExcute(0);
            boolean unused = MDMComponentDetailActivity.isMsgShow = true;
            Elog.d(MDMComponentDetailActivity.TAG, "init MDMComponentDetailActivity done, select " + MDMComponentDetailActivity.this.mItemCount);
        }
    };

    public class MdmDetailThread extends Thread {
        private int action;

        public MdmDetailThread(int i) {
            this.action = i;
        }

        @Override // java.lang.Thread, java.lang.Runnable
        public void run() {
            int i = this.action;
            if (i != 0) {
                if (i != 1) {
                    return;
                }
                MDMComponentDetailActivity.this.unSubscribeMdmMsg();
                MDMComponentDetailActivity.this.mHandler.sendEmptyMessage(2);
                return;
            }
            MDMComponentDetailActivity.this.initValues();
            if (!ComponentSelectActivity.checkMonitorAlive()) {
                Elog.d(MDMComponentDetailActivity.TAG, "[InitTask] m_cmdProxy is null, md_monitor is stopped, finish");
                MDMComponentDetailActivity.this.mHandler.sendEmptyMessage(4);
                return;
            }
            try {
                ComponentSelectActivity.getCmdProxy().onEnableTrap(ComponentSelectActivity.m_sid);
                MDMComponentDetailActivity.this.mHandler.sendEmptyMessage(3);
            } catch (Exception e) {
                Elog.e(MDMComponentDetailActivity.TAG, "ComponentSelectActivity.m_cmdProxy.onEnableTrap failed! " + e.toString());
            }
        }
    }

    public static MDMContentICD.MDMHeaderICD DecodeICDPacketHeader(ByteBuffer byteBuffer) {
        MDMContentICD.MDMHeaderICD mDMHeaderICD = new MDMContentICD.MDMHeaderICD();
        mDMHeaderICD.type = byteBuffer.get(0) & 15;
        mDMHeaderICD.version = (byteBuffer.get(0) & 240) >> 4;
        int i = mDMHeaderICD.type;
        if (i == 0) {
            mDMHeaderICD.type = byteBuffer.get(0) & 15;
            mDMHeaderICD.version = (byteBuffer.get(0) & 240) >> 4;
            int i2 = mDMHeaderICD.version;
            if (i2 == 1) {
                mDMHeaderICD.total_size = (byteBuffer.get(1) & 255) | ((byteBuffer.get(2) & 255) << 8);
                mDMHeaderICD.timestamp_type = byteBuffer.get(3) & 15;
                mDMHeaderICD.protocol_id = (byteBuffer.get(3) & 240) >> 4;
                mDMHeaderICD.msg_id = (byteBuffer.get(4) & 255) | ((byteBuffer.get(5) & 255) << 8);
            } else if (i2 == 2) {
                mDMHeaderICD.total_size = (byteBuffer.get(1) & 255) | ((byteBuffer.get(2) & 255) << 8) | ((byteBuffer.get(2) & 255) << 16);
                mDMHeaderICD.timestamp_type = byteBuffer.get(4) & 15;
                mDMHeaderICD.protocol_id = (byteBuffer.get(4) & 240) >> 4;
                mDMHeaderICD.msg_id = (byteBuffer.get(6) & 255) | ((byteBuffer.get(7) & 255) << 8);
            }
        } else if (i != 1) {
            Elog.d(TAG, "type = " + Integer.toHexString(mDMHeaderICD.type));
        } else {
            mDMHeaderICD.type = byteBuffer.get(0) & 15;
            mDMHeaderICD.version = (byteBuffer.get(0) & 240) >> 4;
            int i3 = mDMHeaderICD.version;
            if (i3 == 1 || i3 == 2) {
                mDMHeaderICD.total_size = (byteBuffer.get(1) & 255) | ((byteBuffer.get(2) & 255) << 8) | ((byteBuffer.get(2) & 255) << 16);
                mDMHeaderICD.timestamp_type = byteBuffer.get(4) & 15;
                mDMHeaderICD.protocol_id = (byteBuffer.get(4) & 240) >> 4;
                mDMHeaderICD.msg_id = (byteBuffer.get(6) & 255) | ((byteBuffer.get(7) & 255) << 8);
            }
        }
        return mDMHeaderICD;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void initValues() {
        WindowManager windowManager = (WindowManager) getSystemService("window");
        this.screenWidth = windowManager.getDefaultDisplay().getWidth();
        this.screenHeight = windowManager.getDefaultDisplay().getHeight() - 200;
        this.content = findViewById(R.id.content_mdm);
        View viewFindViewById = findViewById(R.id.menu_mdm);
        this.menu = viewFindViewById;
        LinearLayout.LayoutParams layoutParams = (LinearLayout.LayoutParams) viewFindViewById.getLayoutParams();
        this.menuParams = layoutParams;
        layoutParams.width = this.screenWidth - this.menuPadding;
        int i = -this.menuParams.width;
        this.leftEdge = i;
        this.menuParams.leftMargin = i;
        this.content.getLayoutParams().width = this.screenWidth;
        this.content.getLayoutParams().height = this.screenHeight;
        ArrayList<String> arrayList = this.checked;
        if (arrayList != null) {
            for (String str : arrayList) {
                for (MDMComponent mDMComponent : this.allComponents) {
                    if (str.equals(mDMComponent.getName())) {
                        this.mComponents.add(mDMComponent);
                        break;
                    }
                }
            }
        } else {
            Elog.d(TAG, "checked is null");
        }
        this.mItemCount = this.mComponents.size();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean unSubscribeMdmMsg() {
        if (ComponentSelectActivity.checkMonitorAlive()) {
            unSubscribeTrap();
            return true;
        }
        Elog.d(TAG, "[unSubscribeTask] m_cmdProxy is null, md_monitor is stopped, finish");
        finish();
        return true;
    }

    private void updateModemTypeStatus() {
        Elog.d(TAG, "updateModemTypeStatus");
        int capabilitySim = ModemCategory.getCapabilitySim();
        if (capabilitySim == 0) {
            int i = mSimType;
            if (i == 0) {
                mModemType = 1;
            } else if (i == 1) {
                mModemType = 2;
            } else {
                mModemType = 3;
            }
        } else if (capabilitySim == 1) {
            int i2 = mSimType;
            if (i2 == 0) {
                mModemType = 2;
            } else if (i2 == 1) {
                mModemType = 1;
            } else {
                mModemType = 3;
            }
        } else if (capabilitySim == 2) {
            if (FeatureSupport.is93Modem()) {
                int i3 = mSimType;
                if (i3 == 0) {
                    mModemType = 2;
                } else if (i3 == 1) {
                    mModemType = 3;
                } else {
                    mModemType = 1;
                }
            } else {
                int i4 = mSimType;
                if (i4 == 0) {
                    mModemType = 3;
                } else if (i4 == 1) {
                    mModemType = 2;
                } else {
                    mModemType = 1;
                }
            }
        }
        updateUI();
        Elog.d(TAG, "mSimType = " + mSimType + ",mModemType = " + mModemType);
    }

    @Override // android.app.Activity
    public void onBackPressed() {
        isMsgShow = false;
        showDialog(0);
        new MdmDetailThread(1).start();
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (this.mItemCount == 0) {
            Elog.e(TAG, "mComponents size =0");
            return;
        }
        if (view.getId() == this.mPageUp.getId()) {
            int i = this.mCurrentItemIndex - 1;
            int i2 = this.mItemCount;
            this.mCurrentItemIndex = (i + i2) % i2;
            updateUI();
            return;
        }
        if (view.getId() == this.mPageDown.getId()) {
            this.mCurrentItemIndex = (this.mCurrentItemIndex + 1) % this.mItemCount;
            updateUI();
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        Elog.d(TAG, "init MDMComponentDetailActivity ..");
        setContentView(R.layout.mdm_component_detail);
        this.mTitle = (TextView) findViewById(R.id.detail_title_mdm);
        this.mInfoFrameLayout = (FrameLayout) findViewById(R.id.detail_frame_mdm);
        this.mPageUp = (Button) findViewById(R.id.NetworkInfo_PageUp_mdm);
        this.mPageDown = (Button) findViewById(R.id.NetworkInfo_PageDown_mdm);
        this.mPageUp.setOnClickListener(this);
        this.mPageDown.setOnClickListener(this);
        Intent intent = getIntent();
        this.checked = (ArrayList) intent.getSerializableExtra("mChecked");
        mSimType = intent.getIntExtra("mSimType", 0);
        mModemType = intent.getIntExtra("mModemType", 1);
        this.allComponents = MDMComponent.getComponents(this);
        this.mComponents = new ArrayList();
        mUpdateUiHandler = new Handler() { // from class: com.mediatek.engineermode.mdmcomponent.MDMComponentDetailActivity.2
            @Override // android.os.Handler
            public void handleMessage(Message message) {
                Task task = (Task) message.obj;
                int i = message.what;
                if (i == 1) {
                    ByteBuffer byteBuffer = (ByteBuffer) task.getExtraMsg();
                    MDMContentICD.MDMHeaderICD icdHeader = task.getIcdHeader();
                    String upperCase = Long.toHexString(icdHeader.msg_id).toUpperCase();
                    for (MDMComponent mDMComponent : MDMComponentDetailActivity.this.mComponents) {
                        if (mDMComponent.hasEmType(upperCase) && MDMComponentDetailActivity.isMsgShow) {
                            if (icdHeader.protocol_id != MDMComponentDetailActivity.mModemType) {
                                Elog.d(MDMComponentDetailActivity.TAG, "ICD Msg has an unSelected sim, [" + mDMComponent.getName() + "] msgIDStr = " + upperCase + ",Slot = " + (MDMComponentDetailActivity.mSimType + 1) + ",Protocol = " + MDMComponentDetailActivity.mModemType + ",getSimIdx = " + icdHeader.protocol_id);
                                MDMComponentDetailActivity.this.taskExcute(1);
                                return;
                            }
                            mDMComponent.update(upperCase, byteBuffer);
                        }
                    }
                } else if (i != 3) {
                    Elog.d(MDMComponentDetailActivity.TAG, "Unsupported op: " + message.what);
                } else {
                    Msg msg = (Msg) task.getExtraMsg();
                    if (msg != null) {
                        String upperCase2 = msg.getMsgName().toUpperCase();
                        int iIntValue = ComponentSelectActivity.getDecoder(MDMComponentDetailActivity.this).msgInfo_getMsgID(upperCase2).intValue();
                        for (MDMComponent mDMComponent2 : MDMComponentDetailActivity.this.mComponents) {
                            if (mDMComponent2.hasEmType(upperCase2) && MDMComponentDetailActivity.isMsgShow) {
                                if (msg.getSimIdx() != MDMComponentDetailActivity.mModemType && !ComponentSelectActivity.mSelected_show_both_sim.contains(mDMComponent2.getName())) {
                                    Elog.d(MDMComponentDetailActivity.TAG, "EM Msg has an unSelected sim, [" + mDMComponent2.getName() + "] msgIDStr = " + iIntValue + ",Protocol = " + MDMComponentDetailActivity.mModemType + ",getSimIdx = " + msg.getSimIdx() + ", msg: " + Long.toHexString(iIntValue));
                                    MDMComponentDetailActivity.this.taskExcute(1);
                                    return;
                                }
                                mDMComponent2.update(upperCase2, msg);
                            }
                        }
                    } else {
                        Elog.e(MDMComponentDetailActivity.TAG, "msgObj is null");
                    }
                }
                MDMComponentDetailActivity.this.taskExcute(1);
            }
        };
        if (taskDriver == null) {
            taskDriver = new UpdateTaskDriven();
        }
        new MdmDetailThread(0).start();
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i, Bundle bundle) {
        if (i == 0) {
            Elog.d(TAG, "Wait unSubscribe message..");
            ProgressDialog progressDialog = new ProgressDialog(this);
            this.mProgressDialog = progressDialog;
            progressDialog.setTitle("Waiting");
            this.mProgressDialog.setMessage("Wait unSubscribe message..");
            this.mProgressDialog.setCancelable(false);
            this.mProgressDialog.setIndeterminate(true);
            return this.mProgressDialog;
        }
        if (i != 1) {
            return super.onCreateDialog(i);
        }
        Elog.d(TAG, "MDM error, need to finish self!");
        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        builder.setTitle("ERROR Warning");
        builder.setCancelable(false);
        builder.setMessage("MDM occurs error, MDM occurs error, please try re-enter");
        builder.setPositiveButton("OK", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.mdmcomponent.MDMComponentDetailActivity.3
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i2) {
                dialogInterface.dismiss();
                MDMComponentDetailActivity.this.finish();
            }
        });
        return builder.create();
    }

    @Override // android.app.Activity
    public void onDestroy() {
        super.onDestroy();
        Elog.d(TAG, "onDestroy");
        taskExcute(2);
        taskDriver = null;
        if (isMsgShow) {
            isMsgShow = false;
            showDialog(0);
            new MdmDetailThread(1).start();
        }
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        Elog.d(TAG, "onResume");
        TelephonyManager telephonyManager = (TelephonyManager) getSystemService("phone");
        int capabilitySim = ModemCategory.getCapabilitySim();
        mSimMccMnc[0] = telephonyManager.getSimOperatorNumericForPhone(capabilitySim);
        mSimMccMnc[1] = telephonyManager.getSimOperatorNumericForPhone((capabilitySim + 1) % 2);
        Elog.d(TAG, "Read SIM MCC+MNC(PS1, PS2):" + mSimMccMnc[0] + ", " + mSimMccMnc[1]);
        updateModemTypeStatus();
    }

    @Override // android.app.Activity
    public void onStop() {
        super.onStop();
        Elog.d(TAG, "onStop");
    }

    public void taskExcute(int i) {
        UpdateTaskDriven updateTaskDriven = taskDriver;
        if (updateTaskDriven == null) {
            Elog.d(TAG, "taskDriver is null, not receiver. return " + i);
            return;
        }
        if (i == 0) {
            updateTaskDriven.taskStart();
        } else if (i == 1) {
            updateTaskDriven.taskDone();
        } else {
            if (i != 2) {
                return;
            }
            updateTaskDriven.taskStop();
        }
    }

    public void unSubscribeTrap() {
        Elog.d(TAG, "Before unSubscribeTrap..");
        Long[] lArr = (Long[]) ComponentSelectActivity.mCheckedEmTypes.toArray(new Long[ComponentSelectActivity.mCheckedEmTypes.size()]);
        Elog.d(TAG, "unSubscribeTrap msg id = " + Arrays.toString(lArr));
        ComponentSelectActivity.getCmdProxy().onUnsubscribeMultiTrap(ComponentSelectActivity.m_sid, TRAP_TYPE.TRAP_TYPE_EM, ComponentSelectActivity.toPrimitives(lArr));
        Long[] lArr2 = (Long[]) ComponentSelectActivity.mCheckedIcdRecordTypes.toArray(new Long[ComponentSelectActivity.mCheckedIcdRecordTypes.size()]);
        Elog.d(TAG, "unSubscribeTrap icd record msg id = " + Arrays.toString(lArr2));
        ComponentSelectActivity.getCmdProxy().onUnsubscribeMultiTrap(ComponentSelectActivity.m_sid, TRAP_TYPE.TRAP_TYPE_ICD_RECORD, ComponentSelectActivity.toPrimitives(lArr2));
        Long[] lArr3 = (Long[]) ComponentSelectActivity.mCheckedIcdEventTypes.toArray(new Long[ComponentSelectActivity.mCheckedIcdEventTypes.size()]);
        Elog.d(TAG, "unSubscribeTrap icd event msg id = " + Arrays.toString(lArr3));
        ComponentSelectActivity.getCmdProxy().onUnsubscribeMultiTrap(ComponentSelectActivity.m_sid, TRAP_TYPE.TRAP_TYPE_ICD_EVENT, ComponentSelectActivity.toPrimitives(lArr3));
        this.mHandler.sendEmptyMessage(2);
    }

    public void updateUI() {
        if (this.mComponents.size() == 0) {
            Elog.e(TAG, "mComponents size =0");
            return;
        }
        MDMComponent mDMComponent = this.mCurrentItem;
        if (mDMComponent != null) {
            mDMComponent.removeView();
        }
        MDMComponent mDMComponent2 = this.mComponents.get(this.mCurrentItemIndex);
        this.mCurrentItem = mDMComponent2;
        if (mDMComponent2 instanceof FTNetworkInfo) {
            Elog.d(TAG, "Selected Sim: " + getIntent().getIntExtra("mSelectSim", -1));
            ((FTNetworkInfo) this.mCurrentItem).setCurrentSimID(getIntent().getIntExtra("mSelectSim", -1));
        }
        this.mTitle.setText(this.mCurrentItem.getName() + "(SimSlot=" + (mSimType + 1) + ",ModemProtocol=" + mModemType + ")");
        View view = this.mCurrentItem.getView();
        ViewGroup viewGroup = (ViewGroup) view.getParent();
        if (viewGroup != null) {
            viewGroup.removeAllViews();
        }
        this.mInfoFrameLayout.removeAllViews();
        this.mInfoFrameLayout.addView(view);
        Elog.d(TAG, "updateUI done!");
    }
}
