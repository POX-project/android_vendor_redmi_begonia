.class Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$1;
.super Landroid/os/Handler;
.source "ComponentSelectActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    .line 184
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 4
    .param p1, "msg"    # Landroid/os/Message;

    .line 186
    iget v0, p1, Landroid/os/Message;->what:I

    const-string v1, "EmInfo/ComponentSelectActivity"

    const/4 v2, 0x1

    if-eq v0, v2, :cond_3

    const/4 v3, 0x2

    if-eq v0, v3, :cond_2

    const/4 v1, 0x3

    if-eq v0, v1, :cond_1

    const/4 v1, 0x4

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 212
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->showDialog(I)V

    .line 213
    goto :goto_0

    .line 208
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$100(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;)Landroid/app/ProgressDialog;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Wait subscribe message:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$008()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 209
    goto :goto_0

    .line 196
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->removeDialog(I)V

    .line 197
    const-string v0, "Wait subscribe message done"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 198
    invoke-static {v2}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$002(I)I

    .line 199
    new-instance v0, Landroid/content/Intent;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    const-class v2, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-direct {v0, v1, v2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 201
    .local v0, "intent":Landroid/content/Intent;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    iget-object v1, v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->components:Ljava/util/ArrayList;

    const-string v2, "mChecked"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/io/Serializable;)Landroid/content/Intent;

    .line 202
    sget v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mSimType:I

    const-string v2, "mSimType"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 203
    sget v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mModemType:I

    const-string v2, "mModemType"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 204
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->startActivity(Landroid/content/Intent;)V

    .line 205
    goto :goto_0

    .line 188
    .end local v0    # "intent":Landroid/content/Intent;
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    const/4 v2, 0x0

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->removeDialog(I)V

    .line 189
    const-string v0, "Wait MDML init done"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 190
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mAutoRecordFlag:Ljava/lang/String;

    const-string v1, "1"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 191
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->OptionsItemSelected()V

    .line 218
    :cond_4
    :goto_0
    return-void
.end method
