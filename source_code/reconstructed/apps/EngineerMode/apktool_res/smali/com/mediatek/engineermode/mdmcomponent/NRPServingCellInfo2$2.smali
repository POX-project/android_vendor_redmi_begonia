.class Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2$2;
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

    .line 1617
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2$2;->this$0:Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 1619
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "UL: LTE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1620
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "UL: NR"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1621
    const/4 v0, -0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "INVALID"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1622
    return-void
.end method
