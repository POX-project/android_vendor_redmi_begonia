.class public Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;
.super Landroid/app/Activity;
.source "RfDesenseTxTestLteCA.java"

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;
.implements Landroid/widget/AdapterView$OnItemSelectedListener;


# static fields
.field private static final DEFAULT_BAND:I = 0x2

.field private static final DEFAULT_BAND_WIDTH:I = 0x0

.field private static final DEFAULT_DUPLEX:I = 0x1

.field private static final DEFAULT_FREQ:Ljava/lang/String; = "17475"

.field private static final DEFAULT_MCS:I = 0x0

.field private static final DEFAULT_MODE_SCELL1:I = 0x0

.field private static final DEFAULT_MODE_SCELL2:I = 0x0

.field private static final DEFAULT_POWER:Ljava/lang/String; = "5"

.field private static final DEFAULT_TDD_CONFIG:I = 0x0

.field private static final DEFAULT_TDD_SPECIAL:I = 0x0

.field private static final DEFAULT_VRB_LENGTH:Ljava/lang/String; = "1"

.field private static final DEFAULT_VRB_START:Ljava/lang/String; = "0"

.field private static final DUPLEX_FDD:I = 0x1

.field private static final DUPLEX_TDD:I = 0x0

.field private static final FDD_BAND_MAX:I = 0x1f

.field private static final FDD_BAND_MIN:I = 0x1

.field private static final HINT:I = 0x1

.field private static final KEY_BAND_PCELL:Ljava/lang/String; = "band_pcell"

.field private static final KEY_BAND_SCELL1:Ljava/lang/String; = "band_scell1"

.field private static final KEY_BAND_SCELL2:Ljava/lang/String; = "band_scell2"

.field private static final KEY_BAND_WIDTH_PCELL:Ljava/lang/String; = "bandwidth_pcell"

.field private static final KEY_BAND_WIDTH_SCELL1:Ljava/lang/String; = "bandwidth_scell1"

.field private static final KEY_BAND_WIDTH_SCELL2:Ljava/lang/String; = "bandwidth_scell2"

.field private static final KEY_DUPLEX_PCELL:Ljava/lang/String; = "duplex_pcell"

.field private static final KEY_DUPLEX_SCELL1:Ljava/lang/String; = "duplex_scell1"

.field private static final KEY_DUPLEX_SCELL2:Ljava/lang/String; = "duplex_scell2"

.field private static final KEY_FREQ_PCELL:Ljava/lang/String; = "freq_pcell"

.field private static final KEY_FREQ_SCELL1:Ljava/lang/String; = "freq_scell1"

.field private static final KEY_FREQ_SCELL2:Ljava/lang/String; = "freq_scell2"

.field private static final KEY_MCS_PCELL:Ljava/lang/String; = "mcs_pcell"

.field private static final KEY_MCS_SCELL1:Ljava/lang/String; = "mcs_scell1"

.field private static final KEY_MCS_SCELL2:Ljava/lang/String; = "mcs_scell2"

.field private static final KEY_MODE_SCELL1:Ljava/lang/String; = "mode_scell1"

.field private static final KEY_MODE_SCELL2:Ljava/lang/String; = "mode_scell2"

.field private static final KEY_POWER_PCELL:Ljava/lang/String; = "power_pcell"

.field private static final KEY_POWER_SCELL1:Ljava/lang/String; = "power_scell1"

.field private static final KEY_POWER_SCELL2:Ljava/lang/String; = "power_scell2"

.field public static final KEY_STATE:Ljava/lang/String; = "rf_state"

.field private static final KEY_TDD_CONFIG_PCELL:Ljava/lang/String; = "tdd_config_pcell"

.field private static final KEY_TDD_CONFIG_SCELL1:Ljava/lang/String; = "tdd_config_scell1"

.field private static final KEY_TDD_CONFIG_SCELL2:Ljava/lang/String; = "tdd_config_scell2"

.field private static final KEY_TDD_SPECIAL_PCELL:Ljava/lang/String; = "tdd_special_pcell"

.field private static final KEY_TDD_SPECIAL_SCELL1:Ljava/lang/String; = "tdd_special_scell1"

.field private static final KEY_TDD_SPECIAL_SCELL2:Ljava/lang/String; = "tdd_special_scell2"

.field private static final KEY_VRB_LENGTH_PCELL:Ljava/lang/String; = "vrb_length_pcell"

.field private static final KEY_VRB_LENGTH_SCELL1:Ljava/lang/String; = "vrb_length_scell1"

.field private static final KEY_VRB_LENGTH_SCELL2:Ljava/lang/String; = "vrb_length_scell2"

.field private static final KEY_VRB_START_PCELL:Ljava/lang/String; = "vrb_start_pcell"

.field private static final KEY_VRB_START_SCELL1:Ljava/lang/String; = "vrb_start_scell1"

.field private static final KEY_VRB_START_SCELL2:Ljava/lang/String; = "vrb_start_scell2"

.field private static final MSG_NW_RF_OFF:I = 0x5

.field private static final PAUSE:I = 0x2

.field private static final POWER_MAX:I = 0x17

.field private static final POWER_MIN:I = -0x32

.field private static final SIM_CARD_INSERT:I = 0x2

.field private static final START:I = 0x1

.field public static final STATE_NONE:I = 0x0

.field public static final STATE_PAUSED:I = 0x2

.field public static final STATE_STARTED:I = 0x1

.field public static final TAG:Ljava/lang/String; = "RfDesenseTxTestLteCA"

.field private static final TDD_BAND_MAX:I = 0x2c

.field private static final TDD_BAND_MIN:I = 0x21

.field private static final TDD_CONFIG_MAX:I = 0x6

.field private static final TDD_SPECIAL_MAX:I = 0x9

.field private static final UPDATE_BUTTON:I = 0x4

.field private static final VRB_LENGTH_MAX:I = 0x64

.field private static final VRB_LENGTH_MIN:I = 0x1

.field private static final VRB_START_MAX:I = 0x63

.field private static final VRB_START_MIN:I


