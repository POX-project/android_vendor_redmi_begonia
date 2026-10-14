.class Lcom/mediatek/lbs/em2/ui/LbsView$9;
.super Ljava/lang/Object;
.source "LbsView.java"

# interfaces
.implements Landroid/location/GpsStatus$Listener;


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

    .line 164
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onGpsStatusChanged(I)V
    .locals 1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 168
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsView$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsView;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsView;->access$400(Lcom/mediatek/lbs/em2/ui/LbsView;)Lcom/mediatek/lbs/em2/ui/ViewGps;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/ViewGps;->resetGpsView()V

    goto :goto_0

    :cond_0
    const/4 v0, 0x4

    if-ne p1, v0, :cond_1

    .line 171
    :try_start_0
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsView;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsView;->access$400(Lcom/mediatek/lbs/em2/ui/LbsView;)Lcom/mediatek/lbs/em2/ui/ViewGps;

    move-result-object p1

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsView$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsView;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsView;->access$700(Lcom/mediatek/lbs/em2/ui/LbsView;)Landroid/location/LocationManager;

    move-result-object p0

    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Landroid/location/LocationManager;->getGpsStatus(Landroid/location/GpsStatus;)Landroid/location/GpsStatus;

    move-result-object p0

    invoke-virtual {p1, p0}, Lcom/mediatek/lbs/em2/ui/ViewGps;->setGpsStatus(Landroid/location/GpsStatus;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    const-string p1, "LocationEM"

    const-string v0, "Error encountered on getGpsStatus() "

    .line 173
    invoke-static {p1, v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_1
    :goto_0
    return-void
.end method
