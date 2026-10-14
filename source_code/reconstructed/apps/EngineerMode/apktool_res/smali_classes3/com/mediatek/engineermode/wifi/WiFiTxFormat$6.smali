.class Lcom/mediatek/engineermode/wifi/WiFiTxFormat$6;
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

    .line 388
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$6;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onItemSelected(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 3
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

    .line 394
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$6;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$800(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/ArrayAdapter;

    move-result-object v0

    invoke-virtual {v0, p3}, Landroid/widget/ArrayAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    .line 395
    .local v0, "config":Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$6;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$900(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;)V

    .line 397
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$6;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$500(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V

    .line 398
    const-string v1, "WifiTX"

    const-string v2, "MSG_GET_TX_POWER2"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 399
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$6;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$100(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;

    move-result-object v1

    const/4 v2, 0x5

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->sendEmptyMessage(I)Z

    .line 400
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

    .line 405
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    return-void
.end method
