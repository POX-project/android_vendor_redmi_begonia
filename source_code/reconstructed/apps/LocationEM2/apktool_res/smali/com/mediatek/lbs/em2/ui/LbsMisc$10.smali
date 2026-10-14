.class Lcom/mediatek/lbs/em2/ui/LbsMisc$10;
.super Landroid/os/Handler;
.source "LbsMisc.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsMisc;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsMisc;)V
    .locals 0

    .line 358
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$10;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 2

    .line 361
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/Bundle;

    .line 362
    iget p1, p1, Landroid/os/Message;->what:I

    if-eqz p1, :cond_1

    const/4 v0, 0x1

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 368
    :cond_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$10;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$300(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/widget/ToggleButton;

    move-result-object p0

    const/4 p1, 0x0

    invoke-virtual {p0, p1}, Landroid/widget/ToggleButton;->setChecked(Z)V

    goto :goto_0

    .line 364
    :cond_1
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$10;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$1500(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Lcom/mediatek/lbs/em2/ui/StringList;

    move-result-object p1

    const-string v1, "msg"

    invoke-virtual {v0, v1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/mediatek/lbs/em2/ui/StringList;->add(Ljava/lang/String;)V

    .line 365
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$10;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$1600(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/widget/TextView;

    move-result-object p1

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$10;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$1500(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Lcom/mediatek/lbs/em2/ui/StringList;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/StringList;->get()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :goto_0
    return-void
.end method
