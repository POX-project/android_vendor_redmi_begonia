.class public Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;
.super Ljava/lang/Object;
.source "RfDesenseTxTestBase.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xc
    name = "Editor"
.end annotation


# instance fields
.field public defaultValue:Ljava/lang/String;

.field public editor:Landroid/widget/EditText;

.field public max:I

.field public max2:I

.field public min:I

.field public min2:I

.field public step:I


# direct methods
.method protected constructor <init>()V
    .locals 1

    .line 232
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 234
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->defaultValue:Ljava/lang/String;

    .line 239
    const/4 v0, 0x1

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->step:I

    return-void
.end method


# virtual methods
.method public check()Z
    .locals 5

    .line 271
    const/4 v0, 0x0

    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->getText()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    .line 275
    .local v1, "value":I
    iget v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->min:I

    if-lt v1, v2, :cond_0

    iget v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->max:I

    if-le v1, v2, :cond_1

    :cond_0
    iget v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->min2:I

    if-lt v1, v2, :cond_3

    iget v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->max2:I

    if-le v1, v2, :cond_1

    goto :goto_0

    .line 278
    :cond_1
    iget v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->step:I

    const/4 v3, 0x1

    if-eq v2, v3, :cond_2

    iget v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->min:I

    sub-int v2, v1, v2

    iget v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->step:I

    rem-int/2addr v2, v4
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v2, :cond_2

    .line 279
    return v0

    .line 283
    .end local v1    # "value":I
    :cond_2
    nop

    .line 285
    return v3

    .line 276
    .restart local v1    # "value":I
    :cond_3
    :goto_0
    return v0

    .line 281
    .end local v1    # "value":I
    :catch_0
    move-exception v1

    .line 282
    .local v1, "e":Ljava/lang/NumberFormatException;
    return v0
.end method

.method public getText()Ljava/lang/String;
    .locals 1

    .line 258
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->editor:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getValidRange()Ljava/lang/String;
    .locals 5

    .line 289
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->min:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ","

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->max:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "]"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 290
    .local v0, "text":Ljava/lang/String;
    iget v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->min:I

    iget v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->min2:I

    if-eq v3, v4, :cond_0

    .line 291
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ", ["

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->min2:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->max2:I

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 293
    :cond_0
    iget v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->step:I

    const/4 v2, 0x1

    if-eq v1, v2, :cond_1

    .line 294
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ", step "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->step:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 296
    :cond_1
    return-object v0
.end method

.method public set(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .param p1, "arg0"    # Ljava/lang/String;
    .param p2, "arg1"    # Ljava/lang/String;
    .param p3, "arg2"    # Ljava/lang/String;

    .line 250
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->defaultValue:Ljava/lang/String;

    .line 251
    invoke-static {p2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->min:I

    .line 252
    invoke-static {p3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->max:I

    .line 253
    invoke-static {p2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->min2:I

    .line 254
    invoke-static {p3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->max2:I

    .line 255
    return-void
.end method

.method public set(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .param p1, "arg0"    # Ljava/lang/String;
    .param p2, "arg1"    # Ljava/lang/String;
    .param p3, "arg2"    # Ljava/lang/String;
    .param p4, "arg3"    # Ljava/lang/String;
    .param p5, "arg4"    # Ljava/lang/String;

    .line 242
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->defaultValue:Ljava/lang/String;

    .line 243
    invoke-static {p2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->min:I

    .line 244
    invoke-static {p3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->max:I

    .line 245
    invoke-static {p4}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->min2:I

    .line 246
    invoke-static {p5}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->max2:I

    .line 247
    return-void
.end method

.method public setText(Ljava/lang/String;)V
    .locals 1
    .param p1, "text"    # Ljava/lang/String;

    .line 262
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->editor:Landroid/widget/EditText;

    invoke-virtual {v0, p1}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 263
    return-void
.end method

.method public setToDefault()V
    .locals 2

    .line 266
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->editor:Landroid/widget/EditText;

    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->defaultValue:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 267
    return-void
.end method
