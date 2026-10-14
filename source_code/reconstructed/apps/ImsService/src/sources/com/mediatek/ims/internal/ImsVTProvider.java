package com.mediatek.ims.internal;

import android.hardware.camera2.CameraCharacteristics;
import android.hardware.radio.V1_0.LastCallFailCause;
import android.net.Uri;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Message;
import android.os.SystemProperties;
import android.telecom.VideoProfile;
import android.telephony.SubscriptionInfo;
import android.telephony.SubscriptionManager;
import android.telephony.ims.ImsVideoCallProvider;
import android.util.Log;
import android.view.Surface;
import com.android.internal.os.SomeArgs;
import com.mediatek.ims.ImsCommonUtil;
import com.mediatek.ims.ImsService;
import com.mediatek.ims.common.ImsCarrierConfigConstants;
import com.mediatek.ims.ext.OpImsServiceCustomizationUtils;
import java.util.Collections;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes.dex */
public class ImsVTProvider extends ImsVideoCallProvider implements VTSource.EventCallback {
    public static final int EARLY_MEDIA_START = 1;
    public static final int EARLY_MEDIA_STOP = 0;
    public static final int MODE_PAUSE_BY_HOLD = 2;
    public static final int MODE_PAUSE_BY_NORMAL = 1;
    protected static final int MSG_RECEIVE_CALL_SESSION_EVENT = 706;
    protected static final int MSG_REQUEST_CALL_DATA_USAGE = 10;
    protected static final int MSG_REQUEST_CAMERA_CAPABILITIES = 9;
    protected static final int MSG_RESET_WRAPPER = 704;
    protected static final int MSG_SEND_SESSION_MODIFY_REQUEST = 7;
    protected static final int MSG_SEND_SESSION_MODIFY_RESPONSE = 8;
    protected static final int MSG_SET_CALLBACK = 1;
    protected static final int MSG_SET_CAMERA = 2;
    protected static final int MSG_SET_DEVICE_ORIENTATION = 5;
    protected static final int MSG_SET_DISPLAY_SURFACE = 4;
    protected static final int MSG_SET_PAUSE_IMAGE = 11;
    protected static final int MSG_SET_PREVIEW_SURFACE = 3;
    protected static final int MSG_SET_UI_MODE = 701;
    protected static final int MSG_SET_ZOOM = 6;
    protected static final int MSG_SWITCH_FEATURE = 702;
    protected static final int MSG_SWITCH_ROAMING = 703;
    protected static final int MSG_UPDATE_CALL_RAT = 707;
    protected static final int MSG_UPDATE_PROFILE = 705;
    public static final String MTK_VILTE_ROTATE_DELAY = "persist.vendor.vt.rotate_delay";
    public static final int POSTEVENT_IGNORE_ID = -10;
    public static final Uri REPLACE_PICTURE_PATH;
    public static final int SESSION_EVENT_BAD_DATA_BITRATE = 4008;
    public static final int SESSION_EVENT_CALL_ABNORMAL_END = 1009;
    public static final int SESSION_EVENT_CALL_END = 1008;
    public static final int SESSION_EVENT_CAM_CAP_CHANGED = 4007;
    public static final int SESSION_EVENT_DATA_BITRATE_RECOVER = 4009;
    public static final int SESSION_EVENT_DATA_PATH_PAUSE = 4011;
    public static final int SESSION_EVENT_DATA_PATH_RESUME = 4012;
    public static final int SESSION_EVENT_DATA_USAGE_CHANGED = 4006;
    public static final int SESSION_EVENT_DEFAULT_LOCAL_SIZE = 4013;
    public static final int SESSION_EVENT_ERROR_BIND_PORT = 8007;
    public static final int SESSION_EVENT_ERROR_CAMERA_CRASHED = 8003;
    public static final int SESSION_EVENT_ERROR_CAMERA_SET_IGNORED = 8006;
    public static final int SESSION_EVENT_ERROR_CODEC = 8004;
    public static final int SESSION_EVENT_ERROR_REC = 8005;
    public static final int SESSION_EVENT_ERROR_SERVER_DIED = 8002;
    public static final int SESSION_EVENT_ERROR_SERVICE = 8001;
    public static final int SESSION_EVENT_GET_CAP = 4014;
    public static final int SESSION_EVENT_GET_CAP_WITH_SIM = 4019;
    public static final int SESSION_EVENT_GET_SENSOR_INFO = 4018;
    public static final int SESSION_EVENT_HANDLE_CALL_SESSION_EVT = 4003;
    public static final int SESSION_EVENT_LOCAL_BUFFER = 4015;
    public static final int SESSION_EVENT_LOCAL_BW_READY_IND = 1013;
    public static final int SESSION_EVENT_LOCAL_SIZE_CHANGED = 4005;
    public static final int SESSION_EVENT_PACKET_LOSS_RATE = 4020;
    public static final int SESSION_EVENT_PACKET_LOSS_RATE_HIGH = 4021;
    public static final int SESSION_EVENT_PACKET_LOSS_RATE_LOW = 4023;
    public static final int SESSION_EVENT_PACKET_LOSS_RATE_MEDIUM = 4022;
    public static final int SESSION_EVENT_PEER_CAMERA_CLOSE = 1012;
    public static final int SESSION_EVENT_PEER_CAMERA_OPEN = 1011;
    public static final int SESSION_EVENT_PEER_SIZE_CHANGED = 4004;
    public static final int SESSION_EVENT_RECEIVE_FIRSTFRAME = 1001;
    public static final int SESSION_EVENT_RECORDER_EVENT_INFO_COMPLETE = 1007;
    public static final int SESSION_EVENT_RECORDER_EVENT_INFO_NO_I_FRAME = 1006;
    public static final int SESSION_EVENT_RECORDER_EVENT_INFO_REACH_MAX_DURATION = 1004;
    public static final int SESSION_EVENT_RECORDER_EVENT_INFO_REACH_MAX_FILESIZE = 1005;
    public static final int SESSION_EVENT_RECORDER_EVENT_INFO_UNKNOWN = 1003;
    public static final int SESSION_EVENT_RECV_ENHANCE_SESSION_IND = 4010;
    public static final int SESSION_EVENT_RECV_SESSION_CONFIG_REQ = 4001;
    public static final int SESSION_EVENT_RECV_SESSION_CONFIG_RSP = 4002;
    public static final int SESSION_EVENT_RESTART_CAMERA = 4017;
    public static final int SESSION_EVENT_SNAPSHOT_DONE = 1002;
    public static final int SESSION_EVENT_START_COUNTER = 1010;
    public static final int SESSION_EVENT_UPLINK_STATE_CHANGE = 4016;
    public static final int SESSION_EVENT_WARNING_SERVICE_NOT_READY = 9001;
    public static final int SESSION_INDICATION_CANCEL = 0;
    public static final int SESSION_INDICATION_EARLY_MEDIA = 1;
    public static final int SESSION_MODIFICATION_OVERLAP_ACTION_APP = 0;
    public static final int SESSION_MODIFICATION_OVERLAP_ACTION_BAD_BITRATE = 4;
    public static final int SESSION_MODIFICATION_OVERLAP_ACTION_DATA_OFF = 1;
    public static final int SESSION_MODIFICATION_OVERLAP_ACTION_DO_IMMEDIATELY = 4;
    public static final int SESSION_MODIFICATION_OVERLAP_ACTION_MA_CRASH = 3;
    public static final int SESSION_MODIFICATION_OVERLAP_ACTION_REJECT = 1;
    public static final int SESSION_MODIFICATION_OVERLAP_ACTION_REJECT_PREVIOUS = 2;
    public static final int SESSION_MODIFICATION_OVERLAP_ACTION_ROAMINGG = 2;
    public static final int SESSION_MODIFICATION_OVERLAP_ACTION_SKIP = 3;
    public static final int SESSION_MODIFICATION_OVERLAP_ACTION_WAIT = 0;
    public static final int SESSION_MODIFY_CANCELED = 11;
    public static final int SESSION_MODIFY_CANCEL_FAILED_BW = 7;
    public static final int SESSION_MODIFY_CANCEL_FAILED_DISABLE = 3;
    public static final int SESSION_MODIFY_CANCEL_FAILED_DOWNGRADE = 1;
    public static final int SESSION_MODIFY_CANCEL_FAILED_INTERNAL = 5;
    public static final int SESSION_MODIFY_CANCEL_FAILED_LOCAL = 6;
    public static final int SESSION_MODIFY_CANCEL_FAILED_NORMAL = 2;
    public static final int SESSION_MODIFY_CANCEL_FAILED_REMOTE = 4;
    public static final int SESSION_MODIFY_CANCEL_FAILED_TIMEOUT = 8;
    public static final int SESSION_MODIFY_CANCEL_OK = 0;
    public static final int SESSION_MODIFY_INTERNALERROR = 2;
    public static final int SESSION_MODIFY_INVALIDPARA = 8;
    public static final int SESSION_MODIFY_INVIDEOACTION = 12;
    public static final int SESSION_MODIFY_ISHOLD = 6;
    public static final int SESSION_MODIFY_ISREINVITE = 13;
    public static final int SESSION_MODIFY_LOCALREL = 5;
    public static final int SESSION_MODIFY_NOACTIVESTATE = 4;
    public static final int SESSION_MODIFY_NONEED = 7;
    public static final int SESSION_MODIFY_OK = 0;
    public static final int SESSION_MODIFY_REJECTBYREMOTE = 10;
    public static final int SESSION_MODIFY_REQTIMEOUT = 9;
    public static final int SESSION_MODIFY_RESULT_BW_MODIFYFAILED = 3;
    public static final int SESSION_MODIFY_WRONGVIDEODIR = 1;
    static final String TAG = "ImsVT";
    public static final int UPLINK_STATE_PAUSE_RECORDING = 2;
    public static final int UPLINK_STATE_RESUME_RECORDING = 3;
    public static final int UPLINK_STATE_START_RECORDING = 1;
    public static final int UPLINK_STATE_STOP_RECORDING = 0;
    public static final int UPLINK_STATE_STOP_RECORDING_PREVIEW = 4;
    public static final int VTP_STATE_DATA_OFF = 1;
    public static final int VTP_STATE_MA_CRASH = 4;
    public static final int VTP_STATE_NORMAL = 0;
    public static final int VTP_STATE_ROAMING = 2;
    public static final int VT_PROVIDER_INVALIDE_ID = -10000;
    protected static int mDefaultId;
    public static ImsVTProviderUtil mVTProviderUtil;
    protected int mId;
    public boolean mInitComplete;
    protected VideoProfile mLastRequestVideoProfile;
    protected Runnable mOrientationRunnable;
    protected final Handler mProviderHandler;
    protected HandlerThread mProviderHandlerThread;
    protected int mState;
    public ImsVTUsageManager mUsager;
    protected int mSimId = 0;
    public int mMode = 0;
    protected boolean mDuringSessionRequestOperation = false;
    protected boolean mDuringSessionRemoteRequestOperation = false;
    protected boolean mDuringEarlyMedia = false;
    protected boolean mIsDuringResetMode = false;
    protected Object mSessionOperationFlagLock = new Object();
    protected boolean mIsMaCrashed = false;
    protected boolean mIsRoaming = false;
    protected boolean mIsDataOff = false;
    protected boolean mIsAudioCall = false;
    public VTSource mSource = null;
    public VTDummySource mDummySource = new VTDummySource();
    protected String mCameraId = null;
    public boolean mHasRequestCamCap = false;
    protected int mUplinkState = 0;
    protected int mPauseMode = 0;
    protected ImsVTProviderUtil.Size mPreviewSize = new ImsVTProviderUtil.Size(320, LastCallFailCause.CALL_BARRED);
    protected VideoProfile mCurrentProfile = null;
    private boolean mIsDestroying = false;
    protected final Set<VideoProviderStateListener> mListeners = Collections.newSetFromMap(new ConcurrentHashMap(8, 0.9f, 1));
    protected int mOrientation = 0;
    protected int mCallRat = 0;

