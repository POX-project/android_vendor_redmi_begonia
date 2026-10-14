.class Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$saveOTAPathTask;
.super Landroid/os/AsyncTask;
.source "McfConfigActivity93.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "saveOTAPathTask"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/os/AsyncTask<",
        "Ljava/lang/Integer;",
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

    .line 813
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$saveOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    return-void
.end method


# virtual methods
.method protected bridge synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 813
    check-cast p1, [Ljava/lang/Integer;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$saveOTAPathTask;->doInBackground([Ljava/lang/Integer;)Ljava/lang/Void;

    move-result-object p1

    return-object p1
.end method

.method protected varargs doInBackground([Ljava/lang/Integer;)Ljava/lang/Void;
    .locals 3
    .param p1, "params"    # [Ljava/lang/Integer;

    .line 817
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[saveOTAPathTask] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v1, 0x0

    aget-object v2, p1, v1

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "McfConfig/McfConfigActivity93"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 818
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$saveOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    aget-object v1, p1, v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$2000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;I)V

    .line 819
    const/4 v0, 0x0

    return-object v0
.end method

.method protected bridge synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 0

    .line 813
    check-cast p1, Ljava/lang/Void;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$saveOTAPathTask;->onPostExecute(Ljava/lang/Void;)V

    return-void
.end method

.method protected onPostExecute(Ljava/lang/Void;)V
    .locals 2
    .param p1, "result"    # Ljava/lang/Void;

    .line 824
    const-string v0, "McfConfig/McfConfigActivity93"

    const-string v1, "Save OTA file path success!"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 825
    return-void
.end method
