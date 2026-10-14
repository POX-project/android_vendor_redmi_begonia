package com.mediatek.lbs.em2.ui;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.ImageView;
import android.widget.TextView;
import java.io.File;
import java.util.GregorianCalendar;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class MyAdapter extends BaseAdapter {
    private List<String> items;
    private Bitmap mIcon1;
    private Bitmap mIcon2;
    private Bitmap mIcon3;
    private Bitmap mIcon4;
    private LayoutInflater mInflater;
    private List<String> paths;

    private class ViewHolder {
        ImageView icon;
        TextView text;
        TextView text2;

        private ViewHolder(MyAdapter myAdapter) {
        }
    }

    public MyAdapter(Context context, List<String> list, List<String> list2) {
        this.mInflater = LayoutInflater.from(context);
        this.items = list;
        this.paths = list2;
        this.mIcon1 = BitmapFactory.decodeResource(context.getResources(), R.drawable.home);
        this.mIcon2 = BitmapFactory.decodeResource(context.getResources(), R.drawable.back2);
        this.mIcon3 = BitmapFactory.decodeResource(context.getResources(), R.drawable.folder2);
        this.mIcon4 = BitmapFactory.decodeResource(context.getResources(), R.drawable.doc2);
    }

    @Override // android.widget.Adapter
    public int getCount() {
        return this.items.size();
    }

    @Override // android.widget.Adapter
    public Object getItem(int i) {
        return this.items.get(i);
    }

    @Override // android.widget.Adapter
    public long getItemId(int i) {
        return i;
    }

    @Override // android.widget.Adapter
    public View getView(int i, View view, ViewGroup viewGroup) {
        ViewHolder viewHolder;
        String str;
        if (view == null) {
            view = this.mInflater.inflate(R.layout.file_row, (ViewGroup) null);
            viewHolder = new ViewHolder();
            viewHolder.text = (TextView) view.findViewById(R.id.TextView_fileRow);
            viewHolder.text2 = (TextView) view.findViewById(R.id.TextView_fileRow2);
            viewHolder.icon = (ImageView) view.findViewById(R.id.ImageView_fileRow);
            view.setTag(viewHolder);
        } else {
            viewHolder = (ViewHolder) view.getTag();
        }
        File file = new File(this.paths.get(i).toString());
        if (this.items.get(i).toString().equals("Back to /")) {
            viewHolder.text.setText("Back to /");
            viewHolder.text2.setText("");
            viewHolder.icon.setImageBitmap(this.mIcon1);
        } else if (this.items.get(i).toString().equals("Back to ../")) {
            viewHolder.text.setText("Back to ../");
            viewHolder.text2.setText("");
            viewHolder.icon.setImageBitmap(this.mIcon2);
        } else {
            GregorianCalendar gregorianCalendar = new GregorianCalendar();
            gregorianCalendar.setTimeInMillis(file.lastModified());
            viewHolder.text.setText(file.getName());
            TextView textView = viewHolder.text2;
            StringBuilder sb = new StringBuilder();
            sb.append("[");
            sb.append(file.canRead() ? "R" : "");
            sb.append(file.canWrite() ? "W" : "");
            sb.append("] ");
            if (file.isFile()) {
                str = file.length() + "bytes ";
            } else {
                str = " ";
            }
            sb.append(str);
            sb.append(gregorianCalendar.get(1));
            sb.append("/");
            sb.append(gregorianCalendar.get(2));
            sb.append("/");
            sb.append(gregorianCalendar.get(5));
            sb.append(" ");
            sb.append(gregorianCalendar.get(11));
            sb.append(":");
            sb.append(gregorianCalendar.get(12));
            sb.append(":");
            sb.append(gregorianCalendar.get(13));
            textView.setText(sb.toString());
            if (file.canWrite()) {
                viewHolder.text2.setTextColor(-16711936);
            } else if (file.canRead()) {
                viewHolder.text2.setTextColor(-256);
            } else {
                viewHolder.text2.setTextColor(-65536);
            }
            if (file.isDirectory()) {
                viewHolder.icon.setImageBitmap(this.mIcon3);
            } else {
                viewHolder.icon.setImageBitmap(this.mIcon4);
            }
        }
        return view;
    }
}
