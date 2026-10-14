.class Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$3;
.super Ljava/lang/Object;
.source "ApnConfigFragment.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


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

    .line 127
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$3;->this$0:Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2
    .param p1, "view"    # Landroid/view/View;

    .line 129
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$3;->this$0:Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;

    invoke-static {v0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->access$100(Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;)Landroid/widget/EditText;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->hideInputMethod(Landroid/view/View;)V

    .line 130
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$3;->this$0:Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->queryAndShowApn()V

    .line 131
    return-void
.end method
