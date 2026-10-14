.class Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$3;
.super Ljava/lang/Object;
.source "XCAPConfigFragment.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->showConfirmDialog(Landroid/view/View;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;

.field final synthetic val$getPosition:I


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;I)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;

    .line 543
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$3;->this$0:Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;

    iput p2, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$3;->val$getPosition:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 2
    .param p1, "dialog"    # Landroid/content/DialogInterface;
    .param p2, "id"    # I

    .line 545
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$3;->this$0:Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;

    invoke-static {v0}, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->access$000(Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;)Ljava/util/List;

    move-result-object v0

    iget v1, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$3;->val$getPosition:I

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->setConfiged(Z)V

    .line 546
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$3;->this$0:Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;

    invoke-static {v0}, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->access$000(Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;)Ljava/util/List;

    move-result-object v0

    iget v1, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$3;->val$getPosition:I

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->setSelected(Z)V

    .line 547
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$3;->this$0:Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->notifyDataSetChanged()V

    .line 548
    return-void
.end method
