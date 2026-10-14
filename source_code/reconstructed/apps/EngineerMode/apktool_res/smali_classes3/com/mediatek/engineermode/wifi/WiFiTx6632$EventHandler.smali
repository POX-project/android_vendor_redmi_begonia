.class Lcom/mediatek/engineermode/wifi/WiFiTx6632$EventHandler;
.super Landroid/os/Handler;
.source "WiFiTx6632.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/wifi/WiFiTx6632;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "EventHandler"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;


# direct methods
.method public constructor <init>(Lcom/mediatek/engineermode/wifi/WiFiTx6632;Landroid/os/Looper;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;
    .param p2, "looper"    # Landroid/os/Looper;

    .line 880
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    .line 881
    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 882
    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 2
    .param p1, "msg"    # Landroid/os/Message;

    .line 886
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_2

    const/4 v1, 0x2

    if-eq v0, v1, :cond_1

    const/4 v1, 0x3

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 894
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$2600(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V

    .line 895
    goto :goto_0

    .line 891
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$2500(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V

    .line 892
    goto :goto_0

    .line 888
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$2300(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)I

    move-result v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$2400(Lcom/mediatek/engineermode/wifi/WiFiTx6632;I)V

    .line 889
    nop

    .line 899
    :goto_0
    return-void
.end method
