.class Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask$1;
.super Ljava/lang/Object;
.source "McfConfigActivity.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemSelectedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->onPostExecute(Ljava/lang/Integer;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;)V
    .locals 0
    .param p1, "this$1"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;

    .line 1329
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask$1;->this$1:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;

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

    .line 1333
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask$1;->this$1:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;

    iget-object v0, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    add-int/lit8 v1, p3, 0xc

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$4102(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;I)I

    .line 1334
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask$1;->this$1:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;

    iget-object v0, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$4100(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)I

    move-result v0

    const/16 v1, 0xc

    if-ne v0, v1, :cond_0

    .line 1335
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask$1;->this$1:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;

    iget-object v0, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$4300(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/EditText;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setVisibility(I)V

    goto :goto_0

    .line 1337
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask$1;->this$1:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;

    iget-object v0, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$4300(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/EditText;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setVisibility(I)V

    .line 1339
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

    .line 1344
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    return-void
.end method
