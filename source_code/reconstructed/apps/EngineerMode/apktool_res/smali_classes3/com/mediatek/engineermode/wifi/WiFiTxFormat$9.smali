.class Lcom/mediatek/engineermode/wifi/WiFiTxFormat$9;
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

    .line 479
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$9;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onItemSelected(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 2
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

    .line 485
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    const-string v0, "WifiTX"

    const-string v1, "MSG_GET_TX_POWER5"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 486
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$9;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$100(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;

    move-result-object v0

    const/4 v1, 0x5

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->sendEmptyMessage(I)Z

    .line 487
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

    .line 490
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    return-void
.end method
