.class Lcom/mediatek/lbs/em2/ui/LbsRawData$1;
.super Landroid/location/GnssMeasurementsEvent$Callback;
.source "LbsRawData.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsRawData;
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

    .line 100
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-direct {p0}, Landroid/location/GnssMeasurementsEvent$Callback;-><init>()V

    return-void
.end method


# virtual methods
.method public onGnssMeasurementsReceived(Landroid/location/GnssMeasurementsEvent;)V
    .locals 10

    .line 103
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$008(Lcom/mediatek/lbs/em2/ui/LbsRawData;)I

    .line 105
    invoke-virtual {p1}, Landroid/location/GnssMeasurementsEvent;->getMeasurements()Ljava/util/Collection;

    move-result-object v0

    .line 109
    new-instance v1, Ljava/lang/String;

    invoke-direct {v1}, Ljava/lang/String;-><init>()V

    .line 110
    new-instance v1, Ljava/lang/String;

    invoke-direct {v1}, Ljava/lang/String;-><init>()V

    .line 111
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    new-instance v4, Ljava/util/Date;

    invoke-direct {v4}, Ljava/util/Date;-><init>()V

    invoke-virtual {v4}, Ljava/util/Date;->getTime()J

    move-result-wide v4

    invoke-static {v3, v4, v5}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$100(Lcom/mediatek/lbs/em2/ui/LbsRawData;J)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ",getClock: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 112
    invoke-virtual {p1}, Landroid/location/GnssMeasurementsEvent;->getClock()Landroid/location/GnssClock;

    move-result-object p1

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, "\n"

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 113
    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    const/4 v3, 0x0

    move-object v7, v2

    move v2, v3

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/location/GnssMeasurement;

    .line 114
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "meas:["

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, "] :"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    .line 115
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " Svid="

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Landroid/location/GnssMeasurement;->getConstellationType()I

    move-result v1

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "_"

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 116
    invoke-virtual {v4}, Landroid/location/GnssMeasurement;->getSvid()I

    move-result v1

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " STA="

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Landroid/location/GnssMeasurement;->getState()I

    move-result v1

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " CType="

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 117
    invoke-virtual {v4}, Landroid/location/GnssMeasurement;->getCodeType()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 120
    :cond_0
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "MEAS_"

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-static {v5}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$200(Lcom/mediatek/lbs/em2/ui/LbsRawData;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ".txt"

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    const/4 v8, 0x1

    const/4 v9, 0x0

    const-string v5, "MEAS"

    invoke-virtual/range {v4 .. v9}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->write2File(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZ)Z

    .line 123
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Measurement Count="

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$000(Lcom/mediatek/lbs/em2/ui/LbsRawData;)I

    move-result v4

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "\nSatellite Num="

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 125
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->log(Ljava/lang/Object;)V

    .line 126
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    const/4 v0, 0x1

    invoke-static {p0, v0, v3, v3, p1}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$300(Lcom/mediatek/lbs/em2/ui/LbsRawData;IIILjava/lang/Object;)V

    return-void
.end method

.method public onStatusChanged(I)V
    .locals 0

    return-void
.end method
