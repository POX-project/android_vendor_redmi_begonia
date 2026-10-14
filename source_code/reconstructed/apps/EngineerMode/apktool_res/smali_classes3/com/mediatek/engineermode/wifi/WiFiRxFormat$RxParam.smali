.class Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;
.super Ljava/lang/Object;
.source "WiFiRxFormat.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/wifi/WiFiRxFormat;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "RxParam"
.end annotation


# instance fields
.field mAntIndex:I

.field mCbwIndex:I

.field mChID:I

.field mChannelType:I

.field mDbwIndex:I

.field mPreambleIndex:I

.field mPrimCh:I

.field mStaId:I

.field mWfSelect:I

.field final synthetic this$0:Lcom/mediatek/engineermode/wifi/WiFiRxFormat;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/wifi/WiFiRxFormat;)V
    .locals 0

    .line 70
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRxFormat;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/wifi/WiFiRxFormat;Lcom/mediatek/engineermode/wifi/WiFiRxFormat$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRxFormat;
    .param p2, "x1"    # Lcom/mediatek/engineermode/wifi/WiFiRxFormat$1;

    .line 70
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxParam;-><init>(Lcom/mediatek/engineermode/wifi/WiFiRxFormat;)V

    return-void
.end method
