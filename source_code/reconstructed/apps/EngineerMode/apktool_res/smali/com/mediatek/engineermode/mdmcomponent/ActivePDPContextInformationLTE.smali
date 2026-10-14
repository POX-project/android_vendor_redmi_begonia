.class Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field QoS:[I

.field addr_type:[I

.field ipv4_s:[Ljava/lang/String;

.field ipv6_s:[Ljava/lang/String;

.field linked_cid:[I

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
    .locals 2

    .line 6151
    const-string v0, "MSG_ID_EM_ESM_ESM_INFO_IND"

    const-string v1, "MSG_ID_EM_DDM_IP_INFO_IND"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2
    .param p1, "context"    # Landroid/app/Activity;

    .line 6174
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 6154
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->mMapping:Ljava/util/HashMap;

    .line 6165
    const/16 v0, 0xb

    new-array v1, v0, [Ljava/lang/String;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->pdpapn_s:[Ljava/lang/String;

    .line 6166
    new-array v1, v0, [Ljava/lang/String;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->ipv4_s:[Ljava/lang/String;

    .line 6167
    new-array v1, v0, [Ljava/lang/String;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->ipv6_s:[Ljava/lang/String;

    .line 6168
    new-array v1, v0, [I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->QoS:[I

    .line 6169
    new-array v1, v0, [I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->addr_type:[I

    .line 6170
    new-array v1, v0, [I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->linked_cid:[I

    .line 6171
    new-array v0, v0, [Z

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->status:[Z

    .line 6175
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 6189
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 6184
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 5

    .line 6198
    const-string v0, "IPV4 address"

    const-string v1, "IPV6 address"

    const-string v2, "IP version"

    const-string v3, "QoS (QCI)"

    const-string v4, "APN"

    filled-new-array {v0, v1, v2, v3, v4}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 6179
    const-string v0, "Active PDP Context Information(LTE)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 6194
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 17
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 6203
    move-object/from16 v0, p0

    move-object/from16 v1, p1

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->clearData()V

    .line 6204
    move-object/from16 v2, p2

    check-cast v2, Lcom/mediatek/mdml/Msg;

    .line 6205
    .local v2, "data":Lcom/mediatek/mdml/Msg;
    const-string v3, "MSG_ID_EM_ESM_ESM_INFO_IND"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const-string v4, "."

    const-string v5, "]"

    const-string v6, ""

    const/16 v7, 0xb

    const/4 v8, 0x0

    const/4 v9, 0x1

    if-eqz v3, :cond_3

    .line 6206
    const/4 v3, 0x0

    .local v3, "j":I
    :goto_0
    if-ge v3, v7, :cond_3

    .line 6207
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "esm_epsbc["

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v11, "]."

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    .line 6208
    .local v10, "coName":Ljava/lang/String;
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "is_active"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v2, v11}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 6209
    .local v11, "is_active":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "is_active: "

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const-string v13, "EmInfo/MDMComponent"

    invoke-static {v13, v12}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 6210
    if-nez v11, :cond_0

    .line 6211
    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->status:[Z

    aput-boolean v8, v12, v3

    .line 6212
    goto/16 :goto_3

    .line 6214
    :cond_0
    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->status:[Z

    aput-boolean v9, v12, v3

    .line 6216
    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->addr_type:[I

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "ip_addr.ip_addr_type"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v2, v13}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    aput v13, v12, v3

    .line 6217
    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->QoS:[I

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "qci"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v2, v13}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    aput v13, v12, v3

    .line 6218
    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->linked_cid:[I

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "linked_cid"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v2, v13}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    aput v13, v12, v3

    .line 6220
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "apn.length"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v2, v12}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 6221
    .local v12, "apn_length":I
    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->pdpapn_s:[Ljava/lang/String;

    aput-object v6, v13, v3

    .line 6222
    const/4 v13, 0x0

    .local v13, "i":I
    :goto_1
    if-ge v13, v12, :cond_2

    .line 6223
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "apn.data["

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v0, v2, v14}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 6224
    .local v14, "value":I
    if-lez v13, :cond_1

    const/16 v15, 0x1f

    if-ge v14, v15, :cond_1

    .line 6225
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->pdpapn_s:[Ljava/lang/String;

    aget-object v9, v8, v3

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    aput-object v9, v8, v3

    goto :goto_2

    .line 6227
    :cond_1
    int-to-char v8, v14

    .line 6228
    .local v8, "pdpapn":C
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->pdpapn_s:[Ljava/lang/String;

    aget-object v7, v15, v3

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    aput-object v7, v15, v3

    .line 6222
    .end local v8    # "pdpapn":C
    .end local v14    # "value":I
    :goto_2
    add-int/lit8 v13, v13, 0x1

    const/16 v7, 0xb

    const/4 v8, 0x0

    const/4 v9, 0x1

    goto :goto_1

    .line 6206
    .end local v10    # "coName":Ljava/lang/String;
    .end local v11    # "is_active":I
    .end local v12    # "apn_length":I
    .end local v13    # "i":I
    :cond_2
    :goto_3
    add-int/lit8 v3, v3, 0x1

    const/16 v7, 0xb

    const/4 v8, 0x0

    const/4 v9, 0x1

    goto/16 :goto_0

    .line 6234
    .end local v3    # "j":I
    :cond_3
    const-string v3, "MSG_ID_EM_DDM_IP_INFO_IND"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const/4 v7, 0x4

    const/4 v8, 0x3

    const/4 v9, 0x2

    if-eqz v3, :cond_b

    .line 6235
    const-string v3, "p_cid"

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 6236
    .local v3, "p_cid":I
    const-string v10, "addr.len"

    invoke-virtual {v0, v2, v10}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v10

    .line 6237
    .local v10, "addr_len":I
    const/4 v11, 0x0

    .local v11, "index":I
    :goto_4
    const/16 v12, 0xb

    if-ge v11, v12, :cond_b

    .line 6238
    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->linked_cid:[I

    aget v12, v12, v11

    if-ne v3, v12, :cond_a

    .line 6239
    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->ipv4_s:[Ljava/lang/String;

    aput-object v6, v12, v11

    .line 6240
    const/4 v12, 0x0

    .local v12, "i":I
    :goto_5
    const-string v13, "addr.val["

    if-ge v12, v7, :cond_5

    .line 6241
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v2, v13}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 6242
    .local v13, "ipv4":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->ipv4_s:[Ljava/lang/String;

    aget-object v7, v15, v11

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    aput-object v7, v15, v11

    .line 6243
    if-eq v12, v8, :cond_4

    .line 6244
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->ipv4_s:[Ljava/lang/String;

    aget-object v15, v14, v11

    invoke-virtual {v7, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    aput-object v7, v14, v11

    .line 6240
    .end local v13    # "ipv4":I
    :cond_4
    add-int/lit8 v12, v12, 0x1

    const/4 v7, 0x4

    goto :goto_5

    .line 6247
    .end local v12    # "i":I
    :cond_5
    const/4 v4, 0x4

    .line 6248
    .local v4, "addr_ipv6_base":I
    const/16 v7, 0x10

    if-ne v10, v7, :cond_6

    .line 6249
    const/4 v4, 0x0

    goto :goto_6

    .line 6250
    :cond_6
    const/16 v7, 0x14

    if-ne v10, v7, :cond_7

    .line 6251
    const/4 v4, 0x4

    .line 6253
    :cond_7
    :goto_6
    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->ipv6_s:[Ljava/lang/String;

    aput-object v6, v7, v11

    .line 6254
    add-int/lit8 v6, v4, 0x0

    .local v6, "i":I
    :goto_7
    add-int/lit8 v7, v4, 0x10

    if-ge v6, v7, :cond_9

    .line 6255
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v2, v7}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 6256
    .local v7, "ipv6":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->ipv6_s:[Ljava/lang/String;

    aget-object v15, v14, v11

    invoke-virtual {v12, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v15, 0x1

    new-array v8, v15, [Ljava/lang/Object;

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    const/16 v16, 0x0

    aput-object v15, v8, v16

    const-string v15, "%02x"

    invoke-static {v15, v8}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v12, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v14, v11

    .line 6257
    add-int/lit8 v8, v6, 0x1

    rem-int/2addr v8, v9

    if-nez v8, :cond_8

    add-int/lit8 v8, v4, 0xf

    if-eq v6, v8, :cond_8

    .line 6258
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->ipv6_s:[Ljava/lang/String;

    aget-object v14, v12, v11

    invoke-virtual {v8, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, ":"

    invoke-virtual {v8, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v12, v11

    .line 6254
    .end local v7    # "ipv6":I
    :cond_8
    add-int/lit8 v6, v6, 0x1

    const/4 v8, 0x3

    goto :goto_7

    .line 6261
    .end local v6    # "i":I
    :cond_9
    goto :goto_8

    .line 6237
    .end local v4    # "addr_ipv6_base":I
    :cond_a
    add-int/lit8 v11, v11, 0x1

    const/4 v7, 0x4

    const/4 v8, 0x3

    goto/16 :goto_4

    .line 6265
    .end local v3    # "p_cid":I
    .end local v10    # "addr_len":I
    .end local v11    # "index":I
    :cond_b
    :goto_8
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_9
    const/16 v4, 0xb

    if-ge v3, v4, :cond_d

    .line 6266
    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->status:[Z

    aget-boolean v5, v5, v3

    const/4 v6, 0x1

    if-ne v5, v6, :cond_c

    .line 6267
    const/4 v5, 0x5

    new-array v5, v5, [Ljava/lang/Object;

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->ipv4_s:[Ljava/lang/String;

    aget-object v7, v7, v3

    const/4 v8, 0x0

    aput-object v7, v5, v8

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->ipv6_s:[Ljava/lang/String;

    aget-object v7, v7, v3

    aput-object v7, v5, v6

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->mMapping:Ljava/util/HashMap;

    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->addr_type:[I

    aget v10, v10, v3

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    invoke-virtual {v7, v10}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    aput-object v7, v5, v9

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->QoS:[I

    aget v7, v7, v3

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    const/4 v10, 0x3

    aput-object v7, v5, v10

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->pdpapn_s:[Ljava/lang/String;

    aget-object v7, v7, v3

    const/4 v11, 0x4

    aput-object v7, v5, v11

    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;->addData([Ljava/lang/Object;)V

    goto :goto_a

    .line 6266
    :cond_c
    const/4 v8, 0x0

    const/4 v10, 0x3

    const/4 v11, 0x4

    .line 6265
    :goto_a
    add-int/lit8 v3, v3, 0x1

    goto :goto_9

    .line 6272
    .end local v3    # "i":I
    :cond_d
    return-void
.end method
