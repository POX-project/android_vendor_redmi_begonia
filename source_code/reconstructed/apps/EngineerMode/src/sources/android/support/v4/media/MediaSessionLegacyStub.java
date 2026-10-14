package android.support.v4.media;

import android.content.Context;
import android.os.Bundle;
import android.os.IBinder;
import android.os.Parcelable;
import android.os.RemoteException;
import android.os.ResultReceiver;
import android.support.v4.app.BundleCompat;
import android.support.v4.media.session.IMediaControllerCallback;
import android.support.v4.media.session.MediaSessionCompat;
import android.support.v4.util.ArrayMap;
import android.util.Log;
import android.util.SparseArray;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

/* JADX INFO: loaded from: classes2.dex */
class MediaSessionLegacyStub extends MediaSessionCompat.Callback {
    final Context mContext;
    final MediaSession2.SupportLibraryImpl mSession;
    private static final String TAG = "MediaSessionLegacyStub";
    private static final boolean DEBUG = Log.isLoggable(TAG, 3);
    private static final SparseArray<SessionCommand2> sCommandsForOnCommandRequest = new SparseArray<>();
    private final Object mLock = new Object();
    private final ArrayMap<IBinder, MediaSession2.ControllerInfo> mControllers = new ArrayMap<>();
    private final Set<IBinder> mConnectingControllers = new HashSet();
    private final ArrayMap<MediaSession2.ControllerInfo, SessionCommandGroup2> mAllowedCommandGroupMap = new ArrayMap<>();

    final class ControllerLegacyCb extends MediaSession2.ControllerCb {
        private final IMediaControllerCallback mIControllerCallback;

        ControllerLegacyCb(IMediaControllerCallback iMediaControllerCallback) {
            this.mIControllerCallback = iMediaControllerCallback;
        }

        @Override // android.support.v4.media.MediaSession2.ControllerCb
        IBinder getId() {
            return this.mIControllerCallback.asBinder();
        }

        @Override // android.support.v4.media.MediaSession2.ControllerCb
        void onAllowedCommandsChanged(SessionCommandGroup2 sessionCommandGroup2) throws RemoteException {
            Bundle bundle = new Bundle();
            bundle.putBundle("android.support.v4.media.argument.ALLOWED_COMMANDS", sessionCommandGroup2.toBundle());
            this.mIControllerCallback.onEvent("android.support.v4.media.session.event.ON_ALLOWED_COMMANDS_CHANGED", bundle);
        }

        @Override // android.support.v4.media.MediaSession2.ControllerCb
        void onBufferingStateChanged(MediaItem2 mediaItem2, int i, long j) throws RemoteException {
            Bundle bundle = new Bundle();
            bundle.putBundle("android.support.v4.media.argument.MEDIA_ITEM", mediaItem2.toBundle());
            bundle.putInt("android.support.v4.media.argument.BUFFERING_STATE", i);
            bundle.putParcelable("android.support.v4.media.argument.PLAYBACK_STATE_COMPAT", MediaSessionLegacyStub.this.mSession.getPlaybackStateCompat());
            this.mIControllerCallback.onEvent("android.support.v4.media.session.event.ON_BUFFERING_STATE_CHANGED", bundle);
        }

        @Override // android.support.v4.media.MediaSession2.ControllerCb
        void onChildrenChanged(String str, int i, Bundle bundle) throws RemoteException {
        }

        @Override // android.support.v4.media.MediaSession2.ControllerCb
        void onCurrentMediaItemChanged(MediaItem2 mediaItem2) throws RemoteException {
            Bundle bundle = new Bundle();
            bundle.putBundle("android.support.v4.media.argument.MEDIA_ITEM", mediaItem2 == null ? null : mediaItem2.toBundle());
            this.mIControllerCallback.onEvent("android.support.v4.media.session.event.ON_CURRENT_MEDIA_ITEM_CHANGED", bundle);
        }

