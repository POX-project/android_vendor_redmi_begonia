package com.mediatek.engineermode.iotconfig;

import android.os.Bundle;
import android.support.v4.app.Fragment;
import android.support.v4.app.FragmentActivity;
import android.support.v4.app.FragmentManager;
import android.support.v4.app.FragmentPagerAdapter;
import android.support.v4.view.PagerTitleStrip;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.R;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class IotConfigurationActivity extends FragmentActivity {
    private static int[] TAB_TITLE_IOT;
    private List<Fragment> mFragments;
    private IotViewPager mViewPager;
    private PagerTitleStrip pagerTitleStrip;
    private List<String> titleList;
    private static String TAG = "Iot/IotConfigurationActivity";
    private static int[] TAB_TITLE_IOT_WFC = {R.string.iot_xcap, R.string.iot_wfc, R.string.iot_vilte};
    private static int[] TAB_TITLE_IOT_NO_WFC = {R.string.iot_xcap, R.string.iot_vilte};

    public class FragPagerAdapter extends FragmentPagerAdapter {
        private List<Fragment> mFragments;
        private List<String> mTitle;

        public FragPagerAdapter(FragmentManager fragmentManager, List<Fragment> list, List<String> list2) {
            super(fragmentManager);
            this.mFragments = list;
            this.mTitle = list2;
        }

        @Override // android.support.v4.view.PagerAdapter
        public int getCount() {
            return this.mFragments.size();
        }

        @Override // android.support.v4.app.FragmentPagerAdapter
        public Fragment getItem(int i) {
            return this.mFragments.get(i);
        }

        @Override // android.support.v4.view.PagerAdapter
        public CharSequence getPageTitle(int i) {
            return IotConfigurationActivity.this.getString(IotConfigurationActivity.TAB_TITLE_IOT[i]).toString();
        }
    }

    public boolean isSupportWFC() {
        return FeatureSupport.isSupportWfc() && !FeatureSupport.is93Modem();
    }

    @Override // android.support.v4.app.FragmentActivity, android.support.v4.app.SupportActivity, android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.iot_config);
        this.mViewPager = (IotViewPager) findViewById(R.id.viewpager);
        PagerTitleStrip pagerTitleStrip = (PagerTitleStrip) findViewById(R.id.pagertitle);
        this.pagerTitleStrip = pagerTitleStrip;
        pagerTitleStrip.setTextSpacing(100);
        this.titleList = new ArrayList();
        TAB_TITLE_IOT = isSupportWFC() ? TAB_TITLE_IOT_WFC : TAB_TITLE_IOT_NO_WFC;
        int i = 0;
        while (true) {
            int[] iArr = TAB_TITLE_IOT;
            if (i >= iArr.length) {
                break;
            }
            this.titleList.add(getString(iArr[i]).toString());
            i++;
        }
        ArrayList arrayList = new ArrayList();
        this.mFragments = arrayList;
        arrayList.add(new XCAPConfigFragment());
        if (isSupportWFC()) {
            this.mFragments.add(new WfcConfigFragment());
        }
        this.mFragments.add(new VilteConfigFragment());
        this.mViewPager.setAdapter(new FragPagerAdapter(getSupportFragmentManager(), this.mFragments, this.titleList));
    }
}
