.class Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo$3;
.super Ljava/util/ArrayList;
.source "MDMComponent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;)V
    .locals 7
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;

    .line 10293
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo$3;->this$0:Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;

    invoke-direct {p0}, Ljava/util/ArrayList;-><init>()V

    .line 10294
    const-string v0, "TAS Enable Info"

    const-string v1, "Serving Band"

    const-string v2, "Cur ant state"

    const-string v3, "Current Primary RxLev"

    const-string v4, "Current Diversity RxLev"

    const-string v5, "Current SNR"

    const-string v6, "Tx Power Detect"

    filled-new-array/range {v0 .. v6}, [Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo$3;->add(Ljava/lang/Object;)Z

    .line 10297
    const-string v0, "TX Index"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo$3;->add(Ljava/lang/Object;)Z

    .line 10298
    const-string v0, "ANT Index"

    const-string v1, "TX Pwr dBm"

    const-string v2, "SNR"

    const-string v3, "RSSI dBm"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo$3;->add(Ljava/lang/Object;)Z

    .line 10300
    return-void
.end method
