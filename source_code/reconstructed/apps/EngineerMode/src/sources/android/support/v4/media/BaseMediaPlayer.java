package android.support.v4.media;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.util.List;
import java.util.concurrent.Executor;

/* JADX INFO: loaded from: classes2.dex */
public abstract class BaseMediaPlayer implements AutoCloseable {
    public static final int BUFFERING_STATE_BUFFERING_AND_PLAYABLE = 1;
    public static final int BUFFERING_STATE_BUFFERING_AND_STARVED = 2;
    public static final int BUFFERING_STATE_BUFFERING_COMPLETE = 3;
    public static final int BUFFERING_STATE_UNKNOWN = 0;
    public static final int PLAYER_STATE_ERROR = 3;
    public static final int PLAYER_STATE_IDLE = 0;
    public static final int PLAYER_STATE_PAUSED = 1;
    public static final int PLAYER_STATE_PLAYING = 2;
    public static final long UNKNOWN_TIME = -1;

    @Retention(RetentionPolicy.SOURCE)
    public @interface BuffState {
    }

    public static abstract class PlayerEventCallback {
        public void onBufferingStateChanged(BaseMediaPlayer baseMediaPlayer, DataSourceDesc dataSourceDesc, int i) {
        }

        public void onCurrentDataSourceChanged(BaseMediaPlayer baseMediaPlayer, DataSourceDesc dataSourceDesc) {
        }

        public void onMediaPrepared(BaseMediaPlayer baseMediaPlayer, DataSourceDesc dataSourceDesc) {
        }

        public void onPlaybackSpeedChanged(BaseMediaPlayer baseMediaPlayer, float f) {
        }

        public void onPlayerStateChanged(BaseMediaPlayer baseMediaPlayer, int i) {
        }

        public void onSeekCompleted(BaseMediaPlayer baseMediaPlayer, long j) {
        }
    }

    @Retention(RetentionPolicy.SOURCE)
    public @interface PlayerState {
    }

    public abstract AudioAttributesCompat getAudioAttributes();

    public long getBufferedPosition() {
        return -1L;
    }

    public abstract int getBufferingState();

    public abstract DataSourceDesc getCurrentDataSource();

    public long getCurrentPosition() {
        return -1L;
    }

    public long getDuration() {
        return -1L;
    }

    public float getMaxPlayerVolume() {
        return 1.0f;
    }

    public float getPlaybackSpeed() {
        return 1.0f;
    }

    public abstract int getPlayerState();

    public abstract float getPlayerVolume();

    public boolean isReversePlaybackSupported() {
        return false;
    }

    public abstract void loopCurrent(boolean z);

    public abstract void pause();

    public abstract void play();

    public abstract void prepare();

    public abstract void registerPlayerEventCallback(Executor executor, PlayerEventCallback playerEventCallback);

    public abstract void reset();

    public abstract void seekTo(long j);

    public abstract void setAudioAttributes(AudioAttributesCompat audioAttributesCompat);

    public abstract void setDataSource(DataSourceDesc dataSourceDesc);

    public abstract void setNextDataSource(DataSourceDesc dataSourceDesc);

    public abstract void setNextDataSources(List<DataSourceDesc> list);

    public abstract void setPlaybackSpeed(float f);

    public abstract void setPlayerVolume(float f);

    public abstract void skipToNext();

    public abstract void unregisterPlayerEventCallback(PlayerEventCallback playerEventCallback);
}
