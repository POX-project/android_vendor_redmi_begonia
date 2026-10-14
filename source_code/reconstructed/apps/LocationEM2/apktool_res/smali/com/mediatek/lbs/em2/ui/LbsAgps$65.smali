.class Lcom/mediatek/lbs/em2/ui/LbsAgps$65;
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

    .line 984
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$65;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 0

    .line 987
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$65;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxCpAutoReset:Landroid/widget/CheckBox;

    invoke-virtual {p0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p0

    invoke-virtual {p1, p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setCpAutoReset(Z)V

    return-void
.end method
