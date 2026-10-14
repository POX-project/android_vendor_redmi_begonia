.class Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field cellId:I

.field dl_sps_configured:I

.field drx_long_cycle:I

.field drx_short_cycle:I

.field earfcn:I

.field mMappingInfo:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field sr_periodicity:I

.field tti_bundling:I

.field tti_bundling_s:Ljava/lang/String;

.field ul_sps_configured:I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 11289
    const-string v0, "MSG_ID_EM_EL2_OV_STATUS_IND"

    const-string v1, "MSG_ID_EM_EMAC_CONFIG_REPORT_IND"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2
    .param p1, "context"    # Landroid/app/Activity;

    .line 11312
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 11293
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->drx_long_cycle:I

    .line 11294
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->drx_short_cycle:I

    .line 11295
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->tti_bundling:I

    .line 11296
    const-string v1, ""

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->tti_bundling_s:Ljava/lang/String;

    .line 11297
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->dl_sps_configured:I

    .line 11298
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->ul_sps_configured:I

    .line 11299
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->sr_periodicity:I

    .line 11300
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->earfcn:I

    .line 11301
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->cellId:I

    .line 11302
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->mMappingInfo:Ljava/util/HashMap;

    .line 11313
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 11327
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 11322
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 8

    .line 11331
    const-string v0, "DRX Long Cycle"

    const-string v1, "DRX Short Cycle"

    const-string v2, "TTI Bundling"

    const-string v3, "DL SPS Configured"

    const-string v4, "UL SPS Configured"

    const-string v5, "SR Periodicity"

    const-string v6, "EARFCN"

    const-string v7, "Cell ID"

    filled-new-array/range {v0 .. v7}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 11317
    const-string v0, "EMAC Info"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 11338
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 6
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 11343
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 11344
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "MSG_ID_EM_EMAC_CONFIG_REPORT_IND"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x3

    const/4 v3, 0x2

    if-eqz v1, :cond_1

    .line 11345
    const-string v1, "tti_bundling"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->tti_bundling:I

    .line 11346
    if-ltz v1, :cond_0

    if-gt v1, v3, :cond_0

    .line 11347
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->mMappingInfo:Ljava/util/HashMap;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v4, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->tti_bundling_s:Ljava/lang/String;

    goto :goto_0

    .line 11349
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->mMappingInfo:Ljava/util/HashMap;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->tti_bundling_s:Ljava/lang/String;

    .line 11350
    :goto_0
    const-string v1, "dl_sps_configured"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->dl_sps_configured:I

    .line 11351
    const-string v1, "ul_sps_configured"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->ul_sps_configured:I

    goto :goto_1

    .line 11352
    :cond_1
    const-string v1, "MSG_ID_EM_EL2_OV_STATUS_IND"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 11353
    const-string v1, "emac_stats.drx_long_cycle"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->drx_long_cycle:I

    .line 11354
    const-string v1, "emac_stats.drx_short_cycle"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->drx_short_cycle:I

    .line 11355
    const-string v1, "emac_stats.sr_periodicity"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->sr_periodicity:I

    .line 11356
    const-string v1, "emac_stats.earfcn"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->earfcn:I

    .line 11357
    const-string v1, "emac_stats.phys_cell_id"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->cellId:I

    .line 11360
    :cond_2
    :goto_1
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->clearData()V

    .line 11361
    const/16 v1, 0x8

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v4, 0x0

    iget v5, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->drx_long_cycle:I

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v1, v4

    const/4 v4, 0x1

    iget v5, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->drx_short_cycle:I

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v1, v4

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->tti_bundling_s:Ljava/lang/String;

    aput-object v4, v1, v3

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->dl_sps_configured:I

    .line 11362
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x4

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->ul_sps_configured:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x5

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->sr_periodicity:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x6

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->earfcn:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x7

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->cellId:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    .line 11361
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EmacInfo;->addData([Ljava/lang/Object;)V

    .line 11363
    return-void
.end method
