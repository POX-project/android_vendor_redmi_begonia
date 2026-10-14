.class public Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;
.super Landroid/app/Activity;
.source "AntennaDiversity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$IMDMSeiviceInterface;


# static fields
.field private static final ANT_BOTH:I = 0x3

.field private static final ANT_DRX:I = 0x2

.field private static final ANT_PRX:I = 0x1

.field private static final DEFAULT_VALUE:Ljava/lang/String; = "---"

.field private static final DIALOG_WAIT_INIT:I = 0x0

.field private static final DIALOG_WAIT_SUBSCRIB:I = 0x1

.field private static final DIALOG_WAIT_UNSUBSCRIB:I = 0x2

.field private static final MODE_INDEX_BASE_3G:I = 0xa

.field private static final MSG_NW_INFO_QUERY_3G_4G_ANT:I = 0x1

.field private static final MSG_NW_INFO_QUERY_CDMA_ANT:I = 0x2

.field private static final MSG_NW_INFO_SET_ANT:I = 0x3

.field private static final MSG_NW_INFO_SET_ANT_CDMA:I = 0x4

.field private static final TAG:Ljava/lang/String; = "AntennaDiversity"


# instance fields
.field private SubscribeMsgIdNameCDMA:[Ljava/lang/String;

.field private SubscribeMsgIdNameFDD:[Ljava/lang/String;

.field private SubscribeMsgIdNameLTE:[Ljava/lang/String;

.field private componentsArray:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;",
            ">;"
        }
    .end annotation
.end field

.field private m1xBoth:Landroid/widget/ToggleButton;

.field private m1xDrx:Landroid/widget/ToggleButton;

.field private m1xPrx:Landroid/widget/ToggleButton;

.field private m1xRssiAnt0:Landroid/widget/TextView;

.field private m1xRssiAnt1:Landroid/widget/TextView;

.field private m1xRssiCombine:Landroid/widget/TextView;

.field private m3GBoth:Landroid/widget/ToggleButton;

.field private m3GDrx:Landroid/widget/ToggleButton;

.field private m3GPrx:Landroid/widget/ToggleButton;

.field private m3gAnt:I

.field private m4GBoth:Landroid/widget/ToggleButton;

.field private m4GDrx:Landroid/widget/ToggleButton;

.field private m4GPrx:Landroid/widget/ToggleButton;

.field private m4gAnt:I

.field private mAtCmdHandler:Landroid/os/Handler;

.field private mCdmaAnt:I

.field private mEvdoBoth:Landroid/widget/ToggleButton;

.field private mEvdoDrx:Landroid/widget/ToggleButton;

.field private mEvdoPrx:Landroid/widget/ToggleButton;

.field private mEvdoRssiAnt0:Landroid/widget/TextView;

.field private mEvdoRssiAnt1:Landroid/widget/TextView;

.field private mEvdoRssiCombine:Landroid/widget/TextView;

.field private mExtent:Ljava/lang/String;

.field private mLteRsrpAnt0:Landroid/widget/TextView;

.field private mLteRsrpAnt1:Landroid/widget/TextView;

.field private mLteRsrpCombine:Landroid/widget/TextView;

.field private mLteRsrqAnt0:Landroid/widget/TextView;

.field private mLteRsrqAnt1:Landroid/widget/TextView;

.field private mLteRsrqCombine:Landroid/widget/TextView;

.field private mLteRssiAnt0:Landroid/widget/TextView;

.field private mLteRssiAnt1:Landroid/widget/TextView;

.field private mLteRssiCombine:Landroid/widget/TextView;

.field private mLteSinrAnt0:Landroid/widget/TextView;

.field private mLteSinrAnt1:Landroid/widget/TextView;

.field private mLteSinrCombine:Landroid/widget/TextView;

.field private mProgressDialog:Landroid/app/ProgressDialog;

.field private mProgressDialog1:Landroid/app/ProgressDialog;

.field private mProgressDialog2:Landroid/app/ProgressDialog;

.field private mSimTypeToShow:I

.field private mWcdmaRscpAnt0:Landroid/widget/TextView;

.field private mWcdmaRscpAnt1:Landroid/widget/TextView;

.field private mWcdmaRscpCombine:Landroid/widget/TextView;

.field private mWcdmaRssiAnt0:Landroid/widget/TextView;

.field private mWcdmaRssiAnt1:Landroid/widget/TextView;

.field private mWcdmaRssiCombine:Landroid/widget/TextView;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 61
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 117
    const/4 v0, -0x1

    iput v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m3gAnt:I

    .line 118
    iput v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4gAnt:I

    .line 119
    iput v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mCdmaAnt:I

    .line 121
    const-string v0, "+ERXTESTMODE:"

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mExtent:Ljava/lang/String;

    .line 123
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->componentsArray:Ljava/util/List;

    .line 124
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mSimTypeToShow:I

    .line 125
    const-string v0, "MSG_ID_EM_C2K_L4_RTT_RADIO_INFO_IND"

    const-string v1, "MSG_ID_EM_C2K_L4_EVDO_SERVING_INFO_IND"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->SubscribeMsgIdNameCDMA:[Ljava/lang/String;

    .line 127
    const-string v0, "MSG_ID_EM_EL1_STATUS_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->SubscribeMsgIdNameLTE:[Ljava/lang/String;

    .line 128
    const-string v0, "MSG_ID_FDD_EM_UL1_TAS_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->SubscribeMsgIdNameFDD:[Ljava/lang/String;

    .line 130
    new-instance v0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity$1;-><init>(Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mAtCmdHandler:Landroid/os/Handler;

    return-void
.end method

.method private QueryAntennaStatus()V
    .locals 4

    .line 333
    const-string v0, "AT+ERXTESTMODE?"

    const-string v1, "+ERXTESTMODE:"

    const-string v2, "DESTRILD:C2K"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    .line 334
    .local v0, "queryMode":[Ljava/lang/String;
    invoke-static {v0}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaCmdArr([Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 335
    .local v1, "queryMode_s":[Ljava/lang/String;
    const/4 v2, 0x2

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->sendATCommand([Ljava/lang/String;I)V

    .line 336
    const-string v2, "AT+ERXPATH?"

    const-string v3, "+ERXPATH:"

    filled-new-array {v2, v3}, [Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x1

    invoke-direct {p0, v2, v3}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->sendATCommand([Ljava/lang/String;I)V

    .line 337
    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;
    .param p1, "x1"    # Ljava/lang/String;

    .line 61
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->parseCurrentMode(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;

    .line 61
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->updateButtons()V

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mExtent:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$302(Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;
    .param p1, "x1"    # I

    .line 61
    iput p1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mCdmaAnt:I

    return p1
.end method

.method private parseCurrentMode(Ljava/lang/String;)V
    .locals 5
    .param p1, "data"    # Ljava/lang/String;

    .line 400
    const/4 v0, -0x1

    .line 401
    .local v0, "mode":I
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "parseCurrentMode data= "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "AntennaDiversity"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 403
    :try_start_0
    const-string v1, "+ERXPATH:"

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    invoke-virtual {p1, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move v0, v1

    .line 407
    nop

    .line 409
    const/16 v1, 0xa

    const/4 v3, 0x1

    if-lt v0, v1, :cond_0

    .line 410
    add-int/lit8 v1, v0, -0xa

    add-int/2addr v1, v3

    iput v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m3gAnt:I

    .line 411
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "parseCurrent3GMode is: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m3gAnt:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 413
    :cond_0
    if-nez v0, :cond_1

    .line 414
    const/4 v1, 0x3

    iput v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4gAnt:I

    goto :goto_0

    .line 415
    :cond_1
    if-ne v0, v3, :cond_2

    .line 416
    iput v3, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4gAnt:I

    goto :goto_0

    .line 417
    :cond_2
    const/4 v1, 0x2

    if-ne v0, v1, :cond_3

    .line 418
    iput v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4gAnt:I

    goto :goto_0

    .line 420
    :cond_3
    const/4 v1, -0x1

    iput v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4gAnt:I

    .line 422
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "parseCurrentLteMode is: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4gAnt:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 424
    :goto_1
    return-void

    .line 404
    :catch_0
    move-exception v1

    .line 405
    .local v1, "e":Ljava/lang/Exception;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Wrong current mode format: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 406
    return-void
.end method

.method private registerNetworkInfo()V
    .locals 2

    .line 341
    new-instance v0, Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;

    invoke-direct {v0}, Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;-><init>()V

    .line 342
    .local v0, "components":Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->SubscribeMsgIdNameCDMA:[Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;->setEmComponentName([Ljava/lang/String;)V

    .line 343
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->componentsArray:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 345
    new-instance v1, Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;

    invoke-direct {v1}, Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;-><init>()V

    move-object v0, v1

    .line 346
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->SubscribeMsgIdNameLTE:[Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;->setEmComponentName([Ljava/lang/String;)V

    .line 347
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->componentsArray:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 349
    new-instance v1, Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;

    invoke-direct {v1}, Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;-><init>()V

    move-object v0, v1

    .line 350
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->SubscribeMsgIdNameFDD:[Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;->setEmComponentName([Ljava/lang/String;)V

    .line 351
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->componentsArray:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 353
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mdmlSubscribe()V

    .line 354
    return-void
.end method

.method private sendATCommand([Ljava/lang/String;I)V
    .locals 2
    .param p1, "atCommand"    # [Ljava/lang/String;
    .param p2, "msg"    # I

    .line 427
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sendATCommand = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v1, 0x0

    aget-object v1, p1, v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "AntennaDiversity"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 428
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mAtCmdHandler:Landroid/os/Handler;

    .line 429
    invoke-virtual {v0, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 428
    invoke-static {p1, v0}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 430
    return-void
.end method

.method private setDefaultText()V
    .locals 2

    .line 357
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mWcdmaRscpAnt0:Landroid/widget/TextView;

    const-string v1, "---"

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 358
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mWcdmaRssiAnt0:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 359
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mWcdmaRscpAnt1:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 360
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mWcdmaRssiAnt1:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 361
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mWcdmaRscpCombine:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 362
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mWcdmaRssiCombine:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 363
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRsrpAnt0:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 364
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRsrqAnt0:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 365
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRssiAnt0:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 366
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteSinrAnt0:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 367
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRsrpAnt1:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 368
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRsrqAnt1:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 369
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRssiAnt1:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 370
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteSinrAnt1:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 371
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRsrpCombine:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 372
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRsrqCombine:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 373
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRssiCombine:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 374
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteSinrCombine:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 375
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m1xRssiAnt0:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 376
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m1xRssiAnt1:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 377
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m1xRssiCombine:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 378
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mEvdoRssiAnt0:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 379
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mEvdoRssiAnt1:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 380
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mEvdoRssiCombine:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 381
    return-void
.end method

.method private updateButtons()V
    .locals 6

    .line 384
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m3GPrx:Landroid/widget/ToggleButton;

    iget v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m3gAnt:I

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-ne v1, v3, :cond_0

    move v1, v3

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setChecked(Z)V

    .line 385
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m3GDrx:Landroid/widget/ToggleButton;

    iget v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m3gAnt:I

    const/4 v4, 0x2

    if-ne v1, v4, :cond_1

    move v1, v3

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setChecked(Z)V

    .line 386
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m3GBoth:Landroid/widget/ToggleButton;

    iget v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m3gAnt:I

    const/4 v5, 0x3

    if-ne v1, v5, :cond_2

    move v1, v3

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setChecked(Z)V

    .line 387
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4GPrx:Landroid/widget/ToggleButton;

    iget v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4gAnt:I

    if-ne v1, v3, :cond_3

    move v1, v3

    goto :goto_3

    :cond_3
    move v1, v2

    :goto_3
    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setChecked(Z)V

    .line 388
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4GDrx:Landroid/widget/ToggleButton;

    iget v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4gAnt:I

    if-ne v1, v4, :cond_4

    move v1, v3

    goto :goto_4

    :cond_4
    move v1, v2

    :goto_4
    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setChecked(Z)V

    .line 389
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4GBoth:Landroid/widget/ToggleButton;

    iget v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4gAnt:I

    if-ne v1, v5, :cond_5

    move v1, v3

    goto :goto_5

    :cond_5
    move v1, v2

    :goto_5
    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setChecked(Z)V

    .line 390
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m1xPrx:Landroid/widget/ToggleButton;

    iget v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mCdmaAnt:I

    if-ne v1, v3, :cond_6

    move v1, v3

    goto :goto_6

    :cond_6
    move v1, v2

    :goto_6
    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setChecked(Z)V

    .line 391
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m1xDrx:Landroid/widget/ToggleButton;

    iget v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mCdmaAnt:I

    if-ne v1, v4, :cond_7

    move v1, v3

    goto :goto_7

    :cond_7
    move v1, v2

    :goto_7
    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setChecked(Z)V

    .line 392
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m1xBoth:Landroid/widget/ToggleButton;

    iget v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mCdmaAnt:I

    if-ne v1, v5, :cond_8

    move v1, v3

    goto :goto_8

    :cond_8
    move v1, v2

    :goto_8
    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setChecked(Z)V

    .line 393
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mEvdoPrx:Landroid/widget/ToggleButton;

    iget v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mCdmaAnt:I

    if-ne v1, v3, :cond_9

    move v1, v3

    goto :goto_9

    :cond_9
    move v1, v2

    :goto_9
    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setChecked(Z)V

    .line 394
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mEvdoDrx:Landroid/widget/ToggleButton;

    iget v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mCdmaAnt:I

    if-ne v1, v4, :cond_a

    move v1, v3

    goto :goto_a

    :cond_a
    move v1, v2

    :goto_a
    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setChecked(Z)V

    .line 395
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mEvdoBoth:Landroid/widget/ToggleButton;

    iget v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mCdmaAnt:I

    if-ne v1, v5, :cond_b

    move v2, v3

    :cond_b
    invoke-virtual {v0, v2}, Landroid/widget/ToggleButton;->setChecked(Z)V

    .line 396
    return-void
.end method


# virtual methods
.method getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I
    .locals 2
    .param p1, "data"    # Lcom/mediatek/mdml/Msg;
    .param p2, "key"    # Ljava/lang/String;

    .line 464
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, p1, p2, v1}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v0

    return v0
.end method

.method getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I
    .locals 1
    .param p1, "data"    # Lcom/mediatek/mdml/Msg;
    .param p2, "key"    # Ljava/lang/String;
    .param p3, "signed"    # Z

    .line 460
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v0

    return v0
.end method

.method public onBackPressed()V
    .locals 1

    .line 265
    const/4 v0, 0x2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->showDialog(I)V

    .line 266
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mdmlUnSubscribe()V

    .line 267
    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 11
    .param p1, "arg0"    # Landroid/view/View;

    .line 271
    const-string v0, ""

    .line 272
    .local v0, "cmd":Ljava/lang/String;
    iget v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m3gAnt:I

    .line 273
    .local v1, "old3gAnt":I
    iget v2, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4gAnt:I

    .line 274
    .local v2, "old4gAnt":I
    iget v3, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mCdmaAnt:I

    .line 276
    .local v3, "oldCdmaAnt":I
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v4

    iget-object v5, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m3GPrx:Landroid/widget/ToggleButton;

    invoke-virtual {v5}, Landroid/widget/ToggleButton;->getId()I

    move-result v5

    const/4 v6, 0x3

    const/4 v7, 0x2

    const/4 v8, 0x1

    if-ne v4, v5, :cond_0

    .line 277
    iput v8, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m3gAnt:I

    .line 278
    const-string v0, "AT+ERXPATH=10"

    goto/16 :goto_3

    .line 279
    :cond_0
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v4

    iget-object v5, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m3GDrx:Landroid/widget/ToggleButton;

    invoke-virtual {v5}, Landroid/widget/ToggleButton;->getId()I

    move-result v5

    if-ne v4, v5, :cond_1

    .line 280
    iput v7, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m3gAnt:I

    .line 281
    const-string v0, "AT+ERXPATH=11"

    goto/16 :goto_3

    .line 282
    :cond_1
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v4

    iget-object v5, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m3GBoth:Landroid/widget/ToggleButton;

    invoke-virtual {v5}, Landroid/widget/ToggleButton;->getId()I

    move-result v5

    if-ne v4, v5, :cond_2

    .line 283
    iput v6, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m3gAnt:I

    .line 284
    const-string v0, "AT+ERXPATH=12"

    goto/16 :goto_3

    .line 285
    :cond_2
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v4

    iget-object v5, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4GPrx:Landroid/widget/ToggleButton;

    invoke-virtual {v5}, Landroid/widget/ToggleButton;->getId()I

    move-result v5

    if-ne v4, v5, :cond_5

    .line 286
    iput v8, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4gAnt:I

    .line 287
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is95Modem()Z

    move-result v4

    if-nez v4, :cond_4

    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is97Modem()Z

    move-result v4

    if-eqz v4, :cond_3

    goto :goto_0

    .line 290
    :cond_3
    const-string v0, "AT+ERXPATH=1"

    goto/16 :goto_3

    .line 288
    :cond_4
    :goto_0
    const-string v0, "AT+EGMC=1,\"rx_path\", 1, 0, 1, 1, 1, 1"

    goto/16 :goto_3

    .line 292
    :cond_5
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v4

    iget-object v5, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4GDrx:Landroid/widget/ToggleButton;

    invoke-virtual {v5}, Landroid/widget/ToggleButton;->getId()I

    move-result v5

    if-ne v4, v5, :cond_8

    .line 293
    iput v7, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4gAnt:I

    .line 294
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is95Modem()Z

    move-result v4

    if-nez v4, :cond_7

    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is97Modem()Z

    move-result v4

    if-eqz v4, :cond_6

    goto :goto_1

    .line 297
    :cond_6
    const-string v0, "AT+ERXPATH=2"

    goto/16 :goto_3

    .line 295
    :cond_7
    :goto_1
    const-string v0, "AT+EGMC=1,\"rx_path\", 1, 0, 2, 2, 2, 2"

    goto/16 :goto_3

    .line 299
    :cond_8
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v4

    iget-object v5, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4GBoth:Landroid/widget/ToggleButton;

    invoke-virtual {v5}, Landroid/widget/ToggleButton;->getId()I

    move-result v5

    if-ne v4, v5, :cond_b

    .line 300
    iput v6, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4gAnt:I

    .line 301
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is95Modem()Z

    move-result v4

    if-nez v4, :cond_a

    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is97Modem()Z

    move-result v4

    if-eqz v4, :cond_9

    goto :goto_2

    .line 304
    :cond_9
    const-string v0, "AT+ERXPATH=0"

    goto :goto_3

    .line 302
    :cond_a
    :goto_2
    const-string v0, "AT+EGMC=1,\"rx_path\", 1, 0, 3, 3, 3, 3"

    goto :goto_3

    .line 306
    :cond_b
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v4

    iget-object v5, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m1xPrx:Landroid/widget/ToggleButton;

    invoke-virtual {v5}, Landroid/widget/ToggleButton;->getId()I

    move-result v5

    if-ne v4, v5, :cond_c

    .line 307
    iput v8, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mCdmaAnt:I

    goto :goto_3

    .line 308
    :cond_c
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v4

    iget-object v5, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m1xDrx:Landroid/widget/ToggleButton;

    invoke-virtual {v5}, Landroid/widget/ToggleButton;->getId()I

    move-result v5

    if-ne v4, v5, :cond_d

    .line 309
    iput v7, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mCdmaAnt:I

    goto :goto_3

    .line 310
    :cond_d
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v4

    iget-object v5, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m1xBoth:Landroid/widget/ToggleButton;

    invoke-virtual {v5}, Landroid/widget/ToggleButton;->getId()I

    move-result v5

    if-ne v4, v5, :cond_e

    .line 311
    iput v6, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mCdmaAnt:I

    goto :goto_3

    .line 312
    :cond_e
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v4

    iget-object v5, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mEvdoPrx:Landroid/widget/ToggleButton;

    invoke-virtual {v5}, Landroid/widget/ToggleButton;->getId()I

    move-result v5

    if-ne v4, v5, :cond_f

    .line 313
    iput v8, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mCdmaAnt:I

    goto :goto_3

    .line 314
    :cond_f
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v4

    iget-object v5, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mEvdoDrx:Landroid/widget/ToggleButton;

    invoke-virtual {v5}, Landroid/widget/ToggleButton;->getId()I

    move-result v5

    if-ne v4, v5, :cond_10

    .line 315
    iput v7, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mCdmaAnt:I

    goto :goto_3

    .line 316
    :cond_10
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v4

    iget-object v5, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mEvdoBoth:Landroid/widget/ToggleButton;

    invoke-virtual {v5}, Landroid/widget/ToggleButton;->getId()I

    move-result v5

    if-ne v4, v5, :cond_11

    .line 317
    iput v6, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mCdmaAnt:I

    .line 319
    :cond_11
    :goto_3
    iget v4, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m3gAnt:I

    const-string v5, ""

    const/4 v9, 0x0

    if-eq v1, v4, :cond_12

    .line 320
    new-array v4, v7, [Ljava/lang/String;

    aput-object v0, v4, v9

    aput-object v5, v4, v8

    invoke-direct {p0, v4, v6}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->sendATCommand([Ljava/lang/String;I)V

    goto :goto_4

    .line 321
    :cond_12
    iget v4, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4gAnt:I

    if-eq v2, v4, :cond_13

    .line 322
    new-array v4, v7, [Ljava/lang/String;

    aput-object v0, v4, v9

    aput-object v5, v4, v8

    invoke-direct {p0, v4, v6}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->sendATCommand([Ljava/lang/String;I)V

    goto :goto_4

    .line 323
    :cond_13
    iget v4, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mCdmaAnt:I

    if-eq v3, v4, :cond_14

    .line 324
    new-array v4, v6, [Ljava/lang/String;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "AT+ERXTESTMODE="

    invoke-virtual {v6, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v10, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mCdmaAnt:I

    invoke-virtual {v6, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    aput-object v6, v4, v9

    aput-object v5, v4, v8

    const-string v5, "DESTRILD:C2K"

    aput-object v5, v4, v7

    .line 325
    .local v4, "setMode":[Ljava/lang/String;
    invoke-static {v4}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaCmdArr([Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v5

    .line 326
    .local v5, "setMode_s":[Ljava/lang/String;
    const/4 v6, 0x4

    invoke-direct {p0, v5, v6}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->sendATCommand([Ljava/lang/String;I)V

    .line 328
    .end local v4    # "setMode":[Ljava/lang/String;
    .end local v5    # "setMode_s":[Ljava/lang/String;
    :cond_14
    :goto_4
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->setDefaultText()V

    .line 329
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->updateButtons()V

    .line 330
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 189
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 190
    const v0, 0x7f080007

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->setContentView(I)V

    .line 191
    const v0, 0x7f0601ba

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mWcdmaRscpAnt0:Landroid/widget/TextView;

    .line 192
    const v0, 0x7f0601bb

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mWcdmaRscpAnt1:Landroid/widget/TextView;

    .line 193
    const v0, 0x7f0601bc

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mWcdmaRscpCombine:Landroid/widget/TextView;

    .line 194
    const v0, 0x7f0601b7

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mWcdmaRssiAnt0:Landroid/widget/TextView;

    .line 195
    const v0, 0x7f0601b8

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mWcdmaRssiAnt1:Landroid/widget/TextView;

    .line 196
    const v0, 0x7f0601b9

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mWcdmaRssiCombine:Landroid/widget/TextView;

    .line 197
    const v0, 0x7f0601bd

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRsrpAnt0:Landroid/widget/TextView;

    .line 198
    const v0, 0x7f0601be

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRsrpAnt1:Landroid/widget/TextView;

    .line 199
    const v0, 0x7f0601bf

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRsrpCombine:Landroid/widget/TextView;

    .line 200
    const v0, 0x7f0601c0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRsrqAnt0:Landroid/widget/TextView;

    .line 201
    const v0, 0x7f0601c1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRsrqAnt1:Landroid/widget/TextView;

    .line 202
    const v0, 0x7f0601c2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRsrqCombine:Landroid/widget/TextView;

    .line 203
    const v0, 0x7f0601c3

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRssiAnt0:Landroid/widget/TextView;

    .line 204
    const v0, 0x7f0601c4

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRssiAnt1:Landroid/widget/TextView;

    .line 205
    const v0, 0x7f0601c5

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRssiCombine:Landroid/widget/TextView;

    .line 206
    const v0, 0x7f0601c6

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteSinrAnt0:Landroid/widget/TextView;

    .line 207
    const v0, 0x7f0601c7

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteSinrAnt1:Landroid/widget/TextView;

    .line 208
    const v0, 0x7f0601c8

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteSinrCombine:Landroid/widget/TextView;

    .line 209
    const v0, 0x7f0601a8

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m1xRssiAnt0:Landroid/widget/TextView;

    .line 210
    const v0, 0x7f0601a9

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m1xRssiAnt1:Landroid/widget/TextView;

    .line 211
    const v0, 0x7f0601aa

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m1xRssiCombine:Landroid/widget/TextView;

    .line 212
    const v0, 0x7f0601b4

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mEvdoRssiAnt0:Landroid/widget/TextView;

    .line 213
    const v0, 0x7f0601b5

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mEvdoRssiAnt1:Landroid/widget/TextView;

    .line 214
    const v0, 0x7f0601b6

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mEvdoRssiCombine:Landroid/widget/TextView;

    .line 215
    const v0, 0x7f0601ac

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ToggleButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m3GPrx:Landroid/widget/ToggleButton;

    .line 216
    const v0, 0x7f0601ab

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ToggleButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m3GDrx:Landroid/widget/ToggleButton;

    .line 217
    const v0, 0x7f0601ad

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ToggleButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m3GBoth:Landroid/widget/ToggleButton;

    .line 218
    const v0, 0x7f0601af

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ToggleButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4GPrx:Landroid/widget/ToggleButton;

    .line 219
    const v0, 0x7f0601ae

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ToggleButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4GDrx:Landroid/widget/ToggleButton;

    .line 220
    const v0, 0x7f0601b0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ToggleButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4GBoth:Landroid/widget/ToggleButton;

    .line 221
    const v0, 0x7f0601a6

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ToggleButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m1xPrx:Landroid/widget/ToggleButton;

    .line 222
    const v0, 0x7f0601a5

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ToggleButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m1xDrx:Landroid/widget/ToggleButton;

    .line 223
    const v0, 0x7f0601a7

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ToggleButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m1xBoth:Landroid/widget/ToggleButton;

    .line 224
    const v0, 0x7f0601b2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ToggleButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mEvdoPrx:Landroid/widget/ToggleButton;

    .line 225
    const v0, 0x7f0601b1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ToggleButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mEvdoDrx:Landroid/widget/ToggleButton;

    .line 226
    const v0, 0x7f0601b3

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ToggleButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mEvdoBoth:Landroid/widget/ToggleButton;

    .line 227
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m3GPrx:Landroid/widget/ToggleButton;

    invoke-virtual {v0, p0}, Landroid/widget/ToggleButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 228
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m3GDrx:Landroid/widget/ToggleButton;

    invoke-virtual {v0, p0}, Landroid/widget/ToggleButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 229
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m3GBoth:Landroid/widget/ToggleButton;

    invoke-virtual {v0, p0}, Landroid/widget/ToggleButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 230
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4GPrx:Landroid/widget/ToggleButton;

    invoke-virtual {v0, p0}, Landroid/widget/ToggleButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 231
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4GDrx:Landroid/widget/ToggleButton;

    invoke-virtual {v0, p0}, Landroid/widget/ToggleButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 232
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4GBoth:Landroid/widget/ToggleButton;

    invoke-virtual {v0, p0}, Landroid/widget/ToggleButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 233
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m1xPrx:Landroid/widget/ToggleButton;

    invoke-virtual {v0, p0}, Landroid/widget/ToggleButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 234
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m1xDrx:Landroid/widget/ToggleButton;

    invoke-virtual {v0, p0}, Landroid/widget/ToggleButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 235
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m1xBoth:Landroid/widget/ToggleButton;

    invoke-virtual {v0, p0}, Landroid/widget/ToggleButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 236
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mEvdoPrx:Landroid/widget/ToggleButton;

    invoke-virtual {v0, p0}, Landroid/widget/ToggleButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 237
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mEvdoDrx:Landroid/widget/ToggleButton;

    invoke-virtual {v0, p0}, Landroid/widget/ToggleButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 238
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mEvdoBoth:Landroid/widget/ToggleButton;

    invoke-virtual {v0, p0}, Landroid/widget/ToggleButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 240
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mSimTypeToShow:I

    .line 241
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->showDialog(I)V

    .line 242
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mdmInitialize(Landroid/content/Context;)V

    .line 243
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->setOnMDMChangedListener(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$IMDMSeiviceInterface;)V

    .line 244
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->componentsArray:Ljava/util/List;

    iget v2, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mSimTypeToShow:I

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mdmParametersSeting(Ljava/util/List;I)V

    .line 245
    return-void
.end method

.method protected onCreateDialog(ILandroid/os/Bundle;)Landroid/app/Dialog;
    .locals 5
    .param p1, "id"    # I
    .param p2, "args"    # Landroid/os/Bundle;

    .line 639
    const/4 v0, 0x0

    const-string v1, "Waiting"

    const-string v2, "AntennaDiversity"

    const/4 v3, 0x1

    if-eqz p1, :cond_2

    if-eq p1, v3, :cond_1

    const/4 v4, 0x2

    if-eq p1, v4, :cond_0

    .line 665
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreateDialog(I)Landroid/app/Dialog;

    move-result-object v0

    return-object v0

    .line 657
    :cond_0
    const-string v4, "Before Wait Unsubscribe message.."

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 658
    new-instance v2, Landroid/app/ProgressDialog;

    invoke-direct {v2, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    iput-object v2, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mProgressDialog2:Landroid/app/ProgressDialog;

    .line 659
    invoke-virtual {v2, v1}, Landroid/app/ProgressDialog;->setTitle(Ljava/lang/CharSequence;)V

    .line 660
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mProgressDialog2:Landroid/app/ProgressDialog;

    const-string v2, "Wait Unsubscribe message.."

    invoke-virtual {v1, v2}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 661
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mProgressDialog2:Landroid/app/ProgressDialog;

    invoke-virtual {v1, v0}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 662
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mProgressDialog2:Landroid/app/ProgressDialog;

    invoke-virtual {v0, v3}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 663
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mProgressDialog2:Landroid/app/ProgressDialog;

    return-object v0

    .line 649
    :cond_1
    const-string v4, "Before Wait subscribe message.."

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 650
    new-instance v2, Landroid/app/ProgressDialog;

    invoke-direct {v2, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    iput-object v2, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mProgressDialog1:Landroid/app/ProgressDialog;

    .line 651
    invoke-virtual {v2, v1}, Landroid/app/ProgressDialog;->setTitle(Ljava/lang/CharSequence;)V

    .line 652
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mProgressDialog1:Landroid/app/ProgressDialog;

    const-string v2, "Wait subscribe message.."

    invoke-virtual {v1, v2}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 653
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mProgressDialog1:Landroid/app/ProgressDialog;

    invoke-virtual {v1, v0}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 654
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mProgressDialog1:Landroid/app/ProgressDialog;

    invoke-virtual {v0, v3}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 655
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mProgressDialog1:Landroid/app/ProgressDialog;

    return-object v0

    .line 641
    :cond_2
    const-string v4, "Wait MDML init"

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 642
    new-instance v2, Landroid/app/ProgressDialog;

    invoke-direct {v2, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    iput-object v2, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mProgressDialog:Landroid/app/ProgressDialog;

    .line 643
    invoke-virtual {v2, v1}, Landroid/app/ProgressDialog;->setTitle(Ljava/lang/CharSequence;)V

    .line 644
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mProgressDialog:Landroid/app/ProgressDialog;

    invoke-virtual {v1, v4}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 645
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mProgressDialog:Landroid/app/ProgressDialog;

    invoke-virtual {v1, v0}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 646
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mProgressDialog:Landroid/app/ProgressDialog;

    invoke-virtual {v0, v3}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 647
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mProgressDialog:Landroid/app/ProgressDialog;

    return-object v0
.end method

.method public onDestroy()V
    .locals 2

    .line 260
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 261
    const-string v0, "AntennaDiversity"

    const-string v1, "onDestroy"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 262
    return-void
.end method

.method public onPause()V
    .locals 0

    .line 255
    invoke-super {p0}, Landroid/app/Activity;->onPause()V

    .line 256
    return-void
.end method

.method protected onResume()V
    .locals 0

    .line 249
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 250
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->QueryAntennaStatus()V

    .line 251
    return-void
.end method

.method public onUpdateMDMData(Ljava/lang/String;Lcom/mediatek/mdml/Msg;)V
    .locals 2
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "data"    # Lcom/mediatek/mdml/Msg;

    .line 625
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "update = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "AntennaDiversity"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 626
    const-string v0, "MSG_ID_EM_C2K_L4_RTT_RADIO_INFO_IND"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 627
    invoke-virtual {p0, p2}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->updateCdma1xInfo(Lcom/mediatek/mdml/Msg;)V

    goto :goto_0

    .line 628
    :cond_0
    const-string v0, "MSG_ID_EM_C2K_L4_EVDO_SERVING_INFO_IND"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 629
    invoke-virtual {p0, p2}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->updateCdmaEvdoInfo(Lcom/mediatek/mdml/Msg;)V

    goto :goto_0

    .line 630
    :cond_1
    const-string v0, "MSG_ID_EM_EL1_STATUS_IND"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 631
    invoke-virtual {p0, p2}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->updateLTEInfo(Lcom/mediatek/mdml/Msg;)V

    goto :goto_0

    .line 632
    :cond_2
    const-string v0, "MSG_ID_FDD_EM_UL1_TAS_INFO_IND"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 633
    invoke-virtual {p0, p2}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->updateWcdmaInfo(Lcom/mediatek/mdml/Msg;)V

    .line 635
    :cond_3
    :goto_0
    return-void
.end method

.method public onUpdateMDMStatus(I)V
    .locals 3
    .param p1, "msg_id"    # I

    .line 434
    const-string v0, "AntennaDiversity"

    const/4 v1, 0x1

    if-eqz p1, :cond_2

    if-eq p1, v1, :cond_1

    const/4 v1, 0x4

    if-eq p1, v1, :cond_0

    goto :goto_0

    .line 449
    :cond_0
    const-string v1, "UnSubscribe message id done"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 450
    const/4 v0, 0x2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->removeDialog(I)V

    .line 451
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mdmlClosing()Z

    .line 452
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->finish()V

    .line 453
    goto :goto_0

    .line 443
    :cond_1
    const-string v2, "Subscribe message id done"

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 444
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->removeDialog(I)V

    .line 445
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mdmlEnableSubscribe()V

    .line 446
    goto :goto_0

    .line 436
    :cond_2
    const-string v2, "MDM Service init done"

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 437
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->registerNetworkInfo()V

    .line 438
    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->removeDialog(I)V

    .line 439
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->showDialog(I)V

    .line 440
    nop

    .line 457
    :goto_0
    return-void
.end method

.method updateCdma1xInfo(Lcom/mediatek/mdml/Msg;)V
    .locals 7
    .param p1, "data"    # Lcom/mediatek/mdml/Msg;

    .line 580
    const-string v0, "rx_power"

    const/4 v1, 0x1

    invoke-virtual {p0, p1, v0, v1}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v0

    .line 581
    .local v0, "prx_power":I
    const-string v2, "div_rx_power"

    invoke-virtual {p0, p1, v2, v1}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v2

    .line 582
    .local v2, "drx_power":I
    if-le v0, v2, :cond_0

    move v3, v0

    goto :goto_0

    :cond_0
    move v3, v2

    .line 583
    .local v3, "rx_power":I
    :goto_0
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "prx_power = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, "AntennaDiversity"

    invoke-static {v5, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 584
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "drx_power = "

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v5, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 585
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "rx_power = "

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v5, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 586
    iget v4, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mCdmaAnt:I

    const-string v5, ""

    if-eq v4, v1, :cond_3

    const/4 v1, 0x2

    if-eq v4, v1, :cond_2

    const/4 v1, 0x3

    if-eq v4, v1, :cond_1

    goto :goto_1

    .line 594
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m1xRssiCombine:Landroid/widget/TextView;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 595
    goto :goto_1

    .line 591
    :cond_2
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m1xRssiAnt1:Landroid/widget/TextView;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 592
    goto :goto_1

    .line 588
    :cond_3
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m1xRssiAnt0:Landroid/widget/TextView;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 589
    nop

    .line 599
    :goto_1
    return-void
.end method

.method updateCdmaEvdoInfo(Lcom/mediatek/mdml/Msg;)V
    .locals 7
    .param p1, "data"    # Lcom/mediatek/mdml/Msg;

    .line 602
    const-string v0, "rssi_dbm"

    const/4 v1, 0x1

    invoke-virtual {p0, p1, v0, v1}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v0

    div-int/lit16 v0, v0, 0x80

    .line 603
    .local v0, "prx_power":I
    const-string v2, "div_rssi"

    invoke-virtual {p0, p1, v2, v1}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v2

    div-int/lit16 v2, v2, 0x80

    .line 604
    .local v2, "drx_power":I
    if-le v0, v2, :cond_0

    move v3, v0

    goto :goto_0

    :cond_0
    move v3, v2

    .line 605
    .local v3, "rx_power":I
    :goto_0
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "prx_power = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, "AntennaDiversity"

    invoke-static {v5, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 606
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "drx_power = "

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v5, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 607
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "rx_power = "

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v5, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 608
    iget v4, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mCdmaAnt:I

    const-string v5, ""

    if-eq v4, v1, :cond_3

    const/4 v1, 0x2

    if-eq v4, v1, :cond_2

    const/4 v1, 0x3

    if-eq v4, v1, :cond_1

    goto :goto_1

    .line 616
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mEvdoRssiCombine:Landroid/widget/TextView;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 617
    goto :goto_1

    .line 613
    :cond_2
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mEvdoRssiAnt1:Landroid/widget/TextView;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 614
    goto :goto_1

    .line 610
    :cond_3
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mEvdoRssiAnt0:Landroid/widget/TextView;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 611
    nop

    .line 621
    :goto_1
    return-void
.end method

.method updateLTEInfo(Lcom/mediatek/mdml/Msg;)V
    .locals 16
    .param p1, "data"    # Lcom/mediatek/mdml/Msg;

    .line 468
    move-object/from16 v0, p0

    move-object/from16 v1, p1

    const-string v2, "dl_info[0].dl_rsrp[0]"

    const/4 v3, 0x1

    invoke-virtual {v0, v1, v2, v3}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v2

    .line 469
    .local v2, "dl_rsrp0":I
    const-string v4, "dl_info[0].dl_rsrq[0]"

    invoke-virtual {v0, v1, v4, v3}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v4

    .line 470
    .local v4, "dl_rsrq0":I
    const-string v5, "dl_info[0].dl_rssi[0]"

    invoke-virtual {v0, v1, v5, v3}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v5

    .line 471
    .local v5, "dl_rssi0":I
    const-string v6, "dl_info[0].dl_sinr[0]"

    invoke-virtual {v0, v1, v6, v3}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v6

    .line 472
    .local v6, "dl_sinr0":I
    const-string v7, "dl_info[0].dl_rsrp[1]"

    invoke-virtual {v0, v1, v7, v3}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    .line 473
    .local v7, "dl_rsrp1":I
    const-string v8, "dl_info[0].dl_rsrq[1]"

    invoke-virtual {v0, v1, v8, v3}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v8

    .line 474
    .local v8, "dl_rsrq1":I
    const-string v9, "dl_info[0].dl_rssi[1]"

    invoke-virtual {v0, v1, v9, v3}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v9

    .line 475
    .local v9, "dl_rssi1":I
    const-string v10, "dl_info[0].dl_sinr[1]"

    invoke-virtual {v0, v1, v10, v3}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v10

    .line 476
    .local v10, "dl_sinr1":I
    const-string v11, "dl_info[0].rsrp"

    invoke-virtual {v0, v1, v11, v3}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v11

    .line 477
    .local v11, "dl_rsrp":I
    const-string v12, "dl_info[0].rsrq"

    invoke-virtual {v0, v1, v12, v3}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    .line 478
    .local v12, "dl_rsrq":I
    if-le v5, v9, :cond_0

    move v13, v5

    goto :goto_0

    :cond_0
    move v13, v9

    .line 479
    .local v13, "dl_rssi":I
    :goto_0
    const-string v14, "dl_info[0].sinr"

    invoke-virtual {v0, v1, v14, v3}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v14

    .line 480
    .local v14, "dl_sinr":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "dl_rsrp0 = "

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v15, "AntennaDiversity"

    invoke-static {v15, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 481
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "dl_rsrq0 = "

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v15, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 482
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "dl_rssi0 = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v15, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 483
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "dl_sinr0 = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v15, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 484
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "dl_rsrp1 = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v15, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 485
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "dl_rsrq1 = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v15, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 486
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "dl_rssi1 = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v15, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 487
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "dl_sinr1 = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v15, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 488
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "dl_rsrp = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v15, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 489
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "dl_rsrq = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v15, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 490
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "dl_rssi = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v15, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 491
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "dl_sinr = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v15, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 492
    iget v1, v0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m4gAnt:I

    const-string v3, ""

    const/4 v15, 0x1

    if-eq v1, v15, :cond_3

    const/4 v15, 0x2

    if-eq v1, v15, :cond_2

    const/4 v15, 0x3

    if-eq v1, v15, :cond_1

    goto/16 :goto_1

    .line 506
    :cond_1
    iget-object v1, v0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRsrpCombine:Landroid/widget/TextView;

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    invoke-virtual {v1, v15}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 507
    iget-object v1, v0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRsrqCombine:Landroid/widget/TextView;

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    invoke-virtual {v1, v15}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 508
    iget-object v1, v0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRssiCombine:Landroid/widget/TextView;

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    invoke-virtual {v1, v15}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 509
    iget-object v1, v0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteSinrCombine:Landroid/widget/TextView;

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 510
    goto/16 :goto_1

    .line 500
    :cond_2
    iget-object v1, v0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRsrpAnt1:Landroid/widget/TextView;

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    invoke-virtual {v1, v15}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 501
    iget-object v1, v0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRsrqAnt1:Landroid/widget/TextView;

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    invoke-virtual {v1, v15}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 502
    iget-object v1, v0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRssiAnt1:Landroid/widget/TextView;

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    invoke-virtual {v1, v15}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 503
    iget-object v1, v0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteSinrAnt1:Landroid/widget/TextView;

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 504
    goto :goto_1

    .line 494
    :cond_3
    iget-object v1, v0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRsrpAnt0:Landroid/widget/TextView;

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    invoke-virtual {v1, v15}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 495
    iget-object v1, v0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRsrqAnt0:Landroid/widget/TextView;

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    invoke-virtual {v1, v15}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 496
    iget-object v1, v0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteRssiAnt0:Landroid/widget/TextView;

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    invoke-virtual {v1, v15}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 497
    iget-object v1, v0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mLteSinrAnt0:Landroid/widget/TextView;

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 498
    nop

    .line 514
    :goto_1
    return-void
.end method

.method updateWcdmaInfo(Lcom/mediatek/mdml/Msg;)V
    .locals 17
    .param p1, "data"    # Lcom/mediatek/mdml/Msg;

    .line 517
    move-object/from16 v0, p0

    move-object/from16 v1, p1

    const-string v2, "EmUl1Tas.main_ant_idx"

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 518
    .local v2, "main_ant_idx":I
    const-string v3, "EmUl1Tas.rscp_0"

    const/4 v4, 0x1

    invoke-virtual {v0, v1, v3, v4}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v3

    .line 519
    .local v3, "rscp_0":I
    const-string v5, "EmUl1Tas.rscp_1"

    invoke-virtual {v0, v1, v5, v4}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v5

    .line 520
    .local v5, "rscp_1":I
    const-string v6, "EmUl1Tas.rscp_2"

    invoke-virtual {v0, v1, v6, v4}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v6

    .line 522
    .local v6, "rscp_2":I
    const-string v7, "EmUl1Tas.rssi_0"

    invoke-virtual {v0, v1, v7, v4}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    .line 523
    .local v7, "rssi_0":I
    const-string v8, "EmUl1Tas.rssi_1"

    invoke-virtual {v0, v1, v8, v4}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v8

    .line 524
    .local v8, "rssi_1":I
    const-string v9, "EmUl1Tas.rssi_2"

    invoke-virtual {v0, v1, v9, v4}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v9

    .line 525
    .local v9, "rssi_2":I
    const-string v10, "EmUl1Tas.rscp_max"

    invoke-virtual {v0, v1, v10, v4}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v10

    .line 526
    .local v10, "rscp_max":I
    const-string v11, "EmUl1Tas.rssi_max"

    invoke-virtual {v0, v1, v11, v4}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v11

    .line 529
    .local v11, "rssi_max":I
    const/4 v12, 0x0

    .line 530
    .local v12, "rscp_main":I
    const/4 v13, 0x0

    .line 532
    .local v13, "rssi_main":I
    const/4 v14, 0x0

    .line 533
    .local v14, "rscp_div":I
    const/4 v15, 0x0

    .line 535
    .local v15, "rssi_div":I
    if-nez v2, :cond_0

    .line 536
    move v12, v3

    .line 537
    move v13, v7

    .line 538
    move v14, v5

    .line 539
    move v15, v8

    goto :goto_0

    .line 540
    :cond_0
    const/4 v4, 0x1

    if-ne v2, v4, :cond_1

    .line 541
    move v12, v5

    .line 542
    move v13, v8

    .line 543
    move v14, v3

    .line 544
    move v15, v7

    goto :goto_0

    .line 545
    :cond_1
    const/4 v4, 0x2

    if-ne v2, v4, :cond_2

    .line 546
    move v12, v6

    .line 547
    move v13, v9

    .line 548
    move v14, v5

    .line 549
    move v15, v8

    goto :goto_0

    .line 550
    :cond_2
    const/4 v4, 0x3

    if-ne v2, v4, :cond_3

    .line 551
    move v12, v5

    .line 552
    move v13, v8

    .line 553
    move v14, v6

    .line 554
    move v15, v9

    .line 556
    :cond_3
    :goto_0
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "rscp_main = "

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v4, "AntennaDiversity"

    invoke-static {v4, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 557
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v16, v2

    .end local v2    # "main_ant_idx":I
    .local v16, "main_ant_idx":I
    const-string v2, "rssi_main = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v4, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 559
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "rscp_div = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v4, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 560
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "rssi_div = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v4, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 561
    iget v1, v0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->m3gAnt:I

    const-string v2, ""

    const/4 v4, 0x1

    if-eq v1, v4, :cond_6

    const/4 v4, 0x2

    if-eq v1, v4, :cond_5

    const/4 v4, 0x3

    if-eq v1, v4, :cond_4

    goto/16 :goto_1

    .line 571
    :cond_4
    iget-object v1, v0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mWcdmaRscpCombine:Landroid/widget/TextView;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 572
    iget-object v1, v0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mWcdmaRssiCombine:Landroid/widget/TextView;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 573
    goto :goto_1

    .line 567
    :cond_5
    iget-object v1, v0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mWcdmaRscpAnt1:Landroid/widget/TextView;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 568
    iget-object v1, v0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mWcdmaRssiAnt1:Landroid/widget/TextView;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 569
    goto :goto_1

    .line 563
    :cond_6
    iget-object v1, v0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mWcdmaRscpAnt0:Landroid/widget/TextView;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 564
    iget-object v1, v0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->mWcdmaRssiAnt0:Landroid/widget/TextView;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 565
    nop

    .line 577
    :goto_1
    return-void
.end method
