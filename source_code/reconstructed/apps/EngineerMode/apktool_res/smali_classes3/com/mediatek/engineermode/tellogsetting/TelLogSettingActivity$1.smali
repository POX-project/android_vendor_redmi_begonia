.class Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$1;
.super Ljava/lang/Object;
.source "TelLogSettingActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->onCreate(Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;

    .line 74
    iput-object p1, p0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$1;->this$0:Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 4
    .param p1, "v"    # Landroid/view/View;

    .line 77
    iget-object v0, p0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$1;->this$0:Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->showDialog(I)V

    .line 78
    new-instance v0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$FunctionTask;

    iget-object v2, p0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$1;->this$0:Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;

    const/4 v3, 0x0

    invoke-direct {v0, v2, v3}, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$FunctionTask;-><init>(Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$1;)V

    .line 79
    .local v0, "functionTask":Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$FunctionTask;
    new-array v1, v1, [Ljava/lang/Void;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$FunctionTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 81
    return-void
.end method
