.class Lcom/mediatek/lbs/em2/ui/LbsRawData$4;
.super Ljava/lang/Object;
.source "LbsRawData.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsRawData;->initUI()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsRawData;)V
    .locals 0

    .line 199
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2

    .line 203
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mToggleButtonRegress:Landroid/widget/ToggleButton;

    invoke-virtual {p1}, Landroid/widget/ToggleButton;->isChecked()Z

    move-result p1

    const/4 v0, 0x1

    if-eqz p1, :cond_0

    .line 204
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mToggleButtonMeasurement:Landroid/widget/ToggleButton;

    invoke-virtual {p1}, Landroid/widget/ToggleButton;->performClick()Z

    .line 205
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mToggleButtonNavigation:Landroid/widget/ToggleButton;

    invoke-virtual {p1}, Landroid/widget/ToggleButton;->performClick()Z

    .line 206
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mToggleButtonMeasurement:Landroid/widget/ToggleButton;

    const/4 v1, 0x0

    invoke-virtual {p1, v1}, Landroid/widget/ToggleButton;->setEnabled(Z)V

    .line 207
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mToggleButtonNavigation:Landroid/widget/ToggleButton;

    invoke-virtual {p1, v1}, Landroid/widget/ToggleButton;->setEnabled(Z)V

    goto :goto_0

    .line 209
    :cond_0
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mToggleButtonMeasurement:Landroid/widget/ToggleButton;

    invoke-virtual {p1}, Landroid/widget/ToggleButton;->performClick()Z

    .line 210
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mToggleButtonNavigation:Landroid/widget/ToggleButton;

    invoke-virtual {p1}, Landroid/widget/ToggleButton;->performClick()Z

    .line 211
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mToggleButtonMeasurement:Landroid/widget/ToggleButton;

    invoke-virtual {p1, v0}, Landroid/widget/ToggleButton;->setEnabled(Z)V

    .line 212
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mToggleButtonNavigation:Landroid/widget/ToggleButton;

    invoke-virtual {p1, v0}, Landroid/widget/ToggleButton;->setEnabled(Z)V

    .line 214
    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "regress Opt:"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mToggleButtonRegress:Landroid/widget/ToggleButton;

    invoke-virtual {p0}, Landroid/widget/ToggleButton;->isChecked()Z

    move-result p0

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 215
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " result:"

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->log(Ljava/lang/Object;)V

    return-void
.end method
