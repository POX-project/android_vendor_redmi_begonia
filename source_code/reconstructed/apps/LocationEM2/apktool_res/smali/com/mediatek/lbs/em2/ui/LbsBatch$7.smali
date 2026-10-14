.class Lcom/mediatek/lbs/em2/ui/LbsBatch$7;
.super Ljava/lang/Object;
.source "LbsBatch.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsBatch;->initUiListeners()V
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

    .line 190
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 1

    const-string p1, "flushBatchedLocations"

    .line 193
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsBatch;->log(Ljava/lang/Object;)V

    .line 195
    :try_start_0
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsBatch;->access$200(Lcom/mediatek/lbs/em2/ui/LbsBatch;)Landroid/location/LocationManager;

    move-result-object p1

    invoke-virtual {p1}, Landroid/location/LocationManager;->flushGnssBatch()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string p1, "Failed to run GnssBatching flushGnssBatch."

    .line 197
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsBatch;->loge(Ljava/lang/Object;)V

    .line 198
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    const/4 p1, 0x0

    const-string v0, "GnssBatching not support !!"

    invoke-static {p0, v0, p1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p0

    .line 199
    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    :goto_0
    return-void
.end method
