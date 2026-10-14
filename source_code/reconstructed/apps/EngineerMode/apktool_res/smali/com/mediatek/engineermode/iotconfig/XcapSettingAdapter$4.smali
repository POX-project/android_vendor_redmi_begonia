.class Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$4;
.super Ljava/lang/Object;
.source "XCAPConfigFragment.java"

# interfaces
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;

    .line 581
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$4;->this$0:Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 3
    .param p1, "buttonView"    # Landroid/widget/CompoundButton;
    .param p2, "isChecked"    # Z

    .line 586
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getTag()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    .line 587
    .local v0, "getPosition":I
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$4;->this$0:Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;

    invoke-static {v1}, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->access$000(Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;)Ljava/util/List;

    move-result-object v1

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    .line 588
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->isChecked()Z

    move-result v2

    .line 587
    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->setSelected(Z)V

    .line 589
    return-void
.end method
