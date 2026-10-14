package com.mediatek.lbs.em2.ui;

import android.app.TabActivity;
import android.content.Intent;
import android.os.Build;
import android.os.Bundle;
import android.telephony.TelephonyManager;
import android.util.Log;
import android.widget.TabHost;
import android.widget.Toast;
import java.util.Arrays;

/* JADX INFO: loaded from: classes.dex */
public class MyTabActivity extends TabActivity {
    private static final boolean IS_USER_BUILD = "user".equals(Build.TYPE);
    static final int PERMISSION_REQUEST_BITS_ALL;
    private static final String[] sNeededPermissions;
    private String mMccMnc;
    private TabHost mTabHost;

    static {
        String[] strArr = {"android.permission.ACCESS_FINE_LOCATION", "android.permission.ACCESS_COARSE_LOCATION", "android.permission.WRITE_EXTERNAL_STORAGE", "android.permission.READ_PHONE_STATE"};
        sNeededPermissions = strArr;
        PERMISSION_REQUEST_BITS_ALL = (int) (Math.pow(2.0d, strArr.length) - 1.0d);
    }

    private void addAllTab() {
        if (this.mTabHost != null) {
            log("Tabs are already added");
            return;
        }
        TabHost tabHost = getTabHost();
        this.mTabHost = tabHost;
        tabHost.addTab(tabHost.newTabSpec("GPS").setIndicator("GPS").setContent(new Intent().setClass(this, LbsGps.class)));
        TabHost tabHost2 = this.mTabHost;
        tabHost2.addTab(tabHost2.newTabSpec("VIEW").setIndicator("VIEW").setContent(new Intent().setClass(this, LbsView.class)));
        TabHost tabHost3 = this.mTabHost;
        tabHost3.addTab(tabHost3.newTabSpec("AGPS").setIndicator("AGPS").setContent(new Intent().setClass(this, LbsAgps.class)));
        TabHost tabHost4 = this.mTabHost;
        tabHost4.addTab(tabHost4.newTabSpec("FLOW").setIndicator("FLOW").setContent(new Intent().setClass(this, LbsFlow.class)));
        TabHost tabHost5 = this.mTabHost;
        tabHost5.addTab(tabHost5.newTabSpec("MISC").setIndicator("MISC").setContent(new Intent().setClass(this, LbsMisc.class)));
        TabHost tabHost6 = this.mTabHost;
        tabHost6.addTab(tabHost6.newTabSpec("RAW DATA").setIndicator("RAW DATA").setContent(new Intent().setClass(this, LbsRawData.class)));
        TabHost tabHost7 = this.mTabHost;
        tabHost7.addTab(tabHost7.newTabSpec("NLP").setIndicator("NLP").setContent(new Intent().setClass(this, LbsNlp.class)));
        if (!IS_USER_BUILD || isMccNaOperators()) {
            TabHost tabHost8 = this.mTabHost;
            tabHost8.addTab(tabHost8.newTabSpec("C2K DBG").setIndicator("C2K DBG").setContent(new Intent().setClass(this, LbsC2kDbg.class)));
            TabHost tabHost9 = this.mTabHost;
            tabHost9.addTab(tabHost9.newTabSpec("NI Statistic").setIndicator("NI Stastic").setContent(new Intent().setClass(this, LbsNiStatistic.class)));
        } else {
            log("C2K tabs are not added because mccmnc=" + this.mMccMnc);
        }
        TabHost tabHost10 = this.mTabHost;
        tabHost10.addTab(tabHost10.newTabSpec("BATCH").setIndicator("BATCH").setContent(new Intent().setClass(this, LbsBatch.class)));
        this.mTabHost.setCurrentTab(0);
        this.mTabHost.setCurrentTab(1);
        this.mTabHost.setCurrentTab(3);
        this.mTabHost.setCurrentTab(2);
        if (getSharedPreferences("locationem2.data", 0).getBoolean("launchForegroundService", true)) {
            startService(new Intent().setClass(this, LocationEMService.class));
        }
    }

