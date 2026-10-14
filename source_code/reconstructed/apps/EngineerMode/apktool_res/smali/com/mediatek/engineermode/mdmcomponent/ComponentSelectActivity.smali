.class public Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;
.super Landroid/app/Activity;
.source "ComponentSelectActivity.java"

# interfaces
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;,
        Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$DemoHandler;,
        Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$InputDialogOnClickListener;,
        Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$Sortbyroll;
    }
.end annotation


# static fields
.field private static final CHECK_INFOMATION_ID:I = 0x1

.field private static final COMPONENT_RSRPSINR_CONFIG_SHAREPRE:Ljava/lang/String; = "telephony_rsrpsinr_config_settings"

.field private static final DIALOG_MDM_ERROR:I = 0x2

.field private static final DIALOG_WAIT_INIT:I = 0x0

.field private static final DIALOG_WAIT_SUBSCRIB:I = 0x1

.field private static final KEY_SELECTED:Ljava/lang/String; = "selected"

.field private static final LOADING_DONE:I = 0x1

.field private static final MDM_ERROR:I = 0x4

.field private static final MEDIUMWEAK_POINT1_X_DEFAULT:I = -0x8c

.field private static final MEDIUMWEAK_POINT1_Y_DEFAULT:I = 0xa

.field private static final MEDIUMWEAK_POINT2_X_DEFAULT:I = -0x5a

.field private static final MEDIUMWEAK_POINT2_Y_DEFAULT:I = 0xa

.field private static final MEDIUMWEAK_POINT3_X_DEFAULT:I = -0x5a

.field private static final MEDIUMWEAK_POINT3_Y_DEFAULT:I = -0x14

.field private static final MSG_MDM_DISABLE:I = 0x2

.field private static final MSG_MDM_LOADING:I = 0x0

.field private static final MSG_MDM_SUBSCRIBE:I = 0x1

.field public static final MSG_UPDATE_UI_URC_EM:I = 0x3

.field public static final MSG_UPDATE_UI_URC_ICD:I = 0x1

.field private static final PREF_FILE:Ljava/lang/String; = "pref_file"

.field private static final SELECT_ALL_ID:I = 0x2

.field private static final SELECT_NONE_ID:I = 0x3

.field private static final SERVICE_NAME:Ljava/lang/String; = "md_monitor"

.field private static final STRONG_POINT1_X_DEFAULT:I = -0x50

.field private static final STRONG_POINT1_Y_DEFAULT:I = 0x1e

.field private static final STRONG_POINT2_X_DEFAULT:I = -0x50

.field private static final STRONG_POINT2_Y_DEFAULT:I = 0x14

.field private static final STRONG_POINT3_X_DEFAULT:I = -0x1e

.field private static final STRONG_POINT3_Y_DEFAULT:I = 0x14

.field private static final SUBSCRIBE_DONE:I = 0x2

.field private static final TAG:Ljava/lang/String; = "EmInfo/ComponentSelectActivity"

.field private static final UPDATE_INTERVAL:I = 0x320

.field private static final UPDATE_UI:I = 0x3

.field private static final WAIT_TIMEOUT:I = 0xbb8

.field private static final WEAK_POINT1_X_DEFAULT:I = -0x8c

.field private static final WEAK_POINT1_Y_DEFAULT:I = 0x5

.field private static final WEAK_POINT2_X_DEFAULT:I = -0x64

.field private static final WEAK_POINT2_Y_DEFAULT:I = 0x5

.field private static final WEAK_POINT3_X_DEFAULT:I = -0x64

.field private static final WEAK_POINT3_Y_DEFAULT:I = -0x14

.field private static initDone:Z

.field private static k:I

.field public static mAutoRecordFlag:Ljava/lang/String;

.field public static mAutoRecordFlagItem:Ljava/lang/String;

.field public static mAutoRecordItem:[Ljava/lang/String;

.field public static mCheckedEmTypes:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end field

.field public static mCheckedIcdEventTypes:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end field

.field public static mCheckedIcdRecordTypes:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end field

.field private static mMediumWeakPoint1X:I

.field private static mMediumWeakPoint1Y:I

.field private static mMediumWeakPoint2X:I

.field private static mMediumWeakPoint2Y:I

.field private static mMediumWeakPoint3X:I

.field private static mMediumWeakPoint3Y:I

.field public static mModemType:I

.field public static mSelected_show_both_sim:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public static mSimType:I

.field private static mStrongPoint1X:I

.field private static mStrongPoint1Y:I

.field private static mStrongPoint2X:I

.field private static mStrongPoint2Y:I

.field private static mStrongPoint3X:I

.field private static mStrongPoint3Y:I

.field private static mWeakPoint1X:I

.field private static mWeakPoint1Y:I

.field private static mWeakPoint2X:I

.field private static mWeakPoint2Y:I

.field private static mWeakPoint3X:I

.field private static mWeakPoint3Y:I

.field public static m_cmdProxy:Lcom/mediatek/mdml/MonitorCmdProxy;

.field private static m_plainDataDecoder:Lcom/mediatek/mdml/PlainDataDecoder;

.field public static m_sid:J


# instance fields
.field private allComponents:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;",
            ">;"
        }
    .end annotation
.end field

.field components:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mCheckBoxes:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/widget/CheckBox;",
            ">;"
        }
    .end annotation
.end field

.field private mHandler:Landroid/os/Handler;

.field private mPref:Landroid/content/SharedPreferences;

.field private mProgressDialog:Landroid/app/ProgressDialog;

.field private mProgressDialog1:Landroid/app/ProgressDialog;

.field private mSelectSim:I

.field private mSelected:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field m_trapReceiver:Lcom/mediatek/mdml/MonitorTrapReceiver;


