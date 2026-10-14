package com.mediatek.engineermode.iotconfig;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.DialogInterface;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.EditText;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.R;
import java.util.ArrayList;
import java.util.regex.Pattern;

/* JADX INFO: compiled from: VilteConfigFragment.java */
/* JADX INFO: loaded from: classes.dex */
class VideoProfileAdapter extends ArrayAdapter<VideoProfileModel> {
    private final Activity context;
    private ArrayList<VideoProfileModel> list;
    int listPosititon;

    /* JADX INFO: compiled from: VilteConfigFragment.java */
    static class ViewHolder {
        protected TextView Iinterval;
        protected CheckBox checkbox;
        protected TextView framerate;
        protected TextView height;
        protected TextView level;
        protected TextView maxBitRate;
        protected TextView minBitRate;
        protected TextView name;
        protected TextView profile;
        protected TextView quality;
        protected TextView width;

        ViewHolder() {
        }
    }

    public VideoProfileAdapter(Activity activity, ArrayList<VideoProfileModel> arrayList) {
        super(activity, R.layout.iot_video_profile_row, arrayList);
        this.context = activity;
        this.list = arrayList;
    }

    public boolean checkNumeric(String str) {
        return !str.equals("") && Pattern.compile("[0-9]*").matcher(str).matches() && Integer.parseInt(str) > 0;
    }

    public ArrayList<VideoProfileModel> getList() {
        return this.list;
    }

