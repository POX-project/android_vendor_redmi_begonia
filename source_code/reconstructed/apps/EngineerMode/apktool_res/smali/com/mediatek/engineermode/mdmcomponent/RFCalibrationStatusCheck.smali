.class Lcom/mediatek/engineermode/mdmcomponent/RFCalibrationStatusCheck;
.super Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 12331
    const-string v0, "MSG_ID_EM_MMRF_CDDC_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/RFCalibrationStatusCheck;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 12336
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;-><init>(Landroid/app/Activity;)V

    .line 12337
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 12351
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/RFCalibrationStatusCheck;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 12346
    const-string v0, "1. General EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 12360
    const-string v0, "The Result:"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 12341
    const-string v0, "RF Calibration Status Check"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 12356
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 7
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 12365
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 12366
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    const/16 v1, 0x200

    new-array v2, v1, [C

    .line 12367
    .local v2, "cddc_info":[C
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    if-ge v3, v1, :cond_0

    .line 12368
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "cddc_info["

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, "]"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/RFCalibrationStatusCheck;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    int-to-char v4, v4

    aput-char v4, v2, v3

    .line 12367
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 12370
    .end local v3    # "i":I
    :cond_0
    new-instance v1, Ljava/lang/String;

    invoke-direct {v1, v2}, Ljava/lang/String;-><init>([C)V

    .line 12372
    .local v1, "cddc_info_s":Ljava/lang/String;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/RFCalibrationStatusCheck;->clearData()V

    .line 12373
    const/4 v3, 0x1

    new-array v3, v3, [Ljava/lang/String;

    const/4 v4, 0x0

    const-string v5, "\\n"

    const-string v6, "\n"

    invoke-virtual {v1, v5, v6}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v5

    aput-object v5, v3, v4

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/mdmcomponent/RFCalibrationStatusCheck;->addData([Ljava/lang/String;)V

    .line 12374
    return-void
.end method
