.class Lcom/mediatek/engineermode/wifi/WiFiTxFormat$5;
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

    .line 363
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

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

    .line 369
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$500(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V

    .line 370
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$600(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/Spinner;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    sget-object v1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->TM_100_PERCENT_DUTY:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 372
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$700(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/EditText;

    move-result-object v0

    const/16 v2, 0x64

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 373
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$700(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/EditText;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setEnabled(Z)V

    goto :goto_0

    .line 375
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$700(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/EditText;

    move-result-object v0

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 376
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->access$700(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/EditText;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 379
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

    .line 384
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    return-void
.end method
