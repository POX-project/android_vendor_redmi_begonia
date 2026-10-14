.class Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellSnrRx;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 7916
    const-string v0, "MSG_ID_EM_EL1_STATUS_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellSnrRx;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 7920
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 7921
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 7935
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellSnrRx;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 7930
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 2

    .line 7939
    const-string v0, "SINR[0]"

    const-string v1, "SINR[1]"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 7925
    const-string v0, "Secondary Cell SNR RX 0/1"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 7944
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 8
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 7949
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 7950
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "dl_info[1].dl_sinr["

    .line 7952
    .local v1, "coName":Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v3, 0x0

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "]"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v5, 0x1

    invoke-virtual {p0, v0, v2, v5}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellSnrRx;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v2

    .line 7953
    .local v2, "snr0":I
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p0, v0, v4, v5}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellSnrRx;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v4

    .line 7954
    .local v4, "snr1":I
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellSnrRx;->clearData()V

    .line 7955
    new-array v6, v5, [Ljava/lang/Object;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    aput-object v7, v6, v3

    invoke-virtual {p0, v6}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellSnrRx;->addData([Ljava/lang/Object;)V

    .line 7956
    new-array v5, v5, [Ljava/lang/Object;

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v5, v3

    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellSnrRx;->addData([Ljava/lang/Object;)V

    .line 7957
    return-void
.end method