    private int checkAndRequestPermission(int i) {
        String[] strArr = sNeededPermissions;
        int i2 = i & PERMISSION_REQUEST_BITS_ALL;
        if (i2 == 0) {
            return 0;
        }
        int iBitCount = Integer.bitCount(i2);
        String[] strArr2 = new String[iBitCount];
        int i3 = 0;
        int i4 = 0;
        for (int i5 = 0; i5 < strArr.length; i5++) {
            int i6 = 1 << i5;
            if ((i6 & i2) != 0) {
                if (checkSelfPermission(strArr[i5]) != 0) {
                    int i7 = i3 + 1;
                    strArr2[i3] = strArr[i5];
                    if (shouldShowRequestPermissionRationale(strArr[i5])) {
                        log("We need " + strArr[i5] + " to work");
                    }
                    i3 = i7;
                } else {
                    i2 &= ~i6;
                    i4 |= i6;
                }
            }
        }
        if (i3 < iBitCount) {
            if (i3 == 0) {
                return i4;
            }
            strArr2 = (String[]) Arrays.copyOf(strArr2, i3);
        }
        requestPermissions(strArr2, i2);
        return i4;
    }

    private boolean isMccNaOperators() {
        String str = this.mMccMnc;
        String strSubstring = (str == null || str.length() <= 3) ? null : this.mMccMnc.substring(0, 3);
        if (strSubstring == null || !(strSubstring.indexOf("310") == 0 || strSubstring.indexOf("311") == 0 || strSubstring.indexOf("312") == 0 || strSubstring.indexOf("001") == 0)) {
            log("isMccNaOperators() return false, mMccMnc=" + this.mMccMnc);
            return false;
        }
        log("isMccNaOperators() return true, mMccMnc=" + this.mMccMnc);
        return true;
    }

    private void log(String str) {
        Log.d("LocationEM", str);
    }

    @Override // android.app.ActivityGroup, android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.main);
        this.mMccMnc = ((TelephonyManager) getSystemService("phone")).getSimOperator();
        log("onCreate mMccMnc=" + this.mMccMnc);
    }

    @Override // android.app.ActivityGroup, android.app.Activity
    protected void onDestroy() {
        log("onDestroy");
        super.onDestroy();
        stopService(new Intent().setClass(this, LocationEMService.class));
    }

    @Override // android.app.Activity
    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        log("onRequestPermissionsResult: reqCode=" + i);
        for (int i2 = 0; i2 < strArr.length; i2++) {
            log("onRequestPermissionsResult: perm[" + i2 + "]=" + strArr[i2] + ", result=" + iArr[i2]);
            if (iArr[i2] == 0) {
                if (checkSelfPermission("android.permission.ACCESS_FINE_LOCATION") == 0 && checkSelfPermission("android.permission.ACCESS_COARSE_LOCATION") == 0 && checkSelfPermission("android.permission.WRITE_EXTERNAL_STORAGE") == 0 && checkSelfPermission("android.permission.READ_PHONE_STATE") == 0) {
                    addAllTab();
                }
            } else if (iArr[i2] != 0) {
                if (!shouldShowRequestPermissionRationale("android.permission.ACCESS_FINE_LOCATION") && !shouldShowRequestPermissionRationale("android.permission.ACCESS_COARSE_LOCATION") && !shouldShowRequestPermissionRationale("android.permission.WRITE_EXTERNAL_STORAGE") && !shouldShowRequestPermissionRationale("android.permission.READ_PHONE_STATE")) {
                    Toast.makeText(this, "You've disabled the permission, please allow permission from Settings -> Apps -> Menu -> Show system -> LocationEM2 -> Permissions to enable all permissions", 0).show();
                }
                finish();
            }
        }
    }

    @Override // android.app.ActivityGroup, android.app.Activity
    protected void onResume() {
        super.onResume();
        if (checkSelfPermission("android.permission.ACCESS_FINE_LOCATION") != 0 || checkSelfPermission("android.permission.ACCESS_COARSE_LOCATION") != 0 || checkSelfPermission("android.permission.WRITE_EXTERNAL_STORAGE") != 0 || checkSelfPermission("android.permission.READ_PHONE_STATE") != 0) {
            checkAndRequestPermission(PERMISSION_REQUEST_BITS_ALL);
            log("onResume: checkAndRequestPermission");
        } else if (this.mTabHost == null) {
            addAllTab();
        }
    }
}
