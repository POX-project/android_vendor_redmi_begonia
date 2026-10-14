.class Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;
.super Ljava/lang/Thread;
.source "YgpsActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/ygps/YgpsActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "AutoTestThread"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/ygps/YgpsActivity;


# direct methods
.method private constructor <init>(Lcom/mediatek/ygps/YgpsActivity;)V
    .locals 0

    .line 865
    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/ygps/YgpsActivity;Lcom/mediatek/ygps/YgpsActivity$1;)V
    .locals 0

    .line 865
    invoke-direct {p0, p1}, Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;-><init>(Lcom/mediatek/ygps/YgpsActivity;)V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 868
    invoke-super {p0}, Ljava/lang/Thread;->run()V

    .line 869
    invoke-static {}, Landroid/os/Looper;->prepare()V

    .line 870
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mediatek/ygps/YgpsActivity;->access$1400(Lcom/mediatek/ygps/YgpsActivity;Z)V

    .line 871
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0}, Lcom/mediatek/ygps/YgpsActivity;->access$1800(Lcom/mediatek/ygps/YgpsActivity;)Landroid/location/LocationManager;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v1}, Lcom/mediatek/ygps/YgpsActivity;->access$1700(Lcom/mediatek/ygps/YgpsActivity;)Landroid/location/LocationListener;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->removeUpdates(Landroid/location/LocationListener;)V

    .line 873
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    const-wide/16 v1, 0x7d0

    invoke-static {v0, v1, v2}, Lcom/mediatek/ygps/YgpsActivity;->access$1900(Lcom/mediatek/ygps/YgpsActivity;J)V

    .line 874
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mediatek/ygps/YgpsActivity;->access$2002(Lcom/mediatek/ygps/YgpsActivity;Z)Z

    const-string v0, "YGPS/Mainview"

    const-string v2, "mIsTestRunning: true"

    .line 875
    invoke-static {v0, v2}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 876
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0}, Lcom/mediatek/ygps/YgpsActivity;->access$2100(Lcom/mediatek/ygps/YgpsActivity;)V

    .line 877
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0}, Lcom/mediatek/ygps/YgpsActivity;->access$2200(Lcom/mediatek/ygps/YgpsActivity;)V

    .line 878
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    new-instance v2, Lcom/mediatek/ygps/YgpsActivity$AutoTestThread$1;

    invoke-direct {v2, p0}, Lcom/mediatek/ygps/YgpsActivity$AutoTestThread$1;-><init>(Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;)V

    invoke-virtual {v0, v2}, Landroid/app/TabActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 883
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$AutoTestThread;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0, v1}, Lcom/mediatek/ygps/YgpsActivity;->access$1400(Lcom/mediatek/ygps/YgpsActivity;Z)V

    .line 884
    invoke-virtual {p0}, Ljava/lang/Thread;->interrupt()V

    return-void
.end method
