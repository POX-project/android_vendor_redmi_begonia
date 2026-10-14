.class Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$5;
.super Ljava/lang/Object;
.source "XCAPConfigFragment.java"

# interfaces
.implements Landroid/text/TextWatcher;


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

.field final synthetic val$position:I


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;I)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;

    .line 591
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$5;->this$0:Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;

    iput p2, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$5;->val$position:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public afterTextChanged(Landroid/text/Editable;)V
    .locals 2
    .param p1, "s"    # Landroid/text/Editable;

    .line 610
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$5;->this$0:Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;

    invoke-static {v0}, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->access$000(Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;)Ljava/util/List;

    move-result-object v0

    iget v1, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$5;->val$position:I

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->setValue(Ljava/lang/String;)V

    .line 611
    return-void
.end method

.method public beforeTextChanged(Ljava/lang/CharSequence;III)V
    .locals 0
    .param p1, "s"    # Ljava/lang/CharSequence;
    .param p2, "start"    # I
    .param p3, "count"    # I
    .param p4, "after"    # I

    .line 605
    return-void
.end method

.method public onTextChanged(Ljava/lang/CharSequence;III)V
    .locals 0
    .param p1, "s"    # Ljava/lang/CharSequence;
    .param p2, "start"    # I
    .param p3, "before"    # I
    .param p4, "count"    # I

    .line 598
    return-void
.end method
