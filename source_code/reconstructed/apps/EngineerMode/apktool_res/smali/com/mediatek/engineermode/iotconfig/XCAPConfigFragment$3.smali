.class Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$3;
.super Ljava/lang/Object;
.source "XCAPConfigFragment.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->onCreateView(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;

    .line 170
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$3;->this$0:Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 3
    .param p1, "v"    # Landroid/view/View;

    .line 175
    new-instance v0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$LoadModelThread;

    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$3;->this$0:Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;

    const/4 v2, 0x2

    invoke-direct {v0, v1, v2}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$LoadModelThread;-><init>(Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;I)V

    invoke-virtual {v0}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$LoadModelThread;->start()V

    .line 177
    return-void
.end method
