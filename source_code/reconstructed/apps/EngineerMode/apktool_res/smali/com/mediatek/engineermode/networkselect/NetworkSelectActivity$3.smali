.class Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$3;
.super Ljava/lang/Object;
.source "NetworkSelectActivity.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->onResume()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    .line 322
    iput-object p1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$3;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 325
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$3;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->access$400(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;)Landroid/telephony/TelephonyManager;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 326
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$3;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->access$400(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;)Landroid/telephony/TelephonyManager;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$3;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->access$300(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/telephony/TelephonyManager;->getPreferredNetworkType(I)I

    move-result v0

    .line 327
    .local v0, "result":I
    new-instance v1, Landroid/os/Message;

    invoke-direct {v1}, Landroid/os/Message;-><init>()V

    .line 328
    .local v1, "message":Landroid/os/Message;
    const/16 v2, 0x65

    iput v2, v1, Landroid/os/Message;->what:I

    .line 329
    iput v0, v1, Landroid/os/Message;->arg1:I

    .line 330
    iget-object v2, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$3;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->access$100(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;)Landroid/os/Handler;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 331
    .end local v0    # "result":I
    .end local v1    # "message":Landroid/os/Message;
    goto :goto_0

    .line 332
    :cond_0
    const-string v0, "NetworkMode"

    const-string v1, "mTelephonyManager = null"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 334
    :goto_0
    return-void
.end method
