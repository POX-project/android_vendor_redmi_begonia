.class Lcom/mediatek/engineermode/bluetooth/TestModeActivity$3;
.super Ljava/lang/Object;
.source "TestModeActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->initComponent()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    .line 136
    iput-object p1, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$3;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 4
    .param p1, "v"    # Landroid/view/View;

    .line 142
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$3;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->showWaitDlg()V

    .line 143
    const/4 v0, -0x1

    .line 144
    .local v0, "power":I
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$3;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->access$300(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;)Landroid/widget/RadioGroup;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/RadioGroup;->getCheckedRadioButtonId()I

    move-result v1

    const v2, 0x7f060238

    if-ne v1, v2, :cond_0

    .line 145
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$3;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->access$400(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;)I

    move-result v0

    .line 146
    const/4 v1, -0x1

    if-ne v0, v1, :cond_0

    .line 147
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$3;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    const v2, 0x7f0a01cd

    .line 148
    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x1

    .line 147
    invoke-static {v1, v2, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    .line 149
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 150
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$3;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->removeWaitDlg()V

    .line 151
    return-void

    .line 155
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$3;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->access$500(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;)Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;

    move-result-object v1

    const/16 v2, 0xb

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v1

    .line 156
    .local v1, "msg":Landroid/os/Message;
    iput v0, v1, Landroid/os/Message;->arg1:I

    .line 157
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$3;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->access$500(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;)Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;->sendMessage(Landroid/os/Message;)Z

    .line 158
    return-void
.end method