        @Override // android.support.v4.media.MediaSession2.ControllerCb
        void onCustomCommand(SessionCommand2 sessionCommand2, Bundle bundle, ResultReceiver resultReceiver) throws RemoteException {
            Bundle bundle2 = new Bundle();
            bundle2.putBundle("android.support.v4.media.argument.CUSTOM_COMMAND", sessionCommand2.toBundle());
            bundle2.putBundle("android.support.v4.media.argument.ARGUMENTS", bundle);
            bundle2.putParcelable("android.support.v4.media.argument.RESULT_RECEIVER", resultReceiver);
            this.mIControllerCallback.onEvent("android.support.v4.media.session.event.SEND_CUSTOM_COMMAND", bundle2);
        }

        @Override // android.support.v4.media.MediaSession2.ControllerCb
        void onCustomLayoutChanged(List<MediaSession2.CommandButton> list) throws RemoteException {
            Bundle bundle = new Bundle();
            bundle.putParcelableArray("android.support.v4.media.argument.COMMAND_BUTTONS", MediaUtils2.convertCommandButtonListToParcelableArray(list));
            this.mIControllerCallback.onEvent("android.support.v4.media.session.event.SET_CUSTOM_LAYOUT", bundle);
        }

        @Override // android.support.v4.media.MediaSession2.ControllerCb
        void onDisconnected() throws RemoteException {
            this.mIControllerCallback.onSessionDestroyed();
        }

        @Override // android.support.v4.media.MediaSession2.ControllerCb
        void onError(int i, Bundle bundle) throws RemoteException {
            Bundle bundle2 = new Bundle();
            bundle2.putInt("android.support.v4.media.argument.ERROR_CODE", i);
            bundle2.putBundle("android.support.v4.media.argument.EXTRAS", bundle);
            this.mIControllerCallback.onEvent("android.support.v4.media.session.event.ON_ERROR", bundle2);
        }

        @Override // android.support.v4.media.MediaSession2.ControllerCb
        void onGetChildrenDone(String str, int i, int i2, List<MediaItem2> list, Bundle bundle) throws RemoteException {
        }

        @Override // android.support.v4.media.MediaSession2.ControllerCb
        void onGetItemDone(String str, MediaItem2 mediaItem2) throws RemoteException {
        }

        @Override // android.support.v4.media.MediaSession2.ControllerCb
        void onGetLibraryRootDone(Bundle bundle, String str, Bundle bundle2) throws RemoteException {
        }

        @Override // android.support.v4.media.MediaSession2.ControllerCb
        void onGetSearchResultDone(String str, int i, int i2, List<MediaItem2> list, Bundle bundle) throws RemoteException {
        }

        @Override // android.support.v4.media.MediaSession2.ControllerCb
        void onPlaybackInfoChanged(MediaController2.PlaybackInfo playbackInfo) throws RemoteException {
            Bundle bundle = new Bundle();
            bundle.putBundle("android.support.v4.media.argument.PLAYBACK_INFO", playbackInfo.toBundle());
            this.mIControllerCallback.onEvent("android.support.v4.media.session.event.ON_PLAYBACK_INFO_CHANGED", bundle);
        }

        @Override // android.support.v4.media.MediaSession2.ControllerCb
        void onPlaybackSpeedChanged(long j, long j2, float f) throws RemoteException {
            Bundle bundle = new Bundle();
            bundle.putParcelable("android.support.v4.media.argument.PLAYBACK_STATE_COMPAT", MediaSessionLegacyStub.this.mSession.getPlaybackStateCompat());
            this.mIControllerCallback.onEvent("android.support.v4.media.session.event.ON_PLAYBACK_SPEED_CHANGED", bundle);
        }

        @Override // android.support.v4.media.MediaSession2.ControllerCb
        void onPlayerStateChanged(long j, long j2, int i) throws RemoteException {
            Bundle bundle = new Bundle();
            bundle.putInt("android.support.v4.media.argument.PLAYER_STATE", i);
            bundle.putParcelable("android.support.v4.media.argument.PLAYBACK_STATE_COMPAT", MediaSessionLegacyStub.this.mSession.getPlaybackStateCompat());
            this.mIControllerCallback.onEvent("android.support.v4.media.session.event.ON_PLAYER_STATE_CHANGED", bundle);
        }

