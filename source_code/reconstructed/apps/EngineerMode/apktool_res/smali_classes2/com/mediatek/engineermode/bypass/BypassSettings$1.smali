.class Lcom/mediatek/engineermode/bypass/BypassSettings$1;
.super Landroid/content/BroadcastReceiver;
.source "BypassSettings.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bypass/BypassSettings;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/bypass/BypassSettings;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;

    .line 156
    iput-object p1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 7
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "intent"    # Landroid/content/Intent;

    .line 159
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$000(Lcom/mediatek/engineermode/bypass/BypassSettings;)Ljava/lang/Object;

    move-result-object v0

    monitor-enter v0

    .line 161
    :try_start_0
    const-string v1, "BypassSettings"

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "onReceive = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 163
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v1

    const-string v2, "android.hardware.usb.action.USB_STATE"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 164
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$102(Lcom/mediatek/engineermode/bypass/BypassSettings;Z)Z

    .line 165
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-virtual {p2}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v2

    const-string v3, "connected"

    invoke-virtual {v2, v3}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$202(Lcom/mediatek/engineermode/bypass/BypassSettings;Z)Z

    .line 166
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-virtual {p2}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v2

    const-string v3, "via_bypass"

    invoke-virtual {v2, v3}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$302(Lcom/mediatek/engineermode/bypass/BypassSettings;Z)Z

    .line 167
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$400(Lcom/mediatek/engineermode/bypass/BypassSettings;)V

    .line 169
    const-string v1, "BypassSettings"

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "UsbConnected = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v3}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$200(Lcom/mediatek/engineermode/bypass/BypassSettings;)Z

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, ", mIsBypassMode = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    .line 170
    invoke-static {v3}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$300(Lcom/mediatek/engineermode/bypass/BypassSettings;)Z

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 169
    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_3

    .line 172
    :cond_0
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v1

    const-string v3, "com.via.bypass.action.setbypass_result"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const/4 v3, 0x1

    if-eqz v1, :cond_3

    .line 173
    invoke-virtual {p2}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v1

    const-string v4, "com.via.bypass.isset_bypass"

    invoke-virtual {v1, v4}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v1

    .line 175
    .local v1, "bypassMode":Z
    const-string v4, "BypassSettings"

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "Set bypass mode is "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 177
    iget-object v4, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$502(Lcom/mediatek/engineermode/bypass/BypassSettings;Z)Z

    .line 178
    if-eqz v1, :cond_1

    .line 179
    const v4, 0x7f0a05f2

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(II)V

    goto :goto_0

    .line 181
    :cond_1
    const v4, 0x7f0a0307

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(II)V

    .line 183
    :goto_0
    iget-object v4, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    const-string v5, "com.via.bypass.bypass_code"

    iget-object v6, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v6}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$600(Lcom/mediatek/engineermode/bypass/BypassSettings;)I

    move-result v6

    invoke-virtual {p2, v5, v6}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v5

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$602(Lcom/mediatek/engineermode/bypass/BypassSettings;I)I

    .line 184
    iget-object v4, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    iget-object v5, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v5}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$600(Lcom/mediatek/engineermode/bypass/BypassSettings;)I

    move-result v5

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$700(Lcom/mediatek/engineermode/bypass/BypassSettings;I)V

    .line 186
    iget-object v4, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v4}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$800(Lcom/mediatek/engineermode/bypass/BypassSettings;)Z

    move-result v4

    if-eqz v4, :cond_2

    .line 187
    iget-object v4, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$802(Lcom/mediatek/engineermode/bypass/BypassSettings;Z)Z

    .line 188
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$900(Lcom/mediatek/engineermode/bypass/BypassSettings;Ljava/lang/Boolean;)V

    .line 190
    .end local v1    # "bypassMode":Z
    :cond_2
    goto/16 :goto_3

    :cond_3
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v1

    const-string v4, "com.via.bypass.action.getbypass_result"

    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 191
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$1002(Lcom/mediatek/engineermode/bypass/BypassSettings;Z)Z

    .line 192
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    const-string v2, "com.via.bypass.bypass_code"

    iget-object v3, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v3}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$600(Lcom/mediatek/engineermode/bypass/BypassSettings;)I

    move-result v3

    invoke-virtual {p2, v2, v3}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$602(Lcom/mediatek/engineermode/bypass/BypassSettings;I)I

    .line 193
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$600(Lcom/mediatek/engineermode/bypass/BypassSettings;)I

    move-result v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$700(Lcom/mediatek/engineermode/bypass/BypassSettings;I)V

    .line 194
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$1100(Lcom/mediatek/engineermode/bypass/BypassSettings;)Z

    move-result v1

    if-eqz v1, :cond_a

    .line 195
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$1200(Lcom/mediatek/engineermode/bypass/BypassSettings;)V

    goto/16 :goto_3

    .line 197
    :cond_4
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v1

    const-string v4, "com.via.bypass.loggerui"

    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_a

    .line 199
    const-string v1, "BypassSettings"

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "mIsQueryingMtkLogger is "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v5}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$1300(Lcom/mediatek/engineermode/bypass/BypassSettings;)Z

    move-result v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v4}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 201
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$1300(Lcom/mediatek/engineermode/bypass/BypassSettings;)Z

    move-result v1

    if-nez v1, :cond_5

    .line 202
    monitor-exit v0

    return-void

    .line 204
    :cond_5
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$1302(Lcom/mediatek/engineermode/bypass/BypassSettings;Z)Z

    .line 205
    const-string v1, "cmd_name"

    invoke-virtual {p2, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 206
    .local v1, "name":Ljava/lang/String;
    const-string v4, "cmd_result"

    invoke-virtual {p2, v4, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v2

    .line 208
    .local v2, "result":I
    const-string v4, "BypassSettings"

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "cmd_nameis "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, ", "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "cmd_result"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " is "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 210
    if-eqz v1, :cond_9

    const-string v4, "get_c2klog_status"

    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_9

    .line 211
    if-ne v2, v3, :cond_6

    .line 212
    iget-object v4, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-virtual {v4, v3}, Lcom/mediatek/engineermode/bypass/BypassSettings;->showDialog(I)V

    goto :goto_2

    .line 214
    :cond_6
    iget-object v4, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v4}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$300(Lcom/mediatek/engineermode/bypass/BypassSettings;)Z

    move-result v4

    if-nez v4, :cond_8

    .line 215
    iget-object v4, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v4}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$1400(Lcom/mediatek/engineermode/bypass/BypassSettings;)Z

    move-result v4

    if-eqz v4, :cond_7

    .line 216
    iget-object v4, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$1500(Lcom/mediatek/engineermode/bypass/BypassSettings;Ljava/lang/Boolean;)V

    goto :goto_1

    .line 218
    :cond_7
    iget-object v4, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$1600(Lcom/mediatek/engineermode/bypass/BypassSettings;Ljava/lang/Boolean;)V

    .line 221
    :cond_8
    :goto_1
    iget-object v3, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    iget-object v4, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v4}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$1700(Lcom/mediatek/engineermode/bypass/BypassSettings;)I

    move-result v4

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$1800(Lcom/mediatek/engineermode/bypass/BypassSettings;I)V

    .line 224
    :cond_9
    :goto_2
    iget-object v3, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    iget-object v4, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v4}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$600(Lcom/mediatek/engineermode/bypass/BypassSettings;)I

    move-result v4

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$700(Lcom/mediatek/engineermode/bypass/BypassSettings;I)V

    .line 226
    .end local v1    # "name":Ljava/lang/String;
    .end local v2    # "result":I
    :cond_a
    :goto_3
    monitor-exit v0

    .line 227
    return-void

    .line 226
    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method
