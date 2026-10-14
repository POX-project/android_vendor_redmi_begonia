.class Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$4;
.super Ljava/lang/Object;
.source "ApnConfigFragment.java"

# interfaces
.implements Landroid/widget/TextView$OnEditorActionListener;


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

    .line 133
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$4;->this$0:Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onEditorAction(Landroid/widget/TextView;ILandroid/view/KeyEvent;)Z
    .locals 2
    .param p1, "v"    # Landroid/widget/TextView;
    .param p2, "actionId"    # I
    .param p3, "event"    # Landroid/view/KeyEvent;

    .line 139
    if-eqz p3, :cond_0

    .line 140
    invoke-virtual {p3}, Landroid/view/KeyEvent;->getKeyCode()I

    move-result v0

    const/16 v1, 0x42

    if-eq v0, v1, :cond_1

    :cond_0
    const/4 v0, 0x6

    if-ne p2, v0, :cond_2

    .line 142
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$4;->this$0:Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;

    invoke-static {v0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->access$100(Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;)Landroid/widget/EditText;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->hideInputMethod(Landroid/view/View;)V

    .line 144
    :cond_2
    const/4 v0, 0x0

    return v0
.end method
