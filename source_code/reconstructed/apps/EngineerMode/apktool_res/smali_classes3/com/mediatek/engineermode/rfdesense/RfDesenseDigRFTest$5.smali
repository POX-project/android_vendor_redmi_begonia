.class Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$5;
.super Landroid/os/CountDownTimer;
.source "RfDesenseDigRFTest.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->startTimer(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

.field final synthetic val$waitTime:I


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;JJI)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;
    .param p2, "arg0"    # J
    .param p4, "arg1"    # J

    .line 250
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$5;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    iput p6, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$5;->val$waitTime:I

    invoke-direct {p0, p2, p3, p4, p5}, Landroid/os/CountDownTimer;-><init>(JJ)V

    return-void
.end method


# virtual methods
.method public onFinish()V
    .locals 3

    .line 261
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$5;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    iget-object v0, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->oneResult:[Z

    const/4 v1, 0x0

    aget-boolean v0, v0, v1

    if-eqz v0, :cond_1

    .line 262
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$5;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-static {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)I

    move-result v1

    const/4 v2, 0x2

    if-ne v1, v2, :cond_0

    const/4 v2, 0x3

    :cond_0
    const-string v1, "AT+EGCMD=4896,1,\"05\""

    invoke-static {v0, v1, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$600(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;Ljava/lang/String;I)V

    goto :goto_0

    .line 264
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$5;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-static {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$700(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)V

    .line 266
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "test closed, round : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$5;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$800(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", period: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$5;->val$waitTime:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", mState: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$5;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RfDesenseDigRFTest"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 267
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$5;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    iget-object v0, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->timer:Landroid/os/CountDownTimer;

    if-eqz v0, :cond_2

    .line 268
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$5;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    iget-object v0, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->timer:Landroid/os/CountDownTimer;

    invoke-virtual {v0}, Landroid/os/CountDownTimer;->cancel()V

    .line 270
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$5;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    const/4 v1, 0x0

    iput-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->timer:Landroid/os/CountDownTimer;

    .line 271
    return-void
.end method

.method public onTick(J)V
    .locals 6
    .param p1, "millisUntilFinishied"    # J

    .line 253
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$5;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-static {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$500(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)Landroid/widget/ProgressBar;

    move-result-object v0

    iget v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$5;->val$waitTime:I

    mul-int/lit16 v2, v1, 0x3e8

    int-to-long v2, v2

    sub-long/2addr v2, p1

    mul-int/lit8 v1, v1, 0xa

    int-to-long v4, v1

    div-long/2addr v2, v4

    long-to-int v1, v2

    invoke-virtual {v0, v1}, Landroid/widget/ProgressBar;->setSecondaryProgress(I)V

    .line 254
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "millisUntilFinishied: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RfDesenseDigRFTest"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 255
    const-wide/16 v0, 0x3e8

    cmp-long v0, p1, v0

    if-lez v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$5;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-static {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    .line 256
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$5;->onFinish()V

    .line 258
    :cond_0
    return-void
.end method
