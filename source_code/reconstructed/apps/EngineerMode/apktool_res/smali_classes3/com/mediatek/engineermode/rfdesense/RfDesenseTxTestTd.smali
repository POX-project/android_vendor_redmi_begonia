.class public Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;
.super Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;
.source "RfDesenseTxTestTd.java"


# static fields
.field public static final KEY_FDD_ANT_MODE:Ljava/lang/String; = "Power_FDD_ant_mode"

.field public static final KEY_FDD_ANT_STATUS:Ljava/lang/String; = "Power_FDD_ant_status"

.field public static final KEY_FDD_BAND:Ljava/lang/String; = "Band_FDD_3G"

.field public static final KEY_FDD_CHANNEL:Ljava/lang/String; = "Channel_FDD_3G"

.field public static final KEY_FDD_POWER:Ljava/lang/String; = "Power_FDD_3G"

.field public static final KEY_TDD_ANT_MODE:Ljava/lang/String; = "Power_TDD_ant_mode"

.field public static final KEY_TDD_ANT_STATUS:Ljava/lang/String; = "Power_TDD_ant_status"

.field public static final KEY_TDD_BAND:Ljava/lang/String; = "Band_TDD_3G"

.field public static final KEY_TDD_CHANNEL:Ljava/lang/String; = "Channel_TDD_3G"

.field public static final KEY_TDD_POWER:Ljava/lang/String; = "Power_TDD_3G"

.field public static final TAG:Ljava/lang/String; = "RfDesense/TxTestTd"

.field private static mModemType:I


