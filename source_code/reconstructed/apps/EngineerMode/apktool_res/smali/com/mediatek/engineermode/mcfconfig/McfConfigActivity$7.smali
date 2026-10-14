.class Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$7;
.super Landroid/os/CountDownTimer;
.source "McfConfigActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->startTimer(II)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

.field final synthetic val$type:I


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;JJI)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
    .param p2, "arg0"    # J
    .param p4, "arg1"    # J

    .line 993
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$7;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    iput p6, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$7;->val$type:I

    invoke-direct {p0, p2, p3, p4, p5}, Landroid/os/CountDownTimer;-><init>(JJ)V

    return-void
.end method


# virtual methods
.method public onFinish()V
    .locals 4

    .line 1005
    const-string v0, "McfConfig"

    const-string v1, "timer Timeout......."

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1006
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$7;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1102(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Z)Z

    .line 1007
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$7;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    iget-object v0, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->timer:Landroid/os/CountDownTimer;

    if-eqz v0, :cond_0

    .line 1008
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$7;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    iget-object v0, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->timer:Landroid/os/CountDownTimer;

    invoke-virtual {v0}, Landroid/os/CountDownTimer;->cancel()V

    .line 1010
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$7;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/app/ProgressDialog;

    move-result-object v0

    const/4 v2, 0x0

    if-eqz v0, :cond_1

    .line 1011
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$7;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/app/ProgressDialog;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/ProgressDialog;->dismiss()V

    .line 1012
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$7;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2002(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Landroid/app/ProgressDialog;)Landroid/app/ProgressDialog;

    .line 1014
    :cond_1
    iget v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$7;->val$type:I

    if-ne v0, v1, :cond_2

    .line 1015
    const-string v0, "Dump OTA timeout!"

    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    goto :goto_0

    .line 1016
    :cond_2
    const/4 v1, 0x3

    if-ne v0, v1, :cond_3

    .line 1017
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$7;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    const-string v1, "Ini Refresh "

    const-string v3, "Ini Refresh timeout!"

    invoke-static {v0, v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 1018
    :cond_3
    const/4 v1, 0x2

    if-ne v0, v1, :cond_4

    .line 1019
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$7;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    const-string v1, "Reboot Modem"

    const-string v3, "Reboot modem timeout!"

    invoke-static {v0, v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;Ljava/lang/String;)V

    .line 1022
    :cond_4
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$7;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    iput-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->timer:Landroid/os/CountDownTimer;

    .line 1023
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$7;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/util/Set;

    move-result-object v0

    iget v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$7;->val$type:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    .line 1025
    return-void
.end method

.method public onTick(J)V
    .locals 3
    .param p1, "millisUntilFinishied"    # J

    .line 996
    iget v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$7;->val$type:I

    const/4 v1, 0x2

    if-ne v0, v1, :cond_2

    .line 997
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$7;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$3000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isSimReady(I)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$7;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$3000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)I

    move-result v0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$7;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$3000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)I

    move-result v2

    add-int/lit8 v2, v2, 0x1

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isSimReady(I)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 998
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$7;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$3000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)I

    move-result v0

    add-int/lit8 v0, v0, 0x1

    rem-int/2addr v0, v1

    goto :goto_0

    :cond_1
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCapabilitySim()I

    move-result v0

    :goto_0
    nop

    .line 999
    .local v0, "curId":I
    invoke-static {v0}, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->getModemStatus(I)V

    .line 1001
    .end local v0    # "curId":I
    :cond_2
    return-void
.end method
