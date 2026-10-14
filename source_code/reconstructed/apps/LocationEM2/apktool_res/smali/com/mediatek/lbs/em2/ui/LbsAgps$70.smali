.class Lcom/mediatek/lbs/em2/ui/LbsAgps$70;
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

    .line 1017
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$70;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 0

    .line 1020
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$70;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLogSensitiveData:Landroid/widget/CheckBox;

    invoke-virtual {p1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 1021
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$70;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->access$400(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    goto :goto_0

    .line 1023
    :cond_0
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$70;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLogSensitiveData:Landroid/widget/CheckBox;

    invoke-virtual {p1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p1

    xor-int/lit8 p1, p1, 0x1

    .line 1024
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$70;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setNoSensitiveLog(Z)V

    :goto_0
    return-void
.end method
