.class public Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;
.super Landroid/app/Activity;
.source "RfDesenseTxTestCdma.java"


# static fields
.field private static final CHANNEL_DEFAULT:I = 0x0

.field private static final CHANNEL_MAX:I = 0x2

.field private static final CHANNEL_MAX2:I = 0x4

.field private static final CHANNEL_MIN:I = 0x1

.field private static final CHANNEL_MIN2:I = 0x3

.field public static final DEFAULT_BAND_VALUE:I = 0x0

.field public static final DEFAULT_CHANNEL_VALUE:I = 0x180

.field public static final DEFAULT_POWER_VALUE:I = 0x17

.field public static final KEY_1X_BAND:Ljava/lang/String; = "Band_1x_CDMA"

.field public static final KEY_1X_CHANNEL:Ljava/lang/String; = "Channel_1x_CDMA"

.field public static final KEY_1X_POWER:Ljava/lang/String; = "Power_1x_CDMA"

.field public static final KEY_CDMA1X_ANT_MODE:Ljava/lang/String; = "cdma1x_ant_mode"

.field public static final KEY_CDMA1x_ANT_STATUS:Ljava/lang/String; = "cdma1x_ant_status"

.field public static final KEY_EVDO_ANT_MODE:Ljava/lang/String; = "evdo_ant_mode"

.field public static final KEY_EVDO_ANT_STATUS:Ljava/lang/String; = "evdo_ant_status"

.field public static final KEY_EVDO_BAND:Ljava/lang/String; = "Band_evdo_CDMA"

.field public static final KEY_EVDO_CHANNEL:Ljava/lang/String; = "Channel_evdo_CDMA"

.field public static final KEY_EVDO_POWER:Ljava/lang/String; = "Power_evdo_CDMA"

.field public static final KEY_MODULATION:Ljava/lang/String; = "Modulation_CDMA"

.field private static final POWER_DEFAULT:I = 0x5

.field private static final POWER_MAX:I = 0x7

.field private static final POWER_MIN:I = 0x6

.field public static final TAG:Ljava/lang/String; = "RfDesense/TxTestCdma"

.field private static mModemType:I


# instance fields
.field protected mAntMode:Landroid/widget/CheckBox;

.field protected mAntStatus:Landroid/widget/EditText;

.field private mBand:Landroid/widget/Spinner;

.field private mButtonSet:Landroid/widget/Button;

.field private mChannel:Landroid/widget/EditText;

.field private mModulation:Landroid/widget/RadioGroup;

.field private mPower:Landroid/widget/EditText;

.field protected mToast:Landroid/widget/Toast;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 58
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 89
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mToast:Landroid/widget/Toast;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;

    .line 58
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mBand:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;

    .line 58
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mModulation:Landroid/widget/RadioGroup;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;)Landroid/widget/EditText;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;

    .line 58
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mChannel:Landroid/widget/EditText;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;)Landroid/widget/EditText;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;

    .line 58
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mPower:Landroid/widget/EditText;

    return-object v0
.end method

