.class Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;
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

    .line 299
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onItemSelected(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 8
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

    .line 301
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0, p3}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$502(Lcom/mediatek/engineermode/wifi/WiFiTx6632;I)I

    .line 302
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$600(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/TextView;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setEnabled(Z)V

    .line 303
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$700(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/Spinner;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 304
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$800(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setEnabled(Z)V

    .line 305
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$900(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/Spinner;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 306
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$600(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/TextView;

    move-result-object v0

    const/4 v2, 0x0

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setVisibility(I)V

    .line 307
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$700(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/Spinner;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/Spinner;->setVisibility(I)V

    .line 308
    const/4 v0, 0x2

    const/16 v3, 0x8

    if-ge p3, v0, :cond_0

    .line 309
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$600(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setVisibility(I)V

    .line 310
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$700(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/Spinner;

    move-result-object v0

    invoke-virtual {v0, v3}, Landroid/widget/Spinner;->setVisibility(I)V

    .line 311
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1000(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/ArrayAdapter;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/ArrayAdapter;->clear()V

    .line 312
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1000(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/ArrayAdapter;

    move-result-object v0

    invoke-static {}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1100()[Ljava/lang/String;

    move-result-object v1

    aget-object v1, v1, p3

    invoke-virtual {v0, v1}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 313
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1200(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v3}, Landroid/view/View;->setVisibility(I)V

    .line 314
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$900(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/Spinner;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1000(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/ArrayAdapter;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    goto/16 :goto_3

    .line 315
    :cond_0
    const/4 v0, 0x5

    if-gt p3, v0, :cond_3

    .line 316
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1000(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/ArrayAdapter;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/ArrayAdapter;->clear()V

    .line 317
    const/4 v0, 0x2

    .local v0, "i":I
    :goto_0
    if-gt v0, p3, :cond_1

    .line 318
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v2}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1000(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/ArrayAdapter;

    move-result-object v2

    invoke-static {}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1100()[Ljava/lang/String;

    move-result-object v4

    aget-object v4, v4, v0

    invoke-virtual {v2, v4}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 317
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 320
    .end local v0    # "i":I
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$900(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/Spinner;

    move-result-object v0

    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v2}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1000(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/ArrayAdapter;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 321
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1300(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/ArrayAdapter;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/ArrayAdapter;->clear()V

    .line 322
    const-wide/high16 v4, 0x4000000000000000L    # 2.0

    add-int/lit8 v0, p3, -0x2

    int-to-double v6, v0

    invoke-static {v4, v5, v6, v7}, Ljava/lang/Math;->pow(DD)D

    move-result-wide v4

    double-to-int v0, v4

    sub-int/2addr v0, v1

    .line 323
    .local v0, "maxPrimCh":I
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_1
    if-gt v1, v0, :cond_2

    .line 324
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v2}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1300(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/ArrayAdapter;

    move-result-object v2

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 323
    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    .line 326
    .end local v1    # "i":I
    :cond_2
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$700(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/Spinner;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v2}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1300(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/ArrayAdapter;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 327
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1200(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1, v3}, Landroid/view/View;->setVisibility(I)V

    .line 328
    .end local v0    # "maxPrimCh":I
    goto :goto_3

    .line 329
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$700(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/Spinner;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 330
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$900(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/Spinner;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 331
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1200(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/view/View;->setVisibility(I)V

    .line 332
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1000(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/ArrayAdapter;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/ArrayAdapter;->clear()V

    .line 333
    const/4 v0, 0x2

    .local v0, "i":I
    :goto_2
    if-ge v0, p3, :cond_4

    .line 334
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1000(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/ArrayAdapter;

    move-result-object v1

    invoke-static {}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1100()[Ljava/lang/String;

    move-result-object v2

    aget-object v2, v2, v0

    invoke-virtual {v1, v2}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 333
    add-int/lit8 v0, v0, 0x1

    goto :goto_2

    .line 336
    .end local v0    # "i":I
    :cond_4
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$900(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/Spinner;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1000(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/ArrayAdapter;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 337
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$900(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/Spinner;

    move-result-object v0

    const/4 v1, 0x3

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setSelection(I)V

    .line 339
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1300(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/ArrayAdapter;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/ArrayAdapter;->clear()V

    .line 340
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1300(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/ArrayAdapter;

    move-result-object v0

    const-string v1, "0"

    invoke-virtual {v0, v1}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 341
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$700(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/Spinner;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1300(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/ArrayAdapter;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 344
    :goto_3
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;->this$0:Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->access$1400(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V

    .line 347
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

    .line 351
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    return-void
.end method
