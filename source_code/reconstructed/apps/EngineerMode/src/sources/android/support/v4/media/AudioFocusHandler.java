package android.support.v4.media;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.media.AudioManager;
import android.support.v4.util.ObjectsCompat;
import android.util.Log;

/* JADX INFO: loaded from: classes2.dex */
public class AudioFocusHandler {
    private static final boolean DEBUG = false;
    private static final String TAG = "AudioFocusHandler";
    private final AudioFocusHandlerImpl mImpl;

    interface AudioFocusHandlerImpl {
        void close();

        boolean onPauseRequested();

        boolean onPlayRequested();

        void onPlayerStateChanged(int i);

        void sendIntent(Intent intent);
    }

    private static class AudioFocusHandlerImplBase implements AudioFocusHandlerImpl {
        private static final float VOLUME_DUCK_FACTOR = 0.2f;
        private AudioAttributesCompat mAudioAttributes;
        private final AudioManager.OnAudioFocusChangeListener mAudioFocusListener;
        private final AudioManager mAudioManager;
        private final BroadcastReceiver mBecomingNoisyIntentReceiver;
        private boolean mHasAudioFocus;
        private boolean mHasRegisteredReceiver;
        private final IntentFilter mIntentFilter = new IntentFilter("android.media.AUDIO_BECOMING_NOISY");
        private final Object mLock = new Object();
        private boolean mResumeWhenAudioFocusGain;
        private final MediaSession2 mSession;

        private class AudioFocusListener implements AudioManager.OnAudioFocusChangeListener {
            private float mPlayerDuckingVolume;
            private float mPlayerVolumeBeforeDucking;

            private AudioFocusListener() {
            }

            /* JADX WARN: Bottom block not found for handler: all -> 0x0066 */
            /* JADX WARN: Code restructure failed: missing block: B:97:0x0064, code lost:
            
                r4 = th;
             */
            @Override // android.media.AudioManager.OnAudioFocusChangeListener
            /*
                Code decompiled incorrectly, please refer to instructions dump.
            */
            public void onAudioFocusChange(int i) throws Throwable {
                if (i == -3) {
                    synchronized (AudioFocusHandlerImplBase.this.mLock) {
                        if (AudioFocusHandlerImplBase.this.mAudioAttributes == null) {
                            return;
                        }
                        if (AudioFocusHandlerImplBase.this.mAudioAttributes.getContentType() == 1) {
                            AudioFocusHandlerImplBase.this.mSession.pause();
                        } else {
                            BaseMediaPlayer player = AudioFocusHandlerImplBase.this.mSession.getPlayer();
                            if (player != null) {
                                float playerVolume = player.getPlayerVolume();
                                float f = AudioFocusHandlerImplBase.VOLUME_DUCK_FACTOR * playerVolume;
                                synchronized (AudioFocusHandlerImplBase.this.mLock) {
                                    this.mPlayerVolumeBeforeDucking = playerVolume;
                                    this.mPlayerDuckingVolume = f;
                                }
                                player.setPlayerVolume(f);
                            }
                        }
                        return;
                    }
                }
                if (i == -2) {
                    AudioFocusHandlerImplBase.this.mSession.pause();
                    synchronized (AudioFocusHandlerImplBase.this.mLock) {
                        AudioFocusHandlerImplBase.this.mResumeWhenAudioFocusGain = true;
                    }
                    return;
                }
                if (i == -1) {
                    AudioFocusHandlerImplBase.this.mSession.pause();
                    synchronized (AudioFocusHandlerImplBase.this.mLock) {
                        AudioFocusHandlerImplBase.this.mResumeWhenAudioFocusGain = false;
                    }
                    return;
                }
                if (i != 1) {
                    return;
                }
                if (AudioFocusHandlerImplBase.this.mSession.getPlayerState() == 1) {
                    synchronized (AudioFocusHandlerImplBase.this.mLock) {
                        if (AudioFocusHandlerImplBase.this.mResumeWhenAudioFocusGain) {
                            AudioFocusHandlerImplBase.this.mSession.play();
                        }
                    }
                    return;
                }
                BaseMediaPlayer player2 = AudioFocusHandlerImplBase.this.mSession.getPlayer();
                if (player2 == null) {
                    return;
                }
                float playerVolume2 = player2.getPlayerVolume();
                synchronized (AudioFocusHandlerImplBase.this.mLock) {
                    try {
                        if (playerVolume2 == this.mPlayerDuckingVolume) {
                            player2.setPlayerVolume(this.mPlayerVolumeBeforeDucking);
                        }
                        return;
                    } catch (Throwable th) {
                        th = th;
                    }
                }
                while (true) {
                    throw th;
                }
            }
        }

