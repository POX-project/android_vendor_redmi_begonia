.class Lcom/mediatek/engineermode/mdmcomponent/DRBType$1;
.super Ljava/util/HashMap;
.source "MDMComponentICD.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/DRBType;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/DRBType;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/DRBType;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/DRBType;

    .line 5466
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/DRBType$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/DRBType;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 5468
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "MCG"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/DRBType$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5469
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, " SCG"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/DRBType$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5470
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPLIT"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/DRBType$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5471
    return-void
.end method
