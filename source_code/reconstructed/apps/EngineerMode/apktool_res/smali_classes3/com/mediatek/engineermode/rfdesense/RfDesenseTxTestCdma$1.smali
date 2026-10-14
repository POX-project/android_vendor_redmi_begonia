.class Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma$1;
.super Ljava/lang/Object;
.source "RfDesenseTxTestCdma.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->onCreate(Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;

.field final synthetic val$bandValues:[Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;[Ljava/lang/String;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;

    .line 121
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;

    iput-object p2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma$1;->val$bandValues:[Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 11
    .param p1, "v"    # Landroid/view/View;

    .line 124
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    const v1, 0x7f06025a

    if-eq v0, v1, :cond_0

    goto/16 :goto_1

    .line 126
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->checkValues()Z

    move-result v0

    if-nez v0, :cond_1

    .line 127
    goto/16 :goto_1

    .line 129
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma$1;->val$bandValues:[Ljava/lang/String;

    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;)Landroid/widget/Spinner;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    aget-object v0, v0, v1

    .line 130
    .local v0, "band":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->access$100(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;)Landroid/widget/RadioGroup;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/RadioGroup;->getCheckedRadioButtonId()I

    move-result v1

    int-to-long v1, v1

    .line 131
    .local v1, "modulation":J
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;

    invoke-static {v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;)Landroid/widget/EditText;

    move-result-object v3

    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    .line 132
    .local v3, "channel":Ljava/lang/String;
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;

    invoke-static {v4}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->access$300(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;)Landroid/widget/EditText;

    move-result-object v4

    invoke-virtual {v4}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    .line 133
    .local v4, "power":Ljava/lang/String;
    const-string v5, ""

    .line 134
    .local v5, "command":Ljava/lang/String;
    const/4 v6, 0x0

    .line 135
    .local v6, "tx_power":I
    if-eqz v4, :cond_2

    const-string v7, ""

    invoke-virtual {v7, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-nez v7, :cond_2

    .line 136
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v7

    invoke-virtual {v7}, Ljava/lang/Integer;->intValue()I

    move-result v7

    add-int/lit8 v6, v7, 0x3c

    .line 139
    :cond_2
    invoke-static {}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->access$400()I

    move-result v7

    const/4 v8, 0x1

    const-string v9, ","

    if-ne v7, v8, :cond_4

    .line 140
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "AT+ECRFTX=1,"

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 143
    const-wide/32 v9, 0x7f0605a5

    cmp-long v9, v1, v9

    if-nez v9, :cond_3

    const/4 v8, 0x0

    :cond_3
    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    goto :goto_0

    .line 145
    :cond_4
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "AT+ERFTX=13,4,"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 149
    :goto_0
    iget-object v7, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;

    invoke-static {v7, v5}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->access$500(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;Ljava/lang/String;)V

    .line 150
    iget-object v7, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;

    const-string v8, "Set param suecceed!"

    invoke-static {v7, v8}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->access$600(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;Ljava/lang/String;)V

    .line 151
    nop

    .line 155
    .end local v0    # "band":Ljava/lang/String;
    .end local v1    # "modulation":J
    .end local v3    # "channel":Ljava/lang/String;
    .end local v4    # "power":Ljava/lang/String;
    .end local v5    # "command":Ljava/lang/String;
    .end local v6    # "tx_power":I
    :goto_1
    return-void
.end method
