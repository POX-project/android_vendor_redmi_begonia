.class Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;
.super Landroid/os/AsyncTask;
.source "BtList.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bluetooth/BtList;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "FunctionTask"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/os/AsyncTask<",
        "Ljava/lang/Void;",
        "Ljava/lang/Void;",
        "Ljava/lang/Void;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bluetooth/BtList;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/bluetooth/BtList;)V
    .locals 0

    .line 162
    iput-object p1, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/bluetooth/BtList;Lcom/mediatek/engineermode/bluetooth/BtList$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/bluetooth/BtList;
    .param p2, "x1"    # Lcom/mediatek/engineermode/bluetooth/BtList$1;

    .line 162
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;-><init>(Lcom/mediatek/engineermode/bluetooth/BtList;)V

    return-void
.end method


# virtual methods
.method protected bridge synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 162
    check-cast p1, [Ljava/lang/Void;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->doInBackground([Ljava/lang/Void;)Ljava/lang/Void;

    move-result-object p1

    return-object p1
.end method

.method protected varargs doInBackground([Ljava/lang/Void;)Ljava/lang/Void;
    .locals 2
    .param p1, "params"    # [Ljava/lang/Void;

    .line 166
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BtList;->access$100(Lcom/mediatek/engineermode/bluetooth/BtList;)Lcom/mediatek/engineermode/bluetooth/BtTest;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BtTest;->init()Z

    .line 167
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BtList;->access$100(Lcom/mediatek/engineermode/bluetooth/BtList;)Lcom/mediatek/engineermode/bluetooth/BtTest;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BtTest;->isBLEEnhancedSupport()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 168
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    sget-object v1, Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;->BLE_ENHANCED:Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/bluetooth/BtList;->access$202(Lcom/mediatek/engineermode/bluetooth/BtList;Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;)Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    goto :goto_0

    .line 169
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BtList;->access$100(Lcom/mediatek/engineermode/bluetooth/BtList;)Lcom/mediatek/engineermode/bluetooth/BtTest;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BtTest;->isBLESupport()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 170
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    sget-object v1, Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;->BLE_NORMAL:Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/bluetooth/BtList;->access$202(Lcom/mediatek/engineermode/bluetooth/BtList;Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;)Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    .line 172
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BtList;->access$100(Lcom/mediatek/engineermode/bluetooth/BtList;)Lcom/mediatek/engineermode/bluetooth/BtTest;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest;->isComboSupport()Z

    move-result v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/bluetooth/BtList;->access$302(Lcom/mediatek/engineermode/bluetooth/BtList;Z)Z

    .line 174
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BtList;->access$100(Lcom/mediatek/engineermode/bluetooth/BtList;)Lcom/mediatek/engineermode/bluetooth/BtTest;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest;->getAntNum()I

    move-result v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/bluetooth/BtList;->access$402(Lcom/mediatek/engineermode/bluetooth/BtList;I)I

    .line 175
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BtList;->access$100(Lcom/mediatek/engineermode/bluetooth/BtList;)Lcom/mediatek/engineermode/bluetooth/BtTest;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BtTest;->unInit()Z

    .line 176
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "BLE supported: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    invoke-static {v1}, Lcom/mediatek/engineermode/bluetooth/BtList;->access$200(Lcom/mediatek/engineermode/bluetooth/BtList;)Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, " ant number:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    invoke-static {v1}, Lcom/mediatek/engineermode/bluetooth/BtList;->access$400(Lcom/mediatek/engineermode/bluetooth/BtList;)I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BTList"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 177
    const/4 v0, 0x0

    return-object v0
.end method

.method protected bridge synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 0

    .line 162
    check-cast p1, Ljava/lang/Void;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->onPostExecute(Ljava/lang/Void;)V

    return-void
.end method

.method protected onPostExecute(Ljava/lang/Void;)V
    .locals 4
    .param p1, "result"    # Ljava/lang/Void;

    .line 182
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/bluetooth/BtList;->access$502(Lcom/mediatek/engineermode/bluetooth/BtList;Ljava/util/ArrayList;)Ljava/util/ArrayList;

    .line 184
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BtList;->access$500(Lcom/mediatek/engineermode/bluetooth/BtList;)Ljava/util/ArrayList;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    const v2, 0x7f0a01d5

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/bluetooth/BtList;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 187
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BtList;->access$500(Lcom/mediatek/engineermode/bluetooth/BtList;)Ljava/util/ArrayList;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    const v2, 0x7f0a01b7

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/bluetooth/BtList;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 189
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BtList;->access$500(Lcom/mediatek/engineermode/bluetooth/BtList;)Ljava/util/ArrayList;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    const v2, 0x7f0a01c8

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/bluetooth/BtList;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 191
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BtList;->access$200(Lcom/mediatek/engineermode/bluetooth/BtList;)Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    move-result-object v0

    sget-object v1, Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;->BLE_ENHANCED:Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    if-ne v0, v1, :cond_0

    .line 192
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BtList;->access$500(Lcom/mediatek/engineermode/bluetooth/BtList;)Ljava/util/ArrayList;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    const v2, 0x7f0a019a

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/bluetooth/BtList;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 193
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BtList;->access$200(Lcom/mediatek/engineermode/bluetooth/BtList;)Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    move-result-object v0

    sget-object v1, Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;->BLE_NORMAL:Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    if-ne v0, v1, :cond_1

    .line 194
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BtList;->access$500(Lcom/mediatek/engineermode/bluetooth/BtList;)Ljava/util/ArrayList;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    const v2, 0x7f0a01a8

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/bluetooth/BtList;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 197
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BtList;->access$300(Lcom/mediatek/engineermode/bluetooth/BtList;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 198
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BtList;->access$500(Lcom/mediatek/engineermode/bluetooth/BtList;)Ljava/util/ArrayList;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    const v2, 0x7f0a01b4

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/bluetooth/BtList;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 201
    :cond_2
    new-instance v0, Landroid/widget/ArrayAdapter;

    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    const v2, 0x1090003

    .line 203
    invoke-static {v1}, Lcom/mediatek/engineermode/bluetooth/BtList;->access$500(Lcom/mediatek/engineermode/bluetooth/BtList;)Ljava/util/ArrayList;

    move-result-object v3

    invoke-direct {v0, v1, v2, v3}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;ILjava/util/List;)V

    .line 204
    .local v0, "moduleAdapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/bluetooth/BtList;->setListAdapter(Landroid/widget/ListAdapter;)V

    .line 206
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtList$FunctionTask;->this$0:Lcom/mediatek/engineermode/bluetooth/BtList;

    const/4 v2, 0x2

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/bluetooth/BtList;->removeDialog(I)V

    .line 208
    invoke-super {p0, p1}, Landroid/os/AsyncTask;->onPostExecute(Ljava/lang/Object;)V

    .line 209
    return-void
.end method
