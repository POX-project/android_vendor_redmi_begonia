.class Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR$1;
.super Ljava/lang/Object;
.source "RfDesenseTxTestNR.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemSelectedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->onCreate(Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;

    .line 178
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onItemSelected(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 2
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

    .line 180
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;

    invoke-static {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;)I

    move-result v0

    if-eq p3, v0, :cond_0

    .line 181
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;

    invoke-static {v0, p3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->access$002(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;I)I

    .line 182
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;

    invoke-static {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;)Landroid/widget/EditText;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->access$100(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;)Ljava/lang/Long;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 184
    :cond_0
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

    .line 187
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    return-void
.end method
