.class Lcom/mediatek/lbs/em2/ui/LbsNlp$GeolocationThread;
.super Ljava/lang/Thread;
.source "LbsNlp.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsNlp;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "GeolocationThread"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsNlp;)V
    .locals 0

    .line 363
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$GeolocationThread;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    return-void
.end method


# virtual methods
.method public getGeolocation()V
    .locals 0

    .line 384
    invoke-virtual {p0}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method public run()V
    .locals 9

    .line 365
    new-instance v0, Landroid/location/Geocoder;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$GeolocationThread;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-virtual {v1}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/location/Geocoder;-><init>(Landroid/content/Context;)V

    const/4 v6, 0x6

    const/4 v7, 0x0

    const/4 v8, 0x0

    :try_start_0
    const-string v1, "Query geoLocation"

    .line 368
    invoke-static {v1}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->log(Ljava/lang/Object;)V

    .line 369
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$GeolocationThread;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    .line 370
    invoke-static {v1}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->access$900(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Landroid/location/Location;

    move-result-object v1

    invoke-virtual {v1}, Landroid/location/Location;->getLatitude()D

    move-result-wide v1

    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$GeolocationThread;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-static {v3}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->access$900(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Landroid/location/Location;

    move-result-object v3

    invoke-virtual {v3}, Landroid/location/Location;->getLongitude()D

    move-result-wide v3

    const/4 v5, 0x5

    .line 369
    invoke-virtual/range {v0 .. v5}, Landroid/location/Geocoder;->getFromLocation(DDI)Ljava/util/List;

    move-result-object v0
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 372
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "geoLocation exception: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->log(Ljava/lang/Object;)V

    .line 373
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$GeolocationThread;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-static {v0, v6, v8, v8, v7}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->access$1200(Lcom/mediatek/lbs/em2/ui/LbsNlp;IIILjava/lang/Object;)V

    move-object v0, v7

    :goto_0
    if-eqz v0, :cond_0

    .line 375
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 376
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "geoLocation updated size: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->log(Ljava/lang/Object;)V

    .line 377
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$GeolocationThread;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-interface {v0, v8}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    invoke-static {p0, v6, v8, v8, v0}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->access$1200(Lcom/mediatek/lbs/em2/ui/LbsNlp;IIILjava/lang/Object;)V

    goto :goto_1

    :cond_0
    const-string v0, "geoLocation ret null address"

    .line 379
    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->log(Ljava/lang/Object;)V

    .line 380
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$GeolocationThread;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-static {p0, v6, v8, v8, v7}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->access$1200(Lcom/mediatek/lbs/em2/ui/LbsNlp;IIILjava/lang/Object;)V

    :goto_1
    return-void
.end method
