.class Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;
.super Ljava/lang/Object;
.source "TxOnlyTestActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "TxPktData"
.end annotation


# instance fields
.field private mMax:I

.field private mMin:I

.field private mName:Ljava/lang/String;

.field final synthetic this$0:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;Ljava/lang/String;II)V
    .locals 1
    .param p2, "name"    # Ljava/lang/String;
    .param p3, "min"    # I
    .param p4, "max"    # I

    .line 450
    iput-object p1, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;->this$0:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 451
    iput-object p2, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;->mName:Ljava/lang/String;

    .line 452
    iput p3, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;->mMin:I

    .line 453
    iput p4, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;->mMax:I

    .line 454
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "init pkt data with "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "BtTxOnlyTest"

    invoke-static {v0, p1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 455
    return-void
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;

    .line 446
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;->mName:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;

    .line 446
    iget v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;->mMin:I

    return v0
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;

    .line 446
    iget v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;->mMax:I

    return v0
.end method


# virtual methods
.method getMax()I
    .locals 1

    .line 463
    iget v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;->mMax:I

    return v0
.end method

.method getMin()I
    .locals 1

    .line 460
    iget v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;->mMin:I

    return v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 457
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;->mName:Ljava/lang/String;

    return-object v0
.end method
