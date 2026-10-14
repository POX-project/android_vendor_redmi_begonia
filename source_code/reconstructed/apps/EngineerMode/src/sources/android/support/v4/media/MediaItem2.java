package android.support.v4.media;

import android.os.Bundle;
import android.text.TextUtils;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.util.UUID;

/* JADX INFO: loaded from: classes2.dex */
public class MediaItem2 {
    public static final int FLAG_BROWSABLE = 1;
    public static final int FLAG_PLAYABLE = 2;
    private static final String KEY_FLAGS = "android.media.mediaitem2.flags";
    private static final String KEY_ID = "android.media.mediaitem2.id";
    private static final String KEY_METADATA = "android.media.mediaitem2.metadata";
    private static final String KEY_UUID = "android.media.mediaitem2.uuid";
    private DataSourceDesc mDataSourceDesc;
    private final int mFlags;
    private final String mId;
    private MediaMetadata2 mMetadata;
    private final UUID mUUID;

    public static final class Builder {
        private DataSourceDesc mDataSourceDesc;
        private int mFlags;
        private String mMediaId;
        private MediaMetadata2 mMetadata;

        public Builder(int i) {
            this.mFlags = i;
        }

        public MediaItem2 build() {
            MediaMetadata2 mediaMetadata2 = this.mMetadata;
            String string = mediaMetadata2 != null ? mediaMetadata2.getString("android.media.metadata.MEDIA_ID") : null;
            if (string == null) {
                String string2 = this.mMediaId;
                if (string2 == null) {
                    string2 = toString();
                }
                string = string2;
            }
            return new MediaItem2(string, this.mDataSourceDesc, this.mMetadata, this.mFlags);
        }

        public Builder setDataSourceDesc(DataSourceDesc dataSourceDesc) {
            this.mDataSourceDesc = dataSourceDesc;
            return this;
        }

        public Builder setMediaId(String str) {
            this.mMediaId = str;
            return this;
        }

        public Builder setMetadata(MediaMetadata2 mediaMetadata2) {
            this.mMetadata = mediaMetadata2;
            return this;
        }
    }

    @Retention(RetentionPolicy.SOURCE)
    public @interface Flags {
    }

    private MediaItem2(String str, DataSourceDesc dataSourceDesc, MediaMetadata2 mediaMetadata2, int i) {
        this(str, dataSourceDesc, mediaMetadata2, i, (UUID) null);
    }

    private MediaItem2(String str, DataSourceDesc dataSourceDesc, MediaMetadata2 mediaMetadata2, int i, UUID uuid) {
        if (str == null) {
            throw new IllegalArgumentException("mediaId shouldn't be null");
        }
        if (mediaMetadata2 != null && !TextUtils.equals(str, mediaMetadata2.getMediaId())) {
            throw new IllegalArgumentException("metadata's id should be matched with the mediaid");
        }
        this.mId = str;
        this.mDataSourceDesc = dataSourceDesc;
        this.mMetadata = mediaMetadata2;
        this.mFlags = i;
        this.mUUID = uuid == null ? UUID.randomUUID() : uuid;
    }

    public static MediaItem2 fromBundle(Bundle bundle) {
        if (bundle == null) {
            return null;
        }
        return fromBundle(bundle, UUID.fromString(bundle.getString(KEY_UUID)));
    }

    static MediaItem2 fromBundle(Bundle bundle, UUID uuid) {
        if (bundle == null) {
            return null;
        }
        String string = bundle.getString(KEY_ID);
        Bundle bundle2 = bundle.getBundle(KEY_METADATA);
        return new MediaItem2(string, (DataSourceDesc) null, bundle2 != null ? MediaMetadata2.fromBundle(bundle2) : null, bundle.getInt(KEY_FLAGS), uuid);
    }

    public boolean equals(Object obj) {
        if (obj instanceof MediaItem2) {
            return this.mUUID.equals(((MediaItem2) obj).mUUID);
        }
        return false;
    }

    public DataSourceDesc getDataSourceDesc() {
        return this.mDataSourceDesc;
    }

    public int getFlags() {
        return this.mFlags;
    }

    public String getMediaId() {
        return this.mId;
    }

    public MediaMetadata2 getMetadata() {
        return this.mMetadata;
    }

    public int hashCode() {
        return this.mUUID.hashCode();
    }

    public boolean isBrowsable() {
        return (this.mFlags & 1) != 0;
    }

    public boolean isPlayable() {
        return (this.mFlags & 2) != 0;
    }

    public void setMetadata(MediaMetadata2 mediaMetadata2) {
        if (mediaMetadata2 != null && !TextUtils.equals(this.mId, mediaMetadata2.getMediaId())) {
            throw new IllegalArgumentException("metadata's id should be matched with the mediaId");
        }
        this.mMetadata = mediaMetadata2;
    }

    public Bundle toBundle() {
        Bundle bundle = new Bundle();
        bundle.putString(KEY_ID, this.mId);
        bundle.putInt(KEY_FLAGS, this.mFlags);
        MediaMetadata2 mediaMetadata2 = this.mMetadata;
        if (mediaMetadata2 != null) {
            bundle.putBundle(KEY_METADATA, mediaMetadata2.toBundle());
        }
        bundle.putString(KEY_UUID, this.mUUID.toString());
        return bundle;
    }

    public String toString() {
        return "MediaItem2{mFlags=" + this.mFlags + ", mMetadata=" + this.mMetadata + '}';
    }
}
