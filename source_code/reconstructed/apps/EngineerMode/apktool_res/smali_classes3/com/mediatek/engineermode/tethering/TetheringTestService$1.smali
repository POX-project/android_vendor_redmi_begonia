.class Lcom/mediatek/engineermode/tethering/TetheringTestService$1;
.super Landroid/net/ConnectivityManager$NetworkCallback;
.source "TetheringTestService.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/tethering/TetheringTestService;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/tethering/TetheringTestService;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/tethering/TetheringTestService;

    .line 184
    iput-object p1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService$1;->this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;

    invoke-direct {p0}, Landroid/net/ConnectivityManager$NetworkCallback;-><init>()V

    return-void
.end method


# virtual methods
.method public onAvailable(Landroid/net/Network;)V
    .locals 5
    .param p1, "network"    # Landroid/net/Network;

    .line 187
    const-string v0, ""

    .line 188
    .local v0, "iface":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService$1;->this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;

    invoke-static {v1, p1}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->access$002(Lcom/mediatek/engineermode/tethering/TetheringTestService;Landroid/net/Network;)Landroid/net/Network;

    .line 189
    iget-object v1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService$1;->this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;

    const/4 v2, 0x1

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->access$102(Lcom/mediatek/engineermode/tethering/TetheringTestService;Z)Z

    .line 191
    invoke-static {}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->access$200()Landroid/net/ConnectivityManager;

    move-result-object v1

    invoke-virtual {v1, p1}, Landroid/net/ConnectivityManager;->getLinkProperties(Landroid/net/Network;)Landroid/net/LinkProperties;

    move-result-object v1

    .line 192
    .local v1, "link":Landroid/net/LinkProperties;
    const-string v2, "TetheringTestService"

    if-eqz v1, :cond_0

    .line 193
    invoke-virtual {v1}, Landroid/net/LinkProperties;->getInterfaceName()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 195
    :cond_0
    const-string v3, "No interface for upstreaming"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 198
    :goto_0
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "onAvailable:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v4, ":"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 199
    iget-object v3, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService$1;->this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;

    invoke-static {v3}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->access$300(Lcom/mediatek/engineermode/tethering/TetheringTestService;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 200
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 201
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Need to update upstraming iface:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService$1;->this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;

    invoke-static {v4}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->access$300(Lcom/mediatek/engineermode/tethering/TetheringTestService;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 204
    :cond_1
    invoke-static {}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->access$400()Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;

    move-result-object v2

    const/4 v3, 0x0

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;->sendEmptyMessage(I)Z

    .line 205
    return-void
.end method

.method public onLost(Landroid/net/Network;)V
    .locals 2
    .param p1, "network"    # Landroid/net/Network;

    .line 209
    iget-object v0, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService$1;->this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;

    invoke-static {v0}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->access$000(Lcom/mediatek/engineermode/tethering/TetheringTestService;)Landroid/net/Network;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/net/Network;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 210
    iget-object v0, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService$1;->this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->access$002(Lcom/mediatek/engineermode/tethering/TetheringTestService;Landroid/net/Network;)Landroid/net/Network;

    .line 211
    iget-object v0, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService$1;->this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->access$102(Lcom/mediatek/engineermode/tethering/TetheringTestService;Z)Z

    .line 212
    invoke-static {}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->access$400()Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;->sendEmptyMessage(I)Z

    .line 214
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onLost:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "TetheringTestService"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 215
    return-void
.end method
