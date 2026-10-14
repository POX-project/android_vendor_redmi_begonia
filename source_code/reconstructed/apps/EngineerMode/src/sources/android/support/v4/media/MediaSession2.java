package android.support.v4.media;

import android.app.PendingIntent;
import android.content.Context;
import android.net.Uri;
import android.os.Bundle;
import android.os.Handler;
import android.os.IBinder;
import android.os.RemoteException;
import android.os.ResultReceiver;
import android.support.mediacompat.Rating2;
import android.support.v4.media.session.MediaSessionCompat;
import android.support.v4.media.session.PlaybackStateCompat;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.util.List;
import java.util.concurrent.Executor;
import java.util.concurrent.RejectedExecutionException;

/* JADX INFO: loaded from: classes2.dex */
public class MediaSession2 implements MediaInterface2.SessionPlayer, AutoCloseable {
    public static final int ERROR_CODE_ACTION_ABORTED = 10;
    public static final int ERROR_CODE_APP_ERROR = 1;
    public static final int ERROR_CODE_AUTHENTICATION_EXPIRED = 3;
    public static final int ERROR_CODE_CONCURRENT_STREAM_LIMIT = 5;
    public static final int ERROR_CODE_CONTENT_ALREADY_PLAYING = 8;
    public static final int ERROR_CODE_END_OF_QUEUE = 11;
    public static final int ERROR_CODE_NOT_AVAILABLE_IN_REGION = 7;
    public static final int ERROR_CODE_NOT_SUPPORTED = 2;
    public static final int ERROR_CODE_PARENTAL_CONTROL_RESTRICTED = 6;
    public static final int ERROR_CODE_PREMIUM_ACCOUNT_REQUIRED = 4;
    public static final int ERROR_CODE_SETUP_REQUIRED = 12;
    public static final int ERROR_CODE_SKIP_LIMIT_REACHED = 9;
    public static final int ERROR_CODE_UNKNOWN_ERROR = 0;
    static final String TAG = "MediaSession2";
    private final SupportLibraryImpl mImpl;

    public static final class Builder extends BuilderBase<MediaSession2, Builder, SessionCallback> {
        public Builder(Context context) {
            super(context);
        }

        /* JADX WARN: Type inference failed for: r0v3, types: [C extends android.support.v4.media.MediaSession2$SessionCallback, android.support.v4.media.MediaSession2$Builder$1] */
        @Override // android.support.v4.media.MediaSession2.BuilderBase
        public MediaSession2 build() {
            if (this.mCallbackExecutor == null) {
                this.mCallbackExecutor = new MainHandlerExecutor(this.mContext);
            }
            if (this.mCallback == 0) {
                this.mCallback = new SessionCallback() { // from class: android.support.v4.media.MediaSession2.Builder.1
                };
            }
            return new MediaSession2(this.mContext, this.mId, this.mPlayer, this.mPlaylistAgent, this.mVolumeProvider, this.mSessionActivity, this.mCallbackExecutor, this.mCallback);
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
        public Builder setSessionCallback(Executor executor, SessionCallback sessionCallback) {
            return (Builder) super.setSessionCallback(executor, sessionCallback);
        }

        @Override // android.support.v4.media.MediaSession2.BuilderBase
        public Builder setVolumeProvider(VolumeProviderCompat volumeProviderCompat) {
            return (Builder) super.setVolumeProvider(volumeProviderCompat);
        }
    }

    static abstract class BuilderBase<T extends MediaSession2, U extends BuilderBase<T, U, C>, C extends SessionCallback> {
        C mCallback;
        Executor mCallbackExecutor;
        final Context mContext;
        String mId;
        BaseMediaPlayer mPlayer;
        MediaPlaylistAgent mPlaylistAgent;
        PendingIntent mSessionActivity;
        VolumeProviderCompat mVolumeProvider;

        BuilderBase(Context context) {
            if (context == null) {
                throw new IllegalArgumentException("context shouldn't be null");
            }
            this.mContext = context;
            this.mId = MediaSession2.TAG;
        }

        abstract T build();

        U setId(String str) {
            if (str == null) {
                throw new IllegalArgumentException("id shouldn't be null");
            }
            this.mId = str;
            return this;
        }

