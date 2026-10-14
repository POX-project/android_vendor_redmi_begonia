.class public Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;
.super Landroid/app/Activity;
.source "RfDesenseTxTestLte.java"

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# static fields
.field public static final DEFAULT_ANT_MODE:Ljava/lang/String; = "0"

.field public static final DEFAULT_ANT_STATUS:Ljava/lang/String; = "0"

.field public static final DEFAULT_BAND_FDD:I = 0x2

.field public static final DEFAULT_BAND_TDD:I = 0x5

.field public static final DEFAULT_BAND_WIDTH:I = 0x3

.field public static final DEFAULT_FDD_FREQ:Ljava/lang/String; = "17475"

.field public static final DEFAULT_MCS:I = 0x0

.field public static final DEFAULT_MODULATION_MODE:I = 0x1

.field public static final DEFAULT_POWER:Ljava/lang/String; = "23"

.field public static final DEFAULT_TDD_CONFIG:I = 0x0

.field public static final DEFAULT_TDD_FREQ:Ljava/lang/String; = "25950"

.field public static final DEFAULT_TDD_SPECIAL:I = 0x0

.field public static final DEFAULT_VRB_LENGTH:Ljava/lang/String; = "1"

.field public static final DEFAULT_VRB_START:Ljava/lang/String; = "0"

.field private static final DUPLEX_FDD:I = 0x1

.field private static final DUPLEX_TDD:I = 0x0

.field private static final FDD_BAND_MAX:I = 0x1f

.field private static final FDD_BAND_MIN:I = 0x1

.field public static final KEY_FDD_ANT_MODE:Ljava/lang/String; = "ant_mode_fdd"

.field public static final KEY_FDD_ANT_STATUS:Ljava/lang/String; = "ant_status_fdd"

.field public static final KEY_FDD_BAND:Ljava/lang/String; = "band_fdd"

.field public static final KEY_FDD_BAND_WIDTH:Ljava/lang/String; = "bandwidth_fdd"

.field public static final KEY_FDD_FREQ:Ljava/lang/String; = "freq_fdd"

.field public static final KEY_FDD_MCS:Ljava/lang/String; = "mcs_fdd"

.field public static final KEY_FDD_POWER:Ljava/lang/String; = "power_fdd"

.field public static final KEY_FDD_VRB_LENGTH:Ljava/lang/String; = "vrb_length_fdd"

.field public static final KEY_FDD_VRB_START:Ljava/lang/String; = "vrb_start_fdd"

.field public static final KEY_MODULATION_MODE:Ljava/lang/String; = "modulation_mode"

.field public static final KEY_TDD_ANT_MODE:Ljava/lang/String; = "ant_mode_tdd"

.field public static final KEY_TDD_ANT_STATUS:Ljava/lang/String; = "ant_status_tdd"

.field public static final KEY_TDD_BAND:Ljava/lang/String; = "band_tdd"

.field public static final KEY_TDD_BAND_WIDTH:Ljava/lang/String; = "bandwidth_tdd"

.field public static final KEY_TDD_CONFIG:Ljava/lang/String; = "tdd_config"

.field public static final KEY_TDD_FREQ:Ljava/lang/String; = "freq_tdd"

.field public static final KEY_TDD_MCS:Ljava/lang/String; = "mcs_tdd"

.field public static final KEY_TDD_POWER:Ljava/lang/String; = "power_tdd"

.field public static final KEY_TDD_SPECIAL:Ljava/lang/String; = "tdd_special"

.field public static final KEY_TDD_VRB_LENGTH:Ljava/lang/String; = "vrb_length_tdd"

.field public static final KEY_TDD_VRB_START:Ljava/lang/String; = "vrb_start_tdd"

.field private static final POWER_MAX:I = 0x1b

.field private static final POWER_MIN:I = -0x32

.field private static final TAG:Ljava/lang/String; = "RfDesense/TxTestLte"

.field private static final TDD_BAND_MAX:I = 0x2c

.field private static final TDD_BAND_MIN:I = 0x21

.field private static final TDD_CONFIG_MAX:I = 0x6

