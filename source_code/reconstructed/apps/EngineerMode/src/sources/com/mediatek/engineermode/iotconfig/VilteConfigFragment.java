package com.mediatek.engineermode.iotconfig;

import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.os.Bundle;
import android.os.Environment;
import android.os.Handler;
import android.os.Message;
import android.support.v4.app.Fragment;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.EditText;
import android.widget.HorizontalScrollView;
import android.widget.LinearLayout;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.regex.Pattern;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;
import org.xmlpull.v1.XmlPullParserFactory;

/* JADX INFO: loaded from: classes.dex */
public class VilteConfigFragment extends Fragment {
    private static final String TAG = "Iot/VilteConfigFragment";
    public static final int UNKNOW = 4;
    private static final int VILTE_ACTION_GET_DEFAULT_PROFILE = 0;
    private static final int VILTE_ACTION_WRITE_PROFILE = 1;
    private static final String VILTE_DEFAULT_FILE_NAME = "viLTE_media_profiles.xml";
    private static final String VILTE_DEFAULT_TEMPLATE_FILE_NAME = "viLTE_media_profiles_opxx.xml";
    public static final int VILTE_READ_DEFAULT_PROFILE_FAILED = 0;
    public static final int VILTE_READ_DEFAULT_PROFILE_OK = 1;
    public static final int VILTE_WRITE_PROFILE_FAILED = 2;
    public static final int VILTE_WRITE_PROFILE_OK = 3;
    public static ArrayList<VideoProfileModel> selectProfileList;
    public static ArrayList<VideoQualityModel> selectqualityList;
    private Button btnProfileCancel;
    private Button btnProfileReset;
    private Button btnProfileSave;
    private Button btnShowHelp;
    private EditText operatorId;
    private VideoProfileAdapter profileAdapter;
    private LinkedHorizontalScrollView profileContentScrollView;
    ArrayList<VideoProfileModel> profileModelList;
    private HorizontalScrollView profileTitleScrollView;
    private LinearLayout videoProfileContent;
    private ListView videoProfileListView;
    private HashMap<String, Integer> VideoQualityMapping = new HashMap<>();
    private String curFileName = "";
    private Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.iotconfig.VilteConfigFragment.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 0) {
                VilteConfigFragment.this.showToast("Read profile template failed!");
                return;
            }
            if (i == 1) {
                VilteConfigFragment.this.showToast("Read profile template completed!");
                VilteConfigFragment.this.updateVideoProfileUI();
            } else if (i == 2) {
                VilteConfigFragment.this.showToast("Write profile failed!");
            } else {
                if (i != 3) {
                    return;
                }
                VilteConfigFragment.this.showToast("Write profile completed!");
                VilteConfigFragment.this.operatorId.setText("");
                VilteConfigFragment.this.new XmlParserThread(0).start();
            }
        }
    };
    private View.OnClickListener btnOnClickListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.iotconfig.VilteConfigFragment.3
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            switch (view.getId()) {
                case R.id.btn_profile_cancel /* 2131100236 */:
                    VilteConfigFragment.this.new XmlParserThread(0).start();
                    break;
                case R.id.btn_profile_reset /* 2131100237 */:
                    VilteConfigFragment.this.deleteFileFromInnerSDCard(VilteConfigFragment.VILTE_DEFAULT_FILE_NAME);
                    VilteConfigFragment.this.new XmlParserThread(0).start();
                    break;
                case R.id.btn_profile_save /* 2131100238 */:
                    VilteConfigFragment vilteConfigFragment = VilteConfigFragment.this;
                    vilteConfigFragment.refreshSelectProfileList(vilteConfigFragment.profileAdapter.getList());
                    VilteConfigFragment.this.refreshVideoProfileView(true);
                    VilteConfigFragment.this.new XmlParserThread(1).start();
                    break;
                case R.id.btn_show_help /* 2131100240 */:
                    VilteConfigFragment vilteConfigFragment2 = VilteConfigFragment.this;
                    vilteConfigFragment2.showInfoDialog(vilteConfigFragment2.getActivity(), VilteConfigFragment.this.getActivity().getResources().getString(R.string.vilte_help_content));
                    break;
            }
        }
    };

    public class XmlParserThread extends Thread {
        private int action;

        public XmlParserThread(int i) {
            this.action = i;
        }

        @Override // java.lang.Thread, java.lang.Runnable
        public void run() {
            int i;
            int i2;
            Exception e;
            String str;
            String str2;
            ArrayList arrayList;
            Iterator it;
            String str3;
            StringBuffer stringBuffer;
            Message message = new Message();
            int i3 = this.action;
            if (i3 == 0) {
                VilteConfigFragment.this.curFileName = "";
                try {
                    try {
                        XmlPullParserFactory xmlPullParserFactoryNewInstance = XmlPullParserFactory.newInstance();
                        xmlPullParserFactoryNewInstance.setNamespaceAware(true);
                        XmlPullParser xmlPullParserNewPullParser = xmlPullParserFactoryNewInstance.newPullParser();
                        boolean z = false;
                        if (new File(VilteConfigFragment.this.getInnerSDCardPath() + File.separator + VilteConfigFragment.VILTE_DEFAULT_FILE_NAME).exists()) {
                            VilteConfigFragment.this.curFileName = VilteConfigFragment.this.getInnerSDCardPath() + File.separator + VilteConfigFragment.VILTE_DEFAULT_FILE_NAME;
                            z = true;
                        } else {
                            if (new File(VilteConfigFragment.this.getInnerSDCardPath() + File.separator + VilteConfigFragment.VILTE_DEFAULT_TEMPLATE_FILE_NAME).exists()) {
                                VilteConfigFragment.this.curFileName = VilteConfigFragment.this.getInnerSDCardPath() + File.separator + VilteConfigFragment.VILTE_DEFAULT_TEMPLATE_FILE_NAME;
                            }
                        }
                        if (VilteConfigFragment.this.curFileName.equals("")) {
                            VilteConfigFragment.this.curFileName = "vilte_media_profiles_opxx.xml";
                            xmlPullParserNewPullParser.setInput(new InputStreamReader(VilteConfigFragment.this.getActivity().getApplicationContext().getAssets().open(VilteConfigFragment.this.curFileName)));
                            Elog.d(VilteConfigFragment.TAG, "Read from R.xml.vilte_media_profiles_opxx");
                        } else {
                            FileInputStream fileInputStream = new FileInputStream(VilteConfigFragment.this.curFileName);
                            Elog.d(VilteConfigFragment.TAG, "Read from" + VilteConfigFragment.this.curFileName);
                            xmlPullParserNewPullParser.setInput(new InputStreamReader(fileInputStream));
                        }
                        if (VilteConfigFragment.this.getXMLContent(xmlPullParserNewPullParser, z)) {
                            message.what = 1;
                        } else {
                            try {
                                message.what = 0;
                            } catch (FileNotFoundException e2) {
                                e = e2;
                                i2 = 0;
                                message.what = i2;
                                e.printStackTrace();
                            } catch (XmlPullParserException e3) {
                                e = e3;
                                i = 0;
                                message.what = i;
                                e.printStackTrace();
                            }
                        }
                    } catch (IOException e4) {
                        message.what = 0;
                        e4.printStackTrace();
                    }
                } catch (FileNotFoundException e5) {
                    e = e5;
                    i2 = 0;
                } catch (XmlPullParserException e6) {
                    e = e6;
                    i = 0;
                }
            } else if (i3 != 1) {
                message.what = 4;
            } else {
                String string = VilteConfigFragment.this.operatorId.getText().toString();
                if (VilteConfigFragment.selectProfileList.size() == 0 || VilteConfigFragment.selectqualityList.size() == 0) {
                    message.what = 2;
                } else {
                    if (string != null) {
                        try {
                            if (!string.replace(" ", "").equals("") && VilteConfigFragment.isNumeric(string)) {
                                string = String.valueOf(Integer.parseInt(string));
                            }
                        } catch (Exception e7) {
                            e = e7;
                        }
                    }
                    try {
                        Elog.d(VilteConfigFragment.TAG, "Write  " + VilteConfigFragment.this.curFileName);
                        BufferedReader bufferedReader = VilteConfigFragment.this.curFileName.equals("vilte_media_profiles_opxx.xml") ? new BufferedReader(new InputStreamReader(VilteConfigFragment.this.getActivity().getApplicationContext().getAssets().open(VilteConfigFragment.this.curFileName))) : new BufferedReader(new FileReader(new File(VilteConfigFragment.this.curFileName)));
                        ArrayList arrayList2 = new ArrayList();
                        while (true) {
                            String line = bufferedReader.readLine();
                            str = line;
                            if (line == null) {
                                break;
                            } else {
                                arrayList2.add(str);
                            }
                            e.printStackTrace();
                            message.what = 2;
                            Elog.d(VilteConfigFragment.TAG, "Read failed:" + VilteConfigFragment.this.curFileName);
                        }
                        boolean z2 = false;
                        boolean z3 = false;
                        StringBuffer stringBuffer2 = new StringBuffer();
                        String str4 = "";
                        String str5 = "";
                        File file = new File(VilteConfigFragment.this.getInnerSDCardPath() + File.separator + VilteConfigFragment.VILTE_DEFAULT_FILE_NAME);
                        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(file, false));
                        Iterator it2 = arrayList2.iterator();
                        while (it2.hasNext()) {
                            String str6 = (String) it2.next();
                            File file2 = file;
                            str2 = string;
                            if (str6.contains("<VideoProfile name=")) {
                                try {
                                    str4 = str6.split("name")[0];
                                    arrayList = arrayList2;
                                    it = it2;
                                    str3 = str;
                                    stringBuffer = stringBuffer2;
                                } catch (Exception e8) {
                                    e = e8;
                                }
                            } else {
                                arrayList = arrayList2;
                                it = it2;
                                str3 = str;
                                String str7 = "name=\"";
                                stringBuffer = stringBuffer2;
                                if (z2 || str4.equals("")) {
                                    z2 = z2;
                                } else {
                                    for (VideoProfileModel videoProfileModel : VilteConfigFragment.selectProfileList) {
                                        bufferedWriter.write(str4 + "name=\"" + videoProfileModel.getName() + "\" profile=\"" + videoProfileModel.getProfile() + "\" level=\"" + videoProfileModel.getLevel() + "\" width=\"" + videoProfileModel.getWidth() + "\" height=\"" + videoProfileModel.getHeight() + "\" framerate=\"" + videoProfileModel.getFramerate() + "\" Iinterval=\"" + videoProfileModel.getIinterval() + "\" minBitRate=\"" + videoProfileModel.getMinBitRate() + "\" maxBitRate=\"" + videoProfileModel.getMaxBitRate() + "\"/>");
                                        bufferedWriter.write("\r\n");
                                        bufferedWriter.flush();
                                        z2 = z2;
                                        str4 = str4;
                                    }
                                    str4 = str4;
                                    z2 = true;
                                }
                                if (str6.contains("<VideoQuality name=")) {
                                    str5 = str6.split("name")[0];
                                    str4 = str4;
                                } else {
                                    if (!z3 && !str5.equals("")) {
                                        Iterator<VideoQualityModel> it3 = VilteConfigFragment.selectqualityList.iterator();
                                        while (it3.hasNext()) {
                                            VideoQualityModel next = it3.next();
                                            bufferedWriter.write(str5 + str7 + next.getName() + "\" format=\"" + next.getFormat() + "\" profile=\"" + next.getProfile() + "\" level=\"" + next.getLevel() + "\"/>");
                                            bufferedWriter.write("\r\n");
                                            bufferedWriter.flush();
                                            it3 = it3;
                                            str7 = str7;
                                        }
                                        z3 = true;
                                    }
                                    bufferedWriter.write(str6);
                                    bufferedWriter.write("\r\n");
                                    bufferedWriter.flush();
                                    str4 = str4;
                                }
                            }
                            file = file2;
                            string = str2;
                            arrayList2 = arrayList;
                            it2 = it;
                            str = str3;
                            stringBuffer2 = stringBuffer;
                        }
                        str2 = string;
                        message.what = 3;
                        Elog.d(VilteConfigFragment.TAG, "Write success:" + VilteConfigFragment.this.curFileName);
                    } catch (Exception e9) {
                        e = e9;
                    }
                }
            }
            VilteConfigFragment.this.mHandler.sendMessage(message);
        }
    }

    private void combination(ListView listView, final HorizontalScrollView horizontalScrollView, LinkedHorizontalScrollView linkedHorizontalScrollView) {
        linkedHorizontalScrollView.setMyScrollChangeListener(new LinkedHorizontalScrollView.LinkScrollChangeListener() { // from class: com.mediatek.engineermode.iotconfig.VilteConfigFragment.4
            @Override // com.mediatek.engineermode.iotconfig.LinkedHorizontalScrollView.LinkScrollChangeListener
            public void onscroll(LinkedHorizontalScrollView linkedHorizontalScrollView2, int i, int i2, int i3, int i4) {
                horizontalScrollView.scrollTo(i, i2);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean getXMLContent(XmlPullParser xmlPullParser, boolean z) throws XmlPullParserException, IOException {
        try {
            this.profileModelList.clear();
            int eventType = xmlPullParser.getEventType();
            while (eventType != 1) {
                if (eventType == 2) {
                    if ("VideoProfile".equals(xmlPullParser.getName())) {
                        this.profileModelList.add(new VideoProfileModel(xmlPullParser.getAttributeValue(null, "name"), xmlPullParser.getAttributeValue(null, "profile"), xmlPullParser.getAttributeValue(null, "level"), xmlPullParser.getAttributeValue(null, "width"), xmlPullParser.getAttributeValue(null, "height"), xmlPullParser.getAttributeValue(null, "framerate"), xmlPullParser.getAttributeValue(null, "Iinterval"), xmlPullParser.getAttributeValue(null, "minBitRate"), xmlPullParser.getAttributeValue(null, "maxBitRate"), z));
                    } else if ("VideoQuality".equals(xmlPullParser.getName())) {
                        for (VideoProfileModel videoProfileModel : this.profileModelList) {
                            if (videoProfileModel.getName().equals(xmlPullParser.getAttributeValue(null, "format")) && videoProfileModel.getProfile().equals(xmlPullParser.getAttributeValue(null, "profile")) && videoProfileModel.getLevel().equals(xmlPullParser.getAttributeValue(null, "level"))) {
                                videoProfileModel.setQuality(xmlPullParser.getAttributeValue(null, "name"));
                            }
                        }
                    }
                }
                eventType = xmlPullParser.next();
            }
            return true;
        } catch (IOException e) {
            e.printStackTrace();
            return false;
        } catch (XmlPullParserException e2) {
            e2.printStackTrace();
            return false;
        }
    }

    private void initView(View view) {
        resetVideoQualityMapping(view);
        selectProfileList = new ArrayList<>();
        this.profileModelList = new ArrayList<>();
        selectqualityList = new ArrayList<>();
        this.videoProfileContent = (LinearLayout) view.findViewById(R.id.video_profile_content);
        Button button = (Button) view.findViewById(R.id.btn_show_help);
        this.btnShowHelp = button;
        button.setOnClickListener(this.btnOnClickListener);
        this.operatorId = (EditText) view.findViewById(R.id.operator_id_input);
        Button button2 = (Button) view.findViewById(R.id.btn_profile_save);
        this.btnProfileSave = button2;
        button2.setOnClickListener(this.btnOnClickListener);
        Button button3 = (Button) view.findViewById(R.id.btn_profile_cancel);
        this.btnProfileCancel = button3;
        button3.setOnClickListener(this.btnOnClickListener);
        Button button4 = (Button) view.findViewById(R.id.btn_profile_reset);
        this.btnProfileReset = button4;
        button4.setOnClickListener(this.btnOnClickListener);
        ListView listView = (ListView) view.findViewById(R.id.video_profile_list);
        this.videoProfileListView = listView;
        listView.setAdapter((ListAdapter) this.profileAdapter);
        this.profileTitleScrollView = (HorizontalScrollView) view.findViewById(R.id.video_profile_title);
        LinkedHorizontalScrollView linkedHorizontalScrollView = (LinkedHorizontalScrollView) view.findViewById(R.id.video_profile_view);
        this.profileContentScrollView = linkedHorizontalScrollView;
        combination(this.videoProfileListView, this.profileTitleScrollView, linkedHorizontalScrollView);
        refreshVideoProfileView(true);
    }

    public static boolean isNumeric(String str) {
        return Pattern.compile("[0-9]*").matcher(str).matches();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void refreshSelectProfileList(ArrayList<VideoProfileModel> arrayList) {
        selectProfileList.clear();
        selectqualityList.clear();
        resetVideoQualityMapping();
        for (VideoProfileModel videoProfileModel : arrayList) {
            if (videoProfileModel.isSelected()) {
                selectProfileList.add(videoProfileModel);
                if (!videoProfileModel.getQuality().equals("")) {
                    selectqualityList.add(new VideoQualityModel(videoProfileModel.getQuality(), videoProfileModel.getName(), videoProfileModel.getProfile(), videoProfileModel.getLevel()));
                    Elog.d(TAG, "[refreshSelectProfileList]getQuality() key: " + videoProfileModel.getQuality() + " value: " + this.VideoQualityMapping.get(videoProfileModel.getQuality()));
                    this.VideoQualityMapping.put(videoProfileModel.getQuality(), Integer.valueOf(this.VideoQualityMapping.get(videoProfileModel.getQuality()).intValue() + 1));
                }
            }
        }
        if (checkSelectQualityList(selectqualityList)) {
            return;
        }
        selectProfileList.clear();
        selectqualityList.clear();
        resetVideoQualityMapping();
        showInfoDialog(getActivity(), getActivity().getResources().getString(R.string.vilte_quality_size_error));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void refreshVideoProfileView(boolean z) {
        if (!z) {
            this.videoProfileContent.setVisibility(8);
        } else {
            updateVideoProfileUI();
            this.videoProfileContent.setVisibility(0);
        }
    }

    public boolean checkSelectQualityList(ArrayList<VideoQualityModel> arrayList) {
        if (selectqualityList.size() != 4) {
            return false;
        }
        for (String str : this.VideoQualityMapping.keySet()) {
            if (this.VideoQualityMapping.get(str) == null || this.VideoQualityMapping.get(str).intValue() != 1) {
                return false;
            }
        }
        return true;
    }

    public boolean deleteFileFromInnerSDCard(String str) {
        File file = new File(getInnerSDCardPath() + File.separator + str);
        if (!file.isFile() || !file.exists()) {
            return false;
        }
        file.delete();
        return true;
    }

    public String getInnerSDCardPath() {
        return Environment.getExternalStorageDirectory().getAbsolutePath();
    }

    @Override // android.support.v4.app.Fragment
    public View onCreateView(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        View viewInflate = layoutInflater.inflate(R.layout.iot_vilte_config, viewGroup, false);
        initView(viewInflate);
        return viewInflate;
    }

    @Override // android.support.v4.app.Fragment
    public void onDestroy() {
        super.onDestroy();
    }

    @Override // android.support.v4.app.Fragment
    public void onResume() {
        super.onResume();
        new XmlParserThread(0).start();
    }

    public void resetVideoQualityMapping() {
        Iterator<String> it = this.VideoQualityMapping.keySet().iterator();
        while (it.hasNext()) {
            this.VideoQualityMapping.put(it.next(), 0);
        }
    }

    public void resetVideoQualityMapping(View view) {
        this.VideoQualityMapping.clear();
        this.VideoQualityMapping.put(view.getResources().getStringArray(R.array.video_quality_mode)[1], 0);
        this.VideoQualityMapping.put(view.getResources().getStringArray(R.array.video_quality_mode)[2], 0);
        this.VideoQualityMapping.put(view.getResources().getStringArray(R.array.video_quality_mode)[3], 0);
        this.VideoQualityMapping.put(view.getResources().getStringArray(R.array.video_quality_mode)[4], 0);
    }

    public void showInfoDialog(Context context, String str) {
        AlertDialog.Builder builder = new AlertDialog.Builder(context);
        builder.setTitle("Warning");
        builder.setMessage(str).setCancelable(false).setPositiveButton("OK", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.iotconfig.VilteConfigFragment.2
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                dialogInterface.cancel();
            }
        });
        builder.create().show();
    }

    public void showToast(String str) {
        Toast.makeText(getActivity(), str, 0).show();
    }

    public void updateVideoProfileUI() {
        if (this.profileAdapter == null) {
            VideoProfileAdapter videoProfileAdapter = new VideoProfileAdapter(getActivity(), this.profileModelList);
            this.profileAdapter = videoProfileAdapter;
            this.videoProfileListView.setAdapter((ListAdapter) videoProfileAdapter);
        }
        this.profileAdapter.notifyDataSetChanged();
    }
}
