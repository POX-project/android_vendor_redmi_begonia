.class public Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmLoopbackRsp;
.super Ljava/lang/Object;
.source "NfcEmReqRsp.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "NfcEmLoopbackRsp"
.end annotation


# static fields
.field public static final CONTENT_SIZE:I = 0x1


# instance fields
.field public mResult:B


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 143
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getContentSize()I
    .locals 1

    .line 159
    const/4 v0, 0x1

    return v0
.end method

.method public readRaw(Ljava/nio/ByteBuffer;)V
    .locals 2
    .param p1, "buffer"    # Ljava/nio/ByteBuffer;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/NullPointerException;,
            Ljava/nio/BufferUnderflowException;
        }
    .end annotation

    .line 149
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->get()B

    move-result v0

    iput-byte v0, p0, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmLoopbackRsp;->mResult:B

    .line 150
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "NfcEmLoopbackRsp result: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-byte v1, p0, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmLoopbackRsp;->mResult:B

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Nfc"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 151
    return-void
.end method

.method public writeRaw(Ljava/nio/ByteBuffer;)V
    .locals 1
    .param p1, "buffer"    # Ljava/nio/ByteBuffer;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/NullPointerException;,
            Ljava/nio/BufferOverflowException;
        }
    .end annotation

    .line 155
    iget-byte v0, p0, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmLoopbackRsp;->mResult:B

    invoke-virtual {p1, v0}, Ljava/nio/ByteBuffer;->put(B)Ljava/nio/ByteBuffer;

    .line 156
    return-void
.end method
