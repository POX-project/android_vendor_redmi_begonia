.class Lcom/mediatek/lbs/em2/ui/LbsBatch$6;
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

    .line 165
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$6;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 1

    .line 168
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$6;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mLocationInfo:Lcom/mediatek/lbs/em2/ui/StringList;

    invoke-virtual {p1}, Lcom/mediatek/lbs/em2/ui/StringList;->clear()V

    .line 169
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$6;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mTextViewLocationCount:Landroid/widget/TextView;

    const-string v0, ""

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 170
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$6;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mTextViewLocationCallback:Landroid/widget/TextView;

    invoke-virtual {p0, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method
