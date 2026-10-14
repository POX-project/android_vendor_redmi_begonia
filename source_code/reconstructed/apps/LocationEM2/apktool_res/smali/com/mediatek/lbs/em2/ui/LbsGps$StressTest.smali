.class Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;
.super Ljava/lang/Thread;
.source "LbsGps.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsGps;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "StressTest"
.end annotation


# instance fields
.field private delay1:I

.field private delay2:I

.field private delay3:I

.field private delay4:I

.field private enable:Z

.field private numOfLoop:I

.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;


# direct methods
.method public constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsGps;IIIII)V
    .locals 0

    .line 770
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    const/4 p1, 0x1

    .line 765
    iput-boolean p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->enable:Z

    .line 771
    iput p2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->numOfLoop:I

    .line 772
    iput p3, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->delay1:I

    .line 773
    iput p4, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->delay2:I

    .line 774
    iput p5, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->delay3:I

    .line 775
    iput p6, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->delay4:I

    .line 776
    iput-boolean p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->enable:Z

    return-void
.end method

.method private oneSession()V
    .locals 4

    .line 813
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$4500(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/CheckBox;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 815
    :try_start_0
    iget v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->delay2:I

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v2, v0

    invoke-static {v2, v3}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    .line 819
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    const/4 v2, 0x5

    invoke-static {v0, v2, v1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3400(Lcom/mediatek/lbs/em2/ui/LbsGps;II)V

    goto :goto_0

    :catch_0
    return-void

    .line 823
    :cond_0
    :goto_0
    :try_start_1
    iget v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->delay1:I

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v2, v0

    invoke-static {v2, v3}, Ljava/lang/Thread;->sleep(J)V
    :try_end_1
    .catch Ljava/lang/InterruptedException; {:try_start_1 .. :try_end_1} :catch_2

    .line 828
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    const/4 v2, 0x3

    invoke-static {v0, v2, v1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3400(Lcom/mediatek/lbs/em2/ui/LbsGps;II)V

    .line 831
    :try_start_2
    iget v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->delay3:I

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v0, v0

    invoke-static {v0, v1}, Ljava/lang/Thread;->sleep(J)V
    :try_end_2
    .catch Ljava/lang/InterruptedException; {:try_start_2 .. :try_end_2} :catch_1

    return-void

    .line 834
    :catch_1
    iget-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->enable:Z

    if-nez v0, :cond_1

    return-void

    .line 840
    :cond_1
    :try_start_3
    iget p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->delay4:I

    mul-int/lit16 p0, p0, 0x3e8

    int-to-long v0, p0

    invoke-static {v0, v1}, Ljava/lang/Thread;->sleep(J)V
    :try_end_3
    .catch Ljava/lang/InterruptedException; {:try_start_3 .. :try_end_3} :catch_2

    :catch_2
    return-void
.end method


# virtual methods
.method public gotFixNotify()V
    .locals 0

    .line 788
    invoke-virtual {p0}, Ljava/lang/Thread;->interrupt()V

    return-void
.end method

.method public run()V
    .locals 5

    .line 797
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "numOfLoop="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->numOfLoop:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " delay1="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->delay1:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " delay2="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->delay2:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " delay3="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->delay3:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " delay4="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->delay4:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3500(Lcom/mediatek/lbs/em2/ui/LbsGps;Ljava/lang/String;)V

    const/4 v0, 0x0

    move v1, v0

    .line 799
    :cond_0
    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->numOfLoop:I

    if-ge v1, v2, :cond_1

    .line 800
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "=== stress test loop="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "==="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3500(Lcom/mediatek/lbs/em2/ui/LbsGps;Ljava/lang/String;)V

    .line 801
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    const/4 v3, 0x2

    add-int/lit8 v1, v1, 0x1

    invoke-static {v2, v3, v1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3400(Lcom/mediatek/lbs/em2/ui/LbsGps;II)V

    .line 802
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->oneSession()V

    .line 803
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    const/4 v3, 0x4

    invoke-static {v2, v3, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3400(Lcom/mediatek/lbs/em2/ui/LbsGps;II)V

    .line 804
    iget-boolean v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->enable:Z

    if-nez v2, :cond_0

    .line 807
    :cond_1
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    const-string v2, "end of stress test"

    invoke-static {v1, v2}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3500(Lcom/mediatek/lbs/em2/ui/LbsGps;Ljava/lang/String;)V

    .line 808
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    const/4 v1, 0x1

    invoke-static {p0, v1, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3400(Lcom/mediatek/lbs/em2/ui/LbsGps;II)V

    return-void
.end method

.method public startStress()V
    .locals 0

    .line 779
    invoke-virtual {p0}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method public stopStress()V
    .locals 1

    const/4 v0, 0x0

    .line 783
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->enable:Z

    .line 784
    invoke-virtual {p0}, Ljava/lang/Thread;->interrupt()V

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    .line 792
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "StressTest  numOfLoop="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->numOfLoop:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " delay1="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->delay1:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " delay2="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->delay2:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " delay3="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->delay3:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " delay4="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->delay4:I

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method
