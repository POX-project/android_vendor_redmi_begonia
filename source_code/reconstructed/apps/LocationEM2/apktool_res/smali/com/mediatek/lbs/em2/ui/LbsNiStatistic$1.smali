.class Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$1;
.super Landroid/telephony/PhoneStateListener;
.source "LbsNiStatistic.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)V
    .locals 0

    .line 162
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    invoke-direct {p0}, Landroid/telephony/PhoneStateListener;-><init>()V

    return-void
.end method


# virtual methods
.method public onCallStateChanged(ILjava/lang/String;)V
    .locals 2

    const/4 p2, 0x1

    if-ne p1, p2, :cond_0

    const-string p0, "call_state_changed callback state Ringing"

    .line 166
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    const/4 v1, 0x2

    if-ne p1, v1, :cond_1

    const-string p1, "call_state_changed callback state Offhook"

    .line 168
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    .line 169
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    invoke-static {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->access$000(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;II)V

    goto :goto_0

    :cond_1
    if-nez p1, :cond_2

    const-string p1, "call_state_changed callback state Idle"

    .line 171
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    .line 172
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    invoke-static {p0, v0, p2}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->access$000(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;II)V

    :cond_2
    :goto_0
    return-void
.end method
