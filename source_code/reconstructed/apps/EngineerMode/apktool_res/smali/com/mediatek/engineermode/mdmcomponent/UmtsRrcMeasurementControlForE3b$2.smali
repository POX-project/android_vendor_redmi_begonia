.class Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3b$2;
.super Ljava/util/HashMap;
.source "MDMComponent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3b;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3b;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3b;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3b;

    .line 4040
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3b$2;->this$0:Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3b;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 4042
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "-"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3b$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 4043
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "GSM RSSI"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3b$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 4044
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "LTE RSRP"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3b$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 4045
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "LTE RSRQ"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3b$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 4046
    return-void
.end method
