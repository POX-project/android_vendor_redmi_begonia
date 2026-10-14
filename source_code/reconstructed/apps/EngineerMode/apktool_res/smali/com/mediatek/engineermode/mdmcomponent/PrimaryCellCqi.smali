.class Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellCqi;
.super Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 7040
    const-string v0, "MSG_ID_EM_EL1_STATUS_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellCqi;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 7044
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;-><init>(Landroid/app/Activity;)V

    .line 7045
    return-void
.end method


# virtual methods
.method configY()Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;
    .locals 5

    .line 7065
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellCqi;->mYLabel:Landroid/widget/TextView;

    const-string v1, "R"

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 7067
    const/4 v0, 0x2

    new-array v0, v0, [Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    .line 7068
    .local v0, "configs":[Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    invoke-direct {v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;-><init>()V

    const/4 v2, 0x0

    aput-object v1, v0, v2

    .line 7069
    aget-object v1, v0, v2

    const v3, -0xffff01

    iput v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->color:I

    .line 7070
    aget-object v1, v0, v2

    const/4 v3, 0x3

    iput v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->lineWidth:I

    .line 7071
    aget-object v1, v0, v2

    sget v4, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->TYPE_CIRCLE:I

    iput v4, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->nodeType:I

    .line 7072
    aget-object v1, v0, v2

    const-string v2, "CQI_CW0"

    iput-object v2, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->name:Ljava/lang/String;

    .line 7074
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    invoke-direct {v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;-><init>()V

    const/4 v2, 0x1

    aput-object v1, v0, v2

    .line 7075
    aget-object v1, v0, v2

    const v4, -0xff0100

    iput v4, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->color:I

    .line 7076
    aget-object v1, v0, v2

    iput v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->lineWidth:I

    .line 7077
    aget-object v1, v0, v2

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->LINE_DASH:I

    iput v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->lineType:I

    .line 7078
    aget-object v1, v0, v2

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->TYPE_CROSS:I

    iput v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->nodeType:I

    .line 7079
    aget-object v1, v0, v2

    const-string v3, "CQI_CW1"

    iput-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->name:Ljava/lang/String;

    .line 7080
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellCqi;->mCurveView:Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->setConfig([Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;)V

    .line 7082
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    invoke-direct {v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;-><init>()V

    .line 7083
    .local v1, "yConfig":Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;
    const-wide/16 v3, -0x64

    iput-wide v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->min:J

    .line 7084
    const-wide/16 v3, 0x64

    iput-wide v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->max:J

    .line 7085
    const-wide/16 v3, 0xa

    iput-wide v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->step:J

    .line 7086
    iput-boolean v2, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configMin:Z

    .line 7087
    iput-boolean v2, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configMax:Z

    .line 7088
    iput-boolean v2, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configStep:Z

    .line 7089
    return-object v1
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 7059
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellCqi;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 7054
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 7049
    const-string v0, "Primary Cell CQI"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 7094
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 6
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 7099
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 7100
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "dl_info[0]."

    .line 7101
    .local v1, "coName":Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "cqi_cw0"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x1

    invoke-virtual {p0, v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellCqi;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v2

    .line 7103
    .local v2, "cw0":I
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "cqi_cw1"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p0, v0, v4, v3}, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellCqi;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v3

    .line 7105
    .local v3, "cw1":I
    int-to-float v4, v2

    const/4 v5, 0x0

    invoke-virtual {p0, v5, v4}, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellCqi;->addData(IF)V

    .line 7106
    int-to-float v4, v3

    invoke-virtual {p0, v5, v4}, Lcom/mediatek/engineermode/mdmcomponent/PrimaryCellCqi;->addData(IF)V

    .line 7107
    return-void
.end method
