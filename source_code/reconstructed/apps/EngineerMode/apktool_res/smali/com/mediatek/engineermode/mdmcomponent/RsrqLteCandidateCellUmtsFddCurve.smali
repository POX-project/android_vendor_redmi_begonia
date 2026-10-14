.class Lcom/mediatek/engineermode/mdmcomponent/RsrqLteCandidateCellUmtsFddCurve;
.super Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 9173
    const-string v0, "MSG_ID_FDD_EM_CSCE_NEIGH_CELL_S_STATUS_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/RsrqLteCandidateCellUmtsFddCurve;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 9177
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;-><init>(Landroid/app/Activity;)V

    .line 9178
    return-void
.end method


# virtual methods
.method clearData()V
    .locals 0

    .line 9197
    return-void
.end method

.method configY()Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;
    .locals 6

    .line 9202
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/RsrqLteCandidateCellUmtsFddCurve;->mYLabel:Landroid/widget/TextView;

    const-string v1, "R"

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 9204
    const/16 v0, 0x10

    new-array v1, v0, [I

    fill-array-data v1, :array_0

    .line 9208
    .local v1, "colors":[I
    new-array v2, v0, [Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    .line 9209
    .local v2, "configs":[Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    if-ge v3, v0, :cond_0

    .line 9210
    new-instance v4, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    invoke-direct {v4}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;-><init>()V

    aput-object v4, v2, v3

    .line 9211
    aget-object v4, v2, v3

    aget v5, v1, v3

    iput v5, v4, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->color:I

    .line 9212
    aget-object v4, v2, v3

    const/4 v5, 0x3

    iput v5, v4, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->lineWidth:I

    .line 9213
    aget-object v4, v2, v3

    sget v5, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->TYPE_CIRCLE:I

    iput v5, v4, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->nodeType:I

    .line 9214
    aget-object v4, v2, v3

    const-string v5, ""

    iput-object v5, v4, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->name:Ljava/lang/String;

    .line 9209
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 9216
    .end local v3    # "i":I
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/RsrqLteCandidateCellUmtsFddCurve;->mCurveView:Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->setConfig([Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;)V

    .line 9218
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    invoke-direct {v0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;-><init>()V

    .line 9219
    .local v0, "yConfig":Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;
    const-wide/16 v3, -0x64

    iput-wide v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->min:J

    .line 9220
    const-wide/16 v3, 0x64

    iput-wide v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->max:J

    .line 9221
    const-wide/16 v3, 0xa

    iput-wide v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->step:J

    .line 9222
    const/4 v3, 0x1

    iput-boolean v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configMin:Z

    .line 9223
    iput-boolean v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configMax:Z

    .line 9224
    iput-boolean v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configStep:Z

    .line 9225
    return-object v0

    :array_0
    .array-data 4
        -0xffff01
        -0xff0100
        -0x10000
        -0xff0001
        -0xff01
        -0x100
        -0xffff78
        -0xff7800
        -0x780000
        -0xff7778
        -0x77ff78
        -0x777800
        -0xffffbc
        -0xffbc00
        -0xbc0000
        -0x1000000
    .end array-data
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 9192
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/RsrqLteCandidateCellUmtsFddCurve;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 9187
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 9182
    const-string v0, "RSRQ (LTE candidate cell)(UMTS FDD)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 9230
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 7
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 9235
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 9236
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "RAT_type"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/RsrqLteCandidateCellUmtsFddCurve;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    .line 9238
    .local v1, "rat":I
    const/4 v2, 0x2

    if-ne v1, v2, :cond_0

    .line 9239
    const-string v2, "neigh_cell_count"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/RsrqLteCandidateCellUmtsFddCurve;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 9241
    .local v2, "num":I
    const-string v3, "choice.LTE_neigh_cells["

    .line 9243
    .local v3, "coName":Ljava/lang/String;
    const/4 v4, 0x0

    .local v4, "i":I
    :goto_0
    if-ge v4, v2, :cond_0

    const/16 v5, 0x10

    if-ge v4, v5, :cond_0

    .line 9244
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, "]."

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "rsrq"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x1

    invoke-virtual {p0, v0, v5, v6}, Lcom/mediatek/engineermode/mdmcomponent/RsrqLteCandidateCellUmtsFddCurve;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v5

    int-to-float v5, v5

    const/high16 v6, 0x45800000    # 4096.0f

    div-float/2addr v5, v6

    .line 9246
    .local v5, "rsrq":F
    invoke-virtual {p0, v4, v5}, Lcom/mediatek/engineermode/mdmcomponent/RsrqLteCandidateCellUmtsFddCurve;->addData(IF)V

    .line 9243
    .end local v5    # "rsrq":F
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 9249
    .end local v2    # "num":I
    .end local v3    # "coName":Ljava/lang/String;
    .end local v4    # "i":I
    :cond_0
    return-void
.end method
