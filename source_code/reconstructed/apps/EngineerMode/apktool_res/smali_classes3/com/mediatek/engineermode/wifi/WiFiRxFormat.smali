.class public Lcom/mediatek/engineermode/wifi/WiFiRxFormat;
.super Lcom/mediatek/engineermode/wifi/WiFiTestActivity;
.source "WiFiRxFormat.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;,
        Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;
    }
.end annotation


# static fields
.field private static final DEFAULT_PRIM_CH:I = 0x0

.field private static final DEFAULT_STA_ID:I = 0x0

.field private static final HANDLER_EVENT_GO:I = 0x1

.field private static final HANDLER_EVENT_STOP:I = 0x2

.field private static final HANDLER_EVENT_UPDATE:I = 0x3

.field private static final ONE_SECOND:I = 0x3e8

.field private static final TAG:Ljava/lang/String; = "WifiRX"


# instance fields
.field private mBandValue:I

.field private mBtnGo:Landroid/widget/Button;

.field private mBtnStop:Landroid/widget/Button;

.field private mBwAdapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mCap11ax:Z

.field private mCap2by2:Z

.field private mCapAntSwap:Z

.field private mCbWf1:Landroid/widget/CheckBox;

.field private mCbWf2:Landroid/widget/CheckBox;

.field private mChList:[Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

.field private mChannelAdapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mDbdcMode:Z

.field private mEtStaId:Landroid/widget/EditText;

.field private mParamConfig:Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

.field private mPreambleAdapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;",
            ">;"
        }
    .end annotation
.end field

.field private mRgAnt:Landroid/widget/RadioGroup;

.field private mRxHandler:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;

.field private mRxParam:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

.field private mRxThread:Landroid/os/HandlerThread;

.field private mSpCbw:Landroid/widget/Spinner;

.field private mSpCh:Landroid/widget/Spinner;

.field private mSpDbw:Landroid/widget/Spinner;

.field private mSpPreamble:Landroid/widget/Spinner;

.field private mSpPrimCh:Landroid/widget/Spinner;

.field private mTvFcsErr:Landroid/widget/TextView;

.field private mTvPer:Landroid/widget/TextView;

.field private mTvRssi0:Landroid/widget/TextView;

.field private mTvRssi1:Landroid/widget/TextView;

.field private mTvRxOk:Landroid/widget/TextView;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 28
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;-><init>()V

    .line 53
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    .line 54
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBwAdapter:Landroid/widget/ArrayAdapter;

    .line 55
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mPreambleAdapter:Landroid/widget/ArrayAdapter;

    .line 57
    new-instance v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    invoke-direct {v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mParamConfig:Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    .line 60
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBandValue:I

    .line 61
    iput-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mDbdcMode:Z

    .line 62
    iput-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mCapAntSwap:Z

    .line 63
    iput-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mCap11ax:Z

    .line 64
    iput-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mCap2by2:Z

    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/wifi/WiFiRxFormat;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRxFormat;

    .line 28
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->startRx()V

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/wifi/WiFiRxFormat;)Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRxFormat;

    .line 28
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxHandler:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/wifi/WiFiRxFormat;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRxFormat;

    .line 28
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->stopRx()V

    return-void
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/wifi/WiFiRxFormat;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRxFormat;

    .line 28
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->updateRxResult()V

    return-void
.end method

