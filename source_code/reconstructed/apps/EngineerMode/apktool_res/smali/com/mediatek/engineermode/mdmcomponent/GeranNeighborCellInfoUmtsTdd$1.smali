.class Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd$1;
.super Ljava/util/HashMap;
.source "MDMComponent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;

    .line 9570
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 9572
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "dcs1800"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 9573
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "pcs1900"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 9574
    return-void
.end method
