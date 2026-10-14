.class Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$9;
.super Ljava/lang/Object;
.source "LbsC2kDbg.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->showC2kConfirmDialog()V
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

    .line 316
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 0

    .line 318
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->access$300(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)Landroid/widget/ToggleButton;

    move-result-object p0

    const/4 p1, 0x0

    invoke-virtual {p0, p1}, Landroid/widget/ToggleButton;->setChecked(Z)V

    return-void
.end method
