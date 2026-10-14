.class Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;
.super Landroid/os/Handler;
.source "WiFiRxFormat.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/wifi/WiFiRxFormat;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "RxHandler"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/wifi/WiFiRxFormat;


# direct methods
.method public constructor <init>(Lcom/mediatek/engineermode/wifi/WiFiRxFormat;Landroid/os/Looper;)V
    .locals 0
    .param p2, "looper"    # Landroid/os/Looper;

    .line 128
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRxFormat;

    .line 129
    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 130
    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 5
    .param p1, "msg"    # Landroid/os/Message;

    .line 134
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    const-wide/16 v2, 0x3e8

    const/4 v4, 0x3

    if-eq v0, v1, :cond_2

    const/4 v1, 0x2

    if-eq v0, v1, :cond_1

    if-eq v0, v4, :cond_0

    .line 148
    return-void

    .line 144
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRxFormat;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->access$400(Lcom/mediatek/engineermode/wifi/WiFiRxFormat;)V

    .line 145
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRxFormat;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->access$200(Lcom/mediatek/engineermode/wifi/WiFiRxFormat;)Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;

    move-result-object v0

    invoke-virtual {v0, v4, v2, v3}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;->sendEmptyMessageDelayed(IJ)Z

    .line 146
    goto :goto_0

    .line 140
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRxFormat;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->access$300(Lcom/mediatek/engineermode/wifi/WiFiRxFormat;)V

    .line 141
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRxFormat;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->access$200(Lcom/mediatek/engineermode/wifi/WiFiRxFormat;)Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;

    move-result-object v0

    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;->removeMessages(I)V

    .line 142
    goto :goto_0

    .line 136
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRxFormat;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->access$100(Lcom/mediatek/engineermode/wifi/WiFiRxFormat;)V

    .line 137
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRxFormat;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;->access$200(Lcom/mediatek/engineermode/wifi/WiFiRxFormat;)Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;

    move-result-object v0

    invoke-virtual {v0, v4, v2, v3}, Lcom/mediatek/engineermode/wifi/WiFiRxFormat$RxHandler;->sendEmptyMessageDelayed(IJ)Z

    .line 138
    nop

    .line 150
    :goto_0
    return-void
.end method
