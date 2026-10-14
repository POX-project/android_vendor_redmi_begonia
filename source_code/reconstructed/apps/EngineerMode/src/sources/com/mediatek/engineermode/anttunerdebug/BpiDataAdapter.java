package com.mediatek.engineermode.anttunerdebug;

import android.app.Activity;
import android.text.Editable;
import android.text.TextWatcher;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.EditText;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import com.mediatek.engineermode.R;
import java.util.List;

/* JADX INFO: compiled from: AntTunerDebugBPI.java */
/* JADX INFO: loaded from: classes2.dex */
class BpiDataAdapter extends ArrayAdapter<BpiBinaryData> {
    private final Activity context;
    private List<BpiBinaryData> list;

    /* JADX INFO: compiled from: AntTunerDebugBPI.java */
    class EditTextWatcher implements TextWatcher {
        protected ViewHolder viewHolder;

        EditTextWatcher(ViewHolder viewHolder) {
            this.viewHolder = viewHolder;
        }

        @Override // android.text.TextWatcher
        public void afterTextChanged(Editable editable) {
            ((BpiBinaryData) BpiDataAdapter.this.list.get(((Integer) this.viewHolder.value.getTag()).intValue())).setValue(editable.toString());
        }

        @Override // android.text.TextWatcher
        public void beforeTextChanged(CharSequence charSequence, int i, int i2, int i3) {
        }

        @Override // android.text.TextWatcher
        public void onTextChanged(CharSequence charSequence, int i, int i2, int i3) {
        }
    }

    /* JADX INFO: compiled from: AntTunerDebugBPI.java */
    class ItemSelectedListener implements AdapterView.OnItemSelectedListener {
        protected ViewHolder viewHolder;

        ItemSelectedListener(ViewHolder viewHolder) {
            this.viewHolder = viewHolder;
        }

        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
            ((BpiBinaryData) BpiDataAdapter.this.list.get(((Integer) this.viewHolder.type.getTag()).intValue())).setSelected(i != 0);
        }

        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onNothingSelected(AdapterView<?> adapterView) {
        }
    }

    /* JADX INFO: compiled from: AntTunerDebugBPI.java */
    static class ViewHolder {
        protected TextView text;
        protected Spinner type;
        protected EditText value;

        ViewHolder() {
        }
    }

    public BpiDataAdapter(Activity activity, List<BpiBinaryData> list) {
        super(activity, R.layout.ant_tuner_debug_bpi_row, list);
        this.context = activity;
        this.list = list;
    }

    public List<BpiBinaryData> getList() {
        return this.list;
    }

    @Override // android.widget.ArrayAdapter, android.widget.Adapter
    public View getView(int i, View view, ViewGroup viewGroup) {
        ViewHolder viewHolder;
        if (view == null) {
            view = this.context.getLayoutInflater().inflate(R.layout.ant_tuner_debug_bpi_row, (ViewGroup) null);
            viewHolder = new ViewHolder();
            viewHolder.text = (TextView) view.findViewById(R.id.bpi_binary_label);
            viewHolder.value = (EditText) view.findViewById(R.id.bpi_binary_value);
            viewHolder.type = (Spinner) view.findViewById(R.id.bpi_binary_type);
            ArrayAdapter arrayAdapter = new ArrayAdapter(this.context, android.R.layout.simple_spinner_item, new String[]{"Low", "Hign"});
            arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
            viewHolder.type.setAdapter((SpinnerAdapter) arrayAdapter);
            viewHolder.value.setTag(Integer.valueOf(i));
            viewHolder.type.setTag(Integer.valueOf(i));
            viewHolder.value.addTextChangedListener(new EditTextWatcher(viewHolder));
            viewHolder.type.setOnItemSelectedListener(new ItemSelectedListener(viewHolder));
            view.setTag(viewHolder);
            view.setTag(R.id.bpi_binary_label, viewHolder.text);
            view.setTag(R.id.bpi_binary_value, viewHolder.value);
            view.setTag(R.id.bpi_binary_type, viewHolder.type);
        } else {
            viewHolder = (ViewHolder) view.getTag();
            viewHolder.value.setTag(Integer.valueOf(i));
            viewHolder.type.setTag(Integer.valueOf(i));
        }
        viewHolder.text.setText(this.list.get(i) != null ? this.list.get(i).getName() : "");
        viewHolder.value.setText(this.list.get(i) != null ? this.list.get(i).getValue() : "");
        viewHolder.type.setSelection((this.list.get(i) == null || !this.list.get(i).isSelected()) ? 0 : 1);
        return view;
    }

    public void refresh(List<BpiBinaryData> list) {
        this.list = list;
        notifyDataSetChanged();
    }
}
