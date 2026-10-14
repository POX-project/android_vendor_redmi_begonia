package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.app.ProgressDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.os.SystemProperties;
import android.os.SystemService;
import android.support.v4.media.session.PlaybackStateCompat;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmApplication;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.R;
import com.mediatek.mdml.MONITOR_CMD_RESP;
import com.mediatek.mdml.MonitorCmdProxy;
import com.mediatek.mdml.MonitorTrapReceiver;
import com.mediatek.mdml.Msg;
import com.mediatek.mdml.PlainDataDecoder;
import com.mediatek.mdml.TRAP_TYPE;
import com.mediatek.mdml.TrapHandlerInterface;
import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import java.util.concurrent.TimeoutException;

/* JADX INFO: loaded from: classes.dex */
public class ComponentSelectActivity extends Activity implements CompoundButton.OnCheckedChangeListener {
    private static final int CHECK_INFOMATION_ID = 1;
    private static final String COMPONENT_RSRPSINR_CONFIG_SHAREPRE = "telephony_rsrpsinr_config_settings";
    private static final int DIALOG_MDM_ERROR = 2;
    private static final int DIALOG_WAIT_INIT = 0;
    private static final int DIALOG_WAIT_SUBSCRIB = 1;
    private static final String KEY_SELECTED = "selected";
    private static final int LOADING_DONE = 1;
    private static final int MDM_ERROR = 4;
    private static final int MEDIUMWEAK_POINT1_X_DEFAULT = -140;
    private static final int MEDIUMWEAK_POINT1_Y_DEFAULT = 10;
    private static final int MEDIUMWEAK_POINT2_X_DEFAULT = -90;
    private static final int MEDIUMWEAK_POINT2_Y_DEFAULT = 10;
    private static final int MEDIUMWEAK_POINT3_X_DEFAULT = -90;
    private static final int MEDIUMWEAK_POINT3_Y_DEFAULT = -20;
    private static final int MSG_MDM_DISABLE = 2;
    private static final int MSG_MDM_LOADING = 0;
    private static final int MSG_MDM_SUBSCRIBE = 1;
    public static final int MSG_UPDATE_UI_URC_EM = 3;
    public static final int MSG_UPDATE_UI_URC_ICD = 1;
    private static final String PREF_FILE = "pref_file";
    private static final int SELECT_ALL_ID = 2;
    private static final int SELECT_NONE_ID = 3;
    private static final String SERVICE_NAME = "md_monitor";
    private static final int STRONG_POINT1_X_DEFAULT = -80;
    private static final int STRONG_POINT1_Y_DEFAULT = 30;
    private static final int STRONG_POINT2_X_DEFAULT = -80;
    private static final int STRONG_POINT2_Y_DEFAULT = 20;
    private static final int STRONG_POINT3_Y_DEFAULT = 20;
    private static final int SUBSCRIBE_DONE = 2;
    private static final String TAG = "EmInfo/ComponentSelectActivity";
    private static final int UPDATE_INTERVAL = 800;
    private static final int UPDATE_UI = 3;
    private static final int WAIT_TIMEOUT = 3000;
    private static final int WEAK_POINT1_X_DEFAULT = -140;
    private static final int WEAK_POINT1_Y_DEFAULT = 5;
    private static final int WEAK_POINT2_X_DEFAULT = -100;
    private static final int WEAK_POINT2_Y_DEFAULT = 5;
    private static final int WEAK_POINT3_X_DEFAULT = -100;
    private static final int WEAK_POINT3_Y_DEFAULT = -20;
    public static int mModemType;
    public static Set<String> mSelected_show_both_sim;
    public static int mSimType;
    public static MonitorCmdProxy m_cmdProxy;
    public static long m_sid;
    private List<MDMComponent> allComponents;
    private List<CheckBox> mCheckBoxes;
    private SharedPreferences mPref;
    private ProgressDialog mProgressDialog;
    private ProgressDialog mProgressDialog1;
    private Set<String> mSelected;
    MonitorTrapReceiver m_trapReceiver;
    private static boolean initDone = false;
    public static String mAutoRecordFlag = "0";
    public static String mAutoRecordFlagItem = "0";
    public static String[] mAutoRecordItem = {"Pcell and Scell basic info", "Handover (Intra-LTE)", "LTE ERRC OOS Event Info", "LTE ERRC ELF Event Info", "LTE EMAC Rach Failure Info", "MD Feature Detection"};
    public static ArrayList<Long> mCheckedEmTypes = new ArrayList<>();
    public static ArrayList<Long> mCheckedIcdRecordTypes = new ArrayList<>();
    public static ArrayList<Long> mCheckedIcdEventTypes = new ArrayList<>();
    private static int k = 1;
    private static int mStrongPoint1X = -80;
    private static int mStrongPoint1Y = 30;
    private static int mStrongPoint2X = -80;
    private static int mStrongPoint2Y = 20;
    private static final int STRONG_POINT3_X_DEFAULT = -30;
    private static int mStrongPoint3X = STRONG_POINT3_X_DEFAULT;
    private static int mStrongPoint3Y = 20;
    private static int mMediumWeakPoint1X = -140;
    private static int mMediumWeakPoint1Y = 10;
    private static int mMediumWeakPoint2X = -90;
    private static int mMediumWeakPoint2Y = 10;
    private static int mMediumWeakPoint3X = -90;
    private static int mMediumWeakPoint3Y = -20;
    private static int mWeakPoint1X = -140;
    private static int mWeakPoint1Y = 5;
    private static int mWeakPoint2X = -100;
    private static int mWeakPoint2Y = 5;
    private static int mWeakPoint3X = -100;
    private static int mWeakPoint3Y = -20;
    private static PlainDataDecoder m_plainDataDecoder = null;
    ArrayList<String> components = null;
    private int mSelectSim = 0;
    private Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.mdmcomponent.ComponentSelectActivity.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 1) {
                ComponentSelectActivity.this.removeDialog(0);
                Elog.d(ComponentSelectActivity.TAG, "Wait MDML init done");
                if ("1".equals(ComponentSelectActivity.mAutoRecordFlag)) {
                    ComponentSelectActivity.this.OptionsItemSelected();
                    return;
                }
                return;
            }
            if (i == 2) {
                ComponentSelectActivity.this.removeDialog(1);
                Elog.d(ComponentSelectActivity.TAG, "Wait subscribe message done");
                int unused = ComponentSelectActivity.k = 1;
                Intent intent = new Intent(ComponentSelectActivity.this, (Class<?>) MDMComponentDetailActivity.class);
                intent.putExtra("mChecked", ComponentSelectActivity.this.components);
                intent.putExtra("mSimType", ComponentSelectActivity.mSimType);
                intent.putExtra("mModemType", ComponentSelectActivity.mModemType);
                ComponentSelectActivity.this.startActivity(intent);
                return;
            }
            if (i != 3) {
                if (i != 4) {
                    return;
                }
                ComponentSelectActivity.this.showDialog(2);
            } else {
                ComponentSelectActivity.this.mProgressDialog1.setMessage("Wait subscribe message:" + ComponentSelectActivity.access$008());
            }
        }
    };

    /* JADX INFO: renamed from: com.mediatek.engineermode.mdmcomponent.ComponentSelectActivity$8, reason: invalid class name */
    static /* synthetic */ class AnonymousClass8 {
        static final /* synthetic */ int[] $SwitchMap$com$mediatek$mdml$TRAP_TYPE;

        static {
            int[] iArr = new int[TRAP_TYPE.values().length];
            $SwitchMap$com$mediatek$mdml$TRAP_TYPE = iArr;
            try {
                iArr[TRAP_TYPE.TRAP_TYPE_EM.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$mediatek$mdml$TRAP_TYPE[TRAP_TYPE.TRAP_TYPE_ICD_RECORD.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$com$mediatek$mdml$TRAP_TYPE[TRAP_TYPE.TRAP_TYPE_ICD_EVENT.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
            try {
                $SwitchMap$com$mediatek$mdml$TRAP_TYPE[TRAP_TYPE.TRAP_TYPE_DISCARDINFO.ordinal()] = 4;
            } catch (NoSuchFieldError e4) {
            }
        }
    }

    private class DemoHandler implements TrapHandlerInterface {
        private DemoHandler() {
        }

        @Override // com.mediatek.mdml.TrapHandlerInterface
        public void ProcessTrap(long j, TRAP_TYPE trap_type, int i, byte[] bArr, int i2) {
            int i3 = AnonymousClass8.$SwitchMap$com$mediatek$mdml$TRAP_TYPE[trap_type.ordinal()];
            if (i3 != 1) {
                if (i3 != 2 && i3 != 3) {
                    if (i3 == 4) {
                        Elog.d(ComponentSelectActivity.TAG, "[Discard ... ]");
                        return;
                    }
                    Elog.d(ComponentSelectActivity.TAG, "[Unknown Type, Error ...] type: " + trap_type);
                    return;
                }
                ByteBuffer byteBufferWrap = ByteBuffer.wrap(Arrays.copyOfRange(bArr, i2, i + i2));
                MDMContentICD.MDMHeaderICD mDMHeaderICDDecodeICDPacketHeader = MDMComponentDetailActivity.DecodeICDPacketHeader(byteBufferWrap);
                String upperCase = Long.toHexString(mDMHeaderICDDecodeICDPacketHeader.msg_id).toUpperCase();
                if (MDMComponentDetailActivity.taskDriver != null) {
                    MDMComponentDetailActivity.taskDriver.appendIcdTask(mDMHeaderICDDecodeICDPacketHeader, byteBufferWrap);
                    return;
                }
                Elog.d(ComponentSelectActivity.TAG, "taskDriver is null, return : " + trap_type + "[" + upperCase + "]");
                return;
            }
            Msg msgMsgInfo_getMsg = ComponentSelectActivity.getDecoder(ComponentSelectActivity.this).msgInfo_getMsg(bArr, i2);
            if (msgMsgInfo_getMsg == null) {
                Elog.d(ComponentSelectActivity.TAG, "msg is null in ProcessTrap : " + Arrays.toString(bArr));
                return;
            }
            String upperCase2 = msgMsgInfo_getMsg.getMsgName().toUpperCase();
            int iIntValue = ComponentSelectActivity.getDecoder(ComponentSelectActivity.this).msgInfo_getMsgID(upperCase2).intValue();
            Elog.d(ComponentSelectActivity.TAG, "msgIDStr: " + iIntValue + ", msgName: " + upperCase2);
            if (MDMComponentDetailActivity.taskDriver != null) {
                MDMComponentDetailActivity.taskDriver.appendEmTask(msgMsgInfo_getMsg, iIntValue);
                return;
            }
            Elog.d(ComponentSelectActivity.TAG, "taskDriver is null, return : " + trap_type + "[" + iIntValue + "]");
        }
    }

    private interface InputDialogOnClickListener {
        void onClick(DialogInterface dialogInterface, int i, String str, String str2, String str3, String str4, String str5, String str6, String str7, String str8, String str9, String str10, String str11, String str12, String str13, String str14, String str15, String str16, String str17, String str18);
    }

    public class MdmCoreThread extends Thread {
        private int action;

        public MdmCoreThread(int i) {
            this.action = i;
        }

        @Override // java.lang.Thread, java.lang.Runnable
        public void run() {
            int i = this.action;
            if (i == 0) {
                if (ComponentSelectActivity.this.loadingMdmService()) {
                    ComponentSelectActivity.this.mHandler.sendEmptyMessage(1);
                    boolean unused = ComponentSelectActivity.initDone = true;
                    return;
                }
                return;
            }
            if (i != 1) {
                if (i != 2) {
                    return;
                }
                ComponentSelectActivity.this.disableTrap();
            } else if (ComponentSelectActivity.this.subscribeMdmMsg()) {
                ComponentSelectActivity.this.mHandler.sendEmptyMessage(2);
            }
        }
    }

    class Sortbyroll implements Comparator<String> {
        Sortbyroll() {
        }

        @Override // java.util.Comparator
        public int compare(String str, String str2) {
            return Integer.valueOf(str.split(" ")[0].replace(".", "")).intValue() - Integer.valueOf(str2.split(" ")[0].replace(".", "")).intValue();
        }
    }

    private boolean InitDecoder(Context context) {
        PlainDataDecoder decoder = getDecoder(context);
        m_plainDataDecoder = decoder;
        if (decoder == null) {
            Elog.e(TAG, "InitDecoder occurs error!");
            return false;
        }
        Elog.d(TAG, "InitDecoder success!");
        return true;
    }

    private boolean InitMDML(Context context) {
        MonitorCmdProxy cmdProxy = getCmdProxy();
        m_cmdProxy = cmdProxy;
        long jOnCreateSession = cmdProxy.onCreateSession();
        m_sid = jOnCreateSession;
        MonitorTrapReceiver monitorTrapReceiver = new MonitorTrapReceiver(jOnCreateSession, "demo_receiver");
        this.m_trapReceiver = monitorTrapReceiver;
        if (m_cmdProxy == null || monitorTrapReceiver == null) {
            Elog.e(TAG, "InitMDML occurs error!");
            return false;
        }
        monitorTrapReceiver.SetTrapHandler(new DemoHandler());
        m_cmdProxy.onSetTrapReceiver(m_sid, "demo_receiver");
        Elog.e(TAG, "InitMDML success!");
        return true;
    }

    private void InitUI() {
        setContentView(R.layout.component_select);
        ViewGroup viewGroup = (ViewGroup) findViewById(R.id.list);
        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-1, -2);
        layoutParams.setMargins(0, 5, 0, 5);
        LinearLayout.LayoutParams layoutParams2 = new LinearLayout.LayoutParams(-1, -2);
        layoutParams2.setMargins(30, 5, 0, 5);
        Intent intent = getIntent();
        mSimType = intent.getIntExtra("mSimType", 0);
        mModemType = intent.getIntExtra("mModemType", 1);
        this.mSelectSim = mSimType;
        SharedPreferences sharedPreferences = getSharedPreferences(PREF_FILE, 0);
        this.mPref = sharedPreferences;
        Set<String> stringSet = sharedPreferences.getStringSet(KEY_SELECTED, null);
        this.mSelected = stringSet;
        if (stringSet == null) {
            this.mSelected = new HashSet();
        }
        if (mSelected_show_both_sim == null) {
            HashSet hashSet = new HashSet();
            mSelected_show_both_sim = hashSet;
            hashSet.clear();
        }
        if (FeatureSupport.isEngLoad() || FeatureSupport.isUserDebugLoad()) {
            mAutoRecordFlag = EmUtils.systemPropertyGet("persist.radio.record.auto", "0");
            mAutoRecordFlagItem = EmUtils.systemPropertyGet("persist.radio.record.auto.item", "0");
            mSelected_show_both_sim.clear();
        }
        if ("1".equals(mAutoRecordFlag)) {
            this.mSelected.clear();
            if (mAutoRecordFlagItem.equals("0")) {
                int i = 0;
                while (true) {
                    String[] strArr = mAutoRecordItem;
                    if (i >= strArr.length) {
                        break;
                    }
                    this.mSelected.add(strArr[i]);
                    i++;
                }
            } else {
                String[] strArrSplit = mAutoRecordFlagItem.split(",");
                for (int i2 = 0; strArrSplit != null && i2 < strArrSplit.length; i2++) {
                    if (strArrSplit[i2].equals("1")) {
                        this.mSelected.add(mAutoRecordItem[i2]);
                    }
                }
            }
            mSelected_show_both_sim.addAll(this.mSelected);
            Elog.d(TAG, "mSelected = " + this.mSelected);
        }
        mSelected_show_both_sim.add("FT Network Info");
        List<MDMComponent> components = MDMComponent.getComponents(this);
        this.allComponents = components;
        MDMComponent[] mDMComponentArr = (MDMComponent[]) components.toArray(new MDMComponent[components.size()]);
        Arrays.sort(mDMComponentArr);
        this.allComponents = Arrays.asList(mDMComponentArr);
        ArrayList<String> arrayList = new ArrayList();
        for (MDMComponent mDMComponent : this.allComponents) {
            if (!arrayList.contains(mDMComponent.getGroup())) {
                arrayList.add(mDMComponent.getGroup());
            }
        }
        Collections.sort(arrayList, new Sortbyroll());
        this.mCheckBoxes = new ArrayList();
        for (String str : arrayList) {
            CheckBox checkBox = new CheckBox(this);
            checkBox.setText(str);
            ArrayList arrayList2 = new ArrayList();
            checkBox.setTag(arrayList2);
            checkBox.setOnCheckedChangeListener(this);
            checkBox.setChecked(this.mSelected.contains(str));
            viewGroup.addView(checkBox, layoutParams);
            this.mCheckBoxes.add(checkBox);
            for (MDMComponent mDMComponent2 : this.allComponents) {
                int i3 = mModemType;
                if ((i3 != 2 && i3 != 3) || mDMComponent2.supportMultiSIM()) {
                    if (mDMComponent2.getGroup().equals(str)) {
                        CheckBox checkBox2 = new CheckBox(this);
                        checkBox2.setText(mDMComponent2.getName());
                        checkBox2.setTag(mDMComponent2);
                        checkBox2.setOnCheckedChangeListener(this);
                        checkBox2.setChecked(this.mSelected.contains(mDMComponent2.getName()));
                        viewGroup.addView(checkBox2, layoutParams2);
                        this.mCheckBoxes.add(checkBox2);
                        arrayList2.add(checkBox2);
                    }
                }
            }
        }
    }

    private boolean StartMDLService() {
        Elog.d(TAG, "before StartMDLService");
        boolean zIsRunning = SystemService.isRunning(SERVICE_NAME);
        if (!zIsRunning) {
            Elog.v(TAG, "start md_monitor prop");
            SystemProperties.set("ctl.start", SERVICE_NAME);
            try {
                SystemService.waitForState(SERVICE_NAME, SystemService.State.RUNNING, 3000L);
            } catch (TimeoutException e) {
                e.printStackTrace();
            }
            zIsRunning = SystemService.isRunning(SERVICE_NAME);
            if (!zIsRunning) {
                Elog.e(TAG, "start md_monitor failed time out");
            }
        }
        Elog.d(TAG, "after StartMDLService isRunning:" + zIsRunning);
        return zIsRunning;
    }

    static /* synthetic */ int access$008() {
        int i = k;
        k = i + 1;
        return i;
    }

    public static boolean checkMonitorAlive() {
        if (m_cmdProxy != null || !initDone) {
            return true;
        }
        Elog.d(TAG, "[checkMonitorAlive] dead!");
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean disableTrap() {
        boolean z = true;
        if (checkMonitorAlive()) {
            if (MONITOR_CMD_RESP.MONITOR_CMD_RESP_SUCCESS != getCmdProxy().onDisableTrap(m_sid)) {
                z = false;
                Elog.d(TAG, "Disable Trap fail");
            }
            if (MONITOR_CMD_RESP.MONITOR_CMD_RESP_SUCCESS != getCmdProxy().onCloseSession(m_sid)) {
                z = false;
                Elog.d(TAG, "Close Session fail");
            }
        } else {
            initDone = false;
            Elog.e(TAG, "[deleteTask] m_cmdProxy is null, md_monitor service is stopped!");
            z = false;
        }
        SystemProperties.set("ctl.stop", SERVICE_NAME);
        m_cmdProxy = null;
        initDone = false;
        Elog.d(TAG, "Disable mdm monitor");
        return z;
    }

    public static MonitorCmdProxy getCmdProxy() {
        if (m_cmdProxy == null) {
            try {
                m_cmdProxy = new MonitorCmdProxy(EmApplication.getContext());
                Elog.d(TAG, "m_cmdProxy is null, Create MonitorCmdProxy");
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        return m_cmdProxy;
    }

    public static PlainDataDecoder getDecoder(Context context) {
        if (m_plainDataDecoder == null) {
            try {
                m_plainDataDecoder = PlainDataDecoder.getInstance(null, context);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        return m_plainDataDecoder;
    }

    private boolean isRecordType(long j) {
        if (j >= PlaybackStateCompat.ACTION_PLAY_FROM_URI && j < 8320) {
            return true;
        }
        if (j < 28672 || j >= 29312) {
            return j >= 36864 && j < 37504;
        }
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean loadingMdmService() {
        Elog.d(TAG, "before loadingMdmService");
        if (StartMDLService() && InitMDML(this) && InitDecoder(this)) {
            Elog.d(TAG, "after loadingMdmService");
            return true;
        }
        this.mHandler.sendEmptyMessage(4);
        Elog.e(TAG, "loadingMdmService failed");
        return false;
    }

    private void showMultiInputDlg(CharSequence charSequence, final InputDialogOnClickListener inputDialogOnClickListener) {
        View viewInflate = getLayoutInflater().inflate(R.layout.em_multi_input_layout, (ViewGroup) null);
        Button button = (Button) viewInflate.findViewById(R.id.em_multi_input_ok_btn);
        Button button2 = (Button) viewInflate.findViewById(R.id.em_multi_input_cancel_btn);
        final EditText editText = (EditText) viewInflate.findViewById(R.id.strong_point1_x_edit);
        final EditText editText2 = (EditText) viewInflate.findViewById(R.id.strong_point1_y_edit);
        final EditText editText3 = (EditText) viewInflate.findViewById(R.id.strong_point2_x_edit);
        final EditText editText4 = (EditText) viewInflate.findViewById(R.id.strong_point2_y_edit);
        final EditText editText5 = (EditText) viewInflate.findViewById(R.id.strong_point3_x_edit);
        final EditText editText6 = (EditText) viewInflate.findViewById(R.id.strong_point3_y_edit);
        final EditText editText7 = (EditText) viewInflate.findViewById(R.id.mediumweak_point1_x_edit);
        final EditText editText8 = (EditText) viewInflate.findViewById(R.id.mediumweak_point1_y_edit);
        final EditText editText9 = (EditText) viewInflate.findViewById(R.id.mediumweak_point2_x_edit);
        final EditText editText10 = (EditText) viewInflate.findViewById(R.id.mediumweak_point2_y_edit);
        final EditText editText11 = (EditText) viewInflate.findViewById(R.id.mediumweak_point3_x_edit);
        final EditText editText12 = (EditText) viewInflate.findViewById(R.id.mediumweak_point3_y_edit);
        final EditText editText13 = (EditText) viewInflate.findViewById(R.id.weak_point1_x_edit);
        final EditText editText14 = (EditText) viewInflate.findViewById(R.id.weak_point1_y_edit);
        final EditText editText15 = (EditText) viewInflate.findViewById(R.id.weak_point2_x_edit);
        final EditText editText16 = (EditText) viewInflate.findViewById(R.id.weak_point2_y_edit);
        final EditText editText17 = (EditText) viewInflate.findViewById(R.id.weak_point3_x_edit);
        final EditText editText18 = (EditText) viewInflate.findViewById(R.id.weak_point3_y_edit);
        SharedPreferences sharedPreferences = getSharedPreferences(COMPONENT_RSRPSINR_CONFIG_SHAREPRE, 0);
        int i = sharedPreferences.getInt(getString(R.string.strong_point_1x), -80);
        int i2 = sharedPreferences.getInt(getString(R.string.strong_point_1y), 30);
        int i3 = sharedPreferences.getInt(getString(R.string.strong_point_2x), -80);
        int i4 = sharedPreferences.getInt(getString(R.string.strong_point_2y), 20);
        int i5 = sharedPreferences.getInt(getString(R.string.strong_point_3x), STRONG_POINT3_X_DEFAULT);
        int i6 = sharedPreferences.getInt(getString(R.string.strong_point_3y), 20);
        int i7 = sharedPreferences.getInt(getString(R.string.mediumweak_point_1x), -140);
        int i8 = sharedPreferences.getInt(getString(R.string.mediumweak_point_1y), 10);
        int i9 = sharedPreferences.getInt(getString(R.string.mediumweak_point_2x), -90);
        int i10 = sharedPreferences.getInt(getString(R.string.mediumweak_point_2y), 10);
        int i11 = sharedPreferences.getInt(getString(R.string.mediumweak_point_3x), -90);
        int i12 = sharedPreferences.getInt(getString(R.string.mediumweak_point_3y), -20);
        int i13 = sharedPreferences.getInt(getString(R.string.weak_point_1x), -140);
        int i14 = sharedPreferences.getInt(getString(R.string.weak_point_1y), 5);
        int i15 = sharedPreferences.getInt(getString(R.string.weak_point_2x), -100);
        int i16 = sharedPreferences.getInt(getString(R.string.weak_point_2y), 5);
        int i17 = sharedPreferences.getInt(getString(R.string.weak_point_3x), -100);
        int i18 = sharedPreferences.getInt(getString(R.string.weak_point_3y), -20);
        editText.setText(String.valueOf(i));
        editText2.setText(String.valueOf(i2));
        editText3.setText(String.valueOf(i3));
        editText4.setText(String.valueOf(i4));
        editText5.setText(String.valueOf(i5));
        editText6.setText(String.valueOf(i6));
        editText7.setText(String.valueOf(i7));
        editText8.setText(String.valueOf(i8));
        editText9.setText(String.valueOf(i9));
        editText10.setText(String.valueOf(i10));
        editText11.setText(String.valueOf(i11));
        editText12.setText(String.valueOf(i12));
        editText13.setText(String.valueOf(i13));
        editText14.setText(String.valueOf(i14));
        editText15.setText(String.valueOf(i15));
        editText16.setText(String.valueOf(i16));
        editText17.setText(String.valueOf(i17));
        editText18.setText(String.valueOf(i18));
        final AlertDialog alertDialogCreate = new AlertDialog.Builder(this).setCancelable(false).setTitle(charSequence).setView(viewInflate).create();
        button.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.mdmcomponent.ComponentSelectActivity.5
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                inputDialogOnClickListener.onClick(alertDialogCreate, -1, editText.getText().toString(), editText2.getText().toString(), editText3.getText().toString(), editText4.getText().toString(), editText5.getText().toString(), editText6.getText().toString(), editText7.getText().toString(), editText8.getText().toString(), editText9.getText().toString(), editText10.getText().toString(), editText11.getText().toString(), editText12.getText().toString(), editText13.getText().toString(), editText14.getText().toString(), editText15.getText().toString(), editText16.getText().toString(), editText17.getText().toString(), editText18.getText().toString());
            }
        });
        button2.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.mdmcomponent.ComponentSelectActivity.6
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                inputDialogOnClickListener.onClick(alertDialogCreate, -2, editText.getText().toString(), editText2.getText().toString(), editText3.getText().toString(), editText4.getText().toString(), editText5.getText().toString(), editText6.getText().toString(), editText7.getText().toString(), editText8.getText().toString(), editText9.getText().toString(), editText10.getText().toString(), editText11.getText().toString(), editText12.getText().toString(), editText13.getText().toString(), editText14.getText().toString(), editText15.getText().toString(), editText16.getText().toString(), editText17.getText().toString(), editText18.getText().toString());
            }
        });
        alertDialogCreate.show();
    }

    private void showRsrpSinrConfigDlg(ArrayList<String> arrayList, final boolean z) {
        showMultiInputDlg(getString(R.string.rsrp_sinr_config_input_tip), new InputDialogOnClickListener() { // from class: com.mediatek.engineermode.mdmcomponent.ComponentSelectActivity.7
            @Override // com.mediatek.engineermode.mdmcomponent.ComponentSelectActivity.InputDialogOnClickListener
            public void onClick(DialogInterface dialogInterface, int i, String str, String str2, String str3, String str4, String str5, String str6, String str7, String str8, String str9, String str10, String str11, String str12, String str13, String str14, String str15, String str16, String str17, String str18) {
                if (i != -1) {
                    if (i == -2) {
                        int unused = ComponentSelectActivity.mStrongPoint1X = -80;
                        int unused2 = ComponentSelectActivity.mStrongPoint1Y = 30;
                        int unused3 = ComponentSelectActivity.mStrongPoint2X = -80;
                        int unused4 = ComponentSelectActivity.mStrongPoint2Y = 20;
                        int unused5 = ComponentSelectActivity.mStrongPoint3X = ComponentSelectActivity.STRONG_POINT3_X_DEFAULT;
                        int unused6 = ComponentSelectActivity.mStrongPoint3Y = 20;
                        int unused7 = ComponentSelectActivity.mMediumWeakPoint1X = -140;
                        int unused8 = ComponentSelectActivity.mMediumWeakPoint1Y = 10;
                        int unused9 = ComponentSelectActivity.mMediumWeakPoint2X = -90;
                        int unused10 = ComponentSelectActivity.mMediumWeakPoint2Y = 10;
                        int unused11 = ComponentSelectActivity.mMediumWeakPoint3X = -90;
                        int unused12 = ComponentSelectActivity.mMediumWeakPoint3Y = -20;
                        int unused13 = ComponentSelectActivity.mWeakPoint1X = -140;
                        int unused14 = ComponentSelectActivity.mWeakPoint1Y = 5;
                        int unused15 = ComponentSelectActivity.mWeakPoint2X = -100;
                        int unused16 = ComponentSelectActivity.mWeakPoint2Y = 5;
                        int unused17 = ComponentSelectActivity.mWeakPoint3X = -100;
                        int unused18 = ComponentSelectActivity.mWeakPoint3Y = -20;
                        dialogInterface.dismiss();
                        ComponentSelectActivity.this.writeRsrpSinrSharedPreference(ComponentSelectActivity.mStrongPoint1X, ComponentSelectActivity.mStrongPoint1Y, ComponentSelectActivity.mStrongPoint2X, ComponentSelectActivity.mStrongPoint2Y, ComponentSelectActivity.mStrongPoint3X, ComponentSelectActivity.mStrongPoint3Y, ComponentSelectActivity.mMediumWeakPoint1X, ComponentSelectActivity.mMediumWeakPoint1Y, ComponentSelectActivity.mMediumWeakPoint2X, ComponentSelectActivity.mMediumWeakPoint2Y, ComponentSelectActivity.mMediumWeakPoint3X, ComponentSelectActivity.mMediumWeakPoint3Y, ComponentSelectActivity.mWeakPoint1X, ComponentSelectActivity.mWeakPoint1Y, ComponentSelectActivity.mWeakPoint2X, ComponentSelectActivity.mWeakPoint2Y, ComponentSelectActivity.mWeakPoint3X, ComponentSelectActivity.mWeakPoint3Y);
                        if (z) {
                            ComponentSelectActivity componentSelectActivity = ComponentSelectActivity.this;
                            componentSelectActivity.showSimSelectedDialog(componentSelectActivity.getResources().getStringArray(R.array.sim_display_info));
                            return;
                        } else {
                            ComponentSelectActivity.this.showDialog(1);
                            ComponentSelectActivity.this.new MdmCoreThread(1).start();
                            return;
                        }
                    }
                    return;
                }
                boolean z2 = true;
                try {
                    int unused19 = ComponentSelectActivity.mStrongPoint1X = Integer.parseInt(str);
                    int unused20 = ComponentSelectActivity.mStrongPoint1Y = Integer.parseInt(str2);
                    int unused21 = ComponentSelectActivity.mStrongPoint2X = Integer.parseInt(str3);
                    int unused22 = ComponentSelectActivity.mStrongPoint2Y = Integer.parseInt(str4);
                    int unused23 = ComponentSelectActivity.mStrongPoint3X = Integer.parseInt(str5);
                    int unused24 = ComponentSelectActivity.mStrongPoint3Y = Integer.parseInt(str6);
                    int unused25 = ComponentSelectActivity.mMediumWeakPoint1X = Integer.parseInt(str7);
                    int unused26 = ComponentSelectActivity.mMediumWeakPoint1Y = Integer.parseInt(str8);
                    int unused27 = ComponentSelectActivity.mMediumWeakPoint2X = Integer.parseInt(str9);
                    int unused28 = ComponentSelectActivity.mMediumWeakPoint2Y = Integer.parseInt(str10);
                    int unused29 = ComponentSelectActivity.mMediumWeakPoint3X = Integer.parseInt(str11);
                    int unused30 = ComponentSelectActivity.mMediumWeakPoint3Y = Integer.parseInt(str12);
                    int unused31 = ComponentSelectActivity.mWeakPoint1X = Integer.parseInt(str13);
                    int unused32 = ComponentSelectActivity.mWeakPoint1Y = Integer.parseInt(str14);
                    int unused33 = ComponentSelectActivity.mWeakPoint2X = Integer.parseInt(str15);
                    int unused34 = ComponentSelectActivity.mWeakPoint2Y = Integer.parseInt(str16);
                    int unused35 = ComponentSelectActivity.mWeakPoint3X = Integer.parseInt(str17);
                    int unused36 = ComponentSelectActivity.mWeakPoint3Y = Integer.parseInt(str18);
                } catch (NumberFormatException e) {
                    z2 = false;
                }
                if (!z2) {
                    Toast.makeText(ComponentSelectActivity.this, "Invalid RSRP/SINR", 0).show();
                    return;
                }
                if (ComponentSelectActivity.mStrongPoint1X < -140 || ComponentSelectActivity.mStrongPoint1X > ComponentSelectActivity.STRONG_POINT3_X_DEFAULT || ComponentSelectActivity.mStrongPoint2X < -140 || ComponentSelectActivity.mStrongPoint2X > ComponentSelectActivity.STRONG_POINT3_X_DEFAULT || ComponentSelectActivity.mStrongPoint3X < -140 || ComponentSelectActivity.mStrongPoint3X > ComponentSelectActivity.STRONG_POINT3_X_DEFAULT || ComponentSelectActivity.mMediumWeakPoint1X < -140 || ComponentSelectActivity.mMediumWeakPoint1X > ComponentSelectActivity.STRONG_POINT3_X_DEFAULT || ComponentSelectActivity.mMediumWeakPoint2X < -140 || ComponentSelectActivity.mMediumWeakPoint2X > ComponentSelectActivity.STRONG_POINT3_X_DEFAULT || ComponentSelectActivity.mMediumWeakPoint3X < -140 || ComponentSelectActivity.mMediumWeakPoint3X > ComponentSelectActivity.STRONG_POINT3_X_DEFAULT || ComponentSelectActivity.mWeakPoint1X < -140 || ComponentSelectActivity.mWeakPoint1X > ComponentSelectActivity.STRONG_POINT3_X_DEFAULT || ComponentSelectActivity.mWeakPoint2X < -140 || ComponentSelectActivity.mWeakPoint2X > ComponentSelectActivity.STRONG_POINT3_X_DEFAULT || ComponentSelectActivity.mWeakPoint3X < -140 || ComponentSelectActivity.mWeakPoint3X > ComponentSelectActivity.STRONG_POINT3_X_DEFAULT) {
                    Toast.makeText(ComponentSelectActivity.this, "The Point X must be -140 ~ -30", 0).show();
                    return;
                }
                if (ComponentSelectActivity.mStrongPoint1Y < -20 || ComponentSelectActivity.mStrongPoint1Y > 30 || ComponentSelectActivity.mStrongPoint2Y < -20 || ComponentSelectActivity.mStrongPoint2Y > 30 || ComponentSelectActivity.mStrongPoint3Y < -20 || ComponentSelectActivity.mStrongPoint3Y > 30 || ComponentSelectActivity.mMediumWeakPoint1Y < -20 || ComponentSelectActivity.mMediumWeakPoint1Y > 30 || ComponentSelectActivity.mMediumWeakPoint2Y < -20 || ComponentSelectActivity.mMediumWeakPoint2Y > 30 || ComponentSelectActivity.mMediumWeakPoint3Y < -20 || ComponentSelectActivity.mMediumWeakPoint3Y > 30 || ComponentSelectActivity.mWeakPoint1Y < -20 || ComponentSelectActivity.mWeakPoint1Y > 30 || ComponentSelectActivity.mWeakPoint2Y < -20 || ComponentSelectActivity.mWeakPoint2Y > 30 || ComponentSelectActivity.mWeakPoint3Y < -20 || ComponentSelectActivity.mWeakPoint3Y > 30) {
                    Toast.makeText(ComponentSelectActivity.this, "The Point Y must be -20 ~ 30", 0).show();
                    return;
                }
                dialogInterface.dismiss();
                ComponentSelectActivity.this.writeRsrpSinrSharedPreference(ComponentSelectActivity.mStrongPoint1X, ComponentSelectActivity.mStrongPoint1Y, ComponentSelectActivity.mStrongPoint2X, ComponentSelectActivity.mStrongPoint2Y, ComponentSelectActivity.mStrongPoint3X, ComponentSelectActivity.mStrongPoint3Y, ComponentSelectActivity.mMediumWeakPoint1X, ComponentSelectActivity.mMediumWeakPoint1Y, ComponentSelectActivity.mMediumWeakPoint2X, ComponentSelectActivity.mMediumWeakPoint2Y, ComponentSelectActivity.mMediumWeakPoint3X, ComponentSelectActivity.mMediumWeakPoint3Y, ComponentSelectActivity.mWeakPoint1X, ComponentSelectActivity.mWeakPoint1Y, ComponentSelectActivity.mWeakPoint2X, ComponentSelectActivity.mWeakPoint2Y, ComponentSelectActivity.mWeakPoint3X, ComponentSelectActivity.mWeakPoint3Y);
                if (z) {
                    ComponentSelectActivity componentSelectActivity2 = ComponentSelectActivity.this;
                    componentSelectActivity2.showSimSelectedDialog(componentSelectActivity2.getResources().getStringArray(R.array.sim_display_info));
                } else {
                    ComponentSelectActivity.this.showDialog(1);
                    ComponentSelectActivity.this.new MdmCoreThread(1).start();
                }
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showSimSelectedDialog(String[] strArr) {
        new AlertDialog.Builder(this).setTitle("Sim Card for FT Network Info").setSingleChoiceItems(strArr, this.mSelectSim, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.mdmcomponent.ComponentSelectActivity.4
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                ComponentSelectActivity.this.mSelectSim = i;
                Elog.d(ComponentSelectActivity.TAG, "Do Select Sim Action, Select Sim " + i);
            }
        }).setPositiveButton("OK", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.mdmcomponent.ComponentSelectActivity.3
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                ComponentSelectActivity.this.showDialog(1);
                ComponentSelectActivity.this.new MdmCoreThread(1).start();
            }
        }).show();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean subscribeMdmMsg() {
        boolean z;
        long j;
        int i;
        long j2;
        int i2 = 0;
        if (!checkMonitorAlive()) {
            this.mHandler.sendEmptyMessage(4);
            return false;
        }
        boolean z2 = true;
        this.components = new ArrayList<>();
        mCheckedEmTypes.clear();
        mCheckedIcdEventTypes.clear();
        mCheckedIcdRecordTypes.clear();
        long jLongValue = 0;
        int i3 = 0;
        while (i3 < this.mCheckBoxes.size()) {
            CheckBox checkBox = this.mCheckBoxes.get(i3);
            if (checkBox.isChecked() && (checkBox.getTag() instanceof MDMComponent)) {
                this.mHandler.sendEmptyMessage(3);
                this.components.add(checkBox.getText().toString());
                Iterator<MDMComponent> it = this.allComponents.iterator();
                while (true) {
                    if (it.hasNext()) {
                        MDMComponent next = it.next();
                        if (checkBox.getText().toString().equals(next.getName())) {
                            String[] emComponentName = next.getEmComponentName();
                            int typeIndex = next.getTypeIndex(MDMContentICD.MSG_TYPE_ICD_RECORD);
                            int typeIndex2 = next.getTypeIndex(MDMContentICD.MSG_TYPE_ICD_EVENT);
                            int i4 = (typeIndex == 0 || typeIndex2 == 0) ? -1 : i2;
                            Elog.d(TAG, "Index: " + typeIndex + ", " + typeIndex2 + ", " + i4);
                            z = z2;
                            if (typeIndex >= 0) {
                                int length = typeIndex2 >= 0 ? typeIndex2 : emComponentName.length;
                                Elog.i(TAG, "the type is icd record," + next.getName());
                                int i5 = typeIndex + 1;
                                while (i5 < length) {
                                    long j3 = jLongValue;
                                    int i6 = i3;
                                    long j4 = Long.parseLong(emComponentName[i5], 16);
                                    if (!mCheckedIcdRecordTypes.contains(Long.valueOf(j4))) {
                                        mCheckedIcdRecordTypes.add(Long.valueOf(j4));
                                        Elog.d(TAG, "onSubscribeTrap ID = " + emComponentName[i5] + ", " + isRecordType(j4));
                                    }
                                    i5++;
                                    jLongValue = j3;
                                    i3 = i6;
                                }
                                j2 = jLongValue;
                                i = i3;
                            } else {
                                j2 = jLongValue;
                                i = i3;
                            }
                            if (typeIndex2 >= 0) {
                                Elog.i(TAG, "the type is icd event," + next.getName());
                                for (int i7 = typeIndex2 + 1; i7 < emComponentName.length; i7++) {
                                    long j5 = Long.parseLong(emComponentName[i7], 16);
                                    if (!mCheckedIcdEventTypes.contains(Long.valueOf(j5))) {
                                        mCheckedIcdEventTypes.add(Long.valueOf(j5));
                                        StringBuilder sb = new StringBuilder();
                                        sb.append("onSubscribeTrap ID: ");
                                        sb.append(emComponentName[i7]);
                                        sb.append(", ");
                                        sb.append(!isRecordType(j5));
                                        Elog.d(TAG, sb.toString());
                                    }
                                }
                            }
                            if (i4 >= 0) {
                                int length2 = typeIndex > 0 ? typeIndex : typeIndex2 > 0 ? typeIndex2 : emComponentName.length;
                                jLongValue = j2;
                                for (int i8 = 0; i8 < length2; i8++) {
                                    Integer numMsgInfo_getMsgID = getDecoder(this).msgInfo_getMsgID(emComponentName[i8]);
                                    if (numMsgInfo_getMsgID != null) {
                                        jLongValue = numMsgInfo_getMsgID.longValue();
                                        if (!mCheckedEmTypes.contains(Long.valueOf(jLongValue))) {
                                            mCheckedEmTypes.add(Long.valueOf(jLongValue));
                                            Elog.d(TAG, "onSubscribeTrap msg Name = " + emComponentName[i8]);
                                        }
                                        if (!mCheckedEmTypes.contains(Long.valueOf(jLongValue))) {
                                            mCheckedEmTypes.add(Long.valueOf(jLongValue));
                                            Elog.d(TAG, "onSubscribeTrap msgName = " + emComponentName[i8]);
                                        }
                                    } else {
                                        Elog.e(TAG, "The msgid is not support, msgName = " + emComponentName[i8]);
                                    }
                                }
                                break;
                            }
                        } else {
                            z = z2;
                            j2 = jLongValue;
                            i = i3;
                        }
                        z2 = z;
                        jLongValue = j2;
                        i3 = i;
                        i2 = 0;
                    } else {
                        z = z2;
                        j = jLongValue;
                        i = i3;
                    }
                }
                i3 = i + 1;
                z2 = z;
                i2 = 0;
            } else {
                z = z2;
                j = jLongValue;
                i = i3;
            }
            jLongValue = j;
            i3 = i + 1;
            z2 = z;
            i2 = 0;
        }
        int size = mCheckedEmTypes.size();
        if (size > 0) {
            Long[] lArr = (Long[]) mCheckedEmTypes.toArray(new Long[size]);
            Elog.d(TAG, "onSubscribeTrap em msg id = " + Arrays.toString(lArr));
            getCmdProxy().onSubscribeMultiTrap(m_sid, TRAP_TYPE.TRAP_TYPE_EM, toPrimitives(lArr));
        }
        int size2 = mCheckedIcdRecordTypes.size();
        if (size2 > 0) {
            Long[] lArr2 = (Long[]) mCheckedIcdRecordTypes.toArray(new Long[size2]);
            Elog.d(TAG, "onSubscribeTrap icd record msg id = " + Arrays.toString(lArr2));
            getCmdProxy().onSubscribeMultiTrap(m_sid, TRAP_TYPE.TRAP_TYPE_ICD_RECORD, toPrimitives(lArr2));
        }
        int size3 = mCheckedIcdEventTypes.size();
        if (size3 > 0) {
            Long[] lArr3 = (Long[]) mCheckedIcdEventTypes.toArray(new Long[size3]);
            Elog.d(TAG, "onSubscribeTrap icd event msg id = " + Arrays.toString(lArr3));
            getCmdProxy().onSubscribeMultiTrap(m_sid, TRAP_TYPE.TRAP_TYPE_ICD_EVENT, toPrimitives(lArr3));
        }
        Elog.d(TAG, "onSubscribeTrap done");
        return true;
    }

    public static long[] toPrimitives(Long... lArr) {
        long[] jArr = new long[lArr.length];
        for (int i = 0; i < lArr.length; i++) {
            jArr[i] = lArr[i].longValue();
        }
        return jArr;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void writeRsrpSinrSharedPreference(int i, int i2, int i3, int i4, int i5, int i6, int i7, int i8, int i9, int i10, int i11, int i12, int i13, int i14, int i15, int i16, int i17, int i18) {
        SharedPreferences.Editor editorEdit = getSharedPreferences(COMPONENT_RSRPSINR_CONFIG_SHAREPRE, 0).edit();
        editorEdit.putInt(getString(R.string.strong_point_1x), i);
        editorEdit.putInt(getString(R.string.strong_point_1y), i2);
        editorEdit.putInt(getString(R.string.strong_point_2x), i3);
        editorEdit.putInt(getString(R.string.strong_point_2y), i4);
        editorEdit.putInt(getString(R.string.strong_point_3x), i5);
        editorEdit.putInt(getString(R.string.strong_point_3y), i6);
        editorEdit.putInt(getString(R.string.mediumweak_point_1x), i7);
        editorEdit.putInt(getString(R.string.mediumweak_point_1y), i8);
        editorEdit.putInt(getString(R.string.mediumweak_point_2x), i9);
        editorEdit.putInt(getString(R.string.mediumweak_point_2y), i10);
        editorEdit.putInt(getString(R.string.mediumweak_point_3x), i11);
        editorEdit.putInt(getString(R.string.mediumweak_point_3y), i12);
        editorEdit.putInt(getString(R.string.weak_point_1x), i13);
        editorEdit.putInt(getString(R.string.weak_point_1y), i14);
        editorEdit.putInt(getString(R.string.weak_point_2x), i15);
        editorEdit.putInt(getString(R.string.weak_point_2y), i16);
        editorEdit.putInt(getString(R.string.weak_point_3x), i17);
        editorEdit.putInt(getString(R.string.weak_point_3y), i18);
        editorEdit.commit();
    }

    void OptionsItemSelected() {
        ArrayList<String> arrayList = new ArrayList<>();
        boolean z = false;
        boolean z2 = false;
        for (int i = 0; i < this.mCheckBoxes.size(); i++) {
            CheckBox checkBox = this.mCheckBoxes.get(i);
            if (checkBox.isChecked() && (checkBox.getTag() instanceof MDMComponent)) {
                arrayList.add(checkBox.getText().toString());
                if (checkBox.getText().toString().equals("CC0/CC1 RSRP and SINR")) {
                    z = true;
                }
                if (checkBox.getText().toString().equals("FT Network Info")) {
                    z2 = true;
                }
            }
        }
        if (z) {
            showRsrpSinrConfigDlg(arrayList, z2);
            return;
        }
        if (z2) {
            showSimSelectedDialog(getResources().getStringArray(R.array.sim_display_info));
        } else {
            if (arrayList.size() <= 0) {
                Toast.makeText(this, getString(R.string.networkinfo_msg), 1).show();
                return;
            }
            Elog.d(TAG, "check infomation id");
            showDialog(1);
            new MdmCoreThread(1).start();
        }
    }

    @Override // android.widget.CompoundButton.OnCheckedChangeListener
    public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
        if (compoundButton.getTag() != null && (compoundButton.getTag() instanceof ArrayList)) {
            Iterator it = ((ArrayList) compoundButton.getTag()).iterator();
            while (it.hasNext()) {
                ((CheckBox) it.next()).setChecked(z);
            }
        }
        if (z) {
            this.mSelected.add(compoundButton.getText().toString());
        } else {
            this.mSelected.remove(compoundButton.getText().toString());
        }
        this.mPref.edit().putStringSet(KEY_SELECTED, this.mSelected).commit();
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        InitUI();
        Elog.d(TAG, "Init ComponentSelectActivity UI done");
        showDialog(0);
        new MdmCoreThread(0).start();
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i, Bundle bundle) {
        if (i == 0) {
            Elog.d(TAG, "Wait MDML init");
            ProgressDialog progressDialog = new ProgressDialog(this);
            this.mProgressDialog = progressDialog;
            progressDialog.setTitle("Waiting");
            this.mProgressDialog.setMessage("Wait MDML init");
            this.mProgressDialog.setCancelable(false);
            this.mProgressDialog.setIndeterminate(true);
            return this.mProgressDialog;
        }
        if (i == 1) {
            Elog.d(TAG, "Before Wait subscribe message..");
            ProgressDialog progressDialog2 = new ProgressDialog(this);
            this.mProgressDialog1 = progressDialog2;
            progressDialog2.setTitle("Waiting");
            this.mProgressDialog1.setMessage("Wait subscribe message..");
            this.mProgressDialog1.setCancelable(false);
            this.mProgressDialog1.setIndeterminate(true);
            return this.mProgressDialog1;
        }
        if (i != 2) {
            return super.onCreateDialog(i);
        }
        Elog.d(TAG, "MDM error, need to finish self!");
        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        builder.setTitle("ERROR Warning");
        builder.setCancelable(false);
        builder.setMessage("MDM occurs error, please try re-enter");
        builder.setPositiveButton("OK", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.mdmcomponent.ComponentSelectActivity.2
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i2) {
                dialogInterface.dismiss();
                ComponentSelectActivity.this.finish();
            }
        });
        return builder.create();
    }

    @Override // android.app.Activity
    public boolean onCreateOptionsMenu(Menu menu) {
        menu.add(0, 1, 0, getString(R.string.networkinfo_check));
        menu.add(0, 2, 0, "Select All");
        menu.add(0, 3, 0, "Select None");
        return true;
    }

    @Override // android.app.Activity
    public void onDestroy() {
        super.onDestroy();
        new MdmCoreThread(2).start();
    }

    @Override // android.app.Activity
    public boolean onOptionsItemSelected(MenuItem menuItem) {
        int itemId = menuItem.getItemId();
        if (itemId == 1) {
            OptionsItemSelected();
        } else if (itemId == 2) {
            Iterator<CheckBox> it = this.mCheckBoxes.iterator();
            while (it.hasNext()) {
                it.next().setChecked(true);
            }
        } else if (itemId == 3) {
            Iterator<CheckBox> it2 = this.mCheckBoxes.iterator();
            while (it2.hasNext()) {
                it2.next().setChecked(false);
            }
        }
        return super.onOptionsItemSelected(menuItem);
    }

    @Override // android.app.Activity
    protected void onResume() {
        Elog.d(TAG, "onResume initDone: " + initDone);
        if (!checkMonitorAlive()) {
            Elog.d(TAG, "m_cmdProxy is null, return...");
            this.mHandler.sendEmptyMessage(4);
        }
        super.onResume();
    }
}
