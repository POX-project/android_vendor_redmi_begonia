.class abstract Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;
.super Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;
.source "MDMComponent.java"


# instance fields
.field mCurveView:Lcom/mediatek/engineermode/mdmcomponent/CurveView;

.field mData:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "[F>;"
        }
    .end annotation
.end field

.field mStartTime:J

.field mStarted:Z

.field mView:Landroid/view/View;

.field mXLabel:Landroid/widget/TextView;

.field mYLabel:Landroid/widget/TextView;

.field rand:Ljava/util/Random;


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 1207
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;-><init>(Landroid/app/Activity;)V

    .line 1201
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mData:Ljava/util/HashMap;

    .line 1202
    new-instance v0, Ljava/util/Random;

    invoke-direct {v0}, Ljava/util/Random;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->rand:Ljava/util/Random;

    .line 1208
    return-void
.end method


# virtual methods
.method addData(IF)V
    .locals 8
    .param p1, "index"    # I
    .param p2, "data"    # F

    .line 1269
    iget-boolean v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mStarted:Z

    const/4 v1, 0x1

    if-nez v0, :cond_0

    .line 1270
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    const-wide/16 v4, 0x2710

    div-long/2addr v2, v4

    const-wide/16 v4, 0xa

    mul-long/2addr v2, v4

    iput-wide v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mStartTime:J

    .line 1271
    iput-boolean v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mStarted:Z

    .line 1274
    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    const-wide/16 v4, 0x3e8

    div-long/2addr v2, v4

    .line 1280
    .local v2, "time":J
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mData:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [F

    .line 1281
    .local v0, "d":[F
    const/4 v4, 0x2

    if-nez v0, :cond_1

    .line 1282
    new-array v4, v4, [F

    .line 1283
    .local v4, "tmp":[F
    const/4 v5, 0x0

    iget-wide v6, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mStartTime:J

    sub-long v6, v2, v6

    long-to-float v6, v6

    aput v6, v4, v5

    .line 1284
    aput p2, v4, v1

    .line 1285
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mData:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v1, v5, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1286
    .end local v4    # "tmp":[F
    goto :goto_1

    .line 1292
    :cond_1
    array-length v5, v0

    add-int/2addr v5, v4

    new-array v4, v5, [F

    .line 1293
    .restart local v4    # "tmp":[F
    const/4 v5, 0x0

    .local v5, "i":I
    :goto_0
    array-length v6, v0

    if-ge v5, v6, :cond_2

    .line 1294
    aget v6, v0, v5

    aput v6, v4, v5

    .line 1293
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 1296
    .end local v5    # "i":I
    :cond_2
    array-length v5, v0

    iget-wide v6, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mStartTime:J

    sub-long v6, v2, v6

    long-to-float v6, v6

    aput v6, v4, v5

    .line 1297
    array-length v5, v0

    add-int/2addr v5, v1

    aput p2, v4, v5

    .line 1298
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mData:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v1, v5, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1300
    .end local v4    # "tmp":[F
    :goto_1
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mCurveView:Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    if-eqz v1, :cond_3

    .line 1301
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mData:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, [F

    invoke-virtual {v1, p1, v4}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->setData(I[F)V

    .line 1303
    :cond_3
    return-void
.end method

.method clearData()V
    .locals 0

    .line 1266
    return-void
.end method

.method configY()Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;
    .locals 5

    .line 1240
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mYLabel:Landroid/widget/TextView;

    const-string v1, "dBm"

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1242
    const/4 v0, 0x1

    new-array v1, v0, [Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    .line 1243
    .local v1, "configs":[Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;
    new-instance v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    invoke-direct {v2}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;-><init>()V

    const/4 v3, 0x0

    aput-object v2, v1, v3

    .line 1244
    aget-object v2, v1, v3

    const/high16 v4, -0x780000

    iput v4, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->color:I

    .line 1245
    aget-object v2, v1, v3

    const/4 v4, 0x2

    iput v4, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->lineWidth:I

    .line 1246
    aget-object v2, v1, v3

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->TYPE_CIRCLE:I

    iput v3, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->nodeType:I

    .line 1247
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mCurveView:Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    invoke-virtual {v2, v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->setConfig([Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;)V

    .line 1249
    new-instance v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    invoke-direct {v2}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;-><init>()V

    .line 1250
    .local v2, "yConfig":Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;
    const-wide/16 v3, 0x0

    iput-wide v3, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->min:J

    .line 1251
    const-wide/16 v3, 0x1e

    iput-wide v3, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->max:J

    .line 1252
    const-wide/16 v3, 0x2

    iput-wide v3, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->step:J

    .line 1253
    iput-boolean v0, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configMin:Z

    .line 1254
    iput-boolean v0, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configMax:Z

    .line 1255
    iput-boolean v0, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configStep:Z

    .line 1256
    return-object v2
.end method

.method getView()Landroid/view/View;
    .locals 6

    .line 1212
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mView:Landroid/view/View;

    if-nez v0, :cond_1

    .line 1213
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mActivity:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getLayoutInflater()Landroid/view/LayoutInflater;

    move-result-object v0

    const v1, 0x7f080097

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mView:Landroid/view/View;

    .line 1215
    const v1, 0x7f06036f

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mXLabel:Landroid/widget/TextView;

    .line 1216
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mView:Landroid/view/View;

    const v1, 0x7f060370

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mYLabel:Landroid/widget/TextView;

    .line 1217
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mView:Landroid/view/View;

    const v1, 0x7f06036b

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mCurveView:Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    .line 1218
    iget-boolean v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mStarted:Z

    const/4 v1, 0x1

    if-nez v0, :cond_0

    .line 1219
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    const-wide/16 v4, 0x2710

    div-long/2addr v2, v4

    const-wide/16 v4, 0xa

    mul-long/2addr v2, v4

    iput-wide v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mStartTime:J

    .line 1220
    iput-boolean v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mStarted:Z

    .line 1223
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mXLabel:Landroid/widget/TextView;

    const-string v2, "Time"

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1224
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    invoke-direct {v0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;-><init>()V

    .line 1225
    .local v0, "xConfig":Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;
    iget-wide v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mStartTime:J

    iput-wide v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->base:J

    .line 1226
    const-wide/16 v2, 0x0

    iput-wide v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->min:J

    .line 1227
    const-wide/16 v2, 0xc8

    iput-wide v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->max:J

    .line 1228
    const-wide/16 v2, 0x1

    iput-wide v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->step:J

    .line 1229
    iput-boolean v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configMin:Z

    .line 1230
    iput-boolean v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configMax:Z

    .line 1231
    iput-boolean v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configStep:Z

    .line 1232
    sget v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->TYPE_TIME:I

    iput v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->type:I

    .line 1233
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->configY()Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    move-result-object v1

    .line 1234
    .local v1, "yConfig":Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mCurveView:Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    invoke-virtual {v2, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->setAxisConfig(Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;)V

    .line 1236
    .end local v0    # "xConfig":Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;
    .end local v1    # "yConfig":Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;->mView:Landroid/view/View;

    return-object v0
.end method

.method removeView()V
    .locals 0

    .line 1262
    return-void
.end method
