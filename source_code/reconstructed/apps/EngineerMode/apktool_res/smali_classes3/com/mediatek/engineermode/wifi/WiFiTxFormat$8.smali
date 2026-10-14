.class Lcom/mediatek/engineermode/wifi/WiFiTxFormat$8;
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

    .line 451
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onItemSelected(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 5
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

    .line 457
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$1300(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/ArrayAdapter;

    move-result-object v0

    invoke-virtual {v0, p3}, Landroid/widget/ArrayAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    .line 458
    .local v0, "config":Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$200(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/ArrayAdapter;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v2}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$1400(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/Spinner;

    move-result-object v2

    invoke-virtual {v2}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/widget/ArrayAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 459
    .local v1, "strCbw":Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v2}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$300(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->getMapBw()Ljava/util/LinkedHashMap;

    move-result-object v2

    invoke-virtual {v2, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    .line 460
    .local v2, "index":I
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v3, v2, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$1500(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;ILcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;)V

    .line 461
    const-string v3, "WifiTX"

    const-string v4, "MSG_GET_TX_POWER4"

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 462
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v3}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$100(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;

    move-result-object v3

    const/4 v4, 0x5

    invoke-virtual {v3, v4}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->sendEmptyMessage(I)Z

    .line 464
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

    .line 469
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    return-void
.end method
