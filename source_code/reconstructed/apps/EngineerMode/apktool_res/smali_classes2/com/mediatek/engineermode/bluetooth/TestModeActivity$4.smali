.class Lcom/mediatek/engineermode/bluetooth/TestModeActivity$4;
.super Ljava/lang/Object;
.source "TestModeActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->initComponent()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    .line 161
    iput-object p1, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$4;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2
    .param p1, "v"    # Landroid/view/View;

    .line 167
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$4;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->showWaitDlg()V

    .line 168
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$4;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->access$500(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;)Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;

    move-result-object v0

    const/16 v1, 0xc

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;->sendEmptyMessage(I)Z

    .line 169
    return-void
.end method
