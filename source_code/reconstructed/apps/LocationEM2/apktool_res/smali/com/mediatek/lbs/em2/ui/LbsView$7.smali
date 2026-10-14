.class Lcom/mediatek/lbs/em2/ui/LbsView$7;
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

    .line 122
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 1

    .line 125
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsView;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsView;->access$300(Lcom/mediatek/lbs/em2/ui/LbsView;)Lcom/mediatek/lbs/em2/ui/ViewGnss;

    move-result-object p1

    const/4 v0, 0x2

    invoke-virtual {p1, v0}, Lcom/mediatek/lbs/em2/ui/ViewGnss;->setDisplayPage(I)V

    .line 126
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsView;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsView;->access$400(Lcom/mediatek/lbs/em2/ui/LbsView;)Lcom/mediatek/lbs/em2/ui/ViewGps;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/mediatek/lbs/em2/ui/ViewGps;->setDisplayPage(I)V

    .line 127
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsView$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsView;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsView;->access$500(Lcom/mediatek/lbs/em2/ui/LbsView;)Lcom/mediatek/lbs/em2/ui/ViewNmea;

    move-result-object p0

    invoke-virtual {p0, v0}, Lcom/mediatek/lbs/em2/ui/ViewNmea;->setDisplayPage(I)V

    return-void
.end method
