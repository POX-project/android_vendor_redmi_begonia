.class Lcom/mediatek/engineermode/hqanfc/ReaderMode$3;
.super Ljava/lang/Object;
.source "ReaderMode.java"

# interfaces
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/hqanfc/ReaderMode;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 212
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$3;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 2
    .param p1, "buttonView"    # Landroid/widget/CompoundButton;
    .param p2, "checked"    # Z

    .line 214
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[ReaderMode]onCheckedChanged view is "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getText()Ljava/lang/CharSequence;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, " value is "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Nfc"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 216
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$3;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$900(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)[Landroid/widget/CheckBox;

    move-result-object v0

    const/4 v1, 0x0

    aget-object v0, v0, v1

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 217
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$3;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$1000(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/widget/RadioGroup;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/RadioGroup;->getChildCount()I

    move-result v1

    if-ge v0, v1, :cond_0

    .line 218
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$3;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$1000(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/widget/RadioGroup;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/widget/RadioGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1, p2}, Landroid/view/View;->setEnabled(Z)V

    .line 217
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .end local v0    # "i":I
    :cond_0
    goto/16 :goto_6

    .line 220
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$3;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$900(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)[Landroid/widget/CheckBox;

    move-result-object v0

    const/4 v1, 0x1

    aget-object v0, v0, v1

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 221
    const/4 v0, 0x0

    .restart local v0    # "i":I
    :goto_1
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$3;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$1100(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/widget/RadioGroup;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/RadioGroup;->getChildCount()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 222
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$3;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$1100(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/widget/RadioGroup;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/widget/RadioGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1, p2}, Landroid/view/View;->setEnabled(Z)V

    .line 221
    add-int/lit8 v0, v0, 0x1

    goto :goto_1

    .end local v0    # "i":I
    :cond_2
    goto/16 :goto_6

    .line 224
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$3;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$900(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)[Landroid/widget/CheckBox;

    move-result-object v0

    const/4 v1, 0x2

    aget-object v0, v0, v1

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 225
    const/4 v0, 0x0

    .restart local v0    # "i":I
    :goto_2
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$3;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$1200(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/widget/RadioGroup;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/RadioGroup;->getChildCount()I

    move-result v1

    if-ge v0, v1, :cond_4

    .line 226
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$3;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$1200(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/widget/RadioGroup;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/widget/RadioGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1, p2}, Landroid/view/View;->setEnabled(Z)V

    .line 225
    add-int/lit8 v0, v0, 0x1

    goto :goto_2

    .end local v0    # "i":I
    :cond_4
    goto :goto_6

    .line 228
    :cond_5
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$3;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$900(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)[Landroid/widget/CheckBox;

    move-result-object v0

    const/4 v1, 0x3

    aget-object v0, v0, v1

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_8

    .line 229
    const/4 v0, 0x0

    .restart local v0    # "i":I
    :goto_3
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$3;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$1300(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/widget/RadioGroup;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/RadioGroup;->getChildCount()I

    move-result v1

    if-ge v0, v1, :cond_6

    .line 230
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$3;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$1300(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/widget/RadioGroup;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/widget/RadioGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1, p2}, Landroid/view/View;->setEnabled(Z)V

    .line 229
    add-int/lit8 v0, v0, 0x1

    goto :goto_3

    .line 232
    .end local v0    # "i":I
    :cond_6
    const/4 v0, 0x0

    .restart local v0    # "i":I
    :goto_4
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$3;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$1400(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/widget/RadioGroup;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/RadioGroup;->getChildCount()I

    move-result v1

    if-ge v0, v1, :cond_7

    .line 233
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$3;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$1400(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/widget/RadioGroup;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/widget/RadioGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1, p2}, Landroid/view/View;->setEnabled(Z)V

    .line 232
    add-int/lit8 v0, v0, 0x1

    goto :goto_4

    .line 235
    .end local v0    # "i":I
    :cond_7
    const/4 v0, 0x0

    .restart local v0    # "i":I
    :goto_5
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$3;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$1500(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/widget/RadioGroup;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/RadioGroup;->getChildCount()I

    move-result v1

    if-ge v0, v1, :cond_8

    .line 236
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$3;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$1500(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/widget/RadioGroup;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/widget/RadioGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1, p2}, Landroid/view/View;->setEnabled(Z)V

    .line 235
    add-int/lit8 v0, v0, 0x1

    goto :goto_5

    .line 239
    .end local v0    # "i":I
    :cond_8
    :goto_6
    return-void
.end method
