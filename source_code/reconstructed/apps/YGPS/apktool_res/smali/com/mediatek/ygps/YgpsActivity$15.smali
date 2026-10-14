.class Lcom/mediatek/ygps/YgpsActivity$15;
.super Landroid/os/Handler;
.source "YgpsActivity.java"


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

    .line 1882
    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$15;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 7

    .line 1884
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x0

    const-string v2, "YGPS/Mainview"

    packed-switch v0, :pswitch_data_0

    const/4 v3, 0x1

    packed-switch v0, :pswitch_data_1

    goto/16 :goto_2

    .line 1939
    :pswitch_0
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$15;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0, p1}, Lcom/mediatek/ygps/YgpsActivity;->access$5800(Lcom/mediatek/ygps/YgpsActivity;Landroid/os/Message;)V

    goto/16 :goto_2

    .line 1936
    :pswitch_1
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$15;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0}, Lcom/mediatek/ygps/YgpsActivity;->access$1800(Lcom/mediatek/ygps/YgpsActivity;)Landroid/location/LocationManager;

    move-result-object v0

    invoke-static {}, Landroid/os/Process;->myUserHandle()Landroid/os/UserHandle;

    move-result-object v1

    invoke-virtual {v0, v3, v1}, Landroid/location/LocationManager;->setLocationEnabledForUser(ZLandroid/os/UserHandle;)V

    goto/16 :goto_2

    .line 1920
    :pswitch_2
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$15;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0}, Lcom/mediatek/ygps/YgpsActivity;->access$1800(Lcom/mediatek/ygps/YgpsActivity;)Landroid/location/LocationManager;

    move-result-object v0

    invoke-virtual {v0}, Landroid/location/LocationManager;->getGnssHardwareModelName()Ljava/lang/String;

    move-result-object v0

    .line 1921
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "hwMode:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const-string v3, ","

    .line 1922
    invoke-virtual {v0, v3}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 1924
    array-length v3, v0

    :goto_0
    if-ge v1, v3, :cond_1

    aget-object v4, v0, v1

    if-eqz v4, :cond_0

    const-string v5, "MNL_VER_"

    .line 1925
    invoke-virtual {v4, v5}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_0

    const/16 v5, 0x8

    .line 1926
    invoke-virtual {v4, v5}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v4

    .line 1927
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "mnlVer:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v2, v5}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1928
    iget-object v5, p0, Lcom/mediatek/ygps/YgpsActivity$15;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    const v6, 0x7f05006d

    invoke-virtual {v5, v6}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/TextView;

    .line 1929
    invoke-virtual {v5, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 1933
    :cond_1
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$15;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0}, Lcom/mediatek/ygps/YgpsActivity;->access$5700(Lcom/mediatek/ygps/YgpsActivity;)V

    goto/16 :goto_2

    :pswitch_3
    const-string v0, "handleEnableButton-msg"

    .line 1910
    invoke-static {v2, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1911
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$15;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0, v3}, Lcom/mediatek/ygps/YgpsActivity;->access$4400(Lcom/mediatek/ygps/YgpsActivity;Z)V

    goto/16 :goto_2

    :pswitch_4
    const-string v0, "restart update-msg"

    .line 1915
    invoke-static {v2, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1916
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$15;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-virtual {p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object v1

    invoke-static {v0, p0, v1}, Lcom/mediatek/ygps/YgpsActivity;->access$5600(Lcom/mediatek/ygps/YgpsActivity;Landroid/os/Handler;Landroid/os/Bundle;)V

    goto :goto_2

    .line 1902
    :pswitch_5
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$15;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0}, Lcom/mediatek/ygps/YgpsActivity;->access$2808(Lcom/mediatek/ygps/YgpsActivity;)I

    const/4 v0, 0x3

    .line 1903
    iget-object v2, p0, Lcom/mediatek/ygps/YgpsActivity$15;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v2}, Lcom/mediatek/ygps/YgpsActivity;->access$2800(Lcom/mediatek/ygps/YgpsActivity;)I

    move-result v2

    if-ge v0, v2, :cond_2

    .line 1904
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$15;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0, v1}, Lcom/mediatek/ygps/YgpsActivity;->access$2802(Lcom/mediatek/ygps/YgpsActivity;I)I

    const/16 v0, 0x3ea

    .line 1905
    invoke-virtual {p0, v0}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    :cond_2
    const/16 v0, 0x3eb

    const-wide/16 v1, 0x3e8

    .line 1907
    invoke-virtual {p0, v0, v1, v2}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    goto :goto_2

    :pswitch_6
    const-string v0, "handleClear-msg"

    .line 1898
    invoke-static {v2, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1899
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$15;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0}, Lcom/mediatek/ygps/YgpsActivity;->access$5500(Lcom/mediatek/ygps/YgpsActivity;)V

    goto :goto_2

    .line 1895
    :pswitch_7
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$15;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    iget-object v1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    iget v2, p1, Landroid/os/Message;->arg1:I

    invoke-static {v0, v1, v2}, Lcom/mediatek/ygps/YgpsActivity;->access$5400(Lcom/mediatek/ygps/YgpsActivity;Ljava/lang/String;I)V

    goto :goto_2

    .line 1886
    :pswitch_8
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$15;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0}, Lcom/mediatek/ygps/YgpsActivity;->access$3000(Lcom/mediatek/ygps/YgpsActivity;)Z

    move-result v0

    if-nez v0, :cond_4

    .line 1887
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$15;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    const/16 v1, 0x1f4

    invoke-static {v0, v1}, Lcom/mediatek/ygps/YgpsActivity;->access$3912(Lcom/mediatek/ygps/YgpsActivity;I)I

    .line 1888
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$15;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    const v1, 0x7f050078

    invoke-virtual {v0, v1}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    .line 1889
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity$15;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v1}, Lcom/mediatek/ygps/YgpsActivity;->access$3900(Lcom/mediatek/ygps/YgpsActivity;)I

    move-result v1

    const/16 v2, 0x3e8

    rem-int/2addr v1, v2

    if-nez v1, :cond_3

    const-string v1, "Counting"

    goto :goto_1

    :cond_3
    const-string v1, ""

    :goto_1
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const-wide/16 v0, 0x1f4

    .line 1890
    invoke-virtual {p0, v2, v0, v1}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 1944
    :cond_4
    :goto_2
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x3e8
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x3f2
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
