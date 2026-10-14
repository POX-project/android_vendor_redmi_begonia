.class Lcom/mediatek/lbs/em2/ui/LbsGps$25;
.super Ljava/lang/Object;
.source "LbsGps.java"

# interfaces
.implements Landroid/location/LocationListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsGps;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V
    .locals 0

    .line 663
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$25;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onLocationChanged(Landroid/location/Location;)V
    .locals 10

    if-nez p1, :cond_0

    .line 667
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$25;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    const-string p1, "ERR: onLocationChanged get null"

    invoke-static {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3500(Lcom/mediatek/lbs/em2/ui/LbsGps;Ljava/lang/String;)V

    goto :goto_0

    .line 669
    :cond_0
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$25;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    const-string v1, "onLocationChanged"

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3500(Lcom/mediatek/lbs/em2/ui/LbsGps;Ljava/lang/String;)V

    .line 670
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$25;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3608(Lcom/mediatek/lbs/em2/ui/LbsGps;)I

    const/4 v0, 0x2

    new-array v0, v0, [F

    .line 673
    invoke-virtual {p1}, Landroid/location/Location;->getLatitude()D

    move-result-wide v1

    invoke-virtual {p1}, Landroid/location/Location;->getLongitude()D

    move-result-wide v3

    sget-wide v5, Lcom/mediatek/lbs/em2/ui/LbsGps;->mRefLat:D

    sget-wide v7, Lcom/mediatek/lbs/em2/ui/LbsGps;->mRefLng:D

    move-object v9, v0

    invoke-static/range {v1 .. v9}, Landroid/location/Location;->distanceBetween(DDDD[F)V

    .line 675
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$25;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    const/4 v2, 0x0

    aget v0, v0, v2

    invoke-static {v1, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3702(Lcom/mediatek/lbs/em2/ui/LbsGps;F)F

    .line 677
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$25;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3800(Lcom/mediatek/lbs/em2/ui/LbsGps;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 678
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$25;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    const-string v1, "onLocationChanged for TTFF"

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3500(Lcom/mediatek/lbs/em2/ui/LbsGps;Ljava/lang/String;)V

    .line 679
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$25;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3802(Lcom/mediatek/lbs/em2/ui/LbsGps;Z)Z

    .line 680
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$25;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$4000(Lcom/mediatek/lbs/em2/ui/LbsGps;)Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;->getTimer()I

    move-result v1

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3902(Lcom/mediatek/lbs/em2/ui/LbsGps;I)I

    .line 681
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$25;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$4102(Lcom/mediatek/lbs/em2/ui/LbsGps;Landroid/location/Location;)Landroid/location/Location;

    .line 682
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$25;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3700(Lcom/mediatek/lbs/em2/ui/LbsGps;)F

    move-result v1

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$4202(Lcom/mediatek/lbs/em2/ui/LbsGps;F)F

    .line 683
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$25;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$4300(Lcom/mediatek/lbs/em2/ui/LbsGps;)Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->gotFixNotify()V

    .line 685
    :cond_1
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$25;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$4400(Lcom/mediatek/lbs/em2/ui/LbsGps;Landroid/location/Location;)V

    :goto_0
    return-void
.end method

.method public onProviderDisabled(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public onProviderEnabled(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public onStatusChanged(Ljava/lang/String;ILandroid/os/Bundle;)V
    .locals 0

    return-void
.end method
