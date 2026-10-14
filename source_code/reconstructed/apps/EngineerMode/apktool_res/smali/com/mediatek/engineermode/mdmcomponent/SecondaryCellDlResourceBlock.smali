.class Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellDlResourceBlock;
.super Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 8118
    const-string v0, "MSG_ID_EM_EL1_STATUS_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellDlResourceBlock;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 8122
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;-><init>(Landroid/app/Activity;)V

    .line 8123
    return-void
.end method


# virtual methods
.method configY()Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;
    .locals 5

    .line 8143
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellDlResourceBlock;->mYLabel:Landroid/widget/TextView;

    const-string v1, "R"

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 8145
    const/4 v0, 0x1

    new-array v1, v0, [Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    .line 8146
    .local v1, "configs":[Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;
    new-instance v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    invoke-direct {v2}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;-><init>()V

    const/4 v3, 0x0

    aput-object v2, v1, v3

    .line 8147
    aget-object v2, v1, v3

    const v4, -0xffff01

    iput v4, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->color:I

    .line 8148
    aget-object v2, v1, v3

    const/4 v4, 0x3

    iput v4, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->lineWidth:I

    .line 8149
    aget-object v2, v1, v3

    sget v4, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->TYPE_CIRCLE:I

    iput v4, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->nodeType:I

    .line 8150
    aget-object v2, v1, v3

    const-string v3, "DL Resource Block"

    iput-object v3, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->name:Ljava/lang/String;

    .line 8151
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellDlResourceBlock;->mCurveView:Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    invoke-virtual {v2, v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->setConfig([Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;)V

    .line 8153
    new-instance v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    invoke-direct {v2}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;-><init>()V

    .line 8154
    .local v2, "yConfig":Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;
    const-wide/16 v3, -0x64

    iput-wide v3, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->min:J

    .line 8155
    const-wide/16 v3, 0x64

    iput-wide v3, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->max:J

    .line 8156
    const-wide/16 v3, 0xa

    iput-wide v3, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->step:J

    .line 8157
    iput-boolean v0, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configMin:Z

    .line 8158
    iput-boolean v0, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configMax:Z

    .line 8159
    iput-boolean v0, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configStep:Z

    .line 8160
    return-object v2
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 8137
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellDlResourceBlock;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 8132
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 8127
    const-string v0, "Secondary Cell DL Resource Block"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 8165
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 5
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 8170
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 8171
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "dl_info[1]."

    .line 8172
    .local v1, "coName":Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "DL_rb"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x1

    invoke-virtual {p0, v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellDlResourceBlock;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v2

    .line 8174
    .local v2, "value":I
    int-to-float v3, v2

    const/4 v4, 0x0

    invoke-virtual {p0, v4, v3}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellDlResourceBlock;->addData(IF)V

    .line 8175
    return-void
.end method
