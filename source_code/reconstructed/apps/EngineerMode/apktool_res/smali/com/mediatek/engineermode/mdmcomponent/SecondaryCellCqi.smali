.class Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellCqi;
.super Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 8004
    const-string v0, "MSG_ID_EM_EL1_STATUS_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellCqi;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 8008
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;-><init>(Landroid/app/Activity;)V

    .line 8009
    return-void
.end method


# virtual methods
.method configY()Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;
    .locals 5

    .line 8029
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellCqi;->mYLabel:Landroid/widget/TextView;

    const-string v1, "R"

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 8031
    const/4 v0, 0x2

    new-array v0, v0, [Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    .line 8032
    .local v0, "configs":[Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    invoke-direct {v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;-><init>()V

    const/4 v2, 0x0

    aput-object v1, v0, v2

    .line 8033
    aget-object v1, v0, v2

    const v3, -0xffff01

    iput v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->color:I

    .line 8034
    aget-object v1, v0, v2

    const/4 v3, 0x3

    iput v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->lineWidth:I

    .line 8035
    aget-object v1, v0, v2

    sget v4, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->TYPE_CIRCLE:I

    iput v4, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->nodeType:I

    .line 8036
    aget-object v1, v0, v2

    const-string v2, "CQI_CW0"

    iput-object v2, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->name:Ljava/lang/String;

    .line 8038
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    invoke-direct {v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;-><init>()V

    const/4 v2, 0x1

    aput-object v1, v0, v2

    .line 8039
    aget-object v1, v0, v2

    const v4, -0xff0100

    iput v4, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->color:I

    .line 8040
    aget-object v1, v0, v2

    iput v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->lineWidth:I

    .line 8041
    aget-object v1, v0, v2

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->LINE_DASH:I

    iput v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->lineType:I

    .line 8042
    aget-object v1, v0, v2

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->TYPE_CROSS:I

    iput v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->nodeType:I

    .line 8043
    aget-object v1, v0, v2

    const-string v3, "CQI_CW1"

    iput-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->name:Ljava/lang/String;

    .line 8044
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellCqi;->mCurveView:Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->setConfig([Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;)V

    .line 8046
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    invoke-direct {v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;-><init>()V

    .line 8047
    .local v1, "yConfig":Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;
    const-wide/16 v3, -0x64

    iput-wide v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->min:J

    .line 8048
    const-wide/16 v3, 0x64

    iput-wide v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->max:J

    .line 8049
    const-wide/16 v3, 0xa

    iput-wide v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->step:J

    .line 8050
    iput-boolean v2, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configMin:Z

    .line 8051
    iput-boolean v2, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configMax:Z

    .line 8052
    iput-boolean v2, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configStep:Z

    .line 8053
    return-object v1
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 8023
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellCqi;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 8018
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 8013
    const-string v0, "Secondary Cell CQI"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 8058
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 6
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 8063
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 8064
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "dl_info[1]."

    .line 8065
    .local v1, "coName":Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "cqi_cw0"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x1

    invoke-virtual {p0, v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellCqi;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v2

    .line 8067
    .local v2, "cw0":I
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "cqi_cw1"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p0, v0, v4, v3}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellCqi;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v3

    .line 8069
    .local v3, "cw1":I
    int-to-float v4, v2

    const/4 v5, 0x0

    invoke-virtual {p0, v5, v4}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellCqi;->addData(IF)V

    .line 8070
    int-to-float v4, v3

    invoke-virtual {p0, v5, v4}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellCqi;->addData(IF)V

    .line 8071
    return-void
.end method
