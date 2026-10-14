.class Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
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


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 5811
    const-string v0, "MSG_ID_FDD_EM_URR_3G_GENERAL_STATUS_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 5827
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 5813
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd;->mMapping:Ljava/util/HashMap;

    .line 5828
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 5842
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 5837
    const-string v0, "3. UMTS FDD EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 5846
    const-string v0, "PLMN search status"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 5832
    const-string v0, "PLMN Search status (UMTS FDD)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 5851
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 5
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 5856
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 5857
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "uas_3g_general_status."

    .line 5859
    .local v1, "coName":Ljava/lang/String;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd;->clearData()V

    .line 5860
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd;->mMapping:Ljava/util/HashMap;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "plmn_search_status"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd;->addData(Ljava/lang/String;)V

    .line 5862
    return-void
.end method
