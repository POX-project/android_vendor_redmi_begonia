.class Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2$2;
.super Ljava/lang/Thread;
.source "MDLogFiltersActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;->onClick(Landroid/view/View;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;)V
    .locals 0
    .param p1, "this$1"    # Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;

    .line 374
    iput-object p1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2$2;->this$1:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 377
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2$2;->this$1:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;

    iget-object v0, v0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$900(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 378
    .local v0, "message":Landroid/os/Message;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2$2;->this$1:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;

    iget-object v1, v1, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    const-string v2, ""

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$1000(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;Ljava/lang/String;)Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;->ordinal()I

    move-result v1

    iput v1, v0, Landroid/os/Message;->arg1:I

    .line 379
    iget-object v1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2$2;->this$1:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;

    iget-object v1, v1, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$900(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)Landroid/os/Handler;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 380
    return-void
.end method
