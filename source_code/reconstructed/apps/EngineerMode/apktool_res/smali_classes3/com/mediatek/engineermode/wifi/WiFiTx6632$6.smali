.class Lcom/mediatek/engineermode/wifi/WiFiTx6632$6;
.super Ljava/lang/Object;
.source "WiFiTx6632.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemSelectedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/wifi/WiFiTx6632;->initUiComponent()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    .line 357
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$6;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onItemSelected(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 4
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

    .line 360
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    move-object v0, p2

    check-cast v0, Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    .line 361
    .local v0, "content":Ljava/lang/String;
    invoke-static {}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1500()Ljava/util/HashMap;

    move-result-object v1

    invoke-virtual {v1, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    .line 362
    .local v1, "value":Ljava/lang/Integer;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "dbw value:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "WifiTx"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 363
    if-eqz v1, :cond_1

    .line 364
    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v2

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$6;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v3}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1600(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)I

    move-result v3

    if-ne v2, v3, :cond_0

    goto :goto_0

    .line 368
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$6;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1602(Lcom/mediatek/engineermode/wifi/WiFiTx6632;I)I

    .line 369
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$6;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v2}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$300(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V

    .line 370
    return-void

    .line 365
    :cond_1
    :goto_0
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

    .line 374
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    return-void
.end method
