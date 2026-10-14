.class public Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;
.super Landroid/app/Activity;
.source "SmartRatSwitchActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# static fields
.field public static final DEBUG_PROPERTY:Ljava/lang/String; = "persist.vendor.smartratswitch.debug"

.field private static final TAG:Ljava/lang/String; = "SmartRatSwitch"


# instance fields
.field private mFeatureDisableButton:Landroid/widget/Button;

.field private mFeatureEnableButton:Landroid/widget/Button;

.field private mFeatureStatus:I

.field private mLogDisableButton:Landroid/widget/Button;

.field private mLogEnableButton:Landroid/widget/Button;

.field private mLogStatus:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 52
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 60
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->mFeatureStatus:I

    .line 61
    iput v0, p0, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->mLogStatus:I

    return-void
.end method

.method private queryDebugLogStatus()V
    .locals 3

    .line 129
    invoke-virtual {p0}, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    const-string v1, "smart_rat_switch_debug"

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Landroid/provider/Settings$Global;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->mLogStatus:I

    .line 131
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "queryDebugLogStatus, The debug setting is : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->mLogStatus:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SmartRatSwitch"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 132
    return-void
.end method

.method private querySmartRatSwitchStatus()V
    .locals 3

    .line 109
    invoke-virtual {p0}, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    const-string v1, "smart_rat_switch_enabled"

    const/4 v2, 0x1

    invoke-static {v0, v1, v2}, Landroid/provider/Settings$Global;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->mFeatureStatus:I

    .line 111
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "querySmartRatSwitchStatus, The SmartRatSwitch setting is : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->mFeatureStatus:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SmartRatSwitch"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 112
    return-void
.end method

.method private updateDebugLogButtonStatus()V
    .locals 3

    .line 135
    iget v0, p0, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->mLogStatus:I

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-nez v0, :cond_0

    .line 136
    iget-object v0, p0, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->mLogEnableButton:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 137
    iget-object v0, p0, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->mLogDisableButton:Landroid/widget/Button;

    invoke-virtual {v0, v2}, Landroid/widget/Button;->setEnabled(Z)V

    goto :goto_0

    .line 139
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->mLogEnableButton:Landroid/widget/Button;

    invoke-virtual {v0, v2}, Landroid/widget/Button;->setEnabled(Z)V

    .line 140
    iget-object v0, p0, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->mLogDisableButton:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 142
    :goto_0
    return-void
.end method

.method private updateDebugLogStatus(I)V
    .locals 2
    .param p1, "isEnabled"    # I

    .line 125
    invoke-virtual {p0}, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    const-string v1, "smart_rat_switch_debug"

    invoke-static {v0, v1, p1}, Landroid/provider/Settings$Global;->putInt(Landroid/content/ContentResolver;Ljava/lang/String;I)Z

    .line 126
    return-void
.end method

.method private updateFeatureButtonStatus()V
    .locals 3

    .line 115
    iget v0, p0, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->mFeatureStatus:I

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-nez v0, :cond_0

    .line 116
    iget-object v0, p0, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->mFeatureEnableButton:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 117
    iget-object v0, p0, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->mFeatureDisableButton:Landroid/widget/Button;

    invoke-virtual {v0, v2}, Landroid/widget/Button;->setEnabled(Z)V

    goto :goto_0

    .line 119
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->mFeatureEnableButton:Landroid/widget/Button;

    invoke-virtual {v0, v2}, Landroid/widget/Button;->setEnabled(Z)V

    .line 120
    iget-object v0, p0, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->mFeatureDisableButton:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 122
    :goto_0
    return-void
.end method

.method private updateSmartRatSwitchStatus(I)V
    .locals 2
    .param p1, "isEnabled"    # I

    .line 105
    invoke-virtual {p0}, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    const-string v1, "smart_rat_switch_enabled"

    invoke-static {v0, v1, p1}, Landroid/provider/Settings$Global;->putInt(Landroid/content/ContentResolver;Ljava/lang/String;I)Z

    .line 106
    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 5
    .param p1, "arg0"    # Landroid/view/View;

    .line 83
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    const v3, 0x7f0606b5

    const v4, 0x7f0606b6

    if-eq v4, v0, :cond_4

    .line 84
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    if-ne v3, v0, :cond_0

    goto :goto_1

    .line 92
    :cond_0
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    const v3, 0x7f0606b7

    const v4, 0x7f0606b8

    if-eq v4, v0, :cond_1

    .line 93
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    if-ne v3, v0, :cond_7

    .line 94
    :cond_1
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    if-ne v4, v0, :cond_2

    .line 95
    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->updateDebugLogStatus(I)V

    goto :goto_0

    .line 96
    :cond_2
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    if-ne v3, v0, :cond_3

    .line 97
    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->updateDebugLogStatus(I)V

    .line 99
    :cond_3
    :goto_0
    invoke-direct {p0}, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->queryDebugLogStatus()V

    .line 100
    invoke-direct {p0}, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->updateDebugLogButtonStatus()V

    goto :goto_3

    .line 85
    :cond_4
    :goto_1
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    if-ne v4, v0, :cond_5

    .line 86
    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->updateSmartRatSwitchStatus(I)V

    goto :goto_2

    .line 87
    :cond_5
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    if-ne v3, v0, :cond_6

    .line 88
    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->updateSmartRatSwitchStatus(I)V

    .line 90
    :cond_6
    :goto_2
    invoke-direct {p0}, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->querySmartRatSwitchStatus()V

    .line 91
    invoke-direct {p0}, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->updateFeatureButtonStatus()V

    .line 102
    :cond_7
    :goto_3
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 1
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 65
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 66
    const v0, 0x7f0800db

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->setContentView(I)V

    .line 67
    const v0, 0x7f0606b6

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->mFeatureEnableButton:Landroid/widget/Button;

    .line 68
    const v0, 0x7f0606b5

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->mFeatureDisableButton:Landroid/widget/Button;

    .line 69
    const v0, 0x7f0606b8

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->mLogEnableButton:Landroid/widget/Button;

    .line 70
    const v0, 0x7f0606b7

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->mLogDisableButton:Landroid/widget/Button;

    .line 71
    iget-object v0, p0, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->mFeatureEnableButton:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 72
    iget-object v0, p0, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->mFeatureDisableButton:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 73
    iget-object v0, p0, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->mLogEnableButton:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 74
    iget-object v0, p0, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->mLogDisableButton:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 75
    invoke-direct {p0}, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->querySmartRatSwitchStatus()V

    .line 76
    invoke-direct {p0}, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->updateFeatureButtonStatus()V

    .line 77
    invoke-direct {p0}, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->queryDebugLogStatus()V

    .line 78
    invoke-direct {p0}, Lcom/mediatek/engineermode/smartratswitch/SmartRatSwitchActivity;->updateDebugLogButtonStatus()V

    .line 79
    return-void
.end method
