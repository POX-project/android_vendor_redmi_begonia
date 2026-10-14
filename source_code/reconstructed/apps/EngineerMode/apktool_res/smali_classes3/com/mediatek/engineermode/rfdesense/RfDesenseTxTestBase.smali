.class public Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;
.super Landroid/app/Activity;
.source "RfDesenseTxTestBase.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;
    }
.end annotation


# static fields
.field protected static final CHANNEL_DEFAULT:I = 0x0

.field protected static final CHANNEL_MAX:I = 0x2

.field protected static final CHANNEL_MAX2:I = 0x4

.field protected static final CHANNEL_MIN:I = 0x1

.field protected static final CHANNEL_MIN2:I = 0x3

.field protected static final HINT:I = 0x5

.field protected static final PAUSE:I = 0x2

.field protected static final POWER_DEFAULT:I = 0x5

.field protected static final POWER_MAX:I = 0x7

.field protected static final POWER_MIN:I = 0x6

.field protected static final START:I = 0x1

.field protected static final STATE_NONE:I = 0x0

.field protected static final STATE_PAUSED:I = 0x2

.field protected static final STATE_STARTED:I = 0x1

.field public static final TAG:Ljava/lang/String; = "RfDesense/TxTestBase"

.field protected static final UPDATE_BUTTON:I = 0x4

.field protected static final UPDATE_DELAY:I = 0x3e8


# instance fields
.field protected mAfc:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

.field protected mAntMode:Landroid/widget/CheckBox;

.field protected mAntStatus:Landroid/widget/EditText;

.field protected mBand:Landroid/widget/Spinner;

