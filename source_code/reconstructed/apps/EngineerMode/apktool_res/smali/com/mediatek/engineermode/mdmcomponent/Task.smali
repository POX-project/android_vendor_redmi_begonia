.class Lcom/mediatek/engineermode/mdmcomponent/Task;
.super Ljava/lang/Object;
.source "UpdateTaskDriven.java"


# instance fields
.field mIcdHeader:Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;

.field mMsg:Ljava/lang/Object;

.field private mMsgId:I

.field private mTaskId:I

.field private mType:I


# direct methods
.method public constructor <init>(I)V
    .locals 1
    .param p1, "taskId"    # I

    .line 259
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 253
    const/4 v0, -0x1

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mTaskId:I

    .line 254
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mType:I

    .line 255
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mMsgId:I

    .line 256
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mMsg:Ljava/lang/Object;

    .line 257
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mIcdHeader:Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;

    .line 260
    iput p1, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mTaskId:I

    .line 261
    return-void
.end method

.method public constructor <init>(ILcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;Ljava/nio/ByteBuffer;I)V
    .locals 1
    .param p1, "taskId"    # I
    .param p2, "IcdHeader"    # Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;
    .param p3, "icdPacket"    # Ljava/nio/ByteBuffer;
    .param p4, "type"    # I

    .line 262
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 253
    const/4 v0, -0x1

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mTaskId:I

    .line 254
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mType:I

    .line 255
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mMsgId:I

    .line 256
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mMsg:Ljava/lang/Object;

    .line 257
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mIcdHeader:Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;

    .line 263
    iput p1, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mTaskId:I

    .line 264
    iput-object p2, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mIcdHeader:Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;

    .line 265
    iput-object p3, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mMsg:Ljava/lang/Object;

    .line 266
    iput p4, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mType:I

    .line 267
    iget v0, p2, Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;->msg_id:I

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mMsgId:I

    .line 268
    return-void
.end method

.method public constructor <init>(ILjava/lang/Object;II)V
    .locals 1
    .param p1, "taskId"    # I
    .param p2, "emMsg"    # Ljava/lang/Object;
    .param p3, "msgId"    # I
    .param p4, "type"    # I

    .line 269
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 253
    const/4 v0, -0x1

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mTaskId:I

    .line 254
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mType:I

    .line 255
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mMsgId:I

    .line 256
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mMsg:Ljava/lang/Object;

    .line 257
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mIcdHeader:Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;

    .line 270
    iput p1, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mTaskId:I

    .line 271
    iput-object p2, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mMsg:Ljava/lang/Object;

    .line 272
    iput p4, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mType:I

    .line 273
    iput p3, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mMsgId:I

    .line 274
    return-void
.end method


# virtual methods
.method public getExtraMsg()Ljava/lang/Object;
    .locals 1

    .line 285
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mMsg:Ljava/lang/Object;

    return-object v0
.end method

.method public getIcdHeader()Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;
    .locals 1

    .line 282
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mIcdHeader:Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;

    return-object v0
.end method

.method public getMsgId()I
    .locals 1

    .line 279
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mMsgId:I

    return v0
.end method

.method public getTaskId()I
    .locals 1

    .line 276
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mTaskId:I

    return v0
.end method

.method public getType()I
    .locals 1

    .line 288
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mType:I

    return v0
.end method

.method public setmType(I)V
    .locals 0
    .param p1, "mType"    # I

    .line 291
    iput p1, p0, Lcom/mediatek/engineermode/mdmcomponent/Task;->mType:I

    .line 292
    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 3

    .line 295
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "id:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/Task;->getTaskId()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", type:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/Task;->getType()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", msgId: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/Task;->getMsgId()I

    move-result v1

    int-to-long v1, v1

    invoke-static {v1, v2}, Ljava/lang/Long;->toHexString(J)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
