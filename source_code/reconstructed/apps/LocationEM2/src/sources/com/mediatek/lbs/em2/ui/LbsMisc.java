package com.mediatek.lbs.em2.ui;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.location.Country;
import android.location.CountryDetector;
import android.location.LocationManager;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.os.Process;
import android.provider.Settings;
import android.telephony.CellLocation;
import android.telephony.PhoneStateListener;
import android.telephony.ServiceState;
import android.telephony.TelephonyManager;
import android.telephony.cdma.CdmaCellLocation;
import android.telephony.gsm.GsmCellLocation;
import android.util.Log;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import android.widget.Toast;
import android.widget.ToggleButton;
import com.mediatek.lbs.em2.utils.AgpsInterface;
import java.io.IOException;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.NetworkInterface;
import java.net.Socket;
import java.net.SocketException;
import java.net.UnknownHostException;
import java.util.Date;
import java.util.Enumeration;

/* JADX INFO: loaded from: classes.dex */
public class LbsMisc extends Activity {
    protected AgpsInterface mAgpsInterface;
    private ToggleButton mButtonConnect;
    private Button mButton_GPS;
    private Button mButton_TIME;
    private Button mButton_WIFI;
    private CheckBox mCheckBoxAddSettingsExemptWhitelist;
    private CheckBox mCheckBoxE911OpenGpsEnable;
    private CheckBox mCheckBoxEnableLocationEMService;
    private CheckBox mCheckBoxEnableLocationSettings;
    private ConnectionThread mConnectionThread;
    private EditText mEditTextIp;
    private EditText mEditTextPort;
    private Spinner mSpinnerServer;
    private TelephonyManager mTelephonyMgr;
    private TextView mTextViewCellInfo;
    private TextView mTextViewCountryDetectorValue;
    private TextView mTextViewResult;
    String[] SERVER_NAME = {"LOCAL", "CMCC", "GOOGLE"};
    String[] SERVER_IP = {"127.0.0.1", "221.176.0.55", "supl.google.com"};
    String[] SERVER_PORT = {"7276", "7275", "7275"};
    private int mSessionId = 0;
    private StringList mStringList = new StringList(12);
    private LocationManager mLocationManager = null;
    private Handler mHandler = new Handler() { // from class: com.mediatek.lbs.em2.ui.LbsMisc.10
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            Bundle bundle = (Bundle) message.obj;
            int i = message.what;
            if (i == 0) {
                LbsMisc.this.mStringList.add(bundle.getString("msg"));
                LbsMisc.this.mTextViewResult.setText(LbsMisc.this.mStringList.get());
            } else {
                if (i != 1) {
                    return;
                }
                LbsMisc.this.mButtonConnect.setChecked(false);
            }
        }
    };

    class CellStateListener extends PhoneStateListener {
        CellStateListener() {
        }

        @Override // android.telephony.PhoneStateListener
        public void onCallStateChanged(int i, String str) {
            LbsMisc.this.log("onCallStateChanged state=" + i + " incomingNumber=" + str);
        }

        @Override // android.telephony.PhoneStateListener
        public void onCellLocationChanged(CellLocation cellLocation) {
            LbsMisc.this.log("onCellLocationChanged location=" + cellLocation);
            LbsMisc.this.updateCellInfo();
        }

        @Override // android.telephony.PhoneStateListener
        public void onDataConnectionStateChanged(int i, int i2) {
            LbsMisc.this.log("onDataConnectionStateChanged state=" + i + " networkType=" + i2);
            LbsMisc.this.updateCellInfo();
        }

        @Override // android.telephony.PhoneStateListener
        public void onServiceStateChanged(ServiceState serviceState) {
            LbsMisc.this.log("onServiceStateChanged serviceState=" + serviceState);
            LbsMisc.this.updateCellInfo();
        }
    }

    class ConnectionThread {
        private String ip;
        private Thread mThread;
        private int port;
        private int sessionId;

        public ConnectionThread(String str, int i, int i2) {
            this.ip = str;
            this.port = i;
            this.sessionId = i2;
            this.mThread = new Thread(LbsMisc.this) { // from class: com.mediatek.lbs.em2.ui.LbsMisc.ConnectionThread.1
                @Override // java.lang.Thread, java.lang.Runnable
                public void run() {
                    ConnectionThread.this.runFunction();
                }
            };
        }

        private String getTimeString() {
            Date date = new Date();
            return String.format("[%02d:%02d:%02d] ", Integer.valueOf(date.getHours()), Integer.valueOf(date.getMinutes()), Integer.valueOf(date.getSeconds()));
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void runFunction() {
            try {
                Socket socket = new Socket();
                sendMessage(0, "DNS querying");
                InetSocketAddress inetSocketAddress = new InetSocketAddress(this.ip, this.port);
                sendMessage(0, "Name=" + inetSocketAddress.getAddress().getHostName());
                sendMessage(0, "Address=" + inetSocketAddress.getAddress().getHostAddress());
                sendMessage(0, "start connection");
                socket.connect(inetSocketAddress, 10000);
                sendMessage(0, "connected");
                socket.close();
                sendMessage(0, "disconnected");
            } catch (NullPointerException e) {
                sendMessage(0, "NullPointerException " + e.getMessage());
                e.printStackTrace();
            } catch (UnknownHostException e2) {
                sendMessage(0, "UnknownHostException " + e2.getMessage());
                e2.printStackTrace();
            } catch (IOException e3) {
                sendMessage(0, "IOException " + e3.getMessage());
                e3.printStackTrace();
            }
            sendMessage(1, "");
        }

        private void sendMessage(int i, String str) {
            Message message = new Message();
            Bundle bundle = new Bundle();
            bundle.putString("msg", getTimeString() + "[id=" + this.sessionId + "] " + str + "\n");
            message.what = i;
            message.obj = bundle;
            LbsMisc.this.mHandler.sendMessage(message);
        }

        public void start() {
            this.mThread.start();
        }

        public void stop() {
            this.mThread.interrupt();
        }
    }

    static /* synthetic */ int access$508(LbsMisc lbsMisc) {
        int i = lbsMisc.mSessionId;
        lbsMisc.mSessionId = i + 1;
        return i;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void addPackageInLocationSettingsWhitelist(Context context) {
        String str;
        String packageName = context.getPackageName();
        String string = Settings.Global.getString(getContentResolver(), "location_ignore_settings_package_whitelist");
        if (string == null || string.indexOf(packageName) == -1) {
            if (string == null) {
                str = "";
            } else {
                str = string + ",";
            }
            String str2 = str + packageName;
            log("Add ignore settings outStr = " + str2);
            Settings.Global.putString(getContentResolver(), "location_ignore_settings_package_whitelist", str2);
        }
    }

    private String getLocalIpAddress() {
        try {
            Enumeration<NetworkInterface> networkInterfaces = NetworkInterface.getNetworkInterfaces();
            while (networkInterfaces.hasMoreElements()) {
                Enumeration<InetAddress> inetAddresses = networkInterfaces.nextElement().getInetAddresses();
                while (inetAddresses.hasMoreElements()) {
                    InetAddress inetAddressNextElement = inetAddresses.nextElement();
                    if (!inetAddressNextElement.isLoopbackAddress()) {
                        String string = inetAddressNextElement.getHostAddress().toString();
                        if (string.length() <= 16) {
                            log("IP=" + string);
                            return string;
                        }
                    }
                }
            }
            return null;
        } catch (SocketException e) {
            e.printStackTrace();
            return null;
        }
    }

    private boolean isPackageInLocationSettingsWhitelist(Context context) {
        String packageName = context.getPackageName();
        String string = Settings.Global.getString(getContentResolver(), "location_ignore_settings_package_whitelist");
        return (string == null || string.indexOf(packageName) == -1) ? false : true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void log(String str) {
        Log.d("LocationEM_Misc", str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void removePackageInLocationSettingsWhitelist(Context context) {
        int iIndexOf;
        String packageName = context.getPackageName();
        String string = Settings.Global.getString(getContentResolver(), "location_ignore_settings_package_whitelist");
        String strReplace = "";
        if (string != null) {
            iIndexOf = string.indexOf("," + packageName);
            if (iIndexOf != -1) {
                strReplace = string.replace("," + packageName, "");
            } else {
                iIndexOf = string.indexOf(packageName);
                if (iIndexOf != -1) {
                    strReplace = string.replace(packageName, "");
                }
            }
        } else {
            iIndexOf = -1;
        }
        if (iIndexOf != -1) {
            log("Remove ignore settings outStr = " + strReplace);
            Settings.Global.putString(getContentResolver(), "location_ignore_settings_package_whitelist", strReplace);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateCellInfo() {
        int systemId;
        int i;
        String networkOperator = this.mTelephonyMgr.getNetworkOperator();
        CellLocation cellLocation = this.mTelephonyMgr.getCellLocation();
        String localIpAddress = getLocalIpAddress();
        int networkId = -1;
        if (cellLocation instanceof GsmCellLocation) {
            GsmCellLocation gsmCellLocation = (GsmCellLocation) cellLocation;
            if (gsmCellLocation != null) {
                int cid = gsmCellLocation.getCid();
                networkId = gsmCellLocation.getLac();
                i = cid;
            } else {
                i = -1;
            }
            this.mTextViewCellInfo.setText("mccMnc=[" + networkOperator + "] lac=[" + networkId + "] cid=[" + i + "]\nIP=" + localIpAddress);
            return;
        }
        if (!(cellLocation instanceof CdmaCellLocation)) {
            this.mTextViewCellInfo.setText("Unknown Cell Location IP=" + localIpAddress);
            return;
        }
        CdmaCellLocation cdmaCellLocation = (CdmaCellLocation) cellLocation;
        if (cdmaCellLocation != null) {
            networkId = cdmaCellLocation.getNetworkId();
            systemId = cdmaCellLocation.getSystemId();
        } else {
            systemId = -1;
        }
        this.mTextViewCellInfo.setText("networkId=[" + networkId + "] systemId=[" + systemId + "] IP=" + localIpAddress);
    }

    protected void applyAgpsConfigToUI() {
        AgpsInterface agpsInterface = this.mAgpsInterface;
        if (agpsInterface == null) {
            log("agpsInterface is null");
            return;
        }
        this.mCheckBoxE911OpenGpsEnable.setChecked(agpsInterface.getAgpsConfigV17().getAgpsSetting().e911OpenGpsEnable);
        CountryDetector countryDetector = (CountryDetector) getApplicationContext().getSystemService("country_detector");
        if (countryDetector != null) {
            Country countryDetectCountry = countryDetector.detectCountry();
            int source = countryDetectCountry.getSource();
            String str = "country=" + countryDetectCountry.getCountryIso() + " ,source=" + source;
            this.mTextViewCountryDetectorValue.setText(str);
            log("countryDetector result: " + str);
        }
    }

    protected void initAgpsInterface() {
        try {
            this.mAgpsInterface = new AgpsInterface();
        } catch (IOException e) {
            log("agps interface connection failure");
            e.printStackTrace();
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        log("onCreate");
        super.onCreate(bundle);
        try {
            initAgpsInterface();
            setContentView(R.layout.misc);
            this.mButton_TIME = (Button) findViewById(R.id.Button_TIME);
            this.mButton_GPS = (Button) findViewById(R.id.Button_GPS);
            this.mButton_WIFI = (Button) findViewById(R.id.Button_WIFI);
            this.mTextViewCellInfo = (TextView) findViewById(R.id.TextView_CellInfo);
            this.mSpinnerServer = (Spinner) findViewById(R.id.Spinner_ServerPrfoile);
            this.mEditTextIp = (EditText) findViewById(R.id.EditText_serverIp);
            this.mEditTextPort = (EditText) findViewById(R.id.EditText_serverPort);
            this.mButtonConnect = (ToggleButton) findViewById(R.id.Button_serverConnect);
            this.mTextViewResult = (TextView) findViewById(R.id.TextView_ServerResult);
            this.mTextViewCountryDetectorValue = (TextView) findViewById(R.id.TextView_CountryDetectorValue);
            this.mCheckBoxE911OpenGpsEnable = (CheckBox) findViewById(R.id.CheckBox_E911OpenGpsEnable);
            this.mCheckBoxEnableLocationEMService = (CheckBox) findViewById(R.id.CheckBox_EnableLocationEMService);
            this.mCheckBoxEnableLocationSettings = (CheckBox) findViewById(R.id.CheckBox_EnableLocationSettings);
            this.mCheckBoxAddSettingsExemptWhitelist = (CheckBox) findViewById(R.id.CheckBox_AddSettingsExemptWhitelist);
            ArrayAdapter arrayAdapter = new ArrayAdapter(this, android.R.layout.simple_spinner_item, this.SERVER_NAME);
            arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
            this.mSpinnerServer.setAdapter((SpinnerAdapter) arrayAdapter);
            TelephonyManager telephonyManager = (TelephonyManager) getSystemService("phone");
            this.mTelephonyMgr = telephonyManager;
            telephonyManager.listen(new CellStateListener(), 113);
            updateCellInfo();
            if (getSharedPreferences("locationem2.data", 0).getBoolean("launchForegroundService", true)) {
                this.mCheckBoxEnableLocationEMService.setChecked(true);
            } else {
                this.mCheckBoxEnableLocationEMService.setChecked(false);
            }
            LocationManager locationManager = (LocationManager) getSystemService("location");
            this.mLocationManager = locationManager;
            if (locationManager == null) {
                log("ERR: mLocationManager is null");
            }
            if (this.mLocationManager.isLocationEnabled()) {
                this.mCheckBoxEnableLocationSettings.setChecked(true);
            } else {
                this.mCheckBoxEnableLocationSettings.setChecked(false);
            }
            if (isPackageInLocationSettingsWhitelist(getApplicationContext())) {
                this.mCheckBoxAddSettingsExemptWhitelist.setChecked(true);
            } else {
                this.mCheckBoxAddSettingsExemptWhitelist.setChecked(false);
            }
            this.mSpinnerServer.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.lbs.em2.ui.LbsMisc.1
                @Override // android.widget.AdapterView.OnItemSelectedListener
                public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                    int selectedItemId = (int) LbsMisc.this.mSpinnerServer.getSelectedItemId();
                    LbsMisc.this.mEditTextIp.setText(LbsMisc.this.SERVER_IP[selectedItemId]);
                    LbsMisc.this.mEditTextPort.setText(LbsMisc.this.SERVER_PORT[selectedItemId]);
                }

                @Override // android.widget.AdapterView.OnItemSelectedListener
                public void onNothingSelected(AdapterView<?> adapterView) {
                }
            });
            this.mButton_TIME.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsMisc.2
                @Override // android.view.View.OnClickListener
                public void onClick(View view) {
                    LbsMisc.this.startActivity(new Intent("android.settings.DATE_SETTINGS"));
                }
            });
            this.mButton_GPS.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsMisc.3
                @Override // android.view.View.OnClickListener
                public void onClick(View view) {
                    LbsMisc.this.startActivity(new Intent("android.settings.LOCATION_SOURCE_SETTINGS"));
                }
            });
            this.mButton_WIFI.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsMisc.4
                @Override // android.view.View.OnClickListener
                public void onClick(View view) {
                    LbsMisc.this.startActivity(new Intent("android.settings.WIFI_SETTINGS"));
                }
            });
            this.mButtonConnect.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsMisc.5
                @Override // android.view.View.OnClickListener
                public void onClick(View view) {
                    if (!LbsMisc.this.mButtonConnect.isChecked()) {
                        LbsMisc.this.mConnectionThread.stop();
                        return;
                    }
                    try {
                        int iIntValue = Integer.valueOf(LbsMisc.this.mEditTextPort.getText().toString()).intValue();
                        if (LbsMisc.this.mEditTextIp.getText().toString().length() <= 0 || iIntValue < 0 || iIntValue > 65535) {
                            throw new NumberFormatException();
                        }
                        LbsMisc.this.mConnectionThread = LbsMisc.this.new ConnectionThread(LbsMisc.this.mEditTextIp.getText().toString(), iIntValue, LbsMisc.this.mSessionId);
                        LbsMisc.this.mConnectionThread.start();
                        LbsMisc.access$508(LbsMisc.this);
                    } catch (NumberFormatException unused) {
                        Toast.makeText(LbsMisc.this.getApplicationContext(), "ERR: Parameters error!!", 0).show();
                        LbsMisc.this.mButtonConnect.setChecked(false);
                    }
                }
            });
            this.mCheckBoxE911OpenGpsEnable.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsMisc.6
                @Override // android.view.View.OnClickListener
                public void onClick(View view) {
                    LbsMisc lbsMisc = LbsMisc.this;
                    lbsMisc.mAgpsInterface.setE911OpenGpsEnable(lbsMisc.mCheckBoxE911OpenGpsEnable.isChecked());
                }
            });
            this.mCheckBoxEnableLocationEMService.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsMisc.7
                @Override // android.view.View.OnClickListener
                public void onClick(View view) {
                    SharedPreferences.Editor editorEdit = LbsMisc.this.getSharedPreferences("locationem2.data", 0).edit();
                    if (LbsMisc.this.mCheckBoxEnableLocationEMService.isChecked()) {
                        LbsMisc.this.startService(new Intent().setClass(LbsMisc.this, LocationEMService.class));
                        editorEdit.putBoolean("launchForegroundService", true);
                    } else {
                        LbsMisc.this.stopService(new Intent().setClass(LbsMisc.this, LocationEMService.class));
                        editorEdit.putBoolean("launchForegroundService", false);
                    }
                    editorEdit.commit();
                }
            });
            this.mCheckBoxEnableLocationSettings.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsMisc.8
                @Override // android.view.View.OnClickListener
                public void onClick(View view) {
                    LbsMisc.this.mLocationManager.setLocationEnabledForUser(LbsMisc.this.mCheckBoxEnableLocationSettings.isChecked(), Process.myUserHandle());
                }
            });
            this.mCheckBoxAddSettingsExemptWhitelist.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsMisc.9
                @Override // android.view.View.OnClickListener
                public void onClick(View view) {
                    if (LbsMisc.this.mCheckBoxAddSettingsExemptWhitelist.isChecked()) {
                        LbsMisc lbsMisc = LbsMisc.this;
                        lbsMisc.addPackageInLocationSettingsWhitelist(lbsMisc.getApplicationContext());
                    } else {
                        LbsMisc lbsMisc2 = LbsMisc.this;
                        lbsMisc2.removePackageInLocationSettingsWhitelist(lbsMisc2.getApplicationContext());
                    }
                }
            });
        } catch (RuntimeException unused) {
            log("onCreate, Failed to initAgpsInterface");
        }
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        log("onDestroy");
        super.onDestroy();
    }

    @Override // android.app.Activity
    public void onResume() {
        super.onResume();
        applyAgpsConfigToUI();
    }
}
