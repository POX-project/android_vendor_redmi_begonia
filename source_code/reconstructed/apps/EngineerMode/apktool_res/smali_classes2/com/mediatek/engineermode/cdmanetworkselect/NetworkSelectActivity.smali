.class public Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;
.super Landroid/app/Activity;
.source "NetworkSelectActivity.java"

# interfaces
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# static fields
.field private static final CDMA_1X_ONLY:I = 0x5

.field private static final CDMA_1X_ONLY_INDEX:I = 0x1

.field private static final EVDO_ONLY:I = 0x6

.field private static final EVDO_ONLY_INDEX:I = 0x2

.field private static final EVENT_QUERY_EHRPD_ENABLE_DONE:I = 0x67

.field private static final EVENT_QUERY_NETWORKMODE_DONE:I = 0x65

.field private static final EVENT_SET_EHRPD_ENABLE_DONE:I = 0x68

.field private static final EVENT_SET_NETWORKMODE_DONE:I = 0x66

.field private static final GLOBAL_MODE:I = 0xa

.field private static final GLOBAL_MODE_INDEX:I = 0x3

.field private static final HYBRID:I = 0x4

.field private static final HYBRID_INDEX:I = 0x0

.field private static final LTE_CDMA_MODE:I = 0x8

.field private static final LTE_CDMA_MODE_INDEX:I = 0x4

.field private static final LTE_GSM_UMTS_MODE:I = 0x9

.field private static final LTE_GSM_UMTS_MODE_INDEX:I = 0x5

.field private static final TAG:Ljava/lang/String; = "NetworkMode_cdma"