    protected class ConnectionEx {

        public class VideoProvider {
            public static final int SESSION_MODIFY_CANCEL_UPGRADE_FAIL = 200;
            public static final int SESSION_MODIFY_CANCEL_UPGRADE_FAIL_AUTO_DOWNGRADE = 201;
            public static final int SESSION_MODIFY_CANCEL_UPGRADE_FAIL_REMOTE_REJECT_UPGRADE = 202;
            private static final int SESSION_MODIFY_MTK_BASE = 200;

            public VideoProvider() {
            }
        }

        protected ConnectionEx() {
        }
    }

    public interface VideoProviderStateListener {
        void onReceivePauseState(boolean z);

        void onReceiveWiFiUsage(long j);
    }

    static {
        if (ImsVTProviderUtil.isVideoCallOnByPlatform()) {
            System.loadLibrary("mtk_vt_wrapper");
        }
        REPLACE_PICTURE_PATH = Uri.parse("content://PATH");
        mDefaultId = VT_PROVIDER_INVALIDE_ID;
        mVTProviderUtil = ImsVTProviderUtil.getInstance();
    }

    public ImsVTProvider() {
        this.mId = 1;
        this.mInitComplete = false;
        this.mOrientationRunnable = null;
        Log.d(TAG, "New ImsVTProvider without id");
        this.mId = VT_PROVIDER_INVALIDE_ID;
        this.mInitComplete = false;
        this.mState = 0;
        this.mUsager = OpImsServiceCustomizationUtils.getOpFactory(mVTProviderUtil.mContext).makeImsVTUsageManager();
        HandlerThread handlerThread = new HandlerThread("ProviderHandlerThread");
        this.mProviderHandlerThread = handlerThread;
        handlerThread.start();
        this.mProviderHandler = new Handler(this.mProviderHandlerThread.getLooper()) { // from class: com.mediatek.ims.internal.ImsVTProvider.1
            @Override // android.os.Handler
            public void handleMessage(Message message) {
                int i = message.what;
                switch (i) {
                    case 2:
                        ImsVTProvider.this.setCameraInternal((String) message.obj);
                        return;
                    case 3:
                        ImsVTProvider.this.setPreviewSurfaceInternal((Surface) message.obj);
                        return;
                    case 4:
                        ImsVTProvider.this.setDisplaySurfaceInternal((Surface) message.obj);
                        return;
                    case 5:
                        ImsVTProvider.this.setDeviceOrientationInternal(message.arg1);
                        return;
                    case 6:
                        ImsVTProvider.this.setZoomInternal(((Float) message.obj).floatValue());
                        return;
                    case 7:
                        SomeArgs someArgs = (SomeArgs) message.obj;
                        try {
                            ImsVTProvider.this.sendSessionModifyRequestInternal((VideoProfile) someArgs.arg1, (VideoProfile) someArgs.arg2);
                            return;
                        } finally {
                            someArgs.recycle();
                        }
                    case 8:
                        ImsVTProvider.this.sendSessionModifyResponseInternal((VideoProfile) message.obj);
                        return;
                    case 9:
                        ImsVTProvider.this.requestCameraCapabilitiesInternal();
                        return;
                    case 10:
                        ImsVTProvider.this.requestCallDataUsageInternal();
                        return;
                    case 11:
                        ImsVTProvider.this.setPauseImageInternal((Uri) message.obj);
                        return;
                    default:
                        switch (i) {
                            case ImsVTProvider.MSG_SET_UI_MODE /* 701 */:
                                ImsVTProvider.this.setUIModeInternal(((Integer) message.obj).intValue(), true);
                                return;
                            case ImsVTProvider.MSG_SWITCH_FEATURE /* 702 */:
                                SomeArgs someArgs2 = (SomeArgs) message.obj;
                                try {
                                    ImsVTProvider.this.switchFeatureInternal(((Integer) someArgs2.arg1).intValue(), ((Boolean) someArgs2.arg2).booleanValue());
                                    return;
                                } finally {
                                    someArgs2.recycle();
                                }
                            case ImsVTProvider.MSG_SWITCH_ROAMING /* 703 */:
                                SomeArgs someArgs3 = (SomeArgs) message.obj;
                                try {
                                    ImsVTProvider.this.switchRoamingInternal(((Boolean) someArgs3.arg1).booleanValue());
                                    return;
                                } finally {
                                    someArgs3.recycle();
                                }
                            case ImsVTProvider.MSG_RESET_WRAPPER /* 704 */:
                                ImsVTProvider.this.resetWrapperInternal();
                                return;
                            case ImsVTProvider.MSG_UPDATE_PROFILE /* 705 */:
                                SomeArgs someArgs4 = (SomeArgs) message.obj;
                                try {
                                    ImsVTProvider.this.updateProfileInternal(((Integer) someArgs4.arg1).intValue());
                                    return;
                                } finally {
                                    someArgs4.recycle();
                                }
                            case ImsVTProvider.MSG_RECEIVE_CALL_SESSION_EVENT /* 706 */:
                                SomeArgs someArgs5 = (SomeArgs) message.obj;
                                try {
                                    ImsVTProvider.this.receiveCallSessionEventInternal(((Integer) someArgs5.arg1).intValue());
                                    return;
                                } finally {
                                    someArgs5.recycle();
                                }
                            case ImsVTProvider.MSG_UPDATE_CALL_RAT /* 707 */:
                                SomeArgs someArgs6 = (SomeArgs) message.obj;
                                try {
                                    ImsVTProvider.this.updateCallRatInternal(((Integer) someArgs6.arg1).intValue());
                                    return;
                                } finally {
                                    someArgs6.recycle();
                                }
                            default:
                                return;
                        }
                }
            }
        };
        this.mOrientationRunnable = new Runnable() { // from class: com.mediatek.ims.internal.ImsVTProvider.2
            @Override // java.lang.Runnable
            public void run() {
                Log.d(ImsVTProvider.TAG, "setDeviceOrientation, apply orientation:" + ImsVTProvider.this.mOrientation);
                ImsVTProvider.this.mSource.setDeviceOrientation(ImsVTProvider.this.mOrientation);
                ImsVTProvider.nSetDeviceOrientation(ImsVTProvider.this.mId, ImsVTProvider.this.mOrientation);
            }
        };
    }

    public static native int nFinalization(int i);

    public static native int nInitRefVTP();

    public static native int nInitialization(int i, int i2);

    public static native int nRequestPeerConfig(int i, String str);

    public static native int nResponseLocalConfig(int i, String str);

    public static native int nSetCamera(int i, int i2);

    public static native int nSetCameraParameters(int i, VTSource.Resolution[] resolutionArr);

    public static native int nSetCameraParametersOnly(VTSource.Resolution[] resolutionArr);

    public static native int nSetCameraParametersWithSim(int i, int i2, VTSource.Resolution[] resolutionArr);

    public static native int nSetDeviceOrientation(int i, int i2);

    public static native int nSetDisplaySurface(int i, Surface surface);

    public static native int nSetPreviewSurface(int i, Surface surface);

    public static native int nSetUIMode(int i, int i2);

    public static native int nSnapshot(int i, int i2, String str);

    public static native int nStartRecording(int i, int i2, String str, long j);

    public static native int nStopRecording(int i);

    public static native int nSwitchFeature(int i, int i2, int i3);

    public static native int nTagSocketWithUid(int i);

    public static native int nTriggerGetOperatorId();

    public static native int nUpdateNetworkTable(boolean z, int i, String str);

