.class Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$2;
.super Landroid/os/Handler;
.source "NetworkInfoInfomation.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    .line 121
    iput-object p1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$2;->this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 10
    .param p1, "msg"    # Landroid/os/Message;

    .line 124
    iget v0, p1, Landroid/os/Message;->what:I

    const-string v1, "data[0] is null"

    const/4 v2, 0x3

    const/4 v3, 0x2

    const/16 v4, 0x8

    const/4 v5, 0x0

    const/4 v6, 0x1

    const-string v7, "NetworkInfo/Infomation"

    if-eq v0, v6, :cond_e

    if-eq v0, v3, :cond_3

    if-eq v0, v2, :cond_12

    const/4 v1, 0x4

    if-eq v0, v1, :cond_12

    if-eq v0, v4, :cond_2

    const/16 v1, 0x9

    if-eq v0, v1, :cond_0

    goto/16 :goto_5

    .line 163
    :cond_0
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 164
    .local v0, "ar":Landroid/os/AsyncResult;
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-eqz v1, :cond_1

    .line 165
    const-string v1, "MSG_NW_INFO_CDMA_SET fail."

    invoke-static {v7, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_5

    .line 167
    :cond_1
    const-string v1, "AT+ETXANT=2,4"

    const-string v2, "+ETXANT"

    filled-new-array {v1, v2}, [Ljava/lang/String;

    move-result-object v1

    .line 168
    .local v1, "atCommand":[Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$2;->this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    const/4 v3, 0x7

    invoke-static {v2, v1, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->access$500(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;[Ljava/lang/String;I)V

    .line 170
    .end local v1    # "atCommand":[Ljava/lang/String;
    goto/16 :goto_5

    .line 157
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :cond_2
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 158
    .restart local v0    # "ar":Landroid/os/AsyncResult;
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-eqz v1, :cond_13

    .line 159
    const-string v1, "MSG_NW_INFO_CDMA_ENABLE fail"

    invoke-static {v7, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_5

    .line 172
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :cond_3
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 173
    .restart local v0    # "ar":Landroid/os/AsyncResult;
    iget-object v2, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v2, [Ljava/lang/String;

    .line 174
    .local v2, "data":[Ljava/lang/String;
    array-length v3, v2

    if-lez v3, :cond_d

    aget-object v3, v2, v5

    if-eqz v3, :cond_d

    aget-object v3, v2, v6

    if-nez v3, :cond_4

    goto/16 :goto_2

    .line 179
    :cond_4
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Receive URC: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v3, v2, v5

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ", "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v3, v2, v6

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v7, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 181
    const/4 v1, -0x1

    .line 183
    .local v1, "type":I
    :try_start_0
    aget-object v3, v2, v5

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    move v1, v3

    .line 188
    nop

    .line 189
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v3

    if-eqz v3, :cond_5

    .line 190
    const/16 v3, 0x3e8

    invoke-static {v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->access$602(I)I

    goto :goto_0

    .line 192
    :cond_5
    const/16 v3, 0x2710

    invoke-static {v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->access$602(I)I

    .line 194
    :goto_0
    invoke-static {}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->access$600()I

    move-result v3

    const-string v4, "Invalid return type: "

    if-ne v3, v1, :cond_8

    .line 195
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$2;->this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    aget-object v5, v2, v6

    invoke-virtual {v5}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v5

    invoke-static {v3, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->access$700(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;Ljava/lang/String;)I

    move-result v3

    .line 196
    .local v3, "cdmaType":I
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "cdmaType: "

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v7, v5}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 197
    iget-object v5, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$2;->this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    invoke-static {v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->access$800(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;)Ljava/util/HashMap;

    move-result-object v5

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    invoke-virtual {v5, v8}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    .line 198
    .local v5, "item":Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;
    if-nez v5, :cond_6

    .line 199
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v7, v4}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 200
    return-void

    .line 202
    :cond_6
    aget-object v4, v2, v6

    iput-object v4, v5, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;->info:Ljava/lang/String;

    .line 203
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$2;->this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    invoke-static {v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->access$300(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;)[I

    move-result-object v4

    iget-object v6, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$2;->this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    invoke-static {v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->access$900(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;)I

    move-result v6

    aget v4, v4, v6

    if-ne v4, v3, :cond_7

    .line 204
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$2;->this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    invoke-static {v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->access$000(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;)V

    .line 206
    .end local v3    # "cdmaType":I
    .end local v5    # "item":Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;
    :cond_7
    goto/16 :goto_5

    .line 207
    :cond_8
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$2;->this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    invoke-static {v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->access$800(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;)Ljava/util/HashMap;

    move-result-object v3

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    .line 208
    .local v3, "item":Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;
    if-nez v3, :cond_9

    .line 209
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v7, v4}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 210
    return-void

    .line 212
    :cond_9
    const/16 v4, 0x46

    if-ne v1, v4, :cond_a

    .line 214
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$2;->this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    iget-object v5, v3, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;->info:Ljava/lang/String;

    aget-object v8, v2, v6

    invoke-static {v4, v5, v8}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->access$1000(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    iput-object v4, v3, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;->info:Ljava/lang/String;

    goto :goto_1

    .line 216
    :cond_a
    aget-object v4, v2, v6

    iput-object v4, v3, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;->info:Ljava/lang/String;

    .line 218
    :goto_1
    iget v4, v3, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;->size:I

    aget-object v5, v2, v6

    invoke-virtual {v5}, Ljava/lang/String;->length()I

    move-result v5

    if-eq v4, v5, :cond_b

    .line 219
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Wrong return length: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v5, v2, v6

    invoke-virtual {v5}, Ljava/lang/String;->length()I

    move-result v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v7, v4}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 221
    :cond_b
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$2;->this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    invoke-static {v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->access$300(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;)[I

    move-result-object v4

    iget-object v5, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$2;->this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    invoke-static {v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->access$900(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;)I

    move-result v5

    aget v4, v4, v5

    if-ne v4, v1, :cond_c

    .line 222
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$2;->this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    invoke-static {v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->access$000(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;)V

    .line 225
    .end local v3    # "item":Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;
    :cond_c
    goto/16 :goto_5

    .line 184
    :catch_0
    move-exception v3

    .line 185
    .local v3, "e":Ljava/lang/NumberFormatException;
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$2;->this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    const-string v6, "Return type error"

    invoke-static {v4, v6, v5}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v4

    .line 186
    invoke-virtual {v4}, Landroid/widget/Toast;->show()V

    .line 187
    return-void

    .line 175
    .end local v1    # "type":I
    .end local v3    # "e":Ljava/lang/NumberFormatException;
    :cond_d
    :goto_2
    invoke-static {v7, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 176
    return-void

    .line 126
    .end local v0    # "ar":Landroid/os/AsyncResult;
    .end local v2    # "data":[Ljava/lang/String;
    :cond_e
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 127
    .restart local v0    # "ar":Landroid/os/AsyncResult;
    iget-object v8, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v8, :cond_12

    .line 128
    iget-object v8, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v8, [Ljava/lang/String;

    .line 129
    .local v8, "data":[Ljava/lang/String;
    array-length v9, v8

    if-lez v9, :cond_11

    aget-object v9, v8, v5

    if-nez v9, :cond_f

    goto/16 :goto_4

    .line 133
    :cond_f
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "data[0] is : "

    invoke-virtual {v1, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v9, v8, v5

    invoke-virtual {v1, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v7, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 134
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "flag is : "

    invoke-virtual {v1, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v9, v8, v5

    invoke-virtual {v9, v4}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v1, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v7, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 135
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$2;->this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    aget-object v9, v8, v5

    invoke-virtual {v9, v4}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v9

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v9

    invoke-virtual {v9}, Ljava/lang/Integer;->intValue()I

    move-result v9

    invoke-static {v1, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->access$102(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;I)I

    .line 136
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$2;->this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    invoke-static {v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->access$100(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;)I

    move-result v9

    or-int/2addr v4, v9

    invoke-static {v1, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->access$102(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;I)I

    .line 137
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "flag change is : "

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$2;->this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    invoke-static {v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->access$100(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;)I

    move-result v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v7, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 138
    const/4 v1, 0x0

    .local v1, "j":I
    :goto_3
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$2;->this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    invoke-static {v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->access$200(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;)I

    move-result v4

    if-ge v1, v4, :cond_12

    .line 139
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$2;->this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    invoke-static {v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->access$300(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;)[I

    move-result-object v4

    aget v4, v4, v1

    const/16 v7, 0x12c

    if-ge v4, v7, :cond_10

    .line 140
    new-array v4, v3, [Ljava/lang/String;

    .line 141
    .local v4, "atCommand":[Ljava/lang/String;
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "AT+EINFO="

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v9, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$2;->this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    invoke-static {v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->access$100(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;)I

    move-result v9

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, ","

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v9, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$2;->this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    invoke-static {v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->access$300(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;)[I

    move-result-object v9

    aget v9, v9, v1

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, ",0"

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    aput-object v7, v4, v5

    .line 142
    const-string v7, "+EINFO"

    aput-object v7, v4, v6

    .line 143
    iget-object v7, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$2;->this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    invoke-static {v7, v4, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->access$400(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;[Ljava/lang/String;I)V

    .line 138
    .end local v4    # "atCommand":[Ljava/lang/String;
    :cond_10
    add-int/lit8 v1, v1, 0x1

    goto :goto_3

    .line 130
    .end local v1    # "j":I
    :cond_11
    :goto_4
    invoke-static {v7, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 131
    return-void

    .line 150
    .end local v0    # "ar":Landroid/os/AsyncResult;
    .end local v8    # "data":[Ljava/lang/String;
    :cond_12
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 151
    .restart local v0    # "ar":Landroid/os/AsyncResult;
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-eqz v1, :cond_13

    .line 152
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$2;->this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    const v2, 0x7f0a05a3

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v5}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    .line 229
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :cond_13
    :goto_5
    return-void
.end method
