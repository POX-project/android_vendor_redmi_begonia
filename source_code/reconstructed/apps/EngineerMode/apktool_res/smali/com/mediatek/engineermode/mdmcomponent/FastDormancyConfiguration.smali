.class Lcom/mediatek/engineermode/mdmcomponent/FastDormancyConfiguration;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field mMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Boolean;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 6004
    const-string v0, "MSG_ID_EM_RRCE_FD_CONFIGURATION_STATUS_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/FastDormancyConfiguration;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 6015
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 6007
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/FastDormancyConfiguration$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/FastDormancyConfiguration$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FastDormancyConfiguration;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FastDormancyConfiguration;->mMapping:Ljava/util/HashMap;

    .line 6016
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 6030
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/FastDormancyConfiguration;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 6025
    const-string v0, "3. UMTS FDD EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 6034
    const-string v0, "Fast Dormancy configured"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 6020
    const-string v0, "Fast Dormancy Configuration"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 6039
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 3
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 6044
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 6045
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FastDormancyConfiguration;->mMapping:Ljava/util/HashMap;

    const-string v2, "FDcfgStatus"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/FastDormancyConfiguration;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 6047
    .local v1, "value":Ljava/lang/String;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/FastDormancyConfiguration;->clearData()V

    .line 6048
    if-nez v1, :cond_0

    const-string v2, "OFF"

    goto :goto_0

    :cond_0
    move-object v2, v1

    :goto_0
    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/FastDormancyConfiguration;->addData(Ljava/lang/String;)V

    .line 6049
    return-void
.end method
