package com.mediatek.engineermode.iotconfig;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.DialogInterface;
import android.text.Editable;
import android.text.TextWatcher;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.mediatek.engineermode.R;
import java.util.List;

/* JADX INFO: compiled from: XCAPConfigFragment.java */
/* JADX INFO: loaded from: classes.dex */
class XcapSettingAdapter extends ArrayAdapter<XCAPModel> {
    private final Activity context;
    private List<XCAPModel> list;
    int listPosititon;
    private View.OnClickListener onClickLinstener;

    /* JADX INFO: compiled from: XCAPConfigFragment.java */
    static class ViewHolder {
        protected Button btnSet;
        protected CheckBox checkbox;
        protected TextView text;
        protected EditText value;

        ViewHolder() {
        }
    }

    public XcapSettingAdapter(Activity activity, List<XCAPModel> list) {
        super(activity, R.layout.iot_xcap_row, list);
        this.onClickLinstener = new View.OnClickListener() { // from class: com.mediatek.engineermode.iotconfig.XcapSettingAdapter.1
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                XcapSettingAdapter.this.showConfirmDialog(view, ((Integer) view.getTag()).intValue());
            }
        };
        this.context = activity;
        this.list = list;
    }

    public List<XCAPModel> getList() {
        return this.list;
    }

    @Override // android.widget.ArrayAdapter, android.widget.Adapter
    public View getView(final int i, View view, ViewGroup viewGroup) {
        ViewHolder viewHolder;
        this.listPosititon = i;
        if (view == null) {
            view = this.context.getLayoutInflater().inflate(R.layout.iot_xcap_row, (ViewGroup) null);
            viewHolder = new ViewHolder();
            viewHolder.text = (TextView) view.findViewById(R.id.xcap_label);
            viewHolder.checkbox = (CheckBox) view.findViewById(R.id.xcap_check);
            viewHolder.value = (EditText) view.findViewById(R.id.xcap_value);
            viewHolder.btnSet = (Button) view.findViewById(R.id.set_xcap);
            viewHolder.btnSet.setOnClickListener(this.onClickLinstener);
            viewHolder.checkbox.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() { // from class: com.mediatek.engineermode.iotconfig.XcapSettingAdapter.4
                @Override // android.widget.CompoundButton.OnCheckedChangeListener
                public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
                    ((XCAPModel) XcapSettingAdapter.this.list.get(((Integer) compoundButton.getTag()).intValue())).setSelected(compoundButton.isChecked());
                }
            });
            viewHolder.value.addTextChangedListener(new TextWatcher() { // from class: com.mediatek.engineermode.iotconfig.XcapSettingAdapter.5
                @Override // android.text.TextWatcher
                public void afterTextChanged(Editable editable) {
                    ((XCAPModel) XcapSettingAdapter.this.list.get(i)).setValue(editable.toString());
                }

                @Override // android.text.TextWatcher
                public void beforeTextChanged(CharSequence charSequence, int i2, int i3, int i4) {
                }

                @Override // android.text.TextWatcher
                public void onTextChanged(CharSequence charSequence, int i2, int i3, int i4) {
                }
            });
            viewHolder.value.setImeOptions(6);
            viewHolder.value.setRawInputType(1);
            viewHolder.value.setOnTouchListener(new View.OnTouchListener() { // from class: com.mediatek.engineermode.iotconfig.XcapSettingAdapter.6
                @Override // android.view.View.OnTouchListener
                public boolean onTouch(View view2, MotionEvent motionEvent) {
                    if (view2.getId() == R.id.xcap_value) {
                        view2.getParent().requestDisallowInterceptTouchEvent(true);
                        if ((motionEvent.getAction() & 255) == 1) {
                            view2.getParent().requestDisallowInterceptTouchEvent(false);
                        }
                    }
                    return false;
                }
            });
            view.setTag(viewHolder);
            view.setTag(R.id.xcap_label, viewHolder.text);
            view.setTag(R.id.xcap_value, viewHolder.value);
            view.setTag(R.id.xcap_check, viewHolder.checkbox);
            view.setTag(R.id.set_xcap, viewHolder.btnSet);
        } else {
            viewHolder = (ViewHolder) view.getTag();
        }
        viewHolder.checkbox.setTag(Integer.valueOf(i));
        viewHolder.btnSet.setTag(Integer.valueOf(i));
        viewHolder.value.setTag(Integer.valueOf(i));
        viewHolder.text.setTag(Integer.valueOf(i));
        viewHolder.text.setText((this.list.get(i).getName() + "(" + this.list.get(i).getType() + ")").replace("(boolean)", "?"));
        LinearLayout linearLayout = (LinearLayout) view.findViewById(R.id.xcap_check_layout);
        if (this.list.get(i).getValue() == null || this.list.get(i).getValue().equals("-1")) {
            viewHolder.value.setText("");
        } else {
            viewHolder.value.setText(this.list.get(i).getValue() + "");
        }
        if (this.list.get(i).getType().equals(IotConfigConstant.BOOLEANTYPE)) {
            linearLayout.setVisibility(0);
            viewHolder.value.setVisibility(8);
            if (this.list.get(i).isConfiged()) {
                viewHolder.checkbox.setVisibility(0);
                viewHolder.btnSet.setVisibility(4);
                viewHolder.checkbox.setChecked(this.list.get(i).isSelected());
            } else {
                viewHolder.checkbox.setVisibility(4);
                viewHolder.btnSet.setVisibility(0);
            }
        } else {
            linearLayout.setVisibility(8);
            viewHolder.value.setVisibility(0);
        }
        return view;
    }

    public void refresh(List<XCAPModel> list) {
        this.list = list;
        notifyDataSetChanged();
    }

    public void showConfirmDialog(View view, final int i) {
        AlertDialog.Builder builder = new AlertDialog.Builder(this.context);
        builder.setCancelable(false).setMessage(this.context.getResources().getString(R.string.set_xcap_dialog_message)).setTitle(this.context.getResources().getString(R.string.set_xcap_dialog_title)).setPositiveButton("OK", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.iotconfig.XcapSettingAdapter.3
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i2) {
                ((XCAPModel) XcapSettingAdapter.this.list.get(i)).setConfiged(true);
                ((XCAPModel) XcapSettingAdapter.this.list.get(i)).setSelected(false);
                XcapSettingAdapter.this.notifyDataSetChanged();
            }
        }).setNegativeButton("Cancel", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.iotconfig.XcapSettingAdapter.2
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i2) {
                dialogInterface.cancel();
                ((XCAPModel) XcapSettingAdapter.this.list.get(i)).setConfiged(false);
            }
        });
        builder.create().show();
    }
}
