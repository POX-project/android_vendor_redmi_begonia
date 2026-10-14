package android.support.v4.media;

import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.media.AudioManager;
import android.os.Build;
import android.os.Bundle;
import android.os.DeadObjectException;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.IBinder;
import android.os.Process;
import android.os.RemoteException;
import android.os.ResultReceiver;
import android.os.SystemClock;
import android.support.v4.media.session.MediaSessionCompat;
import android.support.v4.media.session.PlaybackStateCompat;
import android.support.v4.util.ObjectsCompat;
import android.text.TextUtils;
import android.util.Log;
import java.lang.ref.WeakReference;
import java.util.List;
import java.util.NoSuchElementException;
import java.util.concurrent.Executor;

/* JADX INFO: loaded from: classes2.dex */
class MediaSession2ImplBase implements MediaSession2.SupportLibraryImpl {
    private final AudioFocusHandler mAudioFocusHandler;
    private final AudioManager mAudioManager;
    private final MediaSession2.SessionCallback mCallback;
    private final Executor mCallbackExecutor;
    private final Context mContext;
    private MediaSession2.OnDataSourceMissingHelper mDsmHelper;
    private final Handler mHandler;
    private final HandlerThread mHandlerThread;
    private final MediaSession2 mInstance;
    final Object mLock = new Object();
    private MediaController2.PlaybackInfo mPlaybackInfo;
    private BaseMediaPlayer mPlayer;
    private final BaseMediaPlayer.PlayerEventCallback mPlayerEventCallback;
    private MediaPlaylistAgent mPlaylistAgent;
    private final MediaPlaylistAgent.PlaylistEventCallback mPlaylistEventCallback;
    private final MediaSession2Stub mSession2Stub;
    private final PendingIntent mSessionActivity;
    private final MediaSessionCompat mSessionCompat;
    private final MediaSessionLegacyStub mSessionLegacyStub;
    private SessionPlaylistAgentImplBase mSessionPlaylistAgent;
    private final SessionToken2 mSessionToken;
    private VolumeProviderCompat mVolumeProvider;
    static final String TAG = "MS2ImplBase";
    static final boolean DEBUG = Log.isLoggable(TAG, 3);

    private static class MyPlayerEventCallback extends BaseMediaPlayer.PlayerEventCallback {
        private final WeakReference<MediaSession2ImplBase> mSession;

        private MyPlayerEventCallback(MediaSession2ImplBase mediaSession2ImplBase) {
            this.mSession = new WeakReference<>(mediaSession2ImplBase);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public MediaItem2 getMediaItem(MediaSession2ImplBase mediaSession2ImplBase, DataSourceDesc dataSourceDesc) {
            MediaPlaylistAgent playlistAgent = mediaSession2ImplBase.getPlaylistAgent();
            if (playlistAgent == null) {
                if (!MediaSession2ImplBase.DEBUG) {
                    return null;
                }
                Log.d(MediaSession2ImplBase.TAG, "Session is closed", new IllegalStateException());
                return null;
            }
            MediaItem2 mediaItem = playlistAgent.getMediaItem(dataSourceDesc);
            if (mediaItem == null && MediaSession2ImplBase.DEBUG) {
                Log.d(MediaSession2ImplBase.TAG, "Could not find matching item for dsd=" + dataSourceDesc, new NoSuchElementException());
            }
            return mediaItem;
        }

        private MediaSession2ImplBase getSession() {
            MediaSession2ImplBase mediaSession2ImplBase = this.mSession.get();
            if (mediaSession2ImplBase == null && MediaSession2ImplBase.DEBUG) {
                Log.d(MediaSession2ImplBase.TAG, "Session is closed", new IllegalStateException());
            }
            return mediaSession2ImplBase;
        }

        @Override // android.support.v4.media.BaseMediaPlayer.PlayerEventCallback
        public void onBufferingStateChanged(final BaseMediaPlayer baseMediaPlayer, final DataSourceDesc dataSourceDesc, final int i) {
            final MediaSession2ImplBase session = getSession();
            if (session == null || dataSourceDesc == null) {
                return;
            }
            session.getCallbackExecutor().execute(new Runnable() { // from class: android.support.v4.media.MediaSession2ImplBase.MyPlayerEventCallback.4
                @Override // java.lang.Runnable
                public void run() {
                    final MediaItem2 mediaItem = MyPlayerEventCallback.this.getMediaItem(session, dataSourceDesc);
                    if (mediaItem == null) {
                        return;
                    }
                    session.getCallback().onBufferingStateChanged(session.getInstance(), baseMediaPlayer, mediaItem, i);
                    session.notifyToAllControllers(new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.MyPlayerEventCallback.4.1
                        @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
                        public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                            controllerCb.onBufferingStateChanged(mediaItem, i, baseMediaPlayer.getBufferedPosition());
                        }
                    });
                }
            });
        }

