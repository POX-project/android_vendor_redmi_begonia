.class Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;
.super Ljava/lang/Thread;
.source "LbsGps.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsGps;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "GpsTimer"
.end annotation


# instance fields
.field private enable:Z

.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

.field private timeCount:I


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V
    .locals 0

    .line 968
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    const/4 p1, 0x1

    .line 969
    iput-boolean p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;->enable:Z

    const/4 p1, 0x0

    .line 970
    iput p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;->timeCount:I

    return-void
.end method


# virtual methods
.method public getTimer()I
    .locals 0

    .line 985
    iget p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;->timeCount:I

    return p0
.end method

.method public resetTimer()V
    .locals 1

    const/4 v0, 0x0

    .line 995
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;->timeCount:I

    return-void
.end method

.method public run()V
    .locals 3

    .line 972
    :catch_0
    :goto_0
    iget-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;->enable:Z

    if-eqz v0, :cond_0

    const-wide/16 v0, 0x3e8

    .line 974
    :try_start_0
    invoke-static {v0, v1}, Ljava/lang/Thread;->sleep(J)V

    .line 975
    iget v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;->timeCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;->timeCount:I

    .line 976
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    const/4 v2, 0x0

    invoke-static {v1, v2, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3400(Lcom/mediatek/lbs/em2/ui/LbsGps;II)V

    .line 977
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "time="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;->timeCount:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3500(Lcom/mediatek/lbs/em2/ui/LbsGps;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 982
    :cond_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    const-string v0, "GpsTimer stopped"

    invoke-static {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3500(Lcom/mediatek/lbs/em2/ui/LbsGps;Ljava/lang/String;)V

    return-void
.end method

.method public startTimer()V
    .locals 0

    .line 988
    invoke-virtual {p0}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method public stopTimer()V
    .locals 1

    const/4 v0, 0x0

    .line 991
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;->enable:Z

    .line 992
    invoke-virtual {p0}, Ljava/lang/Thread;->interrupt()V

    return-void
.end method
