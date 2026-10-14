.class Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$1;
.super Ljava/lang/Object;
.source "XCAPConfigFragment.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;
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

    .line 522
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$1;->this$0:Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2
    .param p1, "v"    # Landroid/view/View;

    .line 526
    invoke-virtual {p1}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    .line 527
    .local v0, "getPosition":I
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$1;->this$0:Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;

    invoke-virtual {v1, p1, v0}, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->showConfirmDialog(Landroid/view/View;I)V

    .line 528
    return-void
.end method
