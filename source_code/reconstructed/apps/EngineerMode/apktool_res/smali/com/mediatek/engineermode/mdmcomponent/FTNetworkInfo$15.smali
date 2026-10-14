.class Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$15;
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
        "Ljava/lang/Integer;",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    .line 369
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$15;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 371
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "MM_NORMAL_LU"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$15;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 372
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "MM_PERIODIC_LU"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$15;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 373
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "MM_IMSI_ATTACH_LU"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$15;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 374
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "MM_NONE_ATTEMPTED"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$15;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 375
    return-void
.end method
