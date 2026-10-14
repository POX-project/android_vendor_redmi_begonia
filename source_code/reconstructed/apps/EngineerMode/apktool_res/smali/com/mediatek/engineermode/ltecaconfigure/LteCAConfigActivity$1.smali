.class Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity$1;
.super Landroid/os/Handler;
.source "LteCAConfigActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;

    .line 71
    iput-object p1, p0, Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity$1;->this$0:Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 6
    .param p1, "msg"    # Landroid/os/Message;

    .line 74
    const-string v0, "LteCAConfigActivity"

    const-string v1, "Receive msg from modem"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 75
    iget-object v1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v1, Landroid/os/AsyncResult;

    .line 76
    .local v1, "asyncResult":Landroid/os/AsyncResult;
    iget v2, p1, Landroid/os/Message;->what:I

    const/16 v3, 0x65

    if-eq v2, v3, :cond_2

    const/16 v3, 0x66

    if-eq v2, v3, :cond_0

    goto/16 :goto_1

    .line 97
    :cond_0
    iget-object v2, v1, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v2, :cond_1

    .line 98
    iget-object v2, p0, Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity$1;->this$0:Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;

    const-string v3, "set LTE CA Succeed!"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;->access$300(Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;Ljava/lang/String;)V

    .line 99
    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 101
    :cond_1
    iget-object v2, p0, Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity$1;->this$0:Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;

    const-string v3, "set LTE CA failed!"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;->access$300(Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;Ljava/lang/String;)V

    .line 102
    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 104
    goto :goto_1

    .line 79
    :cond_2
    if-eqz v1, :cond_4

    iget-object v2, v1, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v2, :cond_4

    iget-object v2, v1, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v2, :cond_4

    .line 81
    iget-object v2, v1, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v2, [Ljava/lang/String;

    .line 82
    .local v2, "result":[Ljava/lang/String;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Query lte CA status succeed,result = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v4, 0x0

    aget-object v5, v2, v4

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 83
    iget-object v3, p0, Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity$1;->this$0:Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;

    aget-object v4, v2, v4

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;->access$000(Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;Ljava/lang/String;)I

    move-result v3

    .line 84
    .local v3, "mode":I
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "mode = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 85
    const/4 v0, 0x1

    if-nez v3, :cond_3

    .line 86
    iget-object v4, p0, Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity$1;->this$0:Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;

    invoke-static {v4}, Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;->access$100(Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;)Landroid/widget/RadioButton;

    move-result-object v4

    invoke-virtual {v4, v0}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_0

    .line 88
    :cond_3
    iget-object v4, p0, Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity$1;->this$0:Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;

    invoke-static {v4}, Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;->access$200(Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;)Landroid/widget/RadioButton;

    move-result-object v4

    invoke-virtual {v4, v0}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 90
    .end local v2    # "result":[Ljava/lang/String;
    .end local v3    # "mode":I
    :goto_0
    goto :goto_1

    .line 91
    :cond_4
    iget-object v2, p0, Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity$1;->this$0:Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;

    const-string v3, "Query lte CA status failed."

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;->access$300(Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;Ljava/lang/String;)V

    .line 92
    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 94
    nop

    .line 109
    :goto_1
    return-void
.end method