        @Override // android.support.v4.media.MediaSession2.ControllerCb
        void onPlaylistChanged(List<MediaItem2> list, MediaMetadata2 mediaMetadata2) throws RemoteException {
            Bundle bundle = new Bundle();
            bundle.putParcelableArray("android.support.v4.media.argument.PLAYLIST", MediaUtils2.convertMediaItem2ListToParcelableArray(list));
            bundle.putBundle("android.support.v4.media.argument.PLAYLIST_METADATA", mediaMetadata2 == null ? null : mediaMetadata2.toBundle());
            this.mIControllerCallback.onEvent("android.support.v4.media.session.event.ON_PLAYLIST_CHANGED", bundle);
        }

        @Override // android.support.v4.media.MediaSession2.ControllerCb
        void onPlaylistMetadataChanged(MediaMetadata2 mediaMetadata2) throws RemoteException {
            Bundle bundle = new Bundle();
            bundle.putBundle("android.support.v4.media.argument.PLAYLIST_METADATA", mediaMetadata2 == null ? null : mediaMetadata2.toBundle());
            this.mIControllerCallback.onEvent("android.support.v4.media.session.event.ON_PLAYLIST_METADATA_CHANGED", bundle);
        }

        @Override // android.support.v4.media.MediaSession2.ControllerCb
        void onRepeatModeChanged(int i) throws RemoteException {
            Bundle bundle = new Bundle();
            bundle.putInt("android.support.v4.media.argument.REPEAT_MODE", i);
            this.mIControllerCallback.onEvent("android.support.v4.media.session.event.ON_REPEAT_MODE_CHANGED", bundle);
        }

        @Override // android.support.v4.media.MediaSession2.ControllerCb
        void onRoutesInfoChanged(List<Bundle> list) throws RemoteException {
            Bundle bundle = null;
            if (list != null) {
                bundle = new Bundle();
                bundle.putParcelableArray("android.support.v4.media.argument.ROUTE_BUNDLE", (Parcelable[]) list.toArray(new Bundle[0]));
            }
            this.mIControllerCallback.onEvent("android.support.v4.media.session.event.ON_ROUTES_INFO_CHANGED", bundle);
        }

        @Override // android.support.v4.media.MediaSession2.ControllerCb
        void onSearchResultChanged(String str, int i, Bundle bundle) throws RemoteException {
        }

        @Override // android.support.v4.media.MediaSession2.ControllerCb
        void onSeekCompleted(long j, long j2, long j3) throws RemoteException {
            Bundle bundle = new Bundle();
            bundle.putLong("android.support.v4.media.argument.SEEK_POSITION", j3);
            bundle.putParcelable("android.support.v4.media.argument.PLAYBACK_STATE_COMPAT", MediaSessionLegacyStub.this.mSession.getPlaybackStateCompat());
            this.mIControllerCallback.onEvent("android.support.v4.media.session.event.ON_SEEK_COMPLETED", bundle);
        }

        @Override // android.support.v4.media.MediaSession2.ControllerCb
        void onShuffleModeChanged(int i) throws RemoteException {
            Bundle bundle = new Bundle();
            bundle.putInt("android.support.v4.media.argument.SHUFFLE_MODE", i);
            this.mIControllerCallback.onEvent("android.support.v4.media.session.event.ON_SHUFFLE_MODE_CHANGED", bundle);
        }
    }

    @FunctionalInterface
    private interface Session2Runnable {
        void run(MediaSession2.ControllerInfo controllerInfo) throws RemoteException;
    }

    static {
        SessionCommandGroup2 sessionCommandGroup2 = new SessionCommandGroup2();
        sessionCommandGroup2.addAllPlaybackCommands();
        sessionCommandGroup2.addAllPlaylistCommands();
        sessionCommandGroup2.addAllVolumeCommands();
        for (SessionCommand2 sessionCommand2 : sessionCommandGroup2.getCommands()) {
            sCommandsForOnCommandRequest.append(sessionCommand2.getCommandCode(), sessionCommand2);
        }
    }

    MediaSessionLegacyStub(MediaSession2.SupportLibraryImpl supportLibraryImpl) {
        this.mSession = supportLibraryImpl;
        this.mContext = supportLibraryImpl.getContext();
    }

