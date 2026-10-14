.class Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2$1;
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

    .line 355
    iput-object p1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2$1;->this$1:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 359
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2$1;->this$1:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;

    iget-object v0, v0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2$1;->this$1:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;

    iget-object v1, v1, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$600(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$800(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 360
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2$1;->this$1:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;

    iget-object v0, v0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$900(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 361
    return-void

    .line 365
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2$1;->this$1:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;

    iget-object v0, v0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$900(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 366
    .local v0, "message":Landroid/os/Message;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2$1;->this$1:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;

    iget-object v1, v1, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    iget-object v2, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2$1;->this$1:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;

    iget-object v2, v2, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$600(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$1000(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;Ljava/lang/String;)Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;->ordinal()I

    move-result v1

    iput v1, v0, Landroid/os/Message;->arg1:I

    .line 367
    iget-object v1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2$1;->this$1:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;

    iget-object v1, v1, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$900(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)Landroid/os/Handler;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 369
    return-void
.end method
