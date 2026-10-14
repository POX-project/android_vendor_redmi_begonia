.class Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field QoS:[I

.field addr_type:[I

.field ipv4_s:[Ljava/lang/String;

.field ipv6_s:[Ljava/lang/String;

.field mMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field pdpapn_s:[Ljava/lang/String;

.field status:[Z


# direct methods
.method static constructor <clinit>()V
    .locals 11

    .line 6276
    const-string v0, "MSG_ID_EM_SM_NSAPI5_STATUS_IND"

    const-string v1, "MSG_ID_EM_SM_NSAPI6_STATUS_IND"

    const-string v2, "MSG_ID_EM_SM_NSAPI7_STATUS_IND"

    const-string v3, "MSG_ID_EM_SM_NSAPI8_STATUS_IND"

    const-string v4, "MSG_ID_EM_SM_NSAPI9_STATUS_IND"

    const-string v5, "MSG_ID_EM_SM_NSAPI10_STATUS_IND"

    const-string v6, "MSG_ID_EM_SM_NSAPI11_STATUS_IND"

    const-string v7, "MSG_ID_EM_SM_NSAPI12_STATUS_IND"

    const-string v8, "MSG_ID_EM_SM_NSAPI13_STATUS_IND"

    const-string v9, "MSG_ID_EM_SM_NSAPI14_STATUS_IND"

    const-string v10, "MSG_ID_EM_SM_NSAPI15_STATUS_IND"

    filled-new-array/range {v0 .. v10}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2
    .param p1, "context"    # Landroid/app/Activity;

    .line 6307
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 6289
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->mMapping:Ljava/util/HashMap;

    .line 6299
    const/16 v0, 0xb

    new-array v1, v0, [Ljava/lang/String;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->pdpapn_s:[Ljava/lang/String;

    .line 6300
    new-array v1, v0, [Ljava/lang/String;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->ipv4_s:[Ljava/lang/String;

    .line 6301
    new-array v1, v0, [Ljava/lang/String;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->ipv6_s:[Ljava/lang/String;

    .line 6302
    new-array v1, v0, [I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->QoS:[I

    .line 6303
    new-array v1, v0, [I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->addr_type:[I

    .line 6304
    new-array v0, v0, [Z

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->status:[Z

    .line 6308
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 6322
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 6317
    const-string v0, "3. UMTS FDD EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 6

    .line 6331
    const-string v0, "NSAPI index"

    const-string v1, "IP Type"

    const-string v2, "IPv4"

    const-string v3, "IPv6"

    const-string v4, "APN"

    const-string v5, "QoS (traffic_class)"

    filled-new-array/range {v0 .. v5}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 6312
    const-string v0, "Active PDP Context Information(UMTS FDD)"

    return-object v0
.end method

.method parsIndex(Ljava/lang/String;)I
    .locals 3
    .param p1, "name"    # Ljava/lang/String;

    .line 6335
    const/4 v0, 0x0

    .line 6336
    .local v0, "index":I
    const/16 v1, 0x12

    invoke-virtual {p1, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "_"

    invoke-virtual {v1, v2}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    aget-object v1, v1, v2

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    .line 6337
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "name = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "EmInfo/MDMComponent"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 6338
    add-int/lit8 v1, v0, -0x5

    return v1
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 6327
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 17
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 6343
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 6344
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->clearData()V

    .line 6345
    invoke-virtual/range {p0 .. p1}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->parsIndex(Ljava/lang/String;)I

    move-result v2

    .line 6346
    .local v2, "index":I
    const-string v3, "pdp.pdp_context_status"

    invoke-virtual {v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 6347
    .local v3, "pdp_context_status":I
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "pdp_context_status = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, "EmInfo/MDMComponent"

    invoke-static {v5, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 6348
    const/4 v4, 0x2

    const/4 v5, 0x0

    const/4 v6, 0x1

    if-eqz v3, :cond_0

    if-eq v3, v4, :cond_0

    .line 6349
    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->status:[Z

    aput-boolean v6, v7, v2

    goto :goto_0

    .line 6351
    :cond_0
    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->status:[Z

    aput-boolean v5, v7, v2

    .line 6353
    :goto_0
    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->status:[Z

    aget-boolean v7, v7, v2

    const/4 v8, 0x3

    const/4 v9, 0x4

    if-ne v7, v6, :cond_a

    .line 6354
    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->addr_type:[I

    const-string v10, "pdp.pdp_addr_type"

    invoke-virtual {v0, v1, v10}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v10

    aput v10, v7, v2

    .line 6355
    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->ipv4_s:[Ljava/lang/String;

    const-string v10, ""

    aput-object v10, v7, v2

    .line 6356
    const/4 v7, 0x0

    .local v7, "i":I
    :goto_1
    const-string v11, "pdp.ip["

    const-string v12, "]"

    if-ge v7, v9, :cond_2

    .line 6357
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v1, v11}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 6358
    .local v11, "ipv4":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->ipv4_s:[Ljava/lang/String;

    aget-object v14, v13, v2

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    aput-object v12, v13, v2

    .line 6359
    if-eq v7, v8, :cond_1

    .line 6360
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->ipv4_s:[Ljava/lang/String;

    aget-object v14, v13, v2

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "."

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    aput-object v12, v13, v2

    .line 6356
    .end local v11    # "ipv4":I
    :cond_1
    add-int/lit8 v7, v7, 0x1

    goto :goto_1

    .line 6363
    .end local v7    # "i":I
    :cond_2
    const/4 v7, 0x4

    .line 6364
    .local v7, "addr_ipv6_base":I
    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->addr_type:[I

    aget v14, v13, v2

    const/16 v15, 0x57

    if-ne v14, v15, :cond_3

    .line 6365
    const/4 v7, 0x0

    goto :goto_2

    .line 6366
    :cond_3
    aget v13, v13, v2

    const/16 v14, 0x8d

    if-ne v13, v14, :cond_4

    .line 6367
    const/4 v7, 0x4

    .line 6369
    :cond_4
    :goto_2
    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->ipv6_s:[Ljava/lang/String;

    aput-object v10, v13, v2

    .line 6370
    add-int/lit8 v13, v7, 0x0

    .local v13, "i":I
    :goto_3
    add-int/lit8 v14, v7, 0x10

    if-ge v13, v14, :cond_6

    .line 6371
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v0, v1, v14}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 6372
    .local v14, "ipv6":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->ipv6_s:[Ljava/lang/String;

    aget-object v15, v8, v2

    invoke-virtual {v9, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v15, v6, [Ljava/lang/Object;

    invoke-static {v14}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v15, v5

    const-string v5, "%02x"

    invoke-static {v5, v15}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v8, v2

    .line 6373
    add-int/lit8 v5, v13, 0x1

    rem-int/2addr v5, v4

    if-nez v5, :cond_5

    add-int/lit8 v5, v7, 0xf

    if-eq v13, v5, :cond_5

    .line 6374
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->ipv6_s:[Ljava/lang/String;

    aget-object v9, v8, v2

    invoke-virtual {v5, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, ":"

    invoke-virtual {v5, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v8, v2

    .line 6370
    .end local v14    # "ipv6":I
    :cond_5
    add-int/lit8 v13, v13, 0x1

    const/4 v5, 0x0

    const/4 v8, 0x3

    const/4 v9, 0x4

    const/16 v15, 0x57

    goto :goto_3

    .line 6377
    .end local v13    # "i":I
    :cond_6
    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->pdpapn_s:[Ljava/lang/String;

    aput-object v10, v5, v2

    .line 6378
    const/4 v5, 0x0

    .local v5, "i":I
    :goto_4
    const/16 v8, 0x64

    if-ge v5, v8, :cond_7

    .line 6379
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "pdp.apn["

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    int-to-char v8, v8

    .line 6380
    .local v8, "pdpapn":C
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->pdpapn_s:[Ljava/lang/String;

    aget-object v11, v10, v2

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    aput-object v9, v10, v2

    .line 6378
    .end local v8    # "pdpapn":C
    add-int/lit8 v5, v5, 0x1

    goto :goto_4

    .line 6382
    .end local v5    # "i":I
    :cond_7
    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->addr_type:[I

    aget v8, v5, v2

    const/16 v9, 0x21

    const-string v10, "-"

    if-ne v8, v9, :cond_8

    .line 6383
    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->ipv6_s:[Ljava/lang/String;

    aput-object v10, v5, v2

    goto :goto_5

    .line 6384
    :cond_8
    aget v5, v5, v2

    const/16 v8, 0x57

    if-ne v5, v8, :cond_9

    .line 6385
    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->ipv4_s:[Ljava/lang/String;

    aput-object v10, v5, v2

    .line 6387
    :cond_9
    :goto_5
    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->QoS:[I

    const-string v8, "pdp.em_negotiated_qos.human_readable_traffic_class"

    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    aput v8, v5, v2

    .line 6390
    .end local v7    # "addr_ipv6_base":I
    :cond_a
    const/4 v5, 0x0

    .restart local v5    # "i":I
    :goto_6
    const/16 v7, 0xb

    if-ge v5, v7, :cond_c

    .line 6391
    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->status:[Z

    aget-boolean v7, v7, v5

    if-ne v7, v6, :cond_b

    .line 6392
    const/4 v7, 0x6

    new-array v7, v7, [Ljava/lang/Object;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "SM_NSAP"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v9, v5, 0x5

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    const/4 v9, 0x0

    aput-object v8, v7, v9

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->mMapping:Ljava/util/HashMap;

    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->addr_type:[I

    aget v10, v10, v5

    .line 6393
    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    invoke-virtual {v8, v10}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    aput-object v8, v7, v6

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->ipv4_s:[Ljava/lang/String;

    aget-object v8, v8, v5

    aput-object v8, v7, v4

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->ipv6_s:[Ljava/lang/String;

    aget-object v8, v8, v5

    const/4 v10, 0x3

    aput-object v8, v7, v10

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->pdpapn_s:[Ljava/lang/String;

    aget-object v8, v8, v5

    const/4 v11, 0x4

    aput-object v8, v7, v11

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->QoS:[I

    aget v8, v8, v5

    .line 6395
    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    const/4 v12, 0x5

    aput-object v8, v7, v12

    .line 6392
    invoke-virtual {v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationUmtsFDD;->addData([Ljava/lang/Object;)V

    goto :goto_7

    .line 6391
    :cond_b
    const/4 v9, 0x0

    const/4 v10, 0x3

    const/4 v11, 0x4

    .line 6390
    :goto_7
    add-int/lit8 v5, v5, 0x1

    goto :goto_6

    .line 6399
    .end local v5    # "i":I
    :cond_c
    return-void
.end method
