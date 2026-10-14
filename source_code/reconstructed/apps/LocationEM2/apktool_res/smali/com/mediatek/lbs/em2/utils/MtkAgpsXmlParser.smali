.class public Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;
.super Ljava/lang/Object;
.source "MtkAgpsXmlParser.java"


# instance fields
.field protected agpsConfig:Lcom/mediatek/lbs/em2/utils/AgpsConfig;

.field protected doc:Lorg/w3c/dom/Document;

.field protected versionString:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const-string v0, "/etc/agps_profiles_conf2.xml"

    .line 38
    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;-><init>(Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;)V
    .locals 17
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    move-object/from16 v0, p0

    .line 46
    invoke-direct/range {p0 .. p0}, Ljava/lang/Object;-><init>()V

    .line 47
    new-instance v1, Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    invoke-direct {v1}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;-><init>()V

    iput-object v1, v0, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->agpsConfig:Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    .line 49
    invoke-static/range {p1 .. p1}, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->getXmlDocument(Ljava/lang/String;)Lorg/w3c/dom/Document;

    move-result-object v1

    iput-object v1, v0, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->doc:Lorg/w3c/dom/Document;

    .line 52
    invoke-interface {v1}, Lorg/w3c/dom/Document;->getDocumentElement()Lorg/w3c/dom/Element;

    move-result-object v1

    const-string v2, "maj_ver"

    invoke-interface {v1, v2}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 53
    iget-object v2, v0, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->doc:Lorg/w3c/dom/Document;

    invoke-interface {v2}, Lorg/w3c/dom/Document;->getDocumentElement()Lorg/w3c/dom/Element;

    move-result-object v2

    const-string v3, "min_ver"

    invoke-interface {v2, v3}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "1"

    .line 54
    invoke-virtual {v3, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    const-string v5, "."

    if-eqz v4, :cond_d

    .line 59
    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_0

    .line 60
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Version Warning, Parser=1.1 XML_file="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->log(Ljava/lang/Object;)V

    .line 63
    :cond_0
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "parser=[1.1] xml=["

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "]"

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->versionString:Ljava/lang/String;

    .line 68
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->doc:Lorg/w3c/dom/Document;

    const-string v2, "supl_profile"

    invoke-interface {v1, v2}, Lorg/w3c/dom/Document;->getElementsByTagName(Ljava/lang/String;)Lorg/w3c/dom/NodeList;

    move-result-object v1

    const/4 v3, 0x0

    .line 69
    :goto_0
    invoke-interface {v1}, Lorg/w3c/dom/NodeList;->getLength()I

    move-result v4

    const-string v5, "address_type"

    const-string v6, "optional_apn_2"

    const-string v7, "optional_apn"

    const-string v8, "default_apn"

    const-string v9, "provider_id"

    const-string v10, "app_id"

    const-string v11, "mcc_mnc"

    const-string v12, "tls"

    const-string v13, "port"

    const-string v14, "addr"

    const-string v15, "name"

    const/4 v2, 0x1

    if-ge v3, v4, :cond_2

    .line 70
    invoke-interface {v1, v3}, Lorg/w3c/dom/NodeList;->item(I)Lorg/w3c/dom/Node;

    move-result-object v4

    move-object/from16 v16, v1

    .line 71
    invoke-interface {v4}, Lorg/w3c/dom/Node;->getNodeType()S

    move-result v1

    if-ne v1, v2, :cond_1

    .line 72
    check-cast v4, Lorg/w3c/dom/Element;

    .line 73
    new-instance v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;

    invoke-direct {v1}, Lcom/mediatek/lbs/em2/utils/SuplProfile;-><init>()V

    .line 74
    invoke-interface {v4, v15}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->name:Ljava/lang/String;

    .line 75
    invoke-interface {v4, v14}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addr:Ljava/lang/String;

    .line 76
    invoke-interface {v4, v13}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    iput v2, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->port:I

    .line 77
    invoke-interface {v4, v12}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    iput-boolean v2, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->tls:Z

    .line 78
    invoke-interface {v4, v11}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->mccMnc:Ljava/lang/String;

    .line 79
    invoke-interface {v4, v10}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->appId:Ljava/lang/String;

    .line 80
    invoke-interface {v4, v9}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->providerId:Ljava/lang/String;

    .line 81
    invoke-interface {v4, v8}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->defaultApn:Ljava/lang/String;

    .line 82
    invoke-interface {v4, v7}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->optionalApn:Ljava/lang/String;

    .line 83
    invoke-interface {v4, v6}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->optionalApn2:Ljava/lang/String;

    .line 84
    invoke-interface {v4, v5}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addressType:Ljava/lang/String;

    .line 86
    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/SuplProfile;->correctIfInvalid()Z

    .line 87
    iget-object v2, v0, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->agpsConfig:Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    invoke-virtual {v2}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getSuplProfiles()Ljava/util/ArrayList;

    move-result-object v2

    invoke-virtual {v2, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_1
    add-int/lit8 v3, v3, 0x1

    move-object/from16 v1, v16

    goto/16 :goto_0

    .line 91
    :cond_2
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->doc:Lorg/w3c/dom/Document;

    const-string v3, "cur_supl_profile"

    invoke-interface {v1, v3}, Lorg/w3c/dom/Document;->getElementsByTagName(Ljava/lang/String;)Lorg/w3c/dom/NodeList;

    move-result-object v1

    const/4 v3, 0x0

    .line 92
    :goto_1
    invoke-interface {v1}, Lorg/w3c/dom/NodeList;->getLength()I

    move-result v4

    if-ge v3, v4, :cond_4

    .line 93
    invoke-interface {v1, v3}, Lorg/w3c/dom/NodeList;->item(I)Lorg/w3c/dom/Node;

    move-result-object v4

    move-object/from16 v16, v1

    .line 94
    invoke-interface {v4}, Lorg/w3c/dom/Node;->getNodeType()S

    move-result v1

    if-ne v1, v2, :cond_3

    .line 95
    check-cast v4, Lorg/w3c/dom/Element;

    .line 96
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->agpsConfig:Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getCurSuplProfile()Lcom/mediatek/lbs/em2/utils/SuplProfile;

    move-result-object v1

    .line 97
    invoke-interface {v4, v15}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->name:Ljava/lang/String;

    .line 98
    invoke-interface {v4, v14}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addr:Ljava/lang/String;

    .line 99
    invoke-interface {v4, v13}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    iput v2, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->port:I

    .line 100
    invoke-interface {v4, v12}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    iput-boolean v2, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->tls:Z

    .line 101
    invoke-interface {v4, v11}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->mccMnc:Ljava/lang/String;

    .line 102
    invoke-interface {v4, v10}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->appId:Ljava/lang/String;

    .line 103
    invoke-interface {v4, v9}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->providerId:Ljava/lang/String;

    .line 104
    invoke-interface {v4, v8}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->defaultApn:Ljava/lang/String;

    .line 105
    invoke-interface {v4, v7}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->optionalApn:Ljava/lang/String;

    .line 106
    invoke-interface {v4, v6}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->optionalApn2:Ljava/lang/String;

    .line 107
    invoke-interface {v4, v5}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addressType:Ljava/lang/String;

    .line 108
    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/SuplProfile;->correctIfInvalid()Z

    :cond_3
    add-int/lit8 v3, v3, 0x1

    move-object/from16 v1, v16

    const/4 v2, 0x1

    goto :goto_1

    .line 113
    :cond_4
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->doc:Lorg/w3c/dom/Document;

    const-string v2, "cdma_profile"

    invoke-interface {v1, v2}, Lorg/w3c/dom/Document;->getElementsByTagName(Ljava/lang/String;)Lorg/w3c/dom/NodeList;

    move-result-object v1

    const/4 v2, 0x0

    .line 114
    :goto_2
    invoke-interface {v1}, Lorg/w3c/dom/NodeList;->getLength()I

    move-result v3

    if-ge v2, v3, :cond_6

    .line 115
    invoke-interface {v1, v2}, Lorg/w3c/dom/NodeList;->item(I)Lorg/w3c/dom/Node;

    move-result-object v3

    .line 116
    invoke-interface {v3}, Lorg/w3c/dom/Node;->getNodeType()S

    move-result v4

    const/4 v5, 0x1

    if-ne v4, v5, :cond_5

    .line 117
    check-cast v3, Lorg/w3c/dom/Element;

    .line 118
    iget-object v4, v0, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->agpsConfig:Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    invoke-virtual {v4}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getCdmaProfile()Lcom/mediatek/lbs/em2/utils/CdmaProfile;

    move-result-object v4

    .line 119
    invoke-interface {v3, v15}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, v4, Lcom/mediatek/lbs/em2/utils/CdmaProfile;->name:Ljava/lang/String;

    const-string v5, "mcp_enable"

    .line 120
    invoke-interface {v3, v5}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Ljava/lang/Boolean;->valueOf(Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v5

    iput-boolean v5, v4, Lcom/mediatek/lbs/em2/utils/CdmaProfile;->mcpEnable:Z

    const-string v5, "mcp_addr"

    .line 121
    invoke-interface {v3, v5}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, v4, Lcom/mediatek/lbs/em2/utils/CdmaProfile;->mcpAddr:Ljava/lang/String;

    const-string v5, "mcp_port"

    .line 122
    invoke-interface {v3, v5}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    iput v5, v4, Lcom/mediatek/lbs/em2/utils/CdmaProfile;->mcpPort:I

    const-string v5, "pde_addr_valid"

    .line 124
    invoke-interface {v3, v5}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 123
    invoke-static {v5}, Ljava/lang/Boolean;->valueOf(Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v5

    iput-boolean v5, v4, Lcom/mediatek/lbs/em2/utils/CdmaProfile;->pdeAddrValid:Z

    const-string v5, "pde_ip_type"

    .line 125
    invoke-interface {v3, v5}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    iput v5, v4, Lcom/mediatek/lbs/em2/utils/CdmaProfile;->pdeIpType:I

    const-string v5, "pde_addr"

    .line 126
    invoke-interface {v3, v5}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, v4, Lcom/mediatek/lbs/em2/utils/CdmaProfile;->pdeAddr:Ljava/lang/String;

    const-string v5, "pde_port"

    .line 127
    invoke-interface {v3, v5}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    iput v5, v4, Lcom/mediatek/lbs/em2/utils/CdmaProfile;->pdePort:I

    const-string v5, "pde_url_valid"

    .line 129
    invoke-interface {v3, v5}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Ljava/lang/Boolean;->valueOf(Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object v5

    .line 128
    invoke-virtual {v5}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v5

    iput-boolean v5, v4, Lcom/mediatek/lbs/em2/utils/CdmaProfile;->pdeUrlValid:Z

    const-string v5, "pde_url_addr"

    .line 130
    invoke-interface {v3, v5}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, v4, Lcom/mediatek/lbs/em2/utils/CdmaProfile;->pdeUrlAddr:Ljava/lang/String;

    .line 132
    invoke-virtual {v4}, Lcom/mediatek/lbs/em2/utils/CdmaProfile;->correctIfInvalid()Z

    :cond_5
    add-int/lit8 v2, v2, 0x1

    goto/16 :goto_2

    .line 136
    :cond_6
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->doc:Lorg/w3c/dom/Document;

    const-string v2, "agps_setting"

    invoke-interface {v1, v2}, Lorg/w3c/dom/Document;->getElementsByTagName(Ljava/lang/String;)Lorg/w3c/dom/NodeList;

    move-result-object v1

    const/4 v2, 0x0

    .line 137
    :goto_3
    invoke-interface {v1}, Lorg/w3c/dom/NodeList;->getLength()I

    move-result v3

    if-ge v2, v3, :cond_8

    .line 138
    invoke-interface {v1, v2}, Lorg/w3c/dom/NodeList;->item(I)Lorg/w3c/dom/Node;

    move-result-object v3

    .line 139
    invoke-interface {v3}, Lorg/w3c/dom/Node;->getNodeType()S

    move-result v4

    const/4 v5, 0x1

    if-ne v4, v5, :cond_7

    .line 140
    check-cast v3, Lorg/w3c/dom/Element;

    .line 141
    iget-object v4, v0, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->agpsConfig:Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    invoke-virtual {v4}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getAgpsSetting()Lcom/mediatek/lbs/em2/utils/AgpsSetting;

    move-result-object v4

    const-string v5, "agps_enable"

    .line 143
    invoke-interface {v3, v5}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 142
    invoke-static {v5}, Ljava/lang/Boolean;->valueOf(Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v5

    iput-boolean v5, v4, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->agpsEnable:Z

    const-string v5, "agps_protocol"

    .line 145
    invoke-interface {v3, v5}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 144
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    iput v5, v4, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->agpsProtocol:I

    const-string v5, "gpevt"

    .line 146
    invoke-interface {v3, v5}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v3

    iput-boolean v3, v4, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->gpevt:Z

    .line 148
    invoke-virtual {v4}, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->correctIfInvalid()Z

    :cond_7
    add-int/lit8 v2, v2, 0x1

    goto :goto_3

    .line 152
    :cond_8
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->doc:Lorg/w3c/dom/Document;

    const-string v2, "cp_setting"

    invoke-interface {v1, v2}, Lorg/w3c/dom/Document;->getElementsByTagName(Ljava/lang/String;)Lorg/w3c/dom/NodeList;

    move-result-object v1

    const/4 v2, 0x0

    .line 153
    :goto_4
    invoke-interface {v1}, Lorg/w3c/dom/NodeList;->getLength()I

    move-result v3

    if-ge v2, v3, :cond_a

    .line 154
    invoke-interface {v1, v2}, Lorg/w3c/dom/NodeList;->item(I)Lorg/w3c/dom/Node;

    move-result-object v3

    .line 155
    invoke-interface {v3}, Lorg/w3c/dom/Node;->getNodeType()S

    move-result v4

    const/4 v5, 0x1

    if-ne v4, v5, :cond_9

    .line 156
    check-cast v3, Lorg/w3c/dom/Element;

    .line 157
    iget-object v4, v0, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->agpsConfig:Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    invoke-virtual {v4}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getCpSetting()Lcom/mediatek/lbs/em2/utils/CpSetting;

    move-result-object v4

    const-string v5, "molr_pos_method"

    .line 159
    invoke-interface {v3, v5}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 158
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    iput v5, v4, Lcom/mediatek/lbs/em2/utils/CpSetting;->molrPosMethod:I

    const-string v5, "external_addr_enable"

    .line 161
    invoke-interface {v3, v5}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 160
    invoke-static {v5}, Ljava/lang/Boolean;->valueOf(Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v5

    iput-boolean v5, v4, Lcom/mediatek/lbs/em2/utils/CpSetting;->externalAddrEnable:Z

    const-string v5, "external_addr"

    .line 162
    invoke-interface {v3, v5}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, v4, Lcom/mediatek/lbs/em2/utils/CpSetting;->externalAddr:Ljava/lang/String;

    const-string v5, "mlc_number_enable"

    .line 164
    invoke-interface {v3, v5}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 163
    invoke-static {v5}, Ljava/lang/Boolean;->valueOf(Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v5

    iput-boolean v5, v4, Lcom/mediatek/lbs/em2/utils/CpSetting;->mlcNumberEnable:Z

    const-string v5, "mlc_number"

    .line 165
    invoke-interface {v3, v5}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, v4, Lcom/mediatek/lbs/em2/utils/CpSetting;->mlcNumber:Ljava/lang/String;

    const-string v5, "cp_auto_reset"

    .line 167
    invoke-interface {v3, v5}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 166
    invoke-static {v5}, Ljava/lang/Boolean;->valueOf(Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v5

    iput-boolean v5, v4, Lcom/mediatek/lbs/em2/utils/CpSetting;->cpAutoReset:Z

    const-string v5, "epc_molr_lpp_payload_enable"

    .line 169
    invoke-interface {v3, v5}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 168
    invoke-static {v5}, Ljava/lang/Boolean;->valueOf(Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v5

    iput-boolean v5, v4, Lcom/mediatek/lbs/em2/utils/CpSetting;->epcMolrLppPayloadEnable:Z

    const-string v5, "epc_molr_lpp_payload"

    .line 171
    invoke-interface {v3, v5}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 170
    invoke-static {v3}, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->hexStringToByteArray(Ljava/lang/String;)[B

    move-result-object v3

    iput-object v3, v4, Lcom/mediatek/lbs/em2/utils/CpSetting;->epcMolrLppPayload:[B

    .line 173
    invoke-virtual {v4}, Lcom/mediatek/lbs/em2/utils/CpSetting;->correctIfInvalid()Z

    :cond_9
    add-int/lit8 v2, v2, 0x1

    goto/16 :goto_4

    .line 177
    :cond_a
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->doc:Lorg/w3c/dom/Document;

    const-string v2, "up_setting"

    invoke-interface {v1, v2}, Lorg/w3c/dom/Document;->getElementsByTagName(Ljava/lang/String;)Lorg/w3c/dom/NodeList;

    move-result-object v1

    const/4 v2, 0x0

    .line 178
    :goto_5
    invoke-interface {v1}, Lorg/w3c/dom/NodeList;->getLength()I

    move-result v3

    if-ge v2, v3, :cond_c

    .line 179
    invoke-interface {v1, v2}, Lorg/w3c/dom/NodeList;->item(I)Lorg/w3c/dom/Node;

    move-result-object v3

    .line 180
    invoke-interface {v3}, Lorg/w3c/dom/Node;->getNodeType()S

    move-result v4

    const/4 v5, 0x1

    if-ne v4, v5, :cond_b

    .line 181
    check-cast v3, Lorg/w3c/dom/Element;

    .line 182
    iget-object v4, v0, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->agpsConfig:Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    invoke-virtual {v4}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v4

    const-string v6, "ca_enable"

    .line 183
    invoke-interface {v3, v6}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Ljava/lang/Boolean;->valueOf(Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v6

    iput-boolean v6, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->caEnable:Z

    const-string v6, "ni_request"

    .line 185
    invoke-interface {v3, v6}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 184
    invoke-static {v6}, Ljava/lang/Boolean;->valueOf(Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v6

    iput-boolean v6, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->niRequest:Z

    const-string v6, "roaming"

    .line 186
    invoke-interface {v3, v6}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Ljava/lang/Boolean;->valueOf(Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v6

    iput-boolean v6, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->roaming:Z

    const-string v6, "cdma_preferred"

    .line 188
    invoke-interface {v3, v6}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 187
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Integer;->intValue()I

    move-result v6

    iput v6, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->cdmaPreferred:I

    const-string v6, "pref_method"

    .line 190
    invoke-interface {v3, v6}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 189
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Integer;->intValue()I

    move-result v6

    iput v6, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->prefMethod:I

    const-string v6, "supl_version"

    .line 192
    invoke-interface {v3, v6}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 191
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Integer;->intValue()I

    move-result v6

    iput v6, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->suplVersion:I

    const-string v6, "supl_log"

    .line 193
    invoke-interface {v3, v6}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Ljava/lang/Boolean;->valueOf(Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v6

    iput-boolean v6, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->suplLog:Z

    const-string v6, "msa_enable"

    .line 195
    invoke-interface {v3, v6}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 194
    invoke-static {v6}, Ljava/lang/Boolean;->valueOf(Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v6

    iput-boolean v6, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->msaEnable:Z

    const-string v6, "msb_enable"

    .line 197
    invoke-interface {v3, v6}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 196
    invoke-static {v6}, Ljava/lang/Boolean;->valueOf(Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v6

    iput-boolean v6, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->msbEnable:Z

    const-string v6, "ecid_enable"

    .line 199
    invoke-interface {v3, v6}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 198
    invoke-static {v6}, Ljava/lang/Boolean;->valueOf(Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v6

    iput-boolean v6, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->ecidEnable:Z

    const-string v6, "otdoa_enable"

    .line 201
    invoke-interface {v3, v6}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 200
    invoke-static {v6}, Ljava/lang/Boolean;->valueOf(Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v6

    iput-boolean v6, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->otdoaEnable:Z

    const-string v6, "qop_hacc"

    .line 202
    invoke-interface {v3, v6}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Integer;->intValue()I

    move-result v6

    iput v6, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopHacc:I

    const-string v6, "qop_vacc"

    .line 203
    invoke-interface {v3, v6}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Integer;->intValue()I

    move-result v6

    iput v6, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopVacc:I

    const-string v6, "qop_loc_age"

    .line 205
    invoke-interface {v3, v6}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 204
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Integer;->intValue()I

    move-result v6

    iput v6, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopLocAge:I

    const-string v6, "qop_delay"

    .line 206
    invoke-interface {v3, v6}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Integer;->intValue()I

    move-result v6

    iput v6, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopDelay:I

    const-string v6, "lpp_enable"

    .line 209
    invoke-interface {v3, v6}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 208
    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v3

    iput-boolean v3, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->lppEnable:Z

    .line 210
    invoke-virtual {v4}, Lcom/mediatek/lbs/em2/utils/UpSetting;->correctIfInvalid()Z

    :cond_b
    add-int/lit8 v2, v2, 0x1

    goto/16 :goto_5

    :cond_c
    return-void

    .line 55
    :cond_d
    new-instance v0, Ljava/io/IOException;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Version Incompatiable, Parser=1.1 XML_file="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method protected static getXmlDocument(Ljava/lang/String;)Lorg/w3c/dom/Document;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 227
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 228
    invoke-static {}, Ljavax/xml/parsers/DocumentBuilderFactory;->newInstance()Ljavax/xml/parsers/DocumentBuilderFactory;

    move-result-object p0

    .line 232
    :try_start_0
    invoke-virtual {p0}, Ljavax/xml/parsers/DocumentBuilderFactory;->newDocumentBuilder()Ljavax/xml/parsers/DocumentBuilder;

    move-result-object p0

    .line 233
    invoke-virtual {p0, v0}, Ljavax/xml/parsers/DocumentBuilder;->parse(Ljava/io/File;)Lorg/w3c/dom/Document;

    move-result-object p0
    :try_end_0
    .catch Ljavax/xml/parsers/ParserConfigurationException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Lorg/xml/sax/SAXException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 237
    new-instance v0, Ljava/io/IOException;

    invoke-direct {v0, p0}, Ljava/io/IOException;-><init>(Ljava/lang/Throwable;)V

    throw v0

    :catch_1
    move-exception p0

    .line 235
    new-instance v0, Ljava/io/IOException;

    invoke-direct {v0, p0}, Ljava/io/IOException;-><init>(Ljava/lang/Throwable;)V

    throw v0
.end method

.method protected static hexStringToByteArray(Ljava/lang/String;)[B
    .locals 7

    .line 243
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    .line 244
    div-int/lit8 v1, v0, 0x2

    new-array v1, v1, [B

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v0, :cond_0

    .line 246
    div-int/lit8 v3, v2, 0x2

    invoke-virtual {p0, v2}, Ljava/lang/String;->charAt(I)C

    move-result v4

    const/16 v5, 0x10

    invoke-static {v4, v5}, Ljava/lang/Character;->digit(CI)I

    move-result v4

    shl-int/lit8 v4, v4, 0x4

    add-int/lit8 v6, v2, 0x1

    .line 247
    invoke-virtual {p0, v6}, Ljava/lang/String;->charAt(I)C

    move-result v6

    invoke-static {v6, v5}, Ljava/lang/Character;->digit(CI)I

    move-result v5

    add-int/2addr v4, v5

    int-to-byte v4, v4

    aput-byte v4, v1, v3

    add-int/lit8 v2, v2, 0x2

    goto :goto_0

    :cond_0
    return-object v1
.end method

.method protected static log(Ljava/lang/Object;)V
    .locals 1

    .line 254
    invoke-virtual {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "LocationEM [agps]:"

    invoke-static {v0, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method


# virtual methods
.method public getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;
    .locals 0

    .line 42
    iget-object p0, p0, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->agpsConfig:Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    return-object p0
.end method

.method public toString()Ljava/lang/String;
    .locals 3

    .line 221
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->versionString:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\n"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 222
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->agpsConfig:Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method
