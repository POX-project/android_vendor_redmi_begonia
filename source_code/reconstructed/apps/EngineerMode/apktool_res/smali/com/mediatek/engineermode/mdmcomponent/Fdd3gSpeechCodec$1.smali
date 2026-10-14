.class Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;
.super Ljava/util/HashMap;
.source "MDMComponent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec;

    .line 5742
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 5744
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMR_4_75"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5745
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMR_5_15"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5746
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMR_5_90"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5747
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMR_6_70"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5748
    const/4 v0, 0x4

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMR_7_40"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5749
    const/4 v0, 0x5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMR_7_95"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5750
    const/4 v0, 0x6

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMR_10_20"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5751
    const/4 v0, 0x7

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMR_12_20"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5752
    const/16 v0, 0x8

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMR_SID"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5753
    const/16 v0, 0x9

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "GSM_EFR_SID"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5754
    const/16 v0, 0xa

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "TDMA_EFR_SID"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5755
    const/16 v0, 0xb

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "PDC_EFR_SID"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5756
    const/16 v0, 0xc

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "RESERVE_1"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5757
    const/16 v0, 0xd

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "RESERVE_2"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5758
    const/16 v0, 0xe

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "RESERVE_3"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5759
    const/16 v0, 0xf

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMR_NODATA"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5760
    const/16 v0, 0x10

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMRWB_6_60"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5761
    const/16 v0, 0x11

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMRWB_8_85"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5762
    const/16 v0, 0x12

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMRWB_12_65"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5763
    const/16 v0, 0x13

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMRWB_14_25"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5764
    const/16 v0, 0x14

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMRWB_15_85"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5765
    const/16 v0, 0x15

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMRWB_18_25"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5766
    const/16 v0, 0x16

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMRWB_19_85"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5767
    const/16 v0, 0x17

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMRWB_23_05"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5768
    const/16 v0, 0x18

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMRWB_23_85"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5769
    const/16 v0, 0x19

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMRWB_SID"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Fdd3gSpeechCodec$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5770
    return-void
.end method
