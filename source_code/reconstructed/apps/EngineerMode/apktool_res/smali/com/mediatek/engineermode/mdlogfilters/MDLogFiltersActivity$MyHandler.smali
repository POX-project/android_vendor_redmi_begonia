.class Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$MyHandler;
.super Landroid/os/Handler;
.source "MDLogFiltersActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "MyHandler"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)V
    .locals 0

    .line 441
    iput-object p1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$MyHandler;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;
    .param p2, "x1"    # Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$1;

    .line 441
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$MyHandler;-><init>(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 7
    .param p1, "msg"    # Landroid/os/Message;

    .line 445
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 446
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "MDLogFilters"

    const/4 v4, 0x1

    if-ne v0, v4, :cond_3

    .line 447
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$MyHandler;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-static {v0, v4}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$700(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;Z)V

    .line 448
    invoke-static {}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;->values()[Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

    move-result-object v0

    iget v5, p1, Landroid/os/Message;->arg1:I

    aget-object v0, v0, v5

    .line 449
    .local v0, "result":Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;
    sget-object v5, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$3;->$SwitchMap$com$mediatek$engineermode$mdlogfilters$MDLogFiltersActivity$UpdateFilterResult:[I

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;->ordinal()I

    move-result v6

    aget v5, v5, v6

    const/4 v6, 0x3

    if-eq v5, v4, :cond_2

    if-eq v5, v2, :cond_1

    if-eq v5, v6, :cond_0

    goto :goto_0

    .line 460
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$MyHandler;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    const/4 v2, 0x4

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->showDialog(I)V

    .line 461
    goto :goto_0

    .line 455
    :cond_1
    iget-object v2, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$MyHandler;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    const v4, 0x7f0a040c

    invoke-static {v2, v4, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v1

    .line 456
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 457
    const-string v1, "Update filter fail for IO error"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 458
    goto :goto_0

    .line 451
    :cond_2
    iget-object v1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$MyHandler;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-virtual {v1, v6}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->showDialog(I)V

    .line 452
    const-string v1, "Update filter success"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 453
    goto :goto_0

    .line 465
    .end local v0    # "result":Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;
    :cond_3
    iget v0, p1, Landroid/os/Message;->what:I

    if-ne v0, v2, :cond_4

    .line 466
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$MyHandler;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-static {v0, v4}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$700(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;Z)V

    .line 467
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$MyHandler;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    const v2, 0x7f0a040f

    invoke-static {v0, v2, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    .line 469
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 470
    const-string v0, "Update filter fail for wrong filter format"

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 465
    :cond_4
    :goto_0
    nop

    .line 473
    :goto_1
    return-void
.end method
