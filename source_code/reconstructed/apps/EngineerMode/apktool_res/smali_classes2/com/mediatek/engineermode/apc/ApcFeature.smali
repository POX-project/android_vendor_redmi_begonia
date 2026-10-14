.class public Lcom/mediatek/engineermode/apc/ApcFeature;
.super Landroid/app/Activity;
.source "ApcFeature.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# static fields
.field private static final CHECK_INFOMATION_ID:I = 0x1

.field private static final TAG:Ljava/lang/String; = "ApcFeature"

.field private static mIsApcEnabled:Z


# instance fields
.field private mApcEnable:Landroid/widget/CheckBox;

.field private mReportEnable:Landroid/widget/CheckBox;

.field private mReportTimer:Landroid/widget/EditText;

.field private mSetButton:Landroid/widget/Button;

.field private mSimType:I

.field private mTelephonyManagerEx:Lcom/mediatek/telephony/MtkTelephonyManagerEx;

.field private mTimer:I

.field private mToast:Landroid/widget/Toast;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 67
    const/4 v0, 0x0

    sput-boolean v0, Lcom/mediatek/engineermode/apc/ApcFeature;->mIsApcEnabled:Z

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 56
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 65
    const/16 v0, 0x258

    iput v0, p0, Lcom/mediatek/engineermode/apc/ApcFeature;->mTimer:I

    .line 66
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/apc/ApcFeature;->mToast:Landroid/widget/Toast;

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 7
    .param p1, "arg0"    # Landroid/view/View;

    .line 121
    iget-object v0, p0, Lcom/mediatek/engineermode/apc/ApcFeature;->mReportTimer:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 122
    .local v0, "reportTimer":Ljava/lang/String;
    const-string v1, "ApcFeature"

    const/4 v2, 0x0

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v3

    if-gtz v3, :cond_0

    goto :goto_0

    .line 126
    :cond_0
    :try_start_0
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    iput v3, p0, Lcom/mediatek/engineermode/apc/ApcFeature;->mTimer:I
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 130
    goto :goto_1

    .line 127
    :catch_0
    move-exception v3

    .line 128
    .local v3, "e":Ljava/lang/NumberFormatException;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Invalid format: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v4}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 129
    const-string v4, "Invalid value"

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    goto :goto_1

    .line 123
    .end local v3    # "e":Ljava/lang/NumberFormatException;
    :cond_1
    :goto_0
    const/16 v3, 0x258

    iput v3, p0, Lcom/mediatek/engineermode/apc/ApcFeature;->mTimer:I

    .line 132
    :goto_1
    iget-object v3, p0, Lcom/mediatek/engineermode/apc/ApcFeature;->mSetButton:Landroid/widget/Button;

    if-ne p1, v3, :cond_3

    .line 133
    iget-object v3, p0, Lcom/mediatek/engineermode/apc/ApcFeature;->mApcEnable:Landroid/widget/CheckBox;

    invoke-virtual {v3}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v3

    if-eqz v3, :cond_2

    sget-boolean v3, Lcom/mediatek/engineermode/apc/ApcFeature;->mIsApcEnabled:Z

    if-nez v3, :cond_2

    .line 134
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "mSimType: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/mediatek/engineermode/apc/ApcFeature;->mSimType:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 135
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "mReportEnable.isChecked(): "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/engineermode/apc/ApcFeature;->mReportEnable:Landroid/widget/CheckBox;

    invoke-virtual {v4}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 136
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "mTimer: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/mediatek/engineermode/apc/ApcFeature;->mTimer:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 137
    const/4 v1, 0x1

    sput-boolean v1, Lcom/mediatek/engineermode/apc/ApcFeature;->mIsApcEnabled:Z

    .line 138
    iget-object v3, p0, Lcom/mediatek/engineermode/apc/ApcFeature;->mTelephonyManagerEx:Lcom/mediatek/telephony/MtkTelephonyManagerEx;

    iget v4, p0, Lcom/mediatek/engineermode/apc/ApcFeature;->mSimType:I

    iget-object v5, p0, Lcom/mediatek/engineermode/apc/ApcFeature;->mReportEnable:Landroid/widget/CheckBox;

    invoke-virtual {v5}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v5

    iget v6, p0, Lcom/mediatek/engineermode/apc/ApcFeature;->mTimer:I

    invoke-virtual {v3, v4, v1, v5, v6}, Lcom/mediatek/telephony/MtkTelephonyManagerEx;->setApcMode(IIZI)V

    .line 139
    const-string v1, "enable APC done"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    goto :goto_2

    .line 140
    :cond_2
    sget-boolean v1, Lcom/mediatek/engineermode/apc/ApcFeature;->mIsApcEnabled:Z

    if-eqz v1, :cond_3

    iget-object v1, p0, Lcom/mediatek/engineermode/apc/ApcFeature;->mApcEnable:Landroid/widget/CheckBox;

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    if-nez v1, :cond_3

    .line 141
    iget-object v1, p0, Lcom/mediatek/engineermode/apc/ApcFeature;->mTelephonyManagerEx:Lcom/mediatek/telephony/MtkTelephonyManagerEx;

    iget v3, p0, Lcom/mediatek/engineermode/apc/ApcFeature;->mSimType:I

    invoke-virtual {v1, v3, v2, v2, v2}, Lcom/mediatek/telephony/MtkTelephonyManagerEx;->setApcMode(IIZI)V

    .line 142
    sput-boolean v2, Lcom/mediatek/engineermode/apc/ApcFeature;->mIsApcEnabled:Z

    .line 143
    const-string v1, "disable APC done"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 146
    :cond_3
    :goto_2
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 1
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 73
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 74
    const v0, 0x7f08000b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/apc/ApcFeature;->setContentView(I)V

    .line 75
    const v0, 0x7f0601d1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/apc/ApcFeature;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/apc/ApcFeature;->mSetButton:Landroid/widget/Button;

    .line 76
    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 77
    const v0, 0x7f06026a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/apc/ApcFeature;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/apc/ApcFeature;->mApcEnable:Landroid/widget/CheckBox;

    .line 78
    const v0, 0x7f06026c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/apc/ApcFeature;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/apc/ApcFeature;->mReportEnable:Landroid/widget/CheckBox;

    .line 79
    const v0, 0x7f0601d0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/apc/ApcFeature;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/apc/ApcFeature;->mReportTimer:Landroid/widget/EditText;

    .line 80
    return-void