        U setPlayer(BaseMediaPlayer baseMediaPlayer) {
            if (baseMediaPlayer == null) {
                throw new IllegalArgumentException("player shouldn't be null");
            }
            this.mPlayer = baseMediaPlayer;
            return this;
        }

        U setPlaylistAgent(MediaPlaylistAgent mediaPlaylistAgent) {
            if (mediaPlaylistAgent == null) {
                throw new IllegalArgumentException("playlistAgent shouldn't be null");
            }
            this.mPlaylistAgent = mediaPlaylistAgent;
            return this;
        }

        U setSessionActivity(PendingIntent pendingIntent) {
            this.mSessionActivity = pendingIntent;
            return this;
        }

        U setSessionCallback(Executor executor, C c) {
            if (executor == null) {
                throw new IllegalArgumentException("executor shouldn't be null");
            }
            if (c == null) {
                throw new IllegalArgumentException("callback shouldn't be null");
            }
            this.mCallbackExecutor = executor;
            this.mCallback = c;
            return this;
        }

        U setVolumeProvider(VolumeProviderCompat volumeProviderCompat) {
            this.mVolumeProvider = volumeProviderCompat;
            return this;
        }
    }

    public static final class CommandButton {
        private static final String KEY_COMMAND = "android.media.media_session2.command_button.command";
        private static final String KEY_DISPLAY_NAME = "android.media.media_session2.command_button.display_name";
        private static final String KEY_ENABLED = "android.media.media_session2.command_button.enabled";
        private static final String KEY_EXTRAS = "android.media.media_session2.command_button.extras";
        private static final String KEY_ICON_RES_ID = "android.media.media_session2.command_button.icon_res_id";
        private SessionCommand2 mCommand;
        private String mDisplayName;
        private boolean mEnabled;
        private Bundle mExtras;
        private int mIconResId;

        public static final class Builder {
            private SessionCommand2 mCommand;
            private String mDisplayName;
            private boolean mEnabled;
            private Bundle mExtras;
            private int mIconResId;

            public CommandButton build() {
                return new CommandButton(this.mCommand, this.mIconResId, this.mDisplayName, this.mExtras, this.mEnabled);
            }

            public Builder setCommand(SessionCommand2 sessionCommand2) {
                this.mCommand = sessionCommand2;
                return this;
            }

            public Builder setDisplayName(String str) {
                this.mDisplayName = str;
                return this;
            }

            public Builder setEnabled(boolean z) {
                this.mEnabled = z;
                return this;
            }

            public Builder setExtras(Bundle bundle) {
                this.mExtras = bundle;
                return this;
            }

            public Builder setIconResId(int i) {
                this.mIconResId = i;
                return this;
            }
        }

        private CommandButton(SessionCommand2 sessionCommand2, int i, String str, Bundle bundle, boolean z) {
            this.mCommand = sessionCommand2;
            this.mIconResId = i;
            this.mDisplayName = str;
            this.mExtras = bundle;
            this.mEnabled = z;
        }

        public static CommandButton fromBundle(Bundle bundle) {
            if (bundle == null) {
                return null;
            }
            Builder builder = new Builder();
            builder.setCommand(SessionCommand2.fromBundle(bundle.getBundle(KEY_COMMAND)));
            builder.setIconResId(bundle.getInt(KEY_ICON_RES_ID, 0));
            builder.setDisplayName(bundle.getString(KEY_DISPLAY_NAME));
            builder.setExtras(bundle.getBundle(KEY_EXTRAS));
            builder.setEnabled(bundle.getBoolean(KEY_ENABLED));
            try {
                return builder.build();
            } catch (IllegalStateException e) {
                return null;
            }
        }

        public SessionCommand2 getCommand() {
            return this.mCommand;
        }

        public String getDisplayName() {
            return this.mDisplayName;
        }

        public Bundle getExtras() {
            return this.mExtras;
        }

        public int getIconResId() {
            return this.mIconResId;
        }

        public boolean isEnabled() {
            return this.mEnabled;
        }

        public Bundle toBundle() {
            Bundle bundle = new Bundle();
            bundle.putBundle(KEY_COMMAND, this.mCommand.toBundle());
            bundle.putInt(KEY_ICON_RES_ID, this.mIconResId);
            bundle.putString(KEY_DISPLAY_NAME, this.mDisplayName);
            bundle.putBundle(KEY_EXTRAS, this.mExtras);
            bundle.putBoolean(KEY_ENABLED, this.mEnabled);
            return bundle;
        }
    }

