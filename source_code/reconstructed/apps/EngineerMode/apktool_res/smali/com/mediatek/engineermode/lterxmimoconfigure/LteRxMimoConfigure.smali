.class public Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;
.super Landroid/app/Activity;
.source "LteRxMimoConfigure.java"

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# static fields
.field private static final MSG_LTE_BAND_SETTING_4MIMO:I = 0x67

.field private static final MSG_LTE_BAND_SETTING_4RX:I = 0x68

.field private static final MSG_QUERY_CMD:I = 0x65

.field private static final MSG_SET_CMD:I = 0x66

.field private static final TAG:Ljava/lang/String; = "LteRx/MimoConfigure"

.field private static final WARNING_MSG_REBOOT:I = 0x1


# instance fields
.field private mCommandHander:Landroid/os/Handler;

.field private mRxMimo44MomoCb:Landroid/widget/CheckBox;

.field private mRxMimo44MomoCurStatus:I

.field private mRxMimo44MomoUnderCCACb:Landroid/widget/CheckBox;

.field private mRxMimo44MomoUnderCCACurStatuss:I

.field private mRxMimo44SingleBandSettingBt:Landroid/widget/Button;

.field private mRxMimoFeatureEnableCb:Landroid/widget/CheckBox;

.field private mRxMimoFeatureEnableCurStatus:I

.field private mRxMimoRas2Rx1RxCb:Landroid/widget/CheckBox;

.field private mRxMimoRas2Rx1RxCurStatus:I

.field private mRxMimoRas4Rx2RxCb:Landroid/widget/CheckBox;

.field private mRxMimoRas4Rx2RxCurStatus:I

.field private mRxMimoRas4Rx2RxUnderCCACb:Landroid/widget/CheckBox;

.field private mRxMimoRas4Rx2RxUnderCCACurStatus:I

.field private mRxMimoRas4RxSingleBandSettingBt:Landroid/widget/Button;