        private class NoisyIntentReceiver extends BroadcastReceiver {
            private NoisyIntentReceiver() {
            }

            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context, Intent intent) {
                BaseMediaPlayer player;
                synchronized (AudioFocusHandlerImplBase.this.mLock) {
                    if (AudioFocusHandlerImplBase.this.mHasRegisteredReceiver) {
                        if ("android.media.AUDIO_BECOMING_NOISY".equals(intent.getAction())) {
                            synchronized (AudioFocusHandlerImplBase.this.mLock) {
                                if (AudioFocusHandlerImplBase.this.mAudioAttributes == null) {
                                    return;
                                }
                                int usage = AudioFocusHandlerImplBase.this.mAudioAttributes.getUsage();
                                if (usage == 1) {
                                    AudioFocusHandlerImplBase.this.mSession.pause();
                                } else if (usage == 14 && (player = AudioFocusHandlerImplBase.this.mSession.getPlayer()) != null) {
                                    player.setPlayerVolume(player.getPlayerVolume() * AudioFocusHandlerImplBase.VOLUME_DUCK_FACTOR);
                                }
                            }
                        }
                    }
                }
            }
        }

        AudioFocusHandlerImplBase(Context context, MediaSession2 mediaSession2) {
            this.mBecomingNoisyIntentReceiver = new NoisyIntentReceiver();
            this.mAudioFocusListener = new AudioFocusListener();
            this.mSession = mediaSession2;
            this.mAudioManager = (AudioManager) context.getSystemService("audio");
        }

        private void abandonAudioFocusLocked() {
            if (this.mHasAudioFocus) {
                this.mAudioManager.abandonAudioFocus(this.mAudioFocusListener);
                this.mHasAudioFocus = false;
                this.mResumeWhenAudioFocusGain = false;
            }
        }

        private int convertAudioAttributesToFocusGainLocked() {
            AudioAttributesCompat audioAttributesCompat = this.mAudioAttributes;
            if (audioAttributesCompat == null) {
                return 0;
            }
            switch (audioAttributesCompat.getUsage()) {
                case 0:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 16:
                    return 3;
                case 1:
                case 14:
                    return 1;
                case 2:
                case 3:
                case 4:
                    return 2;
                case 15:
                default:
                    return 0;
            }
        }

        private void registerReceiverLocked() {
            if (this.mHasRegisteredReceiver) {
                return;
            }
            this.mSession.getContext().registerReceiver(this.mBecomingNoisyIntentReceiver, this.mIntentFilter);
            this.mHasRegisteredReceiver = true;
        }

        private boolean requestAudioFocusLocked() {
            int iConvertAudioAttributesToFocusGainLocked = convertAudioAttributesToFocusGainLocked();
            if (iConvertAudioAttributesToFocusGainLocked == 0) {
                return true;
            }
            int iRequestAudioFocus = this.mAudioManager.requestAudioFocus(this.mAudioFocusListener, this.mAudioAttributes.getVolumeControlStream(), iConvertAudioAttributesToFocusGainLocked);
            if (iRequestAudioFocus == 1) {
                this.mHasAudioFocus = true;
            } else {
                Log.w(AudioFocusHandler.TAG, "requestAudioFocus(" + iConvertAudioAttributesToFocusGainLocked + ") failed (return=" + iRequestAudioFocus + ") playback wouldn't start.");
                this.mHasAudioFocus = false;
            }
            this.mResumeWhenAudioFocusGain = false;
            return this.mHasAudioFocus;
        }

