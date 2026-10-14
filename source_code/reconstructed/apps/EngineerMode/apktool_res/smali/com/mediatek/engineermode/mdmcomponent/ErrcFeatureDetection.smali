.class Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field mDetectedFeature:Ljava/lang/StringBuilder;

.field mDisplay:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field mMappingFD:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 11179
    const-string v0, "MSG_ID_EM_ERRC_FEATURE_DETECTION_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2
    .param p1, "context"    # Landroid/app/Activity;

    .line 11240
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 11182
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;->mMappingFD:Ljava/util/HashMap;

    .line 11235
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;->mDisplay:Ljava/util/HashMap;

    .line 11237
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, ""

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;->mDetectedFeature:Ljava/lang/StringBuilder;

    .line 11241
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 11255
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 11250
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 11259
    const-string v0, "Detected Feature"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 11245
    const-string v0, "ERRC Feature Detection"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 11264
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 6
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 11269
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 11270
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    if-nez v0, :cond_0

    .line 11271
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;->clearData()V

    .line 11272
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;->mDetectedFeature:Ljava/lang/StringBuilder;

    const/4 v2, 0x0

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/String;->length()I

    move-result v3

    add-int/lit8 v3, v3, -0x1

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->delete(II)Ljava/lang/StringBuilder;

    .line 11273
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;->mDisplay:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->clear()V

    .line 11274
    return-void

    .line 11276
    :cond_0
    const-string v1, "detected_feature"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    .line 11277
    .local v1, "index":I
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;->mDisplay:Ljava/util/HashMap;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    if-nez v2, :cond_1

    .line 11278
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;->clearData()V

    .line 11279
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;->mDisplay:Ljava/util/HashMap;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;->mMappingFD:Ljava/util/HashMap;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-virtual {v2, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11280
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;->mDetectedFeature:Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;->mMappingFD:Ljava/util/HashMap;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 11281
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;->mDetectedFeature:Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "\n"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;->addData(Ljava/lang/String;)V

    .line 11284
    :cond_1
    return-void
.end method
