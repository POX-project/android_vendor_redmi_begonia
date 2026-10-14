.class Lcom/mediatek/ygps/YgpsActivity$1;
.super Ljava/lang/Object;
.source "YgpsActivity.java"

# interfaces
.implements Landroid/content/ServiceConnection;


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

    .line 286
    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$1;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 1

    const-string p1, "YGPS/Mainview"

    const-string v0, "YGPS onServiceConnected"

    .line 288
    invoke-static {p1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 289
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$1;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    check-cast p2, Lcom/mediatek/ygps/YgpsService$LocalYgpsBinder;

    invoke-virtual {p2}, Lcom/mediatek/ygps/YgpsService$LocalYgpsBinder;->getServiceInstance()Lcom/mediatek/ygps/YgpsService;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/mediatek/ygps/YgpsActivity;->access$002(Lcom/mediatek/ygps/YgpsActivity;Lcom/mediatek/ygps/YgpsService;)Lcom/mediatek/ygps/YgpsService;

    .line 290
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$1;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1}, Lcom/mediatek/ygps/YgpsActivity;->access$000(Lcom/mediatek/ygps/YgpsActivity;)Lcom/mediatek/ygps/YgpsService;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 293
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$1;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1}, Lcom/mediatek/ygps/YgpsActivity;->access$000(Lcom/mediatek/ygps/YgpsActivity;)Lcom/mediatek/ygps/YgpsService;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mediatek/ygps/YgpsService;->isForeground()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 294
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$1;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0}, Lcom/mediatek/ygps/YgpsActivity;->access$000(Lcom/mediatek/ygps/YgpsActivity;)Lcom/mediatek/ygps/YgpsService;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mediatek/ygps/YgpsService;->dismissForeground()V

    :cond_0
    return-void

    .line 291
    :cond_1
    new-instance p0, Ljava/lang/RuntimeException;

    const-string p1, "fail to get bound YgpsService from connection"

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method public onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 1

    const-string p1, "YGPS/Mainview"

    const-string v0, "YGPS onServiceDisconnected"

    .line 299
    invoke-static {p1, v0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 300
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$1;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    const/4 p1, 0x0

    invoke-static {p0, p1}, Lcom/mediatek/ygps/YgpsActivity;->access$002(Lcom/mediatek/ygps/YgpsActivity;Lcom/mediatek/ygps/YgpsService;)Lcom/mediatek/ygps/YgpsService;

    return-void
.end method
