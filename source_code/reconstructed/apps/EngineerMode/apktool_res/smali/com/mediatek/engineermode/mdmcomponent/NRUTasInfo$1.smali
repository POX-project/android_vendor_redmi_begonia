.class Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo$1;
.super Ljava/util/ArrayList;
.source "MDMComponentICD.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/util/ArrayList<",
        "[",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;)V
    .locals 5
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;

    .line 4100
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;

    invoke-direct {p0}, Ljava/util/ArrayList;-><init>()V

    .line 4101
    const-string v0, "TAS Enable"

    const-string v1, "Band"

    const-string v2, "RRC status"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo$1;->add(Ljava/lang/Object;)Z

    .line 4102
    const-string v0, "RX State"

    const-string v2, "TX State"

    const-string v3, "TX0 Index"

    const-string v4, "TX1 Index"

    filled-new-array {v1, v0, v2, v3, v4}, [Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo$1;->add(Ljava/lang/Object;)Z

    .line 4103
    const-string v0, "ANT Index"

    const-string v1, "TX Pwr dBm"

    const-string v2, "PHR dB"

    const-string v3, "RSRP dBm"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo$1;->add(Ljava/lang/Object;)Z

    .line 4105
    return-void
.end method
