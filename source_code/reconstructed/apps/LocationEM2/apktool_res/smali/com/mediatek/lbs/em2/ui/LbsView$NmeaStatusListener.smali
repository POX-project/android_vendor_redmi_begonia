.class Lcom/mediatek/lbs/em2/ui/LbsView$NmeaStatusListener;
.super Ljava/lang/Object;
.source "LbsView.java"

# interfaces
.implements Lcom/mediatek/lbs/em2/ui/NmeaParser$NmeaUpdateViewListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "NmeaStatusListener"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsView;


# direct methods
.method private constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsView;)V
    .locals 0

    .line 180
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView$NmeaStatusListener;->this$0:Lcom/mediatek/lbs/em2/ui/LbsView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsView;Lcom/mediatek/lbs/em2/ui/LbsView$1;)V
    .locals 0

    .line 180
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsView$NmeaStatusListener;-><init>(Lcom/mediatek/lbs/em2/ui/LbsView;)V

    return-void
.end method


# virtual methods
.method public onViewupdateNotify()V
    .locals 1

    .line 183
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsView$NmeaStatusListener;->this$0:Lcom/mediatek/lbs/em2/ui/LbsView;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsView;->access$500(Lcom/mediatek/lbs/em2/ui/LbsView;)Lcom/mediatek/lbs/em2/ui/ViewNmea;

    move-result-object v0

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsView$NmeaStatusListener;->this$0:Lcom/mediatek/lbs/em2/ui/LbsView;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsView;->access$800(Lcom/mediatek/lbs/em2/ui/LbsView;)Lcom/mediatek/lbs/em2/ui/NmeaParser;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->getSatelliteList()Ljava/util/ArrayList;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/mediatek/lbs/em2/ui/ViewNmea;->setGpsStatus(Ljava/util/ArrayList;)V

    return-void
.end method
