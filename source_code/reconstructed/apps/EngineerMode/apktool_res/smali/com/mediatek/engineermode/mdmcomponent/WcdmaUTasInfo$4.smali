.class Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo$4;
.super Ljava/util/ArrayList;
.source "MDMComponent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;)V
    .locals 6
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;

    .line 5582
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo$4;->this$0:Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;

    invoke-direct {p0}, Ljava/util/ArrayList;-><init>()V

    .line 5583
    const-string v0, "TAS Enable Info"

    const-string v1, "Serving Band"

    const-string v2, "Current Ant State"

    const-string v3, "Previous Ant State"

    const-string v4, "Rx System"

    const-string v5, "RRC State"

    filled-new-array/range {v0 .. v5}, [Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo$4;->add(Ljava/lang/Object;)Z

    .line 5585
    const-string v0, "TX Index"

    const-string v1, "RX Index"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo$4;->add(Ljava/lang/Object;)Z

    .line 5586
    const-string v0, "ANT Index"

    const-string v1, "TX Pwr dBm"

    const-string v2, "Pwr Hdr DB"

    const-string v3, "RSCP dBm"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo$4;->add(Ljava/lang/Object;)Z

    .line 5587
    return-void
.end method