.field private mBandArray:[Ljava/lang/String;

.field protected mButtonSet:Landroid/widget/Button;

.field protected mChannel:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

.field protected mCurrentBand:I

.field protected mDbm:Landroid/widget/TextView;

.field protected mPattern:Landroid/widget/Spinner;

.field private mPatternArray:[Ljava/lang/String;

.field protected mPhone:Lcom/android/internal/telephony/Phone;

.field protected mPower:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

.field protected mToast:Landroid/widget/Toast;

.field protected mTsc:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 57
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 82
    new-instance v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    invoke-direct {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mChannel:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    .line 83
    new-instance v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    invoke-direct {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mPower:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    .line 84
    new-instance v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    invoke-direct {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mAfc:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    .line 85
    new-instance v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    invoke-direct {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mTsc:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    .line 90
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mToast:Landroid/widget/Toast;

    .line 93
    const/4 v0, -0x1

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mCurrentBand:I

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;)[Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;

    .line 57
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mBandArray:[Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;)[Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;

    .line 57
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mPatternArray:[Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;
    .param p1, "x1"    # Ljava/lang/String;

    .line 57
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->saveState(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;
    .param p1, "x1"    # Ljava/lang/String;

    .line 57
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->showToast(Ljava/lang/String;)V

    return-void
.end method

.method private saveState(Ljava/lang/String;)V
    .locals 5
    .param p1, "command"    # Ljava/lang/String;

    .line 166
    const-string v0, "rfdesense_tx_test"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 167
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 168
    .local v0, "pref":Landroid/content/SharedPreferences$Editor;
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mBand:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v2, "Band_2G"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 169
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mChannel:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->getText()Ljava/lang/String;

    move-result-object v1

    const-string v2, "Channel_2G"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 170
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mPower:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->getText()Ljava/lang/String;

    move-result-object v1

    const-string v2, "Power_2G"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 171
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mAfc:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->getText()Ljava/lang/String;

    move-result-object v1

    const-string v2, "AFC_2G"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 172
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mTsc:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->getText()Ljava/lang/String;

    move-result-object v1

    const-string v2, "TSC_2G"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 173
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mPattern:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    const-string v2, "Pattern_2G"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 174
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mAntMode:Landroid/widget/CheckBox;

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v1, "1"

    goto :goto_0

    :cond_0
    const-string v1, "0"

    :goto_0
    const-string v2, "gsm_ant_mode"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 175
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mAntStatus:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "gsm_ant_status"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 176
    const-string v1, "gsm_at_cmd"

    invoke-interface {v0, v1, p1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 177
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "AT+ETXANT=1,1,"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mAntStatus:Landroid/widget/EditText;

    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v2, ",,0"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 178
    .local v1, "ant_str":Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mAntMode:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    const-string v3, "gsm_at_cmd_ant_switch"

    if-eqz v2, :cond_1

    .line 179
    invoke-interface {v0, v3, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    goto :goto_1

    .line 181
    :cond_1
    const-string v1, "AT+ETXANT=0,1,0,,0"

    .line 182
    invoke-interface {v0, v3, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 184
    :goto_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "GSM at command = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "RfDesense/TxTestBase"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 185
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "GSM at command ant status = "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 186
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    .line 187
    return-void
.end method

.method private showToast(Ljava/lang/String;)V
    .locals 1
    .param p1, "msg"    # Ljava/lang/String;

    .line 215
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mToast:Landroid/widget/Toast;

    if-eqz v0, :cond_0

    .line 216
    invoke-virtual {v0}, Landroid/widget/Toast;->cancel()V

    .line 218
    :cond_0
    const/4 v0, 0x1

    invoke-static {p0, p1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mToast:Landroid/widget/Toast;

    .line 219
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 220
    return-void
.end method


# virtual methods
.method protected checkValues()Z
    .locals 8

    .line 198
    const/4 v0, 0x4

    new-array v1, v0, [Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mChannel:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    const/4 v3, 0x0

    aput-object v2, v1, v3

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mPower:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    const/4 v4, 0x1

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mAfc:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    const/4 v5, 0x2

    aput-object v2, v1, v5

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mTsc:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    const/4 v5, 0x3

    aput-object v2, v1, v5

    .line 199
    .local v1, "editors":[Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;
    const-string v2, "Channel"

    const-string v5, "TX Power"

    const-string v6, "AFC"

    const-string v7, "TSC"

    filled-new-array {v2, v5, v6, v7}, [Ljava/lang/String;

    move-result-object v2

    .line 201
    .local v2, "toast":[Ljava/lang/String;
    const/4 v5, 0x0

    .local v5, "i":I
    :goto_0
    if-ge v5, v0, :cond_1

    .line 202
    aget-object v6, v1, v5

    .line 203
    .local v6, "editor":Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;
    iget-object v7, v6, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->editor:Landroid/widget/EditText;

    invoke-virtual {v7}, Landroid/widget/EditText;->getVisibility()I

    move-result v7

    if-nez v7, :cond_0

    invoke-virtual {v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->check()Z

    move-result v7

    if-nez v7, :cond_0

    .line 204
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Invalid "

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v4, v2, v5

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ". Valid range: "

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 205
    invoke-virtual {v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->getValidRange()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 206
    .local v0, "text":Ljava/lang/String;
    invoke-static {p0, v0, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v4

    invoke-virtual {v4}, Landroid/widget/Toast;->show()V

    .line 207
    return v3

    .line 201
    .end local v0    # "text":Ljava/lang/String;
    .end local v6    # "editor":Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;
    :cond_0
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 211
    .end local v5    # "i":I
    :cond_1
    return v4
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 99
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 100
    const v0, 0x7f0800cf

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->setContentView(I)V

    .line 102
    const v0, 0x7f0601e8

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mBand:Landroid/widget/Spinner;

    .line 103
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mChannel:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    const v1, 0x7f06027e

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    iput-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->editor:Landroid/widget/EditText;

    .line 104
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mPower:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    const v1, 0x7f060617

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    iput-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->editor:Landroid/widget/EditText;

    .line 105
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mAfc:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    const v1, 0x7f060184

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    iput-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->editor:Landroid/widget/EditText;

    .line 106
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mTsc:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    const v1, 0x7f060741

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    iput-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->editor:Landroid/widget/EditText;

    .line 107
    const v0, 0x7f0605f7

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mPattern:Landroid/widget/Spinner;

    .line 109
    const v0, 0x7f060675

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mAntMode:Landroid/widget/CheckBox;

    .line 110
    const v0, 0x7f060676

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mAntStatus:Landroid/widget/EditText;

    .line 112
    const v0, 0x7f06025a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mButtonSet:Landroid/widget/Button;

    .line 114
    const v0, 0x7f060615

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mDbm:Landroid/widget/TextView;

    .line 116
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const v1, 0x7f010088

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mBandArray:[Ljava/lang/String;

    .line 117
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const v1, 0x7f01008b

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mPatternArray:[Ljava/lang/String;

    .line 120
    new-instance v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$1;-><init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;)V

    .line 146
    .local v0, "listener":Landroid/view/View$OnClickListener;
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mButtonSet:Landroid/widget/Button;

    invoke-virtual {v1, v0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 148
    new-instance v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$2;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$2;-><init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;)V

    .line 162
    .local v1, "bandAdapter":Landroid/widget/AdapterView$OnItemSelectedListener;
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mBand:Landroid/widget/Spinner;

    invoke-virtual {v2, v1}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 163
    return-void
.end method

.method protected onResume()V
    .locals 0

    .line 191
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 192
    return-void
.end method

.method protected setDefaultValues()V
    .locals 3

    .line 223
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mChannel:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->setToDefault()V

    .line 224
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mPower:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->setToDefault()V

    .line 225
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mAfc:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->setToDefault()V

    .line 226
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mTsc:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase$Editor;->setToDefault()V

    .line 227
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mAntMode:Landroid/widget/CheckBox;

    const-string v1, "0"

    const-string v2, "1"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 228
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestBase;->mAntStatus:Landroid/widget/EditText;

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 229
    return-void
.end method

.method protected updateLimits()V
    .locals 0

    .line 195
    return-void
.end method
