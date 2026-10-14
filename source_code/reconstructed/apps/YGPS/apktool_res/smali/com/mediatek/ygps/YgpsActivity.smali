.class public Lcom/mediatek/ygps/YgpsActivity;
.super Landroid/app/TabActivity;
.source "YgpsActivity.java"

# interfaces
.implements Landroid/support/v4/app/ActivityCompat$OnRequestPermissionsResultCallback;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;,
        Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;,
        Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;
    }
.end annotation


# static fields
.field private static final sTypeList:[Ljava/lang/String;


# instance fields
.field private m68Cep:D

.field private m68Ttff:I

.field private m95Cep:D

.field private m95Ttff:I

.field private mAutoTestHandler:Landroid/os/Handler;

.field private mAutoTestThread:Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;

.field private mBgService:Lcom/mediatek/ygps/YgpsService;

.field private mBgServiceConnection:Landroid/content/ServiceConnection;

.field private mBgServiceIntent:Landroid/content/Intent;

.field private final mBtnClickListener:Landroid/view/View$OnClickListener;

.field private mBtnColdStart:Landroid/widget/Button;

.field private mBtnFullStart:Landroid/widget/Button;

.field private mBtnGpsJamming:Landroid/widget/Button;

.field private mBtnGpsTestStart:Landroid/widget/Button;

.field private mBtnGpsTestStop:Landroid/widget/Button;

.field private mBtnHotStart:Landroid/widget/Button;

.field private mBtnNMEAStop:Landroid/widget/Button;

.field private mBtnNmeaStart:Landroid/widget/Button;

.field private mBtnReStart:Landroid/widget/Button;

.field private mBtnWarmStart:Landroid/widget/Button;

.field private mCbEpo:Landroid/widget/CheckBox;

.field private mCbGpsLog:Landroid/widget/CheckBox;

.field private mCbNeed3DFix:Landroid/widget/CheckBox;

.field private mCbQepo:Landroid/widget/CheckBox;

.field private mCurrentTimes:I

.field private mEtGpsJammingTimes:Landroid/widget/EditText;

.field private mEtTestInterval:Landroid/widget/EditText;

.field private mEtTestLat:Landroid/widget/EditText;

.field private mEtTestLon:Landroid/widget/EditText;

.field private mEtTestTimes:Landroid/widget/EditText;

.field private mFirstFix:Z

.field private mGnssStatusCallback:Landroid/location/GnssStatus$Callback;

.field private mHandler:Landroid/os/Handler;

.field private mIsExit:Z

.field private volatile mIsForceStopGpsTest:Z

.field private mIsNeed3DFix:Z

.field private mIsRunInBg:Z

.field private mIsTestRunning:Z

.field private mLastLocation:Landroid/location/Location;

.field private mLocListener:Landroid/location/LocationListener;

.field private mLocUpdateTime:J

.field private mLocationManager:Landroid/location/LocationManager;

.field private mLogHidden:Z

.field private mMaxCep:D

.field private mMaxTtff:I

.field private mMeanCep:D

.field private mMeanTTFF:F

.field private mMnldConn:Lcom/mediatek/ygps/MnldConn;

.field private mNeedCalCep:Z

.field private mNmeaFixed:Z

.field private mNmeaListener:Landroid/location/OnNmeaMessageListener;

.field private mNmeaParser:Lcom/mediatek/ygps/NmeaParser;

.field private mNmeaUpdateListener:Lcom/mediatek/ygps/NmeaParser$NmeaUpdateViewListener;

.field private mPermissionGranted:Z

.field private mPermissionManager:Lcom/mediatek/ygps/PermissionManager;

.field private mPrompt:Landroid/widget/Toast;

.field private mProvider:Ljava/lang/String;

.field private mRestarting:Z

.field private mSateReportTimeOut:I

.field private mSatelInfoManager:Lcom/mediatek/ygps/SatelliteInfoManager;

.field private mShowFirstFixLocate:Z

.field private mShowLoc:Z

.field private mSlCnrCtl:Lcom/mediatek/ygps/SatelliteCnrController;

.field private mSlLocationView:Lcom/mediatek/ygps/SatelLocationView;

.field private mSocketClient:Lcom/mediatek/ygps/ClientSocket;

.field private mStartNmeaRecord:Z

.field private mStartPressedHandling:Z

.field private mStatus:Ljava/lang/String;

.field private mStopPressedHandling:Z

.field private mTestCepList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/Double;",
            ">;"
        }
    .end annotation
.end field

.field private mTestCepValid:Z

.field private mTestInterval:I

.field private mTestLat:D

.field private mTestLon:D

.field private mTestSpinner:Landroid/widget/Spinner;

.field private mTestTtffList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private mTestTtffValid:Z

.field private mTestType:I

.field private mTotalTimes:I

.field private mTtffValue:I

.field private mTvCountDown:Landroid/widget/TextView;

.field private mTvCurTimes:Landroid/widget/TextView;

.field private mTvNmeaLog:Landroid/widget/TextView;

.field private mTvStatus:Landroid/widget/TextView;

.field private mTvTest68Cep:Landroid/widget/TextView;

.field private mTvTest68Ttff:Landroid/widget/TextView;

.field private mTvTest95Cep:Landroid/widget/TextView;

.field private mTvTest95Ttff:Landroid/widget/TextView;

.field private mTvTestLastCep:Landroid/widget/TextView;

.field private mTvTestMaxCep:Landroid/widget/TextView;

.field private mTvTestMaxTtff:Landroid/widget/TextView;

.field private mTvTestMeanCep:Landroid/widget/TextView;

.field private mYgpsWakeLock:Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;


# direct methods
.method static constructor <clinit>()V
    .locals 4

    const-string v0, "Hot start"

    const-string v1, "Warm start"

    const-string v2, "Cold start"

    const-string v3, "Full start"

    .line 251
    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/ygps/YgpsActivity;->sTypeList:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 4

    .line 94
    invoke-direct {p0}, Landroid/app/TabActivity;-><init>()V

    const/4 v0, 0x0

    .line 168
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mLogHidden:Z

    .line 170
    iput v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTtffValue:I

    .line 171
    iput v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTotalTimes:I

    .line 172
    iput v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mCurrentTimes:I

    .line 173
    iput v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestInterval:I

    .line 174
    iput v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestType:I

    .line 175
    iput v0, p0, Lcom/mediatek/ygps/YgpsActivity;->m68Ttff:I

    .line 176
    iput v0, p0, Lcom/mediatek/ygps/YgpsActivity;->m95Ttff:I

    .line 177
    iput v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mMaxTtff:I

    const/4 v1, 0x0

    .line 178
    iput v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mMeanTTFF:F

    const-wide/16 v1, 0x0

    .line 179
    iput-wide v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestLat:D

    .line 180
    iput-wide v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestLon:D

    .line 181
    iput-wide v1, p0, Lcom/mediatek/ygps/YgpsActivity;->m68Cep:D

    .line 182
    iput-wide v1, p0, Lcom/mediatek/ygps/YgpsActivity;->m95Cep:D

    .line 183
    iput-wide v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mMeanCep:D

    .line 184
    iput-wide v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mMaxCep:D

    .line 186
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mShowLoc:Z

    .line 187
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mStartNmeaRecord:Z

    .line 188
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mFirstFix:Z

    .line 189
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsNeed3DFix:Z

    .line 190
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsTestRunning:Z

    .line 191
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsExit:Z

    .line 192
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mNeedCalCep:Z

    .line 193
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestTtffValid:Z

    .line 194
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestCepValid:Z

    .line 196
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsRunInBg:Z

    const/4 v1, 0x1

    .line 197
    iput-boolean v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mShowFirstFixLocate:Z

    .line 199
    iput v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mSateReportTimeOut:I

    const/4 v1, 0x0

    .line 201
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mSocketClient:Lcom/mediatek/ygps/ClientSocket;

    .line 203
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mSlLocationView:Lcom/mediatek/ygps/SatelLocationView;

    .line 205
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocationManager:Landroid/location/LocationManager;

    .line 206
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mYgpsWakeLock:Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;

    .line 207
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mLastLocation:Landroid/location/Location;

    .line 208
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnColdStart:Landroid/widget/Button;

    .line 209
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnWarmStart:Landroid/widget/Button;

    .line 210
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnHotStart:Landroid/widget/Button;

    .line 211
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnFullStart:Landroid/widget/Button;

    .line 212
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnReStart:Landroid/widget/Button;

    .line 213
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mCbEpo:Landroid/widget/CheckBox;

    .line 214
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mCbQepo:Landroid/widget/CheckBox;

    .line 215
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mCbGpsLog:Landroid/widget/CheckBox;

    .line 216
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnNmeaStart:Landroid/widget/Button;

    .line 217
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnNMEAStop:Landroid/widget/Button;

    .line 218
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnGpsTestStart:Landroid/widget/Button;

    .line 219
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnGpsTestStop:Landroid/widget/Button;

    .line 220
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mEtTestTimes:Landroid/widget/EditText;

    .line 221
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mCbNeed3DFix:Landroid/widget/CheckBox;

    .line 222
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mEtTestInterval:Landroid/widget/EditText;

    .line 223
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestSpinner:Landroid/widget/Spinner;

    .line 224
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mEtTestLat:Landroid/widget/EditText;

    .line 225
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mEtTestLon:Landroid/widget/EditText;

    .line 226
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTestLastCep:Landroid/widget/TextView;

    .line 227
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTestMeanCep:Landroid/widget/TextView;

    .line 228
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTest68Cep:Landroid/widget/TextView;

    .line 229
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTest95Cep:Landroid/widget/TextView;

    .line 230
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTestMaxCep:Landroid/widget/TextView;

    .line 231
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTest68Ttff:Landroid/widget/TextView;

    .line 232
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTest95Ttff:Landroid/widget/TextView;

    .line 233
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTestMaxTtff:Landroid/widget/TextView;

    .line 234
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvCurTimes:Landroid/widget/TextView;

    .line 235
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvCountDown:Landroid/widget/TextView;

    .line 236
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvStatus:Landroid/widget/TextView;

    .line 238
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBgService:Lcom/mediatek/ygps/YgpsService;

    .line 240
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mSlCnrCtl:Lcom/mediatek/ygps/SatelliteCnrController;

    .line 241
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mAutoTestThread:Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;

    const-string v2, ""

    .line 242
    iput-object v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mProvider:Ljava/lang/String;

    .line 243
    iput-object v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mStatus:Ljava/lang/String;

    .line 244
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mStopPressedHandling:Z

    .line 245
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mStartPressedHandling:Z

    .line 246
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvNmeaLog:Landroid/widget/TextView;

    .line 247
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnGpsJamming:Landroid/widget/Button;

    .line 248
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mEtGpsJammingTimes:Landroid/widget/EditText;

    .line 249
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mPrompt:Landroid/widget/Toast;

    const-wide/16 v2, 0x0

    .line 250
    iput-wide v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocUpdateTime:J

    .line 253
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    iput-object v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestTtffList:Ljava/util/ArrayList;

    .line 254
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    iput-object v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestCepList:Ljava/util/ArrayList;

    .line 255
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mSatelInfoManager:Lcom/mediatek/ygps/SatelliteInfoManager;

    .line 256
    new-instance v2, Lcom/mediatek/ygps/NmeaParser;

    invoke-direct {v2}, Lcom/mediatek/ygps/NmeaParser;-><init>()V

    iput-object v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mNmeaParser:Lcom/mediatek/ygps/NmeaParser;

    .line 257
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mNmeaUpdateListener:Lcom/mediatek/ygps/NmeaParser$NmeaUpdateViewListener;

    .line 258
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mRestarting:Z

    .line 259
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mNmeaFixed:Z

    .line 260
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsForceStopGpsTest:Z

    .line 261
    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBgServiceIntent:Landroid/content/Intent;

    .line 263
    new-instance v1, Lcom/mediatek/ygps/MnldConn;

    invoke-direct {v1}, Lcom/mediatek/ygps/MnldConn;-><init>()V

    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mMnldConn:Lcom/mediatek/ygps/MnldConn;

    .line 286
    new-instance v1, Lcom/mediatek/ygps/YgpsActivity$1;

    invoke-direct {v1, p0}, Lcom/mediatek/ygps/YgpsActivity$1;-><init>(Lcom/mediatek/ygps/YgpsActivity;)V

    iput-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBgServiceConnection:Landroid/content/ServiceConnection;

    .line 310
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mPermissionGranted:Z

    .line 817
    new-instance v0, Lcom/mediatek/ygps/YgpsActivity$8;

    invoke-direct {v0, p0}, Lcom/mediatek/ygps/YgpsActivity$8;-><init>(Lcom/mediatek/ygps/YgpsActivity;)V

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mAutoTestHandler:Landroid/os/Handler;

    .line 1043
    new-instance v0, Lcom/mediatek/ygps/YgpsActivity$9;

    invoke-direct {v0, p0}, Lcom/mediatek/ygps/YgpsActivity$9;-><init>(Lcom/mediatek/ygps/YgpsActivity;)V

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mNmeaListener:Landroid/location/OnNmeaMessageListener;

    .line 1502
    new-instance v0, Lcom/mediatek/ygps/YgpsActivity$12;

    invoke-direct {v0, p0}, Lcom/mediatek/ygps/YgpsActivity$12;-><init>(Lcom/mediatek/ygps/YgpsActivity;)V

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocListener:Landroid/location/LocationListener;

    .line 1584
    new-instance v0, Lcom/mediatek/ygps/YgpsActivity$13;

    invoke-direct {v0, p0}, Lcom/mediatek/ygps/YgpsActivity$13;-><init>(Lcom/mediatek/ygps/YgpsActivity;)V

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mGnssStatusCallback:Landroid/location/GnssStatus$Callback;

    .line 1667
    new-instance v0, Lcom/mediatek/ygps/YgpsActivity$14;

    invoke-direct {v0, p0}, Lcom/mediatek/ygps/YgpsActivity$14;-><init>(Lcom/mediatek/ygps/YgpsActivity;)V

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnClickListener:Landroid/view/View$OnClickListener;

    .line 1882
    new-instance v0, Lcom/mediatek/ygps/YgpsActivity$15;

    invoke-direct {v0, p0}, Lcom/mediatek/ygps/YgpsActivity$15;-><init>(Lcom/mediatek/ygps/YgpsActivity;)V

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/ygps/YgpsActivity;)Lcom/mediatek/ygps/YgpsService;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBgService:Lcom/mediatek/ygps/YgpsService;

    return-object p0
