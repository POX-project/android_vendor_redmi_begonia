.class Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;
.super Ljava/lang/Object;
.source "WiFiTxFormat.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/wifi/WiFiTxFormat;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "TxParam"
.end annotation


# instance fields
.field mAntIndex:I

.field mCbwIndex:I

.field mChID:I

.field mChannelType:I

.field mDbwIndex:I

.field mFecIndex:I

.field mGiIndex:I

.field mHwTx:I

.field mInterPktGap:I

.field mNssValue:I

.field mPktLength:I

.field mPower:I

.field mPreambleIndex:I

.field mPrimCh:I

.field mRateIndex:I

.field mWfSelect:I

.field final synthetic this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V
    .locals 0

    .line 124
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;Lcom/mediatek/engineermode/wifi/WiFiTxFormat$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;
    .param p2, "x1"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat$1;

    .line 124
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 2

    .line 144
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 145
    .local v0, "sb":Ljava/lang/StringBuilder;
    const-string v1, "mChID:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mChID:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " mCbwIndex:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mCbwIndex:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 146
    const-string v1, " mDbwIndex:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mDbwIndex:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " mPrimCh:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPrimCh:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 147
    const-string v1, " mWfSelect:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mWfSelect:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " mChannelType:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mChannelType:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 148
    const-string v1, " mPktLength:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPktLength:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " mPower:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPower:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 149
    const-string v1, " mRateIndex:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mRateIndex:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " mPreambleIndex:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPreambleIndex:I

    .line 150
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " mFecIndex:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mFecIndex:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " mGiIndex:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mGiIndex:I

    .line 151
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " mNssValue:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mNssValue:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " mInterPktGap:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mInterPktGap:I

    .line 152
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " mHwTx:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mHwTx:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 154
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method