    public static void postEventFromNative(int i, int i2, int i3, int i4, int i5, Object obj, Object obj2, Object obj3) {
        int i6;
        int mainCapabilityPhoneId;
        int i7;
        ImsVTProvider imsVTProviderRecordGet = mVTProviderUtil.recordGet(i2);
        if (imsVTProviderRecordGet == null && i != 8002 && i != 4014 && i != 4019 && i2 != -10) {
            Log.e(TAG, "Error: post event to Call is already release or has happen error before!");
        }
        Log.i(TAG, "[ID=" + i2 + "] [postEventFromNative]: " + i);
        if (i == 4008) {
            Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_BAD_DATA_BITRATE");
            if (mVTProviderUtil.getImsOemCallUtil().needNotifyBadBitRate()) {
                if (ImsVTProviderUtil.sIsNoCameraMode) {
                    return;
                }
                imsVTProviderRecordGet.handleCallSessionEvent(i);
                return;
            } else {
                Log.d(TAG, "handle BAD_DATA_BITRATE in FW");
                if (ImsVTProviderUtil.getInstance().getBooleanFromCarrierConfig(ImsCarrierConfigConstants.MTK_KEY_VT_DOWNGRADE_IN_BAD_BITRATE, imsVTProviderRecordGet.mSimId)) {
                    Log.d(TAG, "downgrade if bad bitrate");
                    imsVTProviderRecordGet.handleBadBitrateProcess();
                    return;
                }
                return;
            }
        }
        switch (i) {
            case 1001:
                Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_RECEIVE_FIRSTFRAME");
                imsVTProviderRecordGet.handleCallSessionEvent(i);
                break;
            case 1002:
                Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_SNAPSHOT_DONE");
                imsVTProviderRecordGet.handleCallSessionEvent(i);
                break;
            case 1003:
                Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_RECORDER_EVENT_INFO_UNKNOWN");
                imsVTProviderRecordGet.handleCallSessionEvent(i);
                break;
            case 1004:
                Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_RECORDER_EVENT_INFO_REACH_MAX_DURATION");
                imsVTProviderRecordGet.handleCallSessionEvent(i);
                break;
            case 1005:
                Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_RECORDER_EVENT_INFO_REACH_MAX_FILESIZE");
                imsVTProviderRecordGet.handleCallSessionEvent(i);
                break;
            case 1006:
                Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_RECORDER_EVENT_INFO_NO_I_FRAME");
                imsVTProviderRecordGet.handleCallSessionEvent(i);
                break;
            case 1007:
                Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_RECORDER_EVENT_INFO_COMPLETE");
                imsVTProviderRecordGet.handleCallSessionEvent(i);
                break;
            case 1008:
            case 1009:
                Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_CALL_END / SESSION_EVENT_CALL_ABNORMAL_END");
                imsVTProviderRecordGet.getSource().release();
                mVTProviderUtil.recordRemove(i2);
                updateDefaultId();
                imsVTProviderRecordGet.handleCallSessionEvent(i);
                imsVTProviderRecordGet.mProviderHandlerThread.quitSafely();
                imsVTProviderRecordGet.mMode = 65536;
                break;
            case 1010:
                Log.d(TAG, "postEventFromNative : msg = MSG_START_COUNTER");
                imsVTProviderRecordGet.handleCallSessionEvent(i);
                break;
            case 1011:
                Log.d(TAG, "postEventFromNative : msg = MSG_PEER_CAMERA_OPEN");
                imsVTProviderRecordGet.handleCallSessionEvent(i);
                break;
            case 1012:
                Log.d(TAG, "postEventFromNative : msg = MSG_PEER_CAMERA_CLOSE");
                imsVTProviderRecordGet.handleCallSessionEvent(i);
                break;
            case 1013:
                Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_LOCAL_BW_READY_IND");
                imsVTProviderRecordGet.handleCallSessionEvent(i);
                break;
            default:
                switch (i) {
                    case SESSION_EVENT_RECV_SESSION_CONFIG_REQ /* 4001 */:
                        Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_RECV_SESSION_CONFIG_REQ");
                        VideoProfile videoProfile = new VideoProfile(3, 2);
                        VideoProfile videoProfileUnPackToVdoProfile = mVTProviderUtil.unPackToVdoProfile((String) obj);
                        if (VideoProfile.isVideo(videoProfileUnPackToVdoProfile.getVideoState())) {
                            if (imsVTProviderRecordGet.hasState(imsVTProviderRecordGet.mState, 4)) {
                                VideoProfile videoProfile2 = new VideoProfile(0, 2);
                                imsVTProviderRecordGet.mLastRequestVideoProfile = videoProfile2;
                                imsVTProviderRecordGet.onSendSessionModifyResponse(videoProfile2);
                                Log.d(TAG, "[ID=" + imsVTProviderRecordGet.getId() + "] [onSendSessionModifyResponse] Reject it by have MA CRASH:" + imsVTProviderRecordGet.mState);
                            } else if ((!mVTProviderUtil.isVideoCallOn(imsVTProviderRecordGet.mSimId) || imsVTProviderRecordGet.hasState(imsVTProviderRecordGet.mState, 1) || imsVTProviderRecordGet.hasState(imsVTProviderRecordGet.mState, 2)) && (imsVTProviderRecordGet.mCallRat != 1 || !mVTProviderUtil.isViWifiOn(imsVTProviderRecordGet.mSimId))) {
                                VideoProfile videoProfile3 = new VideoProfile(0, 2);
                                imsVTProviderRecordGet.mLastRequestVideoProfile = videoProfile3;
                                imsVTProviderRecordGet.onSendSessionModifyResponse(videoProfile3);
                                Log.d(TAG, "[ID=" + imsVTProviderRecordGet.getId() + "] [onSendSessionModifyResponse] Reject it by state:" + imsVTProviderRecordGet.mState);
                            }
                        }
                        int iDoSessionModifyDecision = imsVTProviderRecordGet.doSessionModifyDecision(0, videoProfile, videoProfileUnPackToVdoProfile);
                        if (1 == iDoSessionModifyDecision) {
                            imsVTProviderRecordGet.setDuringSessionRemoteRequest(true);
                            imsVTProviderRecordGet.onSendSessionModifyResponse(imsVTProviderRecordGet.mLastRequestVideoProfile);
                        } else if (iDoSessionModifyDecision != 0) {
                            Log.e(TAG, "[ID=" + imsVTProviderRecordGet.getId() + "] [onSendSessionModifyResponse] should not in this case");
                            imsVTProviderRecordGet.setDuringSessionRemoteRequest(true);
                            imsVTProviderRecordGet.onSendSessionModifyResponse(videoProfileUnPackToVdoProfile);
                        } else {
                            imsVTProviderRecordGet.waitSessionOperationComplete();
                            if (!VideoProfile.isBidirectional(videoProfileUnPackToVdoProfile.getVideoState())) {
                                Log.d(TAG, "Do onSendSessionModifyResponse directly for not upgrade case");
                                imsVTProviderRecordGet.setDuringSessionRemoteRequest(true);
                                imsVTProviderRecordGet.onSendSessionModifyResponse(videoProfileUnPackToVdoProfile);
                            } else {
                                imsVTProviderRecordGet.setDuringSessionRemoteRequest(true);
                                imsVTProviderRecordGet.receiveSessionModifyRequest(videoProfileUnPackToVdoProfile);
                            }
                        }
                        break;
                    case SESSION_EVENT_RECV_SESSION_CONFIG_RSP /* 4002 */:
                        Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_RECV_SESSION_CONFIG_RSP");
                        if (imsVTProviderRecordGet.mMode != 65536) {
                            VideoProfile videoProfileUnPackToVdoProfile2 = mVTProviderUtil.unPackToVdoProfile((String) obj2);
                            if (videoProfileUnPackToVdoProfile2.getVideoState() != mVTProviderUtil.getImsExtCallUtil().getUpgradeCancelFlag()) {
                                if (i3 != 0) {
                                    if (i3 != 4) {
                                        if (i3 != 12 && i3 != 13) {
                                            switch (i3) {
                                                case 7:
                                                    i6 = 1;
                                                    break;
                                                case 8:
                                                    i6 = 3;
                                                    break;
                                                case 9:
                                                    i6 = 4;
                                                    break;
                                                case 10:
                                                    if (!imsVTProviderRecordGet.isDuringNotAppDowngrade()) {
                                                        i6 = 5;
                                                    } else {
                                                        imsVTProviderRecordGet.reSendLastSessionModify();
                                                    }
                                                    break;
                                                default:
                                                    i6 = 2;
                                                    break;
                                            }
                                        } else {
                                            imsVTProviderRecordGet.reSendLastSessionModify();
                                            break;
                                        }
                                    } else {
                                        if (!imsVTProviderRecordGet.mDuringEarlyMedia) {
                                            imsVTProviderRecordGet.reSendLastSessionModify();
                                        } else {
                                            Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_RECV_SESSION_CONFIG_RSP (during early media)");
                                            imsVTProviderRecordGet.receiveSessionModifyResponseInternal(1, mVTProviderUtil.unPackToVdoProfile((String) obj), mVTProviderUtil.unPackToVdoProfile((String) obj));
                                        }
                                        break;
                                    }
                                } else {
                                    if (VideoProfile.isVideo(videoProfileUnPackToVdoProfile2.getVideoState())) {
                                        if (imsVTProviderRecordGet.hasState(imsVTProviderRecordGet.mState, 4)) {
                                            imsVTProviderRecordGet.mLastRequestVideoProfile = new VideoProfile(0, 2);
                                            imsVTProviderRecordGet.reSendLastSessionModify();
                                            Log.d(TAG, "[ID=" + imsVTProviderRecordGet.getId() + "] [reSendLastSessionModify] by have MA CRASH:" + imsVTProviderRecordGet.mState);
                                        } else if ((!mVTProviderUtil.isVideoCallOn(imsVTProviderRecordGet.mSimId) || imsVTProviderRecordGet.hasState(imsVTProviderRecordGet.mState, 1) || imsVTProviderRecordGet.hasState(imsVTProviderRecordGet.mState, 2)) && (imsVTProviderRecordGet.mCallRat != 1 || !mVTProviderUtil.isViWifiOn(imsVTProviderRecordGet.mSimId))) {
                                            imsVTProviderRecordGet.mLastRequestVideoProfile = new VideoProfile(0, 2);
                                            imsVTProviderRecordGet.reSendLastSessionModify();
                                            Log.d(TAG, "[ID=" + imsVTProviderRecordGet.getId() + "] [reSendLastSessionModify] not viwifi call, downgrade by state:" + imsVTProviderRecordGet.mState);
                                        }
                                    }
                                    i6 = 1;
                                    break;
                                }
                            } else if (i3 == 0) {
                                i6 = 1;
                            } else if (i3 != 1) {
                                i6 = i3 != 4 ? ConnectionEx.VideoProvider.SESSION_MODIFY_CANCEL_UPGRADE_FAIL : ConnectionEx.VideoProvider.SESSION_MODIFY_CANCEL_UPGRADE_FAIL_REMOTE_REJECT_UPGRADE;
                            } else {
                                i6 = ConnectionEx.VideoProvider.SESSION_MODIFY_CANCEL_UPGRADE_FAIL_AUTO_DOWNGRADE;
                            }
                            imsVTProviderRecordGet.receiveSessionModifyResponseInternal(i6, mVTProviderUtil.unPackToVdoProfile((String) obj), mVTProviderUtil.unPackToVdoProfile((String) obj2));
                        } else {
                            Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_RECV_SESSION_CONFIG_RSP (call end)");
                        }
                        break;
                    case SESSION_EVENT_HANDLE_CALL_SESSION_EVT /* 4003 */:
                        Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_HANDLE_CALL_SESSION_EVT");
                        imsVTProviderRecordGet.handleCallSessionEvent(i);
                        break;
                    case SESSION_EVENT_PEER_SIZE_CHANGED /* 4004 */:
                        Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_PEER_SIZE_CHANGED");
                        imsVTProviderRecordGet.changePeerDimensions(i3, i4);
                        break;
                    case SESSION_EVENT_LOCAL_SIZE_CHANGED /* 4005 */:
                        Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_LOCAL_SIZE_CHANGED");
                        if (imsVTProviderRecordGet.mPreviewSize.width == i3 && imsVTProviderRecordGet.mPreviewSize.height == i4) {
                            Log.d(TAG, "local size no change => Do not notify!");
                        } else {
                            imsVTProviderRecordGet.mPreviewSize.width = i3;
                            imsVTProviderRecordGet.mPreviewSize.height = i4;
                            Log.d(TAG, "Update preview size, w=" + imsVTProviderRecordGet.mPreviewSize.width + ", h=" + imsVTProviderRecordGet.mPreviewSize.height);
                            if (true != imsVTProviderRecordGet.mHasRequestCamCap) {
                                Log.d(TAG, "Not request yet, just only update default w/h");
                            } else {
                                imsVTProviderRecordGet.onRequestCameraCapabilities();
                            }
                        }
                        break;
                    case SESSION_EVENT_DATA_USAGE_CHANGED /* 4006 */:
                        Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_DATA_USAGE_CHANGED");
                        break;
                    default:
                        long j = 200;
                        switch (i) {
                            case SESSION_EVENT_RECV_ENHANCE_SESSION_IND /* 4010 */:
                                Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_RECV_ENHANCE_SESSION_IND");
                                if (i3 == 0) {
                                    Log.d(TAG, "SESSION_INDICATION_CANCEL");
                                    imsVTProviderRecordGet.setDuringSessionRemoteRequest(false);
                                } else if (1 == i3) {
                                    Log.d(TAG, "SESSION_INDICATION_EARLY_MEDIA, early media=" + i4);
                                    if (i4 == 0) {
                                        imsVTProviderRecordGet.mDuringEarlyMedia = false;
                                    } else if (i4 == 1) {
                                        imsVTProviderRecordGet.mDuringEarlyMedia = true;
                                    }
                                }
                                imsVTProviderRecordGet.receiveSessionModifyRequest(mVTProviderUtil.unPackToVdoProfile((String) obj));
                                break;
                            case SESSION_EVENT_DATA_PATH_PAUSE /* 4011 */:
                            case SESSION_EVENT_DATA_PATH_RESUME /* 4012 */:
                                Log.d(TAG, "postEventFromNative : msg = EVENT_DATA_PATH_CHANGED");
                                if (!ImsVTProviderUtil.sIsNoCameraMode) {
                                    imsVTProviderRecordGet.handleCallSessionEvent(i);
                                }
                                break;
                            case SESSION_EVENT_DEFAULT_LOCAL_SIZE /* 4013 */:
                                Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_DEFAULT_LOCAL_SIZE, W=" + i3 + ", H=" + i4);
                                imsVTProviderRecordGet.mPreviewSize.width = i3;
                                imsVTProviderRecordGet.mPreviewSize.height = i4;
                                break;
                            case SESSION_EVENT_GET_CAP /* 4014 */:
                                Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_GET_CAP");
                                int i8 = 0;
                                VTSource.Resolution[] allCameraResolutions = ImsVTProviderUtil.sIsNoCameraMode ? VTDummySource.getAllCameraResolutions() : VTSource.getAllCameraResolutions();
                                while (allCameraResolutions == null && i8 < 50) {
                                    try {
                                        Thread.sleep(200L);
                                        break;
                                    } catch (InterruptedException e) {
                                    }
                                    allCameraResolutions = ImsVTProviderUtil.sIsNoCameraMode ? VTDummySource.getAllCameraResolutions() : VTSource.getAllCameraResolutions();
                                    i8++;
                                }
                                Log.d(TAG, "postEventFromNative : retry time" + i8 + " cams_info : " + allCameraResolutions);
                                if (allCameraResolutions == null) {
                                    Log.e(TAG, "Error: sensor resolution = NULL");
                                }
                                nSetCameraParameters(i2, allCameraResolutions);
                                break;
                            case SESSION_EVENT_LOCAL_BUFFER /* 4015 */:
                                Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_LOCAL_BUFFER");
                                imsVTProviderRecordGet.getSource().stopRecording();
                                imsVTProviderRecordGet.getSource().setRecordSurface((Surface) obj3);
                                imsVTProviderRecordGet.getSource().startRecording();
                                imsVTProviderRecordGet.clearPauseMode();
                                break;
                            case SESSION_EVENT_UPLINK_STATE_CHANGE /* 4016 */:
                                Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_UPLINK_STATE_CHANGE");
                                imsVTProviderRecordGet.mUplinkState = i3;
                                if (i3 == 0) {
                                    if (imsVTProviderRecordGet.getSource() != null) {
                                        imsVTProviderRecordGet.getSource().stopRecording();
                                        imsVTProviderRecordGet.getSource().setRecordSurface(null);
                                    }
                                    imsVTProviderRecordGet.clearPauseMode();
                                    break;
                                } else if (i3 == 2) {
                                    if (!imsVTProviderRecordGet.hasPauseMode()) {
                                        imsVTProviderRecordGet.getSource().stopRecording();
                                    }
                                    imsVTProviderRecordGet.setPauseMode(i4);
                                    break;
                                } else if (i3 == 3) {
                                    imsVTProviderRecordGet.resetPauseMode(i4);
                                    if (!imsVTProviderRecordGet.hasPauseMode()) {
                                        imsVTProviderRecordGet.getSource().startRecording();
                                    }
                                    break;
                                } else if (i3 == 4) {
                                    if (imsVTProviderRecordGet.getSource() != null) {
                                        imsVTProviderRecordGet.getSource().stopRecordingAndPreview();
                                    }
                                    imsVTProviderRecordGet.clearPauseMode();
                                    break;
                                }
                                break;
                            case SESSION_EVENT_RESTART_CAMERA /* 4017 */:
                                Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_RESTART_CAMERA");
                                imsVTProviderRecordGet.getSource().restart();
                                break;
                            case SESSION_EVENT_GET_SENSOR_INFO /* 4018 */:
                                Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_GET_SENSOR_INFO");
                                VTSource.Resolution[] allCameraResolutions2 = VTSource.getAllCameraResolutions();
                                if (allCameraResolutions2 == null) {
                                    Log.e(TAG, "Error: sensor resolution = NULL");
                                }
                                nSetCameraParametersOnly(allCameraResolutions2);
                                break;
                            case SESSION_EVENT_GET_CAP_WITH_SIM /* 4019 */:
                                Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_GET_CAP_WITH_SIM");
                                VTSource.Resolution[] allCameraResolutions3 = ImsVTProviderUtil.sIsNoCameraMode ? VTDummySource.getAllCameraResolutions() : VTSource.getAllCameraResolutions();
                                if (allCameraResolutions3 == null) {
                                    Log.e(TAG, "Error: sensor resolution = NULL");
                                }
                                if (ImsService.getInstance(mVTProviderUtil.mContext).getModemMultiImsCount() <= 1) {
                                    while (mVTProviderUtil.getImsExtCallUtil().isCapabilitySwitching()) {
                                        try {
                                            Thread.sleep(200L);
                                        } catch (InterruptedException e2) {
                                        }
                                    }
                                    mainCapabilityPhoneId = ImsCommonUtil.getMainCapabilityPhoneId();
                                } else {
                                    mainCapabilityPhoneId = i2;
                                }
                                mVTProviderUtil.waitSimStateStable(mainCapabilityPhoneId);
                                if (mVTProviderUtil.getSimCardState(mainCapabilityPhoneId) != 11) {
                                    int i9 = 0;
                                    String iccId = "";
                                    while (true) {
                                        if (i9 > 0) {
                                            try {
                                                Thread.sleep(j);
                                                break;
                                            } catch (InterruptedException e3) {
                                            }
                                        }
                                        SubscriptionManager subscriptionManagerFrom = SubscriptionManager.from(mVTProviderUtil.mContext);
                                        if (subscriptionManagerFrom == null) {
                                            Log.e(TAG, "Cannot get SubscriptionManager");
                                            i7 = i9;
                                        } else {
                                            SubscriptionInfo activeSubscriptionInfo = subscriptionManagerFrom.getActiveSubscriptionInfo(mainCapabilityPhoneId + 1);
                                            if (activeSubscriptionInfo == null) {
                                                Log.e(TAG, "Cannot get mySubInfo");
                                                i7 = i9;
                                            } else {
                                                iccId = activeSubscriptionInfo.getIccId();
                                                i7 = i9 + 1;
                                            }
                                        }
                                        if (iccId.equals("") && i7 < 50) {
                                            i9 = i7;
                                            j = 200;
                                        }
                                    }
                                    if (iccId.equals("N/A") || i7 >= 50) {
                                        Log.d(TAG, "SIM state ABSENT");
                                        mainCapabilityPhoneId = -1;
                                    } else {
                                        Log.d(TAG, "SIM state READY");
                                    }
                                }
                                nSetCameraParametersWithSim(i2, mainCapabilityPhoneId, allCameraResolutions3);
                                break;
                            case SESSION_EVENT_PACKET_LOSS_RATE /* 4020 */:
                                Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_PACKET_LOSS_RATE");
                                Log.d(TAG, "Packet loss rate = " + i3 + "%");
                                if (i3 >= 0 && i3 <= 5) {
                                    Log.d(TAG, "Packet loss rate low, notify: 4023");
                                    imsVTProviderRecordGet.handleCallSessionEvent(SESSION_EVENT_PACKET_LOSS_RATE_LOW);
                                } else if (5 < i3 && i3 <= 10) {
                                    Log.d(TAG, "Packet loss rate medium, notify: 4022");
                                    imsVTProviderRecordGet.handleCallSessionEvent(SESSION_EVENT_PACKET_LOSS_RATE_MEDIUM);
                                } else if (10 < i3) {
                                    Log.d(TAG, "Packet loss rate high, notify: 4021");
                                    imsVTProviderRecordGet.handleCallSessionEvent(SESSION_EVENT_PACKET_LOSS_RATE_HIGH);
                                } else {
                                    Log.w(TAG, "Packet loss rate incorrect");
                                }
                                if (SystemProperties.get("persist.vendor.vt.RTPInfo").equals("1")) {
                                    imsVTProviderRecordGet.changeCallDataUsage(i3 * (-1));
                                }
                                break;
                            default:
                                switch (i) {
                                    case SESSION_EVENT_ERROR_SERVICE /* 8001 */:
                                        Log.d(TAG, "postEventFromNative : msg = MSG_ERROR_SERVICE");
                                        imsVTProviderRecordGet.getSource().release();
                                        mVTProviderUtil.recordRemove(i2);
                                        updateDefaultId();
                                        imsVTProviderRecordGet.handleCallSessionEvent(i);
                                        break;
                                    case SESSION_EVENT_ERROR_SERVER_DIED /* 8002 */:
                                        Log.d(TAG, "postEventFromNative : msg = MSG_ERROR_SERVER_DIED");
                                        mVTProviderUtil.releaseVTSourceAll();
                                        mVTProviderUtil.quitAllThread();
                                        mVTProviderUtil.recordRemoveAll();
                                        updateDefaultId();
                                        ImsVTProviderUtil.getInstance().reInitRefVTP();
                                        break;
                                    case SESSION_EVENT_ERROR_CAMERA_CRASHED /* 8003 */:
                                        Log.d(TAG, "postEventFromNative : msg = MSG_ERROR_CAMERA_CRASHED");
                                        imsVTProviderRecordGet.handleMaErrorProcess();
                                        imsVTProviderRecordGet.handleCallSessionEvent(i);
                                        break;
                                    case SESSION_EVENT_ERROR_CODEC /* 8004 */:
                                        Log.d(TAG, "postEventFromNative : msg = MSG_ERROR_CODEC");
                                        imsVTProviderRecordGet.handleCallSessionEvent(i);
                                        break;
                                    case SESSION_EVENT_ERROR_REC /* 8005 */:
                                        Log.d(TAG, "postEventFromNative : msg = MSG_ERROR_REC");
                                        imsVTProviderRecordGet.handleCallSessionEvent(i);
                                        break;
                                    case SESSION_EVENT_ERROR_CAMERA_SET_IGNORED /* 8006 */:
                                        Log.d(TAG, "postEventFromNative : msg = MSG_ERROR_CAMERA_SET_IGNORED");
                                        imsVTProviderRecordGet.handleCallSessionEvent(i);
                                        break;
                                    case SESSION_EVENT_ERROR_BIND_PORT /* 8007 */:
                                        Log.d(TAG, "postEventFromNative : msg = SESSION_EVENT_ERROR_BIND_PORT");
                                        imsVTProviderRecordGet.handleMaErrorProcess();
                                        imsVTProviderRecordGet.handleCallSessionEvent(i);
                                        break;
                                    default:
                                        Log.d(TAG, "postEventFromNative : msg = UNKNOWB");
                                        break;
                                }
                                break;
                        }
                        break;
                }
                break;
        }
    }

