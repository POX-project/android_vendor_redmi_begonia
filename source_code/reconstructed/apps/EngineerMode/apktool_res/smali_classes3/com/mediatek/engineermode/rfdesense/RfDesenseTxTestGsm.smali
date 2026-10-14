.class public Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;
.super Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;
.source "RfDesenseTxTestGsm.java"


# static fields
.field public static final KEY_AFC:Ljava/lang/String; = "AFC_2G"

.field public static final KEY_ANT_MODE:Ljava/lang/String; = "gsm_ant_mode"

.field public static final KEY_ANT_STATUS:Ljava/lang/String; = "gsm_ant_status"

.field public static final KEY_BAND:Ljava/lang/String; = "Band_2G"

.field public static final KEY_CHANNEL:Ljava/lang/String; = "Channel_2G"

.field public static final KEY_MODULATION:Ljava/lang/String; = "Bodulation_2G"

.field public static final KEY_PATTERN:Ljava/lang/String; = "Pattern_2G"

.field public static final KEY_POWER:Ljava/lang/String; = "Power_2G"

.field public static final KEY_TSC:Ljava/lang/String; = "TSC_2G"

.field public static final TAG:Ljava/lang/String; = "RfDesense/TxTestGsm"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 48
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;-><init>()V

    return-void
.end method

.method private restoreState()V
    .locals 5

    .line 62
    const-string v0, "rfdesense_tx_test"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 64
    .local v0, "pref":Landroid/content/SharedPreferences;
    const-string v2, "Band_2G"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v2

    iput v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->mCurrentBand:I

    .line 65
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->mBand:Landroid/widget/Spinner;

    iget v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->mCurrentBand:I

    invoke-virtual {v2, v3}, Landroid/widget/Spinner;->setSelection(I)V

    .line 66
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->updateLimits()V

    .line 67
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->mChannel:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->mChannel:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    iget-object v3, v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->defaultValue:Ljava/lang/String;

    const-string v4, "Channel_2G"

    invoke-interface {v0, v4, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->setText(Ljava/lang/String;)V

    .line 68
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->mPower:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->mPower:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    iget-object v3, v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->defaultValue:Ljava/lang/String;

    const-string v4, "Power_2G"

    invoke-interface {v0, v4, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->setText(Ljava/lang/String;)V

    .line 69
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->mAfc:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->mAfc:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    iget-object v3, v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->defaultValue:Ljava/lang/String;

    const-string v4, "AFC_2G"

    invoke-interface {v0, v4, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->setText(Ljava/lang/String;)V

    .line 70
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->mTsc:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->mTsc:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    iget-object v3, v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->defaultValue:Ljava/lang/String;

    const-string v4, "TSC_2G"

    invoke-interface {v0, v4, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->setText(Ljava/lang/String;)V

    .line 71
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->mPattern:Landroid/widget/Spinner;

    const-string v3, "Pattern_2G"

    invoke-interface {v0, v3, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    invoke-virtual {v2, v1}, Landroid/widget/Spinner;->setSelection(I)V

    .line 72
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->mAntMode:Landroid/widget/CheckBox;

    const-string v2, "gsm_ant_mode"

    const-string v3, "0"

    invoke-interface {v0, v2, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 73
    const-string v4, "1"

    invoke-virtual {v2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    .line 72
    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 74
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->mAntStatus:Landroid/widget/EditText;

    const-string v2, "gsm_ant_status"

    invoke-interface {v0, v2, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 75
    return-void
.end method


# virtual methods
.method public onCreate(Landroid/os/Bundle;)V
    .locals 4
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 79
    invoke-super {p0, p1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->onCreate(Landroid/os/Bundle;)V

    .line 81
    const v0, 0x7f010087

    const v1, 0x1090008

    invoke-static {p0, v0, v1}, Landroid/widget/ArrayAdapter;->createFromResource(Landroid/content/Context;II)Landroid/widget/ArrayAdapter;

    move-result-object v0

    .line 84
    .local v0, "adapter_band":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/CharSequence;>;"
    const v2, 0x1090009

    invoke-virtual {v0, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 85
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->mBand:Landroid/widget/Spinner;

    invoke-virtual {v3, v0}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 87
    const v3, 0x7f01008a

    invoke-static {p0, v3, v1}, Landroid/widget/ArrayAdapter;->createFromResource(Landroid/content/Context;II)Landroid/widget/ArrayAdapter;

    move-result-object v1

    .line 90
    .local v1, "adapter_pattern":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/CharSequence;>;"
    invoke-virtual {v1, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 91
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->mPattern:Landroid/widget/Spinner;

    invoke-virtual {v2, v1}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 93
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->restoreState()V

    .line 94
    const-string v2, "RfDesense/TxTestGsm"

    const-string v3, "restoreState GSM"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 95
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->mDbm:Landroid/widget/TextView;

    const/16 v3, 0x8

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setVisibility(I)V

    .line 96
    return-void
.end method

.method protected updateLimits()V
    .locals 9

    .line 99
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->mBand:Landroid/widget/Spinner;

    invoke-virtual {v0}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v0

    .line 100
    .local v0, "band":I
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const v2, 0x7f010089

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v1

    aget-object v1, v1, v0

    .line 101
    const-string v2, ","

    invoke-virtual {v1, v2}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 103
    .local v1, "limits":[Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->mChannel:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    const/4 v3, 0x0

    aget-object v3, v1, v3

    const/4 v8, 0x1

    aget-object v4, v1, v8

    const/4 v5, 0x2

    aget-object v5, v1, v5

    const/4 v6, 0x3

    aget-object v6, v1, v6

    const/4 v7, 0x4

    aget-object v7, v1, v7

    invoke-virtual/range {v2 .. v7}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->set(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 105
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->mPower:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    const/4 v3, 0x5

    aget-object v3, v1, v3

    const/4 v4, 0x6

    aget-object v4, v1, v4

    const/4 v5, 0x7

    aget-object v5, v1, v5

    invoke-virtual {v2, v3, v4, v5}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->set(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 106
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->mPower:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    iput v8, v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->step:I

    .line 107
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->mAfc:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    const-string v3, "4100"

    const-string v4, "0"

    const-string v5, "8191"

    invoke-virtual {v2, v3, v4, v5}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->set(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 108
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;->mTsc:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    const-string v3, "7"

    invoke-virtual {v2, v4, v4, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->set(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 109
    return-void
.end method
