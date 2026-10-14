.class Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$6;
.super Ljava/lang/Object;
.source "XCAPConfigFragment.java"

# interfaces
.implements Landroid/view/View$OnTouchListener;


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

    .line 616
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$6;->this$0:Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onTouch(Landroid/view/View;Landroid/view/MotionEvent;)Z
    .locals 3
    .param p1, "v"    # Landroid/view/View;
    .param p2, "event"    # Landroid/view/MotionEvent;

    .line 619
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    const/4 v1, 0x0

    const v2, 0x7f060886

    if-ne v0, v2, :cond_1

    .line 620
    invoke-virtual {p1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    const/4 v2, 0x1

    invoke-interface {v0, v2}, Landroid/view/ViewParent;->requestDisallowInterceptTouchEvent(Z)V

    .line 621
    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result v0

    and-int/lit16 v0, v0, 0xff

    if-eq v0, v2, :cond_0

    goto :goto_0

    .line 623
    :cond_0
    invoke-virtual {p1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    invoke-interface {v0, v1}, Landroid/view/ViewParent;->requestDisallowInterceptTouchEvent(Z)V

    .line 627
    :cond_1
    :goto_0
    return v1
.end method
