.class Lcom/mediatek/engineermode/bluetooth/TestModeActivity$2;
.super Ljava/lang/Object;
.source "TestModeActivity.java"

# interfaces
.implements Landroid/widget/RadioGroup$OnCheckedChangeListener;


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

    .line 125
    iput-object p1, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$2;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/RadioGroup;I)V
    .locals 2
    .param p1, "group"    # Landroid/widget/RadioGroup;
    .param p2, "checkedId"    # I

    .line 130
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$2;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->access$200(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;)Landroid/view/View;

    move-result-object v0

    const v1, 0x7f060238

    if-ne p2, v1, :cond_0

    .line 131
    const/4 v1, 0x0

    goto :goto_0

    :cond_0
    const/16 v1, 0x8

    .line 130
    :goto_0
    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    .line 132
    return-void
.end method
