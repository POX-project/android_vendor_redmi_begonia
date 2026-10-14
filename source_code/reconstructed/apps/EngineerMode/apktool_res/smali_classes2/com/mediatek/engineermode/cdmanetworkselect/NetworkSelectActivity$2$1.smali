.class Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2$1;
.super Ljava/lang/Object;
.source "NetworkSelectActivity.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;->onItemSelected(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;)V
    .locals 0
    .param p1, "this$1"    # Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;

    .line 184
    iput-object p1, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2$1;->this$1:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 187
    iget-object v0, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2$1;->this$1:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;

    iget-object v0, v0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->access$700(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)Landroid/telephony/TelephonyManager;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2$1;->this$1:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;

    iget-object v1, v1, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    .line 188
    invoke-static {v1}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->access$600(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)I

    move-result v1

    iget-object v2, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2$1;->this$1:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;

    iget-object v2, v2, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    iget v2, v2, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->selectNetworkMode:I

    invoke-virtual {v0, v1, v2}, Landroid/telephony/TelephonyManager;->setPreferredNetworkType(II)Z

    move-result v0

    .line 189
    .local v0, "result":Z
    new-instance v1, Landroid/os/Message;

    invoke-direct {v1}, Landroid/os/Message;-><init>()V

    .line 190
    .local v1, "message":Landroid/os/Message;
    const/16 v2, 0x66

    iput v2, v1, Landroid/os/Message;->what:I

    .line 191
    if-eqz v0, :cond_0

    const/4 v2, 0x0

    goto :goto_0

    :cond_0
    const/4 v2, -0x1

    :goto_0
    iput v2, v1, Landroid/os/Message;->arg1:I

    .line 192
    iget-object v2, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2$1;->this$1:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;

    iget-object v2, v2, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$2;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->access$800(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)Landroid/os/Handler;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 193
    return-void
.end method