.method private getRxParam()Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;
    .locals 7

    .line 83
    new-instance v0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;-><init>(Lcom/mediatek/engineermode/wifi/WiFiRxFormat;Lcom/mediatek/engineermode/wifi/WiFiRxFormat$1;)V

    .line 84
    .local v0, "param":Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mChList:[Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mSpCh:Landroid/widget/Spinner;

    invoke-virtual {v2}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v2

    aget-object v1, v1, v2

    .line 85
    .local v1, "channel":Lcom/mediatek/engineermode/wifi/ChannelDataFormat;
    invoke-virtual {v1}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;->getId()I

    move-result v2

    iput v2, v0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mChID:I

    .line 86
    invoke-virtual {v1}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;->is5G()Z

    move-result v2

    iput v2, v0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mChannelType:I

    .line 87
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mCbWf1:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    const/4 v3, 0x1

    if-eqz v2, :cond_1

    .line 88
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mCbWf2:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    if-eqz v2, :cond_0

    const/4 v2, 0x3

    goto :goto_0

    :cond_0
    move v2, v3

    :goto_0
    iput v2, v0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mWfSelect:I

    goto :goto_1

    .line 90
    :cond_1
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mCbWf2:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    if-eqz v2, :cond_2

    .line 91
    const/4 v2, 0x2

    iput v2, v0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mWfSelect:I

    .line 94
    :cond_2
    :goto_1
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mParamConfig:Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->getMapBw()Ljava/util/LinkedHashMap;

    move-result-object v2

    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mSpCbw:Landroid/widget/Spinner;

    invoke-virtual {v4}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    iput v2, v0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mCbwIndex:I

    .line 95
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mParamConfig:Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->getMapBw()Ljava/util/LinkedHashMap;

    move-result-object v2

    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mSpDbw:Landroid/widget/Spinner;

    invoke-virtual {v4}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    iput v2, v0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mDbwIndex:I

    .line 96
    const/4 v2, 0x0

    iput v2, v0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mPrimCh:I

    .line 98
    :try_start_0
    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mSpPrimCh:Landroid/widget/Spinner;

    invoke-virtual {v4}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v4

    iput v4, v0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mPrimCh:I
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 101
    goto :goto_2

    .line 99
    :catch_0
    move-exception v4

    .line 100
    .local v4, "e":Ljava/lang/NumberFormatException;
    invoke-virtual {v4}, Ljava/lang/NumberFormatException;->printStackTrace()V

    .line 102
    .end local v4    # "e":Ljava/lang/NumberFormatException;
    :goto_2
    iput v2, v0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mStaId:I

    .line 104
    :try_start_1
    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mEtStaId:Landroid/widget/EditText;

    invoke-virtual {v4}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v4

    iput v4, v0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mStaId:I
    :try_end_1
    .catch Ljava/lang/NumberFormatException; {:try_start_1 .. :try_end_1} :catch_1

    .line 107
    goto :goto_3

    .line 105
    :catch_1
    move-exception v4

    .line 106
    .restart local v4    # "e":Ljava/lang/NumberFormatException;
    invoke-virtual {v4}, Ljava/lang/NumberFormatException;->printStackTrace()V

    .line 108
    .end local v4    # "e":Ljava/lang/NumberFormatException;
    :goto_3
    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mSpPreamble:Landroid/widget/Spinner;

    invoke-virtual {v4}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    .line 109
    .local v4, "preambleConfig":Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "preambleConfig:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mSpPreamble:Landroid/widget/Spinner;

    invoke-virtual {v6}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    .line 110
    invoke-virtual {v4}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->getName()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->getIndex()I

    move-result v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 109
    const-string v6, "WifiRX"

    invoke-static {v6, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 111
    invoke-virtual {v4}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->getIndex()I

    move-result v5

    iput v5, v0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mPreambleIndex:I

    .line 112
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRgAnt:Landroid/widget/RadioGroup;

    invoke-virtual {v5}, Landroid/widget/RadioGroup;->getCheckedRadioButtonId()I

    move-result v5

    const v6, 0x7f060833

    if-ne v5, v6, :cond_3

    .line 113
    move v3, v2

    goto :goto_4

    :cond_3
    nop

    :goto_4
    iput v3, v0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mAntIndex:I

    .line 114
    return-object v0
.end method

.method private initComponent()V
    .locals 11

    .line 236
    const v0, 0x7f06083f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mCbWf1:Landroid/widget/CheckBox;

    .line 237
    const v0, 0x7f060840

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mCbWf2:Landroid/widget/CheckBox;

    .line 238
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mCap2by2:Z

    const v1, 0x7f060841

    const/16 v2, 0x8

    if-nez v0, :cond_0

    .line 239
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/view/View;->setVisibility(I)V

    .line 241
    :cond_0
    const v0, 0x7f060835

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRgAnt:Landroid/widget/RadioGroup;

    .line 242
    const v3, 0x7f060833

    invoke-virtual {v0, v3}, Landroid/widget/RadioGroup;->check(I)V

    .line 243
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mCapAntSwap:Z

    if-nez v0, :cond_1

    .line 244
    const v0, 0x7f060834

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/view/View;->setVisibility(I)V

    .line 246
    :cond_1
    const v0, 0x7f06082f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mSpCh:Landroid/widget/Spinner;

    .line 247
    new-instance v0, Landroid/widget/ArrayAdapter;

    const v3, 0x1090008

    invoke-direct {v0, p0, v3}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    .line 248
    const v4, 0x1090009

    invoke-virtual {v0, v4}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 249
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mChList:[Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    array-length v5, v0

    const/4 v6, 0x0

    move v7, v6

    :goto_0
    if-ge v7, v5, :cond_2

    aget-object v8, v0, v7

    .line 250
    .local v8, "ch":Lcom/mediatek/engineermode/wifi/ChannelDataFormat;
    iget-object v9, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v8}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;->getName()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 249
    .end local v8    # "ch":Lcom/mediatek/engineermode/wifi/ChannelDataFormat;
    add-int/lit8 v7, v7, 0x1

    goto :goto_0

    .line 252
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mSpCh:Landroid/widget/Spinner;

    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v5}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 253
    new-instance v0, Landroid/widget/ArrayAdapter;

    invoke-direct {v0, p0, v3}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBwAdapter:Landroid/widget/ArrayAdapter;

    .line 254
    invoke-virtual {v0, v4}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 255
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBwAdapter:Landroid/widget/ArrayAdapter;

    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mParamConfig:Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    invoke-virtual {v5}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->getMapBw()Ljava/util/LinkedHashMap;

    move-result-object v5

    invoke-virtual {v5}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v5

    invoke-virtual {v0, v5}, Landroid/widget/ArrayAdapter;->addAll(Ljava/util/Collection;)V

    .line 256
    const v0, 0x7f060836

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mSpCbw:Landroid/widget/Spinner;

    .line 257
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBwAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v5}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 259
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mSpCbw:Landroid/widget/Spinner;

    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mParamConfig:Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    invoke-virtual {v5}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->getBW20Index()I

    move-result v5

    invoke-virtual {v0, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 260
    const v0, 0x7f060837

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mSpDbw:Landroid/widget/Spinner;

    .line 261
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBwAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v5}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 263
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mSpDbw:Landroid/widget/Spinner;

    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mParamConfig:Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    invoke-virtual {v5}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->getBW20Index()I

    move-result v5

    invoke-virtual {v0, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 264
    const v0, 0x7f06083d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mSpPrimCh:Landroid/widget/Spinner;

    .line 265
    const v0, 0x7f06083c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mSpPreamble:Landroid/widget/Spinner;

    .line 266
    new-instance v0, Landroid/widget/ArrayAdapter;

    invoke-direct {v0, p0, v3}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mPreambleAdapter:Landroid/widget/ArrayAdapter;

    .line 268
    invoke-virtual {v0, v4}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 269
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mPreambleAdapter:Landroid/widget/ArrayAdapter;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mParamConfig:Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    iget-boolean v4, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mCap11ax:Z

    invoke-virtual {v3, v6, v4}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->getPreambleConfig(ZZ)Ljava/util/ArrayList;

    move-result-object v3

    invoke-virtual {v0, v3}, Landroid/widget/ArrayAdapter;->addAll(Ljava/util/Collection;)V

    .line 270
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mSpPreamble:Landroid/widget/Spinner;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mPreambleAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v3}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 271
    const v0, 0x7f060864

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mEtStaId:Landroid/widget/EditText;

    .line 272
    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 273
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mCap11ax:Z

    if-nez v0, :cond_3

    .line 274
    const v0, 0x7f060832

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/view/View;->setVisibility(I)V

    .line 276
    :cond_3
    const v0, 0x7f060838

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mTvFcsErr:Landroid/widget/TextView;

    .line 277
    const v0, 0x7f06083a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mTvRxOk:Landroid/widget/TextView;

    .line 278
    const v0, 0x7f06083b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mTvPer:Landroid/widget/TextView;

    .line 279
    const v0, 0x7f060830

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mTvRssi0:Landroid/widget/TextView;

    .line 280
    const v0, 0x7f060831

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mTvRssi1:Landroid/widget/TextView;

    .line 281
    const v0, 0x7f060839

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBtnGo:Landroid/widget/Button;

    .line 282
    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 283
    const v0, 0x7f06083e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBtnStop:Landroid/widget/Button;

    .line 284
    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 285
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mDbdcMode:Z

    if-eqz v0, :cond_4

    .line 286
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    .line 287
    .local v0, "wfView":Landroid/view/View;
    invoke-virtual {v0, v2}, Landroid/view/View;->setVisibility(I)V

    .line 289
    .end local v0    # "wfView":Landroid/view/View;
    :cond_4
    const/4 v0, 0x1

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->setUiEnable(Z)V

    .line 290
    return-void