# instance fields
.field private mBandValues:[Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 52
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;-><init>()V

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;)[Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;

    .line 52
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mBandValues:[Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;
    .param p1, "x1"    # Ljava/lang/String;

    .line 52
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->saveState(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;
    .param p1, "x1"    # Ljava/lang/String;

    .line 52
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->showToast(Ljava/lang/String;)V

    return-void
.end method

.method private restoreState()V
    .locals 6

    .line 171
    const-string v0, "rfdesense_tx_test"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 174
    .local v0, "pref":Landroid/content/SharedPreferences;
    sget v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mModemType:I

    const-string v3, "1"

    const-string v4, "0"

    const/4 v5, 0x2

    if-ne v2, v5, :cond_0

    .line 175
    const-string v2, "Band_TDD_3G"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mCurrentBand:I

    .line 176
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mBand:Landroid/widget/Spinner;

    iget v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mCurrentBand:I

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setSelection(I)V

    .line 178
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->updateLimits()V

    .line 179
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mChannel:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mChannel:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    iget-object v2, v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->defaultValue:Ljava/lang/String;

    const-string v5, "Channel_TDD_3G"

    invoke-interface {v0, v5, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->setText(Ljava/lang/String;)V

    .line 180
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mPower:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mPower:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    iget-object v2, v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->defaultValue:Ljava/lang/String;

    const-string v5, "Power_TDD_3G"

    invoke-interface {v0, v5, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->setText(Ljava/lang/String;)V

    .line 182
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mAntMode:Landroid/widget/CheckBox;

    const-string v2, "Power_TDD_ant_mode"

    invoke-interface {v0, v2, v4}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 183
    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    .line 182
    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 184
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mAntStatus:Landroid/widget/EditText;

    const-string v2, "Power_TDD_ant_status"

    invoke-interface {v0, v2, v4}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    .line 188
    :cond_0
    const-string v2, "Band_FDD_3G"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mCurrentBand:I

    .line 189
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mBand:Landroid/widget/Spinner;

    iget v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mCurrentBand:I

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setSelection(I)V

    .line 190
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->updateLimits()V

    .line 191
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mChannel:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mChannel:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    iget-object v2, v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->defaultValue:Ljava/lang/String;

    const-string v5, "Channel_FDD_3G"

    invoke-interface {v0, v5, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->setText(Ljava/lang/String;)V

    .line 192
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mPower:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mPower:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    iget-object v2, v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->defaultValue:Ljava/lang/String;

    const-string v5, "Power_FDD_3G"

    invoke-interface {v0, v5, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->setText(Ljava/lang/String;)V

    .line 193
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mAntMode:Landroid/widget/CheckBox;

    const-string v2, "Power_FDD_ant_mode"

    invoke-interface {v0, v2, v4}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 194
    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    .line 193
    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 195
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mAntStatus:Landroid/widget/EditText;

    const-string v2, "Power_FDD_ant_status"

    invoke-interface {v0, v2, v4}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 198
    :goto_0
    return-void
.end method

.method private saveState(Ljava/lang/String;)V
    .locals 6
    .param p1, "command"    # Ljava/lang/String;

    .line 71
    const-string v0, "rfdesense_tx_test"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 72
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 74
    .local v0, "pref":Landroid/content/SharedPreferences$Editor;
    sget v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mModemType:I

    const-string v2, "AT+ETXANT=1,2,"

    const-string v3, "1"

    const-string v4, "0"

    const/4 v5, 0x2

    if-ne v1, v5, :cond_2

    .line 75
    const-string v1, "tdscdma_at_cmd"

    invoke-interface {v0, v1, p1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 76
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mBand:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v5, "Band_TDD_3G"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 77
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mChannel:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->getText()Ljava/lang/String;

    move-result-object v1

    const-string v5, "Channel_TDD_3G"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 78
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mPower:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->getText()Ljava/lang/String;

    move-result-object v1

    const-string v5, "Power_TDD_3G"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 79
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mAntMode:Landroid/widget/CheckBox;

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    move-object v3, v4

    :goto_0
    const-string v1, "Power_TDD_ant_mode"

    invoke-interface {v0, v1, v3}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 80
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mAntStatus:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "Power_TDD_ant_status"

    invoke-interface {v0, v3, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 81
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mAntStatus:Landroid/widget/EditText;

    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v2, ",,0"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 82
    .local v1, "ant_str":Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mAntMode:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    const-string v3, "tdscdma_at_cmd_ant_switch"

    if-eqz v2, :cond_1

    .line 83
    invoke-interface {v0, v3, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    goto :goto_1

    .line 85
    :cond_1
    const-string v1, "AT+ETXANT=0,2,0,,0"

    .line 86
    invoke-interface {v0, v3, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 88
    .end local v1    # "ant_str":Ljava/lang/String;
    :goto_1
    goto :goto_3

    .line 89
    :cond_2
    const-string v1, "wcdma_at_cmd"

    invoke-interface {v0, v1, p1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 90
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mBand:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v5, "Band_FDD_3G"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 91
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mChannel:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->getText()Ljava/lang/String;

    move-result-object v1

    const-string v5, "Channel_FDD_3G"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 92
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mPower:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->getText()Ljava/lang/String;

    move-result-object v1

    const-string v5, "Power_FDD_3G"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 93
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mAntMode:Landroid/widget/CheckBox;

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    if-eqz v1, :cond_3

    goto :goto_2

    :cond_3
    move-object v3, v4

    :goto_2
    const-string v1, "Power_FDD_ant_mode"

    invoke-interface {v0, v1, v3}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 94
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mAntStatus:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "Power_FDD_ant_status"

    invoke-interface {v0, v3, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 95
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mAntStatus:Landroid/widget/EditText;

    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 96
    .restart local v1    # "ant_str":Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mAntMode:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    const-string v3, "wcdma_at_cmd_ant_switch"

    if-eqz v2, :cond_4

    .line 97
    invoke-interface {v0, v3, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    goto :goto_3

    .line 99
    :cond_4
    const-string v1, "AT+ETXANT=0,2,0"

    .line 100
    invoke-interface {v0, v3, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 103
    .end local v1    # "ant_str":Ljava/lang/String;
    :goto_3
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    .line 104
    return-void
.end method

.method private showToast(Ljava/lang/String;)V
    .locals 1
    .param p1, "msg"    # Ljava/lang/String;

    .line 229
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mToast:Landroid/widget/Toast;

    if-eqz v0, :cond_0

    .line 230
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mToast:Landroid/widget/Toast;

    invoke-virtual {v0}, Landroid/widget/Toast;->cancel()V

    .line 232
    :cond_0
    const/4 v0, 0x1

    invoke-static {p0, p1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mToast:Landroid/widget/Toast;

    .line 233
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mToast:Landroid/widget/Toast;

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 234
    return-void
.end method


# virtual methods
.method public onCreate(Landroid/os/Bundle;)V
    .locals 6
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 108
    invoke-super {p0, p1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->onCreate(Landroid/os/Bundle;)V

    .line 109
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->getIntent()Landroid/content/Intent;

    move-result-object v0

    .line 110
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "mModemType"

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mModemType:I

    .line 111
    const v1, 0x7f060183

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->findViewById(I)Landroid/view/View;

    move-result-object v1

    const/16 v2, 0x8

    invoke-virtual {v1, v2}, Landroid/view/View;->setVisibility(I)V

    .line 112
    const v1, 0x7f060740

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->findViewById(I)Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1, v2}, Landroid/view/View;->setVisibility(I)V

    .line 113
    const v1, 0x7f0605f6

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->findViewById(I)Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1, v2}, Landroid/view/View;->setVisibility(I)V

    .line 114
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mAfc:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    iget-object v1, v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->editor:Landroid/widget/EditText;

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setVisibility(I)V

    .line 115
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mTsc:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    iget-object v1, v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->editor:Landroid/widget/EditText;

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setVisibility(I)V

    .line 116
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mPattern:Landroid/widget/Spinner;

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setVisibility(I)V

    .line 118
    const v1, 0x7f06027b

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    .line 119
    .local v1, "channelLabel":Landroid/widget/TextView;
    const v2, 0x7f0a0523

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(I)V

    .line 121
    sget v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mModemType:I

    const/4 v3, 0x2

    if-ne v2, v3, :cond_0

    .line 122
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const v4, 0x7f010096

    invoke-virtual {v2, v4}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mBandValues:[Ljava/lang/String;

    goto :goto_0

    .line 125
    :cond_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const v4, 0x7f010085

    invoke-virtual {v2, v4}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mBandValues:[Ljava/lang/String;

    .line 129
    :goto_0
    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd$1;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd$1;-><init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;)V

    .line 152
    .local v2, "listener":Landroid/view/View$OnClickListener;
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mButtonSet:Landroid/widget/Button;

    invoke-virtual {v4, v2}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 155
    sget v4, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mModemType:I

    const v5, 0x1090008

    if-ne v4, v3, :cond_1

    .line 156
    const v3, 0x7f010095

    invoke-static {p0, v3, v5}, Landroid/widget/ArrayAdapter;->createFromResource(Landroid/content/Context;II)Landroid/widget/ArrayAdapter;

    move-result-object v3

    .local v3, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/CharSequence;>;"
    goto :goto_1

    .line 160
    .end local v3    # "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/CharSequence;>;"
    :cond_1
    const v3, 0x7f010084

    invoke-static {p0, v3, v5}, Landroid/widget/ArrayAdapter;->createFromResource(Landroid/content/Context;II)Landroid/widget/ArrayAdapter;

    move-result-object v3

    .line 164
    .restart local v3    # "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/CharSequence;>;"
    :goto_1
    const v4, 0x1090009

    invoke-virtual {v3, v4}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 165
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mBand:Landroid/widget/Spinner;

    invoke-virtual {v4, v3}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 167
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->restoreState()V

    .line 168
    return-void
.end method

.method protected updateLimits()V
    .locals 13

    .line 202
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mBand:Landroid/widget/Spinner;

    invoke-virtual {v0}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v0

    .line 205
    .local v0, "band":I
    sget v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mModemType:I

    const-string v2, ","

    const/4 v3, 0x2

    if-ne v1, v3, :cond_0

    .line 206
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const v4, 0x7f010097

    invoke-virtual {v1, v4}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v1

    aget-object v1, v1, v0

    .line 207
    invoke-virtual {v1, v2}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .local v1, "limits":[Ljava/lang/String;
    goto :goto_0

    .line 209
    .end local v1    # "limits":[Ljava/lang/String;
    :cond_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const v4, 0x7f010086

    invoke-virtual {v1, v4}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v1

    aget-object v1, v1, v0

    .line 210
    invoke-virtual {v1, v2}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 212
    .restart local v1    # "limits":[Ljava/lang/String;
    :goto_0
    const/4 v2, 0x0

    .line 213
    .local v2, "min":I
    const/4 v4, 0x0

    .line 214
    .local v4, "max":I
    const-string v5, ""

    .line 216
    .local v5, "defaults":Ljava/lang/String;
    const/4 v6, 0x1

    :try_start_0
    aget-object v7, v1, v6

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v7

    invoke-virtual {v7}, Ljava/lang/Integer;->intValue()I

    move-result v7

    move v2, v7

    .line 217
    aget-object v7, v1, v3

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v7

    invoke-virtual {v7}, Ljava/lang/Integer;->intValue()I

    move-result v7

    move v4, v7

    .line 218
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    add-int v8, v2, v4

    div-int/2addr v8, v3

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, ""

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v5, v7

    .line 221
    goto :goto_1

    .line 219
    :catch_0
    move-exception v7

    .line 220
    .local v7, "e":Ljava/lang/Exception;
    invoke-virtual {v7}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 223
    .end local v7    # "e":Ljava/lang/Exception;
    :goto_1
    iget-object v7, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mChannel:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    aget-object v9, v1, v6

    aget-object v10, v1, v3

    const/4 v3, 0x3

    aget-object v11, v1, v3

    const/4 v3, 0x4

    aget-object v12, v1, v3

    move-object v8, v5

    invoke-virtual/range {v7 .. v12}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->set(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 225
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;->mPower:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    const/4 v6, 0x5

    aget-object v6, v1, v6

    const/4 v7, 0x6

    aget-object v7, v1, v7

    const/4 v8, 0x7

    aget-object v8, v1, v8

    invoke-virtual {v3, v6, v7, v8}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->set(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 226
    return-void
.end method
