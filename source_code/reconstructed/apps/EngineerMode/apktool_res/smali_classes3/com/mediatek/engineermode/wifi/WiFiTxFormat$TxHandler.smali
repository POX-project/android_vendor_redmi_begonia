.class Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;
.super Landroid/os/Handler;
.source "WiFiTxFormat.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/wifi/WiFiTxFormat;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "TxHandler"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;


# direct methods
.method public constructor <init>(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;Landroid/os/Looper;)V
    .locals 0
    .param p2, "looper"    # Landroid/os/Looper;

    .line 637
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 638
    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 639
    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 6
    .param p1, "msg"    # Landroid/os/Message;

    .line 643
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x2

    const/4 v2, 0x3

    const/4 v3, 0x1

    if-eq v0, v3, :cond_5

    if-eq v0, v1, :cond_4

    if-eq v0, v2, :cond_1

    const/4 v1, 0x5

    if-eq v0, v1, :cond_0

    goto/16 :goto_0

    .line 686
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$2900(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Z

    move-result v0

    if-eqz v0, :cond_9

    .line 687
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$3000(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V

    goto/16 :goto_0

    .line 663
    :cond_1
    new-array v0, v3, [I

    const/4 v1, 0x0

    aput v1, v0, v1

    .line 664
    .local v0, "pkgCnt":[I
    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v4}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$2200(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Lcom/mediatek/engineermode/wifi/WiFiTxFormat$GetTxInfoType;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$GetTxInfoType;->ordinal()I

    move-result v4

    invoke-static {v4, v0}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaGetTxInfo(I[I)I

    .line 665
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "hqaGetTxInfo:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v5, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$GetTxInfoType;->TX_INFO_BAND0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$GetTxInfoType;

    invoke-virtual {v5}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$GetTxInfoType;->ordinal()I

    move-result v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, " "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget v5, v0, v1

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, "WifiTX"

    invoke-static {v5, v4}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 667
    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    aget v5, v0, v1

    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$2300(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;Ljava/lang/String;)V

    .line 668
    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v4}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$2400(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)I

    move-result v4

    if-eqz v4, :cond_3

    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v4}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$2400(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)I

    move-result v4

    aget v1, v0, v1

    if-ne v4, v1, :cond_3

    .line 669
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$1700(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    move-result-object v1

    sget-object v2, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->TM_CONTINUES:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 670
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    new-instance v2, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler$1;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler$1;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;)V

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->runOnUiThread(Ljava/lang/Runnable;)V

    goto :goto_0

    .line 676
    :cond_2
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$1700(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    move-result-object v1

    sget-object v2, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->TM_100_PERCENT_DUTY:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_9

    .line 678
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$2600(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;

    move-result-object v2

    invoke-static {v1, v2, v3}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$2700(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;I)V

    .line 679
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    sget-object v2, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->TM_100_PERCENT_DUTY:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$2802(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;)Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    goto :goto_0

    .line 682
    :cond_3
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$100(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;

    move-result-object v1

    const-wide/16 v3, 0x3e8

    invoke-virtual {v1, v2, v3, v4}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->sendEmptyMessageDelayed(IJ)Z

    .line 684
    goto :goto_0

    .line 660
    .end local v0    # "pkgCnt":[I
    :cond_4
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$2100(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V

    .line 661
    goto :goto_0

    .line 645
    :cond_5
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$12;->$SwitchMap$com$mediatek$engineermode$wifi$WiFiTxFormat$TXTestMode:[I

    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v4}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$1700(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->ordinal()I

    move-result v4

    aget v0, v0, v4

    if-eq v0, v3, :cond_8

    if-eq v0, v1, :cond_7

    if-eq v0, v2, :cond_6

    .line 656
    goto :goto_0

    .line 653
    :cond_6
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$2000(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V

    .line 654
    goto :goto_0

    .line 650
    :cond_7
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$1900(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V

    .line 651
    goto :goto_0

    .line 647
    :cond_8
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$1800(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V

    .line 648
    nop

    .line 695
    :cond_9
    :goto_0
    return-void
.end method
