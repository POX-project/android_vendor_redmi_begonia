.class Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsupaCapability;
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

    .line 5265
    const-string v0, "MSG_ID_FDD_EM_USIME_CAPABILITY_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsupaCapability;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 5275
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 5267
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsupaCapability$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsupaCapability$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsupaCapability;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsupaCapability;->mMapping:Ljava/util/HashMap;

    .line 5276
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 5290
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsupaCapability;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 5285
    const-string v0, "3. UMTS FDD EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 5294
    const-string v0, "HSUPA Support"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 5280
    const-string v0, "WCDMA HSUPA Capability"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 5299
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 3
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 5304
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 5305
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsupaCapability;->clearData()V

    .line 5306
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsupaCapability;->mMapping:Ljava/util/HashMap;

    const-string v2, "hsupa_enable"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsupaCapability;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsupaCapability;->addData(Ljava/lang/String;)V

    .line 5308
    return-void
.end method
