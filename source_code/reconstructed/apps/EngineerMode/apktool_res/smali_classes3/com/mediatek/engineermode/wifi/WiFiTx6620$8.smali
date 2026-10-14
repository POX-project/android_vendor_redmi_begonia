.class Lcom/mediatek/engineermode/wifi/WiFiTx6620$8;
.super Ljava/lang/Object;
.source "WiFiTx6620.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemSelectedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/wifi/WiFiTx6620;->initUiComponent()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 537
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

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

    .line 541
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mSpBwAdvCbw onItemSelected position:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " mChannelBandwidth:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    iget v1, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelBandwidth:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "WifiTx"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 543
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    iget v0, v0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelBandwidth:I

    if-ne v0, p3, :cond_0

    .line 544
    return-void

    .line 546
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    iput p3, v0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelBandwidth:I

    .line 548
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$2400(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/widget/ArrayAdapter;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/ArrayAdapter;->clear()V

    .line 549
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    if-gt v0, p3, :cond_1

    .line 550
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$2400(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/widget/ArrayAdapter;

    move-result-object v1

    invoke-static {}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$2500()[Ljava/lang/String;

    move-result-object v2

    aget-object v2, v2, v0

    invoke-virtual {v1, v2}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 549
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 552
    .end local v0    # "i":I
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$2600(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/widget/Spinner;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$2400(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/widget/ArrayAdapter;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 555
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$2700(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/widget/ArrayAdapter;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/ArrayAdapter;->clear()V

    .line 556
    const-wide/high16 v0, 0x4000000000000000L    # 2.0

    int-to-double v2, p3

    invoke-static {v0, v1, v2, v3}, Ljava/lang/Math;->pow(DD)D

    move-result-wide v0

    double-to-int v0, v0

    add-int/lit8 v0, v0, -0x1

    .line 557
    .local v0, "maxPrimCh":I
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_1
    if-gt v1, v0, :cond_2

    .line 558
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v2}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$2700(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/widget/ArrayAdapter;

    move-result-object v2

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 557
    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    .line 560
    .end local v1    # "i":I
    :cond_2
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$2800(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/widget/Spinner;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-static {v2}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$2700(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/widget/ArrayAdapter;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 562
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    iget v2, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelBandwidth:I

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    iget v3, v3, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mDataBandwidth:I

    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    iget v4, v4, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPrimarySetting:I

    invoke-static {v1, v2, v3, v4}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->access$2900(Lcom/mediatek/engineermode/wifi/WiFiTx6620;III)V

    .line 563
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

    .line 567
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    return-void
.end method
