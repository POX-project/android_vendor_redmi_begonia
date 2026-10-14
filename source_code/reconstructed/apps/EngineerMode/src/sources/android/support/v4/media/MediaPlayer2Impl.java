package android.support.v4.media;

import android.media.AudioAttributes;
import android.media.DeniedByServerException;
import android.media.MediaDataSource;
import android.media.MediaDrm;
import android.media.MediaFormat;
import android.media.MediaPlayer;
import android.media.MediaTimestamp;
import android.media.PlaybackParams;
import android.media.ResourceBusyException;
import android.media.SubtitleData;
import android.media.SyncParams;
import android.media.TimedMetaData;
import android.media.UnsupportedSchemeException;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Parcel;
import android.os.PersistableBundle;
import android.support.v4.util.ArrayMap;
import android.support.v4.util.Preconditions;
import android.util.Log;
import android.util.Pair;
import android.view.Surface;
import java.io.IOException;
import java.nio.ByteOrder;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.UUID;
import java.util.concurrent.Executor;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes2.dex */
public final class MediaPlayer2Impl extends MediaPlayer2 {
    private static final int SOURCE_STATE_ERROR = -1;
    private static final int SOURCE_STATE_INIT = 0;
    private static final int SOURCE_STATE_PREPARED = 2;
    private static final int SOURCE_STATE_PREPARING = 1;
    private static final String TAG = "MediaPlayer2Impl";
    private static ArrayMap<Integer, Integer> sErrorEventMap;
    private static ArrayMap<Integer, Integer> sInfoEventMap;
    private static ArrayMap<Integer, Integer> sPrepareDrmStatusMap;
    private static ArrayMap<Integer, Integer> sStateMap;
    private BaseMediaPlayerImpl mBaseMediaPlayerImpl;
    private Task mCurrentTask;
    private Pair<Executor, MediaPlayer2.DrmEventCallback> mDrmEventCallbackRecord;
    private final Handler mEndPositionHandler;
    private HandlerThread mHandlerThread;
    private Pair<Executor, MediaPlayer2.EventCallback> mMp2EventCallbackRecord;
    private MediaPlayerSourceQueue mPlayer;
    private final Handler mTaskHandler;
    private final Object mTaskLock = new Object();
    private final ArrayDeque<Task> mPendingTasks = new ArrayDeque<>();
    private final Object mLock = new Object();
    private ArrayMap<BaseMediaPlayer.PlayerEventCallback, Executor> mPlayerEventCallbackMap = new ArrayMap<>();

    private class BaseMediaPlayerImpl extends BaseMediaPlayer {
        private BaseMediaPlayerImpl() {
        }

        @Override // java.lang.AutoCloseable
        public void close() throws Exception {
            MediaPlayer2Impl.this.close();
        }

        @Override // android.support.v4.media.BaseMediaPlayer
        public AudioAttributesCompat getAudioAttributes() {
            return MediaPlayer2Impl.this.getAudioAttributes();
        }

        @Override // android.support.v4.media.BaseMediaPlayer
        public long getBufferedPosition() {
            return MediaPlayer2Impl.this.getBufferedPosition();
        }

        @Override // android.support.v4.media.BaseMediaPlayer
        public int getBufferingState() {
            return MediaPlayer2Impl.this.getBufferingState();
        }

        @Override // android.support.v4.media.BaseMediaPlayer
        public DataSourceDesc getCurrentDataSource() {
            return MediaPlayer2Impl.this.getCurrentDataSource();
        }

        @Override // android.support.v4.media.BaseMediaPlayer
        public long getCurrentPosition() {
            return MediaPlayer2Impl.this.getCurrentPosition();
        }

        @Override // android.support.v4.media.BaseMediaPlayer
        public long getDuration() {
            return MediaPlayer2Impl.this.getDuration();
        }

        @Override // android.support.v4.media.BaseMediaPlayer
        public float getPlaybackSpeed() {
            return MediaPlayer2Impl.this.getPlaybackParams().getSpeed().floatValue();
        }

        @Override // android.support.v4.media.BaseMediaPlayer
        public int getPlayerState() {
            return MediaPlayer2Impl.this.getPlayerState();
        }

        @Override // android.support.v4.media.BaseMediaPlayer
        public float getPlayerVolume() {
            return MediaPlayer2Impl.this.getPlayerVolume();
        }

        @Override // android.support.v4.media.BaseMediaPlayer
        public void loopCurrent(boolean z) {
            MediaPlayer2Impl.this.loopCurrent(z);
        }

        @Override // android.support.v4.media.BaseMediaPlayer
        public void pause() {
            MediaPlayer2Impl.this.pause();
        }

        @Override // android.support.v4.media.BaseMediaPlayer
        public void play() {
            MediaPlayer2Impl.this.play();
        }

        @Override // android.support.v4.media.BaseMediaPlayer
        public void prepare() {
            MediaPlayer2Impl.this.prepare();
        }

        @Override // android.support.v4.media.BaseMediaPlayer
        public void registerPlayerEventCallback(Executor executor, BaseMediaPlayer.PlayerEventCallback playerEventCallback) {
            MediaPlayer2Impl.this.registerPlayerEventCallback(executor, playerEventCallback);
        }

        @Override // android.support.v4.media.BaseMediaPlayer
        public void reset() {
            MediaPlayer2Impl.this.reset();
        }

        @Override // android.support.v4.media.BaseMediaPlayer
        public void seekTo(long j) {
            MediaPlayer2Impl.this.seekTo(j);
        }

        @Override // android.support.v4.media.BaseMediaPlayer
        public void setAudioAttributes(AudioAttributesCompat audioAttributesCompat) {
            MediaPlayer2Impl.this.setAudioAttributes(audioAttributesCompat);
        }

        @Override // android.support.v4.media.BaseMediaPlayer
        public void setDataSource(DataSourceDesc dataSourceDesc) {
            MediaPlayer2Impl.this.setDataSource(dataSourceDesc);
        }

        @Override // android.support.v4.media.BaseMediaPlayer
        public void setNextDataSource(DataSourceDesc dataSourceDesc) {
            MediaPlayer2Impl.this.setNextDataSource(dataSourceDesc);
        }

        @Override // android.support.v4.media.BaseMediaPlayer
        public void setNextDataSources(List<DataSourceDesc> list) {
            MediaPlayer2Impl.this.setNextDataSources(list);
        }

        @Override // android.support.v4.media.BaseMediaPlayer
        public void setPlaybackSpeed(float f) {
            MediaPlayer2Impl mediaPlayer2Impl = MediaPlayer2Impl.this;
            mediaPlayer2Impl.setPlaybackParams(new PlaybackParams2.Builder(mediaPlayer2Impl.getPlaybackParams().getPlaybackParams()).setSpeed(f).build());
        }

        @Override // android.support.v4.media.BaseMediaPlayer
        public void setPlayerVolume(float f) {
            MediaPlayer2Impl.this.setPlayerVolume(f);
        }

        @Override // android.support.v4.media.BaseMediaPlayer
        public void skipToNext() {
            MediaPlayer2Impl.this.skipToNext();
        }

        @Override // android.support.v4.media.BaseMediaPlayer
        public void unregisterPlayerEventCallback(BaseMediaPlayer.PlayerEventCallback playerEventCallback) {
            MediaPlayer2Impl.this.unregisterPlayerEventCallback(playerEventCallback);
        }
    }

    private static class DataSourceError {
        final DataSourceDesc mDSD;
        final int mExtra;
        final int mWhat;

        DataSourceError(DataSourceDesc dataSourceDesc, int i, int i2) {
            this.mDSD = dataSourceDesc;
            this.mWhat = i;
            this.mExtra = i2;
        }
    }

    private interface DrmEventNotifier {
        void notify(MediaPlayer2.DrmEventCallback drmEventCallback);
    }

    public static final class DrmInfoImpl extends MediaPlayer2.DrmInfo {
        private Map<UUID, byte[]> mMapPssh;
        private UUID[] mSupportedSchemes;

        private DrmInfoImpl(Parcel parcel) {
            Log.v(MediaPlayer2Impl.TAG, "DrmInfoImpl(" + parcel + ") size " + parcel.dataSize());
            int i = parcel.readInt();
            byte[] bArr = new byte[i];
            parcel.readByteArray(bArr);
            Log.v(MediaPlayer2Impl.TAG, "DrmInfoImpl() PSSH: " + arrToHex(bArr));
            this.mMapPssh = parsePSSH(bArr, i);
            Log.v(MediaPlayer2Impl.TAG, "DrmInfoImpl() PSSH: " + this.mMapPssh);
            int i2 = parcel.readInt();
            this.mSupportedSchemes = new UUID[i2];
            for (int i3 = 0; i3 < i2; i3++) {
                byte[] bArr2 = new byte[16];
                parcel.readByteArray(bArr2);
                this.mSupportedSchemes[i3] = bytesToUUID(bArr2);
                Log.v(MediaPlayer2Impl.TAG, "DrmInfoImpl() supportedScheme[" + i3 + "]: " + this.mSupportedSchemes[i3]);
            }
            Log.v(MediaPlayer2Impl.TAG, "DrmInfoImpl() Parcel psshsize: " + i + " supportedDRMsCount: " + i2);
        }

        private DrmInfoImpl(Map<UUID, byte[]> map, UUID[] uuidArr) {
            this.mMapPssh = map;
            this.mSupportedSchemes = uuidArr;
        }

        private String arrToHex(byte[] bArr) {
            String str = "0x";
            for (byte b : bArr) {
                str = str + String.format("%02x", Byte.valueOf(b));
            }
            return str;
        }

        private UUID bytesToUUID(byte[] bArr) {
            long j = 0;
            long j2 = 0;
            for (int i = 0; i < 8; i++) {
                j |= (((long) bArr[i]) & 255) << ((7 - i) * 8);
                j2 |= (((long) bArr[i + 8]) & 255) << ((7 - i) * 8);
            }
            return new UUID(j, j2);
        }

        private DrmInfoImpl makeCopy() {
            return new DrmInfoImpl(this.mMapPssh, this.mSupportedSchemes);
        }

