.class Lcom/mediatek/engineermode/worldphone/ModemSwitch$1;
.super Landroid/content/BroadcastReceiver;
.source "ModemSwitch.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/worldphone/ModemSwitch;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/worldphone/ModemSwitch;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/worldphone/ModemSwitch;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/worldphone/ModemSwitch;

    .line 171
    iput-object p1, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch$1;->this$0:Lcom/mediatek/engineermode/worldphone/ModemSwitch;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 5
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "intent"    # Landroid/content/Intent;

    .line 174
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    .line 175
    .local v0, "action":Ljava/lang/String;
    const-string v1, "ModemSwitch"

    const-string v2, "[Receiver]+"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 176
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Action: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 177
    const-string v2, "mediatek.intent.action.ACTION_MD_TYPE_CHANGE"

    invoke-virtual {v2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 178
    const/4 v2, 0x0

    const-string v3, "mdType"

    invoke-virtual {p2, v3, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v2

    .line 180
    .local v2, "mdType":I
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "mdType: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 181
    iget-object v3, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch$1;->this$0:Lcom/mediatek/engineermode/worldphone/ModemSwitch;

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->access$000(Lcom/mediatek/engineermode/worldphone/ModemSwitch;I)V

    .line 183
    .end local v2    # "mdType":I
    :cond_0
    const-string v2, "[Receiver]-"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 184
    return-void
.end method
