.class public Lcom/mediatek/engineermode/siminfo/SimInfo;
.super Landroid/app/Activity;
.source "SimInfo.java"


# static fields
.field private static final ACTION_SIM_STATE_CHANGED:Ljava/lang/String; = "android.intent.action.SIM_STATE_CHANGED"

.field private static final INTENT_KEY_ICC_STATE:Ljava/lang/String; = "ss"

.field private static final INTENT_SIM_INFO_DPDATE:I = 0x2

.field private static final INTENT_VALUE_ICC_ABSENT:I = 0x3

.field private static final INTENT_VALUE_ICC_READY:I = 0x1

.field private static final TAG:Ljava/lang/String; = "SimInfo"

.field private static final VALUE_ICC_ABSENT:Ljava/lang/String; = "ABSENT"

.field private static final VALUE_ICC_LOADED:Ljava/lang/String; = "LOADED"


# instance fields
.field private final SimCardChangedReceiver:Landroid/content/BroadcastReceiver;

.field private mFirstBroadcast:Z

.field private mHandler:Landroid/os/Handler;

.field private mIccCardType:I

.field private mIccCardTypes:[Ljava/lang/String;

.field mIccRecords:Lcom/android/internal/telephony/uicc/IccRecords;

.field private mInfoFrameLayout:Landroid/widget/FrameLayout;

.field mSimInfoData:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mediatek/engineermode/siminfo/SimInfoData;",
            ">;"
        }
    .end annotation
.end field

.field private mSimType:I

.field private mSubId:I

.field private mToast:Landroid/widget/Toast;

.field siminfo:Lcom/mediatek/engineermode/siminfo/NormalTableComponent;

.field siminfo_status:Landroid/widget/TextView;


