package com.mediatek.engineermode;

import android.app.Activity;
import android.app.ActivityManager;
import android.app.AlertDialog;
import android.app.Dialog;
import android.app.Fragment;
import android.app.FragmentManager;
import android.app.FragmentTransaction;
import android.content.DialogInterface;
import android.net.ConnectivityManager;
import android.os.Bundle;
import android.os.SystemProperties;
import android.os.UserManager;
import android.provider.Settings;
import android.support.v4.view.PagerAdapter;
import android.support.v4.view.PagerTitleStrip;
import android.support.v4.view.ViewPager;
import android.util.LogWriter;
import android.view.View;
import android.widget.Toast;
import com.android.internal.util.IndentingPrintWriter;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class EngineerMode extends Activity {
    private static final int DIALOG_BACKGROUD_PERMISSION_WARNING = 1;
    private static final int DIALOG_DEVELOPMENT_SETTINGS_DISABLED = 0;
    private static final String PROP_MONKEY = "ro.monkey";
    private static final int RUNTIME_PERMISSION_REQUEST_CODE = 100;
    private static final int TAB_COUNT = 6;
    private static final int TAB_COUNT_WIFIONLY = 5;
    private static final String TAG = "MainEntrance";
    private boolean mLastEnabledState;
    private MyPagerAdapter mPagerAdapter;
    private int mTabCount;
    private int[] mTabTitleList;
    private ViewPager mViewPager;
    private static final int[] TAB_TITLE_IDS = {R.string.tab_telephony, R.string.tab_connectivity, R.string.tab_hardware_testing, R.string.tab_location, R.string.tab_log_and_debugging, R.string.tab_others};
    private static final int[] TAB_TITLE_IDS_WIFIONLY = {R.string.tab_connectivity, R.string.tab_hardware_testing, R.string.tab_location, R.string.tab_log_and_debugging, R.string.tab_others};
    public static boolean sWifiOnly = false;
    private PrefsFragment[] mTabs = new PrefsFragment[6];
    private boolean mAllRuntimePermissionGranted = false;
    private RuntimePermissionManager mPermissionMgr = new RuntimePermissionManager(this, 100);
    private boolean mRestore = false;

    class MyPagerAdapter extends PagerAdapter {
        private Fragment mCurPrimaryItem;
        private FragmentTransaction mCurTransaction = null;
        private final FragmentManager mFragmentManager;

        MyPagerAdapter() {
            this.mFragmentManager = EngineerMode.this.getFragmentManager();
        }

        private Fragment getFragment(int i) {
            if (i < EngineerMode.this.mTabCount) {
                return EngineerMode.this.mTabs[i];
            }
            throw new IllegalArgumentException("position: " + i);
        }

        @Override // android.support.v4.view.PagerAdapter
        public void destroyItem(View view, int i, Object obj) {
            if (this.mCurTransaction == null) {
                this.mCurTransaction = this.mFragmentManager.beginTransaction();
            }
            this.mCurTransaction.hide((Fragment) obj);
        }

        @Override // android.support.v4.view.PagerAdapter
        public void finishUpdate(View view) {
            FragmentTransaction fragmentTransaction = this.mCurTransaction;
            if (fragmentTransaction != null) {
                fragmentTransaction.commitAllowingStateLoss();
                this.mCurTransaction = null;
                this.mFragmentManager.executePendingTransactions();
            }
        }

        @Override // android.support.v4.view.PagerAdapter
        public int getCount() {
            return EngineerMode.this.mTabCount;
        }

        @Override // android.support.v4.view.PagerAdapter
        public CharSequence getPageTitle(int i) {
            EngineerMode engineerMode = EngineerMode.this;
            return engineerMode.getString(engineerMode.mTabTitleList[i]).toString();
        }

        @Override // android.support.v4.view.PagerAdapter
        public Object instantiateItem(View view, int i) {
            if (this.mCurTransaction == null) {
                this.mCurTransaction = this.mFragmentManager.beginTransaction();
            }
            Fragment fragment = getFragment(i);
            this.mCurTransaction.show(fragment);
            fragment.setUserVisibleHint(fragment.equals(this.mCurPrimaryItem));
            return fragment;
        }

        @Override // android.support.v4.view.PagerAdapter
        public boolean isViewFromObject(View view, Object obj) {
            return ((Fragment) obj).getView() == view;
        }

        @Override // android.support.v4.view.PagerAdapter
        public void setPrimaryItem(View view, int i, Object obj) {
            Fragment fragment = (Fragment) obj;
            if (fragment.equals(this.mCurPrimaryItem)) {
                return;
            }
            Fragment fragment2 = this.mCurPrimaryItem;
            if (fragment2 != null) {
                fragment2.setUserVisibleHint(false);
            }
            this.mCurPrimaryItem = fragment;
            fragment.setUserVisibleHint(true);
        }

        public void updateCurrentFragment() {
            Fragment fragment = this.mCurPrimaryItem;
            if (fragment != null) {
                fragment.setUserVisibleHint(true);
            }
        }
    }

    private void initFragment() {
        Elog.i(TAG, "initFragment");
        setContentView(R.layout.main);
        FragmentManager fragmentManager = getFragmentManager();
        FragmentTransaction fragmentTransactionBeginTransaction = fragmentManager.beginTransaction();
        if (isWifiOnly()) {
            this.mTabTitleList = TAB_TITLE_IDS_WIFIONLY;
            this.mTabCount = 5;
        } else if (!UserManager.supportsMultipleUsers() || UserManager.get(this).getUserHandle() == 0) {
            this.mTabTitleList = TAB_TITLE_IDS;
            this.mTabCount = 6;
        } else {
            this.mTabTitleList = TAB_TITLE_IDS_WIFIONLY;
            this.mTabCount = 5;
        }
        if (this.mRestore) {
            for (int i = 0; i < this.mTabCount; i++) {
                PrefsFragment prefsFragment = (PrefsFragment) fragmentManager.findFragmentByTag(String.valueOf(i));
                if (prefsFragment != null) {
                    Elog.i(TAG, "old fragment:" + i);
                    fragmentTransactionBeginTransaction.remove(prefsFragment);
                }
            }
        }
        for (int i2 = 0; i2 < this.mTabCount; i2++) {
            this.mTabs[i2] = new PrefsFragment();
            Elog.i(TAG, "mTabs[i]:" + this.mTabs[i2]);
            this.mTabs[i2].setResource(i2);
            fragmentTransactionBeginTransaction.add(R.id.viewpager, this.mTabs[i2], String.valueOf(i2));
            fragmentTransactionBeginTransaction.hide(this.mTabs[i2]);
        }
        this.mViewPager = (ViewPager) findViewById(R.id.viewpager);
        ((PagerTitleStrip) findViewById(R.id.pagertitle)).setTextSpacing(100);
        fragmentTransactionBeginTransaction.commitAllowingStateLoss();
        MyPagerAdapter myPagerAdapter = new MyPagerAdapter();
        this.mPagerAdapter = myPagerAdapter;
        this.mViewPager.setAdapter(myPagerAdapter);
        this.mViewPager.setSaveEnabled(false);
        this.mViewPager.setCurrentItem(0);
    }

    public static boolean isAutoTest() {
        boolean z = SystemProperties.getBoolean(PROP_MONKEY, false);
        Elog.i(TAG, "isAutoTest()-> Monkey running flag is " + z);
        boolean zIsUserAMonkey = ActivityManager.isUserAMonkey();
        Elog.i(TAG, "isAutoTest()-> isUserAMonkey=" + zIsUserAMonkey);
        return z || zIsUserAMonkey;
    }

    private boolean isWifiOnly() {
        ConnectivityManager connectivityManager = (ConnectivityManager) getSystemService("connectivity");
        if (connectivityManager != null) {
            sWifiOnly = !connectivityManager.isNetworkSupported(0);
            Elog.i(TAG, "sWifiOnly: " + sWifiOnly);
        }
        return sWifiOnly;
    }

    private void showUI() {
        this.mAllRuntimePermissionGranted = true;
        initFragment();
        updateFragment();
    }

    private void updateFragment() {
        if (this.mLastEnabledState && this.mAllRuntimePermissionGranted) {
            this.mPagerAdapter.updateCurrentFragment();
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        if (isAutoTest()) {
            finish();
            return;
        }
        IndentingPrintWriter indentingPrintWriter = new IndentingPrintWriter(new LogWriter(5, TAG), "  ");
        indentingPrintWriter.println("Bundle stats:");
        Bundle.dumpStats(indentingPrintWriter, bundle);
        if (bundle != null) {
            this.mRestore = true;
            bundle.remove("android:fragments");
            indentingPrintWriter.println("Bundle stats:");
            Bundle.dumpStats(indentingPrintWriter, bundle);
        }
        boolean z = Settings.Global.getInt(getContentResolver(), "development_settings_enabled", 0) != 0;
        this.mLastEnabledState = z;
        if (!z && !ChipSupport.isFeatureSupported(0) && !FeatureSupport.isEngLoad() && !FeatureSupport.isUserDebugLoad()) {
            Elog.i(TAG, "you must a developer,mLastEnabledState=" + this.mLastEnabledState);
            showDialog(0);
            return;
        }
        Elog.v(TAG, "mLastEnabledState=" + this.mLastEnabledState);
        if (this.mPermissionMgr.requestRuntimePermissions()) {
            this.mAllRuntimePermissionGranted = true;
            initFragment();
        }
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        if (i == 0) {
            AlertDialog.Builder builder = new AlertDialog.Builder(this);
            builder.setTitle("Notice:");
            builder.setCancelable(false);
            builder.setMessage("EM is an advanced debug mode. if you want to entry the EM,please entry the Developer options at settings!");
            builder.setPositiveButton(R.string.em_ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.EngineerMode.1
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    EngineerMode.this.finish();
                }
            });
            return builder.create();
        }
        if (i != 1) {
            Elog.d(TAG, "error dialog ID");
            return null;
        }
        AlertDialog.Builder builder2 = new AlertDialog.Builder(this);
        builder2.setTitle(R.string.em_warning_title);
        builder2.setMessage(R.string.denied_bg_permission_warning);
        builder2.setPositiveButton(R.string.em_ok, (DialogInterface.OnClickListener) null);
        return builder2.create();
    }

    @Override // android.app.Activity
    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        Elog.i(TAG, "onRequestPermissionsResult(), requestCode = " + i);
        if (iArr == null || iArr.length == 0) {
            return;
        }
        if (i != 100) {
            super.onRequestPermissionsResult(i, strArr, iArr);
            return;
        }
        List<String> permissionNotGranted = this.mPermissionMgr.getPermissionNotGranted();
        if (permissionNotGranted == null || permissionNotGranted.size() == 0) {
            showUI();
            return;
        }
        if (permissionNotGranted.size() == 1 && "android.permission.ACCESS_BACKGROUND_LOCATION".equals(permissionNotGranted.get(0))) {
            showUI();
            showDialog(1);
        } else {
            Toast.makeText(this, R.string.denied_required_permission, 1).show();
            finish();
        }
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        updateFragment();
    }
}
