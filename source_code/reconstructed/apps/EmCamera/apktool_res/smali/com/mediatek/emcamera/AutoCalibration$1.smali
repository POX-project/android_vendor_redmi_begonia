.class Lcom/mediatek/emcamera/AutoCalibration$1;
.super Ljava/lang/Object;
.source "AutoCalibration.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemSelectedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/emcamera/AutoCalibration;->initSensorSpnr()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/emcamera/AutoCalibration;


# direct methods
.method constructor <init>(Lcom/mediatek/emcamera/AutoCalibration;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/emcamera/AutoCalibration;

    .line 225
    iput-object p1, p0, Lcom/mediatek/emcamera/AutoCalibration$1;->this$0:Lcom/mediatek/emcamera/AutoCalibration;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onItemSelected(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 5
    .param p2, "view"    # Landroid/view/View;
    .param p3, "position"    # I
    .param p4, "id"    # J
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;",
            "Landroid/view/View;",
            "IJ)V"
        }
    .end annotation

    .line 228
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mSensorSpinner.onItemSelected; position"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " mIsInitialized:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/emcamera/AutoCalibration$1;->this$0:Lcom/mediatek/emcamera/AutoCalibration;

    .line 229
    invoke-static {v1}, Lcom/mediatek/emcamera/AutoCalibration;->access$000(Lcom/mediatek/emcamera/AutoCalibration;)Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 228
    const-string v1, "AutoCalibration"

    invoke-static {v1, v0}, Lcom/mediatek/emcamera/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 230
    iget-object v0, p0, Lcom/mediatek/emcamera/AutoCalibration$1;->this$0:Lcom/mediatek/emcamera/AutoCalibration;

    invoke-static {v0}, Lcom/mediatek/emcamera/AutoCalibration;->access$000(Lcom/mediatek/emcamera/AutoCalibration;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 231
    return-void

    .line 234
    :cond_0
    invoke-virtual {p1}, Landroid/widget/AdapterView;->getSelectedItem()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/emcamera/AutoCalibration$SensorItem;

    .line 235
    .local v0, "item":Lcom/mediatek/emcamera/AutoCalibration$SensorItem;
    invoke-virtual {v0}, Lcom/mediatek/emcamera/AutoCalibration$SensorItem;->getCameraId()Ljava/lang/String;

    move-result-object v2

    .line 236
    .local v2, "tempId":Ljava/lang/String;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Camera ID:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ",Tag:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/mediatek/emcamera/AutoCalibration$SensorItem;->getName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/emcamera/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 237
    iget-object v1, p0, Lcom/mediatek/emcamera/AutoCalibration$1;->this$0:Lcom/mediatek/emcamera/AutoCalibration;

    invoke-static {v1}, Lcom/mediatek/emcamera/AutoCalibration;->access$100(Lcom/mediatek/emcamera/AutoCalibration;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 238
    iget-object v1, p0, Lcom/mediatek/emcamera/AutoCalibration$1;->this$0:Lcom/mediatek/emcamera/AutoCalibration;

    invoke-static {v1, v2}, Lcom/mediatek/emcamera/AutoCalibration;->access$102(Lcom/mediatek/emcamera/AutoCalibration;Ljava/lang/String;)Ljava/lang/String;

    .line 239
    iget-object v1, p0, Lcom/mediatek/emcamera/AutoCalibration$1;->this$0:Lcom/mediatek/emcamera/AutoCalibration;

    invoke-static {v1}, Lcom/mediatek/emcamera/AutoCalibration;->access$200(Lcom/mediatek/emcamera/AutoCalibration;)V

    .line 241
    :cond_1
    return-void
.end method

.method public onNothingSelected(Landroid/widget/AdapterView;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;)V"
        }
    .end annotation

    .line 245
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    const-string v0, "AutoCalibration"

    const-string v1, "mSensorSpinner onNothingSelected()"

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 246
    return-void
.end method
