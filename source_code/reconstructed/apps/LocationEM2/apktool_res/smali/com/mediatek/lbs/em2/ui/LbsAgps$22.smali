.class Lcom/mediatek/lbs/em2/ui/LbsAgps$22;
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

    .line 647
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$22;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 0

    .line 650
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$22;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxMSA:Landroid/widget/CheckBox;

    invoke-virtual {p0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p0

    invoke-virtual {p1, p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setPosTechnologyMSA(Z)V

    return-void
.end method