# instance fields
.field private mBand:[Landroid/widget/Spinner;

.field private mBandWidth:[Landroid/widget/Spinner;

.field private mButtonPause:Landroid/widget/Button;

.field private mButtonStart:Landroid/widget/Button;

.field private mCellCount:I

.field private mFdd:[Landroid/widget/RadioButton;

.field private mFreq:[Landroid/widget/EditText;

.field private mFreqRange:[Landroid/widget/TextView;

.field private mFreqRangeArray:[Ljava/lang/String;

.field private mHandler:Landroid/os/Handler;

.field private mMcs:[Landroid/widget/Spinner;

.field private mPhone:Lcom/android/internal/telephony/Phone;

.field private mPower:[Landroid/widget/EditText;

.field private mRbCellSelect:[Landroid/widget/CheckBox;

.field private mState:I

.field private mTbCellConfig:[Landroid/widget/TableLayout;

.field private mTdd:[Landroid/widget/RadioButton;

.field private mTddConfig:[Landroid/widget/Spinner;

.field private mTddSpecial:[Landroid/widget/Spinner;

.field private mToast:Landroid/widget/Toast;

.field private mVrbLength:[Landroid/widget/EditText;

.field private mVrbStart:[Landroid/widget/EditText;

.field private phoneid:I

.field private sCi:[Lcom/android/internal/telephony/CommandsInterface;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 74
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 154
    const/4 v0, 0x3

    new-array v1, v0, [Landroid/widget/TableLayout;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTbCellConfig:[Landroid/widget/TableLayout;

    .line 155
    new-array v1, v0, [Landroid/widget/CheckBox;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mRbCellSelect:[Landroid/widget/CheckBox;

    .line 157
    new-array v1, v0, [Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFdd:[Landroid/widget/RadioButton;

    .line 158
    new-array v1, v0, [Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTdd:[Landroid/widget/RadioButton;

    .line 159
    new-array v1, v0, [Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBand:[Landroid/widget/Spinner;

    .line 160
    new-array v1, v0, [Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBandWidth:[Landroid/widget/Spinner;

    .line 161
    new-array v1, v0, [Landroid/widget/EditText;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFreq:[Landroid/widget/EditText;

    .line 162
    new-array v1, v0, [Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddConfig:[Landroid/widget/Spinner;

    .line 163
    new-array v1, v0, [Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddSpecial:[Landroid/widget/Spinner;

    .line 164
    new-array v1, v0, [Landroid/widget/EditText;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbStart:[Landroid/widget/EditText;

    .line 165
    new-array v1, v0, [Landroid/widget/EditText;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbLength:[Landroid/widget/EditText;

    .line 166
    new-array v1, v0, [Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mMcs:[Landroid/widget/Spinner;

    .line 167
    new-array v1, v0, [Landroid/widget/EditText;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mPower:[Landroid/widget/EditText;

    .line 168
    new-array v0, v0, [Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFreqRange:[Landroid/widget/TextView;

    .line 171
    const/4 v0, 0x2

    new-array v0, v0, [Lcom/android/internal/telephony/CommandsInterface;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->sCi:[Lcom/android/internal/telephony/CommandsInterface;

    .line 172
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->phoneid:I

    .line 173
    const/4 v1, 0x0

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mToast:Landroid/widget/Toast;

    .line 175
    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mState:I

    .line 176
    const/4 v0, 0x1

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mCellCount:I

    .line 177
    new-instance v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA$1;-><init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;
    .param p1, "x1"    # Ljava/lang/String;

    .line 74
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->showToast(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;

    .line 74
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;

    .line 74
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->updateButtons()V

    return-void
.end method

.method static synthetic access$302(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;
    .param p1, "x1"    # I

    .line 74
    iput p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mState:I

    return p1
.end method

.method private checkValues()Z
    .locals 4

    .line 495
    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbStart:[Landroid/widget/EditText;

    aget-object v1, v1, v0

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    .line 496
    .local v1, "value":I
    if-ltz v1, :cond_5

    const/16 v2, 0x63

    if-le v1, v2, :cond_0

    goto :goto_2

    .line 500
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbLength:[Landroid/widget/EditText;

    aget-object v2, v2, v0

    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    move v1, v2

    .line 501
    const/4 v2, 0x1

    if-lt v1, v2, :cond_4

    const/16 v3, 0x64

    if-le v1, v3, :cond_1

    goto :goto_1

    .line 505
    :cond_1
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mPower:[Landroid/widget/EditText;

    aget-object v3, v3, v0

    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    move v1, v3

    .line 506
    const/16 v3, -0x32

    if-lt v1, v3, :cond_3

    const/16 v3, 0x17

    if-le v1, v3, :cond_2

    goto :goto_0

    .line 513
    .end local v1    # "value":I
    :cond_2
    nop

    .line 514
    return v2

    .line 507
    .restart local v1    # "value":I
    :cond_3
    :goto_0
    const-string v2, "Invalid Power Level."

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->showToast(Ljava/lang/String;)V

    .line 508
    return v0

    .line 502
    :cond_4
    :goto_1
    const-string v2, "Invalid VRB Length."

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->showToast(Ljava/lang/String;)V

    .line 503
    return v0

    .line 497
    :cond_5
    :goto_2
    const-string v2, "Invalid VRB Start."

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->showToast(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 498
    return v0

    .line 510
    .end local v1    # "value":I
    :catch_0
    move-exception v1

    .line 511
    .local v1, "e":Ljava/lang/NumberFormatException;
    const-string v2, "Invalid Value."

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->showToast(Ljava/lang/String;)V

    .line 512
    return v0
.end method

.method private disableAllButtons()V
    .locals 2

    .line 636
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mButtonStart:Landroid/widget/Button;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 637
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mButtonPause:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 638
    return-void
.end method

.method private getDefaultFreq(I)I
    .locals 5
    .param p1, "cell_index"    # I

    .line 623
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBand:[Landroid/widget/Spinner;

    aget-object v0, v0, p1

    invoke-virtual {v0}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v0

    .line 624
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTdd:[Landroid/widget/RadioButton;

    aget-object v1, v1, p1

    invoke-virtual {v1}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v1

    const/4 v2, 0x1

    if-eqz v1, :cond_0

    const/16 v1, 0x21

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    add-int/2addr v0, v1

    .line 625
    .local v0, "band":I
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFreqRangeArray:[Ljava/lang/String;

    add-int/lit8 v3, v0, -0x1

    aget-object v1, v1, v3

    const-string v3, ","

    invoke-virtual {v1, v3}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 627
    .local v1, "range":[Ljava/lang/String;
    const/4 v3, 0x0

    :try_start_0
    aget-object v3, v1, v3

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    .line 628
    .local v3, "min":I
    aget-object v2, v1, v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    .line 629
    .local v2, "max":I
    add-int v4, v3, v2

    div-int/lit8 v4, v4, 0x2
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    return v4

    .line 630
    .end local v2    # "max":I
    .end local v3    # "min":I
    :catch_0
    move-exception v2

    .line 631
    .local v2, "e":Ljava/lang/NumberFormatException;
    new-instance v3, Ljava/lang/RuntimeException;

    const-string v4, "Check the array resource"

    invoke-direct {v3, v4}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v3
.end method

.method private onDuplexChange(I)V
    .locals 9
    .param p1, "cell_index"    # I

    .line 458
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTdd:[Landroid/widget/RadioButton;

    aget-object v0, v0, p1

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    .line 459
    .local v0, "tdd":Z
    if-eqz v0, :cond_0

    const/16 v1, 0x21

    goto :goto_0

    :cond_0
    const/4 v1, 0x1

    .line 460
    .local v1, "bandMin":I
    :goto_0
    if-eqz v0, :cond_1

    const/16 v2, 0x2c

    goto :goto_1

    :cond_1
    const/16 v2, 0x1f

    .line 461
    .local v2, "bandMax":I
    :goto_1
    const/4 v3, 0x0

    if-eqz v0, :cond_2

    const/4 v4, 0x6

    goto :goto_2

    :cond_2
    move v4, v3

    .line 462
    .local v4, "configMax":I
    :goto_2
    if-eqz v0, :cond_3

    const/16 v5, 0x9

    goto :goto_3

    :cond_3
    move v5, v3

    .line 463
    .local v5, "specialMax":I
    :goto_3
    iget-object v6, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddConfig:[Landroid/widget/Spinner;

    aget-object v6, v6, p1

    invoke-virtual {v6, v0}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 464
    iget-object v6, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddSpecial:[Landroid/widget/Spinner;

    aget-object v6, v6, p1

    invoke-virtual {v6, v0}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 465
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "tdd = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    const-string v7, "RfDesenseTxTestLteCA"

    invoke-static {v7, v6}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 467
    iget-object v6, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBand:[Landroid/widget/Spinner;

    aget-object v6, v6, p1

    .line 468
    invoke-virtual {v6}, Landroid/widget/Spinner;->getAdapter()Landroid/widget/SpinnerAdapter;

    move-result-object v6

    check-cast v6, Landroid/widget/ArrayAdapter;

    .line 469
    .local v6, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/CharSequence;>;"
    invoke-virtual {v6}, Landroid/widget/ArrayAdapter;->clear()V

    .line 470
    move v7, v1

    .local v7, "i":I
    :goto_4
    if-gt v7, v2, :cond_4

    .line 471
    invoke-static {v7}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v6, v8}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 470
    add-int/lit8 v7, v7, 0x1

    goto :goto_4

    .line 473
    .end local v7    # "i":I
    :cond_4
    invoke-virtual {v6}, Landroid/widget/ArrayAdapter;->notifyDataSetChanged()V

    .line 474
    iget-object v7, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBand:[Landroid/widget/Spinner;

    aget-object v7, v7, p1

    if-eqz v0, :cond_5

    goto :goto_5

    :cond_5
    const/4 v3, 0x2

    :goto_5
    invoke-virtual {v7, v3}, Landroid/widget/Spinner;->setSelection(I)V

    .line 476
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddConfig:[Landroid/widget/Spinner;

    aget-object v3, v3, p1

    invoke-virtual {v3}, Landroid/widget/Spinner;->getAdapter()Landroid/widget/SpinnerAdapter;

    move-result-object v3

    check-cast v3, Landroid/widget/ArrayAdapter;

    .line 477
    .end local v6    # "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/CharSequence;>;"
    .local v3, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/CharSequence;>;"
    invoke-virtual {v3}, Landroid/widget/ArrayAdapter;->clear()V

    .line 478
    const/4 v6, 0x0

    .local v6, "i":I
    :goto_6
    if-gt v6, v4, :cond_6

    .line 479
    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v3, v7}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 478
    add-int/lit8 v6, v6, 0x1

    goto :goto_6

    .line 481
    .end local v6    # "i":I
    :cond_6
    invoke-virtual {v3}, Landroid/widget/ArrayAdapter;->notifyDataSetChanged()V

    .line 483
    iget-object v6, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddSpecial:[Landroid/widget/Spinner;

    aget-object v6, v6, p1

    invoke-virtual {v6}, Landroid/widget/Spinner;->getAdapter()Landroid/widget/SpinnerAdapter;

    move-result-object v6

    move-object v3, v6

    check-cast v3, Landroid/widget/ArrayAdapter;

    .line 484
    invoke-virtual {v3}, Landroid/widget/ArrayAdapter;->clear()V

    .line 485
    const/4 v6, 0x0

    .restart local v6    # "i":I
    :goto_7
    if-gt v6, v5, :cond_7

    .line 486
    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v3, v7}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 485
    add-int/lit8 v6, v6, 0x1

    goto :goto_7

    .line 488
    .end local v6    # "i":I
    :cond_7
    invoke-virtual {v3}, Landroid/widget/ArrayAdapter;->notifyDataSetChanged()V

    .line 490
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->setDefaultValue(I)V

    .line 491
    return-void
.end method

.method private restoreState()V
    .locals 11

    .line 564
    const-string v0, "rfdesense_tx_test"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 566
    .local v0, "pref":Landroid/content/SharedPreferences;
    const-string v2, "duplex_pcell"

    const/4 v3, 0x1

    invoke-interface {v0, v2, v3}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v2

    .line 567
    .local v2, "duplex":I
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFdd:[Landroid/widget/RadioButton;

    aget-object v4, v4, v1

    if-ne v2, v3, :cond_0

    move v5, v3

    goto :goto_0

    :cond_0
    move v5, v1

    :goto_0
    invoke-virtual {v4, v5}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 568
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTdd:[Landroid/widget/RadioButton;

    aget-object v4, v4, v1

    if-nez v2, :cond_1

    move v5, v3

    goto :goto_1

    :cond_1
    move v5, v1

    :goto_1
    invoke-virtual {v4, v5}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 569
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBand:[Landroid/widget/Spinner;

    aget-object v4, v4, v1

    const-string v5, "band_pcell"

    const/4 v6, 0x2

    invoke-interface {v0, v5, v6}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v5

    invoke-virtual {v4, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 570
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBandWidth:[Landroid/widget/Spinner;

    aget-object v4, v4, v1

    const-string v5, "bandwidth_pcell"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v5

    invoke-virtual {v4, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 571
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFreq:[Landroid/widget/EditText;

    aget-object v4, v4, v1

    const-string v5, "freq_pcell"

    const-string v7, "17475"

    invoke-interface {v0, v5, v7}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 572
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddConfig:[Landroid/widget/Spinner;

    aget-object v4, v4, v1

    const-string v5, "tdd_config_pcell"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v5

    invoke-virtual {v4, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 573
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddSpecial:[Landroid/widget/Spinner;

    aget-object v4, v4, v1

    const-string v5, "tdd_special_pcell"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v5

    invoke-virtual {v4, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 574
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbStart:[Landroid/widget/EditText;

    aget-object v4, v4, v1

    const-string v5, "vrb_start_pcell"

    const-string v8, "0"

    invoke-interface {v0, v5, v8}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 575
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbLength:[Landroid/widget/EditText;

    aget-object v4, v4, v1

    const-string v5, "vrb_length_pcell"

    const-string v9, "1"

    invoke-interface {v0, v5, v9}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 576
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mMcs:[Landroid/widget/Spinner;

    aget-object v4, v4, v1

    const-string v5, "mcs_pcell"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v5

    invoke-virtual {v4, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 577
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mPower:[Landroid/widget/EditText;

    aget-object v4, v4, v1

    const-string v5, "power_pcell"

    const-string v10, "5"

    invoke-interface {v0, v5, v10}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 579
    const-string v4, "duplex_scell1"

    invoke-interface {v0, v4, v3}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v2

    .line 580
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFdd:[Landroid/widget/RadioButton;

    aget-object v4, v4, v3

    if-ne v2, v3, :cond_2

    move v5, v3

    goto :goto_2

    :cond_2
    move v5, v1

    :goto_2
    invoke-virtual {v4, v5}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 581
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTdd:[Landroid/widget/RadioButton;

    aget-object v4, v4, v3

    if-nez v2, :cond_3

    move v5, v3

    goto :goto_3

    :cond_3
    move v5, v1

    :goto_3
    invoke-virtual {v4, v5}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 582
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBand:[Landroid/widget/Spinner;

    aget-object v4, v4, v3

    const-string v5, "band_scell1"

    invoke-interface {v0, v5, v6}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v5

    invoke-virtual {v4, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 583
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBandWidth:[Landroid/widget/Spinner;

    aget-object v4, v4, v3

    const-string v5, "bandwidth_scell1"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v5

    invoke-virtual {v4, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 584
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFreq:[Landroid/widget/EditText;

    aget-object v4, v4, v3

    const-string v5, "freq_scell1"

    invoke-interface {v0, v5, v7}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 585
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddConfig:[Landroid/widget/Spinner;

    aget-object v4, v4, v3

    const-string v5, "tdd_config_scell1"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v5

    invoke-virtual {v4, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 586
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddSpecial:[Landroid/widget/Spinner;

    aget-object v4, v4, v3

    const-string v5, "tdd_special_scell1"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v5

    invoke-virtual {v4, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 587
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbStart:[Landroid/widget/EditText;

    aget-object v4, v4, v3

    const-string v5, "vrb_start_scell1"

    invoke-interface {v0, v5, v8}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 588
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbLength:[Landroid/widget/EditText;

    aget-object v4, v4, v3

    const-string v5, "vrb_length_scell1"

    invoke-interface {v0, v5, v9}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 589
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mMcs:[Landroid/widget/Spinner;

    aget-object v4, v4, v3

    const-string v5, "mcs_scell1"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v5

    invoke-virtual {v4, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 590
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mPower:[Landroid/widget/EditText;

    aget-object v4, v4, v3

    const-string v5, "power_scell1"

    invoke-interface {v0, v5, v10}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 592
    const-string v4, "duplex_scell2"

    invoke-interface {v0, v4, v3}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v2

    .line 593
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFdd:[Landroid/widget/RadioButton;

    aget-object v4, v4, v6

    if-ne v2, v3, :cond_4

    move v5, v3

    goto :goto_4

    :cond_4
    move v5, v1

    :goto_4
    invoke-virtual {v4, v5}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 594
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTdd:[Landroid/widget/RadioButton;

    aget-object v4, v4, v6

    if-nez v2, :cond_5

    move v5, v3

    goto :goto_5

    :cond_5
    move v5, v1

    :goto_5
    invoke-virtual {v4, v5}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 595
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBand:[Landroid/widget/Spinner;

    aget-object v4, v4, v6

    const-string v5, "band_scell2"

    invoke-interface {v0, v5, v6}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v5

    invoke-virtual {v4, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 596
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBandWidth:[Landroid/widget/Spinner;

    aget-object v4, v4, v6

    const-string v5, "bandwidth_scell2"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v5

    invoke-virtual {v4, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 597
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFreq:[Landroid/widget/EditText;

    aget-object v4, v4, v6

    const-string v5, "freq_scell2"

    invoke-interface {v0, v5, v7}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 598
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddConfig:[Landroid/widget/Spinner;

    aget-object v4, v4, v6

    const-string v5, "tdd_config_scell2"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v5

    invoke-virtual {v4, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 599
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddSpecial:[Landroid/widget/Spinner;

    aget-object v4, v4, v6

    const-string v5, "tdd_special_scell2"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v5

    invoke-virtual {v4, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 600
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbStart:[Landroid/widget/EditText;

    aget-object v4, v4, v6

    const-string v5, "vrb_start_scell2"

    invoke-interface {v0, v5, v8}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 601
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbLength:[Landroid/widget/EditText;

    aget-object v4, v4, v6

    const-string v5, "vrb_length_scell2"

    invoke-interface {v0, v5, v9}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 602
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mMcs:[Landroid/widget/Spinner;

    aget-object v4, v4, v6

    const-string v5, "mcs_scell2"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v5

    invoke-virtual {v4, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 603
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mPower:[Landroid/widget/EditText;

    aget-object v4, v4, v6

    const-string v5, "power_scell2"

    invoke-interface {v0, v5, v10}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 605
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mRbCellSelect:[Landroid/widget/CheckBox;

    aget-object v4, v4, v3

    const-string v5, "mode_scell1"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v5

    if-ne v5, v3, :cond_6

    move v5, v3

    goto :goto_6

    :cond_6
    move v5, v1

    :goto_6
    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 606
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mRbCellSelect:[Landroid/widget/CheckBox;

    aget-object v4, v4, v6

    const-string v5, "mode_scell2"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v5

    if-ne v5, v3, :cond_7

    goto :goto_7

    :cond_7
    move v3, v1

    :goto_7
    invoke-virtual {v4, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 607
    const-string v3, "rf_state"

    invoke-interface {v0, v3, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mState:I

    .line 608
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->updateButtons()V

    .line 609
    return-void
.end method

.method private saveState()V
    .locals 5

    .line 518
    const-string v0, "rfdesense_tx_test"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 519
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 521
    .local v0, "editor":Landroid/content/SharedPreferences$Editor;
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTdd:[Landroid/widget/RadioButton;

    aget-object v2, v2, v1

    invoke-virtual {v2}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v2

    const/4 v3, 0x1

    xor-int/2addr v2, v3

    const-string v4, "duplex_pcell"

    invoke-interface {v0, v4, v2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 522
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBand:[Landroid/widget/Spinner;

    aget-object v2, v2, v1

    invoke-virtual {v2}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v2

    const-string v4, "band_pcell"

    invoke-interface {v0, v4, v2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 523
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBandWidth:[Landroid/widget/Spinner;

    aget-object v2, v2, v1

    invoke-virtual {v2}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v2

    const-string v4, "bandwidth_pcell"

    invoke-interface {v0, v4, v2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 524
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFreq:[Landroid/widget/EditText;

    aget-object v2, v2, v1

    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v4, "freq_pcell"

    invoke-interface {v0, v4, v2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 525
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddConfig:[Landroid/widget/Spinner;

    aget-object v2, v2, v1

    invoke-virtual {v2}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v2

    const-string v4, "tdd_config_pcell"

    invoke-interface {v0, v4, v2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 526
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddSpecial:[Landroid/widget/Spinner;

    aget-object v2, v2, v1

    invoke-virtual {v2}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v2

    const-string v4, "tdd_special_pcell"

    invoke-interface {v0, v4, v2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 527
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbStart:[Landroid/widget/EditText;

    aget-object v2, v2, v1

    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v4, "vrb_start_pcell"

    invoke-interface {v0, v4, v2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 528
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbLength:[Landroid/widget/EditText;

    aget-object v2, v2, v1

    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v4, "vrb_length_pcell"

    invoke-interface {v0, v4, v2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 529
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mMcs:[Landroid/widget/Spinner;

    aget-object v2, v2, v1

    invoke-virtual {v2}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v2

    const-string v4, "mcs_pcell"

    invoke-interface {v0, v4, v2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 530
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mPower:[Landroid/widget/EditText;

    aget-object v1, v2, v1

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "power_pcell"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 532
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTdd:[Landroid/widget/RadioButton;

    aget-object v1, v1, v3

    invoke-virtual {v1}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v1

    xor-int/2addr v1, v3

    const-string v2, "duplex_scell1"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 533
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBand:[Landroid/widget/Spinner;

    aget-object v1, v1, v3

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v2, "band_scell1"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 534
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBandWidth:[Landroid/widget/Spinner;

    aget-object v1, v1, v3

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v2, "bandwidth_scell1"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 535
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFreq:[Landroid/widget/EditText;

    aget-object v1, v1, v3

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "freq_scell1"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 536
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddConfig:[Landroid/widget/Spinner;

    aget-object v1, v1, v3

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v2, "tdd_config_scell1"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 537
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddSpecial:[Landroid/widget/Spinner;

    aget-object v1, v1, v3

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v2, "tdd_special_scell1"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 538
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbStart:[Landroid/widget/EditText;

    aget-object v1, v1, v3

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "vrb_start_scell1"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 539
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbLength:[Landroid/widget/EditText;

    aget-object v1, v1, v3

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "vrb_length_scell1"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 540
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mMcs:[Landroid/widget/Spinner;

    aget-object v1, v1, v3

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v2, "mcs_scell1"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 541
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mPower:[Landroid/widget/EditText;

    aget-object v1, v1, v3

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "power_scell1"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 543
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTdd:[Landroid/widget/RadioButton;

    const/4 v2, 0x2

    aget-object v1, v1, v2

    invoke-virtual {v1}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v1

    xor-int/2addr v1, v3

    const-string v4, "duplex_scell2"

    invoke-interface {v0, v4, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 544
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBand:[Landroid/widget/Spinner;

    aget-object v1, v1, v2

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v4, "band_scell2"

    invoke-interface {v0, v4, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 545
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBandWidth:[Landroid/widget/Spinner;

    aget-object v1, v1, v2

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v4, "bandwidth_scell2"

    invoke-interface {v0, v4, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 546
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFreq:[Landroid/widget/EditText;

    aget-object v1, v1, v2

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v4, "freq_scell2"

    invoke-interface {v0, v4, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 547
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddConfig:[Landroid/widget/Spinner;

    aget-object v1, v1, v2

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v4, "tdd_config_scell2"

    invoke-interface {v0, v4, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 548
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddSpecial:[Landroid/widget/Spinner;

    aget-object v1, v1, v2

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v4, "tdd_special_scell2"

    invoke-interface {v0, v4, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 549
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbStart:[Landroid/widget/EditText;

    aget-object v1, v1, v2

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v4, "vrb_start_scell2"

    invoke-interface {v0, v4, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 550
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbLength:[Landroid/widget/EditText;

    aget-object v1, v1, v2

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v4, "vrb_length_scell2"

    invoke-interface {v0, v4, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 551
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mMcs:[Landroid/widget/Spinner;

    aget-object v1, v1, v2

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v4, "mcs_scell2"

    invoke-interface {v0, v4, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 552
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mPower:[Landroid/widget/EditText;

    aget-object v1, v1, v2

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v4, "power_scell2"

    invoke-interface {v0, v4, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 554
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mRbCellSelect:[Landroid/widget/CheckBox;

    aget-object v1, v1, v3

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    const-string v3, "mode_scell1"

    invoke-interface {v0, v3, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 555
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mRbCellSelect:[Landroid/widget/CheckBox;

    aget-object v1, v1, v2

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    const-string v2, "mode_scell2"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 558
    iget v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mState:I

    const-string v2, "rf_state"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 560
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 561
    return-void
.end method

.method private sendAtCommand(Ljava/lang/String;I)V
    .locals 4
    .param p1, "str"    # Ljava/lang/String;
    .param p2, "what"    # I

    .line 655
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    const/4 v2, 0x1

    const-string v3, ""

    aput-object v3, v0, v2

    .line 656
    .local v0, "cmd":[Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "send: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v1, v0, v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "RfDesenseTxTestLteCA"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 657
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mHandler:Landroid/os/Handler;

    invoke-virtual {v1, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 658
    return-void
.end method

.method private setDefaultValue(I)V
    .locals 3
    .param p1, "cell_index"    # I

    .line 612
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBandWidth:[Landroid/widget/Spinner;

    aget-object v0, v0, p1

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setSelection(I)V

    .line 613
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFreq:[Landroid/widget/EditText;

    aget-object v0, v0, p1

    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->getDefaultFreq(I)I

    move-result v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 614
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddConfig:[Landroid/widget/Spinner;

    aget-object v0, v0, p1

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setSelection(I)V

    .line 615
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddSpecial:[Landroid/widget/Spinner;

    aget-object v0, v0, p1

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setSelection(I)V

    .line 616
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbStart:[Landroid/widget/EditText;

    aget-object v0, v0, p1

    const-string v2, "0"

    invoke-virtual {v0, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 617
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbLength:[Landroid/widget/EditText;

    aget-object v0, v0, p1

    const-string v2, "1"

    invoke-virtual {v0, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 618
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mMcs:[Landroid/widget/Spinner;

    aget-object v0, v0, p1

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setSelection(I)V

    .line 619
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mPower:[Landroid/widget/EditText;

    aget-object v0, v0, p1

    const-string v1, "5"

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 620
    return-void
.end method

.method private showToast(Ljava/lang/String;)V
    .locals 1
    .param p1, "msg"    # Ljava/lang/String;

    .line 646
    const-string v0, "RfDesenseTxTestLteCA"

    invoke-static {v0, p1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 647
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mToast:Landroid/widget/Toast;

    if-eqz v0, :cond_0

    .line 648
    invoke-virtual {v0}, Landroid/widget/Toast;->cancel()V

    .line 650
    :cond_0
    const/4 v0, 0x1

    invoke-static {p0, p1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mToast:Landroid/widget/Toast;

    .line 651
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 652
    return-void
.end method

.method private updateButtons()V
    .locals 5

    .line 641
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mButtonStart:Landroid/widget/Button;

    iget v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mState:I

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eqz v1, :cond_1

    const/4 v4, 0x2

    if-ne v1, v4, :cond_0

    goto :goto_0

    :cond_0
    move v1, v2

    goto :goto_1

    :cond_1
    :goto_0
    move v1, v3

    :goto_1
    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 642
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mButtonPause:Landroid/widget/Button;

    iget v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mState:I

    if-ne v1, v3, :cond_2

    move v2, v3

    :cond_2
    invoke-virtual {v0, v2}, Landroid/widget/Button;->setEnabled(Z)V

    .line 643
    return-void
.end method


# virtual methods
.method public onBackPressed()V
    .locals 2

    .line 349
    iget v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mState:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    .line 350
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->showDialog(I)V

    goto :goto_0

    .line 352
    :cond_0
    const/4 v0, 0x0

    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->setAirplaneModeEnabled(Z)V

    .line 353
    invoke-super {p0}, Landroid/app/Activity;->onBackPressed()V

    .line 355
    :goto_0
    return-void
.end method

.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 5
    .param p1, "v"    # Landroid/widget/CompoundButton;
    .param p2, "checked"    # Z

    .line 359
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getId()I

    move-result v0

    const/16 v1, 0x8

    const/4 v2, 0x1

    const/4 v3, 0x0

    const/4 v4, 0x2

    sparse-switch v0, :sswitch_data_0

    goto :goto_0

    .line 374
    :sswitch_0
    if-eqz p2, :cond_0

    .line 375
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTbCellConfig:[Landroid/widget/TableLayout;

    aget-object v0, v0, v4

    invoke-virtual {v0, v3}, Landroid/widget/TableLayout;->setVisibility(I)V

    .line 376
    const/4 v0, 0x3

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mCellCount:I

    goto :goto_0

    .line 378
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTbCellConfig:[Landroid/widget/TableLayout;

    aget-object v0, v0, v4

    invoke-virtual {v0, v1}, Landroid/widget/TableLayout;->setVisibility(I)V

    .line 379
    iput v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mCellCount:I

    .line 381
    goto :goto_0

    .line 361
    :sswitch_1
    if-eqz p2, :cond_1

    .line 362
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mRbCellSelect:[Landroid/widget/CheckBox;

    aget-object v0, v0, v4

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 363
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTbCellConfig:[Landroid/widget/TableLayout;

    aget-object v0, v0, v2

    invoke-virtual {v0, v3}, Landroid/widget/TableLayout;->setVisibility(I)V

    .line 364
    iput v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mCellCount:I

    goto :goto_0

    .line 366
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mRbCellSelect:[Landroid/widget/CheckBox;

    aget-object v0, v0, v4

    invoke-virtual {v0, v3}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 367
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mRbCellSelect:[Landroid/widget/CheckBox;

    aget-object v0, v0, v4

    invoke-virtual {v0, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 368
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTbCellConfig:[Landroid/widget/TableLayout;

    aget-object v0, v0, v2

    invoke-virtual {v0, v1}, Landroid/widget/TableLayout;->setVisibility(I)V

    .line 369
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTbCellConfig:[Landroid/widget/TableLayout;

    aget-object v0, v0, v4

    invoke-virtual {v0, v1}, Landroid/widget/TableLayout;->setVisibility(I)V

    .line 370
    iput v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mCellCount:I

    .line 372
    goto :goto_0

    .line 392
    :sswitch_2
    invoke-direct {p0, v4}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->onDuplexChange(I)V

    .line 393
    goto :goto_0

    .line 388
    :sswitch_3
    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->onDuplexChange(I)V

    .line 389
    goto :goto_0

    .line 384
    :sswitch_4
    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->onDuplexChange(I)V

    .line 385
    nop

    .line 397
    :goto_0
    return-void

    nop

    :sswitch_data_0
    .sparse-switch
        0x7f0603af -> :sswitch_4
        0x7f0603b0 -> :sswitch_3
        0x7f0603b1 -> :sswitch_2
        0x7f06065a -> :sswitch_1
        0x7f06065b -> :sswitch_0
        0x7f060706 -> :sswitch_4
        0x7f060707 -> :sswitch_3
        0x7f060708 -> :sswitch_2
    .end sparse-switch
.end method

.method public onClick(Landroid/view/View;)V
    .locals 7
    .param p1, "v"    # Landroid/view/View;

    .line 401
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    const v1, 0x7f060259

    if-eq v0, v1, :cond_4

    const v1, 0x7f06025b

    if-eq v0, v1, :cond_0

    goto/16 :goto_2

    .line 403
    :cond_0
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->checkValues()Z

    move-result v0

    if-nez v0, :cond_1

    .line 404
    goto/16 :goto_2

    .line 406
    :cond_1
    const-string v0, ""

    .line 408
    .local v0, "command":Ljava/lang/String;
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    iget v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mCellCount:I

    const/4 v3, 0x1

    if-ge v1, v2, :cond_3

    .line 409
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "AT+EGMC=1,\"lte_tx\",1,1,"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mCellCount:I

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, ","

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v5, v1, 0x1

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 410
    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTdd:[Landroid/widget/RadioButton;

    aget-object v5, v5, v1

    invoke-virtual {v5}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v5

    xor-int/2addr v5, v3

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBand:[Landroid/widget/Spinner;

    aget-object v5, v5, v1

    .line 411
    invoke-virtual {v5}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v5

    iget-object v6, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTdd:[Landroid/widget/RadioButton;

    aget-object v6, v6, v1

    invoke-virtual {v6}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v6

    if-eqz v6, :cond_2

    .line 412
    const/16 v6, 0x21

    goto :goto_1

    :cond_2
    move v6, v3

    :goto_1
    add-int/2addr v5, v6

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBandWidth:[Landroid/widget/Spinner;

    aget-object v5, v5, v1

    .line 413
    invoke-virtual {v5}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v5

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFreq:[Landroid/widget/EditText;

    aget-object v5, v5, v1

    .line 414
    invoke-virtual {v5}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddConfig:[Landroid/widget/Spinner;

    aget-object v5, v5, v1

    .line 415
    invoke-virtual {v5}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v5

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddSpecial:[Landroid/widget/Spinner;

    aget-object v5, v5, v1

    .line 416
    invoke-virtual {v5}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v5

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbStart:[Landroid/widget/EditText;

    aget-object v5, v5, v1

    .line 417
    invoke-virtual {v5}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbLength:[Landroid/widget/EditText;

    aget-object v5, v5, v1

    .line 418
    invoke-virtual {v5}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mMcs:[Landroid/widget/Spinner;

    aget-object v5, v5, v1

    .line 419
    invoke-virtual {v5}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v5

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mPower:[Landroid/widget/EditText;

    aget-object v4, v4, v1

    .line 420
    invoke-virtual {v4}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 421
    invoke-direct {p0, v0, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->sendAtCommand(Ljava/lang/String;I)V

    .line 408
    add-int/lit8 v1, v1, 0x1

    goto/16 :goto_0

    .line 423
    .end local v1    # "i":I
    :cond_3
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->disableAllButtons()V

    .line 424
    iput v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mState:I

    .line 425
    goto :goto_2

    .line 427
    .end local v0    # "command":Ljava/lang/String;
    :cond_4
    const-string v0, "AT+EGMC=1,\"lte_tx\",1,0"

    const/4 v1, 0x2

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->sendAtCommand(Ljava/lang/String;I)V

    .line 428
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->disableAllButtons()V

    .line 429
    iput v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mState:I

    .line 430
    nop

    .line 434
    :goto_2
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 8
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 213
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 214
    const v0, 0x7f0800d1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->setContentView(I)V

    .line 215
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFdd:[Landroid/widget/RadioButton;

    const v1, 0x7f0603af

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    const/4 v2, 0x0

    aput-object v1, v0, v2

    .line 216
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTdd:[Landroid/widget/RadioButton;

    const v1, 0x7f060706

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    aput-object v1, v0, v2

    .line 217
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFdd:[Landroid/widget/RadioButton;

    aget-object v0, v0, v2

    invoke-virtual {v0, v2}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 218
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTdd:[Landroid/widget/RadioButton;

    aget-object v0, v0, v2

    invoke-virtual {v0, v2}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 220
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFdd:[Landroid/widget/RadioButton;

    const v1, 0x7f0603b0

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    const/4 v3, 0x1

    aput-object v1, v0, v3

    .line 221
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTdd:[Landroid/widget/RadioButton;

    const v1, 0x7f060707

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    aput-object v1, v0, v3

    .line 222
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFdd:[Landroid/widget/RadioButton;

    aget-object v0, v0, v3

    invoke-virtual {v0, v2}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 223
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTdd:[Landroid/widget/RadioButton;

    aget-object v0, v0, v3

    invoke-virtual {v0, v2}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 225
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFdd:[Landroid/widget/RadioButton;

    const v1, 0x7f0603b1

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    const/4 v4, 0x2

    aput-object v1, v0, v4

    .line 226
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTdd:[Landroid/widget/RadioButton;

    const v1, 0x7f060708

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    aput-object v1, v0, v4

    .line 227
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFdd:[Landroid/widget/RadioButton;

    aget-object v0, v0, v4

    invoke-virtual {v0, v2}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 228
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTdd:[Landroid/widget/RadioButton;

    aget-object v0, v0, v4

    invoke-virtual {v0, v2}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 230
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mRbCellSelect:[Landroid/widget/CheckBox;

    const v1, 0x7f060659

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    aput-object v1, v0, v2

    .line 231
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mRbCellSelect:[Landroid/widget/CheckBox;

    const v1, 0x7f06065a

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    aput-object v1, v0, v3

    .line 232
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mRbCellSelect:[Landroid/widget/CheckBox;

    const v1, 0x7f06065b

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    aput-object v1, v0, v4

    .line 233
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mRbCellSelect:[Landroid/widget/CheckBox;

    aget-object v0, v0, v2

    invoke-virtual {v0, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 234
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mRbCellSelect:[Landroid/widget/CheckBox;

    aget-object v0, v0, v2

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 235
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mRbCellSelect:[Landroid/widget/CheckBox;

    aget-object v0, v0, v3

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 236
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mRbCellSelect:[Landroid/widget/CheckBox;

    aget-object v0, v0, v3

    invoke-virtual {v0, p0}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 238
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mRbCellSelect:[Landroid/widget/CheckBox;

    aget-object v0, v0, v4

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 239
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mRbCellSelect:[Landroid/widget/CheckBox;

    aget-object v0, v0, v4

    invoke-virtual {v0, p0}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 241
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTbCellConfig:[Landroid/widget/TableLayout;

    const v1, 0x7f0600d0

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TableLayout;

    aput-object v1, v0, v2

    .line 242
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTbCellConfig:[Landroid/widget/TableLayout;

    const v1, 0x7f0600cd

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TableLayout;

    aput-object v1, v0, v3

    .line 243
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTbCellConfig:[Landroid/widget/TableLayout;

    const v1, 0x7f0600ce

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TableLayout;

    aput-object v1, v0, v4

    .line 244
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTbCellConfig:[Landroid/widget/TableLayout;

    aget-object v0, v0, v3

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/TableLayout;->setVisibility(I)V

    .line 245
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTbCellConfig:[Landroid/widget/TableLayout;

    aget-object v0, v0, v4

    invoke-virtual {v0, v1}, Landroid/widget/TableLayout;->setVisibility(I)V

    .line 247
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBand:[Landroid/widget/Spinner;

    const v1, 0x7f0601e9

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    aput-object v1, v0, v2

    .line 248
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBandWidth:[Landroid/widget/Spinner;

    const v1, 0x7f0601f2

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    aput-object v1, v0, v2

    .line 249
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFreq:[Landroid/widget/EditText;

    const v1, 0x7f0603ce

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    aput-object v1, v0, v2

    .line 250
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddConfig:[Landroid/widget/Spinner;

    const v1, 0x7f060702

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    aput-object v1, v0, v2

    .line 251
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddSpecial:[Landroid/widget/Spinner;

    const v1, 0x7f06070f

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    aput-object v1, v0, v2

    .line 252
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbStart:[Landroid/widget/EditText;

    const v1, 0x7f0607f8

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    aput-object v1, v0, v2

    .line 253
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbLength:[Landroid/widget/EditText;

    const v1, 0x7f0607ef

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    aput-object v1, v0, v2

    .line 254
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mMcs:[Landroid/widget/Spinner;

    const v1, 0x7f060565

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    aput-object v1, v0, v2

    .line 255
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mPower:[Landroid/widget/EditText;

    const v1, 0x7f060618

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    aput-object v1, v0, v2

    .line 256
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFreqRange:[Landroid/widget/TextView;

    const v1, 0x7f0603d1

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    aput-object v1, v0, v2

    .line 258
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBand:[Landroid/widget/Spinner;

    const v1, 0x7f0601ea

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    aput-object v1, v0, v3

    .line 259
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBandWidth:[Landroid/widget/Spinner;

    const v1, 0x7f0601f3

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    aput-object v1, v0, v3

    .line 260
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFreq:[Landroid/widget/EditText;

    const v1, 0x7f0603cf

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    aput-object v1, v0, v3

    .line 261
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddConfig:[Landroid/widget/Spinner;

    const v1, 0x7f060703

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    aput-object v1, v0, v3

    .line 262
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddSpecial:[Landroid/widget/Spinner;

    const v1, 0x7f060710

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    aput-object v1, v0, v3

    .line 263
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbStart:[Landroid/widget/EditText;

    const v1, 0x7f0607f9

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    aput-object v1, v0, v3

    .line 264
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbLength:[Landroid/widget/EditText;

    const v1, 0x7f0607f0

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    aput-object v1, v0, v3

    .line 265
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mMcs:[Landroid/widget/Spinner;

    const v1, 0x7f060566

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    aput-object v1, v0, v3

    .line 266
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mPower:[Landroid/widget/EditText;

    const v1, 0x7f060619

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    aput-object v1, v0, v3

    .line 267
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFreqRange:[Landroid/widget/TextView;

    const v1, 0x7f0603d2

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    aput-object v1, v0, v3

    .line 269
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBand:[Landroid/widget/Spinner;

    const v1, 0x7f0601eb

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    aput-object v1, v0, v4

    .line 270
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBandWidth:[Landroid/widget/Spinner;

    const v1, 0x7f0601f4

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    aput-object v1, v0, v4

    .line 271
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFreq:[Landroid/widget/EditText;

    const v1, 0x7f0603d0

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    aput-object v1, v0, v4

    .line 272
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddConfig:[Landroid/widget/Spinner;

    const v1, 0x7f060704

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    aput-object v1, v0, v4

    .line 273
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddSpecial:[Landroid/widget/Spinner;

    const v1, 0x7f060711

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    aput-object v1, v0, v4

    .line 274
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbStart:[Landroid/widget/EditText;

    const v1, 0x7f0607fa

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    aput-object v1, v0, v4

    .line 275
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mVrbLength:[Landroid/widget/EditText;

    const v1, 0x7f0607f1

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    aput-object v1, v0, v4

    .line 276
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mMcs:[Landroid/widget/Spinner;

    const v1, 0x7f060567

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    aput-object v1, v0, v4

    .line 277
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mPower:[Landroid/widget/EditText;

    const v1, 0x7f06061a

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    aput-object v1, v0, v4

    .line 278
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFreqRange:[Landroid/widget/TextView;

    const v1, 0x7f0603d3

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    aput-object v1, v0, v4

    .line 280
    const v0, 0x7f06025b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mButtonStart:Landroid/widget/Button;

    .line 281
    const v0, 0x7f060259

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mButtonPause:Landroid/widget/Button;

    .line 283
    const/4 v0, 0x3

    new-array v1, v0, [Landroid/widget/ArrayAdapter;

    .line 284
    .local v1, "adapter":[Landroid/widget/ArrayAdapter;
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    if-ge v2, v0, :cond_0

    .line 285
    new-instance v4, Landroid/widget/ArrayAdapter;

    const v5, 0x1090008

    invoke-direct {v4, p0, v5}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    aput-object v4, v1, v2

    .line 287
    aget-object v4, v1, v2

    const v6, 0x1090009

    invoke-virtual {v4, v6}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 288
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBand:[Landroid/widget/Spinner;

    aget-object v4, v4, v2

    aget-object v7, v1, v2

    invoke-virtual {v4, v7}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 290
    const v4, 0x7f01008c

    invoke-static {p0, v4, v5}, Landroid/widget/ArrayAdapter;->createFromResource(Landroid/content/Context;II)Landroid/widget/ArrayAdapter;

    move-result-object v4

    aput-object v4, v1, v2

    .line 292
    aget-object v4, v1, v2

    invoke-virtual {v4, v6}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 293
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBandWidth:[Landroid/widget/Spinner;

    aget-object v4, v4, v2

    aget-object v7, v1, v2

    invoke-virtual {v4, v7}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 295
    const v4, 0x7f01008f

    invoke-static {p0, v4, v5}, Landroid/widget/ArrayAdapter;->createFromResource(Landroid/content/Context;II)Landroid/widget/ArrayAdapter;

    move-result-object v4

    aput-object v4, v1, v2

    .line 297
    aget-object v4, v1, v2

    invoke-virtual {v4, v6}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 298
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mMcs:[Landroid/widget/Spinner;

    aget-object v4, v4, v2

    aget-object v7, v1, v2

    invoke-virtual {v4, v7}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 300
    new-instance v4, Landroid/widget/ArrayAdapter;

    invoke-direct {v4, p0, v5}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    aput-object v4, v1, v2

    .line 302
    aget-object v4, v1, v2

    invoke-virtual {v4, v6}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 303
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddConfig:[Landroid/widget/Spinner;

    aget-object v4, v4, v2

    aget-object v7, v1, v2

    invoke-virtual {v4, v7}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 305
    new-instance v4, Landroid/widget/ArrayAdapter;

    invoke-direct {v4, p0, v5}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    aput-object v4, v1, v2

    .line 307
    aget-object v4, v1, v2

    invoke-virtual {v4, v6}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 308
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTddSpecial:[Landroid/widget/Spinner;

    aget-object v4, v4, v2

    aget-object v5, v1, v2

    invoke-virtual {v4, v5}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 310
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFdd:[Landroid/widget/RadioButton;

    aget-object v4, v4, v2

    invoke-virtual {v4, p0}, Landroid/widget/RadioButton;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 311
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mTdd:[Landroid/widget/RadioButton;

    aget-object v4, v4, v2

    invoke-virtual {v4, p0}, Landroid/widget/RadioButton;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 312
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mBand:[Landroid/widget/Spinner;

    aget-object v4, v4, v2

    invoke-virtual {v4, p0}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 284
    add-int/lit8 v2, v2, 0x1

    goto/16 :goto_0

    .line 314
    .end local v2    # "i":I
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mButtonStart:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 315
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mButtonPause:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 316
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const v2, 0x7f01008e

    invoke-virtual {v0, v2}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mFreqRangeArray:[Ljava/lang/String;

    .line 317
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->restoreState()V

    .line 318
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->disableAllButtons()V

    .line 319
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCapabilitySim()I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->phoneid:I

    .line 320
    invoke-static {v0}, Lcom/android/internal/telephony/PhoneFactory;->getPhone(I)Lcom/android/internal/telephony/Phone;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mPhone:Lcom/android/internal/telephony/Phone;

    .line 321
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->sCi:[Lcom/android/internal/telephony/CommandsInterface;

    iget v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->phoneid:I

    iget-object v0, v0, Lcom/android/internal/telephony/Phone;->mCi:Lcom/android/internal/telephony/CommandsInterface;

    aput-object v0, v2, v4

    .line 322
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->sCi:[Lcom/android/internal/telephony/CommandsInterface;

    iget v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->phoneid:I

    aget-object v0, v0, v2

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->mHandler:Landroid/os/Handler;

    const/4 v4, 0x5

    const/4 v5, 0x0

    invoke-interface {v0, v2, v4, v5}, Lcom/android/internal/telephony/CommandsInterface;->registerForOffOrNotAvailable(Landroid/os/Handler;ILjava/lang/Object;)V

    .line 324
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->ifAirplaneModeEnabled()Z

    move-result v0

    if-nez v0, :cond_1

    .line 325
    const-string v0, "RfDesenseTxTestLteCA"

    const-string v2, "it is in AirplaneMode"

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 326
    invoke-static {v3}, Lcom/mediatek/engineermode/EmUtils;->setAirplaneModeEnabled(Z)V

    .line 328
    :cond_1
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 5
    .param p1, "id"    # I

    .line 438
    const/4 v0, 0x1

    const/4 v1, 0x0

    const-string v2, "Confirm"

    if-eq p1, v0, :cond_1

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    .line 454
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreateDialog(I)Landroid/app/Dialog;

    move-result-object v0

    return-object v0

    .line 446
    :cond_0
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 447
    .local v0, "builder2":Landroid/app/AlertDialog$Builder;
    const-string v3, "Notice"

    invoke-virtual {v0, v3}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v3

    .line 448
    const-string v4, "Please pull out the sim card before test"

    invoke-virtual {v3, v4}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v3

    .line 449
    invoke-virtual {v3, v2, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 450
    invoke-virtual {v1}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v1

    .line 447
    return-object v1

    .line 440
    .end local v0    # "builder2":Landroid/app/AlertDialog$Builder;
    :cond_1
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 441
    .local v0, "builder":Landroid/app/AlertDialog$Builder;
    const-string v3, "Hint"

    invoke-virtual {v0, v3}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v3

    .line 442
    const-string v4, "Please pause the test first!"

    invoke-virtual {v3, v4}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v3

    .line 443
    invoke-virtual {v3, v2, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 444
    invoke-virtual {v1}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v1

    .line 441
    return-object v1
.end method

.method protected onDestroy()V
    .locals 0

    .line 332
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->saveState()V

    .line 333
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 334
    return-void
.end method

.method public onItemSelected(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 2
    .param p2, "view"    # Landroid/view/View;
    .param p3, "i"    # I
    .param p4, "l"    # J
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;",
            "Landroid/view/View;",
            "IJ)V"
        }
    .end annotation

    .line 662
    .local p1, "adapterView":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    invoke-virtual {p2}, Landroid/view/View;->getId()I

    move-result v0

    const v1, 0x7f0601e9

    if-ne v0, v1, :cond_0

    .line 663
    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->setDefaultValue(I)V

    goto :goto_0

    .line 664
    :cond_0
    invoke-virtual {p2}, Landroid/view/View;->getId()I

    move-result v0

    const v1, 0x7f0601ea

    if-ne v0, v1, :cond_1

    .line 665
    const/4 v0, 0x1

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->setDefaultValue(I)V

    goto :goto_0

    .line 666
    :cond_1
    invoke-virtual {p2}, Landroid/view/View;->getId()I

    move-result v0

    const v1, 0x7f0601eb

    if-ne v0, v1, :cond_2

    .line 667
    const/4 v0, 0x2

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->setDefaultValue(I)V

    .line 669
    :cond_2
    :goto_0
    return-void
.end method

.method public onNothingSelected(Landroid/widget/AdapterView;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;)V"
        }
    .end annotation

    .line 673
    .local p1, "adapterView":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    return-void
.end method

.method protected onResume()V
    .locals 2

    .line 338
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 339
    const-string v0, "RfDesenseTxTestLteCA"

    const-string v1, "onResume"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 340
    const/4 v1, -0x1

    invoke-static {v1}, Lcom/mediatek/engineermode/ModemCategory;->isSimReady(I)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 341
    const-string v1, "some card insert"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 342
    const/4 v0, 0x2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;->showDialog(I)V

    .line 345
    :cond_0
    return-void
.end method
