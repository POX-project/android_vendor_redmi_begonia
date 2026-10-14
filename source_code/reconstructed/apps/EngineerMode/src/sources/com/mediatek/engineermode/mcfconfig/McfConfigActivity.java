package com.mediatek.engineermode.mcfconfig;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.ProgressDialog;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.SharedPreferences;
import android.net.Uri;
import android.os.AsyncResult;
import android.os.AsyncTask;
import android.os.Bundle;
import android.os.CountDownTimer;
import android.os.Handler;
import android.os.Message;
import android.os.RemoteException;
import android.telephony.TelephonyManager;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.R;
import com.mediatek.engineermode.aospradio.EmRadioHidlAosp;
import java.io.Serializable;
import java.text.SimpleDateFormat;
import java.util.Arrays;
import java.util.Date;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Set;
import vendor.mediatek.hardware.engineermode.V1_0.IEmCallback;

/* JADX INFO: loaded from: classes.dex */
public class McfConfigActivity extends Activity implements View.OnClickListener {
    private Button addGenOpOtaBtn;
    private Button addOpOtaBtn;
    private Button addOtaBtn;
    private Button applyGenOpOtaBtn;
    private Button applyOpOtaBtn;
    private Button applyOtaBtn;
    private Button certBtn;
    private LinearLayout certificationView;
    private Button certotaQueryBtn;
    private Button clearGenOpOtaBtn;
    private Button clearOpOtaBtn;
    private Button clearOtaBtn;
    private String curGenOpOtaFile;
    private String curOpOtaFile;
    private String curOtaFile;
    long dumpBegain;
    long dumpEnd;
    private Button dumpOta;
    private TextView genOpOtaFile;
    private RadioGroup genOpotaPathRgroup;
    private CheckBox genOpotaResetMdEnable;
    private LinearLayout generalView;
    private Button iniRefreshBtn;
    private int iniStatus;
    private RadioGroup iniStatusGroup;
    private String inputOp;
    RadioButton isGenopotaOtaPathBt;
    RadioButton isGenopotaRuntimePathBt;
    RadioButton isOpotaOtaPathBt;
    RadioButton isOpotaRuntimePathBt;
    RadioButton isOtaOtaPathBt;
    RadioButton isOtaRuntimePathBt;
    private ProgressDialog mProgressDialog;
    private Spinner mSpinner;
    private TelephonyManager mTelephonyManager;
    private McfCertification mcfCertObj;
    private SharedPreferences mcfConfigSh;
    private int opId;
    private TextView opOtaFile;
    private RadioGroup opOtaPathRgroup;
    private Button opOtaQueryBtn;
    private CheckBox opotaResetMdEnable;
    private LinearLayout opotaView;
    private TextView otaFile;
    private RadioGroup otaPathRgroup;
    private Button otaQueryBtn;
    private RadioGroup pathRgroup;
    private int phoneid;
    private int readySim;
    private EditText sertInputEt;
    int simType;
    private String targetGenOpOtaFile;
    private String targetOpOtaFile;
    private String targetOtaFile;
    CountDownTimer timer;
    private int viewId;
    private final String TAG = "McfConfig";
    private final int SIM_COUNT = 2;
    private final int MSG_SET_OTA_FILEPATH = 0;
    private final int MSG_CLEAR_OTA_FILEPATH = 1;
    private final int MSG_SET_OPOTA_FILEPATH = 2;
    private final int MSG_CLEAR_OPOTA_FILEPATH = 3;
    private final int MSG_SET_GEN_OPOTA_FILEPATH = 4;
    private final int MSG_CLEAR_GEN_OPOTA_FILEPATH = 5;
    private final int MSG_DUMP_OTA_FILE = 6;
    private final int MSG_INI_REFRESH = 7;
    private final int MSG_OTA_QUERY = 8;
    private final int MSG_OPOTA_QUERY = 9;
    private final int MSG_GEN_OPOTA_QUERY = 10;
    private final int MSG_MCF_RADIO_STATE_CHANGED = 100;
    private final int MSG_MODEM_REBOOT_COMPLETE = 101;
    private final int MSG_MCF_MODEM_STATUS_CHANGED = 102;
    protected final int MSG_GET_MCF_STATUS_URC = 11;
    private final int MSG_SET_USER_CERTIFICATIN = 12;
    private final int MSG_SET_OM_CERTIFICATIN = 13;
    private final int MSG_SET_CMCC_CERTIFICATIN = 14;
    private final int MSG_SET_CT_CERTIFICATIN = 15;
    private final int MSG_SET_CU_CERTIFICATIN = 16;
    private final int MSG_SET_CERT_CERTIFICATIN = 17;
    private final int SHOW_OPOTA_VIEW = 0;
    private final int SHOW_GENERAL_VIEW = 1;
    private final int SHOW_CERTIFICATION_VIEW = 2;
    private final String MCF_CONFIG_SHAREPRE = "mcf_config_settings";
    private final String OTA_PATH = "/vendor/etc/mdota/";
    private final String RUNTIME_PATH = "/mnt/vendor/nvcfg/mdota/";
    private final String SET_OTA_COMMAND = "AT+EMCFC=6,0,";
    private final String SET_OPOTA_COMMAND = "AT+EMCFC=6,1,";
    private final String CMD_OTA_RETURN = "+EMCFC:";
    private final String SET_GEN_OPOTA_COMMAND = "AT+EMCFC=6,2,";
    private final String SET_CERT_CMD = "AT+EMCFC=6";
    private final String DUMP_OTA_COMMAND = "AT+EMCFC=5";
    private final String INI_REFRESH_COMMAND = "AT+EMCFC=7";
    private final String OTA_QUERY_COMMAND = "AT+EMCFC=4,0";
    private final String OPOTA_QUERY_COMMAND = "AT+EMCFC=4,1";
    private final String GEN_OPOTA_QUERY_COMMAND = "AT+EMCFC=4,2";
    private final int OTA_WAIT_TIME = 180;
    private final int INI_REFRESH_WAIT_TIME = 300;
    private final int REBOOT_MODEM_WAIT_TIME = 180;
    private final String OTA_OTA_FILEPATH_KEY = "ota_file_otapath";
    private final String OTA_RUNTIME_FILEPATH_KEY = "ota_file_runtimepath";
    private final String IS_OTAPATH_KEY = "is_otapath";
    private final String CERTIFICATION_OPID_KEY = "op_id";
    private final String CERTIFICATION_OPID_INPUT_KEY = "input_op_id";
    private final String OTA_IS_OTAPATH_KEY = "ota_is_otapath";
    private final String GENERAL_OPOTA_OTA_FILEPATH_KEY = "general_opota_otapath";
    private final String GENERAL_OPOTA_RUNTIME_FILEPATH_KEY = "general_opota_runtimepath";
    private final String GENERAL_OPOTA_IS_OTAPATH_KEY = "general_opota_is_otapath";
    private final String SIM2_OPOTA_OTA_FILEPATH_KEY = "sim2_opota_file_otapath";
    private final String SIM2_OPOTA_RUNTIME_FILEPATH_KEY = "sim2_opota_file_runtimepath";
    private final String SIM2_OPOTA_IS_OTAPATH_KEY = "sim2_opota_is_otapath";
    private final String SIM1_OPOTA_OTA_FILEPATH_KEY = "sim1_opota_file_otapath";
    private final String SIM1_OPOTA_RUNTIME_FILEPATH_KEY = "sim1_opota_file_runtimepath";
    private final String SIM1_OPOTA_IS_OTAPATH_KEY = "sim1_opota_is_otapath";
    private final int STATE_REBOOT_MODEM = 2;
    private final int STATE_DUMP_OTA = 1;
    private final int STATE_INI_REFRESH = 3;
    private Set taskSet = new HashSet();
    private boolean isOtaPathValid = false;
    private boolean isOpOtaPathValid = false;
    private boolean isGenOpOtaPathValid = false;
    private boolean mIsModemEnabled = true;
    private boolean resetMd = true;
    private boolean isOtaPath = true;
    private boolean isOpotaOtaPath = true;
    private boolean isGenopotaOtaPath = true;
    private boolean isOtaOtaPath = true;
    private final HashMap<String, String> OtaFilePathType = new HashMap<String, String>() { // from class: com.mediatek.engineermode.mcfconfig.McfConfigActivity.1
        {
            put("0", "Android OTA path");
            put("1", "Runtime path");
        }
    };
    private final HashMap<Integer, String> mcfOtaDumpResult = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mcfconfig.McfConfigActivity.2
        {
            put(0, "SUCCESS");
            put(1, "MCF_NOT_SUPPORT");
            put(2, "VERSION_NOT_MATCH");
            put(3, "WRONG_BUFFER_SIZE");
            put(4, "INVALID_PARAMETER");
            put(5, "READ_NVRAM_FAIL");
            put(6, "WRITE_NVRAM_FAIL");
            put(7, "READ_OTA_FILE_FAIL");
            put(8, "INVALID_SBP_TAG");
            put(9, "INVALID_FILE");
            put(10, "INVALID_ATTR");
            put(11, "TAKE_READ_LOCK_FAIL");
            put(12, "ALLOCATE_BUFFER_FAIL");
            put(13, "ENCRYPTION_FAIL");
            put(14, "DECRYPTION_FAIL");
            put(15, "CHECKSUM_ERROR");
            put(16, "WRITE_DISK_FAIL");
        }
    };
    private final HashMap<Integer, String> mcfApplyDsbpResult = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mcfconfig.McfConfigActivity.3
        {
            put(0, "SUCCESS");
            put(1, "MCF_DSBP_ONGOING");
            put(2, "SIM_SWITCH_ONGOING");
            put(3, "ONGOING_CALL_OR_ECBM");
            put(4, "NO_SIM");
            put(5, "NOT_MODE2");
            put(6, "SIM_ERROR");
            put(7, "UNKNOWN");
        }
    };
    private final HashMap<Integer, String> mcfApplyOtaResult = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mcfconfig.McfConfigActivity.4
        {
            put(0, "SUCCESS");
            put(1, "MCF_NOT_SUPPORT");
            put(2, "VERSION_NOT_MATCH");
            put(3, "WRONG_BUFFER_SIZE");
            put(4, "INVALID_PARAMETER");
            put(5, "READ_NVRAM_FAIL");
            put(6, "WRITE_NVRAM_FAIL");
            put(7, "READ_OTA_FILE_FAIL");
            put(8, "INVALID_SBP_TAG");
            put(9, "INVALID_FILE");
            put(10, "INVALID_ATTR");
            put(11, "TAKE_READ_LOCK_FAIL");
            put(12, "ALLOCATE_BUFFER_FAIL");
            put(13, "ENCRYPTION_FAIL");
            put(14, "DECRYPTION_FAIL");
            put(15, "CHECKSUM_ERROR");
            put(16, "DISK_FULL");
            put(17, "DUMP_SOME_ERROR");
        }
    };
    private final Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.mcfconfig.McfConfigActivity.5
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            Object obj;
            boolean z;
            String str;
            boolean z2;
            String str2;
            boolean z3;
            boolean z4;
            Object obj2;
            AsyncResult asyncResult;
            String string;
            String str3;
            String string2;
            int i = message.what;
            if (i != 101) {
                if (i != 102) {
                    switch (i) {
                        case 0:
                        case 2:
                        case 4:
                            String string3 = null;
                            String str4 = message.what == 0 ? "OTA" : message.what == 2 ? "OPOTA" : "General OPOTA";
                            AsyncResult asyncResult2 = (AsyncResult) message.obj;
                            if (asyncResult2.exception != null) {
                                z = false;
                                str = asyncResult2.exception.toString().split(":")[1] != null ? "AT Command Failed: " + asyncResult2.exception.toString().split(":")[1] : "";
                                Elog.e("McfConfig", "Apply " + str4 + " returned exception:" + asyncResult2.exception);
                            } else if (asyncResult2.result == null || !(asyncResult2.result instanceof String[]) || ((String[]) asyncResult2.result).length <= 0) {
                                z = false;
                                str = null;
                            } else {
                                Elog.d("McfConfig", "Apply Result: " + Arrays.toString((String[]) asyncResult2.result));
                                String[] strArrSplit = ((String[]) asyncResult2.result)[0].split(",");
                                if (strArrSplit == null || strArrSplit[1] == null || strArrSplit[2] == null) {
                                    z2 = false;
                                } else {
                                    int iIntValue = Integer.valueOf(strArrSplit[1].trim()).intValue();
                                    int iIntValue2 = Integer.valueOf(strArrSplit[2].trim()).intValue();
                                    if (iIntValue2 == 0 && iIntValue == 0) {
                                        z2 = true;
                                    } else {
                                        StringBuilder sb = new StringBuilder();
                                        sb.append("Mcf Ota: ");
                                        McfConfigActivity mcfConfigActivity = McfConfigActivity.this;
                                        sb.append(mcfConfigActivity.getStringValueFromMap(iIntValue, mcfConfigActivity.mcfApplyOtaResult));
                                        sb.append("\nDsbp: ");
                                        McfConfigActivity mcfConfigActivity2 = McfConfigActivity.this;
                                        sb.append(mcfConfigActivity2.getStringValueFromMap(iIntValue2, mcfConfigActivity2.mcfApplyDsbpResult));
                                        string3 = sb.toString();
                                        z2 = false;
                                    }
                                }
                                z = z2;
                                str = string3;
                            }
                            if (z) {
                                saveOTAPathTask saveotapathtask = McfConfigActivity.this.new saveOTAPathTask();
                                Integer[] numArr = new Integer[1];
                                numArr[0] = Integer.valueOf(message.what == 0 ? 0 : message.what == 2 ? 1 : 2);
                                saveotapathtask.execute(numArr);
                                EmUtils.showToast("Apply  " + str4 + " Succeed!");
                                McfConfigActivity.this.rebootModem(message.what == 0 ? true : McfConfigActivity.this.resetMd);
                            } else {
                                StringBuilder sb2 = new StringBuilder();
                                sb2.append("Apply ");
                                sb2.append(str4);
                                sb2.append(" Failed!\n");
                                sb2.append(str == null ? "" : "\n" + str);
                                String string4 = sb2.toString();
                                Elog.e("McfConfig", string4);
                                McfConfigActivity.this.showDialog("Apply " + str4 + " ", string4);
                            }
                            break;
                        case 1:
                        case 3:
                        case 5:
                            String string5 = null;
                            AsyncResult asyncResult3 = (AsyncResult) message.obj;
                            String str5 = message.what == 1 ? "OTA" : message.what == 3 ? "OPOTA" : "General OPOTA";
                            boolean z5 = false;
                            if (asyncResult3.exception != null) {
                                str2 = asyncResult3.exception.toString().split(":")[1] != null ? "AT Command Failed: " + asyncResult3.exception.toString().split(":")[1] : "";
                                Elog.e("McfConfig", "Clear " + str5 + " returned exception:" + asyncResult3.exception);
                            } else if (asyncResult3.result == null || !(asyncResult3.result instanceof String[]) || ((String[]) asyncResult3.result).length <= 0) {
                                str2 = null;
                            } else {
                                Elog.d("McfConfig", "Clear Result: " + Arrays.toString((String[]) asyncResult3.result));
                                String[] strArrSplit2 = ((String[]) asyncResult3.result)[0].split(",");
                                if (strArrSplit2 != null && strArrSplit2[1] != null && strArrSplit2[2] != null) {
                                    int iIntValue3 = Integer.valueOf(strArrSplit2[1].trim()).intValue();
                                    int iIntValue4 = Integer.valueOf(strArrSplit2[2].trim()).intValue();
                                    if (iIntValue4 == 0 && iIntValue3 == 0) {
                                        z5 = true;
                                    } else {
                                        StringBuilder sb3 = new StringBuilder();
                                        sb3.append("Mcf Ota: ");
                                        McfConfigActivity mcfConfigActivity3 = McfConfigActivity.this;
                                        sb3.append(mcfConfigActivity3.getStringValueFromMap(iIntValue3, mcfConfigActivity3.mcfApplyOtaResult));
                                        sb3.append("\nDsbp: ");
                                        McfConfigActivity mcfConfigActivity4 = McfConfigActivity.this;
                                        sb3.append(mcfConfigActivity4.getStringValueFromMap(iIntValue4, mcfConfigActivity4.mcfApplyDsbpResult));
                                        string5 = sb3.toString();
                                    }
                                }
                                str2 = string5;
                            }
                            if (z5) {
                                if (message.what == 1) {
                                    McfConfigActivity.this.otaFile.setText("");
                                    McfConfigActivity.this.targetOtaFile = "";
                                } else if (message.what == 3) {
                                    McfConfigActivity.this.opOtaFile.setText("");
                                    McfConfigActivity.this.targetOpOtaFile = "";
                                } else {
                                    McfConfigActivity.this.genOpOtaFile.setText("");
                                    McfConfigActivity.this.targetGenOpOtaFile = "";
                                }
                                saveOTAPathTask saveotapathtask2 = McfConfigActivity.this.new saveOTAPathTask();
                                Integer[] numArr2 = new Integer[1];
                                numArr2[0] = Integer.valueOf(message.what == 1 ? 0 : message.what == 3 ? 1 : 2);
                                saveotapathtask2.execute(numArr2);
                                EmUtils.showToast("Clear " + str5 + " Succeed!");
                                McfConfigActivity.this.rebootModem(message.what == 1 ? true : McfConfigActivity.this.resetMd);
                            } else {
                                StringBuilder sb4 = new StringBuilder();
                                sb4.append("Clear ");
                                sb4.append(str5);
                                sb4.append(" Failed!\n");
                                sb4.append(str2 != null ? "\n" + str2 : "");
                                String string6 = sb4.toString();
                                Elog.e("McfConfig", string6);
                                McfConfigActivity.this.showDialog("Clear " + str5 + " ", string6);
                            }
                            break;
                        case 6:
                            obj = null;
                            AsyncResult asyncResult4 = (AsyncResult) message.obj;
                            if (asyncResult4.exception == null) {
                                z3 = true;
                                if (asyncResult4.result != null && (asyncResult4.result instanceof String[])) {
                                    Elog.d("McfConfig", "ATCommand with Dump OTA returned: " + Arrays.toString((String[]) asyncResult4.result));
                                }
                            } else {
                                z3 = false;
                                Elog.e("McfConfig", "ATCommand with Dump OTA returned exception:" + asyncResult4.exception);
                            }
                            if (!z3) {
                                McfConfigActivity.this.showDialog("Dump OTA", "Dump OTA failed!");
                                Elog.e("McfConfig", "ATCommand with Dump OTA failed!");
                            } else {
                                EmUtils.showToast("ATCommand with Dump OTA success!");
                                McfConfigActivity.this.startTimer(1, 180);
                                McfConfigActivity.this.showProgressDialog("Waitting", "Dump OTA is ongoing......");
                                McfConfigActivity.this.taskSet.add(1);
                            }
                            break;
                        case 7:
                            obj = null;
                            AsyncResult asyncResult5 = (AsyncResult) message.obj;
                            if (asyncResult5.exception == null) {
                                z4 = true;
                                if (asyncResult5.result != null && (asyncResult5.result instanceof String[])) {
                                    Elog.d("McfConfig", "AT with ini refresh returned:" + Arrays.toString((String[]) asyncResult5.result));
                                }
                            } else {
                                z4 = false;
                                Elog.e("McfConfig", "AT with ini refresh returned exception:" + asyncResult5.exception);
                            }
                            if (!z4) {
                                McfConfigActivity.this.showDialog("INI Refresh", "INI Refresh failed!");
                                Elog.e("McfConfig", "ATCommand with INI Refresh failed!");
                            } else {
                                EmUtils.showToast("ATCommand with ini refresh success!");
                                McfConfigActivity.this.startTimer(3, 300);
                                McfConfigActivity.this.taskSet.add(3);
                            }
                            break;
                        case 8:
                        case 9:
                        case 10:
                            obj2 = null;
                            asyncResult = (AsyncResult) message.obj;
                            boolean z6 = false;
                            if (asyncResult.exception != null) {
                                z6 = false;
                                Elog.e("McfConfig", "AT with ota query returned exception:" + asyncResult.exception);
                            } else if (asyncResult.result != null) {
                                Elog.d("McfConfig", "Query OTA (" + message.what + " ): " + Arrays.toString((String[]) asyncResult.result));
                                String[] strArrSplit3 = ((String[]) asyncResult.result)[0].substring("+EMCFC:".length()).replaceAll(" ", "").split(",");
                                if (strArrSplit3 != null) {
                                    z6 = true;
                                    String str6 = strArrSplit3.length >= 2 ? strArrSplit3[1] : "";
                                    String str7 = (strArrSplit3.length < 3 || !McfConfigActivity.this.OtaFilePathType.containsKey(strArrSplit3[2])) ? "" : (String) McfConfigActivity.this.OtaFilePathType.get(strArrSplit3[2]);
                                    String str8 = strArrSplit3.length >= 4 ? strArrSplit3[3] : "";
                                    String str9 = str8.equals("") ? "No File" : str7 + ":" + str8;
                                    if (str6.equals("0")) {
                                        McfConfigActivity.this.curOtaFile = str9;
                                    } else if (str6.equals("1")) {
                                        McfConfigActivity.this.curOpOtaFile = str9;
                                    } else if (str6.equals("2")) {
                                        McfConfigActivity.this.curGenOpOtaFile = str9;
                                    }
                                }
                            }
                            if (!z6) {
                                McfConfigActivity mcfConfigActivity5 = McfConfigActivity.this;
                                StringBuilder sb5 = new StringBuilder();
                                sb5.append("Query ");
                                sb5.append(message.what != 8 ? message.what == 10 ? "General OTA by OP" : "OTA by OP" : "OTA");
                                sb5.append(" failed!");
                                mcfConfigActivity5.showDialog("OTA Query", sb5.toString());
                                Elog.e("McfConfig", "ATCommand with " + message.what + " query failed!");
                            } else if (message.what == 8) {
                                McfConfigActivity.this.sendATCommand("AT+EMCFC=4,2", 10);
                            } else {
                                EmUtils.showToast("ATCommand with ota query success!");
                                Elog.d("McfConfig", "OTA: " + McfConfigActivity.this.curOtaFile + ", OPOTA: " + McfConfigActivity.this.curOpOtaFile + ", General OPOTA: " + McfConfigActivity.this.curGenOpOtaFile);
                                McfConfigActivity.this.showDialog("OTA Query ", message.what == 10 ? "OTA: \n" + McfConfigActivity.this.curOtaFile + "\nGeneral OTA by OP:\n" + McfConfigActivity.this.curGenOpOtaFile : "OTA by OP: " + McfConfigActivity.this.curOpOtaFile);
                            }
                            break;
                        case 11:
                            obj2 = null;
                            asyncResult = (AsyncResult) message.obj;
                            String strByteArrayToStr = McfConfigActivity.this.byteArrayToStr((byte[]) asyncResult.result);
                            Elog.d("McfConfig", "Readback from urc = " + strByteArrayToStr);
                            if (strByteArrayToStr.startsWith("+EMCFRPT") && strByteArrayToStr.split(":").length >= 2) {
                                if (McfConfigActivity.this.timer != null) {
                                    McfConfigActivity.this.timer.cancel();
                                    McfConfigActivity.this.timer = null;
                                }
                                if (McfConfigActivity.this.mProgressDialog != null) {
                                    McfConfigActivity.this.mProgressDialog.dismiss();
                                    McfConfigActivity.this.mProgressDialog = null;
                                }
                                String[] strArrSplit4 = strByteArrayToStr.split(":")[1].replaceAll(" ", "").split(",");
                                int iIntValue5 = Integer.valueOf(strArrSplit4[0].trim()).intValue();
                                int iIntValue6 = Integer.valueOf(strArrSplit4[1].trim()).intValue();
                                if (iIntValue5 == 1) {
                                    McfConfigActivity.this.dumpEnd = System.currentTimeMillis();
                                    Elog.d("McfConfig", "Dump OTA file end :" + new SimpleDateFormat("HH:mm:ss").format(new Date(McfConfigActivity.this.dumpBegain)));
                                    McfConfigActivity mcfConfigActivity6 = McfConfigActivity.this;
                                    StringBuilder sb6 = new StringBuilder();
                                    if (iIntValue6 == 0) {
                                        string = "Success!";
                                    } else {
                                        StringBuilder sb7 = new StringBuilder();
                                        sb7.append("Failed with Error Code: ");
                                        sb7.append(McfConfigActivity.this.mcfOtaDumpResult.containsKey(Integer.valueOf(iIntValue6)) ? (Serializable) McfConfigActivity.this.mcfOtaDumpResult.get(Integer.valueOf(iIntValue6)) : Integer.valueOf(iIntValue6));
                                        string = sb7.toString();
                                    }
                                    sb6.append(string);
                                    sb6.append("\nDump costs ");
                                    sb6.append(String.format("%.2f", Float.valueOf((McfConfigActivity.this.dumpEnd - McfConfigActivity.this.dumpBegain) / 1000.0f)));
                                    sb6.append(" s");
                                    mcfConfigActivity6.showDialog("Dump Result", sb6.toString());
                                    McfConfigActivity.this.taskSet.remove(1);
                                } else if (iIntValue5 == 3) {
                                    Elog.d("McfConfig", "Ini Refresh end with result:" + iIntValue6);
                                    McfConfigActivity mcfConfigActivity7 = McfConfigActivity.this;
                                    if (iIntValue6 == 0) {
                                        str3 = "Success!";
                                    } else if (iIntValue6 == 1) {
                                        str3 = "Reset Modem";
                                    } else if (iIntValue6 == 2) {
                                        str3 = "AP retry";
                                    } else {
                                        str3 = "Failed with error_code: " + iIntValue6;
                                    }
                                    mcfConfigActivity7.showDialog("Ini Refresh", str3);
                                    McfConfigActivity.this.taskSet.remove(3);
                                }
                            }
                            break;
                        case 12:
                        case 13:
                        case 14:
                        case 15:
                        case 16:
                        case 17:
                        case 18:
                        case 19:
                        case 20:
                        case 21:
                        case 22:
                        case 23:
                            AsyncResult asyncResult6 = (AsyncResult) message.obj;
                            int i2 = (message.what - 12) / 6;
                            boolean z7 = false;
                            if (asyncResult6.exception != null) {
                                string2 = asyncResult6.exception.toString().split(":")[1] != null ? "AT Command Failed: " + asyncResult6.exception.toString().split(":")[1] : "";
                                Elog.e("McfConfig", "Certification with Sim" + i2 + " returned exception:" + asyncResult6.exception);
                            } else if (asyncResult6.result == null || !(asyncResult6.result instanceof String[]) || ((String[]) asyncResult6.result).length <= 0) {
                                string2 = null;
                            } else {
                                Elog.d("McfConfig", "Certification Result: " + Arrays.toString((String[]) asyncResult6.result));
                                String[] strArrSplit5 = ((String[]) asyncResult6.result)[0].split(",");
                                if (strArrSplit5 == null || strArrSplit5[1] == null || strArrSplit5[2] == null) {
                                    string2 = null;
                                } else {
                                    int iIntValue7 = Integer.valueOf(strArrSplit5[1].trim()).intValue();
                                    int iIntValue8 = Integer.valueOf(strArrSplit5[2].trim()).intValue();
                                    if (iIntValue8 == 0 && iIntValue7 == 0) {
                                        z7 = true;
                                        string2 = null;
                                    } else {
                                        StringBuilder sb8 = new StringBuilder();
                                        sb8.append("Certification Ota: ");
                                        McfConfigActivity mcfConfigActivity8 = McfConfigActivity.this;
                                        z7 = false;
                                        sb8.append(mcfConfigActivity8.getStringValueFromMap(iIntValue7, mcfConfigActivity8.mcfApplyOtaResult));
                                        sb8.append("\nDsbp: ");
                                        McfConfigActivity mcfConfigActivity9 = McfConfigActivity.this;
                                        sb8.append(mcfConfigActivity9.getStringValueFromMap(iIntValue8, mcfConfigActivity9.mcfApplyDsbpResult));
                                        string2 = sb8.toString();
                                    }
                                }
                            }
                            if (z7) {
                                Elog.d("McfConfig", "Certification with Sim" + i2 + " Cmd " + McfConfigActivity.this.mcfCertObj.getCurrentCmd(i2) + " succeed!");
                                McfConfigActivity.this.mcfCertObj.setCmdResult(i2, McfConfigActivity.this.mcfCertObj.getCurrentCmd(i2), true);
                                if (!McfConfigActivity.this.isSimReady(i2) && !McfConfigActivity.this.isSimReady((i2 + 1) % 2)) {
                                    McfConfigActivity.this.showDialog("Certification", "Certification Succeed!");
                                    McfConfigActivity.this.new saveOTAPathTask().execute(Integer.valueOf(message.what));
                                    McfConfigActivity.this.rebootModem(true);
                                } else if (McfConfigActivity.this.mcfCertObj.getCurrentCmd(i2) < 3) {
                                    if (McfConfigActivity.this.mcfCertObj.getCurrentCmd(i2) == 1) {
                                        McfConfigActivity.this.doCertificationAction((i2 + 1) % 2);
                                    }
                                    McfConfigActivity.this.doCertificationAction(i2);
                                } else if (McfConfigActivity.this.mcfCertObj.getCmdResult((i2 + 1) % 2, McfConfigActivity.this.mcfCertObj.getCurrentCmd(i2)) && McfConfigActivity.this.mcfCertObj.getCmdResult(i2, McfConfigActivity.this.mcfCertObj.getCurrentCmd(i2))) {
                                    McfConfigActivity.this.showDialog("Certification", "Certification Succeed!");
                                    McfConfigActivity.this.new saveOTAPathTask().execute(Integer.valueOf(message.what));
                                    McfConfigActivity.this.rebootModem(true);
                                } else {
                                    Elog.d("McfConfig", "Certification with Sim" + i2 + " succeed!");
                                }
                            } else {
                                McfConfigActivity.this.mcfCertObj.setCmdResult(i2, McfConfigActivity.this.mcfCertObj.getCurrentCmd(i2), false);
                                StringBuilder sb9 = new StringBuilder();
                                sb9.append("Certification with Sim");
                                sb9.append(i2);
                                sb9.append(" Failed!\n");
                                sb9.append(string2 != null ? "\n" + string2 : "");
                                String string7 = sb9.toString();
                                Elog.e("McfConfig", string7);
                                McfConfigActivity.this.showDialog("Certification with Sim" + i2 + " ", string7);
                            }
                            break;
                        default:
                            Elog.d("McfConfig", "unsupport msg :" + message.what);
                            break;
                    }
                }
                obj = null;
                AsyncResult asyncResult7 = (AsyncResult) message.obj;
                if (asyncResult7.exception != null || asyncResult7.result == null) {
                    Elog.e("McfConfig", "Reboot Modem returned exception:" + asyncResult7.exception);
                } else {
                    boolean zBooleanValue = ((Boolean) asyncResult7.result).booleanValue();
                    Elog.v("McfConfig", "IS MODEMENABLE: " + zBooleanValue + ", mIsModemEnabled: " + McfConfigActivity.this.mIsModemEnabled);
                    if (!McfConfigActivity.this.mIsModemEnabled && zBooleanValue) {
                        McfConfigActivity.this.mHandler.sendEmptyMessage(101);
                    }
                }
                return;
            }
            if (McfConfigActivity.this.mIsModemEnabled || !McfConfigActivity.this.resetMd || !McfConfigActivity.this.taskSet.contains(2)) {
                Elog.d("McfConfig", "SIM" + McfConfigActivity.this.phoneid + " received MODEM_REBOOT_COMPLETE, but skiped! mIsModemEnabled:" + McfConfigActivity.this.mIsModemEnabled + " resetMd:" + McfConfigActivity.this.resetMd + " taskSet:" + McfConfigActivity.this.taskSet.toString());
                return;
            }
            McfConfigActivity.this.taskSet.remove(2);
            if (McfConfigActivity.this.timer != null) {
                McfConfigActivity.this.timer.cancel();
                McfConfigActivity.this.timer = null;
            }
            Elog.e("McfConfig", "Reset Modem Success!");
            McfConfigActivity.this.showDialog("Reset Modem", "Reset Modem Completed!");
            McfConfigActivity.this.mIsModemEnabled = true;
        }
    };
    private RadioGroup.OnCheckedChangeListener onCheckedChangeListener = new RadioGroup.OnCheckedChangeListener() { // from class: com.mediatek.engineermode.mcfconfig.McfConfigActivity.6
        @Override // android.widget.RadioGroup.OnCheckedChangeListener
        public void onCheckedChanged(RadioGroup radioGroup, int i) {
            switch (i) {
                case R.id.gen_opota_ota_path /* 2131100632 */:
                    McfConfigActivity.this.isGenopotaOtaPath = true;
                    McfConfigActivity.this.genOpOtaFile.setText("");
                    McfConfigActivity.this.new loadOTAPathTask().execute(1);
                    break;
                case R.id.gen_opota_runtime_path /* 2131100634 */:
                    McfConfigActivity.this.isGenopotaOtaPath = false;
                    McfConfigActivity.this.genOpOtaFile.setText("");
                    McfConfigActivity.this.new loadOTAPathTask().execute(1);
                    break;
                case R.id.ini_disable /* 2131100932 */:
                    McfConfigActivity.this.iniStatus = 0;
                    break;
                case R.id.ini_enable /* 2131100933 */:
                    McfConfigActivity.this.iniStatus = 1;
                    break;
                case R.id.opota_ota_path /* 2131101151 */:
                    McfConfigActivity.this.isOpotaOtaPath = true;
                    McfConfigActivity.this.opOtaFile.setText("");
                    McfConfigActivity.this.new loadOTAPathTask().execute(1);
                    break;
                case R.id.opota_runtime_path /* 2131101154 */:
                    McfConfigActivity.this.isOpotaOtaPath = false;
                    McfConfigActivity.this.opOtaFile.setText("");
                    McfConfigActivity.this.new loadOTAPathTask().execute(1);
                    break;
                case R.id.ota_ota_path /* 2131101161 */:
                    McfConfigActivity.this.isOtaOtaPath = true;
                    McfConfigActivity.this.otaFile.setText("");
                    McfConfigActivity.this.new loadOTAPathTask().execute(1);
                    break;
                case R.id.ota_path /* 2131101162 */:
                    McfConfigActivity.this.isOtaPath = true;
                    break;
                case R.id.ota_runtime_path /* 2131101164 */:
                    McfConfigActivity.this.isOtaOtaPath = false;
                    McfConfigActivity.this.otaFile.setText("");
                    McfConfigActivity.this.new loadOTAPathTask().execute(1);
                    break;
                case R.id.runtime_path /* 2131101317 */:
                    McfConfigActivity.this.isOtaPath = false;
                    break;
            }
        }
    };
    HashMap<Integer, String> mApplyUrcTypeMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mcfconfig.McfConfigActivity.8
        {
            put(0, "SUCCESS");
            put(1, "MCF_NOT_SUPPORT");
            put(2, "VERSION_NOT_MATCH");
            put(3, "WRONG_BUFFER_SIZE");
            put(4, "INVALID_PARAMETER");
            put(5, "READ_NVRAM_FAIL");
            put(6, "WRITE_NVRAM_FAIL");
            put(7, "READ_OTA_FILE_FAIL");
            put(8, "INVALID_SBP_TAG");
            put(9, "INVALID_FILE");
            put(10, "INVALID_ATTR");
            put(11, "TAKE_READ_LOCK_FAIL");
            put(12, "ALLOCATE_BUFFER_FAIL");
            put(13, "ENCRYPTION_FAIL");
            put(14, "DECRYPTION_FAIL");
            put(15, "CHECKSUM_ERROR");
            put(16, "WRITE_DISK_FAIL");
            put(17, "READ_INI_FILE_FAIL");
            put(18, "INVALID_INI_ITEM");
            put(19, "WRITE_INI_FILE_FAIL");
            put(50, "DSBP_FAIL");
            put(51, "FAIL_MCF_DSBP_ONGOING");
        }
    };
    private IEmCallback mEmCallback = new IEmCallback.Stub() { // from class: com.mediatek.engineermode.mcfconfig.McfConfigActivity.9
        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmCallback
        public boolean callbackToClient(String str) throws RemoteException {
            Elog.d("McfConfig", "callbackToClient data = " + str);
            McfConfigActivity.this.mcfCertObj.setFileList(str);
            return true;
        }
    };

    class FileLoadTask extends AsyncTask<String, Void, Void> {
        FileLoadTask() {
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public Void doInBackground(String... strArr) {
            try {
                EmUtils.getEmHidlService().getFilePathListWithCallBack(strArr[0], McfConfigActivity.this.mEmCallback);
                return null;
            } catch (RemoteException e) {
                e.printStackTrace();
                return null;
            }
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(Void r3) {
            McfConfigActivity.this.removeDialog(0);
            McfConfigActivity.this.mcfCertObj.setCurrentCmd(new int[]{0, 0});
            McfConfigActivity mcfConfigActivity = McfConfigActivity.this;
            mcfConfigActivity.doCertificationAction(mcfConfigActivity.phoneid);
        }

        @Override // android.os.AsyncTask
        protected void onPreExecute() {
            super.onPreExecute();
            McfConfigActivity.this.showDialog(0);
        }
    }

    class loadOTAPathTask extends AsyncTask<Integer, Void, Integer> {
        loadOTAPathTask() {
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public Integer doInBackground(Integer... numArr) {
            int iIntValue = numArr[0].intValue();
            if (iIntValue == 0) {
                McfConfigActivity.this.getSharedPreference();
            } else if (iIntValue == 1) {
                McfConfigActivity.this.reloadOtaPathSharedPreference();
            } else if (iIntValue == 2) {
                McfConfigActivity.this.getCertPathSharedPreference();
            }
            return numArr[0];
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(Integer num) {
            if (McfConfigActivity.this.viewId == 1) {
                if (num.intValue() == 0) {
                    McfConfigActivity.this.otaPathRgroup.clearCheck();
                    McfConfigActivity.this.otaPathRgroup.check((McfConfigActivity.this.isOtaOtaPath ? McfConfigActivity.this.isOtaOtaPathBt : McfConfigActivity.this.isOtaRuntimePathBt).getId());
                    McfConfigActivity.this.genOpotaPathRgroup.clearCheck();
                    McfConfigActivity.this.genOpotaPathRgroup.check((McfConfigActivity.this.isGenopotaOtaPath ? McfConfigActivity.this.isGenopotaOtaPathBt : McfConfigActivity.this.isGenopotaRuntimePathBt).getId());
                    McfConfigActivity.this.otaPathRgroup.setOnCheckedChangeListener(McfConfigActivity.this.onCheckedChangeListener);
                    McfConfigActivity.this.genOpotaPathRgroup.setOnCheckedChangeListener(McfConfigActivity.this.onCheckedChangeListener);
                }
                McfConfigActivity.this.otaFile.setText(McfConfigActivity.this.targetOtaFile);
                McfConfigActivity.this.genOpOtaFile.setText(McfConfigActivity.this.targetGenOpOtaFile);
                return;
            }
            if (McfConfigActivity.this.viewId == 0) {
                if (num.intValue() == 0) {
                    McfConfigActivity.this.opOtaPathRgroup.clearCheck();
                    McfConfigActivity.this.opOtaPathRgroup.check((McfConfigActivity.this.isOpotaOtaPath ? McfConfigActivity.this.isOpotaOtaPathBt : McfConfigActivity.this.isOpotaRuntimePathBt).getId());
                    McfConfigActivity.this.opOtaPathRgroup.setOnCheckedChangeListener(McfConfigActivity.this.onCheckedChangeListener);
                }
                McfConfigActivity.this.opOtaFile.setText(McfConfigActivity.this.targetOpOtaFile);
                return;
            }
            if (McfConfigActivity.this.viewId == 2) {
                McfConfigActivity.this.pathRgroup.clearCheck();
                McfConfigActivity.this.pathRgroup.check(McfConfigActivity.this.isOtaPath ? R.id.ota_path : R.id.runtime_path);
                McfConfigActivity.this.mSpinner.setSelection(McfConfigActivity.this.opId - 12);
                McfConfigActivity.this.pathRgroup.setOnCheckedChangeListener(McfConfigActivity.this.onCheckedChangeListener);
                McfConfigActivity.this.mSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.mcfconfig.McfConfigActivity.loadOTAPathTask.1
                    @Override // android.widget.AdapterView.OnItemSelectedListener
                    public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                        McfConfigActivity.this.opId = i + 12;
                        if (McfConfigActivity.this.opId == 12) {
                            McfConfigActivity.this.sertInputEt.setVisibility(0);
                        } else {
                            McfConfigActivity.this.sertInputEt.setVisibility(8);
                        }
                    }

                    @Override // android.widget.AdapterView.OnItemSelectedListener
                    public void onNothingSelected(AdapterView<?> adapterView) {
                    }
                });
                if (McfConfigActivity.this.opId % 12 == 0) {
                    McfConfigActivity.this.sertInputEt.setText(McfConfigActivity.this.inputOp);
                    McfConfigActivity.this.sertInputEt.setVisibility(0);
                }
            }
        }
    }

    class saveOTAPathTask extends AsyncTask<Integer, Void, Void> {
        saveOTAPathTask() {
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public Void doInBackground(Integer... numArr) {
            Elog.d("McfConfig", "[saveOTAPathTask] " + numArr[0]);
            McfConfigActivity.this.saveSharedPreference(numArr[0].intValue());
            return null;
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(Void r3) {
            Elog.d("McfConfig", "Save OTA file path success!");
        }
    }

    private boolean checkPathValid(String str, String[] strArr) {
        if (strArr == null) {
            return true;
        }
        String fileExtension = FileUtils.getFileExtension(str);
        if (fileExtension != null && Arrays.asList(strArr).contains(fileExtension)) {
            return true;
        }
        Elog.e("McfConfig", "[checkPathValid] file path is InValid " + str + " suffixList:" + Arrays.toString(strArr));
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void doCertificationAction(int i) {
        String str;
        Elog.d("McfConfig", "doCertificationAction :" + i + ", " + (this.mcfCertObj.getCurrentCmd(i) + 1));
        int currentCmd = this.mcfCertObj.getCurrentCmd(i);
        if (currentCmd == 0) {
            this.mcfCertObj.setCurrentCmd(new int[]{1, 1});
            if (this.mcfCertObj.getOpid() == 13) {
                sendATCommand(i, "AT+EMCFC=6,0," + this.mcfCertObj.getPathFleg() + ",\"\",0", this.mcfCertObj.getOpid());
                return;
            }
            if (!FileUtils.isFileExist(this.mcfCertObj.getFileList(), this.mcfCertObj.getOtaFilePath())) {
                sendATCommand(i, "AT+EMCFC=6,0," + this.mcfCertObj.getPathFleg() + ",\"\",0", this.mcfCertObj.getOpid());
                return;
            }
            sendATCommand(i, "AT+EMCFC=6,0," + this.mcfCertObj.getPathFleg() + ",\"" + this.mcfCertObj.getOtaFileName() + "\",0", this.mcfCertObj.getOpid());
            return;
        }
        if (currentCmd != 1) {
            if (currentCmd != 2) {
                return;
            }
            this.mcfCertObj.setCurrentCmd(i, 3);
            sendATCommand(i, "AT+EMCFC=6,2," + this.mcfCertObj.getPathFleg() + ",\"\",0", this.mcfCertObj.getOpid());
            return;
        }
        this.mcfCertObj.setCurrentCmd(i, 2);
        if (this.mcfCertObj.getOpid() == 13) {
            str = "AT+EMCFC=6,1," + this.mcfCertObj.getPathFleg() + ",\"\",0";
        } else if (FileUtils.isFileExist(this.mcfCertObj.getFileList(), this.mcfCertObj.getOpotaFilePath())) {
            str = "AT+EMCFC=6,1," + this.mcfCertObj.getPathFleg() + ",\"" + this.mcfCertObj.getOpotaFileName() + "\",0";
        } else {
            str = "AT+EMCFC=6,1," + this.mcfCertObj.getPathFleg() + ",\"\",0";
        }
        sendATCommand(i, str, this.mcfCertObj.getOpid());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void getCertPathSharedPreference() {
        this.isOtaPath = this.mcfConfigSh.getBoolean("is_otapath", true);
        this.opId = this.mcfConfigSh.getInt("op_id", 13);
        this.inputOp = this.mcfConfigSh.getString("input_op_id", "");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void getSharedPreference() {
        boolean z = this.mcfConfigSh.getBoolean("ota_is_otapath", true);
        this.isOtaOtaPath = z;
        this.targetOtaFile = this.mcfConfigSh.getString(z ? "ota_file_otapath" : "ota_file_runtimepath", "");
        boolean z2 = this.mcfConfigSh.getBoolean("general_opota_is_otapath", true);
        this.isGenopotaOtaPath = z2;
        this.targetGenOpOtaFile = this.mcfConfigSh.getString(z2 ? "general_opota_otapath" : "general_opota_runtimepath", "");
        if (this.phoneid == 1) {
            boolean z3 = this.mcfConfigSh.getBoolean("sim2_opota_is_otapath", true);
            this.isOpotaOtaPath = z3;
            this.targetOpOtaFile = this.mcfConfigSh.getString(z3 ? "sim2_opota_file_otapath" : "sim2_opota_file_runtimepath", "");
        } else {
            boolean z4 = this.mcfConfigSh.getBoolean("sim1_opota_is_otapath", true);
            this.isOpotaOtaPath = z4;
            this.targetOpOtaFile = this.mcfConfigSh.getString(z4 ? "sim1_opota_file_otapath" : "sim1_opota_file_runtimepath", "");
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void rebootModem(boolean z) {
        Elog.d("McfConfig", "[rebootModem] begining ... needReset:" + z);
        if (z) {
            this.taskSet.add(2);
            EmUtils.rebootModem();
            this.mIsModemEnabled = false;
            startTimer(2, 180);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void reloadOtaPathSharedPreference() {
        this.targetOtaFile = this.mcfConfigSh.getString(this.isOtaOtaPath ? "ota_file_otapath" : "ota_file_runtimepath", "");
        this.targetGenOpOtaFile = this.mcfConfigSh.getString(this.isGenopotaOtaPath ? "general_opota_otapath" : "general_opota_runtimepath", "");
        if (this.phoneid == 1) {
            this.targetOpOtaFile = this.mcfConfigSh.getString(this.isOpotaOtaPath ? "sim2_opota_file_otapath" : "sim2_opota_file_runtimepath", "");
        } else {
            this.targetOpOtaFile = this.mcfConfigSh.getString(this.isOpotaOtaPath ? "sim1_opota_file_otapath" : "sim1_opota_file_runtimepath", "");
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void saveSharedPreference(int i) {
        SharedPreferences.Editor editorEdit = this.mcfConfigSh.edit();
        if (i == 1) {
            if (this.phoneid == 1) {
                editorEdit.putString(this.isOpotaOtaPath ? "sim2_opota_file_otapath" : "sim2_opota_file_runtimepath", this.targetOpOtaFile);
                editorEdit.putBoolean("sim2_opota_is_otapath", this.isOpotaOtaPath);
            } else {
                editorEdit.putString(this.isOpotaOtaPath ? "sim1_opota_file_otapath" : "sim1_opota_file_runtimepath", this.targetOpOtaFile);
                editorEdit.putBoolean("sim1_opota_is_otapath", this.isOpotaOtaPath);
            }
            Elog.d("McfConfig", "[saveSharedPreference] Save opOtaFile success ! opota_file_path: SIM" + this.phoneid + ":[" + this.targetOpOtaFile + "]," + this.isOpotaOtaPath);
        } else if (i == 0) {
            editorEdit.putString(this.isOtaOtaPath ? "ota_file_otapath" : "ota_file_runtimepath", this.targetOtaFile);
            editorEdit.putBoolean("ota_is_otapath", this.isOtaOtaPath);
            Elog.d("McfConfig", "[saveSharedPreference] Save otaFile success " + this.targetOtaFile + "," + this.isOtaOtaPath);
        } else if (i == 2) {
            editorEdit.putString(this.isGenopotaOtaPath ? "general_opota_otapath" : "general_opota_runtimepath", this.targetGenOpOtaFile);
            editorEdit.putBoolean("general_opota_is_otapath", this.isGenopotaOtaPath);
            Elog.d("McfConfig", "[saveSharedPreference] Save genOpOtaFile success ! " + this.targetGenOpOtaFile + "," + this.isGenopotaOtaPath);
        } else if (i >= 12 && i <= 23) {
            editorEdit.putBoolean("is_otapath", this.isOtaPath);
            editorEdit.putInt("op_id", this.opId);
            if (this.sertInputEt.getVisibility() == 0) {
                editorEdit.putString("input_op_id", this.inputOp);
            }
            Elog.d("McfConfig", "[saveSharedPreference] Save Certification success ! " + this.isOtaPath + ", " + this.opId + ", " + this.inputOp);
        }
        editorEdit.commit();
    }

    private void selectFile(String str, int i) {
        Elog.d("McfConfig", "[selectFile] storagePath: " + str);
        McfFileSelectActivity.actionStart(this, str, i);
    }

    private void sendATCommand(int i, String str, int i2) {
        String[] strArr = {str, "+EMCFC:"};
        if (this.mcfCertObj.getCurCmdResult(i)) {
            return;
        }
        if (this.mcfCertObj.getCurrentCmd(i) != 1 && !isSimReady(i)) {
            this.mcfCertObj.setCmdResult(i, new boolean[]{true, true, true});
            Elog.e("McfConfig", "[sendATCommand], sim" + i + " is absent!");
            return;
        }
        Elog.e("McfConfig", "[sendATCommand] cmd: " + Arrays.toString(strArr) + ", what:" + i2 + ", phoneid: " + i);
        EmUtils.invokeOemRilRequestStringsEm(i, strArr, this.mHandler.obtainMessage((i * 6) + i2));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendATCommand(String str, int i) {
        String[] strArr = {str, "+EMCFC:"};
        Elog.e("McfConfig", "[sendATCommand] cmd: " + Arrays.toString(strArr) + ", what:" + i);
        EmUtils.invokeOemRilRequestStringsEm(this.phoneid, strArr, this.mHandler.obtainMessage(i));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showDialog(String str, String str2) {
        if (isFinishing()) {
            return;
        }
        new AlertDialog.Builder(this).setCancelable(true).setTitle(str).setMessage(str2).setPositiveButton(android.R.string.ok, (DialogInterface.OnClickListener) null).create().show();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showProgressDialog(String str, String str2) {
        if (this.mProgressDialog == null) {
            this.mProgressDialog = new ProgressDialog(this);
        }
        this.mProgressDialog.setTitle(str);
        this.mProgressDialog.setMessage(str2);
        this.mProgressDialog.setCancelable(false);
        this.mProgressDialog.setIndeterminate(true);
        this.mProgressDialog.show();
        Elog.d("McfConfig", "After timer.start");
    }

    public String byteArrayToStr(byte[] bArr) {
        if (bArr == null) {
            return null;
        }
        return new String(bArr);
    }

    public void getSelectedFilePath(Uri uri) {
        StringBuilder sb = new StringBuilder();
        sb.append("[getSelectedFilePath] uri: ");
        sb.append(uri != null ? uri.toString() : "NULL");
        Elog.d("McfConfig", sb.toString());
        if (uri == null) {
            return;
        }
        Elog.d("McfConfig", "[getUriForFile] path :" + uri.getPath());
    }

    String getStringValueFromMap(int i, HashMap<Integer, String> map) {
        if (map.containsKey(Integer.valueOf(i))) {
            return map.get(Integer.valueOf(i));
        }
        return "" + i;
    }

    public boolean isSimReady(int i) {
        TelephonyManager telephonyManager = (TelephonyManager) getSystemService("phone");
        return (i < 0 ? telephonyManager.getSimState() : telephonyManager.getSimState(i)) != 1;
    }

    @Override // android.app.Activity
    public void onActivityResult(int i, int i2, Intent intent) {
        if (i2 != -1) {
            Elog.e("McfConfig", "[onActivityResult] error, resultCode: " + i2);
            super.onActivityResult(i, i2, intent);
            return;
        }
        Uri data = intent.getData();
        StringBuilder sb = new StringBuilder();
        sb.append("[getSelectedFilePath] uri: ");
        sb.append(data != null ? data.toString() : "NULL");
        Elog.d("McfConfig", sb.toString());
        if (data == null) {
            return;
        }
        String path = data.getPath();
        Elog.i("McfConfig", "[onActivityResult] otaFile: " + path);
        if (i == 0) {
            boolean zCheckPathValid = checkPathValid(path, McfFileSelectActivity.OTA_SUFFIX);
            this.isOtaPathValid = zCheckPathValid;
            if (zCheckPathValid) {
                this.targetOtaFile = path;
                this.otaFile.setText(path);
                Elog.d("McfConfig", "isOtaPathValid: " + this.isOtaPathValid + ",targetOtaPath :" + this.targetOtaFile);
            } else {
                this.otaFile.setText("");
                showDialog("Select OTA Path: ", "Invalid File! (ex:*.mcfota)");
            }
        } else if (i == 1) {
            boolean zCheckPathValid2 = checkPathValid(path, McfFileSelectActivity.OP_OTA_SUFFIX);
            this.isOpOtaPathValid = zCheckPathValid2;
            if (zCheckPathValid2) {
                this.targetOpOtaFile = path;
                this.opOtaFile.setText(path);
                Elog.d("McfConfig", "isOpOtaPathValid: " + this.isOpOtaPathValid + ",targetOpOtaPath :" + this.targetOpOtaFile + ", " + ((Object) this.opOtaFile.getText()));
            } else {
                this.opOtaFile.setText("");
                showDialog("Select OP-OTA Path: ", "Invalid File! (ex:*.mcfopota)");
            }
        } else if (i != 2) {
            Elog.d("McfConfig", "unsupport requestCode :" + i);
        } else {
            boolean zCheckPathValid3 = checkPathValid(path, McfFileSelectActivity.OP_OTA_SUFFIX);
            this.isGenOpOtaPathValid = zCheckPathValid3;
            if (zCheckPathValid3) {
                this.targetGenOpOtaFile = path;
                this.genOpOtaFile.setText(path);
                Elog.d("McfConfig", "isGenOpOtaPathValid: " + this.isGenOpOtaPathValid + ",targetGenOpOtaFile :" + this.targetGenOpOtaFile);
            } else {
                this.genOpOtaFile.setText("");
                showDialog("Select OP-OTA Path: ", "Invalid File! (ex:*.mcfopota)");
            }
        }
        super.onActivityResult(i, i2, intent);
    }

    @Override // android.app.Activity
    public void onBackPressed() {
        if (this.taskSet.contains(2)) {
            showDialog("Please Wait", "Reboot modem is ongoing......");
        } else {
            this.taskSet.clear();
            finish();
        }
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        String string;
        String string2;
        String string3;
        String strSubstring = "";
        switch (view.getId()) {
            case R.id.add_general_opota_browser /* 2131100028 */:
                selectFile(this.isGenopotaOtaPath ? "/vendor/etc/mdota/" : "/mnt/vendor/nvcfg/mdota/", 2);
                break;
            case R.id.add_op_ota_browser /* 2131100033 */:
                selectFile(this.isOpotaOtaPath ? "/vendor/etc/mdota/" : "/mnt/vendor/nvcfg/mdota/", 1);
                break;
            case R.id.add_ota_browser /* 2131100034 */:
                selectFile(this.isOtaOtaPath ? "/vendor/etc/mdota/" : "/mnt/vendor/nvcfg/mdota/", 0);
                break;
            case R.id.cert_bt /* 2131100273 */:
                if (this.taskSet.contains(2)) {
                    showDialog("Please Wait", "Reboot modem is ongoing......");
                    break;
                } else {
                    Elog.d("McfConfig", "certification begain " + this.opId + ", isOtaPath: " + this.isOtaPath);
                    McfCertification mcfCertification = new McfCertification();
                    this.mcfCertObj = mcfCertification;
                    mcfCertification.setOpid(this.opId);
                    this.mcfCertObj.setCmdResult(new boolean[][]{new boolean[]{false, false, false}, new boolean[]{false, false, false}});
                    switch (this.opId) {
                        case 12:
                            this.inputOp = this.sertInputEt.getText().toString().replace(" ", "").toUpperCase();
                            Elog.d("McfConfig", "Select operator is " + this.inputOp);
                            this.mcfCertObj.setOpName(this.inputOp);
                            this.mcfCertObj.setOtaFileName("MTK_OTA_" + this.inputOp + ".mcfota");
                            this.mcfCertObj.setOpotaFileName("MTK_OPOTA_" + this.inputOp + ".mcfopota");
                            this.mcfCertObj.setFilePath(this.isOtaPath ? "/vendor/etc/mdota/" : "/mnt/vendor/nvcfg/mdota/");
                            this.mcfCertObj.setPathFleg(!this.isOtaPath ? 1 : 0);
                            new FileLoadTask().execute(this.mcfCertObj.getFilePath());
                            break;
                        case 13:
                            this.mcfCertObj.setOpName("");
                            this.mcfCertObj.setCurrentCmd(this.phoneid, 0);
                            this.mcfCertObj.setPathFleg(1 ^ (this.isOtaPath ? 1 : 0));
                            doCertificationAction(this.phoneid);
                            break;
                        case 14:
                            this.mcfCertObj.setOpName("CMCC");
                            this.mcfCertObj.setOtaFileName("MTK_OTA_CMCC.mcfota");
                            this.mcfCertObj.setOpotaFileName("MTK_OPOTA_CMCC.mcfopota");
                            this.mcfCertObj.setFilePath(this.isOtaPath ? "/vendor/etc/mdota/" : "/mnt/vendor/nvcfg/mdota/");
                            this.mcfCertObj.setPathFleg(!this.isOtaPath ? 1 : 0);
                            new FileLoadTask().execute(this.mcfCertObj.getFilePath());
                            break;
                        case 15:
                            this.mcfCertObj.setOpName("CT");
                            this.mcfCertObj.setOtaFileName("MTK_OTA_CT.mcfota");
                            this.mcfCertObj.setOpotaFileName("MTK_OPOTA_CT.mcfopota");
                            this.mcfCertObj.setFilePath(this.isOtaPath ? "/vendor/etc/mdota/" : "/mnt/vendor/nvcfg/mdota/");
                            this.mcfCertObj.setPathFleg(!this.isOtaPath ? 1 : 0);
                            new FileLoadTask().execute(this.mcfCertObj.getFilePath());
                            break;
                        case 16:
                            this.mcfCertObj.setOpName("CU");
                            this.mcfCertObj.setOtaFileName("MTK_OTA_CU.mcfota");
                            this.mcfCertObj.setOpotaFileName("MTK_OPOTA_CU.mcfopota");
                            this.mcfCertObj.setFilePath(this.isOtaPath ? "/vendor/etc/mdota/" : "/mnt/vendor/nvcfg/mdota/");
                            this.mcfCertObj.setPathFleg(!this.isOtaPath ? 1 : 0);
                            new FileLoadTask().execute(this.mcfCertObj.getFilePath());
                            break;
                        case 17:
                            this.mcfCertObj.setOpName("CERT_COMMON");
                            this.mcfCertObj.setOtaFileName("MTK_OTA_CERT_COMMON.mcfota");
                            this.mcfCertObj.setOpotaFileName("MTK_OPOTA_CERT_COMMON.mcfopota");
                            this.mcfCertObj.setFilePath(this.isOtaPath ? "/vendor/etc/mdota/" : "/mnt/vendor/nvcfg/mdota/");
                            this.mcfCertObj.setPathFleg(!this.isOtaPath ? 1 : 0);
                            new FileLoadTask().execute(this.mcfCertObj.getFilePath());
                            break;
                    }
                }
                break;
            case R.id.cert_ota_query /* 2131100275 */:
                Elog.d("McfConfig", "Cert Ota query begain");
                this.opId = 8;
                sendATCommand("AT+EMCFC=4,0", 8);
                break;
            case R.id.gen_opota_apply /* 2131100630 */:
                String str = (String) this.genOpOtaFile.getText();
                this.targetGenOpOtaFile = str;
                this.isGenOpOtaPathValid = checkPathValid(str, McfFileSelectActivity.OP_OTA_SUFFIX);
                String str2 = "AT+EMCFC=6,2," + (!this.isGenopotaOtaPath ? 1 : 0) + ",";
                if (!this.isGenOpOtaPathValid) {
                    showDialog("Apply General Op-OTA Error", "OP-OTA File is invalid!");
                } else if (!this.taskSet.contains(2)) {
                    String str3 = this.targetGenOpOtaFile;
                    if (str3 == null || str3.trim().equals("")) {
                        string = str2 + "\"\",0";
                    } else {
                        int iLastIndexOf = this.isGenopotaOtaPath ? this.targetGenOpOtaFile.lastIndexOf("/vendor/etc/mdota/") + "/vendor/etc/mdota/".length() : this.targetGenOpOtaFile.lastIndexOf("/mnt/vendor/nvcfg/mdota/") + "/mnt/vendor/nvcfg/mdota/".length();
                        StringBuilder sb = new StringBuilder();
                        sb.append(str2);
                        sb.append("\"");
                        if (this.isGenOpOtaPathValid && iLastIndexOf >= 0) {
                            strSubstring = this.targetGenOpOtaFile.substring(iLastIndexOf);
                        }
                        sb.append(strSubstring);
                        sb.append("\",0");
                        string = sb.toString();
                    }
                    this.resetMd = this.genOpotaResetMdEnable.isChecked();
                    this.opId = 4;
                    sendATCommand(string + (1 ^ (this.resetMd ? 1 : 0)), 4);
                } else {
                    showDialog("Please Wait", "Reboot modem is ongoing......");
                }
                break;
            case R.id.gen_opota_clear /* 2131100631 */:
                if (!this.taskSet.contains(2)) {
                    String str4 = "AT+EMCFC=6,2," + (!this.isGenopotaOtaPath ? 1 : 0) + ",\"\",";
                    this.resetMd = this.genOpotaResetMdEnable.isChecked();
                    this.opId = 5;
                    sendATCommand(str4 + (1 ^ (this.resetMd ? 1 : 0)), 5);
                } else {
                    showDialog("Please Wait", "Reboot modem is ongoing......");
                }
                break;
            case R.id.ini_refresh /* 2131100934 */:
                Elog.d("McfConfig", "Ini refresh begain, iniStatus:" + this.iniStatus);
                this.opId = 7;
                sendATCommand("AT+EMCFC=7," + this.iniStatus, 7);
                break;
            case R.id.opota_apply /* 2131101149 */:
                String str5 = (String) this.opOtaFile.getText();
                this.targetOpOtaFile = str5;
                this.isOpOtaPathValid = checkPathValid(str5, McfFileSelectActivity.OP_OTA_SUFFIX);
                String str6 = "AT+EMCFC=6,1," + (!this.isOpotaOtaPath ? 1 : 0) + ",";
                if (!this.isOpOtaPathValid) {
                    showDialog("Apply Op-OTA Error", "OP-OTA File is invalid!");
                } else if (!this.taskSet.contains(2)) {
                    String str7 = this.targetOpOtaFile;
                    if (str7 == null || str7.trim().equals("")) {
                        string2 = str6 + "\"\",0";
                    } else {
                        int iLastIndexOf2 = this.isOpotaOtaPath ? this.targetOpOtaFile.lastIndexOf("/vendor/etc/mdota/") + "/vendor/etc/mdota/".length() : this.targetOpOtaFile.lastIndexOf("/mnt/vendor/nvcfg/mdota/") + "/mnt/vendor/nvcfg/mdota/".length();
                        StringBuilder sb2 = new StringBuilder();
                        sb2.append(str6);
                        sb2.append("\"");
                        if (this.isOpOtaPathValid && iLastIndexOf2 >= 0) {
                            strSubstring = this.targetOpOtaFile.substring(iLastIndexOf2);
                        }
                        sb2.append(strSubstring);
                        sb2.append("\",");
                        string2 = sb2.toString();
                    }
                    this.resetMd = this.opotaResetMdEnable.isChecked();
                    this.opId = 2;
                    sendATCommand(string2 + (1 ^ (this.resetMd ? 1 : 0)), 2);
                } else {
                    showDialog("Please Wait", "Reboot modem is ongoing......");
                }
                break;
            case R.id.opota_clear /* 2131101150 */:
                if (!this.taskSet.contains(2)) {
                    String str8 = "AT+EMCFC=6,1," + (!this.isOpotaOtaPath ? 1 : 0) + ",\"\",";
                    this.resetMd = this.opotaResetMdEnable.isChecked();
                    this.opId = 3;
                    sendATCommand(str8 + (1 ^ (this.resetMd ? 1 : 0)), 3);
                } else {
                    showDialog("Please Wait", "Reboot modem is ongoing......");
                }
                break;
            case R.id.opota_query /* 2131101153 */:
                Elog.d("McfConfig", "OpOta query begain");
                this.opId = 9;
                sendATCommand("AT+EMCFC=4,1", 9);
                break;
            case R.id.ota_apply /* 2131101157 */:
                this.resetMd = true;
                this.opId = 0;
                String str9 = (String) this.otaFile.getText();
                this.targetOtaFile = str9;
                this.isOtaPathValid = checkPathValid(str9, McfFileSelectActivity.OTA_SUFFIX);
                String str10 = "AT+EMCFC=6,0," + (1 ^ (this.isOtaOtaPath ? 1 : 0)) + ",";
                if (!this.isOtaPathValid) {
                    showDialog("Apply OTA Error", "OTA File is invalid!");
                } else if (!this.taskSet.contains(2)) {
                    String str11 = this.targetOtaFile;
                    if (str11 == null || str11.trim().equals("")) {
                        string3 = str10 + "\"\",0";
                    } else {
                        int iLastIndexOf3 = this.isOtaOtaPath ? this.targetOtaFile.lastIndexOf("/vendor/etc/mdota/") + "/vendor/etc/mdota/".length() : this.targetOtaFile.lastIndexOf("/mnt/vendor/nvcfg/mdota/") + "/mnt/vendor/nvcfg/mdota/".length();
                        StringBuilder sb3 = new StringBuilder();
                        sb3.append(str10);
                        sb3.append("\"");
                        if (this.isOtaPathValid && iLastIndexOf3 >= 0) {
                            strSubstring = this.targetOtaFile.substring(iLastIndexOf3);
                        }
                        sb3.append(strSubstring);
                        sb3.append("\",0");
                        string3 = sb3.toString();
                    }
                    Elog.d("McfConfig", "ATCommand: " + string3);
                    sendATCommand(string3, 0);
                } else {
                    showDialog("Please Wait", "Reboot modem is ongoing......");
                }
                break;
            case R.id.ota_clear /* 2131101158 */:
                this.resetMd = true;
                this.opId = 1;
                if (!this.taskSet.contains(2)) {
                    sendATCommand("AT+EMCFC=6,0," + (!this.isOtaOtaPath ? 1 : 0) + ",\"\",0", 1);
                } else {
                    showDialog("Please Wait", "Reboot modem is ongoing......");
                }
                break;
            case R.id.ota_dump /* 2131101159 */:
                this.dumpBegain = System.currentTimeMillis();
                Elog.d("McfConfig", "Dump OTA file begain :" + new SimpleDateFormat("HH:mm:ss").format(new Date(this.dumpBegain)));
                this.opId = 6;
                sendATCommand("AT+EMCFC=5", 6);
                break;
            case R.id.ota_query /* 2131101163 */:
                Elog.d("McfConfig", "Ota query begain");
                this.opId = 8;
                sendATCommand("AT+EMCFC=4,0", 8);
                break;
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        int capabilitySim;
        super.onCreate(bundle);
        setContentView(R.layout.em_mcf_config);
        this.opotaResetMdEnable = (CheckBox) findViewById(R.id.resetmd_enable);
        this.genOpotaResetMdEnable = (CheckBox) findViewById(R.id.gen_resetmd_enable);
        this.opotaView = (LinearLayout) findViewById(R.id.mcf_opota_view);
        this.generalView = (LinearLayout) findViewById(R.id.mcf_general_view);
        this.certificationView = (LinearLayout) findViewById(R.id.mcf_certification_view);
        this.addOtaBtn = (Button) findViewById(R.id.add_ota_browser);
        this.addOpOtaBtn = (Button) findViewById(R.id.add_op_ota_browser);
        this.addGenOpOtaBtn = (Button) findViewById(R.id.add_general_opota_browser);
        this.otaQueryBtn = (Button) findViewById(R.id.ota_query);
        this.certotaQueryBtn = (Button) findViewById(R.id.cert_ota_query);
        this.opOtaQueryBtn = (Button) findViewById(R.id.opota_query);
        this.addOtaBtn.setOnClickListener(this);
        this.addOpOtaBtn.setOnClickListener(this);
        this.addGenOpOtaBtn.setOnClickListener(this);
        this.applyOtaBtn = (Button) findViewById(R.id.ota_apply);
        this.clearOtaBtn = (Button) findViewById(R.id.ota_clear);
        this.applyOpOtaBtn = (Button) findViewById(R.id.opota_apply);
        this.clearOpOtaBtn = (Button) findViewById(R.id.opota_clear);
        this.applyGenOpOtaBtn = (Button) findViewById(R.id.gen_opota_apply);
        this.clearGenOpOtaBtn = (Button) findViewById(R.id.gen_opota_clear);
        this.dumpOta = (Button) findViewById(R.id.ota_dump);
        this.iniRefreshBtn = (Button) findViewById(R.id.ini_refresh);
        this.iniStatusGroup = (RadioGroup) findViewById(R.id.ini_refresh_group);
        this.certBtn = (Button) findViewById(R.id.cert_bt);
        this.pathRgroup = (RadioGroup) findViewById(R.id.path_rgroup);
        this.otaPathRgroup = (RadioGroup) findViewById(R.id.gen_ota_path_rgroup);
        this.opOtaPathRgroup = (RadioGroup) findViewById(R.id.opota_path_rgroup);
        this.genOpotaPathRgroup = (RadioGroup) findViewById(R.id.gen_opota_path_rgroup);
        this.isOtaOtaPathBt = (RadioButton) findViewById(R.id.ota_ota_path);
        this.isOtaRuntimePathBt = (RadioButton) findViewById(R.id.ota_runtime_path);
        this.isGenopotaOtaPathBt = (RadioButton) findViewById(R.id.gen_opota_ota_path);
        this.isGenopotaRuntimePathBt = (RadioButton) findViewById(R.id.gen_opota_runtime_path);
        this.isOpotaOtaPathBt = (RadioButton) findViewById(R.id.opota_ota_path);
        this.isOpotaRuntimePathBt = (RadioButton) findViewById(R.id.opota_runtime_path);
        this.mSpinner = (Spinner) findViewById(R.id.op_select);
        this.sertInputEt = (EditText) findViewById(R.id.cert_input_et);
        this.applyOtaBtn.setOnClickListener(this);
        this.clearOtaBtn.setOnClickListener(this);
        this.applyOpOtaBtn.setOnClickListener(this);
        this.clearOpOtaBtn.setOnClickListener(this);
        this.applyGenOpOtaBtn.setOnClickListener(this);
        this.clearGenOpOtaBtn.setOnClickListener(this);
        this.dumpOta.setOnClickListener(this);
        this.iniRefreshBtn.setOnClickListener(this);
        this.otaQueryBtn.setOnClickListener(this);
        this.certotaQueryBtn.setOnClickListener(this);
        this.opOtaQueryBtn.setOnClickListener(this);
        this.certBtn.setOnClickListener(this);
        this.sertInputEt.setVisibility(8);
        this.opOtaFile = (TextView) findViewById(R.id.op_ota_file);
        this.otaFile = (TextView) findViewById(R.id.ota_file);
        this.genOpOtaFile = (TextView) findViewById(R.id.general_opota_file);
        this.isOtaPath = false;
        ArrayAdapter<CharSequence> arrayAdapterCreateFromResource = ArrayAdapter.createFromResource(this, R.array.mcf_cert_arrays, android.R.layout.simple_spinner_item);
        arrayAdapterCreateFromResource.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpinner.setAdapter((SpinnerAdapter) arrayAdapterCreateFromResource);
        int intExtra = getIntent().getIntExtra("mSimType", 0);
        this.simType = intExtra;
        if (intExtra == McfSimSelectActivity.SHOW_GENERAL_VIEW) {
            this.opotaView.setVisibility(8);
            this.generalView.setVisibility(0);
            this.certificationView.setVisibility(8);
            this.phoneid = ModemCategory.getCapabilitySim();
            this.viewId = 1;
        } else if (this.simType == McfSimSelectActivity.SHOW_CERTIFICATION_VIEW) {
            this.opotaView.setVisibility(8);
            this.generalView.setVisibility(8);
            this.certificationView.setVisibility(0);
            this.phoneid = ModemCategory.getCapabilitySim();
            this.viewId = 2;
            this.mSpinner.setSelection(1);
        } else {
            this.opotaView.setVisibility(0);
            this.generalView.setVisibility(8);
            this.certificationView.setVisibility(8);
            this.phoneid = this.simType;
            this.viewId = 0;
        }
        if (isSimReady(this.phoneid)) {
            capabilitySim = this.phoneid;
        } else {
            capabilitySim = isSimReady((this.phoneid + 1) % 2) ? (this.phoneid + 1) % 2 : ModemCategory.getCapabilitySim();
        }
        Elog.d("McfConfig", "Selected: Sim" + this.phoneid + ", Ready: Sim" + capabilitySim);
        this.mTelephonyManager = (TelephonyManager) getSystemService("phone");
        EmUtils.registerForModemStatusChanged(capabilitySim, this.mHandler, 102);
        EmUtils.registerForUrcInfo(capabilitySim, this.mHandler, 11);
        this.mTelephonyManager = (TelephonyManager) getSystemService("phone");
        this.mcfConfigSh = getSharedPreferences("mcf_config_settings", 0);
        new loadOTAPathTask().execute(0);
        new loadOTAPathTask().execute(2);
        this.mcfCertObj = new McfCertification();
        this.iniStatusGroup.setOnCheckedChangeListener(this.onCheckedChangeListener);
    }

    @Override // android.app.Activity
    public void onDestroy() {
        super.onDestroy();
        Elog.d("McfConfig", "onDestroy");
        this.taskSet.clear();
        EmUtils.unregisterForUrcInfo(this.readySim);
        EmUtils.unregisterForModemStatusChanged(this.readySim);
    }

    public void startTimer(final int i, int i2) {
        Elog.d("McfConfig", "waitTime = " + i2 + " s");
        CountDownTimer countDownTimer = new CountDownTimer((long) (i2 * 1000), 1000L) { // from class: com.mediatek.engineermode.mcfconfig.McfConfigActivity.7
            @Override // android.os.CountDownTimer
            public void onFinish() {
                Elog.d("McfConfig", "timer Timeout.......");
                McfConfigActivity.this.mIsModemEnabled = true;
                if (McfConfigActivity.this.timer != null) {
                    McfConfigActivity.this.timer.cancel();
                }
                if (McfConfigActivity.this.mProgressDialog != null) {
                    McfConfigActivity.this.mProgressDialog.dismiss();
                    McfConfigActivity.this.mProgressDialog = null;
                }
                int i3 = i;
                if (i3 == 1) {
                    EmUtils.showToast("Dump OTA timeout!");
                } else if (i3 == 3) {
                    McfConfigActivity.this.showDialog("Ini Refresh ", "Ini Refresh timeout!");
                } else if (i3 == 2) {
                    McfConfigActivity.this.showDialog("Reboot Modem", "Reboot modem timeout!");
                }
                McfConfigActivity.this.timer = null;
                McfConfigActivity.this.taskSet.remove(Integer.valueOf(i));
            }

            @Override // android.os.CountDownTimer
            public void onTick(long j) {
                int capabilitySim;
                if (i == 2) {
                    McfConfigActivity mcfConfigActivity = McfConfigActivity.this;
                    if (mcfConfigActivity.isSimReady(mcfConfigActivity.readySim)) {
                        capabilitySim = McfConfigActivity.this.readySim;
                    } else {
                        McfConfigActivity mcfConfigActivity2 = McfConfigActivity.this;
                        capabilitySim = mcfConfigActivity2.isSimReady(mcfConfigActivity2.readySim + 1) ? (McfConfigActivity.this.readySim + 1) % 2 : ModemCategory.getCapabilitySim();
                    }
                    EmRadioHidlAosp.getModemStatus(capabilitySim);
                }
            }
        };
        this.timer = countDownTimer;
        countDownTimer.start();
        Elog.d("McfConfig", "Start timer for " + i + ", WAIT_TIME=" + i2 + "s");
    }
}
