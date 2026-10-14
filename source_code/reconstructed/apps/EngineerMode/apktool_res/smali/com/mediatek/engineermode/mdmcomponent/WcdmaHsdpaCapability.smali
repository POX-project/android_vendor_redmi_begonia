.class Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsdpaCapability;
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

    .line 5312
    const-string v0, "MSG_ID_FDD_EM_USIME_CAPABILITY_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsdpaCapability;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 5322
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 5314
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsdpaCapability$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsdpaCapability$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsdpaCapability;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsdpaCapability;->mMapping:Ljava/util/HashMap;

    .line 5323
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 5337
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsdpaCapability;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 5332
    const-string v0, "3. UMTS FDD EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 5341
    const-string v0, "HSDPA Support"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 5327
    const-string v0, "WCDMA HSDPA Capability"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 5346
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 3
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 5351
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 5352
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsdpaCapability;->clearData()V

    .line 5353
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsdpaCapability;->mMapping:Ljava/util/HashMap;

    const-string v2, "hsdpa_enable"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsdpaCapability;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaHsdpaCapability;->addData(Ljava/lang/String;)V

    .line 5355
    return-void
.end method
