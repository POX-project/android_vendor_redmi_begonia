.class Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$FunctionTask;
.super Landroid/os/AsyncTask;
.source "TelLogSettingActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "FunctionTask"
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
.field final synthetic this$0:Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;)V
    .locals 0

    .line 100
    iput-object p1, p0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$FunctionTask;->this$0:Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;
    .param p2, "x1"    # Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$1;

    .line 100
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$FunctionTask;-><init>(Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;)V

    return-void
.end method


# virtual methods
.method protected varargs doInBackground([Ljava/lang/Void;)Ljava/lang/Boolean;
    .locals 4
    .param p1, "params"    # [Ljava/lang/Void;

    .line 103
    iget-object v0, p0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$FunctionTask;->this$0:Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->access$100(Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;)Lcom/mediatek/engineermode/tellogsetting/TelLogController;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$FunctionTask;->this$0:Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/tellogsetting/TelLogController;->getTelLogStatus(Landroid/content/Context;)Z

    move-result v0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    .line 104
    .local v0, "status":Ljava/lang/Boolean;
    iget-object v1, p0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$FunctionTask;->this$0:Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->access$100(Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;)Lcom/mediatek/engineermode/tellogsetting/TelLogController;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$FunctionTask;->this$0:Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v3

    xor-int/lit8 v3, v3, 0x1

    invoke-virtual {v1, v2, v3}, Lcom/mediatek/engineermode/tellogsetting/TelLogController;->switchTelLog(Landroid/content/Context;Z)Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    return-object v1
.end method

.method protected bridge synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 100
    check-cast p1, [Ljava/lang/Void;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$FunctionTask;->doInBackground([Ljava/lang/Void;)Ljava/lang/Boolean;

    move-result-object p1

    return-object p1
.end method

.method protected onPostExecute(Ljava/lang/Boolean;)V
    .locals 2
    .param p1, "result"    # Ljava/lang/Boolean;

    .line 109
    iget-object v0, p0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$FunctionTask;->this$0:Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->access$200(Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;)V

    .line 110
    iget-object v0, p0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$FunctionTask;->this$0:Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->removeDialog(I)V

    .line 111
    iget-object v0, p0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$FunctionTask;->this$0:Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->access$300(Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 112
    new-instance v0, Landroid/app/AlertDialog$Builder;

    iget-object v1, p0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$FunctionTask;->this$0:Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;

    invoke-direct {v0, v1}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 113
    .local v0, "builder":Landroid/app/AlertDialog$Builder;
    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_0

    const v1, 0x7f0a05b3

    goto :goto_0

    :cond_0
    const v1, 0x7f0a05ac

    :goto_0
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    invoke-virtual {v1}, Landroid/app/AlertDialog$Builder;->show()Landroid/app/AlertDialog;

    .line 116
    .end local v0    # "builder":Landroid/app/AlertDialog$Builder;
    :cond_1
    return-void
.end method

.method protected bridge synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 0

    .line 100
    check-cast p1, Ljava/lang/Boolean;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$FunctionTask;->onPostExecute(Ljava/lang/Boolean;)V

    return-void
.end method