# direct methods
.method static constructor <clinit>()V
    .locals 7

    .line 139
    const/4 v0, 0x0

    sput-boolean v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->initDone:Z

    .line 141
    const-string v0, "0"

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mAutoRecordFlag:Ljava/lang/String;

    .line 142
    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mAutoRecordFlagItem:Ljava/lang/String;

    .line 143
    const-string v1, "Pcell and Scell basic info"

    const-string v2, "Handover (Intra-LTE)"

    const-string v3, "LTE ERRC OOS Event Info"

    const-string v4, "LTE ERRC ELF Event Info"

    const-string v5, "LTE EMAC Rach Failure Info"

    const-string v6, "MD Feature Detection"

    filled-new-array/range {v1 .. v6}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mAutoRecordItem:[Ljava/lang/String;

    .line 152
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedEmTypes:Ljava/util/ArrayList;

    .line 153
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedIcdRecordTypes:Ljava/util/ArrayList;

    .line 154
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedIcdEventTypes:Ljava/util/ArrayList;

    .line 155
    const/4 v0, 0x1

    sput v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->k:I

    .line 156
    const/16 v0, -0x50

    sput v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mStrongPoint1X:I

    .line 157
    const/16 v1, 0x1e

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mStrongPoint1Y:I

    .line 158
    sput v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mStrongPoint2X:I

    .line 159
    const/16 v0, 0x14

    sput v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mStrongPoint2Y:I

    .line 160
    const/16 v1, -0x1e

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mStrongPoint3X:I

    .line 161
    sput v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mStrongPoint3Y:I

    .line 162
    const/16 v0, -0x8c

    sput v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mMediumWeakPoint1X:I

    .line 163
    const/16 v1, 0xa

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mMediumWeakPoint1Y:I

    .line 164
    const/16 v2, -0x5a

    sput v2, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mMediumWeakPoint2X:I

    .line 165
    sput v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mMediumWeakPoint2Y:I

    .line 166
    sput v2, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mMediumWeakPoint3X:I

    .line 167
    const/16 v1, -0x14

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mMediumWeakPoint3Y:I

    .line 168
    sput v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mWeakPoint1X:I

    .line 169
    const/4 v0, 0x5

    sput v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mWeakPoint1Y:I

    .line 170
    const/16 v2, -0x64

    sput v2, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mWeakPoint2X:I

    .line 171
    sput v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mWeakPoint2Y:I

    .line 172
    sput v2, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mWeakPoint3X:I

    .line 173
    sput v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mWeakPoint3Y:I

    .line 174
    const/4 v0, 0x0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->m_plainDataDecoder:Lcom/mediatek/mdml/PlainDataDecoder;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 93
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 176
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->components:Ljava/util/ArrayList;

    .line 177
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mSelectSim:I

    .line 184
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mHandler:Landroid/os/Handler;

    return-void
.end method

.method private InitDecoder(Landroid/content/Context;)Z
    .locals 2
    .param p1, "context"    # Landroid/content/Context;

    .line 465
    invoke-static {p1}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getDecoder(Landroid/content/Context;)Lcom/mediatek/mdml/PlainDataDecoder;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->m_plainDataDecoder:Lcom/mediatek/mdml/PlainDataDecoder;

    .line 466
    const-string v1, "EmInfo/ComponentSelectActivity"

    if-nez v0, :cond_0

    .line 467
    const-string v0, "InitDecoder occurs error!"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 468
    const/4 v0, 0x0

    return v0

    .line 470
    :cond_0
    const-string v0, "InitDecoder success!"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 471
    const/4 v0, 0x1

    return v0
.end method

.method private InitMDML(Landroid/content/Context;)Z
    .locals 6
    .param p1, "context"    # Landroid/content/Context;

    .line 348
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getCmdProxy()Lcom/mediatek/mdml/MonitorCmdProxy;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->m_cmdProxy:Lcom/mediatek/mdml/MonitorCmdProxy;

    .line 349
    invoke-virtual {v0}, Lcom/mediatek/mdml/MonitorCmdProxy;->onCreateSession()J

    move-result-wide v0

    sput-wide v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->m_sid:J

    .line 350
    new-instance v2, Lcom/mediatek/mdml/MonitorTrapReceiver;

    const-string v3, "demo_receiver"

    invoke-direct {v2, v0, v1, v3}, Lcom/mediatek/mdml/MonitorTrapReceiver;-><init>(JLjava/lang/String;)V

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->m_trapReceiver:Lcom/mediatek/mdml/MonitorTrapReceiver;

    .line 351
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->m_cmdProxy:Lcom/mediatek/mdml/MonitorCmdProxy;

    const-string v1, "EmInfo/ComponentSelectActivity"

    if-eqz v0, :cond_0

    if-eqz v2, :cond_0

    .line 352
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$DemoHandler;

    const/4 v4, 0x0

    invoke-direct {v0, p0, v4}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$DemoHandler;-><init>(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$1;)V

    invoke-virtual {v2, v0}, Lcom/mediatek/mdml/MonitorTrapReceiver;->SetTrapHandler(Lcom/mediatek/mdml/TrapHandlerInterface;)V

    .line 353
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->m_cmdProxy:Lcom/mediatek/mdml/MonitorCmdProxy;

    sget-wide v4, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->m_sid:J

    invoke-virtual {v0, v4, v5, v3}, Lcom/mediatek/mdml/MonitorCmdProxy;->onSetTrapReceiver(JLjava/lang/String;)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 354
    const-string v0, "InitMDML success!"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 355
    const/4 v0, 0x1

    return v0

    .line 357
    :cond_0
    const-string v0, "InitMDML occurs error!"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 358
    const/4 v0, 0x0

    return v0
.end method

.method private InitUI()V
    .locals 14

    .line 372
    const v0, 0x7f080034

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->setContentView(I)V

    .line 373
    const v0, 0x7f060533

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    .line 374
    .local v0, "list":Landroid/view/ViewGroup;
    new-instance v1, Landroid/widget/LinearLayout$LayoutParams;

    const/4 v2, -0x1

    const/4 v3, -0x2

    invoke-direct {v1, v2, v3}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 376
    .local v1, "param":Landroid/widget/LinearLayout$LayoutParams;
    const/4 v4, 0x0

    const/4 v5, 0x5

    invoke-virtual {v1, v4, v5, v4, v5}, Landroid/widget/LinearLayout$LayoutParams;->setMargins(IIII)V

    .line 377
    new-instance v6, Landroid/widget/LinearLayout$LayoutParams;

    invoke-direct {v6, v2, v3}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    move-object v2, v6

    .line 379
    .local v2, "param2":Landroid/widget/LinearLayout$LayoutParams;
    const/16 v3, 0x1e

    invoke-virtual {v2, v3, v5, v4, v5}, Landroid/widget/LinearLayout$LayoutParams;->setMargins(IIII)V

    .line 381
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getIntent()Landroid/content/Intent;

    move-result-object v3

    .line 382
    .local v3, "intent":Landroid/content/Intent;
    const-string v5, "mSimType"

    invoke-virtual {v3, v5, v4}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v5

    sput v5, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mSimType:I

    .line 383
    const-string v5, "mModemType"

    const/4 v6, 0x1

    invoke-virtual {v3, v5, v6}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v5

    sput v5, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mModemType:I

    .line 384
    sget v5, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mSimType:I

    iput v5, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mSelectSim:I

    .line 385
    const-string v5, "pref_file"

    invoke-virtual {p0, v5, v4}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v4

    iput-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mPref:Landroid/content/SharedPreferences;

    .line 386
    const-string v5, "selected"

    const/4 v6, 0x0

    invoke-interface {v4, v5, v6}, Landroid/content/SharedPreferences;->getStringSet(Ljava/lang/String;Ljava/util/Set;)Ljava/util/Set;

    move-result-object v4

    iput-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mSelected:Ljava/util/Set;

    .line 387
    if-nez v4, :cond_0

    .line 388
    new-instance v4, Ljava/util/HashSet;

    invoke-direct {v4}, Ljava/util/HashSet;-><init>()V

    iput-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mSelected:Ljava/util/Set;

    .line 391
    :cond_0
    sget-object v4, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mSelected_show_both_sim:Ljava/util/Set;

    if-nez v4, :cond_1

    .line 392
    new-instance v4, Ljava/util/HashSet;

    invoke-direct {v4}, Ljava/util/HashSet;-><init>()V

    sput-object v4, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mSelected_show_both_sim:Ljava/util/Set;

    .line 393
    invoke-interface {v4}, Ljava/util/Set;->clear()V

    .line 395
    :cond_1
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->isEngLoad()Z

    move-result v4

    const-string v5, "0"

    if-nez v4, :cond_2

    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->isUserDebugLoad()Z

    move-result v4

    if-eqz v4, :cond_3

    .line 396
    :cond_2
    const-string v4, "persist.radio.record.auto"

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    sput-object v4, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mAutoRecordFlag:Ljava/lang/String;

    .line 397
    const-string v4, "persist.radio.record.auto.item"

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    sput-object v4, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mAutoRecordFlagItem:Ljava/lang/String;

    .line 399
    sget-object v4, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mSelected_show_both_sim:Ljava/util/Set;

    invoke-interface {v4}, Ljava/util/Set;->clear()V

    .line 401
    :cond_3
    sget-object v4, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mAutoRecordFlag:Ljava/lang/String;

    const-string v6, "1"

    invoke-virtual {v6, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_8

    .line 402
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mSelected:Ljava/util/Set;

    invoke-interface {v4}, Ljava/util/Set;->clear()V

    .line 403
    sget-object v4, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mAutoRecordFlagItem:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_5

    .line 404
    const/4 v4, 0x0

    .local v4, "i":I
    :goto_0
    sget-object v5, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mAutoRecordItem:[Ljava/lang/String;

    array-length v6, v5

    if-ge v4, v6, :cond_4

    .line 405
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mSelected:Ljava/util/Set;

    aget-object v5, v5, v4

    invoke-interface {v6, v5}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    .line 404
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .end local v4    # "i":I
    :cond_4
    goto :goto_2

    .line 408
    :cond_5
    sget-object v4, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mAutoRecordFlagItem:Ljava/lang/String;

    const-string v5, ","

    invoke-virtual {v4, v5}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v4

    .line 409
    .local v4, "autoRecordFlagItem":[Ljava/lang/String;
    const/4 v5, 0x0

    .local v5, "i":I
    :goto_1
    if-eqz v4, :cond_7

    array-length v7, v4

    if-ge v5, v7, :cond_7

    .line 410
    aget-object v7, v4, v5

    invoke-virtual {v7, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_6

    .line 411
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mSelected:Ljava/util/Set;

    sget-object v8, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mAutoRecordItem:[Ljava/lang/String;

    aget-object v8, v8, v5

    invoke-interface {v7, v8}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    .line 409
    :cond_6
    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    .line 415
    .end local v4    # "autoRecordFlagItem":[Ljava/lang/String;
    .end local v5    # "i":I
    :cond_7
    :goto_2
    sget-object v4, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mSelected_show_both_sim:Ljava/util/Set;

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mSelected:Ljava/util/Set;

    invoke-interface {v4, v5}, Ljava/util/Set;->addAll(Ljava/util/Collection;)Z

    .line 416
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "mSelected = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mSelected:Ljava/util/Set;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, "EmInfo/ComponentSelectActivity"

    invoke-static {v5, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 418
    :cond_8
    sget-object v4, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mSelected_show_both_sim:Ljava/util/Set;

    const-string v5, "FT Network Info"

    invoke-interface {v4, v5}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    .line 420
    invoke-static {p0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getComponents(Landroid/app/Activity;)Ljava/util/List;

    move-result-object v4

    iput-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->allComponents:Ljava/util/List;

    .line 421
    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v5

    new-array v5, v5, [Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;

    invoke-interface {v4, v5}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v4

    check-cast v4, [Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;

    .line 422
    .local v4, "tmp":[Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;
    invoke-static {v4}, Ljava/util/Arrays;->sort([Ljava/lang/Object;)V

    .line 423
    invoke-static {v4}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v5

    iput-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->allComponents:Ljava/util/List;

    .line 425
    new-instance v5, Ljava/util/ArrayList;

    invoke-direct {v5}, Ljava/util/ArrayList;-><init>()V

    .line 426
    .local v5, "groups":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->allComponents:Ljava/util/List;

    invoke-interface {v6}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v6

    :goto_3
    invoke-interface {v6}, Ljava/util/Iterator;->hasNext()Z

    move-result v7

    if-eqz v7, :cond_a

    invoke-interface {v6}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;

    .line 427
    .local v7, "c":Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;
    invoke-virtual {v7}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getGroup()Ljava/lang/String;

    move-result-object v8

    invoke-interface {v5, v8}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v8

    if-nez v8, :cond_9

    .line 428
    invoke-virtual {v7}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getGroup()Ljava/lang/String;

    move-result-object v8

    invoke-interface {v5, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 430
    .end local v7    # "c":Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;
    :cond_9
    goto :goto_3

    .line 431
    :cond_a
    new-instance v6, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$Sortbyroll;

    invoke-direct {v6, p0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$Sortbyroll;-><init>(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;)V

    invoke-static {v5, v6}, Ljava/util/Collections;->sort(Ljava/util/List;Ljava/util/Comparator;)V

    .line 433
    new-instance v6, Ljava/util/ArrayList;

    invoke-direct {v6}, Ljava/util/ArrayList;-><init>()V

    iput-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckBoxes:Ljava/util/List;

    .line 434
    invoke-interface {v5}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v6

    :goto_4
    invoke-interface {v6}, Ljava/util/Iterator;->hasNext()Z

    move-result v7

    if-eqz v7, :cond_f

    invoke-interface {v6}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    .line 435
    .local v7, "g":Ljava/lang/String;
    new-instance v8, Landroid/widget/CheckBox;

    invoke-direct {v8, p0}, Landroid/widget/CheckBox;-><init>(Landroid/content/Context;)V

    .line 436
    .local v8, "checkBox":Landroid/widget/CheckBox;
    invoke-virtual {v8, v7}, Landroid/widget/CheckBox;->setText(Ljava/lang/CharSequence;)V

    .line 437
    new-instance v9, Ljava/util/ArrayList;

    invoke-direct {v9}, Ljava/util/ArrayList;-><init>()V

    .line 438
    .local v9, "groupComponents":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/widget/CheckBox;>;"
    invoke-virtual {v8, v9}, Landroid/widget/CheckBox;->setTag(Ljava/lang/Object;)V

    .line 439
    invoke-virtual {v8, p0}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 440
    iget-object v10, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mSelected:Ljava/util/Set;

    invoke-interface {v10, v7}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v10

    invoke-virtual {v8, v10}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 441
    invoke-virtual {v0, v8, v1}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 442
    iget-object v10, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckBoxes:Ljava/util/List;

    invoke-interface {v10, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 444
    iget-object v10, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->allComponents:Ljava/util/List;

    invoke-interface {v10}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v10

    :goto_5
    invoke-interface {v10}, Ljava/util/Iterator;->hasNext()Z

    move-result v11

    if-eqz v11, :cond_e

    invoke-interface {v10}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;

    .line 445
    .local v11, "c":Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;
    sget v12, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mModemType:I

    const/4 v13, 0x2

    if-eq v12, v13, :cond_b

    const/4 v13, 0x3

    if-ne v12, v13, :cond_c

    .line 447
    :cond_b
    invoke-virtual {v11}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->supportMultiSIM()Z

    move-result v12

    if-nez v12, :cond_c

    .line 448
    goto :goto_5

    .line 450
    :cond_c
    invoke-virtual {v11}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getGroup()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v12, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v12

    if-eqz v12, :cond_d

    .line 451
    new-instance v12, Landroid/widget/CheckBox;

    invoke-direct {v12, p0}, Landroid/widget/CheckBox;-><init>(Landroid/content/Context;)V

    move-object v8, v12

    .line 452
    invoke-virtual {v11}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getName()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v8, v12}, Landroid/widget/CheckBox;->setText(Ljava/lang/CharSequence;)V

    .line 453
    invoke-virtual {v8, v11}, Landroid/widget/CheckBox;->setTag(Ljava/lang/Object;)V

    .line 454
    invoke-virtual {v8, p0}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 455
    iget-object v12, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mSelected:Ljava/util/Set;

    invoke-virtual {v11}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getName()Ljava/lang/String;

    move-result-object v13

    invoke-interface {v12, v13}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v12

    invoke-virtual {v8, v12}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 456
    invoke-virtual {v0, v8, v2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 457
    iget-object v12, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckBoxes:Ljava/util/List;

    invoke-interface {v12, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 458
    invoke-virtual {v9, v8}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 460
    .end local v11    # "c":Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;
    :cond_d
    goto :goto_5

    .line 461
    .end local v7    # "g":Ljava/lang/String;
    .end local v8    # "checkBox":Landroid/widget/CheckBox;
    .end local v9    # "groupComponents":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/widget/CheckBox;>;"
    :cond_e
    goto/16 :goto_4

    .line 462
    :cond_f
    return-void
.end method

.method private StartMDLService()Z
    .locals 6

    .line 327
    const-string v0, "EmInfo/ComponentSelectActivity"

    const-string v1, "before StartMDLService"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 328
    const-string v1, "md_monitor"

    invoke-static {v1}, Landroid/os/SystemService;->isRunning(Ljava/lang/String;)Z

    move-result v2

    .line 329
    .local v2, "isRunning":Z
    if-nez v2, :cond_0

    .line 330
    const-string v3, "start md_monitor prop"

    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 331
    const-string v3, "ctl.start"

    invoke-static {v3, v1}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 333
    :try_start_0
    sget-object v3, Landroid/os/SystemService$State;->RUNNING:Landroid/os/SystemService$State;

    const-wide/16 v4, 0xbb8

    .line 334
    invoke-static {v1, v3, v4, v5}, Landroid/os/SystemService;->waitForState(Ljava/lang/String;Landroid/os/SystemService$State;J)V
    :try_end_0
    .catch Ljava/util/concurrent/TimeoutException; {:try_start_0 .. :try_end_0} :catch_0

    .line 337
    goto :goto_0

    .line 335
    :catch_0
    move-exception v3

    .line 336
    .local v3, "e":Ljava/util/concurrent/TimeoutException;
    invoke-virtual {v3}, Ljava/util/concurrent/TimeoutException;->printStackTrace()V

    .line 338
    .end local v3    # "e":Ljava/util/concurrent/TimeoutException;
    :goto_0
    invoke-static {v1}, Landroid/os/SystemService;->isRunning(Ljava/lang/String;)Z

    move-result v2

    .line 339
    if-nez v2, :cond_0

    .line 340
    const-string v1, "start md_monitor failed time out"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 343
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "after StartMDLService isRunning:"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 344
    return v2
.end method

.method static synthetic access$002(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 93
    sput p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->k:I

    return p0
.end method

.method static synthetic access$008()I
    .locals 2

    .line 93
    sget v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->k:I

    add-int/lit8 v1, v0, 0x1

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->k:I

    return v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;)Landroid/app/ProgressDialog;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    .line 93
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mProgressDialog1:Landroid/app/ProgressDialog;

    return-object v0
.end method

.method static synthetic access$1000()I
    .locals 1

    .line 93
    sget v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mMediumWeakPoint1X:I

    return v0
.end method

.method static synthetic access$1002(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 93
    sput p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mMediumWeakPoint1X:I

    return p0
.end method

.method static synthetic access$1100()I
    .locals 1

    .line 93
    sget v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mMediumWeakPoint1Y:I

    return v0
.end method

.method static synthetic access$1102(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 93
    sput p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mMediumWeakPoint1Y:I

    return p0
.end method

.method static synthetic access$1200()I
    .locals 1

    .line 93
    sget v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mMediumWeakPoint2X:I

    return v0
.end method

.method static synthetic access$1202(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 93
    sput p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mMediumWeakPoint2X:I

    return p0
.end method

.method static synthetic access$1300()I
    .locals 1

    .line 93
    sget v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mMediumWeakPoint2Y:I

    return v0
.end method

.method static synthetic access$1302(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 93
    sput p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mMediumWeakPoint2Y:I

    return p0
.end method

.method static synthetic access$1400()I
    .locals 1

    .line 93
    sget v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mMediumWeakPoint3X:I

    return v0
.end method

.method static synthetic access$1402(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 93
    sput p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mMediumWeakPoint3X:I

    return p0
.end method

.method static synthetic access$1500()I
    .locals 1

    .line 93
    sget v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mMediumWeakPoint3Y:I

    return v0
.end method

.method static synthetic access$1502(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 93
    sput p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mMediumWeakPoint3Y:I

    return p0
.end method

.method static synthetic access$1600()I
    .locals 1

    .line 93
    sget v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mWeakPoint1X:I

    return v0
.end method

.method static synthetic access$1602(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 93
    sput p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mWeakPoint1X:I

    return p0
.end method

.method static synthetic access$1700()I
    .locals 1

    .line 93
    sget v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mWeakPoint1Y:I

    return v0
.end method

.method static synthetic access$1702(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 93
    sput p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mWeakPoint1Y:I

    return p0
.end method

.method static synthetic access$1800()I
    .locals 1

    .line 93
    sget v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mWeakPoint2X:I

    return v0
.end method

.method static synthetic access$1802(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 93
    sput p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mWeakPoint2X:I

    return p0
.end method

.method static synthetic access$1900()I
    .locals 1

    .line 93
    sget v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mWeakPoint2Y:I

    return v0
.end method

.method static synthetic access$1902(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 93
    sput p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mWeakPoint2Y:I

    return p0
.end method

.method static synthetic access$2000()I
    .locals 1

    .line 93
    sget v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mWeakPoint3X:I

    return v0
.end method

.method static synthetic access$2002(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 93
    sput p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mWeakPoint3X:I

    return p0
.end method

.method static synthetic access$2100()I
    .locals 1

    .line 93
    sget v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mWeakPoint3Y:I

    return v0
.end method

.method static synthetic access$2102(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 93
    sput p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mWeakPoint3Y:I

    return p0
.end method

.method static synthetic access$2200(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;IIIIIIIIIIIIIIIIII)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;
    .param p1, "x1"    # I
    .param p2, "x2"    # I
    .param p3, "x3"    # I
    .param p4, "x4"    # I
    .param p5, "x5"    # I
    .param p6, "x6"    # I
    .param p7, "x7"    # I
    .param p8, "x8"    # I
    .param p9, "x9"    # I
    .param p10, "x10"    # I
    .param p11, "x11"    # I
    .param p12, "x12"    # I
    .param p13, "x13"    # I
    .param p14, "x14"    # I
    .param p15, "x15"    # I
    .param p16, "x16"    # I
    .param p17, "x17"    # I
    .param p18, "x18"    # I

    .line 93
    invoke-direct/range {p0 .. p18}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->writeRsrpSinrSharedPreference(IIIIIIIIIIIIIIIIII)V

    return-void
.end method

.method static synthetic access$2300(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;[Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;
    .param p1, "x1"    # [Ljava/lang/String;

    .line 93
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->showSimSelectedDialog([Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$2400(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    .line 93
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->loadingMdmService()Z

    move-result v0

    return v0
.end method

.method static synthetic access$2500(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    .line 93
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$2602(Z)Z
    .locals 0
    .param p0, "x0"    # Z

    .line 93
    sput-boolean p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->initDone:Z

    return p0
.end method

.method static synthetic access$2700(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    .line 93
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->subscribeMdmMsg()Z

    move-result v0

    return v0
.end method

.method static synthetic access$2800(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    .line 93
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->disableTrap()Z

    move-result v0

    return v0
.end method

.method static synthetic access$302(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;
    .param p1, "x1"    # I

    .line 93
    iput p1, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mSelectSim:I

    return p1
.end method

.method static synthetic access$400()I
    .locals 1

    .line 93
    sget v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mStrongPoint1X:I

    return v0
.end method

.method static synthetic access$402(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 93
    sput p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mStrongPoint1X:I

    return p0
.end method

.method static synthetic access$500()I
    .locals 1

    .line 93
    sget v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mStrongPoint1Y:I

    return v0
.end method

.method static synthetic access$502(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 93
    sput p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mStrongPoint1Y:I

    return p0
.end method

.method static synthetic access$600()I
    .locals 1

    .line 93
    sget v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mStrongPoint2X:I

    return v0
.end method

.method static synthetic access$602(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 93
    sput p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mStrongPoint2X:I

    return p0
.end method

.method static synthetic access$700()I
    .locals 1

    .line 93
    sget v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mStrongPoint2Y:I

    return v0
.end method

.method static synthetic access$702(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 93
    sput p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mStrongPoint2Y:I

    return p0
.end method

.method static synthetic access$800()I
    .locals 1

    .line 93
    sget v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mStrongPoint3X:I

    return v0
.end method

.method static synthetic access$802(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 93
    sput p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mStrongPoint3X:I

    return p0
.end method

.method static synthetic access$900()I
    .locals 1

    .line 93
    sget v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mStrongPoint3Y:I

    return v0
.end method

.method static synthetic access$902(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 93
    sput p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mStrongPoint3Y:I

    return p0
.end method

.method public static checkMonitorAlive()Z
    .locals 2

    .line 222
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->m_cmdProxy:Lcom/mediatek/mdml/MonitorCmdProxy;

    if-nez v0, :cond_0

    sget-boolean v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->initDone:Z

    if-eqz v0, :cond_0

    .line 223
    const-string v0, "EmInfo/ComponentSelectActivity"

    const-string v1, "[checkMonitorAlive] dead!"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 224
    const/4 v0, 0x0

    return v0

    .line 226
    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method private disableTrap()Z
    .locals 7

    .line 1114
    const/4 v0, 0x1

    .line 1115
    .local v0, "ret":Z
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->checkMonitorAlive()Z

    move-result v1

    const/4 v2, 0x0

    const-string v3, "EmInfo/ComponentSelectActivity"

    if-nez v1, :cond_0

    .line 1116
    sput-boolean v2, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->initDone:Z

    .line 1117
    const-string v1, "[deleteTask] m_cmdProxy is null, md_monitor service is stopped!"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 1118
    const/4 v0, 0x0

    goto :goto_0

    .line 1120
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getCmdProxy()Lcom/mediatek/mdml/MonitorCmdProxy;

    move-result-object v1

    sget-wide v4, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->m_sid:J

    invoke-virtual {v1, v4, v5}, Lcom/mediatek/mdml/MonitorCmdProxy;->onDisableTrap(J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    move-result-object v1

    .line 1121
    .local v1, "resp":Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    sget-object v4, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_SUCCESS:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    if-eq v4, v1, :cond_1

    .line 1122
    const/4 v0, 0x0

    .line 1123
    const-string v4, "Disable Trap fail"

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1125
    :cond_1
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getCmdProxy()Lcom/mediatek/mdml/MonitorCmdProxy;

    move-result-object v4

    sget-wide v5, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->m_sid:J

    invoke-virtual {v4, v5, v6}, Lcom/mediatek/mdml/MonitorCmdProxy;->onCloseSession(J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    move-result-object v1

    .line 1126
    sget-object v4, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_SUCCESS:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    if-eq v4, v1, :cond_2

    .line 1127
    const/4 v0, 0x0

    .line 1128
    const-string v4, "Close Session fail"

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1131
    .end local v1    # "resp":Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    :cond_2
    :goto_0
    const-string v1, "ctl.stop"

    const-string v4, "md_monitor"

    invoke-static {v1, v4}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 1132
    const/4 v1, 0x0

    sput-object v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->m_cmdProxy:Lcom/mediatek/mdml/MonitorCmdProxy;

    .line 1133
    sput-boolean v2, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->initDone:Z

    .line 1134
    const-string v1, "Disable mdm monitor"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1135
    return v0
.end method

.method public static getCmdProxy()Lcom/mediatek/mdml/MonitorCmdProxy;
    .locals 3

    .line 230
    const/4 v0, 0x0

    .line 231
    .local v0, "i":I
    sget-object v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->m_cmdProxy:Lcom/mediatek/mdml/MonitorCmdProxy;

    if-nez v1, :cond_0

    .line 233
    :try_start_0
    new-instance v1, Lcom/mediatek/mdml/MonitorCmdProxy;

    invoke-static {}, Lcom/mediatek/engineermode/EmApplication;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/mediatek/mdml/MonitorCmdProxy;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->m_cmdProxy:Lcom/mediatek/mdml/MonitorCmdProxy;

    .line 234
    const-string v1, "EmInfo/ComponentSelectActivity"

    const-string v2, "m_cmdProxy is null, Create MonitorCmdProxy"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 237
    goto :goto_0

    .line 235
    :catch_0
    move-exception v1

    .line 236
    .local v1, "ex":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 239
    .end local v1    # "ex":Ljava/lang/Exception;
    :cond_0
    :goto_0
    sget-object v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->m_cmdProxy:Lcom/mediatek/mdml/MonitorCmdProxy;

    return-object v1
.end method

.method public static getDecoder(Landroid/content/Context;)Lcom/mediatek/mdml/PlainDataDecoder;
    .locals 1
    .param p0, "context"    # Landroid/content/Context;

    .line 243
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->m_plainDataDecoder:Lcom/mediatek/mdml/PlainDataDecoder;

    if-nez v0, :cond_0

    .line 245
    const/4 v0, 0x0

    :try_start_0
    invoke-static {v0, p0}, Lcom/mediatek/mdml/PlainDataDecoder;->getInstance(Ljava/lang/String;Landroid/content/Context;)Lcom/mediatek/mdml/PlainDataDecoder;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->m_plainDataDecoder:Lcom/mediatek/mdml/PlainDataDecoder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 248
    goto :goto_0

    .line 246
    :catch_0
    move-exception v0

    .line 247
    .local v0, "ex":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 250
    .end local v0    # "ex":Ljava/lang/Exception;
    :cond_0
    :goto_0
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->m_plainDataDecoder:Lcom/mediatek/mdml/PlainDataDecoder;

    return-object v0
.end method

.method private isRecordType(J)Z
    .locals 2
    .param p1, "value"    # J

    .line 994
    const-wide/16 v0, 0x2000

    cmp-long v0, p1, v0

    if-ltz v0, :cond_0

    const-wide/16 v0, 0x2080

    cmp-long v0, p1, v0

    if-ltz v0, :cond_2

    :cond_0
    const-wide/16 v0, 0x7000

    cmp-long v0, p1, v0

    if-ltz v0, :cond_1

    const-wide/16 v0, 0x7280

    cmp-long v0, p1, v0

    if-ltz v0, :cond_2

    :cond_1
    const-wide/32 v0, 0x9000

    cmp-long v0, p1, v0

    if-ltz v0, :cond_3

    const-wide/32 v0, 0x9280

    cmp-long v0, p1, v0

    if-gez v0, :cond_3

    .line 997
    :cond_2
    const/4 v0, 0x1

    return v0

    .line 999
    :cond_3
    const/4 v0, 0x0

    return v0
.end method

.method private loadingMdmService()Z
    .locals 3

    .line 952
    const-string v0, "EmInfo/ComponentSelectActivity"

    const-string v1, "before loadingMdmService"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 953
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->StartMDLService()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 954
    invoke-direct {p0, p0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->InitMDML(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 955
    invoke-direct {p0, p0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->InitDecoder(Landroid/content/Context;)Z

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    .line 960
    :cond_0
    const-string v1, "after loadingMdmService"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 961
    const/4 v0, 0x1

    return v0

    .line 956
    :cond_1
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mHandler:Landroid/os/Handler;

    const/4 v2, 0x4

    invoke-virtual {v1, v2}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 957
    const-string v1, "loadingMdmService failed"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 958
    const/4 v0, 0x0

    return v0
.end method

.method private showMultiInputDlg(Ljava/lang/CharSequence;Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$InputDialogOnClickListener;)V
    .locals 88
    .param p1, "title"    # Ljava/lang/CharSequence;
    .param p2, "listener"    # Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$InputDialogOnClickListener;

    move-object/from16 v0, p0

    move-object/from16 v23, p0

    move-object/from16 v24, p2

    move-object/from16 v1, p0

    move-object/from16 v2, p2

    .line 578
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getLayoutInflater()Landroid/view/LayoutInflater;

    move-result-object v3

    const v4, 0x7f080052

    const/4 v5, 0x0

    invoke-virtual {v3, v4, v5}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v3

    .line 579
    .local v3, "inputView":Landroid/view/View;
    const v4, 0x7f060372

    invoke-virtual {v3, v4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v4

    move-object v15, v4

    check-cast v15, Landroid/widget/Button;

    .line 580
    .local v15, "okBtn":Landroid/widget/Button;
    const v4, 0x7f060371

    invoke-virtual {v3, v4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v4

    move-object v14, v4

    check-cast v14, Landroid/widget/Button;

    .line 581
    .local v14, "cancelBtn":Landroid/widget/Button;
    const v4, 0x7f0606cc

    invoke-virtual {v3, v4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v4

    move-object v13, v4

    check-cast v13, Landroid/widget/EditText;

    .local v13, "strongPoint1XEdit":Landroid/widget/EditText;
    move-object/from16 v26, v13

    move-object v4, v13

    .line 583
    const v5, 0x7f0606cd

    invoke-virtual {v3, v5}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v5

    move-object v12, v5

    check-cast v12, Landroid/widget/EditText;

    .local v12, "strongPoint1YEdit":Landroid/widget/EditText;
    move-object/from16 v27, v12

    move-object v5, v12

    .line 585
    const v6, 0x7f0606ce

    invoke-virtual {v3, v6}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v6

    move-object v11, v6

    check-cast v11, Landroid/widget/EditText;

    .local v11, "strongPoint2XEdit":Landroid/widget/EditText;
    move-object/from16 v28, v11

    move-object v6, v11

    .line 587
    const v7, 0x7f0606cf

    invoke-virtual {v3, v7}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v7

    move-object v10, v7

    check-cast v10, Landroid/widget/EditText;

    .local v10, "strongPoint2YEdit":Landroid/widget/EditText;
    move-object/from16 v29, v10

    move-object v7, v10

    .line 589
    const v8, 0x7f0606d0

    invoke-virtual {v3, v8}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v8

    move-object v9, v8

    check-cast v9, Landroid/widget/EditText;

    .local v9, "strongPoint3XEdit":Landroid/widget/EditText;
    move-object/from16 v30, v9

    move-object v8, v9

    .line 591
    move-object/from16 v16, v9

    .end local v9    # "strongPoint3XEdit":Landroid/widget/EditText;
    .local v16, "strongPoint3XEdit":Landroid/widget/EditText;
    const v9, 0x7f0606d1

    invoke-virtual {v3, v9}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v9

    check-cast v9, Landroid/widget/EditText;

    .local v9, "strongPoint3YEdit":Landroid/widget/EditText;
    move-object/from16 v31, v9

    move-object/from16 v22, v1

    move-object/from16 v44, v9

    move-object/from16 v1, v16

    .line 593
    .end local v9    # "strongPoint3YEdit":Landroid/widget/EditText;
    .end local v16    # "strongPoint3XEdit":Landroid/widget/EditText;
    .local v1, "strongPoint3XEdit":Landroid/widget/EditText;
    .local v44, "strongPoint3YEdit":Landroid/widget/EditText;
    move-object/from16 v16, v10

    .end local v10    # "strongPoint2YEdit":Landroid/widget/EditText;
    .local v16, "strongPoint2YEdit":Landroid/widget/EditText;
    const v10, 0x7f060571

    invoke-virtual {v3, v10}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Landroid/widget/EditText;

    .local v10, "mediumweakPoint1XEdit":Landroid/widget/EditText;
    move-object/from16 v32, v10

    move-object/from16 v45, v2

    move-object/from16 v46, v10

    move-object/from16 v2, v16

    .line 595
    .end local v10    # "mediumweakPoint1XEdit":Landroid/widget/EditText;
    .end local v16    # "strongPoint2YEdit":Landroid/widget/EditText;
    .local v2, "strongPoint2YEdit":Landroid/widget/EditText;
    .local v46, "mediumweakPoint1XEdit":Landroid/widget/EditText;
    move-object/from16 v16, v11

    .end local v11    # "strongPoint2XEdit":Landroid/widget/EditText;
    .local v16, "strongPoint2XEdit":Landroid/widget/EditText;
    const v11, 0x7f060572

    invoke-virtual {v3, v11}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v11

    check-cast v11, Landroid/widget/EditText;

    .local v11, "mediumweakPoint1YEdit":Landroid/widget/EditText;
    move-object/from16 v33, v11

    move-object/from16 v47, v4

    move-object/from16 v48, v11

    move-object/from16 v4, v16

    .line 597
    .end local v11    # "mediumweakPoint1YEdit":Landroid/widget/EditText;
    .end local v16    # "strongPoint2XEdit":Landroid/widget/EditText;
    .local v4, "strongPoint2XEdit":Landroid/widget/EditText;
    .local v48, "mediumweakPoint1YEdit":Landroid/widget/EditText;
    move-object/from16 v16, v12

    .end local v12    # "strongPoint1YEdit":Landroid/widget/EditText;
    .local v16, "strongPoint1YEdit":Landroid/widget/EditText;
    const v12, 0x7f060573

    invoke-virtual {v3, v12}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v12

    check-cast v12, Landroid/widget/EditText;

    .local v12, "mediumweakPoint2XEdit":Landroid/widget/EditText;
    move-object/from16 v34, v12

    move-object/from16 v49, v5

    move-object/from16 v50, v12

    move-object/from16 v5, v16

    .line 599
    .end local v12    # "mediumweakPoint2XEdit":Landroid/widget/EditText;
    .end local v16    # "strongPoint1YEdit":Landroid/widget/EditText;
    .local v5, "strongPoint1YEdit":Landroid/widget/EditText;
    .local v50, "mediumweakPoint2XEdit":Landroid/widget/EditText;
    move-object/from16 v16, v13

    .end local v13    # "strongPoint1XEdit":Landroid/widget/EditText;
    .local v16, "strongPoint1XEdit":Landroid/widget/EditText;
    const v13, 0x7f060574

    invoke-virtual {v3, v13}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v13

    check-cast v13, Landroid/widget/EditText;

    .local v13, "mediumweakPoint2YEdit":Landroid/widget/EditText;
    move-object/from16 v35, v13

    move-object/from16 v51, v6

    move-object/from16 v52, v13

    move-object/from16 v6, v16

    .line 601
    .end local v13    # "mediumweakPoint2YEdit":Landroid/widget/EditText;
    .end local v16    # "strongPoint1XEdit":Landroid/widget/EditText;
    .local v6, "strongPoint1XEdit":Landroid/widget/EditText;
    .local v52, "mediumweakPoint2YEdit":Landroid/widget/EditText;
    move-object/from16 v16, v14

    .end local v14    # "cancelBtn":Landroid/widget/Button;
    .local v16, "cancelBtn":Landroid/widget/Button;
    const v14, 0x7f060575

    invoke-virtual {v3, v14}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v14

    check-cast v14, Landroid/widget/EditText;

    .local v14, "mediumweakPoint3XEdit":Landroid/widget/EditText;
    move-object/from16 v36, v14

    move-object/from16 v54, v14

    move-object/from16 v53, v16

    .line 603
    .end local v14    # "mediumweakPoint3XEdit":Landroid/widget/EditText;
    .end local v16    # "cancelBtn":Landroid/widget/Button;
    .local v53, "cancelBtn":Landroid/widget/Button;
    .local v54, "mediumweakPoint3XEdit":Landroid/widget/EditText;
    move-object/from16 v16, v15

    .end local v15    # "okBtn":Landroid/widget/Button;
    .local v16, "okBtn":Landroid/widget/Button;
    const v15, 0x7f060576

    invoke-virtual {v3, v15}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v15

    check-cast v15, Landroid/widget/EditText;

    .local v15, "mediumweakPoint3YEdit":Landroid/widget/EditText;
    move-object/from16 v37, v15

    move-object/from16 v56, v15

    move-object/from16 v55, v16

    .line 605
    .end local v15    # "mediumweakPoint3YEdit":Landroid/widget/EditText;
    .end local v16    # "okBtn":Landroid/widget/Button;
    .local v55, "okBtn":Landroid/widget/Button;
    .local v56, "mediumweakPoint3YEdit":Landroid/widget/EditText;
    move-object/from16 v57, v7

    const v7, 0x7f060803

    invoke-virtual {v3, v7}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v7

    check-cast v7, Landroid/widget/EditText;

    .local v7, "weakPoint1XEdit":Landroid/widget/EditText;
    move-object/from16 v38, v7

    move-object/from16 v16, v7

    .line 607
    move-object/from16 v58, v8

    const v8, 0x7f060804

    invoke-virtual {v3, v8}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Landroid/widget/EditText;

    .local v8, "weakPoint1YEdit":Landroid/widget/EditText;
    move-object/from16 v39, v8

    move-object/from16 v17, v8

    .line 609
    move-object/from16 v59, v9

    const v9, 0x7f060805

    invoke-virtual {v3, v9}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v9

    check-cast v9, Landroid/widget/EditText;

    .local v9, "weakPoint2XEdit":Landroid/widget/EditText;
    move-object/from16 v40, v9

    move-object/from16 v18, v9

    .line 611
    move-object/from16 v60, v10

    const v10, 0x7f060806

    invoke-virtual {v3, v10}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Landroid/widget/EditText;

    .local v10, "weakPoint2YEdit":Landroid/widget/EditText;
    move-object/from16 v41, v10

    move-object/from16 v19, v10

    .line 613
    move-object/from16 v61, v11

    const v11, 0x7f060807

    invoke-virtual {v3, v11}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v11

    check-cast v11, Landroid/widget/EditText;

    .local v11, "weakPoint3XEdit":Landroid/widget/EditText;
    move-object/from16 v42, v11

    move-object/from16 v20, v11

    .line 615
    move-object/from16 v62, v12

    const v12, 0x7f060808

    invoke-virtual {v3, v12}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v12

    check-cast v12, Landroid/widget/EditText;

    .local v12, "weakPoint3YEdit":Landroid/widget/EditText;
    move-object/from16 v43, v12

    move-object/from16 v21, v12

    .line 618
    move-object/from16 v63, v13

    const-string v13, "telephony_rsrpsinr_config_settings"

    move-object/from16 v64, v14

    const/4 v14, 0x0

    invoke-virtual {v0, v13, v14}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v13

    .line 620
    .local v13, "rsrpSinrConfigSh":Landroid/content/SharedPreferences;
    const v14, 0x7f0a05eb

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v14

    move-object/from16 v65, v15

    const/16 v15, -0x50

    invoke-interface {v13, v14, v15}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v66

    .line 622
    .local v66, "strongPoint1X":I
    const v14, 0x7f0a05ec

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v14

    const/16 v15, 0x1e

    invoke-interface {v13, v14, v15}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v68

    .line 624
    .local v68, "strongPoint1Y":I
    const v14, 0x7f0a05ed

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v14

    const/16 v15, -0x50

    invoke-interface {v13, v14, v15}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v67

    .line 626
    .local v67, "strongPoint2X":I
    const v14, 0x7f0a05ee

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v14

    const/16 v15, 0x14

    invoke-interface {v13, v14, v15}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v69

    .line 628
    .local v69, "strongPoint2Y":I
    const v14, 0x7f0a05ef

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v14

    const/16 v15, -0x1e

    invoke-interface {v13, v14, v15}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v71

    .line 630
    .local v71, "strongPoint3X":I
    const v14, 0x7f0a05f0

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v14

    const/16 v15, 0x14

    invoke-interface {v13, v14, v15}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v70

    .line 632
    .local v70, "strongPoint3Y":I
    const v14, 0x7f0a041e

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v14

    const/16 v15, -0x8c

    invoke-interface {v13, v14, v15}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v72

    .line 634
    .local v72, "mediumWeakPoint1X":I
    const v14, 0x7f0a041f

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v14

    const/16 v15, 0xa

    invoke-interface {v13, v14, v15}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v74

    .line 636
    .local v74, "mediumWeakPoint1Y":I
    const v14, 0x7f0a0420

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v14

    const/16 v15, -0x5a

    invoke-interface {v13, v14, v15}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v76

    .line 638
    .local v76, "mediumWeakPoint2X":I
    const v14, 0x7f0a0421

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v14

    const/16 v15, 0xa

    invoke-interface {v13, v14, v15}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v75

    .line 640
    .local v75, "mediumWeakPoint2Y":I
    const v14, 0x7f0a0422

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v14

    const/16 v15, -0x5a

    invoke-interface {v13, v14, v15}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v77

    .line 642
    .local v77, "mediumWeakPoint3X":I
    const v14, 0x7f0a0423

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v14

    const/16 v15, -0x14

    invoke-interface {v13, v14, v15}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v78

    .line 644
    .local v78, "mediumWeakPoint3Y":I
    const v14, 0x7f0a06cc

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v14

    const/16 v15, -0x8c

    invoke-interface {v13, v14, v15}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v73

    .line 646
    .local v73, "weakPoint1X":I
    const v14, 0x7f0a06cd

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v14

    const/4 v15, 0x5

    invoke-interface {v13, v14, v15}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v80

    .line 648
    .local v80, "weakPoint1Y":I
    const v14, 0x7f0a06ce

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v14

    const/16 v15, -0x64

    invoke-interface {v13, v14, v15}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v82

    .line 650
    .local v82, "weakPoint2X":I
    const v14, 0x7f0a06cf

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v14

    const/4 v15, 0x5

    invoke-interface {v13, v14, v15}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v81

    .line 652
    .local v81, "weakPoint2Y":I
    const v14, 0x7f0a06d0

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v14

    const/16 v15, -0x64

    invoke-interface {v13, v14, v15}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v83

    .line 654
    .local v83, "weakPoint3X":I
    const v14, 0x7f0a06d1

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v14

    const/16 v15, -0x14

    invoke-interface {v13, v14, v15}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v79

    .line 657
    .local v79, "weakPoint3Y":I
    invoke-static/range {v66 .. v66}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v6, v14}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 658
    invoke-static/range {v68 .. v68}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v5, v14}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 659
    invoke-static/range {v67 .. v67}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v4, v14}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 660
    invoke-static/range {v69 .. v69}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v2, v14}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 661
    invoke-static/range {v71 .. v71}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v1, v14}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 662
    invoke-static/range {v70 .. v70}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v14

    move-object/from16 v15, v44

    .end local v44    # "strongPoint3YEdit":Landroid/widget/EditText;
    .local v15, "strongPoint3YEdit":Landroid/widget/EditText;
    invoke-virtual {v15, v14}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 663
    invoke-static/range {v72 .. v72}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v14

    move-object/from16 v44, v1

    move-object/from16 v1, v46

    .end local v46    # "mediumweakPoint1XEdit":Landroid/widget/EditText;
    .local v1, "mediumweakPoint1XEdit":Landroid/widget/EditText;
    .local v44, "strongPoint3XEdit":Landroid/widget/EditText;
    invoke-virtual {v1, v14}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 664
    invoke-static/range {v74 .. v74}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v14

    move-object/from16 v1, v48

    .end local v48    # "mediumweakPoint1YEdit":Landroid/widget/EditText;
    .local v1, "mediumweakPoint1YEdit":Landroid/widget/EditText;
    .restart local v46    # "mediumweakPoint1XEdit":Landroid/widget/EditText;
    invoke-virtual {v1, v14}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 665
    invoke-static/range {v76 .. v76}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v14

    move-object/from16 v1, v50

    .end local v50    # "mediumweakPoint2XEdit":Landroid/widget/EditText;
    .local v1, "mediumweakPoint2XEdit":Landroid/widget/EditText;
    .restart local v48    # "mediumweakPoint1YEdit":Landroid/widget/EditText;
    invoke-virtual {v1, v14}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 666
    invoke-static/range {v75 .. v75}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v14

    move-object/from16 v1, v52

    .end local v52    # "mediumweakPoint2YEdit":Landroid/widget/EditText;
    .local v1, "mediumweakPoint2YEdit":Landroid/widget/EditText;
    .restart local v50    # "mediumweakPoint2XEdit":Landroid/widget/EditText;
    invoke-virtual {v1, v14}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 667
    invoke-static/range {v77 .. v77}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v14

    move-object/from16 v1, v54

    .end local v54    # "mediumweakPoint3XEdit":Landroid/widget/EditText;
    .local v1, "mediumweakPoint3XEdit":Landroid/widget/EditText;
    .restart local v52    # "mediumweakPoint2YEdit":Landroid/widget/EditText;
    invoke-virtual {v1, v14}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 668
    invoke-static/range {v78 .. v78}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v14

    move-object/from16 v1, v56

    .end local v56    # "mediumweakPoint3YEdit":Landroid/widget/EditText;
    .local v1, "mediumweakPoint3YEdit":Landroid/widget/EditText;
    .restart local v54    # "mediumweakPoint3XEdit":Landroid/widget/EditText;
    invoke-virtual {v1, v14}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 669
    invoke-static/range {v73 .. v73}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v7, v14}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 670
    invoke-static/range {v80 .. v80}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v8, v14}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 671
    invoke-static/range {v82 .. v82}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v9, v14}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 672
    invoke-static/range {v81 .. v81}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v10, v14}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 673
    invoke-static/range {v83 .. v83}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v11, v14}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 674
    invoke-static/range {v79 .. v79}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v12, v14}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 676
    new-instance v14, Landroid/app/AlertDialog$Builder;

    invoke-direct {v14, v0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const/4 v0, 0x0

    invoke-virtual {v14, v0}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 677
    move-object/from16 v14, p1

    invoke-virtual {v0, v14}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    invoke-virtual {v0, v3}, Landroid/app/AlertDialog$Builder;->setView(Landroid/view/View;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v56

    .local v56, "dialog":Landroid/app/AlertDialog;
    move-object/from16 v25, v56

    move-object/from16 v84, v3

    .end local v3    # "inputView":Landroid/view/View;
    .local v84, "inputView":Landroid/view/View;
    move-object/from16 v3, v56

    .line 678
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;

    move-object/from16 v85, v0

    move-object/from16 v14, v64

    move-object/from16 v64, v12

    move-object/from16 v12, v62

    move-object/from16 v62, v10

    move-object/from16 v10, v60

    move-object/from16 v60, v8

    move-object/from16 v8, v58

    move-object/from16 v58, v1

    move-object/from16 v1, v22

    move-object/from16 v86, v47

    move-object/from16 v47, v2

    move-object/from16 v2, v45

    move-object/from16 v45, v5

    move-object/from16 v5, v49

    move-object/from16 v49, v15

    move-object/from16 v15, v65

    move-object/from16 v65, v13

    move-object/from16 v13, v63

    move-object/from16 v63, v11

    move-object/from16 v11, v61

    move-object/from16 v61, v9

    move-object/from16 v9, v59

    move-object/from16 v59, v7

    move-object/from16 v7, v57

    move-object/from16 v57, v54

    move-object/from16 v54, v52

    move-object/from16 v52, v50

    move-object/from16 v50, v46

    move-object/from16 v46, v4

    move-object/from16 v4, v86

    move-object/from16 v87, v44

    move-object/from16 v44, v6

    move-object/from16 v6, v51

    move-object/from16 v51, v48

    move-object/from16 v48, v87

    .end local v1    # "mediumweakPoint3YEdit":Landroid/widget/EditText;
    .end local v2    # "strongPoint2YEdit":Landroid/widget/EditText;
    .end local v4    # "strongPoint2XEdit":Landroid/widget/EditText;
    .end local v5    # "strongPoint1YEdit":Landroid/widget/EditText;
    .end local v6    # "strongPoint1XEdit":Landroid/widget/EditText;
    .end local v7    # "weakPoint1XEdit":Landroid/widget/EditText;
    .end local v8    # "weakPoint1YEdit":Landroid/widget/EditText;
    .end local v9    # "weakPoint2XEdit":Landroid/widget/EditText;
    .end local v10    # "weakPoint2YEdit":Landroid/widget/EditText;
    .end local v11    # "weakPoint3XEdit":Landroid/widget/EditText;
    .end local v12    # "weakPoint3YEdit":Landroid/widget/EditText;
    .end local v13    # "rsrpSinrConfigSh":Landroid/content/SharedPreferences;
    .end local v15    # "strongPoint3YEdit":Landroid/widget/EditText;
    .local v44, "strongPoint1XEdit":Landroid/widget/EditText;
    .local v45, "strongPoint1YEdit":Landroid/widget/EditText;
    .local v46, "strongPoint2XEdit":Landroid/widget/EditText;
    .local v47, "strongPoint2YEdit":Landroid/widget/EditText;
    .local v48, "strongPoint3XEdit":Landroid/widget/EditText;
    .local v49, "strongPoint3YEdit":Landroid/widget/EditText;
    .local v50, "mediumweakPoint1XEdit":Landroid/widget/EditText;
    .local v51, "mediumweakPoint1YEdit":Landroid/widget/EditText;
    .local v52, "mediumweakPoint2XEdit":Landroid/widget/EditText;
    .local v54, "mediumweakPoint2YEdit":Landroid/widget/EditText;
    .local v57, "mediumweakPoint3XEdit":Landroid/widget/EditText;
    .local v58, "mediumweakPoint3YEdit":Landroid/widget/EditText;
    .local v59, "weakPoint1XEdit":Landroid/widget/EditText;
    .local v60, "weakPoint1YEdit":Landroid/widget/EditText;
    .local v61, "weakPoint2XEdit":Landroid/widget/EditText;
    .local v62, "weakPoint2YEdit":Landroid/widget/EditText;
    .local v63, "weakPoint3XEdit":Landroid/widget/EditText;
    .local v64, "weakPoint3YEdit":Landroid/widget/EditText;
    .local v65, "rsrpSinrConfigSh":Landroid/content/SharedPreferences;
    invoke-direct/range {v0 .. v21}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;-><init>(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$InputDialogOnClickListener;Landroid/app/AlertDialog;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;)V

    move-object/from16 v0, v55

    move-object/from16 v1, v85

    .end local v55    # "okBtn":Landroid/widget/Button;
    .local v0, "okBtn":Landroid/widget/Button;
    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 703
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$6;

    move-object/from16 v22, v1

    invoke-direct/range {v22 .. v43}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$6;-><init>(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$InputDialogOnClickListener;Landroid/app/AlertDialog;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;)V

    move-object/from16 v2, v53

    .end local v53    # "cancelBtn":Landroid/widget/Button;
    .local v2, "cancelBtn":Landroid/widget/Button;
    invoke-virtual {v2, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 727
    invoke-virtual/range {v56 .. v56}, Landroid/app/AlertDialog;->show()V

    .line 728
    return-void
.end method

.method private showRsrpSinrConfigDlg(Ljava/util/ArrayList;Z)V
    .locals 2
    .param p2, "bNeedShowSimConfig"    # Z
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;Z)V"
        }
    .end annotation

    .line 732
    .local p1, "componentPara":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    const v0, 0x7f0a0565

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v0

    .line 733
    .local v0, "title":Ljava/lang/String;
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$7;

    invoke-direct {v1, p0, p2}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$7;-><init>(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;Z)V

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->showMultiInputDlg(Ljava/lang/CharSequence;Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$InputDialogOnClickListener;)V

    .line 858
    return-void
.end method

.method private showSimSelectedDialog([Ljava/lang/String;)V
    .locals 3
    .param p1, "items"    # [Ljava/lang/String;

    .line 534
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 535
    const-string v1, "Sim Card for FT Network Info"

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mSelectSim:I

    new-instance v2, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$4;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$4;-><init>(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;)V

    .line 536
    invoke-virtual {v0, p1, v1, v2}, Landroid/app/AlertDialog$Builder;->setSingleChoiceItems([Ljava/lang/CharSequence;ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$3;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$3;-><init>(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;)V

    .line 544
    const-string v2, "OK"

    invoke-virtual {v0, v2, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 552
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->show()Landroid/app/AlertDialog;

    move-result-object v0

    .line 553
    .local v0, "myDialog":Landroid/app/Dialog;
    return-void
.end method

.method private subscribeMdmMsg()Z
    .locals 22

    .line 1004
    move-object/from16 v0, p0

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->checkMonitorAlive()Z

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_0

    .line 1005
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mHandler:Landroid/os/Handler;

    const/4 v3, 0x4

    invoke-virtual {v1, v3}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 1006
    return v2

    .line 1008
    :cond_0
    const/4 v1, 0x1

    .line 1009
    .local v1, "k":I
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3}, Ljava/util/ArrayList;-><init>()V

    iput-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->components:Ljava/util/ArrayList;

    .line 1010
    sget-object v3, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedEmTypes:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->clear()V

    .line 1011
    sget-object v3, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedIcdEventTypes:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->clear()V

    .line 1012
    sget-object v3, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedIcdRecordTypes:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->clear()V

    .line 1013
    const-wide/16 v3, 0x0

    .line 1014
    .local v3, "msgId":J
    const/4 v5, 0x0

    .local v5, "i":I
    :goto_0
    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckBoxes:Ljava/util/List;

    invoke-interface {v6}, Ljava/util/List;->size()I

    move-result v6

    const-string v8, "EmInfo/ComponentSelectActivity"

    if-ge v5, v6, :cond_13

    .line 1015
    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckBoxes:Ljava/util/List;

    invoke-interface {v6, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Landroid/widget/CheckBox;

    .line 1016
    .local v6, "c":Landroid/widget/CheckBox;
    invoke-virtual {v6}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v9

    if-eqz v9, :cond_11

    invoke-virtual {v6}, Landroid/widget/CheckBox;->getTag()Ljava/lang/Object;

    move-result-object v9

    instance-of v9, v9, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;

    if-eqz v9, :cond_11

    .line 1017
    iget-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mHandler:Landroid/os/Handler;

    const/4 v10, 0x3

    invoke-virtual {v9, v10}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 1018
    iget-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->components:Ljava/util/ArrayList;

    invoke-virtual {v6}, Landroid/widget/CheckBox;->getText()Ljava/lang/CharSequence;

    move-result-object v10

    invoke-interface {v10}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1019
    iget-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->allComponents:Ljava/util/List;

    invoke-interface {v9}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v9

    :goto_1
    invoke-interface {v9}, Ljava/util/Iterator;->hasNext()Z

    move-result v10

    if-eqz v10, :cond_10

    invoke-interface {v9}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;

    .line 1020
    .local v10, "com":Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;
    invoke-virtual {v6}, Landroid/widget/CheckBox;->getText()Ljava/lang/CharSequence;

    move-result-object v11

    invoke-interface {v11}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v10}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getName()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v11, v12}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-eqz v11, :cond_e

    .line 1021
    invoke-virtual {v10}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getEmComponentName()[Ljava/lang/String;

    move-result-object v11

    .line 1022
    .local v11, "emComponentName":[Ljava/lang/String;
    const-string v12, "type_icd_record"

    invoke-virtual {v10, v12}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getTypeIndex(Ljava/lang/String;)I

    move-result v12

    .line 1023
    .local v12, "recodeIndex":I
    const-string v13, "type_icd_event"

    invoke-virtual {v10, v13}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getTypeIndex(Ljava/lang/String;)I

    move-result v13

    .line 1024
    .local v13, "eventIndex":I
    if-eqz v12, :cond_2

    if-nez v13, :cond_1

    goto :goto_2

    :cond_1
    move v14, v2

    goto :goto_3

    :cond_2
    :goto_2
    const/4 v14, -0x1

    .line 1025
    .local v14, "emIndex":I
    :goto_3
    const/4 v15, 0x0

    .line 1026
    .local v15, "length":I
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "Index: "

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, ", "

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v8, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1028
    const/4 v2, 0x1

    .line 1029
    .local v2, "j":I
    move/from16 v17, v1

    .end local v1    # "k":I
    .local v17, "k":I
    if-ltz v12, :cond_6

    .line 1030
    if-ltz v13, :cond_3

    move v1, v13

    goto :goto_4

    :cond_3
    array-length v1, v11

    :goto_4
    move v15, v1

    .line 1031
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v18, v2

    .end local v2    # "j":I
    .local v18, "j":I
    const-string v2, "the type is icd record,"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v8, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 1032
    add-int/lit8 v1, v12, 0x1

    move v2, v1

    .end local v18    # "j":I
    .restart local v2    # "j":I
    :goto_5
    if-ge v2, v15, :cond_5

    .line 1033
    aget-object v1, v11, v2

    move-wide/from16 v19, v3

    move/from16 v21, v5

    const/16 v3, 0x10

    .end local v3    # "msgId":J
    .end local v5    # "i":I
    .local v19, "msgId":J
    .local v21, "i":I
    invoke-static {v1, v3}, Ljava/lang/Long;->parseLong(Ljava/lang/String;I)J

    move-result-wide v4

    .line 1036
    .local v4, "msgIdIcd":J
    sget-object v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedIcdRecordTypes:Ljava/util/ArrayList;

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_4

    .line 1037
    sget-object v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedIcdRecordTypes:Ljava/util/ArrayList;

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1038
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "onSubscribeTrap ID = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v3, v11, v2

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-direct {v0, v4, v5}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->isRecordType(J)Z

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v8, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1032
    .end local v4    # "msgIdIcd":J
    :cond_4
    add-int/lit8 v2, v2, 0x1

    move-wide/from16 v3, v19

    move/from16 v5, v21

    goto :goto_5

    .end local v19    # "msgId":J
    .end local v21    # "i":I
    .restart local v3    # "msgId":J
    .restart local v5    # "i":I
    :cond_5
    move-wide/from16 v19, v3

    move/from16 v21, v5

    .end local v3    # "msgId":J
    .end local v5    # "i":I
    .restart local v19    # "msgId":J
    .restart local v21    # "i":I
    goto :goto_6

    .line 1029
    .end local v19    # "msgId":J
    .end local v21    # "i":I
    .restart local v3    # "msgId":J
    .restart local v5    # "i":I
    :cond_6
    move/from16 v18, v2

    move-wide/from16 v19, v3

    move/from16 v21, v5

    .line 1042
    .end local v3    # "msgId":J
    .end local v5    # "i":I
    .restart local v19    # "msgId":J
    .restart local v21    # "i":I
    :goto_6
    if-ltz v13, :cond_8

    .line 1043
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "the type is icd event,"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v8, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 1044
    add-int/lit8 v1, v13, 0x1

    move v2, v1

    :goto_7
    array-length v1, v11

    if-ge v2, v1, :cond_8

    .line 1045
    aget-object v1, v11, v2

    const/16 v3, 0x10

    invoke-static {v1, v3}, Ljava/lang/Long;->parseLong(Ljava/lang/String;I)J

    move-result-wide v4

    .line 1048
    .restart local v4    # "msgIdIcd":J
    sget-object v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedIcdEventTypes:Ljava/util/ArrayList;

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_7

    .line 1049
    sget-object v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedIcdEventTypes:Ljava/util/ArrayList;

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1050
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "onSubscribeTrap ID: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v3, v11, v2

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-direct {v0, v4, v5}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->isRecordType(J)Z

    move-result v3

    const/16 v16, 0x1

    xor-int/lit8 v3, v3, 0x1

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v8, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1044
    .end local v4    # "msgIdIcd":J
    :cond_7
    add-int/lit8 v2, v2, 0x1

    goto :goto_7

    .line 1054
    :cond_8
    if-ltz v14, :cond_f

    .line 1055
    if-lez v12, :cond_9

    move v1, v12

    goto :goto_8

    .line 1056
    :cond_9
    if-lez v13, :cond_a

    move v1, v13

    goto :goto_8

    :cond_a
    array-length v1, v11

    :goto_8
    nop

    .line 1057
    .end local v15    # "length":I
    .local v1, "length":I
    const/4 v2, 0x0

    move-wide/from16 v3, v19

    .end local v19    # "msgId":J
    .restart local v3    # "msgId":J
    :goto_9
    if-ge v2, v1, :cond_12

    .line 1058
    invoke-static/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getDecoder(Landroid/content/Context;)Lcom/mediatek/mdml/PlainDataDecoder;

    move-result-object v5

    aget-object v7, v11, v2

    .line 1059
    invoke-virtual {v5, v7}, Lcom/mediatek/mdml/PlainDataDecoder;->msgInfo_getMsgID(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v5

    .line 1060
    .local v5, "msgIdInt":Ljava/lang/Integer;
    if-eqz v5, :cond_c

    .line 1061
    invoke-virtual {v5}, Ljava/lang/Integer;->longValue()J

    move-result-wide v3

    .line 1069
    sget-object v7, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedEmTypes:Ljava/util/ArrayList;

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v9

    invoke-virtual {v7, v9}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v7

    if-nez v7, :cond_b

    .line 1070
    sget-object v7, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedEmTypes:Ljava/util/ArrayList;

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v9

    invoke-virtual {v7, v9}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1071
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "onSubscribeTrap msg Name = "

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v9, v11, v2

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v8, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1074
    :cond_b
    sget-object v7, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedEmTypes:Ljava/util/ArrayList;

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v9

    invoke-virtual {v7, v9}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v7

    if-nez v7, :cond_d

    .line 1075
    sget-object v7, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedEmTypes:Ljava/util/ArrayList;

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v9

    invoke-virtual {v7, v9}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1076
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "onSubscribeTrap msgName = "

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v9, v11, v2

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v8, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_a

    .line 1065
    :cond_c
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "The msgid is not support, msgName = "

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v9, v11, v2

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v8, v7}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 1067
    nop

    .line 1057
    .end local v5    # "msgIdInt":Ljava/lang/Integer;
    :cond_d
    :goto_a
    add-int/lit8 v2, v2, 0x1

    goto/16 :goto_9

    .line 1020
    .end local v2    # "j":I
    .end local v11    # "emComponentName":[Ljava/lang/String;
    .end local v12    # "recodeIndex":I
    .end local v13    # "eventIndex":I
    .end local v14    # "emIndex":I
    .end local v17    # "k":I
    .end local v21    # "i":I
    .local v1, "k":I
    .local v5, "i":I
    :cond_e
    move/from16 v17, v1

    move-wide/from16 v19, v3

    move/from16 v21, v5

    .line 1083
    .end local v1    # "k":I
    .end local v3    # "msgId":J
    .end local v5    # "i":I
    .end local v10    # "com":Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;
    .restart local v17    # "k":I
    .restart local v19    # "msgId":J
    .restart local v21    # "i":I
    :cond_f
    move/from16 v1, v17

    move-wide/from16 v3, v19

    move/from16 v5, v21

    const/4 v2, 0x0

    goto/16 :goto_1

    .line 1019
    .end local v17    # "k":I
    .end local v19    # "msgId":J
    .end local v21    # "i":I
    .restart local v1    # "k":I
    .restart local v3    # "msgId":J
    .restart local v5    # "i":I
    :cond_10
    move/from16 v17, v1

    move-wide/from16 v19, v3

    move/from16 v21, v5

    .end local v1    # "k":I
    .end local v3    # "msgId":J
    .end local v5    # "i":I
    .restart local v17    # "k":I
    .restart local v19    # "msgId":J
    .restart local v21    # "i":I
    goto :goto_b

    .line 1016
    .end local v17    # "k":I
    .end local v19    # "msgId":J
    .end local v21    # "i":I
    .restart local v1    # "k":I
    .restart local v3    # "msgId":J
    .restart local v5    # "i":I
    :cond_11
    move/from16 v17, v1

    move-wide/from16 v19, v3

    move/from16 v21, v5

    .line 1014
    .end local v1    # "k":I
    .end local v3    # "msgId":J
    .end local v5    # "i":I
    .end local v6    # "c":Landroid/widget/CheckBox;
    .restart local v17    # "k":I
    .restart local v19    # "msgId":J
    .restart local v21    # "i":I
    :goto_b
    move-wide/from16 v3, v19

    .end local v19    # "msgId":J
    .restart local v3    # "msgId":J
    :cond_12
    add-int/lit8 v5, v21, 0x1

    move/from16 v1, v17

    const/4 v2, 0x0

    .end local v21    # "i":I
    .restart local v5    # "i":I
    goto/16 :goto_0

    .end local v17    # "k":I
    .restart local v1    # "k":I
    :cond_13
    move/from16 v17, v1

    move-wide/from16 v19, v3

    move/from16 v21, v5

    .line 1088
    .end local v1    # "k":I
    .end local v3    # "msgId":J
    .end local v5    # "i":I
    .restart local v17    # "k":I
    .restart local v19    # "msgId":J
    sget-object v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedEmTypes:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    .line 1089
    .local v1, "size":I
    if-lez v1, :cond_14

    .line 1090
    sget-object v2, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedEmTypes:Ljava/util/ArrayList;

    new-array v3, v1, [Ljava/lang/Long;

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v2

    check-cast v2, [Ljava/lang/Long;

    .line 1092
    .local v2, "array":[Ljava/lang/Long;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "onSubscribeTrap em msg id = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v2}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1093
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getCmdProxy()Lcom/mediatek/mdml/MonitorCmdProxy;

    move-result-object v3

    sget-wide v4, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->m_sid:J

    sget-object v6, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_EM:Lcom/mediatek/mdml/TRAP_TYPE;

    invoke-static {v2}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->toPrimitives([Ljava/lang/Long;)[J

    move-result-object v7

    invoke-virtual {v3, v4, v5, v6, v7}, Lcom/mediatek/mdml/MonitorCmdProxy;->onSubscribeMultiTrap(JLcom/mediatek/mdml/TRAP_TYPE;[J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 1096
    .end local v2    # "array":[Ljava/lang/Long;
    :cond_14
    sget-object v2, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedIcdRecordTypes:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v1

    .line 1097
    if-lez v1, :cond_15

    .line 1098
    sget-object v2, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedIcdRecordTypes:Ljava/util/ArrayList;

    new-array v3, v1, [Ljava/lang/Long;

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v2

    check-cast v2, [Ljava/lang/Long;

    .line 1099
    .restart local v2    # "array":[Ljava/lang/Long;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "onSubscribeTrap icd record msg id = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v2}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1100
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getCmdProxy()Lcom/mediatek/mdml/MonitorCmdProxy;

    move-result-object v3

    sget-wide v4, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->m_sid:J

    sget-object v6, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_ICD_RECORD:Lcom/mediatek/mdml/TRAP_TYPE;

    invoke-static {v2}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->toPrimitives([Ljava/lang/Long;)[J

    move-result-object v7

    invoke-virtual {v3, v4, v5, v6, v7}, Lcom/mediatek/mdml/MonitorCmdProxy;->onSubscribeMultiTrap(JLcom/mediatek/mdml/TRAP_TYPE;[J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 1103
    .end local v2    # "array":[Ljava/lang/Long;
    :cond_15
    sget-object v2, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedIcdEventTypes:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v1

    .line 1104
    if-lez v1, :cond_16

    .line 1105
    sget-object v2, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckedIcdEventTypes:Ljava/util/ArrayList;

    new-array v3, v1, [Ljava/lang/Long;

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v2

    check-cast v2, [Ljava/lang/Long;

    .line 1106
    .restart local v2    # "array":[Ljava/lang/Long;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "onSubscribeTrap icd event msg id = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v2}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1107
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getCmdProxy()Lcom/mediatek/mdml/MonitorCmdProxy;

    move-result-object v3

    sget-wide v4, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->m_sid:J

    sget-object v6, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_ICD_EVENT:Lcom/mediatek/mdml/TRAP_TYPE;

    invoke-static {v2}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->toPrimitives([Ljava/lang/Long;)[J

    move-result-object v7

    invoke-virtual {v3, v4, v5, v6, v7}, Lcom/mediatek/mdml/MonitorCmdProxy;->onSubscribeMultiTrap(JLcom/mediatek/mdml/TRAP_TYPE;[J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 1109
    .end local v2    # "array":[Ljava/lang/Long;
    :cond_16
    const-string v2, "onSubscribeTrap done"

    invoke-static {v8, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1110
    const/4 v2, 0x1

    return v2
.end method

.method public static varargs toPrimitives([Ljava/lang/Long;)[J
    .locals 4
    .param p0, "objects"    # [Ljava/lang/Long;

    .line 254
    array-length v0, p0

    new-array v0, v0, [J

    .line 255
    .local v0, "primitives":[J
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, p0

    if-ge v1, v2, :cond_0

    .line 256
    aget-object v2, p0, v1

    invoke-virtual {v2}, Ljava/lang/Long;->longValue()J

    move-result-wide v2

    aput-wide v2, v0, v1

    .line 255
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 257
    .end local v1    # "i":I
    :cond_0
    return-object v0
.end method

.method private writeRsrpSinrSharedPreference(IIIIIIIIIIIIIIIIII)V
    .locals 17
    .param p1, "strongPoint1X"    # I
    .param p2, "strongPoint1Y"    # I
    .param p3, "strongPoint2X"    # I
    .param p4, "strongPoint2Y"    # I
    .param p5, "strongPoint3X"    # I
    .param p6, "strongPoint3Y"    # I
    .param p7, "mediumWeakPoint1X"    # I
    .param p8, "mediumWeakPoint1Y"    # I
    .param p9, "mediumWeakPoint2X"    # I
    .param p10, "mediumWeakPoint2Y"    # I
    .param p11, "mediumWeakPoint3X"    # I
    .param p12, "mediumWeakPoint3Y"    # I
    .param p13, "weakPoint1X"    # I
    .param p14, "weakPoint1Y"    # I
    .param p15, "weakPoint2X"    # I
    .param p16, "weakPoint2Y"    # I
    .param p17, "weakPoint3X"    # I
    .param p18, "weakPoint3Y"    # I

    .line 871
    move-object/from16 v0, p0

    const-string v1, "telephony_rsrpsinr_config_settings"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v1

    .line 873
    .local v1, "rsrpSinrConfigSh":Landroid/content/SharedPreferences;
    invoke-interface {v1}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v2

    .line 874
    .local v2, "editor":Landroid/content/SharedPreferences$Editor;
    const v3, 0x7f0a05eb

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    move/from16 v4, p1

    invoke-interface {v2, v3, v4}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 875
    const v3, 0x7f0a05ec

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    move/from16 v5, p2

    invoke-interface {v2, v3, v5}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 876
    const v3, 0x7f0a05ed

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    move/from16 v6, p3

    invoke-interface {v2, v3, v6}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 877
    const v3, 0x7f0a05ee

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    move/from16 v7, p4

    invoke-interface {v2, v3, v7}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 878
    const v3, 0x7f0a05ef

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    move/from16 v8, p5

    invoke-interface {v2, v3, v8}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 879
    const v3, 0x7f0a05f0

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    move/from16 v9, p6

    invoke-interface {v2, v3, v9}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 880
    const v3, 0x7f0a041e

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    move/from16 v10, p7

    invoke-interface {v2, v3, v10}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 881
    const v3, 0x7f0a041f

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    move/from16 v11, p8

    invoke-interface {v2, v3, v11}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 882
    const v3, 0x7f0a0420

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    move/from16 v12, p9

    invoke-interface {v2, v3, v12}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 883
    const v3, 0x7f0a0421

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    move/from16 v13, p10

    invoke-interface {v2, v3, v13}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 884
    const v3, 0x7f0a0422

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    move/from16 v14, p11

    invoke-interface {v2, v3, v14}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 885
    const v3, 0x7f0a0423

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    move/from16 v15, p12

    invoke-interface {v2, v3, v15}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 886
    const v3, 0x7f0a06cc

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    move-object/from16 v16, v1

    move/from16 v1, p13

    .end local v1    # "rsrpSinrConfigSh":Landroid/content/SharedPreferences;
    .local v16, "rsrpSinrConfigSh":Landroid/content/SharedPreferences;
    invoke-interface {v2, v3, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 887
    const v3, 0x7f0a06cd

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    move/from16 v1, p14

    invoke-interface {v2, v3, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 888
    const v3, 0x7f0a06ce

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    move/from16 v1, p15

    invoke-interface {v2, v3, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 889
    const v3, 0x7f0a06cf

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    move/from16 v1, p16

    invoke-interface {v2, v3, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 890
    const v3, 0x7f0a06d0

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    move/from16 v1, p17

    invoke-interface {v2, v3, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 891
    const v3, 0x7f0a06d1

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    move/from16 v0, p18

    invoke-interface {v2, v3, v0}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 892
    invoke-interface {v2}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 893
    return-void
.end method


# virtual methods
.method OptionsItemSelected()V
    .locals 7

    .line 501
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 502
    .local v0, "components":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    const/4 v1, 0x0

    .line 503
    .local v1, "bNeedShowConfig":Z
    const/4 v2, 0x0

    .line 504
    .local v2, "bNeedShowSimConfig":Z
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckBoxes:Ljava/util/List;

    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v4

    if-ge v3, v4, :cond_2

    .line 505
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckBoxes:Ljava/util/List;

    invoke-interface {v4, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/widget/CheckBox;

    .line 506
    .local v4, "c":Landroid/widget/CheckBox;
    invoke-virtual {v4}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v5

    if-eqz v5, :cond_1

    invoke-virtual {v4}, Landroid/widget/CheckBox;->getTag()Ljava/lang/Object;

    move-result-object v5

    instance-of v5, v5, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;

    if-eqz v5, :cond_1

    .line 507
    invoke-virtual {v4}, Landroid/widget/CheckBox;->getText()Ljava/lang/CharSequence;

    move-result-object v5

    invoke-interface {v5}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 508
    invoke-virtual {v4}, Landroid/widget/CheckBox;->getText()Ljava/lang/CharSequence;

    move-result-object v5

    invoke-interface {v5}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v5

    const-string v6, "CC0/CC1 RSRP and SINR"

    invoke-virtual {v5, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_0

    .line 509
    const/4 v1, 0x1

    .line 511
    :cond_0
    invoke-virtual {v4}, Landroid/widget/CheckBox;->getText()Ljava/lang/CharSequence;

    move-result-object v5

    invoke-interface {v5}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v5

    const-string v6, "FT Network Info"

    invoke-virtual {v5, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_1

    .line 512
    const/4 v2, 0x1

    .line 504
    .end local v4    # "c":Landroid/widget/CheckBox;
    :cond_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 516
    .end local v3    # "i":I
    :cond_2
    if-eqz v1, :cond_3

    .line 517
    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->showRsrpSinrConfigDlg(Ljava/util/ArrayList;Z)V

    goto :goto_1

    .line 518
    :cond_3
    if-eqz v2, :cond_4

    .line 519
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    const v4, 0x7f010099

    invoke-virtual {v3, v4}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v3

    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->showSimSelectedDialog([Ljava/lang/String;)V

    goto :goto_1

    .line 521
    :cond_4
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v3

    const/4 v4, 0x1

    if-lez v3, :cond_5

    .line 522
    const-string v3, "EmInfo/ComponentSelectActivity"

    const-string v5, "check infomation id"

    invoke-static {v3, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 523
    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->showDialog(I)V

    .line 524
    new-instance v3, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;

    invoke-direct {v3, p0, v4}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;-><init>(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;I)V

    invoke-virtual {v3}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;->start()V

    goto :goto_1

    .line 526
    :cond_5
    const v3, 0x7f0a047e

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-static {p0, v3, v4}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v3

    .line 527
    invoke-virtual {v3}, Landroid/widget/Toast;->show()V

    .line 530
    :goto_1
    return-void
.end method

.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 3
    .param p1, "buttonView"    # Landroid/widget/CompoundButton;
    .param p2, "isChecked"    # Z

    .line 478
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getTag()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getTag()Ljava/lang/Object;

    move-result-object v0

    instance-of v0, v0, Ljava/util/ArrayList;

    if-eqz v0, :cond_0

    .line 479
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getTag()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/ArrayList;

    .line 480
    .local v0, "groupComponents":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/widget/CheckBox;>;"
    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    .line 481
    .local v2, "c":Landroid/widget/CheckBox;
    invoke-virtual {v2, p2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 482
    .end local v2    # "c":Landroid/widget/CheckBox;
    goto :goto_0

    .line 484
    .end local v0    # "groupComponents":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/widget/CheckBox;>;"
    :cond_0
    if-eqz p2, :cond_1

    .line 485
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mSelected:Ljava/util/Set;

    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getText()Ljava/lang/CharSequence;

    move-result-object v1

    invoke-interface {v1}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 487
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mSelected:Ljava/util/Set;

    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getText()Ljava/lang/CharSequence;

    move-result-object v1

    invoke-interface {v1}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    .line 489
    :goto_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mPref:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mSelected:Ljava/util/Set;

    const-string v2, "selected"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putStringSet(Ljava/lang/String;Ljava/util/Set;)Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 490
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 2
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 262
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 263
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->InitUI()V

    .line 264
    const-string v0, "EmInfo/ComponentSelectActivity"

    const-string v1, "Init ComponentSelectActivity UI done"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 265
    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->showDialog(I)V

    .line 266
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;

    invoke-direct {v1, p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;-><init>(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;I)V

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;->start()V

    .line 267
    return-void
.end method

.method protected onCreateDialog(ILandroid/os/Bundle;)Landroid/app/Dialog;
    .locals 5
    .param p1, "id"    # I
    .param p2, "args"    # Landroid/os/Bundle;

    .line 287
    const-string v0, "Waiting"

    const/4 v1, 0x0

    const-string v2, "EmInfo/ComponentSelectActivity"

    const/4 v3, 0x1

    if-eqz p1, :cond_2

    if-eq p1, v3, :cond_1

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    .line 322
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreateDialog(I)Landroid/app/Dialog;

    move-result-object v0

    return-object v0

    .line 305
    :cond_0
    const-string v0, "MDM error, need to finish self!"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 306
    const/4 v0, 0x0

    .line 307
    .local v0, "dialog":Landroid/app/Dialog;
    const/4 v2, 0x0

    .line 308
    .local v2, "builder":Landroid/app/AlertDialog$Builder;
    new-instance v3, Landroid/app/AlertDialog$Builder;

    invoke-direct {v3, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    move-object v2, v3

    .line 309
    const-string v3, "ERROR Warning"

    invoke-virtual {v2, v3}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 310
    invoke-virtual {v2, v1}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    .line 311
    const-string v1, "MDM occurs error, please try re-enter"

    invoke-virtual {v2, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 312
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$2;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;)V

    const-string v3, "OK"

    invoke-virtual {v2, v3, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 319
    invoke-virtual {v2}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 320
    return-object v0

    .line 297
    .end local v0    # "dialog":Landroid/app/Dialog;
    .end local v2    # "builder":Landroid/app/AlertDialog$Builder;
    :cond_1
    const-string v4, "Before Wait subscribe message.."

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 298
    new-instance v2, Landroid/app/ProgressDialog;

    invoke-direct {v2, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mProgressDialog1:Landroid/app/ProgressDialog;

    .line 299
    invoke-virtual {v2, v0}, Landroid/app/ProgressDialog;->setTitle(Ljava/lang/CharSequence;)V

    .line 300
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mProgressDialog1:Landroid/app/ProgressDialog;

    const-string v2, "Wait subscribe message.."

    invoke-virtual {v0, v2}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 301
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mProgressDialog1:Landroid/app/ProgressDialog;

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 302
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mProgressDialog1:Landroid/app/ProgressDialog;

    invoke-virtual {v0, v3}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 303
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mProgressDialog1:Landroid/app/ProgressDialog;

    return-object v0

    .line 289
    :cond_2
    const-string v4, "Wait MDML init"

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 290
    new-instance v2, Landroid/app/ProgressDialog;

    invoke-direct {v2, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    .line 291
    invoke-virtual {v2, v0}, Landroid/app/ProgressDialog;->setTitle(Ljava/lang/CharSequence;)V

    .line 292
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    invoke-virtual {v0, v4}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 293
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 294
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    invoke-virtual {v0, v3}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 295
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    return-object v0
.end method

.method public onCreateOptionsMenu(Landroid/view/Menu;)Z
    .locals 4
    .param p1, "menu"    # Landroid/view/Menu;

    .line 494
    const v0, 0x7f0a047d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    invoke-interface {p1, v1, v2, v1, v0}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 495
    const/4 v0, 0x2

    const-string v3, "Select All"

    invoke-interface {p1, v1, v0, v1, v3}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 496
    const/4 v0, 0x3

    const-string v3, "Select None"

    invoke-interface {p1, v1, v0, v1, v3}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 497
    return v2
.end method

.method public onDestroy()V
    .locals 2

    .line 281
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 282
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;

    const/4 v1, 0x2

    invoke-direct {v0, p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;-><init>(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;I)V

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;->start()V

    .line 283
    return-void
.end method

.method public onOptionsItemSelected(Landroid/view/MenuItem;)Z
    .locals 3
    .param p1, "aMenuItem"    # Landroid/view/MenuItem;

    .line 557
    invoke-interface {p1}, Landroid/view/MenuItem;->getItemId()I

    move-result v0

    const/4 v1, 0x1

    if-eq v0, v1, :cond_4

    const/4 v2, 0x2

    if-eq v0, v2, :cond_2

    const/4 v1, 0x3

    if-eq v0, v1, :cond_0

    goto :goto_2

    .line 567
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckBoxes:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    .line 568
    .local v1, "c":Landroid/widget/CheckBox;
    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 569
    .end local v1    # "c":Landroid/widget/CheckBox;
    goto :goto_0

    .line 570
    :cond_1
    goto :goto_2

    .line 562
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mCheckBoxes:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    .line 563
    .local v2, "c":Landroid/widget/CheckBox;
    invoke-virtual {v2, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 564
    .end local v2    # "c":Landroid/widget/CheckBox;
    goto :goto_1

    .line 565
    :cond_3
    goto :goto_2

    .line 559
    :cond_4
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->OptionsItemSelected()V

    .line 560
    nop

    .line 574
    :goto_2
    invoke-super {p0, p1}, Landroid/app/Activity;->onOptionsItemSelected(Landroid/view/MenuItem;)Z

    move-result v0

    return v0
.end method

.method protected onResume()V
    .locals 2

    .line 271
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onResume initDone: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->initDone:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "EmInfo/ComponentSelectActivity"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 272
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->checkMonitorAlive()Z

    move-result v0

    if-nez v0, :cond_0

    .line 273
    const-string v0, "m_cmdProxy is null, return..."

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 274
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mHandler:Landroid/os/Handler;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 276
    :cond_0
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 277
    return-void
.end method
