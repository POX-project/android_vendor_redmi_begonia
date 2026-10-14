.class Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$loadOTAPathTask;
.super Landroid/os/AsyncTask;
.source "McfConfigActivity93.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "loadOTAPathTask"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/os/AsyncTask<",
        "Ljava/lang/Void;",
        "Ljava/lang/Void;",
        "Ljava/lang/Void;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 828
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    return-void
.end method


# virtual methods
.method protected bridge synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 828
    check-cast p1, [Ljava/lang/Void;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$loadOTAPathTask;->doInBackground([Ljava/lang/Void;)Ljava/lang/Void;

    move-result-object p1

    return-object p1
.end method

.method protected varargs doInBackground([Ljava/lang/Void;)Ljava/lang/Void;
    .locals 1
    .param p1, "params"    # [Ljava/lang/Void;

    .line 832
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$2100(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)V

    .line 833
    const/4 v0, 0x0

    return-object v0
.end method

.method protected bridge synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 0

    .line 828
    check-cast p1, Ljava/lang/Void;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$loadOTAPathTask;->onPostExecute(Ljava/lang/Void;)V

    return-void
.end method

.method protected onPostExecute(Ljava/lang/Void;)V
    .locals 2
    .param p1, "result"    # Ljava/lang/Void;

    .line 838
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$500(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Landroid/widget/TextView;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$600(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 839
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$700(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Landroid/widget/TextView;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$800(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 840
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Load OTA file path success! OtaFile: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$600(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", OpOtaFile: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 841
    invoke-static {v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$800(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 840
    const-string v1, "McfConfig/McfConfigActivity93"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 842
    return-void
.end method