        private Map<UUID, byte[]> parsePSSH(byte[] bArr, int i) {
            int i2;
            int i3;
            HashMap map = new HashMap();
            int i4 = i;
            int i5 = 0;
            int i6 = 0;
            while (i4 > 0) {
                if (i4 < 16) {
                    Log.w(MediaPlayer2Impl.TAG, String.format("parsePSSH: len is too short to parse UUID: (%d < 16) pssh: %d", Integer.valueOf(i4), Integer.valueOf(i)));
                    return null;
                }
                UUID uuidBytesToUUID = bytesToUUID(Arrays.copyOfRange(bArr, i6, i6 + 16));
                int i7 = i6 + 16;
                int i8 = i4 - 16;
                if (i8 < 4) {
                    Log.w(MediaPlayer2Impl.TAG, String.format("parsePSSH: len is too short to parse datalen: (%d < 4) pssh: %d", Integer.valueOf(i8), Integer.valueOf(i)));
                    return null;
                }
                byte[] bArrCopyOfRange = Arrays.copyOfRange(bArr, i7, i7 + 4);
                if (ByteOrder.nativeOrder() == ByteOrder.LITTLE_ENDIAN) {
                    i2 = ((bArrCopyOfRange[3] & 255) << 24) | ((bArrCopyOfRange[2] & 255) << 16) | ((bArrCopyOfRange[1] & 255) << 8);
                    i3 = bArrCopyOfRange[0] & 255;
                } else {
                    i2 = ((bArrCopyOfRange[0] & 255) << 24) | ((bArrCopyOfRange[1] & 255) << 16) | ((bArrCopyOfRange[2] & 255) << 8);
                    i3 = bArrCopyOfRange[3] & 255;
                }
                int i9 = i2 | i3;
                int i10 = i7 + 4;
                int i11 = i8 - 4;
                if (i11 < i9) {
                    Log.w(MediaPlayer2Impl.TAG, String.format("parsePSSH: len is too short to parse data: (%d < %d) pssh: %d", Integer.valueOf(i11), Integer.valueOf(i9), Integer.valueOf(i)));
                    return null;
                }
                byte[] bArrCopyOfRange2 = Arrays.copyOfRange(bArr, i10, i10 + i9);
                i6 = i10 + i9;
                i4 = i11 - i9;
                Log.v(MediaPlayer2Impl.TAG, String.format("parsePSSH[%d]: <%s, %s> pssh: %d", Integer.valueOf(i5), uuidBytesToUUID, arrToHex(bArrCopyOfRange2), Integer.valueOf(i)));
                i5++;
                map.put(uuidBytesToUUID, bArrCopyOfRange2);
            }
            return map;
        }

        @Override // android.support.v4.media.MediaPlayer2.DrmInfo
        public Map<UUID, byte[]> getPssh() {
            return this.mMapPssh;
        }

        @Override // android.support.v4.media.MediaPlayer2.DrmInfo
        public List<UUID> getSupportedSchemes() {
            return Arrays.asList(this.mSupportedSchemes);
        }
    }

    private class MediaPlayerSource {
        volatile DataSourceDesc mDSD;
        boolean mPlayPending;
        final MediaPlayer mPlayer = new MediaPlayer();
        final AtomicInteger mBufferedPercentage = new AtomicInteger(0);
        int mSourceState = 0;
        int mMp2State = 1001;
        int mBufferingState = 0;
        int mPlayerState = 0;

        MediaPlayerSource(DataSourceDesc dataSourceDesc) {
            this.mDSD = dataSourceDesc;
            MediaPlayer2Impl.this.setUpListeners(this);
        }

        DataSourceDesc getDSD() {
            return this.mDSD;
        }
    }

    private class MediaPlayerSourceQueue {
        AudioAttributesCompat mAudioAttributes;
        Integer mAudioSessionId;
        Integer mAuxEffect;
        Float mAuxEffectSendLevel;
        PlaybackParams mPlaybackParams;
        Surface mSurface;
        SyncParams mSyncParams;
        List<MediaPlayerSource> mQueue = new ArrayList();
        Float mVolume = Float.valueOf(1.0f);

        MediaPlayerSourceQueue() {
            this.mQueue.add(MediaPlayer2Impl.this.new MediaPlayerSource(null));
        }

        synchronized void attachAuxEffect(int i) {
            getCurrentPlayer().attachAuxEffect(i);
            this.mAuxEffect = Integer.valueOf(i);
        }

        synchronized void deselectTrack(int i) {
            getCurrentPlayer().deselectTrack(i);
        }

        synchronized AudioAttributesCompat getAudioAttributes() {
            return this.mAudioAttributes;
        }

        synchronized int getAudioSessionId() {
            return getCurrentPlayer().getAudioSessionId();
        }

        synchronized long getBufferedPosition() {
            MediaPlayerSource mediaPlayerSource;
            mediaPlayerSource = this.mQueue.get(0);
            return (((long) mediaPlayerSource.mPlayer.getDuration()) * ((long) mediaPlayerSource.mBufferedPercentage.get())) / 100;
        }

        synchronized int getBufferingState() {
            return this.mQueue.get(0).mBufferingState;
        }

        synchronized MediaPlayer getCurrentPlayer() {
            return this.mQueue.get(0).mPlayer;
        }

        synchronized long getCurrentPosition() {
            return getCurrentPlayer().getCurrentPosition();
        }

        synchronized MediaPlayer.DrmInfo getDrmInfo() {
            return getCurrentPlayer().getDrmInfo();
        }

        synchronized String getDrmPropertyString(String str) throws MediaPlayer.NoDrmSchemeException {
            return getCurrentPlayer().getDrmPropertyString(str);
        }

        synchronized long getDuration() {
            return getCurrentPlayer().getDuration();
        }

        synchronized MediaPlayerSource getFirst() {
            return this.mQueue.get(0);
        }

        synchronized MediaDrm.KeyRequest getKeyRequest(byte[] bArr, byte[] bArr2, String str, int i, Map<String, String> map) throws MediaPlayer.NoDrmSchemeException {
            return getCurrentPlayer().getKeyRequest(bArr, bArr2, str, i, map);
        }

        synchronized int getMediaPlayer2State() {
            return this.mQueue.get(0).mMp2State;
        }

        synchronized PersistableBundle getMetrics() {
            return getCurrentPlayer().getMetrics();
        }

        synchronized PlaybackParams getPlaybackParams() {
            return getCurrentPlayer().getPlaybackParams();
        }

        synchronized int getPlayerState() {
            return this.mQueue.get(0).mPlayerState;
        }

        synchronized int getSelectedTrack(int i) {
            return getCurrentPlayer().getSelectedTrack(i);
        }

        synchronized MediaPlayerSource getSourceForPlayer(MediaPlayer mediaPlayer) {
            for (MediaPlayerSource mediaPlayerSource : this.mQueue) {
                if (mediaPlayerSource.mPlayer == mediaPlayer) {
                    return mediaPlayerSource;
                }
            }
            return null;
        }

        synchronized SyncParams getSyncParams() {
            return getCurrentPlayer().getSyncParams();
        }

        synchronized MediaTimestamp2 getTimestamp() {
            MediaTimestamp timestamp;
            timestamp = getCurrentPlayer().getTimestamp();
            return timestamp == null ? null : new MediaTimestamp2(timestamp);
        }

        synchronized MediaPlayer.TrackInfo[] getTrackInfo() {
            return getCurrentPlayer().getTrackInfo();
        }

        synchronized int getVideoHeight() {
            return getCurrentPlayer().getVideoHeight();
        }

        synchronized int getVideoWidth() {
            return getCurrentPlayer().getVideoWidth();
        }

        synchronized float getVolume() {
            return this.mVolume.floatValue();
        }

        synchronized void moveToNext() {
            MediaPlayerSource mediaPlayerSourceRemove = this.mQueue.remove(0);
            mediaPlayerSourceRemove.mPlayer.release();
            if (this.mQueue.isEmpty()) {
                throw new IllegalStateException("player/source queue emptied");
            }
            final MediaPlayerSource mediaPlayerSource = this.mQueue.get(0);
            if (mediaPlayerSourceRemove.mPlayerState != mediaPlayerSource.mPlayerState) {
                MediaPlayer2Impl.this.notifyPlayerEvent(new PlayerEventNotifier() { // from class: android.support.v4.media.MediaPlayer2Impl.MediaPlayerSourceQueue.2
                    @Override // android.support.v4.media.MediaPlayer2Impl.PlayerEventNotifier
                    public void notify(BaseMediaPlayer.PlayerEventCallback playerEventCallback) {
                        playerEventCallback.onPlayerStateChanged(MediaPlayer2Impl.this.mBaseMediaPlayerImpl, mediaPlayerSource.mPlayerState);
                    }
                });
            }
            MediaPlayer2Impl.this.notifyPlayerEvent(new PlayerEventNotifier() { // from class: android.support.v4.media.MediaPlayer2Impl.MediaPlayerSourceQueue.3
                @Override // android.support.v4.media.MediaPlayer2Impl.PlayerEventNotifier
                public void notify(BaseMediaPlayer.PlayerEventCallback playerEventCallback) {
                    playerEventCallback.onCurrentDataSourceChanged(MediaPlayer2Impl.this.mBaseMediaPlayerImpl, mediaPlayerSource.mDSD);
                }
            });
        }

        synchronized DataSourceError onCompletion(MediaPlayer mediaPlayer) {
            if (!this.mQueue.isEmpty() && mediaPlayer == getCurrentPlayer()) {
                if (this.mQueue.size() == 1) {
                    setMp2State(mediaPlayer, 1003);
                    final DataSourceDesc dsd = this.mQueue.get(0).getDSD();
                    MediaPlayer2Impl.this.notifyMediaPlayer2Event(new Mp2EventNotifier() { // from class: android.support.v4.media.MediaPlayer2Impl.MediaPlayerSourceQueue.1
                        @Override // android.support.v4.media.MediaPlayer2Impl.Mp2EventNotifier
                        public void notify(MediaPlayer2.EventCallback eventCallback) {
                            eventCallback.onInfo(MediaPlayer2Impl.this, dsd, 6, 0);
                        }
                    });
                    return null;
                }
                moveToNext();
            }
            return playCurrent();
        }

        synchronized void onError(MediaPlayer mediaPlayer) {
            setMp2State(mediaPlayer, MediaPlayer2.MEDIAPLAYER2_STATE_ERROR);
            setBufferingState(mediaPlayer, 0);
        }

