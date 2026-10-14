.class public Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$DoSystemPropTask;
.super Landroid/os/AsyncTask;
.source "EntitlementConfigActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4
    name = "DoSystemPropTask"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/os/AsyncTask<",
        "Ljava/lang/String;",
        "Ljava/lang/String;",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;


# direct methods
.method protected constructor <init>(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;

    .line 80
    iput-object p1, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$DoSystemPropTask;->this$0:Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    return-void
.end method


# virtual methods
.method protected bridge synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 80
    check-cast p1, [Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$DoSystemPropTask;->doInBackground([Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method protected varargs doInBackground([Ljava/lang/String;)Ljava/lang/String;
    .locals 7
    .param p1, "params"    # [Ljava/lang/String;

    .line 84
    const/4 v0, 0x0

    aget-object v1, p1, v0

    const-string v2, "set"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v2, "1"

    const-string v3, "0"

    const-string v4, "persist.vendor.entitlement_enabled"

    const-string v5, "persist.vendor.entitlement.sesurl"

    if-eqz v1, :cond_2

    .line 85
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[Set]entitlementServer: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$DoSystemPropTask;->this$0:Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;

    .line 86
    invoke-static {v1}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->access$100(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ",entitlementEnable:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$DoSystemPropTask;->this$0:Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->access$000(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;)Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 85
    const-string v1, "EM/WifiCallingConfigActivity"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 87
    iget-object v0, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$DoSystemPropTask;->this$0:Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->access$100(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v5, v0}, Lcom/mediatek/engineermode/EmUtils;->systemPropertySet(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    .line 88
    .local v0, "set1":Z
    nop

    .line 89
    iget-object v1, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$DoSystemPropTask;->this$0:Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->access$000(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    move-object v2, v3

    .line 88
    :goto_0
    invoke-static {v4, v2}, Lcom/mediatek/engineermode/EmUtils;->systemPropertySet(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v1

    .line 90
    .local v1, "set2":Z
    if-eqz v0, :cond_1

    if-eqz v1, :cond_1

    .line 91
    const-string v2, "Set succeed!"

    return-object v2

    .line 93
    :cond_1
    const-string v2, "Set failed!"

    return-object v2

    .line 94
    .end local v0    # "set1":Z
    .end local v1    # "set2":Z
    :cond_2
    aget-object v0, p1, v0

    const-string v1, "get"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 95
    iget-object v0, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$DoSystemPropTask;->this$0:Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;

    const-string v6, ""

    invoke-static {v5, v6}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v0, v5}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->access$102(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;Ljava/lang/String;)Ljava/lang/String;

    .line 96
    iget-object v0, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$DoSystemPropTask;->this$0:Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;

    .line 97
    nop

    .line 96
    invoke-static {v4, v3}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 97
    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    .line 96
    invoke-static {v0, v2}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->access$002(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;Z)Z

    .line 98
    return-object v1

    .line 100
    :cond_3
    const-string v0, "UnKnown"

    return-object v0
.end method

.method protected bridge synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 0

    .line 80
    check-cast p1, Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$DoSystemPropTask;->onPostExecute(Ljava/lang/String;)V

    return-void
.end method

.method protected onPostExecute(Ljava/lang/String;)V
    .locals 2
    .param p1, "result"    # Ljava/lang/String;

    .line 105
    const-string v0, "get"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 106
    iget-object v0, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$DoSystemPropTask;->this$0:Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->access$300(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;)Landroid/widget/RadioGroup;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$DoSystemPropTask;->this$0:Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->access$000(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 107
    const v1, 0x7f060385

    goto :goto_0

    :cond_0
    const v1, 0x7f060384

    .line 106
    :goto_0
    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    .line 108
    iget-object v0, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$DoSystemPropTask;->this$0:Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->access$200(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;)Landroid/widget/EditText;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$DoSystemPropTask;->this$0:Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->access$100(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 109
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[Get]EntitlementServer: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$DoSystemPropTask;->this$0:Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->access$100(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ",entitlementEnable:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$DoSystemPropTask;->this$0:Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;

    .line 110
    invoke-static {v1}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->access$000(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;)Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 109
    const-string v1, "EM/WifiCallingConfigActivity"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 112
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$DoSystemPropTask;->this$0:Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x1

    invoke-static {v0, p1, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 113
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 115
    :goto_1
    return-void
.end method
