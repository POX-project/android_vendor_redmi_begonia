.class Lcom/mediatek/lbs/em2/ui/LbsRawData$5;
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

    .line 219
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 0

    .line 222
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mToggleButtonMeasurement:Landroid/widget/ToggleButton;

    invoke-virtual {p1}, Landroid/widget/ToggleButton;->isChecked()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 223
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$800(Lcom/mediatek/lbs/em2/ui/LbsRawData;)V

    goto :goto_0

    .line 225
    :cond_0
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$1000(Lcom/mediatek/lbs/em2/ui/LbsRawData;)Landroid/location/LocationManager;

    move-result-object p1

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$900(Lcom/mediatek/lbs/em2/ui/LbsRawData;)Landroid/location/GnssMeasurementsEvent$Callback;

    move-result-object p0

    invoke-virtual {p1, p0}, Landroid/location/LocationManager;->unregisterGnssMeasurementsCallback(Landroid/location/GnssMeasurementsEvent$Callback;)V

    :goto_0
    return-void
.end method
