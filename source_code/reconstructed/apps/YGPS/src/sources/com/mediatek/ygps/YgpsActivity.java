package com.mediatek.ygps;

import android.app.Dialog;
import android.app.ProgressDialog;
import android.app.TabActivity;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.SharedPreferences;
import android.location.GnssStatus;
import android.location.Location;
import android.location.LocationListener;
import android.location.LocationManager;
import android.location.OnNmeaMessageListener;
import android.os.Bundle;
import android.os.Handler;
import android.os.IBinder;
import android.os.Looper;
import android.os.Message;
import android.os.PowerManager;
import android.os.Process;
import android.support.v4.app.ActivityCompat;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.EditText;
import android.widget.GridLayout;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TabHost;
import android.widget.TabWidget;
import android.widget.TextView;
import android.widget.Toast;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Calendar;
import java.util.Collections;
import java.util.Date;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
public class YgpsActivity extends TabActivity implements ActivityCompat.OnRequestPermissionsResultCallback {
    private static final String[] sTypeList = {"Hot start", "Warm start", "Cold start", "Full start"};
    private PermissionManager mPermissionManager;
    private boolean mLogHidden = false;
    private int mTtffValue = 0;
    private int mTotalTimes = 0;
    private int mCurrentTimes = 0;
    private int mTestInterval = 0;
    private int mTestType = 0;
    private int m68Ttff = 0;
    private int m95Ttff = 0;
    private int mMaxTtff = 0;
    private float mMeanTTFF = 0.0f;
    private double mTestLat = 0.0d;
    private double mTestLon = 0.0d;
    private double m68Cep = 0.0d;
    private double m95Cep = 0.0d;
    private double mMeanCep = 0.0d;
    private double mMaxCep = 0.0d;
    private boolean mShowLoc = false;
    private boolean mStartNmeaRecord = false;
    private boolean mFirstFix = false;
    private boolean mIsNeed3DFix = false;
    private boolean mIsTestRunning = false;
    private boolean mIsExit = false;
    private boolean mNeedCalCep = false;
    private boolean mTestTtffValid = false;
    private boolean mTestCepValid = false;
    private boolean mIsRunInBg = false;
    private boolean mShowFirstFixLocate = true;
    private int mSateReportTimeOut = 0;
    private ClientSocket mSocketClient = null;
    private SatelLocationView mSlLocationView = null;
    private LocationManager mLocationManager = null;
    private YgpsWakeLock mYgpsWakeLock = null;
    private Location mLastLocation = null;
    private Button mBtnColdStart = null;
    private Button mBtnWarmStart = null;
    private Button mBtnHotStart = null;
    private Button mBtnFullStart = null;
    private Button mBtnReStart = null;
    private CheckBox mCbEpo = null;
    private CheckBox mCbQepo = null;
    private CheckBox mCbGpsLog = null;
    private Button mBtnNmeaStart = null;
    private Button mBtnNMEAStop = null;
    private Button mBtnGpsTestStart = null;
    private Button mBtnGpsTestStop = null;
    private EditText mEtTestTimes = null;
    private CheckBox mCbNeed3DFix = null;
    private EditText mEtTestInterval = null;
    private Spinner mTestSpinner = null;
    private EditText mEtTestLat = null;
    private EditText mEtTestLon = null;
    private TextView mTvTestLastCep = null;
    private TextView mTvTestMeanCep = null;
    private TextView mTvTest68Cep = null;
    private TextView mTvTest95Cep = null;
    private TextView mTvTestMaxCep = null;
    private TextView mTvTest68Ttff = null;
    private TextView mTvTest95Ttff = null;
    private TextView mTvTestMaxTtff = null;
    private TextView mTvCurTimes = null;
    private TextView mTvCountDown = null;
    private TextView mTvStatus = null;
    private YgpsService mBgService = null;
    private SatelliteCnrController mSlCnrCtl = null;
    private AutoTestThread mAutoTestThread = null;
    private String mProvider = "";
    private String mStatus = "";
    private boolean mStopPressedHandling = false;
    private boolean mStartPressedHandling = false;
    private TextView mTvNmeaLog = null;
    private Button mBtnGpsJamming = null;
    private EditText mEtGpsJammingTimes = null;
    private Toast mPrompt = null;
    private long mLocUpdateTime = 0;
    private ArrayList<Integer> mTestTtffList = new ArrayList<>();
    private ArrayList<Double> mTestCepList = new ArrayList<>();
    private SatelliteInfoManager mSatelInfoManager = null;
    private NmeaParser mNmeaParser = new NmeaParser();
    private NmeaParser.NmeaUpdateViewListener mNmeaUpdateListener = null;
    private boolean mRestarting = false;
    private boolean mNmeaFixed = false;
    private volatile boolean mIsForceStopGpsTest = false;
    private Intent mBgServiceIntent = null;
    private MnldConn mMnldConn = new MnldConn();
    private ServiceConnection mBgServiceConnection = new ServiceConnection() { // from class: com.mediatek.ygps.YgpsActivity.1
        @Override // android.content.ServiceConnection
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            Log.d("YGPS/Mainview", "YGPS onServiceConnected");
            YgpsActivity.this.mBgService = ((YgpsService.LocalYgpsBinder) iBinder).getServiceInstance();
            if (YgpsActivity.this.mBgService == null) {
                throw new RuntimeException("fail to get bound YgpsService from connection");
            }
            if (YgpsActivity.this.mBgService.isForeground()) {
                YgpsActivity.this.mBgService.dismissForeground();
            }
        }

