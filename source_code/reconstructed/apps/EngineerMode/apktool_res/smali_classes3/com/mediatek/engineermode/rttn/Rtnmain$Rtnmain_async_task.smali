.class public Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;
.super Landroid/os/AsyncTask;
.source "Rtnmain.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/rttn/Rtnmain;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4
    name = "Rtnmain_async_task"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/os/AsyncTask<",
        "Ljava/lang/String;",
        "Ljava/lang/String;",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;


# direct methods
.method protected constructor <init>(Lcom/mediatek/engineermode/rttn/Rtnmain;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/rttn/Rtnmain;

    .line 93
    iput-object p1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    return-void
.end method


# virtual methods
.method protected bridge synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 93
    check-cast p1, [Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->doInBackground([Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method protected varargs doInBackground([Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .param p1, "params"    # [Ljava/lang/String;

    .line 97
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const-string v1, "phone"

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/telephony/TelephonyManager;

    iput-object v1, v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->tm:Landroid/telephony/TelephonyManager;

    .line 98
    const/4 v0, 0x0

    aget-object v1, p1, v0

    const-string v2, "Rtn_msl"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 99
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    iget-object v1, v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->tm:Landroid/telephony/TelephonyManager;

    sget v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->RIL_NV_DEVICE_MSL:I

    invoke-virtual {v1, v2}, Landroid/telephony/TelephonyManager;->nvReadItem(I)Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->rtn_msl:Ljava/lang/String;

    .line 100
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v1

    const-string v2, "[Rtn Reset]doInBackground in Rtn_msl"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 102
    :cond_0
    aget-object v1, p1, v0

    const-string v2, "Rtnmain"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 104
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v1

    const-string v2, "[Rtn View] doInBackground in Rtnmain. Action in onPostExecute"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 106
    :cond_1
    :goto_0
    aget-object v0, p1, v0

    return-object v0
.end method

.method protected bridge synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 0

    .line 93
    check-cast p1, Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->onPostExecute(Ljava/lang/String;)V

    return-void
.end method

.method protected onPostExecute(Ljava/lang/String;)V
    .locals 4
    .param p1, "result"    # Ljava/lang/String;

    .line 113
    const-string v0, "Rtnmain"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 114
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v0

    const-string v1, "[Rtn View] onPostExecute in Rtnmain"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 115
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    .line 116
    const-string v1, "power"

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/PowerManager;

    .line 118
    .local v0, "pm":Landroid/os/PowerManager;
    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/PowerManager;->reboot(Ljava/lang/String;)V

    .line 119
    .end local v0    # "pm":Landroid/os/PowerManager;
    goto :goto_0

    .line 120
    :cond_0
    const-string v0, "Rtn_msl"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 121
    new-instance v0, Landroid/app/AlertDialog$Builder;

    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-direct {v0, v1}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 122
    .local v0, "rtn_reset_cnf":Landroid/app/AlertDialog$Builder;
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v2, 0x7f0a0056

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 123
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v1

    const-string v2, "[Rtn Reset]onPostExecute in Rtn_msl"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 124
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v2, 0x7f0a0569

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 125
    new-instance v1, Landroid/widget/EditText;

    iget-object v2, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/widget/EditText;-><init>(Landroid/content/Context;)V

    .line 126
    .local v1, "input":Landroid/widget/EditText;
    const/16 v2, 0x12

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setInputType(I)V

    .line 128
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setView(Landroid/view/View;)Landroid/app/AlertDialog$Builder;

    .line 129
    iget-object v2, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v3, 0x1040013

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v2

    new-instance v3, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;

    invoke-direct {v3, p0, v1}, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;Landroid/widget/EditText;)V

    invoke-virtual {v0, v2, v3}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 192
    iget-object v2, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v3, 0x1040009

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v2

    new-instance v3, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$2;

    invoke-direct {v3, p0}, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$2;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;)V

    invoke-virtual {v0, v2, v3}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 200
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v2

    .line 201
    .local v2, "alertDialog":Landroid/app/AlertDialog;
    invoke-virtual {v2}, Landroid/app/AlertDialog;->show()V

    .line 203
    .end local v0    # "rtn_reset_cnf":Landroid/app/AlertDialog$Builder;
    .end local v1    # "input":Landroid/widget/EditText;
    .end local v2    # "alertDialog":Landroid/app/AlertDialog;
    :cond_1
    :goto_0
    return-void
.end method
