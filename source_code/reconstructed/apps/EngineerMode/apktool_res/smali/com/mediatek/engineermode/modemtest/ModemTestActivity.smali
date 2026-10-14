.class public Lcom/mediatek/engineermode/modemtest/ModemTestActivity;
.super Landroid/app/Activity;
.source "ModemTestActivity.java"

# interfaces
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# static fields
.field private static final ATTACH_MODE_NOT_SPECIFY:I = -0x1

.field private static final CMD_LENGTH:I = 0x6

.field private static final DOCOMO_OPTION:I = 0x80

.field private static final FLAG_NOT_DETECT_CDMA_CARD:I = 0x100000

.field private static final FLAG_UNLOCK:I = 0x200000

.field private static final INDEX_SPIRENT:I = 0x1

.field private static final MODEM_CDMA:I = 0x8

.field private static final MODEM_CLSC:I = 0xa

.field private static final MODEM_CTA:I = 0x1

.field private static final MODEM_FACTORY:I = 0x6

.field private static final MODEM_FTA:I = 0x2

.field private static final MODEM_IOT:I = 0x3

.field private static final MODEM_LAA:I = 0xc

.field private static final MODEM_NONE:I = 0x0

.field private static final MODEM_OPERATOR:I = 0x5

.field private static final MODEM_QUERY:I = 0x4

.field private static final MODEM_QUERY_CDMA:I = 0x7

.field private static final MODEM_QUERY_CLSC:I = 0x9

.field private static final MODEM_QUERY_LAA:I = 0xb

.field private static final MODE_LENGTH:I = 0x3

.field private static final PCH_CALL_PREFER:I = 0x1

.field private static final PCH_DATA_PREFER:I = 0x0

.field private static final REBOOT_DIALOG:I = 0x7d0

.field private static final SOFTBANK_OPTION:I = 0x100

.field public static final TAG:Ljava/lang/String; = "ModemTest"


# instance fields
.field private final mATCmdHander:Landroid/os/Handler;

.field private mC2kBtn:Landroid/widget/Button;

.field private mCdmaOption:I

.field private mCdmaSimSettingCheckBox:Landroid/widget/CheckBox;

.field private mCtaBtn:Landroid/widget/Button;

.field private mCtaOption:I

.field private mCurrentFlag:I

.field private mCurrentMode:I

.field private mFactoryBtn:Landroid/widget/Button;

.field private mFirstEntry:Z

.field private mFtaBtn:Landroid/widget/Button;

.field private mFtaOption:I

