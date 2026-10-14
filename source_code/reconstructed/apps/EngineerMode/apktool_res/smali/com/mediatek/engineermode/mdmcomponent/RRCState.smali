.class Lcom/mediatek/engineermode/mdmcomponent/RRCState;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field private final mStateMapping:Ljava/util/HashMap;
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

    .line 2161
    const-string v0, "MSG_ID_FDD_EM_URR_3G_GENERAL_STATUS_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/RRCState;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 2185
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 2163
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/RRCState$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/RRCState$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/RRCState;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCState;->mStateMapping:Ljava/util/HashMap;

    .line 2186
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 2200
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/RRCState;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 2195
    const-string v0, "3. UMTS FDD EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 2204
    const-string v0, "RRC State"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 2190
    const-string v0, "RRC State"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 2209
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 5
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 2214
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 2215
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/RRCState;->clearData()V

    .line 2216
    const-string v1, "uas_3g_general_status."

    .line 2218
    .local v1, "coName":Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "umts_rrc_state"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/RRCState;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 2220
    .local v2, "state":I
    const/4 v3, 0x6

    if-eq v2, v3, :cond_0

    .line 2221
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCState;->mStateMapping:Ljava/util/HashMap;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 2222
    .local v3, "stateString":Ljava/lang/String;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/RRCState;->clearData()V

    .line 2223
    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/mdmcomponent/RRCState;->addData(Ljava/lang/String;)V

    .line 2225
    .end local v3    # "stateString":Ljava/lang/String;
    :cond_0
    return-void
.end method
