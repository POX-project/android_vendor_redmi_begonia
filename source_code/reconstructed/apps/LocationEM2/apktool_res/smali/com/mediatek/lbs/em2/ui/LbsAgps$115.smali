.class Lcom/mediatek/lbs/em2/ui/LbsAgps$115;
.super Ljava/lang/Object;
.source "LbsAgps.java"

# interfaces
.implements Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsAgps;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V
    .locals 0

    .line 1559
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$115;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCancelClick(Landroid/app/Dialog;Landroid/view/View;Ljava/lang/String;)V
    .locals 0

    .line 1581
    invoke-virtual {p1}, Landroid/app/Dialog;->dismiss()V

    return-void
.end method

.method public onOKClick(Landroid/app/Dialog;Landroid/view/View;Ljava/lang/String;)V
    .locals 1

    const-string p2, "((?:(?:25[0-5]|2[0-4]\\d|[01]?\\d?\\d)\\.){3}(?:25[0-5]|2[0-4]\\d|[01]?\\d?\\d))"

    .line 1565
    invoke-virtual {p3, p2}, Ljava/lang/String;->matches(Ljava/lang/String;)Z

    move-result p2

    const/4 v0, 0x1

    if-eq p2, v0, :cond_0

    const-string p2, "^((?:[0-9A-Fa-f]{1,4}(?::[0-9A-Fa-f]{1,4})*)?)::((?:[0-9A-Fa-f]{1,4}(?::[0-9A-Fa-f]{1,4})*)?)$"

    .line 1566
    invoke-virtual {p3, p2}, Ljava/lang/String;->matches(Ljava/lang/String;)Z

    move-result p2

    if-eq p2, v0, :cond_0

    const-string p2, "([a-zA-Z0-9_\\-]{1,63}\\.)+[a-zA-Z0-9_\\-]{1,63}"

    .line 1567
    invoke-virtual {p3, p2}, Ljava/lang/String;->matches(Ljava/lang/String;)Z

    move-result p2

    if-eq p2, v0, :cond_0

    const-string p2, ""

    .line 1568
    invoke-virtual {p3, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eq p2, v0, :cond_0

    .line 1569
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$115;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    const-string p1, "ERR: The SLP address must be IPv4, IPv6 or FQDN!!"

    invoke-static {p0, p1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p0

    .line 1571
    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    return-void

    .line 1574
    :cond_0
    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$115;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p2, p2, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewSlpAddr:Landroid/widget/TextView;

    invoke-virtual {p2, p3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1575
    invoke-virtual {p1}, Landroid/app/Dialog;->dismiss()V

    .line 1576
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$115;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->updateSuplProfile()V

    return-void
.end method
