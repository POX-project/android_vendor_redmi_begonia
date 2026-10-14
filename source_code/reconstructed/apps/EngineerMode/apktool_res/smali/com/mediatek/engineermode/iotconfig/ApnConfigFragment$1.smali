.class Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$1;
.super Ljava/lang/Object;
.source "ApnConfigFragment.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemSelectedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->initView(Landroid/view/View;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;

    .line 94
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;

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

    .line 98
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    const/4 v0, 0x1

    if-ne p3, v0, :cond_0

    .line 99
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->access$002(Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;Z)Z

    .line 100
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;

    invoke-static {v0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->access$100(Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;)Landroid/widget/EditText;

    move-result-object v0

    const-string v1, ""

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    .line 102
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->access$002(Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;Z)Z

    .line 103
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;

    invoke-static {v0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->access$200(Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;)I

    move-result v0

    const/4 v1, -0x1

    if-eq v0, v1, :cond_1

    .line 104
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;

    invoke-static {v0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->access$100(Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;)Landroid/widget/EditText;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;

    invoke-static {v1}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->access$300(Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 107
    :cond_1
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

    .line 111
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    return-void
.end method
