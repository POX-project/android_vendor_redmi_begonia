package com.mediatek.engineermode.vilte;

import android.app.Activity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Spinner;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes3.dex */
public class VilteMenuCommon extends Activity implements View.OnClickListener {
    private Button mButtonDisableDebugInfoDisplay;
    private Button mButtonDisableDownGrade;
    private Button mButtonDisableSinkBitstream;
    private Button mButtonDisableSourceBitstream;
    private Button mButtonDisabletAudioOutput;
    private Button mButtonEnableCamera;
    private Button mButtonEnableDebugInfoDisplay;
    private Button mButtonEnableDownGrade;
    private Button mButtonEnableSinkBitstream;
    private Button mButtonEnableSourceBitstream;
    private Button mButtonEnabletAudioOutput;
    private Button mButtonSetBitRate;
    private Button mButtonSetBitrateRatio;
    private Button mButtonSetFps;
    private Button mButtonSetIperiod;
    private Button mButtonSetLevel;
    private Button mButtonSetProfile;
    private Button mButtonVformat;
    private Button mButtonVheight;
    private Button mButtonVwidth;
    private EditText mEdittextBitRate;
    private EditText mEdittextBitrateRatio;
    private EditText mEdittextIperiod;
    private EditText mEdittextVheight;
    private EditText mEdittextVwidth;
    private Spinner mSpinner;
    private Spinner mSpinnerCamera;
    private Spinner mSpinnerLevel;
    private Spinner mSpinnerProfile;
    private Spinner mSpinnerVformat;
    private TextView mTextviewBitrate;
    private TextView mTextviewBitrateRatio;
    private TextView mTextviewCamera;
    private TextView mTextviewDebugInfoDisplay;
    private TextView mTextviewDownGrade;
    private TextView mTextviewIPeriod;
    private TextView mTextviewLevel;
    private TextView mTextviewProfile;
    private TextView mTextviewVformat;
    private TextView mTextviewVheight;
    private TextView mTextviewVwidth;
    private TextView mVilteAudioOutput;
    private TextView mVilteSinkBitstream;
    private TextView mVilteSourceBitstream;
    private TextView mVilteVideoFps;
    private final String TAG = "Vilte/MenuCommon";
    private final String PROP_VILTE_VIDEO_FPS = "persist.vendor.vt.vfps";
    private final String PROP_VILTE_SOURCE_BITSTREAM = "persist.vendor.vt.dump_source";
    private final String PROP_VILTE_SINK_BITSTREAM = "persist.vendor.vt.dump_sink";
    private final String PROP_VILTE_VIDEO_LEVEL = "persist.vendor.vt.vlevel";
    private final String PROP_VILTE_VIDEO_PROFILE = "persist.vendor.vt.vprofile";
    private final String PROP_VILTE_DEBUG_INFO_DISPLAY = "persist.vendor.vt.RTPInfo";
    private final String PROP_VILTE_DOWN_GRADE = "persist.vendor.vt.downgrade";
    private final String PROP_VILTE_VIDEO_LEVEL_BIT_RATE = "persist.vendor.vt.vbitrate";
    private final String PROP_VILTE_VIDEO_VENC_BITRATE_RATIO = "persist.vendor.vt.bitrate_ratio";
    private final String PROP_VILTE_VIDEO_IDR_PERIOD = "persist.vendor.vt.viperiod";
    private final String PROP_VILTE_CAMERA = "persist.vendor.vt.camera";
    private final String PROP_VILTE_VFORMAT = "persist.vendor.vt.vformat";
    private final String PROP_VILTE_VWIDTH = "persist.vendor.vt.vwidth";
    private final String PROP_VILTE_VHEIGHT = "persist.vendor.vt.vheight";
    private final String PROPERTY_VIDEOCALL_AUDIO_OUTPUT = "persist.radio.call.audio.output";
    private final String[] PROFILE_VALUES = {"0", "1", "4", "16"};
    private final String[] PROFILE_LABLE = {"Default", "Baseline 1", "", "", "Main 4", "", "", "", "", "", "", "", "", "", "", "", "High 16"};