    protected static void updateDefaultId() {
        if (mVTProviderUtil.recordContain(mDefaultId)) {
            return;
        }
        if (mVTProviderUtil.recordSize() != 0) {
            mDefaultId = mVTProviderUtil.recordPopId();
        } else {
            mDefaultId = VT_PROVIDER_INVALIDE_ID;
        }
    }

    public void addVideoProviderStateListener(VideoProviderStateListener videoProviderStateListener) {
        this.mListeners.add(videoProviderStateListener);
    }

    public void clearPauseMode() {
        this.mPauseMode = 0;
        Log.d(TAG, "clearPauseMod mPauseMode = " + this.mPauseMode);
    }

    public int doSessionModifyDecision(int i, VideoProfile videoProfile, VideoProfile videoProfile2) {
        if (i == 0) {
            if (getRoaming()) {
                Log.i(TAG, "doSessionModifyDecision : new_action : from APP, reject due to during roaming");
                return 1;
            }
            if (getMaCrash()) {
                Log.i(TAG, "doSessionModifyDecision : new_action : from APP, reject due to during MA crash");
                return 1;
            }
            if (getDataOff()) {
                if (!VideoProfile.isAudioOnly(videoProfile2.getVideoState())) {
                    Log.i(TAG, "doSessionModifyDecision : new_action : from APP, reject due to during data off and not downgrade");
                    return 1;
                }
            } else if (isDuringSessionModify()) {
                boolean z = false;
                if (videoProfile2.getVideoState() == mVTProviderUtil.getImsExtCallUtil().getUpgradeCancelFlag()) {
                    Log.i(TAG, "doSessionModifyDecision : new_action : from APP, isCancelUpgrade is true");
                    z = true;
                }
                if (!z) {
                    Log.i(TAG, "doSessionModifyDecision : new_action : from APP, reject due to during App action");
                    return 1;
                }
                if (getDuringSessionRemoteRequest()) {
                    Log.i(TAG, "doSessionModifyDecision : new_action : from APP, reject due to during App action");
                    return 1;
                }
                Log.i(TAG, "doSessionModifyDecision : new_action : from APP, send cancel request");
                return 4;
            }
            Log.i(TAG, "doSessionModifyDecision : new_action : from APP, wait");
            return 0;
        }
        if (1 == i) {
            if (getRoaming()) {
                Log.i(TAG, "doSessionModifyDecision : new_action : Data off, skip due to during roaming");
                return 3;
            }
            if (getMaCrash()) {
                Log.i(TAG, "doSessionModifyDecision : new_action : Data off, skip due to during MA crash");
                return 3;
            }
            if (getDataOff()) {
                Log.i(TAG, "doSessionModifyDecision : new_action : Data off, reject due to data off");
                return 3;
            }
            if (isDuringSessionModify()) {
                if (getDuringSessionRequest()) {
                    Log.i(TAG, "doSessionModifyDecision : new_action : Data off, wait for App action");
                    return 0;
                }
                if (getDuringSessionRemoteRequest()) {
                    Log.i(TAG, "doSessionModifyDecision : new_action : Data off, reject previous due to data off downgrade");
                    return 2;
                }
            }
            Log.i(TAG, "doSessionModifyDecision : new_action : Data off, wait");
            return 0;
        }
        if (2 == i) {
            if (getRoaming()) {
                Log.i(TAG, "doSessionModifyDecision : new_action : Roaming, skip due to during roaming");
                return 3;
            }
            if (getMaCrash()) {
                Log.i(TAG, "doSessionModifyDecision : new_action : Roaming, skip due to during MA crash");
                return 3;
            }
            if (getDataOff()) {
                Log.i(TAG, "doSessionModifyDecision : new_action : Roaming, skip due to during data off");
                return 3;
            }
            if (isDuringSessionModify()) {
                if (getDuringSessionRequest()) {
                    Log.i(TAG, "doSessionModifyDecision : new_action : Roaming, wait for App action");
                    return 0;
                }
                if (getDuringSessionRemoteRequest()) {
                    Log.i(TAG, "doSessionModifyDecision : new_action : Roaming, reject previous due to roaming downgrade");
                    return 2;
                }
            }
            Log.i(TAG, "doSessionModifyDecision : new_action : Roaming, wait");
            return 0;
        }
        if (3 == i) {
            if (getRoaming()) {
                Log.i(TAG, "doSessionModifyDecision : new_action : MA crash, skip due to during roaming");
                return 3;
            }
            if (getMaCrash()) {
                Log.i(TAG, "doSessionModifyDecision : new_action : MA crash, skip due to during MA crash");
                return 3;
            }
            if (getDataOff()) {
                Log.i(TAG, "doSessionModifyDecision : new_action : MA crash, skip due to during data off");
                return 3;
            }
            if (isDuringSessionModify()) {
                if (getDuringSessionRequest()) {
                    Log.i(TAG, "doSessionModifyDecision : new_action : MA crash, wait for App action");
                    return 0;
                }
                if (getDuringSessionRemoteRequest()) {
                    Log.i(TAG, "doSessionModifyDecision : new_action : MA crash, reject previous due to MA crash");
                    return 2;
                }
            }
            Log.i(TAG, "doSessionModifyDecision : new_action : MA crash, wait");
            return 0;
        }
        if (4 != i) {
            Log.i(TAG, "doSessionModifyDecision : new_action : wait");
            return 0;
        }
        if (getRoaming()) {
            Log.i(TAG, "doSessionModifyDecision : new_action : Bad bitrate, skip due to during roaming");
            return 3;
        }
        if (getMaCrash()) {
            Log.i(TAG, "doSessionModifyDecision : new_action : Bad bitrate, skip due to during MA crash");
            return 3;
        }
        if (getDataOff()) {
            Log.i(TAG, "doSessionModifyDecision : new_action : Bad bitrate, skip due to data off");
            return 3;
        }
        if (isDuringSessionModify()) {
            if (getDuringSessionRequest()) {
                Log.i(TAG, "doSessionModifyDecision : new_action : Bad bitrate, wait for App action");
                return 0;
            }
            if (getDuringSessionRemoteRequest()) {
                Log.i(TAG, "doSessionModifyDecision : new_action : Bad bitrate, reject previous due to data off downgrade");
                return 2;
            }
        }
        Log.i(TAG, "doSessionModifyDecision : new_action : Bad bitrate, wait");
        return 0;
    }

