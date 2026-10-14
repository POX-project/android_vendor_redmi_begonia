.class Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$2;
.super Ljava/lang/Object;
.source "WfcConfigFragment.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemSelectedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->initView(Landroid/view/View;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;

    .line 152
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$2;->this$0:Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onItemSelected(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 2
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

    .line 156
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    if-eqz p3, :cond_2

    const/4 v0, 0x1

    if-eq p3, v0, :cond_1

    const/4 v0, 0x2

    if-eq p3, v0, :cond_0

    goto :goto_0

    .line 158
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$2;->this$0:Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->updateUI(I)V

    .line 159
    goto :goto_0

    .line 161
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$2;->this$0:Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->updateUI(I)V

    .line 162
    goto :goto_0

    .line 164
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$2;->this$0:Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->updateUI(I)V

    .line 165
    nop

    .line 169
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

    .line 173
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    return-void
.end method
