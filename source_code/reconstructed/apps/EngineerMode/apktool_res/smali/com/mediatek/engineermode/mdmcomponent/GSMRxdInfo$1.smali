.class Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo$1;
.super Ljava/util/HashMap;
.source "MDMComponent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;

    .line 10451
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 10453
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Band 850"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 10454
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Band 900"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 10455
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Band 1800"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 10456
    const/4 v0, 0x4

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Band 1900"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 10457
    const/4 v0, 0x5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "-"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 10458
    return-void
.end method
