.class Lcom/mediatek/lbs/em2/ui/LbsAgps$63;
.super Ljava/lang/Object;
.source "LbsAgps.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsAgps;->addOnClickListener()V
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

    .line 957
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$63;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 6

    .line 960
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$63;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxExternalAddr:Landroid/widget/CheckBox;

    invoke-virtual {p1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 961
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$63;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    const/16 v2, 0x13

    const/4 v3, 0x1

    iget-object v4, v0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewExternalAddr:Landroid/widget/TextView;

    iget-object v5, v0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->externalAddrListener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

    const-string v1, "Edit External Address"

    invoke-static/range {v0 .. v5}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->showEditDialog(Landroid/content/Context;Ljava/lang/String;IILandroid/widget/TextView;Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;)V

    goto :goto_0

    .line 965
    :cond_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$63;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    const/4 v0, 0x0

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewExternalAddr:Landroid/widget/TextView;

    .line 966
    invoke-virtual {p0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object p0

    invoke-interface {p0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object p0

    .line 965
    invoke-virtual {p1, v0, p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setExternalAddr(ZLjava/lang/String;)V

    :goto_0
    return-void
.end method