        synchronized DataSourceError onPrepared(MediaPlayer mediaPlayer) {
            for (int i = 0; i < this.mQueue.size(); i++) {
                MediaPlayerSource mediaPlayerSource = this.mQueue.get(i);
                if (mediaPlayer == mediaPlayerSource.mPlayer) {
                    if (i == 0) {
                        if (mediaPlayerSource.mPlayPending) {
                            mediaPlayerSource.mPlayPending = false;
                            mediaPlayerSource.mPlayer.start();
                            setMp2State(mediaPlayerSource.mPlayer, 1004);
                        } else {
                            setMp2State(mediaPlayerSource.mPlayer, 1002);
                        }
                    }
                    mediaPlayerSource.mSourceState = 2;
                    setBufferingState(mediaPlayerSource.mPlayer, 1);
                    return prepareAt(i + 1);
                }
            }
            return null;
        }

        synchronized void pause() {
            MediaPlayer currentPlayer = getCurrentPlayer();
            currentPlayer.pause();
            setMp2State(currentPlayer, 1003);
        }

        synchronized void play() {
            MediaPlayerSource mediaPlayerSource = this.mQueue.get(0);
            if (mediaPlayerSource.mSourceState != 2) {
                throw new IllegalStateException();
            }
            mediaPlayerSource.mPlayer.start();
            setMp2State(mediaPlayerSource.mPlayer, 1004);
        }

        synchronized DataSourceError playCurrent() {
            DataSourceError dataSourceErrorPrepareAt;
            dataSourceErrorPrepareAt = null;
            final MediaPlayerSource mediaPlayerSource = this.mQueue.get(0);
            if (this.mSurface != null) {
                mediaPlayerSource.mPlayer.setSurface(this.mSurface);
            }
            if (this.mVolume != null) {
                mediaPlayerSource.mPlayer.setVolume(this.mVolume.floatValue(), this.mVolume.floatValue());
            }
            if (this.mAudioAttributes != null) {
                mediaPlayerSource.mPlayer.setAudioAttributes((AudioAttributes) this.mAudioAttributes.unwrap());
            }
            if (this.mAuxEffect != null) {
                mediaPlayerSource.mPlayer.attachAuxEffect(this.mAuxEffect.intValue());
            }
            if (this.mAuxEffectSendLevel != null) {
                mediaPlayerSource.mPlayer.setAuxEffectSendLevel(this.mAuxEffectSendLevel.floatValue());
            }
            if (this.mSyncParams != null) {
                mediaPlayerSource.mPlayer.setSyncParams(this.mSyncParams);
            }
            if (this.mPlaybackParams != null) {
                mediaPlayerSource.mPlayer.setPlaybackParams(this.mPlaybackParams);
            }
            if (mediaPlayerSource.mSourceState == 2) {
                mediaPlayerSource.mPlayer.start();
                setMp2State(mediaPlayerSource.mPlayer, 1004);
                MediaPlayer2Impl.this.notifyMediaPlayer2Event(new Mp2EventNotifier() { // from class: android.support.v4.media.MediaPlayer2Impl.MediaPlayerSourceQueue.4
                    @Override // android.support.v4.media.MediaPlayer2Impl.Mp2EventNotifier
                    public void notify(MediaPlayer2.EventCallback eventCallback) {
                        eventCallback.onInfo(MediaPlayer2Impl.this, mediaPlayerSource.getDSD(), 2, 0);
                    }
                });
            } else {
                dataSourceErrorPrepareAt = mediaPlayerSource.mSourceState == 0 ? prepareAt(0) : null;
                mediaPlayerSource.mPlayPending = true;
            }
            return dataSourceErrorPrepareAt;
        }

        synchronized void prepare() {
            getCurrentPlayer().prepareAsync();
        }

        synchronized void prepareAsync() {
            MediaPlayer currentPlayer = getCurrentPlayer();
            currentPlayer.prepareAsync();
            setBufferingState(currentPlayer, 2);
        }

        synchronized DataSourceError prepareAt(int i) {
            if (i < this.mQueue.size() && this.mQueue.get(i).mSourceState == 0 && (i == 0 || getPlayerState() != 0)) {
                MediaPlayerSource mediaPlayerSource = this.mQueue.get(i);
                try {
                    if (this.mAudioSessionId != null) {
                        mediaPlayerSource.mPlayer.setAudioSessionId(this.mAudioSessionId.intValue());
                    }
                    mediaPlayerSource.mSourceState = 1;
                    MediaPlayer2Impl.handleDataSource(mediaPlayerSource);
                    mediaPlayerSource.mPlayer.prepareAsync();
                    return null;
                } catch (Exception e) {
                    DataSourceDesc dsd = mediaPlayerSource.getDSD();
                    setMp2State(mediaPlayerSource.mPlayer, MediaPlayer2.MEDIAPLAYER2_STATE_ERROR);
                    return new DataSourceError(dsd, 1, MediaPlayer2.MEDIA_ERROR_UNSUPPORTED);
                }
            }
            return null;
        }

        synchronized void prepareDrm(UUID uuid) throws UnsupportedSchemeException, MediaPlayer.ProvisioningNetworkErrorException, ResourceBusyException, MediaPlayer.ProvisioningServerErrorException {
            getCurrentPlayer().prepareDrm(uuid);
        }

        synchronized byte[] provideKeyResponse(byte[] bArr, byte[] bArr2) throws DeniedByServerException, MediaPlayer.NoDrmSchemeException {
            return getCurrentPlayer().provideKeyResponse(bArr, bArr2);
        }

        synchronized void release() {
            getCurrentPlayer().release();
        }

        synchronized void releaseDrm() throws MediaPlayer.NoDrmSchemeException {
            getCurrentPlayer().stop();
            getCurrentPlayer().releaseDrm();
        }

        synchronized void reset() {
            MediaPlayerSource mediaPlayerSource = this.mQueue.get(0);
            mediaPlayerSource.mPlayer.reset();
            mediaPlayerSource.mBufferedPercentage.set(0);
            this.mVolume = Float.valueOf(1.0f);
            this.mSurface = null;
            this.mAuxEffect = null;
            this.mAuxEffectSendLevel = null;
            this.mAudioAttributes = null;
            this.mAudioSessionId = null;
            this.mSyncParams = null;
            this.mPlaybackParams = null;
            setMp2State(mediaPlayerSource.mPlayer, 1001);
            setBufferingState(mediaPlayerSource.mPlayer, 0);
        }

        synchronized void restoreKeys(byte[] bArr) throws MediaPlayer.NoDrmSchemeException {
            getCurrentPlayer().restoreKeys(bArr);
        }

        synchronized void seekTo(long j, int i) {
            getCurrentPlayer().seekTo(j, i);
        }

        synchronized void selectTrack(int i) {
            getCurrentPlayer().selectTrack(i);
        }

        synchronized void setAudioAttributes(AudioAttributesCompat audioAttributesCompat) {
            this.mAudioAttributes = audioAttributesCompat;
            getCurrentPlayer().setAudioAttributes(audioAttributesCompat == null ? null : (AudioAttributes) audioAttributesCompat.unwrap());
        }

        synchronized void setAudioSessionId(int i) {
            getCurrentPlayer().setAudioSessionId(i);
        }

        synchronized void setAuxEffectSendLevel(float f) {
            getCurrentPlayer().setAuxEffectSendLevel(f);
            this.mAuxEffectSendLevel = Float.valueOf(f);
        }

        synchronized void setBufferingState(MediaPlayer mediaPlayer, final int i) {
            for (final MediaPlayerSource mediaPlayerSource : this.mQueue) {
                if (mediaPlayerSource.mPlayer == mediaPlayer) {
                    if (mediaPlayerSource.mBufferingState == i) {
                        return;
                    }
                    mediaPlayerSource.mBufferingState = i;
                    MediaPlayer2Impl.this.notifyPlayerEvent(new PlayerEventNotifier() { // from class: android.support.v4.media.MediaPlayer2Impl.MediaPlayerSourceQueue.6
                        @Override // android.support.v4.media.MediaPlayer2Impl.PlayerEventNotifier
                        public void notify(BaseMediaPlayer.PlayerEventCallback playerEventCallback) {
                            playerEventCallback.onBufferingStateChanged(MediaPlayer2Impl.this.mBaseMediaPlayerImpl, mediaPlayerSource.getDSD(), i);
                        }
                    });
                    return;
                }
            }
        }

        synchronized void setDrmPropertyString(String str, String str2) throws MediaPlayer.NoDrmSchemeException {
            getCurrentPlayer().setDrmPropertyString(str, str2);
        }

        synchronized void setFirst(DataSourceDesc dataSourceDesc) throws IOException {
            if (this.mQueue.isEmpty()) {
                this.mQueue.add(0, MediaPlayer2Impl.this.new MediaPlayerSource(dataSourceDesc));
            } else {
                this.mQueue.get(0).mDSD = dataSourceDesc;
                MediaPlayer2Impl.this.setUpListeners(this.mQueue.get(0));
            }
            MediaPlayer2Impl.handleDataSource(this.mQueue.get(0));
        }

        synchronized void setLooping(boolean z) {
            getCurrentPlayer().setLooping(z);
        }

        /* JADX WARN: Multi-variable type inference failed */
        synchronized void setMp2State(MediaPlayer mediaPlayer, int i) {
            for (MediaPlayerSource mediaPlayerSource : this.mQueue) {
                if (mediaPlayerSource.mPlayer == mediaPlayer) {
                    if (mediaPlayerSource.mMp2State == i) {
                        return;
                    }
                    mediaPlayerSource.mMp2State = i;
                    final int iIntValue = ((Integer) MediaPlayer2Impl.sStateMap.get(Integer.valueOf(i))).intValue();
                    if (mediaPlayerSource.mPlayerState == iIntValue) {
                        return;
                    }
                    mediaPlayerSource.mPlayerState = iIntValue;
                    MediaPlayer2Impl.this.notifyPlayerEvent(new PlayerEventNotifier() { // from class: android.support.v4.media.MediaPlayer2Impl.MediaPlayerSourceQueue.5
                        @Override // android.support.v4.media.MediaPlayer2Impl.PlayerEventNotifier
                        public void notify(BaseMediaPlayer.PlayerEventCallback playerEventCallback) {
                            playerEventCallback.onPlayerStateChanged(MediaPlayer2Impl.this.mBaseMediaPlayerImpl, iIntValue);
                        }
                    });
                    return;
                }
            }
        }

        synchronized DataSourceError setNext(DataSourceDesc dataSourceDesc) {
            MediaPlayerSource mediaPlayerSource = MediaPlayer2Impl.this.new MediaPlayerSource(dataSourceDesc);
            if (this.mQueue.isEmpty()) {
                this.mQueue.add(mediaPlayerSource);
                return prepareAt(0);
            }
            this.mQueue.add(1, mediaPlayerSource);
            return prepareAt(1);
        }

