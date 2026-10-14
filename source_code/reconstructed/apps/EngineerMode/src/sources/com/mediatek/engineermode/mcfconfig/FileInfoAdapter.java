package com.mediatek.engineermode.mcfconfig;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.ImageView;
import android.widget.TextView;
import com.mediatek.engineermode.R;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class FileInfoAdapter extends BaseAdapter {
    private static final float DEFAULT_ICON_ALPHA = 1.0f;
    private static final float HIDE_ICON_ALPHA = 0.3f;
    private static final String TAG = "McfConfig/FileInfoAdapter";
    private Bitmap icon = null;
    private final List<FileInfo> mFileInfoList;
    private final LayoutInflater mInflater;
    private final Resources mResources;

    static class FileViewHolder {
        protected ImageView mIcon;
        protected TextView mName;
        protected TextView mSize;

        public FileViewHolder(TextView textView, TextView textView2, ImageView imageView) {
            this.mName = textView;
            this.mSize = textView2;
            this.mIcon = imageView;
        }
    }

    public FileInfoAdapter(Context context, List<FileInfo> list) {
        this.mResources = context.getResources();
        this.mInflater = LayoutInflater.from(context);
        this.mFileInfoList = list;
    }

    private void setIcon(FileViewHolder fileViewHolder, FileInfo fileInfo) {
        fileViewHolder.mIcon.setImageBitmap(getIcon());
        fileViewHolder.mIcon.setAlpha(DEFAULT_ICON_ALPHA);
        if (fileInfo.isHideFile()) {
            fileViewHolder.mIcon.setAlpha(HIDE_ICON_ALPHA);
        }
    }

    private void setSizeText(TextView textView, FileInfo fileInfo) {
        textView.setText(this.mResources.getString(R.string.size) + " " + fileInfo.getFileSizeStr());
        textView.setVisibility(0);
    }

    @Override // android.widget.Adapter
    public int getCount() {
        return this.mFileInfoList.size();
    }

    public Bitmap getIcon() {
        if (this.icon == null) {
            this.icon = BitmapFactory.decodeResource(this.mResources, R.drawable.fm_unknown);
        }
        return this.icon;
    }

    @Override // android.widget.Adapter
    public FileInfo getItem(int i) {
        return this.mFileInfoList.get(i);
    }

    @Override // android.widget.Adapter
    public long getItemId(int i) {
        return i;
    }

    public int getPosition(FileInfo fileInfo) {
        return this.mFileInfoList.indexOf(fileInfo);
    }

    @Override // android.widget.Adapter
    public View getView(int i, View view, ViewGroup viewGroup) {
        FileViewHolder fileViewHolder;
        View viewInflate = view;
        if (viewInflate == null) {
            viewInflate = this.mInflater.inflate(R.layout.mcf_adapter_fileinfos, (ViewGroup) null);
            fileViewHolder = new FileViewHolder((TextView) viewInflate.findViewById(R.id.edit_adapter_name), (TextView) viewInflate.findViewById(R.id.edit_adapter_size), (ImageView) viewInflate.findViewById(R.id.edit_adapter_img));
            viewInflate.setTag(fileViewHolder);
        } else {
            fileViewHolder = (FileViewHolder) viewInflate.getTag();
        }
        FileInfo fileInfo = this.mFileInfoList.get(i);
        fileViewHolder.mName.setText(fileInfo.getFileName());
        viewInflate.setBackgroundColor(0);
        setSizeText(fileViewHolder.mSize, fileInfo);
        setIcon(fileViewHolder, fileInfo);
        return viewInflate;
    }
}
