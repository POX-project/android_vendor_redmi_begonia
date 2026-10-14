.class Lcom/mediatek/emcamera/AutoCalibration$SensorItem;
.super Ljava/lang/Object;
.source "AutoCalibration.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/emcamera/AutoCalibration;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "SensorItem"
.end annotation


# instance fields
.field cameraId:Ljava/lang/String;

.field cameraName:Ljava/lang/String;

.field final synthetic this$0:Lcom/mediatek/emcamera/AutoCalibration;


# direct methods
.method public constructor <init>(Lcom/mediatek/emcamera/AutoCalibration;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0
    .param p2, "name"    # Ljava/lang/String;
    .param p3, "id"    # Ljava/lang/String;

    .line 98
    iput-object p1, p0, Lcom/mediatek/emcamera/AutoCalibration$SensorItem;->this$0:Lcom/mediatek/emcamera/AutoCalibration;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 99
    iput-object p2, p0, Lcom/mediatek/emcamera/AutoCalibration$SensorItem;->cameraName:Ljava/lang/String;

    .line 100
    iput-object p3, p0, Lcom/mediatek/emcamera/AutoCalibration$SensorItem;->cameraId:Ljava/lang/String;

    .line 101
    return-void
.end method


# virtual methods
.method public getCameraId()Ljava/lang/String;
    .locals 1

    .line 107
    iget-object v0, p0, Lcom/mediatek/emcamera/AutoCalibration$SensorItem;->cameraId:Ljava/lang/String;

    return-object v0
.end method

.method public getName()Ljava/lang/String;
    .locals 1

    .line 104
    iget-object v0, p0, Lcom/mediatek/emcamera/AutoCalibration$SensorItem;->cameraName:Ljava/lang/String;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 110
    iget-object v0, p0, Lcom/mediatek/emcamera/AutoCalibration$SensorItem;->cameraName:Ljava/lang/String;

    return-object v0
.end method
