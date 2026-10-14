.class Lcom/mediatek/ygps/YgpsActivity$13;
.super Landroid/location/GnssStatus$Callback;
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

    .line 1584
    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$13;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-direct {p0}, Landroid/location/GnssStatus$Callback;-><init>()V

    return-void
.end method


# virtual methods
.method public onFirstFix(I)V
    .locals 2

    .line 1610
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$13;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0}, Lcom/mediatek/ygps/YgpsActivity;->access$4000(Lcom/mediatek/ygps/YgpsActivity;)Landroid/os/Handler;

    move-result-object v0

    const/16 v1, 0x3f6

    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 1611
    sget-object v1, Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;->GNSS_STATUS_FIRST_FIX:Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

    invoke-virtual {v1}, Ljava/lang/Enum;->ordinal()I

    move-result v1

    iput v1, v0, Landroid/os/Message;->arg1:I

    .line 1612
    iput p1, v0, Landroid/os/Message;->arg2:I

    .line 1613
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$13;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0}, Lcom/mediatek/ygps/YgpsActivity;->access$4000(Lcom/mediatek/ygps/YgpsActivity;)Landroid/os/Handler;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method public onSatelliteStatusChanged(Landroid/location/GnssStatus;)V
    .locals 1

    .line 1603
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$13;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1}, Lcom/mediatek/ygps/YgpsActivity;->access$4000(Lcom/mediatek/ygps/YgpsActivity;)Landroid/os/Handler;

    move-result-object p1

    const/16 v0, 0x3f6

    invoke-virtual {p1, v0}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object p1

    .line 1604
    sget-object v0, Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;->GNSS_STATUS_CHANGE:Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

    invoke-virtual {v0}, Ljava/lang/Enum;->ordinal()I

    move-result v0

    iput v0, p1, Landroid/os/Message;->arg1:I

    .line 1605
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$13;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0}, Lcom/mediatek/ygps/YgpsActivity;->access$4000(Lcom/mediatek/ygps/YgpsActivity;)Landroid/os/Handler;

    move-result-object p0

    invoke-virtual {p0, p1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method public onStarted()V
    .locals 2

    .line 1587
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$13;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0}, Lcom/mediatek/ygps/YgpsActivity;->access$4000(Lcom/mediatek/ygps/YgpsActivity;)Landroid/os/Handler;

    move-result-object v0

    const/16 v1, 0x3f6

    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 1588
    sget-object v1, Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;->GNSS_STATUS_START:Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

    invoke-virtual {v1}, Ljava/lang/Enum;->ordinal()I

    move-result v1

    iput v1, v0, Landroid/os/Message;->arg1:I

    .line 1589
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$13;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0}, Lcom/mediatek/ygps/YgpsActivity;->access$4000(Lcom/mediatek/ygps/YgpsActivity;)Landroid/os/Handler;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method public onStopped()V
    .locals 2

    .line 1595
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$13;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0}, Lcom/mediatek/ygps/YgpsActivity;->access$4000(Lcom/mediatek/ygps/YgpsActivity;)Landroid/os/Handler;

    move-result-object v0

    const/16 v1, 0x3f6

    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 1596
    sget-object v1, Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;->GNSS_STATUS_STOP:Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

    invoke-virtual {v1}, Ljava/lang/Enum;->ordinal()I

    move-result v1

    iput v1, v0, Landroid/os/Message;->arg1:I

    .line 1597
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$13;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0}, Lcom/mediatek/ygps/YgpsActivity;->access$4000(Lcom/mediatek/ygps/YgpsActivity;)Landroid/os/Handler;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method
