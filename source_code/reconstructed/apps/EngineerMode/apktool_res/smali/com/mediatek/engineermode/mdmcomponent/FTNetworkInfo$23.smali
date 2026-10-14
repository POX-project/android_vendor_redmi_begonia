.class Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$23;
.super Landroid/content/BroadcastReceiver;
.source "MDMComponentFT.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->registSimReceiver(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    .line 881
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$23;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 5
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "intent"    # Landroid/content/Intent;

    .line 884
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    .line 886
    .local v0, "action":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$23;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    invoke-static {v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->access$000(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)Z

    move-result v1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-ne v1, v3, :cond_0

    .line 887
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$23;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->access$002(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;Z)Z

    .line 888
    return-void

    .line 891
    :cond_0
    if-eqz v0, :cond_1

    const-string v1, "android.intent.action.SIM_STATE_CHANGED"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 892
    const-string v1, "ss"

    invoke-virtual {p2, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 893
    .local v1, "newState":Ljava/lang/String;
    const-string v3, "slot"

    invoke-virtual {p2, v3, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v2

    .line 894
    .local v2, "changeSlot":I
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "SIM state change changeSlot="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, " new state ="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "EmInfo/MDMComponent"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 896
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$23;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    invoke-virtual {v3, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initImsiList(I)V

    .line 897
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$23;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getCurrentSimID()I

    move-result v4

    invoke-virtual {v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->updateCommonView(I)V

    .line 899
    .end local v1    # "newState":Ljava/lang/String;
    .end local v2    # "changeSlot":I
    :cond_1
    return-void
.end method
