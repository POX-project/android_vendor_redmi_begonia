.class Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo$1;
.super Ljava/util/HashMap;
.source "MDMComponentICD.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;

    .line 4997
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 4999
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "5MHz"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5000
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "10MHz"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5001
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "15MHz"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5002
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "20MHz"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5003
    const/4 v0, 0x4

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "25MHz"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5004
    const/4 v0, 0x5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "30MHz"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5005
    const/4 v0, 0x6

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "40MHz"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5006
    const/4 v0, 0x7

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "50MHz"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5007
    const/16 v0, 0x8

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "60MHz"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5008
    const/16 v0, 0x9

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "80MHz"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5009
    const/16 v0, 0xa

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "90MHz"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5010
    const/16 v0, 0xb

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "100MHz"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5011
    const/16 v0, 0xc

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "200MHz"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5012
    const/16 v0, 0xd

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "400MHz"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5013
    return-void
.end method
