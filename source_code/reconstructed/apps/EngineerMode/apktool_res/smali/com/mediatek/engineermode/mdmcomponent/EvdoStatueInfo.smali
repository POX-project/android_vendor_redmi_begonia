.class Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentC2k.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field ALMPMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field AtMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field CspMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field IdpMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field InspMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field OmpMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field RupMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field SessionMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 1004
    const-string v0, "MSG_ID_EM_C2K_L4_EVDO_STATE_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 1086
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 1007
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->SessionMapping:Ljava/util/HashMap;

    .line 1016
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->AtMapping:Ljava/util/HashMap;

    .line 1028
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo$3;-><init>(Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->ALMPMapping:Ljava/util/HashMap;

    .line 1037
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo$4;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo$4;-><init>(Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->InspMapping:Ljava/util/HashMap;

    .line 1048
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo$5;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo$5;-><init>(Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->IdpMapping:Ljava/util/HashMap;

    .line 1060
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo$6;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo$6;-><init>(Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->OmpMapping:Ljava/util/HashMap;

    .line 1067
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo$7;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo$7;-><init>(Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->CspMapping:Ljava/util/HashMap;

    .line 1074
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo$8;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo$8;-><init>(Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->RupMapping:Ljava/util/HashMap;

    .line 1087
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 1101
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 1096
    const-string v0, "7. CDMA EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 8

    .line 1105
    const-string v0, "sessionState"

    const-string v1, "atState"

    const-string v2, "almpState"

    const-string v3, "inspState"

    const-string v4, "idpState"

    const-string v5, "ompState"

    const-string v6, "cspState"

    const-string v7, "rupState"

    filled-new-array/range {v0 .. v7}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 1091
    const-string v0, "EVDO Status info"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 1111
    const/4 v0, 0x0

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 11
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 1115
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 1116
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "sessionState"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    .line 1117
    .local v1, "sessionState":I
    const-string v2, "atState"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 1118
    .local v2, "atState":I
    const-string v3, "almpState"

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 1119
    .local v3, "almpState":I
    const-string v4, "inspState"

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 1120
    .local v4, "inspState":I
    const-string v5, "idpState"

    invoke-virtual {p0, v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 1121
    .local v5, "idpState":I
    const-string v6, "ompState"

    invoke-virtual {p0, v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 1122
    .local v6, "ompState":I
    const-string v7, "cspState"

    invoke-virtual {p0, v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 1123
    .local v7, "cspState":I
    const-string v8, "rupState"

    invoke-virtual {p0, v0, v8}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 1125
    .local v8, "rupState":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "rupState = "

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    const-string v10, "EmInfo/MDMComponent"

    invoke-static {v10, v9}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1126
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->clearData()V

    .line 1128
    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->SessionMapping:Ljava/util/HashMap;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/lang/String;

    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->addData(Ljava/lang/String;)V

    .line 1129
    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->AtMapping:Ljava/util/HashMap;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/lang/String;

    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->addData(Ljava/lang/String;)V

    .line 1130
    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->ALMPMapping:Ljava/util/HashMap;

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/lang/String;

    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->addData(Ljava/lang/String;)V

    .line 1131
    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->InspMapping:Ljava/util/HashMap;

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/lang/String;

    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->addData(Ljava/lang/String;)V

    .line 1132
    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->IdpMapping:Ljava/util/HashMap;

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/lang/String;

    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->addData(Ljava/lang/String;)V

    .line 1133
    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->OmpMapping:Ljava/util/HashMap;

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/lang/String;

    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->addData(Ljava/lang/String;)V

    .line 1134
    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->CspMapping:Ljava/util/HashMap;

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/lang/String;

    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->addData(Ljava/lang/String;)V

    .line 1135
    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->RupMapping:Ljava/util/HashMap;

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/lang/String;

    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->addData(Ljava/lang/String;)V

    .line 1136
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;->notifyDataSetChanged()V

    .line 1137
    return-void
.end method
