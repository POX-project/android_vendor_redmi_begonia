.class public Lcom/mediatek/engineermode/worldphone/ModemSwitch;
.super Landroid/app/Activity;
.source "ModemSwitch.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# static fields
.field private static final PROJ_TYPE_NOT_SUPPORT:I = 0x0

.field private static final PROJ_TYPE_WORLD_PHONE:I = 0x1

.field private static final TAG:Ljava/lang/String; = "ModemSwitch"

.field private static sProjectType:I

.field private static sWorldPhone:Lcom/mediatek/internal/telephony/worldphone/IWorldPhone;


# instance fields
.field private alertDialog:Landroid/app/AlertDialog;

.field private final mBroadcastReceiver:Landroid/content/BroadcastReceiver;

.field private mButtonSet:Landroid/widget/Button;

.field private mButtonSetTimer:Landroid/widget/Button;

.field private mRadioAuto:Landroid/widget/RadioButton;

.field private mRadioLtg:Landroid/widget/RadioButton;

.field private mRadioLwg:Landroid/widget/RadioButton;

.field private mRadioTg:Landroid/widget/RadioButton;

.field private mRadioWg:Landroid/widget/RadioButton;

.field private mText:Landroid/widget/TextView;

.field private mTimer:Landroid/widget/EditText;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 80
    const/4 v0, 0x0

    sput-object v0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->sWorldPhone:Lcom/mediatek/internal/telephony/worldphone/IWorldPhone;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 63
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 171
    new-instance v0, Lcom/mediatek/engineermode/worldphone/ModemSwitch$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/worldphone/ModemSwitch$1;-><init>(Lcom/mediatek/engineermode/worldphone/ModemSwitch;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mBroadcastReceiver:Landroid/content/BroadcastReceiver;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/worldphone/ModemSwitch;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/worldphone/ModemSwitch;
    .param p1, "x1"    # I

    .line 63
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->updateUi(I)V

    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/worldphone/ModemSwitch;)Landroid/app/AlertDialog;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/worldphone/ModemSwitch;

    .line 63
    iget-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->alertDialog:Landroid/app/AlertDialog;

    return-object v0
.end method

.method private getModemType()I
    .locals 1

    .line 293
    invoke-static {}, Lcom/mediatek/internal/telephony/ModemSwitchHandler;->getActiveModemType()I

    move-result v0

    return v0
.end method

.method private switchModemAlert(JJ)V
    .locals 7
    .param p1, "millisUntilFinished"    # J
    .param p3, "countDownInterval"    # J

    .line 263
    iget-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->alertDialog:Landroid/app/AlertDialog;

    const-string v1, "Wait"

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 264
    iget-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->alertDialog:Landroid/app/AlertDialog;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog;->setCanceledOnTouchOutside(Z)V

    .line 265
    iget-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->alertDialog:Landroid/app/AlertDialog;

    invoke-virtual {v0}, Landroid/app/AlertDialog;->show()V

    .line 267
    new-instance v0, Lcom/mediatek/engineermode/worldphone/ModemSwitch$2;

    move-object v1, v0

    move-object v2, p0

    move-wide v3, p1

    move-wide v5, p3

    invoke-direct/range {v1 .. v6}, Lcom/mediatek/engineermode/worldphone/ModemSwitch$2;-><init>(Lcom/mediatek/engineermode/worldphone/ModemSwitch;JJ)V

    .line 277
    invoke-virtual {v0}, Lcom/mediatek/engineermode/worldphone/ModemSwitch$2;->start()Landroid/os/CountDownTimer;

    .line 278
    return-void
.end method