.end method

.method private setUiEnable(Z)V
    .locals 3
    .param p1, "enable"    # Z

    .line 315
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBtnGo:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 316
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBtnStop:Landroid/widget/Button;

    xor-int/lit8 v1, p1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 317
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mSpCh:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 318
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mSpCbw:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 319
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mSpDbw:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 320
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mSpPrimCh:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 321
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mSpPreamble:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 322
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mCbWf1:Landroid/widget/CheckBox;

    invoke-virtual {v0, p1}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 323
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mCbWf2:Landroid/widget/CheckBox;

    invoke-virtual {v0, p1}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 324
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mEtStaId:Landroid/widget/EditText;

    invoke-virtual {v0, p1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 325
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRgAnt:Landroid/widget/RadioGroup;

    invoke-virtual {v0}, Landroid/widget/RadioGroup;->getChildCount()I

    move-result v0

    .line 326
    .local v0, "count":I
    const/4 v1, 0x0

    .local v1, "k":I
    :goto_0
    if-ge v1, v0, :cond_0

    .line 327
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRgAnt:Landroid/widget/RadioGroup;

    invoke-virtual {v2, v1}, Landroid/widget/RadioGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    invoke-virtual {v2, p1}, Landroid/view/View;->setEnabled(Z)V

    .line 326
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 329
    .end local v1    # "k":I
    :cond_0
    return-void
.end method

.method private startRx()V
    .locals 10

    .line 178
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxParam:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

    iget v0, v0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mWfSelect:I

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBandValue:I

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaSetTxPath(II)I

    .line 179
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxParam:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

    iget v0, v0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mWfSelect:I

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBandValue:I

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaSetRxPath(II)I

    .line 180
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "hqaSetTxPath:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxParam:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

    iget v1, v1, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mWfSelect:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBandValue:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "WifiRX"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 181
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "hqaSetRxPath:"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxParam:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

    iget v3, v3, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mWfSelect:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBandValue:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 182
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mCapAntSwap:Z

    if-eqz v0, :cond_0

    .line 183
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxParam:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

    iget v0, v0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mAntIndex:I

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaSetAntSwap(I)I

    .line 184
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "hqaSetAntSwap:"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxParam:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

    iget v3, v3, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mAntIndex:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 186
    :cond_0
    iget v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBandValue:I

    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxParam:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

    iget v4, v0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mChID:I

    const/4 v5, 0x0

    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxParam:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

    iget v6, v0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mCbwIndex:I

    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxParam:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

    iget v7, v0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mDbwIndex:I

    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxParam:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

    iget v8, v0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mPrimCh:I

    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxParam:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

    iget v9, v0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mChannelType:I

    invoke-static/range {v3 .. v9}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaDbdcSetChannel(IIIIIII)I

    .line 188
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "hqaDbdcSetChannel:"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBandValue:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxParam:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

    iget v3, v3, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mChID:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v3, 0x0

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxParam:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

    iget v3, v3, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mCbwIndex:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxParam:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

    iget v3, v3, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mDbwIndex:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxParam:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

    iget v3, v3, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mPrimCh:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxParam:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

    iget v3, v3, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mChannelType:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 191
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBandValue:I

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxParam:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

    iget v3, v3, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mWfSelect:I

    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxParam:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

    iget v4, v4, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mStaId:I

    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxParam:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

    iget v5, v5, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mPreambleIndex:I

    invoke-static {v0, v3, v4, v5}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaDbdcStartRXExt(IIII)I

    .line 193
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "hqaDbdcStartRXExt:"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBandValue:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxParam:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

    iget v3, v3, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mWfSelect:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxParam:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

    iget v3, v3, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mStaId:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxParam:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

    iget v1, v1, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->mPreambleIndex:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 195
    return-void
.end method

.method private stopRx()V
    .locals 2

    .line 198
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBandValue:I

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaDbdcStopRX(I)I

    .line 199
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "hqaDbdcStopRX:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBandValue:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "WifiRX"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 200
    return-void
.end method

.method private updateRxResult()V
    .locals 9

    .line 154
    const/4 v0, 0x1

    new-array v1, v0, [I

    const/4 v2, 0x0

    aput v2, v1, v2

    .line 155
    .local v1, "fcsErr":[I
    new-array v3, v0, [I

    aput v2, v3, v2

    .line 156
    .local v3, "rxOk":[I
    new-array v4, v0, [I

    aput v2, v4, v2

    .line 157
    .local v4, "rssi0":[I
    new-array v0, v0, [I

    aput v2, v0, v2

    .line 158
    .local v0, "rssi1":[I
    const-string v5, "WifiRX"

    const-string v6, "start hqaGetRXStatisticsAllExt"

    invoke-static {v5, v6}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 159
    iget v6, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBandValue:I

    invoke-static {v6, v1, v3, v4, v0}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaGetRXStatisticsAllExt(I[I[I[I[I)I

    move-result v6

    if-nez v6, :cond_3

    .line 160
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "hqaGetRXStatisticsAllExt:"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v7, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBandValue:I

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, " "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget v8, v1, v2

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget v8, v3, v2

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget v8, v4, v2

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget v7, v0, v2

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v5, v6}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 162
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mTvFcsErr:Landroid/widget/TextView;

    aget v6, v1, v2

    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 163
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mTvRxOk:Landroid/widget/TextView;

    aget v6, v3, v2

    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 164
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mTvRssi0:Landroid/widget/TextView;

    aget v6, v4, v2

    const/16 v7, 0x80

    if-lt v6, v7, :cond_0

    aget v6, v4, v2

    add-int/lit16 v6, v6, -0x100

    goto :goto_0

    :cond_0
    aget v6, v4, v2

    :goto_0
    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 165
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mTvRssi1:Landroid/widget/TextView;

    aget v6, v0, v2

    if-lt v6, v7, :cond_1

    aget v6, v0, v2

    add-int/lit16 v6, v6, -0x100

    goto :goto_1

    :cond_1
    aget v6, v0, v2

    :goto_1
    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 166
    aget v5, v1, v2

    aget v6, v3, v2

    add-int/2addr v5, v6

    .line 167
    .local v5, "value":I
    if-eqz v5, :cond_2

    .line 168
    iget-object v6, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mTvPer:Landroid/widget/TextView;

    aget v2, v1, v2

    mul-int/lit8 v2, v2, 0x64

    div-int/2addr v2, v5

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v6, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_2

    .line 170
    :cond_2
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mTvPer:Landroid/widget/TextView;

    const-string v6, "0"

    invoke-virtual {v2, v6}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 175
    .end local v5    # "value":I
    :cond_3
    :goto_2
    return-void
.end method


# virtual methods
.method isInTestProcess()Z
    .locals 1

    .line 334
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBtnGo:Landroid/widget/Button;

    invoke-virtual {v0}, Landroid/widget/Button;->isEnabled()Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    return v0
.end method

.method public onClick(Landroid/view/View;)V
    .locals 3
    .param p1, "v"    # Landroid/view/View;

    .line 296
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBtnGo:Landroid/widget/Button;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_1

    .line 298
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mCbWf1:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mCbWf2:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    if-nez v0, :cond_0

    .line 299
    const v0, 0x7f0a0718

    invoke-static {p0, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    .line 300
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 301
    return-void

    .line 303
    :cond_0
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->getRxParam()Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxParam:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;

    .line 304
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxHandler:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;

    if-eqz v0, :cond_2

    .line 305
    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;->sendEmptyMessage(I)Z

    .line 306
    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->setUiEnable(Z)V

    goto :goto_0

    .line 308
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBtnStop:Landroid/widget/Button;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 309
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxHandler:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;

    const/4 v2, 0x2

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;->sendEmptyMessage(I)Z

    .line 310
    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->setUiEnable(Z)V

    .line 312
    :cond_2
    :goto_0
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 5
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 205
    invoke-super {p0, p1}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->onCreate(Landroid/os/Bundle;)V

    .line 207
    invoke-virtual {p0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->getIntent()Landroid/content/Intent;

    move-result-object v0

    .line 208
    .local v0, "it":Landroid/content/Intent;
    const-string v1, "mode"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 209
    .local v1, "mode":Ljava/lang/String;
    const-string v2, "WifiRX"

    const/4 v3, 0x1

    if-eqz v1, :cond_1

    .line 210
    iput-boolean v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mDbdcMode:Z

    .line 211
    const-string v4, "RX Band1"

    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 212
    iput v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mBandValue:I

    .line 214
    :cond_0
    const-string v4, "wifi rx in dbdc mode"

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 216
    :cond_1
    iget-boolean v4, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mDbdcMode:Z

    if-eqz v4, :cond_2

    const/4 v3, 0x2

    :cond_2
    invoke-static {v3}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaSetBandMode(I)I

    .line 217
    const-string v3, "key_ant_swap"

    const/4 v4, 0x0

    invoke-virtual {v0, v3, v4}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v3

    iput-boolean v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mCapAntSwap:Z

    .line 218
    const-string v3, "key_11ax"

    invoke-virtual {v0, v3, v4}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v3

    iput-boolean v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mCap11ax:Z

    .line 219
    const-string v3, "key_2by2"

    invoke-virtual {v0, v3, v4}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v3

    iput-boolean v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mCap2by2:Z

    .line 220
    const v3, 0x7f080109

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->setContentView(I)V

    .line 221
    invoke-static {}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getAllChannels()[Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    move-result-object v3

    iput-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mChList:[Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    .line 222
    new-instance v3, Landroid/os/HandlerThread;

    invoke-direct {v3, v2}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;)V

    iput-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxThread:Landroid/os/HandlerThread;

    .line 223
    invoke-virtual {v3}, Landroid/os/HandlerThread;->start()V

    .line 224
    new-instance v2, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxThread:Landroid/os/HandlerThread;

    invoke-virtual {v3}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v3

    invoke-direct {v2, p0, v3}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;-><init>(Lcom/mediatek/engineermode/wifi/WiFiRxFormat;Landroid/os/Looper;)V

    iput-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxHandler:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;

    .line 225
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->initComponent()V

    .line 226
    return-void
.end method

.method protected onDestroy()V
    .locals 2

    .line 230
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxHandler:Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;

    const/4 v1, 0x3

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;->removeMessages(I)V

    .line 231
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->mRxThread:Landroid/os/HandlerThread;

    invoke-virtual {v0}, Landroid/os/HandlerThread;->quit()Z

    .line 232
    invoke-super {p0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->onDestroy()V

    .line 233
    return-void
.end method
