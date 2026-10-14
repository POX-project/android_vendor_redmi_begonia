package com.mediatek.lbs.em2.ui;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.hardware.SensorManager;
import android.net.Uri;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.os.PersistableBundle;
import android.telephony.CarrierConfigManager;
import android.telephony.SubscriptionManager;
import android.text.Html;
import android.text.InputFilter;
import android.util.Log;
import android.view.MenuItem;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.PopupMenu;
import android.widget.RadioButton;
import android.widget.TextView;
import android.widget.Toast;
import android.widget.ToggleButton;
import com.mediatek.lbs.em2.utils.AgpsConfig;
import com.mediatek.lbs.em2.utils.AgpsInterface;
import com.mediatek.lbs.em2.utils.AgpsProfilingInfo;
import com.mediatek.lbs.em2.utils.AgpsSetting;
import com.mediatek.lbs.em2.utils.CpSetting;
import com.mediatek.lbs.em2.utils.MtkAgpsXmlParser;
import com.mediatek.lbs.em2.utils.SuplProfile;
import com.mediatek.lbs.em2.utils.UpSetting;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.GregorianCalendar;
import java.util.Locale;

/* JADX INFO: loaded from: classes.dex */
public class LbsAgps extends Activity {
    protected static Context sContext;
    protected AgpsInterface mAgpsInterface;
    protected Button mButtonAreaAbort;
    protected Button mButtonAreaStart;
    protected Button mButtonDelay;
    protected Button mButtonHAcc;
    protected Button mButtonLocationAge;
    protected Button mButtonLppeCrowdSourceConfident;
    protected Button mButtonPeriodicAbort;
    protected Button mButtonPeriodicStart;
    protected Button mButtonReset2Default;
    protected Button mButtonResetAgpsd;
    protected ToggleButton mButtonShowQoP;
    protected Button mButtonSlpAddr;
    protected Button mButtonSlpPort;
    protected Button mButtonSlpTemplate;
    protected Button mButtonSuplUt2;
    protected Button mButtonSuplUt3;
    protected Button mButtonSuplVerMinor;
    protected Button mButtonSuplVerSerInd;
    protected Button mButtonTcpKeepAlive;
    protected Button mButtonTestButton;
    protected Button mButtonTriggerTest;
    protected Button mButtonVAcc;
    protected CheckBox mCheckBoxAFLT;
    protected CheckBox mCheckBoxAbeidouEnable;
    protected CheckBox mCheckBoxAgalileoEnable;
    protected CheckBox mCheckBoxAglonassEnable;
    protected CheckBox mCheckBoxAgpsEnable;
    protected CheckBox mCheckBoxAllowNiForGpsOffEnable;
    protected CheckBox mCheckBoxAospPosModeEnable;
    protected CheckBox mCheckBoxAospProfileEnable;
    protected CheckBox mCheckBoxAuto;
    protected CheckBox mCheckBoxAutoProfileEnable;
    protected CheckBox mCheckBoxBeidouSatelliteEnable;
    protected CheckBox mCheckBoxCertFromSdcard;
    protected CheckBox mCheckBoxCertVerify;
    protected CheckBox mCheckBoxCpAutoReset;
    protected CheckBox mCheckBoxDefaultNlpEnable;
    protected CheckBox mCheckBoxE911GpsIconEnable;
    protected CheckBox mCheckBoxECID;
    protected CheckBox mCheckBoxEnableAgps;
    protected CheckBox mCheckBoxEpcMolrPduEnable;
    protected CheckBox mCheckBoxExternalAddr;
    protected CheckBox mCheckBoxForceOtdoaAssistEnable;
    protected CheckBox mCheckBoxGalileoSatelliteEnable;
    protected CheckBox mCheckBoxGlonassSatelliteEnable;
    protected CheckBox mCheckBoxGpsSatelliteEnable;
    protected CheckBox mCheckBoxImsiEnable;
    protected CheckBox mCheckBoxIngoreSiForE911;
    protected CheckBox mCheckBoxLPP;
    protected CheckBox mCheckBoxLbsLogEnable;
    protected CheckBox mCheckBoxLogSensitiveData;
    protected CheckBox mCheckBoxLppeCpDbhEnable;
    protected CheckBox mCheckBoxLppeCpEnable;
    protected CheckBox mCheckBoxLppeCpSensorEnable;
    protected CheckBox mCheckBoxLppeCpSrnEnable;
    protected CheckBox mCheckBoxLppeCpWlanEnable;
    protected CheckBox mCheckBoxLppeHideWifiBtStatus;
    protected CheckBox mCheckBoxLppeNetworkLocationDisable;
    protected CheckBox mCheckBoxLppeUpDbhEnable;
    protected CheckBox mCheckBoxLppeUpEnable;
    protected CheckBox mCheckBoxLppeUpSensorEnable;
    protected CheckBox mCheckBoxLppeUpSrnEnable;
    protected CheckBox mCheckBoxLppeUpWlanEnable;
    protected CheckBox mCheckBoxMSA;
    protected CheckBox mCheckBoxMSB;
    protected CheckBox mCheckBoxMlcNumber;
    protected CheckBox mCheckBoxNiAllow;
    protected CheckBox mCheckBoxNlpSettings2SuplEnable;
    protected CheckBox mCheckBoxOTDOA;
    protected CheckBox mCheckBoxPrivacyOverrideEnable;
    protected CheckBox mCheckBoxRoamingAllow;
    protected CheckBox mCheckBoxSib8Sib16Enable;
    protected CheckBox mCheckBoxSupl2File;
    protected CheckBox mCheckBoxSuplApnEnable;
    protected CheckBox mCheckBoxSyncToSlp;
    protected CheckBox mCheckBoxTls;
    protected CheckBox mCheckBoxUdpEnable;
    protected CheckBox mCheckBoxUpLppIn2g3gDisable;
    protected CheckBox mCheckBoxUpRrlpIn4gDisable;
    protected CheckBox mCheckBoxUpSiDisable;
    private String mGnssProxyPackageName;
    protected LinearLayout mLayoutCdmaSetting;
    protected LinearLayout mLayoutCpSetting;
    protected LinearLayout mLayoutDebug;
    protected LinearLayout mLayoutQoP;
    protected LinearLayout mLayoutSUPL2;
    protected LinearLayout mLayoutUpSetting;
    private PackageManager mPackageManager;
    protected PopupMenu mPopupSlpTemplate;
    protected PopupMenu mPopupSuplUt2;
    protected PopupMenu mPopupSuplUt3;
    protected PopupMenu mPopupSuplVerMinor;
    protected PopupMenu mPopupSuplVerSerInd;
    protected PopupMenu mPopupTestButton;
    protected PopupMenu mPopupTriggerTest;
    protected RadioButton mRadioButtonAssistanceData;
    protected RadioButton mRadioButtonCDMAForce;
    protected RadioButton mRadioButtonCP;
    protected RadioButton mRadioButtonEnter;
    protected RadioButton mRadioButtonInside;
    protected RadioButton mRadioButtonIpV4;
    protected RadioButton mRadioButtonIpV6;
    protected RadioButton mRadioButtonKValue;
    protected RadioButton mRadioButtonLeave;
    protected RadioButton mRadioButtonLocationEstimate;
    protected RadioButton mRadioButtonMSA;
    protected RadioButton mRadioButtonMSB;
    protected RadioButton mRadioButtonMeter;
    protected RadioButton mRadioButtonNoPref;
    protected RadioButton mRadioButtonOutside;
    protected RadioButton mRadioButtonSUPL1;
    protected RadioButton mRadioButtonSUPL2;
    protected RadioButton mRadioButtonTLS10;
    protected RadioButton mRadioButtonTLS11;
    protected RadioButton mRadioButtonTLS12;
    protected RadioButton mRadioButtonUP;
    protected RadioButton mRadioButtonWCDMAPrefer;
    protected TextView mTextLppeServiceInstalled;
    protected TextView mTextViewCpLppeSupported;
    protected TextView mTextViewDelay;
    protected TextView mTextViewEmulatorMode;
    protected TextView mTextViewExternalAddr;
    protected TextView mTextViewGnssLppeSupported;
    protected TextView mTextViewHAcc;
    protected TextView mTextViewLocationAge;
    protected TextView mTextViewLppeCrowdSourceConfident;
    protected TextView mTextViewMlcNumber;
    protected TextView mTextViewProfilingInfo;
    protected TextView mTextViewSlpAddr;
    protected TextView mTextViewSlpPort;
    protected TextView mTextViewSuplUt2;
    protected TextView mTextViewSuplUt3;
    protected TextView mTextViewSuplVerMinor;
    protected TextView mTextViewSuplVerSerInd;
    protected TextView mTextViewTcpKeepAliveInterval;
    protected TextView mTextViewUncaliPresureSupported;
    protected TextView mTextViewVAcc;
    protected MtkAgpsXmlParser mXml;
    protected boolean mIsKValueUnit = true;
    protected boolean mAgpsdExisted = false;
    private Handler mHandler = new Handler() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.3
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (message.what != 0) {
                return;
            }
            LbsAgps.log("handle SHOW_PROXY_APP_PERMISSION_DIALOG");
            LbsAgps.this.showConfirmDialog("MTK Non-Framework LBS", "Non-Framework LBS LOCATION permission is not granted. Some AGPS NI test cases may be failed if it is not granted. Would you like to launch the APP?");
        }
    };
    protected DialogListener slpAddrListener = new DialogListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.115
        @Override // com.mediatek.lbs.em2.ui.LbsAgps.DialogListener
        public void onCancelClick(Dialog dialog, View view, String str) {
            dialog.dismiss();
        }

        @Override // com.mediatek.lbs.em2.ui.LbsAgps.DialogListener
        public void onOKClick(Dialog dialog, View view, String str) {
            if (!str.matches("((?:(?:25[0-5]|2[0-4]\\d|[01]?\\d?\\d)\\.){3}(?:25[0-5]|2[0-4]\\d|[01]?\\d?\\d))") && !str.matches("^((?:[0-9A-Fa-f]{1,4}(?::[0-9A-Fa-f]{1,4})*)?)::((?:[0-9A-Fa-f]{1,4}(?::[0-9A-Fa-f]{1,4})*)?)$") && !str.matches("([a-zA-Z0-9_\\-]{1,63}\\.)+[a-zA-Z0-9_\\-]{1,63}") && !str.equals("")) {
                Toast.makeText(LbsAgps.this.getApplicationContext(), "ERR: The SLP address must be IPv4, IPv6 or FQDN!!", 1).show();
                return;
            }
            LbsAgps.this.mTextViewSlpAddr.setText(str);
            dialog.dismiss();
            LbsAgps.this.updateSuplProfile();
        }
    };
    protected DialogListener slpPortListener = new DialogListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.116
        @Override // com.mediatek.lbs.em2.ui.LbsAgps.DialogListener
        public void onCancelClick(Dialog dialog, View view, String str) {
            dialog.dismiss();
        }

        @Override // com.mediatek.lbs.em2.ui.LbsAgps.DialogListener
        public void onOKClick(Dialog dialog, View view, String str) {
            try {
                int iIntValue = Integer.valueOf(str).intValue();
                if (iIntValue > 65535) {
                    Toast.makeText(LbsAgps.this.getApplicationContext(), "ERR: The SLP port value must be less than 65536!!", 0).show();
                } else {
                    LbsAgps.this.mTextViewSlpPort.setText(String.valueOf(iIntValue));
                    dialog.dismiss();
                    LbsAgps.this.updateSuplProfile();
                }
            } catch (NumberFormatException unused) {
                Toast.makeText(LbsAgps.this.getApplicationContext(), "ERR: Parameters error!!", 0).show();
            }
        }
    };
    protected DialogListener tcpKeepAliveListener = new DialogListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.117
        @Override // com.mediatek.lbs.em2.ui.LbsAgps.DialogListener
        public void onCancelClick(Dialog dialog, View view, String str) {
            dialog.dismiss();
        }

        @Override // com.mediatek.lbs.em2.ui.LbsAgps.DialogListener
        public void onOKClick(Dialog dialog, View view, String str) {
            try {
                int iIntValue = Integer.valueOf(str).intValue();
                if (iIntValue > 65535) {
                    Toast.makeText(LbsAgps.this.getApplicationContext(), "ERR: The TCP keep alive interval value must be less than 65536!!", 0).show();
                } else {
                    LbsAgps.this.mTextViewTcpKeepAliveInterval.setText(String.valueOf(iIntValue));
                    dialog.dismiss();
                    LbsAgps.this.mAgpsInterface.setTcpKeepAlive(iIntValue);
                }
            } catch (NumberFormatException unused) {
                Toast.makeText(LbsAgps.this.getApplicationContext(), "ERR: Parameters error!!", 0).show();
            }
        }
    };
    protected DialogListener lppeCrowdSourceConfidentListener = new DialogListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.118
        @Override // com.mediatek.lbs.em2.ui.LbsAgps.DialogListener
        public void onCancelClick(Dialog dialog, View view, String str) {
            dialog.dismiss();
        }

        @Override // com.mediatek.lbs.em2.ui.LbsAgps.DialogListener
        public void onOKClick(Dialog dialog, View view, String str) {
            try {
                int iIntValue = Integer.valueOf(str).intValue();
                if (iIntValue > 100) {
                    Toast.makeText(LbsAgps.this.getApplicationContext(), "ERR: The Lppe Crowd Source Confident must be less than 100!!", 0).show();
                } else {
                    LbsAgps.this.mTextViewLppeCrowdSourceConfident.setText(String.valueOf(iIntValue));
                    dialog.dismiss();
                    LbsAgps.this.mAgpsInterface.setLppeCrowdSourceConfident(iIntValue);
                }
            } catch (NumberFormatException unused) {
                Toast.makeText(LbsAgps.this.getApplicationContext(), "ERR: Parameters error!!", 0).show();
            }
        }
    };
    protected DialogListener hAccListener = new DialogListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.119
        @Override // com.mediatek.lbs.em2.ui.LbsAgps.DialogListener
        public void onCancelClick(Dialog dialog, View view, String str) {
            dialog.dismiss();
        }

        @Override // com.mediatek.lbs.em2.ui.LbsAgps.DialogListener
        public void onOKClick(Dialog dialog, View view, String str) {
            try {
                int iIntValue = Integer.valueOf(str).intValue();
                if ((!LbsAgps.this.mIsKValueUnit ? LbsAgps.calcKFromMeter(iIntValue) : iIntValue) > 100) {
                    Toast.makeText(LbsAgps.this.getApplicationContext(), "ERR: The K-value must be less than 100!!", 0).show();
                    return;
                }
                LbsAgps.this.mTextViewHAcc.setText(String.valueOf(iIntValue));
                dialog.dismiss();
                LbsAgps.this.updateQoP();
            } catch (NumberFormatException unused) {
                Toast.makeText(LbsAgps.this.getApplicationContext(), "ERR: Parameters error!!", 0).show();
            }
        }
    };
    protected DialogListener vAccListener = new DialogListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.120
        @Override // com.mediatek.lbs.em2.ui.LbsAgps.DialogListener
        public void onCancelClick(Dialog dialog, View view, String str) {
            dialog.dismiss();
        }

        @Override // com.mediatek.lbs.em2.ui.LbsAgps.DialogListener
        public void onOKClick(Dialog dialog, View view, String str) {
            try {
                int iIntValue = Integer.valueOf(str).intValue();
                if ((!LbsAgps.this.mIsKValueUnit ? LbsAgps.calcKFromMeter(iIntValue) : iIntValue) > 100) {
                    Toast.makeText(LbsAgps.this.getApplicationContext(), "ERR: The K-value must be less than 100!!", 0).show();
                    return;
                }
                LbsAgps.this.mTextViewVAcc.setText(String.valueOf(iIntValue));
                dialog.dismiss();
                LbsAgps.this.updateQoP();
            } catch (NumberFormatException unused) {
                Toast.makeText(LbsAgps.this.getApplicationContext(), "ERR: Parameters error!!", 0).show();
            }
        }
    };
    protected DialogListener locationAgeListener = new DialogListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.121
        @Override // com.mediatek.lbs.em2.ui.LbsAgps.DialogListener
        public void onCancelClick(Dialog dialog, View view, String str) {
            dialog.dismiss();
        }

        @Override // com.mediatek.lbs.em2.ui.LbsAgps.DialogListener
        public void onOKClick(Dialog dialog, View view, String str) {
            try {
                LbsAgps.this.mTextViewLocationAge.setText(String.valueOf(Integer.valueOf(str).intValue()));
                dialog.dismiss();
                LbsAgps.this.updateQoP();
            } catch (NumberFormatException unused) {
                Toast.makeText(LbsAgps.this.getApplicationContext(), "ERR: Parameters error!!", 0).show();
            }
        }
    };
    protected DialogListener delayListener = new DialogListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.122
        @Override // com.mediatek.lbs.em2.ui.LbsAgps.DialogListener
        public void onCancelClick(Dialog dialog, View view, String str) {
            dialog.dismiss();
        }

        @Override // com.mediatek.lbs.em2.ui.LbsAgps.DialogListener
        public void onOKClick(Dialog dialog, View view, String str) {
            try {
                int iIntValue = Integer.valueOf(str).intValue();
                if (iIntValue == 36466) {
                    LbsAgps.this.enableDebugMode(!LbsUtility.isDebugModeEnabled(LbsAgps.this.getApplicationContext()));
                    LbsAgps.this.applyAgpsConfigToUI();
                }
                LbsAgps.this.mTextViewDelay.setText(String.valueOf(iIntValue));
                dialog.dismiss();
                LbsAgps.this.updateQoP();
            } catch (NumberFormatException unused) {
                Toast.makeText(LbsAgps.this.getApplicationContext(), "ERR: Parameters error!!", 0).show();
            }
        }
    };
    protected DialogListener externalAddrListener = new DialogListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.123
        @Override // com.mediatek.lbs.em2.ui.LbsAgps.DialogListener
        public void onCancelClick(Dialog dialog, View view, String str) {
            dialog.dismiss();
            LbsAgps.this.mAgpsInterface.setExternalAddr(true, str);
        }

        @Override // com.mediatek.lbs.em2.ui.LbsAgps.DialogListener
        public void onOKClick(Dialog dialog, View view, String str) {
            LbsAgps.this.mTextViewExternalAddr.setText(str);
            dialog.dismiss();
            LbsAgps.this.mAgpsInterface.setExternalAddr(true, str);
        }
    };
    protected DialogListener mlcNumberListener = new DialogListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.124
        @Override // com.mediatek.lbs.em2.ui.LbsAgps.DialogListener
        public void onCancelClick(Dialog dialog, View view, String str) {
            dialog.dismiss();
            LbsAgps.this.mAgpsInterface.setMlcNumber(true, str);
        }

        @Override // com.mediatek.lbs.em2.ui.LbsAgps.DialogListener
        public void onOKClick(Dialog dialog, View view, String str) {
            LbsAgps.this.mTextViewMlcNumber.setText(str);
            dialog.dismiss();
            LbsAgps.this.mAgpsInterface.setMlcNumber(true, str);
        }
    };

    protected interface DialogListener {
        void onCancelClick(Dialog dialog, View view, String str);

        void onOKClick(Dialog dialog, View view, String str);
    }

    protected static int calcKFromMeter(int i) {
        return (int) Math.floor(Math.log((((double) i) / 10.0d) + 1.0d) / Math.log(1.1d));
    }

    protected static int calcMeterFromK(int i) {
        if (i == 1) {
            return 1;
        }
        return (int) Math.ceil((Math.pow(1.1d, i) - 1.0d) * 10.0d);
    }

    private void checkLocationProxyAppPermission() {
        if (!isPackageInstalled(this.mGnssProxyPackageName)) {
            log("Skip dialog, because package is not installed: " + this.mGnssProxyPackageName);
            return;
        }
        boolean zHasLocationPermission = hasLocationPermission(this.mGnssProxyPackageName);
        log("proxyApp = " + this.mGnssProxyPackageName + " proxyAppLocationGranted = " + zHasLocationPermission);
        if (zHasLocationPermission) {
            return;
        }
        sendMessage(0, 0);
    }

    protected static String getTimeString(long j) {
        GregorianCalendar gregorianCalendar = new GregorianCalendar();
        gregorianCalendar.setTimeInMillis(j);
        return String.format(Locale.US, "%02d:%02d:%02d.%03d", Integer.valueOf(gregorianCalendar.get(11)), Integer.valueOf(gregorianCalendar.get(12)), Integer.valueOf(gregorianCalendar.get(13)), Integer.valueOf(gregorianCalendar.get(14)));
    }

    private boolean hasLocationPermission(String str) {
        return this.mPackageManager.checkPermission("android.permission.ACCESS_FINE_LOCATION", str) == 0;
    }

    private boolean isPackageInstalled(String str) {
        try {
            this.mPackageManager.getPackageInfo(str, 0);
            return true;
        } catch (PackageManager.NameNotFoundException unused) {
            return false;
        }
    }

    private boolean isUncaliPressureSupported() {
        SensorManager sensorManager = (SensorManager) sContext.getSystemService("sensor");
        return (sensorManager == null || sensorManager.getDefaultSensor(6) == null) ? false : true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void launchPackageSettings(String str) {
        try {
            Intent intent = new Intent();
            intent.setAction("android.settings.APPLICATION_DETAILS_SETTINGS");
            intent.setData(Uri.fromParts("package", str, null));
            startActivity(intent);
        } catch (Exception unused) {
            Log.e("LocationEM", "Failed to launch package settings: " + this.mGnssProxyPackageName);
            Toast.makeText(getApplicationContext(), "ERR: start settings failed!!", 1).show();
        }
    }

    protected static void log(Object obj) {
        Log.d("LocationEM", "" + obj);
    }

    protected static void loge(Object obj) {
        Log.d("LocationEM", "[agps] ERR: " + obj);
        showToast("ERR: " + obj);
    }

    private void sendMessage(int i, int i2) {
        Message message = new Message();
        message.what = i;
        message.arg1 = i2;
        this.mHandler.sendMessage(message);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showConfirmDialog(CharSequence charSequence, CharSequence charSequence2) {
        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        builder.setTitle(charSequence);
        builder.setMessage(charSequence2);
        builder.setCancelable(false);
        builder.setPositiveButton("Yes", new DialogInterface.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.1
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                try {
                    LbsAgps.this.startActivity(LbsAgps.this.mPackageManager.getLaunchIntentForPackage(LbsAgps.this.mGnssProxyPackageName));
                } catch (Exception unused) {
                    Log.e("LocationEM", "Failed to launch package: " + LbsAgps.this.mGnssProxyPackageName);
                    LbsAgps lbsAgps = LbsAgps.this;
                    lbsAgps.launchPackageSettings(lbsAgps.mGnssProxyPackageName);
                }
            }
        });
        builder.setNegativeButton("No", new DialogInterface.OnClickListener(this) { // from class: com.mediatek.lbs.em2.ui.LbsAgps.2
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
            }
        });
        builder.create().show();
    }

    protected static void showEditDialog(Context context, String str, int i, int i2, final TextView textView, final DialogListener dialogListener) {
        final String string = textView.getText().toString();
        final Dialog dialog = new Dialog(context);
        dialog.setTitle(str);
        dialog.setContentView(R.layout.edit);
        dialog.setCancelable(false);
        dialog.show();
        final EditText editText = (EditText) dialog.findViewById(R.id.EditText_EditButton);
        editText.setFilters(new InputFilter[]{new InputFilter.LengthFilter(i)});
        editText.setInputType(i2);
        editText.setText(string);
        Button button = (Button) dialog.findViewById(R.id.Button_EditButtonOK);
        Button button2 = (Button) dialog.findViewById(R.id.Button_EditButtonCancel);
        button.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.113
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                DialogListener dialogListener2 = dialogListener;
                if (dialogListener2 != null) {
                    dialogListener2.onOKClick(dialog, view, editText.getText().toString());
                } else {
                    textView.setText(editText.getText().toString());
                    dialog.dismiss();
                }
            }
        });
        button2.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.114
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                DialogListener dialogListener2 = dialogListener;
                if (dialogListener2 == null) {
                    dialog.dismiss();
                } else {
                    dialogListener2.onCancelClick(dialog, view, string);
                }
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showLogConfirmDialog() {
        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        builder.setMessage("Enable Log sensitive Data may save sensitve data into files, are you sure to enable it?");
        builder.setCancelable(false);
        builder.setPositiveButton("Yes", new DialogInterface.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.125
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                LbsAgps.this.mCheckBoxLogSensitiveData.setChecked(true);
                LbsAgps.this.mAgpsInterface.setNoSensitiveLog(!LbsAgps.this.mCheckBoxLogSensitiveData.isChecked());
            }
        });
        builder.setNegativeButton("No", new DialogInterface.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.126
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                LbsAgps.this.mCheckBoxLogSensitiveData.setChecked(false);
            }
        });
        builder.create().show();
    }

    protected static void showToast(Object obj) {
        Toast toastMakeText = Toast.makeText(sContext, "" + obj, 1);
        toastMakeText.setGravity(17, 0, 0);
        toastMakeText.show();
    }

    protected void addOnClickListener() {
        this.mButtonTriggerTest.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.11
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mPopupTriggerTest.show();
            }
        });
        this.mButtonTestButton.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.12
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mPopupTestButton.show();
            }
        });
        this.mButtonResetAgpsd.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.13
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mAgpsInterface.resetAgpsd();
                LbsAgps.this.applyAgpsConfigToUI();
            }
        });
        this.mCheckBoxEnableAgps.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.14
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setAgpsEnabled(lbsAgps.mCheckBoxEnableAgps.isChecked());
            }
        });
        this.mRadioButtonUP.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.15
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mAgpsInterface.setProtocol(0);
                LbsAgps.this.setLayoutDependency();
            }
        });
        this.mRadioButtonCP.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.16
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mAgpsInterface.setProtocol(1);
                LbsAgps.this.setLayoutDependency();
            }
        });
        this.mRadioButtonWCDMAPrefer.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.17
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mAgpsInterface.setCdmaPref(0);
                LbsAgps.this.setLayoutDependency();
            }
        });
        this.mRadioButtonCDMAForce.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.18
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mAgpsInterface.setCdmaPref(2);
                LbsAgps.this.setLayoutDependency();
            }
        });
        this.mRadioButtonMSA.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.19
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mAgpsInterface.setUpPrefMethod(0);
            }
        });
        this.mRadioButtonMSB.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.20
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mAgpsInterface.setUpPrefMethod(1);
            }
        });
        this.mRadioButtonNoPref.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.21
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mAgpsInterface.setUpPrefMethod(2);
            }
        });
        this.mCheckBoxMSA.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.22
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setPosTechnologyMSA(lbsAgps.mCheckBoxMSA.isChecked());
            }
        });
        this.mCheckBoxMSB.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.23
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setPosTechnologyMSB(lbsAgps.mCheckBoxMSB.isChecked());
            }
        });
        this.mCheckBoxECID.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.24
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setPosTechnologyECID(lbsAgps.mCheckBoxECID.isChecked());
            }
        });
        this.mCheckBoxOTDOA.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.25
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setPosTechnologyOTDOA(lbsAgps.mCheckBoxOTDOA.isChecked());
            }
        });
        this.mCheckBoxAuto.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.26
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setPosTechnologyAutonomous(lbsAgps.mCheckBoxAuto.isChecked());
            }
        });
        this.mCheckBoxAFLT.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.27
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setPosTechnologyAFLT(lbsAgps.mCheckBoxAFLT.isChecked());
            }
        });
        this.mCheckBoxLPP.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.28
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setLppEnable(lbsAgps.mCheckBoxLPP.isChecked());
            }
        });
        this.mRadioButtonSUPL1.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.29
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mAgpsInterface.setSuplVersion(1);
                LbsAgps.this.setLayoutDependency();
            }
        });
        this.mRadioButtonSUPL2.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.30
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mAgpsInterface.setSuplVersion(2);
                LbsAgps.this.setLayoutDependency();
            }
        });
        this.mRadioButtonTLS10.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.31
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mAgpsInterface.setTlsVersion(0);
                LbsAgps.this.setLayoutDependency();
            }
        });
        this.mRadioButtonTLS11.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.32
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mAgpsInterface.setTlsVersion(1);
                LbsAgps.this.setLayoutDependency();
            }
        });
        this.mRadioButtonTLS12.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.33
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mAgpsInterface.setTlsVersion(2);
                LbsAgps.this.setLayoutDependency();
            }
        });
        this.mCheckBoxCertVerify.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.34
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setCertVerify(lbsAgps.mCheckBoxCertVerify.isChecked());
                LbsAgps.this.setLayoutDependency();
            }
        });
        this.mCheckBoxUdpEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.35
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setUdpEnable(lbsAgps.mCheckBoxUdpEnable.isChecked());
                LbsAgps.this.setLayoutDependency();
                if (LbsAgps.this.mCheckBoxUdpEnable.isChecked()) {
                    Toast.makeText(LbsAgps.this.getApplicationContext(), "WARNING: after you enable UDP for SUPL, please do not run CTS or you may get the failure on netstat test case", 1).show();
                } else {
                    Toast.makeText(LbsAgps.this.getApplicationContext(), "WARNING: To cancel the UDP binding, you need to re-start your device", 1).show();
                }
            }
        });
        this.mButtonSuplUt2.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.36
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mPopupSuplUt2.show();
            }
        });
        this.mButtonSuplUt3.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.37
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mPopupSuplUt3.show();
            }
        });
        this.mButtonSlpTemplate.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.38
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mPopupSlpTemplate.show();
            }
        });
        this.mButtonSlpAddr.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.39
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                LbsAgps.showEditDialog(lbsAgps, "Edit SLP Address", 127, 1, lbsAgps.mTextViewSlpAddr, lbsAgps.slpAddrListener);
            }
        });
        this.mButtonSlpPort.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.40
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                LbsAgps.showEditDialog(lbsAgps, "Edit SLP Port", 5, 2, lbsAgps.mTextViewSlpPort, lbsAgps.slpPortListener);
            }
        });
        this.mButtonTcpKeepAlive.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.41
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                LbsAgps.showEditDialog(lbsAgps, "Edit TCP Keep Alive Interval", 3, 2, lbsAgps.mTextViewTcpKeepAliveInterval, lbsAgps.tcpKeepAliveListener);
            }
        });
        this.mButtonLppeCrowdSourceConfident.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.42
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                LbsAgps.showEditDialog(lbsAgps, "Lppe Crowd Source Confident", 3, 2, lbsAgps.mTextViewLppeCrowdSourceConfident, lbsAgps.lppeCrowdSourceConfidentListener);
            }
        });
        this.mCheckBoxTls.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.43
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.updateSuplProfile();
            }
        });
        this.mButtonSuplVerMinor.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.44
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mPopupSuplVerMinor.show();
            }
        });
        this.mButtonSuplVerSerInd.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.45
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mPopupSuplVerSerInd.show();
            }
        });
        this.mButtonPeriodicStart.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.46
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mAgpsInterface.startPeriodic();
            }
        });
        this.mButtonPeriodicAbort.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.47
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mAgpsInterface.stopPeriodic();
            }
        });
        this.mButtonAreaStart.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.48
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.startAreaEvent(lbsAgps.getAreaEventType());
            }
        });
        this.mButtonAreaAbort.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.49
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mAgpsInterface.stopAreaEvent();
            }
        });
        this.mRadioButtonEnter.setOnClickListener(new View.OnClickListener(this) { // from class: com.mediatek.lbs.em2.ui.LbsAgps.50
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
            }
        });
        this.mRadioButtonInside.setOnClickListener(new View.OnClickListener(this) { // from class: com.mediatek.lbs.em2.ui.LbsAgps.51
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
            }
        });
        this.mRadioButtonOutside.setOnClickListener(new View.OnClickListener(this) { // from class: com.mediatek.lbs.em2.ui.LbsAgps.52
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
            }
        });
        this.mRadioButtonLeave.setOnClickListener(new View.OnClickListener(this) { // from class: com.mediatek.lbs.em2.ui.LbsAgps.53
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
            }
        });
        this.mButtonShowQoP.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.54
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.setLayoutDependency();
            }
        });
        this.mRadioButtonKValue.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.55
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                if (lbsAgps.mIsKValueUnit) {
                    return;
                }
                lbsAgps.mIsKValueUnit = true;
                int iCalcKFromMeter = LbsAgps.calcKFromMeter(Integer.valueOf(lbsAgps.mTextViewHAcc.getText().toString()).intValue());
                LbsAgps.this.mTextViewHAcc.setText("" + iCalcKFromMeter);
                int iCalcKFromMeter2 = LbsAgps.calcKFromMeter(Integer.valueOf(LbsAgps.this.mTextViewVAcc.getText().toString()).intValue());
                LbsAgps.this.mTextViewVAcc.setText("" + iCalcKFromMeter2);
            }
        });
        this.mRadioButtonMeter.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.56
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                if (lbsAgps.mIsKValueUnit) {
                    lbsAgps.mIsKValueUnit = false;
                    int iCalcMeterFromK = LbsAgps.calcMeterFromK(Integer.valueOf(lbsAgps.mTextViewHAcc.getText().toString()).intValue());
                    LbsAgps.this.mTextViewHAcc.setText("" + iCalcMeterFromK);
                    int iCalcMeterFromK2 = LbsAgps.calcMeterFromK(Integer.valueOf(LbsAgps.this.mTextViewVAcc.getText().toString()).intValue());
                    LbsAgps.this.mTextViewVAcc.setText("" + iCalcMeterFromK2);
                }
            }
        });
        this.mButtonHAcc.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.57
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                LbsAgps.showEditDialog(lbsAgps, "Edit Horizontal Acuuracy", 5, 2, lbsAgps.mTextViewHAcc, lbsAgps.hAccListener);
            }
        });
        this.mButtonVAcc.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.58
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                LbsAgps.showEditDialog(lbsAgps, "Edit Vertical Acuuracy", 5, 2, lbsAgps.mTextViewVAcc, lbsAgps.vAccListener);
            }
        });
        this.mButtonLocationAge.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.59
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                LbsAgps.showEditDialog(lbsAgps, "Edit Location Age", 5, 2, lbsAgps.mTextViewLocationAge, lbsAgps.locationAgeListener);
            }
        });
        this.mButtonDelay.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.60
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                LbsAgps.showEditDialog(lbsAgps, "Edit Delay", 5, 2, lbsAgps.mTextViewDelay, lbsAgps.delayListener);
            }
        });
        this.mRadioButtonLocationEstimate.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.61
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mAgpsInterface.setMolrPosMethod(0);
            }
        });
        this.mRadioButtonAssistanceData.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.62
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mAgpsInterface.setMolrPosMethod(1);
            }
        });
        this.mCheckBoxExternalAddr.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.63
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (LbsAgps.this.mCheckBoxExternalAddr.isChecked()) {
                    LbsAgps lbsAgps = LbsAgps.this;
                    LbsAgps.showEditDialog(lbsAgps, "Edit External Address", 19, 1, lbsAgps.mTextViewExternalAddr, lbsAgps.externalAddrListener);
                } else {
                    LbsAgps lbsAgps2 = LbsAgps.this;
                    lbsAgps2.mAgpsInterface.setExternalAddr(false, lbsAgps2.mTextViewExternalAddr.getText().toString());
                }
            }
        });
        this.mCheckBoxMlcNumber.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.64
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (LbsAgps.this.mCheckBoxMlcNumber.isChecked()) {
                    LbsAgps lbsAgps = LbsAgps.this;
                    LbsAgps.showEditDialog(lbsAgps, "Edit MLC Number", 19, 1, lbsAgps.mTextViewMlcNumber, lbsAgps.mlcNumberListener);
                } else {
                    LbsAgps lbsAgps2 = LbsAgps.this;
                    lbsAgps2.mAgpsInterface.setMlcNumber(false, lbsAgps2.mTextViewMlcNumber.getText().toString());
                }
            }
        });
        this.mCheckBoxCpAutoReset.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.65
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setCpAutoReset(lbsAgps.mCheckBoxCpAutoReset.isChecked());
            }
        });
        this.mCheckBoxEpcMolrPduEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.66
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setEpcMolrPduEnable(lbsAgps.mCheckBoxEpcMolrPduEnable.isChecked());
            }
        });
        this.mCheckBoxNiAllow.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.67
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setAllowNI(lbsAgps.mCheckBoxNiAllow.isChecked());
            }
        });
        this.mCheckBoxRoamingAllow.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.68
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setAllowRoaming(lbsAgps.mCheckBoxRoamingAllow.isChecked());
            }
        });
        this.mCheckBoxSupl2File.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.69
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setSupl2file(lbsAgps.mCheckBoxSupl2File.isChecked());
            }
        });
        this.mCheckBoxLogSensitiveData.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.70
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (LbsAgps.this.mCheckBoxLogSensitiveData.isChecked()) {
                    LbsAgps.this.showLogConfirmDialog();
                } else {
                    LbsAgps.this.mAgpsInterface.setNoSensitiveLog(!LbsAgps.this.mCheckBoxLogSensitiveData.isChecked());
                }
            }
        });
        this.mCheckBoxCertFromSdcard.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.71
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setCertFromSdcard(lbsAgps.mCheckBoxCertFromSdcard.isChecked());
                if (LbsAgps.this.mCheckBoxCertFromSdcard.isChecked()) {
                    return;
                }
                Toast.makeText(LbsAgps.this.getApplicationContext(), "To disable this feature, please reboot your phone", 0).show();
            }
        });
        this.mCheckBoxAutoProfileEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.72
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setAutoProfileEnable(lbsAgps.mCheckBoxAutoProfileEnable.isChecked());
            }
        });
        this.mCheckBoxSuplApnEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.73
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setSuplDedicatedApnEnable(lbsAgps.mCheckBoxSuplApnEnable.isChecked());
            }
        });
        this.mCheckBoxSyncToSlp.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.74
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setSyncToSlpEnable(lbsAgps.mCheckBoxSyncToSlp.isChecked());
            }
        });
        this.mCheckBoxImsiEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.75
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setImsiEnable(lbsAgps.mCheckBoxImsiEnable.isChecked());
            }
        });
        this.mCheckBoxE911GpsIconEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.76
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setE911GpsIconEnable(lbsAgps.mCheckBoxE911GpsIconEnable.isChecked());
            }
        });
        this.mCheckBoxLppeHideWifiBtStatus.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.77
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setLppeHideWifiBtStatus(lbsAgps.mCheckBoxLppeHideWifiBtStatus.isChecked());
            }
        });
        this.mCheckBoxLppeNetworkLocationDisable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.78
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setLppeNetworkLocationDisable(lbsAgps.mCheckBoxLppeNetworkLocationDisable.isChecked());
            }
        });
        this.mCheckBoxLppeCpEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.79
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setLppeCpEnable(lbsAgps.mCheckBoxLppeCpEnable.isChecked());
            }
        });
        this.mCheckBoxLppeUpEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.80
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setLppeUpEnable(lbsAgps.mCheckBoxLppeUpEnable.isChecked());
            }
        });
        this.mCheckBoxAospProfileEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.81
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setAospProfileEnable(lbsAgps.mCheckBoxAospProfileEnable.isChecked());
            }
        });
        this.mCheckBoxNlpSettings2SuplEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.82
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setBindNlpSettingToSupl(lbsAgps.mCheckBoxNlpSettings2SuplEnable.isChecked());
            }
        });
        this.mCheckBoxLbsLogEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.83
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setLbsLogEnable(lbsAgps.mCheckBoxLbsLogEnable.isChecked());
            }
        });
        this.mCheckBoxIngoreSiForE911.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.84
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setIngoreSiForE911(lbsAgps.mCheckBoxIngoreSiForE911.isChecked());
            }
        });
        this.mCheckBoxLppeCpWlanEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.85
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setLppeCpWlanEnable(lbsAgps.mCheckBoxLppeCpWlanEnable.isChecked());
            }
        });
        this.mCheckBoxLppeCpSrnEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.86
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setLppeCpSrnEnable(lbsAgps.mCheckBoxLppeCpSrnEnable.isChecked());
            }
        });
        this.mCheckBoxLppeCpSensorEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.87
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setLppeCpSensorEnable(lbsAgps.mCheckBoxLppeCpSensorEnable.isChecked());
            }
        });
        this.mCheckBoxLppeCpDbhEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.88
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setLppeCpDbhEnable(lbsAgps.mCheckBoxLppeCpDbhEnable.isChecked());
            }
        });
        this.mCheckBoxLppeUpWlanEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.89
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setLppeUpWlanEnable(lbsAgps.mCheckBoxLppeUpWlanEnable.isChecked());
            }
        });
        this.mCheckBoxLppeUpSrnEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.90
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setLppeUpSrnEnable(lbsAgps.mCheckBoxLppeUpSrnEnable.isChecked());
            }
        });
        this.mCheckBoxLppeUpSensorEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.91
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setLppeUpSensorEnable(lbsAgps.mCheckBoxLppeUpSensorEnable.isChecked());
            }
        });
        this.mCheckBoxLppeUpDbhEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.92
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setLppeUpDbhEnable(lbsAgps.mCheckBoxLppeUpDbhEnable.isChecked());
            }
        });
        this.mCheckBoxUpLppIn2g3gDisable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.93
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setUpLppIn2g3gDisable(lbsAgps.mCheckBoxUpLppIn2g3gDisable.isChecked());
            }
        });
        this.mCheckBoxUpRrlpIn4gDisable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.94
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setUpRrlpIn4gDisable(lbsAgps.mCheckBoxUpRrlpIn4gDisable.isChecked());
            }
        });
        this.mCheckBoxUpSiDisable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.95
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setUpSiDisable(lbsAgps.mCheckBoxUpSiDisable.isChecked());
            }
        });
        this.mCheckBoxDefaultNlpEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.96
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setDefaultNlpEnable(lbsAgps.mCheckBoxDefaultNlpEnable.isChecked());
            }
        });
        this.mCheckBoxForceOtdoaAssistEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.97
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setForceOtdoaAssistReq(lbsAgps.mCheckBoxForceOtdoaAssistEnable.isChecked());
            }
        });
        this.mCheckBoxAospPosModeEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.98
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setAospPosModeEnable(lbsAgps.mCheckBoxAospPosModeEnable.isChecked());
            }
        });
        this.mCheckBoxPrivacyOverrideEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.99
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setPrivacyOverrideMode(lbsAgps.mCheckBoxPrivacyOverrideEnable.isChecked() ? 65535 : 0);
            }
        });
        this.mCheckBoxAllowNiForGpsOffEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.100
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setAllowNiForGpsOff(lbsAgps.mCheckBoxAllowNiForGpsOffEnable.isChecked());
            }
        });
        this.mRadioButtonIpV6.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.101
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mAgpsInterface.setIpVersionPrefer(0);
            }
        });
        this.mRadioButtonIpV4.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.102
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mAgpsInterface.setIpVersionPrefer(1);
            }
        });
        this.mCheckBoxSib8Sib16Enable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.103
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setSib8Sib16Enable(lbsAgps.mCheckBoxSib8Sib16Enable.isChecked());
            }
        });
        this.mCheckBoxGpsSatelliteEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.104
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mCheckBoxAgpsEnable.setEnabled(lbsAgps.mCheckBoxGpsSatelliteEnable.isChecked());
                LbsAgps lbsAgps2 = LbsAgps.this;
                lbsAgps2.mAgpsInterface.setGpsSatelliteEnable(lbsAgps2.mCheckBoxGpsSatelliteEnable.isChecked());
            }
        });
        this.mCheckBoxGlonassSatelliteEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.105
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mCheckBoxAglonassEnable.setEnabled(lbsAgps.mCheckBoxGlonassSatelliteEnable.isChecked());
                LbsAgps lbsAgps2 = LbsAgps.this;
                lbsAgps2.mAgpsInterface.setGlonassSatelliteEnable(lbsAgps2.mCheckBoxGlonassSatelliteEnable.isChecked());
            }
        });
        this.mCheckBoxBeidouSatelliteEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.106
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mCheckBoxAbeidouEnable.setEnabled(lbsAgps.mCheckBoxBeidouSatelliteEnable.isChecked());
                LbsAgps lbsAgps2 = LbsAgps.this;
                lbsAgps2.mAgpsInterface.setBeidouSatelliteEnable(lbsAgps2.mCheckBoxBeidouSatelliteEnable.isChecked());
            }
        });
        this.mCheckBoxGalileoSatelliteEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.107
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mCheckBoxAgalileoEnable.setEnabled(lbsAgps.mCheckBoxGalileoSatelliteEnable.isChecked());
                LbsAgps lbsAgps2 = LbsAgps.this;
                lbsAgps2.mAgpsInterface.setGalileoSatelliteEnable(lbsAgps2.mCheckBoxGalileoSatelliteEnable.isChecked());
            }
        });
        this.mCheckBoxAgpsEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.108
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setAgpsSatelliteEnable(lbsAgps.mCheckBoxAgpsEnable.isChecked());
            }
        });
        this.mCheckBoxAglonassEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.109
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setAglonassSatelliteEnable(lbsAgps.mCheckBoxAglonassEnable.isChecked());
            }
        });
        this.mCheckBoxAbeidouEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.110
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setAbeidouSatelliteEnable(lbsAgps.mCheckBoxAbeidouEnable.isChecked());
            }
        });
        this.mCheckBoxAgalileoEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.111
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps lbsAgps = LbsAgps.this;
                lbsAgps.mAgpsInterface.setAgalileoSatelliteEnable(lbsAgps.mCheckBoxAgalileoEnable.isChecked());
            }
        });
        this.mButtonReset2Default.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.112
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsAgps.this.mAgpsInterface.setResetToDefault();
                LbsAgps.this.applyAgpsConfigToUI();
            }
        });
    }

    protected void agpsInterfaceAutoUT() {
        this.mAgpsInterface.setResetToDefault();
        AgpsConfig agpsConfig = this.mAgpsInterface.getAgpsConfig();
        compareAgpsConfig(agpsConfig, this.mXml.getAgpsConfig());
        compareSuplProfile(agpsConfig.curSuplProfile, this.mAgpsInterface.getSuplProfile());
        this.mAgpsInterface.setAgpsEnabled(false);
        agpsConfig.agpsSetting.agpsEnable = false;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setAgpsEnabled(true);
        agpsConfig.agpsSetting.agpsEnable = true;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setAllowNI(false);
        agpsConfig.upSetting.niRequest = false;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setAllowNI(true);
        agpsConfig.upSetting.niRequest = true;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setAllowRoaming(false);
        agpsConfig.upSetting.roaming = false;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setAllowRoaming(true);
        agpsConfig.upSetting.roaming = true;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setCdmaPref(0);
        agpsConfig.upSetting.cdmaPreferred = 0;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setCdmaPref(1);
        agpsConfig.upSetting.cdmaPreferred = 1;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setCdmaPref(2);
        agpsConfig.upSetting.cdmaPreferred = 2;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setCpAutoReset(false);
        agpsConfig.cpSetting.cpAutoReset = false;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setCpAutoReset(true);
        agpsConfig.cpSetting.cpAutoReset = true;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setExternalAddr(false, "123");
        CpSetting cpSetting = agpsConfig.cpSetting;
        cpSetting.externalAddrEnable = false;
        cpSetting.externalAddr = "123";
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setExternalAddr(true, "abc");
        CpSetting cpSetting2 = agpsConfig.cpSetting;
        cpSetting2.externalAddrEnable = true;
        cpSetting2.externalAddr = "abc";
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setMlcNumber(false, "123");
        CpSetting cpSetting3 = agpsConfig.cpSetting;
        cpSetting3.mlcNumberEnable = false;
        cpSetting3.mlcNumber = "123";
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setMlcNumber(true, "abc");
        CpSetting cpSetting4 = agpsConfig.cpSetting;
        cpSetting4.mlcNumberEnable = true;
        cpSetting4.mlcNumber = "abc";
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setMolrPosMethod(0);
        agpsConfig.cpSetting.molrPosMethod = 0;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setMolrPosMethod(1);
        agpsConfig.cpSetting.molrPosMethod = 1;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setPosTechnologyECID(false);
        agpsConfig.upSetting.ecidEnable = false;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setPosTechnologyECID(true);
        agpsConfig.upSetting.ecidEnable = true;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setPosTechnologyMSA(false);
        agpsConfig.upSetting.msaEnable = false;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setPosTechnologyMSA(true);
        agpsConfig.upSetting.msaEnable = true;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setPosTechnologyMSB(false);
        agpsConfig.upSetting.msbEnable = false;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setPosTechnologyMSB(true);
        agpsConfig.upSetting.msbEnable = true;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setPosTechnologyOTDOA(false);
        agpsConfig.upSetting.otdoaEnable = false;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setPosTechnologyOTDOA(true);
        agpsConfig.upSetting.otdoaEnable = true;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setProtocol(1);
        agpsConfig.agpsSetting.agpsProtocol = 1;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setProtocol(0);
        agpsConfig.agpsSetting.agpsProtocol = 0;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setQop(1, 2, 3, 4);
        UpSetting upSetting = agpsConfig.upSetting;
        upSetting.qopHacc = 1;
        upSetting.qopVacc = 2;
        upSetting.qopLocAge = 3;
        upSetting.qopDelay = 4;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setSupl2file(false);
        agpsConfig.upSetting.suplLog = false;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setSupl2file(true);
        agpsConfig.upSetting.suplLog = true;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        SuplProfile suplProfile = new SuplProfile();
        suplProfile.name = "abc";
        suplProfile.addr = "www.hugo.com";
        suplProfile.port = 12345;
        suplProfile.tls = true;
        suplProfile.mccMnc = "12345";
        suplProfile.appId = "appId";
        suplProfile.providerId = "providerID";
        suplProfile.defaultApn = "default";
        suplProfile.optionalApn = "opt1";
        suplProfile.optionalApn2 = "opt2";
        suplProfile.addressType = "addrType";
        this.mAgpsInterface.setSuplProfile(suplProfile);
        agpsConfig.curSuplProfile = suplProfile;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        suplProfile.name = "abc1";
        suplProfile.addr = "www.hugo.com1";
        suplProfile.port = 1234;
        suplProfile.tls = false;
        suplProfile.mccMnc = "1234";
        suplProfile.appId = "appId1";
        suplProfile.providerId = "providerID1";
        suplProfile.defaultApn = "default1";
        suplProfile.optionalApn = "opt11";
        suplProfile.optionalApn2 = "opt21";
        suplProfile.addressType = null;
        this.mAgpsInterface.setSuplProfile(suplProfile);
        agpsConfig.curSuplProfile = suplProfile;
        suplProfile.addressType = "";
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setSuplProfile("abc", 444, false);
        SuplProfile suplProfile2 = agpsConfig.curSuplProfile;
        suplProfile2.addr = "abc";
        suplProfile2.port = 444;
        suplProfile2.tls = false;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setSuplProfile("123", 555, true);
        SuplProfile suplProfile3 = agpsConfig.curSuplProfile;
        suplProfile3.addr = "123";
        suplProfile3.port = 555;
        suplProfile3.tls = true;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setSuplVersion(1);
        agpsConfig.upSetting.suplVersion = 1;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setSuplVersion(2);
        agpsConfig.upSetting.suplVersion = 2;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setUpPrefMethod(0);
        agpsConfig.upSetting.prefMethod = 0;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setUpPrefMethod(1);
        agpsConfig.upSetting.prefMethod = 1;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.setUpPrefMethod(2);
        agpsConfig.upSetting.prefMethod = 2;
        compareAgpsConfig(agpsConfig, this.mAgpsInterface.getAgpsConfig());
        this.mAgpsInterface.getAgpsProfilingInfo();
        if (!stringEquals(this.mAgpsInterface.getSystemProperty("abc__", "def"), "def")) {
            throw new RuntimeException("getSystemProperty failed");
        }
        try {
            this.mAgpsInterface.coderTest();
        } catch (IOException e) {
            e.printStackTrace();
        }
        this.mAgpsInterface.getEmulatorMode();
        this.mAgpsInterface.setResetToDefault();
        applyAgpsConfigToUI();
        showToast("agpsInterfaceAutoUT test done");
    }

    protected void applyAgpsConfigToUI() {
        AgpsInterface agpsInterface = this.mAgpsInterface;
        if (agpsInterface == null) {
            loge("agpsInterface is null");
            return;
        }
        int emulatorMode = agpsInterface.getEmulatorMode();
        if (emulatorMode != 0) {
            if (emulatorMode == 1) {
                this.mTextViewEmulatorMode.setText("EmulatorMode=[Gemini]");
                this.mTextViewEmulatorMode.setTextColor(-65536);
            } else if (emulatorMode == 2) {
                this.mTextViewEmulatorMode.setText("EmulatorMode=[Dual Talk]");
                this.mTextViewEmulatorMode.setTextColor(-65536);
            } else if (emulatorMode == 3) {
                this.mTextViewEmulatorMode.setText("EmulatorMode=[COMPORT]");
                this.mTextViewEmulatorMode.setTextColor(-65536);
            }
        } else if (LbsUtility.isDebugModeEnabled(this)) {
            this.mTextViewEmulatorMode.setText("EmulatorMode=[Off]");
            this.mTextViewEmulatorMode.setTextColor(-16711936);
        } else {
            this.mTextViewEmulatorMode.setText("");
        }
        AgpsConfig agpsConfigV24 = this.mAgpsInterface.getAgpsConfigV24();
        this.mCheckBoxEnableAgps.setChecked(agpsConfigV24.getAgpsSetting().agpsEnable);
        if (agpsConfigV24.getAgpsSetting().agpsProtocol == 0) {
            this.mRadioButtonUP.setChecked(true);
        } else {
            this.mRadioButtonCP.setChecked(true);
        }
        if (agpsConfigV24.getUpSetting().cdmaPreferred == 0 || agpsConfigV24.getUpSetting().cdmaPreferred == 1) {
            this.mRadioButtonWCDMAPrefer.setChecked(true);
        } else {
            this.mRadioButtonCDMAForce.setChecked(true);
        }
        if (agpsConfigV24.getUpSetting().prefMethod == 0) {
            this.mRadioButtonMSA.setChecked(true);
        } else if (agpsConfigV24.getUpSetting().prefMethod == 1) {
            this.mRadioButtonMSB.setChecked(true);
        } else {
            this.mRadioButtonNoPref.setChecked(true);
        }
        this.mCheckBoxMSA.setChecked(agpsConfigV24.getUpSetting().msaEnable);
        this.mCheckBoxMSB.setChecked(agpsConfigV24.getUpSetting().msbEnable);
        this.mCheckBoxECID.setChecked(agpsConfigV24.getUpSetting().ecidEnable);
        this.mCheckBoxOTDOA.setChecked(agpsConfigV24.getUpSetting().otdoaEnable);
        this.mCheckBoxAuto.setChecked(agpsConfigV24.getUpSetting().autonomousEnable);
        this.mCheckBoxAFLT.setChecked(agpsConfigV24.getUpSetting().afltEnable);
        this.mCheckBoxLPP.setChecked(agpsConfigV24.getUpSetting().lppEnable);
        if (agpsConfigV24.getUpSetting().suplVersion == 1) {
            this.mRadioButtonSUPL1.setChecked(true);
        } else {
            this.mRadioButtonSUPL2.setChecked(true);
        }
        if (agpsConfigV24.getUpSetting().tlsVersion == 0) {
            this.mRadioButtonTLS10.setChecked(true);
        } else if (agpsConfigV24.getUpSetting().tlsVersion == 1) {
            this.mRadioButtonTLS11.setChecked(true);
        } else {
            this.mRadioButtonTLS12.setChecked(true);
        }
        this.mCheckBoxCertVerify.setChecked(agpsConfigV24.getUpSetting().caEnable);
        this.mCheckBoxUdpEnable.setChecked(agpsConfigV24.getUpSetting().udpEnable);
        this.mTextViewSuplUt2.setText(String.valueOf((int) agpsConfigV24.getUpSetting().ut2));
        this.mTextViewSuplUt3.setText(String.valueOf((int) agpsConfigV24.getUpSetting().ut3));
        this.mTextViewSuplVerMinor.setText(String.valueOf((int) agpsConfigV24.getUpSetting().suplVerMinor));
        this.mTextViewSuplVerSerInd.setText(String.valueOf((int) agpsConfigV24.getUpSetting().suplVerSerInd));
        this.mTextViewSlpAddr.setText(agpsConfigV24.getCurSuplProfile().addr);
        this.mTextViewSlpPort.setText(String.valueOf(agpsConfigV24.getCurSuplProfile().port));
        this.mCheckBoxTls.setChecked(agpsConfigV24.getCurSuplProfile().tls);
        int iCalcMeterFromK = agpsConfigV24.getUpSetting().qopHacc;
        int iCalcMeterFromK2 = agpsConfigV24.getUpSetting().qopVacc;
        if (this.mRadioButtonMeter.isChecked()) {
            iCalcMeterFromK = calcMeterFromK(iCalcMeterFromK);
            iCalcMeterFromK2 = calcMeterFromK(iCalcMeterFromK2);
        }
        this.mTextViewHAcc.setText(String.valueOf(iCalcMeterFromK));
        this.mTextViewVAcc.setText(String.valueOf(iCalcMeterFromK2));
        this.mTextViewLocationAge.setText(String.valueOf(agpsConfigV24.getUpSetting().qopLocAge));
        this.mTextViewDelay.setText(String.valueOf(agpsConfigV24.getUpSetting().qopDelay));
        if (agpsConfigV24.getCpSetting().molrPosMethod == 0) {
            this.mRadioButtonLocationEstimate.setChecked(true);
        } else {
            this.mRadioButtonAssistanceData.setChecked(true);
        }
        this.mCheckBoxExternalAddr.setChecked(agpsConfigV24.getCpSetting().externalAddrEnable);
        this.mTextViewExternalAddr.setText(agpsConfigV24.getCpSetting().externalAddr);
        this.mCheckBoxMlcNumber.setChecked(agpsConfigV24.getCpSetting().mlcNumberEnable);
        this.mTextViewMlcNumber.setText(agpsConfigV24.getCpSetting().mlcNumber);
        this.mCheckBoxCpAutoReset.setChecked(agpsConfigV24.getCpSetting().cpAutoReset);
        this.mCheckBoxEpcMolrPduEnable.setChecked(agpsConfigV24.getCpSetting().epcMolrLppPayloadEnable);
        this.mCheckBoxNiAllow.setChecked(agpsConfigV24.getUpSetting().niRequest);
        this.mCheckBoxRoamingAllow.setChecked(agpsConfigV24.getUpSetting().roaming);
        this.mCheckBoxSupl2File.setChecked(agpsConfigV24.getUpSetting().suplLog);
        this.mCheckBoxLogSensitiveData.setChecked(!agpsConfigV24.getUpSetting().noSensitiveLog);
        this.mCheckBoxCertFromSdcard.setChecked(agpsConfigV24.getUpSetting().certFromSdcard);
        this.mCheckBoxAutoProfileEnable.setChecked(agpsConfigV24.getUpSetting().autoProfileEnable);
        this.mCheckBoxSuplApnEnable.setChecked(agpsConfigV24.getUpSetting().apnEnable);
        this.mCheckBoxSyncToSlp.setChecked(agpsConfigV24.getUpSetting().syncToslp);
        this.mCheckBoxImsiEnable.setChecked(agpsConfigV24.getUpSetting().imsiEnable);
        this.mCheckBoxE911GpsIconEnable.setChecked(agpsConfigV24.getAgpsSetting().e911GpsIconEnable);
        this.mCheckBoxLppeHideWifiBtStatus.setChecked(agpsConfigV24.getAgpsSetting().lppeHideWifiBtStatus);
        this.mCheckBoxLppeNetworkLocationDisable.setChecked(agpsConfigV24.getAgpsSetting().lppeNetworkLocationDisable);
        this.mCheckBoxLppeCpEnable.setChecked(agpsConfigV24.getCpSetting().cpLppeEnable);
        this.mCheckBoxLppeUpEnable.setChecked(agpsConfigV24.getUpSetting().upLppeEnable);
        this.mCheckBoxAospProfileEnable.setChecked(agpsConfigV24.getUpSetting().aospProfileEnable);
        this.mCheckBoxNlpSettings2SuplEnable.setChecked(agpsConfigV24.getUpSetting().bindNlpSettingToSupl);
        this.mCheckBoxLbsLogEnable.setChecked(agpsConfigV24.getAgpsSetting().lbsLogEnable);
        this.mCheckBoxIngoreSiForE911.setChecked(agpsConfigV24.getAgpsSetting().ignoreSiForE911);
        this.mCheckBoxLppeCpWlanEnable.setChecked(agpsConfigV24.getCpSetting().cpLppeWlanEnable);
        this.mCheckBoxLppeCpSrnEnable.setChecked(agpsConfigV24.getCpSetting().cpLppeSrnEnable);
        this.mCheckBoxLppeCpSensorEnable.setChecked(agpsConfigV24.getCpSetting().cpLppeSensorEnable);
        this.mCheckBoxLppeCpDbhEnable.setChecked(agpsConfigV24.getCpSetting().cpLppeDbhEnable);
        this.mCheckBoxLppeUpWlanEnable.setChecked(agpsConfigV24.getUpSetting().upLppeWlanEnable);
        this.mCheckBoxLppeUpSrnEnable.setChecked(agpsConfigV24.getUpSetting().upLppeSrnEnable);
        this.mCheckBoxLppeUpSensorEnable.setChecked(agpsConfigV24.getUpSetting().upLppeSensorEnable);
        this.mCheckBoxLppeUpDbhEnable.setChecked(agpsConfigV24.getUpSetting().upLppeDbhEnable);
        this.mCheckBoxUpLppIn2g3gDisable.setChecked(agpsConfigV24.getUpSetting().upLppIn2g3gDisable);
        this.mCheckBoxUpRrlpIn4gDisable.setChecked(agpsConfigV24.getUpSetting().upRrlpIn4gDisable);
        this.mCheckBoxUpSiDisable.setChecked(agpsConfigV24.getUpSetting().upSiDisable);
        this.mCheckBoxDefaultNlpEnable.setChecked(agpsConfigV24.getAgpsSetting().defaultNlpEnable);
        this.mCheckBoxForceOtdoaAssistEnable.setChecked(agpsConfigV24.getUpSetting().forceOtdoaAssistReq);
        this.mCheckBoxAospPosModeEnable.setChecked(agpsConfigV24.getUpSetting().aospPosModeEnable);
        this.mCheckBoxPrivacyOverrideEnable.setChecked(agpsConfigV24.getUpSetting().privacyOverrideMode > 0);
        this.mCheckBoxAllowNiForGpsOffEnable.setChecked(agpsConfigV24.getUpSetting().allowNiForGpsOff);
        if (agpsConfigV24.getUpSetting().ipVersionPrefer == 0) {
            this.mRadioButtonIpV6.setChecked(true);
        } else {
            this.mRadioButtonIpV4.setChecked(true);
        }
        this.mTextViewTcpKeepAliveInterval.setText(String.valueOf(agpsConfigV24.getUpSetting().tcpKeepAlive));
        this.mTextViewLppeCrowdSourceConfident.setText(String.valueOf(agpsConfigV24.getAgpsSetting().lppeCrowdSourceConfident));
        this.mCheckBoxSib8Sib16Enable.setChecked(agpsConfigV24.getGnssSetting().sib8sib16Enable);
        if (!agpsConfigV24.getGnssSetting().glonassSatelliteSupport) {
            this.mCheckBoxGlonassSatelliteEnable.setVisibility(8);
            this.mCheckBoxAglonassEnable.setVisibility(8);
        }
        if (!agpsConfigV24.getGnssSetting().beidousSatelliteSupport) {
            this.mCheckBoxBeidouSatelliteEnable.setVisibility(8);
            this.mCheckBoxAbeidouEnable.setVisibility(8);
        }
        if (!agpsConfigV24.getGnssSetting().galileoSatelliteSupport) {
            this.mCheckBoxGalileoSatelliteEnable.setVisibility(8);
            this.mCheckBoxAgalileoEnable.setVisibility(8);
        }
        this.mCheckBoxGpsSatelliteEnable.setChecked(agpsConfigV24.getGnssSetting().gpsSatelliteEnable);
        this.mCheckBoxGlonassSatelliteEnable.setChecked(agpsConfigV24.getGnssSetting().glonassSatelliteEnable);
        this.mCheckBoxBeidouSatelliteEnable.setChecked(agpsConfigV24.getGnssSetting().beidouSatelliteEnable);
        this.mCheckBoxGalileoSatelliteEnable.setChecked(agpsConfigV24.getGnssSetting().galileoSatelliteEnable);
        this.mCheckBoxAgpsEnable.setChecked(agpsConfigV24.getGnssSetting().aGpsSatelliteEnable);
        this.mCheckBoxAgpsEnable.setEnabled(this.mCheckBoxGpsSatelliteEnable.isChecked());
        this.mCheckBoxAglonassEnable.setChecked(agpsConfigV24.getGnssSetting().aGlonassSatelliteEnable);
        this.mCheckBoxAglonassEnable.setEnabled(this.mCheckBoxGlonassSatelliteEnable.isChecked());
        this.mCheckBoxAbeidouEnable.setChecked(agpsConfigV24.getGnssSetting().aBeidouSatelliteEnable);
        this.mCheckBoxAbeidouEnable.setEnabled(this.mCheckBoxBeidouSatelliteEnable.isChecked());
        this.mCheckBoxAgalileoEnable.setChecked(agpsConfigV24.getGnssSetting().aGalileoSatelliteEnable);
        this.mCheckBoxAgalileoEnable.setEnabled(this.mCheckBoxGalileoSatelliteEnable.isChecked());
        if (agpsConfigV24.getCpSetting().cpLppeSupport) {
            this.mTextViewCpLppeSupported.setText("Yes");
            this.mTextViewCpLppeSupported.setTextColor(-16711936);
        } else {
            this.mTextViewCpLppeSupported.setText("No");
            this.mTextViewCpLppeSupported.setTextColor(-65536);
        }
        if (agpsConfigV24.getGnssSetting().lppeSupport) {
            this.mTextViewGnssLppeSupported.setText("Yes");
            this.mTextViewGnssLppeSupported.setTextColor(-16711936);
        } else {
            this.mTextViewGnssLppeSupported.setText("No");
            this.mTextViewGnssLppeSupported.setTextColor(-65536);
        }
        setLayoutDependency();
        showAgpsProfilingInfo();
    }

    protected void compareAgpsConfig(AgpsConfig agpsConfig, AgpsConfig agpsConfig2) {
        compareAgpsSetting(agpsConfig.agpsSetting, agpsConfig2.agpsSetting);
        compareCpSetting(agpsConfig.cpSetting, agpsConfig2.cpSetting);
        compareUpSetting(agpsConfig.upSetting, agpsConfig2.upSetting);
        compareSuplProfile(agpsConfig.curSuplProfile, agpsConfig2.curSuplProfile);
    }

    protected void compareAgpsSetting(AgpsSetting agpsSetting, AgpsSetting agpsSetting2) {
        if (agpsSetting.agpsEnable != agpsSetting2.agpsEnable) {
            throw new RuntimeException("agpsEnable failed " + agpsSetting.agpsEnable + " " + agpsSetting2.agpsEnable);
        }
        if (agpsSetting.agpsProtocol != agpsSetting2.agpsProtocol) {
            throw new RuntimeException("agpsProtocol failed " + agpsSetting.agpsProtocol + " " + agpsSetting2.agpsProtocol);
        }
        if (agpsSetting.gpevt == agpsSetting2.gpevt) {
            return;
        }
        throw new RuntimeException("gpevt failed " + agpsSetting.gpevt + " " + agpsSetting2.gpevt);
    }

    protected void compareCpSetting(CpSetting cpSetting, CpSetting cpSetting2) {
        if (cpSetting.molrPosMethod != cpSetting2.molrPosMethod) {
            throw new RuntimeException("molrPosMethod failed " + cpSetting.molrPosMethod + " " + cpSetting2.molrPosMethod);
        }
        if (cpSetting.externalAddrEnable != cpSetting2.externalAddrEnable) {
            throw new RuntimeException("externalAddrEnable failed " + cpSetting.externalAddrEnable + " " + cpSetting2.externalAddrEnable);
        }
        if (!stringEquals(cpSetting.externalAddr, cpSetting2.externalAddr)) {
            throw new RuntimeException("externalAddr failed [" + cpSetting.externalAddr + "] [" + cpSetting2.externalAddr + "]");
        }
        if (cpSetting.mlcNumberEnable != cpSetting2.mlcNumberEnable) {
            throw new RuntimeException("mlcNumberEnable failed " + cpSetting.mlcNumberEnable + " " + cpSetting2.mlcNumberEnable);
        }
        if (!stringEquals(cpSetting.mlcNumber, cpSetting2.mlcNumber)) {
            throw new RuntimeException("mlcNumber failed [" + cpSetting.mlcNumber + "] [" + cpSetting2.mlcNumber + "]");
        }
        if (cpSetting.cpAutoReset == cpSetting2.cpAutoReset) {
            return;
        }
        throw new RuntimeException("cpAutoReset failed " + cpSetting.cpAutoReset + " " + cpSetting2.cpAutoReset);
    }

    protected void compareSuplProfile(SuplProfile suplProfile, SuplProfile suplProfile2) {
        if (!stringEquals(suplProfile.name, suplProfile2.name)) {
            throw new RuntimeException("name failed [" + suplProfile.name + "] [" + suplProfile2.name + "]");
        }
        if (!stringEquals(suplProfile.addr, suplProfile2.addr)) {
            throw new RuntimeException("addr failed [" + suplProfile.addr + "] [" + suplProfile2.addr + "]");
        }
        if (suplProfile.port != suplProfile2.port) {
            throw new RuntimeException("port failed " + suplProfile.port + " " + suplProfile2.port);
        }
        if (suplProfile.tls != suplProfile2.tls) {
            throw new RuntimeException("tls failed " + suplProfile.tls + " " + suplProfile2.tls);
        }
        if (!stringEquals(suplProfile.mccMnc, suplProfile2.mccMnc)) {
            throw new RuntimeException("mccMnc failed [" + suplProfile.mccMnc + "] [" + suplProfile2.mccMnc + "]");
        }
        if (!stringEquals(suplProfile.appId, suplProfile2.appId)) {
            throw new RuntimeException("appId failed [" + suplProfile.appId + "] [" + suplProfile2.appId + "]");
        }
        if (!stringEquals(suplProfile.providerId, suplProfile2.providerId)) {
            throw new RuntimeException("providerId failed [" + suplProfile.providerId + "] [" + suplProfile2.providerId + "]");
        }
        if (!stringEquals(suplProfile.defaultApn, suplProfile2.defaultApn)) {
            throw new RuntimeException("defaultApn failed [" + suplProfile.defaultApn + "] [" + suplProfile2.defaultApn + "]");
        }
        if (!stringEquals(suplProfile.optionalApn, suplProfile2.optionalApn)) {
            throw new RuntimeException("optionalApn failed [" + suplProfile.optionalApn + "] [" + suplProfile2.optionalApn + "]");
        }
        if (!stringEquals(suplProfile.optionalApn2, suplProfile2.optionalApn2)) {
            throw new RuntimeException("optionalApn2 failed [" + suplProfile.optionalApn2 + "] [" + suplProfile2.optionalApn2 + "]");
        }
        if (stringEquals(suplProfile.addressType, suplProfile2.addressType)) {
            return;
        }
        throw new RuntimeException("addressType failed [" + suplProfile.addressType + "] [" + suplProfile2.addressType + "]");
    }

    protected void compareUpSetting(UpSetting upSetting, UpSetting upSetting2) {
        if (upSetting.caEnable != upSetting2.caEnable) {
            throw new RuntimeException("caEnable failed " + upSetting.caEnable + " " + upSetting2.caEnable);
        }
        if (upSetting.niRequest != upSetting2.niRequest) {
            throw new RuntimeException("niRequest failed " + upSetting.niRequest + " " + upSetting2.niRequest);
        }
        if (upSetting.roaming != upSetting2.roaming) {
            throw new RuntimeException("roaming failed " + upSetting.roaming + " " + upSetting2.roaming);
        }
        if (upSetting.cdmaPreferred != upSetting2.cdmaPreferred) {
            throw new RuntimeException("cdmaPreferred failed " + upSetting.cdmaPreferred + " " + upSetting2.cdmaPreferred);
        }
        if (upSetting.prefMethod != upSetting2.prefMethod) {
            throw new RuntimeException("prefMethod failed " + upSetting.prefMethod + " " + upSetting2.prefMethod);
        }
        if (upSetting.suplVersion != upSetting2.suplVersion) {
            throw new RuntimeException("suplVersion failed " + upSetting.suplVersion + " " + upSetting2.suplVersion);
        }
        if (upSetting.suplLog != upSetting2.suplLog) {
            throw new RuntimeException("suplLog failed " + upSetting.suplLog + " " + upSetting2.suplLog);
        }
        if (upSetting.msaEnable != upSetting2.msaEnable) {
            throw new RuntimeException("msaEnable failed " + upSetting.msaEnable + " " + upSetting2.msaEnable);
        }
        if (upSetting.msbEnable != upSetting2.msbEnable) {
            throw new RuntimeException("msbEnable failed " + upSetting.msbEnable + " " + upSetting2.msbEnable);
        }
        if (upSetting.ecidEnable != upSetting2.ecidEnable) {
            throw new RuntimeException("ecidEnable failed " + upSetting.ecidEnable + " " + upSetting2.ecidEnable);
        }
        if (upSetting.otdoaEnable != upSetting2.otdoaEnable) {
            throw new RuntimeException("otdoaEnable failed " + upSetting.otdoaEnable + " " + upSetting2.otdoaEnable);
        }
        if (upSetting.qopHacc != upSetting2.qopHacc) {
            throw new RuntimeException("qopHacc failed " + upSetting.qopHacc + " " + upSetting2.qopHacc);
        }
        if (upSetting.qopVacc != upSetting2.qopVacc) {
            throw new RuntimeException("qopVacc failed " + upSetting.qopVacc + " " + upSetting2.qopVacc);
        }
        if (upSetting.qopLocAge != upSetting2.qopLocAge) {
            throw new RuntimeException("qopLocAge failed " + upSetting.qopLocAge + " " + upSetting2.qopLocAge);
        }
        if (upSetting.qopDelay == upSetting2.qopDelay) {
            return;
        }
        throw new RuntimeException("qopDelay failed " + upSetting.qopDelay + " " + upSetting2.qopDelay);
    }

    protected void enableDebugMode(boolean z) {
        File file = new File(getFilesDir() + "/../show");
        if (!z) {
            file.delete();
            return;
        }
        try {
            file.createNewFile();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    protected int getAreaEventType() {
        if (this.mRadioButtonEnter.isChecked()) {
            return 0;
        }
        if (this.mRadioButtonInside.isChecked()) {
            return 1;
        }
        if (this.mRadioButtonOutside.isChecked()) {
            return 2;
        }
        return this.mRadioButtonLeave.isChecked() ? 3 : 0;
    }

    protected void initAgpsInterface() {
        try {
            this.mAgpsInterface = new AgpsInterface();
        } catch (IOException e) {
            loge("agps interface connection failure");
            e.printStackTrace();
        }
    }

    protected void initPopupMenu() {
        this.mPopupSuplUt2 = new PopupMenu(this, this.mButtonSuplUt2);
        for (int i = 1; i <= 60; i++) {
            this.mPopupSuplUt2.getMenu().add(0, i, 0, "" + i);
        }
        this.mPopupSuplUt2.setOnMenuItemClickListener(new PopupMenu.OnMenuItemClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.4
            @Override // android.widget.PopupMenu.OnMenuItemClickListener
            public boolean onMenuItemClick(MenuItem menuItem) {
                byte itemId = (byte) menuItem.getItemId();
                LbsAgps.this.mTextViewSuplUt2.setText("" + ((int) itemId));
                LbsAgps.this.mAgpsInterface.setSuplUt2(itemId);
                return false;
            }
        });
        this.mPopupSuplUt3 = new PopupMenu(this, this.mButtonSuplUt3);
        for (int i2 = 1; i2 <= 60; i2++) {
            this.mPopupSuplUt3.getMenu().add(0, i2, 0, "" + i2);
        }
        this.mPopupSuplUt3.setOnMenuItemClickListener(new PopupMenu.OnMenuItemClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.5
            @Override // android.widget.PopupMenu.OnMenuItemClickListener
            public boolean onMenuItemClick(MenuItem menuItem) {
                byte itemId = (byte) menuItem.getItemId();
                LbsAgps.this.mTextViewSuplUt3.setText("" + ((int) itemId));
                LbsAgps.this.mAgpsInterface.setSuplUt3(itemId);
                return false;
            }
        });
        this.mPopupSlpTemplate = new PopupMenu(this, this.mButtonSlpTemplate);
        if (this.mXml != null) {
            for (int i3 = 0; i3 < this.mXml.getAgpsConfig().getSuplProfiles().size(); i3++) {
                SuplProfile suplProfile = this.mXml.getAgpsConfig().getSuplProfiles().get(i3);
                this.mPopupSlpTemplate.getMenu().add(0, i3, 0, "[" + suplProfile.name + "]");
            }
            this.mPopupSlpTemplate.setOnMenuItemClickListener(new PopupMenu.OnMenuItemClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.6
                @Override // android.widget.PopupMenu.OnMenuItemClickListener
                public boolean onMenuItemClick(MenuItem menuItem) {
                    SuplProfile suplProfile2 = LbsAgps.this.mXml.getAgpsConfig().getSuplProfiles().get(menuItem.getItemId());
                    LbsAgps.this.mTextViewSlpAddr.setText(suplProfile2.addr);
                    LbsAgps.this.mTextViewSlpPort.setText(String.valueOf(suplProfile2.port));
                    LbsAgps.this.mCheckBoxTls.setChecked(suplProfile2.tls);
                    LbsAgps.this.updateSuplProfile();
                    return false;
                }
            });
        }
        PopupMenu popupMenu = new PopupMenu(this, this.mButtonTriggerTest);
        this.mPopupTriggerTest = popupMenu;
        popupMenu.getMenu().add(0, 0, 0, "Coder Test");
        this.mPopupTriggerTest.getMenu().add(0, 1, 0, "AgpsInterface Auto UT");
        this.mPopupTriggerTest.getMenu().add(0, 2, 0, "NI request");
        this.mPopupTriggerTest.getMenu().add(0, 3, 0, "Test 03");
        this.mPopupTriggerTest.getMenu().add(0, 4, 0, "Test 04");
        this.mPopupTriggerTest.getMenu().add(0, 5, 0, "Test 05");
        this.mPopupTriggerTest.getMenu().add(0, 6, 0, "Test 06");
        this.mPopupTriggerTest.getMenu().add(0, 7, 0, "Test 07");
        this.mPopupTriggerTest.setOnMenuItemClickListener(new PopupMenu.OnMenuItemClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.7
            @Override // android.widget.PopupMenu.OnMenuItemClickListener
            public boolean onMenuItemClick(MenuItem menuItem) {
                int itemId = menuItem.getItemId();
                if (itemId == 0) {
                    try {
                        LbsAgps.this.mAgpsInterface.coderTest();
                        return false;
                    } catch (IOException e) {
                        e.printStackTrace();
                        return false;
                    }
                }
                if (itemId == 1) {
                    LbsAgps.this.agpsInterfaceAutoUT();
                    return false;
                }
                if (itemId != 2) {
                    return false;
                }
                LbsAgps.this.mAgpsInterface.setNiRequest(12345, new byte[]{1, 2, 3, 4, 5});
                return false;
            }
        });
        PopupMenu popupMenu2 = new PopupMenu(this, this.mButtonTestButton);
        this.mPopupTestButton = popupMenu2;
        popupMenu2.getMenu().add(0, 0, 0, "agps_open_gps_req");
        this.mPopupTestButton.getMenu().add(0, 1, 0, "agps_close_gps_req");
        this.mPopupTestButton.getMenu().add(0, 2, 0, "agps_reset_gps_req");
        this.mPopupTestButton.getMenu().add(0, 3, 0, "ni_notify1 notify");
        this.mPopupTestButton.getMenu().add(0, 4, 0, "ni_notify1 verify");
        this.mPopupTestButton.getMenu().add(0, 5, 0, "ni_notify2 notify");
        this.mPopupTestButton.getMenu().add(0, 6, 0, "ni_notify2 verify");
        this.mPopupTestButton.getMenu().add(0, 7, 0, "data_conn_req");
        this.mPopupTestButton.getMenu().add(0, 8, 0, "data_conn_release");
        this.mPopupTestButton.getMenu().add(0, 9, 0, "md_sim_info_req");
        this.mPopupTestButton.getMenu().add(0, 10, 0, "md_data_conn_state_req");
        this.mPopupTestButton.getMenu().add(0, 11, 0, "lppe_capability");
        this.mPopupTestButton.getMenu().add(0, 12, 0, "lppe_start_meas");
        this.mPopupTestButton.getMenu().add(0, 13, 0, "lppe_stop_meas");
        this.mPopupTestButton.getMenu().add(0, 14, 0, "lppe_query_meas");
        this.mPopupTestButton.getMenu().add(0, 15, 0, "agps_md_huge_data");
        this.mPopupTestButton.getMenu().add(0, 16, 0, "agps_open_gps_rejected");
        this.mPopupTestButton.getMenu().add(0, 17, 0, "ni_notify3 notify");
        this.mPopupTestButton.getMenu().add(0, 18, 0, "Test 18");
        this.mPopupTestButton.getMenu().add(0, 19, 0, "Test 19");
        this.mPopupTestButton.getMenu().add(0, 20, 0, "Test 20");
        this.mPopupTestButton.getMenu().add(0, 21, 0, "Test 21");
        this.mPopupTestButton.getMenu().add(0, 22, 0, "Test 22");
        this.mPopupTestButton.getMenu().add(0, 23, 0, "Test 23");
        this.mPopupTestButton.getMenu().add(0, 24, 0, "Test 24");
        this.mPopupTestButton.setOnMenuItemClickListener(new PopupMenu.OnMenuItemClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.8
            @Override // android.widget.PopupMenu.OnMenuItemClickListener
            public boolean onMenuItemClick(MenuItem menuItem) {
                LbsAgps.this.mAgpsInterface.testButton(menuItem.getItemId());
                return false;
            }
        });
        this.mPopupSuplVerMinor = new PopupMenu(this, this.mButtonSuplVerMinor);
        for (int i4 = 0; i4 <= 5; i4++) {
            this.mPopupSuplVerMinor.getMenu().add(0, i4, 0, "" + i4);
        }
        this.mPopupSuplVerMinor.setOnMenuItemClickListener(new PopupMenu.OnMenuItemClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.9
            @Override // android.widget.PopupMenu.OnMenuItemClickListener
            public boolean onMenuItemClick(MenuItem menuItem) {
                byte itemId = (byte) menuItem.getItemId();
                LbsAgps.this.mTextViewSuplVerMinor.setText("" + ((int) itemId));
                LbsAgps.this.mAgpsInterface.setSuplVerMinor(itemId);
                return false;
            }
        });
        this.mPopupSuplVerSerInd = new PopupMenu(this, this.mButtonSuplVerSerInd);
        for (int i5 = 0; i5 <= 5; i5++) {
            this.mPopupSuplVerSerInd.getMenu().add(0, i5, 0, "" + i5);
        }
        this.mPopupSuplVerSerInd.setOnMenuItemClickListener(new PopupMenu.OnMenuItemClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsAgps.10
            @Override // android.widget.PopupMenu.OnMenuItemClickListener
            public boolean onMenuItemClick(MenuItem menuItem) {
                byte itemId = (byte) menuItem.getItemId();
                LbsAgps.this.mTextViewSuplVerSerInd.setText("" + ((int) itemId));
                LbsAgps.this.mAgpsInterface.setSuplVerSerInd(itemId);
                return false;
            }
        });
    }

    protected void initUI() {
        this.mLayoutDebug = (LinearLayout) findViewById(R.id.LinearLayout_Debug);
        this.mButtonTriggerTest = (Button) findViewById(R.id.Button_TriggerTest);
        this.mButtonTestButton = (Button) findViewById(R.id.Button_TestButton);
        this.mButtonResetAgpsd = (Button) findViewById(R.id.Button_ResetAgpsd);
        this.mTextViewEmulatorMode = (TextView) findViewById(R.id.TextView_EmulatorMode);
        this.mTextLppeServiceInstalled = (TextView) findViewById(R.id.TextView_LppeServiceInstalledValue);
        this.mTextViewUncaliPresureSupported = (TextView) findViewById(R.id.TextView_UncaliPressureSupportedValue);
        this.mTextViewCpLppeSupported = (TextView) findViewById(R.id.TextView_CpLppeSupportedValue);
        this.mTextViewGnssLppeSupported = (TextView) findViewById(R.id.TextView_GnssLppeSupportedValue);
        this.mTextViewProfilingInfo = (TextView) findViewById(R.id.TextView_ProfilingInfo);
        this.mCheckBoxEnableAgps = (CheckBox) findViewById(R.id.CheckBox_EnableAgps);
        this.mRadioButtonUP = (RadioButton) findViewById(R.id.RadioButton_Up);
        this.mRadioButtonCP = (RadioButton) findViewById(R.id.RadioButton_Cp);
        this.mLayoutUpSetting = (LinearLayout) findViewById(R.id.LinearLayout_UpSettings);
        this.mLayoutCdmaSetting = (LinearLayout) findViewById(R.id.LinearLayout_CdmaSetting);
        this.mRadioButtonWCDMAPrefer = (RadioButton) findViewById(R.id.RadioButton_WCDMAPrefer);
        this.mRadioButtonCDMAForce = (RadioButton) findViewById(R.id.RadioButton_CDMAForce);
        this.mRadioButtonMSA = (RadioButton) findViewById(R.id.RadioButton_MSA);
        this.mRadioButtonMSB = (RadioButton) findViewById(R.id.RadioButton_MSB);
        this.mRadioButtonNoPref = (RadioButton) findViewById(R.id.RadioButton_NoPref);
        this.mCheckBoxMSA = (CheckBox) findViewById(R.id.CheckBox_MSA);
        this.mCheckBoxMSB = (CheckBox) findViewById(R.id.CheckBox_MSB);
        this.mCheckBoxECID = (CheckBox) findViewById(R.id.CheckBox_ECID);
        this.mCheckBoxOTDOA = (CheckBox) findViewById(R.id.CheckBox_OTDOA);
        this.mCheckBoxAuto = (CheckBox) findViewById(R.id.CheckBox_Auto);
        this.mCheckBoxAFLT = (CheckBox) findViewById(R.id.CheckBox_AFLT);
        this.mCheckBoxLPP = (CheckBox) findViewById(R.id.CheckBox_LPP);
        this.mRadioButtonSUPL1 = (RadioButton) findViewById(R.id.RadioButton_supl1);
        this.mRadioButtonSUPL2 = (RadioButton) findViewById(R.id.RadioButton_supl2);
        this.mRadioButtonTLS10 = (RadioButton) findViewById(R.id.RadioButton_tls1_0);
        this.mRadioButtonTLS11 = (RadioButton) findViewById(R.id.RadioButton_tls1_1);
        this.mRadioButtonTLS12 = (RadioButton) findViewById(R.id.RadioButton_tls1_2);
        this.mCheckBoxCertVerify = (CheckBox) findViewById(R.id.CheckBox_certVerfiy);
        this.mCheckBoxUdpEnable = (CheckBox) findViewById(R.id.CheckBox_UdpEnable);
        this.mButtonSuplUt2 = (Button) findViewById(R.id.Button_SuplUt2);
        this.mTextViewSuplUt2 = (TextView) findViewById(R.id.TextView_suplUt2);
        this.mButtonSuplUt3 = (Button) findViewById(R.id.Button_SuplUt3);
        this.mTextViewSuplUt3 = (TextView) findViewById(R.id.TextView_suplUt3);
        this.mButtonSlpTemplate = (Button) findViewById(R.id.Button_SlpTemplate);
        this.mTextViewSlpAddr = (TextView) findViewById(R.id.TextView_SlpAddr);
        this.mButtonSlpAddr = (Button) findViewById(R.id.Button_SlpAddr);
        this.mTextViewSlpPort = (TextView) findViewById(R.id.TextView_SlpPort);
        this.mButtonSlpPort = (Button) findViewById(R.id.Button_SlpPort);
        this.mCheckBoxTls = (CheckBox) findViewById(R.id.CheckBox_Tls);
        this.mButtonSuplVerMinor = (Button) findViewById(R.id.Button_SuplVerMinor);
        this.mTextViewSuplVerMinor = (TextView) findViewById(R.id.TextView_suplVerMinor);
        this.mButtonSuplVerSerInd = (Button) findViewById(R.id.Button_SuplVerSerInd);
        this.mTextViewSuplVerSerInd = (TextView) findViewById(R.id.TextView_suplVerSerInd);
        this.mLayoutSUPL2 = (LinearLayout) findViewById(R.id.LinearLayout_SUPL2);
        this.mButtonPeriodicStart = (Button) findViewById(R.id.Button_PeriodicStart);
        this.mButtonPeriodicAbort = (Button) findViewById(R.id.Button_PeriodicAbort);
        this.mButtonAreaStart = (Button) findViewById(R.id.Button_AreaStart);
        this.mButtonAreaAbort = (Button) findViewById(R.id.Button_AreaAbort);
        this.mRadioButtonEnter = (RadioButton) findViewById(R.id.RadioButton_Enter);
        this.mRadioButtonInside = (RadioButton) findViewById(R.id.RadioButton_Inside);
        this.mRadioButtonOutside = (RadioButton) findViewById(R.id.RadioButton_Outside);
        this.mRadioButtonLeave = (RadioButton) findViewById(R.id.RadioButton_Leave);
        this.mButtonShowQoP = (ToggleButton) findViewById(R.id.Button_ShowQoP);
        this.mLayoutQoP = (LinearLayout) findViewById(R.id.LinearLayout_QoP);
        this.mRadioButtonKValue = (RadioButton) findViewById(R.id.RadioButton_KValue);
        this.mRadioButtonMeter = (RadioButton) findViewById(R.id.RadioButton_Meter);
        this.mTextViewHAcc = (TextView) findViewById(R.id.TextView_HAcc);
        this.mButtonHAcc = (Button) findViewById(R.id.Button_HAcc);
        this.mTextViewVAcc = (TextView) findViewById(R.id.TextView_VAcc);
        this.mButtonVAcc = (Button) findViewById(R.id.Button_VAcc);
        this.mTextViewLocationAge = (TextView) findViewById(R.id.TextView_LocationAge);
        this.mButtonLocationAge = (Button) findViewById(R.id.Button_LocationAge);
        this.mTextViewDelay = (TextView) findViewById(R.id.TextView_Delay);
        this.mButtonDelay = (Button) findViewById(R.id.Button_Delay);
        this.mLayoutCpSetting = (LinearLayout) findViewById(R.id.LinearLayout_CpSettings);
        this.mRadioButtonLocationEstimate = (RadioButton) findViewById(R.id.RadioButton_LocationEstimate);
        this.mRadioButtonAssistanceData = (RadioButton) findViewById(R.id.RadioButton_AssistanceData);
        this.mCheckBoxExternalAddr = (CheckBox) findViewById(R.id.CheckBox_ExternalAddr);
        this.mTextViewExternalAddr = (TextView) findViewById(R.id.TextView_ExternalAddr);
        this.mCheckBoxMlcNumber = (CheckBox) findViewById(R.id.CheckBox_MlcNumber);
        this.mTextViewMlcNumber = (TextView) findViewById(R.id.TextView_MlcNumber);
        this.mCheckBoxCpAutoReset = (CheckBox) findViewById(R.id.CheckBox_CPAutoReset);
        this.mCheckBoxEpcMolrPduEnable = (CheckBox) findViewById(R.id.CheckBox_EpcMolrPduEnable);
        this.mCheckBoxNiAllow = (CheckBox) findViewById(R.id.CheckBox_NiAllow);
        this.mCheckBoxRoamingAllow = (CheckBox) findViewById(R.id.CheckBox_RoamingAllow);
        this.mCheckBoxSupl2File = (CheckBox) findViewById(R.id.CheckBox_Supl2File);
        this.mCheckBoxLogSensitiveData = (CheckBox) findViewById(R.id.CheckBox_LogSensitiveData);
        this.mCheckBoxCertFromSdcard = (CheckBox) findViewById(R.id.CheckBox_CertFromSdcard);
        this.mCheckBoxAutoProfileEnable = (CheckBox) findViewById(R.id.CheckBox_AutoProfileEnable);
        this.mCheckBoxSuplApnEnable = (CheckBox) findViewById(R.id.CheckBox_SuplApnEnable);
        this.mCheckBoxSyncToSlp = (CheckBox) findViewById(R.id.CheckBox_SyncToSlp);
        this.mCheckBoxImsiEnable = (CheckBox) findViewById(R.id.CheckBox_ImsiEnable);
        this.mCheckBoxE911GpsIconEnable = (CheckBox) findViewById(R.id.CheckBox_E911GpsIconEnable);
        this.mCheckBoxLppeHideWifiBtStatus = (CheckBox) findViewById(R.id.CheckBox_LppeHideWifiBtStatus);
        this.mCheckBoxLppeNetworkLocationDisable = (CheckBox) findViewById(R.id.CheckBox_LppeNetworkLocationDisable);
        this.mCheckBoxLppeCpEnable = (CheckBox) findViewById(R.id.CheckBox_LppeCpEnable);
        this.mCheckBoxLppeUpEnable = (CheckBox) findViewById(R.id.CheckBox_LppeUpEnable);
        this.mCheckBoxAospProfileEnable = (CheckBox) findViewById(R.id.CheckBox_AospProfileEnable);
        this.mCheckBoxNlpSettings2SuplEnable = (CheckBox) findViewById(R.id.CheckBox_NlpSettings2SuplEnable);
        this.mCheckBoxLbsLogEnable = (CheckBox) findViewById(R.id.CheckBox_LbsLogEnable);
        this.mCheckBoxIngoreSiForE911 = (CheckBox) findViewById(R.id.CheckBox_IngoreSiForE911);
        this.mCheckBoxLppeCpWlanEnable = (CheckBox) findViewById(R.id.CheckBox_LppeCpWlanEnable);
        this.mCheckBoxLppeCpSrnEnable = (CheckBox) findViewById(R.id.CheckBox_LppeCpSrnEnable);
        this.mCheckBoxLppeCpSensorEnable = (CheckBox) findViewById(R.id.CheckBox_LppeCpSensorEnable);
        this.mCheckBoxLppeCpDbhEnable = (CheckBox) findViewById(R.id.CheckBox_LppeCpDbhEnable);
        this.mCheckBoxLppeUpWlanEnable = (CheckBox) findViewById(R.id.CheckBox_LppeUpWlanEnable);
        this.mCheckBoxLppeUpSrnEnable = (CheckBox) findViewById(R.id.CheckBox_LppeUpSrnEnable);
        this.mCheckBoxLppeUpSensorEnable = (CheckBox) findViewById(R.id.CheckBox_LppeUpSensorEnable);
        this.mCheckBoxLppeUpDbhEnable = (CheckBox) findViewById(R.id.CheckBox_LppeUpDbhEnable);
        this.mCheckBoxUpLppIn2g3gDisable = (CheckBox) findViewById(R.id.CheckBox_UpLppIn2g3gDisable);
        this.mCheckBoxUpRrlpIn4gDisable = (CheckBox) findViewById(R.id.CheckBox_UpRrlpIn4gDisable);
        this.mCheckBoxUpSiDisable = (CheckBox) findViewById(R.id.CheckBox_UpSiDisable);
        this.mCheckBoxDefaultNlpEnable = (CheckBox) findViewById(R.id.CheckBox_DefaultNlpEnable);
        this.mCheckBoxForceOtdoaAssistEnable = (CheckBox) findViewById(R.id.CheckBox_ForceOtdoaAssistEnable);
        this.mCheckBoxAospPosModeEnable = (CheckBox) findViewById(R.id.CheckBox_AospPosModeEnable);
        this.mCheckBoxPrivacyOverrideEnable = (CheckBox) findViewById(R.id.CheckBox_PrivacyOverrideEnable);
        this.mCheckBoxAllowNiForGpsOffEnable = (CheckBox) findViewById(R.id.CheckBox_AllowNiForGpsOffEnable);
        this.mRadioButtonIpV6 = (RadioButton) findViewById(R.id.RadioButton_Ipv6);
        this.mRadioButtonIpV4 = (RadioButton) findViewById(R.id.RadioButton_Ipv4);
        this.mTextViewTcpKeepAliveInterval = (TextView) findViewById(R.id.TextView_TcpKeepAliveInterval);
        this.mButtonTcpKeepAlive = (Button) findViewById(R.id.Button_TcpKeepAlive);
        this.mTextViewLppeCrowdSourceConfident = (TextView) findViewById(R.id.TextView_LppeCrowdSourceConfident);
        this.mButtonLppeCrowdSourceConfident = (Button) findViewById(R.id.Button_LppeCrowdSourceConfident);
        this.mCheckBoxSib8Sib16Enable = (CheckBox) findViewById(R.id.CheckBox_Sib8_Sib16_Enable);
        this.mCheckBoxGpsSatelliteEnable = (CheckBox) findViewById(R.id.CheckBox_GpsSatelliteEnable);
        this.mCheckBoxGlonassSatelliteEnable = (CheckBox) findViewById(R.id.CheckBox_GlonassSatelliteEnable);
        this.mCheckBoxBeidouSatelliteEnable = (CheckBox) findViewById(R.id.CheckBox_BeidouSatelliteEnable);
        this.mCheckBoxGalileoSatelliteEnable = (CheckBox) findViewById(R.id.CheckBox_GalileoSatelliteEnable);
        this.mCheckBoxAgpsEnable = (CheckBox) findViewById(R.id.CheckBox_AgpsEnable);
        this.mCheckBoxAglonassEnable = (CheckBox) findViewById(R.id.CheckBox_AglonassEnable);
        this.mCheckBoxAbeidouEnable = (CheckBox) findViewById(R.id.CheckBox_AbeidouEnable);
        this.mCheckBoxAgalileoEnable = (CheckBox) findViewById(R.id.CheckBox_AgalileoEnable);
        this.mButtonReset2Default = (Button) findViewById(R.id.Button_Reset2Default);
        if (isPackageInstalled("com.mediatek.location.lppe.main")) {
            this.mTextLppeServiceInstalled.setText("Yes");
            this.mTextLppeServiceInstalled.setTextColor(-16711936);
        } else {
            this.mTextLppeServiceInstalled.setText("No");
            this.mTextLppeServiceInstalled.setTextColor(-65536);
        }
        if (isUncaliPressureSupported()) {
            this.mTextViewUncaliPresureSupported.setText("Yes");
            this.mTextViewUncaliPresureSupported.setTextColor(-16711936);
        } else {
            this.mTextViewUncaliPresureSupported.setText("No");
            this.mTextViewUncaliPresureSupported.setTextColor(-65536);
        }
    }

    String loadProxyNameFromCarrierConfig() {
        CarrierConfigManager carrierConfigManager = (CarrierConfigManager) sContext.getSystemService("carrier_config");
        if (carrierConfigManager == null) {
            return "";
        }
        int defaultDataSubscriptionId = SubscriptionManager.getDefaultDataSubscriptionId();
        PersistableBundle configForSubId = SubscriptionManager.isValidSubscriptionId(defaultDataSubscriptionId) ? carrierConfigManager.getConfigForSubId(defaultDataSubscriptionId) : null;
        if (configForSubId == null) {
            Log.d("LocationEM", "SIM not ready, use default carrier config.");
            configForSubId = CarrierConfigManager.getDefaultConfig();
        }
        String str = (String) configForSubId.get("gps.nfw_proxy_apps");
        Log.d("LocationEM", "gps.nfw_proxy_apps: " + str);
        return str != null ? str.trim().split(" ")[0] : "";
    }

    protected void loadXML() {
        try {
            try {
                this.mXml = new MtkAgpsXmlParser();
            } catch (FileNotFoundException unused) {
                this.mXml = new MtkAgpsXmlParser("/vendor/etc/gnss/agps_profiles_conf2.xml");
            }
        } catch (IOException e) {
            loge("cannot load the XML file");
            e.printStackTrace();
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        try {
            initAgpsInterface();
            this.mAgpsdExisted = true;
            setContentView(R.layout.agps);
            Context applicationContext = getApplicationContext();
            sContext = applicationContext;
            this.mPackageManager = applicationContext.getPackageManager();
            this.mGnssProxyPackageName = loadProxyNameFromCarrierConfig();
            log("mGnssProxyPackageName from carrierConfig: " + this.mGnssProxyPackageName);
            loadXML();
            initUI();
            initPopupMenu();
            addOnClickListener();
        } catch (RuntimeException unused) {
            log("Failed to initAgesInterface mAgpsdExisted= " + this.mAgpsdExisted);
        }
    }

    @Override // android.app.Activity
    public void onDestroy() {
        super.onDestroy();
    }

    @Override // android.app.Activity
    public void onPause() {
        super.onPause();
    }

    @Override // android.app.Activity
    public void onResume() {
        super.onResume();
        if (this.mAgpsdExisted) {
            applyAgpsConfigToUI();
            checkLocationProxyAppPermission();
        }
    }

    protected void setLayoutDependency() {
        boolean zIsDebugModeEnabled = LbsUtility.isDebugModeEnabled(this);
        setVisibility(this.mLayoutDebug, zIsDebugModeEnabled);
        setVisibility(this.mLayoutCdmaSetting, true);
        setVisibility(this.mLayoutUpSetting, this.mRadioButtonUP.isChecked());
        setVisibility(this.mLayoutCpSetting, this.mRadioButtonCP.isChecked());
        setVisibility(this.mLayoutSUPL2, this.mRadioButtonSUPL2.isChecked());
        setVisibility(this.mLayoutQoP, this.mButtonShowQoP.isChecked());
        setVisibility(this.mCheckBoxGpsSatelliteEnable, zIsDebugModeEnabled);
        setVisibility(this.mCheckBoxGlonassSatelliteEnable, zIsDebugModeEnabled);
        setVisibility(this.mCheckBoxBeidouSatelliteEnable, zIsDebugModeEnabled);
        setVisibility(this.mCheckBoxGalileoSatelliteEnable, zIsDebugModeEnabled);
        setVisibility(this.mCheckBoxLppeHideWifiBtStatus, zIsDebugModeEnabled);
    }

    protected void setVisibility(View view, boolean z) {
        if (z) {
            view.setVisibility(0);
        } else {
            view.setVisibility(8);
        }
    }

    protected void showAgpsProfilingInfo() {
        String str;
        AgpsProfilingInfo agpsProfilingInfo = this.mAgpsInterface.getAgpsProfilingInfo();
        log(agpsProfilingInfo);
        String str2 = "";
        for (AgpsProfilingInfo.ProfileElement profileElement : agpsProfilingInfo.getElements()) {
            if (profileElement.getType() == 0) {
                str = "c0c0c0";
            } else if (profileElement.getType() == 1) {
                str = "ffff00";
            } else {
                str = profileElement.getType() == 2 ? "ff0000" : "0000ff";
            }
            str2 = str2 + "<font color='#" + str + "'>" + getTimeString(profileElement.getTimestamp()) + " " + profileElement.getMessage() + "</font><br>";
        }
        this.mTextViewProfilingInfo.setText(Html.fromHtml(str2), TextView.BufferType.SPANNABLE);
    }

    protected boolean stringEquals(String str, String str2) {
        if (str == null && str2 == null) {
            return true;
        }
        if (str == null && str2 != null) {
            return false;
        }
        if (str == null || str2 != null) {
            return str.equals(str2);
        }
        return false;
    }

    protected void updateQoP() {
        int iIntValue = Integer.valueOf(this.mTextViewHAcc.getText().toString()).intValue();
        int iIntValue2 = Integer.valueOf(this.mTextViewVAcc.getText().toString()).intValue();
        int iIntValue3 = Integer.valueOf(this.mTextViewLocationAge.getText().toString()).intValue();
        int iIntValue4 = Integer.valueOf(this.mTextViewDelay.getText().toString()).intValue();
        if (!this.mIsKValueUnit) {
            iIntValue = calcKFromMeter(iIntValue);
            iIntValue2 = calcKFromMeter(iIntValue2);
        }
        this.mAgpsInterface.setQop(iIntValue, iIntValue2, iIntValue3, iIntValue4);
    }

    protected void updateSuplProfile() {
        this.mAgpsInterface.setSuplProfile(this.mTextViewSlpAddr.getText().toString(), Integer.valueOf(this.mTextViewSlpPort.getText().toString()).intValue(), this.mCheckBoxTls.isChecked());
    }
}
