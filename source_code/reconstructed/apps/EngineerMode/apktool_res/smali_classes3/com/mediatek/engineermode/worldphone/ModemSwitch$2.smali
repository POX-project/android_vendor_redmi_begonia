.class Lcom/mediatek/engineermode/worldphone/ModemSwitch$2;
.super Landroid/os/CountDownTimer;
.source "ModemSwitch.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/worldphone/ModemSwitch;->switchModemAlert(JJ)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/worldphone/ModemSwitch;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/worldphone/ModemSwitch;JJ)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/worldphone/ModemSwitch;
    .param p2, "arg0"    # J
    .param p4, "arg1"    # J

    .line 267
    iput-object p1, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch$2;->this$0:Lcom/mediatek/engineermode/worldphone/ModemSwitch;

    invoke-direct {p0, p2, p3, p4, p5}, Landroid/os/CountDownTimer;-><init>(JJ)V

    return-void
.end method


# virtual methods
.method public onFinish()V
    .locals 1

    .line 275
    iget-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch$2;->this$0:Lcom/mediatek/engineermode/worldphone/ModemSwitch;

    invoke-static {v0}, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->access$100(Lcom/mediatek/engineermode/worldphone/ModemSwitch;)Landroid/app/AlertDialog;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/AlertDialog;->cancel()V

    .line 276
    return-void
.end method

.method public onTick(J)V
    .locals 4
    .param p1, "millisUntilFinished"    # J

    .line 270
    iget-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch$2;->this$0:Lcom/mediatek/engineermode/worldphone/ModemSwitch;

    invoke-static {v0}, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->access$100(Lcom/mediatek/engineermode/worldphone/ModemSwitch;)Landroid/app/AlertDialog;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Wait "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-wide/16 v2, 0x3e8

    div-long v2, p1, v2

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, " seconds"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 271
    return-void
.end method
