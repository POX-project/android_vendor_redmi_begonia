.class Lcom/mediatek/ygps/YgpsActivity$12;
.super Ljava/lang/Object;
.source "YgpsActivity.java"

# interfaces
.implements Landroid/location/LocationListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/ygps/YgpsActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/ygps/YgpsActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/ygps/YgpsActivity;)V
    .locals 0

    .line 1502
    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onLocationChanged(Landroid/location/Location;)V
    .locals 4

    const-string v0, "YGPS/Mainview"

    const-string v1, "Enter onLocationChanged function"

    .line 1506
    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 1507
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v1}, Lcom/mediatek/ygps/YgpsActivity;->access$3000(Lcom/mediatek/ygps/YgpsActivity;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "mFirstFix is false, onLocationChanged"

    .line 1508
    invoke-static {v0, v1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 1510
    :cond_0
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0}, Lcom/mediatek/ygps/YgpsActivity;->access$3100(Lcom/mediatek/ygps/YgpsActivity;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1511
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0, p1}, Lcom/mediatek/ygps/YgpsActivity;->access$3200(Lcom/mediatek/ygps/YgpsActivity;Landroid/location/Location;)V

    .line 1513
    :cond_1
    new-instance v0, Ljava/util/Date;

    invoke-virtual {p1}, Landroid/location/Location;->getTime()J

    move-result-wide v1

    invoke-direct {v0, v1, v2}, Ljava/util/Date;-><init>(J)V

    .line 1514
    new-instance v1, Ljava/text/SimpleDateFormat;

    const-string v2, "z yyyy/MM/dd"

    invoke-direct {v1, v2}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    .line 1515
    invoke-virtual {v1, v0}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v1

    .line 1517
    new-instance v2, Ljava/text/SimpleDateFormat;

    const-string v3, "HH:mm:ss"

    invoke-direct {v2, v3}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    .line 1518
    invoke-virtual {v2, v0}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v0

    .line 1520
    iget-object v2, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    const v3, 0x7f050077

    invoke-virtual {v2, v3}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    if-eqz v2, :cond_2

    .line 1522
    invoke-virtual {v2, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1525
    :cond_2
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    const v2, 0x7f050062

    invoke-virtual {v0, v2}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    .line 1526
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1528
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0}, Lcom/mediatek/ygps/YgpsActivity;->access$3300(Lcom/mediatek/ygps/YgpsActivity;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 1529
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0, p1}, Lcom/mediatek/ygps/YgpsActivity;->access$3400(Lcom/mediatek/ygps/YgpsActivity;Landroid/location/Location;)V

    .line 1531
    :cond_3
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    const v1, 0x7f050067

    invoke-virtual {v0, v1}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    .line 1532
    invoke-virtual {p1}, Landroid/location/Location;->getLatitude()D

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1533
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    const v1, 0x7f050068

    invoke-virtual {v0, v1}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    .line 1534
    invoke-virtual {p1}, Landroid/location/Location;->getLongitude()D

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1535
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    const v1, 0x7f05005c

    invoke-virtual {v0, v1}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    .line 1536
    invoke-virtual {p1}, Landroid/location/Location;->getAltitude()D

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1537
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    const v1, 0x7f05005b

    invoke-virtual {v0, v1}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    .line 1538
    invoke-virtual {p1}, Landroid/location/Location;->getAccuracy()F

    move-result v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(F)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1539
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    const v1, 0x7f05005d

    invoke-virtual {v0, v1}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    .line 1540
    invoke-virtual {p1}, Landroid/location/Location;->getBearing()F

    move-result v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(F)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1541
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    const v1, 0x7f050075

    invoke-virtual {v0, v1}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    .line 1542
    invoke-virtual {p1}, Landroid/location/Location;->getSpeed()F

    move-result v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(F)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1543
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0}, Lcom/mediatek/ygps/YgpsActivity;->access$3500(Lcom/mediatek/ygps/YgpsActivity;)Landroid/location/Location;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 1544
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    const v1, 0x7f050063

    invoke-virtual {v0, v1}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    .line 1545
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    .line 1546
    invoke-static {v1}, Lcom/mediatek/ygps/YgpsActivity;->access$3500(Lcom/mediatek/ygps/YgpsActivity;)Landroid/location/Location;

    move-result-object v1

    invoke-virtual {p1, v1}, Landroid/location/Location;->distanceTo(Landroid/location/Location;)F

    move-result v1

    .line 1545
    invoke-static {v1}, Ljava/lang/String;->valueOf(F)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1550
    :cond_4
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    const v1, 0x7f050073

    invoke-virtual {v0, v1}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    .line 1551
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v1}, Lcom/mediatek/ygps/YgpsActivity;->access$3600(Lcom/mediatek/ygps/YgpsActivity;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1552
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0}, Lcom/mediatek/ygps/YgpsActivity;->access$3800(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/TextView;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v1}, Lcom/mediatek/ygps/YgpsActivity;->access$3700(Lcom/mediatek/ygps/YgpsActivity;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1554
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0, p1}, Lcom/mediatek/ygps/YgpsActivity;->access$3502(Lcom/mediatek/ygps/YgpsActivity;Landroid/location/Location;)Landroid/location/Location;

    return-void
.end method

.method public onProviderDisabled(Ljava/lang/String;)V
    .locals 3

    const-string p1, "YGPS/Mainview"

    const-string v0, "Enter onProviderDisabled function"

    .line 1560
    invoke-static {p1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1561
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "gps"

    const/4 v2, 0x0

    aput-object v1, v0, v2

    const v1, 0x7f080038

    invoke-virtual {p1, v1, v0}, Landroid/app/TabActivity;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    new-array v1, v2, [Ljava/lang/Object;

    invoke-static {v0, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mediatek/ygps/YgpsActivity;->access$3602(Lcom/mediatek/ygps/YgpsActivity;Ljava/lang/String;)Ljava/lang/String;

    .line 1563
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    const v0, 0x7f050073

    invoke-virtual {p1, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    .line 1564
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0}, Lcom/mediatek/ygps/YgpsActivity;->access$3600(Lcom/mediatek/ygps/YgpsActivity;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public onProviderEnabled(Ljava/lang/String;)V
    .locals 3

    const-string p1, "YGPS/Mainview"

    const-string v0, "Enter onProviderEnabled function"

    .line 1569
    invoke-static {p1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1570
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "gps"

    const/4 v2, 0x0

    aput-object v1, v0, v2

    const v1, 0x7f080039

    invoke-virtual {p1, v1, v0}, Landroid/app/TabActivity;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    new-array v1, v2, [Ljava/lang/Object;

    invoke-static {v0, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mediatek/ygps/YgpsActivity;->access$3602(Lcom/mediatek/ygps/YgpsActivity;Ljava/lang/String;)Ljava/lang/String;

    .line 1572
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    const v0, 0x7f050073

    invoke-virtual {p1, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    .line 1573
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0}, Lcom/mediatek/ygps/YgpsActivity;->access$3600(Lcom/mediatek/ygps/YgpsActivity;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1574
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$12;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0, v2}, Lcom/mediatek/ygps/YgpsActivity;->access$3902(Lcom/mediatek/ygps/YgpsActivity;I)I

    return-void
.end method

.method public onStatusChanged(Ljava/lang/String;ILandroid/os/Bundle;)V
    .locals 0

    const-string p0, "YGPS/Mainview"

    const-string p1, "Enter onStatusChanged function"

    .line 1579
    invoke-static {p0, p1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method
