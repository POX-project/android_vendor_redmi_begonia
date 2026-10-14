.class Lcom/mediatek/engineermode/RadioStateManager$1;
.super Landroid/os/CountDownTimer;
.source "RadioStateManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/RadioStateManager;->startTimer()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/RadioStateManager;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/RadioStateManager;JJ)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/RadioStateManager;
    .param p2, "arg0"    # J
    .param p4, "arg1"    # J

    .line 99
    iput-object p1, p0, Lcom/mediatek/engineermode/RadioStateManager$1;->this$0:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-direct {p0, p2, p3, p4, p5}, Landroid/os/CountDownTimer;-><init>(JJ)V

    return-void
.end method


# virtual methods
.method public onFinish()V
    .locals 2

    .line 106
    const-string v0, "RadioStateManager"

    const-string v1, "CountDownTimer finish"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 107
    iget-object v1, p0, Lcom/mediatek/engineermode/RadioStateManager$1;->this$0:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-static {v1}, Lcom/mediatek/engineermode/RadioStateManager;->access$000(Lcom/mediatek/engineermode/RadioStateManager;)Landroid/app/ProgressDialog;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 108
    iget-object v1, p0, Lcom/mediatek/engineermode/RadioStateManager$1;->this$0:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-static {v1}, Lcom/mediatek/engineermode/RadioStateManager;->access$000(Lcom/mediatek/engineermode/RadioStateManager;)Landroid/app/ProgressDialog;

    move-result-object v1

    invoke-virtual {v1}, Landroid/app/ProgressDialog;->dismiss()V

    .line 110
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->ifAirplaneModeEnabled()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 111
    const-string v1, "[CountDownTimer onFinish]it is in Airplane Mode"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 112
    iget-object v0, p0, Lcom/mediatek/engineermode/RadioStateManager$1;->this$0:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-static {v0}, Lcom/mediatek/engineermode/RadioStateManager;->access$100(Lcom/mediatek/engineermode/RadioStateManager;)Lcom/mediatek/engineermode/RadioStateManager$RadioListener;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 113
    iget-object v0, p0, Lcom/mediatek/engineermode/RadioStateManager$1;->this$0:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-static {v0}, Lcom/mediatek/engineermode/RadioStateManager;->access$100(Lcom/mediatek/engineermode/RadioStateManager;)Lcom/mediatek/engineermode/RadioStateManager$RadioListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/mediatek/engineermode/RadioStateManager$RadioListener;->onRadioPowerOff()V

    goto :goto_0

    .line 116
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/RadioStateManager$1;->this$0:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-static {v0}, Lcom/mediatek/engineermode/RadioStateManager;->access$100(Lcom/mediatek/engineermode/RadioStateManager;)Lcom/mediatek/engineermode/RadioStateManager$RadioListener;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 117
    iget-object v0, p0, Lcom/mediatek/engineermode/RadioStateManager$1;->this$0:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-static {v0}, Lcom/mediatek/engineermode/RadioStateManager;->access$100(Lcom/mediatek/engineermode/RadioStateManager;)Lcom/mediatek/engineermode/RadioStateManager$RadioListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/mediatek/engineermode/RadioStateManager$RadioListener;->onRadioPowerOn()V

    .line 121
    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/RadioStateManager$1;->this$0:Lcom/mediatek/engineermode/RadioStateManager;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/RadioStateManager;->access$202(Lcom/mediatek/engineermode/RadioStateManager;Landroid/os/CountDownTimer;)Landroid/os/CountDownTimer;

    .line 122
    return-void
.end method

.method public onTick(J)V
    .locals 0
    .param p1, "millisUntilFinishied"    # J

    .line 102
    return-void
.end method