    static abstract class ControllerCb {
        ControllerCb() {
        }

        public boolean equals(Object obj) {
            if (obj instanceof ControllerCb) {
                return getId().equals(((ControllerCb) obj).getId());
            }
            return false;
        }

        abstract IBinder getId();

        public int hashCode() {
            return getId().hashCode();
        }

        abstract void onAllowedCommandsChanged(SessionCommandGroup2 sessionCommandGroup2) throws RemoteException;

        abstract void onBufferingStateChanged(MediaItem2 mediaItem2, int i, long j) throws RemoteException;

        abstract void onChildrenChanged(String str, int i, Bundle bundle) throws RemoteException;

        abstract void onCurrentMediaItemChanged(MediaItem2 mediaItem2) throws RemoteException;

        abstract void onCustomCommand(SessionCommand2 sessionCommand2, Bundle bundle, ResultReceiver resultReceiver) throws RemoteException;

        abstract void onCustomLayoutChanged(List<CommandButton> list) throws RemoteException;

        abstract void onDisconnected() throws RemoteException;

        abstract void onError(int i, Bundle bundle) throws RemoteException;

        abstract void onGetChildrenDone(String str, int i, int i2, List<MediaItem2> list, Bundle bundle) throws RemoteException;

        abstract void onGetItemDone(String str, MediaItem2 mediaItem2) throws RemoteException;

        abstract void onGetLibraryRootDone(Bundle bundle, String str, Bundle bundle2) throws RemoteException;

        abstract void onGetSearchResultDone(String str, int i, int i2, List<MediaItem2> list, Bundle bundle) throws RemoteException;

        abstract void onPlaybackInfoChanged(MediaController2.PlaybackInfo playbackInfo) throws RemoteException;

        abstract void onPlaybackSpeedChanged(long j, long j2, float f) throws RemoteException;

        abstract void onPlayerStateChanged(long j, long j2, int i) throws RemoteException;

        abstract void onPlaylistChanged(List<MediaItem2> list, MediaMetadata2 mediaMetadata2) throws RemoteException;

        abstract void onPlaylistMetadataChanged(MediaMetadata2 mediaMetadata2) throws RemoteException;

        abstract void onRepeatModeChanged(int i) throws RemoteException;

        abstract void onRoutesInfoChanged(List<Bundle> list) throws RemoteException;

        abstract void onSearchResultChanged(String str, int i, Bundle bundle) throws RemoteException;

        abstract void onSeekCompleted(long j, long j2, long j3) throws RemoteException;

        abstract void onShuffleModeChanged(int i) throws RemoteException;
    }

    public static final class ControllerInfo {
        private final ControllerCb mControllerCb;
        private final boolean mIsTrusted = false;
        private final String mPackageName;
        private final int mUid;

        ControllerInfo(String str, int i, int i2, ControllerCb controllerCb) {
            this.mUid = i2;
            this.mPackageName = str;
            this.mControllerCb = controllerCb;
        }

        public boolean equals(Object obj) {
            if (obj instanceof ControllerInfo) {
                return this.mControllerCb.equals(((ControllerInfo) obj).mControllerCb);
            }
            return false;
        }

        ControllerCb getControllerCb() {
            return this.mControllerCb;
        }

        IBinder getId() {
            return this.mControllerCb.getId();
        }

        public String getPackageName() {
            return this.mPackageName;
        }

        public int getUid() {
            return this.mUid;
        }

        public int hashCode() {
            return this.mControllerCb.hashCode();
        }

        public boolean isTrusted() {
            return this.mIsTrusted;
        }

        public String toString() {
            return "ControllerInfo {pkg=" + this.mPackageName + ", uid=" + this.mUid + "})";
        }
    }

    @Retention(RetentionPolicy.SOURCE)
    public @interface ErrorCode {
    }

    static class MainHandlerExecutor implements Executor {
        private final Handler mHandler;

        MainHandlerExecutor(Context context) {
            this.mHandler = new Handler(context.getMainLooper());
        }

        @Override // java.util.concurrent.Executor
        public void execute(Runnable runnable) {
            if (this.mHandler.post(runnable)) {
                return;
            }
            throw new RejectedExecutionException(this.mHandler + " is shutting down");
        }
    }

