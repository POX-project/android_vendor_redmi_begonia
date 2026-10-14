.class Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$1;
.super Landroid/telephony/PhoneStateListener;
.source "DbgScreenReporter.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;)V
    .locals 0

    .line 122
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$1;->this$0:Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;

    invoke-direct {p0}, Landroid/telephony/PhoneStateListener;-><init>()V

    return-void
.end method


# virtual methods
.method public onCallStateChanged(ILjava/lang/String;)V
    .locals 2

    const/4 p2, 0x1

    if-ne p1, p2, :cond_0

    const-string p0, "call_state_changed callback state Ringing"

    .line 126
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->log(Ljava/lang/Object;)V

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    const/4 v1, 0x2

    if-ne p1, v1, :cond_1

    const-string p1, "call_state_changed callback state Offhook"

    .line 128
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->log(Ljava/lang/Object;)V

    .line 129
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$1;->this$0:Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->access$000(Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;)I

    move-result p1

    if-eq p1, v1, :cond_2

    .line 130
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$1;->this$0:Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;

    invoke-static {p1, v1}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->access$002(Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;I)I

    .line 131
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$1;->this$0:Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->access$000(Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;)I

    move-result p1

    invoke-static {p0, v0, p1}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->access$100(Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;II)V

    goto :goto_0

    :cond_1
    if-nez p1, :cond_2

    const-string p1, "call_state_changed callback state Idle"

    .line 134
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->log(Ljava/lang/Object;)V

    .line 135
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$1;->this$0:Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->access$000(Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;)I

    move-result p1

    if-eq p1, p2, :cond_2

    .line 136
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$1;->this$0:Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;

    invoke-static {p1, p2}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->access$002(Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;I)I

    .line 137
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$1;->this$0:Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->access$000(Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;)I

    move-result p1

    invoke-static {p0, v0, p1}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->access$100(Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;II)V

    :cond_2
    :goto_0
    return-void
.end method
