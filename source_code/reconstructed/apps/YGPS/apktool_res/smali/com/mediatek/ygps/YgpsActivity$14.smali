.class Lcom/mediatek/ygps/YgpsActivity$14;
.super Ljava/lang/Object;
.source "YgpsActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


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

    .line 1667
    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 10

    .line 1672
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    .line 1673
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v1}, Lcom/mediatek/ygps/YgpsActivity;->access$1000(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;

    move-result-object v1

    const-string v2, "YGPS/Mainview"

    const/4 v3, 0x0

    const/4 v4, 0x1

    if-ne p1, v1, :cond_0

    .line 1674
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-virtual {p1, v4}, Landroid/app/TabActivity;->showDialog(I)V

    .line 1675
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1}, Lcom/mediatek/ygps/YgpsActivity;->access$800(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/TextView;

    move-result-object p1

    const-string v0, "1"

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1676
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1}, Lcom/mediatek/ygps/YgpsActivity;->access$900(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/TextView;

    move-result-object p1

    const-string v0, ""

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1677
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1}, Lcom/mediatek/ygps/YgpsActivity;->access$1000(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/Button;->refreshDrawableState()V

    .line 1678
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1}, Lcom/mediatek/ygps/YgpsActivity;->access$1000(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;

    move-result-object p1

    invoke-virtual {p1, v3}, Landroid/widget/Button;->setEnabled(Z)V

    const-string p1, "GPSTest Start button is pressed"

    .line 1679
    invoke-static {v2, p1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 1680
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1}, Lcom/mediatek/ygps/YgpsActivity;->access$4000(Lcom/mediatek/ygps/YgpsActivity;)Landroid/os/Handler;

    move-result-object p1

    const/16 v0, 0x3ea

    const-wide/16 v1, 0xc8

    invoke-virtual {p1, v0, v1, v2}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 1681
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0}, Lcom/mediatek/ygps/YgpsActivity;->access$4100(Lcom/mediatek/ygps/YgpsActivity;)V

    goto/16 :goto_0

    .line 1682
    :cond_0
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v1}, Lcom/mediatek/ygps/YgpsActivity;->access$1100(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;

    move-result-object v1

    if-ne p1, v1, :cond_2

    .line 1683
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1}, Lcom/mediatek/ygps/YgpsActivity;->access$1100(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;

    move-result-object p1

    invoke-virtual {p1, v3}, Landroid/widget/Button;->setEnabled(Z)V

    .line 1684
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1}, Lcom/mediatek/ygps/YgpsActivity;->access$1100(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/Button;->refreshDrawableState()V

    const-string p1, "GPSTest Stop button is pressed"

    .line 1685
    invoke-static {v2, p1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 1686
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1}, Lcom/mediatek/ygps/YgpsActivity;->access$1500(Lcom/mediatek/ygps/YgpsActivity;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 1687
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1, v4}, Lcom/mediatek/ygps/YgpsActivity;->access$1502(Lcom/mediatek/ygps/YgpsActivity;Z)Z

    .line 1688
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-virtual {p1, v3}, Landroid/app/TabActivity;->showDialog(I)V

    .line 1689
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0, v3}, Lcom/mediatek/ygps/YgpsActivity;->access$2002(Lcom/mediatek/ygps/YgpsActivity;Z)Z

    goto/16 :goto_0

    :cond_1
    const-string p0, "stop has been clicked."

    .line 1691
    invoke-static {v2, p0}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    goto/16 :goto_0

    .line 1693
    :cond_2
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v1}, Lcom/mediatek/ygps/YgpsActivity;->access$4200(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;

    move-result-object v1

    if-ne p1, v1, :cond_4

    .line 1694
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1}, Lcom/mediatek/ygps/YgpsActivity;->access$4300(Lcom/mediatek/ygps/YgpsActivity;)Z

    move-result p1

    if-eqz p1, :cond_3

    return-void

    .line 1697
    :cond_3
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1, v3}, Lcom/mediatek/ygps/YgpsActivity;->access$4400(Lcom/mediatek/ygps/YgpsActivity;Z)V

    const-string p1, "Hot Start button is pressed"

    .line 1698
    invoke-static {v2, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const-string p1, "rti"

    .line 1699
    invoke-virtual {v0, p1, v4}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 1700
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0, v0}, Lcom/mediatek/ygps/YgpsActivity;->access$4500(Lcom/mediatek/ygps/YgpsActivity;Landroid/os/Bundle;)V

    goto/16 :goto_0

    .line 1701
    :cond_4
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v1}, Lcom/mediatek/ygps/YgpsActivity;->access$4600(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;

    move-result-object v1

    const-string v5, "ephemeris"

    if-ne p1, v1, :cond_6

    .line 1702
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1}, Lcom/mediatek/ygps/YgpsActivity;->access$4300(Lcom/mediatek/ygps/YgpsActivity;)Z

    move-result p1

    if-eqz p1, :cond_5

    return-void

    .line 1705
    :cond_5
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1, v3}, Lcom/mediatek/ygps/YgpsActivity;->access$4400(Lcom/mediatek/ygps/YgpsActivity;Z)V

    const-string p1, "Warm Start button is pressed"

    .line 1706
    invoke-static {v2, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1707
    invoke-virtual {v0, v5, v4}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 1708
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0, v0}, Lcom/mediatek/ygps/YgpsActivity;->access$4500(Lcom/mediatek/ygps/YgpsActivity;Landroid/os/Bundle;)V

    goto/16 :goto_0

    .line 1709
    :cond_6
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v1}, Lcom/mediatek/ygps/YgpsActivity;->access$4700(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;

    move-result-object v1

    const-string v6, "utc"

    const-string v7, "iono"

    const-string v8, "time"

    const-string v9, "position"

    if-ne p1, v1, :cond_8

    .line 1710
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1}, Lcom/mediatek/ygps/YgpsActivity;->access$4300(Lcom/mediatek/ygps/YgpsActivity;)Z

    move-result p1

    if-eqz p1, :cond_7

    return-void

    .line 1713
    :cond_7
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1, v3}, Lcom/mediatek/ygps/YgpsActivity;->access$4400(Lcom/mediatek/ygps/YgpsActivity;Z)V

    const-string p1, "Cold Start button is pressed"

    .line 1714
    invoke-static {v2, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1715
    invoke-virtual {v0, v5, v4}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 1716
    invoke-virtual {v0, v9, v4}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 1717
    invoke-virtual {v0, v8, v4}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 1718
    invoke-virtual {v0, v7, v4}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 1719
    invoke-virtual {v0, v6, v4}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    const-string p1, "health"

    .line 1720
    invoke-virtual {v0, p1, v4}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 1721
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0, v0}, Lcom/mediatek/ygps/YgpsActivity;->access$4500(Lcom/mediatek/ygps/YgpsActivity;Landroid/os/Bundle;)V

    goto/16 :goto_0

    .line 1722
    :cond_8
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v1}, Lcom/mediatek/ygps/YgpsActivity;->access$4800(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;

    move-result-object v1

    if-ne p1, v1, :cond_a

    .line 1723
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1}, Lcom/mediatek/ygps/YgpsActivity;->access$4300(Lcom/mediatek/ygps/YgpsActivity;)Z

    move-result p1

    if-eqz p1, :cond_9

    return-void

    .line 1726
    :cond_9
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1, v3}, Lcom/mediatek/ygps/YgpsActivity;->access$4400(Lcom/mediatek/ygps/YgpsActivity;Z)V

    const-string p1, "Full Start button is pressed"

    .line 1727
    invoke-static {v2, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const-string p1, "all"

    .line 1728
    invoke-virtual {v0, p1, v4}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 1729
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0, v0}, Lcom/mediatek/ygps/YgpsActivity;->access$4500(Lcom/mediatek/ygps/YgpsActivity;Landroid/os/Bundle;)V

    goto/16 :goto_0

    .line 1730
    :cond_a
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v1}, Lcom/mediatek/ygps/YgpsActivity;->access$4900(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;

    move-result-object v1

    if-ne p1, v1, :cond_c

    .line 1731
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1}, Lcom/mediatek/ygps/YgpsActivity;->access$4300(Lcom/mediatek/ygps/YgpsActivity;)Z

    move-result p1

    if-eqz p1, :cond_b

    return-void

    .line 1734
    :cond_b
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1, v3}, Lcom/mediatek/ygps/YgpsActivity;->access$4400(Lcom/mediatek/ygps/YgpsActivity;Z)V

    const-string p1, "Restart button is pressed"

    .line 1735
    invoke-static {v2, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1736
    invoke-virtual {v0, v5, v4}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    const-string p1, "almanac"

    .line 1737
    invoke-virtual {v0, p1, v4}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 1738
    invoke-virtual {v0, v9, v4}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 1739
    invoke-virtual {v0, v8, v4}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 1740
    invoke-virtual {v0, v7, v4}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 1741
    invoke-virtual {v0, v6, v4}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 1742
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0, v0}, Lcom/mediatek/ygps/YgpsActivity;->access$4500(Lcom/mediatek/ygps/YgpsActivity;Landroid/os/Bundle;)V

    goto :goto_0

    .line 1743
    :cond_c
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0}, Lcom/mediatek/ygps/YgpsActivity;->access$5000(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;

    move-result-object v0

    if-ne p1, v0, :cond_d

    const-string p1, "NMEA Start button is pressed"

    .line 1744
    invoke-static {v2, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1745
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1, v4}, Lcom/mediatek/ygps/YgpsActivity;->access$2402(Lcom/mediatek/ygps/YgpsActivity;Z)Z

    .line 1746
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1}, Lcom/mediatek/ygps/YgpsActivity;->access$5000(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;

    move-result-object p1

    invoke-virtual {p1, v3}, Landroid/widget/Button;->setEnabled(Z)V

    .line 1747
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0}, Lcom/mediatek/ygps/YgpsActivity;->access$5100(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;

    move-result-object p0

    invoke-virtual {p0, v4}, Landroid/widget/Button;->setEnabled(Z)V

    goto :goto_0

    .line 1748
    :cond_d
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0}, Lcom/mediatek/ygps/YgpsActivity;->access$5100(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;

    move-result-object v0

    if-ne p1, v0, :cond_e

    const-string p1, "NMEA Stop button is pressed"

    .line 1749
    invoke-static {v2, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1750
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1, v3}, Lcom/mediatek/ygps/YgpsActivity;->access$2402(Lcom/mediatek/ygps/YgpsActivity;Z)Z

    .line 1752
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1}, Lcom/mediatek/ygps/YgpsActivity;->access$5100(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;

    move-result-object p1

    invoke-virtual {p1, v3}, Landroid/widget/Button;->setEnabled(Z)V

    .line 1753
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1}, Lcom/mediatek/ygps/YgpsActivity;->access$5000(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;

    move-result-object p1

    invoke-virtual {p1, v4}, Landroid/widget/Button;->setEnabled(Z)V

    .line 1754
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0}, Lcom/mediatek/ygps/YgpsActivity;->access$2500(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/TextView;

    move-result-object p0

    const p1, 0x7f08000c

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(I)V

    goto :goto_0

    .line 1756
    :cond_e
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0}, Lcom/mediatek/ygps/YgpsActivity;->access$5200(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;

    move-result-object v0

    if-ne p1, v0, :cond_f

    const-string p1, "mBtnGPSJamming Button is pressed"

    .line 1757
    invoke-static {v2, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1758
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$14;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0}, Lcom/mediatek/ygps/YgpsActivity;->access$5300(Lcom/mediatek/ygps/YgpsActivity;)V

    :cond_f
    :goto_0
    return-void
.end method
