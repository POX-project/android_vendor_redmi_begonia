.class Lcom/mediatek/engineermode/mdmcomponent/RRState;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;

.field private static final LABELS:[Ljava/lang/String;


# instance fields
.field private final mRrStateMapping:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 2284
    const-string v0, "MSG_ID_EM_RRM_MEASUREMENT_REPORT_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/RRState;->EM_TYPES:[Ljava/lang/String;

    .line 2286
    const-string v0, "RR State"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/RRState;->LABELS:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 2297
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 2287
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/RRState$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/RRState$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/RRState;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/RRState;->mRrStateMapping:Ljava/util/Map;

    .line 2298
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 2312
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/RRState;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 2307
    const-string v0, "2. GSM EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 2317
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/RRState;->LABELS:[Ljava/lang/String;

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 2302
    const-string v0, "RR State"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 2322
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 3
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 2327
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 2328
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/RRState;->mRrStateMapping:Ljava/util/Map;

    const-string v2, "rr_em_measurement_report_info.rr_state"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/RRState;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 2331
    .local v1, "state":Ljava/lang/String;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/RRState;->clearData()V

    .line 2332
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/RRState;->addData(Ljava/lang/String;)V

    .line 2333
    return-void
.end method
