.class Lcom/mediatek/engineermode/cfu/CfuActivity$3;
.super Ljava/lang/Thread;
.source "CfuActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/cfu/CfuActivity;->loadInCardInfoBackground()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/cfu/CfuActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/cfu/CfuActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/cfu/CfuActivity;

    .line 192
    iput-object p1, p0, Lcom/mediatek/engineermode/cfu/CfuActivity$3;->this$0:Lcom/mediatek/engineermode/cfu/CfuActivity;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 5

    .line 195
    iget-object v0, p0, Lcom/mediatek/engineermode/cfu/CfuActivity$3;->this$0:Lcom/mediatek/engineermode/cfu/CfuActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/cfu/CfuActivity;->access$300(Lcom/mediatek/engineermode/cfu/CfuActivity;)V

    .line 196
    iget-object v0, p0, Lcom/mediatek/engineermode/cfu/CfuActivity$3;->this$0:Lcom/mediatek/engineermode/cfu/CfuActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/cfu/CfuActivity;->access$400(Lcom/mediatek/engineermode/cfu/CfuActivity;)V

    .line 197
    iget-object v0, p0, Lcom/mediatek/engineermode/cfu/CfuActivity$3;->this$0:Lcom/mediatek/engineermode/cfu/CfuActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/cfu/CfuActivity;->access$500(Lcom/mediatek/engineermode/cfu/CfuActivity;)I

    move-result v0

    const/4 v1, 0x2

    if-ge v0, v1, :cond_0

    .line 198
    iget-object v0, p0, Lcom/mediatek/engineermode/cfu/CfuActivity$3;->this$0:Lcom/mediatek/engineermode/cfu/CfuActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/cfu/CfuActivity;->access$600(Lcom/mediatek/engineermode/cfu/CfuActivity;)V

    goto :goto_0

    .line 200
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/cfu/CfuActivity$3;->this$0:Lcom/mediatek/engineermode/cfu/CfuActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/cfu/CfuActivity;->access$700(Lcom/mediatek/engineermode/cfu/CfuActivity;)Landroid/os/Handler;

    move-result-object v0

    iget-object v2, p0, Lcom/mediatek/engineermode/cfu/CfuActivity$3;->this$0:Lcom/mediatek/engineermode/cfu/CfuActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/cfu/CfuActivity;->access$700(Lcom/mediatek/engineermode/cfu/CfuActivity;)Landroid/os/Handler;

    move-result-object v2

    const/4 v3, 0x0

    const-string v4, "Not Supported for this card type"

    invoke-virtual {v2, v1, v3, v3, v4}, Landroid/os/Handler;->obtainMessage(IIILjava/lang/Object;)Landroid/os/Message;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 202
    iget-object v0, p0, Lcom/mediatek/engineermode/cfu/CfuActivity$3;->this$0:Lcom/mediatek/engineermode/cfu/CfuActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/cfu/CfuActivity;->access$700(Lcom/mediatek/engineermode/cfu/CfuActivity;)Landroid/os/Handler;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/cfu/CfuActivity$3;->this$0:Lcom/mediatek/engineermode/cfu/CfuActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/cfu/CfuActivity;->access$700(Lcom/mediatek/engineermode/cfu/CfuActivity;)Landroid/os/Handler;

    move-result-object v1

    const/4 v2, 0x3

    invoke-virtual {v1, v2, v3, v3, v4}, Landroid/os/Handler;->obtainMessage(IIILjava/lang/Object;)Landroid/os/Message;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 205
    :goto_0
    return-void
.end method
