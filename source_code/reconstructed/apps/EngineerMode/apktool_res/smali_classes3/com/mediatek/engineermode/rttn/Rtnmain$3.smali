.class Lcom/mediatek/engineermode/rttn/Rtnmain$3;
.super Landroid/os/Handler;
.source "Rtnmain.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/rttn/Rtnmain;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rttn/Rtnmain;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/rttn/Rtnmain;

    .line 883
    iput-object p1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$3;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 3
    .param p1, "msg"    # Landroid/os/Message;

    .line 887
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_2

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    goto :goto_2

    .line 889
    :cond_0
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 890
    .local v0, "ar":Landroid/os/AsyncResult;
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_1

    .line 892
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v1

    const-string v2, "Event_reset_mdn: fail "

    invoke-static {v1, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 896
    :cond_1
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v1

    const-string v2, "Event_reset_mdn: success "

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 898
    :goto_0
    new-instance v1, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;

    iget-object v2, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$3;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-direct {v1, v2}, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain;)V

    const-string v2, "Rtnmain"

    filled-new-array {v2}, [Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 900
    goto :goto_2

    .line 902
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :cond_2
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 903
    .restart local v0    # "ar":Landroid/os/AsyncResult;
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_3

    .line 905
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v1

    const-string v2, "Event_set_mdn: fail "

    invoke-static {v1, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_1

    .line 909
    :cond_3
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v1

    const-string v2, "Event_set_mdn: success "

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 911
    :goto_1
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$3;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->Masterclear()V

    .line 912
    nop

    .line 916
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :goto_2
    return-void
.end method
