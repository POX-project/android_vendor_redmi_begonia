.class Lcom/mediatek/engineermode/worldmode/WorldModeActivity$4;
.super Landroid/content/BroadcastReceiver;
.source "WorldModeActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/worldmode/WorldModeActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    .line 228
    iput-object p1, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$4;->this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 5
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "intent"    # Landroid/content/Intent;

    .line 231
    const-string v0, "WorldModeActivity"

    const-string v1, "[Receiver]+"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 232
    invoke-virtual {p2}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v1

    invoke-static {v1}, Landroid/telephony/ServiceState;->newFromBundle(Landroid/os/Bundle;)Landroid/telephony/ServiceState;

    move-result-object v1

    .line 233
    .local v1, "ss":Landroid/telephony/ServiceState;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "ss.getState(): "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Landroid/telephony/ServiceState;->getState()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ",mStateFlag = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$4;->this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    invoke-static {v3}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$200(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)Z

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 234
    const-string v2, "[Receiver ACTION_SERVICE_STATE_CHANGED]"

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 235
    invoke-virtual {v1}, Landroid/telephony/ServiceState;->getState()I

    move-result v2

    const/4 v3, 0x1

    const/4 v4, 0x3

    if-eq v2, v4, :cond_1

    .line 236
    invoke-static {}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$300()I

    move-result v2

    if-ne v2, v3, :cond_2

    iget-object v2, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$4;->this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$200(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 237
    iget-object v2, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$4;->this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$100(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)V

    .line 238
    iget-object v2, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$4;->this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    const/4 v3, 0x0

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$202(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;Z)Z

    .line 239
    iget-object v2, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$4;->this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$400(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)Landroid/os/CountDownTimer;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 240
    iget-object v2, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$4;->this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$400(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)Landroid/os/CountDownTimer;

    move-result-object v2

    invoke-virtual {v2}, Landroid/os/CountDownTimer;->cancel()V

    .line 241
    iget-object v2, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$4;->this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    const/4 v4, 0x0

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$402(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;Landroid/os/CountDownTimer;)Landroid/os/CountDownTimer;

    .line 243
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$4;->this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$500(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)Landroid/app/ProgressDialog;

    move-result-object v2

    if-eqz v2, :cond_2

    .line 244
    iget-object v2, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$4;->this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$500(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)Landroid/app/ProgressDialog;

    move-result-object v2

    invoke-virtual {v2}, Landroid/app/ProgressDialog;->dismiss()V

    .line 245
    invoke-static {v3}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$302(I)I

    goto :goto_0

    .line 249
    :cond_1
    invoke-static {}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$300()I

    move-result v2

    if-ne v2, v3, :cond_2

    iget-object v2, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$4;->this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$200(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 250
    iget-object v2, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$4;->this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$202(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;Z)Z

    .line 253
    :cond_2
    :goto_0
    const-string v2, "[Receiver]-"

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 254
    return-void
.end method
