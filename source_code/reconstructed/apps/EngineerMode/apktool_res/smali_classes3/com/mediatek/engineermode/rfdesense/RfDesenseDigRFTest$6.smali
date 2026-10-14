.class Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$6;
.super Landroid/os/Handler;
.source "RfDesenseDigRFTest.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    .line 286
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$6;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 6
    .param p1, "msg"    # Landroid/os/Message;

    .line 290
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x3

    const/4 v2, 0x2

    const/4 v3, 0x0

    const/4 v4, 0x1

    if-eqz v0, :cond_7

    if-eq v0, v4, :cond_8

    const-string v5, "RfDesenseDigRFTest"

    if-eq v0, v2, :cond_5

    if-eq v0, v1, :cond_4

    const/4 v1, 0x5

    if-eq v0, v1, :cond_3

    const/4 v1, 0x6

    if-eq v0, v1, :cond_2

    const/4 v1, 0x7

    if-eq v0, v1, :cond_0

    goto/16 :goto_2

    .line 326
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$6;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    iget-object v0, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->oneResult:[Z

    aget-boolean v0, v0, v3

    if-eqz v0, :cond_1

    .line 327
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$6;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    const-string v1, "AT+EGCMD=4896,1,\"05\""

    invoke-static {v0, v1, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$600(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;Ljava/lang/String;I)V

    goto/16 :goto_2

    .line 329
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$6;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-static {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$700(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)V

    .line 331
    goto/16 :goto_2

    .line 321
    :cond_2
    const-string v0, "The rf is off"

    invoke-static {v5, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 322
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$6;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-static {v0, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$202(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;I)I

    .line 323
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$6;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-static {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$900(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)V

    .line 324
    goto :goto_2

    .line 318
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$6;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-static {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$900(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)V

    .line 319
    goto :goto_2

    .line 306
    :cond_4
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$6;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$202(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;I)I

    .line 307
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$6;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-static {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$900(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)V

    .line 309
    :cond_5
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    iget-object v0, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v0, :cond_6

    .line 310
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$6;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    iget-object v0, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->oneResult:[Z

    aput-boolean v4, v0, v4

    goto :goto_0

    .line 312
    :cond_6
    const-string v0, "CLOSE Command failed."

    invoke-static {v5, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 313
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$6;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    iget-object v0, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->oneResult:[Z

    aput-boolean v3, v0, v4

    .line 315
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$6;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-static {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$700(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)V

    .line 316
    goto :goto_2

    .line 292
    :cond_7
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$6;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-static {v0, v4}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$202(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;I)I

    .line 293
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$6;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-static {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$900(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)V

    .line 295
    :cond_8
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    iget-object v0, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v0, :cond_a

    .line 296
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$6;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-static {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)I

    move-result v0

    if-eq v0, v2, :cond_9

    .line 297
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$6;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$202(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;I)I

    .line 298
    :cond_9
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$6;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    iget-object v0, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->oneResult:[Z

    aput-boolean v4, v0, v3

    goto :goto_1

    .line 300
    :cond_a
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$6;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    const-string v1, "OPEN Command failed."

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$1000(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;Ljava/lang/String;)V

    .line 301
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$6;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    iget-object v0, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->oneResult:[Z

    aput-boolean v3, v0, v3

    .line 303
    :goto_1
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$6;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-static {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$1100(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->startTimer(I)V

    .line 304
    nop

    .line 335
    :goto_2
    return-void
.end method
