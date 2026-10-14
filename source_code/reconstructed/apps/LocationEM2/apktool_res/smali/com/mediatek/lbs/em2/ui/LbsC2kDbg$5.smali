.class Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$5;
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

    .line 271
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2

    .line 274
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->access$1108(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)I

    .line 275
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->access$1200(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)Landroid/widget/TextView;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Waiting Fix Timeout (s) : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->access$1100(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)I

    move-result p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method
