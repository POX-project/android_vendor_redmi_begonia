.class Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$2;
.super Ljava/util/HashMap;
.source "MDMComponent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo;

    .line 12274
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$2;->this$0:Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 12276
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_NETWORK_IDLE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12277
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_NETWORK_2G_SPEECH_ON"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12278
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_NETWORK_3G_SPEECH_ON"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12279
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_NETWORK_3G324M_SPEECH_ON"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12280
    const/4 v0, 0x4

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_NETWORK_3G_SPEECH_CLOSING"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12281
    const/4 v0, 0x5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_NETWORK_4G_SPEECH_ON"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12282
    const/4 v0, 0x6

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_NETWORK_4G_SPEECH_CLOSING"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12283
    return-void
.end method