# direct methods
.method public constructor <init>()V
    .locals 3

    .line 69
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 79
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mIccRecords:Lcom/android/internal/telephony/uicc/IccRecords;

    .line 81
    iput-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->siminfo:Lcom/mediatek/engineermode/siminfo/NormalTableComponent;

    .line 82
    iput-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->siminfo_status:Landroid/widget/TextView;

    .line 83
    iput-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mToast:Landroid/widget/Toast;

    .line 85
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimType:I

    .line 86
    const/4 v1, 0x1

    iput v1, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSubId:I

    .line 87
    iput-boolean v1, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mFirstBroadcast:Z

    .line 88
    iput v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mIccCardType:I

    .line 89
    const-string v0, "SIM"

    const-string v1, "USIM"

    const-string v2, "UNSUPPORT"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mIccCardTypes:[Ljava/lang/String;

    .line 90
    new-instance v0, Lcom/mediatek/engineermode/siminfo/SimInfo$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/siminfo/SimInfo$1;-><init>(Lcom/mediatek/engineermode/siminfo/SimInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mHandler:Landroid/os/Handler;

    .line 120
    new-instance v0, Lcom/mediatek/engineermode/siminfo/SimInfo$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/siminfo/SimInfo$2;-><init>(Lcom/mediatek/engineermode/siminfo/SimInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->SimCardChangedReceiver:Landroid/content/BroadcastReceiver;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/siminfo/SimInfo;)[Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/siminfo/SimInfo;

    .line 69
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mIccCardTypes:[Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/siminfo/SimInfo;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/siminfo/SimInfo;

    .line 69
    iget v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mIccCardType:I

    return v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/siminfo/SimInfo;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/siminfo/SimInfo;

    .line 69
    iget-boolean v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mFirstBroadcast:Z

    return v0
.end method

.method static synthetic access$202(Lcom/mediatek/engineermode/siminfo/SimInfo;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/siminfo/SimInfo;
    .param p1, "x1"    # Z

    .line 69
    iput-boolean p1, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mFirstBroadcast:Z

    return p1
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/siminfo/SimInfo;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/siminfo/SimInfo;

    .line 69
    iget v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimType:I

    return v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/siminfo/SimInfo;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/siminfo/SimInfo;

    .line 69
    invoke-direct {p0}, Lcom/mediatek/engineermode/siminfo/SimInfo;->loadInCardInfoBackground()V

    return-void
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/siminfo/SimInfo;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/siminfo/SimInfo;

    .line 69
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method private loadInCardInfoBackground()V
    .locals 1

    .line 252
    new-instance v0, Lcom/mediatek/engineermode/siminfo/SimInfo$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/siminfo/SimInfo$3;-><init>(Lcom/mediatek/engineermode/siminfo/SimInfo;)V

    .line 262
    invoke-virtual {v0}, Lcom/mediatek/engineermode/siminfo/SimInfo$3;->start()V

    .line 263
    return-void
.end method

.method private showToast(Ljava/lang/String;)V
    .locals 1
    .param p1, "msg"    # Ljava/lang/String;

    .line 415
    const/4 v0, 0x0

    invoke-static {p0, p1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mToast:Landroid/widget/Toast;

    .line 416
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 417
    return-void
.end method

.method private updateSimInfoData()V
    .locals 13

    .line 187
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    new-instance v9, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    const-string v1, "3F00"

    filled-new-array {v1, v1}, [Ljava/lang/String;

    move-result-object v5

    const-string v2, "CDR-PER-512"

    const-string v3, "EF-ICCID"

    const/16 v4, 0x2fe2

    const/4 v6, 0x1

    const-string v7, "transparent"

    const/4 v8, 0x0

    move-object v1, v9

    invoke-direct/range {v1 .. v8}, Lcom/mediatek/engineermode/siminfo/SimInfoData;-><init>(Ljava/lang/String;Ljava/lang/String;I[Ljava/lang/String;ILjava/lang/String;Z)V

    invoke-interface {v0, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 190
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    new-instance v9, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    const-string v1, "7F10"

    const-string v10, "7FFF"

    filled-new-array {v1, v10}, [Ljava/lang/String;

    move-result-object v5

    const-string v2, "CDR-PER-514"

    const-string v3, "EF-MSISDN"

    const/16 v4, 0x6f40

    const-string v7, "linear fixed"

    move-object v1, v9

    invoke-direct/range {v1 .. v8}, Lcom/mediatek/engineermode/siminfo/SimInfoData;-><init>(Ljava/lang/String;Ljava/lang/String;I[Ljava/lang/String;ILjava/lang/String;Z)V

    invoke-interface {v0, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 193
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    new-instance v9, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    const-string v11, "7F20"

    const-string v12, "x"

    filled-new-array {v11, v12}, [Ljava/lang/String;

    move-result-object v5

    const-string v2, "CDR-PER-516"

    const-string v3, "EF-CPHS MAIL BOX NUMBER"

    const/16 v4, 0x6f17

    const-string v7, "linear fixed"

    move-object v1, v9

    invoke-direct/range {v1 .. v8}, Lcom/mediatek/engineermode/siminfo/SimInfoData;-><init>(Ljava/lang/String;Ljava/lang/String;I[Ljava/lang/String;ILjava/lang/String;Z)V

    invoke-interface {v0, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 197
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    new-instance v9, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    filled-new-array {v12, v10}, [Ljava/lang/String;

    move-result-object v5

    const-string v2, "CDR-PER-518"

    const-string v3, "EF-3GPP MAIL BOX DIALING NUMBER"

    const/16 v4, 0x6fc7

    const-string v7, "linear fixed"

    move-object v1, v9

    invoke-direct/range {v1 .. v8}, Lcom/mediatek/engineermode/siminfo/SimInfoData;-><init>(Ljava/lang/String;Ljava/lang/String;I[Ljava/lang/String;ILjava/lang/String;Z)V

    invoke-interface {v0, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 201
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    new-instance v9, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    filled-new-array {v12, v10}, [Ljava/lang/String;

    move-result-object v5

    const-string v2, "CDR-PER-520"

    const-string v3, "EF-HPPLMN SEARCH PERIOD"

    const/16 v4, 0x6f31

    const-string v7, "transparent"

    move-object v1, v9

    invoke-direct/range {v1 .. v8}, Lcom/mediatek/engineermode/siminfo/SimInfoData;-><init>(Ljava/lang/String;Ljava/lang/String;I[Ljava/lang/String;ILjava/lang/String;Z)V

    invoke-interface {v0, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 205
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    new-instance v9, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    filled-new-array {v11, v10}, [Ljava/lang/String;

    move-result-object v5

    const-string v2, "CDR-PER-522"

    const-string v3, "EF-LOCI"

    const/16 v4, 0x6f71

    const-string v7, "transparent"

    move-object v1, v9

    invoke-direct/range {v1 .. v8}, Lcom/mediatek/engineermode/siminfo/SimInfoData;-><init>(Ljava/lang/String;Ljava/lang/String;I[Ljava/lang/String;ILjava/lang/String;Z)V

    invoke-interface {v0, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 208
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    new-instance v9, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    filled-new-array {v12, v10}, [Ljava/lang/String;

    move-result-object v5

    const-string v2, "CDR-PER-524"

    const-string v3, "EF-GPRS/PS-LOCI"

    const/16 v4, 0x6f73

    const-string v7, "transparent"

    move-object v1, v9

    invoke-direct/range {v1 .. v8}, Lcom/mediatek/engineermode/siminfo/SimInfoData;-><init>(Ljava/lang/String;Ljava/lang/String;I[Ljava/lang/String;ILjava/lang/String;Z)V

    invoke-interface {v0, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 212
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    new-instance v9, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    filled-new-array {v11, v10}, [Ljava/lang/String;

    move-result-object v5

    const-string v2, "CDR-PER-526"

    const-string v3, "EF-ACCESS CONTROL CLASS"

    const/16 v4, 0x6f78

    const-string v7, "transparent"

    move-object v1, v9

    invoke-direct/range {v1 .. v8}, Lcom/mediatek/engineermode/siminfo/SimInfoData;-><init>(Ljava/lang/String;Ljava/lang/String;I[Ljava/lang/String;ILjava/lang/String;Z)V

    invoke-interface {v0, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 216
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    new-instance v9, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    filled-new-array {v11, v10}, [Ljava/lang/String;

    move-result-object v5

    const-string v2, "CDR-PER-528"

    const-string v3, "EF-ADMINISTRATIVE DATA"

    const/16 v4, 0x6fad

    const-string v7, "transparent"

    move-object v1, v9

    invoke-direct/range {v1 .. v8}, Lcom/mediatek/engineermode/siminfo/SimInfoData;-><init>(Ljava/lang/String;Ljava/lang/String;I[Ljava/lang/String;ILjava/lang/String;Z)V

    invoke-interface {v0, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 220
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    new-instance v9, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    filled-new-array {v11, v10}, [Ljava/lang/String;

    move-result-object v5

    const-string v2, "CDR-PER-530"

    const-string v3, "EF-FPLMN"

    const/16 v4, 0x6f7b    # 3.9992E-41f

    const-string v7, "transparent"

    move-object v1, v9

    invoke-direct/range {v1 .. v8}, Lcom/mediatek/engineermode/siminfo/SimInfoData;-><init>(Ljava/lang/String;Ljava/lang/String;I[Ljava/lang/String;ILjava/lang/String;Z)V

    invoke-interface {v0, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 230
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    new-instance v9, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    filled-new-array {v12, v10}, [Ljava/lang/String;

    move-result-object v5

    const-string v2, "CDR-PER-536"

    const-string v3, "EF-PLMN NETWORK NAME"

    const/16 v4, 0x6fc5

    const-string v7, "linear fixed"

    move-object v1, v9

    invoke-direct/range {v1 .. v8}, Lcom/mediatek/engineermode/siminfo/SimInfoData;-><init>(Ljava/lang/String;Ljava/lang/String;I[Ljava/lang/String;ILjava/lang/String;Z)V

    invoke-interface {v0, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 234
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    new-instance v9, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    filled-new-array {v12, v10}, [Ljava/lang/String;

    move-result-object v5

    const-string v2, "CDR-PER-538"

    const-string v3, "EF-OPERATOR PLMN LIST"

    const/16 v4, 0x6fc6

    const-string v7, "transparent"

    move-object v1, v9

    invoke-direct/range {v1 .. v8}, Lcom/mediatek/engineermode/siminfo/SimInfoData;-><init>(Ljava/lang/String;Ljava/lang/String;I[Ljava/lang/String;ILjava/lang/String;Z)V

    invoke-interface {v0, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 238
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    new-instance v9, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    filled-new-array {v11, v12}, [Ljava/lang/String;

    move-result-object v5

    const-string v2, "CDR-PER-540"

    const-string v3, "EF-PLMN SELECTOR"

    const/16 v4, 0x6f30

    const-string v7, "transparent"

    move-object v1, v9

    invoke-direct/range {v1 .. v8}, Lcom/mediatek/engineermode/siminfo/SimInfoData;-><init>(Ljava/lang/String;Ljava/lang/String;I[Ljava/lang/String;ILjava/lang/String;Z)V

    .line 239
    invoke-interface {v0, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 242
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    new-instance v9, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    filled-new-array {v12, v10}, [Ljava/lang/String;

    move-result-object v5

    const-string v2, "CDR-PER-542"

    const-string v3, "EF-OPLMNAcT"

    const/16 v4, 0x6f61

    const-string v7, "transparent"

    move-object v1, v9

    invoke-direct/range {v1 .. v8}, Lcom/mediatek/engineermode/siminfo/SimInfoData;-><init>(Ljava/lang/String;Ljava/lang/String;I[Ljava/lang/String;ILjava/lang/String;Z)V

    invoke-interface {v0, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 245
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    new-instance v9, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    filled-new-array {v12, v10}, [Ljava/lang/String;

    move-result-object v5

    const-string v2, "CDR-PER-544"

    const-string v3, "EF-IMS PUBLIC USER IDENTITY"

    const/16 v4, 0x6f04

    const/4 v6, 0x3

    const-string v7, "linear fixed"

    move-object v1, v9

    invoke-direct/range {v1 .. v8}, Lcom/mediatek/engineermode/siminfo/SimInfoData;-><init>(Ljava/lang/String;Ljava/lang/String;I[Ljava/lang/String;ILjava/lang/String;Z)V

    invoke-interface {v0, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 248
    return-void
.end method


# virtual methods
.method loadIccCardType()V
    .locals 3

    .line 388
    invoke-static {}, Lcom/mediatek/telephony/MtkTelephonyManagerEx;->getDefault()Lcom/mediatek/telephony/MtkTelephonyManagerEx;

    move-result-object v0

    iget v1, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSubId:I

    invoke-virtual {v0, v1}, Lcom/mediatek/telephony/MtkTelephonyManagerEx;->getIccCardType(I)Ljava/lang/String;

    move-result-object v0

    .line 389
    .local v0, "IccCardType":Ljava/lang/String;
    const-string v1, "SIM"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 390
    const/4 v1, 0x0

    iput v1, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mIccCardType:I

    goto :goto_0

    .line 391
    :cond_0
    const-string v1, "USIM"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 392
    const/4 v1, 0x1

    iput v1, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mIccCardType:I

    goto :goto_0

    .line 394
    :cond_1
    const/4 v1, 0x2

    iput v1, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mIccCardType:I

    .line 396
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "IccCardType: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mIccCardType:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "SimInfo"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 397
    return-void
.end method

.method loadSimInfoData()V
    .locals 10

    .line 279
    const-string v0, ""

    .line 281
    .local v0, "SimInfoData":Ljava/lang/String;
    const/4 v1, 0x2

    const-string v2, "clean"

    invoke-virtual {p0, v1, v2}, Lcom/mediatek/engineermode/siminfo/SimInfo;->sendMsg(ILjava/lang/String;)V

    .line 283
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    iget-object v3, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    if-eqz v3, :cond_9

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-ge v2, v3, :cond_9

    .line 285
    iget-object v3, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    iget-object v3, v3, Lcom/mediatek/engineermode/siminfo/SimInfoData;->EF_Path:[Ljava/lang/String;

    iget v4, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mIccCardType:I

    aget-object v3, v3, v4

    const-string v4, "x"

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const-string v4, "is not support"

    if-eqz v3, :cond_0

    .line 286
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    invoke-interface {v5, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    iget-object v5, v5, Lcom/mediatek/engineermode/siminfo/SimInfoData;->name:Ljava/lang/String;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 287
    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/siminfo/SimInfo;->sendMsg(ILjava/lang/String;)V

    .line 288
    goto/16 :goto_5

    .line 290
    :cond_0
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    invoke-interface {v5, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    iget-object v5, v5, Lcom/mediatek/engineermode/siminfo/SimInfoData;->num:Ljava/lang/String;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ","

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    invoke-interface {v5, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    iget-object v5, v5, Lcom/mediatek/engineermode/siminfo/SimInfoData;->name:Ljava/lang/String;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v5, "SimInfo"

    invoke-static {v5, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 292
    iget-object v3, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    iget-boolean v3, v3, Lcom/mediatek/engineermode/siminfo/SimInfoData;->need_to_check:Z

    if-eqz v3, :cond_3

    .line 293
    iget v3, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mIccCardType:I

    const/4 v6, 0x1

    if-ne v3, v6, :cond_2

    .line 294
    const-string v3, "USIM need to check"

    invoke-static {v5, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 295
    iget-object v3, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mIccRecords:Lcom/android/internal/telephony/uicc/IccRecords;

    if-eqz v3, :cond_3

    .line 296
    check-cast v3, Lcom/mediatek/internal/telephony/uicc/MtkSIMRecords;

    sget-object v6, Lcom/mediatek/internal/telephony/uicc/IccServiceInfo$IccService;->OPLMNwACT:Lcom/mediatek/internal/telephony/uicc/IccServiceInfo$IccService;

    .line 298
    invoke-virtual {v3, v6}, Lcom/mediatek/internal/telephony/uicc/MtkSIMRecords;->getSIMServiceStatus(Lcom/mediatek/internal/telephony/uicc/IccServiceInfo$IccService;)Lcom/mediatek/internal/telephony/uicc/IccServiceInfo$IccServiceStatus;

    move-result-object v3

    .line 299
    .local v3, "iccSerStatus":Lcom/mediatek/internal/telephony/uicc/IccServiceInfo$IccServiceStatus;
    sget-object v6, Lcom/mediatek/internal/telephony/uicc/IccServiceInfo$IccServiceStatus;->ACTIVATED:Lcom/mediatek/internal/telephony/uicc/IccServiceInfo$IccServiceStatus;

    if-eq v3, v6, :cond_1

    .line 300
    const-string v6, "USIM not support EF-OPLMNAcT"

    invoke-static {v5, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 301
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    invoke-interface {v6, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    iget-object v6, v6, Lcom/mediatek/engineermode/siminfo/SimInfoData;->name:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 302
    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/siminfo/SimInfo;->sendMsg(ILjava/lang/String;)V

    .line 303
    goto/16 :goto_5

    .line 305
    .end local v3    # "iccSerStatus":Lcom/mediatek/internal/telephony/uicc/IccServiceInfo$IccServiceStatus;
    :cond_1
    goto :goto_1

    .line 306
    :cond_2
    if-nez v3, :cond_3

    .line 307
    const-string v3, "SIM need to check"

    invoke-static {v5, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 308
    iget-object v3, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mIccRecords:Lcom/android/internal/telephony/uicc/IccRecords;

    if-eqz v3, :cond_3

    .line 309
    check-cast v3, Lcom/mediatek/internal/telephony/uicc/MtkSIMRecords;

    sget-object v6, Lcom/mediatek/internal/telephony/uicc/IccServiceInfo$IccService;->PLMNsel:Lcom/mediatek/internal/telephony/uicc/IccServiceInfo$IccService;

    .line 311
    invoke-virtual {v3, v6}, Lcom/mediatek/internal/telephony/uicc/MtkSIMRecords;->getSIMServiceStatus(Lcom/mediatek/internal/telephony/uicc/IccServiceInfo$IccService;)Lcom/mediatek/internal/telephony/uicc/IccServiceInfo$IccServiceStatus;

    move-result-object v3

    .line 312
    .restart local v3    # "iccSerStatus":Lcom/mediatek/internal/telephony/uicc/IccServiceInfo$IccServiceStatus;
    sget-object v6, Lcom/mediatek/internal/telephony/uicc/IccServiceInfo$IccServiceStatus;->ACTIVATED:Lcom/mediatek/internal/telephony/uicc/IccServiceInfo$IccServiceStatus;

    if-eq v3, v6, :cond_3

    .line 313
    const-string v6, "SIM not support EF-PLMN SELECTOR"

    invoke-static {v5, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 314
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    invoke-interface {v6, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    iget-object v6, v6, Lcom/mediatek/engineermode/siminfo/SimInfoData;->name:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 315
    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/siminfo/SimInfo;->sendMsg(ILjava/lang/String;)V

    .line 316
    goto/16 :goto_5

    .line 322
    .end local v3    # "iccSerStatus":Lcom/mediatek/internal/telephony/uicc/IccServiceInfo$IccServiceStatus;
    :cond_3
    :goto_1
    iget-object v3, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    iget-object v3, v3, Lcom/mediatek/engineermode/siminfo/SimInfoData;->type:Ljava/lang/String;

    const-string v4, "transparent"

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const-string v4, " is empty"

    if-eqz v3, :cond_5

    .line 328
    invoke-static {}, Lcom/mediatek/telephony/MtkTelephonyManagerEx;->getDefault()Lcom/mediatek/telephony/MtkTelephonyManagerEx;

    move-result-object v3

    iget v5, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimType:I

    iget-object v6, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    .line 329
    invoke-interface {v6, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    iget v6, v6, Lcom/mediatek/engineermode/siminfo/SimInfoData;->Family:I

    iget-object v7, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    invoke-interface {v7, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    iget v7, v7, Lcom/mediatek/engineermode/siminfo/SimInfoData;->EF_id:I

    iget-object v8, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    .line 330
    invoke-interface {v8, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    iget-object v8, v8, Lcom/mediatek/engineermode/siminfo/SimInfoData;->EF_Path:[Ljava/lang/String;

    iget v9, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mIccCardType:I

    aget-object v8, v8, v9

    .line 328
    invoke-virtual {v3, v5, v6, v7, v8}, Lcom/mediatek/telephony/MtkTelephonyManagerEx;->loadEFTransparent(IIILjava/lang/String;)[B

    move-result-object v3

    .line 332
    .local v3, "data":[B
    if-eqz v3, :cond_4

    .line 333
    invoke-static {v3}, Lcom/android/internal/telephony/uicc/IccUtils;->bytesToHexString([B)Ljava/lang/String;

    move-result-object v0

    .line 335
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    invoke-interface {v5, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    iget-object v5, v5, Lcom/mediatek/engineermode/siminfo/SimInfoData;->name:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ":"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 336
    invoke-virtual {v0}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_2

    .line 339
    :cond_4
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    invoke-interface {v6, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    iget-object v6, v6, Lcom/mediatek/engineermode/siminfo/SimInfoData;->name:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 342
    :goto_2
    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/siminfo/SimInfo;->sendMsg(ILjava/lang/String;)V

    .end local v3    # "data":[B
    goto/16 :goto_4

    .line 344
    :cond_5
    iget-object v3, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    iget-object v3, v3, Lcom/mediatek/engineermode/siminfo/SimInfoData;->type:Ljava/lang/String;

    const-string v5, "linear fixed"

    invoke-virtual {v3, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_8

    .line 350
    invoke-static {}, Lcom/mediatek/telephony/MtkTelephonyManagerEx;->getDefault()Lcom/mediatek/telephony/MtkTelephonyManagerEx;

    move-result-object v3

    iget v5, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimType:I

    iget-object v6, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    .line 351
    invoke-interface {v6, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    iget v6, v6, Lcom/mediatek/engineermode/siminfo/SimInfoData;->Family:I

    iget-object v7, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    invoke-interface {v7, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    iget v7, v7, Lcom/mediatek/engineermode/siminfo/SimInfoData;->EF_id:I

    iget-object v8, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    .line 352
    invoke-interface {v8, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    iget-object v8, v8, Lcom/mediatek/engineermode/siminfo/SimInfoData;->EF_Path:[Ljava/lang/String;

    iget v9, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mIccCardType:I

    aget-object v8, v8, v9

    .line 350
    invoke-virtual {v3, v5, v6, v7, v8}, Lcom/mediatek/telephony/MtkTelephonyManagerEx;->loadEFLinearFixedAll(IIILjava/lang/String;)Ljava/util/List;

    move-result-object v3

    .line 354
    .local v3, "data":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    const-string v0, ""

    .line 355
    const/4 v5, 0x0

    .local v5, "j":I
    :goto_3
    if-eqz v3, :cond_6

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v6

    if-ge v5, v6, :cond_6

    .line 358
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    invoke-interface {v7, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    iget-object v7, v7, Lcom/mediatek/engineermode/siminfo/SimInfoData;->name:Ljava/lang/String;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "["

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, "]:"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 359
    invoke-interface {v3, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    invoke-virtual {v7}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "\n"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 355
    add-int/lit8 v5, v5, 0x1

    goto :goto_3

    .line 361
    .end local v5    # "j":I
    :cond_6
    if-nez v3, :cond_7

    .line 362
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    invoke-interface {v6, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/mediatek/engineermode/siminfo/SimInfoData;

    iget-object v6, v6, Lcom/mediatek/engineermode/siminfo/SimInfoData;->name:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 365
    :cond_7
    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/siminfo/SimInfo;->sendMsg(ILjava/lang/String;)V

    goto :goto_5

    .line 344
    .end local v3    # "data":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    :cond_8
    :goto_4
    nop

    .line 283
    :goto_5
    add-int/lit8 v2, v2, 0x1

    goto/16 :goto_0

    .line 369
    .end local v2    # "i":I
    :cond_9
    const-string v2, "update"

    invoke-virtual {p0, v1, v2}, Lcom/mediatek/engineermode/siminfo/SimInfo;->sendMsg(ILjava/lang/String;)V

    .line 370
    return-void
.end method

.method loadSubId()V
    .locals 5

    .line 373
    iget v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimType:I

    invoke-static {v0}, Landroid/telephony/SubscriptionManager;->getSubId(I)[I

    move-result-object v0

    .line 374
    .local v0, "subId":[I
    const-string v1, "SimInfo"

    if-eqz v0, :cond_0

    .line 375
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    array-length v3, v0

    if-ge v2, v3, :cond_0

    .line 376
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "subId["

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "]: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget v4, v0, v2

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 375
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 379
    .end local v2    # "i":I
    :cond_0
    if-eqz v0, :cond_2

    array-length v2, v0

    if-eqz v2, :cond_2

    const/4 v2, 0x0

    aget v3, v0, v2

    .line 380
    invoke-static {v3}, Landroid/telephony/SubscriptionManager;->isValidSubscriptionId(I)Z

    move-result v3

    if-nez v3, :cond_1

    goto :goto_1

    .line 383
    :cond_1
    aget v1, v0, v2

    iput v1, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSubId:I

    goto :goto_2

    .line 381
    :cond_2
    :goto_1
    const-string v2, "Invalid sub id"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 385
    :goto_2
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 5
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 153
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 154
    const v0, 0x7f0800da

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/siminfo/SimInfo;->setContentView(I)V

    .line 155
    invoke-virtual {p0}, Lcom/mediatek/engineermode/siminfo/SimInfo;->getIntent()Landroid/content/Intent;

    move-result-object v0

    const-string v1, "mSimType"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimType:I

    .line 156
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, " onCreate mSimType "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimType:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SimInfo"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 157
    const v0, 0x7f0606ae

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/siminfo/SimInfo;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mInfoFrameLayout:Landroid/widget/FrameLayout;

    .line 159
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mFirstBroadcast:Z

    .line 161
    new-instance v0, Lcom/mediatek/engineermode/siminfo/SimInfoUpdate;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/siminfo/SimInfoUpdate;-><init>(Landroid/app/Activity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->siminfo:Lcom/mediatek/engineermode/siminfo/NormalTableComponent;

    .line 162
    invoke-virtual {v0}, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->getView()Landroid/view/View;

    move-result-object v0

    .line 163
    .local v0, "view":Landroid/view/View;
    if-nez v0, :cond_0

    .line 164
    const-string v2, "updateUI view is null"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 165
    return-void

    .line 167
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mInfoFrameLayout:Landroid/widget/FrameLayout;

    invoke-virtual {v2}, Landroid/widget/FrameLayout;->removeAllViews()V

    .line 168
    iget-object v2, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mInfoFrameLayout:Landroid/widget/FrameLayout;

    invoke-virtual {v2, v0}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    .line 170
    const v2, 0x7f0606af

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/siminfo/SimInfo;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    iput-object v2, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->siminfo_status:Landroid/widget/TextView;

    .line 171
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "sim"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimType:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, " info status: UNReady"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 173
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    iput-object v2, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimInfoData:Ljava/util/List;

    .line 174
    invoke-direct {p0}, Lcom/mediatek/engineermode/siminfo/SimInfo;->updateSimInfoData()V

    .line 176
    iget v2, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mSimType:I

    invoke-static {v2}, Lcom/mediatek/engineermode/ModemCategory;->isSimReady(I)Z

    move-result v2

    .line 177
    .local v2, "recordsLoaded":Z
    if-eqz v2, :cond_1

    .line 178
    const-string v3, "loadInCardInfoBackground before registSimReceiver"

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 179
    invoke-direct {p0}, Lcom/mediatek/engineermode/siminfo/SimInfo;->loadInCardInfoBackground()V

    .line 182
    :cond_1
    invoke-virtual {p0, p0}, Lcom/mediatek/engineermode/siminfo/SimInfo;->registSimReceiver(Landroid/content/Context;)V

    .line 184
    return-void
.end method

.method public onDestroy()V
    .locals 2

    .line 406
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->SimCardChangedReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/siminfo/SimInfo;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 407
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mHandler:Landroid/os/Handler;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 408
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mHandler:Landroid/os/Handler;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 409
    const-string v0, "SimInfo"

    const-string v1, "unregisterReceiver SimCardChangedReceiver"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 410
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 411
    return-void
.end method

.method protected onResume()V
    .locals 0

    .line 401
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 402
    return-void
.end method

.method registSimReceiver(Landroid/content/Context;)V
    .locals 2
    .param p1, "context"    # Landroid/content/Context;

    .line 266
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    .line 267
    .local v0, "intentFilter":Landroid/content/IntentFilter;
    const-string v1, "android.intent.action.SIM_STATE_CHANGED"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 268
    iget-object v1, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->SimCardChangedReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {p1, v1, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    .line 269
    return-void
.end method

.method sendMsg(ILjava/lang/String;)V
    .locals 2
    .param p1, "MsgID"    # I
    .param p2, "MsgInfo"    # Ljava/lang/String;

    .line 272
    new-instance v0, Landroid/os/Message;

    invoke-direct {v0}, Landroid/os/Message;-><init>()V

    .line 273
    .local v0, "msg":Landroid/os/Message;
    iput p1, v0, Landroid/os/Message;->what:I

    .line 274
    iput-object p2, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 275
    iget-object v1, p0, Lcom/mediatek/engineermode/siminfo/SimInfo;->mHandler:Landroid/os/Handler;

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 276
    return-void
.end method
