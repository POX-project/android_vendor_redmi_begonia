.class Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;
.super Ljava/util/HashMap;
.source "MDMComponentFT.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    .line 317
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 319
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMR_4_75"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 320
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMR_5_15"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 321
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMR_5_90"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 322
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMR_6_70"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 323
    const/4 v0, 0x4

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMR_7_40"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 324
    const/4 v0, 0x5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMR_7_95"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 325
    const/4 v0, 0x6

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMR_10_20"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 326
    const/4 v0, 0x7

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMR_12_20"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 327
    const/16 v0, 0x8

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMR_SID"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 328
    const/16 v0, 0x9

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "GSM_EFR_SID"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 329
    const/16 v0, 0xa

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "TDMA_EFR_SID"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 330
    const/16 v0, 0xb

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "PDC_EFR_SID"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 331
    const/16 v0, 0xc

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "RESERVE_1"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 332
    const/16 v0, 0xd

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "RESERVE_2"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 333
    const/16 v0, 0xe

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "RESERVE_3"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 334
    const/16 v0, 0xf

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMR_NODATA"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 335
    const/16 v0, 0x10

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMRWB_6_60"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 336
    const/16 v0, 0x11

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMRWB_8_85"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 337
    const/16 v0, 0x12

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMRWB_12_65"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 338
    const/16 v0, 0x13

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMRWB_14_25"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 339
    const/16 v0, 0x14

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMRWB_15_85"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 340
    const/16 v0, 0x15

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMRWB_18_25"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 341
    const/16 v0, 0x16

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMRWB_19_85"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 342
    const/16 v0, 0x17

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMRWB_23_05"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 343
    const/16 v0, 0x18

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMRWB_23_85"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 344
    const/16 v0, 0x19

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "AMRWB_SID"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 345
    const/16 v0, 0xff

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CODEC_NONE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 346
    return-void
.end method
