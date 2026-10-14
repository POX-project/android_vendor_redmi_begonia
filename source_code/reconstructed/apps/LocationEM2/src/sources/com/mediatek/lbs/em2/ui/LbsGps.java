package com.mediatek.lbs.em2.ui;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.DialogInterface;
import android.content.Intent;
import android.location.GnssStatus;
import android.location.Location;
import android.location.LocationListener;
import android.location.LocationManager;
import android.location.LocationRequest;
import android.location.OnNmeaMessageListener;
import android.net.LocalSocketAddress;
import android.net.Uri;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.os.SystemProperties;
import android.provider.Settings;
import android.text.method.DigitsKeyListener;
import android.util.Log;
import android.view.MenuItem;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.PopupMenu;
import android.widget.TextView;
import android.widget.Toast;
import android.widget.ToggleButton;
import com.mediatek.lbs.em2.mnldinterface.Debug2MnldInterface$Debug2MnldInterfaceSender;
import com.mediatek.socket.base.UdpClient;
import java.io.DataOutputStream;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class LbsGps extends Activity {
    public static double mRefLat;
    public static double mRefLng;
    private Button mButtonChangeRefLatLng;
    private Button mButtonClearLog;
    private Button mButtonDelete;
    private ToggleButton mButtonGps;
    private Button mButtonGpsMode;
    private ToggleButton mButtonStress;
    private CheckBox mCheckBoxBlockBeidou;
    private CheckBox mCheckBoxBlockGalileo;
    private CheckBox mCheckBoxBlockGlonass;
    private CheckBox mCheckBoxBlockGps;
    private CheckBox mCheckBoxBlockIrnss;
    private CheckBox mCheckBoxBlockQzss;
    private CheckBox mCheckBoxBlockSbas;
    private CheckBox mCheckBoxLogNmea;
    private CheckBox mCheckBoxLogToSdcard;
    private CheckBox mCheckBoxLowPowerMode;
    private CheckBox mCheckBoxSingleShot;
    private CheckBox mCheckBoxSwitchDelet2First;
    private EditText mEditTextDelay1;
    private EditText mEditTextDelay2;
    private EditText mEditTextDelay3;
    private EditText mEditTextDelay4;
    private EditText mEditTextNumOfLoop;
    private Location mFirstLocation;
    private PopupMenu mPopupDeleteAidingData;
    private TextView mTextView5;
    private TextView mTextViewAlmanacDateValue;
    private TextView mTextViewBlockBeidou;
    private TextView mTextViewBlockGalileo;
    private TextView mTextViewBlockGlonass;
    private TextView mTextViewBlockGps;
    private TextView mTextViewBlockIrnss;
    private TextView mTextViewBlockQzss;
    private TextView mTextViewBlockSbas;
    private TextView mTextViewDeleteAidingData;
    private TextView mTextViewGnssHwNameValue;
    private TextView mTextViewHasAlmanacValue;
    private TextView mTextViewLocation;
    private TextView mTextViewLoop;
    private TextView mTextViewNmea;
    private TextView mTextViewRefLatLng;
    private TextView mTextViewSatellite;
    private TextView mTextViewTimer;
    private TextView mTextViewYearOfGnssHwValue;
    private Debug2MnldInterface$Debug2MnldInterfaceSender mToMnldSender;
    private UdpClient mUdpClient;
    private int mNumOfLoop = 100;
    private int mDelay1 = 20;
    private int mDelay2 = 2;
    private int mDelay3 = 600;
    private int mDelay4 = 0;
    private StressTest mStressTest = new StressTest(this.mNumOfLoop, this.mDelay1, this.mDelay2, this.mDelay3, this.mDelay4);
    private int mFixCount = 0;
    private int mSatUpdateCount = 0;
    private int mNmeaCount = 0;
    private int mTTFF = -1;
    private boolean mGotFix = false;
    private float mFirstDistance = 0.0f;
    private String mFirstSvNumStr = "";
    private String mFirstSvStr = "";
    private boolean mGotFirstSv = false;
    private float mDistance = 0.0f;
    private int mGpsMode = 0;
    private boolean mLogToSdcard = false;
    private boolean mLowPowerMode = false;
    private boolean mSingleShot = false;
    private String mNmeaFileName = null;
    private String mNmeaFolderName = null;
    private String mBlackList = "";
    private LocationManager mLocationManager = null;
    private StringList mStringList = new StringList(16);
    private GpsTimer mTimer = new GpsTimer();
    private CheckBox[] mCheckBoxSvArr = new CheckBox[41];
    private OnNmeaMessageListener mNmeaListener = new OnNmeaMessageListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.23
        @Override // android.location.OnNmeaMessageListener
        public void onNmeaMessage(String str, long j) {
            LbsGps.this.sendMessage(7, 0, 0, str);
        }
    };
    private GnssStatus.Callback mGnssStatusCallback = new GnssStatus.Callback() { // from class: com.mediatek.lbs.em2.ui.LbsGps.24
        @Override // android.location.GnssStatus.Callback
        public void onFirstFix(int i) {
            LbsGps.this.log("onFirstFix ttffMillis:" + i);
        }

        @Override // android.location.GnssStatus.Callback
        public void onSatelliteStatusChanged(GnssStatus gnssStatus) {
            LbsGps.this.sendMessage(8, 0, 0, gnssStatus);
        }

        @Override // android.location.GnssStatus.Callback
        public void onStarted() {
            LbsGps.this.sendMessage(6, 0);
        }
    };
    private LocationListener mLocationListener = new LocationListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.25
        @Override // android.location.LocationListener
        public void onLocationChanged(Location location) {
            if (location == null) {
                LbsGps.this.log("ERR: onLocationChanged get null");
                return;
            }
            LbsGps.this.log("onLocationChanged");
            LbsGps.access$3608(LbsGps.this);
            float[] fArr = new float[2];
            Location.distanceBetween(location.getLatitude(), location.getLongitude(), LbsGps.mRefLat, LbsGps.mRefLng, fArr);
            LbsGps.this.mDistance = fArr[0];
            if (!LbsGps.this.mGotFix) {
                LbsGps.this.log("onLocationChanged for TTFF");
                LbsGps.this.mGotFix = true;
                LbsGps lbsGps = LbsGps.this;
                lbsGps.mTTFF = lbsGps.mTimer.getTimer();
                LbsGps.this.mFirstLocation = location;
                LbsGps lbsGps2 = LbsGps.this;
                lbsGps2.mFirstDistance = lbsGps2.mDistance;
                LbsGps.this.mStressTest.gotFixNotify();
            }
            LbsGps.this.updateLocationInfo(location);
        }

        @Override // android.location.LocationListener
        public void onProviderDisabled(String str) {
        }

        @Override // android.location.LocationListener
        public void onProviderEnabled(String str) {
        }

        @Override // android.location.LocationListener
        public void onStatusChanged(String str, int i, Bundle bundle) {
        }
    };
    private Handler mHandler = new Handler() { // from class: com.mediatek.lbs.em2.ui.LbsGps.26
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            switch (message.what) {
                case 0:
                    LbsGps.this.mTextViewTimer.setText("Timer=" + message.arg1);
                    break;
                case 1:
                    LbsGps.this.enableWidgetAfterStress();
                    break;
                case 2:
                    LbsGps.this.mTextViewLoop.setText("Current loop=" + message.arg1);
                    break;
                case 3:
                    LbsGps.this.startGps();
                    break;
                case 4:
                    LbsGps.this.stopGps();
                    break;
                case 5:
                    LbsGps.this.startDeletingAidingData();
                    LbsGps.this.resetVarialbe();
                    break;
                case 6:
                    LbsGps.this.updateHasAlmanacValue();
                    break;
                case 7:
                    String str = (String) message.obj;
                    LbsGps.this.mStringList.add(str);
                    LbsGps.access$5108(LbsGps.this);
                    NmeaParser.getNMEAParser().parse(str);
                    LbsGps.this.mTextViewNmea.setText("NMEA Count=" + LbsGps.this.mNmeaCount + "\n" + LbsGps.this.mStringList.get());
                    if (LbsGps.this.mCheckBoxLogNmea.isChecked() && LbsGps.this.mNmeaFileName != null) {
                        LbsGps lbsGps = LbsGps.this;
                        lbsGps.write2File("nmea", lbsGps.mNmeaFolderName, "NMEA_" + LbsGps.this.mNmeaFileName + ".txt", str, true, LbsGps.this.mLogToSdcard);
                        break;
                    }
                    break;
                case 8:
                    GnssStatus gnssStatus = (GnssStatus) message.obj;
                    String str2 = new String();
                    LbsGps.access$5608(LbsGps.this);
                    int i = 0;
                    int i2 = 0;
                    while (i < gnssStatus.getSatelliteCount()) {
                        StringBuilder sb = new StringBuilder();
                        sb.append(str2);
                        sb.append("Id=");
                        sb.append(LbsUtility.map2SvTypes(gnssStatus.getConstellationType(i)));
                        sb.append("_");
                        sb.append(LbsUtility.getFrequencyBand(gnssStatus.getCarrierFrequencyHz(i)));
                        sb.append("_");
                        sb.append(gnssStatus.getSvid(i));
                        sb.append(" SNR=");
                        sb.append(String.format("%.01f", Float.valueOf(gnssStatus.getCn0DbHz(i))));
                        sb.append(" AZI=");
                        sb.append(String.format("%.01f", Float.valueOf(gnssStatus.getAzimuthDegrees(i))));
                        sb.append(" ELE=");
                        sb.append(String.format("%.01f", Float.valueOf(gnssStatus.getElevationDegrees(i))));
                        sb.append(" UInFix=");
                        sb.append(gnssStatus.usedInFix(i) ? "1" : "0");
                        sb.append("\n");
                        str2 = sb.toString();
                        if (gnssStatus.usedInFix(i)) {
                            i2++;
                        }
                        i++;
                    }
                    LbsGps.this.mTextViewSatellite.setText("Satellite Status Update Count=" + LbsGps.this.mSatUpdateCount + "\nSatellite Num=" + i + "\n" + str2);
                    if (LbsGps.this.mTTFF > -1 && !LbsGps.this.mGotFirstSv && i2 > 0) {
                        LbsGps.this.log("onSatelliteStatusChanged for first svUsedInFix count = " + i2);
                        LbsGps.this.updateFirstSvStr(gnssStatus);
                        LbsGps.this.mGotFirstSv = true;
                        break;
                    }
                    break;
                default:
                    LbsGps.this.log("WARNING: unknown handle event recv!!");
                    break;
            }
        }
    };

    class GpsTimer extends Thread {
        private boolean enable = true;
        private int timeCount = 0;

        GpsTimer() {
        }

        public int getTimer() {
            return this.timeCount;
        }

        public void resetTimer() {
            this.timeCount = 0;
        }

        @Override // java.lang.Thread, java.lang.Runnable
        public void run() {
            while (this.enable) {
                try {
                    Thread.sleep(1000L);
                    int i = this.timeCount + 1;
                    this.timeCount = i;
                    LbsGps.this.sendMessage(0, i);
                    LbsGps.this.log("time=" + this.timeCount);
                } catch (InterruptedException unused) {
                }
            }
            LbsGps.this.log("GpsTimer stopped");
        }

        public void startTimer() {
            start();
        }

        public void stopTimer() {
            this.enable = false;
            interrupt();
        }
    }

    class StressTest extends Thread {
        private int delay1;
        private int delay2;
        private int delay3;
        private int delay4;
        private boolean enable;
        private int numOfLoop;

        public StressTest(int i, int i2, int i3, int i4, int i5) {
            this.enable = true;
            this.numOfLoop = i;
            this.delay1 = i2;
            this.delay2 = i3;
            this.delay3 = i4;
            this.delay4 = i5;
            this.enable = true;
        }

        private void oneSession() {
            if (LbsGps.this.mCheckBoxSwitchDelet2First.isChecked()) {
                try {
                    Thread.sleep(this.delay2 * 1000);
                    LbsGps.this.sendMessage(5, 0);
                } catch (InterruptedException unused) {
                    return;
                }
            }
            try {
                Thread.sleep(this.delay1 * 1000);
                LbsGps.this.sendMessage(3, 0);
                try {
                    Thread.sleep(this.delay3 * 1000);
                } catch (InterruptedException unused2) {
                    if (this.enable) {
                        Thread.sleep(this.delay4 * 1000);
                    }
                }
            } catch (InterruptedException unused3) {
            }
        }

        public void gotFixNotify() {
            interrupt();
        }

        @Override // java.lang.Thread, java.lang.Runnable
        public void run() {
            LbsGps.this.log("numOfLoop=" + this.numOfLoop + " delay1=" + this.delay1 + " delay2=" + this.delay2 + " delay3=" + this.delay3 + " delay4=" + this.delay4);
            int i = 0;
            while (i < this.numOfLoop) {
                LbsGps.this.log("=== stress test loop=" + i + "===");
                i++;
                LbsGps.this.sendMessage(2, i);
                oneSession();
                LbsGps.this.sendMessage(4, 0);
                if (!this.enable) {
                    break;
                }
            }
            LbsGps.this.log("end of stress test");
            LbsGps.this.sendMessage(1, 0);
        }

        public void startStress() {
            start();
        }

        public void stopStress() {
            this.enable = false;
            interrupt();
        }

        @Override // java.lang.Thread
        public String toString() {
            return "StressTest  numOfLoop=" + this.numOfLoop + " delay1=" + this.delay1 + " delay2=" + this.delay2 + " delay3=" + this.delay3 + " delay4=" + this.delay4;
        }
    }

    static /* synthetic */ int access$3608(LbsGps lbsGps) {
        int i = lbsGps.mFixCount;
        lbsGps.mFixCount = i + 1;
        return i;
    }

    static /* synthetic */ int access$5108(LbsGps lbsGps) {
        int i = lbsGps.mNmeaCount;
        lbsGps.mNmeaCount = i + 1;
        return i;
    }

    static /* synthetic */ int access$5608(LbsGps lbsGps) {
        int i = lbsGps.mSatUpdateCount;
        lbsGps.mSatUpdateCount = i + 1;
        return i;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void enableWidgetAfterStress() {
        this.mStressTest.stopStress();
        this.mButtonGps.setEnabled(true);
        this.mEditTextNumOfLoop.setEnabled(true);
        this.mEditTextDelay1.setEnabled(true);
        this.mEditTextDelay2.setEnabled(true);
        this.mEditTextDelay3.setEnabled(true);
        this.mEditTextDelay4.setEnabled(true);
        this.mButtonDelete.setEnabled(true);
        this.mButtonGpsMode.setEnabled(true);
        this.mButtonStress.setChecked(false);
        this.mCheckBoxSwitchDelet2First.setEnabled(true);
    }

    private String getTimeString(long j) {
        Date date = new Date(j);
        return (date.getYear() + 1900) + "/" + (date.getMonth() + 1) + "/" + date.getDate() + " " + date.getHours() + ":" + date.getMinutes() + ":" + date.getSeconds();
    }

    private String getTimeString2(long j) {
        Date date = new Date(j);
        return String.format("%04d%02d%02d_%02d%02d%02d", Integer.valueOf(date.getYear() + 1900), Integer.valueOf(date.getMonth() + 1), Integer.valueOf(date.getDate()), Integer.valueOf(date.getHours()), Integer.valueOf(date.getMinutes()), Integer.valueOf(date.getSeconds()));
    }

    private void initWidget() {
        this.mButtonGps = (ToggleButton) findViewById(R.id.Button_StartGPS);
        this.mButtonDelete = (Button) findViewById(R.id.Button_Once);
        this.mButtonGpsMode = (Button) findViewById(R.id.Button_GpsMode);
        this.mButtonChangeRefLatLng = (Button) findViewById(R.id.Button_ChangeRefLatLng);
        this.mButtonClearLog = (Button) findViewById(R.id.Button_ClearLog);
        this.mCheckBoxLogNmea = (CheckBox) findViewById(R.id.CheckBox_LogNmea);
        this.mCheckBoxLogToSdcard = (CheckBox) findViewById(R.id.CheckBox_LogToSdcard);
        this.mCheckBoxLowPowerMode = (CheckBox) findViewById(R.id.CheckBox_LowPowerMode);
        this.mCheckBoxSingleShot = (CheckBox) findViewById(R.id.CheckBox_SingleShot);
        this.mCheckBoxSwitchDelet2First = (CheckBox) findViewById(R.id.checkBox_switchDeleteToFirst);
        this.mButtonStress = (ToggleButton) findViewById(R.id.Button_Stress);
        this.mTextViewRefLatLng = (TextView) findViewById(R.id.TextView_0);
        this.mTextViewTimer = (TextView) findViewById(R.id.TextView_1);
        this.mTextViewLocation = (TextView) findViewById(R.id.TextView_2);
        this.mTextViewSatellite = (TextView) findViewById(R.id.TextView_3);
        this.mTextViewNmea = (TextView) findViewById(R.id.TextView_4);
        this.mTextView5 = (TextView) findViewById(R.id.TextView_5);
        this.mTextViewLoop = (TextView) findViewById(R.id.TextView_Loop);
        this.mTextViewDeleteAidingData = (TextView) findViewById(R.id.TextView_DeleteAidingData);
        this.mEditTextNumOfLoop = (EditText) findViewById(R.id.EditText_NumOfLoop);
        this.mEditTextDelay1 = (EditText) findViewById(R.id.EditText_Delay1);
        this.mEditTextDelay2 = (EditText) findViewById(R.id.EditText_Delay2);
        this.mEditTextDelay3 = (EditText) findViewById(R.id.EditText_Delay3);
        this.mEditTextDelay4 = (EditText) findViewById(R.id.EditText_Delay4);
        this.mTextViewHasAlmanacValue = (TextView) findViewById(R.id.TextView_HasAlmanacValue);
        this.mTextViewAlmanacDateValue = (TextView) findViewById(R.id.TextView_AlmanacDateValue);
        this.mTextViewYearOfGnssHwValue = (TextView) findViewById(R.id.TextView_YearOfGnssHwValue);
        this.mTextViewGnssHwNameValue = (TextView) findViewById(R.id.TextView_GnssHwNameValue);
        this.mCheckBoxBlockGps = (CheckBox) findViewById(R.id.checkBox_BlockGpsSatellites);
        this.mCheckBoxBlockSbas = (CheckBox) findViewById(R.id.checkBox_BlockSbasSatellites);
        this.mCheckBoxBlockGlonass = (CheckBox) findViewById(R.id.checkBox_BlockGlonassSatellites);
        this.mCheckBoxBlockQzss = (CheckBox) findViewById(R.id.checkBox_BlockQzssSatellites);
        this.mCheckBoxBlockBeidou = (CheckBox) findViewById(R.id.checkBox_BlockBeidouSatellites);
        this.mCheckBoxBlockGalileo = (CheckBox) findViewById(R.id.checkBox_BlockGalileoSatellites);
        this.mCheckBoxBlockIrnss = (CheckBox) findViewById(R.id.checkBox_BlockIrnssSatellites);
        this.mTextViewBlockGps = (TextView) findViewById(R.id.TextView_BlockGps);
        this.mTextViewBlockSbas = (TextView) findViewById(R.id.TextView_BlockSbas);
        this.mTextViewBlockGlonass = (TextView) findViewById(R.id.TextView_BlockGlonass);
        this.mTextViewBlockQzss = (TextView) findViewById(R.id.TextView_BlockQzss);
        this.mTextViewBlockBeidou = (TextView) findViewById(R.id.TextView_BlockBeidou);
        this.mTextViewBlockGalileo = (TextView) findViewById(R.id.TextView_BlockGalileo);
        this.mTextViewBlockIrnss = (TextView) findViewById(R.id.TextView_BlockIrnss);
        this.mTextView5.setVisibility(4);
        this.mTextViewNmea.setTextSize(11.0f);
        this.mTextViewDeleteAidingData.setText("Hot Start");
        this.mEditTextNumOfLoop.setText(String.valueOf(this.mNumOfLoop));
        this.mEditTextDelay1.setText(String.valueOf(this.mDelay1));
        this.mEditTextDelay2.setText(String.valueOf(this.mDelay2));
        this.mEditTextDelay3.setText(String.valueOf(this.mDelay3));
        this.mEditTextDelay4.setText(String.valueOf(this.mDelay4));
        this.mCheckBoxLogToSdcard.setEnabled(this.mCheckBoxLogNmea.isChecked());
        this.mTextViewRefLatLng.setText(String.format("Reference Lat=%.06f Lng=%.06f", Double.valueOf(mRefLat), Double.valueOf(mRefLng)));
        this.mTextViewHasAlmanacValue.setText("No");
        this.mTextViewAlmanacDateValue.setText("");
        this.mTextViewYearOfGnssHwValue.setText("");
        this.mTextViewGnssHwNameValue.setText("");
        this.mButtonGps.setChecked(false);
        this.mButtonGps.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.5
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (LbsGps.this.mButtonGps.isChecked()) {
                    LbsGps.this.mButtonStress.setEnabled(false);
                    LbsGps.this.startGps();
                } else {
                    LbsGps.this.mButtonStress.setEnabled(true);
                    LbsGps.this.stopGps();
                }
            }
        });
        this.mButtonGpsMode.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.6
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsGps.this.mPopupDeleteAidingData.show();
            }
        });
        PopupMenu popupMenu = new PopupMenu(this, this.mButtonGpsMode);
        this.mPopupDeleteAidingData = popupMenu;
        popupMenu.getMenu().add(0, 0, 0, "Hot");
        this.mPopupDeleteAidingData.getMenu().add(0, 1, 0, "Warm");
        this.mPopupDeleteAidingData.getMenu().add(0, 2, 0, "Cold");
        this.mPopupDeleteAidingData.getMenu().add(0, 3, 0, "Full");
        this.mPopupDeleteAidingData.getMenu().add(0, 4, 0, "delete ALM, EPH");
        this.mPopupDeleteAidingData.getMenu().add(0, 5, 0, "delete EPH");
        this.mPopupDeleteAidingData.getMenu().add(0, 6, 0, "delete Time");
        this.mPopupDeleteAidingData.getMenu().add(0, 7, 0, "delete all except Time, ALM");
        this.mPopupDeleteAidingData.getMenu().add(0, 8, 0, "delete all except Time, ALM, EPO");
        this.mPopupDeleteAidingData.setOnMenuItemClickListener(new PopupMenu.OnMenuItemClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.7
            @Override // android.widget.PopupMenu.OnMenuItemClickListener
            public boolean onMenuItemClick(MenuItem menuItem) {
                LbsGps.this.mGpsMode = menuItem.getItemId();
                if (LbsGps.this.mGpsMode == 0) {
                    LbsGps.this.mTextViewDeleteAidingData.setText("Hot Start");
                    return false;
                }
                if (LbsGps.this.mGpsMode == 1) {
                    LbsGps.this.mTextViewDeleteAidingData.setText("Warm Start");
                    return false;
                }
                if (LbsGps.this.mGpsMode == 2) {
                    LbsGps.this.mTextViewDeleteAidingData.setText("Cold Start");
                    return false;
                }
                if (LbsGps.this.mGpsMode == 3) {
                    LbsGps.this.mTextViewDeleteAidingData.setText("Full Start");
                    return false;
                }
                if (LbsGps.this.mGpsMode == 4) {
                    LbsGps.this.mTextViewDeleteAidingData.setText("delete ALM, EPH");
                    return false;
                }
                if (LbsGps.this.mGpsMode == 5) {
                    LbsGps.this.mTextViewDeleteAidingData.setText("delete EPH");
                    return false;
                }
                if (LbsGps.this.mGpsMode == 6) {
                    LbsGps.this.mTextViewDeleteAidingData.setText("delete Time");
                    return false;
                }
                if (LbsGps.this.mGpsMode == 7) {
                    LbsGps.this.mTextViewDeleteAidingData.setText("delete all except Time, ALM");
                    return false;
                }
                if (LbsGps.this.mGpsMode != 8) {
                    return false;
                }
                LbsGps.this.mTextViewDeleteAidingData.setText("delete all except Time, ALM, EPO");
                return false;
            }
        });
        this.mButtonDelete.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.8
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsGps.this.startDeletingAidingData();
                LbsGps.this.msleep(300L);
                LbsGps.this.resetVarialbe();
            }
        });
        this.mButtonClearLog.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.9
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsGps.this.showClearLogConfirmDialog();
            }
        });
        this.mButtonChangeRefLatLng.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.10
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsGps.this.openDialogLatlng(false);
            }
        });
        this.mCheckBoxLogNmea.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.11
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsGps.this.showLogNmeaConfirmDialog();
            }
        });
        this.mCheckBoxLogToSdcard.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.12
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsGps lbsGps = LbsGps.this;
                lbsGps.mLogToSdcard = lbsGps.mCheckBoxLogToSdcard.isChecked();
            }
        });
        this.mCheckBoxLowPowerMode.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.13
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsGps lbsGps = LbsGps.this;
                lbsGps.mLowPowerMode = lbsGps.mCheckBoxLowPowerMode.isChecked();
            }
        });
        this.mCheckBoxSingleShot.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.14
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsGps lbsGps = LbsGps.this;
                lbsGps.mSingleShot = lbsGps.mCheckBoxSingleShot.isChecked();
            }
        });
        this.mCheckBoxBlockGps.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.15
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (!((CheckBox) view).isChecked()) {
                    LbsGps.this.setBlacklistData();
                } else {
                    LbsGps lbsGps = LbsGps.this;
                    lbsGps.openBlackSvSelectDialog(1, lbsGps.mTextViewBlockGps.getText().toString());
                }
            }
        });
        this.mCheckBoxBlockSbas.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.16
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (!((CheckBox) view).isChecked()) {
                    LbsGps.this.setBlacklistData();
                } else {
                    LbsGps lbsGps = LbsGps.this;
                    lbsGps.openBlackSvSelectDialog(2, lbsGps.mTextViewBlockSbas.getText().toString());
                }
            }
        });
        this.mCheckBoxBlockGlonass.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.17
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (!((CheckBox) view).isChecked()) {
                    LbsGps.this.setBlacklistData();
                } else {
                    LbsGps lbsGps = LbsGps.this;
                    lbsGps.openBlackSvSelectDialog(3, lbsGps.mTextViewBlockGlonass.getText().toString());
                }
            }
        });
        this.mCheckBoxBlockQzss.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.18
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (!((CheckBox) view).isChecked()) {
                    LbsGps.this.setBlacklistData();
                } else {
                    LbsGps lbsGps = LbsGps.this;
                    lbsGps.openBlackSvSelectDialog(4, lbsGps.mTextViewBlockQzss.getText().toString());
                }
            }
        });
        this.mCheckBoxBlockBeidou.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.19
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (!((CheckBox) view).isChecked()) {
                    LbsGps.this.setBlacklistData();
                } else {
                    LbsGps lbsGps = LbsGps.this;
                    lbsGps.openBlackSvSelectDialog(5, lbsGps.mTextViewBlockBeidou.getText().toString());
                }
            }
        });
        this.mCheckBoxBlockGalileo.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.20
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (!((CheckBox) view).isChecked()) {
                    LbsGps.this.setBlacklistData();
                } else {
                    LbsGps lbsGps = LbsGps.this;
                    lbsGps.openBlackSvSelectDialog(6, lbsGps.mTextViewBlockGalileo.getText().toString());
                }
            }
        });
        this.mCheckBoxBlockIrnss.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.21
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (!((CheckBox) view).isChecked()) {
                    LbsGps.this.setBlacklistData();
                } else {
                    LbsGps lbsGps = LbsGps.this;
                    lbsGps.openBlackSvSelectDialog(7, lbsGps.mTextViewBlockIrnss.getText().toString());
                }
            }
        });
        this.mButtonStress.setChecked(false);
        this.mButtonStress.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.22
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (!LbsGps.this.mButtonStress.isChecked()) {
                    LbsGps.this.stopStressGps();
                    return;
                }
                if (!LbsGps.this.isGPSProviderEnable()) {
                    LbsGps.this.mButtonStress.setChecked(false);
                } else if (LbsGps.this.isBackgroundPermissionGranted()) {
                    LbsGps.this.startStressGps();
                } else {
                    LbsGps.this.mButtonStress.setChecked(false);
                }
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isBackgroundPermissionGranted() {
        final String packageName = getApplicationContext().getPackageName();
        if (getApplicationContext().getPackageManager().checkPermission("android.permission.ACCESS_BACKGROUND_LOCATION", packageName) == 0) {
            return true;
        }
        new AlertDialog.Builder(this).setMessage("Background location access permission has not yet set, do you want to set it?").setNegativeButton("No", new DialogInterface.OnClickListener(this) { // from class: com.mediatek.lbs.em2.ui.LbsGps.4
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                dialogInterface.cancel();
            }
        }).setPositiveButton("Yes", new DialogInterface.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.3
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                LbsGps.this.launchPackageSettings(packageName);
            }
        }).show();
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isGPSProviderEnable() {
        if (this.mLocationManager.isProviderEnabled("gps")) {
            return true;
        }
        new AlertDialog.Builder(this).setMessage("GPS is disabled now, Do you want to enable it?").setNegativeButton("No", new DialogInterface.OnClickListener(this) { // from class: com.mediatek.lbs.em2.ui.LbsGps.2
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                dialogInterface.cancel();
            }
        }).setPositiveButton("Yes", new DialogInterface.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.1
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                LbsGps.this.startActivity(new Intent("android.settings.LOCATION_SOURCE_SETTINGS"));
            }
        }).show();
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void launchPackageSettings(String str) {
        try {
            Intent intent = new Intent();
            intent.setAction("android.settings.APPLICATION_DETAILS_SETTINGS");
            intent.setData(Uri.fromParts("package", str, null));
            startActivity(intent);
        } catch (Exception unused) {
            log("Failed to launch package settings: " + str);
            Toast.makeText(getApplicationContext(), "ERR: start settings failed!!", 1).show();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void log(String str) {
        Log.d("LocationEM_Gps", str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void msleep(long j) {
        try {
            Thread.sleep(j);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void openBlackSvSelectDialog(final int i, String str) {
        final Dialog dialog = new Dialog(this);
        dialog.setTitle("Select black sv list");
        dialog.setContentView(R.layout.gps_blacksvdlg);
        List<Integer> satelliteBlacklist = parseSatelliteBlacklist(str);
        Button button = (Button) dialog.findViewById(R.id.Button_BlacksvOk);
        this.mCheckBoxSvArr[0] = (CheckBox) dialog.findViewById(R.id.CheckBox_svAll);
        for (int i2 = 1; i2 < 41; i2++) {
            this.mCheckBoxSvArr[i2] = (CheckBox) dialog.findViewById(getResources().getIdentifier("CheckBox_sv" + i2, "id", getPackageName()));
        }
        boolean z = satelliteBlacklist.indexOf(0) != -1;
        for (int i3 = 0; i3 < 41; i3++) {
            if (i3 != 0) {
                this.mCheckBoxSvArr[i3].setEnabled(!z);
            }
            if (satelliteBlacklist.indexOf(Integer.valueOf(i3)) != -1) {
                this.mCheckBoxSvArr[i3].setChecked(true);
            }
        }
        dialog.show();
        button.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.31
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsGps.this.setSvOutCheckStr(i);
                dialog.dismiss();
                LbsGps.this.setBlacklistData();
            }
        });
        this.mCheckBoxSvArr[0].setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.32
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                boolean zIsChecked = ((CheckBox) view).isChecked();
                for (int i4 = 1; i4 < 41; i4++) {
                    LbsGps.this.mCheckBoxSvArr[i4].setEnabled(!zIsChecked);
                }
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void openDialogLatlng(boolean z) {
        final Dialog dialog = new Dialog(this);
        dialog.setTitle("Change Ref Position");
        dialog.setContentView(R.layout.gps_ref_latlng);
        final EditText editText = (EditText) dialog.findViewById(R.id.EditText_lat);
        final EditText editText2 = (EditText) dialog.findViewById(R.id.EditText_lng);
        Button button = (Button) dialog.findViewById(R.id.Button_ok);
        Button button2 = (Button) dialog.findViewById(R.id.Button_cancel);
        Button button3 = (Button) dialog.findViewById(R.id.Button_apply);
        editText.setText(String.valueOf(mRefLat));
        editText.setKeyListener(DigitsKeyListener.getInstance("0123456789.-"));
        editText2.setText(String.valueOf(mRefLng));
        editText2.setKeyListener(DigitsKeyListener.getInstance("0123456789.-"));
        button.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.27
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                try {
                    double dDoubleValue = Double.valueOf(editText.getText().toString()).doubleValue();
                    double dDoubleValue2 = Double.valueOf(editText2.getText().toString()).doubleValue();
                    if (dDoubleValue > 90.0d || dDoubleValue2 > 180.0d || dDoubleValue < -90.0d || dDoubleValue2 < -180.0d) {
                        LbsGps.this.openDialogLatlng(true);
                    } else {
                        LbsGps.mRefLat = dDoubleValue;
                        LbsGps.mRefLng = dDoubleValue2;
                        LbsGps.this.mTextViewRefLatLng.setText(String.format("Reference Lat=%.06f Lng=%.06f", Double.valueOf(LbsGps.mRefLat), Double.valueOf(LbsGps.mRefLng)));
                    }
                } catch (NumberFormatException unused) {
                    LbsGps.this.openDialogLatlng(true);
                }
                dialog.dismiss();
            }
        });
        button2.setOnClickListener(new View.OnClickListener(this) { // from class: com.mediatek.lbs.em2.ui.LbsGps.28
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                dialog.dismiss();
            }
        });
        button3.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.29
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                LbsGps.this.updateRefLatLng();
                dialog.dismiss();
            }
        });
        dialog.show();
        if (z) {
            Button button4 = new Button(this);
            final Dialog dialog2 = new Dialog(this);
            button4.setText("OK");
            dialog2.setTitle("Input lat/lng are incorrect");
            dialog2.setContentView(button4);
            dialog2.show();
            button4.setOnClickListener(new View.OnClickListener(this) { // from class: com.mediatek.lbs.em2.ui.LbsGps.30
                @Override // android.view.View.OnClickListener
                public void onClick(View view) {
                    dialog2.dismiss();
                }
            });
        }
    }

    private List<Integer> parseSatelliteBlacklist(String str) {
        String[] strArrSplit = str.split(",");
        ArrayList arrayList = new ArrayList(strArrSplit.length);
        for (String str2 : strArrSplit) {
            String strTrim = str2.trim();
            if ("All".equals(strTrim)) {
                arrayList.add(0);
            } else if ("".equals(strTrim)) {
                continue;
            } else {
                int i = Integer.parseInt(strTrim);
                if (i < 0) {
                    log("Negative value is invalid for Satellite Blacklist.");
                    break;
                }
                arrayList.add(Integer.valueOf(i));
            }
        }
        return arrayList;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void resetVarialbe() {
        this.mFixCount = 0;
        this.mSatUpdateCount = 0;
        this.mNmeaCount = 0;
        this.mTTFF = -1;
        this.mGotFix = false;
        this.mFirstLocation = null;
        this.mFirstDistance = 0.0f;
        this.mDistance = 0.0f;
        this.mStringList.clear();
        this.mFirstSvNumStr = "";
        this.mFirstSvStr = "";
        this.mGotFirstSv = false;
        this.mTextViewTimer.setText("");
        this.mTextViewLocation.setText("");
        this.mTextViewSatellite.setText("");
        this.mTextViewNmea.setText("");
        this.mTimer.resetTimer();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendMessage(int i, int i2) {
        Message message = new Message();
        message.what = i;
        message.arg1 = i2;
        this.mHandler.sendMessage(message);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendMessage(int i, int i2, int i3, Object obj) {
        this.mHandler.obtainMessage(i, i2, i3, obj).sendToTarget();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setBlacklistData() {
        this.mBlackList = "";
        if (this.mCheckBoxBlockGps.isChecked() && !this.mTextViewBlockGps.getText().toString().isEmpty()) {
            log("GPS Blacklist: " + this.mTextViewBlockGps.getText().toString());
            List<Integer> satelliteBlacklist = parseSatelliteBlacklist(this.mTextViewBlockGps.getText().toString());
            int size = satelliteBlacklist.size();
            for (int i = 0; i < size; i++) {
                this.mBlackList += "1," + satelliteBlacklist.get(i) + ",";
            }
        }
        if (this.mCheckBoxBlockSbas.isChecked() && !this.mTextViewBlockSbas.getText().toString().isEmpty()) {
            log("SBAS Blacklist: " + this.mTextViewBlockSbas.getText().toString());
            List<Integer> satelliteBlacklist2 = parseSatelliteBlacklist(this.mTextViewBlockSbas.getText().toString());
            int size2 = satelliteBlacklist2.size();
            for (int i2 = 0; i2 < size2; i2++) {
                this.mBlackList += "2," + satelliteBlacklist2.get(i2) + ",";
            }
        }
        if (this.mCheckBoxBlockGlonass.isChecked() && !this.mTextViewBlockGlonass.getText().toString().isEmpty()) {
            log("Glonass Blacklist: " + this.mTextViewBlockGlonass.getText().toString());
            List<Integer> satelliteBlacklist3 = parseSatelliteBlacklist(this.mTextViewBlockGlonass.getText().toString());
            int size3 = satelliteBlacklist3.size();
            for (int i3 = 0; i3 < size3; i3++) {
                this.mBlackList += "3," + satelliteBlacklist3.get(i3) + ",";
            }
        }
        if (this.mCheckBoxBlockQzss.isChecked() && !this.mTextViewBlockQzss.getText().toString().isEmpty()) {
            log("QZSS Blacklist: " + this.mTextViewBlockQzss.getText().toString());
            List<Integer> satelliteBlacklist4 = parseSatelliteBlacklist(this.mTextViewBlockQzss.getText().toString());
            int size4 = satelliteBlacklist4.size();
            for (int i4 = 0; i4 < size4; i4++) {
                int iIntValue = satelliteBlacklist4.get(i4).intValue();
                if (iIntValue != 0) {
                    iIntValue += 192;
                }
                this.mBlackList += "4," + iIntValue + ",";
            }
        }
        if (this.mCheckBoxBlockBeidou.isChecked() && !this.mTextViewBlockBeidou.getText().toString().isEmpty()) {
            log("Beidou Blacklist: " + this.mTextViewBlockBeidou.getText().toString());
            List<Integer> satelliteBlacklist5 = parseSatelliteBlacklist(this.mTextViewBlockBeidou.getText().toString());
            int size5 = satelliteBlacklist5.size();
            for (int i5 = 0; i5 < size5; i5++) {
                this.mBlackList += "5," + satelliteBlacklist5.get(i5) + ",";
            }
        }
        if (this.mCheckBoxBlockGalileo.isChecked() && !this.mTextViewBlockGalileo.getText().toString().isEmpty()) {
            log("Galileo Blacklist: " + this.mTextViewBlockGalileo.getText().toString());
            List<Integer> satelliteBlacklist6 = parseSatelliteBlacklist(this.mTextViewBlockGalileo.getText().toString());
            int size6 = satelliteBlacklist6.size();
            for (int i6 = 0; i6 < size6; i6++) {
                this.mBlackList += "6," + satelliteBlacklist6.get(i6) + ",";
            }
        }
        if (this.mCheckBoxBlockIrnss.isChecked() && !this.mTextViewBlockIrnss.getText().toString().isEmpty()) {
            log("IRNSS Blacklist: " + this.mTextViewBlockIrnss.getText().toString());
            List<Integer> satelliteBlacklist7 = parseSatelliteBlacklist(this.mTextViewBlockIrnss.getText().toString());
            int size7 = satelliteBlacklist7.size();
            for (int i7 = 0; i7 < size7; i7++) {
                this.mBlackList += "7," + satelliteBlacklist7.get(i7) + ",";
            }
        }
        log("mBlacklist: " + this.mBlackList);
        Settings.Global.putString(getContentResolver(), "gnss_satellite_blacklist", this.mBlackList);
    }

    private void setGpsMode(int i) {
        Bundle bundle = new Bundle();
        if (i == 0) {
            log("Hot Start");
            bundle.putBoolean("rti", true);
            this.mTextViewDeleteAidingData.setText("Hot Start: delete rti");
        } else if (i == 1) {
            log("Warm Start");
            this.mTextViewDeleteAidingData.setText("Warm Start: delete eph");
            bundle.putBoolean("ephemeris", true);
        } else if (i == 2) {
            log("Cold Start");
            bundle.putBoolean("ephemeris", true);
            bundle.putBoolean("position", true);
            bundle.putBoolean("time", true);
            bundle.putBoolean("iono", true);
            bundle.putBoolean("utc", true);
            bundle.putBoolean("health", true);
            this.mTextViewDeleteAidingData.setText("Cold Start: delete eph, pos, time, iono, utc, hlth");
        } else if (i == 3) {
            log("Full Start");
            bundle.putBoolean("all", true);
            this.mTextViewDeleteAidingData.setText("Full Start: delete all");
        } else if (i == 4) {
            log("VzW Delete Almanac, Ephemeris");
            bundle.putBoolean("ephemeris", true);
            bundle.putBoolean("almanac", true);
            this.mTextViewDeleteAidingData.setText("delete eph, alm");
        } else if (i == 5) {
            log("VzW Delete Ephemeris");
            bundle.putBoolean("ephemeris", true);
            this.mTextViewDeleteAidingData.setText("delete eph");
        } else if (i == 6) {
            log("VzW Delete Reference Time");
            bundle.putBoolean("time", true);
            this.mTextViewDeleteAidingData.setText("delete time");
        } else if (i == 7) {
            log("Vzw Delete all except time, alm");
            bundle.putBoolean("ephemeris", true);
            bundle.putBoolean("position", true);
            bundle.putBoolean("iono", true);
            bundle.putBoolean("utc", true);
            bundle.putBoolean("health", true);
            bundle.putBoolean("svdir", true);
            bundle.putBoolean("svsteer", true);
            bundle.putBoolean("sadata", true);
            bundle.putBoolean("rti", true);
            bundle.putBoolean("hot-still", true);
            bundle.putBoolean("epo", true);
            bundle.putBoolean("celldb-info", true);
            this.mTextViewDeleteAidingData.setText("delete all except time, alm");
        } else {
            if (i != 8) {
                log("WARNING: unknown reset type");
                return;
            }
            log("VzW Delete all except time, alm, epo");
            bundle.putBoolean("ephemeris", true);
            bundle.putBoolean("position", true);
            bundle.putBoolean("iono", true);
            bundle.putBoolean("utc", true);
            bundle.putBoolean("svdir", true);
            bundle.putBoolean("svsteer", true);
            bundle.putBoolean("sadata", true);
            bundle.putBoolean("rti", true);
            bundle.putBoolean("celldb-info", true);
            this.mTextViewDeleteAidingData.setText("delete all except time, alm, epo");
        }
        this.mLocationManager.sendExtraCommand("gps", "delete_aiding_data", bundle);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setSvOutCheckStr(int i) {
        String str = "";
        for (int i2 = 0; i2 < 41; i2++) {
            if (this.mCheckBoxSvArr[i2].isChecked()) {
                str = str + i2 + ",";
                if (i2 == 0) {
                    break;
                }
            }
        }
        if ("0,".equals(str)) {
            str = "All,";
        }
        switch (i) {
            case 1:
                this.mTextViewBlockGps.setText(str);
                break;
            case 2:
                this.mTextViewBlockSbas.setText(str);
                break;
            case 3:
                this.mTextViewBlockGlonass.setText(str);
                break;
            case 4:
                this.mTextViewBlockQzss.setText(str);
                break;
            case 5:
                this.mTextViewBlockBeidou.setText(str);
                break;
            case 6:
                this.mTextViewBlockGalileo.setText(str);
                break;
            case 7:
                this.mTextViewBlockIrnss.setText(str);
                break;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showClearLogConfirmDialog() {
        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        builder.setMessage("Are you sure to delete nmea log?");
        builder.setCancelable(false);
        builder.setPositiveButton("Yes", new DialogInterface.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.35
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                LbsGps.this.ClearNmeaLog();
            }
        });
        builder.setNegativeButton("No", new DialogInterface.OnClickListener(this) { // from class: com.mediatek.lbs.em2.ui.LbsGps.36
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
            }
        });
        builder.create().show();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showLogNmeaConfirmDialog() {
        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        builder.setMessage("Data may be accessed by other APP. Are you sure to log nmea data?");
        builder.setCancelable(false);
        builder.setPositiveButton("Yes", new DialogInterface.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.33
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                LbsGps.this.mCheckBoxLogToSdcard.setEnabled(LbsGps.this.mCheckBoxLogNmea.isChecked());
            }
        });
        builder.setNegativeButton("No", new DialogInterface.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.LbsGps.34
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                LbsGps.this.mCheckBoxLogNmea.setChecked(false);
            }
        });
        builder.create().show();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void startDeletingAidingData() {
        log("startDeletingAidingData");
        int i = this.mGpsMode;
        if (i == 0) {
            setGpsMode(0);
            return;
        }
        if (i == 1) {
            setGpsMode(1);
            return;
        }
        if (i == 2) {
            setGpsMode(2);
            return;
        }
        if (i == 3) {
            setGpsMode(3);
            return;
        }
        if (i == 4) {
            setGpsMode(4);
            return;
        }
        if (i == 5) {
            setGpsMode(5);
            return;
        }
        if (i == 6) {
            setGpsMode(6);
        } else if (i == 7) {
            setGpsMode(7);
        } else if (i == 8) {
            setGpsMode(8);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void startGps() {
        log("startGps");
        GpsTimer gpsTimer = new GpsTimer();
        this.mTimer = gpsTimer;
        gpsTimer.startTimer();
        this.mNmeaFileName = getTimeString2(new Date().getTime());
        LocationRequest locationRequestCreateFromDeprecatedProvider = LocationRequest.createFromDeprecatedProvider("gps", this.mLowPowerMode ? 300000 : 1000, 0.0f, this.mSingleShot);
        locationRequestCreateFromDeprecatedProvider.setLowPowerMode(this.mLowPowerMode);
        locationRequestCreateFromDeprecatedProvider.setLocationSettingsIgnored(true);
        this.mLocationManager.requestLocationUpdates(locationRequestCreateFromDeprecatedProvider, this.mLocationListener, this.mHandler.getLooper());
        resetVarialbe();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void startStressGps() {
        try {
            if (Integer.valueOf(this.mEditTextDelay3.getText().toString()).intValue() < 1) {
                throw new NumberFormatException();
            }
            StressTest stressTest = new StressTest(Integer.valueOf(this.mEditTextNumOfLoop.getText().toString()).intValue(), Integer.valueOf(this.mEditTextDelay1.getText().toString()).intValue(), Integer.valueOf(this.mEditTextDelay2.getText().toString()).intValue(), Integer.valueOf(this.mEditTextDelay3.getText().toString()).intValue(), Integer.valueOf(this.mEditTextDelay4.getText().toString()).intValue());
            this.mStressTest = stressTest;
            stressTest.startStress();
            this.mButtonGps.setEnabled(false);
            this.mEditTextNumOfLoop.setEnabled(false);
            this.mEditTextDelay1.setEnabled(false);
            this.mEditTextDelay2.setEnabled(false);
            this.mEditTextDelay3.setEnabled(false);
            this.mEditTextDelay4.setEnabled(false);
            this.mButtonDelete.setEnabled(false);
            this.mButtonGpsMode.setEnabled(false);
            this.mCheckBoxSwitchDelet2First.setEnabled(false);
            this.mNmeaFolderName = "stress_" + getTimeString2(new Date().getTime());
            this.mNmeaFileName = null;
        } catch (NumberFormatException e) {
            e.printStackTrace();
            Toast.makeText(getApplicationContext(), "ERR: Parameters error!!", 0).show();
            this.mButtonStress.setChecked(false);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void stopGps() {
        log("stopGps");
        this.mTimer.stopTimer();
        this.mLocationManager.removeUpdates(this.mLocationListener);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void stopStressGps() {
        enableWidgetAfterStress();
        this.mNmeaFolderName = "single_" + getTimeString2(new Date().getTime());
        this.mNmeaFileName = null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateFirstSvStr(GnssStatus gnssStatus) {
        this.mFirstSvStr = "";
        int i = 0;
        if (gnssStatus != null) {
            int i2 = 0;
            while (i < gnssStatus.getSatelliteCount()) {
                if (gnssStatus.getCn0DbHz(i) > 0.0f) {
                    i2++;
                    this.mFirstSvStr += "SV" + gnssStatus.getSvid(i) + ":" + gnssStatus.getCn0DbHz(i) + " ";
                }
                i++;
            }
            this.mFirstSvStr += "\n";
            i = i2;
        }
        this.mFirstSvNumStr = "First Satellite Num=" + i + "\n";
    }

    private void updateGnssHwNameValue() {
        String gnssHardwareModelName = this.mLocationManager.getGnssHardwareModelName();
        this.mTextViewGnssHwNameValue.setText(gnssHardwareModelName);
        log("updateGnssHwNameValue, hwName = " + gnssHardwareModelName);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateHasAlmanacValue() {
        String str;
        String str2 = SystemProperties.get("vendor.gps.almanac");
        if (str2.equals("") || str2.equals("0")) {
            this.mTextViewAlmanacDateValue.setText("");
            str = "No";
        } else {
            this.mTextViewAlmanacDateValue.setText(str2);
            str = "Yes";
        }
        this.mTextViewHasAlmanacValue.setText(str);
        log("updateHasAlmanacValue, existence = " + str + " date=" + str2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateLocationInfo(Location location) {
        if (location == null) {
            return;
        }
        String str = ((((((((((((("Location Count=" + this.mFixCount + "\n") + String.format("Lat=%.06f Lng=%.06f\n", Double.valueOf(location.getLatitude()), Double.valueOf(location.getLongitude()))) + "Time tick=" + location.getTime() + "\n") + "UTC time=" + getTimeString(location.getTime()) + "\n") + "ElapsedtimeNs=" + location.getElapsedRealtimeNanos() + "\n") + "ElapsedtimeUncertaintyNs=" + location.getElapsedRealtimeUncertaintyNanos() + "\n") + "Altitude=" + location.getAltitude() + " " + location.hasAltitude() + "\n") + "H Accuracy=" + location.getAccuracy() + " " + location.hasAccuracy() + "\n") + "V Accuracy=" + location.getVerticalAccuracyMeters() + " " + location.hasVerticalAccuracy() + "\n") + "Bearing=" + location.getBearing() + " " + location.hasBearing() + "\n") + "Bearing Accuracy=" + location.getBearingAccuracyDegrees() + " " + location.hasBearingAccuracy() + "\n") + "Speed=" + location.getSpeed() + " " + location.hasSpeed() + "\n") + "Speed Accuracy=" + location.getSpeedAccuracyMetersPerSecond() + " " + location.hasSpeedAccuracy() + "\n") + "Distance=" + this.mDistance + "\n";
        StringBuilder sb = new StringBuilder();
        sb.append(str);
        sb.append("TTFF=");
        int i = this.mTTFF;
        sb.append(i < 0 ? "" : Integer.valueOf(i));
        sb.append("\n");
        this.mTextViewLocation.setText((((sb.toString() + String.format("First Lat=%.06f Lng=%.06f\n", Double.valueOf(this.mFirstLocation.getLatitude()), Double.valueOf(this.mFirstLocation.getLongitude()))) + "First distance=" + this.mFirstDistance + "\n") + this.mFirstSvNumStr) + this.mFirstSvStr);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateRefLatLng() {
        Location lastKnownLocation = this.mLocationManager.getLastKnownLocation("gps");
        if (lastKnownLocation != null) {
            mRefLat = lastKnownLocation.getLatitude();
            mRefLng = lastKnownLocation.getLongitude();
            this.mTextViewRefLatLng.setText(String.format("Reference Lat=%.06f Lng=%.06f", Double.valueOf(mRefLat), Double.valueOf(mRefLng)));
        }
    }

    private void updateYearOfGnssHwValue() {
        int gnssYearOfHardware = this.mLocationManager.getGnssYearOfHardware();
        this.mTextViewYearOfGnssHwValue.setText("" + gnssYearOfHardware);
        log("updateYearOfGnssHwValue, year = " + gnssYearOfHardware);
    }

    void ClearNmeaLog() {
        deleteFilePath("/sdcard/nmea/");
        deleteFilePath("/data/data/" + getPackageName() + "/nmea/");
    }

    boolean deleteFilePath(String str) {
        File file = new File(str);
        if (file.isDirectory()) {
            for (File file2 : file.listFiles()) {
                if (!deleteFilePath(file2.toString())) {
                    return false;
                }
            }
            log("The directory is deleted: " + str);
        }
        return file.delete();
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        log("onCreate()");
        super.onCreate(bundle);
        setContentView(R.layout.gps);
        LocationManager locationManager = (LocationManager) getSystemService("location");
        this.mLocationManager = locationManager;
        if (locationManager == null) {
            log("ERR: mLocationManager is null");
        }
        this.mLocationManager.addNmeaListener(this.mNmeaListener);
        this.mLocationManager.registerGnssStatusCallback(this.mGnssStatusCallback);
        initWidget();
        updateRefLatLng();
        this.mNmeaFolderName = "single_" + getTimeString2(new Date().getTime());
        this.mNmeaFileName = null;
        this.mToMnldSender = new Debug2MnldInterface$Debug2MnldInterfaceSender();
        this.mUdpClient = new UdpClient("mtk_debugService2mnld", LocalSocketAddress.Namespace.ABSTRACT, 12);
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        log("onDestroy()");
        super.onDestroy();
        this.mLocationManager.removeNmeaListener(this.mNmeaListener);
        this.mLocationManager.removeUpdates(this.mLocationListener);
        this.mLocationManager.unregisterGnssStatusCallback(this.mGnssStatusCallback);
        this.mTimer.stopTimer();
        this.mStressTest.stopStress();
        this.mToMnldSender.debugMnldNeMsg(this.mUdpClient, false);
    }

    @Override // android.app.Activity
    public void onRestoreInstanceState(Bundle bundle) {
        super.onRestoreInstanceState(bundle);
        this.mButtonGps.setChecked(false);
        this.mButtonStress.setChecked(false);
    }

    @Override // android.app.Activity
    public void onResume() {
        super.onResume();
        updateHasAlmanacValue();
        updateYearOfGnssHwValue();
        updateGnssHwNameValue();
        this.mToMnldSender.debugMnldNeMsg(this.mUdpClient, true);
    }

    public boolean write2File(String str, String str2, String str3, String str4, boolean z, boolean z2) {
        String str5;
        if (z2) {
            str5 = "/sdcard/" + str;
        } else {
            str5 = "/data/data/" + getPackageName() + "/" + str;
        }
        new File(str5).mkdir();
        if (str2 != null) {
            str5 = str5 + "/" + str2;
            new File(str5).mkdir();
        }
        String str6 = str5 + "/" + str3;
        try {
            DataOutputStream dataOutputStream = z ? new DataOutputStream(new FileOutputStream(str6, true)) : new DataOutputStream(new FileOutputStream(new File(str6)));
            dataOutputStream.writeBytes(str4);
            dataOutputStream.close();
            return true;
        } catch (FileNotFoundException e) {
            e.printStackTrace();
            return false;
        } catch (IOException e2) {
            e2.printStackTrace();
            return false;
        }
    }
}
