.class Lcom/mediatek/engineermode/mdmcomponent/HsdpaConfiguredUmtsFdd;
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

    .line 5071
    const-string v0, "MSG_ID_EM_RRCE_HSPA_CONFIG_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/HsdpaConfiguredUmtsFdd;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 5081
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 5073
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/HsdpaConfiguredUmtsFdd$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/HsdpaConfiguredUmtsFdd$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/HsdpaConfiguredUmtsFdd;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/HsdpaConfiguredUmtsFdd;->mMapping:Ljava/util/HashMap;

    .line 5082
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 5096
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/HsdpaConfiguredUmtsFdd;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 5091
    const-string v0, "3. UMTS FDD EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 5100
    const-string v0, "HSDPA configured"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 5086
    const-string v0, "HSDPA configured (UMTS FDD)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 5105
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 3
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 5110
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 5111
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/HsdpaConfiguredUmtsFdd;->mMapping:Ljava/util/HashMap;

    const-string v2, "hsdpa_configured"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/HsdpaConfiguredUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 5113
    .local v1, "hsdpa":Ljava/lang/String;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/HsdpaConfiguredUmtsFdd;->clearData()V

    .line 5114
    if-nez v1, :cond_0

    const-string v2, "FALSE"

    goto :goto_0

    :cond_0
    move-object v2, v1

    :goto_0
    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/HsdpaConfiguredUmtsFdd;->addData(Ljava/lang/String;)V

    .line 5115
    return-void
.end method
