.class Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent$1;
.super Ljava/lang/Object;
.source "MDMComponent.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->setBtnAttribute(Landroid/widget/Button;Ljava/lang/String;III)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;

    .line 1599
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2
    .param p1, "v"    # Landroid/view/View;

    .line 1603
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;

    invoke-virtual {p1}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->access$000(Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;I)V

    .line 1604
    return-void
.end method
