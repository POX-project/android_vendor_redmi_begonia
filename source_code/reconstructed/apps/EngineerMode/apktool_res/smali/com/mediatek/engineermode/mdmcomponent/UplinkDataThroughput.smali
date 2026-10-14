.class Lcom/mediatek/engineermode/mdmcomponent/UplinkDataThroughput;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 8387
    const-string v0, "MSG_ID_EM_UPCM_PS_TPUT_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/UplinkDataThroughput;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 8391
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 8392
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 8406
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/UplinkDataThroughput;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 8401
    const-string v0, "1. General EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 8410
    const-string v0, "IP Rate UL (bytes/s)"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 8396
    const-string v0, "Uplink Data Throughput"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 8415
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 6
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 8420
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 8421
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "total_tx_byte_per_second"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/UplinkDataThroughput;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    int-to-long v1, v1

    .line 8423
    .local v1, "value":J
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/UplinkDataThroughput;->clearData()V

    .line 8424
    const/4 v3, 0x1

    new-array v3, v3, [Ljava/lang/Object;

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    const/4 v5, 0x0

    aput-object v4, v3, v5

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/mdmcomponent/UplinkDataThroughput;->addData([Ljava/lang/Object;)V

    .line 8425
    return-void
.end method
