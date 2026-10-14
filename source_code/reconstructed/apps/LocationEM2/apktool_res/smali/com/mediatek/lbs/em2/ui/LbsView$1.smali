.class Lcom/mediatek/lbs/em2/ui/LbsView$1;
.super Ljava/lang/Object;
.source "LbsView.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsView;->onCreate(Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsView;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsView;)V
    .locals 0

    .line 60
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 1

    .line 63
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsView;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/mediatek/lbs/em2/ui/LbsView;->access$002(Lcom/mediatek/lbs/em2/ui/LbsView;I)I

    .line 64
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsView$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsView;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsView;->access$100(Lcom/mediatek/lbs/em2/ui/LbsView;)V

    return-void
.end method
