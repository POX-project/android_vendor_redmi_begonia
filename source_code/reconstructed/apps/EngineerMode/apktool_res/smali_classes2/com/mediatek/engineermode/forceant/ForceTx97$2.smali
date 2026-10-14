.class Lcom/mediatek/engineermode/forceant/ForceTx97$2;
.super Ljava/lang/Object;
.source "ForceTx97.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemSelectedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/forceant/ForceTx97;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/forceant/ForceTx97;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/forceant/ForceTx97;

    .line 257
    iput-object p1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onItemSelected(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 5
    .param p2, "arg1"    # Landroid/view/View;
    .param p3, "pos"    # I
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

    .line 261
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$300(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/Spinner;

    move-result-object v0

    const-string v1, "ForceAnt97"

    const/4 v2, 0x0

    if-ne p1, v0, :cond_3

    .line 262
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mForceAntModeSpinner changed, pos = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 263
    if-nez p3, :cond_0

    .line 264
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$400(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/Button;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/Button;->setEnabled(Z)V

    goto :goto_0

    .line 265
    :cond_0
    const/4 v0, 0x1

    if-ne p3, v0, :cond_1

    .line 266
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$400(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/Button;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/widget/Button;->setEnabled(Z)V

    goto :goto_0

    .line 267
    :cond_1
    const/4 v0, 0x2

    if-ne p3, v0, :cond_2

    .line 268
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$400(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/Button;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/Button;->setEnabled(Z)V

    .line 270
    :cond_2
    :goto_0
    invoke-static {p3}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$502(I)I

    goto/16 :goto_1

    .line 271
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$600(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/Spinner;

    move-result-object v0

    if-ne p1, v0, :cond_6

    .line 272
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mTasRatSpinner changed, pos = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 273
    add-int/lit8 v0, p3, 0x1

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$702(I)I

    .line 274
    invoke-static {}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$700()I

    move-result v0

    const/4 v1, 0x5

    const v3, 0x7f0a0610

    if-ne v0, v1, :cond_4

    .line 275
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$800(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/TableRow;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/TableRow;->setVisibility(I)V

    .line 276
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$900(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/TableRow;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/TableRow;->setVisibility(I)V

    .line 277
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$200(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/Spinner;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/Spinner;->setVisibility(I)V

    .line 278
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$1000(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setVisibility(I)V

    .line 279
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$1100(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setText(I)V

    .line 280
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$1200(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setVisibility(I)V

    .line 281
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$1300(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/Spinner;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/Spinner;->setVisibility(I)V

    goto/16 :goto_1

    .line 282
    :cond_4
    invoke-static {}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$700()I

    move-result v0

    const/4 v1, 0x3

    const/16 v4, 0x8

    if-ne v0, v1, :cond_5

    .line 283
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$800(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/TableRow;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/TableRow;->setVisibility(I)V

    .line 284
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$900(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/TableRow;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/TableRow;->setVisibility(I)V

    .line 285
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$200(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/Spinner;

    move-result-object v0

    invoke-virtual {v0, v4}, Landroid/widget/Spinner;->setVisibility(I)V

    .line 286
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$1000(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setVisibility(I)V

    .line 287
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$1100(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setText(I)V

    .line 288
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$1200(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setVisibility(I)V

    .line 289
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$1300(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/Spinner;

    move-result-object v0

    invoke-virtual {v0, v4}, Landroid/widget/Spinner;->setVisibility(I)V

    goto/16 :goto_1

    .line 291
    :cond_5
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$800(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/TableRow;

    move-result-object v0

    invoke-virtual {v0, v4}, Landroid/widget/TableRow;->setVisibility(I)V

    .line 292
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$900(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/TableRow;

    move-result-object v0

    invoke-virtual {v0, v4}, Landroid/widget/TableRow;->setVisibility(I)V

    .line 293
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$200(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/Spinner;

    move-result-object v0

    invoke-virtual {v0, v4}, Landroid/widget/Spinner;->setVisibility(I)V

    .line 294
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$1000(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setVisibility(I)V

    .line 295
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$1100(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/TextView;

    move-result-object v0

    const v1, 0x7f0a060e

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    goto :goto_1

    .line 297
    :cond_6
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$100(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/Spinner;

    move-result-object v0

    if-ne p1, v0, :cond_7

    .line 298
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "mTasAntStatesTxSpinner changed, pos = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 299
    invoke-static {p3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$1402(Ljava/lang/String;)Ljava/lang/String;

    goto :goto_1

    .line 300
    :cond_7
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$200(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/Spinner;

    move-result-object v0

    if-ne p1, v0, :cond_8

    .line 301
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "mTasAntStatesRxSpinner changed, pos = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 302
    invoke-static {p3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$1502(Ljava/lang/String;)Ljava/lang/String;

    .line 304
    :cond_8
    :goto_1
    return-void
.end method

.method public onNothingSelected(Landroid/widget/AdapterView;)V
    .locals 0
    .param p1, "parent"    # Landroid/widget/AdapterView;

    .line 308
    return-void
.end method
