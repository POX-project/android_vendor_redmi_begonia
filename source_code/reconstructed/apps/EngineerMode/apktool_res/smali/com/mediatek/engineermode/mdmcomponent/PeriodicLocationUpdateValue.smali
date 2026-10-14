.class Lcom/mediatek/engineermode/mdmcomponent/PeriodicLocationUpdateValue;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 6053
    const-string v0, "MSG_ID_EM_MM_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/PeriodicLocationUpdateValue;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 6057
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 6058
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 6072
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/PeriodicLocationUpdateValue;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 6067
    const-string v0, "3. UMTS FDD EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 6081
    const-string v0, "Periodic Location Update Value"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 6062
    const-string v0, "Periodic Location Update Value"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 6077
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 5
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 6086
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 6087
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    const/4 v1, 0x0

    .line 6088
    .local v1, "t3212_val":I
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/PeriodicLocationUpdateValue;->clearData()V

    .line 6089
    const-string v2, "MSG_ID_EM_MM_INFO_IND"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 6090
    const-string v2, "t3212_val"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/PeriodicLocationUpdateValue;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    .line 6092
    :cond_0
    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v2, v3

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/PeriodicLocationUpdateValue;->addData([Ljava/lang/Object;)V

    .line 6093
    return-void
.end method
