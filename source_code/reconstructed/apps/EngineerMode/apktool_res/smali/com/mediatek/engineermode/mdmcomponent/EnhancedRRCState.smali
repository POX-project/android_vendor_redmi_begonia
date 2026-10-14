.class Lcom/mediatek/engineermode/mdmcomponent/EnhancedRRCState;
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

    .line 10045
    const-string v0, "MSG_ID_FDD_EM_URR_3G_GENERAL_STATUS_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/EnhancedRRCState;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 10067
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 10047
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/EnhancedRRCState$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/EnhancedRRCState$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/EnhancedRRCState;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EnhancedRRCState;->mStateMapping:Ljava/util/HashMap;

    .line 10068
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 10082
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/EnhancedRRCState;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 10077
    const-string v0, "3. UMTS FDD EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 10087
    const-string v0, "Enhanced RRC State"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 10072
    const-string v0, "Enhanced RRC State"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 10092
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 5
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 10097
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 10098
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "uas_3g_general_status."

    .line 10100
    .local v1, "coName":Ljava/lang/String;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/EnhancedRRCState;->clearData()V

    .line 10101
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "umts_rrc_state"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/EnhancedRRCState;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 10103
    .local v2, "state":I
    const/4 v3, 0x6

    if-eq v2, v3, :cond_0

    .line 10104
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/EnhancedRRCState;->mStateMapping:Ljava/util/HashMap;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 10106
    .local v3, "stateString":Ljava/lang/String;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/EnhancedRRCState;->clearData()V

    .line 10107
    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/mdmcomponent/EnhancedRRCState;->addData(Ljava/lang/String;)V

    .line 10109
    .end local v3    # "stateString":Ljava/lang/String;
    :cond_0
    return-void
.end method
