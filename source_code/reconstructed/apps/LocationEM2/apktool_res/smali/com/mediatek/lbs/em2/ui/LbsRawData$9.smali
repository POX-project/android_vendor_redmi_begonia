.class Lcom/mediatek/lbs/em2/ui/LbsRawData$9;
.super Ljava/lang/Object;
.source "LbsRawData.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsRawData;->showMeasConfirmDialog()V
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

    .line 318
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 2

    .line 320
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mToggleButtonMeasurement:Landroid/widget/ToggleButton;

    const/4 p2, 0x1

    invoke-virtual {p1, p2}, Landroid/widget/ToggleButton;->setEnabled(Z)V

    .line 323
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    const/4 p2, 0x0

    invoke-static {p1, p2}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$002(Lcom/mediatek/lbs/em2/ui/LbsRawData;I)I

    .line 324
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$1000(Lcom/mediatek/lbs/em2/ui/LbsRawData;)Landroid/location/LocationManager;

    move-result-object p1

    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    .line 325
    invoke-static {p2}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$900(Lcom/mediatek/lbs/em2/ui/LbsRawData;)Landroid/location/GnssMeasurementsEvent$Callback;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/location/LocationManager;->registerGnssMeasurementsCallback(Landroid/location/GnssMeasurementsEvent$Callback;)Z

    move-result p1

    .line 326
    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    new-instance v0, Ljava/util/Date;

    invoke-direct {v0}, Ljava/util/Date;-><init>()V

    invoke-virtual {v0}, Ljava/util/Date;->getTime()J

    move-result-wide v0

    invoke-static {p2, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$100(Lcom/mediatek/lbs/em2/ui/LbsRawData;J)Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$202(Lcom/mediatek/lbs/em2/ui/LbsRawData;Ljava/lang/String;)Ljava/lang/String;

    .line 328
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "Measurement Opt:"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    iget-object v0, v0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mToggleButtonMeasurement:Landroid/widget/ToggleButton;

    invoke-virtual {v0}, Landroid/widget/ToggleButton;->isChecked()Z

    move-result v0

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    .line 329
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mTextViewLogMeas:Landroid/widget/TextView;

    invoke-virtual {p0, p2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 330
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, " result:"

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->log(Ljava/lang/Object;)V

    return-void
.end method