    public boolean getDataOff() {
        return this.mIsDataOff;
    }

    public boolean getDuringSessionRemoteRequest() {
        return this.mDuringSessionRemoteRequestOperation;
    }

    public boolean getDuringSessionRequest() {
        return this.mDuringSessionRequestOperation;
    }

    public int getId() {
        return this.mId;
    }

    public boolean getIsAudioCall() {
        return this.mIsAudioCall;
    }

    public boolean getMaCrash() {
        return this.mIsMaCrashed;
    }

    public boolean getRoaming() {
        return this.mIsRoaming;
    }

    protected int getSessionModifyAction(VideoProfile videoProfile, VideoProfile videoProfile2) {
        if (this.mMode == 1 || !VideoProfile.isPaused(videoProfile2.getVideoState())) {
            return (this.mMode != 1 || VideoProfile.isPaused(videoProfile2.getVideoState())) ? -1 : 0;
        }
        return 1;
    }

    public int getSimId() {
        return this.mSimId;
    }

    public VTSource getSource() {
        VTSource vTSource = this.mSource;
        if (vTSource != null) {
            return vTSource;
        }
        Log.w(TAG, "Get dummy vtsource");
        return this.mDummySource;
    }

    public int getState() {
        return this.mState;
    }

    public void handleBadBitrateProcess() {
        Log.w(TAG, "[ID=" + this.mId + "] [handleBadBitrateProcess] start");
        if (this.mMode == 65536) {
            Log.w(TAG, "[ID=" + this.mId + "] [handleBadBitrateProcess] call end");
            return;
        }
        VideoProfile videoProfile = this.mCurrentProfile;
        VideoProfile videoProfile2 = new VideoProfile(0, 2);
        int iDoSessionModifyDecision = doSessionModifyDecision(4, videoProfile, videoProfile2);
        if (2 == iDoSessionModifyDecision) {
            nResponseLocalConfig(this.mId, mVTProviderUtil.packFromVdoProfile(new VideoProfile(0, 2)));
            setDuringSessionRemoteRequest(false);
            this.mLastRequestVideoProfile = videoProfile2;
            nRequestPeerConfig(this.mId, mVTProviderUtil.packFromVdoProfile(videoProfile2));
        } else if (3 == iDoSessionModifyDecision) {
            Log.d(TAG, "[ID=" + this.mId + "] [handleBadBitrateProcess] skip");
        } else if (iDoSessionModifyDecision == 0) {
            waitSessionOperationComplete();
            this.mLastRequestVideoProfile = videoProfile2;
            nRequestPeerConfig(this.mId, mVTProviderUtil.packFromVdoProfile(videoProfile2));
        }
        Log.d(TAG, "[ID=" + this.mId + "] [handleBadBitrateProcess] Finish");
    }

