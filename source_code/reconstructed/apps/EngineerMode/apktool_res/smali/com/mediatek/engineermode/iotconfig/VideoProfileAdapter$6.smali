.class Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$6;
.super Ljava/lang/Object;
.source "VilteConfigFragment.java"

# interfaces
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    .line 813
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$6;->this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 3
    .param p1, "buttonView"    # Landroid/widget/CompoundButton;
    .param p2, "isChecked"    # Z

    .line 818
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getTag()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    .line 819
    .local v0, "getPosition":I
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$6;->this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    invoke-static {v1}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->access$000(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;)Ljava/util/ArrayList;

    move-result-object v1

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    .line 820
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->isChecked()Z

    move-result v2

    .line 819
    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->setSelected(Z)V

    .line 821
    return-void
.end method