    private void connect(Bundle bundle, final ResultReceiver resultReceiver) {
        final MediaSession2.ControllerInfo controllerInfoCreateControllerInfo = createControllerInfo(bundle);
        this.mSession.getCallbackExecutor().execute(new Runnable() { // from class: android.support.v4.media.MediaSessionLegacyStub.7
            @Override // java.lang.Runnable
            public void run() {
                if (MediaSessionLegacyStub.this.mSession.isClosed()) {
                    return;
                }
                synchronized (MediaSessionLegacyStub.this.mLock) {
                    MediaSessionLegacyStub.this.mConnectingControllers.add(controllerInfoCreateControllerInfo.getId());
                }
                SessionCommandGroup2 sessionCommandGroup2OnConnect = MediaSessionLegacyStub.this.mSession.getCallback().onConnect(MediaSessionLegacyStub.this.mSession.getInstance(), controllerInfoCreateControllerInfo);
                if (!(sessionCommandGroup2OnConnect != null || controllerInfoCreateControllerInfo.isTrusted())) {
                    synchronized (MediaSessionLegacyStub.this.mLock) {
                        MediaSessionLegacyStub.this.mConnectingControllers.remove(controllerInfoCreateControllerInfo.getId());
                    }
                    if (MediaSessionLegacyStub.DEBUG) {
                        Log.d(MediaSessionLegacyStub.TAG, "Rejecting connection, controllerInfo=" + controllerInfoCreateControllerInfo);
                    }
                    resultReceiver.send(-1, null);
                    return;
                }
                if (MediaSessionLegacyStub.DEBUG) {
                    Log.d(MediaSessionLegacyStub.TAG, "Accepting connection, controllerInfo=" + controllerInfoCreateControllerInfo + " allowedCommands=" + sessionCommandGroup2OnConnect);
                }
                SessionCommandGroup2 sessionCommandGroup2 = sessionCommandGroup2OnConnect == null ? new SessionCommandGroup2() : sessionCommandGroup2OnConnect;
                synchronized (MediaSessionLegacyStub.this.mLock) {
                    MediaSessionLegacyStub.this.mConnectingControllers.remove(controllerInfoCreateControllerInfo.getId());
                    MediaSessionLegacyStub.this.mControllers.put(controllerInfoCreateControllerInfo.getId(), controllerInfoCreateControllerInfo);
                    MediaSessionLegacyStub.this.mAllowedCommandGroupMap.put(controllerInfoCreateControllerInfo, sessionCommandGroup2);
                }
                Bundle bundle2 = new Bundle();
                bundle2.putBundle("android.support.v4.media.argument.ALLOWED_COMMANDS", sessionCommandGroup2.toBundle());
                bundle2.putInt("android.support.v4.media.argument.PLAYER_STATE", MediaSessionLegacyStub.this.mSession.getPlayerState());
                bundle2.putInt("android.support.v4.media.argument.BUFFERING_STATE", MediaSessionLegacyStub.this.mSession.getBufferingState());
                bundle2.putParcelable("android.support.v4.media.argument.PLAYBACK_STATE_COMPAT", MediaSessionLegacyStub.this.mSession.getPlaybackStateCompat());
                bundle2.putInt("android.support.v4.media.argument.REPEAT_MODE", MediaSessionLegacyStub.this.mSession.getRepeatMode());
                bundle2.putInt("android.support.v4.media.argument.SHUFFLE_MODE", MediaSessionLegacyStub.this.mSession.getShuffleMode());
                List<MediaItem2> playlist = sessionCommandGroup2.hasCommand(18) ? MediaSessionLegacyStub.this.mSession.getPlaylist() : null;
                if (playlist != null) {
                    bundle2.putParcelableArray("android.support.v4.media.argument.PLAYLIST", MediaUtils2.convertMediaItem2ListToParcelableArray(playlist));
                }
                MediaItem2 currentMediaItem = sessionCommandGroup2.hasCommand(20) ? MediaSessionLegacyStub.this.mSession.getCurrentMediaItem() : null;
                if (currentMediaItem != null) {
                    bundle2.putBundle("android.support.v4.media.argument.MEDIA_ITEM", currentMediaItem.toBundle());
                }
                bundle2.putBundle("android.support.v4.media.argument.PLAYBACK_INFO", MediaSessionLegacyStub.this.mSession.getPlaybackInfo().toBundle());
                MediaMetadata2 playlistMetadata = MediaSessionLegacyStub.this.mSession.getPlaylistMetadata();
                if (playlistMetadata != null) {
                    bundle2.putBundle("android.support.v4.media.argument.PLAYLIST_METADATA", playlistMetadata.toBundle());
                }
                if (MediaSessionLegacyStub.this.mSession.isClosed()) {
                    return;
                }
                resultReceiver.send(0, bundle2);
            }
        });
    }

