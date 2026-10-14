.class Lcom/mediatek/engineermode/wifi/WiFiTx6632$8;
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

    .line 400
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onItemSelected(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 3
    .param p2, "arg1"    # Landroid/view/View;
    .param p3, "arg2"    # I
    .param p4, "arg3"    # J
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;",
            "Landroid/view/View;",
            "IJ)V"
        }
    .end annotation

    .line 403
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1800(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;

    move-result-object v0

    iget v0, v0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;->mRateIndex:I

    .line 404
    .local v0, "oldRate":I
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1800(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;

    move-result-object v1

    iput p3, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;->mRateIndex:I

    .line 405
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1900(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)I

    move-result v1

    const/4 v2, 0x2

    if-eq v1, v2, :cond_0

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1900(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)I

    move-result v1

    const/4 v2, 0x3

    if-eq v1, v2, :cond_0

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1900(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)I

    move-result v1

    const/4 v2, 0x4

    if-ne v1, v2, :cond_1

    .line 406
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1800(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;

    move-result-object v1

    add-int/lit8 v2, p3, 0xc

    iput v2, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;->mRateIndex:I

    .line 408
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$2000(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V

    .line 409
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1800(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;

    move-result-object v1

    iget v1, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;->mRateIndex:I

    if-eq v0, v1, :cond_2

    .line 410
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$8;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$300(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V

    .line 413
    :cond_2
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

    .line 416
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    return-void
.end method
