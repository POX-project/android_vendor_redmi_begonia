.class Lcom/mediatek/engineermode/mdmcomponent/EDchTtiConfigured;
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

    .line 5022
    const-string v0, "MSG_ID_EM_RRCE_HSPA_CONFIG_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/EDchTtiConfigured;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 5033
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 5024
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/EDchTtiConfigured$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/EDchTtiConfigured$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/EDchTtiConfigured;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EDchTtiConfigured;->mMapping:Ljava/util/HashMap;

    .line 5034
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 5048
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/EDchTtiConfigured;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 5043
    const-string v0, "3. UMTS FDD EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 5052
    const-string v0, "E-DCH TTI"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 5038
    const-string v0, "E-DCH TTI Configured"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 5057
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 3
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 5062
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 5063
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/EDchTtiConfigured;->mMapping:Ljava/util/HashMap;

    const-string v2, "e_dch_tti"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/EDchTtiConfigured;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 5065
    .local v1, "tti":Ljava/lang/String;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/EDchTtiConfigured;->clearData()V

    .line 5066
    if-nez v1, :cond_0

    const-string v2, "N/A"

    goto :goto_0

    :cond_0
    move-object v2, v1

    :goto_0
    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/EDchTtiConfigured;->addData(Ljava/lang/String;)V

    .line 5067
    return-void
.end method
