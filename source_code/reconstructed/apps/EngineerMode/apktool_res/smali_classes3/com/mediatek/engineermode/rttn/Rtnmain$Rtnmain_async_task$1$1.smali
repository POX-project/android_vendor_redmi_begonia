.class Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1$1;
.super Ljava/lang/Object;
.source "Rtnmain.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;->onClick(Landroid/content/DialogInterface;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$2:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;)V
    .locals 0
    .param p1, "this$2"    # Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;

    .line 141
    iput-object p1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1$1;->this$2:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 4
    .param p1, "arg0"    # Landroid/content/DialogInterface;
    .param p2, "arg1"    # I

    .line 144
    new-instance v0, Landroid/app/ProgressDialog;

    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1$1;->this$2:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;

    iget-object v1, v1, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;

    iget-object v1, v1, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-direct {v0, v1}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    invoke-static {v0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$102(Landroid/app/ProgressDialog;)Landroid/app/ProgressDialog;

    .line 146
    const/4 v0, 0x0

    .line 147
    .local v0, "failed_flag":I
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 148
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 149
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1$1;->this$2:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;

    iget-object v2, v2, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;

    iget-object v2, v2, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    .line 150
    invoke-virtual {v2}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    const v3, 0x7f0a0569

    invoke-virtual {v2, v3}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 149
    invoke-virtual {v1, v2}, Landroid/app/ProgressDialog;->setTitle(Ljava/lang/CharSequence;)V

    .line 151
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1$1;->this$2:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;

    iget-object v2, v2, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;

    iget-object v2, v2, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    const v3, 0x7f0a0583

    invoke-virtual {v2, v3}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 153
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    invoke-virtual {v1}, Landroid/app/ProgressDialog;->show()V

    .line 156
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->factoryResetSim()I

    move-result v0

    .line 157
    if-nez v0, :cond_0

    .line 158
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v1

    const-string v2, "[Rtn Reset]: The SIM-OTA reset succeed"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 159
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1$1;->this$2:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;

    iget-object v1, v1, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;

    iget-object v1, v1, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    iget-object v2, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1$1;->this$2:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;

    iget-object v2, v2, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;

    iget-object v2, v2, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const-string v3, "phone"

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/telephony/TelephonyManager;

    iput-object v2, v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->tm:Landroid/telephony/TelephonyManager;

    .line 168
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1$1;->this$2:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;

    iget-object v1, v1, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;

    iget-object v1, v1, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->Masterclear()V

    goto :goto_0

    .line 171
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[Rtn Reset]: The SIM-OTA reset failed at flag"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 174
    :goto_0
    return-void
.end method