    public void handleMaErrorProcess() {
        Log.w(TAG, "[ID=" + this.mId + "] [handleMaErrorProcess] start");
        if (this.mMode == 65536) {
            Log.w(TAG, "[ID=" + this.mId + "] [handleMaErrorProcess] call end");
            return;
        }
        VideoProfile videoProfile = new VideoProfile(3, 2);
        VideoProfile videoProfile2 = new VideoProfile(0, 2);
        int iDoSessionModifyDecision = doSessionModifyDecision(3, videoProfile, videoProfile2);
        if (1 == iDoSessionModifyDecision) {
            Log.e(TAG, "[handleMaErrorProcess] : should not in this case");
        } else if (2 == iDoSessionModifyDecision) {
            nResponseLocalConfig(this.mId, mVTProviderUtil.packFromVdoProfile(new VideoProfile(0, 2)));
            setDuringSessionRemoteRequest(false);
            setMaCrash(true);
            this.mLastRequestVideoProfile = videoProfile2;
            nRequestPeerConfig(this.mId, mVTProviderUtil.packFromVdoProfile(videoProfile2));
        } else if (3 == iDoSessionModifyDecision) {
            Log.d(TAG, "[ID=" + this.mId + "] [sendSessionModifyRequestByImsInternal] skip");
        } else if (iDoSessionModifyDecision == 0) {
            waitSessionOperationComplete();
            setMaCrash(true);
            this.mLastRequestVideoProfile = videoProfile2;
            nRequestPeerConfig(this.mId, mVTProviderUtil.packFromVdoProfile(videoProfile2));
        }
        Log.d(TAG, "[ID=" + this.mId + "] [handleMaErrorProcess] Finish");
    }

    public boolean hasPauseMode() {
        return this.mPauseMode != 0;
    }

    public boolean hasPauseMode(int i) {
        return (this.mPauseMode & i) == i;
    }

    public boolean hasState(int i, int i2) {
        return (i & i2) == i2;
    }

    protected boolean isDuringNotAppDowngrade() {
        if (getMaCrash()) {
            return true;
        }
        return (getDataOff() && VideoProfile.isAudioOnly(this.mLastRequestVideoProfile.getVideoState())) || getRoaming();
    }

    protected boolean isDuringSessionModify() {
        return getDuringSessionRequest() || getDuringSessionRemoteRequest();
    }

    public void notifyResume() {
    }

    public void notifyVideoPauseStateChange() {
        Log.d(TAG, "[ID=" + this.mId + "] [notifyVideoPauseStateChange] Start");
        boolean z = false;
        int i = this.mMode;
        if (i == 0) {
            z = false;
        } else if (1 == i) {
            z = true;
        }
        for (VideoProviderStateListener videoProviderStateListener : this.mListeners) {
            if (videoProviderStateListener != null) {
                videoProviderStateListener.onReceivePauseState(z);
                Log.d(TAG, "[ID=" + this.mId + "] [notifyVideoPauseStateChange] isVideoStatePause: " + z);
            }
        }
        Log.d(TAG, "[ID=" + this.mId + "] [notifyVideoPauseStateChange] Finish");
    }

    public void notifyWifiUsageChange(long j) {
        Log.d(TAG, "[ID=" + this.mId + "] [notifyWifiUsageChange] Start, usage : " + j);
        for (VideoProviderStateListener videoProviderStateListener : this.mListeners) {
            if (videoProviderStateListener != null) {
                videoProviderStateListener.onReceiveWiFiUsage(j);
            }
        }
        Log.d(TAG, "[ID=" + this.mId + "] [notifyWifiUsageChange] Finish");
    }

    @Override // com.mediatek.ims.internal.VTSource.EventCallback
    public void onError() {
        Log.d(TAG, "[ID=" + this.mId + "] [onError] Start");
        handleMaErrorProcess();
        handleCallSessionEvent(SESSION_EVENT_ERROR_CAMERA_CRASHED);
        Log.d(TAG, "[ID=" + this.mId + "] [onError] Finish");
    }

    @Override // com.mediatek.ims.internal.VTSource.EventCallback
    public void onOpenFail() {
        Log.d(TAG, "[ID=" + this.mId + "] [onOpenFail] Start");
        handleCallSessionEvent(5);
        Log.d(TAG, "[ID=" + this.mId + "] [onOpenFail] Finish");
    }

    @Override // com.mediatek.ims.internal.VTSource.EventCallback
    public void onOpenSuccess() {
        Log.d(TAG, "[ID=" + this.mId + "] [onOpenSuccess] Start");
        handleCallSessionEvent(6);
        Log.d(TAG, "[ID=" + this.mId + "] [onOpenSuccess] Finish");
    }

    public void onReceiveCallSessionEvent(int i) {
        SomeArgs someArgsObtain = SomeArgs.obtain();
        someArgsObtain.arg1 = Integer.valueOf(i);
        this.mProviderHandler.obtainMessage(MSG_RECEIVE_CALL_SESSION_EVENT, someArgsObtain).sendToTarget();
    }

    public void onRequestCallDataUsage() {
        this.mProviderHandler.obtainMessage(10).sendToTarget();
    }

    public void onRequestCameraCapabilities() {
        this.mProviderHandler.obtainMessage(9).sendToTarget();
    }

    public void onResetWrapper() {
        this.mProviderHandler.obtainMessage(MSG_RESET_WRAPPER).sendToTarget();
    }

    public void onSendSessionModifyRequest(VideoProfile videoProfile, VideoProfile videoProfile2) {
        SomeArgs someArgsObtain = SomeArgs.obtain();
        someArgsObtain.arg1 = videoProfile;
        someArgsObtain.arg2 = videoProfile2;
        this.mProviderHandler.obtainMessage(7, someArgsObtain).sendToTarget();
    }

    public void onSendSessionModifyResponse(VideoProfile videoProfile) {
        this.mProviderHandler.obtainMessage(8, videoProfile).sendToTarget();
    }

    public void onSetCamera(String str) {
        this.mProviderHandler.obtainMessage(2, str).sendToTarget();
    }

    public void onSetDeviceOrientation(int i) {
        this.mProviderHandler.obtainMessage(5, i, 0).sendToTarget();
    }

    public void onSetDisplaySurface(Surface surface) {
        this.mProviderHandler.obtainMessage(4, surface).sendToTarget();
    }

    public void onSetPauseImage(Uri uri) {
        this.mProviderHandler.obtainMessage(11, uri).sendToTarget();
    }

    public void onSetPreviewSurface(Surface surface) {
        this.mProviderHandler.obtainMessage(3, surface).sendToTarget();
    }

    public void onSetUIMode(int i) {
        this.mProviderHandler.obtainMessage(MSG_SET_UI_MODE, Integer.valueOf(i)).sendToTarget();
        if (i == 65536) {
            this.mIsDestroying = true;
        }
    }

    public void onSetZoom(float f) {
        this.mProviderHandler.obtainMessage(6, Float.valueOf(f)).sendToTarget();
    }

    public void onSwitchFeature(int i, boolean z) {
        SomeArgs someArgsObtain = SomeArgs.obtain();
        someArgsObtain.arg1 = Integer.valueOf(i);
        someArgsObtain.arg2 = Boolean.valueOf(z);
        this.mProviderHandler.obtainMessage(MSG_SWITCH_FEATURE, someArgsObtain).sendToTarget();
    }

    public void onSwitchRoaming(boolean z) {
        SomeArgs someArgsObtain = SomeArgs.obtain();
        someArgsObtain.arg1 = Boolean.valueOf(z);
        this.mProviderHandler.obtainMessage(MSG_SWITCH_ROAMING, someArgsObtain).sendToTarget();
    }

    public void onUpdateCallRat(int i) {
        SomeArgs someArgsObtain = SomeArgs.obtain();
        someArgsObtain.arg1 = Integer.valueOf(i);
        this.mProviderHandler.obtainMessage(MSG_UPDATE_CALL_RAT, someArgsObtain).sendToTarget();
    }

    public void onUpdateProfile(int i) {
        SomeArgs someArgsObtain = SomeArgs.obtain();
        someArgsObtain.arg1 = Integer.valueOf(i);
        this.mProviderHandler.obtainMessage(MSG_UPDATE_PROFILE, someArgsObtain).sendToTarget();
    }

    public void quitThread() {
        this.mProviderHandlerThread.quitSafely();
    }

    protected void reSendLastSessionModify() {
        Log.d(TAG, "[ID=" + this.mId + "] [reSendLastSessionModify] Profile:" + this.mLastRequestVideoProfile.toString());
        try {
            Thread.sleep(500L);
        } catch (InterruptedException e) {
        }
        nRequestPeerConfig(this.mId, mVTProviderUtil.packFromVdoProfile(this.mLastRequestVideoProfile));
    }

    public void receiveCallSessionEventInternal(int i) {
        Log.d(TAG, "[ID=" + this.mId + "] [receiveCallSessionEventInternal] Start, event=" + i);
        if (i == 132) {
            notifyResume();
        }
        Log.d(TAG, "[ID=" + this.mId + "] [receiveCallSessionEventInternal] Finish");
    }

    public void receiveSessionModifyResponseInternal(int i, VideoProfile videoProfile, VideoProfile videoProfile2) {
        receiveSessionModifyResponse(i, videoProfile, videoProfile2);
        if (getMaCrash()) {
            setState(4);
            setMaCrash(false);
        }
        if (getDataOff()) {
            int videoState = videoProfile2.getVideoState();
            if ((VideoProfile.isPaused(videoState) || VideoProfile.isAudioOnly(videoState)) && !mVTProviderUtil.isVideoCallOn(this.mSimId)) {
                setState(1);
            } else {
                resetState(1);
            }
            setDataOff(false);
        }
        if (getRoaming()) {
            setState(2);
            setRoaming(false);
        }
        if (getDuringSessionRequest()) {
            setDuringSessionRequest(false);
        }
        if (i == 1) {
            if (VideoProfile.isAudioOnly(videoProfile2.getVideoState())) {
                setIsAudioCall(true);
            } else {
                setIsAudioCall(false);
            }
        }
    }

    public void rejectSessionModifyInternal(int i, VideoProfile videoProfile, VideoProfile videoProfile2) {
        receiveSessionModifyResponse(i, videoProfile, videoProfile2);
    }

    public void removeVideoProviderStateListener(VideoProviderStateListener videoProviderStateListener) {
        this.mListeners.remove(videoProviderStateListener);
    }

    public void requestCallDataUsageInternal() {
        ImsVTUsageManager.ImsVTUsage imsVTUsageRequestCallDataUsage;
        Log.d(TAG, "[ID=" + this.mId + "] [onRequestCallDataUsage] Start");
        waitInitComplete();
        if (this.mMode == 65536 || (imsVTUsageRequestCallDataUsage = this.mUsager.requestCallDataUsage()) == null) {
            return;
        }
        changeCallDataUsage(imsVTUsageRequestCallDataUsage.getLteUsage(3));
        notifyWifiUsageChange(imsVTUsageRequestCallDataUsage.getWifiUsage(3));
    }

