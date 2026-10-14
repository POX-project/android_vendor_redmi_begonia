.class Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$1;
.super Ljava/lang/Object;
.source "BtTestBaseActivity.java"

# interfaces
.implements Landroid/widget/RadioGroup$OnCheckedChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->initAntComponent()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    .line 152
    iput-object p1, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/RadioGroup;I)V
    .locals 3
    .param p1, "group"    # Landroid/widget/RadioGroup;
    .param p2, "checkedId"    # I

    .line 157
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->access$100(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;)I

    move-result v0

    if-ne v0, p2, :cond_0

    .line 158
    return-void

    .line 160
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->access$200(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;)Landroid/os/Handler;

    move-result-object v0

    const/16 v1, 0xb

    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 161
    .local v0, "msg":Landroid/os/Message;
    const v1, 0x7f060224

    if-ne p2, v1, :cond_1

    .line 162
    const/4 v1, 0x1

    goto :goto_0

    :cond_1
    const/4 v1, 0x0

    :goto_0
    iput v1, v0, Landroid/os/Message;->arg1:I

    .line 163
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "msg.arg1:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, v0, Landroid/os/Message;->arg1:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "BtTestBaseActivity"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 164
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->access$200(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;)Landroid/os/Handler;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 165
    return-void
.end method
