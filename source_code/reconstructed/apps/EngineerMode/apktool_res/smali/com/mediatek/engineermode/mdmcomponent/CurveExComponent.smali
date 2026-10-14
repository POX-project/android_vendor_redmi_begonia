.class abstract Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;
.super Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;
.source "MDMComponent.java"


# instance fields
.field mCurveView:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

.field mData:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "[F>;"
        }
    .end annotation
.end field

.field mView:Landroid/view/View;

.field mXLabel:Landroid/widget/TextView;

.field mYLabel:Landroid/widget/TextView;


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 1315
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;-><init>(Landroid/app/Activity;)V

    .line 1312
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;->mData:Ljava/util/HashMap;

    .line 1316
    return-void
.end method


# virtual methods
.method addData(IFFFF)V
    .locals 7
    .param p1, "index"    # I
    .param p2, "dataX"    # F
    .param p3, "dataY"    # F
    .param p4, "dataA"    # F
    .param p5, "dataB"    # F

    .line 1393
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;->mData:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [F

    .line 1394
    .local v0, "d":[F
    const/4 v1, 0x3

    const/4 v2, 0x2

    const/4 v3, 0x4

    const/4 v4, 0x1

    if-nez v0, :cond_0

    .line 1395
    new-array v3, v3, [F

    .line 1396
    .local v3, "tmp":[F
    const/4 v5, 0x0

    aput p2, v3, v5

    .line 1397
    aput p3, v3, v4

    .line 1398
    aput p4, v3, v2

    .line 1399
    aput p5, v3, v1

    .line 1400
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;->mData:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1401
    .end local v3    # "tmp":[F
    goto :goto_1

    .line 1403
    :cond_0
    array-length v5, v0

    add-int/2addr v5, v3

    new-array v3, v5, [F

    .line 1404
    .restart local v3    # "tmp":[F
    const/4 v5, 0x0

    .local v5, "i":I
    :goto_0
    array-length v6, v0

    if-ge v5, v6, :cond_1

    .line 1405
    aget v6, v0, v5

    aput v6, v3, v5

    .line 1404
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 1407
    .end local v5    # "i":I
    :cond_1
    array-length v5, v0

    aput p2, v3, v5

    .line 1408
    array-length v5, v0

    add-int/2addr v5, v4

    aput p3, v3, v5

    .line 1409
    array-length v4, v0

    add-int/2addr v4, v2

    aput p4, v3, v4

    .line 1410
    array-length v2, v0

    add-int/2addr v2, v1

    aput p5, v3, v2

    .line 1411
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;->mData:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1413
    .end local v3    # "tmp":[F
    :goto_1
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;->mCurveView:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    if-eqz v1, :cond_2

    .line 1414
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;->mData:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, [F

    invoke-virtual {v1, p1, v2}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->setData(I[F)V

    .line 1416
    :cond_2
    return-void
.end method

.method clearData()V
    .locals 1

    .line 1419
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;->mData:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->clear()V

    .line 1420
    return-void
.end method

.method configX()Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;
    .locals 3

    .line 1336
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;->mXLabel:Landroid/widget/TextView;

    const-string v1, "RSRP"

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1337
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

    invoke-direct {v0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;-><init>()V

    .line 1338
    .local v0, "xConfig":Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;
    const-wide/16 v1, -0x8c

    iput-wide v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->min:J

    .line 1339
    const-wide/16 v1, -0x1e

    iput-wide v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->max:J

    .line 1340
    const-wide/16 v1, 0xa

    iput-wide v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->step:J

    .line 1341
    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->configMin:Z

    .line 1342
    iput-boolean v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->configMax:Z

    .line 1343
    iput-boolean v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->configStep:Z

    .line 1344
    return-object v0
.end method

.method configY()Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;
    .locals 9

    .line 1348
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;->mYLabel:Landroid/widget/TextView;

    const-string v1, "SNR"

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1349
    const/4 v0, 0x5

    new-array v0, v0, [Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;

    .line 1350
    .local v0, "configs":[Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;

    invoke-direct {v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;-><init>()V

    const/4 v2, 0x0

    aput-object v1, v0, v2

    .line 1351
    aget-object v1, v0, v2

    const v3, -0xffff01

    iput v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->color:I

    .line 1352
    aget-object v1, v0, v2

    const/4 v3, 0x3

    iput v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->lineWidth:I

    .line 1353
    aget-object v1, v0, v2

    sget v4, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_CIRCLE:I

    iput v4, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->nodeType:I

    .line 1354
    aget-object v1, v0, v2

    const-string v4, "PCell"

    iput-object v4, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->name:Ljava/lang/String;

    .line 1355
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;

    invoke-direct {v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;-><init>()V

    const/4 v4, 0x1

    aput-object v1, v0, v4

    .line 1356
    aget-object v1, v0, v4

    const/high16 v5, -0x10000

    iput v5, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->color:I

    .line 1357
    aget-object v1, v0, v4

    iput v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->lineWidth:I

    .line 1358
    aget-object v1, v0, v4

    sget v5, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_CIRCLE:I

    iput v5, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->nodeType:I

    .line 1359
    aget-object v1, v0, v4

    const-string v5, "SCell"

    iput-object v5, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->name:Ljava/lang/String;

    .line 1360
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;

    invoke-direct {v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;-><init>()V

    const/4 v5, 0x2

    aput-object v1, v0, v5

    .line 1361
    aget-object v1, v0, v5

    const/16 v6, 0x2b

    const/16 v7, 0x65

    const/16 v8, 0xab

    invoke-static {v6, v7, v8}, Landroid/graphics/Color;->rgb(III)I

    move-result v6

    iput v6, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->color:I

    .line 1362
    aget-object v1, v0, v5

    iput v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->lineWidth:I

    .line 1363
    aget-object v1, v0, v5

    sget v6, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_RHOMBUS:I

    iput v6, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->nodeType:I

    .line 1364
    aget-object v1, v0, v5

    const-string v5, "Strength"

    iput-object v5, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->name:Ljava/lang/String;

    .line 1365
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;

    invoke-direct {v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;-><init>()V

    aput-object v1, v0, v3

    .line 1366
    aget-object v1, v0, v3

    const/16 v5, 0xcc

    const/16 v6, 0x99

    invoke-static {v5, v6, v2}, Landroid/graphics/Color;->rgb(III)I

    move-result v2

    iput v2, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->color:I

    .line 1367
    aget-object v1, v0, v3

    iput v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->lineWidth:I

    .line 1368
    aget-object v1, v0, v3

    sget v2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_SQUARE:I

    iput v2, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->nodeType:I

    .line 1369
    aget-object v1, v0, v3

    const-string v2, "MediumWeak"

    iput-object v2, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->name:Ljava/lang/String;

    .line 1370
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;

    invoke-direct {v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;-><init>()V

    const/4 v2, 0x4

    aput-object v1, v0, v2

    .line 1371
    aget-object v1, v0, v2

    const/16 v5, 0x98

    const/16 v6, 0xba

    invoke-static {v5, v5, v6}, Landroid/graphics/Color;->rgb(III)I

    move-result v5

    iput v5, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->color:I

    .line 1372
    aget-object v1, v0, v2

    iput v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->lineWidth:I

    .line 1373
    aget-object v1, v0, v2

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_TRIANGLE:I

    iput v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->nodeType:I

    .line 1374
    aget-object v1, v0, v2

    const-string v2, "Weak"

    iput-object v2, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->name:Ljava/lang/String;

    .line 1375
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;->mCurveView:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->setConfig([Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;)V

    .line 1376
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

    invoke-direct {v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;-><init>()V

    .line 1377
    .local v1, "yConfig":Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;
    const-wide/16 v2, -0x14

    iput-wide v2, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->min:J

    .line 1378
    const-wide/16 v2, 0x1e

    iput-wide v2, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->max:J

    .line 1379
    const-wide/16 v2, 0xa

    iput-wide v2, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->step:J

    .line 1380
    iput-boolean v4, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->configMin:Z

    .line 1381
    iput-boolean v4, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->configMax:Z

    .line 1382
    iput-boolean v4, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->configStep:Z

    .line 1383
    return-object v1
.end method

.method getView()Landroid/view/View;
    .locals 3

    .line 1320
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;->mView:Landroid/view/View;

    if-nez v0, :cond_0

    .line 1321
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;->mActivity:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getLayoutInflater()Landroid/view/LayoutInflater;

    move-result-object v0

    const v1, 0x7f080098

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;->mView:Landroid/view/View;

    .line 1323
    const v1, 0x7f06036f

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;->mXLabel:Landroid/widget/TextView;

    .line 1324
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;->mView:Landroid/view/View;

    const v1, 0x7f060370

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;->mYLabel:Landroid/widget/TextView;

    .line 1325
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;->mView:Landroid/view/View;

    const v1, 0x7f06036b

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;->mCurveView:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    .line 1327
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;->configX()Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

    move-result-object v0

    .line 1328
    .local v0, "xConfig":Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;->configY()Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

    move-result-object v1

    .line 1329
    .local v1, "yConfig":Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;->mCurveView:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-virtual {v2, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->setAxisConfig(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;)V

    .line 1330
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;->mCurveView:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->getRSRPSINRConfig()V

    .line 1332
    .end local v0    # "xConfig":Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;
    .end local v1    # "yConfig":Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;->mView:Landroid/view/View;

    return-object v0
.end method

.method removeView()V
    .locals 0

    .line 1389
    return-void
.end method
