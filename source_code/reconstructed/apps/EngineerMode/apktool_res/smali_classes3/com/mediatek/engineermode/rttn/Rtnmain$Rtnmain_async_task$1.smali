.class Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;
.super Ljava/lang/Object;
.source "Rtnmain.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->onPostExecute(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;

.field final synthetic val$input:Landroid/widget/EditText;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;Landroid/widget/EditText;)V
    .locals 0
    .param p1, "this$1"    # Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;

    .line 130
    iput-object p1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;

    iput-object p2, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;->val$input:Landroid/widget/EditText;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 4
    .param p1, "dialog"    # Landroid/content/DialogInterface;
    .param p2, "which"    # I

    .line 133
    const-string v0, ""

    .line 134
    .local v0, "m_Text":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;->val$input:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 135
    const-string v1, "12345"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_1

    sget-object v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->rtn_msl:Ljava/lang/String;

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    .line 187
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;

    iget-object v1, v1, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;

    iget-object v2, v2, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v3, 0x7f0a006c

    .line 188
    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x1

    .line 187
    invoke-static {v1, v2, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    .line 188
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    goto :goto_1

    .line 136
    :cond_1
    :goto_0
    new-instance v1, Landroid/app/AlertDialog$Builder;

    iget-object v2, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;

    iget-object v2, v2, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-direct {v1, v2}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 138
    .local v1, "rtn_reset_cnf_dialog":Landroid/app/AlertDialog$Builder;
    iget-object v2, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;

    iget-object v2, v2, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v3, 0x7f0a00a4

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 139
    iget-object v2, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;

    iget-object v2, v2, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v3, 0x7f0a0569

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 140
    iget-object v2, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;

    iget-object v2, v2, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v3, 0x1040013

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v2

    new-instance v3, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1$1;

    invoke-direct {v3, p0}, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1$1;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;)V

    invoke-virtual {v1, v2, v3}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 176
    iget-object v2, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;

    iget-object v2, v2, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v3, 0x1040009

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v2

    new-instance v3, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1$2;

    invoke-direct {v3, p0}, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1$2;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;)V

    invoke-virtual {v1, v2, v3}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 184
    invoke-virtual {v1}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v2

    .line 185
    .local v2, "alertDialog":Landroid/app/AlertDialog;
    invoke-virtual {v2}, Landroid/app/AlertDialog;->show()V

    .line 186
    .end local v1    # "rtn_reset_cnf_dialog":Landroid/app/AlertDialog$Builder;
    .end local v2    # "alertDialog":Landroid/app/AlertDialog;
    nop

    .line 190
    :goto_1
    return-void
.end method
