.class Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$2;
.super Landroid/os/Handler;
.source "MDMComponentDetailActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->onCreate(Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    .line 176
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$2;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 13
    .param p1, "msg"    # Landroid/os/Message;

    .line 178
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Lcom/mediatek/engineermode/mdmcomponent/Task;

    .line 179
    .local v0, "task":Lcom/mediatek/engineermode/mdmcomponent/Task;
    iget v1, p1, Landroid/os/Message;->what:I

    const-string v2, ",getSimIdx = "

    const-string v3, ",Protocol = "

    const-string v4, "] msgIDStr = "

    const-string v5, "EmInfo/MDMComponentDetailActivity"

    const/4 v6, 0x1

    if-eq v1, v6, :cond_5

    const/4 v7, 0x3

    if-eq v1, v7, :cond_0

    .line 229
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Unsupported op: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Landroid/os/Message;->what:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v5, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_2

    .line 181
    :cond_0
    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/Task;->getExtraMsg()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 182
    .local v1, "msgObj":Lcom/mediatek/mdml/Msg;
    if-eqz v1, :cond_4

    .line 183
    invoke-virtual {v1}, Lcom/mediatek/mdml/Msg;->getMsgName()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v7}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v7

    .line 184
    .local v7, "name":Ljava/lang/String;
    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$2;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-static {v8}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getDecoder(Landroid/content/Context;)Lcom/mediatek/mdml/PlainDataDecoder;

    move-result-object v8

    .line 185
    invoke-virtual {v8, v7}, Lcom/mediatek/mdml/PlainDataDecoder;->msgInfo_getMsgID(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v8

    .line 184
    invoke-virtual {v8}, Ljava/lang/Integer;->intValue()I

    move-result v8

    .line 186
    .local v8, "msgID":I
    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$2;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    iget-object v9, v9, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mComponents:Ljava/util/List;

    invoke-interface {v9}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v9

    :goto_0
    invoke-interface {v9}, Ljava/util/Iterator;->hasNext()Z

    move-result v10

    if-eqz v10, :cond_3

    invoke-interface {v9}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;

    .line 187
    .local v10, "c":Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;
    invoke-virtual {v10, v7}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->hasEmType(Ljava/lang/String;)Z

    move-result v11

    if-eqz v11, :cond_2

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->access$100()Z

    move-result v11

    if-ne v11, v6, :cond_2

    .line 188
    invoke-virtual {v1}, Lcom/mediatek/mdml/Msg;->getSimIdx()I

    move-result v11

    sget v12, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mModemType:I

    if-eq v11, v12, :cond_1

    sget-object v11, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mSelected_show_both_sim:Ljava/util/Set;

    .line 190
    invoke-virtual {v10}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getName()Ljava/lang/String;

    move-result-object v12

    invoke-interface {v11, v12}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v11

    if-nez v11, :cond_1

    .line 191
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "EM Msg has an unSelected sim, ["

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getName()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mModemType:I

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 192
    invoke-virtual {v1}, Lcom/mediatek/mdml/Msg;->getSimIdx()I

    move-result v2

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", msg: "

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    int-to-long v2, v8

    .line 193
    invoke-static {v2, v3}, Ljava/lang/Long;->toHexString(J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 191
    invoke-static {v5, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 195
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$2;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-virtual {v2, v6}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->taskExcute(I)V

    .line 196
    return-void

    .line 198
    :cond_1
    invoke-virtual {v10, v7, v1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->update(Ljava/lang/String;Ljava/lang/Object;)V

    .line 200
    .end local v10    # "c":Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;
    :cond_2
    goto :goto_0

    .line 201
    .end local v7    # "name":Ljava/lang/String;
    .end local v8    # "msgID":I
    :cond_3
    goto/16 :goto_2

    .line 202
    :cond_4
    const-string v2, "msgObj is null"

    invoke-static {v5, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 204
    goto/16 :goto_2

    .line 206
    .end local v1    # "msgObj":Lcom/mediatek/mdml/Msg;
    :cond_5
    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/Task;->getExtraMsg()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/nio/ByteBuffer;

    .line 207
    .local v1, "icdPacket":Ljava/nio/ByteBuffer;
    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/Task;->getIcdHeader()Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;

    move-result-object v7

    .line 208
    .local v7, "IcdHeader":Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;
    iget v8, v7, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->msg_id:I

    int-to-long v8, v8

    invoke-static {v8, v9}, Ljava/lang/Long;->toHexString(J)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v8}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v8

    .line 214
    .local v8, "msgIDStr":Ljava/lang/String;
    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$2;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    iget-object v9, v9, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mComponents:Ljava/util/List;

    invoke-interface {v9}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v9

    :goto_1
    invoke-interface {v9}, Ljava/util/Iterator;->hasNext()Z

    move-result v10

    if-eqz v10, :cond_8

    invoke-interface {v9}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;

    .line 215
    .restart local v10    # "c":Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;
    invoke-virtual {v10, v8}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->hasEmType(Ljava/lang/String;)Z

    move-result v11

    if-eqz v11, :cond_7

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->access$100()Z

    move-result v11

    if-ne v11, v6, :cond_7

    .line 216
    iget v11, v7, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->protocol_id:I

    sget v12, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mModemType:I

    if-eq v11, v12, :cond_6

    .line 217
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "ICD Msg has an unSelected sim, ["

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->getName()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ",Slot = "

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v4, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mSimType:I

    add-int/2addr v4, v6

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mModemType:I

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, v7, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->protocol_id:I

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v5, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 221
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$2;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-virtual {v2, v6}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->taskExcute(I)V

    .line 222
    return-void

    .line 224
    :cond_6
    invoke-virtual {v10, v8, v1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;->update(Ljava/lang/String;Ljava/lang/Object;)V

    .line 226
    .end local v10    # "c":Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;
    :cond_7
    goto :goto_1

    .line 227
    :cond_8
    nop

    .line 232
    .end local v1    # "icdPacket":Ljava/nio/ByteBuffer;
    .end local v7    # "IcdHeader":Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;
    .end local v8    # "msgIDStr":Ljava/lang/String;
    :goto_2
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$2;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-virtual {v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->taskExcute(I)V

    .line 233
    return-void
.end method
