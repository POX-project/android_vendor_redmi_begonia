.class Lcom/mediatek/engineermode/mdmcomponent/HighPriorityPLMNSearch;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 2514
    const-string v0, "MSG_ID_EM_NWSEL_PLMN_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/HighPriorityPLMNSearch;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 2518
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 2519
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 2533
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/HighPriorityPLMNSearch;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 2528
    const-string v0, "1. General EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 2542
    const-string v0, "High Priority PLMN Search"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 2523
    const-string v0, "High Priority PLMN Search"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 2538
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 5
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 2547
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 2548
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "is_higher_pri_plmn_srch"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/HighPriorityPLMNSearch;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    .line 2549
    .local v1, "value":I
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/HighPriorityPLMNSearch;->clearData()V

    .line 2550
    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/Object;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    const/4 v4, 0x0

    aput-object v3, v2, v4

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/HighPriorityPLMNSearch;->addData([Ljava/lang/Object;)V

    .line 2551
    return-void
.end method
