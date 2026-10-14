.class Lcom/mediatek/engineermode/wifi/WiFiTxFormat$4;
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

    .line 332
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$4;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

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

    .line 338
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$4;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$200(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/ArrayAdapter;

    move-result-object v0

    invoke-virtual {v0, p3}, Landroid/widget/ArrayAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 339
    .local v0, "strCbw":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$4;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$300(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->getMapBw()Ljava/util/LinkedHashMap;

    move-result-object v1

    invoke-virtual {v1, v0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    .line 340
    .local v1, "index":I
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$4;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$400(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;I)V

    .line 341
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

    .line 346
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    return-void
.end method
