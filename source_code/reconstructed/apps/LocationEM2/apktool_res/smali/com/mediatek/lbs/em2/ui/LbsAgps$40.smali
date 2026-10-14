.class Lcom/mediatek/lbs/em2/ui/LbsAgps$40;
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

    .line 783
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$40;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 6

    .line 786
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$40;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object v4, v0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewSlpPort:Landroid/widget/TextView;

    iget-object v5, v0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->slpPortListener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

    const-string v1, "Edit SLP Port"

    const/4 v2, 0x5

    const/4 v3, 0x2

    invoke-static/range {v0 .. v5}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->showEditDialog(Landroid/content/Context;Ljava/lang/String;IILandroid/widget/TextView;Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;)V

    return-void
.end method