.method static synthetic access$400()I
    .locals 1

    .line 58
    sget v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mModemType:I

    return v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;
    .param p1, "x1"    # Ljava/lang/String;

    .line 58
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->saveState(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;
    .param p1, "x1"    # Ljava/lang/String;

    .line 58
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->showToast(Ljava/lang/String;)V

    return-void
.end method

.method private restoreState()V
    .locals 8

    .line 197
    const-string v0, "rfdesense_tx_test"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 199
    .local v0, "pref":Landroid/content/SharedPreferences;
    sget v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mModemType:I

    const-string v3, "1"

    const-string v4, "23"

    const-string v5, "384"

    const-string v6, "0"

    const/4 v7, 0x1

    if-ne v2, v7, :cond_0

    .line 200
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mModulation:Landroid/widget/RadioGroup;

    const v7, 0x7f0605a5

    invoke-virtual {v2, v7}, Landroid/widget/RadioGroup;->check(I)V

    .line 201
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mBand:Landroid/widget/Spinner;

    const-string v7, "Band_1x_CDMA"

    invoke-interface {v0, v7, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    invoke-virtual {v2, v1}, Landroid/widget/Spinner;->setSelection(I)V

    .line 202
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mChannel:Landroid/widget/EditText;

    const-string v2, "Channel_1x_CDMA"

    invoke-interface {v0, v2, v5}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 203
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mPower:Landroid/widget/EditText;

    const-string v2, "Power_1x_CDMA"

    invoke-interface {v0, v2, v4}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 204
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mAntMode:Landroid/widget/CheckBox;

    const-string v2, "cdma1x_ant_mode"

    invoke-interface {v0, v2, v6}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 205
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mAntStatus:Landroid/widget/EditText;

    const-string v2, "cdma1x_ant_status"

    invoke-interface {v0, v2, v6}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    .line 207
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mModulation:Landroid/widget/RadioGroup;

    const v7, 0x7f0605a6

    invoke-virtual {v2, v7}, Landroid/widget/RadioGroup;->check(I)V

    .line 208
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mBand:Landroid/widget/Spinner;

    const-string v7, "Band_evdo_CDMA"

    invoke-interface {v0, v7, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    invoke-virtual {v2, v1}, Landroid/widget/Spinner;->setSelection(I)V

    .line 209
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mChannel:Landroid/widget/EditText;

    const-string v2, "Channel_evdo_CDMA"

    invoke-interface {v0, v2, v5}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 210
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mPower:Landroid/widget/EditText;

    const-string v2, "Power_evdo_CDMA"

    invoke-interface {v0, v2, v4}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 211
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mAntMode:Landroid/widget/CheckBox;

    const-string v2, "evdo_ant_mode"

    invoke-interface {v0, v2, v6}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 212
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mAntStatus:Landroid/widget/EditText;

    const-string v2, "evdo_ant_status"

    invoke-interface {v0, v2, v6}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 215
    :goto_0
    return-void
.end method

.method private saveState(Ljava/lang/String;)V
    .locals 6
    .param p1, "command"    # Ljava/lang/String;

    .line 162
    const-string v0, "rfdesense_tx_test"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 163
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 164
    .local v0, "pref":Landroid/content/SharedPreferences$Editor;
    sget v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mModemType:I

    const-string v2, "AT+ETXANT=1,4,"

    const-string v3, "1"

    const-string v4, "0"

    const/4 v5, 0x1

    if-ne v1, v5, :cond_2

    .line 165
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mBand:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v5, "Band_1x_CDMA"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 166
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mChannel:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v5, "Channel_1x_CDMA"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 167
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mPower:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v5, "Power_1x_CDMA"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 168
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mAntMode:Landroid/widget/CheckBox;

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    move-object v3, v4

    :goto_0
    const-string v1, "cdma1x_ant_mode"

    invoke-interface {v0, v1, v3}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 169
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mAntStatus:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "cdma1x_ant_status"

    invoke-interface {v0, v3, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 170
    const-string v1, "cdma_at_cmd"

    invoke-interface {v0, v1, p1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 171
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mAntStatus:Landroid/widget/EditText;

    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 172
    .local v1, "ant_str":Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mAntMode:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    const-string v3, "cdma1x_at_cmd_ant_switch"

    if-eqz v2, :cond_1

    .line 173
    invoke-interface {v0, v3, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    goto :goto_1

    .line 175
    :cond_1
    const-string v1, "AT+ETXANT=0,4,0"

    .line 176
    invoke-interface {v0, v3, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 178
    .end local v1    # "ant_str":Ljava/lang/String;
    :goto_1
    goto/16 :goto_3

    .line 179
    :cond_2
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mBand:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v5, "Band_evdo_CDMA"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 180
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mChannel:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v5, "Channel_evdo_CDMA"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 181
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mPower:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v5, "Power_evdo_CDMA"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 182
    const-string v1, "cdma_evdo_at_cmd"

    invoke-interface {v0, v1, p1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 183
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mAntMode:Landroid/widget/CheckBox;

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    if-eqz v1, :cond_3

    goto :goto_2

    :cond_3
    move-object v3, v4

    :goto_2
    const-string v1, "evdo_ant_mode"

    invoke-interface {v0, v1, v3}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 184
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mAntStatus:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "evdo_ant_status"

    invoke-interface {v0, v3, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 185
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mAntStatus:Landroid/widget/EditText;

    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v2, ",,0"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 186
    .restart local v1    # "ant_str":Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mAntMode:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    const-string v3, "evdo_at_cmd_ant_switch"

    if-eqz v2, :cond_4

    .line 187
    invoke-interface {v0, v3, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    goto :goto_3

    .line 189
    :cond_4
    const-string v1, "AT+ETXANT=0,4,0,,0"

    .line 190
    invoke-interface {v0, v3, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 193
    .end local v1    # "ant_str":Ljava/lang/String;
    :goto_3
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    .line 194
    return-void
.end method

.method private showToast(Ljava/lang/String;)V
    .locals 1
    .param p1, "msg"    # Ljava/lang/String;

    .line 227
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mToast:Landroid/widget/Toast;

    if-eqz v0, :cond_0

    .line 228
    invoke-virtual {v0}, Landroid/widget/Toast;->cancel()V

    .line 230
    :cond_0
    const/4 v0, 0x1

    invoke-static {p0, p1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mToast:Landroid/widget/Toast;

    .line 231
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 232
    return-void
.end method


# virtual methods
.method protected checkValues()Z
    .locals 1

    .line 223
    const/4 v0, 0x1

    return v0
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 5
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 100
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 101
    const v0, 0x7f0800ce

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->setContentView(I)V

    .line 102
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->getIntent()Landroid/content/Intent;

    move-result-object v0

    .line 103
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "mModemType"

    const/4 v2, 0x2

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mModemType:I

    .line 104
    const v1, 0x7f0601e8

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mBand:Landroid/widget/Spinner;

    .line 105
    const v1, 0x7f0605a7

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioGroup;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mModulation:Landroid/widget/RadioGroup;

    .line 106
    const v1, 0x7f06027e

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mChannel:Landroid/widget/EditText;

    .line 107
    const v1, 0x7f060617

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mPower:Landroid/widget/EditText;

    .line 108
    const v1, 0x7f060675

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mAntMode:Landroid/widget/CheckBox;

    .line 109
    const v1, 0x7f060676

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mAntStatus:Landroid/widget/EditText;

    .line 110
    const v1, 0x7f06025a

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mButtonSet:Landroid/widget/Button;

    .line 112
    const v1, 0x7f010082

    const v2, 0x1090008

    invoke-static {p0, v1, v2}, Landroid/widget/ArrayAdapter;->createFromResource(Landroid/content/Context;II)Landroid/widget/ArrayAdapter;

    move-result-object v1

    .line 115
    .local v1, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/CharSequence;>;"
    const v2, 0x1090009

    invoke-virtual {v1, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 116
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mBand:Landroid/widget/Spinner;

    invoke-virtual {v2, v1}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 118
    nop

    .line 119
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const v3, 0x7f010083

    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v2

    .line 121
    .local v2, "bandValues":[Ljava/lang/String;
    new-instance v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma$1;

    invoke-direct {v3, p0, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma$1;-><init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;[Ljava/lang/String;)V

    .line 157
    .local v3, "listener":Landroid/view/View$OnClickListener;
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->mButtonSet:Landroid/widget/Button;

    invoke-virtual {v4, v3}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 158
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;->restoreState()V

    .line 159
    return-void
.end method

.method protected onResume()V
    .locals 0

    .line 219
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 220
    return-void
.end method
