.class Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$6;
.super Landroid/os/CountDownTimer;
.source "McfConfigActivity93.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->startTimer(II)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

.field final synthetic val$type:I


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;JJI)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;
    .param p2, "arg0"    # J
    .param p4, "arg1"    # J

    .line 625
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    iput p6, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$6;->val$type:I

    invoke-direct {p0, p2, p3, p4, p5}, Landroid/os/CountDownTimer;-><init>(JJ)V

    return-void
.end method


# virtual methods
.method public onFinish()V
    .locals 4

    .line 637
    const-string v0, "McfConfig/McfConfigActivity93"

    const-string v1, "timer Timeout......."

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 638
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$902(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Z)Z

    .line 639
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    iget-object v0, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->timer:Landroid/os/CountDownTimer;

    if-eqz v0, :cond_0

    .line 640
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    iget-object v0, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->timer:Landroid/os/CountDownTimer;

    invoke-virtual {v0}, Landroid/os/CountDownTimer;->cancel()V

    .line 642
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1600(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Landroid/app/ProgressDialog;

    move-result-object v0

    const/4 v2, 0x0

    if-eqz v0, :cond_1

    .line 643
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1600(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Landroid/app/ProgressDialog;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/ProgressDialog;->dismiss()V

    .line 644
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1602(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Landroid/app/ProgressDialog;)Landroid/app/ProgressDialog;

    .line 646
    :cond_1
    iget v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$6;->val$type:I

    if-ne v0, v1, :cond_2

    .line 647
    const-string v0, "Dump OTA timeout!"

    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    goto :goto_0

    .line 648
    :cond_2
    if-nez v0, :cond_3

    .line 649
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    const-string v1, "Reboot Modem"

    const-string v3, "Reboot modem timeout!"

    invoke-static {v0, v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Ljava/lang/String;Ljava/lang/String;)V

    .line 652
    :cond_3
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    iput-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->timer:Landroid/os/CountDownTimer;

    .line 653
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/util/Set;

    move-result-object v0

    iget v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$6;->val$type:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    .line 655
    return-void
.end method

.method public onTick(J)V
    .locals 2
    .param p1, "millisUntilFinishied"    # J

    .line 628
    iget v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$6;->val$type:I

    if-nez v0, :cond_2

    .line 629
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1900(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->isSimReady(I)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1900(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)I

    move-result v0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1900(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)I

    move-result v1

    add-int/lit8 v1, v1, 0x1

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->isSimReady(I)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 630
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1900(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)I

    move-result v0

    add-int/lit8 v0, v0, 0x1

    rem-int/lit8 v0, v0, 0x2

    goto :goto_0

    :cond_1
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCapabilitySim()I

    move-result v0

    :goto_0
    nop

    .line 631
    .local v0, "curId":I
    invoke-static {v0}, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->getModemStatus(I)V

    .line 633
    .end local v0    # "curId":I
    :cond_2
    return-void
.end method
