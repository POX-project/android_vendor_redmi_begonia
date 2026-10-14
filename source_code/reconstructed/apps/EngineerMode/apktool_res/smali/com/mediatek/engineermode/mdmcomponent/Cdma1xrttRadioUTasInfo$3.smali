.class Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$3;
.super Ljava/util/ArrayList;
.source "MDMComponentC2k.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;)V
    .locals 6
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;

    .line 265
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$3;->this$0:Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;

    invoke-direct {p0}, Ljava/util/ArrayList;-><init>()V

    .line 266
    const-string v0, "TAS_EN"

    const-string v1, "TAS Version"

    const-string v2, "BandClass"

    const-string v3, "Channel"

    const-string v4, "PilotPN"

    const-string v5, "FER"

    filled-new-array/range {v0 .. v5}, [Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$3;->add(Ljava/lang/Object;)Z

    .line 268
    const-string v0, "Cur Ant State"

    const-string v1, "TX Ant"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$3;->add(Ljava/lang/Object;)Z

    .line 269
    const-string v0, "ANT Index"

    const-string v1, "RxPower(dBm)"

    const-string v2, "TxPower(dBm)"

    const-string v3, "PHR(dB)"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$3;->add(Ljava/lang/Object;)Z

    .line 271
    return-void
.end method
