.class Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field mMappingSpeechCodec:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field mMappingSpeechNetwork:Ljava/util/HashMap;
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

    .line 12151
    const-string v0, "MSG_ID_EM_SPEECH_INFO_SPH_CODEC_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 12287
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 12153
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo;->mMappingSpeechCodec:Ljava/util/HashMap;

    .line 12274
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo;->mMappingSpeechNetwork:Ljava/util/HashMap;

    .line 12288
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 12302
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 12297
    const-string v0, "1. General EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 3

    .line 12306
    const-string v0, "UL speech codec"

    const-string v1, "DL speech codec"

    const-string v2, "speech network"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 12292
    const-string v0, "Speech Codec Info"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 12311
    const/4 v0, 0x0

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 7
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 12316
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 12317
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo;->clearData()V

    .line 12318
    const-string v1, "ulSphCodec"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    .line 12319
    .local v1, "ulSphCodec":I
    const-string v2, "dlSphCodec"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 12320
    .local v2, "dlSphCodec":I
    const-string v3, "sphNetwork"

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 12321
    .local v3, "sphNetwork":I
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "ulSphCodec = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, "EmInfo/MDMComponent"

    invoke-static {v5, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 12322
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "dlSphCodec = "

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v5, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 12323
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "sphNetwork = "

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v5, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 12324
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo;->mMappingSpeechCodec:Ljava/util/HashMap;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo;->addData(Ljava/lang/String;)V

    .line 12325
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo;->mMappingSpeechCodec:Ljava/util/HashMap;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo;->addData(Ljava/lang/String;)V

    .line 12326
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo;->mMappingSpeechNetwork:Ljava/util/HashMap;

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo;->addData(Ljava/lang/String;)V

    .line 12327
    return-void
.end method
