.class public Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;
.super Landroid/app/Activity;
.source "RfDesenseTxTestNR.java"

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# static fields
.field public static final DEFAULT_ANT_MODE:Ljava/lang/String; = "0"

.field public static final DEFAULT_ANT_STATUS:Ljava/lang/String; = "0"

.field public static final DEFAULT_BAND_NR:I = 0x0

.field public static final DEFAULT_BAND_WIDTH:I = 0x7

.field public static final DEFAULT_MCS:I = 0x0

.field public static final DEFAULT_NR_FREQ:Ljava/lang/String; = "1950000"

.field public static final DEFAULT_POWER:Ljava/lang/String; = "23"

.field public static final DEFAULT_SCS_CONFIG:I = 0x0

.field public static final DEFAULT_TDD_SLOT_CONFIG:Ljava/lang/String; = "1"

.field public static final DEFAULT_TX_MODE:I = 0x0

.field public static final DEFAULT_VRB_LENGTH:Ljava/lang/String; = "216"

.field public static final DEFAULT_VRB_START:Ljava/lang/String; = "0"

.field public static final KEY_NR_ANT_MODE:Ljava/lang/String; = "ant_mode_nr"

.field public static final KEY_NR_ANT_STATUS_RX:Ljava/lang/String; = "ant_status_nr_rx"

.field public static final KEY_NR_ANT_STATUS_TX:Ljava/lang/String; = "ant_status_nr_tx"

.field public static final KEY_NR_BAND:Ljava/lang/String; = "band_nr"

.field public static final KEY_NR_BAND_WIDTH:Ljava/lang/String; = "bandwidth_nr"

.field public static final KEY_NR_FREQ:Ljava/lang/String; = "freq_nr"

.field public static final KEY_NR_MCS:Ljava/lang/String; = "mcs_nr"

.field public static final KEY_NR_POWER:Ljava/lang/String; = "power_nr"

.field public static final KEY_NR_SCS:Ljava/lang/String; = "scs_nr"

.field public static final KEY_NR_VRB_LENGTH:Ljava/lang/String; = "vrb_length_nr"

.field public static final KEY_NR_VRB_START:Ljava/lang/String; = "vrb_start_nr"

.field public static final KEY_TDD_SLOT_CONFIG:Ljava/lang/String; = "tdd_slot_config"

.field public static final KEY_TX_MODE:Ljava/lang/String; = "tx_mode"

.field private static final POWER_MAX_PUSCH:I = 0x17

.field private static final POWER_MAX_TONE:I = 0x1a

.field private static final POWER_MIN:I = -0x32

.field public static final TAG:Ljava/lang/String; = "RfDesense/TxTestNr"

.field private static final TDD_SLOT_CONFIG_MAX:I = 0x2c

.field private static final TDD_SLOT_CONFIG_MIN:I = 0x1

.field private static final VRB_LENGTH_MAX:I = 0x111

.field private static final VRB_LENGTH_MIN:I = 0x0

.field private static final VRB_START_MAX:I = 0x110

.field private static final VRB_START_MIN:I

