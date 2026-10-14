.class Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$21;
.super Ljava/util/HashMap;
.source "MDMComponentFT.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/util/HashMap<",
        "Ljava/lang/String;",
        "[",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V
    .locals 5
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    .line 561
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$21;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 564
    const-string v0, "Cell ID"

    const-string v1, "UARFCN"

    const-string v2, "PSC"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v3

    const-string v4, "UMTS FDD"

    invoke-virtual {p0, v4, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$21;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 565
    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    const-string v1, "UMTS TDD"

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$21;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 567
    return-void
.end method
