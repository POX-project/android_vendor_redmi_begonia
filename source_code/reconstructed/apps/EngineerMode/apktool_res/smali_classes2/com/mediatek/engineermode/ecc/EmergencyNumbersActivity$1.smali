.class Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity$1;
.super Ljava/lang/Object;
.source "EmergencyNumbersActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;

    .line 87
    iput-object p1, p0, Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity$1;->this$0:Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 6
    .param p1, "v"    # Landroid/view/View;

    .line 89
    const-string v0, ""

    .line 90
    .local v0, "eccNum":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity$1;->this$0:Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;->access$000(Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;)Landroid/widget/EditText;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 91
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    const/4 v2, 0x0

    const-string v3, "EmergencyNumbersActivity"

    const/16 v4, 0x5b

    if-le v1, v4, :cond_0

    .line 92
    iget-object v1, p0, Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity$1;->this$0:Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    const-string v4, "Error : Max input allowed91"

    invoke-static {v1, v4, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    .line 93
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 94
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "set persist.vendor.em.hidl.testecc failed, exceeded the maximum : "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 98
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity$1;->this$0:Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "setting ecc: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v4, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    .line 99
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 101
    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    const-string v2, "persist.vendor.em.hidl.testecc"

    invoke-interface {v1, v2, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 105
    goto :goto_0

    .line 102
    :catch_0
    move-exception v1

    .line 103
    .local v1, "e":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 104
    const-string v2, "set property failed ..."

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 106
    .end local v1    # "e":Ljava/lang/Exception;
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "set persist.vendor.em.hidl.testecc : "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 108
    :goto_1
    return-void
.end method
