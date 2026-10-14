.class Lcom/mediatek/lbs/em2/ui/LbsRawData$8;
.super Ljava/lang/Object;
.source "LbsRawData.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsRawData;->initUI()V
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

    .line 293
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 3

    .line 297
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mToggleButtonAntenna:Landroid/widget/ToggleButton;

    invoke-virtual {p1}, Landroid/widget/ToggleButton;->isChecked()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 298
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$602(Lcom/mediatek/lbs/em2/ui/LbsRawData;I)I

    .line 299
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$1000(Lcom/mediatek/lbs/em2/ui/LbsRawData;)Landroid/location/LocationManager;

    move-result-object p1

    sget-object v0, Lcom/mediatek/lbs/em2/ui/-$$Lambda$_14QHG018Z6p13d3hzJuGTWnNeo;->INSTANCE:Lcom/mediatek/lbs/em2/ui/-$$Lambda$_14QHG018Z6p13d3hzJuGTWnNeo;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    .line 300
    invoke-static {v1}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$1200(Lcom/mediatek/lbs/em2/ui/LbsRawData;)Landroid/location/GnssAntennaInfo$Listener;

    move-result-object v1

    invoke-virtual {p1, v0, v1}, Landroid/location/LocationManager;->registerAntennaInfoListener(Ljava/util/concurrent/Executor;Landroid/location/GnssAntennaInfo$Listener;)Z

    move-result p1

    .line 301
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    new-instance v1, Ljava/util/Date;

    invoke-direct {v1}, Ljava/util/Date;-><init>()V

    invoke-virtual {v1}, Ljava/util/Date;->getTime()J

    move-result-wide v1

    invoke-static {v0, v1, v2}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$100(Lcom/mediatek/lbs/em2/ui/LbsRawData;J)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$702(Lcom/mediatek/lbs/em2/ui/LbsRawData;Ljava/lang/String;)Ljava/lang/String;

    goto :goto_0

    .line 304
    :cond_0
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$1000(Lcom/mediatek/lbs/em2/ui/LbsRawData;)Landroid/location/LocationManager;

    move-result-object p1

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$1200(Lcom/mediatek/lbs/em2/ui/LbsRawData;)Landroid/location/GnssAntennaInfo$Listener;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/location/LocationManager;->unregisterAntennaInfoListener(Landroid/location/GnssAntennaInfo$Listener;)V

    const/4 p1, 0x1

    .line 306
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Antenna Opt:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    iget-object v1, v1, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mToggleButtonAntenna:Landroid/widget/ToggleButton;

    invoke-virtual {v1}, Landroid/widget/ToggleButton;->isChecked()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 307
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mTextViewLogAntenna:Landroid/widget/TextView;

    invoke-virtual {p0, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 308
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "register result:"

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->log(Ljava/lang/Object;)V

    return-void
.end method
