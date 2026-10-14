package android.support.v4.media;

import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.os.IBinder;
import java.util.List;
import java.util.concurrent.Executor;

/* JADX INFO: loaded from: classes2.dex */
public abstract class MediaLibraryService2 extends MediaSessionService2 {
    public static final String SERVICE_INTERFACE = "android.media.MediaLibraryService2";

    public static final class LibraryRoot {
        public static final String EXTRA_OFFLINE = "android.media.extra.OFFLINE";
        public static final String EXTRA_RECENT = "android.media.extra.RECENT";
        public static final String EXTRA_SUGGESTED = "android.media.extra.SUGGESTED";
        private final Bundle mExtras;
        private final String mRootId;

        public LibraryRoot(String str, Bundle bundle) {
            if (str == null) {
                throw new IllegalArgumentException("rootId shouldn't be null");
            }
            this.mRootId = str;
            this.mExtras = bundle;
        }

        public Bundle getExtras() {
            return this.mExtras;
        }

        public String getRootId() {
            return this.mRootId;
        }
    }

    public static final class MediaLibrarySession extends MediaSession2 {

        public static final class Builder extends MediaSession2.BuilderBase<MediaLibrarySession, Builder, MediaLibrarySessionCallback> {
            public Builder(MediaLibraryService2 mediaLibraryService2, Executor executor, MediaLibrarySessionCallback mediaLibrarySessionCallback) {
                super(mediaLibraryService2);
                setSessionCallback(executor, mediaLibrarySessionCallback);
            }

            @Override // android.support.v4.media.MediaSession2.BuilderBase
            public MediaLibrarySession build() {
                if (this.mCallbackExecutor == null) {
                    this.mCallbackExecutor = new MediaSession2.MainHandlerExecutor(this.mContext);
                }
                if (this.mCallback == 0) {
                    this.mCallback = new MediaLibrarySessionCallback() { // from class: android.support.v4.media.MediaLibraryService2.MediaLibrarySession.Builder.1
                    };
                }
                return new MediaLibrarySession(this.mContext, this.mId, this.mPlayer, this.mPlaylistAgent, this.mVolumeProvider, this.mSessionActivity, this.mCallbackExecutor, this.mCallback);
            }

            @Override // android.support.v4.media.MediaSession2.BuilderBase
            public Builder setId(String str) {
                return (Builder) super.setId(str);
            }

            @Override // android.support.v4.media.MediaSession2.BuilderBase
            public Builder setPlayer(BaseMediaPlayer baseMediaPlayer) {
                return (Builder) super.setPlayer(baseMediaPlayer);
            }

            @Override // android.support.v4.media.MediaSession2.BuilderBase
            public Builder setPlaylistAgent(MediaPlaylistAgent mediaPlaylistAgent) {
                return (Builder) super.setPlaylistAgent(mediaPlaylistAgent);
            }

            @Override // android.support.v4.media.MediaSession2.BuilderBase
            public Builder setSessionActivity(PendingIntent pendingIntent) {
                return (Builder) super.setSessionActivity(pendingIntent);
            }

            @Override // android.support.v4.media.MediaSession2.BuilderBase
            public Builder setVolumeProvider(VolumeProviderCompat volumeProviderCompat) {
                return (Builder) super.setVolumeProvider(volumeProviderCompat);
            }
        }

        public static class MediaLibrarySessionCallback extends MediaSession2.SessionCallback {
            public List<MediaItem2> onGetChildren(MediaLibrarySession mediaLibrarySession, MediaSession2.ControllerInfo controllerInfo, String str, int i, int i2, Bundle bundle) {
                return null;
            }

            public MediaItem2 onGetItem(MediaLibrarySession mediaLibrarySession, MediaSession2.ControllerInfo controllerInfo, String str) {
                return null;
            }

            public LibraryRoot onGetLibraryRoot(MediaLibrarySession mediaLibrarySession, MediaSession2.ControllerInfo controllerInfo, Bundle bundle) {
                return null;
            }

            public List<MediaItem2> onGetSearchResult(MediaLibrarySession mediaLibrarySession, MediaSession2.ControllerInfo controllerInfo, String str, int i, int i2, Bundle bundle) {
                return null;
            }

            public void onSearch(MediaLibrarySession mediaLibrarySession, MediaSession2.ControllerInfo controllerInfo, String str, Bundle bundle) {
            }

            public void onSubscribe(MediaLibrarySession mediaLibrarySession, MediaSession2.ControllerInfo controllerInfo, String str, Bundle bundle) {
            }

