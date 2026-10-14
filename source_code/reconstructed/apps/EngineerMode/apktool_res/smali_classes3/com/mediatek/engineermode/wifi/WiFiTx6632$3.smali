.class Lcom/mediatek/engineermode/wifi/WiFiTx6632$3;
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

    .line 257
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$3;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

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

    .line 260
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$3;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$100(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/ArrayAdapter;

    move-result-object v0

    invoke-virtual {v0, p3}, Landroid/widget/ArrayAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 261
    .local v0, "name":Ljava/lang/String;
    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->parseChannelId(Ljava/lang/String;)I

    move-result v1

    .line 262
    .local v1, "channelId":I
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$3;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getChannelFrequency(I)I

    move-result v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$202(Lcom/mediatek/engineermode/wifi/WiFiTx6632;I)I

    .line 263
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$3;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v2}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$300(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V

    .line 264
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

    .line 267
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    return-void
.end method