.field private mSetBt:Landroid/widget/Button;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 59
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 79
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoFeatureEnableCurStatus:I

    .line 80
    iput v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoCurStatus:I

    .line 81
    iput v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoUnderCCACurStatuss:I

    .line 82
    iput v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxCurStatus:I

    .line 83
    iput v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxUnderCCACurStatus:I

    .line 84
    iput v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas2Rx1RxCurStatus:I

    .line 86
    new-instance v0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure$1;-><init>(Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mCommandHander:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;
    .param p1, "x1"    # Ljava/lang/String;

    .line 59
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->parseCurrentLteMode(Ljava/lang/String;)V

    return-void
.end method

.method private parseCurrentLteMode(Ljava/lang/String;)V
    .locals 3
    .param p1, "data"    # Ljava/lang/String;

    .line 141
    :try_start_0
    const-string v0, ","

    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    .line 142
    .local v0, "info":[Ljava/lang/String;
    const/4 v1, 0x1

    aget-object v1, v0, v1

    invoke-virtual {v1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoFeatureEnableCurStatus:I

    .line 143
    const/4 v1, 0x2

    aget-object v1, v0, v1

    invoke-virtual {v1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoCurStatus:I

    .line 144
    const/4 v1, 0x3

    aget-object v1, v0, v1

    invoke-virtual {v1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoUnderCCACurStatuss:I

    .line 145
    const/4 v1, 0x4

    aget-object v1, v0, v1

    invoke-virtual {v1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxCurStatus:I

    .line 146
    const/4 v1, 0x5

    aget-object v1, v0, v1

    invoke-virtual {v1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxUnderCCACurStatus:I

    .line 147
    const/4 v1, 0x6

    aget-object v1, v0, v1

    invoke-virtual {v1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas2Rx1RxCurStatus:I
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 151
    .end local v0    # "info":[Ljava/lang/String;
    nop

    .line 152
    return-void

    .line 148
    :catch_0
    move-exception v0

    .line 149
    .local v0, "e":Ljava/lang/NumberFormatException;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Wrong current mode format: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "LteRx/MimoConfigure"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 150
    return-void
.end method

.method private queryStatus()V
    .locals 2

    .line 182
    const-string v0, "AT+EGMC=0,\"rx_mimo_set\""

    const-string v1, "+EGMC:"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0x65

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->sendCommand([Ljava/lang/String;I)V

    .line 183
    return-void
.end method

.method private sendCommand([Ljava/lang/String;I)V
    .locals 2
    .param p1, "command"    # [Ljava/lang/String;
    .param p2, "msg"    # I

    .line 186
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sendCommand "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v1, 0x0

    aget-object v1, p1, v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "LteRx/MimoConfigure"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 187
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mCommandHander:Landroid/os/Handler;

    invoke-virtual {v0, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 188
    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 3
    .param p1, "buttonView"    # Landroid/widget/CompoundButton;
    .param p2, "isChecked"    # Z

    .line 327
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getId()I

    move-result v0

    const v1, 0x7f06054c

    const-string v2, "LteRx/MimoConfigure"

    if-eq v0, v1, :cond_2

    const v1, 0x7f06054e

    if-eq v0, v1, :cond_1

    const v1, 0x7f060550

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 337
    :cond_0
    iput p2, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxCurStatus:I

    .line 338
    const-string v0, "RAS_4RX_2RX switching"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 339
    goto :goto_0

    .line 329
    :cond_1
    iput p2, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoFeatureEnableCurStatus:I

    .line 330
    const-string v0, "feature_enable clicked"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 331
    goto :goto_0

    .line 333
    :cond_2
    iput p2, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoCurStatus:I

    .line 334
    const-string v0, "4X4 MIMO clicked"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 335
    nop

    .line 343
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->updateButtonStatus()V

    .line 344
    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 5
    .param p1, "v"    # Landroid/view/View;

    .line 244
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 245
    .local v0, "intent":Landroid/content/Intent;
    const-class v1, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;

    invoke-virtual {v0, p0, v1}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    .line 246
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v1

    const-string v2, "LteRx/MimoConfigure"

    const v3, 0x7f060552

    if-ne v3, v1, :cond_0

    .line 247
    invoke-virtual {p0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->set4RxMimoConfigure()V

    .line 248
    invoke-virtual {p0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->setLteSingleBandSetting()V

    .line 249
    const-string v1, "lte_rx_mimo_set_button click"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 250
    :cond_0
    const v1, 0x7f060544

    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v3

    const-string v4, "band_setting_type"

    if-ne v1, v3, :cond_1

    .line 251
    const-string v1, "4x4MIMO single band setting click"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 252
    const/4 v1, 0x0

    invoke-virtual {v0, v4, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 254
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->startActivity(Landroid/content/Intent;)V

    goto :goto_0

    .line 255
    :cond_1
    const v1, 0x7f060543

    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v3

    if-ne v1, v3, :cond_2

    .line 256
    const-string v1, "4RX single band setting click"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 257
    const/4 v1, 0x1

    invoke-virtual {v0, v4, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 258
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->startActivity(Landroid/content/Intent;)V

    .line 260
    :cond_2
    :goto_0
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 1
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 157
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 158
    const v0, 0x7f08008b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->setContentView(I)V

    .line 159
    const v0, 0x7f06054e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoFeatureEnableCb:Landroid/widget/CheckBox;

    .line 160
    const v0, 0x7f06054c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoCb:Landroid/widget/CheckBox;

    .line 161
    const v0, 0x7f06054d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoUnderCCACb:Landroid/widget/CheckBox;

    .line 162
    const v0, 0x7f060550

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxCb:Landroid/widget/CheckBox;

    .line 163
    nop

    .line 164
    const v0, 0x7f060551

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxUnderCCACb:Landroid/widget/CheckBox;

    .line 165
    const v0, 0x7f06054f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas2Rx1RxCb:Landroid/widget/CheckBox;

    .line 167
    const v0, 0x7f060544

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44SingleBandSettingBt:Landroid/widget/Button;

    .line 168
    const v0, 0x7f060543

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4RxSingleBandSettingBt:Landroid/widget/Button;

    .line 170
    const v0, 0x7f060552

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mSetBt:Landroid/widget/Button;

    .line 171
    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 172
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44SingleBandSettingBt:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 173
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4RxSingleBandSettingBt:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 174
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoFeatureEnableCb:Landroid/widget/CheckBox;

    invoke-virtual {v0, p0}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 175
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoCb:Landroid/widget/CheckBox;

    invoke-virtual {v0, p0}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 176
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxCb:Landroid/widget/CheckBox;

    invoke-virtual {v0, p0}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 178
    invoke-direct {p0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->queryStatus()V

    .line 179
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 4
    .param p1, "id"    # I

    .line 305
    const/4 v0, 0x0

    .line 306
    .local v0, "dialog":Landroid/app/Dialog;
    const/4 v1, 0x1

    if-eq p1, v1, :cond_0

    .line 322
    return-object v0

    .line 308
    :cond_0
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const-string v2, "LteRxMimoConfigure"

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 309
    const-string v2, "It needs to reboot modem to enable this setting\n"

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    new-instance v2, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure$2;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure$2;-><init>(Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;)V

    .line 311
    const-string v3, "Confirm"

    invoke-virtual {v1, v3, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    const/4 v2, 0x0

    .line 320
    const-string v3, "Cancel"

    invoke-virtual {v1, v3, v2}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    invoke-virtual {v1}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v1

    .line 308
    return-object v1
.end method

.method set4RxMimoConfigure()V
    .locals 6

    .line 191
    const-string v0, ""

    .line 193
    .local v0, "cmd":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoFeatureEnableCb:Landroid/widget/CheckBox;

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoFeatureEnableCurStatus:I

    .line 194
    const/4 v2, 0x1

    const/4 v3, 0x0

    if-ne v1, v2, :cond_2

    .line 195
    iget-object v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoCb:Landroid/widget/CheckBox;

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoCurStatus:I

    .line 196
    if-ne v1, v2, :cond_0

    .line 197
    iget-object v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoUnderCCACb:Landroid/widget/CheckBox;

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoUnderCCACurStatuss:I

    goto :goto_0

    .line 199
    :cond_0
    iput v3, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoUnderCCACurStatuss:I

    .line 201
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxCb:Landroid/widget/CheckBox;

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxCurStatus:I

    .line 202
    if-ne v1, v2, :cond_1

    .line 203
    iget-object v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxUnderCCACb:Landroid/widget/CheckBox;

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxUnderCCACurStatus:I

    goto :goto_1

    .line 205
    :cond_1
    iput v3, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxUnderCCACurStatus:I

    .line 206
    :goto_1
    iget-object v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas2Rx1RxCb:Landroid/widget/CheckBox;

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas2Rx1RxCurStatus:I

    goto :goto_2

    .line 208
    :cond_2
    iput v3, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoCurStatus:I

    .line 209
    iput v3, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoUnderCCACurStatuss:I

    .line 210
    iput v3, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxCurStatus:I

    .line 211
    iput v3, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxUnderCCACurStatus:I

    .line 212
    iput v3, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas2Rx1RxCurStatus:I

    .line 215
    :goto_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "AT+EGMC=1,\"rx_mimo_set\","

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoFeatureEnableCurStatus:I

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, ","

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v5, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoCurStatus:I

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v5, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoUnderCCACurStatuss:I

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v5, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxCurStatus:I

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v5, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxUnderCCACurStatus:I

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas2Rx1RxCurStatus:I

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 221
    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/String;

    aput-object v0, v1, v3

    const-string v3, ""

    aput-object v3, v1, v2

    const/16 v2, 0x66

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->sendCommand([Ljava/lang/String;I)V

    .line 222
    return-void
.end method

.method setLteSingleBandSetting()V
    .locals 7

    .line 225
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "LteBandSettingModeHistory = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v1, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->LteBandSettingModeHistory:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "LteRx/MimoConfigure"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 227
    sget v0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->LteBandSettingModeHistory:I

    if-nez v0, :cond_0

    .line 228
    const-string v0, "skip LteSingleBandSetting"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 230
    :cond_0
    sget v0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->LteBandSettingModeHistory:I

    const/4 v1, 0x1

    and-int/2addr v0, v1

    const-string v2, ""

    const/4 v3, 0x0

    const/4 v4, 0x2

    if-ne v0, v1, :cond_1

    iget v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoCurStatus:I

    if-ne v0, v1, :cond_1

    .line 232
    new-array v0, v4, [Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "AT+EGMC=1,\"sb_mimo_set\""

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v6, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->mSbMimoSetString:[Ljava/lang/String;

    aget-object v6, v6, v3

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v0, v3

    aput-object v2, v0, v1

    const/16 v5, 0x67

    invoke-direct {p0, v0, v5}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->sendCommand([Ljava/lang/String;I)V

    .line 235
    :cond_1
    sget v0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->LteBandSettingModeHistory:I

    and-int/2addr v0, v4

    if-ne v0, v4, :cond_2

    iget v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxCurStatus:I

    if-ne v0, v1, :cond_2

    .line 237
    new-array v0, v4, [Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "AT+EGMC=1,\"sb_4rx_set\""

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v5, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->mSbMimoSetString:[Ljava/lang/String;

    aget-object v5, v5, v1

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    aput-object v4, v0, v3

    aput-object v2, v0, v1

    const/16 v1, 0x68

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->sendCommand([Ljava/lang/String;I)V

    .line 240
    :cond_2
    return-void
.end method

.method updateButtonStatus()V
    .locals 4

    .line 263
    const-string v0, "LteRx/MimoConfigure"

    const-string v1, "updateButtonStatus"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 264
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoFeatureEnableCb:Landroid/widget/CheckBox;

    iget v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoFeatureEnableCurStatus:I

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-ne v1, v3, :cond_0

    move v1, v3

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 265
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoCb:Landroid/widget/CheckBox;

    iget v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoCurStatus:I

    if-ne v1, v3, :cond_1

    move v1, v3

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 266
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoUnderCCACb:Landroid/widget/CheckBox;

    iget v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoUnderCCACurStatuss:I

    if-ne v1, v3, :cond_2

    move v1, v3

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 267
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxCb:Landroid/widget/CheckBox;

    iget v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxCurStatus:I

    if-ne v1, v3, :cond_3

    move v1, v3

    goto :goto_3

    :cond_3
    move v1, v2

    :goto_3
    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 268
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxUnderCCACb:Landroid/widget/CheckBox;

    iget v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxUnderCCACurStatus:I

    if-ne v1, v3, :cond_4

    move v1, v3

    goto :goto_4

    :cond_4
    move v1, v2

    :goto_4
    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 269
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas2Rx1RxCb:Landroid/widget/CheckBox;

    iget v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas2Rx1RxCurStatus:I

    if-ne v1, v3, :cond_5

    move v1, v3

    goto :goto_5

    :cond_5
    move v1, v2

    :goto_5
    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 271
    iget v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoFeatureEnableCurStatus:I

    if-nez v0, :cond_6

    .line 272
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoCb:Landroid/widget/CheckBox;

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 273
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoUnderCCACb:Landroid/widget/CheckBox;

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 274
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxCb:Landroid/widget/CheckBox;

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 275
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxUnderCCACb:Landroid/widget/CheckBox;

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 276
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44SingleBandSettingBt:Landroid/widget/Button;

    invoke-virtual {v0, v2}, Landroid/widget/Button;->setEnabled(Z)V

    .line 277
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas2Rx1RxCb:Landroid/widget/CheckBox;

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setEnabled(Z)V

    goto :goto_6

    .line 279
    :cond_6
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoCb:Landroid/widget/CheckBox;

    invoke-virtual {v0, v3}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 280
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoUnderCCACb:Landroid/widget/CheckBox;

    invoke-virtual {v0, v3}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 281
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxCb:Landroid/widget/CheckBox;

    invoke-virtual {v0, v3}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 282
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxUnderCCACb:Landroid/widget/CheckBox;

    invoke-virtual {v0, v3}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 283
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas2Rx1RxCb:Landroid/widget/CheckBox;

    invoke-virtual {v0, v3}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 284
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44SingleBandSettingBt:Landroid/widget/Button;

    invoke-virtual {v0, v3}, Landroid/widget/Button;->setEnabled(Z)V

    .line 287
    :goto_6
    iget v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoCurStatus:I

    if-ne v0, v3, :cond_7

    iget v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoFeatureEnableCurStatus:I

    if-ne v0, v3, :cond_7

    .line 288
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoUnderCCACb:Landroid/widget/CheckBox;

    invoke-virtual {v0, v3}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 289
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44SingleBandSettingBt:Landroid/widget/Button;

    invoke-virtual {v0, v3}, Landroid/widget/Button;->setEnabled(Z)V

    goto :goto_7

    .line 291
    :cond_7
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44MomoUnderCCACb:Landroid/widget/CheckBox;

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 292
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimo44SingleBandSettingBt:Landroid/widget/Button;

    invoke-virtual {v0, v2}, Landroid/widget/Button;->setEnabled(Z)V

    .line 294
    :goto_7
    iget v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxCurStatus:I

    if-ne v0, v3, :cond_8

    iget v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoFeatureEnableCurStatus:I

    if-ne v0, v3, :cond_8

    .line 295
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxUnderCCACb:Landroid/widget/CheckBox;

    invoke-virtual {v0, v3}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 296
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4RxSingleBandSettingBt:Landroid/widget/Button;

    invoke-virtual {v0, v3}, Landroid/widget/Button;->setEnabled(Z)V

    goto :goto_8

    .line 298
    :cond_8
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4Rx2RxUnderCCACb:Landroid/widget/CheckBox;

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 299
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->mRxMimoRas4RxSingleBandSettingBt:Landroid/widget/Button;

    invoke-virtual {v0, v2}, Landroid/widget/Button;->setEnabled(Z)V

    .line 301
    :goto_8
    return-void
.end method