        private void unregisterReceiverLocked() {
            if (this.mHasRegisteredReceiver) {
                this.mSession.getContext().unregisterReceiver(this.mBecomingNoisyIntentReceiver);
                this.mHasRegisteredReceiver = false;
            }
        }

        private void updateAudioAttributesIfNeeded() {
            AudioAttributesCompat audioAttributes;
            if (this.mSession.getVolumeProvider() != null) {
                audioAttributes = null;
            } else {
                BaseMediaPlayer player = this.mSession.getPlayer();
                audioAttributes = player == null ? null : player.getAudioAttributes();
            }
            synchronized (this.mLock) {
                if (ObjectsCompat.equals(audioAttributes, this.mAudioAttributes)) {
                    return;
                }
                this.mAudioAttributes = audioAttributes;
                if (this.mHasAudioFocus) {
                    boolean zRequestAudioFocusLocked = requestAudioFocusLocked();
                    this.mHasAudioFocus = zRequestAudioFocusLocked;
                    if (!zRequestAudioFocusLocked) {
                        Log.w(AudioFocusHandler.TAG, "Failed to regain audio focus.");
                    }
                }
            }
        }

        @Override // android.support.v4.media.AudioFocusHandler.AudioFocusHandlerImpl
        public void close() {
            synchronized (this.mLock) {
                unregisterReceiverLocked();
                abandonAudioFocusLocked();
            }
        }

        @Override // android.support.v4.media.AudioFocusHandler.AudioFocusHandlerImpl
        public boolean onPauseRequested() {
            synchronized (this.mLock) {
                this.mResumeWhenAudioFocusGain = false;
            }
            return true;
        }

        @Override // android.support.v4.media.AudioFocusHandler.AudioFocusHandlerImpl
        public boolean onPlayRequested() {
            updateAudioAttributesIfNeeded();
            synchronized (this.mLock) {
                return requestAudioFocusLocked();
            }
        }

        @Override // android.support.v4.media.AudioFocusHandler.AudioFocusHandlerImpl
        public void onPlayerStateChanged(int i) {
            synchronized (this.mLock) {
                try {
                    if (i == 0) {
                        abandonAudioFocusLocked();
                    } else if (i == 1) {
                        updateAudioAttributesIfNeeded();
                        unregisterReceiverLocked();
                    } else if (i == 2) {
                        updateAudioAttributesIfNeeded();
                        registerReceiverLocked();
                    } else if (i == 3) {
                        abandonAudioFocusLocked();
                        unregisterReceiverLocked();
                    }
                } catch (Throwable th) {
                    throw th;
                }
            }
        }

        @Override // android.support.v4.media.AudioFocusHandler.AudioFocusHandlerImpl
        public void sendIntent(Intent intent) {
            this.mBecomingNoisyIntentReceiver.onReceive(this.mSession.getContext(), intent);
        }
    }

    AudioFocusHandler(Context context, MediaSession2 mediaSession2) {
        this.mImpl = new AudioFocusHandlerImplBase(context, mediaSession2);
    }

    public void close() {
        this.mImpl.close();
    }

    public boolean onPauseRequested() {
        return this.mImpl.onPauseRequested();
    }

    public boolean onPlayRequested() {
        return this.mImpl.onPlayRequested();
    }

    public void onPlayerStateChanged(int i) {
        this.mImpl.onPlayerStateChanged(i);
    }

    public void sendIntent(Intent intent) {
        this.mImpl.sendIntent(intent);
    }
}
