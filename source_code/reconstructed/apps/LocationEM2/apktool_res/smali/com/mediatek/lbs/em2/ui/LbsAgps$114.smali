.class Lcom/mediatek/lbs/em2/ui/LbsAgps$114;
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

.field final synthetic val$originalString:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;Landroid/app/Dialog;Ljava/lang/String;)V
    .locals 0

    .line 1347
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$114;->val$listener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

    iput-object p2, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$114;->val$dialog:Landroid/app/Dialog;

    iput-object p3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$114;->val$originalString:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2

    .line 1349
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$114;->val$listener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

    if-nez v0, :cond_0

    .line 1350
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$114;->val$dialog:Landroid/app/Dialog;

    invoke-virtual {p0}, Landroid/app/Dialog;->dismiss()V

    goto :goto_0

    .line 1352
    :cond_0
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$114;->val$dialog:Landroid/app/Dialog;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$114;->val$originalString:Ljava/lang/String;

    invoke-interface {v0, v1, p1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;->onCancelClick(Landroid/app/Dialog;Landroid/view/View;Ljava/lang/String;)V

    :goto_0
    return-void
.end method
