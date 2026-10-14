.class Lcom/mediatek/engineermode/cfu/CfuActivity$2;
.super Landroid/os/Handler;
.source "CfuActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/cfu/CfuActivity;
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

    .line 160
    iput-object p1, p0, Lcom/mediatek/engineermode/cfu/CfuActivity$2;->this$0:Lcom/mediatek/engineermode/cfu/CfuActivity;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 6
    .param p1, "msg"    # Landroid/os/Message;

    .line 163
    iget v0, p1, Landroid/os/Message;->arg1:I

    .line 164
    .local v0, "efValid":I
    iget-object v1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 166
    .local v1, "info":Ljava/lang/String;
    iget v2, p1, Landroid/os/Message;->what:I

    const/4 v3, 0x2

    const-string v4, "#a00000"

    const-string v5, "#004cc6"

    if-eq v2, v3, :cond_2

    const/4 v3, 0x3

    if-eq v2, v3, :cond_0

    goto :goto_2

    .line 177
    :cond_0
    if-nez v0, :cond_1

    .line 178
    iget-object v2, p0, Lcom/mediatek/engineermode/cfu/CfuActivity$2;->this$0:Lcom/mediatek/engineermode/cfu/CfuActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/cfu/CfuActivity;->access$200(Lcom/mediatek/engineermode/cfu/CfuActivity;)Landroid/widget/TextView;

    move-result-object v2

    invoke-static {v4}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setTextColor(I)V

    goto :goto_0

    .line 180
    :cond_1
    iget-object v2, p0, Lcom/mediatek/engineermode/cfu/CfuActivity$2;->this$0:Lcom/mediatek/engineermode/cfu/CfuActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/cfu/CfuActivity;->access$200(Lcom/mediatek/engineermode/cfu/CfuActivity;)Landroid/widget/TextView;

    move-result-object v2

    invoke-static {v5}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setTextColor(I)V

    .line 182
    :goto_0
    iget-object v2, p0, Lcom/mediatek/engineermode/cfu/CfuActivity$2;->this$0:Lcom/mediatek/engineermode/cfu/CfuActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/cfu/CfuActivity;->access$200(Lcom/mediatek/engineermode/cfu/CfuActivity;)Landroid/widget/TextView;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 183
    goto :goto_2

    .line 168
    :cond_2
    if-nez v0, :cond_3

    .line 169
    iget-object v2, p0, Lcom/mediatek/engineermode/cfu/CfuActivity$2;->this$0:Lcom/mediatek/engineermode/cfu/CfuActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/cfu/CfuActivity;->access$100(Lcom/mediatek/engineermode/cfu/CfuActivity;)Landroid/widget/TextView;

    move-result-object v2

    invoke-static {v4}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setTextColor(I)V

    goto :goto_1

    .line 171
    :cond_3
    iget-object v2, p0, Lcom/mediatek/engineermode/cfu/CfuActivity$2;->this$0:Lcom/mediatek/engineermode/cfu/CfuActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/cfu/CfuActivity;->access$100(Lcom/mediatek/engineermode/cfu/CfuActivity;)Landroid/widget/TextView;

    move-result-object v2

    invoke-static {v5}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setTextColor(I)V

    .line 173
    :goto_1
    iget-object v2, p0, Lcom/mediatek/engineermode/cfu/CfuActivity$2;->this$0:Lcom/mediatek/engineermode/cfu/CfuActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/cfu/CfuActivity;->access$100(Lcom/mediatek/engineermode/cfu/CfuActivity;)Landroid/widget/TextView;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 174
    nop

    .line 188
    :goto_2
    return-void
.end method
