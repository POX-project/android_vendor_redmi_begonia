.class Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;
.super Landroid/os/AsyncTask;
.source "DiagnosticMonitoringSettingActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "ApmServiceSettingTask"
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
.field private mOperationStart:Z

.field final synthetic this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;)V
    .locals 0

    .line 251
    iput-object p1, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;->this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    return-void
.end method

.method public constructor <init>(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;Z)V
    .locals 0
    .param p2, "bStart"    # Z

    .line 253
    iput-object p1, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;->this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    .line 254
    iput-boolean p2, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;->mOperationStart:Z

    .line 255
    return-void
.end method


# virtual methods
.method protected varargs doInBackground([Ljava/lang/Void;)Ljava/lang/Boolean;
    .locals 8
    .param p1, "params"    # [Ljava/lang/Void;

    .line 259
    const/4 v0, 0x0

    .line 260
    .local v0, "success":Z
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    .line 261
    .local v1, "intent":Landroid/content/Intent;
    invoke-static {}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->access$700()Landroid/content/ComponentName;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    .line 264
    iget-boolean v2, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;->mOperationStart:Z

    const-wide/16 v3, 0x3e8

    const/4 v5, 0x5

    const-string v6, "DM-Setting"

    if-eqz v2, :cond_2

    .line 265
    const-string v2, "Start APM service"

    invoke-static {v6, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 266
    const-string v2, "com.mediatek.apmonitor.ACTION_START_APM_SERVICE"

    invoke-virtual {v1, v2}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 267
    iget-object v2, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;->this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    invoke-virtual {v2, v1}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->startForegroundService(Landroid/content/Intent;)Landroid/content/ComponentName;

    .line 268
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    if-ge v2, v5, :cond_1

    .line 269
    invoke-static {v3, v4}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->access$800(J)V

    .line 270
    iget-object v7, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;->this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    invoke-static {v7}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->access$200(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;)Z

    move-result v7

    if-eqz v7, :cond_0

    .line 271
    const/4 v0, 0x1

    .line 272
    const-string v3, "Start APM service successfully!"

    invoke-static {v6, v3}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 273
    goto :goto_1

    .line 275
    :cond_0
    const-string v7, "Start APM service failed!"

    invoke-static {v6, v7}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 268
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .end local v2    # "i":I
    :cond_1
    :goto_1
    goto :goto_3

    .line 279
    :cond_2
    const-string v2, "Stop APM service"

    invoke-static {v6, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 280
    const-string v2, "com.mediatek.apmonitor.ACTION_STOP_APM_SERVICE"

    invoke-virtual {v1, v2}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 281
    iget-object v2, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;->this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    invoke-virtual {v2, v1}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->startForegroundService(Landroid/content/Intent;)Landroid/content/ComponentName;

    .line 282
    const/4 v2, 0x0

    .restart local v2    # "i":I
    :goto_2
    if-ge v2, v5, :cond_4

    .line 283
    invoke-static {v3, v4}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->access$800(J)V

    .line 284
    iget-object v7, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;->this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    invoke-static {v7}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->access$200(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;)Z

    move-result v7

    if-nez v7, :cond_3

    .line 285
    const/4 v0, 0x1

    .line 286
    const-string v3, "Stop APM service successfully!"

    invoke-static {v6, v3}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 287
    goto :goto_3

    .line 289
    :cond_3
    const-string v7, "Stop APM service failed!"

    invoke-static {v6, v7}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 282
    add-int/lit8 v2, v2, 0x1

    goto :goto_2

    .line 293
    .end local v2    # "i":I
    :cond_4
    :goto_3
    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    return-object v2
.end method

.method protected bridge synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 248
    check-cast p1, [Ljava/lang/Void;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;->doInBackground([Ljava/lang/Void;)Ljava/lang/Boolean;

    move-result-object p1

    return-object p1
.end method

.method protected onPostExecute(Ljava/lang/Boolean;)V
    .locals 2
    .param p1, "result"    # Ljava/lang/Boolean;

    .line 298
    iget-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;->this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->access$500(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;)V

    .line 299
    iget-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;->this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->removeDialog(I)V

    .line 300
    iget-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;->this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->access$600(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 301
    new-instance v0, Landroid/app/AlertDialog$Builder;

    iget-object v1, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;->this$0:Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    invoke-direct {v0, v1}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 303
    .local v0, "builder":Landroid/app/AlertDialog$Builder;
    nop

    .line 304
    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_0

    const v1, 0x7f0a05b4

    goto :goto_0

    :cond_0
    const v1, 0x7f0a05ad

    .line 303
    :goto_0
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 304
    invoke-virtual {v1}, Landroid/app/AlertDialog$Builder;->show()Landroid/app/AlertDialog;

    .line 306
    .end local v0    # "builder":Landroid/app/AlertDialog$Builder;
    :cond_1
    return-void
.end method

.method protected bridge synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 0

    .line 248
    check-cast p1, Ljava/lang/Boolean;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;->onPostExecute(Ljava/lang/Boolean;)V

    return-void
.end method
