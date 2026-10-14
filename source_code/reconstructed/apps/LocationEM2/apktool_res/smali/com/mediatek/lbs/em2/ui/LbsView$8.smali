.class Lcom/mediatek/lbs/em2/ui/LbsView$8;
.super Landroid/location/GnssStatus$Callback;
.source "LbsView.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsView;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsView;)V
    .locals 0

    .line 147
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsView;

    invoke-direct {p0}, Landroid/location/GnssStatus$Callback;-><init>()V

    return-void
.end method


# virtual methods
.method public onSatelliteStatusChanged(Landroid/location/GnssStatus;)V
    .locals 1

    .line 156
    :try_start_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsView$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsView;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsView;->access$300(Lcom/mediatek/lbs/em2/ui/LbsView;)Lcom/mediatek/lbs/em2/ui/ViewGnss;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/ui/ViewGnss;->setGnssStatus(Landroid/location/GnssStatus;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    const-string p1, "LocationEM"

    const-string v0, "Error encountered on setGnssStatus() "

    .line 158
    invoke-static {p1, v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :goto_0
    return-void
.end method

.method public onStarted()V
    .locals 0

    .line 150
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsView$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsView;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsView;->access$300(Lcom/mediatek/lbs/em2/ui/LbsView;)Lcom/mediatek/lbs/em2/ui/ViewGnss;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/ViewGnss;->resetGnssView()V

    return-void
.end method
