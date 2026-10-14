.class Lcom/mediatek/engineermode/rttn/Rtnmain$handle_update_operation;
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
    name = "handle_update_operation"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/rttn/Rtnmain;)V
    .locals 0

    .line 948
    iput-object p1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_update_operation;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/rttn/Rtnmain;Lcom/mediatek/engineermode/rttn/Rtnmain$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/rttn/Rtnmain;
    .param p2, "x1"    # Lcom/mediatek/engineermode/rttn/Rtnmain$1;

    .line 948
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_update_operation;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain;)V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 6
    .param p1, "view"    # Landroid/view/View;

    .line 951
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v0

    const-string v1, "handle_update_operation"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 952
    new-instance v0, Landroid/app/ProgressDialog;

    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_update_operation;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-direct {v0, v1}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    invoke-static {v0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$102(Landroid/app/ProgressDialog;)Landroid/app/ProgressDialog;

    .line 953
    const/4 v0, 0x0

    .line 954
    .local v0, "failed_flag":I
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 955
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    const/4 v3, 0x0

    invoke-virtual {v1, v3}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 956
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    iget-object v4, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_update_operation;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v5, 0x7f0a063f

    invoke-virtual {v4, v5}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Landroid/app/ProgressDialog;->setTitle(Ljava/lang/CharSequence;)V

    .line 957
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    iget-object v4, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_update_operation;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v5, 0x7f0a0641

    invoke-virtual {v4, v5}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 958
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    invoke-virtual {v1}, Landroid/app/ProgressDialog;->show()V

    .line 960
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_update_operation;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-static {v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1700(Lcom/mediatek/engineermode/rttn/Rtnmain;)V

    .line 961
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->factoryUpdateProfile()I

    move-result v0

    .line 963
    if-nez v0, :cond_1

    .line 964
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v1

    const-string v2, "The Device update succeed"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 965
    const/4 v1, 0x3

    invoke-static {v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1802(I)I

    .line 966
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1900()Z

    move-result v1

    if-nez v1, :cond_0

    .line 967
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v1

    const-string v2, "Waiting for BIP session start."

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 968
    return-void

    .line 970
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_update_operation;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-static {v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1600(Lcom/mediatek/engineermode/rttn/Rtnmain;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 971
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v1

    const-string v2, "Device update waiting for polling part completion"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 972
    return-void

    .line 975
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_update_operation;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    iget-object v4, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_update_operation;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const v5, 0x7f0a02be

    .line 976
    invoke-virtual {v4, v5}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v4

    .line 975
    invoke-static {v1, v4, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    .line 976
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 977
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "The device update failed at flag: "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 980
    :cond_2
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    if-eqz v1, :cond_3

    .line 981
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$100()Landroid/app/ProgressDialog;

    move-result-object v1

    invoke-virtual {v1}, Landroid/app/ProgressDialog;->dismiss()V

    .line 982
    const/4 v1, 0x0

    invoke-static {v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$102(Landroid/app/ProgressDialog;)Landroid/app/ProgressDialog;

    .line 983
    invoke-static {v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1802(I)I

    .line 984
    invoke-static {v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1902(Z)Z

    .line 985
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_update_operation;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-static {v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$2000(Lcom/mediatek/engineermode/rttn/Rtnmain;)V

    .line 987
    :cond_3
    return-void
.end method