            public void onUnsubscribe(MediaLibrarySession mediaLibrarySession, MediaSession2.ControllerInfo controllerInfo, String str) {
            }
        }

        interface SupportLibraryImpl extends MediaSession2.SupportLibraryImpl {
            @Override // android.support.v4.media.MediaSession2.SupportLibraryImpl
            MediaLibrarySessionCallback getCallback();

            @Override // android.support.v4.media.MediaSession2.SupportLibraryImpl
            MediaLibrarySession getInstance();

            IBinder getLegacySessionBinder();

            void notifyChildrenChanged(MediaSession2.ControllerInfo controllerInfo, String str, int i, Bundle bundle);

            void notifyChildrenChanged(String str, int i, Bundle bundle);

            void notifySearchResultChanged(MediaSession2.ControllerInfo controllerInfo, String str, int i, Bundle bundle);

            void onGetChildrenOnExecutor(MediaSession2.ControllerInfo controllerInfo, String str, int i, int i2, Bundle bundle);

            void onGetItemOnExecutor(MediaSession2.ControllerInfo controllerInfo, String str);

            void onGetLibraryRootOnExecutor(MediaSession2.ControllerInfo controllerInfo, Bundle bundle);

            void onGetSearchResultOnExecutor(MediaSession2.ControllerInfo controllerInfo, String str, int i, int i2, Bundle bundle);

            void onSearchOnExecutor(MediaSession2.ControllerInfo controllerInfo, String str, Bundle bundle);

            void onSubscribeOnExecutor(MediaSession2.ControllerInfo controllerInfo, String str, Bundle bundle);

            void onUnsubscribeOnExecutor(MediaSession2.ControllerInfo controllerInfo, String str);
        }

        MediaLibrarySession(Context context, String str, BaseMediaPlayer baseMediaPlayer, MediaPlaylistAgent mediaPlaylistAgent, VolumeProviderCompat volumeProviderCompat, PendingIntent pendingIntent, Executor executor, MediaSession2.SessionCallback sessionCallback) {
            super(context, str, baseMediaPlayer, mediaPlaylistAgent, volumeProviderCompat, pendingIntent, executor, sessionCallback);
        }

        /* JADX INFO: Access modifiers changed from: package-private */
        @Override // android.support.v4.media.MediaSession2
        public SupportLibraryImpl createImpl(Context context, String str, BaseMediaPlayer baseMediaPlayer, MediaPlaylistAgent mediaPlaylistAgent, VolumeProviderCompat volumeProviderCompat, PendingIntent pendingIntent, Executor executor, MediaSession2.SessionCallback sessionCallback) {
            return new MediaLibrarySessionImplBase(this, context, str, baseMediaPlayer, mediaPlaylistAgent, volumeProviderCompat, pendingIntent, executor, sessionCallback);
        }

        /* JADX INFO: Access modifiers changed from: package-private */
        @Override // android.support.v4.media.MediaSession2
        public MediaLibrarySessionCallback getCallback() {
            return (MediaLibrarySessionCallback) super.getCallback();
        }

        /* JADX INFO: Access modifiers changed from: package-private */
        @Override // android.support.v4.media.MediaSession2
        public SupportLibraryImpl getImpl() {
            return (SupportLibraryImpl) super.getImpl();
        }

        public void notifyChildrenChanged(MediaSession2.ControllerInfo controllerInfo, String str, int i, Bundle bundle) {
            getImpl().notifyChildrenChanged(controllerInfo, str, i, bundle);
        }

        public void notifyChildrenChanged(String str, int i, Bundle bundle) {
            getImpl().notifyChildrenChanged(str, i, bundle);
        }

        public void notifySearchResultChanged(MediaSession2.ControllerInfo controllerInfo, String str, int i, Bundle bundle) {
            getImpl().notifySearchResultChanged(controllerInfo, str, i, bundle);
        }
    }

    @Override // android.support.v4.media.MediaSessionService2
    MediaSessionService2.SupportLibraryImpl createImpl() {
        return new MediaLibraryService2ImplBase();
    }

    @Override // android.support.v4.media.MediaSessionService2, android.app.Service
    public IBinder onBind(Intent intent) {
        return super.onBind(intent);
    }

    @Override // android.support.v4.media.MediaSessionService2, android.app.Service
    public void onCreate() {
        super.onCreate();
        if (!(getSession() instanceof MediaLibrarySession)) {
            throw new RuntimeException("Expected MediaLibrarySession, but returned MediaSession2");
        }
    }

    @Override // android.support.v4.media.MediaSessionService2
    public abstract MediaLibrarySession onCreateSession(String str);
}
