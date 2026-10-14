.class Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity$2;
.super Ljava/lang/Object;
.source "LteCAConfigActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;->onCreate(Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;

    .line 134
    iput-object p1, p0, Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity$2;->this$0:Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 3
    .param p1, "v"    # Landroid/view/View;

    .line 137
    iget-object v0, p0, Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity$2;->this$0:Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;->access$200(Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;)Landroid/widget/RadioButton;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    const-string v1, "LteCAConfigActivity"

    if-eqz v0, :cond_0

    .line 138
    iget-object v0, p0, Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity$2;->this$0:Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;

    const-string v2, "1"

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;->access$400(Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;Ljava/lang/String;)V

    .line 139
    const-string v0, "Set LTE CA Status : on"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 140
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity$2;->this$0:Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;->access$100(Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;)Landroid/widget/RadioButton;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 141
    iget-object v0, p0, Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity$2;->this$0:Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;

    const-string v2, "0"

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;->access$400(Lcom/mediatek/engineermode/ltecaconfigure/LteCAConfigActivity;Ljava/lang/String;)V

    .line 142
    const-string v0, "Set LTE CA Status : off"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 144
    :cond_1
    :goto_0
    return-void
.end method
