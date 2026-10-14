package com.mediatek.engineermode.mcfconfig;

import android.R;
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
import android.telephony.TelephonyManager;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.aospradio.EmRadioHidlAosp;
import java.io.Serializable;
import java.text.SimpleDateFormat;
import java.util.Arrays;
import java.util.Date;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Set;

/* JADX INFO: loaded from: classes.dex */
public class McfConfigActivity93 extends Activity implements View.OnClickListener {
    private Button addOpOtaBtn;
    private Button addOtaBtn;
    private Button applyOpOtaBtn;
    private Button applyOtaBtn;
    private Button clearOpOtaBtn;
    private Button clearOtaBtn;
    private String curOpOtaFile;
    private String curOtaFile;
    long dumpBegain;
    long dumpEnd;
    private Button dumpOta;
    private LinearLayout generalView;
    private ProgressDialog mProgressDialog;
    int mRadioStates;
    private SharedPreferences mcfConfigSh;
    private TextView opOtaFile;
    private Button opOtaQueryBtn;
    private CheckBox opotaResetMdEnable;
    private LinearLayout opotaView;
    private TextView otaFile;
    private Button otaQueryBtn;
    private int phoneid;
    private int readySim;
    private String targetOpOtaFile;
    private String targetOtaFile;
    CountDownTimer timer;
    private int viewId;
    private final String TAG = "McfConfig/McfConfigActivity93";
    private final String MCF_CONFIG_SHAREPRE = "mcf_config_settings";
    private final int SIM_COUNT = 2;
    private final int MSG_SET_OTA_FILEPATH = 0;
    private final int MSG_CLEAR_OTA_FILEPATH = 1;
    private final int MSG_SET_OPOTA_FILEPATH = 2;
    private final int MSG_CLEAR_OPOTA_FILEPATH = 3;
    private final int MSG_DUMP_OTA_FILE = 6;
    private final int MSG_OTA_QUERY = 8;
    private final int MSG_OPOTA_QUERY = 9;
    private final int MSG_MCF_RADIO_STATE_CHANGED = 100;
    private final int MSG_MODEM_REBOOT_COMPLETE = 101;
    private final int MSG_MCF_MODEM_STATUS_CHANGED = 102;
    protected final int MSG_GET_MCF_STATUS_URC = 11;
    private final int SHOW_OPOTA_VIEW = 0;
    private final int SHOW_GENERAL_VIEW = 1;
    private final String DEFAULT_FILE_PATH = "/mnt/vendor/nvdata/md/mdota";
    private final String SET_OTA_COMMAND = "AT+EMCFC=1";
    private final String SET_OPOTA_COMMAND = "AT+EMCFC=2";
    private final String SET_OPOTA_RSTMD_COMMAND = "AT+EMCFC=3,1,1";
    private final String CMD_OTA_RETURN = "+EMCFC:";
    private final String DUMP_OTA_COMMAND = "AT+EMCFC=5";
    private final String OTA_QUERY_COMMAND = "AT+EMCFC=4,0";
    private final String OPOTA_QUERY_COMMAND = "AT+EMCFC=4,1";
    private final int OTA_WAIT_TIME = 180;
    private final int REBOOT_MODEM_WAIT_TIME = 60;
    private final String OTA_FILEPATH_KEY = "ota_file_path";
    private final String GENERAL_OPOTA_FILEPATH_KEY = "general_opota_path";
    private final String SIM2_OPOTA_FILEPATH_KEY = "sim2_opota_file_path";
    private final String SIM1_OPOTA_FILEPATH_KEY = "sim1_opota_file_path";
    private final int STATE_REBOOT_MODEM = 0;
    private final int STATE_DUMP_OTA = 1;
    private final HashMap<String, String> OtaFilePathType = new HashMap<String, String>() { // from class: com.mediatek.engineermode.mcfconfig.McfConfigActivity93.1
        {
            put("0", "Android OTA path");
            put("1", "Runtime path");
        }
    };
    private final HashMap<Integer, String> mcfOtaDumpResult = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mcfconfig.McfConfigActivity93.2
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
    private Set taskSet = new HashSet();
    private boolean isOtaPathValid = false;
    private boolean isOpOtaPathValid = false;
    private boolean mIsModemEnabled = true;
    private boolean resetMd = true;
    private final HashMap<Integer, String> mcfApplyDsbpResult = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mcfconfig.McfConfigActivity93.3
        {
            put(0, "SUCCESS");
            put(0, "FAIL_MCF_DSBP_ONGOING");
            put(0, "FAIL_SIM_SWITCH_ONGOING");
            put(0, "FAIL_ONGOING_CALL_OR_ECBM");
            put(0, "FAIL_NO_SIM");
            put(0, "FAIL_NOT_MODE2");
            put(0, "FAIL_SIM_ERROR");
            put(0, "FAIL_UNKNOWN");
            put(0, "MAX");
        }
    };
    private final HashMap<Integer, String> mcfApplyOtaResult = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mcfconfig.McfConfigActivity93.4
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
            put(20, "FILE_NOT_CHANGE");
            put(21, "MAX");
        }
    };
    private final Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.mcfconfig.McfConfigActivity93.5
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            String str;
            boolean z;
            String str2;
            boolean z2;
            AsyncResult asyncResult;
            boolean z3;
            String string;
            AsyncResult asyncResult2;
            String str3;
            String str4;
            int i = message.what;
            String str5 = "";
            String string2 = null;
            if (i != 0) {
                if (i != 1) {
                    if (i != 2) {
                        if (i != 3) {
                            if (i == 6) {
                                asyncResult = (AsyncResult) message.obj;
                                if (asyncResult.exception == null) {
                                    z3 = true;
                                    if (asyncResult.result != null && (asyncResult.result instanceof String[])) {
                                        Elog.d("McfConfig/McfConfigActivity93", "ATCommand with Dump OTA returned: " + Arrays.toString((String[]) asyncResult.result));
                                    }
                                } else {
                                    z3 = false;
                                    Elog.e("McfConfig/McfConfigActivity93", "ATCommand with Dump OTA returned exception:" + asyncResult.exception);
                                }
                                if (z3) {
                                    EmUtils.showToast("ATCommand with Dump OTA success!");
                                    McfConfigActivity93.this.startTimer(1, 180);
                                    McfConfigActivity93.this.showProgressDialog("Waitting", "Dump OTA is ongoing......");
                                    McfConfigActivity93.this.taskSet.add(1);
                                } else {
                                    McfConfigActivity93.this.showDialog("Dump OTA", "Dump OTA failed!");
                                    Elog.e("McfConfig/McfConfigActivity93", "ATCommand with Dump OTA failed!");
                                }
                            } else {
                                if (i != 11) {
                                    if (i != 8 && i != 9) {
                                        if (i != 101) {
                                            if (i != 102) {
                                                Elog.d("McfConfig/McfConfigActivity93", "unsupport msg :" + message.what);
                                            } else {
                                                asyncResult2 = (AsyncResult) message.obj;
                                                if (asyncResult2.exception != null || asyncResult2.result == null) {
                                                    Elog.e("McfConfig/McfConfigActivity93", "Reboot Modem returned exception:" + asyncResult2.exception);
                                                } else {
                                                    boolean zBooleanValue = ((Boolean) asyncResult2.result).booleanValue();
                                                    Elog.v("McfConfig/McfConfigActivity93", "IS MODEMENABLE: " + zBooleanValue + ", mIsModemEnabled: " + McfConfigActivity93.this.mIsModemEnabled);
                                                    if (!McfConfigActivity93.this.mIsModemEnabled && zBooleanValue) {
                                                        McfConfigActivity93.this.mHandler.sendEmptyMessage(101);
                                                    }
                                                }
                                            }
                                        } else {
                                            if (McfConfigActivity93.this.mIsModemEnabled || !McfConfigActivity93.this.resetMd || !McfConfigActivity93.this.taskSet.contains(0)) {
                                                Elog.d("McfConfig/McfConfigActivity93", "SIM" + McfConfigActivity93.this.phoneid + " received MODEM_REBOOT_COMPLETE, but skiped! mIsModemEnabled:" + McfConfigActivity93.this.mIsModemEnabled + " resetMd:" + McfConfigActivity93.this.resetMd + " taskSet:" + McfConfigActivity93.this.taskSet.toString());
                                                return;
                                            }
                                            McfConfigActivity93.this.taskSet.remove(0);
                                            if (McfConfigActivity93.this.timer != null) {
                                                McfConfigActivity93.this.timer.cancel();
                                                McfConfigActivity93.this.timer = null;
                                            }
                                            Elog.e("McfConfig/McfConfigActivity93", "Reset Modem Success!");
                                            McfConfigActivity93.this.showDialog("Reset Modem", "Reset Modem Completed!");
                                            McfConfigActivity93.this.mIsModemEnabled = true;
                                        }
                                        return;
                                    }
                                    asyncResult2 = (AsyncResult) message.obj;
                                    boolean z4 = false;
                                    if (asyncResult2.exception != null) {
                                        z4 = false;
                                        Elog.e("McfConfig/McfConfigActivity93", "AT with ota query returned exception:" + asyncResult2.exception);
                                    } else if (asyncResult2.result != null) {
                                        Elog.d("McfConfig/McfConfigActivity93", "Query OTA (" + message.what + " ): " + Arrays.toString((String[]) asyncResult2.result));
                                        String[] strArrSplit = ((String[]) asyncResult2.result)[0].substring("+EMCFC:".length()).replaceAll(" ", "").split(",");
                                        if (strArrSplit != null) {
                                            z4 = true;
                                            String str6 = strArrSplit.length >= 2 ? strArrSplit[1] : "";
                                            String str7 = (strArrSplit.length < 3 || !McfConfigActivity93.this.OtaFilePathType.containsKey(strArrSplit[2])) ? "" : (String) McfConfigActivity93.this.OtaFilePathType.get(strArrSplit[2]);
                                            String str8 = strArrSplit.length >= 4 ? strArrSplit[3] : "";
                                            if (str8.equals("")) {
                                                str4 = "No File";
                                            } else {
                                                str4 = str7 + ":" + str8;
                                            }
                                            String str9 = str4;
                                            if (str6.equals("0")) {
                                                McfConfigActivity93.this.curOtaFile = str9;
                                            } else if (str6.equals("1")) {
                                                McfConfigActivity93.this.curOpOtaFile = str9;
                                            }
                                        }
                                    }
                                    if (z4) {
                                        EmUtils.showToast("ATCommand with ota query success!");
                                        Elog.d("McfConfig/McfConfigActivity93", "OTA: " + McfConfigActivity93.this.curOtaFile + ", OPOTA: " + McfConfigActivity93.this.curOpOtaFile);
                                        McfConfigActivity93 mcfConfigActivity93 = McfConfigActivity93.this;
                                        if (message.what == 8) {
                                            str3 = "OTA: " + McfConfigActivity93.this.curOtaFile;
                                        } else {
                                            str3 = "OTA by OP: " + McfConfigActivity93.this.curOpOtaFile;
                                        }
                                        mcfConfigActivity93.showDialog("OTA Query ", str3);
                                    } else {
                                        McfConfigActivity93 mcfConfigActivity94 = McfConfigActivity93.this;
                                        StringBuilder sb = new StringBuilder();
                                        sb.append("Query ");
                                        sb.append(message.what != 8 ? "OTA by OP" : "OTA");
                                        sb.append(" failed!");
                                        mcfConfigActivity94.showDialog("OTA Query", sb.toString());
                                        Elog.e("McfConfig/McfConfigActivity93", "ATCommand with " + message.what + " query failed!");
                                    }
                                    return;
                                }
                                asyncResult = (AsyncResult) message.obj;
                                String strByteArrayToStr = McfConfigActivity93.this.byteArrayToStr((byte[]) asyncResult.result);
                                Elog.d("McfConfig/McfConfigActivity93", "Readback from urc = " + strByteArrayToStr);
                                if (strByteArrayToStr.startsWith("+EMCFRPT") && strByteArrayToStr.split(":").length >= 2) {
                                    if (McfConfigActivity93.this.timer != null) {
                                        McfConfigActivity93.this.timer.cancel();
                                        McfConfigActivity93.this.timer = null;
                                    }
                                    if (McfConfigActivity93.this.mProgressDialog != null) {
                                        McfConfigActivity93.this.mProgressDialog.dismiss();
                                        McfConfigActivity93.this.mProgressDialog = null;
                                    }
                                    String[] strArrSplit2 = strByteArrayToStr.split(":")[1].replaceAll(" ", "").split(",");
                                    int iIntValue = Integer.valueOf(strArrSplit2[0].trim()).intValue();
                                    int iIntValue2 = Integer.valueOf(strArrSplit2[1].trim()).intValue();
                                    if (iIntValue == 1) {
                                        McfConfigActivity93.this.dumpEnd = System.currentTimeMillis();
                                        Elog.d("McfConfig/McfConfigActivity93", "Dump OTA file end :" + new SimpleDateFormat("HH:mm:ss").format(new Date(McfConfigActivity93.this.dumpBegain)));
                                        McfConfigActivity93 mcfConfigActivity95 = McfConfigActivity93.this;
                                        StringBuilder sb2 = new StringBuilder();
                                        if (iIntValue2 == 0) {
                                            string = "Success!";
                                        } else {
                                            StringBuilder sb3 = new StringBuilder();
                                            sb3.append("Failed with Error Code: ");
                                            sb3.append(McfConfigActivity93.this.mcfOtaDumpResult.containsKey(Integer.valueOf(iIntValue2)) ? (Serializable) McfConfigActivity93.this.mcfOtaDumpResult.get(Integer.valueOf(iIntValue2)) : Integer.valueOf(iIntValue2));
                                            string = sb3.toString();
                                        }
                                        sb2.append(string);
                                        sb2.append("\nDump costs ");
                                        sb2.append(String.format("%.2f", Float.valueOf((McfConfigActivity93.this.dumpEnd - McfConfigActivity93.this.dumpBegain) / 1000.0f)));
                                        sb2.append(" s");
                                        mcfConfigActivity95.showDialog("Dump Result", sb2.toString());
                                        McfConfigActivity93.this.taskSet.remove(1);
                                    }
                                }
                            }
                            return;
                        }
                    }
                }
                AsyncResult asyncResult3 = (AsyncResult) message.obj;
                String str10 = message.what == 1 ? "OTA" : "OPOTA";
                if (asyncResult3.exception == null) {
                    z2 = true;
                    if (asyncResult3.result == null || !(asyncResult3.result instanceof String[]) || ((String[]) asyncResult3.result).length <= 0) {
                        str2 = null;
                    } else {
                        Elog.d("McfConfig/McfConfigActivity93", "Clear Result: " + Arrays.toString((String[]) asyncResult3.result));
                        String[] strArrSplit3 = ((String[]) asyncResult3.result)[0].split(",");
                        if (strArrSplit3 != null && strArrSplit3[1] != null && strArrSplit3[2] != null) {
                            int iIntValue3 = Integer.valueOf(strArrSplit3[1].trim()).intValue();
                            int iIntValue4 = Integer.valueOf(strArrSplit3[2].trim()).intValue();
                            if (iIntValue4 == 0 && iIntValue3 == 0) {
                                z2 = true;
                            } else {
                                StringBuilder sb4 = new StringBuilder();
                                sb4.append("Mcf Ota: ");
                                McfConfigActivity93 mcfConfigActivity96 = McfConfigActivity93.this;
                                sb4.append(mcfConfigActivity96.getStringValueFromMap(iIntValue3, mcfConfigActivity96.mcfApplyOtaResult));
                                sb4.append("\nDsbp: ");
                                McfConfigActivity93 mcfConfigActivity97 = McfConfigActivity93.this;
                                sb4.append(mcfConfigActivity97.getStringValueFromMap(iIntValue4, mcfConfigActivity97.mcfApplyDsbpResult));
                                string2 = sb4.toString();
                                z2 = false;
                            }
                        }
                        str2 = string2;
                    }
                } else {
                    if (asyncResult3.exception.toString().split(":")[1] != null) {
                        str2 = "AT Command Failed: " + asyncResult3.exception.toString().split(":")[1];
                    } else {
                        str2 = "";
                    }
                    Elog.e("McfConfig/McfConfigActivity93", "Clear " + str10 + " returned exception:" + asyncResult3.exception);
                    z2 = false;
                }
                if (z2) {
                    if (message.what == 1) {
                        McfConfigActivity93.this.otaFile.setText("");
                        McfConfigActivity93.this.targetOtaFile = "";
                    } else if (message.what == 3) {
                        McfConfigActivity93.this.opOtaFile.setText("");
                        McfConfigActivity93.this.targetOpOtaFile = "";
                    }
                    saveOTAPathTask saveotapathtask = McfConfigActivity93.this.new saveOTAPathTask();
                    Integer[] numArr = new Integer[1];
                    numArr[0] = Integer.valueOf(message.what == 1 ? 0 : 1);
                    saveotapathtask.execute(numArr);
                    EmUtils.showToast("Clear " + str10 + " Succeed!");
                    McfConfigActivity93.this.rebootModem(message.what == 1 ? true : McfConfigActivity93.this.resetMd);
                } else {
                    StringBuilder sb5 = new StringBuilder();
                    sb5.append("Clear ");
                    sb5.append(str10);
                    sb5.append(" Failed!\n");
                    if (str2 != null) {
                        str5 = "\n" + str2;
                    }
                    sb5.append(str5);
                    String string3 = sb5.toString();
                    Elog.e("McfConfig/McfConfigActivity93", string3);
                    McfConfigActivity93.this.showDialog("Clear " + str10 + " ", string3);
                }
                return;
            }
            String str11 = message.what == 0 ? "OTA" : "OPOTA";
            AsyncResult asyncResult4 = (AsyncResult) message.obj;
            if (asyncResult4.exception == null) {
                Elog.d("McfConfig/McfConfigActivity93", "ATCmd -> Return " + asyncResult4.result.toString());
                z = true;
                if (asyncResult4.result == null || !(asyncResult4.result instanceof String[]) || ((String[]) asyncResult4.result).length <= 0) {
                    str = null;
                } else {
                    Elog.d("McfConfig/McfConfigActivity93", "Apply Result: " + Arrays.toString((String[]) asyncResult4.result));
                    String[] strArrSplit4 = ((String[]) asyncResult4.result)[0].split(",");
                    if (strArrSplit4 != null && strArrSplit4[1] != null && strArrSplit4[2] != null) {
                        int iIntValue5 = Integer.valueOf(strArrSplit4[1].trim()).intValue();
                        int iIntValue6 = Integer.valueOf(strArrSplit4[2].trim()).intValue();
                        if (iIntValue6 == 0 && iIntValue5 == 0) {
                            z = true;
                        } else {
                            StringBuilder sb6 = new StringBuilder();
                            sb6.append("Mcf Ota: ");
                            McfConfigActivity93 mcfConfigActivity98 = McfConfigActivity93.this;
                            sb6.append(mcfConfigActivity98.getStringValueFromMap(iIntValue5, mcfConfigActivity98.mcfApplyOtaResult));
                            sb6.append("\nDsbp: ");
                            McfConfigActivity93 mcfConfigActivity99 = McfConfigActivity93.this;
                            sb6.append(mcfConfigActivity99.getStringValueFromMap(iIntValue6, mcfConfigActivity99.mcfApplyDsbpResult));
                            string2 = sb6.toString();
                            z = false;
                        }
                    }
                    str = string2;
                }
            } else {
                if (asyncResult4.exception.toString().split(":")[1] != null) {
                    str = "AT Command Failed: " + asyncResult4.exception.toString().split(":")[1];
                } else {
                    str = "";
                }
                Elog.e("McfConfig/McfConfigActivity93", "Apply " + str11 + " returned exception:" + asyncResult4.exception);
                z = false;
            }
            if (z) {
                saveOTAPathTask saveotapathtask2 = McfConfigActivity93.this.new saveOTAPathTask();
                Integer[] numArr2 = new Integer[1];
                numArr2[0] = Integer.valueOf(message.what == 0 ? 0 : 1);
                saveotapathtask2.execute(numArr2);
                EmUtils.showToast("Apply  " + str11 + " Succeed!");
                McfConfigActivity93.this.rebootModem(message.what == 0 ? true : McfConfigActivity93.this.resetMd);
            } else {
                StringBuilder sb7 = new StringBuilder();
                sb7.append("Apply ");
                sb7.append(str11);
                sb7.append(" Failed!\n");
                if (str != null) {
                    str5 = "\n" + str;
                }
                sb7.append(str5);
                String string4 = sb7.toString();
                Elog.e("McfConfig/McfConfigActivity93", string4);
                McfConfigActivity93.this.showDialog("Apply " + str11 + " ", string4);
            }
        }
    };

    class loadOTAPathTask extends AsyncTask<Void, Void, Void> {
        loadOTAPathTask() {
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public Void doInBackground(Void... voidArr) {
            McfConfigActivity93.this.getSharedPreference();
            return null;
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(Void r3) {
            McfConfigActivity93.this.otaFile.setText(McfConfigActivity93.this.targetOtaFile);
            McfConfigActivity93.this.opOtaFile.setText(McfConfigActivity93.this.targetOpOtaFile);
            Elog.d("McfConfig/McfConfigActivity93", "Load OTA file path success! OtaFile: " + McfConfigActivity93.this.targetOtaFile + ", OpOtaFile: " + McfConfigActivity93.this.targetOpOtaFile);
        }
    }

    class saveOTAPathTask extends AsyncTask<Integer, Void, Void> {
        saveOTAPathTask() {
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public Void doInBackground(Integer... numArr) {
            Elog.d("McfConfig/McfConfigActivity93", "[saveOTAPathTask] " + numArr[0]);
            McfConfigActivity93.this.saveSharedPreference(numArr[0].intValue());
            return null;
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(Void r3) {
            Elog.d("McfConfig/McfConfigActivity93", "Save OTA file path success!");
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
        Elog.e("McfConfig/McfConfigActivity93", "[checkPathValid] file path is InValid " + str + " suffixList:" + Arrays.toString(strArr));
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void getSharedPreference() {
        this.targetOtaFile = this.mcfConfigSh.getString("ota_file_path", "");
        if (this.phoneid == 1) {
            this.targetOpOtaFile = this.mcfConfigSh.getString("sim2_opota_file_path", "");
        } else {
            this.targetOpOtaFile = this.mcfConfigSh.getString("sim1_opota_file_path", "");
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void rebootModem(boolean z) {
        Elog.d("McfConfig/McfConfigActivity93", "[rebootModem] begining ... needReset:" + z);
        if (z) {
            this.taskSet.add(0);
            EmUtils.rebootModem();
            this.mIsModemEnabled = false;
            startTimer(0, 60);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void saveSharedPreference(int i) {
        SharedPreferences.Editor editorEdit = this.mcfConfigSh.edit();
        if (i == 1) {
            if (this.phoneid == 1) {
                editorEdit.putString("sim2_opota_file_path", this.targetOpOtaFile);
            } else {
                editorEdit.putString("sim1_opota_file_path", this.targetOpOtaFile);
            }
            Elog.d("McfConfig/McfConfigActivity93", "[saveSharedPreference] Save opOtaFile success ! opota_file_path: SIM" + this.phoneid + ":[" + this.targetOpOtaFile + "]");
        } else if (i == 0) {
            editorEdit.putString("ota_file_path", this.targetOtaFile);
            Elog.d("McfConfig/McfConfigActivity93", "[saveSharedPreference] Save otaFile success ota_file_path:" + this.targetOtaFile);
        }
        editorEdit.commit();
    }

    private void selectFile(String str, int i) {
        Elog.d("McfConfig/McfConfigActivity93", "[selectFile] storagePath: " + str);
        McfFileSelectActivity.actionStart(this, str, i);
    }

    private void sendATCommand(String str, int i) {
        String[] strArr = {str, "+EMCFC:"};
        Elog.e("McfConfig/McfConfigActivity93", "[sendATCommand] cmd: " + Arrays.toString(strArr));
        EmUtils.invokeOemRilRequestStringsEm(this.phoneid, strArr, this.mHandler.obtainMessage(i));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showDialog(String str, String str2) {
        if (isFinishing()) {
            return;
        }
        new AlertDialog.Builder(this).setCancelable(true).setTitle(str).setMessage(str2).setPositiveButton(R.string.ok, (DialogInterface.OnClickListener) null).create().show();
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
        Elog.d("McfConfig/McfConfigActivity93", "After timer.start");
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
        Elog.d("McfConfig/McfConfigActivity93", sb.toString());
        if (uri == null) {
            return;
        }
        Elog.d("McfConfig/McfConfigActivity93", "[getUriForFile] path :" + uri.getPath());
    }

    String getStringValueFromMap(int i, HashMap<Integer, String> map) {
        if (map.containsKey(Integer.valueOf(i))) {
            return map.get(Integer.valueOf(i));
        }
        return "" + i;
    }

    public boolean isSimReady(int i) {
        TelephonyManager telephonyManager = (TelephonyManager) getSystemService("phone");
        int simState = i < 0 ? telephonyManager.getSimState() : telephonyManager.getSimState(i);
        Elog.i("McfConfig/McfConfigActivity93", "slotId = " + i + ",simStatus = " + simState);
        return simState != 1;
    }

    @Override // android.app.Activity
    public void onActivityResult(int i, int i2, Intent intent) {
        if (i2 != -1) {
            Elog.e("McfConfig/McfConfigActivity93", "[onActivityResult] error, resultCode: " + i2);
            super.onActivityResult(i, i2, intent);
            return;
        }
        Uri data = intent.getData();
        StringBuilder sb = new StringBuilder();
        sb.append("[getSelectedFilePath] uri: ");
        sb.append(data != null ? data.toString() : "NULL");
        Elog.d("McfConfig/McfConfigActivity93", sb.toString());
        if (data == null) {
            return;
        }
        String path = data.getPath();
        Elog.i("McfConfig/McfConfigActivity93", "[onActivityResult] otaFile: " + path);
        if (i == 0) {
            boolean zCheckPathValid = checkPathValid(path, McfFileSelectActivity.OTA_SUFFIX);
            this.isOtaPathValid = zCheckPathValid;
            if (zCheckPathValid) {
                this.otaFile.setText(path);
                this.targetOtaFile = path;
                Elog.d("McfConfig/McfConfigActivity93", "isOtaPathValid: " + this.isOtaPathValid + ",targetOtaPath :" + this.targetOtaFile);
            } else {
                this.otaFile.setText("");
                showDialog("Select OTA Path: ", "Invalid File! (ex:*.mcfota)");
            }
        } else if (i == 1) {
            boolean zCheckPathValid2 = checkPathValid(path, McfFileSelectActivity.OP_OTA_SUFFIX);
            this.isOpOtaPathValid = zCheckPathValid2;
            if (zCheckPathValid2) {
                this.opOtaFile.setText(path);
                this.targetOpOtaFile = path;
                Elog.d("McfConfig/McfConfigActivity93", "isOpOtaPathValid: " + this.isOpOtaPathValid + ",targetOpOtaPath :" + this.targetOpOtaFile);
            } else {
                this.opOtaFile.setText("");
                showDialog("Select OP-OTA Path: ", "Invalid File! (ex:*.mcfopota)");
            }
        }
        super.onActivityResult(i, i2, intent);
    }

    @Override // android.app.Activity
    public void onBackPressed() {
        if (this.taskSet.contains(0)) {
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
        String strSubstring = "";
        switch (view.getId()) {
            case com.mediatek.engineermode.R.id.add_op_ota_browser /* 2131100033 */:
                selectFile("/mnt/vendor/nvdata/md/mdota", 1);
                break;
            case com.mediatek.engineermode.R.id.add_ota_browser /* 2131100034 */:
                selectFile("/mnt/vendor/nvdata/md/mdota", 0);
                break;
            case com.mediatek.engineermode.R.id.opota_apply /* 2131101149 */:
                Elog.d("McfConfig/McfConfigActivity93", "opota_apply begain");
                this.resetMd = this.opotaResetMdEnable.isChecked();
                String str = (String) this.opOtaFile.getText();
                this.targetOpOtaFile = str;
                boolean zCheckPathValid = checkPathValid(str, McfFileSelectActivity.OP_OTA_SUFFIX);
                this.isOpOtaPathValid = zCheckPathValid;
                if (!zCheckPathValid) {
                    showDialog("Apply Op-OTA Error", "OP-OTA File is invalid!");
                } else if (!this.taskSet.contains(0)) {
                    if (this.resetMd) {
                        String str2 = this.targetOpOtaFile;
                        if (str2 == null || str2.trim().equals("")) {
                            string = "AT+EMCFC=2,\"\",\"\"";
                        } else {
                            int iLastIndexOf = this.targetOpOtaFile.lastIndexOf("/mnt/vendor/nvdata/md/mdota") + "/mnt/vendor/nvdata/md/mdota".length() + 1;
                            StringBuilder sb = new StringBuilder();
                            sb.append("AT+EMCFC=2,");
                            sb.append("\"");
                            sb.append(this.targetOpOtaFile);
                            sb.append("\",\"");
                            if (this.isOpOtaPathValid && iLastIndexOf >= 0) {
                                strSubstring = this.targetOpOtaFile.substring(iLastIndexOf);
                            }
                            sb.append(strSubstring);
                            sb.append("\"");
                            string = sb.toString();
                        }
                    } else {
                        String str3 = this.targetOpOtaFile;
                        if (str3 == null || str3.trim().equals("")) {
                            string = "AT+EMCFC=3,1,1,\"\"";
                        } else {
                            int iLastIndexOf2 = this.targetOpOtaFile.lastIndexOf("/mnt/vendor/nvdata/md/mdota") + "/mnt/vendor/nvdata/md/mdota".length() + 1;
                            StringBuilder sb2 = new StringBuilder();
                            sb2.append("AT+EMCFC=3,1,1,");
                            sb2.append("\"");
                            if (this.isOpOtaPathValid && iLastIndexOf2 >= 0) {
                                strSubstring = this.targetOpOtaFile.substring(iLastIndexOf2);
                            }
                            sb2.append(strSubstring);
                            sb2.append("\"");
                            string = sb2.toString();
                        }
                    }
                    sendATCommand(string, 2);
                } else {
                    showDialog("Please Wait", "Reboot modem is ongoing......");
                }
                break;
            case com.mediatek.engineermode.R.id.opota_clear /* 2131101150 */:
                Elog.d("McfConfig/McfConfigActivity93", "opota_clear begain");
                this.resetMd = this.opotaResetMdEnable.isChecked();
                if (!this.taskSet.contains(0)) {
                    sendATCommand(this.resetMd ? "AT+EMCFC=2,\"\",\"\"" : "AT+EMCFC=3,1,1,\"\"", 3);
                } else {
                    showDialog("Please Wait", "Reboot modem is ongoing......");
                }
                break;
            case com.mediatek.engineermode.R.id.opota_query /* 2131101153 */:
                Elog.d("McfConfig/McfConfigActivity93", "OpOta query begain");
                sendATCommand("AT+EMCFC=4,1", 9);
                break;
            case com.mediatek.engineermode.R.id.ota_apply /* 2131101157 */:
                Elog.d("McfConfig/McfConfigActivity93", "ota_apply begain");
                this.resetMd = true;
                String str4 = (String) this.otaFile.getText();
                this.targetOtaFile = str4;
                boolean zCheckPathValid2 = checkPathValid(str4, McfFileSelectActivity.OTA_SUFFIX);
                this.isOtaPathValid = zCheckPathValid2;
                if (!zCheckPathValid2) {
                    showDialog("Apply OTA Error", "OTA File is invalid!");
                } else if (!this.taskSet.contains(0)) {
                    String str5 = this.targetOtaFile;
                    if (str5 == null || str5.trim().equals("")) {
                        string2 = "AT+EMCFC=1,\"\",\"\"";
                    } else {
                        int iLastIndexOf3 = this.targetOtaFile.lastIndexOf("/mnt/vendor/nvdata/md/mdota") + "/mnt/vendor/nvdata/md/mdota".length() + 1;
                        StringBuilder sb3 = new StringBuilder();
                        sb3.append("AT+EMCFC=1,");
                        sb3.append("\"");
                        sb3.append(this.targetOtaFile);
                        sb3.append("\",\"");
                        if (this.isOtaPathValid && iLastIndexOf3 >= 0) {
                            strSubstring = this.targetOtaFile.substring(iLastIndexOf3);
                        }
                        sb3.append(strSubstring);
                        sb3.append("\"");
                        string2 = sb3.toString();
                    }
                    Elog.d("McfConfig/McfConfigActivity93", "ATCommand: " + string2);
                    sendATCommand(string2, 0);
                } else {
                    showDialog("Please Wait", "Reboot modem is ongoing......");
                }
                break;
            case com.mediatek.engineermode.R.id.ota_clear /* 2131101158 */:
                Elog.d("McfConfig/McfConfigActivity93", "ota_clear begain");
                this.resetMd = true;
                if (!this.taskSet.contains(0)) {
                    sendATCommand("AT+EMCFC=1,\"\",\"\"", 1);
                } else {
                    showDialog("Please Wait", "Reboot modem is ongoing......");
                }
                break;
            case com.mediatek.engineermode.R.id.ota_dump /* 2131101159 */:
                this.dumpBegain = System.currentTimeMillis();
                Elog.d("McfConfig/McfConfigActivity93", "Dump OTA file begain :" + new SimpleDateFormat("HH:mm:ss").format(new Date(this.dumpBegain)));
                sendATCommand("AT+EMCFC=5", 6);
                break;
            case com.mediatek.engineermode.R.id.ota_query /* 2131101163 */:
                Elog.d("McfConfig/McfConfigActivity93", "Ota query begain");
                sendATCommand("AT+EMCFC=4,0", 8);
                break;
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        int capabilitySim;
        super.onCreate(bundle);
        setContentView(com.mediatek.engineermode.R.layout.em_mcf_config_for93);
        this.opotaResetMdEnable = (CheckBox) findViewById(com.mediatek.engineermode.R.id.resetmd_enable);
        this.opotaView = (LinearLayout) findViewById(com.mediatek.engineermode.R.id.mcf_opota_view);
        this.generalView = (LinearLayout) findViewById(com.mediatek.engineermode.R.id.mcf_general_view);
        this.addOtaBtn = (Button) findViewById(com.mediatek.engineermode.R.id.add_ota_browser);
        this.addOpOtaBtn = (Button) findViewById(com.mediatek.engineermode.R.id.add_op_ota_browser);
        this.otaQueryBtn = (Button) findViewById(com.mediatek.engineermode.R.id.ota_query);
        this.opOtaQueryBtn = (Button) findViewById(com.mediatek.engineermode.R.id.opota_query);
        this.addOtaBtn.setOnClickListener(this);
        this.addOpOtaBtn.setOnClickListener(this);
        this.applyOtaBtn = (Button) findViewById(com.mediatek.engineermode.R.id.ota_apply);
        this.clearOtaBtn = (Button) findViewById(com.mediatek.engineermode.R.id.ota_clear);
        this.applyOpOtaBtn = (Button) findViewById(com.mediatek.engineermode.R.id.opota_apply);
        this.clearOpOtaBtn = (Button) findViewById(com.mediatek.engineermode.R.id.opota_clear);
        this.dumpOta = (Button) findViewById(com.mediatek.engineermode.R.id.ota_dump);
        this.applyOtaBtn.setOnClickListener(this);
        this.clearOtaBtn.setOnClickListener(this);
        this.applyOpOtaBtn.setOnClickListener(this);
        this.clearOpOtaBtn.setOnClickListener(this);
        this.dumpOta.setOnClickListener(this);
        this.otaQueryBtn.setOnClickListener(this);
        this.opOtaQueryBtn.setOnClickListener(this);
        this.opOtaFile = (TextView) findViewById(com.mediatek.engineermode.R.id.op_ota_file);
        this.otaFile = (TextView) findViewById(com.mediatek.engineermode.R.id.ota_file);
        int intExtra = getIntent().getIntExtra("mSimType", 0);
        if (intExtra == -1) {
            this.opotaView.setVisibility(8);
            this.generalView.setVisibility(0);
            this.phoneid = ModemCategory.getCapabilitySim();
            this.viewId = 1;
        } else {
            this.opotaView.setVisibility(0);
            this.generalView.setVisibility(8);
            this.phoneid = intExtra;
            this.viewId = 0;
        }
        if (isSimReady(this.phoneid)) {
            capabilitySim = this.phoneid;
        } else {
            capabilitySim = isSimReady((this.phoneid + 1) % 2) ? (this.phoneid + 1) % 2 : ModemCategory.getCapabilitySim();
        }
        Elog.d("McfConfig/McfConfigActivity93", "Selected: Sim" + this.phoneid + ", Ready: Sim" + capabilitySim);
        EmUtils.registerForModemStatusChanged(capabilitySim, this.mHandler, 102);
        EmUtils.registerForUrcInfo(capabilitySim, this.mHandler, 11);
        this.mcfConfigSh = getSharedPreferences("mcf_config_settings", 0);
        new loadOTAPathTask().execute(new Void[0]);
    }

    @Override // android.app.Activity
    public void onDestroy() {
        super.onDestroy();
        Elog.d("McfConfig/McfConfigActivity93", "onDestroy");
        this.taskSet.clear();
        EmUtils.unregisterForUrcInfo(this.readySim);
        EmUtils.unregisterForModemStatusChanged(this.readySim);
    }

    public void startTimer(final int i, int i2) {
        Elog.d("McfConfig/McfConfigActivity93", "waitTime = " + i2 + "ms");
        CountDownTimer countDownTimer = new CountDownTimer((long) (i2 * 1000), 1000L) { // from class: com.mediatek.engineermode.mcfconfig.McfConfigActivity93.6
            @Override // android.os.CountDownTimer
            public void onFinish() {
                Elog.d("McfConfig/McfConfigActivity93", "timer Timeout.......");
                McfConfigActivity93.this.mIsModemEnabled = true;
                if (McfConfigActivity93.this.timer != null) {
                    McfConfigActivity93.this.timer.cancel();
                }
                if (McfConfigActivity93.this.mProgressDialog != null) {
                    McfConfigActivity93.this.mProgressDialog.dismiss();
                    McfConfigActivity93.this.mProgressDialog = null;
                }
                int i3 = i;
                if (i3 == 1) {
                    EmUtils.showToast("Dump OTA timeout!");
                } else if (i3 == 0) {
                    McfConfigActivity93.this.showDialog("Reboot Modem", "Reboot modem timeout!");
                }
                McfConfigActivity93.this.timer = null;
                McfConfigActivity93.this.taskSet.remove(Integer.valueOf(i));
            }

            @Override // android.os.CountDownTimer
            public void onTick(long j) {
                int capabilitySim;
                if (i == 0) {
                    McfConfigActivity93 mcfConfigActivity93 = McfConfigActivity93.this;
                    if (mcfConfigActivity93.isSimReady(mcfConfigActivity93.readySim)) {
                        capabilitySim = McfConfigActivity93.this.readySim;
                    } else {
                        McfConfigActivity93 mcfConfigActivity94 = McfConfigActivity93.this;
                        capabilitySim = mcfConfigActivity94.isSimReady(mcfConfigActivity94.readySim + 1) ? (McfConfigActivity93.this.readySim + 1) % 2 : ModemCategory.getCapabilitySim();
                    }
                    EmRadioHidlAosp.getModemStatus(capabilitySim);
                }
            }
        };
        this.timer = countDownTimer;
        countDownTimer.start();
        Elog.d("McfConfig/McfConfigActivity93", "Start timer for " + i + ", WAIT_TIME=" + i2 + "s");
    }
}
