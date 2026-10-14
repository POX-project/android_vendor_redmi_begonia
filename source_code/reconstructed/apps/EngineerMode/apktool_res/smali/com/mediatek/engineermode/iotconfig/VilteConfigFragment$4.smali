.class Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$4;
.super Ljava/lang/Object;
.source "VilteConfigFragment.java"

# interfaces
.implements Lcom/mediatek/engineermode/iotconfig/LinkedHorizontalScrollView$LinkScrollChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->combination(Landroid/widget/ListView;Landroid/widget/HorizontalScrollView;Lcom/mediatek/engineermode/iotconfig/LinkedHorizontalScrollView;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

.field final synthetic val$title:Landroid/widget/HorizontalScrollView;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;Landroid/widget/HorizontalScrollView;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    .line 473
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$4;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    iput-object p2, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$4;->val$title:Landroid/widget/HorizontalScrollView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onscroll(Lcom/mediatek/engineermode/iotconfig/LinkedHorizontalScrollView;IIII)V
    .locals 1
    .param p1, "view"    # Lcom/mediatek/engineermode/iotconfig/LinkedHorizontalScrollView;
    .param p2, "x"    # I
    .param p3, "y"    # I
    .param p4, "oldx"    # I
    .param p5, "oldy"    # I

    .line 477
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$4;->val$title:Landroid/widget/HorizontalScrollView;

    invoke-virtual {v0, p2, p3}, Landroid/widget/HorizontalScrollView;->scrollTo(II)V

    .line 478
    return-void
.end method