.field private static final TDD_SPECIAL_MAX:I = 0x9

.field private static final VRB_LENGTH_MAX:I = 0x64

.field private static final VRB_LENGTH_MIN:I = 0x1

.field private static final VRB_START_MAX:I = 0x63

.field private static final VRB_START_MIN:I

.field private static mModemType:I


# instance fields
.field protected mAntMode:Landroid/widget/CheckBox;

.field protected mAntStatus:Landroid/widget/EditText;

.field private mBand:Landroid/widget/Spinner;

.field private mBandWidth:Landroid/widget/Spinner;

.field private mButtonSet:Landroid/widget/Button;

.field private mCurrentBand:I

.field private mFdd:Landroid/widget/RadioButton;

.field private mFreq:Landroid/widget/EditText;

.field private mFreqRange:Landroid/widget/TextView;

.field mFreqRangeArray:[Ljava/lang/String;

.field private mMcs:Landroid/widget/Spinner;

.field private mModulationMode:Landroid/widget/TextView;

.field private mModulationSignal:Landroid/widget/RadioButton;

.field private mPower:Landroid/widget/EditText;

.field private mSingleTone:Landroid/widget/RadioButton;

.field private mTdd:Landroid/widget/RadioButton;

.field private mTddConfig:Landroid/widget/Spinner;

.field private mTddSpecial:Landroid/widget/Spinner;

.field private mToast:Landroid/widget/Toast;

.field private mVrbLength:Landroid/widget/EditText;

.field private mVrbStart:Landroid/widget/EditText;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 62
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 132
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mToast:Landroid/widget/Toast;

    .line 133
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mCurrentBand:I

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;

    .line 62
    iget v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mCurrentBand:I

    return v0
.end method

.method static synthetic access$002(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;
    .param p1, "x1"    # I

    .line 62
    iput p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mCurrentBand:I

    return p1
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;

    .line 62
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->setDefaultValue()V

    return-void
.end method

.method private checkValues()Z
    .locals 4

    .line 331
    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mVrbStart:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    .line 332
    .local v1, "value":I
    if-ltz v1, :cond_5

    const/16 v2, 0x63

    if-le v1, v2, :cond_0

    goto :goto_2

    .line 336
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mVrbLength:Landroid/widget/EditText;

    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    move v1, v2

    .line 337
    const/4 v2, 0x1

    if-lt v1, v2, :cond_4

    const/16 v3, 0x64

    if-le v1, v3, :cond_1

    goto :goto_1

    .line 341
    :cond_1
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mPower:Landroid/widget/EditText;

    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    move v1, v3

    .line 342
    const/16 v3, -0x32

    if-lt v1, v3, :cond_3

    const/16 v3, 0x1b

    if-le v1, v3, :cond_2

    goto :goto_0

    .line 349
    .end local v1    # "value":I
    :cond_2
    nop

    .line 350
    return v2

    .line 343
    .restart local v1    # "value":I
    :cond_3
    :goto_0
    const-string v2, "Invalid Power Level."

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->showToast(Ljava/lang/String;)V

    .line 344
    return v0

    .line 338
    :cond_4
    :goto_1
    const-string v2, "Invalid VRB Length."

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->showToast(Ljava/lang/String;)V

    .line 339
    return v0

    .line 333
    :cond_5
    :goto_2
    const-string v2, "Invalid VRB Start."

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->showToast(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 334
    return v0

    .line 346
    .end local v1    # "value":I
    :catch_0
    move-exception v1

    .line 347
    .local v1, "e":Ljava/lang/NumberFormatException;
    const-string v2, "Invalid Value."

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->showToast(Ljava/lang/String;)V

    .line 348
    return v0
.end method

.method private getDefaultFreq()I
    .locals 5

    .line 440
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mBand:Landroid/widget/Spinner;

    invoke-virtual {v0}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v0

    .line 441
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mTdd:Landroid/widget/RadioButton;

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

    .line 443
    .local v0, "index":I
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mBand:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const/16 v3, 0x20

    if-ne v1, v3, :cond_1

    .line 444
    const/16 v0, 0x1d

    .line 447
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mFreqRangeArray:[Ljava/lang/String;

    add-int/lit8 v3, v0, -0x1

    aget-object v1, v1, v3

    const-string v3, ","

    invoke-virtual {v1, v3}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 449
    .local v1, "range":[Ljava/lang/String;
    const/4 v3, 0x0

    :try_start_0
    aget-object v3, v1, v3

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    .line 450
    .local v3, "min":I
    aget-object v2, v1, v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    .line 451
    .local v2, "max":I
    add-int v4, v3, v2

    div-int/lit8 v4, v4, 0x2
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    return v4

    .line 452
    .end local v2    # "max":I
    .end local v3    # "min":I
    :catch_0
    move-exception v2

    .line 453
    .local v2, "e":Ljava/lang/NumberFormatException;
    new-instance v3, Ljava/lang/RuntimeException;

    const-string v4, "Check the array resource"

    invoke-direct {v3, v4}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v3
.end method

.method private onDuplexChange()V
    .locals 9

    .line 294
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mTdd:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    .line 295
    .local v0, "tdd":Z
    if-eqz v0, :cond_0

    const/16 v1, 0x21

    goto :goto_0

    :cond_0
    const/4 v1, 0x1

    .line 296
    .local v1, "bandMin":I
    :goto_0
    if-eqz v0, :cond_1

    const/16 v2, 0x2c

    goto :goto_1

    :cond_1
    const/16 v2, 0x1f

    .line 297
    .local v2, "bandMax":I
    :goto_1
    const/4 v3, 0x0

    if-eqz v0, :cond_2

    const/4 v4, 0x6

    goto :goto_2

    :cond_2
    move v4, v3

    .line 298
    .local v4, "configMax":I
    :goto_2
    if-eqz v0, :cond_3

    const/16 v3, 0x9

    .line 299
    .local v3, "specialMax":I
    :cond_3
    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mTddConfig:Landroid/widget/Spinner;

    invoke-virtual {v5, v0}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 300
    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mTddSpecial:Landroid/widget/Spinner;

    invoke-virtual {v5, v0}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 301
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "tdd = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const-string v6, "RfDesense/TxTestLte"

    invoke-static {v6, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 303
    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mBand:Landroid/widget/Spinner;

    invoke-virtual {v5}, Landroid/widget/Spinner;->getAdapter()Landroid/widget/SpinnerAdapter;

    move-result-object v5

    check-cast v5, Landroid/widget/ArrayAdapter;

    .line 304
    .local v5, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/CharSequence;>;"
    invoke-virtual {v5}, Landroid/widget/ArrayAdapter;->clear()V

    .line 305
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->getResources()Landroid/content/res/Resources;

    move-result-object v6

    if-eqz v0, :cond_4

    .line 306
    const v7, 0x7f010090

    goto :goto_3

    .line 307
    :cond_4
    const v7, 0x7f01008d

    .line 305
    :goto_3
    invoke-virtual {v6, v7}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v6

    .line 308
    .local v6, "bandValues":[Ljava/lang/String;
    invoke-virtual {v5, v6}, Landroid/widget/ArrayAdapter;->addAll([Ljava/lang/Object;)V

    .line 309
    invoke-virtual {v5}, Landroid/widget/ArrayAdapter;->notifyDataSetChanged()V

    .line 310
    iget-object v7, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mBand:Landroid/widget/Spinner;

    if-eqz v0, :cond_5

    const/4 v8, 0x5

    goto :goto_4

    :cond_5
    const/4 v8, 0x2

    :goto_4
    invoke-virtual {v7, v8}, Landroid/widget/Spinner;->setSelection(I)V

    .line 312
    iget-object v7, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mTddConfig:Landroid/widget/Spinner;

    invoke-virtual {v7}, Landroid/widget/Spinner;->getAdapter()Landroid/widget/SpinnerAdapter;

    move-result-object v7

    move-object v5, v7

    check-cast v5, Landroid/widget/ArrayAdapter;

    .line 313
    invoke-virtual {v5}, Landroid/widget/ArrayAdapter;->clear()V

    .line 314
    const/4 v7, 0x0

    .local v7, "i":I
    :goto_5
    if-gt v7, v4, :cond_6

    .line 315
    invoke-static {v7}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v5, v8}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 314
    add-int/lit8 v7, v7, 0x1

    goto :goto_5

    .line 317
    .end local v7    # "i":I
    :cond_6
    invoke-virtual {v5}, Landroid/widget/ArrayAdapter;->notifyDataSetChanged()V

    .line 319
    iget-object v7, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mTddSpecial:Landroid/widget/Spinner;

    invoke-virtual {v7}, Landroid/widget/Spinner;->getAdapter()Landroid/widget/SpinnerAdapter;

    move-result-object v7

    move-object v5, v7

    check-cast v5, Landroid/widget/ArrayAdapter;

    .line 320
    invoke-virtual {v5}, Landroid/widget/ArrayAdapter;->clear()V

    .line 321
    const/4 v7, 0x0

    .restart local v7    # "i":I
    :goto_6
    if-gt v7, v3, :cond_7

    .line 322
    invoke-static {v7}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v5, v8}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 321
    add-int/lit8 v7, v7, 0x1

    goto :goto_6

    .line 324
    .end local v7    # "i":I
    :cond_7
    invoke-virtual {v5}, Landroid/widget/ArrayAdapter;->notifyDataSetChanged()V

    .line 326
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->setDefaultValue()V

    .line 327
    return-void
.end method

.method private restoreState()V
    .locals 10

    .line 386
    const-string v0, "rfdesense_tx_test"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 389
    .local v0, "pref":Landroid/content/SharedPreferences;
    const-string v2, "modulation_mode"

    const/4 v3, 0x1

    invoke-interface {v0, v2, v3}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v2

    .line 390
    .local v2, "checked":I
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mSingleTone:Landroid/widget/RadioButton;

    if-nez v2, :cond_0

    move v5, v3

    goto :goto_0

    :cond_0
    move v5, v1

    :goto_0
    invoke-virtual {v4, v5}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 391
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mModulationSignal:Landroid/widget/RadioButton;

    if-ne v2, v3, :cond_1

    goto :goto_1

    :cond_1
    move v3, v1

    :goto_1
    invoke-virtual {v4, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 393
    sget v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mModemType:I

    const-string v4, "23"

    const/4 v5, 0x3

    const/4 v6, 0x2

    const-string v7, "1"

    const-string v8, "0"

    if-ne v3, v6, :cond_2

    .line 394
    const-string v3, "band_tdd"

    const/4 v6, 0x5

    invoke-interface {v0, v3, v6}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v9

    iput v9, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mCurrentBand:I

    .line 395
    iget-object v9, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mBand:Landroid/widget/Spinner;

    invoke-interface {v0, v3, v6}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v3

    invoke-virtual {v9, v3}, Landroid/widget/Spinner;->setSelection(I)V

    .line 396
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mBandWidth:Landroid/widget/Spinner;

    const-string v6, "bandwidth_tdd"

    invoke-interface {v0, v6, v5}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v5

    invoke-virtual {v3, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 397
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mFreq:Landroid/widget/EditText;

    const-string v5, "freq_tdd"

    const-string v6, "25950"

    invoke-interface {v0, v5, v6}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 399
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mTddConfig:Landroid/widget/Spinner;

    const-string v5, "tdd_config"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v5

    invoke-virtual {v3, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 400
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mTddSpecial:Landroid/widget/Spinner;

    const-string v5, "tdd_special"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v5

    invoke-virtual {v3, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 402
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mVrbStart:Landroid/widget/EditText;

    const-string v5, "vrb_start_tdd"

    invoke-interface {v0, v5, v8}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 403
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mVrbLength:Landroid/widget/EditText;

    const-string v5, "vrb_length_tdd"

    invoke-interface {v0, v5, v7}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 404
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mMcs:Landroid/widget/Spinner;

    const-string v5, "mcs_tdd"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    invoke-virtual {v3, v1}, Landroid/widget/Spinner;->setSelection(I)V

    .line 405
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mPower:Landroid/widget/EditText;

    const-string v3, "power_tdd"

    invoke-interface {v0, v3, v4}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 407
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mAntMode:Landroid/widget/CheckBox;

    const-string v3, "ant_mode_tdd"

    invoke-interface {v0, v3, v8}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    invoke-virtual {v1, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 408
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mAntStatus:Landroid/widget/EditText;

    const-string v3, "ant_status_tdd"

    invoke-interface {v0, v3, v8}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    goto :goto_2

    .line 410
    :cond_2
    const-string v3, "band_fdd"

    invoke-interface {v0, v3, v6}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v9

    iput v9, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mCurrentBand:I

    .line 411
    iget-object v9, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mBand:Landroid/widget/Spinner;

    invoke-interface {v0, v3, v6}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v3

    invoke-virtual {v9, v3}, Landroid/widget/Spinner;->setSelection(I)V

    .line 412
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mBandWidth:Landroid/widget/Spinner;

    const-string v6, "bandwidth_fdd"

    invoke-interface {v0, v6, v5}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v5

    invoke-virtual {v3, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 413
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mFreq:Landroid/widget/EditText;

    const-string v5, "freq_fdd"

    const-string v6, "17475"

    invoke-interface {v0, v5, v6}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 415
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mVrbStart:Landroid/widget/EditText;

    const-string v5, "vrb_start_fdd"

    invoke-interface {v0, v5, v8}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 416
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mVrbLength:Landroid/widget/EditText;

    const-string v5, "vrb_length_fdd"

    invoke-interface {v0, v5, v7}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 417
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mMcs:Landroid/widget/Spinner;

    const-string v5, "mcs_fdd"

    invoke-interface {v0, v5, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    invoke-virtual {v3, v1}, Landroid/widget/Spinner;->setSelection(I)V

    .line 418
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mPower:Landroid/widget/EditText;

    const-string v3, "power_fdd"

    invoke-interface {v0, v3, v4}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 419
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mAntMode:Landroid/widget/CheckBox;

    const-string v3, "ant_mode_fdd"

    invoke-interface {v0, v3, v8}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    invoke-virtual {v1, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 420
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mAntStatus:Landroid/widget/EditText;

    const-string v3, "ant_status_fdd"

    invoke-interface {v0, v3, v8}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 423
    :goto_2
    return-void
.end method

.method private saveState(Ljava/lang/String;)V
    .locals 5
    .param p1, "command"    # Ljava/lang/String;

    .line 354
    const-string v0, "rfdesense_tx_test"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 355
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 356
    .local v0, "editor":Landroid/content/SharedPreferences$Editor;
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mSingleTone:Landroid/widget/RadioButton;

    invoke-virtual {v1}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v1

    xor-int/lit8 v1, v1, 0x1

    const-string v2, "modulation_mode"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 357
    sget v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mModemType:I

    const/4 v2, 0x2

    const-string v3, "1"

    const-string v4, "0"

    if-ne v1, v2, :cond_1

    .line 358
    const-string v1, "lte_tdd_at_cmd"

    invoke-interface {v0, v1, p1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 359
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mBand:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v2, "band_tdd"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 360
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mBandWidth:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v2, "bandwidth_tdd"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 361
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mFreq:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "freq_tdd"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 362
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mTddConfig:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v2, "tdd_config"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 363
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mTddSpecial:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v2, "tdd_special"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 364
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mVrbStart:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "vrb_start_tdd"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 365
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mVrbLength:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "vrb_length_tdd"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 366
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mMcs:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v2, "mcs_tdd"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 367
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mPower:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "power_tdd"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 368
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mAntMode:Landroid/widget/CheckBox;

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    move-object v3, v4

    :goto_0
    const-string v1, "ant_mode_tdd"

    invoke-interface {v0, v1, v3}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 369
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mAntStatus:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ant_status_tdd"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    goto/16 :goto_2

    .line 371
    :cond_1
    const-string v1, "lte_fdd_at_cmd"

    invoke-interface {v0, v1, p1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 372
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mBand:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v2, "band_fdd"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 373
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mBandWidth:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v2, "bandwidth_fdd"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 374
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mFreq:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "freq_fdd"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 375
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mVrbStart:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "vrb_start_fdd"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 376
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mVrbLength:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "vrb_length_fdd"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 377
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mMcs:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v2, "mcs_fdd"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 378
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mPower:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "power_fdd"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 379
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mAntMode:Landroid/widget/CheckBox;

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    if-eqz v1, :cond_2

    goto :goto_1

    :cond_2
    move-object v3, v4

    :goto_1
    const-string v1, "ant_mode_fdd"

    invoke-interface {v0, v1, v3}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 380
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mAntStatus:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ant_status_fdd"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 382
    :goto_2
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    .line 383
    return-void
.end method

.method private setDefaultValue()V
    .locals 4

    .line 426
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mBandWidth:Landroid/widget/Spinner;

    const/4 v1, 0x3

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setSelection(I)V

    .line 427
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mFreq:Landroid/widget/EditText;

    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->getDefaultFreq()I

    move-result v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 428
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mTddConfig:Landroid/widget/Spinner;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setSelection(I)V

    .line 429
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mTddSpecial:Landroid/widget/Spinner;

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setSelection(I)V

    .line 430
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mVrbStart:Landroid/widget/EditText;

    const-string v2, "0"

    invoke-virtual {v0, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 431
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mVrbLength:Landroid/widget/EditText;

    const-string v3, "1"

    invoke-virtual {v0, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 432
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mMcs:Landroid/widget/Spinner;

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setSelection(I)V

    .line 433
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mPower:Landroid/widget/EditText;

    const-string v1, "23"

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 435
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mAntMode:Landroid/widget/CheckBox;

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 436
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mAntStatus:Landroid/widget/EditText;

    invoke-virtual {v0, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 437
    return-void
.end method

.method private showToast(Ljava/lang/String;)V
    .locals 1
    .param p1, "msg"    # Ljava/lang/String;

    .line 458
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mToast:Landroid/widget/Toast;

    if-eqz v0, :cond_0

    .line 459
    invoke-virtual {v0}, Landroid/widget/Toast;->cancel()V

    .line 461
    :cond_0
    const/4 v0, 0x0

    invoke-static {p0, p1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mToast:Landroid/widget/Toast;

    .line 462
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 463
    return-void
.end method


# virtual methods
.method calcExtentedIndex(I)I
    .locals 1
    .param p1, "SelectedItemPosition"    # I

    .line 244
    const/16 v0, 0x1f

    if-ne p1, v0, :cond_0

    .line 245
    const/16 v0, 0x22

    .local v0, "index":I
    goto :goto_0

    .line 246
    .end local v0    # "index":I
    :cond_0
    const/16 v0, 0x20

    if-ne p1, v0, :cond_1

    .line 247
    const/16 v0, 0x26

    .restart local v0    # "index":I
    goto :goto_0

    .line 249
    .end local v0    # "index":I
    :cond_1
    const/4 v0, 0x0

    .line 251
    .restart local v0    # "index":I
    :goto_0
    return v0
.end method

.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 2
    .param p1, "v"    # Landroid/widget/CompoundButton;
    .param p2, "checked"    # Z

    .line 232
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getId()I

    move-result v0

    const v1, 0x7f0603ae

    if-eq v0, v1, :cond_0

    const v1, 0x7f060705

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 235
    :cond_0
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->onDuplexChange()V

    .line 236
    nop

    .line 240
    :goto_0
    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 5
    .param p1, "v"    # Landroid/view/View;

    .line 257
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    const v1, 0x7f06025a

    if-eq v0, v1, :cond_0

    goto/16 :goto_2

    .line 259
    :cond_0
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->checkValues()Z

    move-result v0

    if-nez v0, :cond_1

    .line 260
    goto/16 :goto_2

    .line 262
    :cond_1
    const-string v0, ""

    .line 263
    .local v0, "atcmd":Ljava/lang/String;
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mSingleTone:Landroid/widget/RadioButton;

    invoke-virtual {v1}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 264
    const-string v0, "AT+ERFTX=6,0,2,"

    goto :goto_0

    .line 266
    :cond_2
    const-string v0, "AT+ERFTX=6,0,1,"

    .line 268
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mBand:Landroid/widget/Spinner;

    .line 269
    invoke-virtual {v2}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v2

    .line 270
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mTdd:Landroid/widget/RadioButton;

    invoke-virtual {v3}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v3

    const/4 v4, 0x1

    if-eqz v3, :cond_3

    const/16 v3, 0x21

    goto :goto_1

    :cond_3
    move v3, v4

    :goto_1
    add-int/2addr v2, v3

    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mBand:Landroid/widget/Spinner;

    .line 271
    invoke-virtual {v3}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v3

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->calcExtentedIndex(I)I

    move-result v3

    add-int/2addr v2, v3

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ","

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mBandWidth:Landroid/widget/Spinner;

    .line 272
    invoke-virtual {v3}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mFreq:Landroid/widget/EditText;

    .line 273
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 274
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mTdd:Landroid/widget/RadioButton;

    invoke-virtual {v3}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v3

    xor-int/2addr v3, v4

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mTddConfig:Landroid/widget/Spinner;

    .line 275
    invoke-virtual {v3}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mTddSpecial:Landroid/widget/Spinner;

    .line 276
    invoke-virtual {v3}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mVrbStart:Landroid/widget/EditText;

    .line 277
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mVrbLength:Landroid/widget/EditText;

    .line 278
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mMcs:Landroid/widget/Spinner;

    .line 279
    invoke-virtual {v3}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mPower:Landroid/widget/EditText;

    .line 280
    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 281
    .local v1, "command":Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mAntMode:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v2

    if-eqz v2, :cond_4

    .line 282
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ",1,"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mAntStatus:Landroid/widget/EditText;

    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 284
    :cond_4
    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->saveState(Ljava/lang/String;)V

    .line 285
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Set param suecceed, "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->showToast(Ljava/lang/String;)V

    .line 286
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "command = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "RfDesense/TxTestLte"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 287
    nop

    .line 291
    .end local v0    # "atcmd":Ljava/lang/String;
    .end local v1    # "command":Ljava/lang/String;
    :goto_2
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 6
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 141
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 142
    const v0, 0x7f0800d0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->setContentView(I)V

    .line 143
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->getIntent()Landroid/content/Intent;

    move-result-object v0

    .line 144
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "mModemType"

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mModemType:I

    .line 146
    const v1, 0x7f06067d

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mModulationMode:Landroid/widget/TextView;

    .line 147
    const v1, 0x7f0606b4

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mSingleTone:Landroid/widget/RadioButton;

    .line 148
    const v1, 0x7f0605a3

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mModulationSignal:Landroid/widget/RadioButton;

    .line 149
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v1

    if-nez v1, :cond_0

    .line 150
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mModulationMode:Landroid/widget/TextView;

    const/16 v3, 0x8

    invoke-virtual {v1, v3}, Landroid/widget/TextView;->setVisibility(I)V

    .line 151
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mSingleTone:Landroid/widget/RadioButton;

    invoke-virtual {v1, v3}, Landroid/widget/RadioButton;->setVisibility(I)V

    .line 152
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mModulationSignal:Landroid/widget/RadioButton;

    invoke-virtual {v1, v3}, Landroid/widget/RadioButton;->setVisibility(I)V

    .line 154
    :cond_0
    const v1, 0x7f0603ae

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mFdd:Landroid/widget/RadioButton;

    .line 155
    const v1, 0x7f060705

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mTdd:Landroid/widget/RadioButton;

    .line 156
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mFdd:Landroid/widget/RadioButton;

    const/4 v3, 0x0

    invoke-virtual {v1, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 157
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mTdd:Landroid/widget/RadioButton;

    invoke-virtual {v1, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 158
    const v1, 0x7f0601e8

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mBand:Landroid/widget/Spinner;

    .line 159
    const v1, 0x7f0601f1

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mBandWidth:Landroid/widget/Spinner;

    .line 160
    const v1, 0x7f0603cd

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mFreq:Landroid/widget/EditText;

    .line 161
    const v1, 0x7f060701

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mTddConfig:Landroid/widget/Spinner;

    .line 162
    const v1, 0x7f06070e

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mTddSpecial:Landroid/widget/Spinner;

    .line 163
    const v1, 0x7f0607f7

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mVrbStart:Landroid/widget/EditText;

    .line 164
    const v1, 0x7f0607ee

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mVrbLength:Landroid/widget/EditText;

    .line 165
    const v1, 0x7f060564

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mMcs:Landroid/widget/Spinner;

    .line 166
    const v1, 0x7f060617

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mPower:Landroid/widget/EditText;

    .line 167
    const v1, 0x7f0603cc

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mFreqRange:Landroid/widget/TextView;

    .line 168
    const v1, 0x7f060675

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mAntMode:Landroid/widget/CheckBox;

    .line 169
    const v1, 0x7f060676

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mAntStatus:Landroid/widget/EditText;

    .line 170
    const v1, 0x7f06025a

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mButtonSet:Landroid/widget/Button;

    .line 172
    new-instance v1, Landroid/widget/ArrayAdapter;

    const v3, 0x1090008

    invoke-direct {v1, p0, v3}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    .line 174
    .local v1, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/CharSequence;>;"
    const v4, 0x1090009

    invoke-virtual {v1, v4}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 175
    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mBand:Landroid/widget/Spinner;

    invoke-virtual {v5, v1}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 177
    const v5, 0x7f01008c

    invoke-static {p0, v5, v3}, Landroid/widget/ArrayAdapter;->createFromResource(Landroid/content/Context;II)Landroid/widget/ArrayAdapter;

    move-result-object v1

    .line 180
    invoke-virtual {v1, v4}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 181
    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mBandWidth:Landroid/widget/Spinner;

    invoke-virtual {v5, v1}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 183
    const v5, 0x7f01008f

    invoke-static {p0, v5, v3}, Landroid/widget/ArrayAdapter;->createFromResource(Landroid/content/Context;II)Landroid/widget/ArrayAdapter;

    move-result-object v1

    .line 185
    invoke-virtual {v1, v4}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 186
    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mMcs:Landroid/widget/Spinner;

    invoke-virtual {v5, v1}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 188
    new-instance v5, Landroid/widget/ArrayAdapter;

    invoke-direct {v5, p0, v3}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    move-object v1, v5

    .line 189
    invoke-virtual {v1, v4}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 190
    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mTddConfig:Landroid/widget/Spinner;

    invoke-virtual {v5, v1}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 192
    new-instance v5, Landroid/widget/ArrayAdapter;

    invoke-direct {v5, p0, v3}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    move-object v1, v5

    .line 193
    invoke-virtual {v1, v4}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 194
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mTddSpecial:Landroid/widget/Spinner;

    invoke-virtual {v3, v1}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 196
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mFdd:Landroid/widget/RadioButton;

    invoke-virtual {v3, p0}, Landroid/widget/RadioButton;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 197
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mTdd:Landroid/widget/RadioButton;

    invoke-virtual {v3, p0}, Landroid/widget/RadioButton;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 198
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mButtonSet:Landroid/widget/Button;

    invoke-virtual {v3, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 200
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mBand:Landroid/widget/Spinner;

    new-instance v4, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte$1;

    invoke-direct {v4, p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte$1;-><init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;)V

    invoke-virtual {v3, v4}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 212
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    const v4, 0x7f01008e

    invoke-virtual {v3, v4}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mFreqRangeArray:[Ljava/lang/String;

    .line 216
    sget v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mModemType:I

    const/4 v4, 0x2

    if-ne v3, v4, :cond_1

    .line 217
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mTdd:Landroid/widget/RadioButton;

    invoke-virtual {v3, v2}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_0

    .line 219
    :cond_1
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->mFdd:Landroid/widget/RadioButton;

    invoke-virtual {v3, v2}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 222
    :goto_0
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;->restoreState()V

    .line 223
    return-void
.end method

.method protected onDestroy()V
    .locals 0

    .line 227
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 228
    return-void
.end method