        synchronized DataSourceError setNextMultiple(List<DataSourceDesc> list) {
            ArrayList arrayList = new ArrayList();
            Iterator<DataSourceDesc> it = list.iterator();
            while (it.hasNext()) {
                arrayList.add(MediaPlayer2Impl.this.new MediaPlayerSource(it.next()));
            }
            if (this.mQueue.isEmpty()) {
                this.mQueue.addAll(arrayList);
                return prepareAt(0);
            }
            this.mQueue.addAll(1, arrayList);
            return prepareAt(1);
        }

        synchronized void setOnDrmConfigHelper(MediaPlayer.OnDrmConfigHelper onDrmConfigHelper) {
            getCurrentPlayer().setOnDrmConfigHelper(onDrmConfigHelper);
        }

        synchronized void setPlaybackParams(PlaybackParams playbackParams) {
            getCurrentPlayer().setPlaybackParams(playbackParams);
            this.mPlaybackParams = playbackParams;
        }

        synchronized void setSurface(Surface surface) {
            this.mSurface = surface;
            getCurrentPlayer().setSurface(surface);
        }

        synchronized void setSyncParams(SyncParams syncParams) {
            getCurrentPlayer().setSyncParams(syncParams);
            this.mSyncParams = syncParams;
        }

        synchronized void setVolume(float f) {
            this.mVolume = Float.valueOf(f);
            getCurrentPlayer().setVolume(f, f);
        }

        synchronized void skipToNext() {
            if (this.mQueue.size() <= 1) {
                throw new IllegalStateException("No next source available");
            }
            MediaPlayerSource mediaPlayerSource = this.mQueue.get(0);
            moveToNext();
            if (mediaPlayerSource.mPlayerState == 2 || mediaPlayerSource.mPlayPending) {
                playCurrent();
            }
        }
    }

    private interface Mp2EventNotifier {
        void notify(MediaPlayer2.EventCallback eventCallback);
    }

    public static final class NoDrmSchemeExceptionImpl extends MediaPlayer2.NoDrmSchemeException {
        public NoDrmSchemeExceptionImpl(String str) {
            super(str);
        }
    }

    private interface PlayerEventNotifier {
        void notify(BaseMediaPlayer.PlayerEventCallback playerEventCallback);
    }

    public static final class ProvisioningNetworkErrorExceptionImpl extends MediaPlayer2.ProvisioningNetworkErrorException {
        public ProvisioningNetworkErrorExceptionImpl(String str) {
            super(str);
        }
    }

    public static final class ProvisioningServerErrorExceptionImpl extends MediaPlayer2.ProvisioningServerErrorException {
        public ProvisioningServerErrorExceptionImpl(String str) {
            super(str);
        }
    }

    private abstract class Task implements Runnable {
        private DataSourceDesc mDSD;
        private final int mMediaCallType;
        private final boolean mNeedToWaitForEventToComplete;

        Task(int i, boolean z) {
            this.mMediaCallType = i;
            this.mNeedToWaitForEventToComplete = z;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void sendCompleteNotification(final int i) throws Throwable {
            if (this.mMediaCallType == 1003) {
                return;
            }
            MediaPlayer2Impl.this.notifyMediaPlayer2Event(new Mp2EventNotifier() { // from class: android.support.v4.media.MediaPlayer2Impl.Task.1
                @Override // android.support.v4.media.MediaPlayer2Impl.Mp2EventNotifier
                public void notify(MediaPlayer2.EventCallback eventCallback) {
                    eventCallback.onCallCompleted(MediaPlayer2Impl.this, Task.this.mDSD, Task.this.mMediaCallType, i);
                }
            });
        }

        abstract void process() throws MediaPlayer2.NoDrmSchemeException, IOException;

        @Override // java.lang.Runnable
        public void run() throws Throwable {
            int i = 0;
            try {
                process();
            } catch (IOException e) {
                i = 4;
            } catch (IllegalArgumentException e2) {
                i = 2;
            } catch (IllegalStateException e3) {
                i = 1;
            } catch (SecurityException e4) {
                i = 3;
            } catch (Exception e5) {
                i = Integer.MIN_VALUE;
            }
            this.mDSD = MediaPlayer2Impl.this.getCurrentDataSource();
            if (this.mNeedToWaitForEventToComplete && i == 0) {
                return;
            }
            sendCompleteNotification(i);
            synchronized (MediaPlayer2Impl.this.mTaskLock) {
                MediaPlayer2Impl.this.mCurrentTask = null;
                MediaPlayer2Impl.this.processPendingTask_l();
            }
        }
    }

    public static final class TrackInfoImpl extends MediaPlayer2.TrackInfo {
        final MediaFormat mFormat;
        final int mTrackType;

        TrackInfoImpl(int i, MediaFormat mediaFormat) {
            this.mTrackType = i;
            this.mFormat = mediaFormat;
        }

        @Override // android.support.v4.media.MediaPlayer2.TrackInfo
        public MediaFormat getFormat() {
            int i = this.mTrackType;
            if (i == 3 || i == 4) {
                return this.mFormat;
            }
            return null;
        }

        @Override // android.support.v4.media.MediaPlayer2.TrackInfo
        public String getLanguage() {
            String string = this.mFormat.getString("language");
            return string == null ? "und" : string;
        }

        @Override // android.support.v4.media.MediaPlayer2.TrackInfo
        public int getTrackType() {
            return this.mTrackType;
        }

        @Override // android.support.v4.media.MediaPlayer2.TrackInfo
        public String toString() {
            StringBuilder sb = new StringBuilder(128);
            sb.append(getClass().getName());
            sb.append('{');
            int i = this.mTrackType;
            if (i == 1) {
                sb.append("VIDEO");
            } else if (i == 2) {
                sb.append("AUDIO");
            } else if (i == 3) {
                sb.append("TIMEDTEXT");
            } else if (i != 4) {
                sb.append("UNKNOWN");
            } else {
                sb.append("SUBTITLE");
            }
            sb.append(", " + this.mFormat.toString());
            sb.append("}");
            return sb.toString();
        }
    }

    static {
        ArrayMap<Integer, Integer> arrayMap = new ArrayMap<>();
        sInfoEventMap = arrayMap;
        arrayMap.put(1, 1);
        sInfoEventMap.put(2, 2);
        sInfoEventMap.put(3, 3);
        ArrayMap<Integer, Integer> arrayMap2 = sInfoEventMap;
        Integer numValueOf = Integer.valueOf(MediaPlayer2.MEDIA_INFO_VIDEO_TRACK_LAGGING);
        arrayMap2.put(numValueOf, numValueOf);
        ArrayMap<Integer, Integer> arrayMap3 = sInfoEventMap;
        Integer numValueOf2 = Integer.valueOf(MediaPlayer2.MEDIA_INFO_BUFFERING_START);
        arrayMap3.put(numValueOf2, numValueOf2);
        ArrayMap<Integer, Integer> arrayMap4 = sInfoEventMap;
        Integer numValueOf3 = Integer.valueOf(MediaPlayer2.MEDIA_INFO_BUFFERING_END);
        arrayMap4.put(numValueOf3, numValueOf3);
        ArrayMap<Integer, Integer> arrayMap5 = sInfoEventMap;
        Integer numValueOf4 = Integer.valueOf(MediaPlayer2.MEDIA_INFO_BAD_INTERLEAVING);
        arrayMap5.put(numValueOf4, numValueOf4);
        ArrayMap<Integer, Integer> arrayMap6 = sInfoEventMap;
        Integer numValueOf5 = Integer.valueOf(MediaPlayer2.MEDIA_INFO_NOT_SEEKABLE);
        arrayMap6.put(numValueOf5, numValueOf5);
        ArrayMap<Integer, Integer> arrayMap7 = sInfoEventMap;
        Integer numValueOf6 = Integer.valueOf(MediaPlayer2.MEDIA_INFO_METADATA_UPDATE);
        arrayMap7.put(numValueOf6, numValueOf6);
        ArrayMap<Integer, Integer> arrayMap8 = sInfoEventMap;
        Integer numValueOf7 = Integer.valueOf(MediaPlayer2.MEDIA_INFO_AUDIO_NOT_PLAYING);
        arrayMap8.put(numValueOf7, numValueOf7);
        ArrayMap<Integer, Integer> arrayMap9 = sInfoEventMap;
        Integer numValueOf8 = Integer.valueOf(MediaPlayer2.MEDIA_INFO_VIDEO_NOT_PLAYING);
        arrayMap9.put(numValueOf8, numValueOf8);
        ArrayMap<Integer, Integer> arrayMap10 = sInfoEventMap;
        Integer numValueOf9 = Integer.valueOf(MediaPlayer2.MEDIA_INFO_UNSUPPORTED_SUBTITLE);
        arrayMap10.put(numValueOf9, numValueOf9);
        ArrayMap<Integer, Integer> arrayMap11 = sInfoEventMap;
        Integer numValueOf10 = Integer.valueOf(MediaPlayer2.MEDIA_INFO_SUBTITLE_TIMED_OUT);
        arrayMap11.put(numValueOf10, numValueOf10);
        ArrayMap<Integer, Integer> arrayMap12 = new ArrayMap<>();
        sErrorEventMap = arrayMap12;
        arrayMap12.put(1, 1);
        sErrorEventMap.put(200, 200);
        sErrorEventMap.put(Integer.valueOf(MediaPlayer2.MEDIA_ERROR_IO), Integer.valueOf(MediaPlayer2.MEDIA_ERROR_IO));
        sErrorEventMap.put(Integer.valueOf(MediaPlayer2.MEDIA_ERROR_MALFORMED), Integer.valueOf(MediaPlayer2.MEDIA_ERROR_MALFORMED));
        sErrorEventMap.put(Integer.valueOf(MediaPlayer2.MEDIA_ERROR_UNSUPPORTED), Integer.valueOf(MediaPlayer2.MEDIA_ERROR_UNSUPPORTED));
        sErrorEventMap.put(Integer.valueOf(MediaPlayer2.MEDIA_ERROR_TIMED_OUT), Integer.valueOf(MediaPlayer2.MEDIA_ERROR_TIMED_OUT));
        ArrayMap<Integer, Integer> arrayMap13 = new ArrayMap<>();
        sPrepareDrmStatusMap = arrayMap13;
        arrayMap13.put(0, 0);
        sPrepareDrmStatusMap.put(1, 1);
        sPrepareDrmStatusMap.put(2, 2);
        sPrepareDrmStatusMap.put(2, 2);
        ArrayMap<Integer, Integer> arrayMap14 = new ArrayMap<>();
        sStateMap = arrayMap14;
        arrayMap14.put(1001, 0);
        sStateMap.put(1002, 1);
        sStateMap.put(1003, 1);
        sStateMap.put(1004, 2);
        sStateMap.put(Integer.valueOf(MediaPlayer2.MEDIAPLAYER2_STATE_ERROR), 3);
    }

