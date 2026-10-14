.class Lcom/mediatek/engineermode/rttn/Rtnmain$handle_prl_update;
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
    name = "handle_prl_update"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/rttn/Rtnmain;)V
    .locals 0

    .line 1034
    iput-object p1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_prl_update;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/rttn/Rtnmain;Lcom/mediatek/engineermode/rttn/Rtnmain$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/rttn/Rtnmain;
    .param p2, "x1"    # Lcom/mediatek/engineermode/rttn/Rtnmain$1;

    .line 1034
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_prl_update;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain;)V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 6
    .param p1, "view"    # Landroid/view/View;

    .line 1037
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v0

    const-string v1, "handle_prl_update"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1038
    new-instance v0, Landroid/app/ProgressDialog;

    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_prl_update;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-direct {v0, v1}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    invoke-static {v0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$102(Landroid/app/ProgressDialog;)Landroid/app/ProgressDialog;

    .line 1039
    const/4 v0, 0x0

    .line 1040
    .local v0, "failed_flag":I
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 1041
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    const/4 v3, 0x0

    invoke-virtual {v1, v3}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 1042
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    iget-object v4, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_prl_update;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v5, 0x7f0a04fc

    invoke-virtual {v4, v5}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Landroid/app/ProgressDialog;->setTitle(Ljava/lang/CharSequence;)V

    .line 1043
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    iget-object v4, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_prl_update;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v5, 0x7f0a0500

    invoke-virtual {v4, v5}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 1044
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    invoke-virtual {v1}, Landroid/app/ProgressDialog;->show()V

    .line 1046
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_prl_update;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-static {v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1700(Lcom/mediatek/engineermode/rttn/Rtnmain;)V

    .line 1047
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->factoryUpdatePrl()I

    move-result v0

    .line 1049
    if-nez v0, :cond_1

    .line 1050
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v1

    const-string v2, "The PRL update succeed"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1051
    const/4 v1, 0x2

    invoke-static {v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1802(I)I

    .line 1052
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1900()Z

    move-result v1

    if-nez v1, :cond_0

    .line 1053
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v1

    const-string v2, "Waiting for BIP session start."

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 1054
    return-void

    .line 1056
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_prl_update;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-static {v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1600(Lcom/mediatek/engineermode/rttn/Rtnmain;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 1057
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v1

    const-string v2, "PRL update waiting for polling part completion"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1058
    return-void

    .line 1061
    :cond_1
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v1

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "The PRL update failed at flag: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v4}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 1062
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_prl_update;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    iget-object v4, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_prl_update;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v5, 0x7f0a04ff

    .line 1063
    invoke-virtual {v4, v5}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v4

    .line 1062
    invoke-static {v1, v4, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    .line 1063
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 1066
    :cond_2
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    if-eqz v1, :cond_3

    .line 1067
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    invoke-virtual {v1}, Landroid/app/ProgressDialog;->dismiss()V

    .line 1068
    const/4 v1, 0x0

    invoke-static {v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$102(Landroid/app/ProgressDialog;)Landroid/app/ProgressDialog;

    .line 1069
    invoke-static {v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1802(I)I

    .line 1070
    invoke-static {v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1902(Z)Z

    .line 1071
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_prl_update;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-static {v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$2000(Lcom/mediatek/engineermode/rttn/Rtnmain;)V

    .line 1073
    :cond_3
    return-void
.end method
