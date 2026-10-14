.class Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$LoadingTask;
.super Landroid/os/AsyncTask;
.source "MDMCoreOperation.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "LoadingTask"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/os/AsyncTask<",
        "Landroid/content/Context;",
        "Ljava/lang/Void;",
        "Ljava/lang/Boolean;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;)V
    .locals 0

    .line 246
    iput-object p1, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$LoadingTask;->this$0:Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;
    .param p2, "x1"    # Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$1;

    .line 246
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$LoadingTask;-><init>(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;)V

    return-void
.end method


# virtual methods
.method protected varargs doInBackground([Landroid/content/Context;)Ljava/lang/Boolean;
    .locals 4
    .param p1, "params"    # [Landroid/content/Context;

    .line 251
    const-string v0, "MDMCoreOperation"

    const-string v1, "before InitMDML"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 252
    iget-object v1, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$LoadingTask;->this$0:Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    invoke-static {v1}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->access$700(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;)V

    .line 253
    iget-object v1, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$LoadingTask;->this$0:Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    const/4 v2, 0x0

    aget-object v3, p1, v2

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->access$800(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;Landroid/content/Context;)V

    .line 254
    const-string v1, "after InitMDML"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 255
    iget-object v1, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$LoadingTask;->this$0:Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    aget-object v2, p1, v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->access$900(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;Landroid/content/Context;)V

    .line 256
    const-string v1, "after InitDecoder"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 257
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    return-object v0
.end method

.method protected bridge synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 246
    check-cast p1, [Landroid/content/Context;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$LoadingTask;->doInBackground([Landroid/content/Context;)Ljava/lang/Boolean;

    move-result-object p1

    return-object p1
.end method

.method protected onPostExecute(Ljava/lang/Boolean;)V
    .locals 2
    .param p1, "result"    # Ljava/lang/Boolean;

    .line 262
    const-string v0, "MDMCoreOperation"

    const-string v1, "LoadingTask done"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 263
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$LoadingTask;->this$0:Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    invoke-static {v0}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->access$100(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;)Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$IMDMSeiviceInterface;

    move-result-object v0

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$IMDMSeiviceInterface;->onUpdateMDMStatus(I)V

    .line 264
    return-void
.end method

.method protected bridge synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 0

    .line 246
    check-cast p1, Ljava/lang/Boolean;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$LoadingTask;->onPostExecute(Ljava/lang/Boolean;)V

    return-void
.end method
