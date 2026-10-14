.class Lcom/mediatek/engineermode/siminfo/SimInfo$3;
.super Ljava/lang/Thread;
.source "SimInfo.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/siminfo/SimInfo;->loadInCardInfoBackground()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/siminfo/SimInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/siminfo/SimInfo;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/siminfo/SimInfo;

    .line 252
    iput-object p1, p0, Lcom/mediatek/engineermode/siminfo/SimInfo$3;->this$0:Lcom/mediatek/engineermode/siminfo/SimInfo;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 255
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo$3;->this$0:Lcom/mediatek/engineermode/siminfo/SimInfo;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/siminfo/SimInfo;->loadSubId()V

    .line 256
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo$3;->this$0:Lcom/mediatek/engineermode/siminfo/SimInfo;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/siminfo/SimInfo;->loadIccCardType()V

    .line 257
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo$3;->this$0:Lcom/mediatek/engineermode/siminfo/SimInfo;

    invoke-static {v0}, Lcom/mediatek/engineermode/siminfo/SimInfo;->access$500(Lcom/mediatek/engineermode/siminfo/SimInfo;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 258
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo$3;->this$0:Lcom/mediatek/engineermode/siminfo/SimInfo;

    invoke-static {v0}, Lcom/mediatek/engineermode/siminfo/SimInfo;->access$100(Lcom/mediatek/engineermode/siminfo/SimInfo;)I

    move-result v0

    const/4 v1, 0x2

    if-ge v0, v1, :cond_0

    .line 259
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo$3;->this$0:Lcom/mediatek/engineermode/siminfo/SimInfo;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/siminfo/SimInfo;->loadSimInfoData()V

    .line 261
    :cond_0
    return-void
.end method