    public interface OnDataSourceMissingHelper {
        DataSourceDesc onDataSourceMissing(MediaSession2 mediaSession2, MediaItem2 mediaItem2);
    }

    public static abstract class SessionCallback {
        public void onBufferingStateChanged(MediaSession2 mediaSession2, BaseMediaPlayer baseMediaPlayer, MediaItem2 mediaItem2, int i) {
        }

        public boolean onCommandRequest(MediaSession2 mediaSession2, ControllerInfo controllerInfo, SessionCommand2 sessionCommand2) {
            return true;
        }

        public SessionCommandGroup2 onConnect(MediaSession2 mediaSession2, ControllerInfo controllerInfo) {
            SessionCommandGroup2 sessionCommandGroup2 = new SessionCommandGroup2();
            sessionCommandGroup2.addAllPredefinedCommands();
            return sessionCommandGroup2;
        }

        public void onCurrentMediaItemChanged(MediaSession2 mediaSession2, BaseMediaPlayer baseMediaPlayer, MediaItem2 mediaItem2) {
        }

        public void onCustomCommand(MediaSession2 mediaSession2, ControllerInfo controllerInfo, SessionCommand2 sessionCommand2, Bundle bundle, ResultReceiver resultReceiver) {
        }

        public void onDisconnected(MediaSession2 mediaSession2, ControllerInfo controllerInfo) {
        }

        public void onFastForward(MediaSession2 mediaSession2, ControllerInfo controllerInfo) {
        }

        public void onMediaPrepared(MediaSession2 mediaSession2, BaseMediaPlayer baseMediaPlayer, MediaItem2 mediaItem2) {
        }

        public void onPlayFromMediaId(MediaSession2 mediaSession2, ControllerInfo controllerInfo, String str, Bundle bundle) {
        }

        public void onPlayFromSearch(MediaSession2 mediaSession2, ControllerInfo controllerInfo, String str, Bundle bundle) {
        }

        public void onPlayFromUri(MediaSession2 mediaSession2, ControllerInfo controllerInfo, Uri uri, Bundle bundle) {
        }

        public void onPlaybackSpeedChanged(MediaSession2 mediaSession2, BaseMediaPlayer baseMediaPlayer, float f) {
        }

        public void onPlayerStateChanged(MediaSession2 mediaSession2, BaseMediaPlayer baseMediaPlayer, int i) {
        }

        public void onPlaylistChanged(MediaSession2 mediaSession2, MediaPlaylistAgent mediaPlaylistAgent, List<MediaItem2> list, MediaMetadata2 mediaMetadata2) {
        }

        public void onPlaylistMetadataChanged(MediaSession2 mediaSession2, MediaPlaylistAgent mediaPlaylistAgent, MediaMetadata2 mediaMetadata2) {
        }

        public void onPrepareFromMediaId(MediaSession2 mediaSession2, ControllerInfo controllerInfo, String str, Bundle bundle) {
        }

        public void onPrepareFromSearch(MediaSession2 mediaSession2, ControllerInfo controllerInfo, String str, Bundle bundle) {
        }

        public void onPrepareFromUri(MediaSession2 mediaSession2, ControllerInfo controllerInfo, Uri uri, Bundle bundle) {
        }

        public void onRepeatModeChanged(MediaSession2 mediaSession2, MediaPlaylistAgent mediaPlaylistAgent, int i) {
        }

        public void onRewind(MediaSession2 mediaSession2, ControllerInfo controllerInfo) {
        }

        public void onSeekCompleted(MediaSession2 mediaSession2, BaseMediaPlayer baseMediaPlayer, long j) {
        }

        public void onSelectRoute(MediaSession2 mediaSession2, ControllerInfo controllerInfo, Bundle bundle) {
        }

        public void onSetRating(MediaSession2 mediaSession2, ControllerInfo controllerInfo, String str, Rating2 rating2) {
        }

        public void onShuffleModeChanged(MediaSession2 mediaSession2, MediaPlaylistAgent mediaPlaylistAgent, int i) {
        }

        public void onSubscribeRoutesInfo(MediaSession2 mediaSession2, ControllerInfo controllerInfo) {
        }

        public void onUnsubscribeRoutesInfo(MediaSession2 mediaSession2, ControllerInfo controllerInfo) {
        }
    }

