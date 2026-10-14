.class Lcom/mediatek/lbs/em2/ui/LbsBatch$1;
.super Landroid/location/BatchedLocationCallback;
.source "LbsBatch.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsBatch;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsBatch;)V
    .locals 0

    .line 106
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    invoke-direct {p0}, Landroid/location/BatchedLocationCallback;-><init>()V

    return-void
.end method


# virtual methods
.method public onLocationBatch(Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Landroid/location/Location;",
            ">;)V"
        }
    .end annotation

    .line 109
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    const/4 v0, 0x1

    const/4 v1, 0x0

    invoke-static {p0, v0, v1, v1, p1}, Lcom/mediatek/lbs/em2/ui/LbsBatch;->access$000(Lcom/mediatek/lbs/em2/ui/LbsBatch;IIILjava/lang/Object;)V

    return-void
.end method
