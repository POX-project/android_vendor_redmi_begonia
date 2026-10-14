.class Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;
.super Landroid/os/Handler;
.source "ReaderMode.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/hqanfc/ReaderMode;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 114
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 9
    .param p1, "msg"    # Landroid/os/Message;

    .line 116
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 117
    const/4 v0, 0x0

    .line 118
    .local v0, "toastMsg":Ljava/lang/String;
    iget v1, p1, Landroid/os/Message;->what:I

    const-string v2, "Nfc"

    const/4 v3, 0x0

    const/4 v4, 0x1

    const/16 v5, 0xc8

    if-ne v5, v1, :cond_4

    .line 119
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->dismissDialog(I)V

    .line 120
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$100(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermRsp;

    move-result-object v1

    iget v1, v1, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermRsp;->mResult:I

    if-eqz v1, :cond_2

    if-eq v1, v4, :cond_1

    const/16 v4, 0xa

    if-eq v1, v4, :cond_0

    packed-switch v1, :pswitch_data_0

    .line 146
    const-string v0, "ReaderMode Rsp Result: ERROR"

    .line 147
    goto/16 :goto_0

    .line 140
    :pswitch_0
    const-string v0, "ReaderMode Rsp Result: NDEF_EOF_REACHED"

    .line 141
    goto/16 :goto_0

    .line 134
    :pswitch_1
    const-string v0, "ReaderMode Rsp Result: INVALID_FORMAT"

    .line 135
    goto/16 :goto_0

    .line 137
    :pswitch_2
    const-string v0, "ReaderMode Rsp Result: INVALID_NDEF_FORMAT"

    .line 138
    goto/16 :goto_0

    .line 143
    :cond_0
    const-string v0, "ReaderMode Rsp Result: NOT_SUPPORT"

    .line 144
    goto/16 :goto_0

    .line 131
    :cond_1
    const-string v0, "ReaderMode Rsp Result: FAIL"

    .line 132
    goto/16 :goto_0

    .line 122
    :cond_2
    const-string v0, "ReaderMode Rsp Result: SUCCESS"

    .line 123
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$400(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/widget/Button;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/Button;->getText()Ljava/lang/CharSequence;

    move-result-object v1

    iget-object v5, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    const v6, 0x7f0a0383

    .line 124
    invoke-virtual {v5, v6}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->getString(I)Ljava/lang/String;

    move-result-object v5

    .line 123
    invoke-virtual {v1, v5}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 125
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$500(Lcom/mediatek/engineermode/hqanfc/ReaderMode;Z)V

    goto/16 :goto_0

    .line 127
    :cond_3
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1, v4}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$500(Lcom/mediatek/engineermode/hqanfc/ReaderMode;Z)V

    .line 129
    goto/16 :goto_0

    .line 149
    :cond_4
    const/16 v1, 0x64

    iget v5, p1, Landroid/os/Message;->what:I

    if-ne v1, v5, :cond_b

    .line 150
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$300(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

    move-result-object v1

    iget v1, v1, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;->mResult:I

    const/4 v5, 0x2

    const-string v6, "reader_mode_rsp_ndef"

    const-string v7, "reader_mode_rsp_array"

    if-eqz v1, :cond_9

    const/4 v8, 0x3

    if-eq v1, v4, :cond_7

    if-eq v1, v5, :cond_6

    .line 188
    const-string v1, "ReaderMode Ntf Result: ERROR"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 189
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$600(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Z

    move-result v1

    if-eqz v1, :cond_5

    .line 190
    const-string v0, "Tag is not NDEF format"

    goto/16 :goto_0

    .line 192
    :cond_5
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    .line 193
    .local v1, "defaultIntent":Landroid/content/Intent;
    iget-object v5, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v5}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$000(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)[B

    move-result-object v5

    invoke-virtual {v1, v7, v5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;[B)Landroid/content/Intent;

    .line 194
    invoke-virtual {v1, v6, v8}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 195
    iget-object v5, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    const-class v6, Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-virtual {v1, v5, v6}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    .line 196
    iget-object v5, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v5}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v5

    iget-object v6, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 197
    invoke-static {v6}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$700(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/content/BroadcastReceiver;

    move-result-object v6

    invoke-virtual {v5, v6}, Landroid/support/v4/content/LocalBroadcastManager;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 199
    iget-object v5, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v5, v4}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$802(Lcom/mediatek/engineermode/hqanfc/ReaderMode;Z)Z

    .line 200
    iget-object v4, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-virtual {v4, v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->startActivity(Landroid/content/Intent;)V

    goto/16 :goto_0

    .line 168
    .end local v1    # "defaultIntent":Landroid/content/Intent;
    :cond_6
    const-string v0, "ReaderMode Ntf Result: DISCONNECT"

    .line 169
    goto/16 :goto_0

    .line 172
    :cond_7
    const-string v1, "[ReaderMode]Ntf Result: FAIL"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 173
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$600(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Z

    move-result v1

    if-eqz v1, :cond_8

    .line 174
    const-string v0, "ReaderMode Ntf Result: FAIL"

    goto/16 :goto_0

    .line 176
    :cond_8
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    .line 177
    .local v1, "intent":Landroid/content/Intent;
    iget-object v5, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v5}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$000(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)[B

    move-result-object v5

    invoke-virtual {v1, v7, v5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;[B)Landroid/content/Intent;

    .line 178
    invoke-virtual {v1, v6, v8}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 179
    iget-object v5, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    const-class v6, Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-virtual {v1, v5, v6}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    .line 180
    iget-object v5, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v5}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v5

    iget-object v6, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 181
    invoke-static {v6}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$700(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/content/BroadcastReceiver;

    move-result-object v6

    invoke-virtual {v5, v6}, Landroid/support/v4/content/LocalBroadcastManager;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 183
    iget-object v5, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v5, v4}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$802(Lcom/mediatek/engineermode/hqanfc/ReaderMode;Z)Z

    .line 184
    iget-object v4, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-virtual {v4, v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->startActivity(Landroid/content/Intent;)V

    .line 186
    .end local v1    # "intent":Landroid/content/Intent;
    goto :goto_0

    .line 152
    :cond_9
    const-string v0, "ReaderMode Ntf Result: CONNECT"

    .line 153
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$600(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Z

    move-result v1

    if-nez v1, :cond_b

    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 154
    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$300(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

    move-result-object v1

    iget v1, v1, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;->mIsNdef:I

    if-eqz v1, :cond_a

    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$300(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

    move-result-object v1

    iget v1, v1, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;->mIsNdef:I

    if-eq v1, v4, :cond_a

    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 155
    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$300(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

    move-result-object v1

    iget v1, v1, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;->mIsNdef:I

    if-ne v1, v5, :cond_b

    .line 156
    :cond_a
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    .line 157
    .restart local v1    # "intent":Landroid/content/Intent;
    iget-object v5, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v5}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$000(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)[B

    move-result-object v5

    invoke-virtual {v1, v7, v5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;[B)Landroid/content/Intent;

    .line 158
    iget-object v5, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v5}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$300(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

    move-result-object v5

    iget v5, v5, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;->mIsNdef:I

    invoke-virtual {v1, v6, v5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 159
    iget-object v5, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    const-class v6, Lcom/mediatek/engineermode/hqanfc/RwFunction;

    invoke-virtual {v1, v5, v6}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    .line 160
    iget-object v5, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v5}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v5

    iget-object v6, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 161
    invoke-static {v6}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$700(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/content/BroadcastReceiver;

    move-result-object v6

    invoke-virtual {v5, v6}, Landroid/support/v4/content/LocalBroadcastManager;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 163
    iget-object v5, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v5, v4}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$802(Lcom/mediatek/engineermode/hqanfc/ReaderMode;Z)Z

    .line 164
    iget-object v4, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-virtual {v4, v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->startActivity(Landroid/content/Intent;)V

    .line 205
    .end local v1    # "intent":Landroid/content/Intent;
    :cond_b
    :goto_0
    if-eqz v0, :cond_c

    .line 206
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Toast: "

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 207
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1, v0, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 209
    :cond_c
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x20
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