    interface SupportLibraryImpl extends MediaInterface2.SessionPlayer, AutoCloseable {
        AudioFocusHandler getAudioFocusHandler();

        SessionCallback getCallback();

        Executor getCallbackExecutor();

        List<ControllerInfo> getConnectedControllers();

        Context getContext();

        MediaSession2 getInstance();

        MediaController2.PlaybackInfo getPlaybackInfo();

        PlaybackStateCompat getPlaybackStateCompat();

        BaseMediaPlayer getPlayer();

        MediaPlaylistAgent getPlaylistAgent();

        PendingIntent getSessionActivity();

        IBinder getSessionBinder();

        MediaSessionCompat getSessionCompat();

        SessionToken2 getToken();

        VolumeProviderCompat getVolumeProvider();

        boolean isClosed();

        void notifyRoutesInfoChanged(ControllerInfo controllerInfo, List<Bundle> list);

        void sendCustomCommand(ControllerInfo controllerInfo, SessionCommand2 sessionCommand2, Bundle bundle, ResultReceiver resultReceiver);

        void sendCustomCommand(SessionCommand2 sessionCommand2, Bundle bundle);

        void setAllowedCommands(ControllerInfo controllerInfo, SessionCommandGroup2 sessionCommandGroup2);

        void setCustomLayout(ControllerInfo controllerInfo, List<CommandButton> list);

        void updatePlayer(BaseMediaPlayer baseMediaPlayer, MediaPlaylistAgent mediaPlaylistAgent, VolumeProviderCompat volumeProviderCompat);
    }