.method private updateUi(I)V
    .locals 2
    .param p1, "mdType"    # I

    .line 281
    const/4 v0, 0x3

    if-ne p1, v0, :cond_0

    .line 282
    iget-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mText:Landroid/widget/TextView;

    const v1, 0x7f0a045d

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    goto :goto_0

    .line 283
    :cond_0
    const/4 v0, 0x4

    if-ne p1, v0, :cond_1

    .line 284
    iget-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mText:Landroid/widget/TextView;

    const v1, 0x7f0a045c

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    goto :goto_0

    .line 285
    :cond_1
    const/4 v0, 0x5

    if-ne p1, v0, :cond_2

    .line 286
    iget-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mText:Landroid/widget/TextView;

    const v1, 0x7f0a045a

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    goto :goto_0

    .line 287
    :cond_2
    const/4 v0, 0x6

    if-ne p1, v0, :cond_3

    .line 288
    iget-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mText:Landroid/widget/TextView;

    const v1, 0x7f0a045b

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    .line 290
    :cond_3
    :goto_0
    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 6
    .param p1, "v"    # Landroid/view/View;

    .line 189
    iget-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mButtonSetTimer:Landroid/widget/Button;

    const-string v1, "ModemSwitch"

    const/4 v2, 0x0

    if-ne p1, v0, :cond_0

    .line 190
    const/4 v0, 0x0

    .line 192
    .local v0, "timer":I
    :try_start_0
    iget-object v3, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mTimer:Landroid/widget/EditText;

    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    move v0, v1

    .line 196
    goto :goto_0

    .line 193
    :catch_0
    move-exception v3

    .line 194
    .local v3, "e":Ljava/lang/NumberFormatException;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Invalid format: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mTimer:Landroid/widget/EditText;

    invoke-virtual {v5}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v4}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 195
    const/4 v0, 0x0

    .line 197
    .end local v3    # "e":Ljava/lang/NumberFormatException;
    :goto_0
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    const-string v3, "persist.vendor.radio.wm_fddtimer"

    invoke-static {v3, v1}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 198
    const-string v1, "Set timer succeed."

    invoke-static {p0, v1, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 199
    return-void

    .line 202
    .end local v0    # "timer":I
    :cond_0
    invoke-direct {p0}, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->getModemType()I

    move-result v0

    .line 203
    .local v0, "oldMdType":I
    invoke-virtual {p0}, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v3

    const-string v4, "airplane_mode_on"

    invoke-static {v3, v4, v2}, Landroid/provider/Settings$Global;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;I)I

    move-result v3

    .line 205
    .local v3, "airplaneMode":I
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "airplaneMode: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 206
    const/4 v4, 0x1

    if-ne v3, v4, :cond_1

    .line 207
    const-string v1, "Modem switch is not allowed in flight mode"

    invoke-static {p0, v1, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    .line 208
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 209
    return-void

    .line 211
    :cond_1
    iget-object v5, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioWg:Landroid/widget/RadioButton;

    invoke-virtual {v5}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v5

    if-eqz v5, :cond_2

    .line 212
    const-string v5, "Set modem type: 3"

    invoke-static {v1, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 213
    sget v1, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->sProjectType:I

    if-ne v1, v4, :cond_6

    .line 214
    sget-object v1, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->sWorldPhone:Lcom/mediatek/internal/telephony/worldphone/IWorldPhone;

    const/4 v4, 0x3

    invoke-interface {v1, v2, v4}, Lcom/mediatek/internal/telephony/worldphone/IWorldPhone;->setModemSelectionMode(II)V

    goto :goto_1

    .line 217
    :cond_2
    iget-object v5, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioTg:Landroid/widget/RadioButton;

    invoke-virtual {v5}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v5

    if-eqz v5, :cond_3

    .line 218
    const-string v5, "Set modem type: 4"

    invoke-static {v1, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 219
    sget v1, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->sProjectType:I

    if-ne v1, v4, :cond_6

    .line 220
    sget-object v1, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->sWorldPhone:Lcom/mediatek/internal/telephony/worldphone/IWorldPhone;

    const/4 v4, 0x4

    invoke-interface {v1, v2, v4}, Lcom/mediatek/internal/telephony/worldphone/IWorldPhone;->setModemSelectionMode(II)V

    goto :goto_1

    .line 223
    :cond_3
    iget-object v5, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioLwg:Landroid/widget/RadioButton;

    invoke-virtual {v5}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v5

    if-eqz v5, :cond_4

    .line 224
    const-string v5, "Set modem type: 5"

    invoke-static {v1, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 225
    sget v1, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->sProjectType:I

    if-ne v1, v4, :cond_6

    .line 226
    sget-object v1, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->sWorldPhone:Lcom/mediatek/internal/telephony/worldphone/IWorldPhone;

    const/4 v4, 0x5

    invoke-interface {v1, v2, v4}, Lcom/mediatek/internal/telephony/worldphone/IWorldPhone;->setModemSelectionMode(II)V

    goto :goto_1

    .line 229
    :cond_4
    iget-object v5, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioLtg:Landroid/widget/RadioButton;

    invoke-virtual {v5}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v5

    if-eqz v5, :cond_5

    .line 230
    const-string v5, "Set modem type: 6"

    invoke-static {v1, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 231
    sget v1, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->sProjectType:I

    if-ne v1, v4, :cond_6

    .line 232
    sget-object v1, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->sWorldPhone:Lcom/mediatek/internal/telephony/worldphone/IWorldPhone;

    const/4 v4, 0x6

    invoke-interface {v1, v2, v4}, Lcom/mediatek/internal/telephony/worldphone/IWorldPhone;->setModemSelectionMode(II)V

    goto :goto_1

    .line 235
    :cond_5
    iget-object v5, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioAuto:Landroid/widget/RadioButton;

    invoke-virtual {v5}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v5

    if-eqz v5, :cond_7

    .line 236
    const-string v5, "Set modem type: auto"

    invoke-static {v1, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 237
    sget v1, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->sProjectType:I

    if-ne v1, v4, :cond_6

    .line 238
    sget-object v1, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->sWorldPhone:Lcom/mediatek/internal/telephony/worldphone/IWorldPhone;

    invoke-interface {v1, v4, v2}, Lcom/mediatek/internal/telephony/worldphone/IWorldPhone;->setModemSelectionMode(II)V

    .line 243
    :cond_6
    :goto_1
    const-string v1, "Please Wait"

    invoke-static {p0, v1, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 260
    return-void

    .line 241
    :cond_7
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 84
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 85
    const v0, 0x7f0800a0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->setContentView(I)V

    .line 87
    invoke-static {}, Lcom/mediatek/internal/telephony/worldphone/WorldPhoneUtil;->isWorldPhoneSupport()Z

    move-result v0

    const/4 v1, 0x1

    const-string v2, "ModemSwitch"

    if-eqz v0, :cond_0

    .line 88
    const-string v0, "World Phone Project"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 89
    invoke-static {}, Lcom/mediatek/internal/telephony/worldphone/WorldPhoneUtil;->getWorldPhone()Lcom/mediatek/internal/telephony/worldphone/IWorldPhone;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->sWorldPhone:Lcom/mediatek/internal/telephony/worldphone/IWorldPhone;

    .line 90
    sput v1, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->sProjectType:I

    goto :goto_0

    .line 92
    :cond_0
    const-string v0, "Not Supported Project"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 93
    const/4 v0, 0x0

    sput v0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->sProjectType:I

    .line 95
    :goto_0
    const v0, 0x7f060597

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioWg:Landroid/widget/RadioButton;

    .line 96
    const v0, 0x7f060595

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioTg:Landroid/widget/RadioButton;

    .line 97
    const v0, 0x7f060590

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioLwg:Landroid/widget/RadioButton;

    .line 98
    const v0, 0x7f060594

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioLtg:Landroid/widget/RadioButton;

    .line 99
    const v0, 0x7f06058e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioAuto:Landroid/widget/RadioButton;

    .line 100
    const v0, 0x7f060592

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mButtonSet:Landroid/widget/Button;

    .line 101
    sget v0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->sProjectType:I

    const/16 v2, 0x8

    if-ne v0, v1, :cond_2

    .line 102
    invoke-static {}, Lcom/mediatek/internal/telephony/worldphone/WorldPhoneUtil;->isLteSupport()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 103
    iget-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioWg:Landroid/widget/RadioButton;

    invoke-virtual {v0, v2}, Landroid/widget/RadioButton;->setVisibility(I)V

    .line 104
    iget-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioTg:Landroid/widget/RadioButton;

    invoke-virtual {v0, v2}, Landroid/widget/RadioButton;->setVisibility(I)V

    goto :goto_1

    .line 106
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioLwg:Landroid/widget/RadioButton;

    invoke-virtual {v0, v2}, Landroid/widget/RadioButton;->setVisibility(I)V

    .line 107
    iget-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioLtg:Landroid/widget/RadioButton;

    invoke-virtual {v0, v2}, Landroid/widget/RadioButton;->setVisibility(I)V

    goto :goto_1

    .line 109
    :cond_2
    if-nez v0, :cond_3

    .line 110
    iget-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioWg:Landroid/widget/RadioButton;

    invoke-virtual {v0, v2}, Landroid/widget/RadioButton;->setVisibility(I)V

    .line 111
    iget-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioTg:Landroid/widget/RadioButton;

    invoke-virtual {v0, v2}, Landroid/widget/RadioButton;->setVisibility(I)V

    .line 112
    iget-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioLwg:Landroid/widget/RadioButton;

    invoke-virtual {v0, v2}, Landroid/widget/RadioButton;->setVisibility(I)V

    .line 113
    iget-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioLtg:Landroid/widget/RadioButton;

    invoke-virtual {v0, v2}, Landroid/widget/RadioButton;->setVisibility(I)V

    .line 114
    iget-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioAuto:Landroid/widget/RadioButton;

    invoke-virtual {v0, v2}, Landroid/widget/RadioButton;->setVisibility(I)V

    .line 115
    iget-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mButtonSet:Landroid/widget/Button;

    invoke-virtual {v0, v2}, Landroid/widget/Button;->setVisibility(I)V

    .line 117
    :cond_3
    :goto_1
    const v0, 0x7f06058f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mText:Landroid/widget/TextView;

    .line 118
    const v0, 0x7f060596

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mTimer:Landroid/widget/EditText;

    .line 119
    iget-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mButtonSet:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 120
    const v0, 0x7f060593

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mButtonSetTimer:Landroid/widget/Button;

    .line 121
    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 122
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->alertDialog:Landroid/app/AlertDialog;

    .line 123
    const-string v1, "Switching Mode"

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog;->setTitle(Ljava/lang/CharSequence;)V

    .line 124
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    .line 125
    .local v0, "intentFilter":Landroid/content/IntentFilter;
    const-string v1, "mediatek.intent.action.ACTION_MD_TYPE_CHANGE"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 126
    iget-object v1, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mBroadcastReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    .line 127
    return-void
.end method

.method protected onResume()V
    .locals 6

    .line 131
    const-string v0, "ModemSwitch"

    const-string v1, "onResume()"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 132
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 134
    invoke-direct {p0}, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->getModemType()I

    move-result v1

    .line 135
    .local v1, "modemType":I
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Get modem type: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 137
    const/4 v0, 0x0

    const/4 v2, 0x1

    const/4 v3, 0x3

    if-ne v1, v3, :cond_0

    .line 138
    iget-object v3, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mText:Landroid/widget/TextView;

    const v4, 0x7f0a045d

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(I)V

    .line 139
    iget-object v3, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioWg:Landroid/widget/RadioButton;

    invoke-virtual {v3, v2}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_0

    .line 140
    :cond_0
    const/4 v3, 0x4

    if-ne v1, v3, :cond_1

    .line 141
    iget-object v3, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mText:Landroid/widget/TextView;

    const v4, 0x7f0a045c

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(I)V

    .line 142
    iget-object v3, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioTg:Landroid/widget/RadioButton;

    invoke-virtual {v3, v2}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_0

    .line 143
    :cond_1
    const/4 v3, 0x5

    if-ne v1, v3, :cond_2

    .line 144
    iget-object v3, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mText:Landroid/widget/TextView;

    const v4, 0x7f0a045a

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(I)V

    .line 145
    iget-object v3, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioLwg:Landroid/widget/RadioButton;

    invoke-virtual {v3, v2}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_0

    .line 146
    :cond_2
    const/4 v3, 0x6

    if-ne v1, v3, :cond_3

    .line 147
    iget-object v3, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mText:Landroid/widget/TextView;

    const v4, 0x7f0a045b

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(I)V

    .line 148
    iget-object v3, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioLtg:Landroid/widget/RadioButton;

    invoke-virtual {v3, v2}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_0

    .line 150
    :cond_3
    iget-object v3, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mText:Landroid/widget/TextView;

    const v4, 0x7f0a0457

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(I)V

    .line 151
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Query Modem type failed: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {p0, v3, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v3

    .line 152
    invoke-virtual {v3}, Landroid/widget/Toast;->show()V

    .line 155
    :goto_0
    nop

    .line 156
    const-string v3, "persist.vendor.radio.wm_selectmode"

    const-string v4, "0"

    invoke-static {v3, v4}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 155
    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    .line 157
    .local v3, "woladPhoneSelectModeInt":I
    if-ne v3, v2, :cond_4

    .line 158
    iget-object v5, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioWg:Landroid/widget/RadioButton;

    invoke-virtual {v5, v0}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 159
    iget-object v5, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioTg:Landroid/widget/RadioButton;

    invoke-virtual {v5, v0}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 160
    iget-object v5, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioLwg:Landroid/widget/RadioButton;

    invoke-virtual {v5, v0}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 161
    iget-object v5, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioLtg:Landroid/widget/RadioButton;

    invoke-virtual {v5, v0}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 162
    iget-object v0, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mRadioAuto:Landroid/widget/RadioButton;

    invoke-virtual {v0, v2}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 165
    :cond_4
    nop

    .line 166
    const-string v0, "persist.vendor.radio.wm_fddtimer"

    invoke-static {v0, v4}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 165
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    .line 168
    .local v0, "timer":I
    iget-object v2, p0, Lcom/mediatek/engineermode/worldphone/ModemSwitch;->mTimer:Landroid/widget/EditText;

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 169
    return-void
.end method
