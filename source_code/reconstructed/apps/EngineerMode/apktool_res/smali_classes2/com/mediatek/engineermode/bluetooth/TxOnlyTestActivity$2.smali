.class Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$2;
.super Ljava/lang/Object;
.source "TxOnlyTestActivity.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemSelectedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->initComponent()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;

    .line 206
    iput-object p1, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$2;->this$0:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onItemSelected(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 6
    .param p2, "view"    # Landroid/view/View;
    .param p3, "position"    # I
    .param p4, "id"    # J
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;",
            "Landroid/view/View;",
            "IJ)V"
        }
    .end annotation

    .line 212
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$2;->this$0:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->access$500(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;)Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0, p3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;

    .line 213
    .local v0, "data":Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;
    new-instance v1, Ljava/lang/String;

    invoke-direct {v1}, Ljava/lang/String;-><init>()V

    .line 214
    .local v1, "limits":Ljava/lang/String;
    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;->access$600(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;)I

    move-result v2

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;->access$700(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;)I

    move-result v3

    const-string v4, "]"

    const-string v5, "["

    if-ne v2, v3, :cond_0

    .line 215
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;->access$600(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;)I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    .line 217
    :cond_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;->access$600(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;)I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "~"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;->access$700(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;)I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 219
    :goto_0
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$2;->this$0:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->access$800(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;)Landroid/widget/TextView;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$2;->this$0:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;

    invoke-virtual {v4}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    const v5, 0x7f0a01d7

    invoke-virtual {v4, v5}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 220
    return-void
.end method

.method public onNothingSelected(Landroid/widget/AdapterView;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;)V"
        }
    .end annotation

    .line 226
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    return-void
.end method