# instance fields
.field private CdmaMode:[Ljava/lang/String;

.field private GsmMode:[Ljava/lang/String;

.field private adapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mDisableeHRPDCheckBox:Landroid/widget/CheckBox;

.field private mEHRPDFirstEnter:Z

.field private mFirstEnter:Z

.field private mHandler:Landroid/os/Handler;

.field private mPreferredNetworkHandler:Landroid/widget/AdapterView$OnItemSelectedListener;

.field private mPreferredNetworkSpinner:Landroid/widget/Spinner;

.field private mSimType:I

.field private mSubId:I

.field private mSupportMode:Z

.field private mTelephonyManager:Landroid/telephony/TelephonyManager;

.field selectNetworkMode:I


# direct methods
.method public constructor <init>()V
    .locals 4

    .line 28
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 48
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->selectNetworkMode:I

    .line 49
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mFirstEnter:Z

    .line 50
    iput-boolean v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mEHRPDFirstEnter:Z

    .line 51
    iput-boolean v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mSupportMode:Z

    .line 53
    iput v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mSubId:I

    .line 54
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mPreferredNetworkSpinner:Landroid/widget/Spinner;

    .line 55
    iput-object v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mDisableeHRPDCheckBox:Landroid/widget/CheckBox;

    .line 56
    iput-object v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->adapter:Landroid/widget/ArrayAdapter;

    .line 57
    const-string v1, "Hybrid"

    const-string v2, "CDMA 1X only"

    const-string v3, "EVDO only"

    filled-new-array {v1, v2, v3}, [Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->CdmaMode:[Ljava/lang/String;

    .line 61
    const-string v1, "LTE/GSM/UMTS/CDMA"

    const-string v2, "LTE/CDMA"

    const-string v3, "LTE/GSM/UMTS"

    filled-new-array {v1, v2, v3}, [Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->GsmMode:[Ljava/lang/String;

    .line 66
    iput-object v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mTelephonyManager:Landroid/telephony/TelephonyManager;

    .line 67
    new-instance v0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$1;-><init>(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mHandler:Landroid/os/Handler;

    .line 154
    new-instance v0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;-><init>(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mPreferredNetworkHandler:Landroid/widget/AdapterView$OnItemSelectedListener;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    .line 28
    iget-boolean v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mSupportMode:Z

    return v0
.end method

.method static synthetic access$002(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;
    .param p1, "x1"    # Z

    .line 28
    iput-boolean p1, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mSupportMode:Z

    return p1
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    .line 28
    iget-object v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mPreferredNetworkSpinner:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    .line 28
    iget-boolean v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mEHRPDFirstEnter:Z

    return v0
.end method

.method static synthetic access$202(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;
    .param p1, "x1"    # Z

    .line 28
    iput-boolean p1, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mEHRPDFirstEnter:Z

    return p1
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)Landroid/widget/CheckBox;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    .line 28
    iget-object v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mDisableeHRPDCheckBox:Landroid/widget/CheckBox;

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    .line 28
    invoke-direct {p0}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->queryeHRPDStatus()V

    return-void
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    .line 28
    iget-boolean v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mFirstEnter:Z

    return v0
.end method

.method static synthetic access$502(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;
    .param p1, "x1"    # Z

    .line 28
    iput-boolean p1, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mFirstEnter:Z

    return p1
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    .line 28
    iget v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mSubId:I

    return v0
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)Landroid/telephony/TelephonyManager;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    .line 28
    iget-object v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mTelephonyManager:Landroid/telephony/TelephonyManager;

    return-object v0
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    .line 28
    iget-object v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method private queryeHRPDStatus()V
    .locals 4

    .line 275
    const-string v0, "AT+eHRPD?"

    .line 276
    .local v0, "atCommand":Ljava/lang/String;
    const/4 v1, 0x3

    new-array v1, v1, [Ljava/lang/String;

    const/4 v2, 0x0

    aput-object v0, v1, v2

    const/4 v2, 0x1

    const-string v3, "+EHRPD:"

    aput-object v3, v1, v2

    const/4 v2, 0x2

    const-string v3, "DESTRILD:C2K"

    aput-object v3, v1, v2

    invoke-static {v1}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaCmdArr([Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    const/16 v2, 0x67

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->sendAtCommand([Ljava/lang/String;I)V

    .line 279
    return-void
.end method

.method private sendAtCommand([Ljava/lang/String;I)V
    .locals 2
    .param p1, "command"    # [Ljava/lang/String;
    .param p2, "msg"    # I

    .line 296
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sendAtCommand() "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v1, 0x0

    aget-object v1, p1, v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "NetworkMode_cdma"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 297
    iget v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mSimType:I

    iget-object v1, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mHandler:Landroid/os/Handler;

    invoke-virtual {v1, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v1

    invoke-static {v0, p1, v1}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 298
    return-void
.end method

.method private seteHRPDStatus(I)V
    .locals 4
    .param p1, "state"    # I

    .line 282
    const/4 v0, 0x0

    .line 283
    .local v0, "atCommand":Ljava/lang/String;
    const/4 v1, 0x1

    if-eqz p1, :cond_1

    if-eq p1, v1, :cond_0

    goto :goto_0

    .line 288
    :cond_0
    const-string v0, "AT+eHRPD=1"

    goto :goto_0

    .line 285
    :cond_1
    const-string v0, "AT+eHRPD=0"

    .line 286
    nop

    .line 291
    :goto_0
    const/4 v2, 0x3

    new-array v2, v2, [Ljava/lang/String;

    const/4 v3, 0x0

    aput-object v0, v2, v3

    const-string v3, ""

    aput-object v3, v2, v1

    const/4 v1, 0x2

    const-string v3, "DESTRILD:C2K"

    aput-object v3, v2, v1

    invoke-static {v2}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaCmdArr([Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    const/16 v2, 0x68

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->sendAtCommand([Ljava/lang/String;I)V

    .line 293
    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 2
    .param p1, "view"    # Landroid/widget/CompoundButton;
    .param p2, "isChecked"    # Z

    .line 302
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "m4GDataOnlyCheckBox check is"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "NetworkMode_cdma"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 303
    iget-boolean v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mEHRPDFirstEnter:Z

    if-nez v0, :cond_0

    .line 304
    iget-object v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mDisableeHRPDCheckBox:Landroid/widget/CheckBox;

    invoke-virtual {v0, p2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 305
    xor-int/lit8 v0, p2, 0x1

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->seteHRPDStatus(I)V

    .line 307
    :cond_0
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 1
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 208
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 209
    const v0, 0x7f0800a9

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->setContentView(I)V

    .line 210
    const v0, 0x7f0605b2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mPreferredNetworkSpinner:Landroid/widget/Spinner;

    .line 211
    const v0, 0x7f060326

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mDisableeHRPDCheckBox:Landroid/widget/CheckBox;

    .line 212
    const-string v0, "phone"

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/telephony/TelephonyManager;

    iput-object v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mTelephonyManager:Landroid/telephony/TelephonyManager;

    .line 213
    return-void
.end method

.method protected onResume()V
    .locals 7

    .line 217
    invoke-virtual {p0}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    .line 218
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "mSimType"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mSimType:I

    .line 219
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "onCreate mSimType "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mSimType:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "NetworkMode_cdma"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 222
    iget v1, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mSimType:I

    invoke-static {v1}, Landroid/telephony/SubscriptionManager;->getSubId(I)[I

    move-result-object v1

    .line 223
    .local v1, "subId":[I
    if-eqz v1, :cond_0

    .line 224
    const/4 v4, 0x0

    .local v4, "i":I
    :goto_0
    array-length v5, v1

    if-ge v4, v5, :cond_0

    .line 225
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "subId["

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, "]: "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget v6, v1, v4

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v3, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 224
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 228
    .end local v4    # "i":I
    :cond_0
    if-eqz v1, :cond_2

    array-length v4, v1

    if-eqz v4, :cond_2

    aget v4, v1, v2

    .line 229
    invoke-static {v4}, Landroid/telephony/SubscriptionManager;->isValidSubscriptionId(I)Z

    move-result v4

    if-nez v4, :cond_1

    goto :goto_1

    .line 233
    :cond_1
    aget v2, v1, v2

    iput v2, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mSubId:I

    goto :goto_2

    .line 230
    :cond_2
    :goto_1
    const-string v4, "Invalid sub id, please insert SIM Card!"

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 231
    const-string v2, "Invalid sub id"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 237
    :goto_2
    new-instance v2, Landroid/widget/ArrayAdapter;

    const v3, 0x1090008

    invoke-direct {v2, p0, v3}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v2, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->adapter:Landroid/widget/ArrayAdapter;

    .line 240
    const v3, 0x1090009

    invoke-virtual {v2, v3}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 241
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_3
    iget-object v3, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->CdmaMode:[Ljava/lang/String;

    array-length v4, v3

    if-ge v2, v4, :cond_3

    .line 242
    iget-object v4, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->adapter:Landroid/widget/ArrayAdapter;

    aget-object v3, v3, v2

    invoke-virtual {v4, v3}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 241
    add-int/lit8 v2, v2, 0x1

    goto :goto_3

    .line 245
    .end local v2    # "i":I
    :cond_3
    const/4 v2, 0x0

    .restart local v2    # "i":I
    :goto_4
    iget-object v3, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->GsmMode:[Ljava/lang/String;

    array-length v4, v3

    if-ge v2, v4, :cond_4

    .line 246
    iget-object v4, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->adapter:Landroid/widget/ArrayAdapter;

    aget-object v3, v3, v2

    invoke-virtual {v4, v3}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 245
    add-int/lit8 v2, v2, 0x1

    goto :goto_4

    .line 249
    .end local v2    # "i":I
    :cond_4
    iget-object v2, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mPreferredNetworkSpinner:Landroid/widget/Spinner;

    iget-object v3, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->adapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v2, v3}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 251
    iget-object v2, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mPreferredNetworkSpinner:Landroid/widget/Spinner;

    iget-object v3, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mPreferredNetworkHandler:Landroid/widget/AdapterView$OnItemSelectedListener;

    invoke-virtual {v2, v3}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 252
    iget-object v2, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mDisableeHRPDCheckBox:Landroid/widget/CheckBox;

    invoke-virtual {v2, p0}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 253
    const/4 v2, 0x1

    iput-boolean v2, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->mFirstEnter:Z

    .line 255
    new-instance v2, Ljava/lang/Thread;

    new-instance v3, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$3;

    invoke-direct {v3, p0}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$3;-><init>(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)V

    invoke-direct {v2, v3}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 268
    invoke-virtual {v2}, Ljava/lang/Thread;->start()V

    .line 270
    invoke-direct {p0}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->queryeHRPDStatus()V

    .line 271
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 272
    return-void
.end method
