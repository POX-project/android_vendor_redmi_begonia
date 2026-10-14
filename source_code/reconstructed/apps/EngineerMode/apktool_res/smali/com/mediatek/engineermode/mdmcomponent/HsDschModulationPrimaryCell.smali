.class Lcom/mediatek/engineermode/mdmcomponent/HsDschModulationPrimaryCell;
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

    .line 5167
    const-string v0, "MSG_ID_FDD_EM_UL1_HSPA_INFO_GROUP_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/HsDschModulationPrimaryCell;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 5178
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 5169
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/HsDschModulationPrimaryCell$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/HsDschModulationPrimaryCell$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/HsDschModulationPrimaryCell;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/HsDschModulationPrimaryCell;->mMapping:Ljava/util/HashMap;

    .line 5179
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 5193
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/HsDschModulationPrimaryCell;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 5188
    const-string v0, "3. UMTS FDD EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 5197
    const-string v0, "Modulation (Pri)"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 5183
    const-string v0, "HS-DSCH Modulation (Primary Cell)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 5202
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 5
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 5207
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 5208
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "primary_hs_dsch_bler."

    .line 5209
    .local v1, "coName":Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "dsch_curr_mod"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/HsDschModulationPrimaryCell;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 5211
    .local v2, "mod":I
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/HsDschModulationPrimaryCell;->clearData()V

    .line 5212
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/HsDschModulationPrimaryCell;->mMapping:Ljava/util/HashMap;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/mdmcomponent/HsDschModulationPrimaryCell;->addData(Ljava/lang/String;)V

    .line 5213
    return-void
.end method
