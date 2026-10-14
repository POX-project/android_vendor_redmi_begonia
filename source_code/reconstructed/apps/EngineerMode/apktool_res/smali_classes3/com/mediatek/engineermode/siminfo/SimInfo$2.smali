.class Lcom/mediatek/engineermode/siminfo/SimInfo$2;
.super Landroid/content/BroadcastReceiver;
.source "SimInfo.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/siminfo/SimInfo;
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

    .line 120
    iput-object p1, p0, Lcom/mediatek/engineermode/siminfo/SimInfo$2;->this$0:Lcom/mediatek/engineermode/siminfo/SimInfo;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 6
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "intent"    # Landroid/content/Intent;

    .line 123
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    .line 124
    .local v0, "action":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "SIMChangedBroadcastReceiver "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "SimInfo"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 126
    iget-object v1, p0, Lcom/mediatek/engineermode/siminfo/SimInfo$2;->this$0:Lcom/mediatek/engineermode/siminfo/SimInfo;

    invoke-static {v1}, Lcom/mediatek/engineermode/siminfo/SimInfo;->access$200(Lcom/mediatek/engineermode/siminfo/SimInfo;)Z

    move-result v1

    const/4 v3, 0x0

    const/4 v4, 0x1

    if-ne v1, v4, :cond_0

    .line 127
    const-string v1, "it is the  mFirstBroadcast"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 128
    iget-object v1, p0, Lcom/mediatek/engineermode/siminfo/SimInfo$2;->this$0:Lcom/mediatek/engineermode/siminfo/SimInfo;

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/siminfo/SimInfo;->access$202(Lcom/mediatek/engineermode/siminfo/SimInfo;Z)Z

    .line 129
    return-void

    .line 132
    :cond_0
    if-eqz v0, :cond_2

    const-string v1, "android.intent.action.SIM_STATE_CHANGED"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 133
    const-string v1, "ss"

    invoke-virtual {p2, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 134
    .local v1, "newState":Ljava/lang/String;
    const-string v4, "slot"

    invoke-virtual {p2, v4, v3}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v3

    .line 135
    .local v3, "changeSlot":I
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "SIM state change changeSlot="

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, " mSimType="

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/siminfo/SimInfo$2;->this$0:Lcom/mediatek/engineermode/siminfo/SimInfo;

    .line 136
    invoke-static {v5}, Lcom/mediatek/engineermode/siminfo/SimInfo;->access$300(Lcom/mediatek/engineermode/siminfo/SimInfo;)I

    move-result v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, " new state ="

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 135
    invoke-static {v2, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 137
    iget-object v4, p0, Lcom/mediatek/engineermode/siminfo/SimInfo$2;->this$0:Lcom/mediatek/engineermode/siminfo/SimInfo;

    invoke-static {v4}, Lcom/mediatek/engineermode/siminfo/SimInfo;->access$300(Lcom/mediatek/engineermode/siminfo/SimInfo;)I

    move-result v4

    if-ne v3, v4, :cond_2

    .line 138
    const-string v4, "LOADED"

    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    .line 139
    const-string v4, "SIM card status ready "

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 140
    iget-object v2, p0, Lcom/mediatek/engineermode/siminfo/SimInfo$2;->this$0:Lcom/mediatek/engineermode/siminfo/SimInfo;

    invoke-static {v2}, Lcom/mediatek/engineermode/siminfo/SimInfo;->access$400(Lcom/mediatek/engineermode/siminfo/SimInfo;)V

    goto :goto_0

    .line 141
    :cond_1
    const-string v4, "ABSENT"

    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_2

    .line 142
    const-string v4, "SIM card status absent "

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 143
    iget-object v2, p0, Lcom/mediatek/engineermode/siminfo/SimInfo$2;->this$0:Lcom/mediatek/engineermode/siminfo/SimInfo;

    invoke-static {v2}, Lcom/mediatek/engineermode/siminfo/SimInfo;->access$500(Lcom/mediatek/engineermode/siminfo/SimInfo;)Landroid/os/Handler;

    move-result-object v2

    const/4 v4, 0x3

    invoke-virtual {v2, v4}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 148
    .end local v1    # "newState":Ljava/lang/String;
    .end local v3    # "changeSlot":I
    :cond_2
    :goto_0
    return-void
.end method
