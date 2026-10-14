.class Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$3;
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

    .line 128
    iput-object p1, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$3;->this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 4
    .param p1, "v"    # Landroid/view/View;

    .line 131
    iget-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$3;->this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->showDialog(I)V

    .line 132
    iget-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$3;->this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->access$200(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 133
    new-instance v0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;

    iget-object v2, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$3;->this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    invoke-direct {v0, v2, v1}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;-><init>(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;Z)V

    .line 134
    .local v0, "task":Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;
    new-array v1, v1, [Ljava/lang/Void;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 135
    .end local v0    # "task":Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;
    goto :goto_0

    .line 136
    :cond_0
    new-instance v0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;

    iget-object v2, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$3;->this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    const/4 v3, 0x1

    invoke-direct {v0, v2, v3}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;-><init>(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;Z)V

    .line 137
    .restart local v0    # "task":Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;
    new-array v1, v1, [Ljava/lang/Void;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 139
    .end local v0    # "task":Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;
    :goto_0
    return-void
.end method
