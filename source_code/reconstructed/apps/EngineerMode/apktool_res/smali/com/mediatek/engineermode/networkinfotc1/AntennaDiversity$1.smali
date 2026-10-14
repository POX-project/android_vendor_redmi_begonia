.class Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity$1;
.super Landroid/os/Handler;
.source "AntennaDiversity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;

    .line 130
    iput-object p1, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity$1;->this$0:Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 6
    .param p1, "msg"    # Landroid/os/Message;

    .line 133
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    const-string v2, "AntennaDiversity"

    if-eq v0, v1, :cond_6

    const/4 v3, 0x2

    const/4 v4, 0x0

    if-eq v0, v3, :cond_4

    const/4 v3, 0x3

    if-eq v0, v3, :cond_2

    const/4 v3, 0x4

    if-eq v0, v3, :cond_0

    goto/16 :goto_1

    .line 172
    :cond_0
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 173
    .local v0, "ar":Landroid/os/AsyncResult;
    iget-object v3, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v3, :cond_1

    .line 174
    const-string v3, "set cdma antenna mode succeed.on/off RF"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 175
    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->setAirplaneModeEnabled(Z)V

    .line 176
    invoke-static {v4}, Lcom/mediatek/engineermode/EmUtils;->setAirplaneModeEnabled(Z)V

    goto/16 :goto_1

    .line 178
    :cond_1
    const-string v1, "set cdma antenna mode failed."

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 180
    goto/16 :goto_1

    .line 164
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :cond_2
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 165
    .restart local v0    # "ar":Landroid/os/AsyncResult;
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_3

    .line 166
    const-string v1, "set 3G/4G antenna mode succeed."

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_1

    .line 168
    :cond_3
    const-string v1, "set 3G/4G antenna mode failed."

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 170
    goto/16 :goto_1

    .line 147
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :cond_4
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 148
    .restart local v0    # "ar":Landroid/os/AsyncResult;
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_5

    .line 149
    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v1, [Ljava/lang/String;

    .line 150
    .local v1, "data":[Ljava/lang/String;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "cdma,data[0] = "

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v5, v1, v4

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 152
    :try_start_0
    aget-object v3, v1, v4

    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity$1;->this$0:Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;

    invoke-static {v4}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->access$200(Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/String;->length()I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v3

    .line 153
    .local v3, "mode":Ljava/lang/String;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "data[0] = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 154
    iget-object v2, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity$1;->this$0:Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v4

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->access$302(Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;I)I

    .line 155
    iget-object v2, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity$1;->this$0:Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;

    invoke-static {v2}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->access$100(Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;)V
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 158
    .end local v3    # "mode":Ljava/lang/String;
    nop

    .line 159
    .end local v1    # "data":[Ljava/lang/String;
    goto :goto_1

    .line 156
    .restart local v1    # "data":[Ljava/lang/String;
    :catch_0
    move-exception v2

    .line 157
    .local v2, "e":Ljava/lang/NumberFormatException;
    return-void

    .line 160
    .end local v1    # "data":[Ljava/lang/String;
    .end local v2    # "e":Ljava/lang/NumberFormatException;
    :cond_5
    const-string v1, "exception"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 162
    goto :goto_1

    .line 135
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :cond_6
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 136
    .restart local v0    # "ar":Landroid/os/AsyncResult;
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_8

    .line 137
    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v1, [Ljava/lang/String;

    .line 138
    .local v1, "result":[Ljava/lang/String;
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    array-length v3, v1

    if-ge v2, v3, :cond_7

    .line 139
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity$1;->this$0:Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;

    aget-object v4, v1, v2

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->access$000(Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;Ljava/lang/String;)V

    .line 138
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 141
    .end local v2    # "i":I
    :cond_7
    iget-object v2, p0, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity$1;->this$0:Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;

    invoke-static {v2}, Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;->access$100(Lcom/mediatek/engineermode/networkinfotc1/AntennaDiversity;)V

    .line 142
    .end local v1    # "result":[Ljava/lang/String;
    goto :goto_1

    .line 143
    :cond_8
    const-string v1, "Query 3G/4G antenna currect mode failed."

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 145
    nop

    .line 184
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :goto_1
    return-void
.end method
