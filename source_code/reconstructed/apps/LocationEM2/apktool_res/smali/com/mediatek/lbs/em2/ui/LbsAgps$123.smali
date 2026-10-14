.class Lcom/mediatek/lbs/em2/ui/LbsAgps$123;
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

    .line 1774
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$123;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCancelClick(Landroid/app/Dialog;Landroid/view/View;Ljava/lang/String;)V
    .locals 0

    .line 1784
    invoke-virtual {p1}, Landroid/app/Dialog;->dismiss()V

    .line 1785
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$123;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    const/4 p1, 0x1

    invoke-virtual {p0, p1, p3}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setExternalAddr(ZLjava/lang/String;)V

    return-void
.end method

.method public onOKClick(Landroid/app/Dialog;Landroid/view/View;Ljava/lang/String;)V
    .locals 0

    .line 1777
    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$123;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p2, p2, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewExternalAddr:Landroid/widget/TextView;

    invoke-virtual {p2, p3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1778
    invoke-virtual {p1}, Landroid/app/Dialog;->dismiss()V

    .line 1779
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$123;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    const/4 p1, 0x1

    invoke-virtual {p0, p1, p3}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setExternalAddr(ZLjava/lang/String;)V

    return-void
.end method