        @Override // android.content.ServiceConnection
        public void onServiceDisconnected(ComponentName componentName) {
            Log.w("YGPS/Mainview", "YGPS onServiceDisconnected");
            YgpsActivity.this.mBgService = null;
        }
    };
    private boolean mPermissionGranted = false;
    private Handler mAutoTestHandler = new Handler() { // from class: com.mediatek.ygps.YgpsActivity.8
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            switch (message.what) {
                case 1004:
                    YgpsActivity.this.mTvCurTimes.setText(Integer.valueOf(message.arg1).toString());
                    break;
                case 1005:
                    YgpsActivity.this.mBtnGpsTestStart.setEnabled(1 == message.arg1);
                    YgpsActivity.this.mBtnGpsTestStop.setEnabled(message.arg1 == 0);
                    if (message.arg1 == 1) {
                        YgpsActivity.this.refreshATViewState(Boolean.FALSE);
                    }
                    break;
                case 1006:
                    YgpsActivity.this.mTvCountDown.setText(Integer.valueOf(message.arg1).toString());
                    break;
                case 1007:
                    ((TextView) YgpsActivity.this.findViewById(R.id.tv_mean_ttff)).setText(Float.valueOf(YgpsActivity.this.mMeanTTFF).toString());
                    break;
                case 1008:
                    YgpsActivity ygpsActivity = YgpsActivity.this;
                    Toast.makeText(ygpsActivity, String.format(ygpsActivity.getString(R.string.toast_exceed_time, new Object[]{Integer.valueOf(message.arg1).toString()}), new Object[0]), 1).show();
                    break;
                case 1009:
                    if (!YgpsActivity.this.mBtnGpsTestStart.isEnabled()) {
                        YgpsActivity.this.setStartButtonEnable(true);
                        YgpsActivity.this.removeDialog(0);
                        YgpsActivity.this.mStopPressedHandling = false;
                        YgpsActivity.this.mStartPressedHandling = false;
                    }
                    break;
            }
        }
    };
    private OnNmeaMessageListener mNmeaListener = new OnNmeaMessageListener() { // from class: com.mediatek.ygps.YgpsActivity.9
        @Override // android.location.OnNmeaMessageListener
        public void onNmeaMessage(String str, long j) {
            if (YgpsActivity.this.mStartNmeaRecord) {
                YgpsActivity.this.mTvNmeaLog.setText(str);
            }
            YgpsActivity.this.mNmeaParser.parse(str);
        }
    };
    private LocationListener mLocListener = new LocationListener() { // from class: com.mediatek.ygps.YgpsActivity.12
        @Override // android.location.LocationListener
        public void onLocationChanged(Location location) {
            Log.v("YGPS/Mainview", "Enter onLocationChanged function");
            if (!YgpsActivity.this.mFirstFix) {
                Log.w("YGPS/Mainview", "mFirstFix is false, onLocationChanged");
            }
            if (YgpsActivity.this.mShowLoc) {
                YgpsActivity.this.showLocToast(location);
            }
            Date date = new Date(location.getTime());
            String str = new SimpleDateFormat("z yyyy/MM/dd").format(date);
            String str2 = new SimpleDateFormat("HH:mm:ss").format(date);
            TextView textView = (TextView) YgpsActivity.this.findViewById(R.id.tv_time);
            if (textView != null) {
                textView.setText(str2);
            }
            ((TextView) YgpsActivity.this.findViewById(R.id.tv_date)).setText(str);
            if (YgpsActivity.this.mShowFirstFixLocate) {
                YgpsActivity.this.showFirstFixInfo(location);
            }
            ((TextView) YgpsActivity.this.findViewById(R.id.tv_latitude)).setText(String.valueOf(location.getLatitude()));
            ((TextView) YgpsActivity.this.findViewById(R.id.tv_longitude)).setText(String.valueOf(location.getLongitude()));
            ((TextView) YgpsActivity.this.findViewById(R.id.tv_altitude)).setText(String.valueOf(location.getAltitude()));
            ((TextView) YgpsActivity.this.findViewById(R.id.tv_accuracy)).setText(String.valueOf(location.getAccuracy()));
            ((TextView) YgpsActivity.this.findViewById(R.id.tv_bearing)).setText(String.valueOf(location.getBearing()));
            ((TextView) YgpsActivity.this.findViewById(R.id.tv_speed)).setText(String.valueOf(location.getSpeed()));
            if (YgpsActivity.this.mLastLocation != null) {
                ((TextView) YgpsActivity.this.findViewById(R.id.tv_distance)).setText(String.valueOf(location.distanceTo(YgpsActivity.this.mLastLocation)));
            }
            ((TextView) YgpsActivity.this.findViewById(R.id.tv_provider)).setText(YgpsActivity.this.mProvider);
            YgpsActivity.this.mTvStatus.setText(YgpsActivity.this.mStatus);
            YgpsActivity.this.mLastLocation = location;
        }

        @Override // android.location.LocationListener
        public void onProviderDisabled(String str) {
            Log.i("YGPS/Mainview", "Enter onProviderDisabled function");
            YgpsActivity ygpsActivity = YgpsActivity.this;
            ygpsActivity.mProvider = String.format(ygpsActivity.getString(R.string.provider_status_disabled, new Object[]{"gps"}), new Object[0]);
            ((TextView) YgpsActivity.this.findViewById(R.id.tv_provider)).setText(YgpsActivity.this.mProvider);
        }

        @Override // android.location.LocationListener
        public void onProviderEnabled(String str) {
            Log.i("YGPS/Mainview", "Enter onProviderEnabled function");
            YgpsActivity ygpsActivity = YgpsActivity.this;
            ygpsActivity.mProvider = String.format(ygpsActivity.getString(R.string.provider_status_enabled, new Object[]{"gps"}), new Object[0]);
            ((TextView) YgpsActivity.this.findViewById(R.id.tv_provider)).setText(YgpsActivity.this.mProvider);
            YgpsActivity.this.mTtffValue = 0;
        }

        @Override // android.location.LocationListener
        public void onStatusChanged(String str, int i, Bundle bundle) {
            Log.v("YGPS/Mainview", "Enter onStatusChanged function");
        }
    };
    private GnssStatus.Callback mGnssStatusCallback = new GnssStatus.Callback() { // from class: com.mediatek.ygps.YgpsActivity.13
        @Override // android.location.GnssStatus.Callback
        public void onFirstFix(int i) {
            Message messageObtainMessage = YgpsActivity.this.mHandler.obtainMessage(1014);
            messageObtainMessage.arg1 = GnssStatusValue.GNSS_STATUS_FIRST_FIX.ordinal();
            messageObtainMessage.arg2 = i;
            YgpsActivity.this.mHandler.sendMessage(messageObtainMessage);
        }

        @Override // android.location.GnssStatus.Callback
        public void onSatelliteStatusChanged(GnssStatus gnssStatus) {
            Message messageObtainMessage = YgpsActivity.this.mHandler.obtainMessage(1014);
            messageObtainMessage.arg1 = GnssStatusValue.GNSS_STATUS_CHANGE.ordinal();
            YgpsActivity.this.mHandler.sendMessage(messageObtainMessage);
        }

        @Override // android.location.GnssStatus.Callback
        public void onStarted() {
            Message messageObtainMessage = YgpsActivity.this.mHandler.obtainMessage(1014);
            messageObtainMessage.arg1 = GnssStatusValue.GNSS_STATUS_START.ordinal();
            YgpsActivity.this.mHandler.sendMessage(messageObtainMessage);
        }

        @Override // android.location.GnssStatus.Callback
        public void onStopped() {
            Message messageObtainMessage = YgpsActivity.this.mHandler.obtainMessage(1014);
            messageObtainMessage.arg1 = GnssStatusValue.GNSS_STATUS_STOP.ordinal();
            YgpsActivity.this.mHandler.sendMessage(messageObtainMessage);
        }
    };
    private final View.OnClickListener mBtnClickListener = new View.OnClickListener() { // from class: com.mediatek.ygps.YgpsActivity.14
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            Bundle bundle = new Bundle();
            if (view == YgpsActivity.this.mBtnGpsTestStart) {
                YgpsActivity.this.showDialog(1);
                YgpsActivity.this.mTvCurTimes.setText("1");
                YgpsActivity.this.mTvCountDown.setText("");
                YgpsActivity.this.mBtnGpsTestStart.refreshDrawableState();
                YgpsActivity.this.mBtnGpsTestStart.setEnabled(false);
                Log.v("YGPS/Mainview", "GPSTest Start button is pressed");
                YgpsActivity.this.mHandler.sendEmptyMessageDelayed(1002, 200L);
                YgpsActivity.this.startGPSAutoTest();
                return;
            }
            if (view == YgpsActivity.this.mBtnGpsTestStop) {
                YgpsActivity.this.mBtnGpsTestStop.setEnabled(false);
                YgpsActivity.this.mBtnGpsTestStop.refreshDrawableState();
                Log.v("YGPS/Mainview", "GPSTest Stop button is pressed");
                if (YgpsActivity.this.mStopPressedHandling) {
                    Log.v("YGPS/Mainview", "stop has been clicked.");
                    return;
                }
                YgpsActivity.this.mStopPressedHandling = true;
                YgpsActivity.this.showDialog(0);
                YgpsActivity.this.mIsTestRunning = false;
                return;
            }
            if (view == YgpsActivity.this.mBtnHotStart) {
                if (YgpsActivity.this.gpsTestRunning()) {
                    return;
                }
                YgpsActivity.this.enableBtns(false);
                Log.i("YGPS/Mainview", "Hot Start button is pressed");
                bundle.putBoolean("rti", true);
                YgpsActivity.this.resetParamForRestart(bundle);
                return;
            }
            if (view == YgpsActivity.this.mBtnWarmStart) {
                if (YgpsActivity.this.gpsTestRunning()) {
                    return;
                }
                YgpsActivity.this.enableBtns(false);
                Log.i("YGPS/Mainview", "Warm Start button is pressed");
                bundle.putBoolean("ephemeris", true);
                YgpsActivity.this.resetParamForRestart(bundle);
                return;
            }
            if (view == YgpsActivity.this.mBtnColdStart) {
                if (YgpsActivity.this.gpsTestRunning()) {
                    return;
                }
                YgpsActivity.this.enableBtns(false);
                Log.i("YGPS/Mainview", "Cold Start button is pressed");
                bundle.putBoolean("ephemeris", true);
                bundle.putBoolean("position", true);
                bundle.putBoolean("time", true);
                bundle.putBoolean("iono", true);
                bundle.putBoolean("utc", true);
                bundle.putBoolean("health", true);
                YgpsActivity.this.resetParamForRestart(bundle);
                return;
            }
            if (view == YgpsActivity.this.mBtnFullStart) {
                if (YgpsActivity.this.gpsTestRunning()) {
                    return;
                }
                YgpsActivity.this.enableBtns(false);
                Log.i("YGPS/Mainview", "Full Start button is pressed");
                bundle.putBoolean("all", true);
                YgpsActivity.this.resetParamForRestart(bundle);
                return;
            }
            if (view == YgpsActivity.this.mBtnReStart) {
                if (YgpsActivity.this.gpsTestRunning()) {
                    return;
                }
                YgpsActivity.this.enableBtns(false);
                Log.i("YGPS/Mainview", "Restart button is pressed");
                bundle.putBoolean("ephemeris", true);
                bundle.putBoolean("almanac", true);
                bundle.putBoolean("position", true);
                bundle.putBoolean("time", true);
                bundle.putBoolean("iono", true);
                bundle.putBoolean("utc", true);
                YgpsActivity.this.resetParamForRestart(bundle);
                return;
            }
            if (view == YgpsActivity.this.mBtnNmeaStart) {
                Log.i("YGPS/Mainview", "NMEA Start button is pressed");
                YgpsActivity.this.mStartNmeaRecord = true;
                YgpsActivity.this.mBtnNmeaStart.setEnabled(false);
                YgpsActivity.this.mBtnNMEAStop.setEnabled(true);
                return;
            }
            if (view != YgpsActivity.this.mBtnNMEAStop) {
                if (view == YgpsActivity.this.mBtnGpsJamming) {
                    Log.i("YGPS/Mainview", "mBtnGPSJamming Button is pressed");
                    YgpsActivity.this.onGpsJammingScanClicked();
                    return;
                }
                return;
            }
            Log.i("YGPS/Mainview", "NMEA Stop button is pressed");
            YgpsActivity.this.mStartNmeaRecord = false;
            YgpsActivity.this.mBtnNMEAStop.setEnabled(false);
            YgpsActivity.this.mBtnNmeaStart.setEnabled(true);
            YgpsActivity.this.mTvNmeaLog.setText(R.string.empty);
        }
    };
    private Handler mHandler = new Handler() { // from class: com.mediatek.ygps.YgpsActivity.15
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            switch (i) {
                case 1000:
                    if (!YgpsActivity.this.mFirstFix) {
                        YgpsActivity.access$3912(YgpsActivity.this, 500);
                        ((TextView) YgpsActivity.this.findViewById(R.id.tv_ttff)).setText(YgpsActivity.this.mTtffValue % 1000 == 0 ? "Counting" : "");
                        sendEmptyMessageDelayed(1000, 500L);
                    }
                    break;
                case 1001:
                    YgpsActivity.this.handleCmdResult(message.obj.toString(), message.arg1);
                    break;
                case 1002:
                    Log.i("YGPS/Mainview", "handleClear-msg");
                    YgpsActivity.this.clearSateInfo();
                    break;
                case 1003:
                    YgpsActivity.access$2808(YgpsActivity.this);
                    if (3 < YgpsActivity.this.mSateReportTimeOut) {
                        YgpsActivity.this.mSateReportTimeOut = 0;
                        sendEmptyMessage(1002);
                    }
                    sendEmptyMessageDelayed(1003, 1000L);
                    break;
                default:
                    switch (i) {
                        case 1010:
                            Log.i("YGPS/Mainview", "restart update-msg");
                            YgpsActivity.this.restartUpdate(this, message.getData());
                            break;
                        case 1011:
                            Log.i("YGPS/Mainview", "handleEnableButton-msg");
                            YgpsActivity.this.enableBtns(true);
                            break;
                        case 1012:
                            String gnssHardwareModelName = YgpsActivity.this.mLocationManager.getGnssHardwareModelName();
                            Log.i("YGPS/Mainview", "hwMode:" + gnssHardwareModelName);
                            String[] strArrSplit = gnssHardwareModelName.split(",");
                            if (strArrSplit != null) {
                                for (String str : strArrSplit) {
                                    if (str != null && str.contains("MNL_VER_")) {
                                        String strSubstring = str.substring(8);
                                        Log.i("YGPS/Mainview", "mnlVer:" + strSubstring);
                                        ((TextView) YgpsActivity.this.findViewById(R.id.tv_mnl_version)).setText(strSubstring);
                                    }
                                }
                            }
                            YgpsActivity.this.showChipAndClkInfo();
                            break;
                        case 1013:
                            YgpsActivity.this.mLocationManager.setLocationEnabledForUser(true, Process.myUserHandle());
                            break;
                        case 1014:
                            YgpsActivity.this.handleGnssStatusChangeMsg(message);
                            break;
                    }
                    break;
            }
            super.handleMessage(message);
        }
    };

    /* JADX INFO: renamed from: com.mediatek.ygps.YgpsActivity$16, reason: invalid class name */
    static /* synthetic */ class AnonymousClass16 {
        static final /* synthetic */ int[] $SwitchMap$com$mediatek$ygps$YgpsActivity$GnssStatusValue;

        static {
            int[] iArr = new int[GnssStatusValue.values().length];
            $SwitchMap$com$mediatek$ygps$YgpsActivity$GnssStatusValue = iArr;
            try {
                iArr[GnssStatusValue.GNSS_STATUS_START.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                $SwitchMap$com$mediatek$ygps$YgpsActivity$GnssStatusValue[GnssStatusValue.GNSS_STATUS_STOP.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                $SwitchMap$com$mediatek$ygps$YgpsActivity$GnssStatusValue[GnssStatusValue.GNSS_STATUS_CHANGE.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                $SwitchMap$com$mediatek$ygps$YgpsActivity$GnssStatusValue[GnssStatusValue.GNSS_STATUS_FIRST_FIX.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
        }
    }

    private class AutoTestThread extends Thread {
        private AutoTestThread() {
        }

        @Override // java.lang.Thread, java.lang.Runnable
        public void run() {
            super.run();
            Looper.prepare();
            YgpsActivity.this.setStartButtonEnable(false);
            YgpsActivity.this.mLocationManager.removeUpdates(YgpsActivity.this.mLocListener);
            YgpsActivity.this.sleep(2000L);
            YgpsActivity.this.mIsTestRunning = true;
            Log.v("YGPS/Mainview", "mIsTestRunning: true");
            YgpsActivity.this.reconnectTest();
            YgpsActivity.this.calTestResult();
            YgpsActivity.this.runOnUiThread(new Runnable() { // from class: com.mediatek.ygps.YgpsActivity.AutoTestThread.1
                @Override // java.lang.Runnable
                public void run() {
                    YgpsActivity.this.showTestResult();
                }
            });
            YgpsActivity.this.setStartButtonEnable(true);
            interrupt();
        }
    }

    enum GnssStatusValue {
        GNSS_STATUS_START,
        GNSS_STATUS_STOP,
        GNSS_STATUS_FIRST_FIX,
        GNSS_STATUS_CHANGE
    }

    private class YgpsWakeLock {
        private PowerManager.WakeLock mCpuWakeLock;
        private PowerManager.WakeLock mScreenWakeLock;

        private YgpsWakeLock(YgpsActivity ygpsActivity) {
            this.mScreenWakeLock = null;
            this.mCpuWakeLock = null;
        }

        void acquireCpuWakeLock(Context context) {
            Log.v("YGPS/Mainview", "Acquiring cpu wake lock");
            if (this.mCpuWakeLock != null) {
                return;
            }
            PowerManager.WakeLock wakeLockNewWakeLock = ((PowerManager) context.getSystemService("power")).newWakeLock(268435457, "YGPS/Mainview");
            this.mCpuWakeLock = wakeLockNewWakeLock;
            wakeLockNewWakeLock.acquire();
        }

        void acquireScreenWakeLock(Context context) {
            Log.v("YGPS/Mainview", "Acquiring screen wake lock");
            if (this.mScreenWakeLock != null) {
                return;
            }
            PowerManager.WakeLock wakeLockNewWakeLock = ((PowerManager) context.getSystemService("power")).newWakeLock(268435482, "YGPS/Mainview");
            this.mScreenWakeLock = wakeLockNewWakeLock;
            wakeLockNewWakeLock.acquire();
        }

        void releaseCpuWakeLock() {
            Log.v("YGPS/Mainview", "Releasing cpu wake lock");
            PowerManager.WakeLock wakeLock = this.mCpuWakeLock;
            if (wakeLock != null) {
                wakeLock.release();
                this.mCpuWakeLock = null;
            }
        }

        void releaseScreenWakeLock() {
            Log.v("YGPS/Mainview", "Releasing wake lock");
            PowerManager.WakeLock wakeLock = this.mScreenWakeLock;
            if (wakeLock != null) {
                wakeLock.release();
                this.mScreenWakeLock = null;
            }
        }
    }

    static /* synthetic */ int access$2808(YgpsActivity ygpsActivity) {
        int i = ygpsActivity.mSateReportTimeOut;
        ygpsActivity.mSateReportTimeOut = i + 1;
        return i;
    }

    static /* synthetic */ int access$3912(YgpsActivity ygpsActivity, int i) {
        int i2 = ygpsActivity.mTtffValue + i;
        ygpsActivity.mTtffValue = i2;
        return i2;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void calTestResult() {
        int size = this.mTestTtffList.size();
        Log.v("YGPS/Mainview", "ttffNumber:" + size);
        Iterator<Integer> it = this.mTestTtffList.iterator();
        while (it.hasNext()) {
            Log.v("YGPS/Mainview", "value:" + it.next());
        }
        if (size > 0) {
            Collections.sort(this.mTestTtffList);
            double d = size;
            int iFloor = (int) Math.floor(d * 0.68d);
            int iFloor2 = (int) Math.floor(d * 0.95d);
            this.m68Ttff = this.mTestTtffList.get(iFloor).intValue();
            this.m95Ttff = this.mTestTtffList.get(iFloor2).intValue();
            this.mMaxTtff = this.mTestTtffList.get(size - 1).intValue();
            Log.i("YGPS/Mainview", "index68:" + iFloor + "index95:" + iFloor2 + "m68Ttff:" + this.m68Ttff + "m95Ttff:" + this.m95Ttff + "mMaxTtff:" + this.mMaxTtff);
            this.mTestTtffValid = true;
        } else {
            this.mTestTtffValid = false;
        }
        int size2 = this.mTestCepList.size();
        Log.v("YGPS/Mainview", "cepNumber:" + size2);
        Iterator<Double> it2 = this.mTestCepList.iterator();
        while (it2.hasNext()) {
            Log.v("YGPS/Mainview", "value:" + it2.next());
        }
        if (size2 <= 0) {
            this.mTestCepValid = false;
            return;
        }
        Collections.sort(this.mTestCepList);
        double d2 = size2;
        int iFloor3 = (int) Math.floor(0.68d * d2);
        int iFloor4 = (int) Math.floor(d2 * 0.95d);
        this.m68Cep = this.mTestCepList.get(iFloor3).doubleValue();
        this.m95Cep = this.mTestCepList.get(iFloor4).doubleValue();
        this.mMaxCep = this.mTestCepList.get(size2 - 1).doubleValue();
        Log.i("YGPS/Mainview", "index68:" + iFloor3 + "index95:" + iFloor4 + "m68Cep:" + this.m68Cep + "m95Cep:" + this.m95Cep + "mMaxCep:" + this.mMaxCep);
        this.mTestCepValid = true;
    }

    private void clearLayout() {
        ((TextView) findViewById(R.id.tv_date)).setText(R.string.empty);
        ((TextView) findViewById(R.id.tv_time)).setText(R.string.empty);
        ((TextView) findViewById(R.id.tv_latitude)).setText(R.string.empty);
        ((TextView) findViewById(R.id.tv_longitude)).setText(R.string.empty);
        ((TextView) findViewById(R.id.tv_altitude)).setText(R.string.empty);
        ((TextView) findViewById(R.id.tv_accuracy)).setText(R.string.empty);
        ((TextView) findViewById(R.id.tv_bearing)).setText(R.string.empty);
        ((TextView) findViewById(R.id.tv_speed)).setText(R.string.empty);
        ((TextView) findViewById(R.id.tv_distance)).setText(R.string.empty);
        if (this.mShowFirstFixLocate) {
            ((TextView) findViewById(R.id.first_longtitude_text)).setText(R.string.empty);
            ((TextView) findViewById(R.id.first_latitude_text)).setText(R.string.empty);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void clearSateInfo() {
        this.mSatelInfoManager.clearSatelInfos();
        clearLayout();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void enableBtns(boolean z) {
        this.mBtnHotStart.setClickable(z);
        this.mBtnWarmStart.setClickable(z);
        this.mBtnColdStart.setClickable(z);
        this.mBtnFullStart.setClickable(z);
        this.mBtnReStart.setClickable(z);
    }

    private void forceStopGpsAutoTest() {
        synchronized (this) {
            this.mIsForceStopGpsTest = true;
        }
        resetTestParam();
        this.mHandler.removeMessages(1010);
        refreshATViewState(Boolean.FALSE);
        this.mStartPressedHandling = false;
        this.mStopPressedHandling = false;
    }

    private void getMnldVersion() {
        Log.i("YGPS/Mainview", "restart GPS");
        if (this.mLocationManager.isLocationEnabled()) {
            this.mLocationManager.setLocationEnabledForUser(false, Process.myUserHandle());
            this.mHandler.sendEmptyMessageDelayed(1013, 1000L);
        }
        this.mHandler.sendEmptyMessageDelayed(1012, 2000L);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean gpsTestRunning() {
        if (!this.mIsTestRunning) {
            return false;
        }
        Toast.makeText(this, R.string.gps_test_running_warn, 1).show();
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleCmdResult(String str, int i) {
        if (i == 1) {
            if (str.contains("PMTK001,837")) {
                Toast.makeText(this, R.string.toast_jamming_succeed, 1).show();
            }
        } else if (i == 2 && str.startsWith("$PMTK705")) {
            String[] strArrSplit = str.split(",");
            if (strArrSplit.length >= 6) {
                ((TextView) findViewById(R.id.tv_dsp_version)).setText(strArrSplit[4] + "," + strArrSplit[5]);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleGnssStatusChangeMsg(Message message) {
        int i = AnonymousClass16.$SwitchMap$com$mediatek$ygps$YgpsActivity$GnssStatusValue[GnssStatusValue.values()[message.arg1].ordinal()];
        if (i == 1) {
            String string = getString(R.string.gps_status_started);
            this.mStatus = string;
            this.mTvStatus.setText(string);
            return;
        }
        if (i == 2) {
            String string2 = getString(R.string.gps_status_stopped);
            this.mStatus = string2;
            this.mTvStatus.setText(string2);
            return;
        }
        if (i != 3) {
            if (i != 4) {
                return;
            }
            if (isGpsRestarting()) {
                Log.v("YGPS/Mainview", "Restarting GPS, ignore the FIRST_FIX event");
                return;
            }
            handleTtffReceived(message.arg2);
            String string3 = getString(R.string.gps_status_first_fix);
            this.mStatus = string3;
            this.mTvStatus.setText(string3);
            return;
        }
        if (!this.mNmeaFixed) {
            this.mFirstFix = false;
            if (this.mHandler.hasMessages(1000)) {
                return;
            }
            this.mHandler.sendEmptyMessage(1000);
            return;
        }
        if (this.mFirstFix) {
            return;
        }
        Log.i("YGPS/Mainview", "Already fixed");
        this.mHandler.removeMessages(1000);
        this.mTtffValue = 0;
        this.mFirstFix = true;
        ((TextView) findViewById(R.id.tv_ttff)).setText(this.mTtffValue + getString(R.string.time_unit_ms) + "(Already fixed)");
    }

    private void handleTtffReceived(int i) {
        Log.i("YGPS/Mainview", "Enter onFirstFix function: ttff = " + i);
        int i2 = this.mCurrentTimes;
        this.mHandler.removeMessages(1000);
        this.mTtffValue = i;
        if (i != i) {
            this.mTtffValue = i;
        }
        this.mFirstFix = true;
        Toast.makeText(this, String.format(getString(R.string.toast_first_fix), Integer.valueOf(i), getString(R.string.time_unit_ms)), 1).show();
        ((TextView) findViewById(R.id.tv_ttff)).setText(this.mTtffValue + getString(R.string.time_unit_ms));
        Log.v("YGPS/Mainview", "show tvTtff = " + this.mTtffValue);
        if (this.mIsTestRunning) {
            this.mTestTtffList.add(Integer.valueOf(this.mTtffValue));
            Log.d("YGPS/Mainview", "mTestTtffList add: " + this.mTtffValue);
            ((TextView) findViewById(R.id.tv_last_ttff)).setText(this.mTtffValue + getString(R.string.time_unit_ms));
            this.mMeanTTFF = meanTTFF(i2);
            Log.d("YGPS/Mainview", "mMeanTTFF: " + this.mMeanTTFF);
            ((TextView) findViewById(R.id.tv_mean_ttff)).setText(Float.valueOf(this.mMeanTTFF).toString() + getString(R.string.time_unit_ms));
        }
    }

    private void initBgStatus() {
        if (getIntent().getBooleanExtra("bg", false)) {
            Log.i("YGPS/Mainview", "Init in BG ");
            getSharedPreferences("RunInBG", 0).edit().putBoolean("RunInBG", true).commit();
            this.mIsRunInBg = true;
        } else if (getSharedPreferences("RunInBG", 0).getBoolean("RunInBG", false)) {
            this.mIsRunInBg = true;
        } else {
            this.mIsRunInBg = false;
        }
    }

    private void initEpoUI() {
        this.mCbEpo = (CheckBox) findViewById(R.id.cb_gps_epo);
        this.mCbQepo = (CheckBox) findViewById(R.id.cb_gps_qepo);
        String mnlProp = GpsMnlSetting.getMnlProp("gps.epo", "1");
        if (mnlProp.equals("1")) {
            this.mCbEpo.setChecked(true);
            this.mCbQepo.setChecked(true);
        } else if (mnlProp.equals("2")) {
            this.mCbEpo.setChecked(true);
        } else if (mnlProp.equals("3")) {
            this.mCbQepo.setChecked(true);
        }
        this.mCbEpo.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() { // from class: com.mediatek.ygps.YgpsActivity.4
            @Override // android.widget.CompoundButton.OnCheckedChangeListener
            public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
                if (z) {
                    GpsMnlSetting.setMnlProp(YgpsActivity.this.mMnldConn, "gps.epo", YgpsActivity.this.mCbQepo.isChecked() ? "1" : "2");
                } else {
                    GpsMnlSetting.setMnlProp(YgpsActivity.this.mMnldConn, "gps.epo", YgpsActivity.this.mCbQepo.isChecked() ? "3" : "0");
                }
            }
        });
        this.mCbQepo.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() { // from class: com.mediatek.ygps.YgpsActivity.5
            @Override // android.widget.CompoundButton.OnCheckedChangeListener
            public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
                if (z) {
                    GpsMnlSetting.setMnlProp(YgpsActivity.this.mMnldConn, "gps.epo", YgpsActivity.this.mCbEpo.isChecked() ? "1" : "3");
                } else {
                    GpsMnlSetting.setMnlProp(YgpsActivity.this.mMnldConn, "gps.epo", YgpsActivity.this.mCbEpo.isChecked() ? "2" : "0");
                }
            }
        });
    }

    private void initTabPage() {
        TabHost tabHost = getTabHost();
        LayoutInflater.from(this).inflate(R.layout.layout_tabs, (ViewGroup) tabHost.getTabContentView(), true);
        tabHost.addTab(tabHost.newTabSpec(getString(R.string.satellites_cnr)).setIndicator(getString(R.string.satellites_cnr)).setContent(R.id.layout_satellites_cnr));
        tabHost.addTab(tabHost.newTabSpec(getString(R.string.satellites_loc)).setIndicator(getString(R.string.satellites_loc)).setContent(R.id.layout_satellites_loc));
        tabHost.addTab(tabHost.newTabSpec(getString(R.string.information)).setIndicator(getString(R.string.information)).setContent(R.id.layout_info));
        tabHost.addTab(tabHost.newTabSpec(getString(R.string.nmea_log)).setIndicator(getString(R.string.nmea_log)).setContent(R.id.layout_nmea));
        tabHost.addTab(tabHost.newTabSpec(getString(R.string.gps_test)).setIndicator(getString(R.string.gps_test)).setContent(R.id.layout_auto_test));
        tabHost.setOnTabChangedListener(new TabHost.OnTabChangeListener(this) { // from class: com.mediatek.ygps.YgpsActivity.10
            @Override // android.widget.TabHost.OnTabChangeListener
            public void onTabChanged(String str) {
                Log.d("YGPS/Mainview", "Select: " + str);
            }
        });
        TabWidget tabWidget = tabHost.getTabWidget();
        int childCount = tabWidget.getChildCount();
        for (int i = 0; i < childCount; i++) {
            ((TextView) tabWidget.getChildAt(i).findViewById(android.R.id.title)).setTextSize(10.0f);
        }
    }

    private boolean isGpsRestarting() {
        return this.mRestarting;
    }

    private double meanCep(int i, double d) {
        return ((this.mMeanCep * ((double) (i - 1))) + d) / ((double) i);
    }

    private float meanTTFF(int i) {
        return ((this.mMeanTTFF * (i - 1)) + this.mTtffValue) / i;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void onGpsJammingScanClicked() {
        if (this.mEtGpsJammingTimes.getText().length() == 0) {
            Toast.makeText(this, "Please input Jamming scan times", 1).show();
            return;
        }
        Integer numValueOf = Integer.valueOf(this.mEtGpsJammingTimes.getText().toString());
        if (numValueOf.intValue() <= 0 || numValueOf.intValue() > 999) {
            Toast.makeText(this, "Jamming scan times error", 1).show();
            return;
        }
        sendCommand("PMTK837,1," + numValueOf);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void reconnectTest() {
        Bundle bundle = new Bundle();
        int i = this.mTestType;
        if (i == 0) {
            bundle.putBoolean("rti", true);
        } else if (i == 1) {
            bundle.putBoolean("ephemeris", true);
        } else if (i == 2) {
            bundle.putBoolean("ephemeris", true);
            bundle.putBoolean("position", true);
            bundle.putBoolean("time", true);
            bundle.putBoolean("iono", true);
            bundle.putBoolean("utc", true);
            bundle.putBoolean("health", true);
        } else if (i == 3) {
            bundle.putBoolean("all", true);
        }
        Log.i("YGPS/Mainview", "test type:" + this.mTestType + " times:" + this.mTotalTimes);
        removeDialog(1);
        for (int i2 = 1; i2 <= this.mTotalTimes && this.mIsTestRunning; i2++) {
            this.mCurrentTimes = i2;
            Log.i("YGPS/Mainview", "reconnectTest function: " + Integer.valueOf(this.mCurrentTimes).toString());
            setCurrentTimes(i2);
            synchronized (this) {
                if (this.mIsForceStopGpsTest) {
                    return;
                } else {
                    resetParamForAutoTest(bundle);
                }
            }
            waitAutoTestInterval();
            if (this.mIsNeed3DFix) {
                wait3DFix();
            } else {
                sleep(2000L);
            }
        }
        sleep(1000L);
        synchronized (this) {
            if (this.mIsForceStopGpsTest) {
                return;
            }
            stopGPSAutoTest();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void refreshATViewState(Boolean bool) {
        this.mBtnGpsTestStart.setEnabled(!bool.booleanValue());
        this.mEtTestTimes.setEnabled(!bool.booleanValue());
        this.mCbNeed3DFix.setEnabled(!bool.booleanValue());
        this.mEtTestInterval.setEnabled(!bool.booleanValue());
        this.mEtTestLat.setEnabled(!bool.booleanValue());
        this.mEtTestLon.setEnabled(!bool.booleanValue());
        this.mBtnGpsTestStop.setEnabled(bool.booleanValue());
        if (bool.booleanValue()) {
            clearLayout();
        }
    }

    private void removeNmeaParser() {
        Log.i("YGPS/Mainview", "removeNmeaParser()");
        this.mNmeaParser.removeSVUpdateListener(this.mNmeaUpdateListener);
        this.mNmeaParser.clearSatelliteList();
    }

    private void resetParamForAutoTest(Bundle bundle) {
        Log.i("YGPS/Mainview", "resetParamForAutoTest");
        this.mLocationManager.removeUpdates(this.mLocListener);
        Message messageObtainMessage = this.mHandler.obtainMessage(1010);
        messageObtainMessage.setData(bundle);
        this.mHandler.sendMessage(messageObtainMessage);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void resetParamForRestart(Bundle bundle) {
        Log.i("YGPS/Mainview", "resetParamForRestart");
        this.mRestarting = true;
        this.mLocationManager.removeUpdates(this.mLocListener);
        Message messageObtainMessage = this.mHandler.obtainMessage(1010);
        messageObtainMessage.setData(bundle);
        this.mHandler.sendMessage(messageObtainMessage);
        this.mHandler.sendEmptyMessageDelayed(1011, 900L);
    }

    private void resetTestParam() {
        this.mIsNeed3DFix = false;
        this.mTotalTimes = 0;
        this.mCurrentTimes = 0;
        this.mTestInterval = 0;
        this.mMeanTTFF = 0.0f;
        this.mIsTestRunning = false;
        this.mNeedCalCep = false;
    }

    private void resetTestView() {
        ((TextView) findViewById(R.id.tv_mean_ttff)).setText("");
        ((TextView) findViewById(R.id.tv_last_ttff)).setText("");
        this.mTvTest68Ttff.setText("");
        this.mTvTest95Ttff.setText("");
        this.mTvTestMaxTtff.setText("");
        this.mTvTest68Cep.setText("");
        this.mTvTest95Cep.setText("");
        this.mTvTestLastCep.setText("");
        this.mTvTestMaxCep.setText("");
        this.mTvTestMeanCep.setText("");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void restartUpdate(Handler handler, Bundle bundle) {
        removeNmeaParser();
        this.mFirstFix = false;
        this.mTtffValue = 0;
        this.mNmeaFixed = false;
        this.mShowFirstFixLocate = true;
        clearSateInfo();
        if (!handler.hasMessages(1000)) {
            handler.sendEmptyMessage(1000);
        }
        sleep(300L);
        Log.i("YGPS/Mainview", "delete_aiding_data-msg");
        this.mLocationManager.sendExtraCommand("gps", "delete_aiding_data", bundle);
        sleep(300L);
        this.mLocationManager.requestLocationUpdates("gps", 0L, 0.0f, this.mLocListener);
        this.mNmeaParser.addSVUpdateListener(this.mNmeaUpdateListener);
        this.mRestarting = false;
        Log.i("YGPS/Mainview", "requestLocationUpdates-msg");
    }

    private void sendCommand(String str) {
        Log.i("YGPS/Mainview", "sendCommand:" + str);
        if (str == null || str.trim().length() == 0) {
            Toast.makeText(this, R.string.command_error, 1).show();
            return;
        }
        int iIndexOf = str.indexOf("$");
        int iIndexOf2 = str.indexOf("*");
        if (iIndexOf == -1 || iIndexOf2 == -1) {
            if (iIndexOf != -1) {
                str = str.substring(iIndexOf + 1);
            } else if (iIndexOf2 != -1) {
                str = str.substring(0, iIndexOf2);
            }
        } else {
            if (iIndexOf2 < iIndexOf) {
                Toast.makeText(this, R.string.command_error, 1).show();
                return;
            }
            str = str.substring(iIndexOf + 1, iIndexOf2);
        }
        this.mSocketClient.sendCommand(str.trim());
    }

    private void setCountDown(int i) {
        Message messageObtainMessage = this.mAutoTestHandler.obtainMessage(1006);
        messageObtainMessage.arg1 = i;
        this.mAutoTestHandler.sendMessage(messageObtainMessage);
    }

    private void setCurrentTimes(int i) {
        Message messageObtainMessage = this.mAutoTestHandler.obtainMessage(1004);
        messageObtainMessage.arg1 = i;
        this.mAutoTestHandler.sendMessage(messageObtainMessage);
    }

    private void setGpsTestLayout() {
        this.mTvTestLastCep = (TextView) findViewById(R.id.tv_last_cep);
        this.mTvTestMeanCep = (TextView) findViewById(R.id.tv_mean_cep);
        this.mTvTest68Cep = (TextView) findViewById(R.id.tv_percent_68_cep);
        this.mTvTest95Cep = (TextView) findViewById(R.id.tv_percent_95_cep);
        this.mTvTestMaxCep = (TextView) findViewById(R.id.tv_max_cep);
        this.mTvTest68Ttff = (TextView) findViewById(R.id.tv_percent_68_ttff);
        this.mTvTest95Ttff = (TextView) findViewById(R.id.tv_percent_95_ttff);
        this.mTvTestMaxTtff = (TextView) findViewById(R.id.tv_max_ttff);
        this.mTvCurTimes = (TextView) findViewById(R.id.tv_current_times);
        this.mTvCountDown = (TextView) findViewById(R.id.tv_reconnect_countdown);
        Button button = (Button) findViewById(R.id.btn_gps_test_start);
        this.mBtnGpsTestStart = button;
        button.setOnClickListener(this.mBtnClickListener);
        Button button2 = (Button) findViewById(R.id.btn_gps_test_stop);
        this.mBtnGpsTestStop = button2;
        button2.setOnClickListener(this.mBtnClickListener);
        int i = 0;
        this.mBtnGpsTestStop.setEnabled(false);
        this.mEtTestTimes = (EditText) findViewById(R.id.et_gps_test_times);
        this.mCbNeed3DFix = (CheckBox) findViewById(R.id.cb_need_3d_fix);
        this.mEtTestInterval = (EditText) findViewById(R.id.et_gps_test_interval);
        this.mEtTestLat = (EditText) findViewById(R.id.et_latitude);
        this.mEtTestLon = (EditText) findViewById(R.id.et_longitude);
        Button button3 = (Button) findViewById(R.id.btn_gps_jamming_scan);
        this.mBtnGpsJamming = button3;
        button3.setOnClickListener(this.mBtnClickListener);
        EditText editText = (EditText) findViewById(R.id.et_gps_jamming_times);
        this.mEtGpsJammingTimes = editText;
        editText.setText(getString(R.string.jamming_scan_times));
        EditText editText2 = this.mEtGpsJammingTimes;
        editText2.setSelection(editText2.getText().length());
        this.mTestSpinner = (Spinner) findViewById(R.id.start_type_Spinner);
        ArrayAdapter arrayAdapter = new ArrayAdapter(this, android.R.layout.simple_spinner_item);
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        while (true) {
            String[] strArr = sTypeList;
            if (i >= strArr.length) {
                this.mTestSpinner.setAdapter((SpinnerAdapter) arrayAdapter);
                this.mTestSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.ygps.YgpsActivity.7
                    @Override // android.widget.AdapterView.OnItemSelectedListener
                    public void onItemSelected(AdapterView<?> adapterView, View view, int i2, long j) {
                        YgpsActivity.this.mTestType = i2;
                        Log.i("YGPS/Mainview", "The mTestType is : " + i2);
                    }

                    @Override // android.widget.AdapterView.OnItemSelectedListener
                    public void onNothingSelected(AdapterView<?> adapterView) {
                    }
                });
                return;
            } else {
                arrayAdapter.add(strArr[i]);
                i++;
            }
        }
    }

    private void setInfoLayout() {
        this.mTvStatus = (TextView) findViewById(R.id.tv_status);
        Button button = (Button) findViewById(R.id.btn_cold);
        this.mBtnColdStart = button;
        button.setOnClickListener(this.mBtnClickListener);
        Button button2 = (Button) findViewById(R.id.btn_warm);
        this.mBtnWarmStart = button2;
        button2.setOnClickListener(this.mBtnClickListener);
        Button button3 = (Button) findViewById(R.id.btn_hot);
        this.mBtnHotStart = button3;
        button3.setOnClickListener(this.mBtnClickListener);
        Button button4 = (Button) findViewById(R.id.btn_full);
        this.mBtnFullStart = button4;
        button4.setOnClickListener(this.mBtnClickListener);
        Button button5 = (Button) findViewById(R.id.btn_restart);
        this.mBtnReStart = button5;
        button5.setOnClickListener(this.mBtnClickListener);
        this.mCbGpsLog = (CheckBox) findViewById(R.id.cb_gps_log);
        this.mCbGpsLog.setChecked(GpsMnlSetting.getMnlProp("gpslog_enabled", "0").equals("1"));
        this.mCbGpsLog.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() { // from class: com.mediatek.ygps.YgpsActivity.6
            @Override // android.widget.CompoundButton.OnCheckedChangeListener
            public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
                Log.i("YGPS/Mainview", "gpslog state changed to " + z);
                GpsMnlSetting.setMnlProp(YgpsActivity.this.mMnldConn, "gpslog_enabled", z ? "1" : "0");
            }
        });
        initEpoUI();
    }

    private void setLayout() {
        setSlLocLayout();
        setSlCnrLayout();
        setInfoLayout();
        setNmeaLayout();
        setGpsTestLayout();
    }

    private void setNmeaLayout() {
        this.mTvNmeaLog = (TextView) findViewById(R.id.tv_nmea_log);
        Button button = (Button) findViewById(R.id.btn_nmea_start);
        this.mBtnNmeaStart = button;
        button.setOnClickListener(this.mBtnClickListener);
        Button button2 = (Button) findViewById(R.id.btn_nmea_stop);
        this.mBtnNMEAStop = button2;
        button2.setOnClickListener(this.mBtnClickListener);
        if (this.mLogHidden) {
            this.mBtnNmeaStart.setVisibility(8);
            this.mBtnNMEAStop.setVisibility(8);
        }
        this.mBtnNMEAStop.setEnabled(false);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setSatelliteStatus() {
        this.mSatelInfoManager.updateSatelliteInfo(this.mNmeaParser);
        if (!this.mLogHidden) {
            Log.i("YGPS/Mainview", "setSatelliteStatus " + this.mSatelInfoManager.toString());
        }
        boolean zIsUsedInFix = this.mSatelInfoManager.isUsedInFix(-1);
        this.mNmeaFixed = zIsUsedInFix;
        if (zIsUsedInFix) {
            this.mStatus = getString(R.string.gps_status_available);
        } else {
            clearLayout();
            this.mStatus = getString(R.string.gps_status_unavailable);
        }
        this.mTvStatus.setText(this.mStatus);
        Log.i("YGPS/Mainview", "setSatelliteStatus: status:" + this.mStatus);
        this.mSlLocationView.requestUpdate(this.mSatelInfoManager);
        runOnUiThread(new Runnable() { // from class: com.mediatek.ygps.YgpsActivity.2
            @Override // java.lang.Runnable
            public void run() {
                YgpsActivity.this.mSlCnrCtl.updateView(YgpsActivity.this.mSatelInfoManager);
            }
        });
    }

    private void setSlCnrLayout() {
        this.mSlCnrCtl = new SatelliteCnrController(findViewById(R.id.layout_satellites_cnr), this);
    }

    private void setSlLocLayout() {
        final GridLayout gridLayout = (GridLayout) findViewById(R.id.glSummary);
        gridLayout.post(new Runnable() { // from class: com.mediatek.ygps.YgpsActivity.3
            @Override // java.lang.Runnable
            public void run() {
                int columnCount = gridLayout.getColumnCount();
                int width = gridLayout.getWidth() / columnCount;
                SatelliteInfo.SatellitesSystem[] satellitesSystemArrValues = SatelliteInfo.SatellitesSystem.values();
                for (int i = 0; i < satellitesSystemArrValues.length; i++) {
                    SatelliteInfo.SatellitesSystem satellitesSystem = satellitesSystemArrValues[i];
                    int i2 = i * 2;
                    int i3 = i2 / columnCount;
                    int i4 = i2 % columnCount;
                    GridLayout.LayoutParams layoutParams = new GridLayout.LayoutParams(GridLayout.spec(i3), GridLayout.spec(i4));
                    TextView textView = new TextView(YgpsActivity.this);
                    textView.setText(satellitesSystem.getName());
                    textView.setWidth(width);
                    textView.setHeight(50);
                    gridLayout.addView(textView, layoutParams);
                    GridLayout.LayoutParams layoutParams2 = new GridLayout.LayoutParams(GridLayout.spec(i3), GridLayout.spec(i4 + 1));
                    TextView textView2 = new TextView(YgpsActivity.this);
                    textView2.setBackgroundColor(satellitesSystem.getColor());
                    textView2.setWidth(width);
                    textView2.setHeight(50);
                    gridLayout.addView(textView2, layoutParams2);
                }
            }
        });
        this.mSlLocationView = (SatelLocationView) findViewById(R.id.sky_view);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setStartButtonEnable(boolean z) {
        Message messageObtainMessage = this.mAutoTestHandler.obtainMessage(1005);
        messageObtainMessage.arg1 = z ? 1 : 0;
        this.mAutoTestHandler.sendMessage(messageObtainMessage);
    }

    private void setTestParam() {
        this.mAutoTestHandler.sendMessage(this.mAutoTestHandler.obtainMessage(1009));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showChipAndClkInfo() {
        Log.v("YGPS/Mainview", "Enter showChipAndClkInfo");
        if (this.mIsExit) {
            return;
        }
        ((TextView) findViewById(R.id.tv_chip_version)).setText(GpsMnlSetting.getChipVersion(getString(R.string.gps_status_unknown)));
        sendCommand("PMTK605");
        TextView textView = (TextView) findViewById(R.id.tv_clock_type);
        TextView textView2 = (TextView) findViewById(R.id.tv_clock_buffer);
        String clockProp = GpsMnlSetting.getClockProp("unknown");
        if (clockProp.length() == 2) {
            if ("ff".equals(clockProp)) {
                textView.setText("error");
                textView2.setText("error");
                return;
            }
            char cCharAt = clockProp.charAt(0);
            if (cCharAt >= '1' && cCharAt <= '4') {
                textView2.setText(String.valueOf(cCharAt));
            } else if (cCharAt == '0') {
                textView2.setText("2");
            } else if (cCharAt == '9') {
                textView2.setText("9");
            }
            char cCharAt2 = clockProp.charAt(1);
            if (cCharAt2 == '0') {
                textView.setText("TCXO");
            } else if (cCharAt2 == '1') {
                textView.setText("Co-clock");
            }
        }
    }

    private void showExceedPeriod(int i) {
        Message messageObtainMessage = this.mAutoTestHandler.obtainMessage(1008);
        messageObtainMessage.arg1 = i;
        this.mAutoTestHandler.sendMessage(messageObtainMessage);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showFirstFixInfo(Location location) {
        this.mShowFirstFixLocate = false;
        double latitude = location.getLatitude();
        double longitude = location.getLongitude();
        ((TextView) findViewById(R.id.first_longtitude_text)).setText(String.valueOf(longitude));
        ((TextView) findViewById(R.id.first_latitude_text)).setText(String.valueOf(latitude));
        if (this.mIsTestRunning && this.mNeedCalCep) {
            double dCalCEP = CepCal.calCEP(this.mTestLat, this.mTestLon, latitude, longitude);
            this.mTestCepList.add(Double.valueOf(dCalCEP));
            Log.d("YGPS/Mainview", "mTestCepList add: " + dCalCEP);
            this.mTvTestLastCep.setText(String.valueOf(dCalCEP) + getString(R.string.cep_unit_m));
            this.mMeanCep = meanCep(this.mCurrentTimes, dCalCEP);
            Log.d("YGPS/Mainview", "mMeanCep: " + this.mMeanCep);
            this.mTvTestMeanCep.setText(String.valueOf(this.mMeanCep) + getString(R.string.cep_unit_m));
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showLocToast(Location location) {
        long time = location.getTime();
        if (time - this.mLocUpdateTime > 5000) {
            this.mLocUpdateTime = time;
            String str = new Date(time).toString() + "\n";
            String strValueOf = String.valueOf(location.getLatitude());
            if (strValueOf.length() > 12) {
                strValueOf = strValueOf.substring(0, 12);
            }
            String str2 = str + strValueOf + ",";
            String strValueOf2 = String.valueOf(location.getLongitude());
            if (strValueOf2.length() > 12) {
                strValueOf2 = strValueOf2.substring(0, 12);
            }
            Toast toastMakeText = Toast.makeText(this, str2 + strValueOf2, 0);
            this.mPrompt = toastMakeText;
            toastMakeText.show();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showTestResult() {
        if (this.mTestTtffValid) {
            this.mTvTestMaxTtff.setText(String.valueOf(this.mMaxTtff) + getString(R.string.time_unit_ms));
            this.mTvTest68Ttff.setText(String.valueOf(this.m68Ttff) + getString(R.string.time_unit_ms));
            this.mTvTest95Ttff.setText(String.valueOf(this.m95Ttff) + getString(R.string.time_unit_ms));
        }
        if (this.mTestCepValid) {
            this.mTvTestMaxCep.setText(String.valueOf(this.mMaxCep) + getString(R.string.cep_unit_m));
            this.mTvTest68Cep.setText(String.valueOf(this.m68Cep) + getString(R.string.cep_unit_m));
            this.mTvTest95Cep.setText(String.valueOf(this.m95Cep) + getString(R.string.cep_unit_m));
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sleep(long j) {
        try {
            Thread.sleep(j);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void startGPSAutoTest() {
        if (!checkAutoTestParamValid()) {
            removeDialog(1);
            return;
        }
        if (!checkCepParamValid()) {
            removeDialog(1);
            return;
        }
        CheckBox checkBox = this.mCbNeed3DFix;
        if (checkBox != null) {
            this.mIsNeed3DFix = checkBox.isChecked();
        }
        this.mIsForceStopGpsTest = false;
        this.mTestTtffList.clear();
        this.mTestCepList.clear();
        resetTestView();
        if (this.mStartPressedHandling) {
            return;
        }
        this.mStartPressedHandling = true;
        refreshATViewState(Boolean.TRUE);
        AutoTestThread autoTestThread = new AutoTestThread();
        this.mAutoTestThread = autoTestThread;
        if (autoTestThread != null) {
            Log.i("YGPS/Mainview", "3D fix:" + this.mIsNeed3DFix);
            this.mAutoTestThread.start();
        }
    }

    private void startGnssComponent(boolean z) {
        Log.i("YGPS/Mainview", "startGnssComponent:" + z);
        if (this.mPermissionGranted) {
            try {
                GpsMnlSetting.setMnlProp(this.mMnldConn, "debug.debug_nmea", "1");
                this.mMnldConn.setTriggerNe(true);
                this.mLocationManager.requestLocationUpdates("gps", 0L, 0.0f, this.mLocListener);
                this.mLocationManager.registerGnssStatusCallback(this.mGnssStatusCallback);
                this.mLocationManager.addNmeaListener(this.mNmeaListener);
                if (this.mLocationManager.isProviderEnabled("gps")) {
                    this.mProvider = String.format(getString(R.string.provider_status_enabled, new Object[]{"gps"}), new Object[0]);
                } else {
                    this.mProvider = String.format(getString(R.string.provider_status_disabled, new Object[]{"gps"}), new Object[0]);
                }
                this.mStatus = getString(R.string.gps_status_unknown);
                if (z) {
                    getMnldVersion();
                }
            } catch (IllegalArgumentException e) {
                Log.e("YGPS/Mainview", "IllegalArgumentException: " + e.getMessage());
            } catch (SecurityException e2) {
                Toast.makeText(this, "security exception", 1).show();
                Log.e("YGPS/Mainview", "SecurityException: " + e2.getMessage());
            }
        }
    }

    private void stopGPSAutoTest() {
        resetTestParam();
        setTestParam();
    }

    private void stopGnssComponent() {
        if (this.mPermissionGranted) {
            this.mLocationManager.removeUpdates(this.mLocListener);
            this.mLocationManager.unregisterGnssStatusCallback(this.mGnssStatusCallback);
            try {
                this.mLocationManager.removeNmeaListener(this.mNmeaListener);
            } catch (IllegalStateException e) {
                e.toString();
            }
            this.mMnldConn.setTriggerNe(false);
        }
        GpsMnlSetting.setMnlProp(this.mMnldConn, "debug.debug_nmea", "0");
    }

    private void wait3DFix() {
        boolean z;
        Long lValueOf = Long.valueOf(Calendar.getInstance().getTime().getTime() / 1000);
        while (true) {
            if (this.mIsTestRunning) {
                Long lValueOf2 = Long.valueOf(Calendar.getInstance().getTime().getTime() / 1000);
                if (!this.mFirstFix) {
                    if (lValueOf2.longValue() - lValueOf.longValue() > 999) {
                        z = true;
                        showExceedPeriod(999);
                        break;
                    }
                }
            }
            z = false;
            break;
        }
        if (z) {
            Log.d("YGPS/Mainview", "wait3DFix , Exceed period");
        } else {
            sleep(500L);
        }
    }

    private void waitAutoTestInterval() {
        int i = this.mTestInterval;
        if (i == 0) {
            sleep(500L);
            return;
        }
        while (i >= 0 && this.mIsTestRunning) {
            setCountDown(i);
            sleep(1000L);
            i--;
        }
        if (this.mIsTestRunning) {
            return;
        }
        setCountDown(0);
    }

    boolean checkAutoTestParamValid() {
        EditText editText = this.mEtTestTimes;
        if (editText != null) {
            if (editText.getText().length() == 0) {
                Toast.makeText(this, R.string.toast_input_times, 1).show();
                this.mBtnGpsTestStart.setEnabled(true);
                return false;
            }
            Integer numValueOf = Integer.valueOf(this.mEtTestTimes.getText().toString());
            if (numValueOf.intValue() < 0 || numValueOf.intValue() > 9999) {
                Toast.makeText(this, R.string.toast_input_times_range, 1).show();
                this.mBtnGpsTestStart.setEnabled(true);
                return false;
            }
            this.mTotalTimes = numValueOf.intValue();
        }
        EditText editText2 = this.mEtTestInterval;
        if (editText2 != null) {
            if (editText2.getText().length() == 0) {
                Toast.makeText(this, R.string.toast_input_interval, 1).show();
                this.mBtnGpsTestStart.setEnabled(true);
                return false;
            }
            Integer numValueOf2 = Integer.valueOf(this.mEtTestInterval.getText().toString());
            if (numValueOf2.intValue() < 0 || numValueOf2.intValue() > 999) {
                Toast.makeText(this, R.string.toast_input_interval_range, 1).show();
                this.mBtnGpsTestStart.setEnabled(true);
                return false;
            }
            this.mTestInterval = numValueOf2.intValue();
        }
        return true;
    }

    boolean checkCepParamValid() {
        this.mNeedCalCep = true;
        String string = this.mEtTestLat.getText().toString();
        if (string == null || string.isEmpty()) {
            this.mNeedCalCep = false;
        } else {
            double dDoubleValue = Double.valueOf(string).doubleValue();
            if (dDoubleValue < -90.0d || dDoubleValue > 90.0d) {
                Toast.makeText(this, R.string.toast_input_latitude_range, 1).show();
                this.mBtnGpsTestStart.setEnabled(true);
                this.mNeedCalCep = false;
                return false;
            }
            this.mTestLat = dDoubleValue;
        }
        String string2 = this.mEtTestLon.getText().toString();
        if (string2 == null || string2.isEmpty()) {
            this.mNeedCalCep = false;
        } else {
            double dDoubleValue2 = Double.valueOf(string2).doubleValue();
            if (dDoubleValue2 < -180.0d || dDoubleValue2 > 180.0d) {
                Toast.makeText(this, R.string.toast_input_longitude_range, 1).show();
                this.mBtnGpsTestStart.setEnabled(true);
                this.mNeedCalCep = false;
                return false;
            }
            this.mTestLon = dDoubleValue2;
        }
        return true;
    }

    @Override // android.app.ActivityGroup, android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        this.mLogHidden = GpsMnlSetting.isLogHidden();
        initTabPage();
        setLayout();
        YgpsWakeLock ygpsWakeLock = new YgpsWakeLock();
        this.mYgpsWakeLock = ygpsWakeLock;
        ygpsWakeLock.acquireScreenWakeLock(this);
        this.mYgpsWakeLock.acquireCpuWakeLock(this);
        this.mLocationManager = (LocationManager) getSystemService("location");
        PermissionManager permissionManager = new PermissionManager(this);
        this.mPermissionManager = permissionManager;
        if (permissionManager.requestLocationLaunchPermissions()) {
            this.mPermissionGranted = true;
            startGnssComponent(true);
        }
        this.mHandler.sendEmptyMessage(1000);
        initBgStatus();
        this.mShowFirstFixLocate = true;
        this.mSocketClient = new ClientSocket(this);
        this.mHandler.sendEmptyMessage(1003);
        this.mSatelInfoManager = new SatelliteInfoManager();
        NmeaParser.NmeaUpdateViewListener nmeaUpdateViewListener = new NmeaParser.NmeaUpdateViewListener() { // from class: com.mediatek.ygps.YgpsActivity.11
            @Override // com.mediatek.ygps.NmeaParser.NmeaUpdateViewListener
            public void onViewupdateNotify() {
                Log.d("YGPS/Mainview", "NmeaParser onViewupdateNotify");
                YgpsActivity.this.mSateReportTimeOut = 0;
                YgpsActivity.this.setSatelliteStatus();
            }
        };
        this.mNmeaUpdateListener = nmeaUpdateViewListener;
        this.mNmeaParser.addSVUpdateListener(nmeaUpdateViewListener);
        if (this.mIsRunInBg) {
            Intent intent = new Intent(this, (Class<?>) YgpsService.class);
            this.mBgServiceIntent = intent;
            startService(intent);
        }
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        ProgressDialog progressDialog;
        if (i == 0) {
            progressDialog = new ProgressDialog(this);
            progressDialog.setTitle(R.string.dialog_title_stop);
            progressDialog.setMessage(getString(R.string.dialog_message_wait));
            progressDialog.setProgressStyle(0);
            progressDialog.setCancelable(false);
            progressDialog.setProgress(0);
        } else {
            if (i != 1) {
                return null;
            }
            progressDialog = new ProgressDialog(this);
            progressDialog.setTitle(R.string.dialog_title_start);
            progressDialog.setMessage(getString(R.string.dialog_message_wait));
            progressDialog.setProgressStyle(0);
            progressDialog.setCancelable(false);
            progressDialog.setProgress(0);
        }
        return progressDialog;
    }

    @Override // android.app.Activity
    public boolean onCreateOptionsMenu(Menu menu) {
        boolean zOnCreateOptionsMenu = super.onCreateOptionsMenu(menu);
        if (this.mShowLoc) {
            menu.add(0, 1, 0, R.string.menu_hideloc);
        } else {
            menu.add(0, 1, 0, R.string.menu_showloc);
        }
        if (getSharedPreferences("RunInBG", 0).getBoolean("RunInBG", false)) {
            menu.add(0, 2, 0, R.string.menu_run_bg_disable);
        } else {
            menu.add(0, 2, 0, R.string.menu_run_bg_enable);
        }
        return zOnCreateOptionsMenu;
    }

    @Override // android.app.ActivityGroup, android.app.Activity
    protected void onDestroy() {
        forceStopGpsAutoTest();
        stopGnssComponent();
        removeNmeaParser();
        this.mHandler.removeMessages(1001);
        this.mHandler.removeMessages(1000);
        this.mHandler.removeMessages(1003);
        this.mIsExit = true;
        if (this.mStartNmeaRecord) {
            this.mStartNmeaRecord = false;
        }
        Intent intent = this.mBgServiceIntent;
        if (intent != null) {
            stopService(intent);
        }
        this.mSocketClient.endClient();
        if (this.mIsRunInBg) {
            this.mYgpsWakeLock.releaseCpuWakeLock();
        }
        super.onDestroy();
    }

    @Override // android.app.Activity
    public boolean onOptionsItemSelected(MenuItem menuItem) {
        int itemId = menuItem.getItemId();
        if (itemId == 1) {
            if (this.mShowLoc) {
                this.mShowLoc = false;
                Toast toast = this.mPrompt;
                if (toast != null) {
                    toast.cancel();
                }
                menuItem.setTitle(R.string.menu_showloc);
            } else {
                this.mShowLoc = true;
                menuItem.setTitle(R.string.menu_hideloc);
            }
            return true;
        }
        if (itemId != 2) {
            return false;
        }
        SharedPreferences sharedPreferences = getSharedPreferences("RunInBG", 0);
        if (sharedPreferences.getBoolean("RunInBG", false)) {
            menuItem.setTitle(R.string.menu_run_bg_enable);
            sharedPreferences.edit().putBoolean("RunInBG", false).commit();
            Log.i("YGPS/Background", "now should *not* be in bg.");
        } else {
            menuItem.setTitle(R.string.menu_run_bg_disable);
            sharedPreferences.edit().putBoolean("RunInBG", true).commit();
            Log.v("YGPS/Background", "now should be in bg.");
        }
        return true;
    }

    @Override // android.app.ActivityGroup, android.app.Activity
    protected void onPause() {
        super.onPause();
        Log.v("YGPS/Mainview", "Enter onPause function");
        if (this.mIsRunInBg) {
            return;
        }
        stopGnssComponent();
        removeNmeaParser();
    }

    @Override // android.app.Activity, android.support.v4.app.ActivityCompat.OnRequestPermissionsResultCallback
    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        Log.i("YGPS/Mainview", "onRequestPermissionsResult(), requestCode = " + i);
        if (iArr == null || iArr.length <= 0) {
            return;
        }
        if (this.mPermissionManager.getLocationLaunchPermissionRequestCode() != i) {
            super.onRequestPermissionsResult(i, strArr, iArr);
            return;
        }
        if (!this.mPermissionManager.isLocationLaunchPermissionsResultReady(strArr, iArr)) {
            Toast.makeText(this, R.string.denied_required_permission, 1).show();
            finish();
        } else {
            Log.d("YGPS/Mainview", "mPermissionManager: isLocationLaunchPermissionsResultReady");
            this.mPermissionGranted = true;
            startGnssComponent(true);
        }
    }

    public void onResponse(String str) {
        Log.i("YGPS/Mainview", "Enter getResponse: " + str);
        if (str == null || str.isEmpty()) {
            return;
        }
        Message messageObtainMessage = this.mHandler.obtainMessage(1001);
        if (str.startsWith("$PMTK705")) {
            messageObtainMessage.arg1 = 2;
        } else if (str.contains("PMTK001")) {
            messageObtainMessage.arg1 = 1;
        } else {
            messageObtainMessage.arg1 = 1103;
        }
        messageObtainMessage.obj = str;
        this.mHandler.sendMessage(messageObtainMessage);
    }

    @Override // android.app.Activity
    protected void onRestart() {
        Log.i("YGPS/Background", "onRestart and in BG:" + this.mIsRunInBg);
        this.mYgpsWakeLock.acquireScreenWakeLock(this);
        if (!this.mIsRunInBg) {
            this.mYgpsWakeLock.acquireCpuWakeLock(this);
        }
        super.onRestart();
    }

    @Override // android.app.ActivityGroup, android.app.Activity
    protected void onResume() {
        super.onResume();
        Log.v("YGPS/Mainview", "Enter onResume function");
        if (!this.mIsRunInBg) {
            this.mFirstFix = false;
            if (this.mPermissionGranted) {
                startGnssComponent(false);
            }
            this.mStatus = getString(R.string.gps_status_unknown);
            this.mNmeaParser.addSVUpdateListener(this.mNmeaUpdateListener);
        }
        ((TextView) findViewById(R.id.tv_provider)).setText(this.mProvider);
        this.mTvStatus.setText(this.mStatus);
    }

    @Override // android.app.Activity
    protected void onStart() {
        super.onStart();
        if (this.mIsRunInBg) {
            bindService(this.mBgServiceIntent, this.mBgServiceConnection, 1);
        }
    }

    @Override // android.app.ActivityGroup, android.app.Activity
    protected void onStop() {
        super.onStop();
        Log.i("YGPS/Background", "onstop and in BG: " + this.mIsRunInBg);
        if (this.mIsRunInBg) {
            YgpsService ygpsService = this.mBgService;
            if (ygpsService != null) {
                ygpsService.requestForeground(YgpsActivity.class);
            }
            unbindService(this.mBgServiceConnection);
        } else {
            forceStopGpsAutoTest();
            this.mYgpsWakeLock.releaseCpuWakeLock();
        }
        this.mYgpsWakeLock.releaseScreenWakeLock();
        Toast toast = this.mPrompt;
        if (toast != null) {
            toast.cancel();
        }
    }
}
