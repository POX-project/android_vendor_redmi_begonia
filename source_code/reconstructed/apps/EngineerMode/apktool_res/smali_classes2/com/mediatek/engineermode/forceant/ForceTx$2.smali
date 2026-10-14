.class Lcom/mediatek/engineermode/forceant/ForceTx$2;
.super Landroid/os/Handler;
.source "ForceTx.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/forceant/ForceTx;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/forceant/ForceTx;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/forceant/ForceTx;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/forceant/ForceTx;

    .line 237
    iput-object p1, p0, Lcom/mediatek/engineermode/forceant/ForceTx$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 8
    .param p1, "msg"    # Landroid/os/Message;

    .line 240
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 241
    .local v0, "ar":Landroid/os/AsyncResult;
    iget v1, p1, Landroid/os/Message;->what:I

    const-string v2, " AT cmd failed."

    const/4 v3, 0x1

    if-eqz v1, :cond_5

    if-eq v1, v3, :cond_5

    const/4 v4, 0x2

    const/4 v5, 0x4

    if-eq v1, v4, :cond_0

    const/4 v4, 0x3

    if-eq v1, v4, :cond_5

    if-eq v1, v5, :cond_5

    const/4 v4, 0x5

    if-eq v1, v4, :cond_0

    goto/16 :goto_2

    .line 260
    :cond_0
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_4

    .line 261
    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v1, [Ljava/lang/String;

    .line 262
    .local v1, "receiveDate":[Ljava/lang/String;
    new-array v2, v5, [I

    .line 263
    .local v2, "antStateInt":[I
    const/4 v4, 0x0

    if-nez v1, :cond_1

    .line 264
    iget-object v3, p0, Lcom/mediatek/engineermode/forceant/ForceTx$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx;

    const-string v5, "Warning: Received data is null!"

    invoke-static {v3, v5, v4}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v3

    .line 265
    invoke-virtual {v3}, Landroid/widget/Toast;->show()V

    goto/16 :goto_1

    .line 268
    :cond_1
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "receiveDate[0] = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v6, v1, v4

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const-string v6, "ForceTx"

    invoke-static {v6, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 269
    const/4 v5, 0x0

    .line 271
    .local v5, "value":I
    :try_start_0
    aget-object v4, v1, v4

    const-string v7, ","

    invoke-virtual {v4, v7}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v4

    .line 272
    .local v4, "getDigitalVal":[Ljava/lang/String;
    aget-object v7, v4, v3

    invoke-static {v7}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v7
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move v4, v7

    .line 275
    .end local v5    # "value":I
    .local v4, "value":I
    goto :goto_0

    .line 273
    .end local v4    # "value":I
    .restart local v5    # "value":I
    :catch_0
    move-exception v4

    .line 274
    .local v4, "e":Ljava/lang/Exception;
    const/4 v5, 0x0

    move v4, v5

    .line 277
    .end local v5    # "value":I
    .local v4, "value":I
    :goto_0
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "value = "

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v6, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 279
    const/16 v5, 0xff

    if-eq v4, v5, :cond_3

    .line 280
    iget-object v5, p0, Lcom/mediatek/engineermode/forceant/ForceTx$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx;

    invoke-virtual {v5}, Lcom/mediatek/engineermode/forceant/ForceTx;->queryTasIdxLabels()V

    .line 281
    iget-object v5, p0, Lcom/mediatek/engineermode/forceant/ForceTx$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx;

    invoke-static {v5}, Lcom/mediatek/engineermode/forceant/ForceTx;->access$600(Lcom/mediatek/engineermode/forceant/ForceTx;)Landroid/widget/Spinner;

    move-result-object v5

    invoke-virtual {v5}, Landroid/widget/Spinner;->getCount()I

    move-result v5

    if-ge v4, v5, :cond_2

    .line 282
    iget-object v3, p0, Lcom/mediatek/engineermode/forceant/ForceTx$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx;

    invoke-static {v3}, Lcom/mediatek/engineermode/forceant/ForceTx;->access$600(Lcom/mediatek/engineermode/forceant/ForceTx;)Landroid/widget/Spinner;

    move-result-object v3

    invoke-virtual {v3, v4}, Landroid/widget/Spinner;->setSelection(I)V

    goto :goto_1

    .line 285
    :cond_2
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "The return idx == "

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, " not match the version or dpdt "

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 287
    .local v5, "msg1":Ljava/lang/String;
    iget-object v7, p0, Lcom/mediatek/engineermode/forceant/ForceTx$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx;

    invoke-static {v7, v5, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v3

    invoke-virtual {v3}, Landroid/widget/Toast;->show()V

    .line 288
    invoke-static {v6, v5}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 289
    .end local v5    # "msg1":Ljava/lang/String;
    goto :goto_1

    .line 292
    :cond_3
    iget-object v3, p0, Lcom/mediatek/engineermode/forceant/ForceTx$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx;

    invoke-static {v3}, Lcom/mediatek/engineermode/forceant/ForceTx;->access$100(Lcom/mediatek/engineermode/forceant/ForceTx;)Landroid/widget/EditText;

    move-result-object v3

    const-string v5, "disabled"

    invoke-virtual {v3, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 296
    .end local v1    # "receiveDate":[Ljava/lang/String;
    .end local v2    # "antStateInt":[I
    .end local v4    # "value":I
    :goto_1
    goto :goto_2

    .line 297
    :cond_4
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx;

    invoke-static {v1, v2, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    .line 299
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 301
    goto :goto_2

    .line 247
    :cond_5
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-eqz v1, :cond_6

    .line 248
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx;

    invoke-static {v1, v2, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    .line 250
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    goto :goto_2

    .line 252
    :cond_6
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx;

    const-string v2, " AT cmd successfully."

    invoke-static {v1, v2, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    .line 254
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 256
    nop

    .line 305
    :goto_2
    return-void
.end method
