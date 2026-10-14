.class Lcom/mediatek/lbs/em2/ui/LbsGps$24;
.super Landroid/location/GnssStatus$Callback;
.source "LbsGps.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsGps;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V
    .locals 0

    .line 646
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$24;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-direct {p0}, Landroid/location/GnssStatus$Callback;-><init>()V

    return-void
.end method


# virtual methods
.method public onFirstFix(I)V
    .locals 2

    .line 659
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$24;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onFirstFix ttffMillis:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3500(Lcom/mediatek/lbs/em2/ui/LbsGps;Ljava/lang/String;)V

    return-void
.end method

.method public onSatelliteStatusChanged(Landroid/location/GnssStatus;)V
    .locals 2

    .line 654
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$24;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    const/16 v0, 0x8

    const/4 v1, 0x0

    invoke-static {p0, v0, v1, v1, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3300(Lcom/mediatek/lbs/em2/ui/LbsGps;IIILjava/lang/Object;)V

    return-void
.end method

.method public onStarted()V
    .locals 2

    .line 649
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$24;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    const/4 v0, 0x6

    const/4 v1, 0x0

    invoke-static {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3400(Lcom/mediatek/lbs/em2/ui/LbsGps;II)V

    return-void
.end method
