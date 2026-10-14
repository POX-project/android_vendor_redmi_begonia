package com.mediatek.engineermode.connsyspatchinfo;

import android.app.Activity;
import android.os.Bundle;
import android.os.SystemProperties;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes2.dex */
public class ConnsysPatchInfoActivity extends Activity {
    private static final String BRANCH_PATTERN = "t-neptune.*SOC[a-zA-Z0-9]*_[a-zA-Z0-9]*_";
    private static final String PROPERTY = "persist.vendor.connsys.patch.version";
    private static final String PROPERTY_FORMAT = "persist.vendor.connsys.bt_fw_ver";
    private static final String PROP_INVALID = "-1";
    private static final String TAG = "ConnsysPatchInfo";
    private static final String VER_SPLIT = "-";

    private String getBranch(String str) {
        Matcher matcher = Pattern.compile(BRANCH_PATTERN).matcher(str);
        if (matcher.find()) {
            return matcher.group(0);
        }
        return null;
    }

    private String getVer(String str) {
        String strSubstring = str;
        int iLastIndexOf = str.lastIndexOf(VER_SPLIT);
        if (iLastIndexOf > 0 && str.length() > iLastIndexOf + 1) {
            strSubstring = str.substring(iLastIndexOf + 1);
        }
        if (strSubstring.length() < 8) {
            return null;
        }
        String strSubstring2 = strSubstring.substring(0, 4);
        String strSubstring3 = strSubstring.substring(4, 6);
        String strSubstring4 = strSubstring.substring(6, 8);
        StringBuilder sb = new StringBuilder(strSubstring2);
        sb.append(VER_SPLIT);
        sb.append(strSubstring3);
        sb.append(VER_SPLIT);
        sb.append(strSubstring4);
        if (strSubstring.length() > 8) {
            sb.append(VER_SPLIT);
            sb.append(strSubstring.substring(8));
        }
        return sb.toString();
    }

    private void showVersion() {
        String str = SystemProperties.get(PROPERTY_FORMAT);
        Elog.v(TAG, "strInfo:" + str);
        if (str == null || str.isEmpty() || str.equals(PROP_INVALID)) {
            String str2 = SystemProperties.get(PROPERTY);
            Elog.i(TAG, "version:" + str2);
            TextView textView = (TextView) findViewById(R.id.rom_patch_ver_tv);
            if (str2 == null || str2.isEmpty()) {
                return;
            }
            textView.setText(str2);
            return;
        }
        findViewById(R.id.connsys_patch_layout).setVisibility(8);
        findViewById(R.id.connsys_branch_layout).setVisibility(0);
        findViewById(R.id.connsys_ver_layout).setVisibility(0);
        String branch = getBranch(str);
        if (branch != null) {
            TextView textView2 = (TextView) findViewById(R.id.connsys_branch_tv);
            String strSubstring = branch.substring(0, branch.length() - 1);
            Elog.v(TAG, "strBranch:" + strSubstring);
            textView2.setText(strSubstring);
        }
        String ver = getVer(str);
        Elog.v(TAG, "strVer:" + ver);
        if (ver != null) {
            ((TextView) findViewById(R.id.connsys_ver_tv)).setText(ver);
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.connsys_patch_info);
        showVersion();
    }
}
