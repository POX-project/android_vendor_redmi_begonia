.class Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$4;
.super Ljava/lang/Object;
.source "LbsC2kDbg.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->initUI()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V
    .locals 0

    .line 259
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 1

    .line 262
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->access$000(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)I

    move-result p1

    const/4 v0, 0x2

    if-ne p1, v0, :cond_0

    .line 263
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    const-string p1, "telecom"

    invoke-virtual {p0, p1}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/telecom/TelecomManager;

    const/4 p1, 0x0

    .line 264
    invoke-virtual {p0, p1}, Landroid/telecom/TelecomManager;->showInCallScreen(Z)V

    goto :goto_0

    .line 266
    :cond_0
    new-instance p1, Landroid/content/Intent;

    const-string v0, "android.intent.action.DIAL"

    invoke-direct {p1, v0}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 267
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-virtual {p0, p1}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    :goto_0
    return-void
.end method
