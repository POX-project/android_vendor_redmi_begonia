.class Lcom/mediatek/engineermode/wifi/WiFiRx6620$1;
.super Landroid/os/Handler;
.source "WiFiRx6620.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/wifi/WiFiRx6620;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6620;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6620;

    .line 98
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6620;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 14
    .param p1, "msg"    # Landroid/os/Message;

    .line 102
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x2

    if-ne v1, v0, :cond_1

    .line 103
    const/4 v0, 0x3

    new-array v2, v0, [J

    .line 104
    .local v2, "i4Rx":[J
    const-wide/16 v3, -0x1

    .line 105
    .local v3, "i4RxCntOk":J
    const-wide/16 v5, -0x1

    .line 106
    .local v5, "i4RxCntFcsErr":J
    const-wide/16 v7, -0x1

    .line 107
    .local v7, "i4RxPer":J
    const-string v9, "WifiRx"

    const-string v10, "The Handle event is : HANDLER_EVENT_RX"

    invoke-static {v9, v10}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 109
    :try_start_0
    iget-object v10, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6620;

    invoke-static {v10}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->access$000(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)Landroid/widget/TextView;

    move-result-object v10

    invoke-virtual {v10}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v10

    invoke-interface {v10}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-static {v10}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v10
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    move-wide v7, v10

    .line 112
    goto :goto_0

    .line 110
    :catch_0
    move-exception v10

    .line 111
    .local v10, "e":Ljava/lang/NumberFormatException;
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "Long.parseLong NumberFormatException: "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/NumberFormatException;->getMessage()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-static {v9, v11}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 113
    .end local v10    # "e":Ljava/lang/NumberFormatException;
    :goto_0
    invoke-static {v2, v0}, Lcom/mediatek/engineermode/wifi/EMWifi;->getPacketRxStatus([JI)I

    .line 114
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "rx ok = "

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v10, 0x0

    aget-wide v11, v2, v10

    invoke-static {v11, v12}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "fcs error = "

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v11, 0x1

    aget-wide v12, v2, v11

    .line 115
    invoke-static {v12, v13}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 114
    invoke-static {v9, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 116
    aget-wide v3, v2, v10

    .line 117
    aget-wide v5, v2, v11

    .line 118
    add-long v9, v5, v3

    const-wide/16 v11, 0x0

    cmp-long v0, v9, v11

    if-eqz v0, :cond_0

    .line 119
    const-wide/16 v9, 0x64

    mul-long/2addr v9, v5

    add-long v11, v5, v3

    div-long v7, v9, v11

    .line 122
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->access$100(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)Landroid/widget/TextView;

    move-result-object v0

    invoke-static {v5, v6}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v9}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 123
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->access$200(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)Landroid/widget/TextView;

    move-result-object v0

    invoke-static {v3, v4}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v9}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 124
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->access$000(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)Landroid/widget/TextView;

    move-result-object v0

    invoke-static {v7, v8}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v9}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 126
    .end local v2    # "i4Rx":[J
    .end local v3    # "i4RxCntOk":J
    .end local v5    # "i4RxCntFcsErr":J
    .end local v7    # "i4RxPer":J
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->access$300(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)Landroid/os/Handler;

    move-result-object v0

    const-wide/16 v2, 0x3e8

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 128
    return-void
.end method
