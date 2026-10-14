.class Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field band:I

.field cellIdAddrs:[I

.field cell_id:I

.field dlBandwidth:I

.field dl_earfcn:I

.field earfcn:I

.field highSpeed:I

.field lac:Ljava/lang/String;

.field mBandMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field pci:I

.field powerClass:I

.field rsrp:I

.field rsrq:I

.field servingValid:I

.field sinr:I

.field ulBandwidth:I

.field ul_earfcn:I


# direct methods
.method static constructor <clinit>()V
    .locals 6

    .line 2777
    const-string v0, "MSG_ID_EM_ERRC_MOB_MEAS_INTRARAT_INFO_IND"

    const-string v1, "MSG_ID_EM_ERRC_SERVING_INFO_IND"

    const-string v2, "MSG_ID_EM_EMM_REG_COMMON_INFO_IND"

    const-string v3, "MSG_ID_EM_ERRC_EL1_CONFIG_INFO_IND"

    const-string v4, "type_icd_record"

    const-string v5, "7100"

    filled-new-array/range {v0 .. v5}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 2815
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 2786
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->mBandMapping:Ljava/util/HashMap;

    .line 2810
    const-string v0, "-"

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->lac:Ljava/lang/String;

    .line 2812
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->servingValid:I

    .line 2846
    const/4 v0, 0x3

    new-array v0, v0, [I

    fill-array-data v0, :array_0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->cellIdAddrs:[I

    .line 2816
    return-void

    :array_0
    .array-data 4
        0x8
        0xd8
        0x20
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 2830
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 2825
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 14

    .line 2834
    const-string v0, "PCI"

    const-string v1, "EARFCN (Band)"

    const-string v2, "SINR"

    const-string v3, "RSRP"

    const-string v4, "RSRQ"

    const-string v5, "FreqBandInd"

    const-string v6, "DlBandwidth"

    const-string v7, "UlBandwidth"

    const-string v8, "dl_earfcn"

    const-string v9, "ul_earfcn"

    const-string v10, "powerclass"

    const-string v11, "HighSpeed"

    const-string v12, "Cell ID"

    const-string v13, "LAC"

    filled-new-array/range {v0 .. v13}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 2820
    const-string v0, "Serving Cell(Primary Cell) Info"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 2842
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 9
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 2850
    const-string v0, "MSG_ID_EM_ERRC_SERVING_INFO_IND"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v2, "EmInfo/MDMComponent"

    if-eqz v1, :cond_0

    .line 2851
    move-object v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 2852
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    const-string v3, "is_serving_inf_valid"

    invoke-virtual {p0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    iput v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->servingValid:I

    .line 2853
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "is_serving_inf_valid = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->servingValid:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2855
    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "servingValid = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->servingValid:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2856
    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->servingValid:I

    if-nez v1, :cond_1

    .line 2857
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->clearData()V

    .line 2858
    const-string v0, "-"

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->addData(Ljava/lang/String;)V

    .line 2859
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->addData(Ljava/lang/String;)V

    .line 2860
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->addData(Ljava/lang/String;)V

    .line 2861
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->addData(Ljava/lang/String;)V

    .line 2862
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->addData(Ljava/lang/String;)V

    .line 2863
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->addData(Ljava/lang/String;)V

    .line 2864
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->addData(Ljava/lang/String;)V

    .line 2865
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->addData(Ljava/lang/String;)V

    .line 2866
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->addData(Ljava/lang/String;)V

    .line 2867
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->addData(Ljava/lang/String;)V

    .line 2868
    return-void

    .line 2871
    :cond_1
    const/4 v3, 0x1

    if-ne v1, v3, :cond_e

    .line 2872
    const-string v1, "MSG_ID_EM_ERRC_MOB_MEAS_INTRARAT_INFO_IND"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v4, ""

    const/4 v5, 0x0

    if-eqz v1, :cond_2

    .line 2873
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 2874
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "serving_info."

    .line 2876
    .local v1, "coName":Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "rsrp"

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v2

    iput v2, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->rsrp:I

    .line 2878
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "rsrq"

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v2

    iput v2, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->rsrq:I

    .line 2880
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "rs_snr_in_qdb"

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v2

    iput v2, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->sinr:I

    .line 2882
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "earfcn"

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    iput v2, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->earfcn:I

    .line 2884
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "pci"

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    iput v2, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->pci:I

    .line 2886
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "serv_lte_band"

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    iput v2, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->band:I

    .line 2889
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "DlBandwidth"

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v2

    iput v2, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->dlBandwidth:I

    .line 2891
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "UlBandwidth"

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v2

    iput v2, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->ulBandwidth:I

    .line 2893
    .end local v0    # "data":Lcom/mediatek/mdml/Msg;
    .end local v1    # "coName":Ljava/lang/String;
    goto/16 :goto_2

    :cond_2
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 2894
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 2895
    .restart local v0    # "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "serv_inf.high_speed_flg"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->highSpeed:I

    .line 2897
    const-string v1, "serv_inf.cell_id"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->cell_id:I

    .line 2898
    const-string v1, "serv_inf.dl_earfcn"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->dl_earfcn:I

    .line 2899
    const-string v1, "serv_inf.ul_earfcn"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->ul_earfcn:I

    .line 2900
    .end local v0    # "data":Lcom/mediatek/mdml/Msg;
    goto/16 :goto_2

    :cond_3
    const-string v0, "MSG_ID_EM_ERRC_EL1_CONFIG_INFO_IND"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 2901
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 2902
    .restart local v0    # "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "powerclass"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->powerClass:I

    .line 2903
    .end local v0    # "data":Lcom/mediatek/mdml/Msg;
    goto/16 :goto_2

    :cond_4
    const-string v0, "MSG_ID_EM_EMM_REG_COMMON_INFO_IND"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 2904
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 2905
    .restart local v0    # "data":Lcom/mediatek/mdml/Msg;
    iput-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->lac:Ljava/lang/String;

    .line 2906
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    const/4 v2, 0x2

    if-ge v1, v2, :cond_5

    .line 2907
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "lai.la_code["

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, "]"

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 2908
    .local v2, "lac_value":I
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->lac:Ljava/lang/String;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v2}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    iput-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->lac:Ljava/lang/String;

    .line 2906
    .end local v2    # "lac_value":I
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .end local v0    # "data":Lcom/mediatek/mdml/Msg;
    .end local v1    # "i":I
    :cond_5
    goto :goto_1

    .line 2910
    :cond_6
    const-string v0, "7100"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_7

    .line 2911
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 2912
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    iput-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->lac:Ljava/lang/String;

    .line 2913
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->cellIdAddrs:[I

    aget v1, v1, v5

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 2914
    .local v1, "version":I
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->cellIdAddrs:[I

    invoke-virtual {p0, v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v6

    .line 2915
    .local v6, "lac":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->getName()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, " update,name id = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, ", version = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, ", values = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v2, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2918
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->clearData()V

    .line 2919
    new-array v2, v3, [Ljava/lang/Object;

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    aput-object v7, v2, v5

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->addData([Ljava/lang/Object;)V

    goto :goto_2

    .line 2910
    .end local v0    # "icdPacket":Ljava/nio/ByteBuffer;
    .end local v1    # "version":I
    .end local v6    # "lac":I
    :cond_7
    :goto_1
    nop

    .line 2921
    :goto_2
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->clearData()V

    .line 2922
    new-array v0, v3, [Ljava/lang/Object;

    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->earfcn:I

    const/4 v2, -0x1

    if-ne v1, v2, :cond_8

    move-object v1, v4

    goto :goto_3

    :cond_8
    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->pci:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    :goto_3
    aput-object v1, v0, v5

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->addData([Ljava/lang/Object;)V

    .line 2923
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->earfcn:I

    const-string v1, ")"

    if-ne v0, v2, :cond_9

    move-object v0, v4

    goto :goto_4

    .line 2924
    :cond_9
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "EARFCN: "

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v6, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->earfcn:I

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, " (Band "

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v6, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->band:I

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 2923
    :goto_4
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->addData(Ljava/lang/String;)V

    .line 2925
    new-array v0, v3, [Ljava/lang/Object;

    iget v6, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->sinr:I

    const/high16 v7, 0x40800000    # 4.0f

    if-ne v6, v2, :cond_a

    move-object v6, v4

    goto :goto_5

    :cond_a
    int-to-float v6, v6

    div-float/2addr v6, v7

    invoke-static {v6}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    :goto_5
    aput-object v6, v0, v5

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->addData([Ljava/lang/Object;)V

    .line 2926
    new-array v0, v3, [Ljava/lang/Object;

    iget v6, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->rsrp:I

    if-ne v6, v2, :cond_b

    move-object v6, v4

    goto :goto_6

    :cond_b
    int-to-float v6, v6

    div-float/2addr v6, v7

    invoke-static {v6}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    :goto_6
    aput-object v6, v0, v5

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->addData([Ljava/lang/Object;)V

    .line 2927
    new-array v0, v3, [Ljava/lang/Object;

    iget v6, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->rsrq:I

    if-ne v6, v2, :cond_c

    move-object v2, v4

    goto :goto_7

    :cond_c
    int-to-float v2, v6

    div-float/2addr v2, v7

    invoke-static {v2}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v2

    :goto_7
    aput-object v2, v0, v5

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->addData([Ljava/lang/Object;)V

    .line 2928
    new-array v0, v3, [Ljava/lang/Object;

    iget v2, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->band:I

    const v6, 0xffff

    if-ne v2, v6, :cond_d

    goto :goto_8

    :cond_d
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    :goto_8
    aput-object v4, v0, v5

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->addData([Ljava/lang/Object;)V

    .line 2929
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->mBandMapping:Ljava/util/HashMap;

    iget v4, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->dlBandwidth:I

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "("

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->dlBandwidth:I

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->addData(Ljava/lang/String;)V

    .line 2930
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->mBandMapping:Ljava/util/HashMap;

    iget v6, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->ulBandwidth:I

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v4, v6}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->ulBandwidth:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->addData(Ljava/lang/String;)V

    .line 2931
    new-array v0, v3, [Ljava/lang/Object;

    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->dl_earfcn:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    aput-object v1, v0, v5

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->addData([Ljava/lang/Object;)V

    .line 2932
    new-array v0, v3, [Ljava/lang/Object;

    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->ul_earfcn:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    aput-object v1, v0, v5

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->addData([Ljava/lang/Object;)V

    .line 2933
    new-array v0, v3, [Ljava/lang/Object;

    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->powerClass:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    aput-object v1, v0, v5

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->addData([Ljava/lang/Object;)V

    .line 2934
    new-array v0, v3, [Ljava/lang/Object;

    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->highSpeed:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    aput-object v1, v0, v5

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->addData([Ljava/lang/Object;)V

    .line 2935
    new-array v0, v3, [Ljava/lang/Object;

    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->cell_id:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    aput-object v1, v0, v5

    const-string v1, "0x%X"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->addData(Ljava/lang/String;)V

    .line 2936
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->lac:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteServingCellInfo;->addData(Ljava/lang/String;)V

    .line 2938
    :cond_e
    return-void
.end method
