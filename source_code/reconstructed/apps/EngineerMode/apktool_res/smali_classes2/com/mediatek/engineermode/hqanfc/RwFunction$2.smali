.class Lcom/mediatek/engineermode/hqanfc/RwFunction$2;
.super Landroid/os/Handler;
.source "RwFunction.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/hqanfc/RwFunction;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/hqanfc/RwFunction;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/hqanfc/RwFunction;

    .line 85
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 6
    .param p1, "msg"    # Landroid/os/Message;

    .line 87
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 88
    const/4 v0, 0x0

    .line 89
    .local v0, "toastMsg":Ljava/lang/String;
    iget v1, p1, Landroid/os/Message;->what:I

    const/4 v2, 0x0

    const/4 v3, 0x1

    const/16 v4, 0x12c

    if-ne v4, v1, :cond_2

    .line 90
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->access$100(Lcom/mediatek/engineermode/hqanfc/RwFunction;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;

    move-result-object v1

    iget v1, v1, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;->mResult:I

    if-eqz v1, :cond_1

    if-eq v1, v3, :cond_0

    .line 101
    const-string v0, "Rw Format Rsp Result: ERROR"

    .line 102
    goto/16 :goto_0

    .line 98
    :cond_0
    const-string v0, "Rw Format Rsp Result: FAIL"

    .line 99
    goto/16 :goto_0

    .line 92
    :cond_1
    const-string v0, "Rw Format Rsp Result: SUCCESS"

    .line 93
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->access$500(Lcom/mediatek/engineermode/hqanfc/RwFunction;)Landroid/widget/Button;

    move-result-object v1

    invoke-virtual {v1, v2}, Landroid/widget/Button;->setEnabled(Z)V

    .line 94
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->access$600(Lcom/mediatek/engineermode/hqanfc/RwFunction;)Landroid/widget/Button;

    move-result-object v1

    invoke-virtual {v1, v3}, Landroid/widget/Button;->setEnabled(Z)V

    .line 95
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->access$700(Lcom/mediatek/engineermode/hqanfc/RwFunction;)Landroid/widget/Button;

    move-result-object v1

    invoke-virtual {v1, v3}, Landroid/widget/Button;->setEnabled(Z)V

    .line 96
    goto/16 :goto_0

    .line 105
    :cond_2
    iget v1, p1, Landroid/os/Message;->what:I

    const/16 v4, 0x64

    if-ne v4, v1, :cond_a

    .line 106
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->access$300(Lcom/mediatek/engineermode/hqanfc/RwFunction;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

    move-result-object v1

    iget v1, v1, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;->mResult:I

    const/4 v4, 0x2

    if-eqz v1, :cond_7

    const/4 v5, 0x3

    if-eq v1, v3, :cond_5

    if-eq v1, v4, :cond_4

    .line 140
    const-string v0, "Tag is not NDEF format"

    .line 141
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->access$000(Lcom/mediatek/engineermode/hqanfc/RwFunction;)[B

    move-result-object v1

    if-nez v1, :cond_3

    .line 142
    const-string v0, "Not get the response"

    .line 143
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->finish()V

    goto/16 :goto_0

    .line 145
    :cond_3
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-static {v1, v5}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->access$800(Lcom/mediatek/engineermode/hqanfc/RwFunction;I)V

    .line 146
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->access$900(Lcom/mediatek/engineermode/hqanfc/RwFunction;)V

    .line 148
    goto/16 :goto_0

    .line 121
    :cond_4
    const-string v0, "ReaderMode Ntf Result: DISCONNECT"

    .line 125
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    const/4 v3, 0x4

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->access$800(Lcom/mediatek/engineermode/hqanfc/RwFunction;I)V

    .line 126
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->access$1000(Lcom/mediatek/engineermode/hqanfc/RwFunction;)Landroid/widget/TextView;

    move-result-object v1

    .line 127
    const-string v3, "Tag disconnect...and re-polling..."

    invoke-virtual {v1, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 128
    goto/16 :goto_0

    .line 130
    :cond_5
    const-string v0, "ReaderMode Ntf Result: FAIL"

    .line 131
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->access$000(Lcom/mediatek/engineermode/hqanfc/RwFunction;)[B

    move-result-object v1

    if-nez v1, :cond_6

    .line 132
    const-string v0, "Not get the response"

    .line 133
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->finish()V

    goto/16 :goto_0

    .line 135
    :cond_6
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-static {v1, v5}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->access$800(Lcom/mediatek/engineermode/hqanfc/RwFunction;I)V

    .line 136
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->access$900(Lcom/mediatek/engineermode/hqanfc/RwFunction;)V

    .line 138
    goto :goto_0

    .line 108
    :cond_7
    const-string v0, "ReaderMode Ntf Result: CONNECT"

    .line 109
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->access$300(Lcom/mediatek/engineermode/hqanfc/RwFunction;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

    move-result-object v1

    iget v1, v1, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;->mIsNdef:I

    if-eqz v1, :cond_8

    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->access$300(Lcom/mediatek/engineermode/hqanfc/RwFunction;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

    move-result-object v1

    iget v1, v1, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;->mIsNdef:I

    if-eq v1, v3, :cond_8

    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    .line 110
    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->access$300(Lcom/mediatek/engineermode/hqanfc/RwFunction;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

    move-result-object v1

    iget v1, v1, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;->mIsNdef:I

    if-ne v1, v4, :cond_c

    .line 111
    :cond_8
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->access$000(Lcom/mediatek/engineermode/hqanfc/RwFunction;)[B

    move-result-object v1

    if-nez v1, :cond_9

    .line 112
    const-string v0, "Not get the response"

    .line 113
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->finish()V

    goto :goto_0

    .line 115
    :cond_9
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->access$300(Lcom/mediatek/engineermode/hqanfc/RwFunction;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

    move-result-object v3

    iget v3, v3, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;->mIsNdef:I

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->access$800(Lcom/mediatek/engineermode/hqanfc/RwFunction;I)V

    .line 116
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->access$900(Lcom/mediatek/engineermode/hqanfc/RwFunction;)V

    goto :goto_0

    .line 150
    :cond_a
    const/16 v1, 0xc8

    iget v5, p1, Landroid/os/Message;->what:I

    if-ne v1, v5, :cond_c

    .line 151
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->access$400(Lcom/mediatek/engineermode/hqanfc/RwFunction;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingNty;

    move-result-object v1

    iget v1, v1, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingNty;->mDetectType:I

    if-eq v1, v3, :cond_b

    .line 158
    const-string v0, "Please back to polling loop mode screen"

    goto :goto_0

    .line 154
    :cond_b
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->access$300(Lcom/mediatek/engineermode/hqanfc/RwFunction;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

    move-result-object v1

    iget-object v3, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-static {v3}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->access$400(Lcom/mediatek/engineermode/hqanfc/RwFunction;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingNty;

    move-result-object v3

    iget-object v3, v3, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingNty;->mData:[B

    invoke-static {v3}, Ljava/nio/ByteBuffer;->wrap([B)Ljava/nio/ByteBuffer;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;->readRaw(Ljava/nio/ByteBuffer;)V

    .line 155
    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->sendEmptyMessage(I)Z

    .line 162
    :cond_c
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[RwFunction]"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "Nfc"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 163
    if-eqz v0, :cond_d

    .line 164
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-static {v1, v0, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 166
    :cond_d
    return-void
.end method
