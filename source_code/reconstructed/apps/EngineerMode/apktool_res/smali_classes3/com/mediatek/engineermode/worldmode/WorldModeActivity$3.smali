.class Lcom/mediatek/engineermode/worldmode/WorldModeActivity$3;
.super Landroid/content/BroadcastReceiver;
.source "WorldModeActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/worldmode/WorldModeActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    .line 209
    iput-object p1, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$3;->this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 4
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "intent"    # Landroid/content/Intent;

    .line 212
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    .line 213
    .local v0, "action":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[Receiver]+"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "WorldModeActivity"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 214
    const-string v1, "android.intent.action.ACTION_SET_RADIO_CAPABILITY_DONE"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 215
    iget-object v1, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$3;->this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$100(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)V

    goto :goto_0

    .line 216
    :cond_0
    const-string v1, "mediatek.intent.action.ACTION_WORLD_MODE_CHANGED"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 217
    const/4 v1, -0x1

    const-string v3, "worldModeState"

    invoke-virtual {p2, v3, v1}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    .line 219
    .local v1, "worldModeState":I
    const/4 v3, 0x1

    if-ne v1, v3, :cond_1

    .line 220
    iget-object v3, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$3;->this$0:Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    invoke-static {v3}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->access$100(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)V

    .line 223
    .end local v1    # "worldModeState":I
    :cond_1
    :goto_0
    const-string v1, "[Receiver]-"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 224
    return-void
.end method
