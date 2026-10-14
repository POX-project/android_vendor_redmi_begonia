.class Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset$1;
.super Ljava/lang/Object;
.source "Rtnmain.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;->onClick(Landroid/view/View;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;)V
    .locals 0
    .param p1, "this$1"    # Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;

    .line 1088
    iput-object p1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset$1;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 4
    .param p1, "arg0"    # Landroid/content/DialogInterface;
    .param p2, "arg1"    # I

    .line 1092
    new-instance v0, Landroid/app/ProgressDialog;

    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset$1;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;

    iget-object v1, v1, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-direct {v0, v1}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    invoke-static {v0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$102(Landroid/app/ProgressDialog;)Landroid/app/ProgressDialog;

    .line 1093
    const/4 v0, 0x0

    .line 1094
    .local v0, "failed_flag":I
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 1095
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 1096
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset$1;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;

    iget-object v2, v2, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v3, 0x7f0a058f

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/app/ProgressDialog;->setTitle(Ljava/lang/CharSequence;)V

    .line 1097
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset$1;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;

    iget-object v2, v2, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v3, 0x7f0a0583

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 1098
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    invoke-virtual {v1}, Landroid/app/ProgressDialog;->show()V

    .line 1106
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->factoryResetSim()I

    move-result v0

    .line 1108
    if-nez v0, :cond_0

    .line 1109
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v1

    const-string v2, "SCRTN The SIM-OTA reset succeed"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 1110
    const-string v1, "AT$QCMIGETP=0"

    const-string v2, ""

    filled-new-array {v1, v2}, [Ljava/lang/String;

    move-result-object v1

    .line 1111
    .local v1, "cmdStr":[Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset$1;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;

    iget-object v2, v2, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    iget-object v2, v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->mResponseHander:Landroid/os/Handler;

    const/4 v3, 0x2

    .line 1112
    invoke-virtual {v2, v3}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v2

    .line 1111
    invoke-static {v1, v2}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 1113
    .end local v1    # "cmdStr":[Ljava/lang/String;
    goto :goto_0

    .line 1114
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "SCRTN The SIM-OTA reset failed at flag"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 1116
    :goto_0
    return-void
.end method
