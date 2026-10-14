.class Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$2;
.super Ljava/lang/Object;
.source "RfDesenseTxTestBase.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemSelectedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->onCreate(Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;

    .line 148
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$2;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onItemSelected(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 1
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

    .line 150
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$2;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;

    iget v0, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mCurrentBand:I

    if-eq p3, v0, :cond_0

    .line 151
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$2;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;

    iput p3, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mCurrentBand:I

    .line 152
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$2;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->updateLimits()V

    .line 153
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$2;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->setDefaultValues()V

    .line 155
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

    .line 159
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    return-void
.end method
