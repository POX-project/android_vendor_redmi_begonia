.class Lcom/mediatek/lbs/em2/ui/LbsAgps$8;
.super Ljava/lang/Object;
.source "LbsAgps.java"

# interfaces
.implements Landroid/widget/PopupMenu$OnMenuItemClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsAgps;->initPopupMenu()V
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

    .line 529
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onMenuItemClick(Landroid/view/MenuItem;)Z
    .locals 0

    .line 532
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-interface {p1}, Landroid/view/MenuItem;->getItemId()I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->testButton(I)V

    const/4 p0, 0x0

    return p0
.end method
