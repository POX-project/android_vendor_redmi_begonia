.class Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$3;
.super Ljava/lang/Object;
.source "RfDesenseDigRFTest.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemSelectedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    .line 181
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$3;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onItemSelected(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 3
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

    .line 184
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$3;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-static {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$300(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)Landroid/widget/Spinner;

    move-result-object v0

    if-ne p1, v0, :cond_0

    .line 185
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$3;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->TestPeriodMap:Ljava/util/HashMap;

    invoke-virtual {p1}, Landroid/widget/AdapterView;->getSelectedItemPosition()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$402(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;I)I

    .line 187
    :cond_0
    return-void
.end method

.method public onNothingSelected(Landroid/widget/AdapterView;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;)V"
        }
    .end annotation

    .line 192
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$3;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$402(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;I)I

    .line 193
    return-void
.end method
