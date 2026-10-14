.class Lcom/mediatek/lbs/em2/ui/LbsFlow$9;
.super Ljava/lang/Object;
.source "LbsFlow.java"

# interfaces
.implements Lcom/mediatek/lbs/em2/utils/AgpsDebugListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsFlow;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsFlow;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsFlow;)V
    .locals 0

    .line 224
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsFlow;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onDialogMessageReceived(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 246
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsFlow;

    iget-object v0, v0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->alert:Landroid/app/AlertDialog;

    invoke-virtual {v0, p1}, Landroid/app/AlertDialog;->setTitle(Ljava/lang/CharSequence;)V

    .line 247
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsFlow;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsFlow;->alert:Landroid/app/AlertDialog;

    invoke-virtual {p1, p2}, Landroid/app/AlertDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 248
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsFlow;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->alert:Landroid/app/AlertDialog;

    invoke-virtual {p0}, Landroid/app/AlertDialog;->show()V

    return-void
.end method

.method public onNiStatisticMessageReceived(IILjava/lang/String;)V
    .locals 2

    .line 262
    new-instance v0, Landroid/content/Intent;

    const-string v1, "com.mediatek.lbs.em2.action.ni_message"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v1, "com.mediatek.lbs.em2.ui"

    .line 263
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "ni_msgType"

    .line 264
    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    const-string p1, "ni_protocolType"

    .line 265
    invoke-virtual {v0, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    const-string p1, "ni_msg"

    .line 266
    invoke-virtual {v0, p1, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 267
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsFlow;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->mLocalBroadcastManager:Landroid/support/v4/content/LocalBroadcastManager;

    invoke-virtual {p0, v0}, Landroid/support/v4/content/LocalBroadcastManager;->sendBroadcast(Landroid/content/Intent;)Z

    return-void
.end method

.method public onToastMessageReceived(Ljava/lang/String;)V
    .locals 3

    .line 227
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsFlow;

    iget v1, v0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->toastCount:I

    add-int/lit8 v1, v1, 0x1

    iput v1, v0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->toastCount:I

    .line 228
    iget-object v0, v0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->toast:Landroid/widget/Toast;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "["

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsFlow;

    iget v2, v2, Lcom/mediatek/lbs/em2/ui/LbsFlow;->toastCount:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "] "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/Toast;->setText(Ljava/lang/CharSequence;)V

    .line 229
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsFlow;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->toast:Landroid/widget/Toast;

    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    return-void
.end method

.method public onViewMessageReceived(ILjava/lang/String;)V
    .locals 3

    .line 234
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsFlow;

    iget-object v0, v0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->stringList:Lcom/mediatek/lbs/em2/ui/StringList;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "<font color=\'#"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const v2, 0xffffff

    and-int/2addr p1, v2

    .line 235
    invoke-static {p1}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\'>"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 236
    invoke-static {}, Lcom/mediatek/lbs/em2/ui/LbsFlow;->getTimeString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " "

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "</font><br>"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 234
    invoke-virtual {v0, p1}, Lcom/mediatek/lbs/em2/ui/StringList;->add(Ljava/lang/String;)V

    .line 238
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    const/4 p2, 0x0

    .line 239
    iput p2, p1, Landroid/os/Message;->what:I

    .line 240
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsFlow;

    iget-object v0, v0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->delayShowHandler:Lcom/mediatek/lbs/em2/ui/LbsFlow$DelayShowHandler;

    invoke-virtual {v0, p2}, Landroid/os/Handler;->removeMessages(I)V

    .line 241
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsFlow;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->delayShowHandler:Lcom/mediatek/lbs/em2/ui/LbsFlow$DelayShowHandler;

    const-wide/16 v0, 0xc8

    invoke-virtual {p0, p1, v0, v1}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    return-void
.end method

.method public onVzwDebugMessageReceived(Ljava/lang/String;)V
    .locals 2

    .line 254
    new-instance v0, Landroid/content/Intent;

    const-string v1, "com.mediatek.lbs.em2.action.debug_message"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v1, "com.mediatek.lbs.em2.ui"

    .line 255
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "vzw_dbg"

    .line 256
    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 257
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsFlow;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->mLocalBroadcastManager:Landroid/support/v4/content/LocalBroadcastManager;

    invoke-virtual {p0, v0}, Landroid/support/v4/content/LocalBroadcastManager;->sendBroadcast(Landroid/content/Intent;)Z

    return-void
.end method
