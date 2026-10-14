.class Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$DemoHandler;
.super Ljava/lang/Object;
.source "ComponentSelectActivity.java"

# interfaces
.implements Lcom/mediatek/mdml/TrapHandlerInterface;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "DemoHandler"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;)V
    .locals 0

    .line 910
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$DemoHandler;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;
    .param p2, "x1"    # Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$1;

    .line 910
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$DemoHandler;-><init>(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;)V

    return-void
.end method


# virtual methods
.method public ProcessTrap(JLcom/mediatek/mdml/TRAP_TYPE;I[BI)V
    .locals 9
    .param p1, "timestamp"    # J
    .param p3, "type"    # Lcom/mediatek/mdml/TRAP_TYPE;
    .param p4, "len"    # I
    .param p5, "data"    # [B
    .param p6, "offset"    # I

    .line 912
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$8;->$SwitchMap$com$mediatek$mdml$TRAP_TYPE:[I

    invoke-virtual {p3}, Lcom/mediatek/mdml/TRAP_TYPE;->ordinal()I

    move-result v1

    aget v0, v0, v1

    const/4 v1, 0x1

    const-string v2, "]"

    const-string v3, "["

    const-string v4, "taskDriver is null, return : "

    const-string v5, "EmInfo/ComponentSelectActivity"

    if-eq v0, v1, :cond_3

    const/4 v1, 0x2

    if-eq v0, v1, :cond_1

    const/4 v1, 0x3

    if-eq v0, v1, :cond_1

    const/4 v1, 0x4

    if-eq v0, v1, :cond_0

    .line 945
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[Unknown Type, Error ...] type: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v5, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_0

    .line 942
    :cond_0
    const-string v0, "[Discard ... ]"

    invoke-static {v5, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 943
    goto/16 :goto_0

    .line 930
    :cond_1
    add-int v0, p4, p6

    invoke-static {p5, p6, v0}, Ljava/util/Arrays;->copyOfRange([BII)[B

    move-result-object v0

    .line 931
    .local v0, "trap_data":[B
    invoke-static {v0}, Ljava/nio/ByteBuffer;->wrap([B)Ljava/nio/ByteBuffer;

    move-result-object v1

    .line 932
    .local v1, "icdPacket":Ljava/nio/ByteBuffer;
    const/4 v6, 0x0

    .line 933
    .local v6, "IcdHeader":Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;
    invoke-static {v1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->DecodeICDPacketHeader(Ljava/nio/ByteBuffer;)Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;

    move-result-object v6

    .line 934
    iget v7, v6, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->msg_id:I

    int-to-long v7, v7

    invoke-static {v7, v8}, Ljava/lang/Long;->toHexString(J)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v7}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v7

    .line 935
    .local v7, "msgIDStr":Ljava/lang/String;
    sget-object v8, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->taskDriver:Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;

    if-nez v8, :cond_2

    .line 936
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v5, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 937
    return-void

    .line 939
    :cond_2
    sget-object v2, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->taskDriver:Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;

    invoke-virtual {v2, v6, v1}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->appendIcdTask(Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;Ljava/nio/ByteBuffer;)V

    .line 940
    goto/16 :goto_0

    .line 914
    .end local v0    # "trap_data":[B
    .end local v1    # "icdPacket":Ljava/nio/ByteBuffer;
    .end local v6    # "IcdHeader":Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;
    .end local v7    # "msgIDStr":Ljava/lang/String;
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$DemoHandler;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getDecoder(Landroid/content/Context;)Lcom/mediatek/mdml/PlainDataDecoder;

    move-result-object v0

    invoke-virtual {v0, p5, p6}, Lcom/mediatek/mdml/PlainDataDecoder;->msgInfo_getMsg([BI)Lcom/mediatek/mdml/Msg;

    move-result-object v0

    .line 915
    .local v0, "EmMsg":Lcom/mediatek/mdml/Msg;
    if-nez v0, :cond_4

    .line 916
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "msg is null in ProcessTrap : "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p5}, Ljava/util/Arrays;->toString([B)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v5, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 917
    return-void

    .line 919
    :cond_4
    invoke-virtual {v0}, Lcom/mediatek/mdml/Msg;->getMsgName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v1

    .line 920
    .local v1, "msgName":Ljava/lang/String;
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$DemoHandler;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    invoke-static {v6}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getDecoder(Landroid/content/Context;)Lcom/mediatek/mdml/PlainDataDecoder;

    move-result-object v6

    invoke-virtual {v6, v1}, Lcom/mediatek/mdml/PlainDataDecoder;->msgInfo_getMsgID(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Integer;->intValue()I

    move-result v6

    .line 921
    .local v6, "msgID":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "msgIDStr: "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, ", msgName: "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v5, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 922
    sget-object v7, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->taskDriver:Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;

    if-nez v7, :cond_5

    .line 923
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v5, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 924
    return-void

    .line 926
    :cond_5
    sget-object v2, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->taskDriver:Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;

    invoke-virtual {v2, v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->appendEmTask(Ljava/lang/Object;I)V

    .line 927
    nop

    .line 948
    .end local v0    # "EmMsg":Lcom/mediatek/mdml/Msg;
    .end local v1    # "msgName":Ljava/lang/String;
    .end local v6    # "msgID":I
    :goto_0
    return-void
.end method