    private void queryCurrentValue() {
        String strSystemPropertyGet = EmUtils.systemPropertyGet("persist.vendor.vt.vfps", "0");
        String strSystemPropertyGet2 = EmUtils.systemPropertyGet("persist.vendor.vt.vlevel", "0");
        String strSystemPropertyGet3 = EmUtils.systemPropertyGet("persist.vendor.vt.vprofile", "0");
        String strSystemPropertyGet4 = EmUtils.systemPropertyGet("persist.vendor.vt.vbitrate", "");
        String strSystemPropertyGet5 = EmUtils.systemPropertyGet("persist.vendor.vt.bitrate_ratio", "");
        String strSystemPropertyGet6 = EmUtils.systemPropertyGet("persist.vendor.vt.viperiod", "");
        String strSystemPropertyGet7 = EmUtils.systemPropertyGet("persist.vendor.vt.dump_source", "");
        String strSystemPropertyGet8 = EmUtils.systemPropertyGet("persist.vendor.vt.dump_sink", "");
        String strSystemPropertyGet9 = EmUtils.systemPropertyGet("persist.vendor.vt.RTPInfo", "");
        String strSystemPropertyGet10 = EmUtils.systemPropertyGet("persist.vendor.vt.downgrade", "");
        String strSystemPropertyGet11 = EmUtils.systemPropertyGet("persist.vendor.vt.camera", "");
        String strSystemPropertyGet12 = EmUtils.systemPropertyGet("persist.vendor.vt.vformat", "0");
        String strSystemPropertyGet13 = EmUtils.systemPropertyGet("persist.vendor.vt.vwidth", "");
        String strSystemPropertyGet14 = EmUtils.systemPropertyGet("persist.vendor.vt.vheight", "");
        String strSystemPropertyGet15 = EmUtils.systemPropertyGet("persist.radio.call.audio.output", "0");
        this.mVilteVideoFps.setText("persist.vendor.vt.vfps = " + strSystemPropertyGet);
        this.mVilteSourceBitstream.setText("persist.vendor.vt.dump_source = " + strSystemPropertyGet7);
        this.mVilteSinkBitstream.setText("persist.vendor.vt.dump_sink = " + strSystemPropertyGet8);
        this.mTextviewLevel.setText("persist.vendor.vt.vlevel = " + strSystemPropertyGet2);
        this.mTextviewProfile.setText("persist.vendor.vt.vprofile = " + strSystemPropertyGet3);
        this.mTextviewBitrate.setText("persist.vendor.vt.vbitrate = " + strSystemPropertyGet4);
        this.mTextviewBitrateRatio.setText("persist.vendor.vt.bitrate_ratio = " + strSystemPropertyGet5);
        this.mTextviewIPeriod.setText("persist.vendor.vt.viperiod = " + strSystemPropertyGet6);
        for (int i = 0; i < this.mSpinner.getCount(); i++) {
            if (this.mSpinner.getItemAtPosition(i).toString().equals(strSystemPropertyGet)) {
                this.mSpinner.setSelection(i);
                break;
            }
        }
        String str = this.PROFILE_LABLE[Integer.valueOf(strSystemPropertyGet3).intValue()];
        for (int i2 = 0; i2 < this.mSpinnerProfile.getCount(); i2++) {
            if (this.mSpinnerProfile.getItemAtPosition(i2).toString().equals(str)) {
                this.mSpinnerProfile.setSelection(i2);
                break;
            }
        }
        this.mSpinnerLevel.setSelection(Integer.parseInt(strSystemPropertyGet2));
        this.mSpinnerVformat.setSelection(Integer.parseInt(strSystemPropertyGet12));
        for (int i3 = 0; i3 < this.mSpinnerCamera.getCount(); i3++) {
            if (this.mSpinnerCamera.getItemAtPosition(i3).toString().equals(strSystemPropertyGet11)) {
                this.mSpinnerCamera.setSelection(i3);
                break;
            }
        }
        this.mEdittextBitRate.setText(strSystemPropertyGet4);
        this.mEdittextBitrateRatio.setText(strSystemPropertyGet5);
        this.mEdittextIperiod.setText(strSystemPropertyGet6);
        this.mEdittextVwidth.setText(strSystemPropertyGet13);
        this.mEdittextVheight.setText(strSystemPropertyGet14);
        this.mTextviewDebugInfoDisplay.setText("persist.vendor.vt.RTPInfo = " + strSystemPropertyGet9);
        this.mTextviewDownGrade.setText("persist.vendor.vt.downgrade = " + strSystemPropertyGet10);
        this.mTextviewCamera.setText("persist.vendor.vt.camera = " + strSystemPropertyGet11);
        this.mTextviewVformat.setText("persist.vendor.vt.vformat = " + strSystemPropertyGet12);
        this.mTextviewVwidth.setText("persist.vendor.vt.vwidth = " + strSystemPropertyGet13);
        this.mTextviewVheight.setText("persist.vendor.vt.vheight = " + strSystemPropertyGet14);
        this.mVilteAudioOutput.setText("persist.radio.call.audio.output = " + strSystemPropertyGet15);
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view == this.mButtonSetFps) {
            String string = this.mSpinner.getSelectedItem().toString();
            Elog.d("Vilte/MenuCommon", "Set persist.vendor.vt.vfps = " + string);
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.vfps", string);
            } catch (Exception e) {
                e.printStackTrace();
                Elog.e("Vilte/MenuCommon", "set property failed ...");
            }
        } else if (view == this.mButtonEnableSourceBitstream) {
            Elog.d("Vilte/MenuCommon", "Set persist.vendor.vt.dump_source = 1");
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.dump_source", "1");
            } catch (Exception e2) {
                e2.printStackTrace();
                Elog.e("Vilte/MenuCommon", "set property failed ...");
            }
        } else if (view == this.mButtonDisableSourceBitstream) {
            Elog.d("Vilte/MenuCommon", "Set persist.vendor.vt.dump_source = 0");
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.dump_source", "0");
            } catch (Exception e3) {
                e3.printStackTrace();
                Elog.e("Vilte/MenuCommon", "set property failed ...");
            }
        } else if (view == this.mButtonEnableSinkBitstream) {
            Elog.d("Vilte/MenuCommon", "Set persist.vendor.vt.dump_sink = 1");
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.dump_sink", "1");
            } catch (Exception e4) {
                e4.printStackTrace();
                Elog.e("Vilte/MenuCommon", "set property failed ...");
            }
        } else if (view == this.mButtonDisableSinkBitstream) {
            Elog.d("Vilte/MenuCommon", "Set persist.vendor.vt.dump_sink = 0");
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.dump_sink", "0");
            } catch (Exception e5) {
                e5.printStackTrace();
                Elog.e("Vilte/MenuCommon", "set property failed ...");
            }
        } else if (view == this.mButtonSetLevel) {
            String strValueOf = String.valueOf(this.mSpinnerLevel.getSelectedItemPosition());
            Elog.d("Vilte/MenuCommon", "Set persist.vendor.vt.vlevel = " + strValueOf);
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.vlevel", strValueOf);
            } catch (Exception e6) {
                e6.printStackTrace();
                Elog.e("Vilte/MenuCommon", "set property failed ...");
            }
        } else if (view == this.mButtonSetBitRate) {
            Elog.d("Vilte/MenuCommon", "Set persist.vendor.vt.vbitrate = " + this.mEdittextBitRate.getText().toString());
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.vbitrate", this.mEdittextBitRate.getText().toString());
            } catch (Exception e7) {
                e7.printStackTrace();
                Elog.e("Vilte/MenuCommon", "set property failed ...");
            }
        } else if (view == this.mButtonSetBitrateRatio) {
            Elog.d("Vilte/MenuCommon", "Set persist.vendor.vt.bitrate_ratio = " + this.mEdittextBitrateRatio.getText().toString());
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.bitrate_ratio", this.mEdittextBitrateRatio.getText().toString());
            } catch (Exception e8) {
                e8.printStackTrace();
                Elog.e("Vilte/MenuCommon", "set property failed ...");
            }
        } else if (view == this.mButtonSetIperiod) {
            Elog.d("Vilte/MenuCommon", "Set persist.vendor.vt.viperiod = " + this.mEdittextIperiod.getText().toString());
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.viperiod", this.mEdittextIperiod.getText().toString());
            } catch (Exception e9) {
                e9.printStackTrace();
                Elog.e("Vilte/MenuCommon", "set property failed ...");
            }
        } else if (view == this.mButtonSetProfile) {
            String str = this.PROFILE_VALUES[this.mSpinnerProfile.getSelectedItemPosition()];
            Elog.d("Vilte/MenuCommon", "Set persist.vendor.vt.vprofile = " + str);
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.vprofile", str);
            } catch (Exception e10) {
                e10.printStackTrace();
                Elog.e("Vilte/MenuCommon", "set property failed ...");
            }
        } else if (view == this.mButtonEnableDebugInfoDisplay) {
            Elog.d("Vilte/MenuCommon", "Set persist.vendor.vt.RTPInfo = 1");
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.RTPInfo", "1");
            } catch (Exception e11) {
                e11.printStackTrace();
                Elog.e("Vilte/MenuCommon", "set property failed ...");
            }
        } else if (view == this.mButtonDisableDebugInfoDisplay) {
            Elog.d("Vilte/MenuCommon", "Set persist.vendor.vt.RTPInfo = 0");
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.RTPInfo", "0");
            } catch (Exception e12) {
                e12.printStackTrace();
                Elog.e("Vilte/MenuCommon", "set property failed ...");
            }
        } else if (view == this.mButtonEnableDownGrade) {
            Elog.d("Vilte/MenuCommon", "Set persist.vendor.vt.downgrade = 1");
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.downgrade", "1");
            } catch (Exception e13) {
                e13.printStackTrace();
                Elog.e("Vilte/MenuCommon", "set property failed ...");
            }
        } else if (view == this.mButtonDisableDownGrade) {
            Elog.d("Vilte/MenuCommon", "Set persist.vendor.vt.downgrade = 0");
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.downgrade", "0");
            } catch (Exception e14) {
                e14.printStackTrace();
                Elog.e("Vilte/MenuCommon", "set property failed ...");
            }
        } else if (view == this.mButtonEnableCamera) {
            Elog.d("Vilte/MenuCommon", "Set persist.vendor.vt.camera" + this.mSpinnerCamera.getSelectedItem().toString());
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.camera", this.mSpinnerCamera.getSelectedItem().toString());
            } catch (Exception e15) {
                e15.printStackTrace();
                Elog.e("Vilte/MenuCommon", "set property failed ...");
            }
        } else if (view == this.mButtonVformat) {
            String strValueOf2 = String.valueOf(this.mSpinnerVformat.getSelectedItemPosition());
            Elog.d("Vilte/MenuCommon", "Set persist.vendor.vt.vformat" + strValueOf2);
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.vformat", strValueOf2);
            } catch (Exception e16) {
                e16.printStackTrace();
                Elog.e("Vilte/MenuCommon", "set property failed ...");
            }
        } else if (view == this.mButtonVwidth) {
            Elog.d("Vilte/MenuCommon", "Set persist.vendor.vt.vwidth" + this.mEdittextVwidth.getText().toString());
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.vwidth", this.mEdittextVwidth.getText().toString());
            } catch (Exception e17) {
                e17.printStackTrace();
                Elog.e("Vilte/MenuCommon", "set property failed ...");
            }
        } else if (view == this.mButtonVheight) {
            Elog.d("Vilte/MenuCommon", "Set persist.vendor.vt.vheight" + this.mEdittextVheight.getText().toString());
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.vheight", this.mEdittextVheight.getText().toString());
            } catch (Exception e18) {
                e18.printStackTrace();
                Elog.e("Vilte/MenuCommon", "set property failed ...");
            }
        } else if (view == this.mButtonEnabletAudioOutput) {
            Elog.d("Vilte/MenuCommon", "Set persist.radio.call.audio.output = 0");
            EmUtils.systemPropertySet("persist.radio.call.audio.output", "0");
        } else if (view == this.mButtonDisabletAudioOutput) {
            Elog.d("Vilte/MenuCommon", "Set persist.radio.call.audio.output = 1");
            EmUtils.systemPropertySet("persist.radio.call.audio.output", "1");
        }
        queryCurrentValue();
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.vilte_menu_common);
        Elog.d("Vilte/MenuCommon", "onCreate()");
        this.mVilteVideoFps = (TextView) findViewById(R.id.vilte_video_fps_status);
        this.mVilteSourceBitstream = (TextView) findViewById(R.id.vilte_source_bitstream_status);
        this.mVilteSinkBitstream = (TextView) findViewById(R.id.vilte_sink_bitstream_status);
        this.mTextviewLevel = (TextView) findViewById(R.id.vilte_video_level_status);
        this.mTextviewProfile = (TextView) findViewById(R.id.vilte_video_profile_status);
        this.mTextviewBitrate = (TextView) findViewById(R.id.vilte_video_bitrate_status);
        this.mTextviewBitrateRatio = (TextView) findViewById(R.id.vilte_video_bitrate_ratio_status);
        this.mTextviewIPeriod = (TextView) findViewById(R.id.vilte_video_iperiod_status);
        this.mTextviewDebugInfoDisplay = (TextView) findViewById(R.id.vilte_debug_info_display_status);
        this.mTextviewDownGrade = (TextView) findViewById(R.id.vilte_down_grade_status);
        this.mTextviewCamera = (TextView) findViewById(R.id.vilte_camera_status);
        this.mTextviewVformat = (TextView) findViewById(R.id.vilte_video_format);
        this.mTextviewVwidth = (TextView) findViewById(R.id.vilte_video_width);
        this.mTextviewVheight = (TextView) findViewById(R.id.vilte_video_height);
        this.mSpinner = (Spinner) findViewById(R.id.vilte_video_fps_values);
        this.mSpinnerLevel = (Spinner) findViewById(R.id.vilte_video_level_values);
        this.mSpinnerProfile = (Spinner) findViewById(R.id.vilte_video_profile_values);
        this.mSpinnerCamera = (Spinner) findViewById(R.id.vilte_camera_values);
        this.mSpinnerVformat = (Spinner) findViewById(R.id.vilte_video_format_values);
        this.mEdittextBitRate = (EditText) findViewById(R.id.vilte_video_level_bit_rate_values);
        this.mEdittextBitrateRatio = (EditText) findViewById(R.id.vilte_video_bitrate_ratio_values);
        this.mEdittextIperiod = (EditText) findViewById(R.id.vilte_video_idr_period_values);
        this.mEdittextVwidth = (EditText) findViewById(R.id.vilte_video_width_values);
        this.mEdittextVheight = (EditText) findViewById(R.id.vilte_video_height_values);
        this.mVilteAudioOutput = (TextView) findViewById(R.id.vilte_audio_output_status);
        this.mButtonSetFps = (Button) findViewById(R.id.vilte_video_fps_set);
        this.mButtonSetLevel = (Button) findViewById(R.id.vilte_video_level_set);
        this.mButtonSetProfile = (Button) findViewById(R.id.vilte_video_profile_set);
        this.mButtonSetBitRate = (Button) findViewById(R.id.vilte_video_level_bit_rate_set);
        this.mButtonSetBitrateRatio = (Button) findViewById(R.id.vilte_video_venc_bitrate_ratio_set);
        this.mButtonSetIperiod = (Button) findViewById(R.id.vilte_video_idr_period_set);
        this.mButtonEnableSourceBitstream = (Button) findViewById(R.id.vilte_source_bitstream_enable);
        this.mButtonDisableSourceBitstream = (Button) findViewById(R.id.vilte_source_bitstream_disable);
        this.mButtonEnableSinkBitstream = (Button) findViewById(R.id.vilte_sink_bitstream_enable);
        this.mButtonDisableSinkBitstream = (Button) findViewById(R.id.vilte_sink_bitstream_disable);
        this.mButtonEnableDebugInfoDisplay = (Button) findViewById(R.id.vilte_debug_info_dispaly_enable);
        this.mButtonDisableDebugInfoDisplay = (Button) findViewById(R.id.vilte_debug_info_dispaly_disable);
        this.mButtonEnableDownGrade = (Button) findViewById(R.id.vilte_downGrade_enable);
        this.mButtonEnableCamera = (Button) findViewById(R.id.vilte_camera_enable);
        this.mButtonDisableDownGrade = (Button) findViewById(R.id.vilte_downGrade_disable);
        this.mButtonVformat = (Button) findViewById(R.id.vilte_video_format_set);
        this.mButtonVwidth = (Button) findViewById(R.id.vilte_video_width_set);
        this.mButtonVheight = (Button) findViewById(R.id.vilte_video_height_set);
        this.mButtonEnabletAudioOutput = (Button) findViewById(R.id.vilte_audio_output_enable);
        this.mButtonDisabletAudioOutput = (Button) findViewById(R.id.vilte_audio_output_disable);
        this.mButtonSetFps.setOnClickListener(this);
        this.mButtonEnableSourceBitstream.setOnClickListener(this);
        this.mButtonDisableSourceBitstream.setOnClickListener(this);
        this.mButtonEnableSinkBitstream.setOnClickListener(this);
        this.mButtonDisableSinkBitstream.setOnClickListener(this);
        this.mButtonSetLevel.setOnClickListener(this);
        this.mButtonSetProfile.setOnClickListener(this);
        this.mButtonSetBitRate.setOnClickListener(this);
        this.mButtonSetBitrateRatio.setOnClickListener(this);
        this.mButtonSetIperiod.setOnClickListener(this);
        this.mButtonEnableDebugInfoDisplay.setOnClickListener(this);
        this.mButtonDisableDebugInfoDisplay.setOnClickListener(this);
        this.mButtonEnableDownGrade.setOnClickListener(this);
        this.mButtonDisableDownGrade.setOnClickListener(this);
        this.mButtonEnableCamera.setOnClickListener(this);
        this.mButtonVformat.setOnClickListener(this);
        this.mButtonVwidth.setOnClickListener(this);
        this.mButtonVheight.setOnClickListener(this);
        this.mButtonEnabletAudioOutput.setOnClickListener(this);
        this.mButtonDisabletAudioOutput.setOnClickListener(this);
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        Elog.d("Vilte/MenuCommon", "onResume()");
        queryCurrentValue();
    }
}
