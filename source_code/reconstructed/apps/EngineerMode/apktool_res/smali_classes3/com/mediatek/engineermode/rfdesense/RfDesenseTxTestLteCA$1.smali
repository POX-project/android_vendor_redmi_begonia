.class Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA$1;
.super Landroid/os/Handler;
.source "RfDesenseTxTestLteCA.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;

    .line 177
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 5
    .param p1, "msg"    # Landroid/os/Message;

    .line 180
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    const-wide/16 v2, 0x3e8

    const/4 v4, 0x4

    if-eq v0, v1, :cond_4

    const/4 v1, 0x2

    if-eq v0, v1, :cond_2

    if-eq v0, v4, :cond_1

    const/4 v1, 0x5

    if-eq v0, v1, :cond_0

    goto :goto_2

    .line 201
    :cond_0
    const-string v0, "RfDesenseTxTestLteCA"

    const-string v1, "The rf is off"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 202
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->access$302(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;I)I

    .line 203
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;

    invoke-static {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;)V

    .line 204
    goto :goto_2

    .line 198
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;

    invoke-static {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;)V

    .line 199
    goto :goto_2

    .line 190
    :cond_2
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    iget-object v0, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v0, :cond_3

    .line 191
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;

    const-string v1, "PAUSE Command succeeded."

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;Ljava/lang/String;)V

    goto :goto_0

    .line 193
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;

    const-string v1, "PAUSE Command failed."

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;Ljava/lang/String;)V

    .line 195
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;

    invoke-static {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->access$100(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;)Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0, v4, v2, v3}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 196
    goto :goto_2

    .line 182
    :cond_4
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    iget-object v0, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v0, :cond_5

    .line 183
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;

    const-string v1, "START Command succeeded."

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;Ljava/lang/String;)V

    goto :goto_1

    .line 185
    :cond_5
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;

    const-string v1, "START Command failed."

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;Ljava/lang/String;)V

    .line 187
    :goto_1
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;

    invoke-static {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->access$100(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;)Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0, v4, v2, v3}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 188
    nop

    .line 208
    :goto_2
    return-void
.end method
