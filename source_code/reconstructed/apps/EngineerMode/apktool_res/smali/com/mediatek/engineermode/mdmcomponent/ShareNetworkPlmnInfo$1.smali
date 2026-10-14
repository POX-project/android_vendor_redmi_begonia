.class Lcom/mediatek/engineermode/mdmcomponent/ShareNetworkPlmnInfo$1;
.super Ljava/util/HashMap;
.source "MDMComponent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/ShareNetworkPlmnInfo;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/ShareNetworkPlmnInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/ShareNetworkPlmnInfo;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/ShareNetworkPlmnInfo;

    .line 6830
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/ShareNetworkPlmnInfo$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ShareNetworkPlmnInfo;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 6832
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CELL_TYPE_SUITABLE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ShareNetworkPlmnInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 6833
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CELL_TYPE_ACCEPTABLE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ShareNetworkPlmnInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 6834
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CELL_TYPE_CAMPED_NOT_ALLOWED"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ShareNetworkPlmnInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 6835
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CELL_TYPE_NOT_APPLICABLE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ShareNetworkPlmnInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 6836
    return-void
.end method
