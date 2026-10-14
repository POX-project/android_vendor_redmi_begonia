.class Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$SubscribeTask;
.super Landroid/os/AsyncTask;
.source "MDMCoreOperation.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "SubscribeTask"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/os/AsyncTask<",
        "Ljava/lang/Void;",
        "Ljava/lang/Void;",
        "Ljava/lang/Boolean;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;)V
    .locals 0

    .line 264
    iput-object p1, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$SubscribeTask;->this$0:Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;
    .param p2, "x1"    # Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$1;

    .line 264
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$SubscribeTask;-><init>(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;)V

    return-void
.end method


# virtual methods
.method protected varargs doInBackground([Ljava/lang/Void;)Ljava/lang/Boolean;
    .locals 1
    .param p1, "params"    # [Ljava/lang/Void;

    .line 267
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$SubscribeTask;->this$0:Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    invoke-static {v0}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->access$1000(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;)V

    .line 268
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    return-object v0
.end method

.method protected bridge synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 264
    check-cast p1, [Ljava/lang/Void;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$SubscribeTask;->doInBackground([Ljava/lang/Void;)Ljava/lang/Boolean;

    move-result-object p1

    return-object p1
.end method

.method protected onPostExecute(Ljava/lang/Boolean;)V
    .locals 2
    .param p1, "result"    # Ljava/lang/Boolean;

    .line 273
    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 274
    const-string v0, "MDMCoreOperation"

    const-string v1, "onSubscribeTrap done"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 275
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$SubscribeTask;->this$0:Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    invoke-static {v0}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->access$100(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;)Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$IMDMSeiviceInterface;

    move-result-object v0

    const/4 v1, 0x1

    invoke-interface {v0, v1}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$IMDMSeiviceInterface;->onUpdateMDMStatus(I)V

    .line 277
    :cond_0
    return-void
.end method

.method protected bridge synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 0

    .line 264
    check-cast p1, Ljava/lang/Boolean;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$SubscribeTask;->onPostExecute(Ljava/lang/Boolean;)V

    return-void
.end method
