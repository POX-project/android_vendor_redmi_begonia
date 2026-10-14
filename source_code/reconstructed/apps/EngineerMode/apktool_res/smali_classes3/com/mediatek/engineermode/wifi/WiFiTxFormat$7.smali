.class Lcom/mediatek/engineermode/wifi/WiFiTxFormat$7;
.super Ljava/lang/Object;
.source "WiFiTxFormat.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemSelectedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->initComponent()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 414
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$7;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

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

    .line 420
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$7;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$1000(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/Spinner;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 421
    .local v0, "rateName":Ljava/lang/String;
    const-string v1, "DCM"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 422
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$7;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$1100(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/ArrayAdapter;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$7;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v2}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$300(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->getGiNotForDcm()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/ArrayAdapter;->remove(Ljava/lang/Object;)V

    goto :goto_0

    .line 424
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$7;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$1200(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/Spinner;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    .line 425
    .local v1, "config":Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$7;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v2}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$300(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->getPreambleWithGiNotForDcm()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2, v1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 426
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$7;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v2}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$1100(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/ArrayAdapter;

    move-result-object v2

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$7;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v3}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$300(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->getGiNotForDcm()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/widget/ArrayAdapter;->getPosition(Ljava/lang/Object;)I

    move-result v2

    if-gez v2, :cond_1

    .line 427
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$7;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v2}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$1100(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/ArrayAdapter;

    move-result-object v2

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$7;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v3}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$300(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->getGiNotForDcm()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 431
    .end local v1    # "config":Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;
    :cond_1
    :goto_0
    const-string v1, "WifiTX"

    const-string v2, "MSG_GET_TX_POWER3"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 432
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$7;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$100(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;

    move-result-object v1

    const/4 v2, 0x5

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->sendEmptyMessage(I)Z

    .line 433
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

    .line 439
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    return-void
.end method
