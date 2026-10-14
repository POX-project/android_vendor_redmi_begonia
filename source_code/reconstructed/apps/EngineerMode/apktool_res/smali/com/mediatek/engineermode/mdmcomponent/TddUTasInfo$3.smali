.class Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo$3;
.super Ljava/util/ArrayList;
.source "MDMComponent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;)V
    .locals 4
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;

    .line 10744
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo$3;->this$0:Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;

    invoke-direct {p0}, Ljava/util/ArrayList;-><init>()V

    .line 10745
    const-string v0, "TAS Enable Info"

    const-string v1, "Force TX Enable"

    const-string v2, "Force Ant State"

    const-string v3, "Current Ant State"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo$3;->add(Ljava/lang/Object;)Z

    .line 10747
    const-string v0, "Current Band"

    const-string v1, "Main Index"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo$3;->add(Ljava/lang/Object;)Z

    .line 10748
    const-string v0, "ANT Index"

    const-string v1, "TX Pwr dBm"

    const-string v2, "SINR dB"

    const-string v3, "RSCP dBm"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo$3;->add(Ljava/lang/Object;)Z

    .line 10750
    return-void
.end method
