.class Lcom/mediatek/engineermode/mdmcomponent/ERRCState;
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

    .line 2462
    const-string v0, "MSG_ID_EM_ERRC_STATE_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/ERRCState;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 2476
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 2464
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/ERRCState$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/ERRCState$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/ERRCState;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ERRCState;->mMapping:Ljava/util/HashMap;

    .line 2477
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 2491
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/ERRCState;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 2486
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 2495
    const-string v0, "RRC State"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 2481
    const-string v0, "ERRC State"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 2500
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 3
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 2505
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 2506
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ERRCState;->mMapping:Ljava/util/HashMap;

    const-string v2, "errc_sts"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/ERRCState;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 2508
    .local v1, "state":Ljava/lang/String;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/ERRCState;->clearData()V

    .line 2509
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ERRCState;->addData(Ljava/lang/String;)V

    .line 2510
    return-void
.end method
