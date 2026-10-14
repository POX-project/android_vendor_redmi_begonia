.class Lcom/mediatek/engineermode/forceant/ForceTx95$2;
.super Ljava/lang/Object;
.source "ForceTx95.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemSelectedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/forceant/ForceTx95;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/forceant/ForceTx95;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/forceant/ForceTx95;

    .line 223
    iput-object p1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onItemSelected(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 7
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

    .line 227
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$200(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;

    move-result-object v0

    const/4 v1, 0x3

    const-string v2, "ForceAnt95"

    const/4 v3, 0x0

    const/4 v4, 0x1

    const/4 v5, 0x6

    if-ne p1, v0, :cond_6

    .line 228
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "mForceAntModeSpinner changed, pos = "

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 229
    const/16 v0, 0x9

    if-nez p3, :cond_1

    .line 231
    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v2}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$300(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Button;

    move-result-object v2

    invoke-virtual {v2, v3}, Landroid/widget/Button;->setEnabled(Z)V

    .line 233
    invoke-static {}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$500()I

    move-result v2

    if-ne v2, v4, :cond_0

    .line 234
    goto :goto_0

    :cond_0
    move v1, v3

    .line 233
    :goto_0
    invoke-static {v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$402(I)I

    .line 236
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$600(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;

    move-result-object v1

    invoke-virtual {v1, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 237
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$700(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;

    move-result-object v1

    invoke-virtual {v1, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 238
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$800(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;

    move-result-object v1

    invoke-virtual {v1, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 239
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$900(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;

    move-result-object v1

    invoke-virtual {v1, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 240
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$100(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/widget/Spinner;->setSelection(I)V

    goto :goto_3

    .line 241
    :cond_1
    if-ne p3, v4, :cond_3

    .line 242
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$300(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Button;

    move-result-object v0

    invoke-virtual {v0, v4}, Landroid/widget/Button;->setEnabled(Z)V

    .line 244
    invoke-static {}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$500()I

    move-result v0

    if-ne v0, v4, :cond_2

    .line 245
    const/4 v4, 0x4

    goto :goto_1

    :cond_2
    nop

    .line 244
    :goto_1
    invoke-static {v4}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$402(I)I

    goto :goto_3

    .line 246
    :cond_3
    const/4 v1, 0x2

    if-ne p3, v1, :cond_5

    .line 247
    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v2}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$300(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Button;

    move-result-object v2

    invoke-virtual {v2, v3}, Landroid/widget/Button;->setEnabled(Z)V

    .line 249
    invoke-static {}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$500()I

    move-result v2

    if-ne v2, v4, :cond_4

    .line 250
    const/4 v1, 0x5

    goto :goto_2

    :cond_4
    nop

    .line 249
    :goto_2
    invoke-static {v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$402(I)I

    .line 251
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$600(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;

    move-result-object v1

    invoke-virtual {v1, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 252
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$700(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;

    move-result-object v1

    invoke-virtual {v1, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 253
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$800(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;

    move-result-object v1

    invoke-virtual {v1, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 254
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$900(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;

    move-result-object v1

    invoke-virtual {v1, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 255
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$1000(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/EditText;

    move-result-object v1

    const-string v2, ""

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 256
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$100(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/widget/Spinner;->setSelection(I)V

    .line 258
    :cond_5
    :goto_3
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/forceant/ForceTx95;->forceTypeUpdate()V

    goto/16 :goto_4

    .line 259
    :cond_6
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$1100(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;

    move-result-object v0

    if-ne p1, v0, :cond_8

    .line 260
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "mTasRatSpinner changed, pos = "

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 261
    add-int/lit8 v0, p3, 0x1

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$1202(I)I

    .line 262
    invoke-static {}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$1200()I

    move-result v0

    if-ne v0, v1, :cond_7

    .line 263
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$1300(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/TableRow;

    move-result-object v0

    invoke-virtual {v0, v3}, Landroid/widget/TableRow;->setVisibility(I)V

    goto :goto_4

    .line 265
    :cond_7
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$1300(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/TableRow;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/TableRow;->setVisibility(I)V

    goto :goto_4

    .line 267
    :cond_8
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$100(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;

    move-result-object v0

    if-ne p1, v0, :cond_9

    .line 268
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mTasAntStatesSpinner changed, pos = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 269
    invoke-static {p3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$1402(Ljava/lang/String;)Ljava/lang/String;

    .line 270
    invoke-static {}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$1500()I

    move-result v0

    if-ne v0, v4, :cond_9

    .line 271
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$600(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;

    move-result-object v0

    invoke-virtual {v0, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 272
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$700(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;

    move-result-object v0

    invoke-virtual {v0, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 273
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$800(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;

    move-result-object v0

    invoke-virtual {v0, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 274
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v0}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$900(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;

    move-result-object v0

    invoke-virtual {v0, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 277
    :cond_9
    :goto_4
    return-void
.end method

.method public onNothingSelected(Landroid/widget/AdapterView;)V
    .locals 0
    .param p1, "parent"    # Landroid/widget/AdapterView;

    .line 281
    return-void
.end method
