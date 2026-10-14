.class Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2$3;
.super Ljava/util/HashMap;
.source "MDMComponentICD.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/util/HashMap<",
        "Ljava/lang/Integer;",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;

    .line 1625
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2$3;->this$0:Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 1627
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "null"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1628
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "idleCampedOnAnyCell"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1629
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "idleCampedNormally"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1630
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "idlConnecting"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1631
    const/4 v0, 0x4

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "connectedNormally"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1632
    const/4 v0, 0x5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "releasing"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1633
    const/4 v0, 0x6

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "atmptOutbndMobility"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1634
    const/4 v0, 0x7

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "atmptInbndMobility"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1635
    const/16 v0, 0x8

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "inactive"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1636
    const/16 v0, 0x9

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "endcScgAdded"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1637
    return-void
.end method