    public void requestCameraCapabilitiesInternal() {
        Log.d(TAG, "[ID=" + this.mId + "] [onRequestCameraCapabilities] Start");
        waitInitComplete();
        if (this.mMode == 65536) {
            return;
        }
        if (this.mCameraId == null) {
            Log.w(TAG, "onRequestCameraCapabilities: not set camera yet");
            return;
        }
        float fFloatValue = 1.0f;
        CameraCharacteristics cameraCharacteristics = this.mSource.getCameraCharacteristics();
        if (cameraCharacteristics == null) {
            Log.w(TAG, "onRequestCameraCapabilities: camera_cs null! Use default value.");
        } else {
            fFloatValue = ((Float) cameraCharacteristics.get(CameraCharacteristics.SCALER_AVAILABLE_MAX_DIGITAL_ZOOM)).floatValue();
        }
        boolean z = fFloatValue > 1.0f;
        Log.d(TAG, "[ID=" + this.mId + "] [onRequestCameraCapabilities] Width: " + this.mPreviewSize.width + " Height: " + this.mPreviewSize.height + " zoom_support: " + z + " zoom_max: " + fFloatValue);
        changeCameraCapabilities(new VideoProfile.CameraCapabilities(this.mPreviewSize.width, this.mPreviewSize.height, z, fFloatValue));
        this.mHasRequestCamCap = true;
        StringBuilder sb = new StringBuilder();
        sb.append("[ID=");
        sb.append(this.mId);
        sb.append("] [onRequestCameraCapabilities] Finish");
        Log.d(TAG, sb.toString());
    }

    public void resetPauseMode(int i) {
        Log.d(TAG, "resetPauseMode old mPauseMode = " + this.mPauseMode);
        this.mPauseMode = this.mPauseMode & (~i);
        Log.d(TAG, "resetPauseMode new mPauseMode = " + this.mPauseMode);
    }

    public void resetState(int i) {
        Log.d(TAG, "resetState old mState = " + this.mState);
        this.mState = this.mState & (~i);
        Log.d(TAG, "resetState new mState = " + this.mState);
    }

    public void resetWrapperInternal() {
        Log.d(TAG, "[ID=" + this.mId + "] [onResetWrapper] Start");
        waitInitComplete();
        int i = this.mMode;
        if (i == 65536) {
            return;
        }
        if (1 == i) {
            setUIModeInternal(0, true);
        }
        Log.d(TAG, "[ID=" + this.mId + "] [onResetWrapper] Finish");
    }

    protected void sendFgBgSessionModifyRequestInternal(VideoProfile videoProfile, VideoProfile videoProfile2, int i, boolean z) {
        setUIModeInternal(i, z);
    }

    public void sendSessionModifyRequestByImsInternal(VideoProfile videoProfile, VideoProfile videoProfile2) {
        Log.d(TAG, "[ID=" + this.mId + "] [sendSessionModifyRequestByImsInternal] Start, fromProfile:" + videoProfile.toString() + ", toProfile:" + videoProfile2.toString());
        if (this.mMode == 65536) {
            Log.d(TAG, "[ID=" + this.mId + "] [sendSessionModifyRequestByImsInternal] call end");
            return;
        }
        VideoProfile videoProfile3 = new VideoProfile(mVTProviderUtil.getImsExtCallUtil().getRealRequest(videoProfile2.getVideoState()), videoProfile2.getQuality());
        int iDoSessionModifyDecision = doSessionModifyDecision(1, videoProfile, videoProfile3);
        if (2 == iDoSessionModifyDecision) {
            nResponseLocalConfig(this.mId, mVTProviderUtil.packFromVdoProfile(new VideoProfile(0, 2)));
            setDuringSessionRemoteRequest(false);
            setDataOff(true);
            this.mLastRequestVideoProfile = videoProfile3;
            nRequestPeerConfig(this.mId, mVTProviderUtil.packFromVdoProfile(videoProfile3));
        } else if (3 == iDoSessionModifyDecision) {
            Log.d(TAG, "[ID=" + this.mId + "] [sendSessionModifyRequestByImsInternal] skip");
        } else if (iDoSessionModifyDecision == 0) {
            waitSessionOperationComplete();
            setDataOff(true);
            this.mLastRequestVideoProfile = videoProfile3;
            nRequestPeerConfig(this.mId, mVTProviderUtil.packFromVdoProfile(videoProfile3));
        } else {
            Log.e(TAG, "[ID=" + this.mId + "] [sendSessionModifyRequestByImsInternal] should not in this case");
        }
        Log.d(TAG, "[ID=" + this.mId + "] [onSendSessionModifyRequest] Finish");
    }

    public void sendSessionModifyRequestInternal(VideoProfile videoProfile, VideoProfile videoProfile2) {
        if (mVTProviderUtil.getImsExtCallUtil().isImsFwkRequest(videoProfile2.getVideoState())) {
            Log.d(TAG, "[ID=" + this.mId + "] [onSendSessionModifyRequest] requst from IMS FWK, swith handle function");
            sendSessionModifyRequestByImsInternal(videoProfile, videoProfile2);
            return;
        }
        Log.d(TAG, "[ID=" + this.mId + "] [onSendSessionModifyRequest] Start, fromProfile:" + videoProfile.toString() + ", toProfile:" + videoProfile2.toString());
        waitInitComplete();
        if (this.mMode == 65536) {
            Log.d(TAG, "[ID=" + this.mId + "] [onSendSessionModifyRequest] call end");
            return;
        }
        int sessionModifyAction = getSessionModifyAction(videoProfile, videoProfile2);
        if (sessionModifyAction != -1) {
            sendFgBgSessionModifyRequestInternal(videoProfile, videoProfile2, sessionModifyAction, true);
            return;
        }
        if (VideoProfile.isVideo(videoProfile2.getVideoState())) {
            if (hasState(this.mState, 4)) {
                rejectSessionModifyInternal(2, videoProfile2, videoProfile);
                Log.d(TAG, "[ID=" + this.mId + "] [onSendSessionModifyRequest] Reject it by have MA CRASH:" + this.mState);
                return;
            }
            if ((!mVTProviderUtil.isVideoCallOn(this.mSimId) || hasState(this.mState, 1) || hasState(this.mState, 2)) && (this.mCallRat != 1 || !mVTProviderUtil.isViWifiOn(this.mSimId))) {
                rejectSessionModifyInternal(2, videoProfile2, videoProfile);
                Log.d(TAG, "[ID=" + this.mId + "] [onSendSessionModifyRequest] Reject it by state:" + this.mState);
                return;
            }
        }
        int iDoSessionModifyDecision = doSessionModifyDecision(0, videoProfile, videoProfile2);
        if (1 == iDoSessionModifyDecision) {
            rejectSessionModifyInternal(2, videoProfile2, videoProfile);
        } else if (4 == iDoSessionModifyDecision) {
            Log.d(TAG, "[ID=" + this.mId + "] [onSendSessionModifyRequest] send request immediately");
            setDuringSessionRequest(true);
            this.mLastRequestVideoProfile = videoProfile2;
            nRequestPeerConfig(this.mId, mVTProviderUtil.packFromVdoProfile(videoProfile2));
        } else if (iDoSessionModifyDecision == 0) {
            waitSessionOperationComplete();
            setDuringSessionRequest(true);
            this.mLastRequestVideoProfile = videoProfile2;
            nRequestPeerConfig(this.mId, mVTProviderUtil.packFromVdoProfile(videoProfile2));
        } else {
            Log.e(TAG, "[ID=" + this.mId + "] [onSendSessionModifyRequest] should not in this case");
            rejectSessionModifyInternal(2, videoProfile2, videoProfile);
        }
        Log.d(TAG, "[ID=" + this.mId + "] [onSendSessionModifyRequest] Finish");
    }

    public void sendSessionModifyResponseInternal(VideoProfile videoProfile) {
        Log.d(TAG, "[ID=" + this.mId + "] [onSendSessionModifyResponse] Start, responseProfile:" + videoProfile.toString());
        waitInitComplete();
        if (this.mMode == 65536) {
            Log.d(TAG, "[ID=" + this.mId + "] [onSendSessionModifyResponse] call end");
            return;
        }
        if (getDuringSessionRemoteRequest()) {
            nResponseLocalConfig(this.mId, mVTProviderUtil.packFromVdoProfile(videoProfile));
            receiveSessionModifyResponse(1, videoProfile, videoProfile);
            if (VideoProfile.isAudioOnly(videoProfile.getVideoState())) {
                setIsAudioCall(true);
            } else {
                setIsAudioCall(false);
            }
        } else {
            Log.d(TAG, "[ID=" + this.mId + "] [onSendSessionModifyResponse] Already response, skip it");
        }
        setDuringSessionRemoteRequest(false);
        Log.d(TAG, "[ID=" + this.mId + "] [onSendSessionModifyResponse] Finish");
    }

    public void setCameraInternal(String str) {
        Log.d(TAG, "[ID=" + this.mId + "] [onSetCamera] id : " + str);
        waitInitComplete();
        if (this.mMode == 65536) {
            return;
        }
        if (this.mIsDestroying && str != null) {
            Log.d(TAG, "[ID=" + this.mId + "] [onSetCamera] UI mode is destroying");
            return;
        }
        int i = 0;
        if (str == null) {
            this.mHasRequestCamCap = false;
        }
        if (this.mMode == 1) {
            Log.w(TAG, "[ID=" + this.mId + "] [onSetCamera] onSetCamera, not set camera when in BG, only save id=" + str);
        } else if (str != null) {
            while (this.mUplinkState == 2 && hasPauseMode(2)) {
                if (i >= 10) {
                    Log.w(TAG, "[ID=" + this.mId + "] [onSetCamera] onSetCamera, Call hold or held, ignore setCamera");
                    handleCallSessionEvent(SESSION_EVENT_ERROR_CAMERA_SET_IGNORED);
                    return;
                }
                Log.w(TAG, "[ID=" + this.mId + "] [onSetCamera] onSetCamera, Call hold or held, wait and retry");
                try {
                    Thread.sleep(200L);
                } catch (InterruptedException e) {
                }
                i++;
            }
            int i2 = this.mUplinkState;
            if ((i2 == 0 || i2 == 4) && i > 0) {
                Log.w(TAG, "[ID=" + this.mId + "] [onSetCamera] onSetCamera, recording stopped");
                return;
            }
            mVTProviderUtil.updateCameraUsage(this.mId);
            this.mSource.open(str);
            this.mSource.showMe();
            nSetCamera(this.mId, Integer.valueOf(str).intValue());
        } else {
            this.mSource.hideMe();
            this.mSource.close();
        }
        this.mCameraId = str;
        Log.d(TAG, "[ID=" + this.mId + "] [onSetCamera] Finish");
    }

