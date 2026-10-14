.class Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo$1;
.super Ljava/util/HashMap;
.source "MDMComponent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;

    .line 2786
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 2788
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "6_RB"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2789
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "15_RB"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2790
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "25_RB"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2791
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "50_RB"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2792
    const/4 v0, 0x4

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "75_RB"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2793
    const/4 v0, 0x5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "100_RB"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2794
    const/16 v0, 0xff

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Invalid(-1)"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2795
    return-void
.end method
