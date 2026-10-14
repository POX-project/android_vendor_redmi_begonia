.class Lcom/mediatek/lbs/em2/ui/LbsFlow$7;
.super Ljava/lang/Object;
.source "LbsFlow.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsFlow;->addOnClickListener()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsFlow;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsFlow;)V
    .locals 0

    .line 199
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsFlow;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 0

    .line 202
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsFlow;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->popupTestCase:Landroid/widget/PopupMenu;

    invoke-virtual {p0}, Landroid/widget/PopupMenu;->show()V

    return-void
.end method
