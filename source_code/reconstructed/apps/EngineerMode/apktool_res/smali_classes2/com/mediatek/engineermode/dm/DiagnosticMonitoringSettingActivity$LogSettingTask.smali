.class Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$LogSettingTask;
.super Landroid/os/AsyncTask;
.source "DiagnosticMonitoringSettingActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "LogSettingTask"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/os/AsyncTask<",
        "Ljava/lang/Void;",
        "Ljava/lang/Void;",
        "Ljava/lang/Boolean;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;)V
    .locals 0

    .line 208
    iput-object p1, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$LogSettingTask;->this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;
    .param p2, "x1"    # Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$1;

    .line 208
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$LogSettingTask;-><init>(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;)V

    return-void
.end method


# virtual methods
.method protected varargs doInBackground([Ljava/lang/Void;)Ljava/lang/Boolean;
    .locals 3
    .param p1, "params"    # [Ljava/lang/Void;

    .line 211
    iget-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$LogSettingTask;->this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->access$400(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;)Lcom/mediatek/engineermode/dm/DmSettingController;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/dm/DmSettingController;->isDmLogEnabled()Z

    move-result v0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    .line 212
    .local v0, "enabled":Ljava/lang/Boolean;
    iget-object v1, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$LogSettingTask;->this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->access$400(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;)Lcom/mediatek/engineermode/dm/DmSettingController;

    move-result-object v1

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    xor-int/lit8 v2, v2, 0x1

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/dm/DmSettingController;->enableDmLog(Z)Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    return-object v1
.end method

.method protected bridge synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 208
    check-cast p1, [Ljava/lang/Void;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$LogSettingTask;->doInBackground([Ljava/lang/Void;)Ljava/lang/Boolean;

    move-result-object p1

    return-object p1
.end method

.method protected onPostExecute(Ljava/lang/Boolean;)V
    .locals 2
    .param p1, "result"    # Ljava/lang/Boolean;

    .line 217
    iget-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$LogSettingTask;->this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->access$500(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;)V

    .line 218
    iget-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$LogSettingTask;->this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->removeDialog(I)V

    .line 219
    iget-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$LogSettingTask;->this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->access$600(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 220
    new-instance v0, Landroid/app/AlertDialog$Builder;

    iget-object v1, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$LogSettingTask;->this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    invoke-direct {v0, v1}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 222
    .local v0, "builder":Landroid/app/AlertDialog$Builder;
    nop

    .line 223
    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_0

    const v1, 0x7f0a05b4

    goto :goto_0

    :cond_0
    const v1, 0x7f0a05ad

    .line 222
    :goto_0
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 223
    invoke-virtual {v1}, Landroid/app/AlertDialog$Builder;->show()Landroid/app/AlertDialog;

    .line 225
    .end local v0    # "builder":Landroid/app/AlertDialog$Builder;
    :cond_1
    return-void
.end method

.method protected bridge synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 0

    .line 208
    check-cast p1, Ljava/lang/Boolean;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$LogSettingTask;->onPostExecute(Ljava/lang/Boolean;)V

    return-void
.end method
