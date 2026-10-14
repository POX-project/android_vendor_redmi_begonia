.class Lcom/mediatek/lbs/em2/ui/LbsBatch$5;
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

    .line 140
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 7

    .line 143
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mToggleButtonStart:Landroid/widget/ToggleButton;

    invoke-virtual {p1}, Landroid/widget/ToggleButton;->isChecked()Z

    move-result p1

    .line 144
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    iput-boolean p1, v0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mIsStarted:Z

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    .line 147
    :try_start_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "startBatching mIsWakeOnFifoFull="

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    iget-boolean v1, v1, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mIsWakeOnFifoFull:Z

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", BatchSize = "

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    iget v1, v1, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mSupportedBatchSize:I

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsBatch;->log(Ljava/lang/Object;)V

    .line 149
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    iput v0, p1, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mLocationCallbackCount:I

    .line 150
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsBatch;->access$200(Lcom/mediatek/lbs/em2/ui/LbsBatch;)Landroid/location/LocationManager;

    move-result-object v1

    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    iget-wide v2, p1, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mPeriodSecond:J

    const-wide/32 v4, 0x3b9aca00

    mul-long/2addr v2, v4

    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    iget-boolean v4, p1, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mIsWakeOnFifoFull:Z

    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    .line 152
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsBatch;->access$100(Lcom/mediatek/lbs/em2/ui/LbsBatch;)Landroid/location/BatchedLocationCallback;

    move-result-object v5

    const/4 v6, 0x0

    .line 150
    invoke-virtual/range {v1 .. v6}, Landroid/location/LocationManager;->registerGnssBatchedLocationCallback(JZLandroid/location/BatchedLocationCallback;Landroid/os/Handler;)Z

    goto :goto_0

    :cond_0
    const-string p1, "stopBatching"

    .line 154
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsBatch;->log(Ljava/lang/Object;)V

    .line 155
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsBatch;->access$200(Lcom/mediatek/lbs/em2/ui/LbsBatch;)Landroid/location/LocationManager;

    move-result-object p1

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/ui/LbsBatch;->access$100(Lcom/mediatek/lbs/em2/ui/LbsBatch;)Landroid/location/BatchedLocationCallback;

    move-result-object v1

    invoke-virtual {p1, v1}, Landroid/location/LocationManager;->unregisterGnssBatchedLocationCallback(Landroid/location/BatchedLocationCallback;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string p1, "Failed to run GnssBatching registeration."

    .line 158
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsBatch;->loge(Ljava/lang/Object;)V

    .line 159
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    invoke-virtual {p1}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    const-string v1, "GnssBatching not support !!"

    invoke-static {p1, v1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p1

    .line 160
    invoke-virtual {p1}, Landroid/widget/Toast;->show()V

    .line 162
    :goto_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    iget-boolean p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mIsStarted:Z

    xor-int/lit8 p1, p1, 0x1

    invoke-static {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsBatch;->access$300(Lcom/mediatek/lbs/em2/ui/LbsBatch;Z)V

    return-void
.end method
