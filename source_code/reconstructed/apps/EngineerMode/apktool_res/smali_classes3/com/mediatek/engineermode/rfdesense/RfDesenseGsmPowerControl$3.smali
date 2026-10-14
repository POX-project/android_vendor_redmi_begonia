.class Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl$3;
.super Landroid/os/Handler;
.source "RfDesenseGsmPowerControl.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl;

    .line 105
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl$3;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 8
    .param p1, "msg"    # Landroid/os/Message;

    .line 108
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl$3;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl;

    invoke-static {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl;->access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 109
    return-void

    .line 111
    :cond_0
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 112
    .local v0, "ar":Landroid/os/AsyncResult;
    const-string v1, ""

    .line 113
    .local v1, "text":Ljava/lang/String;
    iget v2, p1, Landroid/os/Message;->what:I

    const-string v3, "Succeed."

    const-string v4, "Failed."

    const-string v5, "RfDesense/GsmPowerControl"

    if-eqz v2, :cond_6

    const/4 v6, 0x1

    if-eq v2, v6, :cond_3

    const/4 v6, 0x2

    if-eq v2, v6, :cond_1

    goto/16 :goto_3

    .line 139
    :cond_1
    const-string v1, "Query PCL Value "

    .line 140
    if-eqz v0, :cond_2

    iget-object v2, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v2, :cond_2

    iget-object v2, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v2, :cond_2

    .line 141
    iget-object v2, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v2, [Ljava/lang/String;

    const/4 v4, 0x0

    aget-object v2, v2, v4

    .line 142
    const-string v6, "+EPCL:"

    invoke-virtual {v6}, Ljava/lang/String;->length()I

    move-result v6

    .line 141
    invoke-virtual {v2, v6}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v2

    .line 142
    invoke-virtual {v2}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v2

    .line 143
    .local v2, "result":Ljava/lang/String;
    invoke-static {v5, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 144
    new-instance v6, Landroid/os/Bundle;

    invoke-direct {v6}, Landroid/os/Bundle;-><init>()V

    .line 145
    .local v6, "bundle":Landroid/os/Bundle;
    const-string v7, "pcl_result"

    invoke-virtual {v6, v7, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 146
    iget-object v7, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl$3;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl;

    invoke-virtual {v7, v4, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl;->showDialog(ILandroid/os/Bundle;)Z

    .line 147
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 148
    .end local v2    # "result":Ljava/lang/String;
    .end local v6    # "bundle":Landroid/os/Bundle;
    goto :goto_0

    .line 149
    :cond_2
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 150
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl$3;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl;

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl;->access$100(Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl;Ljava/lang/String;)V

    .line 152
    :goto_0
    invoke-static {v5, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_3

    .line 127
    :cond_3
    const-string v1, "Set Max PCL Value "

    .line 128
    if-eqz v0, :cond_4

    iget-object v2, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v2, :cond_4

    .line 129
    iget-object v2, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v2, :cond_5

    .line 130
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_1

    .line 133
    :cond_4
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 135
    :cond_5
    :goto_1
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl$3;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl;

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl;->access$100(Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl;Ljava/lang/String;)V

    .line 136
    invoke-static {v5, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 137
    goto :goto_3

    .line 115
    :cond_6
    const-string v1, "Set PCL Value "

    .line 116
    if-eqz v0, :cond_7

    iget-object v2, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v2, :cond_7

    .line 117
    iget-object v2, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v2, :cond_8

    .line 118
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_2

    .line 121
    :cond_7
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 123
    :cond_8
    :goto_2
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl$3;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl;

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl;->access$100(Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl;Ljava/lang/String;)V

    .line 124
    invoke-static {v5, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 125
    nop

    .line 155
    :goto_3
    return-void
.end method