    public void setDataOff(boolean z) {
        this.mIsDataOff = z;
        Log.w(TAG, "setDataOff : " + this.mIsDataOff);
    }

    public void setDeviceOrientationInternal(int i) {
        Log.d(TAG, "[ID=" + this.mId + "] [onSetDeviceOrientation] Start, rotation: " + i);
        if (this.mMode == 65536) {
            Log.d(TAG, "[ID=" + this.mId + "] [onSetDeviceOrientation] call end");
            return;
        }
        waitInitComplete();
        if (this.mOrientation != i) {
            Log.d(TAG, "[ID=" + this.mId + "] [onSetDeviceOrientation] device orientation change from " + this.mOrientation + " to " + i);
            this.mOrientation = i;
            this.mProviderHandler.removeCallbacks(this.mOrientationRunnable);
            this.mProviderHandler.postDelayed(this.mOrientationRunnable, (long) SystemProperties.getInt(MTK_VILTE_ROTATE_DELAY, 500));
        }
        Log.d(TAG, "[ID=" + this.mId + "] [onSetDeviceOrientation] Finish");
    }

    public void setDisplaySurfaceInternal(Surface surface) {
        Log.d(TAG, "[ID=" + this.mId + "] [onSetDisplaySurface] Start, surface: " + surface);
        waitInitComplete();
        if (this.mMode == 65536) {
            Log.d(TAG, "[ID=" + this.mId + "] [onSetDisplaySurface] call end");
            return;
        }
        nSetDisplaySurface(this.mId, surface);
        Log.d(TAG, "[ID=" + this.mId + "] [onSetDisplaySurface] Finish");
    }

    public void setDuringSessionRemoteRequest(boolean z) {
        synchronized (this.mSessionOperationFlagLock) {
            this.mDuringSessionRemoteRequestOperation = z;
            Log.w(TAG, "setDuringSessionRemoteRequest : " + this.mDuringSessionRemoteRequestOperation);
        }
    }

    public void setDuringSessionRequest(boolean z) {
        synchronized (this.mSessionOperationFlagLock) {
            this.mDuringSessionRequestOperation = z;
            Log.w(TAG, "setDuringSessionRequest : " + this.mDuringSessionRequestOperation);
        }
    }

    public void setId(int i) {
        Log.d(TAG, "setId id = " + i + ", mId = " + this.mId);
        this.mId = i;
        this.mUsager.setId(i);
        if (mDefaultId == -10000) {
            mDefaultId = this.mId;
        }
    }

    public void setIsAudioCall(boolean z) {
        this.mIsAudioCall = z;
        Log.w(TAG, "setIsAudioCall : " + this.mIsAudioCall);
    }

    public void setMaCrash(boolean z) {
        this.mIsMaCrashed = z;
        Log.w(TAG, "setMaCrash : " + this.mIsMaCrashed);
    }

    public void setPauseImageInternal(Uri uri) {
        Log.d(TAG, "[ID=" + this.mId + "] [onSetPauseImage] Start, uri: " + uri);
        waitInitComplete();
        if (this.mMode == 65536) {
            return;
        }
        this.mSource.setReplacePicture(uri);
        Log.d(TAG, "[ID=" + this.mId + "] [onSetPauseImage] Finish");
    }

    public void setPauseMode(int i) {
        this.mPauseMode |= i;
        Log.d(TAG, "setPauseMode mPauseMode = " + this.mPauseMode);
    }

    public void setPreviewSurfaceInternal(Surface surface) {
        Log.d(TAG, "[ID=" + this.mId + "] [onSetPreviewSurface] Start, surface: " + surface);
        waitInitComplete();
        if (this.mMode == 65536) {
            Log.d(TAG, "[ID=" + this.mId + "] [onSetPreviewSurface] call end");
            return;
        }
        this.mSource.setPreviewSurface(surface);
        nSetPreviewSurface(this.mId, surface);
        Log.d(TAG, "[ID=" + this.mId + "] [onSetPreviewSurface] Finish");
    }

    public void setRoaming(boolean z) {
        this.mIsRoaming = z;
        Log.w(TAG, "setRoaming : " + this.mIsRoaming);
    }

    public void setSimId(int i) {
        Log.d(TAG, "setSimId mSimId = " + i);
        this.mSimId = i;
        this.mUsager.setSimId(i);
    }

    public void setState(int i) {
        this.mState |= i;
        Log.d(TAG, "setState mState = " + this.mState);
    }

    public void setUIModeInternal(int i, boolean z) {
        Log.d(TAG, "[ID=" + this.mId + "] [onSetUIMode] Start, mode: " + i);
        int i2 = this.mMode;
        if (i2 == 65536) {
            Log.d(TAG, "[ID=" + this.mId + "] [onSetUIMode] call end");
            return;
        }
        if (i == 0) {
            this.mMode = i;
            if (z) {
                notifyVideoPauseStateChange();
            }
            if (this.mCameraId != null) {
                mVTProviderUtil.updateCameraUsage(this.mId);
                this.mSource.open(this.mCameraId);
                this.mSource.showMe();
                nSetCamera(this.mId, Integer.valueOf(this.mCameraId).intValue());
            } else {
                this.mSource.hideMe();
                this.mSource.close();
            }
            nSetUIMode(this.mId, i);
        } else if (i != 1) {
            if (i == 4) {
                if (i2 != 65536) {
                    this.mMode = 0;
                }
                this.mIsDuringResetMode = true;
                new Thread(new Runnable() { // from class: com.mediatek.ims.internal.ImsVTProvider.3
                    @Override // java.lang.Runnable
                    public synchronized void run() {
                        Log.d(ImsVTProvider.TAG, "[ID=" + ImsVTProvider.this.mId + "] [onSetUIMode] resetModeRecoverThread start");
                        try {
                            Thread.sleep(600L);
                            ImsVTProvider.this.mIsDuringResetMode = false;
                        } catch (InterruptedException e) {
                        }
                        Log.d(ImsVTProvider.TAG, "[ID=" + ImsVTProvider.this.mId + "] [onSetUIMode] resetModeRecoverThread finish");
                    }
                }).start();
                if (z) {
                    notifyVideoPauseStateChange();
                }
            } else if (i == 65536) {
                if (true == this.mInitComplete) {
                    requestCallDataUsageInternal();
                }
                this.mMode = i;
                this.mIsDestroying = false;
                nFinalization(this.mId);
                quitThread();
            }
        } else if (this.mIsDuringResetMode) {
            Log.d(TAG, "[ID=" + this.mId + "] [onSetUIMode] reset mode (voice call) should not recv BG, skip");
        } else {
            this.mMode = i;
            if (z) {
                notifyVideoPauseStateChange();
            }
            this.mSource.hideMe();
            this.mSource.close();
            nSetUIMode(this.mId, i);
        }
        Log.d(TAG, "[ID=" + this.mId + "] [onSetUIMode] Finish");
    }

    public void setZoomInternal(float f) {
        Log.d(TAG, "[ID=" + this.mId + "] [onSetZoom] Start, value: " + f);
        waitInitComplete();
        if (this.mMode == 65536) {
            return;
        }
        this.mSource.setZoom(f);
        Log.d(TAG, "[ID=" + this.mId + "] [onSetZoom] Finish");
    }

    public void switchFeatureInternal(int i, boolean z) {
        Log.d(TAG, "[ID=" + this.mId + "] [onSwitchFeature] Start, feature: " + i + ", on: " + z);
        waitInitComplete();
        if (this.mMode == 65536) {
            return;
        }
        if (z) {
            nSwitchFeature(this.mId, i, 1);
            resetState(1);
        } else {
            nSwitchFeature(this.mId, i, 0);
        }
        Log.d(TAG, "[ID=" + this.mId + "] [onSwitchFeature] Finish");
    }

    public void switchRoamingInternal(boolean z) {
        Log.d(TAG, "[ID=" + this.mId + "] [onSwitchRoaming] Start, phoneId: " + this.mSimId + ", on: " + z);
        waitInitComplete();
        if (!z) {
            resetState(2);
        } else {
            if (this.mMode == 65536) {
                Log.d(TAG, "[ID=" + this.mId + "] [onSwitchRoaming] call end");
                return;
            }
            VideoProfile videoProfile = new VideoProfile(3, 2);
            VideoProfile videoProfile2 = new VideoProfile(0, 2);
            int iDoSessionModifyDecision = doSessionModifyDecision(2, videoProfile, videoProfile2);
            if (1 == iDoSessionModifyDecision) {
                Log.e(TAG, "onSwitchRoaming() : should not in this case");
                return;
            }
            if (2 == iDoSessionModifyDecision) {
                VideoProfile videoProfile3 = this.mLastRequestVideoProfile;
                receiveSessionModifyResponseInternal(2, videoProfile3, videoProfile3);
                setRoaming(true);
                this.mLastRequestVideoProfile = videoProfile2;
                nRequestPeerConfig(this.mId, mVTProviderUtil.packFromVdoProfile(videoProfile2));
                return;
            }
            if (3 == iDoSessionModifyDecision) {
                return;
            }
            if (iDoSessionModifyDecision == 0) {
                waitSessionOperationComplete();
                setRoaming(true);
                this.mLastRequestVideoProfile = videoProfile2;
                nRequestPeerConfig(this.mId, mVTProviderUtil.packFromVdoProfile(videoProfile2));
                setRoaming(true);
            }
        }
        Log.d(TAG, "[ID=" + this.mId + "] [onSwitchRoaming] Finish");
    }

    public void updateCallRatInternal(int i) {
        Log.d(TAG, "[ID=" + this.mId + "] [updateCallRatInternal] Start, callRat=" + i);
        this.mCallRat = i;
        Log.d(TAG, "[ID=" + this.mId + "] [updateCallRatInternal] Finish");
    }

    public void updateProfileInternal(int i) {
        Log.d(TAG, "[ID=" + this.mId + "] [updateCurrentProfile] Start, state=" + i);
        this.mCurrentProfile = new VideoProfile(i, 2);
        Log.d(TAG, "[ID=" + this.mId + "] [updateCurrentProfile] Finish");
    }

    public void waitInitComplete() {
        while (!this.mInitComplete && this.mMode != 65536) {
            try {
                Log.w(TAG, "Wait for initialization complete!");
                Thread.sleep(500L);
            } catch (InterruptedException e) {
            }
        }
    }

    public void waitSessionOperationComplete() {
        while (true) {
            if (true != this.mDuringSessionRequestOperation && true != this.mDuringSessionRemoteRequestOperation) {
                return;
            }
            try {
                Log.w(TAG, "Wait for Session operation complete!");
                Thread.sleep(500L);
            } catch (InterruptedException e) {
            }
        }
    }
}
