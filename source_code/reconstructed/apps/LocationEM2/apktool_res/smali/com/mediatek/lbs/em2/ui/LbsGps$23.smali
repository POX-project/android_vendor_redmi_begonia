.class Lcom/mediatek/lbs/em2/ui/LbsGps$23;
.super Ljava/lang/Object;
.source "LbsGps.java"

# interfaces
.implements Landroid/location/OnNmeaMessageListener;


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

    .line 639
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$23;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onNmeaMessage(Ljava/lang/String;J)V
    .locals 0

    .line 642
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$23;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    const/4 p2, 0x7

    const/4 p3, 0x0

    invoke-static {p0, p2, p3, p3, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3300(Lcom/mediatek/lbs/em2/ui/LbsGps;IIILjava/lang/Object;)V

    return-void
.end method
