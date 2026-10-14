.class Lcom/mediatek/engineermode/rttn/Rtnmain$4;
.super Landroid/os/CountDownTimer;
.source "Rtnmain.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/rttn/Rtnmain;->startTimer()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rttn/Rtnmain;JJ)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/rttn/Rtnmain;
    .param p2, "arg0"    # J
    .param p4, "arg1"    # J

    .line 1195
    iput-object p1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$4;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-direct {p0, p2, p3, p4, p5}, Landroid/os/CountDownTimer;-><init>(JJ)V

    return-void
.end method


# virtual methods
.method public onFinish()V
    .locals 2

    .line 1202
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v0

    const-string v1, "CountDownTimer finish"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1203
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$4;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$2102(Lcom/mediatek/engineermode/rttn/Rtnmain;Landroid/os/CountDownTimer;)Landroid/os/CountDownTimer;

    .line 1204
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1205
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/ProgressDialog;->dismiss()V

    .line 1206
    invoke-static {v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$102(Landroid/app/ProgressDialog;)Landroid/app/ProgressDialog;

    .line 1207
    const/4 v0, 0x0

    invoke-static {v0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1802(I)I

    .line 1208
    invoke-static {v0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1902(Z)Z

    .line 1209
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$4;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-static {v0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$2000(Lcom/mediatek/engineermode/rttn/Rtnmain;)V

    .line 1211
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$4;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const/16 v1, 0x259

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->showDialog(I)V

    .line 1212
    return-void
.end method

.method public onTick(J)V
    .locals 0
    .param p1, "millisUntilFinishied"    # J

    .line 1198
    return-void
.end method
