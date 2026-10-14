.class Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$22;
.super Ljava/lang/Object;
.source "MDMComponentFT.java"

# interfaces
.implements Landroid/location/LocationListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    .line 653
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$22;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onLocationChanged(Landroid/location/Location;)V
    .locals 7
    .param p1, "mLocation"    # Landroid/location/Location;

    .line 657
    invoke-virtual {p1}, Landroid/location/Location;->getLatitude()D

    move-result-wide v0

    .line 658
    .local v0, "latitude":D
    invoke-virtual {p1}, Landroid/location/Location;->getLongitude()D

    move-result-wide v2

    .line 659
    .local v2, "longitude":D
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$22;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v0, v1}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v6, ":"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2, v3}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    iput-object v5, v4, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->location:Ljava/lang/String;

    .line 660
    return-void
.end method

.method public onProviderDisabled(Ljava/lang/String;)V
    .locals 2
    .param p1, "provider"    # Ljava/lang/String;

    .line 663
    const-string v0, "EmInfo/MDMComponent"

    const-string v1, "Enter onProviderDisabled function"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 664
    return-void
.end method

.method public onProviderEnabled(Ljava/lang/String;)V
    .locals 2
    .param p1, "provider"    # Ljava/lang/String;

    .line 668
    const-string v0, "EmInfo/MDMComponent"

    const-string v1, "Enter onProviderEnabled function"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 669
    return-void
.end method

.method public onStatusChanged(Ljava/lang/String;ILandroid/os/Bundle;)V
    .locals 2
    .param p1, "provider"    # Ljava/lang/String;
    .param p2, "status"    # I
    .param p3, "extras"    # Landroid/os/Bundle;

    .line 673
    const-string v0, "EmInfo/MDMComponent"

    const-string v1, "Enter onStatusChanged function"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 674
    return-void
.end method
