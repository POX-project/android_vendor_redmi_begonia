.class Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;
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

    .line 12153
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 12155
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_FR"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12156
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_HR"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12157
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EFR"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12158
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_AMR_12_20"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12159
    const/4 v0, 0x4

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_AMR_10_20"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12160
    const/4 v0, 0x5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_AMR_7_95"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12161
    const/4 v0, 0x6

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_AMR_7_40"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12162
    const/4 v0, 0x7

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_AMR_6_70"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12163
    const/16 v0, 0x8

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_AMR_5_90"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12164
    const/16 v0, 0x9

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_AMR_5_15"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12165
    const/16 v0, 0xa

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_AMR_4_75"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12166
    const/16 v0, 0xb

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_AMR_SID"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12167
    const/16 v0, 0xc

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_AMR_NODATA"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12168
    const/16 v0, 0x20

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_AMRWB_6_60"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12169
    const/16 v0, 0x21

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_AMRWB_8_85"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12170
    const/16 v0, 0x22

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_AMRWB_12_65"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12171
    const/16 v0, 0x23

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_AMRWB_14_25"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12172
    const/16 v0, 0x24

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_AMRWB_15_85"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12173
    const/16 v0, 0x25

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_AMRWB_18_25"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12174
    const/16 v0, 0x26

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_AMRWB_19_85"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12175
    const/16 v0, 0x27

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_AMRWB_23_05"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12176
    const/16 v0, 0x28

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_AMRWB_23_85"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12177
    const/16 v0, 0x29

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_AMRWB_SID"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12178
    const/16 v0, 0x2a

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_LOST_FRAME"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12179
    const/16 v0, 0x30

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_C2K_SO1"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12180
    const/16 v0, 0x31

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_C2K_SO3"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12181
    const/16 v0, 0x32

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_C2K_SO17"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12182
    const/16 v0, 0x33

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_C2K_SO68"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12183
    const/16 v0, 0x34

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_C2K_SO73"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12184
    const/16 v0, 0x35

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_C2K_SO73WB"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12185
    const/16 v0, 0x60

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_G711"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12186
    const/16 v0, 0x61

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_G722"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12187
    const/16 v0, 0x62

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_G723_1"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12188
    const/16 v0, 0x63

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_G726"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12189
    const/16 v0, 0x64

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_G729"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12190
    const/16 v0, 0x80

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_08K_005_9/SPH_CODEC_EVS_08K_002_8"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12191
    const/16 v0, 0x81

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_08K_007_2"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12192
    const/16 v0, 0x82

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_08K_008_0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12193
    const/16 v0, 0x83

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_08K_009_6"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12194
    const/16 v0, 0x84

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_08K_013_2"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12195
    const/16 v0, 0x85

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_08K_016_4"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12196
    const/16 v0, 0x86

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_08K_024_4"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12197
    const/16 v0, 0x87

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_08K_032_0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12198
    const/16 v0, 0x88

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_08K_048_0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12199
    const/16 v0, 0x89

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_08K_064_0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12200
    const/16 v0, 0x8a

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_08K_096_0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12201
    const/16 v0, 0x8b

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_08K_128_0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12202
    const/16 v0, 0x8c

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_08K_002_4_SID"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12203
    const/16 v0, 0x8d

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_08K_000_0_REV"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12204
    const/16 v0, 0x8e

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_08K_000_0_LOST"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12205
    const/16 v0, 0x8f

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_08K_000_0_NODATA"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12206
    const/16 v0, 0x90

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_16K_005_9/SPH_CODEC_EVS_16K_002_8"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12207
    const/16 v0, 0x91

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_16K_007_2"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12208
    const/16 v0, 0x92

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_16K_008_0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12209
    const/16 v0, 0x93

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_16K_009_6"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12210
    const/16 v0, 0x94

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_16K_013_2"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12211
    const/16 v0, 0x95

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_16K_016_4"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12212
    const/16 v0, 0x96

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_16K_024_4"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12213
    const/16 v0, 0x97

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_16K_032_0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12214
    const/16 v0, 0x98

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_16K_048_0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12215
    const/16 v0, 0x99

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_16K_064_0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12216
    const/16 v0, 0x9a

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_16K_096_0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12217
    const/16 v0, 0x9b

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_16K_128_0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12218
    const/16 v0, 0x9c

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_16K_002_4_SID"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12219
    const/16 v0, 0x9d

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_16K_000_0_REV"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12220
    const/16 v0, 0x9e

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_16K_000_0_LOST"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12221
    const/16 v0, 0x9f

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_16K_000_0_NODATA"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12222
    const/16 v0, 0xa0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_32K_005_9/SPH_CODEC_EVS_32K_002_8"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12223
    const/16 v0, 0xa1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_32K_007_2"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12224
    const/16 v0, 0xa2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_32K_008_0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12225
    const/16 v0, 0xa3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_32K_009_6"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12226
    const/16 v0, 0xa4

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_32K_013_2"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12227
    const/16 v0, 0xa5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_32K_016_4"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12228
    const/16 v0, 0xa6

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_32K_024_4"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12229
    const/16 v0, 0xa7

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_32K_032_0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12230
    const/16 v0, 0xa8

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_32K_048_0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12231
    const/16 v0, 0xa9

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_32K_064_0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12232
    const/16 v0, 0xaa

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_32K_096_0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12233
    const/16 v0, 0xab

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_32K_128_0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12234
    const/16 v0, 0xac

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_32K_002_4_SID"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12235
    const/16 v0, 0xad

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_32K_000_0_REV"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12236
    const/16 v0, 0xae

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_32K_000_0_LOST"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12237
    const/16 v0, 0xaf

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_32K_000_0_NODATA"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12238
    const/16 v0, 0xb0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_48K_005_9/SPH_CODEC_EVS_48K_002_8"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12239
    const/16 v0, 0xb1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_48K_007_2"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12240
    const/16 v0, 0xb2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_48K_008_0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12241
    const/16 v0, 0xb3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_48K_009_6"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12242
    const/16 v0, 0xb4

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_48K_013_2"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12243
    const/16 v0, 0xb5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_48K_016_4"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12244
    const/16 v0, 0xb6

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_48K_024_4"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12245
    const/16 v0, 0xb7

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_48K_032_0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12246
    const/16 v0, 0xb8

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_48K_048_0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12247
    const/16 v0, 0xb9

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_48K_064_0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12248
    const/16 v0, 0xba

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_48K_096_0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12249
    const/16 v0, 0xbb

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_48K_128_0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12250
    const/16 v0, 0xbc

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_48K_002_4_SID"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12251
    const/16 v0, 0xbd

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_48K_000_0_REV"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12252
    const/16 v0, 0xbe

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_48K_000_0_LOST"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12253
    const/16 v0, 0xbf

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_48K_000_0_NODATA"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12254
    const/16 v0, 0xd0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_AWB_06_60"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12255
    const/16 v0, 0xd1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_AWB_08_85"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12256
    const/16 v0, 0xd2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_AWB_12_65"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12257
    const/16 v0, 0xd3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_AWB_14_25"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12258
    const/16 v0, 0xd4

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_AWB_15_85"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12259
    const/16 v0, 0xd5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_AWB_18_25"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12260
    const/16 v0, 0xd6

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_AWB_19_85"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12261
    const/16 v0, 0xd7

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_AWB_23_05"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12262
    const/16 v0, 0xd8

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_AWB_23_85"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12263
    const/16 v0, 0xd9

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_AWB_02_00_SID"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12264
    const/16 v0, 0xda

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_AWB_00_00_REV0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12265
    const/16 v0, 0xdb

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_AWB_00_00_REV1"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12266
    const/16 v0, 0xdc

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_AWB_00_00_REV2"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12267
    const/16 v0, 0xdd

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_AWB_00_00_REV3"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12268
    const/16 v0, 0xde

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_AWB_00_00_LOST"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12269
    const/16 v0, 0xdf

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_EVS_AWB_00_00_NODATA"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12270
    const/16 v0, 0xff

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SPH_CODEC_CODEC_NONE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SpeechCodecInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12271
    return-void
.end method
