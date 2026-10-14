.class Lcom/mediatek/engineermode/wifi/WifiWatchService$1;
.super Landroid/content/BroadcastReceiver;
.source "WifiWatchService.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/wifi/WifiWatchService;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/wifi/WifiWatchService;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/wifi/WifiWatchService;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/wifi/WifiWatchService;

    .line 78
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WifiWatchService$1;->this$0:Lcom/mediatek/engineermode/wifi/WifiWatchService;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 3
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "intent"    # Landroid/content/Intent;

    .line 82
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    const-string v1, "android.net.wifi.WIFI_STATE_CHANGED"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 83
    const/4 v0, 0x0

    const-string v1, "wifi_state"

    invoke-virtual {p2, v1, v0}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    .line 84
    .local v0, "state":I
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "state"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "WifiWatchService"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 85
    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    const/4 v1, 0x3

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 87
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WifiWatchService$1;->this$0:Lcom/mediatek/engineermode/wifi/WifiWatchService;

    invoke-static {v1, p1}, Lcom/mediatek/engineermode/wifi/WifiWatchService;->access$000(Lcom/mediatek/engineermode/wifi/WifiWatchService;Landroid/content/Context;)V

    .line 88
    goto :goto_0

    .line 90
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WifiWatchService$1;->this$0:Lcom/mediatek/engineermode/wifi/WifiWatchService;

    invoke-static {v1, p1}, Lcom/mediatek/engineermode/wifi/WifiWatchService;->access$100(Lcom/mediatek/engineermode/wifi/WifiWatchService;Landroid/content/Context;)V

    .line 96
    .end local v0    # "state":I
    :cond_2
    :goto_0
    return-void
.end method
