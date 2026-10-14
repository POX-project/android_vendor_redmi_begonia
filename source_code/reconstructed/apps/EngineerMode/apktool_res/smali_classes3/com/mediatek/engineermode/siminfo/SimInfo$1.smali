.class Lcom/mediatek/engineermode/siminfo/SimInfo$1;
.super Landroid/os/Handler;
.source "SimInfo.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/siminfo/SimInfo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/siminfo/SimInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/siminfo/SimInfo;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/siminfo/SimInfo;

    .line 90
    iput-object p1, p0, Lcom/mediatek/engineermode/siminfo/SimInfo$1;->this$0:Lcom/mediatek/engineermode/siminfo/SimInfo;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 6
    .param p1, "msg"    # Landroid/os/Message;

    .line 93
    iget v0, p1, Landroid/os/Message;->what:I

    const-string v1, "SimInfo"

    const/4 v2, 0x1

    if-eq v0, v2, :cond_4

    const/4 v3, 0x0

    const/4 v4, 0x2

    const-string v5, ""

    if-eq v0, v4, :cond_1

    const/4 v2, 0x3

    if-eq v0, v2, :cond_0

    goto/16 :goto_0

    .line 100
    :cond_0
    const-string v0, "SIM card status absent "

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 101
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo$1;->this$0:Lcom/mediatek/engineermode/siminfo/SimInfo;

    iget-object v0, v0, Lcom/mediatek/engineermode/siminfo/SimInfo;->siminfo_status:Landroid/widget/TextView;

    const-string v1, "sim info status: UNReady"

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 102
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo$1;->this$0:Lcom/mediatek/engineermode/siminfo/SimInfo;

    iget-object v0, v0, Lcom/mediatek/engineermode/siminfo/SimInfo;->siminfo:Lcom/mediatek/engineermode/siminfo/NormalTableComponent;

    invoke-virtual {v0, v3, v5}, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->update(ILjava/lang/String;)V

    .line 103
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo$1;->this$0:Lcom/mediatek/engineermode/siminfo/SimInfo;

    iget-object v0, v0, Lcom/mediatek/engineermode/siminfo/SimInfo;->siminfo:Lcom/mediatek/engineermode/siminfo/NormalTableComponent;

    invoke-virtual {v0, v4, v5}, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->update(ILjava/lang/String;)V

    .line 104
    goto :goto_0

    .line 107
    :cond_1
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 108
    .local v0, "info":Ljava/lang/String;
    const-string v1, "clean"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 109
    iget-object v1, p0, Lcom/mediatek/engineermode/siminfo/SimInfo$1;->this$0:Lcom/mediatek/engineermode/siminfo/SimInfo;

    iget-object v1, v1, Lcom/mediatek/engineermode/siminfo/SimInfo;->siminfo:Lcom/mediatek/engineermode/siminfo/NormalTableComponent;

    invoke-virtual {v1, v3, v5}, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->update(ILjava/lang/String;)V

    goto :goto_0

    .line 110
    :cond_2
    const-string v1, "update"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 111
    iget-object v1, p0, Lcom/mediatek/engineermode/siminfo/SimInfo$1;->this$0:Lcom/mediatek/engineermode/siminfo/SimInfo;

    iget-object v1, v1, Lcom/mediatek/engineermode/siminfo/SimInfo;->siminfo:Lcom/mediatek/engineermode/siminfo/NormalTableComponent;

    invoke-virtual {v1, v4, v5}, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->update(ILjava/lang/String;)V

    goto :goto_0

    .line 113
    :cond_3
    iget-object v1, p0, Lcom/mediatek/engineermode/siminfo/SimInfo$1;->this$0:Lcom/mediatek/engineermode/siminfo/SimInfo;

    iget-object v1, v1, Lcom/mediatek/engineermode/siminfo/SimInfo;->siminfo:Lcom/mediatek/engineermode/siminfo/NormalTableComponent;

    invoke-virtual {v1, v2, v0}, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->update(ILjava/lang/String;)V

    .line 114
    goto :goto_0

    .line 95
    .end local v0    # "info":Ljava/lang/String;
    :cond_4
    const-string v0, "SIM card status ready "

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 96
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/SimInfo$1;->this$0:Lcom/mediatek/engineermode/siminfo/SimInfo;

    iget-object v0, v0, Lcom/mediatek/engineermode/siminfo/SimInfo;->siminfo_status:Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "sim info status: Ready , card type: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/siminfo/SimInfo$1;->this$0:Lcom/mediatek/engineermode/siminfo/SimInfo;

    .line 97
    invoke-static {v2}, Lcom/mediatek/engineermode/siminfo/SimInfo;->access$000(Lcom/mediatek/engineermode/siminfo/SimInfo;)[Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mediatek/engineermode/siminfo/SimInfo$1;->this$0:Lcom/mediatek/engineermode/siminfo/SimInfo;

    invoke-static {v3}, Lcom/mediatek/engineermode/siminfo/SimInfo;->access$100(Lcom/mediatek/engineermode/siminfo/SimInfo;)I

    move-result v3

    aget-object v2, v2, v3

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 96
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 98
    nop

    .line 118
    :goto_0
    return-void
.end method