    public MediaPlayer2Impl() {
        HandlerThread handlerThread = new HandlerThread("MediaPlayer2TaskThread");
        this.mHandlerThread = handlerThread;
        handlerThread.start();
        Looper looper = this.mHandlerThread.getLooper();
        this.mEndPositionHandler = new Handler(looper);
        this.mTaskHandler = new Handler(looper);
        this.mPlayer = new MediaPlayerSourceQueue();
    }

    private void addTask(Task task) {
        synchronized (this.mTaskLock) {
            this.mPendingTasks.add(task);
            processPendingTask_l();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int getBufferingState() {
        return this.mPlayer.getBufferingState();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int getPlayerState() {
        return this.mPlayer.getPlayerState();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void handleDataSource(MediaPlayerSource mediaPlayerSource) throws IOException {
        final DataSourceDesc dsd = mediaPlayerSource.getDSD();
        Preconditions.checkNotNull(dsd, "the DataSourceDesc cannot be null");
        MediaPlayer mediaPlayer = mediaPlayerSource.mPlayer;
        int type = dsd.getType();
        if (type == 1) {
            mediaPlayer.setDataSource(new MediaDataSource() { // from class: android.support.v4.media.MediaPlayer2Impl.14
                Media2DataSource mDataSource;

                {
                    this.mDataSource = dsd.getMedia2DataSource();
                }

                @Override // java.io.Closeable, java.lang.AutoCloseable
                public void close() throws IOException {
                    this.mDataSource.close();
                }

                @Override // android.media.MediaDataSource
                public long getSize() throws IOException {
                    return this.mDataSource.getSize();
                }

                @Override // android.media.MediaDataSource
                public int readAt(long j, byte[] bArr, int i, int i2) throws IOException {
                    return this.mDataSource.readAt(j, bArr, i, i2);
                }
            });
        } else if (type == 2) {
            mediaPlayer.setDataSource(dsd.getFileDescriptor(), dsd.getFileDescriptorOffset(), dsd.getFileDescriptorLength());
        } else {
            if (type != 3) {
                return;
            }
            mediaPlayer.setDataSource(dsd.getUriContext(), dsd.getUri(), dsd.getUriHeaders(), dsd.getUriCookies());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleDataSourceError(final DataSourceError dataSourceError) throws Throwable {
        if (dataSourceError == null) {
            return;
        }
        notifyMediaPlayer2Event(new Mp2EventNotifier() { // from class: android.support.v4.media.MediaPlayer2Impl.1
            @Override // android.support.v4.media.MediaPlayer2Impl.Mp2EventNotifier
            public void notify(MediaPlayer2.EventCallback eventCallback) {
                eventCallback.onError(MediaPlayer2Impl.this, dataSourceError.mDSD, dataSourceError.mWhat, dataSourceError.mExtra);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyDrmEvent(final DrmEventNotifier drmEventNotifier) throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    final Pair<Executor, MediaPlayer2.DrmEventCallback> pair = this.mDrmEventCallbackRecord;
                    if (pair != null) {
                        ((Executor) pair.first).execute(new Runnable() { // from class: android.support.v4.media.MediaPlayer2Impl.26
                            @Override // java.lang.Runnable
                            public void run() {
                                drmEventNotifier.notify((MediaPlayer2.DrmEventCallback) pair.second);
                            }
                        });
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

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyMediaPlayer2Event(final Mp2EventNotifier mp2EventNotifier) throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    final Pair<Executor, MediaPlayer2.EventCallback> pair = this.mMp2EventCallbackRecord;
                    if (pair != null) {
                        ((Executor) pair.first).execute(new Runnable() { // from class: android.support.v4.media.MediaPlayer2Impl.24
                            @Override // java.lang.Runnable
                            public void run() {
                                mp2EventNotifier.notify((MediaPlayer2.EventCallback) pair.second);
                            }
                        });
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

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public void notifyPlayerEvent(final PlayerEventNotifier playerEventNotifier) throws Throwable {
        synchronized (this.mLock) {
            try {
                try {
                    ArrayMap arrayMap = new ArrayMap(this.mPlayerEventCallbackMap);
                    int size = arrayMap.size();
                    for (int i = 0; i < size; i++) {
                        Executor executor = (Executor) arrayMap.valueAt(i);
                        final BaseMediaPlayer.PlayerEventCallback playerEventCallback = (BaseMediaPlayer.PlayerEventCallback) arrayMap.keyAt(i);
                        executor.execute(new Runnable() { // from class: android.support.v4.media.MediaPlayer2Impl.25
                            @Override // java.lang.Runnable
                            public void run() {
                                playerEventNotifier.notify(playerEventCallback);
                            }
                        });
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

    /* JADX INFO: Access modifiers changed from: private */
    public void processPendingTask_l() {
        if (this.mCurrentTask == null && !this.mPendingTasks.isEmpty()) {
            Task taskRemoveFirst = this.mPendingTasks.removeFirst();
            this.mCurrentTask = taskRemoveFirst;
            this.mTaskHandler.post(taskRemoveFirst);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void registerPlayerEventCallback(Executor executor, BaseMediaPlayer.PlayerEventCallback playerEventCallback) {
        if (playerEventCallback == null) {
            throw new IllegalArgumentException("Illegal null PlayerEventCallback");
        }
        if (executor == null) {
            throw new IllegalArgumentException("Illegal null Executor for the PlayerEventCallback");
        }
        synchronized (this.mLock) {
            this.mPlayerEventCallbackMap.put(playerEventCallback, executor);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setEndPositionTimerIfNeeded(final MediaPlayer.OnCompletionListener onCompletionListener, final MediaPlayerSource mediaPlayerSource, MediaTimestamp mediaTimestamp) {
        if (mediaPlayerSource == this.mPlayer.getFirst()) {
            this.mEndPositionHandler.removeCallbacksAndMessages(null);
            DataSourceDesc dsd = mediaPlayerSource.getDSD();
            if (dsd.getEndPosition() != 576460752303423487L && mediaTimestamp.getMediaClockRate() > 0.0f) {
                long endPosition = (long) ((dsd.getEndPosition() - ((mediaTimestamp.getAnchorMediaTimeUs() + ((System.nanoTime() - mediaTimestamp.getAnchorSytemNanoTime()) / 1000)) / 1000)) / mediaTimestamp.getMediaClockRate());
                this.mEndPositionHandler.postDelayed(new Runnable() { // from class: android.support.v4.media.MediaPlayer2Impl.27
                    @Override // java.lang.Runnable
                    public void run() {
                        if (MediaPlayer2Impl.this.mPlayer.getFirst() != mediaPlayerSource) {
                            return;
                        }
                        MediaPlayer2Impl.this.mPlayer.pause();
                        onCompletionListener.onCompletion(mediaPlayerSource.mPlayer);
                    }
                }, endPosition >= 0 ? endPosition : 0L);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setPlaybackParamsInternal(final PlaybackParams playbackParams) throws Throwable {
        PlaybackParams playbackParams2 = this.mPlayer.getPlaybackParams();
        this.mPlayer.setPlaybackParams(playbackParams);
        if (playbackParams2.getSpeed() != playbackParams.getSpeed()) {
            notifyPlayerEvent(new PlayerEventNotifier() { // from class: android.support.v4.media.MediaPlayer2Impl.23
                @Override // android.support.v4.media.MediaPlayer2Impl.PlayerEventNotifier
                public void notify(BaseMediaPlayer.PlayerEventCallback playerEventCallback) {
                    playerEventCallback.onPlaybackSpeedChanged(MediaPlayer2Impl.this.mBaseMediaPlayerImpl, playbackParams.getSpeed());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setUpListeners(final MediaPlayerSource mediaPlayerSource) {
        MediaPlayer mediaPlayer = mediaPlayerSource.mPlayer;
        final MediaPlayer.OnPreparedListener onPreparedListener = new MediaPlayer.OnPreparedListener() { // from class: android.support.v4.media.MediaPlayer2Impl.28
            @Override // android.media.MediaPlayer.OnPreparedListener
            public void onPrepared(MediaPlayer mediaPlayer2) throws Throwable {
                MediaPlayer2Impl mediaPlayer2Impl = MediaPlayer2Impl.this;
                mediaPlayer2Impl.handleDataSourceError(mediaPlayer2Impl.mPlayer.onPrepared(mediaPlayer2));
                MediaPlayer2Impl.this.notifyMediaPlayer2Event(new Mp2EventNotifier() { // from class: android.support.v4.media.MediaPlayer2Impl.28.1
                    @Override // android.support.v4.media.MediaPlayer2Impl.Mp2EventNotifier
                    public void notify(MediaPlayer2.EventCallback eventCallback) {
                        eventCallback.onInfo(MediaPlayer2Impl.this, mediaPlayerSource.getDSD(), 100, 0);
                    }
                });
                MediaPlayer2Impl.this.notifyPlayerEvent(new PlayerEventNotifier() { // from class: android.support.v4.media.MediaPlayer2Impl.28.2
                    @Override // android.support.v4.media.MediaPlayer2Impl.PlayerEventNotifier
                    public void notify(BaseMediaPlayer.PlayerEventCallback playerEventCallback) {
                        playerEventCallback.onMediaPrepared(MediaPlayer2Impl.this.mBaseMediaPlayerImpl, mediaPlayerSource.getDSD());
                    }
                });
                synchronized (MediaPlayer2Impl.this.mTaskLock) {
                    if (MediaPlayer2Impl.this.mCurrentTask != null && MediaPlayer2Impl.this.mCurrentTask.mMediaCallType == 6 && MediaPlayer2Impl.this.mCurrentTask.mDSD == mediaPlayerSource.getDSD() && MediaPlayer2Impl.this.mCurrentTask.mNeedToWaitForEventToComplete) {
                        MediaPlayer2Impl.this.mCurrentTask.sendCompleteNotification(0);
                        MediaPlayer2Impl.this.mCurrentTask = null;
                        MediaPlayer2Impl.this.processPendingTask_l();
                    }
                }
            }
        };
        mediaPlayer.setOnPreparedListener(new MediaPlayer.OnPreparedListener() { // from class: android.support.v4.media.MediaPlayer2Impl.29
            @Override // android.media.MediaPlayer.OnPreparedListener
            public void onPrepared(MediaPlayer mediaPlayer2) {
                if (mediaPlayerSource.getDSD().getStartPosition() != 0) {
                    mediaPlayerSource.mPlayer.seekTo((int) mediaPlayerSource.getDSD().getStartPosition(), 3);
                } else {
                    onPreparedListener.onPrepared(mediaPlayer2);
                }
            }
        });
        mediaPlayer.setOnVideoSizeChangedListener(new MediaPlayer.OnVideoSizeChangedListener() { // from class: android.support.v4.media.MediaPlayer2Impl.30
            @Override // android.media.MediaPlayer.OnVideoSizeChangedListener
            public void onVideoSizeChanged(MediaPlayer mediaPlayer2, final int i, final int i2) throws Throwable {
                MediaPlayer2Impl.this.notifyMediaPlayer2Event(new Mp2EventNotifier() { // from class: android.support.v4.media.MediaPlayer2Impl.30.1
                    @Override // android.support.v4.media.MediaPlayer2Impl.Mp2EventNotifier
                    public void notify(MediaPlayer2.EventCallback eventCallback) {
                        eventCallback.onVideoSizeChanged(MediaPlayer2Impl.this, mediaPlayerSource.getDSD(), i, i2);
                    }
                });
            }
        });
        mediaPlayer.setOnInfoListener(new MediaPlayer.OnInfoListener() { // from class: android.support.v4.media.MediaPlayer2Impl.31
            @Override // android.media.MediaPlayer.OnInfoListener
            public boolean onInfo(MediaPlayer mediaPlayer2, int i, int i2) throws Throwable {
                if (i == 3) {
                    MediaPlayer2Impl.this.notifyMediaPlayer2Event(new Mp2EventNotifier() { // from class: android.support.v4.media.MediaPlayer2Impl.31.1
                        @Override // android.support.v4.media.MediaPlayer2Impl.Mp2EventNotifier
                        public void notify(MediaPlayer2.EventCallback eventCallback) {
                            eventCallback.onInfo(MediaPlayer2Impl.this, mediaPlayerSource.getDSD(), 3, 0);
                        }
                    });
                    return false;
                }
                if (i == 701) {
                    MediaPlayer2Impl.this.mPlayer.setBufferingState(mediaPlayer2, 2);
                    return false;
                }
                if (i != 702) {
                    return false;
                }
                MediaPlayer2Impl.this.mPlayer.setBufferingState(mediaPlayer2, 1);
                return false;
            }
        });
        final MediaPlayer.OnCompletionListener onCompletionListener = new MediaPlayer.OnCompletionListener() { // from class: android.support.v4.media.MediaPlayer2Impl.32
            @Override // android.media.MediaPlayer.OnCompletionListener
            public void onCompletion(MediaPlayer mediaPlayer2) throws Throwable {
                MediaPlayer2Impl mediaPlayer2Impl = MediaPlayer2Impl.this;
                mediaPlayer2Impl.handleDataSourceError(mediaPlayer2Impl.mPlayer.onCompletion(mediaPlayer2));
                MediaPlayer2Impl.this.notifyMediaPlayer2Event(new Mp2EventNotifier() { // from class: android.support.v4.media.MediaPlayer2Impl.32.1
                    @Override // android.support.v4.media.MediaPlayer2Impl.Mp2EventNotifier
                    public void notify(MediaPlayer2.EventCallback eventCallback) {
                        eventCallback.onInfo(MediaPlayer2Impl.this, mediaPlayerSource.getDSD(), 5, 0);
                    }
                });
            }
        };
        mediaPlayer.setOnCompletionListener(onCompletionListener);
        mediaPlayer.setOnErrorListener(new MediaPlayer.OnErrorListener() { // from class: android.support.v4.media.MediaPlayer2Impl.33
            @Override // android.media.MediaPlayer.OnErrorListener
            public boolean onError(MediaPlayer mediaPlayer2, final int i, final int i2) throws Throwable {
                MediaPlayer2Impl.this.mPlayer.onError(mediaPlayer2);
                synchronized (MediaPlayer2Impl.this.mTaskLock) {
                    if (MediaPlayer2Impl.this.mCurrentTask != null && MediaPlayer2Impl.this.mCurrentTask.mNeedToWaitForEventToComplete) {
                        MediaPlayer2Impl.this.mCurrentTask.sendCompleteNotification(Integer.MIN_VALUE);
                        MediaPlayer2Impl.this.mCurrentTask = null;
                        MediaPlayer2Impl.this.processPendingTask_l();
                    }
                }
                MediaPlayer2Impl.this.notifyMediaPlayer2Event(new Mp2EventNotifier() { // from class: android.support.v4.media.MediaPlayer2Impl.33.1
                    /* JADX WARN: Multi-variable type inference failed */
                    @Override // android.support.v4.media.MediaPlayer2Impl.Mp2EventNotifier
                    public void notify(MediaPlayer2.EventCallback eventCallback) {
                        eventCallback.onError(MediaPlayer2Impl.this, mediaPlayerSource.getDSD(), ((Integer) MediaPlayer2Impl.sErrorEventMap.getOrDefault(Integer.valueOf(i), 1)).intValue(), i2);
                    }
                });
                return true;
            }
        });
        mediaPlayer.setOnSeekCompleteListener(new MediaPlayer.OnSeekCompleteListener() { // from class: android.support.v4.media.MediaPlayer2Impl.34
            @Override // android.media.MediaPlayer.OnSeekCompleteListener
            public void onSeekComplete(MediaPlayer mediaPlayer2) throws Throwable {
                if (mediaPlayerSource.mMp2State == 1001 && mediaPlayerSource.getDSD().getStartPosition() != 0) {
                    onPreparedListener.onPrepared(mediaPlayer2);
                    return;
                }
                synchronized (MediaPlayer2Impl.this.mTaskLock) {
                    if (MediaPlayer2Impl.this.mCurrentTask != null && MediaPlayer2Impl.this.mCurrentTask.mMediaCallType == 14 && MediaPlayer2Impl.this.mCurrentTask.mNeedToWaitForEventToComplete) {
                        MediaPlayer2Impl.this.mCurrentTask.sendCompleteNotification(0);
                        MediaPlayer2Impl.this.mCurrentTask = null;
                        MediaPlayer2Impl.this.processPendingTask_l();
                    }
                }
                final long currentPosition = MediaPlayer2Impl.this.getCurrentPosition();
                MediaPlayer2Impl.this.notifyPlayerEvent(new PlayerEventNotifier() { // from class: android.support.v4.media.MediaPlayer2Impl.34.1
                    @Override // android.support.v4.media.MediaPlayer2Impl.PlayerEventNotifier
                    public void notify(BaseMediaPlayer.PlayerEventCallback playerEventCallback) {
                        playerEventCallback.onSeekCompleted(MediaPlayer2Impl.this.mBaseMediaPlayerImpl, currentPosition);
                    }
                });
            }
        });
        mediaPlayer.setOnTimedMetaDataAvailableListener(new MediaPlayer.OnTimedMetaDataAvailableListener() { // from class: android.support.v4.media.MediaPlayer2Impl.35
            @Override // android.media.MediaPlayer.OnTimedMetaDataAvailableListener
            public void onTimedMetaDataAvailable(MediaPlayer mediaPlayer2, final TimedMetaData timedMetaData) throws Throwable {
                MediaPlayer2Impl.this.notifyMediaPlayer2Event(new Mp2EventNotifier() { // from class: android.support.v4.media.MediaPlayer2Impl.35.1
                    @Override // android.support.v4.media.MediaPlayer2Impl.Mp2EventNotifier
                    public void notify(MediaPlayer2.EventCallback eventCallback) {
                        eventCallback.onTimedMetaDataAvailable(MediaPlayer2Impl.this, mediaPlayerSource.getDSD(), timedMetaData);
                    }
                });
            }
        });
        mediaPlayer.setOnInfoListener(new MediaPlayer.OnInfoListener() { // from class: android.support.v4.media.MediaPlayer2Impl.36
            @Override // android.media.MediaPlayer.OnInfoListener
            public boolean onInfo(MediaPlayer mediaPlayer2, final int i, final int i2) throws Throwable {
                MediaPlayer2Impl.this.notifyMediaPlayer2Event(new Mp2EventNotifier() { // from class: android.support.v4.media.MediaPlayer2Impl.36.1
                    /* JADX WARN: Multi-variable type inference failed */
                    @Override // android.support.v4.media.MediaPlayer2Impl.Mp2EventNotifier
                    public void notify(MediaPlayer2.EventCallback eventCallback) {
                        eventCallback.onInfo(MediaPlayer2Impl.this, mediaPlayerSource.getDSD(), ((Integer) MediaPlayer2Impl.sInfoEventMap.getOrDefault(Integer.valueOf(i), 1)).intValue(), i2);
                    }
                });
                return true;
            }
        });
        mediaPlayer.setOnBufferingUpdateListener(new MediaPlayer.OnBufferingUpdateListener() { // from class: android.support.v4.media.MediaPlayer2Impl.37
            @Override // android.media.MediaPlayer.OnBufferingUpdateListener
            public void onBufferingUpdate(MediaPlayer mediaPlayer2, final int i) throws Throwable {
                if (i >= 100) {
                    MediaPlayer2Impl.this.mPlayer.setBufferingState(mediaPlayer2, 3);
                }
                mediaPlayerSource.mBufferedPercentage.set(i);
                MediaPlayer2Impl.this.notifyMediaPlayer2Event(new Mp2EventNotifier() { // from class: android.support.v4.media.MediaPlayer2Impl.37.1
                    @Override // android.support.v4.media.MediaPlayer2Impl.Mp2EventNotifier
                    public void notify(MediaPlayer2.EventCallback eventCallback) {
                        eventCallback.onInfo(MediaPlayer2Impl.this, mediaPlayerSource.getDSD(), MediaPlayer2.MEDIA_INFO_BUFFERING_UPDATE, i);
                    }
                });
            }
        });
        mediaPlayer.setOnMediaTimeDiscontinuityListener(new MediaPlayer.OnMediaTimeDiscontinuityListener() { // from class: android.support.v4.media.MediaPlayer2Impl.38
            @Override // android.media.MediaPlayer.OnMediaTimeDiscontinuityListener
            public void onMediaTimeDiscontinuity(MediaPlayer mediaPlayer2, final MediaTimestamp mediaTimestamp) throws Throwable {
                MediaPlayer2Impl.this.notifyMediaPlayer2Event(new Mp2EventNotifier() { // from class: android.support.v4.media.MediaPlayer2Impl.38.1
                    @Override // android.support.v4.media.MediaPlayer2Impl.Mp2EventNotifier
                    public void notify(MediaPlayer2.EventCallback eventCallback) {
                        eventCallback.onMediaTimeDiscontinuity(MediaPlayer2Impl.this, mediaPlayerSource.getDSD(), new MediaTimestamp2(mediaTimestamp));
                    }
                });
                MediaPlayer2Impl.this.setEndPositionTimerIfNeeded(onCompletionListener, mediaPlayerSource, mediaTimestamp);
            }
        });
        mediaPlayer.setOnSubtitleDataListener(new MediaPlayer.OnSubtitleDataListener() { // from class: android.support.v4.media.MediaPlayer2Impl.39
            @Override // android.media.MediaPlayer.OnSubtitleDataListener
            public void onSubtitleData(MediaPlayer mediaPlayer2, final SubtitleData subtitleData) throws Throwable {
                MediaPlayer2Impl.this.notifyMediaPlayer2Event(new Mp2EventNotifier() { // from class: android.support.v4.media.MediaPlayer2Impl.39.1
                    @Override // android.support.v4.media.MediaPlayer2Impl.Mp2EventNotifier
                    public void notify(MediaPlayer2.EventCallback eventCallback) {
                        eventCallback.onSubtitleData(MediaPlayer2Impl.this, mediaPlayerSource.getDSD(), new SubtitleData2(subtitleData));
                    }
                });
            }
        });
        mediaPlayer.setOnDrmInfoListener(new MediaPlayer.OnDrmInfoListener() { // from class: android.support.v4.media.MediaPlayer2Impl.40
            @Override // android.media.MediaPlayer.OnDrmInfoListener
            public void onDrmInfo(MediaPlayer mediaPlayer2, final MediaPlayer.DrmInfo drmInfo) throws Throwable {
                MediaPlayer2Impl.this.notifyDrmEvent(new DrmEventNotifier() { // from class: android.support.v4.media.MediaPlayer2Impl.40.1
                    @Override // android.support.v4.media.MediaPlayer2Impl.DrmEventNotifier
                    public void notify(MediaPlayer2.DrmEventCallback drmEventCallback) {
                        drmEventCallback.onDrmInfo(MediaPlayer2Impl.this, mediaPlayerSource.getDSD(), new DrmInfoImpl(drmInfo.getPssh(), drmInfo.getSupportedSchemes()));
                    }
                });
            }
        });
        mediaPlayer.setOnDrmPreparedListener(new MediaPlayer.OnDrmPreparedListener() { // from class: android.support.v4.media.MediaPlayer2Impl.41
            @Override // android.media.MediaPlayer.OnDrmPreparedListener
            public void onDrmPrepared(MediaPlayer mediaPlayer2, final int i) throws Throwable {
                MediaPlayer2Impl.this.notifyDrmEvent(new DrmEventNotifier() { // from class: android.support.v4.media.MediaPlayer2Impl.41.1
                    /* JADX WARN: Multi-variable type inference failed */
                    @Override // android.support.v4.media.MediaPlayer2Impl.DrmEventNotifier
                    public void notify(MediaPlayer2.DrmEventCallback drmEventCallback) {
                        drmEventCallback.onDrmPrepared(MediaPlayer2Impl.this, mediaPlayerSource.getDSD(), ((Integer) MediaPlayer2Impl.sPrepareDrmStatusMap.getOrDefault(Integer.valueOf(i), 3)).intValue());
                    }
                });
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void unregisterPlayerEventCallback(BaseMediaPlayer.PlayerEventCallback playerEventCallback) {
        if (playerEventCallback == null) {
            throw new IllegalArgumentException("Illegal null PlayerEventCallback");
        }
        synchronized (this.mLock) {
            this.mPlayerEventCallbackMap.remove(playerEventCallback);
        }
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void attachAuxEffect(final int i) {
        addTask(new Task(1, false) { // from class: android.support.v4.media.MediaPlayer2Impl.18
            @Override // android.support.v4.media.MediaPlayer2Impl.Task
            void process() {
                MediaPlayer2Impl.this.mPlayer.attachAuxEffect(i);
            }
        });
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void clearDrmEventCallback() {
        synchronized (this.mLock) {
            this.mDrmEventCallbackRecord = null;
        }
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void clearEventCallback() {
        synchronized (this.mLock) {
            this.mMp2EventCallbackRecord = null;
        }
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void clearPendingCommands() {
        synchronized (this.mTaskLock) {
            this.mPendingTasks.clear();
        }
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void close() {
        this.mPlayer.release();
        HandlerThread handlerThread = this.mHandlerThread;
        if (handlerThread != null) {
            handlerThread.quitSafely();
            this.mHandlerThread = null;
        }
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void deselectTrack(final int i) {
        addTask(new Task(2, false) { // from class: android.support.v4.media.MediaPlayer2Impl.21
            @Override // android.support.v4.media.MediaPlayer2Impl.Task
            void process() {
                MediaPlayer2Impl.this.mPlayer.deselectTrack(i);
            }
        });
    }

    @Override // android.support.v4.media.MediaPlayer2
    public AudioAttributesCompat getAudioAttributes() {
        return this.mPlayer.getAudioAttributes();
    }

    @Override // android.support.v4.media.MediaPlayer2
    public int getAudioSessionId() {
        return this.mPlayer.getAudioSessionId();
    }

    @Override // android.support.v4.media.MediaPlayer2
    public BaseMediaPlayer getBaseMediaPlayer() {
        BaseMediaPlayerImpl baseMediaPlayerImpl;
        synchronized (this.mLock) {
            if (this.mBaseMediaPlayerImpl == null) {
                this.mBaseMediaPlayerImpl = new BaseMediaPlayerImpl();
            }
            baseMediaPlayerImpl = this.mBaseMediaPlayerImpl;
        }
        return baseMediaPlayerImpl;
    }

    @Override // android.support.v4.media.MediaPlayer2
    public long getBufferedPosition() {
        return this.mPlayer.getBufferedPosition();
    }

    @Override // android.support.v4.media.MediaPlayer2
    public DataSourceDesc getCurrentDataSource() {
        return this.mPlayer.getFirst().getDSD();
    }

    @Override // android.support.v4.media.MediaPlayer2
    public long getCurrentPosition() {
        return this.mPlayer.getCurrentPosition();
    }

    @Override // android.support.v4.media.MediaPlayer2
    public MediaPlayer2.DrmInfo getDrmInfo() {
        MediaPlayer.DrmInfo drmInfo = this.mPlayer.getDrmInfo();
        if (drmInfo == null) {
            return null;
        }
        return new DrmInfoImpl(drmInfo.getPssh(), drmInfo.getSupportedSchemes());
    }

    @Override // android.support.v4.media.MediaPlayer2
    public MediaDrm.KeyRequest getDrmKeyRequest(byte[] bArr, byte[] bArr2, String str, int i, Map<String, String> map) throws MediaPlayer2.NoDrmSchemeException {
        try {
            return this.mPlayer.getKeyRequest(bArr, bArr2, str, i, map);
        } catch (MediaPlayer.NoDrmSchemeException e) {
            throw new MediaPlayer2.NoDrmSchemeException(e.getMessage());
        }
    }

    @Override // android.support.v4.media.MediaPlayer2
    public String getDrmPropertyString(String str) throws MediaPlayer2.NoDrmSchemeException {
        try {
            return this.mPlayer.getDrmPropertyString(str);
        } catch (MediaPlayer.NoDrmSchemeException e) {
            throw new MediaPlayer2.NoDrmSchemeException(e.getMessage());
        }
    }

    @Override // android.support.v4.media.MediaPlayer2
    public long getDuration() {
        return this.mPlayer.getDuration();
    }

    @Override // android.support.v4.media.MediaPlayer2
    public float getMaxPlayerVolume() {
        return 1.0f;
    }

    @Override // android.support.v4.media.MediaPlayer2
    public PersistableBundle getMetrics() {
        return this.mPlayer.getMetrics();
    }

    @Override // android.support.v4.media.MediaPlayer2
    public PlaybackParams2 getPlaybackParams() {
        return new PlaybackParams2.Builder(this.mPlayer.getPlaybackParams()).build();
    }

    @Override // android.support.v4.media.MediaPlayer2
    public float getPlayerVolume() {
        return this.mPlayer.getVolume();
    }

    @Override // android.support.v4.media.MediaPlayer2
    public int getSelectedTrack(int i) {
        return this.mPlayer.getSelectedTrack(i);
    }

    @Override // android.support.v4.media.MediaPlayer2
    public int getState() {
        return this.mPlayer.getMediaPlayer2State();
    }

    @Override // android.support.v4.media.MediaPlayer2
    public MediaTimestamp2 getTimestamp() {
        return this.mPlayer.getTimestamp();
    }

    @Override // android.support.v4.media.MediaPlayer2
    public List<MediaPlayer2.TrackInfo> getTrackInfo() {
        MediaPlayer.TrackInfo[] trackInfo = this.mPlayer.getTrackInfo();
        ArrayList arrayList = new ArrayList();
        for (MediaPlayer.TrackInfo trackInfo2 : trackInfo) {
            arrayList.add(new TrackInfoImpl(trackInfo2.getTrackType(), trackInfo2.getFormat()));
        }
        return arrayList;
    }

    @Override // android.support.v4.media.MediaPlayer2
    public int getVideoHeight() {
        return this.mPlayer.getVideoHeight();
    }

    @Override // android.support.v4.media.MediaPlayer2
    public int getVideoWidth() {
        return this.mPlayer.getVideoWidth();
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void loopCurrent(final boolean z) {
        addTask(new Task(3, false) { // from class: android.support.v4.media.MediaPlayer2Impl.10
            @Override // android.support.v4.media.MediaPlayer2Impl.Task
            void process() {
                MediaPlayer2Impl.this.mPlayer.setLooping(z);
            }
        });
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void notifyWhenCommandLabelReached(final Object obj) {
        addTask(new Task(1003, false) { // from class: android.support.v4.media.MediaPlayer2Impl.12
            @Override // android.support.v4.media.MediaPlayer2Impl.Task
            void process() throws Throwable {
                MediaPlayer2Impl.this.notifyMediaPlayer2Event(new Mp2EventNotifier() { // from class: android.support.v4.media.MediaPlayer2Impl.12.1
                    @Override // android.support.v4.media.MediaPlayer2Impl.Mp2EventNotifier
                    public void notify(MediaPlayer2.EventCallback eventCallback) {
                        eventCallback.onCommandLabelReached(MediaPlayer2Impl.this, obj);
                    }
                });
            }
        });
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void pause() {
        addTask(new Task(4, false) { // from class: android.support.v4.media.MediaPlayer2Impl.4
            @Override // android.support.v4.media.MediaPlayer2Impl.Task
            void process() {
                MediaPlayer2Impl.this.mPlayer.pause();
            }
        });
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void play() {
        addTask(new Task(5, false) { // from class: android.support.v4.media.MediaPlayer2Impl.2
            @Override // android.support.v4.media.MediaPlayer2Impl.Task
            void process() {
                MediaPlayer2Impl.this.mPlayer.play();
            }
        });
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void prepare() {
        addTask(new Task(6, true) { // from class: android.support.v4.media.MediaPlayer2Impl.3
            @Override // android.support.v4.media.MediaPlayer2Impl.Task
            void process() throws IOException {
                MediaPlayer2Impl.this.mPlayer.prepareAsync();
            }
        });
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void prepareDrm(UUID uuid) throws UnsupportedSchemeException, ResourceBusyException, MediaPlayer2.ProvisioningServerErrorException, MediaPlayer2.ProvisioningNetworkErrorException {
        try {
            this.mPlayer.prepareDrm(uuid);
        } catch (MediaPlayer.ProvisioningNetworkErrorException e) {
            throw new MediaPlayer2.ProvisioningNetworkErrorException(e.getMessage());
        } catch (MediaPlayer.ProvisioningServerErrorException e2) {
            throw new MediaPlayer2.ProvisioningServerErrorException(e2.getMessage());
        }
    }

    @Override // android.support.v4.media.MediaPlayer2
    public byte[] provideDrmKeyResponse(byte[] bArr, byte[] bArr2) throws MediaPlayer2.NoDrmSchemeException, DeniedByServerException {
        try {
            return this.mPlayer.provideKeyResponse(bArr, bArr2);
        } catch (MediaPlayer.NoDrmSchemeException e) {
            throw new MediaPlayer2.NoDrmSchemeException(e.getMessage());
        }
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void releaseDrm() throws MediaPlayer2.NoDrmSchemeException {
        try {
            this.mPlayer.releaseDrm();
        } catch (MediaPlayer.NoDrmSchemeException e) {
            throw new MediaPlayer2.NoDrmSchemeException(e.getMessage());
        }
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void reset() {
        this.mPlayer.reset();
        synchronized (this.mLock) {
            this.mMp2EventCallbackRecord = null;
            this.mPlayerEventCallbackMap.clear();
            this.mDrmEventCallbackRecord = null;
        }
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void restoreDrmKeys(byte[] bArr) throws MediaPlayer2.NoDrmSchemeException {
        try {
            this.mPlayer.restoreKeys(bArr);
        } catch (MediaPlayer.NoDrmSchemeException e) {
            throw new MediaPlayer2.NoDrmSchemeException(e.getMessage());
        }
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void seekTo(final long j, final int i) {
        addTask(new Task(14, true) { // from class: android.support.v4.media.MediaPlayer2Impl.16
            @Override // android.support.v4.media.MediaPlayer2Impl.Task
            void process() {
                MediaPlayer2Impl.this.mPlayer.seekTo(j, i);
            }
        });
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void selectTrack(final int i) {
        addTask(new Task(15, false) { // from class: android.support.v4.media.MediaPlayer2Impl.20
            @Override // android.support.v4.media.MediaPlayer2Impl.Task
            void process() {
                MediaPlayer2Impl.this.mPlayer.selectTrack(i);
            }
        });
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void setAudioAttributes(final AudioAttributesCompat audioAttributesCompat) {
        addTask(new Task(16, false) { // from class: android.support.v4.media.MediaPlayer2Impl.6
            @Override // android.support.v4.media.MediaPlayer2Impl.Task
            void process() {
                MediaPlayer2Impl.this.mPlayer.setAudioAttributes(audioAttributesCompat);
            }
        });
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void setAudioSessionId(final int i) {
        addTask(new Task(17, false) { // from class: android.support.v4.media.MediaPlayer2Impl.17
            @Override // android.support.v4.media.MediaPlayer2Impl.Task
            void process() {
                MediaPlayer2Impl.this.mPlayer.setAudioSessionId(i);
            }
        });
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void setAuxEffectSendLevel(final float f) {
        addTask(new Task(18, false) { // from class: android.support.v4.media.MediaPlayer2Impl.19
            @Override // android.support.v4.media.MediaPlayer2Impl.Task
            void process() {
                MediaPlayer2Impl.this.mPlayer.setAuxEffectSendLevel(f);
            }
        });
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void setDataSource(final DataSourceDesc dataSourceDesc) {
        addTask(new Task(19, false) { // from class: android.support.v4.media.MediaPlayer2Impl.7
            @Override // android.support.v4.media.MediaPlayer2Impl.Task
            void process() {
                Preconditions.checkNotNull(dataSourceDesc, "the DataSourceDesc cannot be null");
                try {
                    MediaPlayer2Impl.this.mPlayer.setFirst(dataSourceDesc);
                } catch (IOException e) {
                    Log.e(MediaPlayer2Impl.TAG, "process: setDataSource", e);
                }
            }
        });
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void setDrmEventCallback(Executor executor, MediaPlayer2.DrmEventCallback drmEventCallback) {
        if (drmEventCallback == null) {
            throw new IllegalArgumentException("Illegal null EventCallback");
        }
        if (executor == null) {
            throw new IllegalArgumentException("Illegal null Executor for the EventCallback");
        }
        synchronized (this.mLock) {
            this.mDrmEventCallbackRecord = new Pair<>(executor, drmEventCallback);
        }
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void setDrmPropertyString(String str, String str2) throws MediaPlayer2.NoDrmSchemeException {
        try {
            this.mPlayer.setDrmPropertyString(str, str2);
        } catch (MediaPlayer.NoDrmSchemeException e) {
            throw new MediaPlayer2.NoDrmSchemeException(e.getMessage());
        }
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void setEventCallback(Executor executor, MediaPlayer2.EventCallback eventCallback) {
        if (eventCallback == null) {
            throw new IllegalArgumentException("Illegal null EventCallback");
        }
        if (executor == null) {
            throw new IllegalArgumentException("Illegal null Executor for the EventCallback");
        }
        synchronized (this.mLock) {
            this.mMp2EventCallbackRecord = new Pair<>(executor, eventCallback);
        }
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void setNextDataSource(final DataSourceDesc dataSourceDesc) {
        addTask(new Task(22, false) { // from class: android.support.v4.media.MediaPlayer2Impl.8
            @Override // android.support.v4.media.MediaPlayer2Impl.Task
            void process() throws Throwable {
                Preconditions.checkNotNull(dataSourceDesc, "the DataSourceDesc cannot be null");
                MediaPlayer2Impl mediaPlayer2Impl = MediaPlayer2Impl.this;
                mediaPlayer2Impl.handleDataSourceError(mediaPlayer2Impl.mPlayer.setNext(dataSourceDesc));
            }
        });
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void setNextDataSources(final List<DataSourceDesc> list) {
        addTask(new Task(23, false) { // from class: android.support.v4.media.MediaPlayer2Impl.9
            @Override // android.support.v4.media.MediaPlayer2Impl.Task
            void process() throws Throwable {
                List list2 = list;
                if (list2 == null || list2.size() == 0) {
                    throw new IllegalArgumentException("data source list cannot be null or empty.");
                }
                Iterator it = list.iterator();
                while (it.hasNext()) {
                    if (((DataSourceDesc) it.next()) == null) {
                        throw new IllegalArgumentException("DataSourceDesc in the source list cannot be null.");
                    }
                }
                MediaPlayer2Impl mediaPlayer2Impl = MediaPlayer2Impl.this;
                mediaPlayer2Impl.handleDataSourceError(mediaPlayer2Impl.mPlayer.setNextMultiple(list));
            }
        });
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void setOnDrmConfigHelper(final MediaPlayer2.OnDrmConfigHelper onDrmConfigHelper) {
        this.mPlayer.setOnDrmConfigHelper(new MediaPlayer.OnDrmConfigHelper() { // from class: android.support.v4.media.MediaPlayer2Impl.22
            @Override // android.media.MediaPlayer.OnDrmConfigHelper
            public void onDrmConfig(MediaPlayer mediaPlayer) {
                MediaPlayerSource sourceForPlayer = MediaPlayer2Impl.this.mPlayer.getSourceForPlayer(mediaPlayer);
                onDrmConfigHelper.onDrmConfig(MediaPlayer2Impl.this, sourceForPlayer == null ? null : sourceForPlayer.getDSD());
            }
        });
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void setPlaybackParams(final PlaybackParams2 playbackParams2) {
        addTask(new Task(24, false) { // from class: android.support.v4.media.MediaPlayer2Impl.15
            @Override // android.support.v4.media.MediaPlayer2Impl.Task
            void process() throws Throwable {
                MediaPlayer2Impl.this.setPlaybackParamsInternal(playbackParams2.getPlaybackParams());
            }
        });
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void setPlayerVolume(final float f) {
        addTask(new Task(26, false) { // from class: android.support.v4.media.MediaPlayer2Impl.11
            @Override // android.support.v4.media.MediaPlayer2Impl.Task
            void process() {
                MediaPlayer2Impl.this.mPlayer.setVolume(f);
            }
        });
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void setSurface(final Surface surface) {
        addTask(new Task(27, false) { // from class: android.support.v4.media.MediaPlayer2Impl.13
            @Override // android.support.v4.media.MediaPlayer2Impl.Task
            void process() {
                MediaPlayer2Impl.this.mPlayer.setSurface(surface);
            }
        });
    }

    @Override // android.support.v4.media.MediaPlayer2
    public void skipToNext() {
        addTask(new Task(29, false) { // from class: android.support.v4.media.MediaPlayer2Impl.5
            @Override // android.support.v4.media.MediaPlayer2Impl.Task
            void process() {
                MediaPlayer2Impl.this.mPlayer.skipToNext();
            }
        });
    }
}
