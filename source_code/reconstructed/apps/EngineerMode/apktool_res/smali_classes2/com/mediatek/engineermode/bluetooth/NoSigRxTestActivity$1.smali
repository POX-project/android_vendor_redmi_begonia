.class Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$1;
.super Landroid/os/Handler;
.source "NoSigRxTestActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    .line 148
    iput-object p1, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 12
    .param p1, "msg"    # Landroid/os/Message;

    .line 150
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "receive msg of "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p1, Landroid/os/Message;->what:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BtNoSigRxTest"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 151
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x2

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eq v0, v1, :cond_2

    const/4 v4, 0x4

    if-eq v0, v4, :cond_0

    goto/16 :goto_2

    .line 163
    :cond_0
    iget v0, p1, Landroid/os/Message;->arg1:I

    sget-object v4, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_SUCCESS:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    invoke-virtual {v4}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->ordinal()I

    move-result v4

    if-ne v0, v4, :cond_1

    .line 164
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->access$300(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;)Landroid/widget/TextView;

    move-result-object v0

    iget-object v4, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    invoke-static {v4}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->access$200(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;)[I

    move-result-object v4

    aget v4, v4, v2

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 165
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->access$400(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;)Landroid/widget/TextView;

    move-result-object v0

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    new-array v5, v3, [Ljava/lang/Object;

    iget-object v6, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    .line 166
    invoke-static {v6}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->access$200(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;)[I

    move-result-object v6

    aget v6, v6, v3

    int-to-double v6, v6

    const-wide/high16 v8, 0x4059000000000000L    # 100.0

    div-double/2addr v6, v8

    invoke-static {v6, v7}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v6

    aput-object v6, v5, v2

    .line 165
    const-string v6, "%.2f"

    invoke-static {v6, v5}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "%"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 168
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->access$500(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;)Landroid/widget/TextView;

    move-result-object v0

    iget-object v4, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    invoke-static {v4}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->access$200(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;)[I

    move-result-object v4

    aget v1, v4, v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 169
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->access$600(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;)Landroid/widget/TextView;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    new-array v4, v3, [Ljava/lang/Object;

    iget-object v7, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    .line 170
    invoke-static {v7}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->access$200(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;)[I

    move-result-object v7

    const/4 v10, 0x3

    aget v7, v7, v10

    int-to-double v10, v7

    div-double/2addr v10, v8

    invoke-static {v10, v11}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v7

    aput-object v7, v4, v2

    .line 169
    invoke-static {v6, v4}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 172
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    invoke-static {v0, v3}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->access$100(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;Z)V

    goto :goto_0

    .line 174
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    const v1, 0x7f0a01c1

    .line 175
    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->getText(I)Ljava/lang/CharSequence;

    move-result-object v1

    .line 174
    invoke-static {v0, v1, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 175
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 177
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->removeWaitDlg()V

    .line 178
    goto :goto_2

    .line 153
    :cond_2
    iget v0, p1, Landroid/os/Message;->arg1:I

    sget-object v1, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_TEST_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->ordinal()I

    move-result v1

    if-ne v0, v1, :cond_3

    .line 154
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    const v1, 0x7f0a01c0

    .line 155
    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->getText(I)Ljava/lang/CharSequence;

    move-result-object v1

    .line 154
    invoke-static {v0, v1, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 155
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    goto :goto_1

    .line 157
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->access$100(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;Z)V

    .line 159
    :goto_1
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->removeWaitDlg()V

    .line 160
    nop

    .line 182
    :goto_2
    return-void
.end method
