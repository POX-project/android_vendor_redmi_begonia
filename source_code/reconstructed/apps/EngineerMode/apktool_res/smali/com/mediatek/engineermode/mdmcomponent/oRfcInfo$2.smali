.class Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo$2;
.super Ljava/util/HashMap;
.source "MDMComponentICD.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;

    .line 5383
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo$2;->this$0:Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 5385
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "t310-Expiry"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5386
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "randomAccessProblem"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5387
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "rlc-MaxNumRetx"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5388
    const-string v1, "synchReconfigFailure-SCG"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5389
    const-string v1, "scg-reconfigFailure"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5390
    const-string v1, "srb3-IntegrityFailure"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5391
    return-void
.end method
