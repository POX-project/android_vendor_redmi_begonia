.class Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field RRCStateMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field TasEnableMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field labelKeys:[Ljava/lang/String;

.field labelsList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "[",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private tabTitle:[Ljava/lang/String;

.field valuesHashMap:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/util/LinkedHashMap;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 1924
    const-string v0, "MSG_ID_EM_EL1_STATUS_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 4
    .param p1, "context"    # Landroid/app/Activity;

    .line 1955
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;-><init>(Landroid/app/Activity;)V

    .line 1926
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->labelsList:Ljava/util/List;

    .line 1933
    const-string v0, "Tas Common"

    const-string v1, "Cell Info"

    const-string v2, "UL Info"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->labelKeys:[Ljava/lang/String;

    .line 1934
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->valuesHashMap:Ljava/util/List;

    .line 1939
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo$3;-><init>(Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->TasEnableMapping:Ljava/util/HashMap;

    .line 1945
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo$4;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo$4;-><init>(Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->RRCStateMapping:Ljava/util/HashMap;

    .line 1952
    const-string v0, "Common"

    const-string v1, "CC0"

    const-string v2, "CC1"

    const-string v3, "CC2"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->tabTitle:[Ljava/lang/String;

    .line 1956
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->initTableComponent([Ljava/lang/String;)V

    .line 1957
    return-void
.end method


# virtual methods
.method public addDataToList(Ljava/util/ArrayList;[I)V
    .locals 4
    .param p2, "value"    # [I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "[I>;[I)V"
        }
    .end annotation

    .line 2109
    .local p1, "list":Ljava/util/ArrayList;, "Ljava/util/ArrayList<[I>;"
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    array-length v1, p2

    if-ge v0, v1, :cond_1

    .line 2110
    invoke-virtual {p1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    const/4 v2, 0x1

    if-nez v1, :cond_0

    .line 2111
    new-array v1, v2, [I

    const/4 v2, 0x0

    aget v3, p2, v0

    aput v3, v1, v2

    invoke-virtual {p1, v0, v1}, Ljava/util/ArrayList;->add(ILjava/lang/Object;)V

    goto :goto_1

    .line 2113
    :cond_0
    invoke-virtual {p1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [I

    invoke-virtual {p1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [I

    array-length v3, v3

    add-int/2addr v3, v2

    invoke-static {v1, v3}, Ljava/util/Arrays;->copyOf([II)[I

    move-result-object v1

    .line 2114
    .local v1, "newValue":[I
    array-length v3, v1

    sub-int/2addr v3, v2

    aget v2, p2, v0

    aput v2, v1, v3

    .line 2115
    invoke-virtual {p1, v0, v1}, Ljava/util/ArrayList;->add(ILjava/lang/Object;)V

    .line 2109
    .end local v1    # "newValue":[I
    :goto_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 2118
    .end local v0    # "i":I
    :cond_1
    return-void
.end method

.method getArrayTypeKey()Ljava/util/ArrayList;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 2140
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 2141
    .local v0, "arrayTypeKeys":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    const-string v1, "UL Info"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 2142
    return-object v0
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 2155
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 1966
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getHashMapLabels(I)Ljava/util/LinkedHashMap;
    .locals 5
    .param p1, "index"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/util/LinkedHashMap;",
            ">;"
        }
    .end annotation

    .line 2122
    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    .line 2124
    .local v0, "hashMapkeyValues":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/util/LinkedHashMap;>;"
    if-eqz p1, :cond_1

    const/4 v1, 0x2

    const/4 v2, 0x1

    if-eq p1, v2, :cond_0

    if-eq p1, v1, :cond_0

    const/4 v3, 0x3

    if-eq p1, v3, :cond_0

    goto :goto_0

    .line 2131
    :cond_0
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->labelKeys:[Ljava/lang/String;

    aget-object v3, v3, v2

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->valuesHashMap:Ljava/util/List;

    invoke-interface {v4, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, v3, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2132
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->labelKeys:[Ljava/lang/String;

    aget-object v2, v2, v1

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->valuesHashMap:Ljava/util/List;

    invoke-interface {v3, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, v2, v1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 2126
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v2, 0x0

    aget-object v1, v1, v2

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->valuesHashMap:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2127
    nop

    .line 2135
    :goto_0
    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 1961
    const-string v0, "LTE UTAS Info"

    return-object v0
.end method

.method isLabelArrayType(Ljava/lang/String;)Z
    .locals 1
    .param p1, "label"    # Ljava/lang/String;

    .line 2147
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->getArrayTypeKey()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2148
    const/4 v0, 0x1

    return v0

    .line 2150
    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 1971
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 38
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 1976
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 1977
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->clearData()V

    .line 1978
    const-string v2, "ul_info"

    .line 1979
    .local v2, "coULName":Ljava/lang/String;
    const-string v3, "cell_info"

    .line 1980
    .local v3, "coCellName":Ljava/lang/String;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "[0]."

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "utas_info_valid"

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 1983
    .local v4, "utas_info_valid":I
    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->setInfoValid(I)V

    .line 1984
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->isInfoValid()Z

    move-result v6

    if-nez v6, :cond_0

    .line 1985
    return-void

    .line 1987
    :cond_0
    const-string v6, "dl_cc_count"

    invoke-virtual {v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 1988
    .local v6, "dl_cc_count":I
    const-string v7, "ul_cc_count"

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 1989
    .local v7, "ul_cc_count":I
    const-string v11, ")"

    const-string v12, "-("

    const-string v13, ""

    const/4 v15, 0x2

    const/4 v10, 0x1

    if-lez v6, :cond_6

    .line 1990
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "tas_status"

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 1992
    .local v8, "tasidx":I
    if-ltz v8, :cond_1

    if-gt v8, v10, :cond_1

    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->TasEnableMapping:Ljava/util/HashMap;

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    invoke-virtual {v14, v9}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/lang/String;

    goto :goto_0

    .line 1993
    :cond_1
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->TasEnableMapping:Ljava/util/HashMap;

    invoke-static {v15}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    invoke-virtual {v14, v10}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Ljava/lang/String;

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    :goto_0
    nop

    .line 1994
    .local v9, "tasEnable":Ljava/lang/String;
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "utas_switch_state"

    invoke-virtual {v10, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v0, v1, v10}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v10

    .line 1996
    .local v10, "switch_state":I
    if-ltz v10, :cond_2

    const/16 v14, 0x1f

    if-gt v10, v14, :cond_2

    .line 1997
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    goto :goto_1

    :cond_2
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_1
    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    .line 1998
    .local v14, "switchState":Ljava/lang/String;
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "utas_tx_power"

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const/4 v15, 0x1

    invoke-virtual {v0, v1, v5, v15}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v5

    .line 2000
    .local v5, "tx_power":I
    const/16 v15, -0x32

    if-lt v5, v15, :cond_3

    const/16 v15, 0x21

    if-gt v5, v15, :cond_3

    .line 2001
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move/from16 v20, v4

    .end local v4    # "utas_info_valid":I
    .local v20, "utas_info_valid":I
    const-string v4, "dBm"

    invoke-virtual {v15, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    goto :goto_2

    .line 2000
    .end local v20    # "utas_info_valid":I
    .restart local v4    # "utas_info_valid":I
    :cond_3
    move/from16 v20, v4

    .line 2001
    .end local v4    # "utas_info_valid":I
    .restart local v20    # "utas_info_valid":I
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 2002
    .local v4, "txPower":Ljava/lang/String;
    :goto_2
    const/4 v15, 0x1

    if-ne v6, v15, :cond_4

    if-nez v7, :cond_4

    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->RRCStateMapping:Ljava/util/HashMap;

    move/from16 v21, v5

    const/16 v17, 0x0

    .end local v5    # "tx_power":I
    .local v21, "tx_power":I
    invoke-static/range {v17 .. v17}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v15, v5}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    move/from16 v22, v8

    goto :goto_4

    .end local v21    # "tx_power":I
    .restart local v5    # "tx_power":I
    :cond_4
    move/from16 v21, v5

    .line 2003
    .end local v5    # "tx_power":I
    .restart local v21    # "tx_power":I
    const/4 v5, 0x1

    if-lt v6, v5, :cond_5

    if-lt v7, v5, :cond_5

    .line 2004
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->RRCStateMapping:Ljava/util/HashMap;

    move/from16 v22, v8

    .end local v8    # "tasidx":I
    .local v22, "tasidx":I
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    invoke-virtual {v15, v8}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    goto :goto_3

    .line 2003
    .end local v22    # "tasidx":I
    .restart local v8    # "tasidx":I
    :cond_5
    move/from16 v22, v8

    .line 2004
    .end local v8    # "tasidx":I
    .restart local v22    # "tasidx":I
    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->RRCStateMapping:Ljava/util/HashMap;

    const/4 v8, 0x2

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    invoke-virtual {v5, v15}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    :goto_3
    check-cast v5, Ljava/lang/String;

    :goto_4
    nop

    .line 2005
    .local v5, "rrcState":Ljava/lang/String;
    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v15, 0x0

    aget-object v8, v8, v15

    move/from16 v17, v10

    .end local v10    # "switch_state":I
    .local v17, "switch_state":I
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v10, v15}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, [Ljava/lang/String;

    move-object/from16 v23, v13

    const/4 v13, 0x4

    new-array v13, v13, [Ljava/lang/String;

    aput-object v9, v13, v15

    const/16 v18, 0x1

    aput-object v14, v13, v18

    const/16 v19, 0x2

    aput-object v4, v13, v19

    const/16 v16, 0x3

    aput-object v5, v13, v16

    invoke-virtual {v0, v8, v15, v10, v13}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->setHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;[Ljava/lang/Object;)V

    .line 2007
    .end local v4    # "txPower":Ljava/lang/String;
    .end local v5    # "rrcState":Ljava/lang/String;
    .end local v9    # "tasEnable":Ljava/lang/String;
    .end local v14    # "switchState":Ljava/lang/String;
    .end local v17    # "switch_state":I
    .end local v21    # "tx_power":I
    .end local v22    # "tasidx":I
    goto :goto_5

    .line 2008
    .end local v20    # "utas_info_valid":I
    .local v4, "utas_info_valid":I
    :cond_6
    move/from16 v20, v4

    move-object/from16 v23, v13

    const/4 v15, 0x0

    .end local v4    # "utas_info_valid":I
    .restart local v20    # "utas_info_valid":I
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->labelKeys:[Ljava/lang/String;

    aget-object v4, v4, v15

    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v5, v15}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, [Ljava/lang/Object;

    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v5

    invoke-virtual {v0, v4, v15, v5}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/util/LinkedHashMap;)V

    .line 2010
    :goto_5
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->labelKeys:[Ljava/lang/String;

    aget-object v4, v4, v15

    invoke-virtual {v0, v4, v15}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->addData(Ljava/lang/String;I)V

    .line 2012
    const/4 v4, 0x3

    new-array v5, v4, [I

    .line 2013
    .local v5, "txActivated":[I
    new-array v8, v4, [I

    .line 2014
    .local v8, "rxActivated":[I
    new-array v9, v4, [Ljava/lang/String;

    .line 2015
    .local v9, "rxBand":[Ljava/lang/String;
    new-array v10, v4, [Ljava/lang/String;

    .line 2017
    .local v10, "txIdx":[Ljava/lang/String;
    const/4 v4, 0x2

    new-array v13, v4, [I

    fill-array-data v13, :array_0

    const-class v14, Ljava/lang/String;

    invoke-static {v14, v13}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, [[Ljava/lang/String;

    .line 2018
    .local v13, "rxAntIndex":[[Ljava/lang/String;
    new-array v14, v4, [I

    fill-array-data v14, :array_1

    const-class v15, Ljava/lang/String;

    invoke-static {v15, v14}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, [[Ljava/lang/String;

    .line 2019
    .local v14, "txPwr":[[Ljava/lang/String;
    new-array v15, v4, [I

    fill-array-data v15, :array_2

    const-class v4, Ljava/lang/String;

    invoke-static {v4, v15}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, [[Ljava/lang/String;

    .line 2020
    .local v4, "txPHR":[[Ljava/lang/String;
    move-object/from16 v21, v4

    const/4 v15, 0x2

    .end local v4    # "txPHR":[[Ljava/lang/String;
    .local v21, "txPHR":[[Ljava/lang/String;
    new-array v4, v15, [I

    fill-array-data v4, :array_3

    const-class v15, Ljava/lang/String;

    invoke-static {v15, v4}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, [[Ljava/lang/String;

    .line 2021
    .local v4, "rxRSRP":[[Ljava/lang/String;
    const/4 v15, 0x1

    if-lt v7, v15, :cond_7

    move/from16 v18, v15

    goto :goto_6

    :cond_7
    const/16 v18, 0x0

    :goto_6
    const/16 v17, 0x0

    aput v18, v5, v17

    .line 2022
    if-lt v6, v15, :cond_8

    const/4 v15, 0x1

    goto :goto_7

    :cond_8
    move/from16 v15, v17

    :goto_7
    aput v15, v8, v17

    .line 2023
    const/4 v15, 0x0

    .local v15, "i":I
    :goto_8
    move/from16 v22, v6

    const/4 v6, 0x3

    .end local v6    # "dl_cc_count":I
    .local v22, "dl_cc_count":I
    if-ge v15, v6, :cond_15

    .line 2024
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v24, v7

    .end local v7    # "ul_cc_count":I
    .local v24, "ul_cc_count":I
    const-string v7, "["

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-object/from16 v25, v4

    .end local v4    # "rxRSRP":[[Ljava/lang/String;
    .local v25, "rxRSRP":[[Ljava/lang/String;
    const-string v4, "]."

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v26, v14

    .end local v14    # "txPwr":[[Ljava/lang/String;
    .local v26, "txPwr":[[Ljava/lang/String;
    const-string v14, "band"

    invoke-virtual {v6, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 2027
    .local v6, "bandidx":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v27, v3

    .end local v3    # "coCellName":Ljava/lang/String;
    .local v27, "coCellName":Ljava/lang/String;
    const-string v3, "ul_cc_idx"

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v14, 0x1

    invoke-virtual {v0, v1, v3, v14}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v3

    .line 2030
    .local v3, "ul_cc_idx":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v28, v13

    .end local v13    # "rxAntIndex":[[Ljava/lang/String;
    .local v28, "rxAntIndex":[[Ljava/lang/String;
    const-string v13, "utas_cur_ant_idx"

    invoke-virtual {v14, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v1, v13}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 2033
    .local v13, "utas_cur_ant_idx":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v29, v10

    .end local v10    # "txIdx":[Ljava/lang/String;
    .local v29, "txIdx":[Ljava/lang/String;
    const-string v10, "utas_tx_activated"

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v0, v1, v10}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v10

    .line 2036
    .local v10, "utas_tx_activated":I
    if-lez v15, :cond_a

    .line 2037
    const/4 v14, -0x1

    if-eq v3, v14, :cond_9

    const/4 v14, 0x1

    if-ne v10, v14, :cond_9

    const/4 v14, 0x1

    goto :goto_9

    :cond_9
    const/4 v14, 0x0

    :goto_9
    aput v14, v5, v15

    .line 2038
    aget v14, v5, v15

    aput v14, v8, v15

    .line 2040
    :cond_a
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v30, v3

    .end local v3    # "ul_cc_idx":I
    .local v30, "ul_cc_idx":I
    const-string v3, "utas_max_ant_idx_cnt"

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 2043
    .local v3, "max_ant_idx":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v31, v10

    .end local v10    # "utas_tx_activated":I
    .local v31, "utas_tx_activated":I
    const-string v10, "tab: "

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v10, v15, 0x1

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v10, ", "

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget v10, v5, v15

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v10, ":"

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget v10, v8, v15

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    const-string v14, "EmInfo/MDMComponent"

    invoke-static {v14, v10}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2044
    if-ltz v6, :cond_b

    const/16 v10, 0xff

    if-gt v6, v10, :cond_b

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v14, "Band "

    invoke-virtual {v10, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    goto :goto_a

    :cond_b
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_a
    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    aput-object v10, v9, v15

    .line 2045
    const/16 v10, 0xa

    if-ltz v13, :cond_c

    if-gt v13, v10, :cond_c

    .line 2046
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v10, v23

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    goto :goto_b

    .line 2045
    :cond_c
    move-object/from16 v10, v23

    .line 2046
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_b
    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    aput-object v14, v29, v15

    .line 2047
    const/4 v14, 0x0

    .local v14, "j":I
    :goto_c
    move/from16 v23, v6

    .end local v6    # "bandidx":I
    .local v23, "bandidx":I
    const/4 v6, 0x5

    if-ge v14, v6, :cond_14

    .line 2048
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v32, v13

    .end local v13    # "utas_cur_ant_idx":I
    .local v32, "utas_cur_ant_idx":I
    const-string v13, "utas_partial_blank"

    invoke-virtual {v6, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, "]"

    invoke-virtual {v6, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 2051
    .local v6, "utas_partial_blank":I
    move-object/from16 v33, v9

    .end local v9    # "rxBand":[Ljava/lang/String;
    .local v33, "rxBand":[Ljava/lang/String;
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v34, v8

    .end local v8    # "rxActivated":[I
    .local v34, "rxActivated":[I
    const-string v8, "utas_ant_idx"

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 2054
    .local v8, "utas_ant_idx":I
    aget-object v9, v28, v15

    if-ltz v8, :cond_d

    move-object/from16 v35, v5

    const/16 v5, 0xa

    .end local v5    # "txActivated":[I
    .local v35, "txActivated":[I
    if-gt v8, v5, :cond_e

    .line 2055
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_d

    .line 2054
    .end local v35    # "txActivated":[I
    .restart local v5    # "txActivated":[I
    :cond_d
    move-object/from16 v35, v5

    .line 2055
    .end local v5    # "txActivated":[I
    .restart local v35    # "txActivated":[I
    :cond_e
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_d
    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v9, v14

    .line 2056
    const/4 v5, 0x1

    if-eq v6, v5, :cond_12

    if-ge v14, v3, :cond_12

    .line 2057
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "utas_tx_pwr"

    invoke-virtual {v5, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const/4 v9, 0x1

    invoke-virtual {v0, v1, v5, v9}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v5

    .line 2060
    .local v5, "utas_tx_pwr":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v36, v6

    .end local v6    # "utas_partial_blank":I
    .local v36, "utas_partial_blank":I
    const-string v6, "utas_phr"

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    const/4 v9, 0x1

    invoke-virtual {v0, v1, v6, v9}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v6

    .line 2063
    .local v6, "utas_phr":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v37, v2

    .end local v2    # "coULName":Ljava/lang/String;
    .local v37, "coULName":Ljava/lang/String;
    const-string v2, "utas_rsrp"

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v9, 0x1

    invoke-virtual {v0, v1, v2, v9}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v2

    .line 2066
    .local v2, "utas_rsrp":I
    aget-object v9, v26, v15

    const/16 v13, -0x32

    if-lt v5, v13, :cond_f

    const/16 v13, 0x21

    if-gt v5, v13, :cond_f

    .line 2067
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_e

    :cond_f
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_e
    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    aput-object v13, v9, v14

    .line 2068
    aget-object v9, v21, v15

    const/16 v13, -0x32

    if-lt v6, v13, :cond_10

    const/16 v13, 0x21

    if-gt v6, v13, :cond_10

    .line 2069
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_f

    :cond_10
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_f
    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    aput-object v13, v9, v14

    .line 2070
    aget-object v9, v25, v15

    const/16 v13, -0x8c

    if-lt v2, v13, :cond_11

    const/16 v13, 0x12

    if-gt v2, v13, :cond_11

    .line 2071
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_10

    :cond_11
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_10
    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    aput-object v13, v9, v14

    .line 2072
    .end local v2    # "utas_rsrp":I
    .end local v5    # "utas_tx_pwr":I
    .end local v6    # "utas_phr":I
    goto :goto_12

    .line 2056
    .end local v36    # "utas_partial_blank":I
    .end local v37    # "coULName":Ljava/lang/String;
    .local v2, "coULName":Ljava/lang/String;
    .local v6, "utas_partial_blank":I
    :cond_12
    move-object/from16 v37, v2

    move/from16 v36, v6

    .line 2073
    .end local v2    # "coULName":Ljava/lang/String;
    .end local v6    # "utas_partial_blank":I
    .restart local v36    # "utas_partial_blank":I
    .restart local v37    # "coULName":Ljava/lang/String;
    aget-object v2, v28, v15

    if-ge v14, v3, :cond_13

    aget-object v5, v28, v15

    aget-object v5, v5, v14

    goto :goto_11

    :cond_13
    move-object v5, v10

    :goto_11
    aput-object v5, v2, v14

    .line 2074
    aget-object v2, v26, v15

    aput-object v10, v2, v14

    .line 2075
    aget-object v2, v21, v15

    aput-object v10, v2, v14

    .line 2076
    aget-object v2, v25, v15

    aput-object v10, v2, v14

    .line 2047
    .end local v8    # "utas_ant_idx":I
    .end local v36    # "utas_partial_blank":I
    :goto_12
    add-int/lit8 v14, v14, 0x1

    move/from16 v6, v23

    move/from16 v13, v32

    move-object/from16 v9, v33

    move-object/from16 v8, v34

    move-object/from16 v5, v35

    move-object/from16 v2, v37

    goto/16 :goto_c

    .end local v32    # "utas_cur_ant_idx":I
    .end local v33    # "rxBand":[Ljava/lang/String;
    .end local v34    # "rxActivated":[I
    .end local v35    # "txActivated":[I
    .end local v37    # "coULName":Ljava/lang/String;
    .restart local v2    # "coULName":Ljava/lang/String;
    .local v5, "txActivated":[I
    .local v8, "rxActivated":[I
    .restart local v9    # "rxBand":[Ljava/lang/String;
    .restart local v13    # "utas_cur_ant_idx":I
    :cond_14
    move-object/from16 v37, v2

    move-object/from16 v35, v5

    move-object/from16 v34, v8

    move-object/from16 v33, v9

    move/from16 v32, v13

    .line 2023
    .end local v2    # "coULName":Ljava/lang/String;
    .end local v3    # "max_ant_idx":I
    .end local v5    # "txActivated":[I
    .end local v8    # "rxActivated":[I
    .end local v9    # "rxBand":[Ljava/lang/String;
    .end local v13    # "utas_cur_ant_idx":I
    .end local v14    # "j":I
    .end local v23    # "bandidx":I
    .end local v30    # "ul_cc_idx":I
    .end local v31    # "utas_tx_activated":I
    .restart local v33    # "rxBand":[Ljava/lang/String;
    .restart local v34    # "rxActivated":[I
    .restart local v35    # "txActivated":[I
    .restart local v37    # "coULName":Ljava/lang/String;
    add-int/lit8 v15, v15, 0x1

    move-object/from16 v23, v10

    move/from16 v6, v22

    move/from16 v7, v24

    move-object/from16 v4, v25

    move-object/from16 v14, v26

    move-object/from16 v3, v27

    move-object/from16 v13, v28

    move-object/from16 v10, v29

    goto/16 :goto_8

    .end local v24    # "ul_cc_count":I
    .end local v25    # "rxRSRP":[[Ljava/lang/String;
    .end local v26    # "txPwr":[[Ljava/lang/String;
    .end local v27    # "coCellName":Ljava/lang/String;
    .end local v28    # "rxAntIndex":[[Ljava/lang/String;
    .end local v29    # "txIdx":[Ljava/lang/String;
    .end local v33    # "rxBand":[Ljava/lang/String;
    .end local v34    # "rxActivated":[I
    .end local v35    # "txActivated":[I
    .end local v37    # "coULName":Ljava/lang/String;
    .restart local v2    # "coULName":Ljava/lang/String;
    .local v3, "coCellName":Ljava/lang/String;
    .restart local v4    # "rxRSRP":[[Ljava/lang/String;
    .restart local v5    # "txActivated":[I
    .restart local v7    # "ul_cc_count":I
    .restart local v8    # "rxActivated":[I
    .restart local v9    # "rxBand":[Ljava/lang/String;
    .local v10, "txIdx":[Ljava/lang/String;
    .local v13, "rxAntIndex":[[Ljava/lang/String;
    .local v14, "txPwr":[[Ljava/lang/String;
    :cond_15
    move-object/from16 v37, v2

    move-object/from16 v27, v3

    move-object/from16 v25, v4

    move-object/from16 v35, v5

    move/from16 v24, v7

    move-object/from16 v34, v8

    move-object/from16 v33, v9

    move-object/from16 v29, v10

    move-object/from16 v28, v13

    move-object/from16 v26, v14

    move-object/from16 v10, v23

    .line 2080
    .end local v2    # "coULName":Ljava/lang/String;
    .end local v3    # "coCellName":Ljava/lang/String;
    .end local v4    # "rxRSRP":[[Ljava/lang/String;
    .end local v5    # "txActivated":[I
    .end local v7    # "ul_cc_count":I
    .end local v8    # "rxActivated":[I
    .end local v9    # "rxBand":[Ljava/lang/String;
    .end local v10    # "txIdx":[Ljava/lang/String;
    .end local v13    # "rxAntIndex":[[Ljava/lang/String;
    .end local v14    # "txPwr":[[Ljava/lang/String;
    .end local v15    # "i":I
    .restart local v24    # "ul_cc_count":I
    .restart local v25    # "rxRSRP":[[Ljava/lang/String;
    .restart local v26    # "txPwr":[[Ljava/lang/String;
    .restart local v27    # "coCellName":Ljava/lang/String;
    .restart local v28    # "rxAntIndex":[[Ljava/lang/String;
    .restart local v29    # "txIdx":[Ljava/lang/String;
    .restart local v33    # "rxBand":[Ljava/lang/String;
    .restart local v34    # "rxActivated":[I
    .restart local v35    # "txActivated":[I
    .restart local v37    # "coULName":Ljava/lang/String;
    const/4 v2, 0x1

    aget v3, v35, v2

    if-nez v3, :cond_16

    const/4 v3, 0x2

    aget v4, v35, v3

    if-ne v4, v2, :cond_16

    .line 2081
    aput v2, v34, v2

    aput v2, v35, v2

    .line 2082
    const/4 v4, 0x0

    aput v4, v34, v3

    aput v4, v35, v3

    .line 2083
    aget-object v4, v33, v3

    aput-object v4, v33, v2

    .line 2084
    aget-object v4, v29, v3

    aput-object v4, v29, v2

    .line 2085
    aget-object v4, v28, v3

    aput-object v4, v28, v2

    .line 2086
    aget-object v4, v26, v3

    aput-object v4, v26, v2

    .line 2087
    aget-object v4, v21, v3

    aput-object v4, v21, v2

    .line 2088
    aget-object v4, v25, v3

    aput-object v4, v25, v2

    .line 2090
    :cond_16
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_13
    const/4 v3, 0x3

    if-ge v2, v3, :cond_1d

    .line 2091
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v4, 0x1

    aget-object v3, v3, v4

    add-int/lit8 v5, v2, 0x1

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v6, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, [Ljava/lang/String;

    const/4 v7, 0x0

    aget-object v6, v6, v7

    .line 2092
    aget v7, v34, v2

    if-ne v7, v4, :cond_17

    aget-object v4, v33, v2

    goto :goto_14

    :cond_17
    move-object v4, v10

    .line 2091
    :goto_14
    invoke-virtual {v0, v3, v5, v6, v4}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2093
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v4, 0x2

    aget-object v3, v3, v4

    add-int/lit8 v5, v2, 0x1

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v6, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, [Ljava/lang/String;

    const/4 v4, 0x0

    aget-object v6, v6, v4

    .line 2094
    aget v7, v34, v2

    const/4 v8, 0x0

    const/4 v9, 0x1

    if-ne v7, v9, :cond_18

    aget-object v7, v28, v2

    goto :goto_15

    :cond_18
    move-object v7, v8

    .line 2093
    :goto_15
    invoke-virtual {v0, v3, v5, v6, v7}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 2095
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v5, 0x2

    aget-object v3, v3, v5

    add-int/lit8 v6, v2, 0x1

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v7, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, [Ljava/lang/String;

    const/4 v5, 0x3

    aget-object v7, v7, v5

    .line 2096
    aget v9, v34, v2

    const/4 v11, 0x1

    if-ne v9, v11, :cond_19

    aget-object v9, v25, v2

    goto :goto_16

    :cond_19
    move-object v9, v8

    .line 2095
    :goto_16
    invoke-virtual {v0, v3, v6, v7, v9}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 2097
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->labelKeys:[Ljava/lang/String;

    aget-object v3, v3, v11

    add-int/lit8 v6, v2, 0x1

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v7, v11}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, [Ljava/lang/String;

    aget-object v7, v7, v11

    .line 2098
    aget v9, v34, v2

    if-ne v9, v11, :cond_1a

    aget-object v9, v29, v2

    goto :goto_17

    :cond_1a
    move-object v9, v10

    .line 2097
    :goto_17
    invoke-virtual {v0, v3, v6, v7, v9}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2099
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v6, 0x2

    aget-object v3, v3, v6

    add-int/lit8 v7, v2, 0x1

    iget-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v9, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, [Ljava/lang/String;

    const/4 v6, 0x1

    aget-object v9, v9, v6

    .line 2100
    aget v11, v35, v2

    if-ne v11, v6, :cond_1b

    aget-object v6, v26, v2

    goto :goto_18

    :cond_1b
    move-object v6, v8

    .line 2099
    :goto_18
    invoke-virtual {v0, v3, v7, v9, v6}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 2101
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v6, 0x2

    aget-object v3, v3, v6

    add-int/lit8 v7, v2, 0x1

    iget-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v9, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, [Ljava/lang/String;

    aget-object v9, v9, v6

    .line 2102
    aget v6, v35, v2

    const/4 v11, 0x1

    if-ne v6, v11, :cond_1c

    aget-object v8, v21, v2

    .line 2101
    :cond_1c
    invoke-virtual {v0, v3, v7, v9, v8}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 2103
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->labelKeys:[Ljava/lang/String;

    aget-object v3, v3, v11

    add-int/lit8 v6, v2, 0x1

    invoke-virtual {v0, v3, v6}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->addData(Ljava/lang/String;I)V

    .line 2104
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v6, 0x2

    aget-object v3, v3, v6

    add-int/lit8 v7, v2, 0x1

    invoke-virtual {v0, v3, v7}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;->addData(Ljava/lang/String;I)V

    .line 2090
    add-int/lit8 v2, v2, 0x1

    goto/16 :goto_13

    .line 2106
    .end local v2    # "i":I
    :cond_1d
    return-void

    nop

    :array_0
    .array-data 4
        0x3
        0x5
    .end array-data

    :array_1
    .array-data 4
        0x3
        0x5
    .end array-data

    :array_2
    .array-data 4
        0x3
        0x5
    .end array-data

    :array_3
    .array-data 4
        0x3
        0x5
    .end array-data
.end method
