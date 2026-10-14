.class Lcom/mediatek/lbs/em2/ui/LbsBatch$4;
.super Ljava/lang/Object;
.source "LbsBatch.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsBatch;->initUiListeners()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsBatch;)V
    .locals 0

    .line 129
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 0

    .line 132
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mCheckBoxWakeupOnFifoFull:Landroid/widget/CheckBox;

    invoke-virtual {p1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 133
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mIsWakeOnFifoFull:Z

    goto :goto_0

    .line 135
    :cond_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mIsWakeOnFifoFull:Z

    :goto_0
    return-void
.end method