    MediaSession2(Context context, String str, BaseMediaPlayer baseMediaPlayer, MediaPlaylistAgent mediaPlaylistAgent, VolumeProviderCompat volumeProviderCompat, PendingIntent pendingIntent, Executor executor, SessionCallback sessionCallback) {
        this.mImpl = createImpl(context, str, baseMediaPlayer, mediaPlaylistAgent, volumeProviderCompat, pendingIntent, executor, sessionCallback);
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public void addPlaylistItem(int i, MediaItem2 mediaItem2) {
        this.mImpl.addPlaylistItem(i, mediaItem2);
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public void clearOnDataSourceMissingHelper() {
        this.mImpl.clearOnDataSourceMissingHelper();
    }

    @Override // java.lang.AutoCloseable
    public void close() {
        try {
            this.mImpl.close();
        } catch (Exception e) {
        }
    }

    SupportLibraryImpl createImpl(Context context, String str, BaseMediaPlayer baseMediaPlayer, MediaPlaylistAgent mediaPlaylistAgent, VolumeProviderCompat volumeProviderCompat, PendingIntent pendingIntent, Executor executor, SessionCallback sessionCallback) {
        return new MediaSession2ImplBase(this, context, str, baseMediaPlayer, mediaPlaylistAgent, volumeProviderCompat, pendingIntent, executor, sessionCallback);
    }

    AudioFocusHandler getAudioFocusHandler() {
        return this.mImpl.getAudioFocusHandler();
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaybackControl
    public long getBufferedPosition() {
        return this.mImpl.getBufferedPosition();
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaybackControl
    public int getBufferingState() {
        return this.mImpl.getBufferingState();
    }

    SessionCallback getCallback() {
        return this.mImpl.getCallback();
    }

    Executor getCallbackExecutor() {
        return this.mImpl.getCallbackExecutor();
    }

    public List<ControllerInfo> getConnectedControllers() {
        return this.mImpl.getConnectedControllers();
    }

    Context getContext() {
        return this.mImpl.getContext();
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public MediaItem2 getCurrentMediaItem() {
        return this.mImpl.getCurrentMediaItem();
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaybackControl
    public long getCurrentPosition() {
        return this.mImpl.getCurrentPosition();
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaybackControl
    public long getDuration() {
        return this.mImpl.getDuration();
    }

    SupportLibraryImpl getImpl() {
        return this.mImpl;
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaybackControl
    public float getPlaybackSpeed() {
        return this.mImpl.getPlaybackSpeed();
    }

    public BaseMediaPlayer getPlayer() {
        return this.mImpl.getPlayer();
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaybackControl
    public int getPlayerState() {
        return this.mImpl.getPlayerState();
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public List<MediaItem2> getPlaylist() {
        return this.mImpl.getPlaylist();
    }

    public MediaPlaylistAgent getPlaylistAgent() {
        return this.mImpl.getPlaylistAgent();
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public MediaMetadata2 getPlaylistMetadata() {
        return this.mImpl.getPlaylistMetadata();
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public int getRepeatMode() {
        return this.mImpl.getRepeatMode();
    }

    IBinder getSessionBinder() {
        return this.mImpl.getSessionBinder();
    }

    public MediaSessionCompat getSessionCompat() {
        return this.mImpl.getSessionCompat();
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public int getShuffleMode() {
        return this.mImpl.getShuffleMode();
    }

    public SessionToken2 getToken() {
        return this.mImpl.getToken();
    }

    public VolumeProviderCompat getVolumeProvider() {
        return this.mImpl.getVolumeProvider();
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlayer
    public void notifyError(int i, Bundle bundle) {
        this.mImpl.notifyError(i, bundle);
    }

    public void notifyRoutesInfoChanged(ControllerInfo controllerInfo, List<Bundle> list) {
        this.mImpl.notifyRoutesInfoChanged(controllerInfo, list);
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaybackControl
    public void pause() {
        this.mImpl.pause();
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaybackControl
    public void play() {
        this.mImpl.play();
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaybackControl
    public void prepare() {
        this.mImpl.prepare();
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public void removePlaylistItem(MediaItem2 mediaItem2) {
        this.mImpl.removePlaylistItem(mediaItem2);
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public void replacePlaylistItem(int i, MediaItem2 mediaItem2) {
        this.mImpl.replacePlaylistItem(i, mediaItem2);
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaybackControl
    public void reset() {
        this.mImpl.reset();
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaybackControl
    public void seekTo(long j) {
        this.mImpl.seekTo(j);
    }

    public void sendCustomCommand(ControllerInfo controllerInfo, SessionCommand2 sessionCommand2, Bundle bundle, ResultReceiver resultReceiver) {
        this.mImpl.sendCustomCommand(controllerInfo, sessionCommand2, bundle, resultReceiver);
    }

    public void sendCustomCommand(SessionCommand2 sessionCommand2, Bundle bundle) {
        this.mImpl.sendCustomCommand(sessionCommand2, bundle);
    }

    public void setAllowedCommands(ControllerInfo controllerInfo, SessionCommandGroup2 sessionCommandGroup2) {
        this.mImpl.setAllowedCommands(controllerInfo, sessionCommandGroup2);
    }

    public void setCustomLayout(ControllerInfo controllerInfo, List<CommandButton> list) {
        this.mImpl.setCustomLayout(controllerInfo, list);
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public void setOnDataSourceMissingHelper(OnDataSourceMissingHelper onDataSourceMissingHelper) {
        this.mImpl.setOnDataSourceMissingHelper(onDataSourceMissingHelper);
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaybackControl
    public void setPlaybackSpeed(float f) {
        this.mImpl.setPlaybackSpeed(f);
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public void setPlaylist(List<MediaItem2> list, MediaMetadata2 mediaMetadata2) {
        this.mImpl.setPlaylist(list, mediaMetadata2);
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public void setRepeatMode(int i) {
        this.mImpl.setRepeatMode(i);
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public void setShuffleMode(int i) {
        this.mImpl.setShuffleMode(i);
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlayer
    public void skipBackward() {
        this.mImpl.skipBackward();
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlayer
    public void skipForward() {
        this.mImpl.skipForward();
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public void skipToNextItem() {
        this.mImpl.skipToNextItem();
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public void skipToPlaylistItem(MediaItem2 mediaItem2) {
        this.mImpl.skipToPlaylistItem(mediaItem2);
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public void skipToPreviousItem() {
        this.mImpl.skipToPreviousItem();
    }

    public void updatePlayer(BaseMediaPlayer baseMediaPlayer, MediaPlaylistAgent mediaPlaylistAgent, VolumeProviderCompat volumeProviderCompat) {
        this.mImpl.updatePlayer(baseMediaPlayer, mediaPlaylistAgent, volumeProviderCompat);
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public void updatePlaylistMetadata(MediaMetadata2 mediaMetadata2) {
        this.mImpl.updatePlaylistMetadata(mediaMetadata2);
    }
}
