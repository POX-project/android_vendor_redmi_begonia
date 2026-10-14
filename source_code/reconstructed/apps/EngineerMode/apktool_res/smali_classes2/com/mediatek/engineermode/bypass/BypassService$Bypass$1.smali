.class Lcom/mediatek/engineermode/bypass/BypassService$Bypass$1;
.super Landroid/content/BroadcastReceiver;
.source "BypassService.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bypass/BypassService$Bypass;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/mediatek/engineermode/bypass/BypassService$Bypass;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/bypass/BypassService$Bypass;)V
    .locals 0
    .param p1, "this$1"    # Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    .line 91
    iput-object p1, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass$1;->this$1:Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 5
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "intent"    # Landroid/content/Intent;

    .line 95
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onReceive="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BypassService"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 97
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_a

    .line 98
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    const-string v2, "com.via.bypass.action.setfunction"

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v2, 0x0

    if-eqz v0, :cond_2

    .line 99
    nop

    .line 100
    const-string v0, "com.via.bypass.enable_bypass"

    invoke-virtual {p2, v0, v2}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    .line 101
    .local v0, "enablebypass":Ljava/lang/Boolean;
    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v3

    if-eqz v3, :cond_1

    .line 102
    iget-object v3, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass$1;->this$1:Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    const-string v4, "usb"

    invoke-virtual {p1, v4}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/hardware/usb/UsbManager;

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->access$002(Lcom/mediatek/engineermode/bypass/BypassService$Bypass;Landroid/hardware/usb/UsbManager;)Landroid/hardware/usb/UsbManager;

    .line 103
    iget-object v3, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass$1;->this$1:Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    invoke-static {v3}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->access$000(Lcom/mediatek/engineermode/bypass/BypassService$Bypass;)Landroid/hardware/usb/UsbManager;

    move-result-object v3

    if-nez v3, :cond_0

    .line 104
    const-string v2, "Cannot get mUsbManager."

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 106
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass$1;->this$1:Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    invoke-static {v1}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->access$000(Lcom/mediatek/engineermode/bypass/BypassService$Bypass;)Landroid/hardware/usb/UsbManager;

    move-result-object v1

    const-string v3, "via_bypass"

    invoke-virtual {v1, v3, v2}, Landroid/hardware/usb/UsbManager;->setCurrentFunction(Ljava/lang/String;Z)V

    goto :goto_0

    .line 108
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass$1;->this$1:Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    invoke-static {v1}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->access$100(Lcom/mediatek/engineermode/bypass/BypassService$Bypass;)V

    .line 110
    .end local v0    # "enablebypass":Ljava/lang/Boolean;
    :goto_0
    goto/16 :goto_3

    :cond_2
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    const-string v3, "com.via.bypass.action.settetherfunction"

    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 111
    const-string v0, "intent - ACTION_USB_BYPASS_SETTETHERFUNCTION"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_3

    .line 112
    :cond_3
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    const-string v1, "com.via.bypass.action.setbypass"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const-string v1, "com.via.bypass.bypass_code"

    if-eqz v0, :cond_5

    .line 113
    const/4 v0, -0x1

    invoke-virtual {p2, v1, v0}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    .line 114
    .local v0, "bypasscode":I
    if-ltz v0, :cond_4

    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass$1;->this$1:Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    invoke-static {v1}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->access$200(Lcom/mediatek/engineermode/bypass/BypassService$Bypass;)I

    move-result v1

    if-gt v0, v1, :cond_4

    .line 115
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass$1;->this$1:Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->access$300(Lcom/mediatek/engineermode/bypass/BypassService$Bypass;I)V

    goto :goto_1

    .line 117
    :cond_4
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass$1;->this$1:Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    iget-object v3, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass$1;->this$1:Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    invoke-static {v3}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->access$400(Lcom/mediatek/engineermode/bypass/BypassService$Bypass;)I

    move-result v3

    invoke-static {v1, v2, v3}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->access$500(Lcom/mediatek/engineermode/bypass/BypassService$Bypass;Ljava/lang/Boolean;I)V

    .line 119
    .end local v0    # "bypasscode":I
    :goto_1
    goto/16 :goto_3

    :cond_5
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    const-string v3, "com.via.bypass.action.getbypass"

    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 120
    new-instance v0, Landroid/content/Intent;

    const-string v2, "com.via.bypass.action.getbypass_result"

    invoke-direct {v0, v2}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 121
    .local v0, "reintent":Landroid/content/Intent;
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass$1;->this$1:Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    invoke-static {v2}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->access$400(Lcom/mediatek/engineermode/bypass/BypassService$Bypass;)I

    move-result v2

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 122
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass$1;->this$1:Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    iget-object v1, v1, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->this$0:Lcom/mediatek/engineermode/bypass/BypassService;

    invoke-static {v1}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v1

    .line 123
    invoke-virtual {v1, v0}, Landroid/support/v4/content/LocalBroadcastManager;->sendBroadcast(Landroid/content/Intent;)Z

    .line 124
    .end local v0    # "reintent":Landroid/content/Intent;
    goto :goto_3

    :cond_6
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    const-string v1, "via.cdma.action.ets.dev.changed"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_8

    .line 125
    const-string v0, "set.ets.dev.result"

    invoke-virtual {p2, v0, v2}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v0

    .line 127
    .local v0, "result":Z
    if-eqz v0, :cond_7

    .line 129
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass$1;->this$1:Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    invoke-static {v1}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->access$600(Lcom/mediatek/engineermode/bypass/BypassService$Bypass;)I

    move-result v1

    .local v1, "bypass":I
    goto :goto_2

    .line 132
    .end local v1    # "bypass":I
    :cond_7
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass$1;->this$1:Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    invoke-static {v1}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->access$400(Lcom/mediatek/engineermode/bypass/BypassService$Bypass;)I

    move-result v1

    .line 134
    .restart local v1    # "bypass":I
    :goto_2
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass$1;->this$1:Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->access$700(Lcom/mediatek/engineermode/bypass/BypassService$Bypass;I)V

    .line 135
    .end local v0    # "result":Z
    .end local v1    # "bypass":I
    goto :goto_3

    :cond_8
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    const-string v1, "android.intent.action.RADIO_AVAILABLE"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_9

    .line 136
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass$1;->this$1:Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    invoke-static {v0}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->access$800(Lcom/mediatek/engineermode/bypass/BypassService$Bypass;)Z

    move-result v0

    if-eqz v0, :cond_a

    .line 137
    new-instance v0, Landroid/content/Intent;

    const-string v1, "via.cdma.action.set.ets.dev"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 138
    .local v0, "reintent":Landroid/content/Intent;
    const/4 v1, 0x1

    const-string v2, "via.cdma.extral.ets.dev"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 139
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass$1;->this$1:Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    iget-object v1, v1, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->this$0:Lcom/mediatek/engineermode/bypass/BypassService;

    invoke-static {v1}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v1

    .line 140
    invoke-virtual {v1, v0}, Landroid/support/v4/content/LocalBroadcastManager;->sendBroadcast(Landroid/content/Intent;)Z

    .line 141
    .end local v0    # "reintent":Landroid/content/Intent;
    goto :goto_3

    .line 142
    :cond_9
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    const-string v1, "android.hardware.usb.action.USB_STATE"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_a

    .line 143
    nop

    .line 144
    const-string v0, "connected"

    invoke-virtual {p2, v0, v2}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v0

    .line 145
    .local v0, "usbConnected":Z
    if-nez v0, :cond_a

    .line 146
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass$1;->this$1:Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->updateBypassMode(I)V

    .line 150
    .end local v0    # "usbConnected":Z
    :cond_a
    :goto_3
    return-void
.end method