    @Override // android.widget.ArrayAdapter, android.widget.Adapter
    public View getView(int i, View view, ViewGroup viewGroup) {
        ViewHolder viewHolder;
        View viewInflate;
        this.listPosititon = i;
        if (view == null) {
            View.OnClickListener onClickListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.iotconfig.VideoProfileAdapter.5
                @Override // android.view.View.OnClickListener
                public void onClick(View view2) {
                    if (view2.getId() == R.id.video_quality) {
                        VideoProfileAdapter.this.showSpinnerDialog(view2);
                        return;
                    }
                    if (view2.getId() != R.id.video_profile_name && view2.getId() != R.id.video_profile_profile && view2.getId() != R.id.video_profile_level) {
                        VideoProfileAdapter.this.showDialog(view2);
                        return;
                    }
                    Toast.makeText(VideoProfileAdapter.this.context, ((Object) ((TextView) view2).getText()) + " can't be modified", 0).show();
                }
            };
            viewInflate = this.context.getLayoutInflater().inflate(R.layout.iot_video_profile_row, (ViewGroup) null);
            viewHolder = new ViewHolder();
            viewHolder.checkbox = (CheckBox) viewInflate.findViewById(R.id.video_profile_check);
            viewHolder.name = (TextView) viewInflate.findViewById(R.id.video_profile_name);
            viewHolder.quality = (TextView) viewInflate.findViewById(R.id.video_quality);
            viewHolder.profile = (TextView) viewInflate.findViewById(R.id.video_profile_profile);
            viewHolder.level = (TextView) viewInflate.findViewById(R.id.video_profile_level);
            viewHolder.Iinterval = (TextView) viewInflate.findViewById(R.id.video_profile_Iinterval);
            viewHolder.width = (TextView) viewInflate.findViewById(R.id.video_profile_width);
            viewHolder.height = (TextView) viewInflate.findViewById(R.id.video_profile_height);
            viewHolder.maxBitRate = (TextView) viewInflate.findViewById(R.id.video_profile_maxBitRate);
            viewHolder.minBitRate = (TextView) viewInflate.findViewById(R.id.video_profile_minBitRate);
            viewHolder.framerate = (TextView) viewInflate.findViewById(R.id.video_profile_framerate);
            viewInflate.setTag(viewHolder);
            viewInflate.setTag(R.id.video_profile_check, viewHolder.checkbox);
            viewInflate.setTag(R.id.video_quality, viewHolder.quality);
            viewInflate.setTag(R.id.video_profile_name, viewHolder.name);
            viewInflate.setTag(R.id.video_profile_profile, viewHolder.profile);
            viewInflate.setTag(R.id.video_profile_level, viewHolder.level);
            viewInflate.setTag(R.id.video_profile_framerate, viewHolder.framerate);
            viewInflate.setTag(R.id.video_profile_width, viewHolder.profile);
            viewInflate.setTag(R.id.video_profile_height, viewHolder.height);
            viewInflate.setTag(R.id.video_profile_Iinterval, viewHolder.Iinterval);
            viewInflate.setTag(R.id.video_profile_maxBitRate, viewHolder.maxBitRate);
            viewInflate.setTag(R.id.video_profile_minBitRate, viewHolder.minBitRate);
            viewHolder.checkbox.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() { // from class: com.mediatek.engineermode.iotconfig.VideoProfileAdapter.6
                @Override // android.widget.CompoundButton.OnCheckedChangeListener
                public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
                    ((VideoProfileModel) VideoProfileAdapter.this.list.get(((Integer) compoundButton.getTag()).intValue())).setSelected(compoundButton.isChecked());
                }
            });
            viewHolder.name.setOnClickListener(onClickListener);
            viewHolder.profile.setOnClickListener(onClickListener);
            viewHolder.level.setOnClickListener(onClickListener);
            viewHolder.quality.setOnClickListener(onClickListener);
            viewHolder.framerate.setOnClickListener(onClickListener);
            viewHolder.minBitRate.setOnClickListener(onClickListener);
            viewHolder.maxBitRate.setOnClickListener(onClickListener);
            viewHolder.height.setOnClickListener(onClickListener);
            viewHolder.width.setOnClickListener(onClickListener);
            viewHolder.Iinterval.setOnClickListener(onClickListener);
        } else {
            viewHolder = (ViewHolder) view.getTag();
            viewInflate = view;
        }
        viewHolder.checkbox.setTag(Integer.valueOf(i));
        viewHolder.quality.setTag(Integer.valueOf(i));
        viewHolder.framerate.setTag(Integer.valueOf(i));
        viewHolder.minBitRate.setTag(Integer.valueOf(i));
        viewHolder.maxBitRate.setTag(Integer.valueOf(i));
        viewHolder.height.setTag(Integer.valueOf(i));
        viewHolder.width.setTag(Integer.valueOf(i));
        viewHolder.Iinterval.setTag(Integer.valueOf(i));
        viewHolder.name.setTag(Integer.valueOf(i));
        viewHolder.profile.setTag(Integer.valueOf(i));
        viewHolder.level.setTag(Integer.valueOf(i));
        viewHolder.name.setText(this.list.get(i).getName());
        viewHolder.checkbox.setChecked(this.list.get(i).isSelected());
        viewHolder.quality.setText(this.list.get(i).getQuality());
        viewHolder.profile.setText(this.list.get(i).getProfile());
        viewHolder.level.setText(this.list.get(i).getLevel());
        viewHolder.width.setText(this.list.get(i).getWidth());
        viewHolder.height.setText(this.list.get(i).getHeight());
        viewHolder.Iinterval.setText(this.list.get(i).getIinterval());
        viewHolder.maxBitRate.setText(this.list.get(i).getMaxBitRate());
        viewHolder.minBitRate.setText(this.list.get(i).getMinBitRate());
        viewHolder.framerate.setText(this.list.get(i).getFramerate());
        return viewInflate;
    }

    public void refresh(ArrayList<VideoProfileModel> arrayList) {
        this.list = arrayList;
        notifyDataSetChanged();
    }

    public void showDialog(final View view) {
        View viewInflate = LayoutInflater.from(this.context).inflate(R.layout.iot_et_dialog, (ViewGroup) null);
        AlertDialog.Builder builder = new AlertDialog.Builder(this.context);
        builder.setView(viewInflate);
        final EditText editText = (EditText) viewInflate.findViewById(R.id.et_dialog_input);
        editText.setText(((TextView) view).getText());
        builder.setCancelable(false).setPositiveButton("OK", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.iotconfig.VideoProfileAdapter.2
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                boolean z = true;
                String strReplaceFirst = editText.getText().toString().trim().replaceFirst("^0*", "");
                if (VideoProfileAdapter.this.checkNumeric(strReplaceFirst)) {
                    switch (view.getId()) {
                        case R.id.video_profile_Iinterval /* 2131101545 */:
                            ((VideoProfileModel) VideoProfileAdapter.this.list.get(((Integer) view.getTag()).intValue())).setIinterval(strReplaceFirst);
                            break;
                        case R.id.video_profile_framerate /* 2131101548 */:
                            ((VideoProfileModel) VideoProfileAdapter.this.list.get(((Integer) view.getTag()).intValue())).setFramerate(strReplaceFirst);
                            break;
                        case R.id.video_profile_height /* 2131101549 */:
                            ((VideoProfileModel) VideoProfileAdapter.this.list.get(((Integer) view.getTag()).intValue())).setHeight(strReplaceFirst);
                            break;
                        case R.id.video_profile_maxBitRate /* 2131101552 */:
                            if (Integer.valueOf(strReplaceFirst).intValue() >= Integer.valueOf(((VideoProfileModel) VideoProfileAdapter.this.list.get(((Integer) view.getTag()).intValue())).getMinBitRate()).intValue()) {
                                ((VideoProfileModel) VideoProfileAdapter.this.list.get(((Integer) view.getTag()).intValue())).setMaxBitRate(strReplaceFirst);
                            } else {
                                z = false;
                            }
                            break;
                        case R.id.video_profile_minBitRate /* 2131101553 */:
                            if (Integer.valueOf(strReplaceFirst).intValue() <= Integer.valueOf(((VideoProfileModel) VideoProfileAdapter.this.list.get(((Integer) view.getTag()).intValue())).getMaxBitRate()).intValue()) {
                                ((VideoProfileModel) VideoProfileAdapter.this.list.get(((Integer) view.getTag()).intValue())).setMinBitRate(strReplaceFirst);
                            } else {
                                z = false;
                            }
                            break;
                        case R.id.video_profile_width /* 2131101558 */:
                            ((VideoProfileModel) VideoProfileAdapter.this.list.get(((Integer) view.getTag()).intValue())).setWidth(strReplaceFirst);
                            break;
                    }
                } else {
                    z = false;
                }
                if (z) {
                    ((TextView) view).setText(strReplaceFirst);
                } else {
                    Toast.makeText(VideoProfileAdapter.this.context, VideoProfileAdapter.this.context.getResources().getString(R.string.vilte_input_illegal), 0).show();
                }
            }
        }).setNegativeButton("Cancel", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.iotconfig.VideoProfileAdapter.1
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                dialogInterface.cancel();
            }
        });
        builder.create().show();
    }

    public void showSpinnerDialog(final View view) {
        View viewInflate = LayoutInflater.from(this.context).inflate(R.layout.iot_spinner_dialog, (ViewGroup) null);
        AlertDialog.Builder builder = new AlertDialog.Builder(this.context);
        builder.setView(viewInflate);
        final Spinner spinner = (Spinner) viewInflate.findViewById(R.id.spinner_dialog_input);
        ArrayAdapter arrayAdapter = new ArrayAdapter(this.context, android.R.layout.simple_spinner_item, this.context.getResources().getStringArray(R.array.video_quality_mode));
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        spinner.setAdapter((SpinnerAdapter) arrayAdapter);
        builder.setCancelable(false).setPositiveButton("OK", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.iotconfig.VideoProfileAdapter.4
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                if (spinner.getSelectedItem() != null) {
                    String string = spinner.getSelectedItem().toString();
                    if (view.getId() != R.id.video_quality) {
                        return;
                    }
                    int iIntValue = ((Integer) view.getTag()).intValue();
                    if (!((VideoProfileModel) VideoProfileAdapter.this.list.get(iIntValue)).isSelected() && !string.equals("")) {
                        Toast.makeText(VideoProfileAdapter.this.context, VideoProfileAdapter.this.context.getResources().getString(R.string.vilte_quality_false), 0).show();
                    } else {
                        ((TextView) view).setText(string);
                        ((VideoProfileModel) VideoProfileAdapter.this.list.get(iIntValue)).setQuality(string);
                    }
                }
            }
        }).setNegativeButton("Cancel", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.iotconfig.VideoProfileAdapter.3
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                dialogInterface.cancel();
            }
        });
        builder.create().show();
    }
}
