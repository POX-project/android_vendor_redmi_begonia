.class Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$1;
.super Landroid/content/BroadcastReceiver;
.source "MDLogFiltersActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    .line 228
    iput-object p1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$1;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 4
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "intent"    # Landroid/content/Intent;

    .line 231
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onReceive: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MDLogFilters"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 232
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    const-string v2, "com.debug.loggerui.result"

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 234
    const-string v0, "result_value"

    invoke-virtual {p2, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 235
    .local v0, "path":Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "path: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 236
    if-eqz v0, :cond_0

    .line 237
    iget-object v1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$1;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "mdlog1_config/"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$202(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;Ljava/lang/String;)Ljava/lang/String;

    .line 240
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$1;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->removeDialog(I)V

    .line 242
    .end local v0    # "path":Ljava/lang/String;
    :cond_1
    return-void
.end method