.end method

.method public onCreateOptionsMenu(Landroid/view/Menu;)Z
    .locals 3
    .param p1, "menu"    # Landroid/view/Menu;

    .line 96
    const v0, 0x7f0a012a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/apc/ApcFeature;->getString(I)Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    invoke-interface {p1, v1, v2, v1, v0}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 97
    return v2
.end method

.method protected onDestroy()V
    .locals 0

    .line 91
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 92
    return-void
.end method

.method public onOptionsItemSelected(Landroid/view/MenuItem;)Z
    .locals 3
    .param p1, "aMenuItem"    # Landroid/view/MenuItem;

    .line 102
    invoke-interface {p1}, Landroid/view/MenuItem;->getItemId()I

    move-result v0

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 104
    :cond_0
    sget-boolean v0, Lcom/mediatek/engineermode/apc/ApcFeature;->mIsApcEnabled:Z

    if-nez v0, :cond_1

    .line 105
    const/4 v0, 0x0

    const-string v1, "APC is not enabled!"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 106
    goto :goto_0

    .line 108
    :cond_1
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/mediatek/engineermode/apc/ApcFakeInfo;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 109
    .local v0, "intent":Landroid/content/Intent;
    iget v1, p0, Lcom/mediatek/engineermode/apc/ApcFeature;->mSimType:I

    const-string v2, "mSimType"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 110
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/apc/ApcFeature;->startActivity(Landroid/content/Intent;)V

    .line 111
    nop

    .line 115
    .end local v0    # "intent":Landroid/content/Intent;
    :goto_0
    invoke-super {p0, p1}, Landroid/app/Activity;->onOptionsItemSelected(Landroid/view/MenuItem;)Z

    move-result v0

    return v0
.end method

.method public onResume()V
    .locals 3

    .line 84
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 85
    invoke-virtual {p0}, Lcom/mediatek/engineermode/apc/ApcFeature;->getIntent()Landroid/content/Intent;

    move-result-object v0

    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCapabilitySim()I

    move-result v1

    const-string v2, "mSimType"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/apc/ApcFeature;->mSimType:I

    .line 86
    invoke-static {}, Lcom/mediatek/telephony/MtkTelephonyManagerEx;->getDefault()Lcom/mediatek/telephony/MtkTelephonyManagerEx;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/apc/ApcFeature;->mTelephonyManagerEx:Lcom/mediatek/telephony/MtkTelephonyManagerEx;

    .line 87
    return-void
.end method