.end method

.method static synthetic access$002(Lcom/mediatek/ygps/YgpsActivity;Lcom/mediatek/ygps/YgpsService;)Lcom/mediatek/ygps/YgpsService;
    .locals 0

    .line 94
    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBgService:Lcom/mediatek/ygps/YgpsService;

    return-object p1
.end method

.method static synthetic access$100(Lcom/mediatek/ygps/YgpsActivity;)Lcom/mediatek/ygps/SatelliteInfoManager;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mSatelInfoManager:Lcom/mediatek/ygps/SatelliteInfoManager;

    return-object p0
.end method

.method static synthetic access$1000(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnGpsTestStart:Landroid/widget/Button;

    return-object p0
.end method

.method static synthetic access$1100(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnGpsTestStop:Landroid/widget/Button;

    return-object p0
.end method

.method static synthetic access$1200(Lcom/mediatek/ygps/YgpsActivity;Ljava/lang/Boolean;)V
    .locals 0

    .line 94
    invoke-direct {p0, p1}, Lcom/mediatek/ygps/YgpsActivity;->refreshATViewState(Ljava/lang/Boolean;)V

    return-void
.end method

.method static synthetic access$1300(Lcom/mediatek/ygps/YgpsActivity;)F
    .locals 0

    .line 94
    iget p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mMeanTTFF:F

    return p0
.end method

.method static synthetic access$1400(Lcom/mediatek/ygps/YgpsActivity;Z)V
    .locals 0

    .line 94
    invoke-direct {p0, p1}, Lcom/mediatek/ygps/YgpsActivity;->setStartButtonEnable(Z)V

    return-void
.end method

.method static synthetic access$1500(Lcom/mediatek/ygps/YgpsActivity;)Z
    .locals 0

    .line 94
    iget-boolean p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mStopPressedHandling:Z

    return p0
.end method

.method static synthetic access$1502(Lcom/mediatek/ygps/YgpsActivity;Z)Z
    .locals 0

    .line 94
    iput-boolean p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mStopPressedHandling:Z

    return p1
.end method

.method static synthetic access$1602(Lcom/mediatek/ygps/YgpsActivity;Z)Z
    .locals 0

    .line 94
    iput-boolean p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mStartPressedHandling:Z

    return p1
.end method

.method static synthetic access$1700(Lcom/mediatek/ygps/YgpsActivity;)Landroid/location/LocationListener;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocListener:Landroid/location/LocationListener;

    return-object p0
.end method

.method static synthetic access$1800(Lcom/mediatek/ygps/YgpsActivity;)Landroid/location/LocationManager;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocationManager:Landroid/location/LocationManager;

    return-object p0
.end method

.method static synthetic access$1900(Lcom/mediatek/ygps/YgpsActivity;J)V
    .locals 0

    .line 94
    invoke-direct {p0, p1, p2}, Lcom/mediatek/ygps/YgpsActivity;->sleep(J)V

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/ygps/YgpsActivity;)Lcom/mediatek/ygps/SatelliteCnrController;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mSlCnrCtl:Lcom/mediatek/ygps/SatelliteCnrController;

    return-object p0
.end method

.method static synthetic access$2002(Lcom/mediatek/ygps/YgpsActivity;Z)Z
    .locals 0

    .line 94
    iput-boolean p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsTestRunning:Z

    return p1
.end method

.method static synthetic access$2100(Lcom/mediatek/ygps/YgpsActivity;)V
    .locals 0

    .line 94
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->reconnectTest()V

    return-void
.end method

.method static synthetic access$2200(Lcom/mediatek/ygps/YgpsActivity;)V
    .locals 0

    .line 94
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->calTestResult()V

    return-void
.end method

.method static synthetic access$2300(Lcom/mediatek/ygps/YgpsActivity;)V
    .locals 0

    .line 94
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->showTestResult()V

    return-void
.end method

.method static synthetic access$2400(Lcom/mediatek/ygps/YgpsActivity;)Z
    .locals 0

    .line 94
    iget-boolean p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mStartNmeaRecord:Z

    return p0
.end method

.method static synthetic access$2402(Lcom/mediatek/ygps/YgpsActivity;Z)Z
    .locals 0

    .line 94
    iput-boolean p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mStartNmeaRecord:Z

    return p1
.end method

.method static synthetic access$2500(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/TextView;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvNmeaLog:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$2600(Lcom/mediatek/ygps/YgpsActivity;)Lcom/mediatek/ygps/NmeaParser;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mNmeaParser:Lcom/mediatek/ygps/NmeaParser;

    return-object p0
.end method

.method static synthetic access$2800(Lcom/mediatek/ygps/YgpsActivity;)I
    .locals 0

    .line 94
    iget p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mSateReportTimeOut:I

    return p0
.end method

.method static synthetic access$2802(Lcom/mediatek/ygps/YgpsActivity;I)I
    .locals 0

    .line 94
    iput p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mSateReportTimeOut:I

    return p1
.end method

.method static synthetic access$2808(Lcom/mediatek/ygps/YgpsActivity;)I
    .locals 2

    .line 94
    iget v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mSateReportTimeOut:I

    add-int/lit8 v1, v0, 0x1

    iput v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mSateReportTimeOut:I

    return v0
.end method

.method static synthetic access$2900(Lcom/mediatek/ygps/YgpsActivity;)V
    .locals 0

    .line 94
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->setSatelliteStatus()V

    return-void
.end method

.method static synthetic access$300(Lcom/mediatek/ygps/YgpsActivity;)Lcom/mediatek/ygps/MnldConn;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mMnldConn:Lcom/mediatek/ygps/MnldConn;

    return-object p0
.end method

.method static synthetic access$3000(Lcom/mediatek/ygps/YgpsActivity;)Z
    .locals 0

    .line 94
    iget-boolean p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mFirstFix:Z

    return p0
.end method

.method static synthetic access$3100(Lcom/mediatek/ygps/YgpsActivity;)Z
    .locals 0

    .line 94
    iget-boolean p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mShowLoc:Z

    return p0
.end method

.method static synthetic access$3200(Lcom/mediatek/ygps/YgpsActivity;Landroid/location/Location;)V
    .locals 0

    .line 94
    invoke-direct {p0, p1}, Lcom/mediatek/ygps/YgpsActivity;->showLocToast(Landroid/location/Location;)V

    return-void
.end method

.method static synthetic access$3300(Lcom/mediatek/ygps/YgpsActivity;)Z
    .locals 0

    .line 94
    iget-boolean p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mShowFirstFixLocate:Z

    return p0
.end method

.method static synthetic access$3400(Lcom/mediatek/ygps/YgpsActivity;Landroid/location/Location;)V
    .locals 0

    .line 94
    invoke-direct {p0, p1}, Lcom/mediatek/ygps/YgpsActivity;->showFirstFixInfo(Landroid/location/Location;)V

    return-void
.end method

.method static synthetic access$3500(Lcom/mediatek/ygps/YgpsActivity;)Landroid/location/Location;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mLastLocation:Landroid/location/Location;

    return-object p0
.end method

.method static synthetic access$3502(Lcom/mediatek/ygps/YgpsActivity;Landroid/location/Location;)Landroid/location/Location;
    .locals 0

    .line 94
    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mLastLocation:Landroid/location/Location;

    return-object p1
.end method

.method static synthetic access$3600(Lcom/mediatek/ygps/YgpsActivity;)Ljava/lang/String;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mProvider:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$3602(Lcom/mediatek/ygps/YgpsActivity;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 94
    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mProvider:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$3700(Lcom/mediatek/ygps/YgpsActivity;)Ljava/lang/String;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mStatus:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$3800(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/TextView;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvStatus:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$3900(Lcom/mediatek/ygps/YgpsActivity;)I
    .locals 0

    .line 94
    iget p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTtffValue:I

    return p0
.end method

.method static synthetic access$3902(Lcom/mediatek/ygps/YgpsActivity;I)I
    .locals 0

    .line 94
    iput p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTtffValue:I

    return p1
.end method

.method static synthetic access$3912(Lcom/mediatek/ygps/YgpsActivity;I)I
    .locals 1

    .line 94
    iget v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTtffValue:I

    add-int/2addr v0, p1

    iput v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTtffValue:I

    return v0
.end method

.method static synthetic access$400(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/CheckBox;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mCbQepo:Landroid/widget/CheckBox;

    return-object p0
.end method

.method static synthetic access$4000(Lcom/mediatek/ygps/YgpsActivity;)Landroid/os/Handler;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mHandler:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic access$4100(Lcom/mediatek/ygps/YgpsActivity;)V
    .locals 0

    .line 94
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->startGPSAutoTest()V

    return-void
.end method

.method static synthetic access$4200(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnHotStart:Landroid/widget/Button;

    return-object p0
.end method

.method static synthetic access$4300(Lcom/mediatek/ygps/YgpsActivity;)Z
    .locals 0

    .line 94
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->gpsTestRunning()Z

    move-result p0

    return p0
.end method

.method static synthetic access$4400(Lcom/mediatek/ygps/YgpsActivity;Z)V
    .locals 0

    .line 94
    invoke-direct {p0, p1}, Lcom/mediatek/ygps/YgpsActivity;->enableBtns(Z)V

    return-void
.end method

.method static synthetic access$4500(Lcom/mediatek/ygps/YgpsActivity;Landroid/os/Bundle;)V
    .locals 0

    .line 94
    invoke-direct {p0, p1}, Lcom/mediatek/ygps/YgpsActivity;->resetParamForRestart(Landroid/os/Bundle;)V

    return-void
.end method

.method static synthetic access$4600(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnWarmStart:Landroid/widget/Button;

    return-object p0
.end method

.method static synthetic access$4700(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnColdStart:Landroid/widget/Button;

    return-object p0
.end method

.method static synthetic access$4800(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnFullStart:Landroid/widget/Button;

    return-object p0
.end method

.method static synthetic access$4900(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnReStart:Landroid/widget/Button;

    return-object p0
.end method

.method static synthetic access$500(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/CheckBox;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mCbEpo:Landroid/widget/CheckBox;

    return-object p0
.end method

.method static synthetic access$5000(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnNmeaStart:Landroid/widget/Button;

    return-object p0
.end method

.method static synthetic access$5100(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnNMEAStop:Landroid/widget/Button;

    return-object p0
.end method

.method static synthetic access$5200(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnGpsJamming:Landroid/widget/Button;

    return-object p0
.end method

.method static synthetic access$5300(Lcom/mediatek/ygps/YgpsActivity;)V
    .locals 0

    .line 94
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->onGpsJammingScanClicked()V

    return-void
.end method

.method static synthetic access$5400(Lcom/mediatek/ygps/YgpsActivity;Ljava/lang/String;I)V
    .locals 0

    .line 94
    invoke-direct {p0, p1, p2}, Lcom/mediatek/ygps/YgpsActivity;->handleCmdResult(Ljava/lang/String;I)V

    return-void
.end method

.method static synthetic access$5500(Lcom/mediatek/ygps/YgpsActivity;)V
    .locals 0

    .line 94
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->clearSateInfo()V

    return-void
.end method

.method static synthetic access$5600(Lcom/mediatek/ygps/YgpsActivity;Landroid/os/Handler;Landroid/os/Bundle;)V
    .locals 0

    .line 94
    invoke-direct {p0, p1, p2}, Lcom/mediatek/ygps/YgpsActivity;->restartUpdate(Landroid/os/Handler;Landroid/os/Bundle;)V

    return-void
.end method

.method static synthetic access$5700(Lcom/mediatek/ygps/YgpsActivity;)V
    .locals 0

    .line 94
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->showChipAndClkInfo()V

    return-void
.end method

.method static synthetic access$5800(Lcom/mediatek/ygps/YgpsActivity;Landroid/os/Message;)V
    .locals 0

    .line 94
    invoke-direct {p0, p1}, Lcom/mediatek/ygps/YgpsActivity;->handleGnssStatusChangeMsg(Landroid/os/Message;)V

    return-void
.end method

.method static synthetic access$602(Lcom/mediatek/ygps/YgpsActivity;I)I
    .locals 0

    .line 94
    iput p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestType:I

    return p1
.end method

.method static synthetic access$800(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/TextView;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvCurTimes:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$900(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/TextView;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvCountDown:Landroid/widget/TextView;

    return-object p0
.end method

.method private calTestResult()V
    .locals 15

    .line 717
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestTtffList:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    .line 718
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "ttffNumber:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "YGPS/Mainview"

    invoke-static {v2, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 719
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestTtffList:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    const-string v4, "value:"

    if-eqz v3, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    .line 720
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    :cond_0
    const-string v1, "index95:"

    const-string v3, "index68:"

    const-wide v5, 0x3fee666666666666L    # 0.95

    const-wide v7, 0x3fe5c28f5c28f5c3L    # 0.68

    const/4 v9, 0x0

    const/4 v10, 0x1

    if-lez v0, :cond_1

    .line 723
    iget-object v11, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestTtffList:Ljava/util/ArrayList;

    invoke-static {v11}, Ljava/util/Collections;->sort(Ljava/util/List;)V

    int-to-double v11, v0

    mul-double v13, v11, v7

    .line 724
    invoke-static {v13, v14}, Ljava/lang/Math;->floor(D)D

    move-result-wide v13

    double-to-int v13, v13

    mul-double/2addr v11, v5

    .line 725
    invoke-static {v11, v12}, Ljava/lang/Math;->floor(D)D

    move-result-wide v11

    double-to-int v11, v11

    .line 726
    iget-object v12, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestTtffList:Ljava/util/ArrayList;

    invoke-virtual {v12, v13}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v12

    check-cast v12, Ljava/lang/Integer;

    invoke-virtual {v12}, Ljava/lang/Integer;->intValue()I

    move-result v12

    iput v12, p0, Lcom/mediatek/ygps/YgpsActivity;->m68Ttff:I

    .line 727
    iget-object v12, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestTtffList:Ljava/util/ArrayList;

    invoke-virtual {v12, v11}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v12

    check-cast v12, Ljava/lang/Integer;

    invoke-virtual {v12}, Ljava/lang/Integer;->intValue()I

    move-result v12

    iput v12, p0, Lcom/mediatek/ygps/YgpsActivity;->m95Ttff:I

    .line 728
    iget-object v12, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestTtffList:Ljava/util/ArrayList;

    sub-int/2addr v0, v10

    invoke-virtual {v12, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    iput v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mMaxTtff:I

    .line 729
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v11, "m68Ttff:"

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v11, p0, Lcom/mediatek/ygps/YgpsActivity;->m68Ttff:I

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v11, "m95Ttff:"

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v11, p0, Lcom/mediatek/ygps/YgpsActivity;->m95Ttff:I

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v11, "mMaxTtff:"

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v11, p0, Lcom/mediatek/ygps/YgpsActivity;->mMaxTtff:I

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 731
    iput-boolean v10, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestTtffValid:Z

    goto :goto_1

    .line 733
    :cond_1
    iput-boolean v9, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestTtffValid:Z

    .line 735
    :goto_1
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestCepList:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    .line 736
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "cepNumber:"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-static {v2, v11}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 737
    iget-object v11, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestCepList:Ljava/util/ArrayList;

    invoke-virtual {v11}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v11

    :goto_2
    invoke-interface {v11}, Ljava/util/Iterator;->hasNext()Z

    move-result v12

    if-eqz v12, :cond_2

    invoke-interface {v11}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v12

    check-cast v12, Ljava/lang/Double;

    .line 738
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-static {v2, v12}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_2

    :cond_2
    if-lez v0, :cond_3

    .line 741
    iget-object v4, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestCepList:Ljava/util/ArrayList;

    invoke-static {v4}, Ljava/util/Collections;->sort(Ljava/util/List;)V

    int-to-double v11, v0

    mul-double/2addr v7, v11

    .line 742
    invoke-static {v7, v8}, Ljava/lang/Math;->floor(D)D

    move-result-wide v7

    double-to-int v4, v7

    mul-double/2addr v11, v5

    .line 743
    invoke-static {v11, v12}, Ljava/lang/Math;->floor(D)D

    move-result-wide v5

    double-to-int v5, v5

    .line 744
    iget-object v6, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestCepList:Ljava/util/ArrayList;

    invoke-virtual {v6, v4}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/Double;

    invoke-virtual {v6}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v6

    iput-wide v6, p0, Lcom/mediatek/ygps/YgpsActivity;->m68Cep:D

    .line 745
    iget-object v6, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestCepList:Ljava/util/ArrayList;

    invoke-virtual {v6, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/Double;

    invoke-virtual {v6}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v6

    iput-wide v6, p0, Lcom/mediatek/ygps/YgpsActivity;->m95Cep:D

    .line 746
    iget-object v6, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestCepList:Ljava/util/ArrayList;

    sub-int/2addr v0, v10

    invoke-virtual {v6, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Double;

    invoke-virtual {v0}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v6

    iput-wide v6, p0, Lcom/mediatek/ygps/YgpsActivity;->mMaxCep:D

    .line 747
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "m68Cep:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v3, p0, Lcom/mediatek/ygps/YgpsActivity;->m68Cep:D

    invoke-virtual {v0, v3, v4}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v1, "m95Cep:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v3, p0, Lcom/mediatek/ygps/YgpsActivity;->m95Cep:D

    invoke-virtual {v0, v3, v4}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v1, "mMaxCep:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v3, p0, Lcom/mediatek/ygps/YgpsActivity;->mMaxCep:D

    invoke-virtual {v0, v3, v4}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 749
    iput-boolean v10, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestCepValid:Z

    goto :goto_3

    .line 751
    :cond_3
    iput-boolean v9, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestCepValid:Z

    :goto_3
    return-void
.end method

.method private clearLayout()V
    .locals 2

    const v0, 0x7f050062

    .line 533
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    const v1, 0x7f08000c

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    const v0, 0x7f050077

    .line 534
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    const v0, 0x7f050067

    .line 535
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    const v0, 0x7f050068

    .line 536
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    const v0, 0x7f05005c

    .line 537
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    const v0, 0x7f05005b

    .line 538
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    const v0, 0x7f05005d

    .line 539
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    const v0, 0x7f050075

    .line 540
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    const v0, 0x7f050063

    .line 541
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    .line 542
    iget-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mShowFirstFixLocate:Z

    if-eqz v0, :cond_0

    const v0, 0x7f05002b

    .line 543
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    .line 544
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    const v0, 0x7f05002a

    .line 545
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object p0

    check-cast p0, Landroid/widget/TextView;

    .line 546
    invoke-virtual {p0, v1}, Landroid/widget/TextView;->setText(I)V

    :cond_0
    return-void
.end method

.method private clearSateInfo()V
    .locals 1

    .line 551
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mSatelInfoManager:Lcom/mediatek/ygps/SatelliteInfoManager;

    invoke-virtual {v0}, Lcom/mediatek/ygps/SatelliteInfoManager;->clearSatelInfos()V

    .line 552
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->clearLayout()V

    return-void
.end method

.method private enableBtns(Z)V
    .locals 1

    .line 1848
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnHotStart:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setClickable(Z)V

    .line 1849
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnWarmStart:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setClickable(Z)V

    .line 1850
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnColdStart:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setClickable(Z)V

    .line 1851
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnFullStart:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setClickable(Z)V

    .line 1852
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnReStart:Landroid/widget/Button;

    invoke-virtual {p0, p1}, Landroid/widget/Button;->setClickable(Z)V

    return-void
.end method

.method private forceStopGpsAutoTest()V
    .locals 2

    .line 706
    monitor-enter p0

    const/4 v0, 0x1

    .line 707
    :try_start_0
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsForceStopGpsTest:Z

    .line 708
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 709
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->resetTestParam()V

    .line 710
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mHandler:Landroid/os/Handler;

    const/16 v1, 0x3f2

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 711
    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-direct {p0, v0}, Lcom/mediatek/ygps/YgpsActivity;->refreshATViewState(Ljava/lang/Boolean;)V

    const/4 v0, 0x0

    .line 712
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mStartPressedHandling:Z

    .line 713
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mStopPressedHandling:Z

    return-void

    :catchall_0
    move-exception v0

    .line 708
    :try_start_1
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v0
.end method

.method private getMnldVersion()V
    .locals 4

    const-string v0, "YGPS/Mainview"

    const-string v1, "restart GPS"

    .line 1228
    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1229
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocationManager:Landroid/location/LocationManager;

    invoke-virtual {v0}, Landroid/location/LocationManager;->isLocationEnabled()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1230
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocationManager:Landroid/location/LocationManager;

    const/4 v1, 0x0

    invoke-static {}, Landroid/os/Process;->myUserHandle()Landroid/os/UserHandle;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/location/LocationManager;->setLocationEnabledForUser(ZLandroid/os/UserHandle;)V

    .line 1231
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mHandler:Landroid/os/Handler;

    const/16 v1, 0x3f5

    const-wide/16 v2, 0x3e8

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 1233
    :cond_0
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mHandler:Landroid/os/Handler;

    const/16 v0, 0x3f4

    const-wide/16 v1, 0x7d0

    invoke-virtual {p0, v0, v1, v2}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    return-void
.end method

.method private gpsTestRunning()Z
    .locals 2

    .line 1659
    iget-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsTestRunning:Z

    if-eqz v0, :cond_0

    const v0, 0x7f08001c

    const/4 v1, 0x1

    .line 1660
    invoke-static {p0, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object p0

    .line 1661
    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    return v1

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private handleCmdResult(Ljava/lang/String;I)V
    .locals 2

    const/4 v0, 0x1

    if-eq p2, v0, :cond_1

    const/4 v0, 0x2

    if-eq p2, v0, :cond_0

    goto :goto_0

    :cond_0
    const-string p2, "$PMTK705"

    .line 1865
    invoke-virtual {p1, p2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_2

    const-string p2, ","

    .line 1866
    invoke-virtual {p1, p2}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    .line 1867
    array-length v0, p1

    const/4 v1, 0x6

    if-lt v0, v1, :cond_2

    const v0, 0x7f050064

    .line 1868
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object p0

    check-cast p0, Landroid/widget/TextView;

    .line 1869
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v1, 0x4

    aget-object v1, p1, v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 p2, 0x5

    aget-object p1, p1, p2

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    :cond_1
    const-string p2, "PMTK001,837"

    .line 1858
    invoke-virtual {p1, p2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_2

    const p1, 0x7f08006d

    .line 1859
    invoke-static {p0, p1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object p0

    .line 1861
    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    :cond_2
    :goto_0
    return-void
.end method

.method private handleGnssStatusChangeMsg(Landroid/os/Message;)V
    .locals 4

    .line 1949
    sget-object v0, Lcom/mediatek/ygps/YgpsActivity$16;->$SwitchMap$com$mediatek$ygps$YgpsActivity$GnssStatusValue:[I

    invoke-static {}, Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;->values()[Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

    move-result-object v1

    iget v2, p1, Landroid/os/Message;->arg1:I

    aget-object v1, v1, v2

    invoke-virtual {v1}, Ljava/lang/Enum;->ordinal()I

    move-result v1

    aget v0, v0, v1

    const/4 v1, 0x1

    if-eq v0, v1, :cond_5

    const/4 v2, 0x2

    if-eq v0, v2, :cond_4

    const/4 v2, 0x3

    const-string v3, "YGPS/Mainview"

    if-eq v0, v2, :cond_2

    const/4 v1, 0x4

    if-eq v0, v1, :cond_0

    goto/16 :goto_0

    .line 1978
    :cond_0
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->isGpsRestarting()Z

    move-result v0

    if-eqz v0, :cond_1

    const-string p0, "Restarting GPS, ignore the FIRST_FIX event"

    .line 1979
    invoke-static {v3, p0}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 1982
    :cond_1
    iget p1, p1, Landroid/os/Message;->arg2:I

    invoke-direct {p0, p1}, Lcom/mediatek/ygps/YgpsActivity;->handleTtffReceived(I)V

    const p1, 0x7f080014

    .line 1983
    invoke-virtual {p0, p1}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mStatus:Ljava/lang/String;

    .line 1984
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvStatus:Landroid/widget/TextView;

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    .line 1959
    :cond_2
    iget-boolean p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mNmeaFixed:Z

    const/4 v0, 0x0

    const/16 v2, 0x3e8

    if-eqz p1, :cond_3

    .line 1960
    iget-boolean p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mFirstFix:Z

    if-nez p1, :cond_6

    const-string p1, "Already fixed"

    .line 1961
    invoke-static {v3, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1962
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mHandler:Landroid/os/Handler;

    invoke-virtual {p1, v2}, Landroid/os/Handler;->removeMessages(I)V

    .line 1963
    iput v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTtffValue:I

    .line 1964
    iput-boolean v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mFirstFix:Z

    const p1, 0x7f050078

    .line 1965
    invoke-virtual {p0, p1}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    .line 1966
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTtffValue:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const v1, 0x7f08004a

    .line 1967
    invoke-virtual {p0, v1}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "(Already fixed)"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 1966
    invoke-virtual {p1, p0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    .line 1970
    :cond_3
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mFirstFix:Z

    .line 1971
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mHandler:Landroid/os/Handler;

    invoke-virtual {p1, v2}, Landroid/os/Handler;->hasMessages(I)Z

    move-result p1

    if-nez p1, :cond_6

    .line 1972
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mHandler:Landroid/os/Handler;

    invoke-virtual {p0, v2}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    goto :goto_0

    :cond_4
    const p1, 0x7f080016

    .line 1955
    invoke-virtual {p0, p1}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mStatus:Ljava/lang/String;

    .line 1956
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvStatus:Landroid/widget/TextView;

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    :cond_5
    const p1, 0x7f080015

    .line 1951
    invoke-virtual {p0, p1}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mStatus:Ljava/lang/String;

    .line 1952
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvStatus:Landroid/widget/TextView;

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_6
    :goto_0
    return-void
.end method

.method private handleTtffReceived(I)V
    .locals 6

    .line 1992
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Enter onFirstFix function: ttff = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "YGPS/Mainview"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1993
    iget v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mCurrentTimes:I

    .line 1994
    iget-object v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mHandler:Landroid/os/Handler;

    const/16 v3, 0x3e8

    invoke-virtual {v2, v3}, Landroid/os/Handler;->removeMessages(I)V

    .line 1995
    iput p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTtffValue:I

    if-eq p1, p1, :cond_0

    .line 1997
    iput p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTtffValue:I

    :cond_0
    const/4 v2, 0x1

    .line 1999
    iput-boolean v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mFirstFix:Z

    const v3, 0x7f080065

    .line 2002
    invoke-virtual {p0, v3}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x2

    new-array v4, v4, [Ljava/lang/Object;

    const/4 v5, 0x0

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v4, v5

    const p1, 0x7f08004a

    .line 2003
    invoke-virtual {p0, p1}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v5

    aput-object v5, v4, v2

    .line 2002
    invoke-static {v3, v4}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    .line 2000
    invoke-static {p0, v3, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v2

    .line 2004
    invoke-virtual {v2}, Landroid/widget/Toast;->show()V

    const v2, 0x7f050078

    .line 2005
    invoke-virtual {p0, v2}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    .line 2006
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget v4, p0, Lcom/mediatek/ygps/YgpsActivity;->mTtffValue:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 2007
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "show tvTtff = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/ygps/YgpsActivity;->mTtffValue:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 2008
    iget-boolean v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsTestRunning:Z

    if-eqz v2, :cond_1

    .line 2009
    iget-object v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestTtffList:Ljava/util/ArrayList;

    iget v3, p0, Lcom/mediatek/ygps/YgpsActivity;->mTtffValue:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 2010
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mTestTtffList add: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/ygps/YgpsActivity;->mTtffValue:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const v2, 0x7f050066

    .line 2011
    invoke-virtual {p0, v2}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    .line 2012
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget v4, p0, Lcom/mediatek/ygps/YgpsActivity;->mTtffValue:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 2013
    invoke-virtual {p0, p1}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 2012
    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 2015
    invoke-direct {p0, v0}, Lcom/mediatek/ygps/YgpsActivity;->meanTTFF(I)F

    move-result v0

    iput v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mMeanTTFF:F

    .line 2016
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "mMeanTTFF: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mMeanTTFF:F

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const v0, 0x7f05006c

    .line 2017
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mMeanTTFF:F

    .line 2018
    invoke-static {v2}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Float;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2019
    invoke-virtual {p0, p1}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 2017
    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_1
    return-void
.end method

.method private initBgStatus()V
    .locals 5

    .line 1098
    invoke-virtual {p0}, Landroid/app/TabActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    const-string v1, "bg"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v0

    const/4 v1, 0x1

    const-string v3, "RunInBG"

    if-nez v0, :cond_1

    .line 1100
    invoke-virtual {p0, v3, v2}, Landroid/app/TabActivity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 1102
    invoke-interface {v0, v3, v2}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1103
    iput-boolean v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsRunInBg:Z

    goto :goto_0

    .line 1105
    :cond_0
    iput-boolean v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsRunInBg:Z

    goto :goto_0

    :cond_1
    const-string v0, "YGPS/Mainview"

    const-string v4, "Init in BG "

    .line 1108
    invoke-static {v0, v4}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1109
    invoke-virtual {p0, v3, v2}, Landroid/app/TabActivity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 1111
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-interface {v0, v3, v1}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 1112
    iput-boolean v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsRunInBg:Z

    :goto_0
    return-void
.end method

.method private initEpoUI()V
    .locals 3

    const v0, 0x7f050016

    .line 385
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mCbEpo:Landroid/widget/CheckBox;

    const v0, 0x7f050018

    .line 386
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mCbQepo:Landroid/widget/CheckBox;

    const-string v0, "gps.epo"

    const-string v1, "1"

    .line 387
    invoke-static {v0, v1}, Lcom/mediatek/ygps/GpsMnlSetting;->getMnlProp(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 389
    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x1

    if-eqz v1, :cond_0

    .line 390
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mCbEpo:Landroid/widget/CheckBox;

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 391
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mCbQepo:Landroid/widget/CheckBox;

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_0

    :cond_0
    const-string v1, "2"

    .line 392
    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 393
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mCbEpo:Landroid/widget/CheckBox;

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_0

    :cond_1
    const-string v1, "3"

    .line 394
    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 395
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mCbQepo:Landroid/widget/CheckBox;

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 397
    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mCbEpo:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/ygps/YgpsActivity$4;

    invoke-direct {v1, p0}, Lcom/mediatek/ygps/YgpsActivity$4;-><init>(Lcom/mediatek/ygps/YgpsActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 411
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mCbQepo:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/ygps/YgpsActivity$5;

    invoke-direct {v1, p0}, Lcom/mediatek/ygps/YgpsActivity$5;-><init>(Lcom/mediatek/ygps/YgpsActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    return-void
.end method

.method private initTabPage()V
    .locals 5

    .line 1055
    invoke-virtual {p0}, Landroid/app/TabActivity;->getTabHost()Landroid/widget/TabHost;

    move-result-object v0

    .line 1056
    invoke-static {p0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v1

    .line 1057
    invoke-virtual {v0}, Landroid/widget/TabHost;->getTabContentView()Landroid/widget/FrameLayout;

    move-result-object v2

    const v3, 0x7f070006

    const/4 v4, 0x1

    .line 1056
    invoke-virtual {v1, v3, v2, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    const v1, 0x7f08003c

    .line 1059
    invoke-virtual {p0, v1}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/TabHost;->newTabSpec(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;

    move-result-object v2

    .line 1060
    invoke-virtual {p0, v1}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Landroid/widget/TabHost$TabSpec;->setIndicator(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    const v2, 0x7f050037

    invoke-virtual {v1, v2}, Landroid/widget/TabHost$TabSpec;->setContent(I)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    .line 1059
    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->addTab(Landroid/widget/TabHost$TabSpec;)V

    const v1, 0x7f08003d

    .line 1064
    invoke-virtual {p0, v1}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/TabHost;->newTabSpec(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;

    move-result-object v2

    .line 1065
    invoke-virtual {p0, v1}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Landroid/widget/TabHost$TabSpec;->setIndicator(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    const v2, 0x7f050038

    invoke-virtual {v1, v2}, Landroid/widget/TabHost$TabSpec;->setContent(I)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    .line 1064
    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->addTab(Landroid/widget/TabHost$TabSpec;)V

    const v1, 0x7f080022

    .line 1069
    invoke-virtual {p0, v1}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/TabHost;->newTabSpec(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;

    move-result-object v2

    .line 1070
    invoke-virtual {p0, v1}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Landroid/widget/TabHost$TabSpec;->setIndicator(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    const v2, 0x7f050035

    invoke-virtual {v1, v2}, Landroid/widget/TabHost$TabSpec;->setContent(I)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    .line 1069
    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->addTab(Landroid/widget/TabHost$TabSpec;)V

    const v1, 0x7f08002f

    .line 1074
    invoke-virtual {p0, v1}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/TabHost;->newTabSpec(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;

    move-result-object v2

    .line 1075
    invoke-virtual {p0, v1}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Landroid/widget/TabHost$TabSpec;->setIndicator(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    const v2, 0x7f050036

    invoke-virtual {v1, v2}, Landroid/widget/TabHost$TabSpec;->setContent(I)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    .line 1074
    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->addTab(Landroid/widget/TabHost$TabSpec;)V

    const v1, 0x7f080019

    .line 1079
    invoke-virtual {p0, v1}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/TabHost;->newTabSpec(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;

    move-result-object v2

    .line 1080
    invoke-virtual {p0, v1}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Landroid/widget/TabHost$TabSpec;->setIndicator(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    const v2, 0x7f050034

    invoke-virtual {v1, v2}, Landroid/widget/TabHost$TabSpec;->setContent(I)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    .line 1079
    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->addTab(Landroid/widget/TabHost$TabSpec;)V

    .line 1083
    new-instance v1, Lcom/mediatek/ygps/YgpsActivity$10;

    invoke-direct {v1, p0}, Lcom/mediatek/ygps/YgpsActivity$10;-><init>(Lcom/mediatek/ygps/YgpsActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->setOnTabChangedListener(Landroid/widget/TabHost$OnTabChangeListener;)V

    .line 1088
    invoke-virtual {v0}, Landroid/widget/TabHost;->getTabWidget()Landroid/widget/TabWidget;

    move-result-object p0

    .line 1089
    invoke-virtual {p0}, Landroid/widget/TabWidget;->getChildCount()I

    move-result v0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_0

    .line 1091
    invoke-virtual {p0, v1}, Landroid/widget/TabWidget;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    const v3, 0x1020016

    invoke-virtual {v2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    const/high16 v3, 0x41200000    # 10.0f

    .line 1092
    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setTextSize(F)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method private isGpsRestarting()Z
    .locals 0

    .line 306
    iget-boolean p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mRestarting:Z

    return p0
.end method

.method private meanCep(ID)D
    .locals 4

    .line 812
    iget-wide v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mMeanCep:D

    add-int/lit8 p0, p1, -0x1

    int-to-double v2, p0

    mul-double/2addr v0, v2

    add-double/2addr v0, p2

    int-to-double p0, p1

    div-double/2addr v0, p0

    return-wide v0
.end method

.method private meanTTFF(I)F
    .locals 2

    .line 808
    iget v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mMeanTTFF:F

    add-int/lit8 v1, p1, -0x1

    int-to-float v1, v1

    mul-float/2addr v0, v1

    iget p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTtffValue:I

    int-to-float p0, p0

    add-float/2addr v0, p0

    int-to-float p0, p1

    div-float/2addr v0, p0

    return v0
.end method

.method private onGpsJammingScanClicked()V
    .locals 4

    .line 1824
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mEtGpsJammingTimes:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-interface {v0}, Landroid/text/Editable;->length()I

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_0

    const-string v0, "Please input Jamming scan times"

    .line 1825
    invoke-static {p0, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p0

    .line 1827
    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    return-void

    .line 1830
    :cond_0
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mEtGpsJammingTimes:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    .line 1831
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1830
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v0

    .line 1832
    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v2

    if-lez v2, :cond_2

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v2

    const/16 v3, 0x3e7

    if-le v2, v3, :cond_1

    goto :goto_0

    .line 1837
    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "PMTK837,1,"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/ygps/YgpsActivity;->sendCommand(Ljava/lang/String;)V

    return-void

    :cond_2
    :goto_0
    const-string v0, "Jamming scan times error"

    .line 1833
    invoke-static {p0, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p0

    .line 1834
    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    return-void
.end method

.method private reconnectTest()V
    .locals 5

    .line 930
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    .line 932
    iget v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestType:I

    const/4 v2, 0x1

    if-nez v1, :cond_0

    const-string v1, "rti"

    .line 933
    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    goto :goto_0

    :cond_0
    if-ne v1, v2, :cond_1

    const-string v1, "ephemeris"

    .line 935
    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    goto :goto_0

    :cond_1
    const/4 v3, 0x2

    if-ne v1, v3, :cond_2

    const-string v1, "ephemeris"

    .line 937
    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    const-string v1, "position"

    .line 938
    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    const-string v1, "time"

    .line 939
    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    const-string v1, "iono"

    .line 940
    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    const-string v1, "utc"

    .line 941
    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    const-string v1, "health"

    .line 942
    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    goto :goto_0

    :cond_2
    const/4 v3, 0x3

    if-ne v1, v3, :cond_3

    const-string v1, "all"

    .line 944
    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 946
    :cond_3
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "test type:"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestType:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " times:"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/ygps/YgpsActivity;->mTotalTimes:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "YGPS/Mainview"

    invoke-static {v3, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 948
    invoke-virtual {p0, v2}, Landroid/app/TabActivity;->removeDialog(I)V

    .line 949
    :goto_1
    iget v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTotalTimes:I

    if-gt v2, v1, :cond_6

    iget-boolean v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsTestRunning:Z

    if-eqz v1, :cond_6

    .line 950
    iput v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mCurrentTimes:I

    .line 951
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "reconnectTest function: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/ygps/YgpsActivity;->mCurrentTimes:I

    .line 952
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Integer;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "YGPS/Mainview"

    .line 951
    invoke-static {v3, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 953
    invoke-direct {p0, v2}, Lcom/mediatek/ygps/YgpsActivity;->setCurrentTimes(I)V

    .line 955
    monitor-enter p0

    .line 956
    :try_start_0
    iget-boolean v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsForceStopGpsTest:Z

    if-eqz v1, :cond_4

    .line 957
    monitor-exit p0

    return-void

    .line 959
    :cond_4
    invoke-direct {p0, v0}, Lcom/mediatek/ygps/YgpsActivity;->resetParamForAutoTest(Landroid/os/Bundle;)V

    .line 960
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 961
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->waitAutoTestInterval()V

    .line 962
    iget-boolean v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsNeed3DFix:Z

    if-eqz v1, :cond_5

    .line 963
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->wait3DFix()V

    goto :goto_2

    :cond_5
    const-wide/16 v3, 0x7d0

    .line 965
    invoke-direct {p0, v3, v4}, Lcom/mediatek/ygps/YgpsActivity;->sleep(J)V

    :goto_2
    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    :catchall_0
    move-exception v0

    .line 960
    :try_start_1
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v0

    :cond_6
    const-wide/16 v0, 0x3e8

    .line 968
    invoke-direct {p0, v0, v1}, Lcom/mediatek/ygps/YgpsActivity;->sleep(J)V

    .line 969
    monitor-enter p0

    .line 970
    :try_start_2
    iget-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsForceStopGpsTest:Z

    if-eqz v0, :cond_7

    .line 971
    monitor-exit p0

    return-void

    .line 973
    :cond_7
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->stopGPSAutoTest()V

    .line 974
    monitor-exit p0

    return-void

    :catchall_1
    move-exception v0

    monitor-exit p0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    throw v0
.end method

.method private refreshATViewState(Ljava/lang/Boolean;)V
    .locals 2

    .line 559
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnGpsTestStart:Landroid/widget/Button;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    xor-int/lit8 v1, v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 560
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mEtTestTimes:Landroid/widget/EditText;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    xor-int/lit8 v1, v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 561
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mCbNeed3DFix:Landroid/widget/CheckBox;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    xor-int/lit8 v1, v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 562
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mEtTestInterval:Landroid/widget/EditText;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    xor-int/lit8 v1, v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 563
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mEtTestLat:Landroid/widget/EditText;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    xor-int/lit8 v1, v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 564
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mEtTestLon:Landroid/widget/EditText;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    xor-int/lit8 v1, v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 565
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnGpsTestStop:Landroid/widget/Button;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 566
    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 567
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->clearLayout()V

    :cond_0
    return-void
.end method

.method private removeNmeaParser()V
    .locals 2

    const-string v0, "YGPS/Mainview"

    const-string v1, "removeNmeaParser()"

    .line 1387
    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1388
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mNmeaParser:Lcom/mediatek/ygps/NmeaParser;

    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mNmeaUpdateListener:Lcom/mediatek/ygps/NmeaParser$NmeaUpdateViewListener;

    invoke-virtual {v0, v1}, Lcom/mediatek/ygps/NmeaParser;->removeSVUpdateListener(Lcom/mediatek/ygps/NmeaParser$NmeaUpdateViewListener;)V

    .line 1389
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mNmeaParser:Lcom/mediatek/ygps/NmeaParser;

    invoke-virtual {p0}, Lcom/mediatek/ygps/NmeaParser;->clearSatelliteList()V

    return-void
.end method

.method private resetParamForAutoTest(Landroid/os/Bundle;)V
    .locals 2

    const-string v0, "YGPS/Mainview"

    const-string v1, "resetParamForAutoTest"

    .line 1644
    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1645
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocationManager:Landroid/location/LocationManager;

    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocListener:Landroid/location/LocationListener;

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->removeUpdates(Landroid/location/LocationListener;)V

    .line 1646
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mHandler:Landroid/os/Handler;

    const/16 v1, 0x3f2

    .line 1647
    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 1648
    invoke-virtual {v0, p1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 1649
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mHandler:Landroid/os/Handler;

    invoke-virtual {p0, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method private resetParamForRestart(Landroid/os/Bundle;)V
    .locals 2

    const-string v0, "YGPS/Mainview"

    const-string v1, "resetParamForRestart"

    .line 1625
    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v0, 0x1

    .line 1629
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mRestarting:Z

    .line 1630
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocationManager:Landroid/location/LocationManager;

    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocListener:Landroid/location/LocationListener;

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->removeUpdates(Landroid/location/LocationListener;)V

    .line 1631
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mHandler:Landroid/os/Handler;

    const/16 v1, 0x3f2

    .line 1632
    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 1633
    invoke-virtual {v0, p1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 1634
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mHandler:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 1635
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mHandler:Landroid/os/Handler;

    const/16 p1, 0x3f3

    const-wide/16 v0, 0x384

    invoke-virtual {p0, p1, v0, v1}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    return-void
.end method

.method private resetTestParam()V
    .locals 2

    const/4 v0, 0x0

    .line 772
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsNeed3DFix:Z

    .line 773
    iput v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTotalTimes:I

    .line 774
    iput v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mCurrentTimes:I

    .line 775
    iput v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestInterval:I

    const/4 v1, 0x0

    .line 776
    iput v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mMeanTTFF:F

    .line 777
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsTestRunning:Z

    .line 778
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mNeedCalCep:Z

    return-void
.end method

.method private resetTestView()V
    .locals 2

    const v0, 0x7f05006c

    .line 786
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    const-string v1, ""

    .line 787
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const v0, 0x7f050066

    .line 788
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    .line 789
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 790
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTest68Ttff:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 791
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTest95Ttff:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 792
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTestMaxTtff:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 793
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTest68Cep:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 794
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTest95Cep:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 795
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTestLastCep:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 796
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTestMaxCep:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 797
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTestMeanCep:Landroid/widget/TextView;

    invoke-virtual {p0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method private restartUpdate(Landroid/os/Handler;Landroid/os/Bundle;)V
    .locals 12

    .line 2024
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->removeNmeaParser()V

    const/4 v0, 0x0

    .line 2025
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mFirstFix:Z

    .line 2026
    iput v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTtffValue:I

    .line 2027
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mNmeaFixed:Z

    const/4 v1, 0x1

    .line 2028
    iput-boolean v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mShowFirstFixLocate:Z

    .line 2029
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->clearSateInfo()V

    const/16 v1, 0x3e8

    .line 2030
    invoke-virtual {p1, v1}, Landroid/os/Handler;->hasMessages(I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 2031
    invoke-virtual {p1, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    :cond_0
    const-wide/16 v1, 0x12c

    .line 2033
    invoke-direct {p0, v1, v2}, Lcom/mediatek/ygps/YgpsActivity;->sleep(J)V

    const-string p1, "YGPS/Mainview"

    const-string v3, "delete_aiding_data-msg"

    .line 2035
    invoke-static {p1, v3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 2036
    iget-object v3, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocationManager:Landroid/location/LocationManager;

    const-string v4, "gps"

    const-string v5, "delete_aiding_data"

    invoke-virtual {v3, v4, v5, p2}, Landroid/location/LocationManager;->sendExtraCommand(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Z

    .line 2038
    invoke-direct {p0, v1, v2}, Lcom/mediatek/ygps/YgpsActivity;->sleep(J)V

    .line 2040
    iget-object v6, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocationManager:Landroid/location/LocationManager;

    const-wide/16 v8, 0x0

    const/4 v10, 0x0

    iget-object v11, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocListener:Landroid/location/LocationListener;

    const-string v7, "gps"

    invoke-virtual/range {v6 .. v11}, Landroid/location/LocationManager;->requestLocationUpdates(Ljava/lang/String;JFLandroid/location/LocationListener;)V

    .line 2042
    iget-object p2, p0, Lcom/mediatek/ygps/YgpsActivity;->mNmeaParser:Lcom/mediatek/ygps/NmeaParser;

    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mNmeaUpdateListener:Lcom/mediatek/ygps/NmeaParser$NmeaUpdateViewListener;

    invoke-virtual {p2, v1}, Lcom/mediatek/ygps/NmeaParser;->addSVUpdateListener(Lcom/mediatek/ygps/NmeaParser$NmeaUpdateViewListener;)V

    .line 2043
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mRestarting:Z

    const-string p0, "requestLocationUpdates-msg"

    .line 2044
    invoke-static {p1, p0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method private sendCommand(Ljava/lang/String;)V
    .locals 5

    .line 1772
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sendCommand:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "YGPS/Mainview"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const v0, 0x7f080007

    const/4 v1, 0x1

    if-eqz p1, :cond_5

    .line 1773
    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v2

    if-nez v2, :cond_0

    goto :goto_1

    :cond_0
    const-string v2, "$"

    .line 1778
    invoke-virtual {p1, v2}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v2

    const-string v3, "*"

    .line 1779
    invoke-virtual {p1, v3}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v3

    const/4 v4, -0x1

    if-eq v2, v4, :cond_2

    if-eq v3, v4, :cond_2

    if-ge v3, v2, :cond_1

    .line 1783
    invoke-static {p0, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object p0

    .line 1784
    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    return-void

    :cond_1
    add-int/2addr v2, v1

    .line 1787
    invoke-virtual {p1, v2, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_2
    if-eq v2, v4, :cond_3

    add-int/2addr v2, v1

    .line 1789
    invoke-virtual {p1, v2}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_3
    if-eq v3, v4, :cond_4

    const/4 v0, 0x0

    .line 1791
    invoke-virtual {p1, v0, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p1

    .line 1793
    :cond_4
    :goto_0
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mSocketClient:Lcom/mediatek/ygps/ClientSocket;

    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/mediatek/ygps/ClientSocket;->sendCommand(Ljava/lang/String;)V

    return-void

    .line 1774
    :cond_5
    :goto_1
    invoke-static {p0, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object p0

    .line 1775
    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    return-void
.end method

.method private setCountDown(I)V
    .locals 2

    .line 1019
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mAutoTestHandler:Landroid/os/Handler;

    const/16 v1, 0x3ee

    .line 1020
    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 1021
    iput p1, v0, Landroid/os/Message;->arg1:I

    .line 1022
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mAutoTestHandler:Landroid/os/Handler;

    invoke-virtual {p0, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method private setCurrentTimes(I)V
    .locals 2

    .line 1006
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mAutoTestHandler:Landroid/os/Handler;

    const/16 v1, 0x3ec

    .line 1007
    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 1008
    iput p1, v0, Landroid/os/Message;->arg1:I

    .line 1009
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mAutoTestHandler:Landroid/os/Handler;

    invoke-virtual {p0, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method private setGpsTestLayout()V
    .locals 4

    const v0, 0x7f050065

    .line 471
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTestLastCep:Landroid/widget/TextView;

    const v0, 0x7f05006b

    .line 472
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTestMeanCep:Landroid/widget/TextView;

    const v0, 0x7f05006f

    .line 473
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTest68Cep:Landroid/widget/TextView;

    const v0, 0x7f050071

    .line 474
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTest95Cep:Landroid/widget/TextView;

    const v0, 0x7f050069

    .line 475
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTestMaxCep:Landroid/widget/TextView;

    const v0, 0x7f050070

    .line 476
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTest68Ttff:Landroid/widget/TextView;

    const v0, 0x7f050072

    .line 477
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTest95Ttff:Landroid/widget/TextView;

    const v0, 0x7f05006a

    .line 478
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTestMaxTtff:Landroid/widget/TextView;

    const v0, 0x7f050061

    .line 479
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvCurTimes:Landroid/widget/TextView;

    const v0, 0x7f050074

    .line 480
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvCountDown:Landroid/widget/TextView;

    const v0, 0x7f05000d

    .line 481
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnGpsTestStart:Landroid/widget/Button;

    .line 482
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    const v0, 0x7f05000e

    .line 483
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnGpsTestStop:Landroid/widget/Button;

    .line 484
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 485
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnGpsTestStop:Landroid/widget/Button;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    const v0, 0x7f050024

    .line 486
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mEtTestTimes:Landroid/widget/EditText;

    const v0, 0x7f050019

    .line 487
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mCbNeed3DFix:Landroid/widget/CheckBox;

    const v0, 0x7f050023

    .line 488
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mEtTestInterval:Landroid/widget/EditText;

    const v0, 0x7f050025

    .line 489
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mEtTestLat:Landroid/widget/EditText;

    const v0, 0x7f050026

    .line 490
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mEtTestLon:Landroid/widget/EditText;

    const v0, 0x7f05000c

    .line 491
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnGpsJamming:Landroid/widget/Button;

    .line 492
    iget-object v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v2}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    const v0, 0x7f050022

    .line 493
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mEtGpsJammingTimes:Landroid/widget/EditText;

    const v2, 0x7f080023

    .line 494
    invoke-virtual {p0, v2}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 495
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mEtGpsJammingTimes:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-interface {v2}, Landroid/text/Editable;->length()I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/widget/EditText;->setSelection(I)V

    const v0, 0x7f05004a

    .line 496
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestSpinner:Landroid/widget/Spinner;

    .line 497
    new-instance v0, Landroid/widget/ArrayAdapter;

    const v2, 0x1090008

    invoke-direct {v0, p0, v2}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    const v2, 0x1090009

    .line 500
    invoke-virtual {v0, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 501
    :goto_0
    sget-object v2, Lcom/mediatek/ygps/YgpsActivity;->sTypeList:[Ljava/lang/String;

    array-length v3, v2

    if-ge v1, v3, :cond_0

    .line 502
    aget-object v2, v2, v1

    invoke-virtual {v0, v2}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 504
    :cond_0
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestSpinner:Landroid/widget/Spinner;

    invoke-virtual {v1, v0}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 505
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestSpinner:Landroid/widget/Spinner;

    new-instance v1, Lcom/mediatek/ygps/YgpsActivity$7;

    invoke-direct {v1, p0}, Lcom/mediatek/ygps/YgpsActivity$7;-><init>(Lcom/mediatek/ygps/YgpsActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    return-void
.end method

.method private setInfoLayout()V
    .locals 3

    const v0, 0x7f050076

    .line 428
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvStatus:Landroid/widget/TextView;

    const v0, 0x7f05000a

    .line 429
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnColdStart:Landroid/widget/Button;

    .line 430
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    const v0, 0x7f050013

    .line 431
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnWarmStart:Landroid/widget/Button;

    .line 432
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    const v0, 0x7f05000f

    .line 433
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnHotStart:Landroid/widget/Button;

    .line 434
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    const v0, 0x7f05000b

    .line 435
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnFullStart:Landroid/widget/Button;

    .line 436
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    const v0, 0x7f050012

    .line 437
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnReStart:Landroid/widget/Button;

    .line 438
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    const v0, 0x7f050017

    .line 439
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mCbGpsLog:Landroid/widget/CheckBox;

    const-string v0, "gpslog_enabled"

    const-string v1, "0"

    .line 440
    invoke-static {v0, v1}, Lcom/mediatek/ygps/GpsMnlSetting;->getMnlProp(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 442
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mCbGpsLog:Landroid/widget/CheckBox;

    const-string v2, "1"

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    invoke-virtual {v1, v0}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 443
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mCbGpsLog:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/ygps/YgpsActivity$6;

    invoke-direct {v1, p0}, Lcom/mediatek/ygps/YgpsActivity$6;-><init>(Lcom/mediatek/ygps/YgpsActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 454
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->initEpoUI()V

    return-void
.end method

.method private setLayout()V
    .locals 0

    .line 521
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->setSlLocLayout()V

    .line 522
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->setSlCnrLayout()V

    .line 523
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->setInfoLayout()V

    .line 524
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->setNmeaLayout()V

    .line 525
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->setGpsTestLayout()V

    return-void
.end method

.method private setNmeaLayout()V
    .locals 2

    const v0, 0x7f05006e

    .line 458
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvNmeaLog:Landroid/widget/TextView;

    const v0, 0x7f050010

    .line 459
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnNmeaStart:Landroid/widget/Button;

    .line 460
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    const v0, 0x7f050011

    .line 461
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnNMEAStop:Landroid/widget/Button;

    .line 462
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 463
    iget-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mLogHidden:Z

    if-eqz v0, :cond_0

    .line 464
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnNmeaStart:Landroid/widget/Button;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setVisibility(I)V

    .line 465
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnNMEAStop:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setVisibility(I)V

    .line 467
    :cond_0
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnNMEAStop:Landroid/widget/Button;

    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Landroid/widget/Button;->setEnabled(Z)V

    return-void
.end method

.method private setSatelliteStatus()V
    .locals 3

    .line 317
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mSatelInfoManager:Lcom/mediatek/ygps/SatelliteInfoManager;

    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mNmeaParser:Lcom/mediatek/ygps/NmeaParser;

    invoke-virtual {v0, v1}, Lcom/mediatek/ygps/SatelliteInfoManager;->updateSatelliteInfo(Lcom/mediatek/ygps/NmeaParser;)V

    .line 318
    iget-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mLogHidden:Z

    const-string v1, "YGPS/Mainview"

    if-nez v0, :cond_0

    .line 319
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "setSatelliteStatus "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mSatelInfoManager:Lcom/mediatek/ygps/SatelliteInfoManager;

    invoke-virtual {v2}, Lcom/mediatek/ygps/SatelliteInfoManager;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 321
    :cond_0
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mSatelInfoManager:Lcom/mediatek/ygps/SatelliteInfoManager;

    const/4 v2, -0x1

    invoke-virtual {v0, v2}, Lcom/mediatek/ygps/SatelliteInfoManager;->isUsedInFix(I)Z

    move-result v0

    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mNmeaFixed:Z

    if-nez v0, :cond_1

    .line 323
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->clearLayout()V

    const v0, 0x7f080017

    .line 324
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mStatus:Ljava/lang/String;

    goto :goto_0

    :cond_1
    const v0, 0x7f080013

    .line 326
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mStatus:Ljava/lang/String;

    .line 328
    :goto_0
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvStatus:Landroid/widget/TextView;

    iget-object v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mStatus:Ljava/lang/String;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 329
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "setSatelliteStatus: status:"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mStatus:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 331
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mSlLocationView:Lcom/mediatek/ygps/SatelLocationView;

    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mSatelInfoManager:Lcom/mediatek/ygps/SatelliteInfoManager;

    invoke-virtual {v0, v1}, Lcom/mediatek/ygps/SatelliteBaseView;->requestUpdate(Lcom/mediatek/ygps/SatelliteInfoManager;)V

    .line 333
    new-instance v0, Lcom/mediatek/ygps/YgpsActivity$2;

    invoke-direct {v0, p0}, Lcom/mediatek/ygps/YgpsActivity$2;-><init>(Lcom/mediatek/ygps/YgpsActivity;)V

    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method private setSlCnrLayout()V
    .locals 2

    .line 382
    new-instance v0, Lcom/mediatek/ygps/SatelliteCnrController;

    const v1, 0x7f050037

    invoke-virtual {p0, v1}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    invoke-direct {v0, v1, p0}, Lcom/mediatek/ygps/SatelliteCnrController;-><init>(Landroid/view/View;Landroid/app/Activity;)V

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mSlCnrCtl:Lcom/mediatek/ygps/SatelliteCnrController;

    return-void
.end method

.method private setSlLocLayout()V
    .locals 2

    const v0, 0x7f05002f

    .line 345
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/GridLayout;

    .line 346
    new-instance v1, Lcom/mediatek/ygps/YgpsActivity$3;

    invoke-direct {v1, p0, v0}, Lcom/mediatek/ygps/YgpsActivity$3;-><init>(Lcom/mediatek/ygps/YgpsActivity;Landroid/widget/GridLayout;)V

    invoke-virtual {v0, v1}, Landroid/widget/GridLayout;->post(Ljava/lang/Runnable;)Z

    const v0, 0x7f050048

    .line 378
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/mediatek/ygps/SatelLocationView;

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mSlLocationView:Lcom/mediatek/ygps/SatelLocationView;

    return-void
.end method

.method private setStartButtonEnable(Z)V
    .locals 2

    .line 993
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mAutoTestHandler:Landroid/os/Handler;

    const/16 v1, 0x3ed

    .line 994
    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 995
    iput p1, v0, Landroid/os/Message;->arg1:I

    .line 996
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mAutoTestHandler:Landroid/os/Handler;

    invoke-virtual {p0, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method private setTestParam()V
    .locals 2

    .line 981
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mAutoTestHandler:Landroid/os/Handler;

    const/16 v1, 0x3f1

    .line 982
    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 983
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mAutoTestHandler:Landroid/os/Handler;

    invoke-virtual {p0, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method private showChipAndClkInfo()V
    .locals 6

    const-string v0, "YGPS/Mainview"

    const-string v1, "Enter showChipAndClkInfo"

    .line 1350
    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 1351
    iget-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsExit:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const v0, 0x7f05005e

    .line 1354
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    const v1, 0x7f080018

    .line 1356
    invoke-virtual {p0, v1}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/mediatek/ygps/GpsMnlSetting;->getChipVersion(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1355
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const-string v0, "PMTK605"

    .line 1357
    invoke-direct {p0, v0}, Lcom/mediatek/ygps/YgpsActivity;->sendCommand(Ljava/lang/String;)V

    const v0, 0x7f050060

    .line 1360
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    const v1, 0x7f05005f

    .line 1361
    invoke-virtual {p0, v1}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object p0

    check-cast p0, Landroid/widget/TextView;

    const-string v1, "unknown"

    .line 1362
    invoke-static {v1}, Lcom/mediatek/ygps/GpsMnlSetting;->getClockProp(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1363
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v2

    const/4 v3, 0x2

    if-ne v2, v3, :cond_6

    const-string v2, "ff"

    .line 1364
    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    const-string v1, "error"

    .line 1365
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1366
    invoke-virtual {p0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_1

    :cond_1
    const/4 v2, 0x0

    .line 1368
    invoke-virtual {v1, v2}, Ljava/lang/String;->charAt(I)C

    move-result v2

    const/16 v3, 0x30

    const/16 v4, 0x31

    if-lt v2, v4, :cond_2

    const/16 v5, 0x34

    if-gt v2, v5, :cond_2

    .line 1370
    invoke-static {v2}, Ljava/lang/String;->valueOf(C)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    :cond_2
    if-ne v2, v3, :cond_3

    const-string v2, "2"

    .line 1372
    invoke-virtual {p0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    :cond_3
    const/16 v5, 0x39

    if-ne v2, v5, :cond_4

    const-string v2, "9"

    .line 1374
    invoke-virtual {p0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_4
    :goto_0
    const/4 p0, 0x1

    .line 1376
    invoke-virtual {v1, p0}, Ljava/lang/String;->charAt(I)C

    move-result p0

    if-ne p0, v3, :cond_5

    const-string p0, "TCXO"

    .line 1378
    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_1

    :cond_5
    if-ne p0, v4, :cond_6

    const-string p0, "Co-clock"

    .line 1380
    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_6
    :goto_1
    return-void
.end method

.method private showExceedPeriod(I)V
    .locals 2

    .line 1032
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mAutoTestHandler:Landroid/os/Handler;

    const/16 v1, 0x3f0

    .line 1033
    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 1034
    iput p1, v0, Landroid/os/Message;->arg1:I

    .line 1035
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mAutoTestHandler:Landroid/os/Handler;

    invoke-virtual {p0, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method private showFirstFixInfo(Landroid/location/Location;)V
    .locals 9

    const/4 v0, 0x0

    .line 1481
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mShowFirstFixLocate:Z

    .line 1482
    invoke-virtual {p1}, Landroid/location/Location;->getLatitude()D

    move-result-wide v5

    .line 1483
    invoke-virtual {p1}, Landroid/location/Location;->getLongitude()D

    move-result-wide v7

    const p1, 0x7f05002b

    .line 1484
    invoke-virtual {p0, p1}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    .line 1485
    invoke-static {v7, v8}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const p1, 0x7f05002a

    .line 1486
    invoke-virtual {p0, p1}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    .line 1487
    invoke-static {v5, v6}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1488
    iget-boolean p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsTestRunning:Z

    if-eqz p1, :cond_0

    iget-boolean p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mNeedCalCep:Z

    if-eqz p1, :cond_0

    .line 1489
    iget-wide v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestLat:D

    iget-wide v3, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestLon:D

    invoke-static/range {v1 .. v8}, Lcom/mediatek/ygps/CepCal;->calCEP(DDDD)D

    move-result-wide v0

    .line 1490
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestCepList:Ljava/util/ArrayList;

    invoke-static {v0, v1}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v2

    invoke-virtual {p1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1491
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "mTestCepList add: "

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0, v1}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v2, "YGPS/Mainview"

    invoke-static {v2, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 1492
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTestLastCep:Landroid/widget/TextView;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const v4, 0x7f080003

    .line 1493
    invoke-virtual {p0, v4}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 1492
    invoke-virtual {p1, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1495
    iget p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mCurrentTimes:I

    invoke-direct {p0, p1, v0, v1}, Lcom/mediatek/ygps/YgpsActivity;->meanCep(ID)D

    move-result-wide v0

    iput-wide v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mMeanCep:D

    .line 1496
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "mMeanCep: "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mMeanCep:D

    invoke-virtual {p1, v0, v1}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 1497
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTestMeanCep:Landroid/widget/TextView;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-wide v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mMeanCep:D

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1498
    invoke-virtual {p0, v4}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 1497
    invoke-virtual {p1, p0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method

.method private showLocToast(Landroid/location/Location;)V
    .locals 6

    .line 1458
    invoke-virtual {p1}, Landroid/location/Location;->getTime()J

    move-result-wide v0

    .line 1459
    iget-wide v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocUpdateTime:J

    sub-long v2, v0, v2

    const-wide/16 v4, 0x1388

    cmp-long v2, v2, v4

    if-lez v2, :cond_2

    .line 1460
    iput-wide v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocUpdateTime:J

    .line 1461
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    new-instance v3, Ljava/util/Date;

    invoke-direct {v3, v0, v1}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v3}, Ljava/util/Date;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "\n"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1462
    invoke-virtual {p1}, Landroid/location/Location;->getLatitude()D

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v1

    .line 1463
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v2

    const/4 v3, 0x0

    const/16 v4, 0xc

    if-le v2, v4, :cond_0

    .line 1464
    invoke-virtual {v1, v3, v4}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v1

    .line 1466
    :cond_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ","

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1467
    invoke-virtual {p1}, Landroid/location/Location;->getLongitude()D

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object p1

    .line 1468
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v1

    if-le v1, v4, :cond_1

    .line 1469
    invoke-virtual {p1, v3, v4}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p1

    .line 1471
    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 1473
    invoke-static {p0, p1, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p1

    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mPrompt:Landroid/widget/Toast;

    .line 1475
    invoke-virtual {p1}, Landroid/widget/Toast;->show()V

    :cond_2
    return-void
.end method

.method private showTestResult()V
    .locals 5

    .line 756
    iget-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestTtffValid:Z

    if-eqz v0, :cond_0

    .line 757
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTestMaxTtff:Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mMaxTtff:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const v2, 0x7f08004a

    invoke-virtual {p0, v2}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 758
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTest68Ttff:Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget v3, p0, Lcom/mediatek/ygps/YgpsActivity;->m68Ttff:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v2}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 759
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTest95Ttff:Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget v3, p0, Lcom/mediatek/ygps/YgpsActivity;->m95Ttff:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v2}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 761
    :cond_0
    iget-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestCepValid:Z

    if-eqz v0, :cond_1

    .line 762
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTestMaxCep:Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-wide v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mMaxCep:D

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const v2, 0x7f080003

    invoke-virtual {p0, v2}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 763
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTest68Cep:Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-wide v3, p0, Lcom/mediatek/ygps/YgpsActivity;->m68Cep:D

    invoke-static {v3, v4}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v2}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 764
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvTest95Cep:Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-wide v3, p0, Lcom/mediatek/ygps/YgpsActivity;->m95Cep:D

    invoke-static {v3, v4}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v2}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_1
    return-void
.end method

.method private sleep(J)V
    .locals 0

    .line 2049
    :try_start_0
    invoke-static {p1, p2}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 2052
    invoke-virtual {p0}, Ljava/lang/InterruptedException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private startGPSAutoTest()V
    .locals 2

    .line 661
    invoke-virtual {p0}, Lcom/mediatek/ygps/YgpsActivity;->checkAutoTestParamValid()Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_0

    .line 662
    invoke-virtual {p0, v1}, Landroid/app/TabActivity;->removeDialog(I)V

    return-void

    .line 665
    :cond_0
    invoke-virtual {p0}, Lcom/mediatek/ygps/YgpsActivity;->checkCepParamValid()Z

    move-result v0

    if-nez v0, :cond_1

    .line 666
    invoke-virtual {p0, v1}, Landroid/app/TabActivity;->removeDialog(I)V

    return-void

    .line 671
    :cond_1
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mCbNeed3DFix:Landroid/widget/CheckBox;

    if-eqz v0, :cond_2

    .line 672
    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsNeed3DFix:Z

    :cond_2
    const/4 v0, 0x0

    .line 674
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsForceStopGpsTest:Z

    .line 675
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestTtffList:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    .line 676
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestCepList:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    .line 677
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->resetTestView()V

    .line 679
    iget-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mStartPressedHandling:Z

    if-nez v0, :cond_3

    .line 680
    iput-boolean v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mStartPressedHandling:Z

    .line 681
    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-direct {p0, v0}, Lcom/mediatek/ygps/YgpsActivity;->refreshATViewState(Ljava/lang/Boolean;)V

    .line 683
    new-instance v0, Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;-><init>(Lcom/mediatek/ygps/YgpsActivity;Lcom/mediatek/ygps/YgpsActivity$1;)V

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mAutoTestThread:Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;

    if-eqz v0, :cond_3

    .line 685
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "3D fix:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsNeed3DFix:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "YGPS/Mainview"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 687
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mAutoTestThread:Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;

    invoke-virtual {p0}, Ljava/lang/Thread;->start()V

    :cond_3
    return-void
.end method

.method private startGnssComponent(Z)V
    .locals 10

    const-string v0, "gps"

    .line 1132
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "startGnssComponent:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "YGPS/Mainview"

    invoke-static {v2, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1133
    iget-boolean v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mPermissionGranted:Z

    if-nez v1, :cond_0

    return-void

    :cond_0
    const/4 v1, 0x1

    .line 1137
    :try_start_0
    iget-object v3, p0, Lcom/mediatek/ygps/YgpsActivity;->mMnldConn:Lcom/mediatek/ygps/MnldConn;

    const-string v4, "debug.debug_nmea"

    const-string v5, "1"

    invoke-static {v3, v4, v5}, Lcom/mediatek/ygps/GpsMnlSetting;->setMnlProp(Lcom/mediatek/ygps/MnldConn;Ljava/lang/String;Ljava/lang/String;)V

    .line 1139
    iget-object v3, p0, Lcom/mediatek/ygps/YgpsActivity;->mMnldConn:Lcom/mediatek/ygps/MnldConn;

    invoke-virtual {v3, v1}, Lcom/mediatek/ygps/MnldConn;->setTriggerNe(Z)V

    .line 1140
    iget-object v4, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocationManager:Landroid/location/LocationManager;

    const-string v5, "gps"

    const-wide/16 v6, 0x0

    const/4 v8, 0x0

    iget-object v9, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocListener:Landroid/location/LocationListener;

    invoke-virtual/range {v4 .. v9}, Landroid/location/LocationManager;->requestLocationUpdates(Ljava/lang/String;JFLandroid/location/LocationListener;)V

    .line 1142
    iget-object v3, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocationManager:Landroid/location/LocationManager;

    iget-object v4, p0, Lcom/mediatek/ygps/YgpsActivity;->mGnssStatusCallback:Landroid/location/GnssStatus$Callback;

    invoke-virtual {v3, v4}, Landroid/location/LocationManager;->registerGnssStatusCallback(Landroid/location/GnssStatus$Callback;)Z

    .line 1143
    iget-object v3, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocationManager:Landroid/location/LocationManager;

    iget-object v4, p0, Lcom/mediatek/ygps/YgpsActivity;->mNmeaListener:Landroid/location/OnNmeaMessageListener;

    invoke-virtual {v3, v4}, Landroid/location/LocationManager;->addNmeaListener(Landroid/location/OnNmeaMessageListener;)Z

    .line 1144
    iget-object v3, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocationManager:Landroid/location/LocationManager;

    .line 1145
    invoke-virtual {v3, v0}, Landroid/location/LocationManager;->isProviderEnabled(Ljava/lang/String;)Z

    move-result v3

    const/4 v4, 0x0

    if-eqz v3, :cond_1

    const v3, 0x7f080039

    new-array v5, v1, [Ljava/lang/Object;

    aput-object v0, v5, v4

    .line 1146
    invoke-virtual {p0, v3, v5}, Landroid/app/TabActivity;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    new-array v3, v4, [Ljava/lang/Object;

    invoke-static {v0, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mProvider:Ljava/lang/String;

    goto :goto_0

    :cond_1
    const v3, 0x7f080038

    new-array v5, v1, [Ljava/lang/Object;

    aput-object v0, v5, v4

    .line 1150
    invoke-virtual {p0, v3, v5}, Landroid/app/TabActivity;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    new-array v3, v4, [Ljava/lang/Object;

    invoke-static {v0, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mProvider:Ljava/lang/String;

    :goto_0
    const v0, 0x7f080018

    .line 1154
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mStatus:Ljava/lang/String;

    if-eqz p1, :cond_2

    .line 1156
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->getMnldVersion()V
    :try_end_0
    .catch Ljava/lang/SecurityException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/IllegalArgumentException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    .line 1163
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "IllegalArgumentException: "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/IllegalArgumentException;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_1

    :catch_1
    move-exception p1

    const-string v0, "security exception"

    .line 1159
    invoke-static {p0, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p0

    .line 1160
    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    .line 1161
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "SecurityException: "

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/SecurityException;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    :goto_1
    return-void
.end method

.method private stopGPSAutoTest()V
    .locals 0

    .line 698
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->resetTestParam()V

    .line 699
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->setTestParam()V

    return-void
.end method

.method private stopGnssComponent()V
    .locals 2

    .line 1168
    iget-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mPermissionGranted:Z

    if-eqz v0, :cond_0

    .line 1169
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocationManager:Landroid/location/LocationManager;

    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocListener:Landroid/location/LocationListener;

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->removeUpdates(Landroid/location/LocationListener;)V

    .line 1170
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocationManager:Landroid/location/LocationManager;

    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mGnssStatusCallback:Landroid/location/GnssStatus$Callback;

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->unregisterGnssStatusCallback(Landroid/location/GnssStatus$Callback;)V

    .line 1172
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocationManager:Landroid/location/LocationManager;

    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mNmeaListener:Landroid/location/OnNmeaMessageListener;

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->removeNmeaListener(Landroid/location/OnNmeaMessageListener;)V
    :try_end_0
    .catch Ljava/lang/IllegalStateException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 1174
    invoke-virtual {v0}, Ljava/lang/IllegalStateException;->toString()Ljava/lang/String;

    .line 1177
    :goto_0
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mMnldConn:Lcom/mediatek/ygps/MnldConn;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mediatek/ygps/MnldConn;->setTriggerNe(Z)V

    .line 1180
    :cond_0
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mMnldConn:Lcom/mediatek/ygps/MnldConn;

    const-string v0, "debug.debug_nmea"

    const-string v1, "0"

    invoke-static {p0, v0, v1}, Lcom/mediatek/ygps/GpsMnlSetting;->setMnlProp(Lcom/mediatek/ygps/MnldConn;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private wait3DFix()V
    .locals 8

    .line 905
    invoke-static {}, Ljava/util/Calendar;->getInstance()Ljava/util/Calendar;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/Calendar;->getTime()Ljava/util/Date;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/Date;->getTime()J

    move-result-wide v0

    const-wide/16 v2, 0x3e8

    div-long/2addr v0, v2

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    .line 907
    :cond_0
    iget-boolean v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsTestRunning:Z

    if-eqz v1, :cond_2

    .line 908
    invoke-static {}, Ljava/util/Calendar;->getInstance()Ljava/util/Calendar;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/Calendar;->getTime()Ljava/util/Date;

    move-result-object v1

    .line 909
    invoke-virtual {v1}, Ljava/util/Date;->getTime()J

    move-result-wide v4

    div-long/2addr v4, v2

    .line 908
    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    .line 911
    iget-boolean v4, p0, Lcom/mediatek/ygps/YgpsActivity;->mFirstFix:Z

    if-eqz v4, :cond_1

    goto :goto_0

    .line 913
    :cond_1
    invoke-virtual {v1}, Ljava/lang/Long;->longValue()J

    move-result-wide v4

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v6

    sub-long/2addr v4, v6

    const-wide/16 v6, 0x3e7

    cmp-long v1, v4, v6

    if-lez v1, :cond_0

    const/4 v0, 0x1

    const/16 v1, 0x3e7

    .line 915
    invoke-direct {p0, v1}, Lcom/mediatek/ygps/YgpsActivity;->showExceedPeriod(I)V

    goto :goto_1

    :cond_2
    :goto_0
    const/4 v0, 0x0

    :goto_1
    if-eqz v0, :cond_3

    const-string p0, "YGPS/Mainview"

    const-string v0, "wait3DFix , Exceed period"

    .line 921
    invoke-static {p0, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_2

    :cond_3
    const-wide/16 v0, 0x1f4

    .line 923
    invoke-direct {p0, v0, v1}, Lcom/mediatek/ygps/YgpsActivity;->sleep(J)V

    :goto_2
    return-void
.end method

.method private waitAutoTestInterval()V
    .locals 3

    .line 889
    iget v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestInterval:I

    if-eqz v0, :cond_1

    :goto_0
    if-ltz v0, :cond_0

    .line 890
    iget-boolean v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsTestRunning:Z

    if-eqz v1, :cond_0

    .line 891
    invoke-direct {p0, v0}, Lcom/mediatek/ygps/YgpsActivity;->setCountDown(I)V

    const-wide/16 v1, 0x3e8

    .line 892
    invoke-direct {p0, v1, v2}, Lcom/mediatek/ygps/YgpsActivity;->sleep(J)V

    add-int/lit8 v0, v0, -0x1

    goto :goto_0

    .line 895
    :cond_0
    iget-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsTestRunning:Z

    if-nez v0, :cond_2

    const/4 v0, 0x0

    .line 896
    invoke-direct {p0, v0}, Lcom/mediatek/ygps/YgpsActivity;->setCountDown(I)V

    goto :goto_1

    :cond_1
    const-wide/16 v0, 0x1f4

    .line 899
    invoke-direct {p0, v0, v1}, Lcom/mediatek/ygps/YgpsActivity;->sleep(J)V

    :cond_2
    :goto_1
    return-void
.end method


# virtual methods
.method checkAutoTestParamValid()Z
    .locals 5

    .line 610
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mEtTestTimes:Landroid/widget/EditText;

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_3

    .line 611
    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-interface {v0}, Landroid/text/Editable;->length()I

    move-result v0

    if-nez v0, :cond_0

    const v0, 0x7f08006a

    .line 612
    invoke-static {p0, v0, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    .line 613
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 614
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnGpsTestStart:Landroid/widget/Button;

    invoke-virtual {p0, v2}, Landroid/widget/Button;->setEnabled(Z)V

    return v1

    .line 617
    :cond_0
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mEtTestTimes:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    .line 618
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 617
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v0

    .line 619
    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v3

    if-ltz v3, :cond_2

    .line 620
    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v3

    const/16 v4, 0x270f

    if-le v3, v4, :cond_1

    goto :goto_0

    .line 627
    :cond_1
    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    iput v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTotalTimes:I

    goto :goto_1

    :cond_2
    :goto_0
    const v0, 0x7f08006b

    .line 621
    invoke-static {p0, v0, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    .line 623
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 624
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnGpsTestStart:Landroid/widget/Button;

    invoke-virtual {p0, v2}, Landroid/widget/Button;->setEnabled(Z)V

    return v1

    .line 632
    :cond_3
    :goto_1
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mEtTestInterval:Landroid/widget/EditText;

    if-eqz v0, :cond_7

    .line 633
    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-interface {v0}, Landroid/text/Editable;->length()I

    move-result v0

    if-nez v0, :cond_4

    const v0, 0x7f080066

    .line 634
    invoke-static {p0, v0, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    .line 636
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 637
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnGpsTestStart:Landroid/widget/Button;

    invoke-virtual {p0, v2}, Landroid/widget/Button;->setEnabled(Z)V

    return v1

    .line 640
    :cond_4
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mEtTestInterval:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    .line 641
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 640
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v0

    .line 642
    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v3

    if-ltz v3, :cond_6

    .line 643
    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v3

    const/16 v4, 0x3e7

    if-le v3, v4, :cond_5

    goto :goto_2

    .line 650
    :cond_5
    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    iput v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestInterval:I

    goto :goto_3

    :cond_6
    :goto_2
    const v0, 0x7f080067

    .line 644
    invoke-static {p0, v0, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    .line 646
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 647
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnGpsTestStart:Landroid/widget/Button;

    invoke-virtual {p0, v2}, Landroid/widget/Button;->setEnabled(Z)V

    return v1

    :cond_7
    :goto_3
    return v2
.end method

.method checkCepParamValid()Z
    .locals 7

    const/4 v0, 0x1

    .line 573
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mNeedCalCep:Z

    .line 574
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mEtTestLat:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    if-eqz v1, :cond_3

    .line 575
    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v3

    if-eqz v3, :cond_0

    goto :goto_1

    .line 578
    :cond_0
    invoke-static {v1}, Ljava/lang/Double;->valueOf(Ljava/lang/String;)Ljava/lang/Double;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v3

    const-wide v5, -0x3fa9800000000000L    # -90.0

    cmpg-double v1, v3, v5

    if-ltz v1, :cond_2

    const-wide v5, 0x4056800000000000L    # 90.0

    cmpl-double v1, v3, v5

    if-lez v1, :cond_1

    goto :goto_0

    .line 587
    :cond_1
    iput-wide v3, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestLat:D

    goto :goto_2

    :cond_2
    :goto_0
    const v1, 0x7f080068

    .line 580
    invoke-static {p0, v1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v1

    .line 582
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 583
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnGpsTestStart:Landroid/widget/Button;

    invoke-virtual {v1, v0}, Landroid/widget/Button;->setEnabled(Z)V

    .line 584
    iput-boolean v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mNeedCalCep:Z

    return v2

    .line 576
    :cond_3
    :goto_1
    iput-boolean v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mNeedCalCep:Z

    .line 590
    :goto_2
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mEtTestLon:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_7

    .line 591
    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v3

    if-eqz v3, :cond_4

    goto :goto_4

    .line 594
    :cond_4
    invoke-static {v1}, Ljava/lang/Double;->valueOf(Ljava/lang/String;)Ljava/lang/Double;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v3

    const-wide v5, -0x3f99800000000000L    # -180.0

    cmpg-double v1, v3, v5

    if-ltz v1, :cond_6

    const-wide v5, 0x4066800000000000L    # 180.0

    cmpl-double v1, v3, v5

    if-lez v1, :cond_5

    goto :goto_3

    .line 603
    :cond_5
    iput-wide v3, p0, Lcom/mediatek/ygps/YgpsActivity;->mTestLon:D

    goto :goto_5

    :cond_6
    :goto_3
    const v1, 0x7f080069

    .line 596
    invoke-static {p0, v1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v1

    .line 598
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 599
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBtnGpsTestStart:Landroid/widget/Button;

    invoke-virtual {v1, v0}, Landroid/widget/Button;->setEnabled(Z)V

    .line 600
    iput-boolean v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mNeedCalCep:Z

    return v2

    .line 592
    :cond_7
    :goto_4
    iput-boolean v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mNeedCalCep:Z

    :goto_5
    return v0
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 2

    .line 1186
    invoke-super {p0, p1}, Landroid/app/TabActivity;->onCreate(Landroid/os/Bundle;)V

    .line 1188
    invoke-static {}, Lcom/mediatek/ygps/GpsMnlSetting;->isLogHidden()Z

    move-result p1

    iput-boolean p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mLogHidden:Z

    .line 1191
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->initTabPage()V

    .line 1192
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->setLayout()V

    .line 1194
    new-instance p1, Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;

    const/4 v0, 0x0

    invoke-direct {p1, p0, v0}, Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;-><init>(Lcom/mediatek/ygps/YgpsActivity;Lcom/mediatek/ygps/YgpsActivity$1;)V

    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mYgpsWakeLock:Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;

    .line 1195
    invoke-virtual {p1, p0}, Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;->acquireScreenWakeLock(Landroid/content/Context;)V

    .line 1196
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mYgpsWakeLock:Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;

    invoke-virtual {p1, p0}, Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;->acquireCpuWakeLock(Landroid/content/Context;)V

    const-string p1, "location"

    .line 1197
    invoke-virtual {p0, p1}, Landroid/app/TabActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/location/LocationManager;

    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mLocationManager:Landroid/location/LocationManager;

    .line 1198
    new-instance p1, Lcom/mediatek/ygps/PermissionManager;

    invoke-direct {p1, p0}, Lcom/mediatek/ygps/PermissionManager;-><init>(Landroid/app/Activity;)V

    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mPermissionManager:Lcom/mediatek/ygps/PermissionManager;

    .line 1199
    invoke-virtual {p1}, Lcom/mediatek/ygps/PermissionManager;->requestLocationLaunchPermissions()Z

    move-result p1

    const/4 v0, 0x1

    if-eqz p1, :cond_0

    .line 1200
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mPermissionGranted:Z

    .line 1201
    invoke-direct {p0, v0}, Lcom/mediatek/ygps/YgpsActivity;->startGnssComponent(Z)V

    .line 1203
    :cond_0
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mHandler:Landroid/os/Handler;

    const/16 v1, 0x3e8

    invoke-virtual {p1, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 1205
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->initBgStatus()V

    .line 1206
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mShowFirstFixLocate:Z

    .line 1208
    new-instance p1, Lcom/mediatek/ygps/ClientSocket;

    invoke-direct {p1, p0}, Lcom/mediatek/ygps/ClientSocket;-><init>(Lcom/mediatek/ygps/YgpsActivity;)V

    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mSocketClient:Lcom/mediatek/ygps/ClientSocket;

    .line 1209
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mHandler:Landroid/os/Handler;

    const/16 v0, 0x3eb

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 1210
    new-instance p1, Lcom/mediatek/ygps/SatelliteInfoManager;

    invoke-direct {p1}, Lcom/mediatek/ygps/SatelliteInfoManager;-><init>()V

    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mSatelInfoManager:Lcom/mediatek/ygps/SatelliteInfoManager;

    .line 1211
    new-instance p1, Lcom/mediatek/ygps/YgpsActivity$11;

    invoke-direct {p1, p0}, Lcom/mediatek/ygps/YgpsActivity$11;-><init>(Lcom/mediatek/ygps/YgpsActivity;)V

    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mNmeaUpdateListener:Lcom/mediatek/ygps/NmeaParser$NmeaUpdateViewListener;

    .line 1219
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mNmeaParser:Lcom/mediatek/ygps/NmeaParser;

    invoke-virtual {v0, p1}, Lcom/mediatek/ygps/NmeaParser;->addSVUpdateListener(Lcom/mediatek/ygps/NmeaParser$NmeaUpdateViewListener;)V

    .line 1220
    iget-boolean p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsRunInBg:Z

    if-eqz p1, :cond_1

    .line 1221
    new-instance p1, Landroid/content/Intent;

    const-class v0, Lcom/mediatek/ygps/YgpsService;

    invoke-direct {p1, p0, v0}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBgServiceIntent:Landroid/content/Intent;

    .line 1222
    invoke-virtual {p0, p1}, Landroid/app/TabActivity;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;

    :cond_1
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 3

    const v0, 0x7f080009

    const/4 v1, 0x0

    if-eqz p1, :cond_1

    const/4 v2, 0x1

    if-eq p1, v2, :cond_0

    const/4 p0, 0x0

    goto :goto_1

    .line 1306
    :cond_0
    new-instance p1, Landroid/app/ProgressDialog;

    invoke-direct {p1, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    const v2, 0x7f08000a

    .line 1307
    invoke-virtual {p1, v2}, Landroid/app/ProgressDialog;->setTitle(I)V

    .line 1308
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 1309
    invoke-virtual {p1, v1}, Landroid/app/ProgressDialog;->setProgressStyle(I)V

    .line 1310
    invoke-virtual {p1, v1}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 1311
    invoke-virtual {p1, v1}, Landroid/app/ProgressDialog;->setProgress(I)V

    goto :goto_0

    .line 1298
    :cond_1
    new-instance p1, Landroid/app/ProgressDialog;

    invoke-direct {p1, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    const v2, 0x7f08000b

    .line 1299
    invoke-virtual {p1, v2}, Landroid/app/ProgressDialog;->setTitle(I)V

    .line 1300
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 1301
    invoke-virtual {p1, v1}, Landroid/app/ProgressDialog;->setProgressStyle(I)V

    .line 1302
    invoke-virtual {p1, v1}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 1303
    invoke-virtual {p1, v1}, Landroid/app/ProgressDialog;->setProgress(I)V

    :goto_0
    move-object p0, p1

    :goto_1
    return-object p0
.end method

.method public onCreateOptionsMenu(Landroid/view/Menu;)Z
    .locals 4

    .line 1238
    invoke-super {p0, p1}, Landroid/app/TabActivity;->onCreateOptionsMenu(Landroid/view/Menu;)Z

    move-result v0

    .line 1240
    iget-boolean v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mShowLoc:Z

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eqz v1, :cond_0

    const v1, 0x7f08002a

    .line 1241
    invoke-interface {p1, v3, v2, v3, v1}, Landroid/view/Menu;->add(IIII)Landroid/view/MenuItem;

    goto :goto_0

    :cond_0
    const v1, 0x7f08002d

    .line 1243
    invoke-interface {p1, v3, v2, v3, v1}, Landroid/view/Menu;->add(IIII)Landroid/view/MenuItem;

    :goto_0
    const-string v1, "RunInBG"

    .line 1246
    invoke-virtual {p0, v1, v3}, Landroid/app/TabActivity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    .line 1248
    invoke-interface {p0, v1, v3}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result p0

    const/4 v1, 0x2

    if-eqz p0, :cond_1

    const p0, 0x7f08002b

    .line 1249
    invoke-interface {p1, v3, v1, v3, p0}, Landroid/view/Menu;->add(IIII)Landroid/view/MenuItem;

    goto :goto_1

    :cond_1
    const p0, 0x7f08002c

    .line 1251
    invoke-interface {p1, v3, v1, v3, p0}, Landroid/view/Menu;->add(IIII)Landroid/view/MenuItem;

    :goto_1
    return v0
.end method

.method protected onDestroy()V
    .locals 2

    .line 1433
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->forceStopGpsAutoTest()V

    .line 1434
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->stopGnssComponent()V

    .line 1435
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->removeNmeaParser()V

    .line 1436
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mHandler:Landroid/os/Handler;

    const/16 v1, 0x3e9

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 1437
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mHandler:Landroid/os/Handler;

    const/16 v1, 0x3e8

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 1438
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mHandler:Landroid/os/Handler;

    const/16 v1, 0x3eb

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    const/4 v0, 0x1

    .line 1439
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsExit:Z

    .line 1440
    iget-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mStartNmeaRecord:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 1441
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mStartNmeaRecord:Z

    .line 1444
    :cond_0
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBgServiceIntent:Landroid/content/Intent;

    if-eqz v0, :cond_1

    .line 1445
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->stopService(Landroid/content/Intent;)Z

    .line 1448
    :cond_1
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mSocketClient:Lcom/mediatek/ygps/ClientSocket;

    invoke-virtual {v0}, Lcom/mediatek/ygps/ClientSocket;->endClient()V

    .line 1450
    iget-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsRunInBg:Z

    if-eqz v0, :cond_2

    .line 1451
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mYgpsWakeLock:Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;

    invoke-virtual {v0}, Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;->releaseCpuWakeLock()V

    .line 1454
    :cond_2
    invoke-super {p0}, Landroid/app/TabActivity;->onDestroy()V

    return-void
.end method

.method public onOptionsItemSelected(Landroid/view/MenuItem;)Z
    .locals 5

    .line 1258
    invoke-interface {p1}, Landroid/view/MenuItem;->getItemId()I

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eq v0, v2, :cond_2

    const/4 v3, 0x2

    if-eq v0, v3, :cond_0

    return v1

    :cond_0
    const-string v0, "RunInBG"

    .line 1273
    invoke-virtual {p0, v0, v1}, Landroid/app/TabActivity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    .line 1275
    invoke-interface {p0, v0, v1}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v3

    const-string v4, "YGPS/Background"

    if-eqz v3, :cond_1

    const v3, 0x7f08002c

    .line 1276
    invoke-interface {p1, v3}, Landroid/view/MenuItem;->setTitle(I)Landroid/view/MenuItem;

    .line 1277
    invoke-interface {p0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p0, v0, v1}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    .line 1278
    invoke-interface {p0}, Landroid/content/SharedPreferences$Editor;->commit()Z

    const-string p0, "now should *not* be in bg."

    .line 1279
    invoke-static {v4, p0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    :cond_1
    const v1, 0x7f08002b

    .line 1281
    invoke-interface {p1, v1}, Landroid/view/MenuItem;->setTitle(I)Landroid/view/MenuItem;

    .line 1282
    invoke-interface {p0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p0, v0, v2}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    .line 1283
    invoke-interface {p0}, Landroid/content/SharedPreferences$Editor;->commit()Z

    const-string p0, "now should be in bg."

    .line 1284
    invoke-static {v4, p0}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return v2

    .line 1260
    :cond_2
    iget-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mShowLoc:Z

    if-eqz v0, :cond_4

    .line 1261
    iput-boolean v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mShowLoc:Z

    .line 1262
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mPrompt:Landroid/widget/Toast;

    if-eqz p0, :cond_3

    .line 1263
    invoke-virtual {p0}, Landroid/widget/Toast;->cancel()V

    :cond_3
    const p0, 0x7f08002d

    .line 1265
    invoke-interface {p1, p0}, Landroid/view/MenuItem;->setTitle(I)Landroid/view/MenuItem;

    goto :goto_1

    .line 1267
    :cond_4
    iput-boolean v2, p0, Lcom/mediatek/ygps/YgpsActivity;->mShowLoc:Z

    const p0, 0x7f08002a

    .line 1268
    invoke-interface {p1, p0}, Landroid/view/MenuItem;->setTitle(I)Landroid/view/MenuItem;

    :goto_1
    return v2
.end method

.method protected onPause()V
    .locals 2

    .line 1321
    invoke-super {p0}, Landroid/app/TabActivity;->onPause()V

    const-string v0, "YGPS/Mainview"

    const-string v1, "Enter onPause function"

    .line 1322
    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 1323
    iget-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsRunInBg:Z

    if-nez v0, :cond_0

    .line 1324
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->stopGnssComponent()V

    .line 1325
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->removeNmeaParser()V

    :cond_0
    return-void
.end method

.method public onRequestPermissionsResult(I[Ljava/lang/String;[I)V
    .locals 2

    .line 2127
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onRequestPermissionsResult(), requestCode = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "YGPS/Mainview"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz p3, :cond_3

    .line 2128
    array-length v0, p3

    if-gtz v0, :cond_0

    goto :goto_0

    .line 2131
    :cond_0
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mPermissionManager:Lcom/mediatek/ygps/PermissionManager;

    invoke-virtual {v0}, Lcom/mediatek/ygps/PermissionManager;->getLocationLaunchPermissionRequestCode()I

    move-result v0

    if-ne v0, p1, :cond_2

    .line 2132
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity;->mPermissionManager:Lcom/mediatek/ygps/PermissionManager;

    invoke-virtual {p1, p2, p3}, Lcom/mediatek/ygps/PermissionManager;->isLocationLaunchPermissionsResultReady([Ljava/lang/String;[I)Z

    move-result p1

    const/4 p2, 0x1

    if-eqz p1, :cond_1

    const-string p1, "mPermissionManager: isLocationLaunchPermissionsResultReady"

    .line 2134
    invoke-static {v1, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 2135
    iput-boolean p2, p0, Lcom/mediatek/ygps/YgpsActivity;->mPermissionGranted:Z

    .line 2136
    invoke-direct {p0, p2}, Lcom/mediatek/ygps/YgpsActivity;->startGnssComponent(Z)V

    goto :goto_0

    :cond_1
    const p1, 0x7f080008

    .line 2139
    invoke-static {p0, p1, p2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object p1

    .line 2140
    invoke-virtual {p1}, Landroid/widget/Toast;->show()V

    .line 2141
    invoke-virtual {p0}, Landroid/app/TabActivity;->finish()V

    goto :goto_0

    .line 2144
    :cond_2
    invoke-super {p0, p1, p2, p3}, Landroid/app/TabActivity;->onRequestPermissionsResult(I[Ljava/lang/String;[I)V

    :cond_3
    :goto_0
    return-void
.end method

.method public onResponse(Ljava/lang/String;)V
    .locals 2

    .line 1803
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Enter getResponse: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "YGPS/Mainview"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz p1, :cond_3

    .line 1804
    invoke-virtual {p1}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_1

    .line 1807
    :cond_0
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mHandler:Landroid/os/Handler;

    const/16 v1, 0x3e9

    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    const-string v1, "$PMTK705"

    .line 1808
    invoke-virtual {p1, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    const/4 v1, 0x2

    .line 1809
    iput v1, v0, Landroid/os/Message;->arg1:I

    goto :goto_0

    :cond_1
    const-string v1, "PMTK001"

    .line 1810
    invoke-virtual {p1, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2

    const/4 v1, 0x1

    .line 1811
    iput v1, v0, Landroid/os/Message;->arg1:I

    goto :goto_0

    :cond_2
    const/16 v1, 0x44f

    .line 1813
    iput v1, v0, Landroid/os/Message;->arg1:I

    .line 1815
    :goto_0
    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 1816
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mHandler:Landroid/os/Handler;

    invoke-virtual {p0, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    :cond_3
    :goto_1
    return-void
.end method

.method protected onRestart()V
    .locals 2

    .line 1421
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onRestart and in BG:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsRunInBg:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "YGPS/Background"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1423
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mYgpsWakeLock:Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;

    invoke-virtual {v0, p0}, Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;->acquireScreenWakeLock(Landroid/content/Context;)V

    .line 1424
    iget-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsRunInBg:Z

    if-nez v0, :cond_0

    .line 1425
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mYgpsWakeLock:Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;

    invoke-virtual {v0, p0}, Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;->acquireCpuWakeLock(Landroid/content/Context;)V

    .line 1428
    :cond_0
    invoke-super {p0}, Landroid/app/TabActivity;->onRestart()V

    return-void
.end method

.method protected onResume()V
    .locals 2

    .line 1331
    invoke-super {p0}, Landroid/app/TabActivity;->onResume()V

    const-string v0, "YGPS/Mainview"

    const-string v1, "Enter onResume function"

    .line 1332
    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 1333
    iget-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsRunInBg:Z

    if-nez v0, :cond_1

    const/4 v0, 0x0

    .line 1334
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mFirstFix:Z

    .line 1335
    iget-boolean v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mPermissionGranted:Z

    if-eqz v1, :cond_0

    .line 1336
    invoke-direct {p0, v0}, Lcom/mediatek/ygps/YgpsActivity;->startGnssComponent(Z)V

    :cond_0
    const v0, 0x7f080018

    .line 1338
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->getString(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mStatus:Ljava/lang/String;

    .line 1339
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mNmeaParser:Lcom/mediatek/ygps/NmeaParser;

    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mNmeaUpdateListener:Lcom/mediatek/ygps/NmeaParser$NmeaUpdateViewListener;

    invoke-virtual {v0, v1}, Lcom/mediatek/ygps/NmeaParser;->addSVUpdateListener(Lcom/mediatek/ygps/NmeaParser$NmeaUpdateViewListener;)V

    :cond_1
    const v0, 0x7f050073

    .line 1341
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    .line 1342
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mProvider:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1343
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mTvStatus:Landroid/widget/TextView;

    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mStatus:Ljava/lang/String;

    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method protected onStart()V
    .locals 3

    .line 1394
    invoke-super {p0}, Landroid/app/TabActivity;->onStart()V

    .line 1395
    iget-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsRunInBg:Z

    if-eqz v0, :cond_0

    .line 1396
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBgServiceIntent:Landroid/content/Intent;

    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mBgServiceConnection:Landroid/content/ServiceConnection;

    const/4 v2, 0x1

    invoke-virtual {p0, v0, v1, v2}, Landroid/app/TabActivity;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    :cond_0
    return-void
.end method

.method protected onStop()V
    .locals 2

    .line 1402
    invoke-super {p0}, Landroid/app/TabActivity;->onStop()V

    .line 1403
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onstop and in BG: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsRunInBg:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "YGPS/Background"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1404
    iget-boolean v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mIsRunInBg:Z

    if-nez v0, :cond_0

    .line 1405
    invoke-direct {p0}, Lcom/mediatek/ygps/YgpsActivity;->forceStopGpsAutoTest()V

    .line 1406
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mYgpsWakeLock:Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;

    invoke-virtual {v0}, Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;->releaseCpuWakeLock()V

    goto :goto_0

    .line 1408
    :cond_0
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBgService:Lcom/mediatek/ygps/YgpsService;

    if-eqz v0, :cond_1

    .line 1409
    const-class v1, Lcom/mediatek/ygps/YgpsActivity;

    invoke-virtual {v0, v1}, Lcom/mediatek/ygps/YgpsService;->requestForeground(Ljava/lang/Class;)V

    .line 1411
    :cond_1
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mBgServiceConnection:Landroid/content/ServiceConnection;

    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->unbindService(Landroid/content/ServiceConnection;)V

    .line 1413
    :goto_0
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity;->mYgpsWakeLock:Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;

    invoke-virtual {v0}, Lcom/mediatek/ygps/YgpsActivity$YgpsWakeLock;->releaseScreenWakeLock()V

    .line 1414
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity;->mPrompt:Landroid/widget/Toast;

    if-eqz p0, :cond_2

    .line 1415
    invoke-virtual {p0}, Landroid/widget/Toast;->cancel()V

    :cond_2
    return-void
.end method
