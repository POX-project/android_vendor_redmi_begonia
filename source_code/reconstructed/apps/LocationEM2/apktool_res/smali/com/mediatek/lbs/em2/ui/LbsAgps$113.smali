.class Lcom/mediatek/lbs/em2/ui/LbsAgps$113;
.super Ljava/lang/Object;
.source "LbsAgps.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsAgps;->showEditDialog(Landroid/content/Context;Ljava/lang/String;IILandroid/widget/TextView;Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic val$dialog:Landroid/app/Dialog;

.field final synthetic val$listener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

.field final synthetic val$text:Landroid/widget/EditText;

.field final synthetic val$textView:Landroid/widget/TextView;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;Landroid/widget/TextView;Landroid/widget/EditText;Landroid/app/Dialog;)V
    .locals 0

    .line 1337
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$113;->val$listener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

    iput-object p2, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$113;->val$textView:Landroid/widget/TextView;

    iput-object p3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$113;->val$text:Landroid/widget/EditText;

    iput-object p4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$113;->val$dialog:Landroid/app/Dialog;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2

    .line 1339
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$113;->val$listener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

    if-nez v0, :cond_0

    .line 1340
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$113;->val$textView:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$113;->val$text:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1341
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$113;->val$dialog:Landroid/app/Dialog;

    invoke-virtual {p0}, Landroid/app/Dialog;->dismiss()V

    goto :goto_0

    .line 1343
    :cond_0
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$113;->val$dialog:Landroid/app/Dialog;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$113;->val$text:Landroid/widget/EditText;

    invoke-virtual {p0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-interface {v0, v1, p1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;->onOKClick(Landroid/app/Dialog;Landroid/view/View;Ljava/lang/String;)V

    :goto_0
    return-void
.end method