.field public static final mBandMapping:[I

.field public static final mBandWidthMapping:[I

.field private static mPowerMax:I


# instance fields
.field private atcmd:Ljava/lang/String;

.field private mAntMode:Landroid/widget/CheckBox;

.field private mAntStatusRx:Landroid/widget/EditText;

.field private mAntStatusTx:Landroid/widget/EditText;

.field private mBand:Landroid/widget/Spinner;

.field private mBandWidth:Landroid/widget/Spinner;

.field private mButtonSet:Landroid/widget/Button;

.field private mCurrentBandIndex:I

.field private mFreq:Landroid/widget/EditText;

.field private mFreqRangeArray:[Ljava/lang/String;

.field private mMcs:Landroid/widget/Spinner;

.field private mPower:Landroid/widget/EditText;

.field private mPowerView:Landroid/widget/TextView;

.field private mPuschTX:Landroid/widget/RadioButton;

.field private mScsConfig:Landroid/widget/Spinner;

.field private mTddSlotConfig:Landroid/widget/EditText;

.field private mToneTX:Landroid/widget/RadioButton;

.field private mVrbLength:Landroid/widget/EditText;

.field private mVrbStart:Landroid/widget/EditText;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 87
    const/16 v0, 0xb

    new-array v0, v0, [I

    fill-array-data v0, :array_0

    sput-object v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mBandMapping:[I

    .line 88
    const/16 v0, 0x14

    new-array v0, v0, [I

    fill-array-data v0, :array_1

    sput-object v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mBandWidthMapping:[I

    .line 101
    const/16 v0, 0x17

    sput v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mPowerMax:I

    return-void

    nop

    :array_0
    .array-data 4
        0x1
        0x3
        0x7
        0x8
        0x14
        0x1c
        0x26
        0x29
        0x4d
        0x4e
        0x4f
    .end array-data

    :array_1
    .array-data 4
        0x1388
        0x2710
        0x3a98
        0x4e20
        0x61a8
        0x7530
        0x88b8
        0x9c40
        0xafc8
        0xc350
        0xd6d8
        0xea60
        0xfde8
        0x11170
        0x124f8
        0x13880
        0x14c08
        0x15f90
        0x17318
        0x186a0
    .end array-data
.end method

.method public constructor <init>()V
    .locals 1

    .line 59
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 118
    const/4 v0, 0x1

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mCurrentBandIndex:I

    .line 120
    const-string v0, ""

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->atcmd:Ljava/lang/String;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;

    .line 59
    iget v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mCurrentBandIndex:I

    return v0
.end method

.method static synthetic access$002(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;
    .param p1, "x1"    # I

    .line 59
    iput p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mCurrentBandIndex:I

    return p1
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;)Ljava/lang/Long;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;

    .line 59
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->getDefaultFreq()Ljava/lang/Long;

    move-result-object v0

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;)Landroid/widget/EditText;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;

    .line 59
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mFreq:Landroid/widget/EditText;

    return-object v0
.end method

.method private checkValues()Z
    .locals 4

    .line 280
    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mVrbStart:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    .line 281
    .local v1, "value":I
    if-ltz v1, :cond_7

    const/16 v2, 0x110

    if-le v1, v2, :cond_0

    goto :goto_3

    .line 285
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mVrbLength:Landroid/widget/EditText;

    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    move v1, v2

    .line 286
    if-ltz v1, :cond_6

    const/16 v2, 0x111

    if-le v1, v2, :cond_1

    goto :goto_2

    .line 290
    :cond_1
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mPower:Landroid/widget/EditText;

    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    move v1, v2

    .line 291
    const/16 v2, -0x32

    if-lt v1, v2, :cond_5

    sget v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mPowerMax:I

    if-le v1, v2, :cond_2

    goto :goto_1

    .line 295
    :cond_2
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mTddSlotConfig:Landroid/widget/EditText;

    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    move v1, v2

    .line 296
    const/4 v2, 0x1

    if-lt v1, v2, :cond_4

    const/16 v3, 0x2c

    if-le v1, v3, :cond_3

    goto :goto_0

    .line 303
    .end local v1    # "value":I
    :cond_3
    nop

    .line 304
    return v2

    .line 297
    .restart local v1    # "value":I
    :cond_4
    :goto_0
    const-string v2, "Invalid tdd Slot Config."

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 298
    return v0

    .line 292
    :cond_5
    :goto_1
    const-string v2, "Invalid Power Level."

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 293
    return v0

    .line 287
    :cond_6
    :goto_2
    const-string v2, "Invalid VRB Length."

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 288
    return v0

    .line 282
    :cond_7
    :goto_3
    const-string v2, "Invalid VRB Start."

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 283
    return v0

    .line 300
    .end local v1    # "value":I
    :catch_0
    move-exception v1

    .line 301
    .local v1, "e":Ljava/lang/NumberFormatException;
    const-string v2, "Invalid Value."

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 302
    return v0
.end method

.method private getDefaultFreq()Ljava/lang/Long;
    .locals 8

    .line 196
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mBand:Landroid/widget/Spinner;

    invoke-virtual {v0}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v0

    .line 197
    .local v0, "index":I
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mFreqRangeArray:[Ljava/lang/String;

    aget-object v1, v1, v0

    const-string v2, ","

    invoke-virtual {v1, v2}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 199
    .local v1, "range":[Ljava/lang/String;
    const/4 v2, 0x1

    :try_start_0
    aget-object v2, v1, v2

    invoke-static {v2}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v2

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    .line 200
    .local v2, "min":Ljava/lang/Long;
    const/4 v3, 0x2

    aget-object v3, v1, v3

    invoke-static {v3}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    .line 201
    .local v3, "max":Ljava/lang/Long;
    invoke-virtual {v2}, Ljava/lang/Long;->longValue()J

    move-result-wide v4

    invoke-virtual {v3}, Ljava/lang/Long;->longValue()J

    move-result-wide v6

    add-long/2addr v4, v6

    const-wide/16 v6, 0x2

    div-long/2addr v4, v6

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v4

    .line 202
    .end local v2    # "min":Ljava/lang/Long;
    .end local v3    # "max":Ljava/lang/Long;
    :catch_0
    move-exception v2

    .line 203
    .local v2, "e":Ljava/lang/NumberFormatException;
    new-instance v3, Ljava/lang/RuntimeException;

    const-string v4, "Check the array resource"

    invoke-direct {v3, v4}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v3
.end method

.method private onTxModeChange()V
    .locals 2

    .line 208
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mToneTX:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 209
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mBandWidth:Landroid/widget/Spinner;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 210
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mScsConfig:Landroid/widget/Spinner;

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 211
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mMcs:Landroid/widget/Spinner;

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 212
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mVrbStart:Landroid/widget/EditText;

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 213
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mVrbLength:Landroid/widget/EditText;

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 214
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mTddSlotConfig:Landroid/widget/EditText;

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 215
    const/16 v0, 0x1a

    sput v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mPowerMax:I

    .line 216
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mPowerView:Landroid/widget/TextView;

    const v1, 0x7f0a053e

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    goto :goto_0

    .line 218
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mBandWidth:Landroid/widget/Spinner;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 219
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mScsConfig:Landroid/widget/Spinner;

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 220
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mMcs:Landroid/widget/Spinner;

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 221
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mVrbStart:Landroid/widget/EditText;

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 222
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mVrbLength:Landroid/widget/EditText;

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 223
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mTddSlotConfig:Landroid/widget/EditText;

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 224
    const/16 v0, 0x17

    sput v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mPowerMax:I

    .line 225
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mPowerView:Landroid/widget/TextView;

    const v1, 0x7f0a053d

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    .line 227
    :goto_0
    return-void
.end method

.method private restoreState()V
    .locals 7

    .line 340
    const-string v0, "rfdesense_tx_test"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 342
    .local v0, "pref":Landroid/content/SharedPreferences;
    const-string v2, "tx_mode"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v2

    .line 343
    .local v2, "checked":I
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mToneTX:Landroid/widget/RadioButton;

    const/4 v4, 0x1

    if-nez v2, :cond_0

    move v5, v4

    goto :goto_0

    :cond_0
    move v5, v1

    :goto_0
    invoke-virtual {v3, v5}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 344
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mPuschTX:Landroid/widget/RadioButton;

    if-ne v2, v4, :cond_1

    goto :goto_1

    :cond_1
    move v4, v1

    :goto_1
    invoke-virtual {v3, v4}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 345
    const-string v3, "band_nr"

    invoke-interface {v0, v3, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v4

    iput v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mCurrentBandIndex:I

    .line 346
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mBand:Landroid/widget/Spinner;

    invoke-interface {v0, v3, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v3

    invoke-virtual {v4, v3}, Landroid/widget/Spinner;->setSelection(I)V

    .line 347
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mBandWidth:Landroid/widget/Spinner;

    const/4 v4, 0x7

    const-string v5, "bandwidth_nr"

    invoke-interface {v0, v5, v4}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v4

    invoke-virtual {v3, v4}, Landroid/widget/Spinner;->setSelection(I)V

    .line 348
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mFreq:Landroid/widget/EditText;

    const-string v4, "freq_nr"

    const-string v5, "1950000"

    invoke-interface {v0, v4, v5}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 350
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mVrbStart:Landroid/widget/EditText;

    const-string v4, "vrb_start_nr"

    const-string v5, "0"

    invoke-interface {v0, v4, v5}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 351
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mVrbLength:Landroid/widget/EditText;

    const-string v4, "vrb_length_nr"

    const-string v6, "216"

    invoke-interface {v0, v4, v6}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 352
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mMcs:Landroid/widget/Spinner;

    const-string v4, "mcs_nr"

    invoke-interface {v0, v4, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v4

    invoke-virtual {v3, v4}, Landroid/widget/Spinner;->setSelection(I)V

    .line 353
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mScsConfig:Landroid/widget/Spinner;

    const-string v4, "scs_nr"

    invoke-interface {v0, v4, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    invoke-virtual {v3, v1}, Landroid/widget/Spinner;->setSelection(I)V

    .line 354
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mPower:Landroid/widget/EditText;

    const-string v3, "power_nr"

    const-string v4, "23"

    invoke-interface {v0, v3, v4}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 355
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mTddSlotConfig:Landroid/widget/EditText;

    const-string v3, "tdd_slot_config"

    const-string v4, "1"

    invoke-interface {v0, v3, v4}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 356
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mAntMode:Landroid/widget/CheckBox;

    const-string v3, "ant_mode_nr"

    invoke-interface {v0, v3, v5}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    invoke-virtual {v1, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 357
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mAntStatusTx:Landroid/widget/EditText;

    const-string v3, "ant_status_nr_tx"

    invoke-interface {v0, v3, v5}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 358
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mAntStatusRx:Landroid/widget/EditText;

    const-string v3, "ant_status_nr_rx"

    invoke-interface {v0, v3, v5}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 359
    return-void
.end method

.method private saveState(Ljava/lang/String;)V
    .locals 6
    .param p1, "command"    # Ljava/lang/String;

    .line 308
    const-string v0, "rfdesense_tx_test"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 309
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 310
    .local v0, "editor":Landroid/content/SharedPreferences$Editor;
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mToneTX:Landroid/widget/RadioButton;

    invoke-virtual {v1}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v1

    xor-int/lit8 v1, v1, 0x1

    const-string v2, "tx_mode"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 311
    const-string v1, "nr_at_cmd"

    invoke-interface {v0, v1, p1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 312
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mBand:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v2, "band_nr"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 313
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mBandWidth:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v2, "bandwidth_nr"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 314
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mFreq:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "freq_nr"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 315
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mVrbStart:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "vrb_start_nr"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 316
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mVrbLength:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "vrb_length_nr"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 317
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mMcs:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v2, "mcs_nr"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 318
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mScsConfig:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v2, "scs_nr"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 319
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mPower:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "power_nr"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 320
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mTddSlotConfig:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "tdd_slot_config"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 321
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mAntMode:Landroid/widget/CheckBox;

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v1, "1"

    goto :goto_0

    :cond_0
    const-string v1, "0"

    :goto_0
    const-string v2, "ant_mode_nr"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 322
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mAntStatusTx:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ant_status_nr_tx"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 323
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mAntStatusRx:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ant_status_nr_rx"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 325
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mAntStatusTx:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 326
    .local v1, "antStatustx":Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mAntStatusRx:Landroid/widget/EditText;

    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    .line 328
    .local v2, "antStatusrx":Ljava/lang/String;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "AT+EGMC=1,\"NrForceTxRx\",1,"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ","

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ",0"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 330
    .local v3, "ant_str":Ljava/lang/String;
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mAntMode:Landroid/widget/CheckBox;

    invoke-virtual {v4}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v4

    const-string v5, "nr_at_cmd_ant_switch"

    if-eqz v4, :cond_1

    .line 331
    invoke-interface {v0, v5, v3}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    goto :goto_1

    .line 333
    :cond_1
    const-string v3, "AT+EGMC=1,\"NrForceTxRx\",0,,,0"

    .line 334
    invoke-interface {v0, v5, v3}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 336
    :goto_1
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    .line 337
    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 2
    .param p1, "v"    # Landroid/widget/CompoundButton;
    .param p2, "checked"    # Z

    .line 231
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getId()I

    move-result v0

    const v1, 0x7f060648

    if-eq v0, v1, :cond_0

    const v1, 0x7f06072e

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 234
    :cond_0
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->onTxModeChange()V

    .line 235
    nop

    .line 239
    :goto_0
    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 13
    .param p1, "v"    # Landroid/view/View;

    .line 243
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    const v1, 0x7f06025a

    if-eq v0, v1, :cond_0

    goto/16 :goto_1

    .line 245
    :cond_0
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->checkValues()Z

    move-result v0

    if-nez v0, :cond_1

    .line 246
    goto/16 :goto_1

    .line 248
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mToneTX:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    .line 249
    .local v0, "txMode":I
    sget-object v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mBandMapping:[I

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mBand:Landroid/widget/Spinner;

    invoke-virtual {v2}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v2

    aget v1, v1, v2

    .line 250
    .local v1, "band":I
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mBandWidthMapping:[I

    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mBandWidth:Landroid/widget/Spinner;

    invoke-virtual {v3}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v3

    aget v2, v2, v3

    .line 251
    .local v2, "bandWidth":I
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mFreq:Landroid/widget/EditText;

    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    .line 253
    .local v3, "freq":Ljava/lang/String;
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mScsConfig:Landroid/widget/Spinner;

    invoke-virtual {v4}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v4

    .line 254
    .local v4, "ScsConfig":I
    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mVrbStart:Landroid/widget/EditText;

    invoke-virtual {v5}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    .line 255
    .local v5, "vrbStart":Ljava/lang/String;
    iget-object v6, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mVrbLength:Landroid/widget/EditText;

    invoke-virtual {v6}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v6

    .line 256
    .local v6, "vrbLength":Ljava/lang/String;
    iget-object v7, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mMcs:Landroid/widget/Spinner;

    invoke-virtual {v7}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v7

    .line 257
    .local v7, "mcs":I
    iget-object v8, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mPower:Landroid/widget/EditText;

    invoke-virtual {v8}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v8

    invoke-virtual {v8}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v8

    .line 258
    .local v8, "power":Ljava/lang/String;
    iget-object v9, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mTddSlotConfig:Landroid/widget/EditText;

    invoke-virtual {v9}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v9

    invoke-virtual {v9}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v9

    .line 260
    .local v9, "tddSlotConfig":Ljava/lang/String;
    const-string v10, ","

    if-nez v0, :cond_2

    .line 261
    const-string v11, "AT+EGMC=1,\"NrForcedTx\",2,"

    iput-object v11, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->atcmd:Ljava/lang/String;

    .line 262
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v12, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->atcmd:Ljava/lang/String;

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    iput-object v10, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->atcmd:Ljava/lang/String;

    goto :goto_0

    .line 264
    :cond_2
    const-string v11, "AT+EGMC=1,\"NrForcedTx\",1,"

    iput-object v11, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->atcmd:Ljava/lang/String;

    .line 265
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v12, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->atcmd:Ljava/lang/String;

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    iput-object v10, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->atcmd:Ljava/lang/String;

    .line 269
    :goto_0
    iget-object v10, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->atcmd:Ljava/lang/String;

    invoke-direct {p0, v10}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->saveState(Ljava/lang/String;)V

    .line 270
    const-string v10, "Set param suecceed"

    invoke-static {v10}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 271
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "command = "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v11, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->atcmd:Ljava/lang/String;

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    const-string v11, "RfDesense/TxTestNr"

    invoke-static {v11, v10}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 272
    nop

    .line 276
    .end local v0    # "txMode":I
    .end local v1    # "band":I
    .end local v2    # "bandWidth":I
    .end local v3    # "freq":Ljava/lang/String;
    .end local v4    # "ScsConfig":I
    .end local v5    # "vrbStart":Ljava/lang/String;
    .end local v6    # "vrbLength":Ljava/lang/String;
    .end local v7    # "mcs":I
    .end local v8    # "power":Ljava/lang/String;
    .end local v9    # "tddSlotConfig":Ljava/lang/String;
    :goto_1
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 4
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 124
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 125
    const v0, 0x7f0800d2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->setContentView(I)V

    .line 127
    const v0, 0x7f06072e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mToneTX:Landroid/widget/RadioButton;

    .line 128
    const v0, 0x7f060648

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mPuschTX:Landroid/widget/RadioButton;

    .line 130
    const v0, 0x7f0601e8

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mBand:Landroid/widget/Spinner;

    .line 131
    const v0, 0x7f0601f1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mBandWidth:Landroid/widget/Spinner;

    .line 132
    const v0, 0x7f0603cd

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mFreq:Landroid/widget/EditText;

    .line 134
    const v0, 0x7f06069b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mScsConfig:Landroid/widget/Spinner;

    .line 135
    const v0, 0x7f0606fc

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mTddSlotConfig:Landroid/widget/EditText;

    .line 137
    const v0, 0x7f0607f7

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mVrbStart:Landroid/widget/EditText;

    .line 138
    const v0, 0x7f0607ee

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mVrbLength:Landroid/widget/EditText;

    .line 139
    const v0, 0x7f060564

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mMcs:Landroid/widget/Spinner;

    .line 140
    const v0, 0x7f060617

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mPower:Landroid/widget/EditText;

    .line 141
    const v0, 0x7f06061e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mPowerView:Landroid/widget/TextView;

    .line 142
    const v0, 0x7f060675

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mAntMode:Landroid/widget/CheckBox;

    .line 143
    const v0, 0x7f060678

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mAntStatusTx:Landroid/widget/EditText;

    .line 144
    const v0, 0x7f060677

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mAntStatusRx:Landroid/widget/EditText;

    .line 148
    const v0, 0x7f06025a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mButtonSet:Landroid/widget/Button;

    .line 150
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mToneTX:Landroid/widget/RadioButton;

    invoke-virtual {v0, p0}, Landroid/widget/RadioButton;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 151
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mPuschTX:Landroid/widget/RadioButton;

    invoke-virtual {v0, p0}, Landroid/widget/RadioButton;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 152
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mButtonSet:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 154
    new-instance v0, Landroid/widget/ArrayAdapter;

    const v1, 0x1090008

    invoke-direct {v0, p0, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    .line 157
    .local v0, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/CharSequence;>;"
    const v2, 0x7f010092

    invoke-static {p0, v2, v1}, Landroid/widget/ArrayAdapter;->createFromResource(Landroid/content/Context;II)Landroid/widget/ArrayAdapter;

    move-result-object v0

    .line 159
    const v3, 0x1090009

    invoke-virtual {v0, v3}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 160
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mBand:Landroid/widget/Spinner;

    invoke-virtual {v3, v0}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 162
    const v3, 0x7f010091

    invoke-static {p0, v3, v1}, Landroid/widget/ArrayAdapter;->createFromResource(Landroid/content/Context;II)Landroid/widget/ArrayAdapter;

    move-result-object v0

    .line 165
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mBandWidth:Landroid/widget/Spinner;

    invoke-virtual {v3, v0}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 167
    const v3, 0x7f010093

    invoke-static {p0, v3, v1}, Landroid/widget/ArrayAdapter;->createFromResource(Landroid/content/Context;II)Landroid/widget/ArrayAdapter;

    move-result-object v0

    .line 169
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mMcs:Landroid/widget/Spinner;

    invoke-virtual {v3, v0}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 171
    const v3, 0x7f010094

    invoke-static {p0, v3, v1}, Landroid/widget/ArrayAdapter;->createFromResource(Landroid/content/Context;II)Landroid/widget/ArrayAdapter;

    move-result-object v0

    .line 173
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mScsConfig:Landroid/widget/Spinner;

    invoke-virtual {v1, v0}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 175
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mFreqRangeArray:[Ljava/lang/String;

    .line 178
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mBand:Landroid/widget/Spinner;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR$1;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR$1;-><init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;)V

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 190
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->restoreState()V

    .line 191
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->onTxModeChange()V

    .line 192
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mFreq:Landroid/widget/EditText;

    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->getDefaultFreq()Ljava/lang/Long;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 193
    return-void
.end method
