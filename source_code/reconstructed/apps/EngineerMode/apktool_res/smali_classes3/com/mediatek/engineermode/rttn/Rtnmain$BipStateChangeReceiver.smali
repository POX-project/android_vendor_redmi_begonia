.class public Lcom/mediatek/engineermode/rttn/Rtnmain$BipStateChangeReceiver;
.super Landroid/content/BroadcastReceiver;
.source "Rtnmain.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/rttn/Rtnmain;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "BipStateChangeReceiver"
.end annotation


# static fields
.field private static final ACTION_BIP_STATE_CHANGED:Ljava/lang/String; = "mediatek.intent.action.BIP_STATE_CHANGED"


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;


# direct methods
.method public constructor <init>(Lcom/mediatek/engineermode/rttn/Rtnmain;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/rttn/Rtnmain;

    .line 1151
    iput-object p1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$BipStateChangeReceiver;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 4
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "intent"    # Landroid/content/Intent;

    .line 1157
    if-nez p2, :cond_0

    .line 1158
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BipStateChangeReceiver Intent is null"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 1159
    return-void

    .line 1161
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "BipStateChangeReceiver called with Intent"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Landroid/content/Intent;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 1162
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    const-string v1, "mediatek.intent.action.BIP_STATE_CHANGED"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 1163
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$BipStateChangeReceiver;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-static {v0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$2100(Lcom/mediatek/engineermode/rttn/Rtnmain;)Landroid/os/CountDownTimer;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 1164
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BIP received, cancel timer"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1165
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$BipStateChangeReceiver;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-static {v0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$2100(Lcom/mediatek/engineermode/rttn/Rtnmain;)Landroid/os/CountDownTimer;

    move-result-object v0

    invoke-virtual {v0}, Landroid/os/CountDownTimer;->cancel()V

    .line 1166
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$BipStateChangeReceiver;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$2102(Lcom/mediatek/engineermode/rttn/Rtnmain;Landroid/os/CountDownTimer;)Landroid/os/CountDownTimer;

    .line 1169
    :cond_1
    const-string v0, "BIP_CMD"

    invoke-virtual {p2, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 1170
    .local v0, "value":Ljava/lang/String;
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "BIP_CMD value:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 1172
    if-eqz v0, :cond_3

    const-string v1, "START"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 1173
    const/4 v1, 0x1

    invoke-static {v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1902(Z)Z

    .line 1174
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1800()I

    move-result v1

    if-nez v1, :cond_2

    .line 1176
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v1

    const-string v2, "Polling is not enabled"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 1178
    :cond_2
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$BipStateChangeReceiver;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-static {v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1600(Lcom/mediatek/engineermode/rttn/Rtnmain;)Z

    .line 1180
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$BipStateChangeReceiver;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-static {v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$2000(Lcom/mediatek/engineermode/rttn/Rtnmain;)V

    .line 1183
    .end local v0    # "value":Ljava/lang/String;
    :cond_3
    return-void
.end method