.field private mFtaOptionsArray:[Ljava/lang/String;

.field private mIotBtn:Landroid/widget/Button;

.field private mIotOption:I

.field private mIotOptionsArray:[Ljava/lang/String;

.field private mLaaCheckBox:Landroid/widget/CheckBox;

.field private mNoneBtn:Landroid/widget/Button;

.field private mOperatorBtn:Landroid/widget/Button;

.field private mOperatorOption:I

.field private mOperatorOptionsArray:[Ljava/lang/String;

.field private mTextView:Landroid/widget/TextView;

.field private mUnlockCheckBox:Landroid/widget/CheckBox;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 68
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 101
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCtaOption:I

    .line 102
    iput v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mIotOption:I

    .line 103
    iput v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mFtaOption:I

    .line 104
    iput v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mOperatorOption:I

    .line 105
    iput v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCdmaOption:I

    .line 123
    iput v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCurrentMode:I

    .line 124
    iput v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCurrentFlag:I

    .line 126
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mFirstEntry:Z

    .line 127
    new-instance v0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$1;-><init>(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mATCmdHander:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;I)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/modemtest/ModemTestActivity;
    .param p1, "x1"    # I

    .line 68
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->getToastString(I)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;[Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/modemtest/ModemTestActivity;
    .param p1, "x1"    # [Ljava/lang/String;

    .line 68
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->handleQuery([Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/modemtest/ModemTestActivity;
    .param p1, "x1"    # I

    .line 68
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->setGprsTransferType(I)V

    return-void
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    .line 68
    iget v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCtaOption:I

    return v0
.end method

.method static synthetic access$1102(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/modemtest/ModemTestActivity;
    .param p1, "x1"    # I

    .line 68
    iput p1, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCtaOption:I

    return p1
.end method

.method static synthetic access$1200(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    .line 68
    iget v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mFtaOption:I

    return v0
.end method

.method static synthetic access$1202(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/modemtest/ModemTestActivity;
    .param p1, "x1"    # I

    .line 68
    iput p1, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mFtaOption:I

    return p1
.end method

.method static synthetic access$1300(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    .line 68
    iget v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mIotOption:I

    return v0
.end method

.method static synthetic access$1302(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/modemtest/ModemTestActivity;
    .param p1, "x1"    # I

    .line 68
    iput p1, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mIotOption:I

    return p1
.end method

.method static synthetic access$1400(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    .line 68
    iget v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mOperatorOption:I

    return v0
.end method

.method static synthetic access$1402(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/modemtest/ModemTestActivity;
    .param p1, "x1"    # I

    .line 68
    iput p1, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mOperatorOption:I

    return p1
.end method

.method static synthetic access$1500(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    .line 68
    invoke-direct {p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->attachOrDetachGprs()V

    return-void
.end method

.method static synthetic access$1600(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    .line 68
    iget v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCdmaOption:I

    return v0
.end method

.method static synthetic access$1602(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/modemtest/ModemTestActivity;
    .param p1, "x1"    # I

    .line 68
    iput p1, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCdmaOption:I

    return p1
.end method

.method static synthetic access$1700(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    .line 68
    invoke-direct {p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->setCdmaOption()V

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    .line 68
    invoke-direct {p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->queryCdmaOption()V

    return-void
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    .line 68
    invoke-direct {p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->queryUnlockOption()V

    return-void
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;[Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/modemtest/ModemTestActivity;
    .param p1, "x1"    # [Ljava/lang/String;

    .line 68
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->handleQueryCdma([Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;[Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/modemtest/ModemTestActivity;
    .param p1, "x1"    # [Ljava/lang/String;

    .line 68
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->handleQueryUnlock([Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;[Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/modemtest/ModemTestActivity;
    .param p1, "x1"    # [Ljava/lang/String;

    .line 68
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->handleQueryLaa([Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    .line 68
    invoke-direct {p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->disableAllButton()V

    return-void
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;Ljava/lang/String;II)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/modemtest/ModemTestActivity;
    .param p1, "x1"    # Ljava/lang/String;
    .param p2, "x2"    # I
    .param p3, "x3"    # I

    .line 68
    invoke-direct {p0, p1, p2, p3}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->sendATCommad(Ljava/lang/String;II)V

    return-void
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    .line 68
    iget v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCurrentMode:I

    return v0
.end method

.method private attachOrDetachGprs()V
    .locals 6

    .line 684
    iget v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mOperatorOption:I

    and-int/lit16 v1, v0, 0x80

    const/4 v2, 0x0

    const-string v3, ""

    const-string v4, "persist.vendor.radio.gprs.attach.type"

    const-string v5, "ModemTest"

    if-nez v1, :cond_1

    and-int/lit16 v0, v0, 0x100

    if-eqz v0, :cond_0

    goto :goto_0

    .line 690
    :cond_0
    const-string v0, "Dettach GPRS for DoCoMo/Softband"

    invoke-static {v5, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 691
    const-string v0, "0"

    invoke-static {v4, v0}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 692
    const-string v0, "AT+EGTYPE=0,1"

    filled-new-array {v0, v3}, [Ljava/lang/String;

    move-result-object v0

    .line 693
    .local v0, "cmdStr":[Ljava/lang/String;
    invoke-static {v0, v2}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    goto :goto_1

    .line 685
    .end local v0    # "cmdStr":[Ljava/lang/String;
    :cond_1
    :goto_0
    const-string v0, "Attach GPRS for DoCoMo/Softband"

    invoke-static {v5, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 686
    const-string v0, "1"

    invoke-static {v4, v0}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 687
    const-string v0, "AT+EGTYPE=1,1"

    filled-new-array {v0, v3}, [Ljava/lang/String;

    move-result-object v0

    .line 688
    .restart local v0    # "cmdStr":[Ljava/lang/String;
    invoke-static {v0, v2}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 689
    .end local v0    # "cmdStr":[Ljava/lang/String;
    nop

    .line 695
    :goto_1
    return-void
.end method

.method private disableAllButton()V
    .locals 2

    .line 466
    iget-object v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mNoneBtn:Landroid/widget/Button;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 467
    iget-object v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mFactoryBtn:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 468
    iget-object v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCtaBtn:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 469
    iget-object v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mFtaBtn:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 470
    iget-object v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mIotBtn:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 471
    iget-object v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mOperatorBtn:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 472
    iget-object v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mC2kBtn:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 473
    iget-object v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mUnlockCheckBox:Landroid/widget/CheckBox;

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 474
    const/16 v0, 0x7d0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->showDialog(I)V

    .line 475
    return-void
.end method

.method private getToastString(I)Ljava/lang/String;
    .locals 1
    .param p1, "what"    # I

    .line 227
    if-eqz p1, :cond_5

    const/4 v0, 0x1

    if-eq p1, v0, :cond_4

    const/4 v0, 0x2

    if-eq p1, v0, :cond_3

    const/4 v0, 0x3

    if-eq p1, v0, :cond_2

    const/4 v0, 0x5

    if-eq p1, v0, :cond_1

    const/4 v0, 0x6

    if-eq p1, v0, :cond_0

    .line 241
    const-string v0, ""

    return-object v0

    .line 239
    :cond_0
    const-string v0, "MODEM_FACTORY"

    return-object v0

    .line 237
    :cond_1
    const-string v0, "MODEM_OPERATOR"

    return-object v0

    .line 235
    :cond_2
    const-string v0, "MODEM_IOT"

    return-object v0

    .line 233
    :cond_3
    const-string v0, "MODEM_FTA"

    return-object v0

    .line 231
    :cond_4
    const-string v0, "MODEM_CTA"

    return-object v0

    .line 229
    :cond_5
    const-string v0, "MODEM_NONE"

    return-object v0
.end method

.method private handleQuery([Ljava/lang/String;)V
    .locals 17
    .param p1, "data"    # [Ljava/lang/String;

    .line 356
    move-object/from16 v1, p0

    move-object/from16 v2, p1

    if-nez v2, :cond_0

    .line 357
    const-string v0, "The returned data is wrong."

    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 358
    return-void

    .line 360
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "data length is "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v3, v2

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, "ModemTest"

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 361
    const/4 v0, 0x0

    .line 362
    .local v0, "i":I
    array-length v4, v2

    const/4 v5, 0x0

    move v6, v5

    :goto_0
    if-ge v6, v4, :cond_2

    aget-object v7, v2, v6

    .line 363
    .local v7, "str":Ljava/lang/String;
    if-eqz v7, :cond_1

    .line 364
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "data["

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, "] is : "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v3, v8}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 366
    :cond_1
    nop

    .end local v7    # "str":Ljava/lang/String;
    add-int/lit8 v0, v0, 0x1

    .line 362
    add-int/lit8 v6, v6, 0x1

    goto :goto_0

    .line 369
    .end local v0    # "i":I
    :cond_2
    array-length v0, v2

    if-lez v0, :cond_10

    aget-object v0, v2, v5

    if-eqz v0, :cond_10

    aget-object v0, v2, v5

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v0

    const/4 v4, 0x6

    if-le v0, v4, :cond_10

    .line 370
    aget-object v0, v2, v5

    const/4 v4, 0x7

    aget-object v6, v2, v5

    invoke-virtual {v6}, Ljava/lang/String;->length()I

    move-result v6

    invoke-virtual {v0, v4, v6}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v4

    .line 371
    .local v4, "mode":Ljava/lang/String;
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "mode is "

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 372
    invoke-virtual {v4}, Ljava/lang/String;->length()I

    move-result v0

    const/4 v6, 0x3

    if-lt v0, v6, :cond_f

    .line 373
    const/4 v0, 0x1

    invoke-virtual {v4, v5, v0}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v6

    .line 374
    .local v6, "subMode":Ljava/lang/String;
    const/4 v7, 0x2

    invoke-virtual {v4}, Ljava/lang/String;->length()I

    move-result v8

    invoke-virtual {v4, v7, v8}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v7

    .line 375
    .local v7, "subCtaMode":Ljava/lang/String;
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "subMode is "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v3, v8}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 376
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "subCtaMode is "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v3, v8}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 377
    invoke-static {v6}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v8

    iput v8, v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCurrentMode:I

    .line 378
    invoke-static {v7}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v8

    iput v8, v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCurrentFlag:I

    .line 379
    invoke-direct {v1, v8}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->handleQueryCdmaSimSetting(I)V

    .line 380
    const-string v8, "0"

    invoke-virtual {v8, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_3

    .line 381
    iget-object v0, v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mTextView:Landroid/widget/TextView;

    const-string v3, "The current mode is none"

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto/16 :goto_7

    .line 382
    :cond_3
    const-string v8, "1"

    invoke-virtual {v8, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_4

    .line 383
    iget-object v0, v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mTextView:Landroid/widget/TextView;

    const-string v3, "The current mode is Integrity Off"

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto/16 :goto_7

    .line 384
    :cond_4
    const-string v8, "2"

    invoke-virtual {v8, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    const-string v9, "Exception when transfer subFtaMode"

    const-string v10, ","

    const-string v11, "(val & (1 << j)) is "

    const-string v12, "j ==== "

    const-string v13, "val is "

    if-eqz v8, :cond_7

    .line 385
    iget-object v8, v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mTextView:Landroid/widget/TextView;

    const-string v14, "The current mode is FTA:"

    invoke-virtual {v8, v14}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 387
    :try_start_0
    iget-object v8, v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mFtaOptionsArray:[Ljava/lang/String;

    array-length v8, v8

    .line 388
    .local v8, "ftaLength":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    const-string v15, "ftaLength is "

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-static {v3, v14}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 389
    invoke-static {v7}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v14

    invoke-virtual {v14}, Ljava/lang/Integer;->intValue()I

    move-result v14

    .line 390
    .local v14, "val":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-static {v3, v13}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 391
    const-string v13, "The current mode is FTA: "

    .line 392
    .local v13, "text":Ljava/lang/String;
    const/4 v15, 0x0

    .local v15, "j":I
    :goto_1
    if-ge v15, v8, :cond_6

    .line 393
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v3, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 394
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    shl-int v16, v0, v15

    and-int v0, v14, v16

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 396
    const/4 v0, 0x1

    shl-int v5, v0, v15

    and-int v0, v14, v5

    if-eqz v0, :cond_5

    .line 397
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mFtaOptionsArray:[Ljava/lang/String;

    aget-object v5, v5, v15

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    move-object v13, v0

    .line 392
    :cond_5
    add-int/lit8 v15, v15, 0x1

    const/4 v0, 0x1

    const/4 v5, 0x0

    goto :goto_1

    .line 401
    .end local v15    # "j":I
    :cond_6
    invoke-virtual {v13}, Ljava/lang/String;->length()I

    move-result v0

    const/4 v5, 0x1

    sub-int/2addr v0, v5

    const/4 v5, 0x0

    invoke-virtual {v13, v5, v0}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    .line 402
    .end local v13    # "text":Ljava/lang/String;
    .local v0, "text":Ljava/lang/String;
    iget-object v5, v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mTextView:Landroid/widget/TextView;

    invoke-virtual {v5, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .end local v0    # "text":Ljava/lang/String;
    .end local v8    # "ftaLength":I
    .end local v14    # "val":I
    goto :goto_2

    .line 403
    :catch_0
    move-exception v0

    .line 404
    .local v0, "e":Ljava/lang/NumberFormatException;
    invoke-virtual {v0}, Ljava/lang/NumberFormatException;->printStackTrace()V

    .line 405
    invoke-static {v3, v9}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 406
    .end local v0    # "e":Ljava/lang/NumberFormatException;
    :goto_2
    goto/16 :goto_7

    .line 407
    :cond_7
    const-string v0, "3"

    invoke-virtual {v0, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_a

    .line 408
    iget-object v0, v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mTextView:Landroid/widget/TextView;

    const-string v5, "The current mode is IOT:"

    invoke-virtual {v0, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 410
    :try_start_1
    iget-object v0, v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mIotOptionsArray:[Ljava/lang/String;

    array-length v0, v0

    .line 411
    .local v0, "iotLength":I
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "iotLength is "

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v3, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 412
    invoke-static {v7}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    .line 413
    .local v5, "val":I
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v3, v8}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 414
    const-string v8, "The current mode is IOT: "

    .line 415
    .local v8, "text":Ljava/lang/String;
    const/4 v9, 0x0

    .local v9, "j":I
    :goto_3
    add-int/lit8 v13, v0, -0x1

    if-ge v9, v13, :cond_9

    .line 416
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-static {v3, v13}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 417
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v14, 0x1

    shl-int v15, v14, v9

    and-int/2addr v15, v5

    invoke-virtual {v13, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-static {v3, v13}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 419
    shl-int v13, v14, v9

    and-int/2addr v13, v5

    if-eqz v13, :cond_8

    .line 420
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v14, v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mIotOptionsArray:[Ljava/lang/String;

    add-int/lit8 v15, v9, 0x1

    aget-object v14, v14, v15

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    move-object v8, v13

    .line 415
    :cond_8
    add-int/lit8 v9, v9, 0x1

    goto :goto_3

    .line 424
    .end local v9    # "j":I
    :cond_9
    invoke-virtual {v8}, Ljava/lang/String;->length()I

    move-result v9

    const/4 v10, 0x1

    sub-int/2addr v9, v10

    const/4 v10, 0x0

    invoke-virtual {v8, v10, v9}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v9

    move-object v8, v9

    .line 425
    iget-object v9, v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mTextView:Landroid/widget/TextView;

    invoke-virtual {v9, v8}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V
    :try_end_1
    .catch Ljava/lang/NumberFormatException; {:try_start_1 .. :try_end_1} :catch_1

    .end local v0    # "iotLength":I
    .end local v5    # "val":I
    .end local v8    # "text":Ljava/lang/String;
    goto :goto_4

    .line 426
    :catch_1
    move-exception v0

    .line 427
    .local v0, "e":Ljava/lang/NumberFormatException;
    invoke-virtual {v0}, Ljava/lang/NumberFormatException;->printStackTrace()V

    .line 428
    const-string v5, "Exception when transfer subIotMode"

    invoke-static {v3, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 429
    .end local v0    # "e":Ljava/lang/NumberFormatException;
    :goto_4
    goto/16 :goto_7

    .line 430
    :cond_a
    const-string v0, "4"

    invoke-virtual {v0, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_d

    .line 431
    iget-object v0, v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mTextView:Landroid/widget/TextView;

    const-string v5, "The current mode is Operator."

    invoke-virtual {v0, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 433
    :try_start_2
    iget-object v0, v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mOperatorOptionsArray:[Ljava/lang/String;

    array-length v0, v0

    .line 434
    .local v0, "operatorLength":I
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "operatorLength is "

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v3, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 435
    invoke-static {v7}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    .line 436
    .restart local v5    # "val":I
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v3, v8}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 437
    const-string v8, "The current mode is Operator: "

    .line 438
    .restart local v8    # "text":Ljava/lang/String;
    const/4 v13, 0x0

    .local v13, "j":I
    :goto_5
    if-ge v13, v0, :cond_c

    .line 439
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-static {v3, v14}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 440
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v15, 0x1

    shl-int v16, v15, v13

    and-int v15, v5, v16

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-static {v3, v14}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 442
    const/4 v14, 0x1

    shl-int v15, v14, v13

    and-int v14, v5, v15

    if-eqz v14, :cond_b

    .line 443
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v15, v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mOperatorOptionsArray:[Ljava/lang/String;

    aget-object v15, v15, v13

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    move-object v8, v14

    .line 438
    :cond_b
    add-int/lit8 v13, v13, 0x1

    goto :goto_5

    .line 448
    .end local v13    # "j":I
    :cond_c
    invoke-virtual {v8}, Ljava/lang/String;->length()I

    move-result v10

    const/4 v11, 0x1

    sub-int/2addr v10, v11

    const/4 v11, 0x0

    invoke-virtual {v8, v11, v10}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v10

    move-object v8, v10

    .line 449
    iget-object v10, v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mTextView:Landroid/widget/TextView;

    invoke-virtual {v10, v8}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V
    :try_end_2
    .catch Ljava/lang/NumberFormatException; {:try_start_2 .. :try_end_2} :catch_2

    .end local v0    # "operatorLength":I
    .end local v5    # "val":I
    .end local v8    # "text":Ljava/lang/String;
    goto :goto_6

    .line 450
    :catch_2
    move-exception v0

    .line 451
    .local v0, "e":Ljava/lang/NumberFormatException;
    invoke-virtual {v0}, Ljava/lang/NumberFormatException;->printStackTrace()V

    .line 452
    invoke-static {v3, v9}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 453
    .end local v0    # "e":Ljava/lang/NumberFormatException;
    :goto_6
    goto :goto_7

    .line 454
    :cond_d
    const-string v0, "5"

    invoke-virtual {v0, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_e

    .line 455
    iget-object v0, v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mTextView:Landroid/widget/TextView;

    const-string v3, "The current mode is Factory."

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 457
    .end local v6    # "subMode":Ljava/lang/String;
    .end local v7    # "subCtaMode":Ljava/lang/String;
    :cond_e
    :goto_7
    goto :goto_8

    .line 458
    :cond_f
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "mode len is "

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/String;->length()I

    move-result v5

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 460
    .end local v4    # "mode":Ljava/lang/String;
    :goto_8
    goto :goto_9

    .line 461
    :cond_10
    const-string v0, "The data returned is not right."

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 463
    :goto_9
    return-void
.end method

.method private handleQueryCdma([Ljava/lang/String;)V
    .locals 8
    .param p1, "data"    # [Ljava/lang/String;

    .line 849
    const/4 v0, 0x0

    if-nez p1, :cond_0

    .line 850
    const-string v1, "The returned data is wrong."

    invoke-static {p0, v1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 852
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 853
    return-void

    .line 855
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "data length is "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v2, p1

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ModemTest"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 856
    const/4 v1, 0x0

    .line 857
    .local v1, "i":I
    array-length v3, p1

    move v4, v0

    :goto_0
    if-ge v4, v3, :cond_2

    aget-object v5, p1, v4

    .line 858
    .local v5, "str":Ljava/lang/String;
    if-eqz v5, :cond_1

    .line 859
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "data["

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, "] is : "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v6}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 861
    :cond_1
    nop

    .end local v5    # "str":Ljava/lang/String;
    add-int/lit8 v1, v1, 0x1

    .line 857
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 864
    .end local v1    # "i":I
    :cond_2
    aget-object v1, p1, v0

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    const/4 v3, 0x6

    if-le v1, v3, :cond_3

    .line 865
    aget-object v1, p1, v0

    aget-object v0, p1, v0

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v0

    invoke-virtual {v1, v3, v0}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v0

    .line 866
    .local v0, "mode":Ljava/lang/String;
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    const/4 v3, 0x1

    sub-int/2addr v1, v3

    invoke-virtual {v0, v3, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    .line 867
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mode is "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 868
    iget-object v1, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mTextView:Landroid/widget/TextView;

    invoke-virtual {v1}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v1

    invoke-interface {v1}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v1

    .line 869
    .local v1, "text":Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "\nThe current C2K mode is "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 870
    iget-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mTextView:Landroid/widget/TextView;

    invoke-virtual {v2, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 871
    .end local v0    # "mode":Ljava/lang/String;
    .end local v1    # "text":Ljava/lang/String;
    goto :goto_1

    .line 872
    :cond_3
    const-string v0, "The data returned is not right."

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 874
    :goto_1
    return-void
.end method

.method private handleQueryCdmaSimSetting(I)V
    .locals 2
    .param p1, "flag"    # I

    .line 762
    const/high16 v0, 0x100000

    and-int/2addr v0, p1

    const-string v1, "ModemTest"

    if-eqz v0, :cond_0

    .line 763
    const-string v0, "handleQueryCdmaSimSetting set check true"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 764
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mFirstEntry:Z

    .line 765
    iget-object v1, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCdmaSimSettingCheckBox:Landroid/widget/CheckBox;

    invoke-virtual {v1, v0}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_0

    .line 767
    :cond_0
    const-string v0, "handleQueryCdmaSimSetting set check false"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 768
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mFirstEntry:Z

    .line 769
    iget-object v1, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCdmaSimSettingCheckBox:Landroid/widget/CheckBox;

    invoke-virtual {v1, v0}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 771
    :goto_0
    return-void
.end method

.method private handleQueryLaa([Ljava/lang/String;)V
    .locals 5
    .param p1, "data"    # [Ljava/lang/String;

    .line 800
    const/4 v0, 0x0

    if-eqz p1, :cond_3

    array-length v1, p1

    if-gtz v1, :cond_0

    goto :goto_1

    .line 806
    :cond_0
    aget-object v1, p1, v0

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    const-string v2, "+ESBP:"

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v3

    const-string v4, "ModemTest"

    if-le v1, v3, :cond_2

    .line 807
    aget-object v1, p1, v0

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    .line 808
    .local v1, "str":Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "laa vale is "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 809
    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    .line 810
    .local v2, "value":I
    iget-object v3, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mLaaCheckBox:Landroid/widget/CheckBox;

    const/4 v4, 0x0

    invoke-virtual {v3, v4}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 811
    iget-object v3, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mLaaCheckBox:Landroid/widget/CheckBox;

    const/4 v4, 0x1

    if-ne v2, v4, :cond_1

    move v0, v4

    :cond_1
    invoke-virtual {v3, v0}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 812
    iget-object v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mLaaCheckBox:Landroid/widget/CheckBox;

    invoke-virtual {v0, p0}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 813
    .end local v1    # "str":Ljava/lang/String;
    .end local v2    # "value":I
    goto :goto_0

    .line 814
    :cond_2
    const-string v0, "LAA: The data returned is not right."

    invoke-static {v4, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 816
    :goto_0
    return-void

    .line 801
    :cond_3
    :goto_1
    const-string v1, "The returned data is wrong."

    invoke-static {p0, v1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 803
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 804
    return-void
.end method

.method private handleQueryUnlock([Ljava/lang/String;)V
    .locals 5
    .param p1, "data"    # [Ljava/lang/String;

    .line 830
    const/4 v0, 0x0

    if-eqz p1, :cond_3

    array-length v1, p1

    if-gtz v1, :cond_0

    goto :goto_1

    .line 836
    :cond_0
    aget-object v1, p1, v0

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    const-string v2, "+ECLSC:"

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v3

    const-string v4, "ModemTest"

    if-le v1, v3, :cond_2

    .line 837
    aget-object v1, p1, v0

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    .line 838
    .local v1, "str":Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "unlock setting is "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 839
    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    .line 840
    .local v2, "value":I
    iget-object v3, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mUnlockCheckBox:Landroid/widget/CheckBox;

    const/4 v4, 0x0

    invoke-virtual {v3, v4}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 841
    iget-object v3, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mUnlockCheckBox:Landroid/widget/CheckBox;

    const/4 v4, 0x1

    if-ne v2, v4, :cond_1

    move v0, v4

    :cond_1
    invoke-virtual {v3, v0}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 842
    iget-object v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mUnlockCheckBox:Landroid/widget/CheckBox;

    invoke-virtual {v0, p0}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 843
    .end local v1    # "str":Ljava/lang/String;
    .end local v2    # "value":I
    goto :goto_0

    .line 844
    :cond_2
    const-string v0, "The data returned is not right."

    invoke-static {v4, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 846
    :goto_0
    return-void

    .line 831
    :cond_3
    :goto_1
    const-string v1, "The returned data is wrong."

    invoke-static {p0, v1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 833
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 834
    return-void
.end method

.method private queryCdmaOption()V
    .locals 5

    .line 744
    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/String;

    .line 745
    .local v0, "cmdOri":[Ljava/lang/String;
    const/4 v1, 0x0

    const-string v2, "AT+ECTM?"

    aput-object v2, v0, v1

    .line 746
    const-string v1, "+ECTM:"

    const/4 v2, 0x1

    aput-object v1, v0, v2

    .line 747
    const/4 v1, 0x2

    const-string v3, "DESTRILD:C2K"

    aput-object v3, v0, v1

    .line 748
    invoke-static {v0}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaCmdArr([Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 749
    .local v1, "cmd":[Ljava/lang/String;
    iget-object v3, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mATCmdHander:Landroid/os/Handler;

    .line 750
    const/4 v4, 0x7

    invoke-virtual {v3, v4}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v3

    .line 749
    invoke-static {v2, v1, v3}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(Z[Ljava/lang/String;Landroid/os/Message;)V

    .line 751
    return-void
.end method

.method private queryLaaSettings()V
    .locals 3

    .line 794
    const-string v0, "AT+ESBP=7,\"SBP_MP_LTE_DOWNLINK_LAA_r13\""

    const-string v1, "+ESBP:"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    .line 796
    .local v0, "cmd":[Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mATCmdHander:Landroid/os/Handler;

    const/16 v2, 0xb

    invoke-virtual {v1, v2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 797
    return-void
.end method

.method private queryUnlockOption()V
    .locals 5

    .line 715
    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/String;

    .line 716
    .local v0, "cmdOri":[Ljava/lang/String;
    const/4 v1, 0x0

    const-string v2, "AT+ECLSC?"

    aput-object v2, v0, v1

    .line 717
    const-string v1, "+ECLSC:"

    const/4 v2, 0x1

    aput-object v1, v0, v2

    .line 718
    const/4 v1, 0x2

    const-string v3, "DESTRILD:C2K"

    aput-object v3, v0, v1

    .line 719
    invoke-static {v0}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaCmdArr([Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 721
    .local v1, "cmd":[Ljava/lang/String;
    iget-object v3, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mATCmdHander:Landroid/os/Handler;

    .line 722
    const/16 v4, 0x9

    invoke-virtual {v3, v4}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v3

    .line 721
    invoke-static {v2, v1, v3}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(Z[Ljava/lang/String;Landroid/os/Message;)V

    .line 723
    return-void
.end method

.method private sendATCommad(Ljava/lang/String;II)V
    .locals 4
    .param p1, "str"    # Ljava/lang/String;
    .param p2, "flag"    # I
    .param p3, "message"    # I

    .line 347
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    .line 348
    .local v0, "cmd":[Ljava/lang/String;
    iget v1, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCurrentFlag:I

    const/high16 v2, 0xff0000

    and-int/2addr v1, v2

    or-int/2addr v1, p2

    iput v1, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCurrentFlag:I

    .line 349
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "AT+EPCT="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ","

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCurrentFlag:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    .line 350
    const/4 v1, 0x1

    const-string v3, ""

    aput-object v3, v0, v1

    .line 351
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "cmd = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v2, v0, v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ModemTest"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 352
    iget-object v1, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mATCmdHander:Landroid/os/Handler;

    invoke-virtual {v1, p3}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 353
    return-void
.end method

.method private sendATCommandCdma(Ljava/lang/String;I)V
    .locals 5
    .param p1, "str"    # Ljava/lang/String;
    .param p2, "message"    # I

    .line 819
    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/String;

    .line 820
    .local v0, "cmdOri":[Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "AT+ECTM="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    .line 821
    const-string v1, ""

    const/4 v3, 0x1

    aput-object v1, v0, v3

    .line 822
    const/4 v1, 0x2

    const-string v4, "DESTRILD:C2K"

    aput-object v4, v0, v1

    .line 823
    invoke-static {v0}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaCmdArr([Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 824
    .local v1, "cmd":[Ljava/lang/String;
    iget-object v4, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mATCmdHander:Landroid/os/Handler;

    invoke-virtual {v4, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v4

    invoke-static {v3, v1, v4}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(Z[Ljava/lang/String;Landroid/os/Message;)V

    .line 825
    const-string v4, "AT+RFSSYNC"

    aput-object v4, v1, v2

    .line 826
    const/4 v2, 0x0

    invoke-static {v3, v1, v2}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(Z[Ljava/lang/String;Landroid/os/Message;)V

    .line 827
    return-void
.end method

.method private setCdmaOption()V
    .locals 3

    .line 754
    iget v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCdmaOption:I

    const/16 v1, 0x8

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    .line 755
    const-string v0, "\"SPIRENT\""

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->sendATCommandCdma(Ljava/lang/String;I)V

    goto :goto_0

    .line 757
    :cond_0
    const-string v0, "\"NONE\""

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->sendATCommandCdma(Ljava/lang/String;I)V

    .line 759
    :goto_0
    return-void
.end method

.method private setCdmaSimSettingOption(Z)V
    .locals 4
    .param p1, "check"    # Z

    .line 774
    if-eqz p1, :cond_0

    iget v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCurrentFlag:I

    const/high16 v1, 0x100000

    or-int/2addr v0, v1

    goto :goto_0

    .line 775
    :cond_0
    iget v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCurrentFlag:I

    const v1, -0x100001

    and-int/2addr v0, v1

    :goto_0
    iput v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCurrentFlag:I

    .line 776
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "AT+EPCT="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCurrentMode:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ","

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCurrentFlag:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v0, v1

    const/4 v1, 0x1

    const-string v2, ""

    aput-object v2, v0, v1

    iget-object v1, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mATCmdHander:Landroid/os/Handler;

    const/16 v2, 0xa

    .line 778
    invoke-virtual {v1, v2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v1

    .line 776
    invoke-static {v0, v1}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 779
    return-void
.end method

.method private setGprsTransferType(I)V
    .locals 9
    .param p1, "type"    # I

    .line 699
    if-nez p1, :cond_0

    const-string v0, "1"

    goto :goto_0

    :cond_0
    const-string v0, "0"

    .line 700
    .local v0, "property":Ljava/lang/String;
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Change persist.radio.gprs.prefer to "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ModemTest"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 702
    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    invoke-interface {v1, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setPreferGprsMode(Ljava/lang/String;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 706
    goto :goto_1

    .line 703
    :catch_0
    move-exception v1

    .line 704
    .local v1, "e":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 705
    const-string v3, "set property failed ..."

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 707
    .end local v1    # "e":Ljava/lang/Exception;
    :goto_1
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_2
    invoke-static {}, Landroid/telephony/TelephonyManager;->getDefault()Landroid/telephony/TelephonyManager;

    move-result-object v2

    invoke-virtual {v2}, Landroid/telephony/TelephonyManager;->getPhoneCount()I

    move-result v2

    if-ge v1, v2, :cond_1

    .line 708
    const/4 v2, 0x2

    new-array v3, v2, [Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "AT+EGTP="

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    aput-object v4, v3, v5

    const/4 v4, 0x1

    const-string v6, ""

    aput-object v6, v3, v4

    const/4 v7, 0x0

    invoke-static {v1, v3, v7}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 709
    new-array v2, v2, [Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "AT+EMPPCH="

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v2, v5

    aput-object v6, v2, v4

    invoke-static {v1, v2, v7}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 707
    add-int/lit8 v1, v1, 0x1

    goto :goto_2

    .line 711
    .end local v1    # "i":I
    :cond_1
    return-void
.end method

.method private setLaaSettings(Z)V
    .locals 4
    .param p1, "check"    # Z

    .line 782
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setLaaSettings = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ModemTest"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 787
    const-string v0, "AT+ESBP=9,2"

    const-string v1, ""

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    const/4 v2, 0x0

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 788
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "AT+ESBP=5,\"SBP_MP_LTE_DOWNLINK_LAA_r13\","

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 789
    if-eqz p1, :cond_0

    const-string v3, "1"

    goto :goto_0

    :cond_0
    const-string v3, "0"

    :goto_0
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v0, v3

    const/4 v2, 0x1

    aput-object v1, v0, v2

    iget-object v1, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mATCmdHander:Landroid/os/Handler;

    const/16 v2, 0xc

    .line 790
    invoke-virtual {v1, v2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v1

    .line 788
    invoke-static {v0, v1}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 791
    return-void
.end method

.method private setUnlockOption(Z)V
    .locals 8
    .param p1, "unlock"    # Z

    .line 726
    iget v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCurrentFlag:I

    if-eqz p1, :cond_0

    const/high16 v1, 0x200000

    or-int/2addr v0, v1

    goto :goto_0

    :cond_0
    const v1, -0x200001

    and-int/2addr v0, v1

    :goto_0
    iput v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCurrentFlag:I

    .line 728
    const/4 v0, 0x2

    new-array v1, v0, [Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "AT+EPCT="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCurrentMode:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ","

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCurrentFlag:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    const/4 v2, 0x1

    const-string v4, ""

    aput-object v4, v1, v2

    iget-object v5, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mATCmdHander:Landroid/os/Handler;

    .line 730
    const/16 v6, 0xa

    invoke-virtual {v5, v6}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v5

    .line 728
    invoke-static {v1, v5}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 733
    const/4 v1, 0x3

    new-array v1, v1, [Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "AT+ECLSC="

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 734
    if-eqz p1, :cond_1

    const-string v7, "1"

    goto :goto_1

    :cond_1
    const-string v7, "0"

    :goto_1
    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v1, v3

    aput-object v4, v1, v2

    const-string v3, "DESTRILD:C2K"

    aput-object v3, v1, v0

    invoke-static {v1}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaCmdArr([Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mATCmdHander:Landroid/os/Handler;

    .line 736
    invoke-virtual {v1, v6}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v1

    .line 733
    invoke-static {v2, v0, v1}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(Z[Ljava/lang/String;Landroid/os/Message;)V

    .line 737
    const-string v0, "AT+RFSSYNC"

    filled-new-array {v0, v4, v3}, [Ljava/lang/String;

    move-result-object v0

    .line 738
    invoke-static {v0}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaCmdArr([Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    .line 737
    invoke-static {v2, v0, v1}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(Z[Ljava/lang/String;Landroid/os/Message;)V

    .line 740
    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 2
    .param p1, "buttonView"    # Landroid/widget/CompoundButton;
    .param p2, "isChecked"    # Z

    .line 878
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getId()I

    move-result v0

    const v1, 0x7f0605a2

    if-ne v0, v1, :cond_0

    .line 879
    invoke-direct {p0, p2}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->setUnlockOption(Z)V

    .line 882
    :cond_0
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getId()I

    move-result v0

    const v1, 0x7f060599

    if-ne v0, v1, :cond_2

    .line 883
    invoke-direct {p0, p2}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->setCdmaSimSettingOption(Z)V

    .line 884
    iget-boolean v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mFirstEntry:Z

    const/4 v1, 0x1

    if-ne v0, v1, :cond_1

    .line 885
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mFirstEntry:Z

    .line 886
    return-void

    .line 888
    :cond_1
    const/16 v0, 0x7d0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->showDialog(I)V

    goto :goto_0

    .line 889
    :cond_2
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getId()I

    move-result v0

    const v1, 0x7f06059e

    if-ne v0, v1, :cond_3

    .line 890
    invoke-direct {p0, p2}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->setLaaSettings(Z)V

    .line 892
    :cond_3
    :goto_0
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 4
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 247
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 248
    const v0, 0x7f0800a2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->setContentView(I)V

    .line 250
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    .line 251
    .local v0, "cmd":[Ljava/lang/String;
    const/4 v1, 0x0

    const-string v2, "AT+EPCT?"

    aput-object v2, v0, v1

    .line 252
    const/4 v1, 0x1

    const-string v2, "+EPCT:"

    aput-object v2, v0, v1

    .line 254
    new-instance v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$2;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$2;-><init>(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V

    .line 293
    .local v1, "listener":Landroid/view/View$OnClickListener;
    const v2, 0x7f0605a1

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    iput-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mTextView:Landroid/widget/TextView;

    .line 294
    const v2, 0x7f06059f

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/Button;

    iput-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mNoneBtn:Landroid/widget/Button;

    .line 295
    const v2, 0x7f06059b

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/Button;

    iput-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mFactoryBtn:Landroid/widget/Button;

    .line 296
    invoke-virtual {v2, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 297
    const v2, 0x7f06059a

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/Button;

    iput-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCtaBtn:Landroid/widget/Button;

    .line 298
    invoke-virtual {v2, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 300
    const v2, 0x7f06059c

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/Button;

    iput-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mFtaBtn:Landroid/widget/Button;

    .line 301
    const v2, 0x7f06059d

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/Button;

    iput-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mIotBtn:Landroid/widget/Button;

    .line 302
    const v2, 0x7f0605a0

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/Button;

    iput-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mOperatorBtn:Landroid/widget/Button;

    .line 303
    const v2, 0x7f060598

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/Button;

    iput-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mC2kBtn:Landroid/widget/Button;

    .line 304
    const v2, 0x7f0605a2

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    iput-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mUnlockCheckBox:Landroid/widget/CheckBox;

    .line 305
    const v2, 0x7f060599

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    iput-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCdmaSimSettingCheckBox:Landroid/widget/CheckBox;

    .line 307
    iget-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mNoneBtn:Landroid/widget/Button;

    invoke-virtual {v2, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 308
    iget-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mFtaBtn:Landroid/widget/Button;

    invoke-virtual {v2, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 309
    iget-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mIotBtn:Landroid/widget/Button;

    invoke-virtual {v2, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 310
    iget-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mOperatorBtn:Landroid/widget/Button;

    invoke-virtual {v2, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 311
    iget-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mC2kBtn:Landroid/widget/Button;

    invoke-virtual {v2, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 312
    iget-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mUnlockCheckBox:Landroid/widget/CheckBox;

    invoke-virtual {v2, p0}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 313
    iget-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCdmaSimSettingCheckBox:Landroid/widget/CheckBox;

    invoke-virtual {v2, p0}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 315
    const v2, 0x7f06059e

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    iput-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mLaaCheckBox:Landroid/widget/CheckBox;

    .line 316
    invoke-virtual {v2, p0}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 317
    invoke-direct {p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->queryLaaSettings()V

    .line 319
    iget-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mTextView:Landroid/widget/TextView;

    const-string v3, "The current mode is unknown"

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 320
    invoke-virtual {p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const v3, 0x7f010062

    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mFtaOptionsArray:[Ljava/lang/String;

    .line 322
    invoke-virtual {p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const v3, 0x7f010064

    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mIotOptionsArray:[Ljava/lang/String;

    .line 324
    invoke-virtual {p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const v3, 0x7f010066

    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mOperatorOptionsArray:[Ljava/lang/String;

    .line 327
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isCdma()Z

    move-result v2

    if-nez v2, :cond_0

    .line 328
    iget-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mC2kBtn:Landroid/widget/Button;

    const/16 v3, 0x8

    invoke-virtual {v2, v3}, Landroid/widget/Button;->setVisibility(I)V

    .line 329
    iget-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mUnlockCheckBox:Landroid/widget/CheckBox;

    invoke-virtual {v2, v3}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 332
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mATCmdHander:Landroid/os/Handler;

    const/4 v3, 0x4

    invoke-virtual {v2, v3}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 333
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 6
    .param p1, "id"    # I

    .line 479
    const/4 v0, 0x1

    const/16 v1, 0x9

    const-string v2, "Cancel"

    const-string v3, "Send"

    const-string v4, "MODEM TEST"

    if-eq p1, v0, :cond_5

    const/4 v0, 0x2

    if-eq p1, v0, :cond_4

    const/4 v0, 0x3

    if-eq p1, v0, :cond_3

    const/4 v0, 0x5

    if-eq p1, v0, :cond_2

    const/16 v0, 0x8

    if-eq p1, v0, :cond_1

    const/16 v0, 0x7d0

    const/4 v1, 0x0

    if-eq p1, v0, :cond_0

    .line 680
    return-object v1

    .line 481
    :cond_0
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0, v4}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 482
    const-string v2, "Please reboot the phone!"

    invoke-virtual {v0, v2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 483
    const-string v2, "OK"

    invoke-virtual {v0, v2, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 481
    return-object v0

    .line 651
    :cond_1
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 652
    invoke-virtual {v0, v4}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const v1, 0x7f010060

    const/4 v4, -0x1

    new-instance v5, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$17;

    invoke-direct {v5, p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$17;-><init>(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V

    invoke-virtual {v0, v1, v4, v5}, Landroid/app/AlertDialog$Builder;->setSingleChoiceItems(IILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    new-instance v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$16;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$16;-><init>(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V

    .line 662
    invoke-virtual {v0, v3, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    new-instance v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$15;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$15;-><init>(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V

    .line 669
    invoke-virtual {v0, v2, v1}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 676
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 651
    return-object v0

    .line 608
    :cond_2
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0, v4}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const v1, 0x7f010066

    const/16 v4, 0xf

    new-array v4, v4, [Z

    fill-array-data v4, :array_0

    new-instance v5, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$14;

    invoke-direct {v5, p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$14;-><init>(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V

    .line 609
    invoke-virtual {v0, v1, v4, v5}, Landroid/app/AlertDialog$Builder;->setMultiChoiceItems(I[ZLandroid/content/DialogInterface$OnMultiChoiceClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    new-instance v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$13;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$13;-><init>(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V

    .line 629
    invoke-virtual {v0, v3, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    new-instance v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$12;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$12;-><init>(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V

    .line 641
    invoke-virtual {v0, v2, v1}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 649
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 608
    return-object v0

    .line 565
    :cond_3
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0, v4}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const v4, 0x7f010064

    new-array v1, v1, [Z

    fill-array-data v1, :array_1

    new-instance v5, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$11;

    invoke-direct {v5, p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$11;-><init>(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V

    .line 566
    invoke-virtual {v0, v4, v1, v5}, Landroid/app/AlertDialog$Builder;->setMultiChoiceItems(I[ZLandroid/content/DialogInterface$OnMultiChoiceClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    new-instance v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$10;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$10;-><init>(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V

    .line 586
    invoke-virtual {v0, v3, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    new-instance v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$9;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$9;-><init>(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V

    .line 597
    invoke-virtual {v0, v2, v1}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 606
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 565
    return-object v0

    .line 525
    :cond_4
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 526
    invoke-virtual {v0, v4}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const v4, 0x7f010062

    new-array v1, v1, [Z

    fill-array-data v1, :array_2

    new-instance v5, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$8;

    invoke-direct {v5, p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$8;-><init>(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V

    invoke-virtual {v0, v4, v1, v5}, Landroid/app/AlertDialog$Builder;->setMultiChoiceItems(I[ZLandroid/content/DialogInterface$OnMultiChoiceClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    new-instance v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$7;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$7;-><init>(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V

    .line 545
    invoke-virtual {v0, v3, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    new-instance v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$6;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$6;-><init>(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V

    .line 555
    invoke-virtual {v0, v2, v1}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 563
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 525
    return-object v0

    .line 485
    :cond_5
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0, v4}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const v4, 0x7f010061

    new-array v1, v1, [Z

    fill-array-data v1, :array_3

    new-instance v5, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$5;

    invoke-direct {v5, p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$5;-><init>(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V

    .line 486
    invoke-virtual {v0, v4, v1, v5}, Landroid/app/AlertDialog$Builder;->setMultiChoiceItems(I[ZLandroid/content/DialogInterface$OnMultiChoiceClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    new-instance v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$4;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$4;-><init>(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V

    .line 504
    invoke-virtual {v0, v3, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    new-instance v1, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$3;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$3;-><init>(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V

    .line 515
    invoke-virtual {v0, v2, v1}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 523
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 485
    return-object v0

    nop

    :array_0
    .array-data 1
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
    .end array-data

    :array_1
    .array-data 1
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
    .end array-data

    nop

    :array_2
    .array-data 1
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
    .end array-data

    nop

    :array_3
    .array-data 1
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
    .end array-data
.end method

.method protected onResume()V
    .locals 1

    .line 337
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 338
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCtaOption:I

    .line 339
    iput v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mIotOption:I

    .line 340
    iput v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mFtaOption:I

    .line 341
    iput v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mOperatorOption:I

    .line 342
    iput v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->mCdmaOption:I

    .line 343
    return-void
.end method
