.class Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$1;
.super Ljava/lang/Object;
.source "DiagnosticMonitoringSettingActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->onCreate(Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    .line 111
    iput-object p1, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$1;->this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 4
    .param p1, "v"    # Landroid/view/View;

    .line 114
    iget-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$1;->this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->showDialog(I)V

    .line 115
    new-instance v0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$LogSettingTask;

    iget-object v2, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$1;->this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    const/4 v3, 0x0

    invoke-direct {v0, v2, v3}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$LogSettingTask;-><init>(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$1;)V

    .line 116
    .local v0, "task":Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$LogSettingTask;
    new-array v1, v1, [Ljava/lang/Void;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$LogSettingTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 117
    return-void
.end method