    private MediaSession2.ControllerInfo createControllerInfo(Bundle bundle) {
        IMediaControllerCallback iMediaControllerCallbackAsInterface = IMediaControllerCallback.Stub.asInterface(BundleCompat.getBinder(bundle, "android.support.v4.media.argument.ICONTROLLER_CALLBACK"));
        return new MediaSession2.ControllerInfo(bundle.getString("android.support.v4.media.argument.PACKAGE_NAME"), bundle.getInt("android.support.v4.media.argument.PID"), bundle.getInt("android.support.v4.media.argument.UID"), new ControllerLegacyCb(iMediaControllerCallbackAsInterface));
    }

    private void disconnect(Bundle bundle) {
        final MediaSession2.ControllerInfo controllerInfoCreateControllerInfo = createControllerInfo(bundle);
        this.mSession.getCallbackExecutor().execute(new Runnable() { // from class: android.support.v4.media.MediaSessionLegacyStub.8
            @Override // java.lang.Runnable
            public void run() {
                if (MediaSessionLegacyStub.this.mSession.isClosed()) {
                    return;
                }
                MediaSessionLegacyStub.this.mSession.getCallback().onDisconnected(MediaSessionLegacyStub.this.mSession.getInstance(), controllerInfoCreateControllerInfo);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isAllowedCommand(MediaSession2.ControllerInfo controllerInfo, int i) throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    SessionCommandGroup2 sessionCommandGroup2 = this.mAllowedCommandGroupMap.get(controllerInfo);
                    return sessionCommandGroup2 != null && sessionCommandGroup2.hasCommand(i);
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isAllowedCommand(MediaSession2.ControllerInfo controllerInfo, SessionCommand2 sessionCommand2) throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    SessionCommandGroup2 sessionCommandGroup2 = this.mAllowedCommandGroupMap.get(controllerInfo);
                    return sessionCommandGroup2 != null && sessionCommandGroup2.hasCommand(sessionCommand2);
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
            }
        }
    }

    private void onCommand2(IBinder iBinder, int i, Session2Runnable session2Runnable) throws Throwable {
        onCommand2Internal(iBinder, null, i, session2Runnable);
    }

    private void onCommand2(IBinder iBinder, SessionCommand2 sessionCommand2, Session2Runnable session2Runnable) throws Throwable {
        onCommand2Internal(iBinder, sessionCommand2, 0, session2Runnable);
    }

    private void onCommand2Internal(IBinder iBinder, final SessionCommand2 sessionCommand2, final int i, final Session2Runnable session2Runnable) throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    final MediaSession2.ControllerInfo controllerInfo = this.mControllers.get(iBinder);
                    MediaSession2.SupportLibraryImpl supportLibraryImpl = this.mSession;
                    if (supportLibraryImpl == null || controllerInfo == null) {
                        return;
                    }
                    supportLibraryImpl.getCallbackExecutor().execute(new Runnable() { // from class: android.support.v4.media.MediaSessionLegacyStub.6
                        @Override // java.lang.Runnable
                        public void run() {
                            SessionCommand2 sessionCommand3;
                            SessionCommand2 sessionCommand4 = sessionCommand2;
                            if (sessionCommand4 != null) {
                                if (!MediaSessionLegacyStub.this.isAllowedCommand(controllerInfo, sessionCommand4)) {
                                    return;
                                } else {
                                    sessionCommand3 = (SessionCommand2) MediaSessionLegacyStub.sCommandsForOnCommandRequest.get(sessionCommand2.getCommandCode());
                                }
                            } else if (!MediaSessionLegacyStub.this.isAllowedCommand(controllerInfo, i)) {
                                return;
                            } else {
                                sessionCommand3 = (SessionCommand2) MediaSessionLegacyStub.sCommandsForOnCommandRequest.get(i);
                            }
                            if (sessionCommand3 == null || MediaSessionLegacyStub.this.mSession.getCallback().onCommandRequest(MediaSessionLegacyStub.this.mSession.getInstance(), controllerInfo, sessionCommand3)) {
                                try {
                                    session2Runnable.run(controllerInfo);
                                    return;
                                } catch (RemoteException e) {
                                    Log.w(MediaSessionLegacyStub.TAG, "Exception in " + controllerInfo.toString(), e);
                                    return;
                                }
                            }
                            if (MediaSessionLegacyStub.DEBUG) {
                                Log.d(MediaSessionLegacyStub.TAG, "Command (" + sessionCommand3 + ") from " + controllerInfo + " was rejected by " + MediaSessionLegacyStub.this.mSession);
                            }
                        }
                    });
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
            }
        }
    }

    List<MediaSession2.ControllerInfo> getConnectedControllers() {
        ArrayList arrayList = new ArrayList();
        synchronized (this.mLock) {
            for (int i = 0; i < this.mControllers.size(); i++) {
                arrayList.add(this.mControllers.valueAt(i));
            }
        }
        return arrayList;
    }

    @Override // android.support.v4.media.session.MediaSessionCompat.Callback
    public void onPause() {
        this.mSession.getCallbackExecutor().execute(new Runnable() { // from class: android.support.v4.media.MediaSessionLegacyStub.3
            @Override // java.lang.Runnable
            public void run() {
                if (MediaSessionLegacyStub.this.mSession.isClosed()) {
                    return;
                }
                MediaSessionLegacyStub.this.mSession.pause();
            }
        });
    }

    @Override // android.support.v4.media.session.MediaSessionCompat.Callback
    public void onPlay() {
        this.mSession.getCallbackExecutor().execute(new Runnable() { // from class: android.support.v4.media.MediaSessionLegacyStub.2
            @Override // java.lang.Runnable
            public void run() {
                if (MediaSessionLegacyStub.this.mSession.isClosed()) {
                    return;
                }
                MediaSessionLegacyStub.this.mSession.play();
            }
        });
    }

    @Override // android.support.v4.media.session.MediaSessionCompat.Callback
    public void onPrepare() {
        this.mSession.getCallbackExecutor().execute(new Runnable() { // from class: android.support.v4.media.MediaSessionLegacyStub.1
            @Override // java.lang.Runnable
            public void run() {
                if (MediaSessionLegacyStub.this.mSession.isClosed()) {
                    return;
                }
                MediaSessionLegacyStub.this.mSession.prepare();
            }
        });
    }

    @Override // android.support.v4.media.session.MediaSessionCompat.Callback
    public void onSeekTo(final long j) {
        this.mSession.getCallbackExecutor().execute(new Runnable() { // from class: android.support.v4.media.MediaSessionLegacyStub.5
            @Override // java.lang.Runnable
            public void run() {
                if (MediaSessionLegacyStub.this.mSession.isClosed()) {
                    return;
                }
                MediaSessionLegacyStub.this.mSession.seekTo(j);
            }
        });
    }

    @Override // android.support.v4.media.session.MediaSessionCompat.Callback
    public void onStop() {
        this.mSession.getCallbackExecutor().execute(new Runnable() { // from class: android.support.v4.media.MediaSessionLegacyStub.4
            @Override // java.lang.Runnable
            public void run() {
                if (MediaSessionLegacyStub.this.mSession.isClosed()) {
                    return;
                }
                MediaSessionLegacyStub.this.mSession.reset();
            }
        });
    }

    void removeControllerInfo(MediaSession2.ControllerInfo controllerInfo) {
        synchronized (this.mLock) {
            MediaSession2.ControllerInfo controllerInfoRemove = this.mControllers.remove(controllerInfo.getId());
            if (DEBUG) {
                Log.d(TAG, "releasing " + controllerInfoRemove);
            }
        }
    }

    void setAllowedCommands(MediaSession2.ControllerInfo controllerInfo, SessionCommandGroup2 sessionCommandGroup2) {
        synchronized (this.mLock) {
            this.mAllowedCommandGroupMap.put(controllerInfo, sessionCommandGroup2);
        }
    }
}
