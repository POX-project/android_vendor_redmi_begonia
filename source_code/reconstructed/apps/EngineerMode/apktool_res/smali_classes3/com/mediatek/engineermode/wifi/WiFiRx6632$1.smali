.class Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;
.super Landroid/os/Handler;
.source "WiFiRx6632.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/wifi/WiFiRx6632;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6632;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    .line 94
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 25
    .param p1, "msg"    # Landroid/os/Message;

    .line 99
    move-object/from16 v1, p0

    move-object/from16 v2, p1

    iget v0, v2, Landroid/os/Message;->what:I

    const/4 v3, 0x2

    if-ne v3, v0, :cond_7

    .line 100
    const/4 v4, 0x3

    new-array v5, v4, [J

    .line 101
    .local v5, "i4Rx":[J
    const-wide/16 v6, -0x1

    .line 102
    .local v6, "i4RxCntOk":J
    const-wide/16 v8, -0x1

    .line 103
    .local v8, "i4RxCntFcsErr":J
    const-wide/16 v10, -0x1

    .line 104
    .local v10, "i4RxPer":J
    const-wide/16 v12, -0x1

    .line 105
    .local v12, "i4RxRssiWiFi0":J
    const-wide/16 v14, -0x1

    .line 106
    .local v14, "i4RxRssiWiFi1":J
    const-string v4, "WifiRx"

    const-string v0, "The Handle event is : HANDLER_EVENT_RX"

    invoke-static {v4, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 108
    :try_start_0
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->access$000(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v16
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    move-wide/from16 v10, v16

    .line 111
    goto :goto_0

    .line 109
    :catch_0
    move-exception v0

    .line 110
    .local v0, "e":Ljava/lang/NumberFormatException;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Long.parseLong NumberFormatException: "

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/NumberFormatException;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 113
    .end local v0    # "e":Ljava/lang/NumberFormatException;
    :goto_0
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->access$100(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)I

    move-result v0

    const/4 v2, 0x2

    if-ne v0, v2, :cond_0

    .line 114
    move-wide/from16 v19, v6

    const-wide/16 v2, 0x0

    const-wide/16 v6, 0x68

    .end local v6    # "i4RxCntOk":J
    .local v19, "i4RxCntOk":J
    invoke-static {v6, v7, v2, v3}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    goto :goto_1

    .line 115
    .end local v19    # "i4RxCntOk":J
    .restart local v6    # "i4RxCntOk":J
    :cond_0
    move-wide/from16 v19, v6

    const-wide/16 v6, 0x68

    .end local v6    # "i4RxCntOk":J
    .restart local v19    # "i4RxCntOk":J
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->access$100(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)I

    move-result v0

    const/4 v2, 0x3

    if-ne v0, v2, :cond_1

    .line 116
    const-wide/16 v2, 0x1

    invoke-static {v6, v7, v2, v3}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 119
    :cond_1
    :goto_1
    const/4 v2, 0x3

    invoke-static {v5, v2}, Lcom/mediatek/engineermode/wifi/EMWifi;->getPacketRxStatus([JI)I

    .line 121
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "rx ok = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v2, 0x0

    aget-wide v6, v5, v2

    invoke-virtual {v0, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v3, "fcs error = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v3, 0x1

    aget-wide v6, v5, v3

    invoke-virtual {v0, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v6, "RSSI = "

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v6, 0x2

    aget-wide v2, v5, v6

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 124
    const/4 v0, 0x0

    aget-wide v2, v5, v0

    .line 125
    .end local v19    # "i4RxCntOk":J
    .local v2, "i4RxCntOk":J
    const/4 v0, 0x1

    aget-wide v8, v5, v0

    .line 126
    aget-wide v19, v5, v6

    const-wide/16 v21, 0xff

    and-long v19, v19, v21

    sub-long v19, v19, v21

    .line 127
    .end local v12    # "i4RxRssiWiFi0":J
    .local v19, "i4RxRssiWiFi0":J
    aget-wide v12, v5, v6

    const-wide/32 v23, 0xff00

    and-long v12, v12, v23

    const/16 v0, 0x8

    shr-long/2addr v12, v0

    sub-long v12, v12, v21

    .line 129
    .end local v14    # "i4RxRssiWiFi1":J
    .local v12, "i4RxRssiWiFi1":J
    add-long v14, v8, v2

    const-wide/16 v17, 0x0

    cmp-long v4, v14, v17

    if-eqz v4, :cond_2

    .line 130
    const-wide/16 v14, 0x64

    mul-long/2addr v14, v8

    add-long v17, v8, v2

    div-long v10, v14, v17

    .line 132
    :cond_2
    iget-object v4, v1, Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    invoke-static {v4}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->access$200(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/TextView;

    move-result-object v4

    invoke-static {v8, v9}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v6}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 133
    iget-object v4, v1, Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    invoke-static {v4}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->access$300(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/TextView;

    move-result-object v4

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v6}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 134
    iget-object v4, v1, Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    invoke-static {v4}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->access$000(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/TextView;

    move-result-object v4

    invoke-static {v10, v11}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v6}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 136
    iget-object v4, v1, Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    invoke-static {v4}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->access$400(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/CheckBox;

    move-result-object v4

    invoke-virtual {v4}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v4

    if-eqz v4, :cond_3

    iget-object v4, v1, Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    invoke-static {v4}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->access$500(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/CheckBox;

    move-result-object v4

    invoke-virtual {v4}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v4

    if-eqz v4, :cond_3

    .line 137
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->access$600(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/TextView;

    move-result-object v0

    const/4 v4, 0x0

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setVisibility(I)V

    .line 138
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->access$700(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setVisibility(I)V

    .line 139
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->access$800(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/TextView;

    move-result-object v0

    const-string v4, "RSSI(WiFi0):"

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 140
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->access$900(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/TextView;

    move-result-object v0

    invoke-static/range {v19 .. v20}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 141
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->access$600(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/TextView;

    move-result-object v0

    invoke-static {v12, v13}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_4

    .line 143
    :cond_3
    iget-object v4, v1, Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    invoke-static {v4}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->access$600(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/TextView;

    move-result-object v4

    invoke-virtual {v4, v0}, Landroid/widget/TextView;->setVisibility(I)V

    .line 144
    iget-object v4, v1, Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    invoke-static {v4}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->access$700(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/TextView;

    move-result-object v4

    invoke-virtual {v4, v0}, Landroid/widget/TextView;->setVisibility(I)V

    .line 145
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->access$800(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/TextView;

    move-result-object v0

    const-string v4, "RSSI: "

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 146
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->access$100(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)I

    move-result v0

    const/4 v4, 0x2

    if-eq v0, v4, :cond_6

    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    .line 147
    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->access$100(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)I

    move-result v0

    const/4 v4, 0x3

    if-ne v0, v4, :cond_4

    goto :goto_3

    .line 150
    :cond_4
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->access$900(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/TextView;

    move-result-object v0

    iget-object v4, v1, Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    invoke-static {v4}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->access$400(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/CheckBox;

    move-result-object v4

    invoke-virtual {v4}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v4

    if-eqz v4, :cond_5

    .line 151
    invoke-static/range {v19 .. v20}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v4

    goto :goto_2

    :cond_5
    invoke-static {v12, v13}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v4

    .line 150
    :goto_2
    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_4

    .line 148
    :cond_6
    :goto_3
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->access$900(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/TextView;

    move-result-object v0

    invoke-static/range {v19 .. v20}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 156
    .end local v2    # "i4RxCntOk":J
    .end local v5    # "i4Rx":[J
    .end local v8    # "i4RxCntFcsErr":J
    .end local v10    # "i4RxPer":J
    .end local v12    # "i4RxRssiWiFi1":J
    .end local v19    # "i4RxRssiWiFi0":J
    :cond_7
    :goto_4
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;->this$0:Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->access$1000(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/os/Handler;

    move-result-object v0

    const-wide/16 v2, 0x3e8

    const/4 v4, 0x2

    invoke-virtual {v0, v4, v2, v3}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 157
    return-void
.end method
