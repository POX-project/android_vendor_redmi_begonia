.class Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;
.super Landroid/os/Handler;
.source "WiFiTx6620.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/wifi/WiFiTx6620;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "EventHandler"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;


# direct methods
.method public constructor <init>(Lcom/mediatek/engineermode/wifi/WiFiTx6620;Landroid/os/Looper;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;
    .param p2, "looper"    # Landroid/os/Looper;

    .line 901
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 902
    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 903
    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 18
    .param p1, "msg"    # Landroid/os/Message;

    .line 907
    move-object/from16 v1, p0

    move-object/from16 v2, p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "receive msg "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, v2, Landroid/os/Message;->what:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, "WifiTx"

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 908
    const/4 v0, 0x2

    new-array v4, v0, [J

    .line 909
    .local v4, "u4Value":[J
    iget v5, v2, Landroid/os/Message;->what:I

    const/4 v9, 0x3

    const/4 v10, 0x1

    const-wide/16 v13, 0x0

    if-eq v5, v10, :cond_9

    const/4 v15, 0x0

    if-eq v5, v0, :cond_7

    if-eq v5, v9, :cond_0

    goto/16 :goto_5

    .line 1024
    :cond_0
    aput-wide v13, v4, v15

    .line 1025
    const-wide/16 v16, 0x0

    .line 1027
    .local v16, "pktCnt":J
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$1800(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)I

    move-result v0

    const-string v5, " target count = "

    const-string v6, "query Transmitted packet count succeed, count = "

    const-string v7, "query Transmitted packet count failed"

    const-wide/16 v8, 0x20

    if-ne v0, v10, :cond_4

    .line 1028
    const-wide/16 v10, 0x64

    .line 1029
    .end local v16    # "pktCnt":J
    .local v10, "pktCnt":J
    const/4 v0, 0x0

    .line 1030
    .local v0, "completed":Z
    nop

    .line 1031
    invoke-static {v8, v9, v4}, Lcom/mediatek/engineermode/wifi/EMWifi;->getATParam(J[J)I

    move-result v8

    if-nez v8, :cond_1

    .line 1032
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-wide v8, v4, v15

    invoke-virtual {v7, v8, v9}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10, v11}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v3, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 1034
    aget-wide v5, v4, v15

    cmp-long v3, v5, v10

    if-nez v3, :cond_2

    .line 1035
    const/4 v0, 0x1

    goto :goto_0

    .line 1038
    :cond_1
    invoke-static {v3, v7}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 1040
    :cond_2
    :goto_0
    if-nez v0, :cond_3

    .line 1041
    const-wide/16 v5, 0x1

    invoke-static {v5, v6, v13, v14}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    move-result v3

    int-to-long v5, v3

    aput-wide v5, v4, v15

    .line 1045
    :cond_3
    iget-object v3, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    const/4 v5, 0x1

    invoke-static {v3, v5}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$3302(Lcom/mediatek/engineermode/wifi/WiFiTx6620;I)I

    .line 1046
    invoke-virtual {v1, v5}, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->sendEmptyMessage(I)Z

    .line 1047
    return-void

    .line 1050
    .end local v0    # "completed":Z
    .end local v10    # "pktCnt":J
    .restart local v16    # "pktCnt":J
    :cond_4
    :try_start_0
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$4200(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/widget/EditText;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v10
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 1055
    .end local v16    # "pktCnt":J
    .restart local v10    # "pktCnt":J
    nop

    .line 1058
    nop

    .line 1059
    invoke-static {v8, v9, v4}, Lcom/mediatek/engineermode/wifi/EMWifi;->getATParam(J[J)I

    move-result v0

    if-nez v0, :cond_5

    .line 1060
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-wide v6, v4, v15

    invoke-virtual {v0, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v10, v11}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 1062
    aget-wide v5, v4, v15

    cmp-long v0, v5, v10

    if-nez v0, :cond_6

    .line 1063
    const/4 v0, 0x3

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->removeMessages(I)V

    .line 1064
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$4100(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/os/Handler;

    move-result-object v0

    const/4 v3, 0x4

    invoke-virtual {v0, v3}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 1065
    goto/16 :goto_5

    .line 1068
    :cond_5
    invoke-static {v3, v7}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 1070
    :cond_6
    const/4 v0, 0x3

    const-wide/16 v5, 0x3e8

    invoke-virtual {v1, v0, v5, v6}, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->sendEmptyMessageDelayed(IJ)Z

    .line 1071
    goto/16 :goto_5

    .line 1051
    .end local v10    # "pktCnt":J
    .restart local v16    # "pktCnt":J
    :catch_0
    move-exception v0

    .line 1052
    .local v0, "e":Ljava/lang/NumberFormatException;
    iget-object v3, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    const-string v5, "invalid input value"

    invoke-static {v3, v5, v15}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v3

    .line 1053
    invoke-virtual {v3}, Landroid/widget/Toast;->show()V

    .line 1054
    return-void

    .line 1015
    .end local v0    # "e":Ljava/lang/NumberFormatException;
    .end local v16    # "pktCnt":J
    :cond_7
    const-wide/16 v5, 0x1

    invoke-static {v5, v6, v13, v14}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    move-result v0

    int-to-long v5, v0

    aput-wide v5, v4, v15

    .line 1018
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$4000(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_8

    .line 1019
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$4000(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/os/Handler;

    move-result-object v0

    const/4 v3, 0x3

    invoke-virtual {v0, v3}, Landroid/os/Handler;->removeMessages(I)V

    .line 1021
    :cond_8
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$4100(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/os/Handler;

    move-result-object v0

    const/4 v3, 0x4

    invoke-virtual {v0, v3}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 1022
    goto/16 :goto_5

    .line 911
    :cond_9
    iget-object v5, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v5}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$3300(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)I

    move-result v5

    const-wide/16 v8, 0x5

    const-wide/16 v10, 0x2

    if-eqz v5, :cond_f

    const/4 v12, 0x1

    if-eq v5, v12, :cond_d

    if-eq v5, v0, :cond_b

    const/4 v0, 0x3

    if-eq v5, v0, :cond_a

    .line 1011
    goto/16 :goto_5

    .line 1002
    :cond_a
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$3400(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)J

    move-result-wide v5

    invoke-static {v10, v11, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 1003
    invoke-static {v8, v9, v13, v14}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 1004
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$3900(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)V

    .line 1005
    const-wide/16 v5, 0x1

    invoke-static {v5, v6, v8, v9}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 1007
    goto/16 :goto_5

    .line 985
    :cond_b
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$3400(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)J

    move-result-wide v6

    invoke-static {v10, v11, v6, v7}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 986
    invoke-static {v8, v9, v13, v14}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 989
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$1300(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Z

    move-result v0

    const-wide/16 v5, 0x41

    if-eqz v0, :cond_c

    .line 990
    invoke-static {v5, v6, v8, v9}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    goto :goto_1

    .line 993
    :cond_c
    invoke-static {v5, v6, v10, v11}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 996
    :goto_1
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$3900(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)V

    .line 997
    const-wide/16 v5, 0xa

    const-wide/16 v7, 0x1

    invoke-static {v7, v8, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 1000
    goto/16 :goto_5

    .line 968
    :cond_d
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$1900(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)I

    move-result v0

    const/4 v3, 0x4

    if-ne v3, v0, :cond_e

    .line 969
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    iget v0, v0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelBandwidth:I

    int-to-long v5, v0

    const-wide/16 v8, 0x47

    invoke-static {v8, v9, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 970
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    iget v0, v0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mDataBandwidth:I

    int-to-long v5, v0

    const-wide/16 v7, 0x48

    invoke-static {v7, v8, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 971
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    iget v0, v0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPrimarySetting:I

    int-to-long v5, v0

    const-wide/16 v7, 0x49

    invoke-static {v7, v8, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    goto :goto_2

    .line 973
    :cond_e
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$1900(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)I

    move-result v0

    int-to-long v5, v0

    const-wide/16 v7, 0xf

    invoke-static {v7, v8, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 975
    :goto_2
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$3800(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)V

    .line 976
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$3400(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)J

    move-result-wide v5

    invoke-static {v10, v11, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 977
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$1100(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)I

    move-result v0

    int-to-long v5, v0

    const-wide/16 v7, 0x4

    invoke-static {v7, v8, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 978
    const-wide/16 v5, 0x5

    invoke-static {v5, v6, v13, v14}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 979
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$3900(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)V

    .line 981
    const-wide/16 v5, 0x1

    invoke-static {v5, v6, v7, v8}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 983
    goto/16 :goto_5

    .line 914
    :cond_f
    const-wide/16 v7, 0x4

    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$3400(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)J

    move-result-wide v5

    invoke-static {v10, v11, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 915
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$1100(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)I

    move-result v0

    int-to-long v5, v0

    invoke-static {v7, v8, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 917
    const-wide/16 v5, 0x5

    invoke-static {v5, v6, v13, v14}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 920
    const-wide/16 v5, 0x6

    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$3500(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)J

    move-result-wide v7

    invoke-static {v5, v6, v7, v8}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 925
    const-wide/16 v5, 0x7

    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$3600(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)J

    move-result-wide v7

    invoke-static {v5, v6, v7, v8}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 928
    const-wide/16 v5, 0x8

    const-wide/16 v7, 0x14

    invoke-static {v5, v6, v7, v8}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 929
    const-wide/16 v5, 0x9

    invoke-static {v5, v6, v13, v14}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 931
    const-wide/32 v5, 0x20000

    const-wide/16 v7, 0xa

    invoke-static {v7, v8, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 934
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_3
    invoke-static {}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$3700()[J

    move-result-object v5

    array-length v5, v5

    if-ge v0, v5, :cond_10

    .line 935
    const-wide/16 v5, 0xc

    .line 936
    invoke-static {}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$3700()[J

    move-result-object v7

    aget-wide v7, v7, v0

    .line 935
    invoke-static {v5, v6, v7, v8}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 934
    add-int/lit8 v0, v0, 0x1

    goto :goto_3

    .line 939
    .end local v0    # "i":I
    :cond_10
    const-wide/16 v5, 0xd

    const-wide/16 v7, 0x1

    invoke-static {v5, v6, v7, v8}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 941
    const-wide/16 v5, 0xe

    invoke-static {v5, v6, v10, v11}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 943
    const-wide/16 v5, 0x10

    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$2300(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)I

    move-result v0

    int-to-long v7, v0

    invoke-static {v5, v6, v7, v8}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 944
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "The mBandwidthIndex is : "

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v5}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$1900(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)I

    move-result v5

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 946
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$1900(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)I

    move-result v0

    const/4 v3, 0x4

    if-ne v3, v0, :cond_11

    .line 947
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    iget v0, v0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelBandwidth:I

    int-to-long v5, v0

    const-wide/16 v7, 0x47

    invoke-static {v7, v8, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 948
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    iget v0, v0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mDataBandwidth:I

    int-to-long v5, v0

    const-wide/16 v7, 0x48

    invoke-static {v7, v8, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 949
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    iget v0, v0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPrimarySetting:I

    int-to-long v5, v0

    const-wide/16 v7, 0x49

    invoke-static {v7, v8, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    goto :goto_4

    .line 951
    :cond_11
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$1900(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)I

    move-result v0

    int-to-long v5, v0

    const-wide/16 v7, 0xf

    invoke-static {v7, v8, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 953
    :goto_4
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$3800(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)V

    .line 954
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$200(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Lcom/mediatek/engineermode/wifi/ChannelInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getSelectedFrequency()I

    move-result v0

    .line 955
    .local v0, "number":I
    int-to-long v5, v0

    invoke-static {v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setChannel(J)I

    .line 956
    iget-object v3, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v3}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$3900(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)V

    .line 958
    const-wide/16 v5, 0x1

    invoke-static {v5, v6, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 962
    iget-object v3, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v3}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$3600(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)J

    move-result-wide v5

    cmp-long v3, v5, v13

    if-eqz v3, :cond_12

    .line 963
    const/4 v3, 0x3

    const-wide/16 v5, 0x3e8

    invoke-virtual {v1, v3, v5, v6}, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;->sendEmptyMessageDelayed(IJ)Z

    .line 1075
    .end local v0    # "number":I
    :cond_12
    :goto_5
    return-void
.end method
