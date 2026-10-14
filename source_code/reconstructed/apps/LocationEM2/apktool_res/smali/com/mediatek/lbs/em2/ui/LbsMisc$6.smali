.class Lcom/mediatek/lbs/em2/ui/LbsMisc$6;
.super Ljava/lang/Object;
.source "LbsMisc.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsMisc;->onCreate(Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsMisc;)V
    .locals 0

    .line 202
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$6;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 0

    .line 205
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$6;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$600(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/widget/CheckBox;

    move-result-object p0

    invoke-virtual {p0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p0

    invoke-virtual {p1, p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setE911OpenGpsEnable(Z)V

    return-void
.end method
