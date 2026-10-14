.class Lcom/mediatek/engineermode/mdmcomponent/CellSupportPsInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 5866
    const-string v0, "MSG_ID_EM_GMM_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/CellSupportPsInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 5870
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 5871
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 5885
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/CellSupportPsInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 5880
    const-string v0, "1. General EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 5889
    const-string v0, "cell support PS"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 5875
    const-string v0, "Cell Support PS INFO"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 5894
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 4
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 5899
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 5900
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CellSupportPsInfo;->clearData()V

    .line 5901
    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    const-string v2, "cell_support_ps"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/CellSupportPsInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/CellSupportPsInfo;->addData([Ljava/lang/Object;)V

    .line 5902
    return-void
.end method
