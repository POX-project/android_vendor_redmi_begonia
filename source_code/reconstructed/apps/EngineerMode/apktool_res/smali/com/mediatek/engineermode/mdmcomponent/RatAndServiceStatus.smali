.class Lcom/mediatek/engineermode/mdmcomponent/RatAndServiceStatus;
.super Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;
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

    .line 8649
    const-string v0, "MSG_ID_EM_RAC_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/RatAndServiceStatus;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 8665
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;-><init>(Landroid/app/Activity;)V

    .line 8651
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/RatAndServiceStatus$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/RatAndServiceStatus$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/RatAndServiceStatus;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/RatAndServiceStatus;->mMapping:Ljava/util/HashMap;

    .line 8666
    return-void
.end method


# virtual methods
.method configY()Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;
    .locals 5

    .line 8686
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/RatAndServiceStatus;->mYLabel:Landroid/widget/TextView;

    const-string v1, "R"

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 8688
    const/4 v0, 0x1

    new-array v1, v0, [Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    .line 8689
    .local v1, "configs":[Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;
    new-instance v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    invoke-direct {v2}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;-><init>()V

    const/4 v3, 0x0

    aput-object v2, v1, v3

    .line 8690
    aget-object v2, v1, v3

    const v4, -0xffff01

    iput v4, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->color:I

    .line 8691
    aget-object v2, v1, v3

    const/4 v4, 0x3

    iput v4, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->lineWidth:I

    .line 8692
    aget-object v2, v1, v3

    sget v4, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->TYPE_CIRCLE:I

    iput v4, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->nodeType:I

    .line 8693
    aget-object v2, v1, v3

    const-string v3, "Service status"

    iput-object v3, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->name:Ljava/lang/String;

    .line 8694
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/RatAndServiceStatus;->mCurveView:Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    invoke-virtual {v2, v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->setConfig([Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;)V

    .line 8696
    new-instance v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    invoke-direct {v2}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;-><init>()V

    .line 8697
    .local v2, "yConfig":Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;
    const-wide/16 v3, 0x0

    iput-wide v3, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->min:J

    .line 8698
    const-wide/16 v3, 0x7

    iput-wide v3, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->max:J

    .line 8699
    const-wide/16 v3, 0x1

    iput-wide v3, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->step:J

    .line 8700
    iput-boolean v0, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configMin:Z

    .line 8701
    iput-boolean v0, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configMax:Z

    .line 8702
    iput-boolean v0, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configStep:Z

    .line 8703
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/RatAndServiceStatus;->mMapping:Ljava/util/HashMap;

    iput-object v0, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->customLabel:Ljava/util/HashMap;

    .line 8704
    return-object v2
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 8680
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/RatAndServiceStatus;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 8675
    const-string v0, "1. General EM Component"

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 8670
    const-string v0, "RAT and Service Status"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 8709
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 3
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 8714
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 8715
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "active_rat_info"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/RatAndServiceStatus;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    int-to-float v1, v1

    const/4 v2, 0x0

    invoke-virtual {p0, v2, v1}, Lcom/mediatek/engineermode/mdmcomponent/RatAndServiceStatus;->addData(IF)V

    .line 8716
    return-void
.end method
