.class Lcom/mediatek/engineermode/wifi/WiFiTestActivity$1;
.super Landroid/content/BroadcastReceiver;
.source "WiFiTestActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/wifi/WiFiTestActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/wifi/WiFiTestActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/wifi/WiFiTestActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/wifi/WiFiTestActivity;

    .line 110
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTestActivity;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 3
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "intent"    # Landroid/content/Intent;

    .line 114
    const-string v0, "wifi_state"

    const/4 v1, 0x4

    invoke-virtual {p2, v0, v1}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    .line 116
    .local v0, "currentState":I
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Wifi state:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "WifiTestActivity"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 117
    invoke-static {}, Lcom/mediatek/engineermode/wifi/EMWifi;->isInTestMode()Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x3

    if-eq v0, v1, :cond_0

    const/4 v2, 0x2

    if-eq v0, v2, :cond_0

    .line 120
    invoke-static {}, Lcom/mediatek/engineermode/wifi/EMWifi;->stopTestMode()V

    .line 121
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTestActivity;

    invoke-virtual {v2, v1}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->showDialog(I)V

    .line 123
    :cond_0
    return-void
.end method