        @Override // android.support.v4.media.BaseMediaPlayer.PlayerEventCallback
        public void onCurrentDataSourceChanged(final BaseMediaPlayer baseMediaPlayer, final DataSourceDesc dataSourceDesc) {
            final MediaSession2ImplBase session = getSession();
            if (session == null) {
                return;
            }
            session.getCallbackExecutor().execute(new Runnable() { // from class: android.support.v4.media.MediaSession2ImplBase.MyPlayerEventCallback.1
                @Override // java.lang.Runnable
                public void run() {
                    final MediaItem2 mediaItem;
                    DataSourceDesc dataSourceDesc2 = dataSourceDesc;
                    if (dataSourceDesc2 == null) {
                        mediaItem = null;
                    } else {
                        mediaItem = MyPlayerEventCallback.this.getMediaItem(session, dataSourceDesc2);
                        if (mediaItem == null) {
                            Log.w(MediaSession2ImplBase.TAG, "Cannot obtain media item from the dsd=" + dataSourceDesc);
                            return;
                        }
                    }
                    session.getCallback().onCurrentMediaItemChanged(session.getInstance(), baseMediaPlayer, mediaItem);
                    session.notifyToAllControllers(new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.MyPlayerEventCallback.1.1
                        @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
                        public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                            controllerCb.onCurrentMediaItemChanged(mediaItem);
                        }
                    });
                }
            });
        }

        @Override // android.support.v4.media.BaseMediaPlayer.PlayerEventCallback
        public void onMediaPrepared(final BaseMediaPlayer baseMediaPlayer, final DataSourceDesc dataSourceDesc) {
            final MediaSession2ImplBase session = getSession();
            if (session == null || dataSourceDesc == null) {
                return;
            }
            session.getCallbackExecutor().execute(new Runnable() { // from class: android.support.v4.media.MediaSession2ImplBase.MyPlayerEventCallback.2
                @Override // java.lang.Runnable
                public void run() throws Throwable {
                    MediaMetadata2 mediaMetadata2Build;
                    MediaItem2 mediaItem = MyPlayerEventCallback.this.getMediaItem(session, dataSourceDesc);
                    if (mediaItem == null) {
                        return;
                    }
                    if (mediaItem.equals(session.getCurrentMediaItem())) {
                        long duration = session.getDuration();
                        if (duration < 0) {
                            return;
                        }
                        MediaMetadata2 metadata = mediaItem.getMetadata();
                        if (metadata == null) {
                            mediaMetadata2Build = new MediaMetadata2.Builder().putLong("android.media.metadata.DURATION", duration).putString("android.media.metadata.MEDIA_ID", mediaItem.getMediaId()).build();
                        } else if (metadata.containsKey("android.media.metadata.DURATION")) {
                            long j = metadata.getLong("android.media.metadata.DURATION");
                            if (duration != j) {
                                Log.w(MediaSession2ImplBase.TAG, "duration mismatch for an item. duration from player=" + duration + " duration from metadata=" + j + ". May be a timing issue?");
                            }
                            mediaMetadata2Build = null;
                        } else {
                            mediaMetadata2Build = new MediaMetadata2.Builder(metadata).putLong("android.media.metadata.DURATION", duration).build();
                        }
                        if (mediaMetadata2Build != null) {
                            mediaItem.setMetadata(mediaMetadata2Build);
                            session.notifyToAllControllers(new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.MyPlayerEventCallback.2.1
                                @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
                                public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                                    controllerCb.onPlaylistChanged(session.getPlaylist(), session.getPlaylistMetadata());
                                }
                            });
                        }
                    }
                    session.getCallback().onMediaPrepared(session.getInstance(), baseMediaPlayer, mediaItem);
                }
            });
        }

        @Override // android.support.v4.media.BaseMediaPlayer.PlayerEventCallback
        public void onPlaybackSpeedChanged(final BaseMediaPlayer baseMediaPlayer, final float f) {
            final MediaSession2ImplBase session = getSession();
            if (session == null) {
                return;
            }
            session.getCallbackExecutor().execute(new Runnable() { // from class: android.support.v4.media.MediaSession2ImplBase.MyPlayerEventCallback.5
                @Override // java.lang.Runnable
                public void run() {
                    session.getCallback().onPlaybackSpeedChanged(session.getInstance(), baseMediaPlayer, f);
                    session.notifyToAllControllers(new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.MyPlayerEventCallback.5.1
                        @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
                        public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                            controllerCb.onPlaybackSpeedChanged(SystemClock.elapsedRealtime(), session.getCurrentPosition(), f);
                        }
                    });
                }
            });
        }

        @Override // android.support.v4.media.BaseMediaPlayer.PlayerEventCallback
        public void onPlayerStateChanged(final BaseMediaPlayer baseMediaPlayer, final int i) {
            final MediaSession2ImplBase session = getSession();
            if (session == null) {
                return;
            }
            session.getCallbackExecutor().execute(new Runnable() { // from class: android.support.v4.media.MediaSession2ImplBase.MyPlayerEventCallback.3
                @Override // java.lang.Runnable
                public void run() {
                    session.mAudioFocusHandler.onPlayerStateChanged(i);
                    session.getCallback().onPlayerStateChanged(session.getInstance(), baseMediaPlayer, i);
                    session.notifyToAllControllers(new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.MyPlayerEventCallback.3.1
                        @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
                        public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                            controllerCb.onPlayerStateChanged(SystemClock.elapsedRealtime(), baseMediaPlayer.getCurrentPosition(), i);
                        }
                    });
                }
            });
        }

        @Override // android.support.v4.media.BaseMediaPlayer.PlayerEventCallback
        public void onSeekCompleted(final BaseMediaPlayer baseMediaPlayer, final long j) {
            final MediaSession2ImplBase session = getSession();
            if (session == null) {
                return;
            }
            session.getCallbackExecutor().execute(new Runnable() { // from class: android.support.v4.media.MediaSession2ImplBase.MyPlayerEventCallback.6
                @Override // java.lang.Runnable
                public void run() {
                    session.getCallback().onSeekCompleted(session.getInstance(), baseMediaPlayer, j);
                    session.notifyToAllControllers(new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.MyPlayerEventCallback.6.1
                        @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
                        public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                            controllerCb.onSeekCompleted(SystemClock.elapsedRealtime(), session.getCurrentPosition(), j);
                        }
                    });
                }
            });
        }
    }

    private static class MyPlaylistEventCallback extends MediaPlaylistAgent.PlaylistEventCallback {
        private final WeakReference<MediaSession2ImplBase> mSession;

        private MyPlaylistEventCallback(MediaSession2ImplBase mediaSession2ImplBase) {
            this.mSession = new WeakReference<>(mediaSession2ImplBase);
        }

        @Override // android.support.v4.media.MediaPlaylistAgent.PlaylistEventCallback
        public void onPlaylistChanged(MediaPlaylistAgent mediaPlaylistAgent, List<MediaItem2> list, MediaMetadata2 mediaMetadata2) {
            MediaSession2ImplBase mediaSession2ImplBase = this.mSession.get();
            if (mediaSession2ImplBase == null) {
                return;
            }
            mediaSession2ImplBase.notifyPlaylistChangedOnExecutor(mediaPlaylistAgent, list, mediaMetadata2);
        }

        @Override // android.support.v4.media.MediaPlaylistAgent.PlaylistEventCallback
        public void onPlaylistMetadataChanged(MediaPlaylistAgent mediaPlaylistAgent, MediaMetadata2 mediaMetadata2) {
            MediaSession2ImplBase mediaSession2ImplBase = this.mSession.get();
            if (mediaSession2ImplBase == null) {
                return;
            }
            mediaSession2ImplBase.notifyPlaylistMetadataChangedOnExecutor(mediaPlaylistAgent, mediaMetadata2);
        }

        @Override // android.support.v4.media.MediaPlaylistAgent.PlaylistEventCallback
        public void onRepeatModeChanged(MediaPlaylistAgent mediaPlaylistAgent, int i) {
            MediaSession2ImplBase mediaSession2ImplBase = this.mSession.get();
            if (mediaSession2ImplBase == null) {
                return;
            }
            mediaSession2ImplBase.notifyRepeatModeChangedOnExecutor(mediaPlaylistAgent, i);
        }

        @Override // android.support.v4.media.MediaPlaylistAgent.PlaylistEventCallback
        public void onShuffleModeChanged(MediaPlaylistAgent mediaPlaylistAgent, int i) {
            MediaSession2ImplBase mediaSession2ImplBase = this.mSession.get();
            if (mediaSession2ImplBase == null) {
                return;
            }
            mediaSession2ImplBase.notifyShuffleModeChangedOnExecutor(mediaPlaylistAgent, i);
        }
    }

    @FunctionalInterface
    interface NotifyRunnable {
        void run(MediaSession2.ControllerCb controllerCb) throws RemoteException;
    }

    MediaSession2ImplBase(MediaSession2 mediaSession2, Context context, String str, BaseMediaPlayer baseMediaPlayer, MediaPlaylistAgent mediaPlaylistAgent, VolumeProviderCompat volumeProviderCompat, PendingIntent pendingIntent, Executor executor, MediaSession2.SessionCallback sessionCallback) throws Throwable {
        this.mContext = context;
        this.mInstance = mediaSession2;
        HandlerThread handlerThread = new HandlerThread("MediaController2_Thread");
        this.mHandlerThread = handlerThread;
        handlerThread.start();
        this.mHandler = new Handler(this.mHandlerThread.getLooper());
        this.mSession2Stub = new MediaSession2Stub(this);
        this.mSessionLegacyStub = new MediaSessionLegacyStub(this);
        this.mSessionActivity = pendingIntent;
        this.mCallback = sessionCallback;
        this.mCallbackExecutor = executor;
        this.mAudioManager = (AudioManager) context.getSystemService("audio");
        this.mPlayerEventCallback = new MyPlayerEventCallback();
        this.mPlaylistEventCallback = new MyPlaylistEventCallback();
        this.mAudioFocusHandler = new AudioFocusHandler(context, getInstance());
        String serviceName = getServiceName(context, MediaLibraryService2.SERVICE_INTERFACE, str);
        String serviceName2 = getServiceName(context, MediaSessionService2.SERVICE_INTERFACE, str);
        if (serviceName2 != null && serviceName != null) {
            throw new IllegalArgumentException("Ambiguous session type. Multiple session services define the same id=" + str);
        }
        if (serviceName != null) {
            this.mSessionToken = new SessionToken2(new SessionToken2ImplBase(Process.myUid(), 2, context.getPackageName(), serviceName, str, this.mSession2Stub));
        } else if (serviceName2 != null) {
            this.mSessionToken = new SessionToken2(new SessionToken2ImplBase(Process.myUid(), 1, context.getPackageName(), serviceName2, str, this.mSession2Stub));
        } else {
            this.mSessionToken = new SessionToken2(new SessionToken2ImplBase(Process.myUid(), 0, context.getPackageName(), null, str, this.mSession2Stub));
        }
        MediaSessionCompat mediaSessionCompat = new MediaSessionCompat(context, str, this.mSessionToken);
        this.mSessionCompat = mediaSessionCompat;
        mediaSessionCompat.setCallback(this.mSessionLegacyStub, this.mHandler);
        this.mSessionCompat.setSessionActivity(pendingIntent);
        updatePlayer(baseMediaPlayer, mediaPlaylistAgent, volumeProviderCompat);
    }

    private MediaController2.PlaybackInfo createPlaybackInfo(VolumeProviderCompat volumeProviderCompat, AudioAttributesCompat audioAttributesCompat) {
        if (volumeProviderCompat != null) {
            return MediaController2.PlaybackInfo.createPlaybackInfo(2, audioAttributesCompat, volumeProviderCompat.getVolumeControl(), volumeProviderCompat.getMaxVolume(), volumeProviderCompat.getCurrentVolume());
        }
        int legacyStreamType = getLegacyStreamType(audioAttributesCompat);
        int i = 2;
        if (Build.VERSION.SDK_INT >= 21 && this.mAudioManager.isVolumeFixed()) {
            i = 0;
        }
        return MediaController2.PlaybackInfo.createPlaybackInfo(1, audioAttributesCompat, i, this.mAudioManager.getStreamMaxVolume(legacyStreamType), this.mAudioManager.getStreamVolume(legacyStreamType));
    }

    private int getLegacyStreamType(AudioAttributesCompat audioAttributesCompat) {
        int legacyStreamType;
        if (audioAttributesCompat == null || (legacyStreamType = audioAttributesCompat.getLegacyStreamType()) == Integer.MIN_VALUE) {
            return 3;
        }
        return legacyStreamType;
    }

    private static String getServiceName(Context context, String str, String str2) {
        PackageManager packageManager = context.getPackageManager();
        Intent intent = new Intent(str);
        intent.setPackage(context.getPackageName());
        List<ResolveInfo> listQueryIntentServices = packageManager.queryIntentServices(intent, 128);
        String str3 = null;
        if (listQueryIntentServices != null) {
            for (int i = 0; i < listQueryIntentServices.size(); i++) {
                String sessionId = SessionToken2.getSessionId(listQueryIntentServices.get(i));
                if (sessionId != null && TextUtils.equals(str2, sessionId) && listQueryIntentServices.get(i).serviceInfo != null) {
                    if (str3 != null) {
                        throw new IllegalArgumentException("Ambiguous session type. Multiple session services define the same id=" + str2);
                    }
                    str3 = listQueryIntentServices.get(i).serviceInfo.name;
                }
            }
        }
        return str3;
    }

    private void notifyAgentUpdatedNotLocked(MediaPlaylistAgent mediaPlaylistAgent) throws Throwable {
        List<MediaItem2> playlist = mediaPlaylistAgent.getPlaylist();
        final List<MediaItem2> playlist2 = getPlaylist();
        if (ObjectsCompat.equals(playlist, playlist2)) {
            MediaMetadata2 playlistMetadata = mediaPlaylistAgent.getPlaylistMetadata();
            final MediaMetadata2 playlistMetadata2 = getPlaylistMetadata();
            if (!ObjectsCompat.equals(playlistMetadata, playlistMetadata2)) {
                notifyToAllControllers(new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.10
                    @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
                    public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                        controllerCb.onPlaylistMetadataChanged(playlistMetadata2);
                    }
                });
            }
        } else {
            notifyToAllControllers(new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.9
                @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
                public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                    controllerCb.onPlaylistChanged(playlist2, MediaSession2ImplBase.this.getPlaylistMetadata());
                }
            });
        }
        MediaItem2 currentMediaItem = mediaPlaylistAgent.getCurrentMediaItem();
        final MediaItem2 currentMediaItem2 = getCurrentMediaItem();
        if (!ObjectsCompat.equals(currentMediaItem, currentMediaItem2)) {
            notifyToAllControllers(new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.11
                @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
                public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                    controllerCb.onCurrentMediaItemChanged(currentMediaItem2);
                }
            });
        }
        final int repeatMode = getRepeatMode();
        if (mediaPlaylistAgent.getRepeatMode() != repeatMode) {
            notifyToAllControllers(new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.12
                @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
                public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                    controllerCb.onRepeatModeChanged(repeatMode);
                }
            });
        }
        final int shuffleMode = getShuffleMode();
        if (mediaPlaylistAgent.getShuffleMode() != shuffleMode) {
            notifyToAllControllers(new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.13
                @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
                public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                    controllerCb.onShuffleModeChanged(shuffleMode);
                }
            });
        }
    }

    private void notifyPlayerUpdatedNotLocked(BaseMediaPlayer baseMediaPlayer) throws Throwable {
        final long jElapsedRealtime = SystemClock.elapsedRealtime();
        final long currentPosition = getCurrentPosition();
        final int playerState = getPlayerState();
        notifyToAllControllers(new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.14
            @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
            public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                controllerCb.onPlayerStateChanged(jElapsedRealtime, currentPosition, playerState);
            }
        });
        final MediaItem2 currentMediaItem = getCurrentMediaItem();
        if (currentMediaItem != null) {
            final int bufferingState = getBufferingState();
            final long bufferedPosition = getBufferedPosition();
            notifyToAllControllers(new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.15
                @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
                public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                    controllerCb.onBufferingStateChanged(currentMediaItem, bufferingState, bufferedPosition);
                }
            });
        }
        final float playbackSpeed = getPlaybackSpeed();
        if (playbackSpeed != baseMediaPlayer.getPlaybackSpeed()) {
            notifyToAllControllers(new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.16
                @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
                public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                    controllerCb.onPlaybackSpeedChanged(jElapsedRealtime, currentPosition, playbackSpeed);
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyPlaylistChangedOnExecutor(MediaPlaylistAgent mediaPlaylistAgent, final List<MediaItem2> list, final MediaMetadata2 mediaMetadata2) {
        synchronized (this.mLock) {
            if (mediaPlaylistAgent != this.mPlaylistAgent) {
                return;
            }
            this.mCallback.onPlaylistChanged(this.mInstance, mediaPlaylistAgent, list, mediaMetadata2);
            notifyToAllControllers(new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.17
                @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
                public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                    controllerCb.onPlaylistChanged(list, mediaMetadata2);
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyPlaylistMetadataChangedOnExecutor(MediaPlaylistAgent mediaPlaylistAgent, final MediaMetadata2 mediaMetadata2) {
        synchronized (this.mLock) {
            if (mediaPlaylistAgent != this.mPlaylistAgent) {
                return;
            }
            this.mCallback.onPlaylistMetadataChanged(this.mInstance, mediaPlaylistAgent, mediaMetadata2);
            notifyToAllControllers(new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.18
                @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
                public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                    controllerCb.onPlaylistMetadataChanged(mediaMetadata2);
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyRepeatModeChangedOnExecutor(MediaPlaylistAgent mediaPlaylistAgent, final int i) {
        synchronized (this.mLock) {
            if (mediaPlaylistAgent != this.mPlaylistAgent) {
                return;
            }
            this.mCallback.onRepeatModeChanged(this.mInstance, mediaPlaylistAgent, i);
            notifyToAllControllers(new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.19
                @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
                public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                    controllerCb.onRepeatModeChanged(i);
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyShuffleModeChangedOnExecutor(MediaPlaylistAgent mediaPlaylistAgent, final int i) {
        synchronized (this.mLock) {
            if (mediaPlaylistAgent != this.mPlaylistAgent) {
                return;
            }
            this.mCallback.onShuffleModeChanged(this.mInstance, mediaPlaylistAgent, i);
            notifyToAllControllers(new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.20
                @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
                public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                    controllerCb.onShuffleModeChanged(i);
                }
            });
        }
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public void addPlaylistItem(int i, MediaItem2 mediaItem2) throws Throwable {
        if (i < 0) {
            throw new IllegalArgumentException("index shouldn't be negative");
        }
        if (mediaItem2 == null) {
            throw new IllegalArgumentException("item shouldn't be null");
        }
        synchronized (this.mLock) {
            try {
                try {
                    MediaPlaylistAgent mediaPlaylistAgent = this.mPlaylistAgent;
                    if (mediaPlaylistAgent != null) {
                        mediaPlaylistAgent.addPlaylistItem(i, mediaItem2);
                    } else if (DEBUG) {
                        Log.d(TAG, "API calls after the close()", new IllegalStateException());
                    }
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
                throw th;
            }
        }
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public void clearOnDataSourceMissingHelper() {
        synchronized (this.mLock) {
            this.mDsmHelper = null;
            if (this.mSessionPlaylistAgent != null) {
                this.mSessionPlaylistAgent.clearOnDataSourceMissingHelper();
            }
        }
    }

    @Override // java.lang.AutoCloseable
    public void close() {
        synchronized (this.mLock) {
            if (this.mPlayer == null) {
                return;
            }
            this.mAudioFocusHandler.close();
            this.mPlayer.unregisterPlayerEventCallback(this.mPlayerEventCallback);
            this.mPlayer = null;
            this.mSessionCompat.release();
            notifyToAllControllers(new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.2
                @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
                public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                    controllerCb.onDisconnected();
                }
            });
            this.mHandler.removeCallbacksAndMessages(null);
            if (this.mHandlerThread.isAlive()) {
                if (Build.VERSION.SDK_INT >= 18) {
                    this.mHandlerThread.quitSafely();
                } else {
                    this.mHandlerThread.quit();
                }
            }
        }
    }

    @Override // android.support.v4.media.MediaSession2.SupportLibraryImpl
    public AudioFocusHandler getAudioFocusHandler() {
        return this.mAudioFocusHandler;
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaybackControl
    public long getBufferedPosition() throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    BaseMediaPlayer baseMediaPlayer = this.mPlayer;
                    if (baseMediaPlayer != null) {
                        return baseMediaPlayer.getBufferedPosition();
                    }
                    if (!DEBUG) {
                        return -1L;
                    }
                    Log.d(TAG, "API calls after the close()", new IllegalStateException());
                    return -1L;
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
                throw th;
            }
        }
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaybackControl
    public int getBufferingState() throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    BaseMediaPlayer baseMediaPlayer = this.mPlayer;
                    if (baseMediaPlayer != null) {
                        return baseMediaPlayer.getBufferingState();
                    }
                    if (!DEBUG) {
                        return 0;
                    }
                    Log.d(TAG, "API calls after the close()", new IllegalStateException());
                    return 0;
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
            }
        }
    }

    @Override // android.support.v4.media.MediaSession2.SupportLibraryImpl
    public MediaSession2.SessionCallback getCallback() {
        return this.mCallback;
    }

    @Override // android.support.v4.media.MediaSession2.SupportLibraryImpl
    public Executor getCallbackExecutor() {
        return this.mCallbackExecutor;
    }

    @Override // android.support.v4.media.MediaSession2.SupportLibraryImpl
    public List<MediaSession2.ControllerInfo> getConnectedControllers() {
        return this.mSession2Stub.getConnectedControllers();
    }

    @Override // android.support.v4.media.MediaSession2.SupportLibraryImpl
    public Context getContext() {
        return this.mContext;
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public MediaItem2 getCurrentMediaItem() throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    MediaPlaylistAgent mediaPlaylistAgent = this.mPlaylistAgent;
                    if (mediaPlaylistAgent != null) {
                        return mediaPlaylistAgent.getCurrentMediaItem();
                    }
                    if (DEBUG) {
                        Log.d(TAG, "API calls after the close()", new IllegalStateException());
                    }
                    return null;
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
            }
        }
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaybackControl
    public long getCurrentPosition() throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    BaseMediaPlayer baseMediaPlayer = this.mPlayer;
                    if (baseMediaPlayer != null) {
                        return baseMediaPlayer.getCurrentPosition();
                    }
                    if (!DEBUG) {
                        return -1L;
                    }
                    Log.d(TAG, "API calls after the close()", new IllegalStateException());
                    return -1L;
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
                throw th;
            }
        }
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaybackControl
    public long getDuration() throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    BaseMediaPlayer baseMediaPlayer = this.mPlayer;
                    if (baseMediaPlayer != null) {
                        return baseMediaPlayer.getDuration();
                    }
                    if (!DEBUG) {
                        return -1L;
                    }
                    Log.d(TAG, "API calls after the close()", new IllegalStateException());
                    return -1L;
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
                throw th;
            }
        }
    }

    @Override // android.support.v4.media.MediaSession2.SupportLibraryImpl
    public MediaSession2 getInstance() {
        return this.mInstance;
    }

    @Override // android.support.v4.media.MediaSession2.SupportLibraryImpl
    public MediaController2.PlaybackInfo getPlaybackInfo() {
        MediaController2.PlaybackInfo playbackInfo;
        synchronized (this.mLock) {
            playbackInfo = this.mPlaybackInfo;
        }
        return playbackInfo;
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaybackControl
    public float getPlaybackSpeed() throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    BaseMediaPlayer baseMediaPlayer = this.mPlayer;
                    if (baseMediaPlayer != null) {
                        return baseMediaPlayer.getPlaybackSpeed();
                    }
                    if (!DEBUG) {
                        return 1.0f;
                    }
                    Log.d(TAG, "API calls after the close()", new IllegalStateException());
                    return 1.0f;
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
                throw th;
            }
        }
    }

    @Override // android.support.v4.media.MediaSession2.SupportLibraryImpl
    public PlaybackStateCompat getPlaybackStateCompat() {
        PlaybackStateCompat playbackStateCompatBuild;
        synchronized (this.mLock) {
            playbackStateCompatBuild = new PlaybackStateCompat.Builder().setState(MediaUtils2.convertToPlaybackStateCompatState(getPlayerState(), getBufferingState()), getCurrentPosition(), getPlaybackSpeed()).setActions(3670015L).setBufferedPosition(getBufferedPosition()).build();
        }
        return playbackStateCompatBuild;
    }

    @Override // android.support.v4.media.MediaSession2.SupportLibraryImpl
    public BaseMediaPlayer getPlayer() {
        BaseMediaPlayer baseMediaPlayer;
        synchronized (this.mLock) {
            baseMediaPlayer = this.mPlayer;
        }
        return baseMediaPlayer;
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaybackControl
    public int getPlayerState() throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    BaseMediaPlayer baseMediaPlayer = this.mPlayer;
                    if (baseMediaPlayer != null) {
                        return baseMediaPlayer.getPlayerState();
                    }
                    if (!DEBUG) {
                        return 3;
                    }
                    Log.d(TAG, "API calls after the close()", new IllegalStateException());
                    return 3;
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
            }
        }
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public List<MediaItem2> getPlaylist() throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    MediaPlaylistAgent mediaPlaylistAgent = this.mPlaylistAgent;
                    if (mediaPlaylistAgent != null) {
                        return mediaPlaylistAgent.getPlaylist();
                    }
                    if (DEBUG) {
                        Log.d(TAG, "API calls after the close()", new IllegalStateException());
                    }
                    return null;
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
            }
        }
    }

    @Override // android.support.v4.media.MediaSession2.SupportLibraryImpl
    public MediaPlaylistAgent getPlaylistAgent() {
        MediaPlaylistAgent mediaPlaylistAgent;
        synchronized (this.mLock) {
            mediaPlaylistAgent = this.mPlaylistAgent;
        }
        return mediaPlaylistAgent;
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public MediaMetadata2 getPlaylistMetadata() throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    MediaPlaylistAgent mediaPlaylistAgent = this.mPlaylistAgent;
                    if (mediaPlaylistAgent != null) {
                        return mediaPlaylistAgent.getPlaylistMetadata();
                    }
                    if (DEBUG) {
                        Log.d(TAG, "API calls after the close()", new IllegalStateException());
                    }
                    return null;
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
            }
        }
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public int getRepeatMode() throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    MediaPlaylistAgent mediaPlaylistAgent = this.mPlaylistAgent;
                    if (mediaPlaylistAgent != null) {
                        return mediaPlaylistAgent.getRepeatMode();
                    }
                    if (!DEBUG) {
                        return 0;
                    }
                    Log.d(TAG, "API calls after the close()", new IllegalStateException());
                    return 0;
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
            }
        }
    }

    @Override // android.support.v4.media.MediaSession2.SupportLibraryImpl
    public PendingIntent getSessionActivity() {
        return this.mSessionActivity;
    }

    @Override // android.support.v4.media.MediaSession2.SupportLibraryImpl
    public IBinder getSessionBinder() {
        return this.mSession2Stub.asBinder();
    }

    @Override // android.support.v4.media.MediaSession2.SupportLibraryImpl
    public MediaSessionCompat getSessionCompat() {
        return this.mSessionCompat;
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public int getShuffleMode() throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    MediaPlaylistAgent mediaPlaylistAgent = this.mPlaylistAgent;
                    if (mediaPlaylistAgent != null) {
                        return mediaPlaylistAgent.getShuffleMode();
                    }
                    if (!DEBUG) {
                        return 0;
                    }
                    Log.d(TAG, "API calls after the close()", new IllegalStateException());
                    return 0;
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
            }
        }
    }

    @Override // android.support.v4.media.MediaSession2.SupportLibraryImpl
    public SessionToken2 getToken() {
        return this.mSessionToken;
    }

    @Override // android.support.v4.media.MediaSession2.SupportLibraryImpl
    public VolumeProviderCompat getVolumeProvider() {
        VolumeProviderCompat volumeProviderCompat;
        synchronized (this.mLock) {
            volumeProviderCompat = this.mVolumeProvider;
        }
        return volumeProviderCompat;
    }

    @Override // android.support.v4.media.MediaSession2.SupportLibraryImpl
    public boolean isClosed() {
        return !this.mHandlerThread.isAlive();
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlayer
    public void notifyError(final int i, final Bundle bundle) {
        notifyToAllControllers(new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.7
            @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
            public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                controllerCb.onError(i, bundle);
            }
        });
    }

    @Override // android.support.v4.media.MediaSession2.SupportLibraryImpl
    public void notifyRoutesInfoChanged(MediaSession2.ControllerInfo controllerInfo, final List<Bundle> list) {
        notifyToController(controllerInfo, new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.8
            @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
            public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                controllerCb.onRoutesInfoChanged(list);
            }
        });
    }

    void notifyToAllControllers(NotifyRunnable notifyRunnable) {
        List<MediaSession2.ControllerInfo> connectedControllers = getConnectedControllers();
        for (int i = 0; i < connectedControllers.size(); i++) {
            notifyToController(connectedControllers.get(i), notifyRunnable);
        }
    }

    void notifyToController(final MediaSession2.ControllerInfo controllerInfo, NotifyRunnable notifyRunnable) {
        if (controllerInfo == null) {
            return;
        }
        try {
            notifyRunnable.run(controllerInfo.getControllerCb());
        } catch (DeadObjectException e) {
            if (DEBUG) {
                Log.d(TAG, controllerInfo.toString() + " is gone", e);
            }
            this.mSession2Stub.removeControllerInfo(controllerInfo);
            this.mCallbackExecutor.execute(new Runnable() { // from class: android.support.v4.media.MediaSession2ImplBase.21
                @Override // java.lang.Runnable
                public void run() {
                    MediaSession2ImplBase.this.mCallback.onDisconnected(MediaSession2ImplBase.this.getInstance(), controllerInfo);
                }
            });
        } catch (RemoteException e2) {
            Log.w(TAG, "Exception in " + controllerInfo.toString(), e2);
        }
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaybackControl
    public void pause() throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    BaseMediaPlayer baseMediaPlayer = this.mPlayer;
                    if (baseMediaPlayer == null) {
                        if (DEBUG) {
                            Log.d(TAG, "API calls after the close()", new IllegalStateException());
                        }
                    } else if (this.mAudioFocusHandler.onPauseRequested()) {
                        baseMediaPlayer.pause();
                    } else {
                        Log.w(TAG, "pause() wouldn't be called of the failure in audio focus");
                    }
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
                throw th;
            }
        }
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaybackControl
    public void play() throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    BaseMediaPlayer baseMediaPlayer = this.mPlayer;
                    if (baseMediaPlayer == null) {
                        if (DEBUG) {
                            Log.d(TAG, "API calls after the close()", new IllegalStateException());
                        }
                    } else if (this.mAudioFocusHandler.onPlayRequested()) {
                        baseMediaPlayer.play();
                    } else {
                        Log.w(TAG, "play() wouldn't be called because of the failure in audio focus");
                    }
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
                throw th;
            }
        }
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaybackControl
    public void prepare() throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    BaseMediaPlayer baseMediaPlayer = this.mPlayer;
                    if (baseMediaPlayer != null) {
                        baseMediaPlayer.prepare();
                    } else if (DEBUG) {
                        Log.d(TAG, "API calls after the close()", new IllegalStateException());
                    }
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
                throw th;
            }
        }
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public void removePlaylistItem(MediaItem2 mediaItem2) throws Throwable {
        if (mediaItem2 == null) {
            throw new IllegalArgumentException("item shouldn't be null");
        }
        synchronized (this.mLock) {
            try {
                try {
                    MediaPlaylistAgent mediaPlaylistAgent = this.mPlaylistAgent;
                    if (mediaPlaylistAgent != null) {
                        mediaPlaylistAgent.removePlaylistItem(mediaItem2);
                    } else if (DEBUG) {
                        Log.d(TAG, "API calls after the close()", new IllegalStateException());
                    }
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
            }
        }
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public void replacePlaylistItem(int i, MediaItem2 mediaItem2) throws Throwable {
        if (i < 0) {
            throw new IllegalArgumentException("index shouldn't be negative");
        }
        if (mediaItem2 == null) {
            throw new IllegalArgumentException("item shouldn't be null");
        }
        synchronized (this.mLock) {
            try {
                try {
                    MediaPlaylistAgent mediaPlaylistAgent = this.mPlaylistAgent;
                    if (mediaPlaylistAgent != null) {
                        mediaPlaylistAgent.replacePlaylistItem(i, mediaItem2);
                    } else if (DEBUG) {
                        Log.d(TAG, "API calls after the close()", new IllegalStateException());
                    }
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
                throw th;
            }
        }
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaybackControl
    public void reset() throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    BaseMediaPlayer baseMediaPlayer = this.mPlayer;
                    if (baseMediaPlayer != null) {
                        baseMediaPlayer.reset();
                    } else if (DEBUG) {
                        Log.d(TAG, "API calls after the close()", new IllegalStateException());
                    }
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
                throw th;
            }
        }
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaybackControl
    public void seekTo(long j) throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    BaseMediaPlayer baseMediaPlayer = this.mPlayer;
                    if (baseMediaPlayer != null) {
                        baseMediaPlayer.seekTo(j);
                    } else if (DEBUG) {
                        Log.d(TAG, "API calls after the close()", new IllegalStateException());
                    }
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
                throw th;
            }
        }
    }

    @Override // android.support.v4.media.MediaSession2.SupportLibraryImpl
    public void sendCustomCommand(MediaSession2.ControllerInfo controllerInfo, final SessionCommand2 sessionCommand2, final Bundle bundle, final ResultReceiver resultReceiver) {
        if (controllerInfo == null) {
            throw new IllegalArgumentException("controller shouldn't be null");
        }
        if (sessionCommand2 == null) {
            throw new IllegalArgumentException("command shouldn't be null");
        }
        notifyToController(controllerInfo, new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.6
            @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
            public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                controllerCb.onCustomCommand(sessionCommand2, bundle, resultReceiver);
            }
        });
    }

    @Override // android.support.v4.media.MediaSession2.SupportLibraryImpl
    public void sendCustomCommand(final SessionCommand2 sessionCommand2, final Bundle bundle) {
        if (sessionCommand2 == null) {
            throw new IllegalArgumentException("command shouldn't be null");
        }
        notifyToAllControllers(new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.5
            @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
            public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                controllerCb.onCustomCommand(sessionCommand2, bundle, null);
            }
        });
    }

    @Override // android.support.v4.media.MediaSession2.SupportLibraryImpl
    public void setAllowedCommands(MediaSession2.ControllerInfo controllerInfo, final SessionCommandGroup2 sessionCommandGroup2) {
        if (controllerInfo == null) {
            throw new IllegalArgumentException("controller shouldn't be null");
        }
        if (sessionCommandGroup2 == null) {
            throw new IllegalArgumentException("commands shouldn't be null");
        }
        this.mSession2Stub.setAllowedCommands(controllerInfo, sessionCommandGroup2);
        notifyToController(controllerInfo, new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.4
            @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
            public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                controllerCb.onAllowedCommandsChanged(sessionCommandGroup2);
            }
        });
    }

    @Override // android.support.v4.media.MediaSession2.SupportLibraryImpl
    public void setCustomLayout(MediaSession2.ControllerInfo controllerInfo, final List<MediaSession2.CommandButton> list) {
        if (controllerInfo == null) {
            throw new IllegalArgumentException("controller shouldn't be null");
        }
        if (list == null) {
            throw new IllegalArgumentException("layout shouldn't be null");
        }
        notifyToController(controllerInfo, new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.3
            @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
            public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                controllerCb.onCustomLayoutChanged(list);
            }
        });
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public void setOnDataSourceMissingHelper(MediaSession2.OnDataSourceMissingHelper onDataSourceMissingHelper) {
        if (onDataSourceMissingHelper == null) {
            throw new IllegalArgumentException("helper shouldn't be null");
        }
        synchronized (this.mLock) {
            this.mDsmHelper = onDataSourceMissingHelper;
            if (this.mSessionPlaylistAgent != null) {
                this.mSessionPlaylistAgent.setOnDataSourceMissingHelper(onDataSourceMissingHelper);
            }
        }
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaybackControl
    public void setPlaybackSpeed(float f) throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    BaseMediaPlayer baseMediaPlayer = this.mPlayer;
                    if (baseMediaPlayer != null) {
                        baseMediaPlayer.setPlaybackSpeed(f);
                    } else if (DEBUG) {
                        Log.d(TAG, "API calls after the close()", new IllegalStateException());
                    }
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
                throw th;
            }
        }
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public void setPlaylist(List<MediaItem2> list, MediaMetadata2 mediaMetadata2) throws Throwable {
        if (list == null) {
            throw new IllegalArgumentException("list shouldn't be null");
        }
        synchronized (this.mLock) {
            try {
                try {
                    MediaPlaylistAgent mediaPlaylistAgent = this.mPlaylistAgent;
                    if (mediaPlaylistAgent != null) {
                        mediaPlaylistAgent.setPlaylist(list, mediaMetadata2);
                    } else if (DEBUG) {
                        Log.d(TAG, "API calls after the close()", new IllegalStateException());
                    }
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
            }
        }
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public void setRepeatMode(int i) throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    MediaPlaylistAgent mediaPlaylistAgent = this.mPlaylistAgent;
                    if (mediaPlaylistAgent != null) {
                        mediaPlaylistAgent.setRepeatMode(i);
                    } else if (DEBUG) {
                        Log.d(TAG, "API calls after the close()", new IllegalStateException());
                    }
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
                throw th;
            }
        }
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public void setShuffleMode(int i) throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    MediaPlaylistAgent mediaPlaylistAgent = this.mPlaylistAgent;
                    if (mediaPlaylistAgent != null) {
                        mediaPlaylistAgent.setShuffleMode(i);
                    } else if (DEBUG) {
                        Log.d(TAG, "API calls after the close()", new IllegalStateException());
                    }
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
                throw th;
            }
        }
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlayer
    public void skipBackward() {
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlayer
    public void skipForward() {
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public void skipToNextItem() throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    MediaPlaylistAgent mediaPlaylistAgent = this.mPlaylistAgent;
                    if (mediaPlaylistAgent != null) {
                        mediaPlaylistAgent.skipToNextItem();
                    } else if (DEBUG) {
                        Log.d(TAG, "API calls after the close()", new IllegalStateException());
                    }
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
                throw th;
            }
        }
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public void skipToPlaylistItem(MediaItem2 mediaItem2) throws Throwable {
        if (mediaItem2 == null) {
            throw new IllegalArgumentException("item shouldn't be null");
        }
        synchronized (this.mLock) {
            try {
                try {
                    MediaPlaylistAgent mediaPlaylistAgent = this.mPlaylistAgent;
                    if (mediaPlaylistAgent != null) {
                        mediaPlaylistAgent.skipToPlaylistItem(mediaItem2);
                    } else if (DEBUG) {
                        Log.d(TAG, "API calls after the close()", new IllegalStateException());
                    }
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
            }
        }
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public void skipToPreviousItem() throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    MediaPlaylistAgent mediaPlaylistAgent = this.mPlaylistAgent;
                    if (mediaPlaylistAgent != null) {
                        mediaPlaylistAgent.skipToPreviousItem();
                    } else if (DEBUG) {
                        Log.d(TAG, "API calls after the close()", new IllegalStateException());
                    }
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
                throw th;
            }
        }
    }

    @Override // android.support.v4.media.MediaSession2.SupportLibraryImpl
    public void updatePlayer(BaseMediaPlayer baseMediaPlayer, MediaPlaylistAgent mediaPlaylistAgent, VolumeProviderCompat volumeProviderCompat) throws Throwable {
        if (baseMediaPlayer == null) {
            throw new IllegalArgumentException("player shouldn't be null");
        }
        final MediaController2.PlaybackInfo playbackInfoCreatePlaybackInfo = createPlaybackInfo(volumeProviderCompat, baseMediaPlayer.getAudioAttributes());
        synchronized (this.mLock) {
            try {
                try {
                    boolean z = this.mPlayer != baseMediaPlayer;
                    try {
                        boolean z2 = this.mPlaylistAgent != mediaPlaylistAgent;
                        try {
                            boolean z3 = this.mPlaybackInfo != playbackInfoCreatePlaybackInfo;
                            try {
                                BaseMediaPlayer baseMediaPlayer2 = this.mPlayer;
                                try {
                                    MediaPlaylistAgent mediaPlaylistAgent2 = this.mPlaylistAgent;
                                    this.mPlayer = baseMediaPlayer;
                                    if (mediaPlaylistAgent == null) {
                                        SessionPlaylistAgentImplBase sessionPlaylistAgentImplBase = new SessionPlaylistAgentImplBase(this, baseMediaPlayer);
                                        this.mSessionPlaylistAgent = sessionPlaylistAgentImplBase;
                                        if (this.mDsmHelper != null) {
                                            sessionPlaylistAgentImplBase.setOnDataSourceMissingHelper(this.mDsmHelper);
                                        }
                                        mediaPlaylistAgent = this.mSessionPlaylistAgent;
                                    }
                                    this.mPlaylistAgent = mediaPlaylistAgent;
                                    this.mVolumeProvider = volumeProviderCompat;
                                    this.mPlaybackInfo = playbackInfoCreatePlaybackInfo;
                                    if (volumeProviderCompat == null) {
                                        this.mSessionCompat.setPlaybackToLocal(getLegacyStreamType(baseMediaPlayer.getAudioAttributes()));
                                    }
                                    if (baseMediaPlayer != baseMediaPlayer2) {
                                        baseMediaPlayer.registerPlayerEventCallback(this.mCallbackExecutor, this.mPlayerEventCallback);
                                        if (baseMediaPlayer2 != null) {
                                            baseMediaPlayer2.unregisterPlayerEventCallback(this.mPlayerEventCallback);
                                        }
                                    }
                                    if (mediaPlaylistAgent != mediaPlaylistAgent2) {
                                        mediaPlaylistAgent.registerPlaylistEventCallback(this.mCallbackExecutor, this.mPlaylistEventCallback);
                                        if (mediaPlaylistAgent2 != null) {
                                            mediaPlaylistAgent2.unregisterPlaylistEventCallback(this.mPlaylistEventCallback);
                                        }
                                    }
                                    if (baseMediaPlayer2 != null) {
                                        if (z2) {
                                            notifyAgentUpdatedNotLocked(mediaPlaylistAgent2);
                                        }
                                        if (z) {
                                            notifyPlayerUpdatedNotLocked(baseMediaPlayer2);
                                        }
                                        if (z3) {
                                            notifyToAllControllers(new NotifyRunnable() { // from class: android.support.v4.media.MediaSession2ImplBase.1
                                                @Override // android.support.v4.media.MediaSession2ImplBase.NotifyRunnable
                                                public void run(MediaSession2.ControllerCb controllerCb) throws RemoteException {
                                                    controllerCb.onPlaybackInfoChanged(playbackInfoCreatePlaybackInfo);
                                                }
                                            });
                                        }
                                    }
                                } catch (Throwable th) {
                                    th = th;
                                    throw th;
                                }
                            } catch (Throwable th2) {
                                th = th2;
                                throw th;
                            }
                        } catch (Throwable th3) {
                            th = th3;
                        }
                    } catch (Throwable th4) {
                        th = th4;
                    }
                } catch (Throwable th5) {
                    th = th5;
                }
            } catch (Throwable th6) {
                th = th6;
            }
        }
    }

    @Override // android.support.v4.media.MediaInterface2.SessionPlaylistControl
    public void updatePlaylistMetadata(MediaMetadata2 mediaMetadata2) throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    MediaPlaylistAgent mediaPlaylistAgent = this.mPlaylistAgent;
                    if (mediaPlaylistAgent != null) {
                        mediaPlaylistAgent.updatePlaylistMetadata(mediaMetadata2);
                    } else if (DEBUG) {
                        Log.d(TAG, "API calls after the close()", new IllegalStateException());
                    }
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
                throw th;
            }
        }
    }
}
