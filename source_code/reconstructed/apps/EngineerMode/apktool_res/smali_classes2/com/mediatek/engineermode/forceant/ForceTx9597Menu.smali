.class public Lcom/mediatek/engineermode/forceant/ForceTx9597Menu;
.super Landroid/app/TabActivity;
.source "ForceTx9597Menu.java"


# static fields
.field public static final TAG:Ljava/lang/String; = "ForceTx/9597Menu"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 49
    invoke-direct {p0}, Landroid/app/TabActivity;-><init>()V

    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 6
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 54
    invoke-super {p0, p1}, Landroid/app/TabActivity;->onCreate(Landroid/os/Bundle;)V

    .line 55
    const/4 v0, 0x0

    .line 56
    .local v0, "classe_name":Ljava/lang/Class;
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is95Modem()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 57
    const-class v0, Lcom/mediatek/engineermode/forceant/ForceTx95;

    .line 58
    const v1, 0x7f0a0320

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx9597Menu;->setTitle(I)V

    goto :goto_0

    .line 61
    :cond_0
    const-class v0, Lcom/mediatek/engineermode/forceant/ForceTx97;

    .line 62
    const v1, 0x7f0a0321

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx9597Menu;->setTitle(I)V

    .line 65
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/forceant/ForceTx9597Menu;->getTabHost()Landroid/widget/TabHost;

    move-result-object v1

    .line 66
    .local v1, "tabHost":Landroid/widget/TabHost;
    nop

    .line 67
    const v2, 0x7f0a0323

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/forceant/ForceTx9597Menu;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Landroid/widget/TabHost;->newTabSpec(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;

    move-result-object v3

    .line 68
    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/forceant/ForceTx9597Menu;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2}, Landroid/widget/TabHost$TabSpec;->setIndicator(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;

    move-result-object v2

    new-instance v3, Landroid/content/Intent;

    invoke-direct {v3, p0, v0}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 69
    const-string v4, "MODE"

    const-string v5, "by_states"

    invoke-virtual {v3, v4, v5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/widget/TabHost$TabSpec;->setContent(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;

    move-result-object v2

    .line 66
    invoke-virtual {v1, v2}, Landroid/widget/TabHost;->addTab(Landroid/widget/TabHost$TabSpec;)V

    .line 72
    nop

    .line 73
    const v2, 0x7f0a0322

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/forceant/ForceTx9597Menu;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Landroid/widget/TabHost;->newTabSpec(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;

    move-result-object v3

    .line 74
    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/forceant/ForceTx9597Menu;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2}, Landroid/widget/TabHost$TabSpec;->setIndicator(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;

    move-result-object v2

    new-instance v3, Landroid/content/Intent;

    invoke-direct {v3, p0, v0}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 75
    const-string v5, "by_index"

    invoke-virtual {v3, v4, v5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/widget/TabHost$TabSpec;->setContent(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;

    move-result-object v2

    .line 72
    invoke-virtual {v1, v2}, Landroid/widget/TabHost;->addTab(Landroid/widget/TabHost$TabSpec;)V

    .line 77
    return-void
.end method
