.class Lcom/mediatek/engineermode/bluetooth/BleScanService$1;
.super Landroid/content/BroadcastReceiver;
.source "BleScanService.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bluetooth/BleScanService;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bluetooth/BleScanService;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/bluetooth/BleScanService;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/bluetooth/BleScanService;

    .line 71
    iput-object p1, p0, Lcom/mediatek/engineermode/bluetooth/BleScanService$1;->this$0:Lcom/mediatek/engineermode/bluetooth/BleScanService;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 3
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "intent"    # Landroid/content/Intent;

    .line 75
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    const-string v1, "android.bluetooth.adapter.action.STATE_CHANGED"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 76
    const/4 v0, 0x0

    const-string v1, "android.bluetooth.adapter.extra.STATE"

    invoke-virtual {p2, v1, v0}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    .line 77
    .local v0, "state":I
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "state "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "BleScanService"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 78
    if-nez v0, :cond_0

    const/4 v1, -0x1

    invoke-static {v1}, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->setAlwaysScanning(I)V

    .line 80
    .end local v0    # "state":I
    :cond_0
    return-void
.end method
