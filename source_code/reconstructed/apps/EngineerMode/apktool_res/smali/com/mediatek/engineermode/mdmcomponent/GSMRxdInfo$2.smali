.class Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo$2;
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

    .line 10460
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo$2;->this$0:Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 10462
    const/4 v0, -0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "-"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 10463
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "MODE_LEGACY"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 10464
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "MODE_1RX_DESENSE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 10465
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "MODE_RXD"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 10466
    const/16 v0, 0x11

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "MODE_1RX_DESENSE_CROSS"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 10467
    const/16 v0, 0x13

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "RXD_CROSS"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 10468
    return-void
.end method
