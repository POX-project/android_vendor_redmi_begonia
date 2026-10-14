.class Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo$1;
.super Ljava/util/ArrayList;
.source "MDMComponent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;)V
    .locals 4
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;

    .line 1926
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;

    invoke-direct {p0}, Ljava/util/ArrayList;-><init>()V

    .line 1927
    const-string v0, "TAS Enable"

    const-string v1, "Switch state"

    const-string v2, "TX Power"

    const-string v3, "RRC status"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo$1;->add(Ljava/lang/Object;)Z

    .line 1929
    const-string v0, "Band"

    const-string v1, "TX Index"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo$1;->add(Ljava/lang/Object;)Z

    .line 1930
    const-string v0, "ANT Index"

    const-string v1, "TX Pwr dBm"

    const-string v2, "PHR dB"

    const-string v3, "RSRP dBm"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo$1;->add(Ljava/lang/Object;)Z

    .line 1932
    return-void
.end method
