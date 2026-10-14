.class Lcom/mediatek/lbs/em2/ui/LbsBatch$8;
.super Landroid/os/Handler;
.source "LbsBatch.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsBatch;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsBatch;)V
    .locals 0

    .line 264
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 10

    .line 266
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    const-string p0, "WARNING: unknown handle event recv!!"

    .line 306
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsBatch;->log(Ljava/lang/Object;)V

    goto/16 :goto_1

    .line 268
    :cond_0
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-eqz p1, :cond_7

    const/4 v0, 0x0

    .line 270
    check-cast p1, Ljava/util/List;

    .line 271
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    iget v3, v2, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mLocationCallbackCount:I

    add-int/2addr v3, v1

    iput v3, v2, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mLocationCallbackCount:I

    const/4 v2, 0x0

    move v3, v2

    .line 272
    :goto_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v4

    if-ge v3, v4, :cond_5

    .line 273
    invoke-interface {p1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/location/Location;

    .line 274
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    .line 275
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "i="

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, " ["

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Landroid/location/Location;->getProvider()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "]  "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 276
    invoke-virtual {v0}, Landroid/location/Location;->getTime()J

    move-result-wide v6

    invoke-static {v6, v7}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->getTimeString(J)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v7, 0x2

    new-array v7, v7, [Ljava/lang/Object;

    .line 278
    invoke-virtual {v0}, Landroid/location/Location;->getLatitude()D

    move-result-wide v8

    invoke-static {v8, v9}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v8

    aput-object v8, v7, v2

    invoke-virtual {v0}, Landroid/location/Location;->getLongitude()D

    move-result-wide v8

    invoke-static {v8, v9}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v8

    aput-object v8, v7, v1

    const-string v8, "lat=%.06f, lng=%.06f "

    .line 277
    invoke-static {v8, v7}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 275
    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 279
    invoke-virtual {v0}, Landroid/location/Location;->hasAccuracy()Z

    move-result v5

    if-eqz v5, :cond_1

    .line 280
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "acc="

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Landroid/location/Location;->getAccuracy()F

    move-result v7

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 282
    :cond_1
    invoke-virtual {v0}, Landroid/location/Location;->hasAltitude()Z

    move-result v5

    if-eqz v5, :cond_2

    .line 283
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "atl="

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v7, v1, [Ljava/lang/Object;

    invoke-virtual {v0}, Landroid/location/Location;->getAltitude()D

    move-result-wide v8

    invoke-static {v8, v9}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v8

    aput-object v8, v7, v2

    const-string v8, "%.06f "

    invoke-static {v8, v7}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 285
    :cond_2
    invoke-virtual {v0}, Landroid/location/Location;->hasSpeed()Z

    move-result v5

    if-eqz v5, :cond_3

    .line 286
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "speed="

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Landroid/location/Location;->getSpeed()F

    move-result v7

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 288
    :cond_3
    invoke-virtual {v0}, Landroid/location/Location;->hasBearing()Z

    move-result v5

    if-eqz v5, :cond_4

    .line 289
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "bearing="

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Landroid/location/Location;->getBearing()F

    move-result v7

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_4
    const-string v5, "\n"

    .line 291
    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 292
    iget-object v5, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    iget-object v5, v5, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mLocationInfo:Lcom/mediatek/lbs/em2/ui/StringList;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Lcom/mediatek/lbs/em2/ui/StringList;->add(Ljava/lang/String;)V

    .line 293
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "location info updated index: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/mediatek/lbs/em2/ui/LbsBatch;->log(Ljava/lang/Object;)V

    add-int/lit8 v3, v3, 0x1

    goto/16 :goto_0

    :cond_5
    if-eqz v0, :cond_6

    .line 296
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    invoke-virtual {v1, v0}, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mapReportLocation(Landroid/location/Location;)V

    .line 298
    :cond_6
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Callback Count="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    iget v1, v1, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mLocationCallbackCount:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", Location size="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 299
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 300
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    iget-object v0, v0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mTextViewLocationCount:Landroid/widget/TextView;

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 301
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsBatch;->log(Ljava/lang/Object;)V

    .line 302
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mTextViewLocationCallback:Landroid/widget/TextView;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mLocationInfo:Lcom/mediatek/lbs/em2/ui/StringList;

    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/StringList;->get()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_7
    :goto_1
    return-void
.end method
