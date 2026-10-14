.class Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$2;
.super Landroid/content/BroadcastReceiver;
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

    .line 187
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$2;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 2

    .line 189
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    const-string v0, "com.mediatek.lbs.em2.action.ni_message"

    .line 190
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const-string p1, "ni_msgType"

    const/4 v0, 0x0

    .line 191
    invoke-virtual {p2, p1, v0}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result p1

    const-string v1, "ni_protocolType"

    .line 192
    invoke-virtual {p2, v1, v0}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    const-string v1, "ni_msg"

    .line 193
    invoke-virtual {p2, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 195
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$2;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    const/4 v1, 0x2

    invoke-static {p0, v1, p1, v0, p2}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->access$100(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;IIILjava/lang/Object;)V

    :cond_0
    return-void
.end method
