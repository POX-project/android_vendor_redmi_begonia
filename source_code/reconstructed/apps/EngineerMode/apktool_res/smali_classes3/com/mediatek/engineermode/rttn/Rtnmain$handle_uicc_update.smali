.class Lcom/mediatek/engineermode/rttn/Rtnmain$handle_uicc_update;
.super Ljava/lang/Object;
.source "Rtnmain.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/rttn/Rtnmain;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "handle_uicc_update"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/rttn/Rtnmain;)V
    .locals 0

    .line 919
    iput-object p1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_uicc_update;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/rttn/Rtnmain;Lcom/mediatek/engineermode/rttn/Rtnmain$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/rttn/Rtnmain;
    .param p2, "x1"    # Lcom/mediatek/engineermode/rttn/Rtnmain$1;

    .line 919
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_uicc_update;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain;)V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 5
    .param p1, "view"    # Landroid/view/View;

    .line 922
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v0

    const-string v1, "handle_uicc_update"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 923
    new-instance v0, Landroid/app/ProgressDialog;

    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_uicc_update;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-direct {v0, v1}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    invoke-static {v0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$102(Landroid/app/ProgressDialog;)Landroid/app/ProgressDialog;

    .line 924
    const/4 v0, 0x0

    .line 925
    .local v0, "failed_flag":I
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 926
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    const/4 v3, 0x0

    invoke-virtual {v1, v3}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 927
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    iget-object v3, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_uicc_update;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v4, 0x7f0a063a

    invoke-virtual {v3, v4}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Landroid/app/ProgressDialog;->setTitle(Ljava/lang/CharSequence;)V

    .line 928
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    iget-object v3, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_uicc_update;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v4, 0x7f0a063e

    invoke-virtual {v3, v4}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 929
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    invoke-virtual {v1}, Landroid/app/ProgressDialog;->show()V

    .line 931
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->factoryUpdateUicc()I

    move-result v0

    .line 933
    if-nez v0, :cond_0

    .line 934
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_uicc_update;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    iget-object v3, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_uicc_update;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v4, 0x7f0a063c

    .line 935
    invoke-virtual {v3, v4}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v3

    .line 934
    invoke-static {v1, v3, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    .line 935
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 936
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v1

    const-string v2, "The UICC update check succeed"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 938
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_uicc_update;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    iget-object v3, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_uicc_update;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v4, 0x7f0a063d

    .line 939
    invoke-virtual {v3, v4}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v3

    .line 938
    invoke-static {v1, v3, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    .line 939
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 940
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "The UICC update failed at flag: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 943
    :goto_0
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    invoke-virtual {v1}, Landroid/app/ProgressDialog;->dismiss()V

    .line 944
    const/4 v1, 0x0

    invoke-static {v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$102(Landroid/app/ProgressDialog;)Landroid/app/ProgressDialog;

    .line 945
    return-void
.end method
