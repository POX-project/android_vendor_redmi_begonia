.class public Lcom/mediatek/engineermode/channellock/ChannelLock;
.super Landroid/app/Activity;
.source "ChannelLock.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# static fields
.field private static final MSG_CHANNEL_LOCK:I = 0x1

.field private static final MSG_QUERY_CHANNEL_LOCK:I = 0x2

.field private static final REBOOT_DIALOG:I = 0x7d0

.field private static final TAG:Ljava/lang/String; = "ChannelLock"


# instance fields
.field private final mATCmdHander:Landroid/os/Handler;

.field private mEMMCHLCKcommand:Ljava/lang/String;

.field private mRadioGSM1900NoButton:Landroid/widget/RadioButton;

.field private mRadioGSM1900YesButton:Landroid/widget/RadioButton;

.field private mRadioLockDisableButton:Landroid/widget/RadioButton;

.field private mRadioLockEnableButton:Landroid/widget/RadioButton;

.field private mRadioLockModeIdleConnected:Landroid/widget/RadioButton;

.field private mRadioLockModeIdleOnly:Landroid/widget/RadioButton;

.field private mRadioLockModeUnchanged:Landroid/widget/RadioButton;

.field private mRadioRatGSMButton:Landroid/widget/RadioButton;

.field private mRadioRatLTEButton:Landroid/widget/RadioButton;

.field private mRadioRatNRButton:Landroid/widget/RadioButton;

.field private mRadioRatUMTSButton:Landroid/widget/RadioButton;

.field private mSetButtonApply:Landroid/widget/Button;

.field private mSetButtonReset:Landroid/widget/Button;

.field private mSimType:I

.field private mTextARFCNnumber:Landroid/widget/EditText;

.field private mTextCELLIDNnumber:Landroid/widget/EditText;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 58
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 80
    const-string v0, "AT+EMMCHLCK="

    iput-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    .line 83
    new-instance v0, Lcom/mediatek/engineermode/channellock/ChannelLock$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/channellock/ChannelLock$1;-><init>(Lcom/mediatek/engineermode/channellock/ChannelLock;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mATCmdHander:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/channellock/ChannelLock;[Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/channellock/ChannelLock;
    .param p1, "x1"    # [Ljava/lang/String;

    .line 58
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/channellock/ChannelLock;->handleQuery([Ljava/lang/String;)V

    return-void
.end method

.method private handleQuery([Ljava/lang/String;)V
    .locals 16
    .param p1, "data"    # [Ljava/lang/String;

    .line 236
    move-object/from16 v1, p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "data = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v2, 0x0

    aget-object v3, p1, v2

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, "ChannelLock"

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 237
    aget-object v0, p1, v2

    const-string v4, "+EMMCHLCK:"

    invoke-virtual {v4}, Ljava/lang/String;->length()I

    move-result v4

    invoke-virtual {v0, v4}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v4

    .line 238
    .local v4, "str":Ljava/lang/String;
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "response value:"

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 239
    const-string v0, ","

    invoke-virtual {v4, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v5

    .line 240
    .local v5, "arrayval":[Ljava/lang/String;
    const/4 v6, 0x0

    .line 241
    .local v6, "lockStatus":I
    const/4 v7, 0x0

    .line 242
    .local v7, "ret":I
    const/4 v8, 0x0

    .line 243
    .local v8, "gsm1900":I
    const/4 v9, 0x0

    .line 244
    .local v9, "arfcn":I
    const/4 v10, 0x0

    .line 245
    .local v10, "cellId":I
    const/4 v11, 0x0

    .line 248
    .local v11, "lockMode":I
    const/4 v12, 0x3

    const/4 v13, 0x2

    const/4 v14, 0x1

    :try_start_0
    aget-object v0, v5, v2

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    move v6, v0

    .line 249
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "lockStatus = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 250
    if-eqz v6, :cond_0

    .line 251
    aget-object v0, v5, v14

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    move v7, v0

    .line 252
    aget-object v0, v5, v13

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    move v8, v0

    .line 253
    aget-object v0, v5, v12

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    move v9, v0

    .line 254
    const/4 v0, 0x4

    aget-object v0, v5, v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    move v10, v0

    .line 255
    const/4 v0, 0x5

    aget-object v0, v5, v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    move v11, v0

    .line 256
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "ret = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 257
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "gsm1900 = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 258
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "arfcn = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 259
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "cellId = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 260
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "lockMode = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 264
    :cond_0
    goto :goto_0

    .line 262
    :catch_0
    move-exception v0

    .line 263
    .local v0, "e":Ljava/lang/Exception;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v15, "response value parse failed,"

    invoke-virtual {v2, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v15

    invoke-virtual {v2, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 266
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    if-nez v6, :cond_1

    .line 267
    iget-object v0, v1, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioLockDisableButton:Landroid/widget/RadioButton;

    invoke-virtual {v0, v14}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto/16 :goto_5

    .line 268
    :cond_1
    if-ne v6, v14, :cond_c

    .line 269
    iget-object v0, v1, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioLockEnableButton:Landroid/widget/RadioButton;

    invoke-virtual {v0, v14}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 272
    if-nez v7, :cond_2

    .line 273
    iget-object v0, v1, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioRatGSMButton:Landroid/widget/RadioButton;

    invoke-virtual {v0, v14}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_1

    .line 274
    :cond_2
    if-ne v7, v13, :cond_3

    .line 275
    iget-object v0, v1, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioRatUMTSButton:Landroid/widget/RadioButton;

    invoke-virtual {v0, v14}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_1

    .line 276
    :cond_3
    const/4 v0, 0x7

    if-ne v7, v0, :cond_4

    .line 277
    iget-object v0, v1, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioRatLTEButton:Landroid/widget/RadioButton;

    invoke-virtual {v0, v14}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_1

    .line 278
    :cond_4
    const/16 v0, 0xb

    if-ne v7, v0, :cond_5

    .line 279
    iget-object v0, v1, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioRatNRButton:Landroid/widget/RadioButton;

    invoke-virtual {v0, v14}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_1

    .line 281
    :cond_5
    const-string v0, "Invalid Channel Lock RAT value"

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 285
    :goto_1
    if-ne v8, v14, :cond_6

    .line 286
    iget-object v0, v1, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioGSM1900YesButton:Landroid/widget/RadioButton;

    invoke-virtual {v0, v14}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_2

    .line 287
    :cond_6
    if-nez v8, :cond_7

    .line 288
    iget-object v0, v1, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioGSM1900NoButton:Landroid/widget/RadioButton;

    invoke-virtual {v0, v14}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_2

    .line 290
    :cond_7
    const-string v0, "Invalid Channel Lock GSM1900 value"

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 294
    :goto_2
    iget-object v0, v1, Lcom/mediatek/engineermode/channellock/ChannelLock;->mTextARFCNnumber:Landroid/widget/EditText;

    invoke-static {v9}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 297
    if-ltz v10, :cond_9

    const/16 v0, 0x1ff

    if-le v10, v0, :cond_8

    goto :goto_3

    .line 301
    :cond_8
    iget-object v0, v1, Lcom/mediatek/engineermode/channellock/ChannelLock;->mTextCELLIDNnumber:Landroid/widget/EditText;

    invoke-static {v10}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    goto :goto_4

    .line 298
    :cond_9
    :goto_3
    const-string v0, "Invalid Cell ID value"

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 299
    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 304
    :goto_4
    if-nez v11, :cond_a

    .line 305
    iget-object v0, v1, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioLockModeIdleOnly:Landroid/widget/RadioButton;

    invoke-virtual {v0, v14}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_5

    .line 306
    :cond_a
    if-ne v11, v12, :cond_b

    .line 307
    iget-object v0, v1, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioLockModeIdleConnected:Landroid/widget/RadioButton;

    invoke-virtual {v0, v14}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_5

    .line 309
    :cond_b
    const-string v0, "Invalid Channel Lock mode value"

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_5

    .line 312
    :cond_c
    const-string v0, "Invalid Channel Lock value"

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 314
    :goto_5
    return-void
.end method

.method private sendATCommand([Ljava/lang/String;I)V
    .locals 2
    .param p1, "atCommand"    # [Ljava/lang/String;
    .param p2, "msg"    # I

    .line 231
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sendATCommand "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v1, 0x0

    aget-object v1, p1, v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ChannelLock"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 232
    iget v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mSimType:I

    iget-object v1, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mATCmdHander:Landroid/os/Handler;

    invoke-virtual {v1, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v1

    invoke-static {v0, p1, v1}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 233
    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 6
    .param p1, "arg0"    # Landroid/view/View;

    .line 176
    const-string v0, "AT+EMMCHLCK="

    iput-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    .line 177
    iget-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mSetButtonReset:Landroid/widget/Button;

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-ne p1, v0, :cond_0

    .line 178
    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->setAirplaneModeEnabled(Z)V

    .line 179
    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->setAirplaneModeEnabled(Z)V

    .line 180
    const-string v0, "Reset the airplane Mode succeed,please try"

    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    goto/16 :goto_3

    .line 181
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mSetButtonApply:Landroid/widget/Button;

    if-ne p1, v0, :cond_b

    .line 182
    iget-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioLockDisableButton:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 183
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "0"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    goto/16 :goto_2

    .line 184
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioLockEnableButton:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_9

    .line 185
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "1,"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    .line 187
    iget-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioRatGSMButton:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    const-string v4, "0,"

    if-eqz v0, :cond_2

    .line 188
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    goto :goto_0

    .line 189
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioRatUMTSButton:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 190
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "2,"

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    goto :goto_0

    .line 191
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioRatLTEButton:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 192
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "7,"

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    goto :goto_0

    .line 193
    :cond_4
    iget-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioRatNRButton:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 194
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "11,"

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    goto :goto_0

    .line 196
    :cond_5
    const-string v0, "ERROR in RAT"

    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 200
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioGSM1900YesButton:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_6

    .line 201
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    goto :goto_1

    .line 202
    :cond_6
    iget-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioGSM1900NoButton:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_7

    .line 203
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    goto :goto_1

    .line 205
    :cond_7
    const-string v0, "ERROR in GSM1900"

    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 209
    :goto_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mTextARFCNnumber:Landroid/widget/EditText;

    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v3, ","

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    .line 212
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mTextCELLIDNnumber:Landroid/widget/EditText;

    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    .line 215
    iget-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioLockModeUnchanged:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-nez v0, :cond_a

    .line 216
    iget-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioLockModeIdleOnly:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_8

    .line 217
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ",0"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    goto :goto_2

    .line 218
    :cond_8
    iget-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioLockModeIdleConnected:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_a

    .line 219
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ",3"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    goto :goto_2

    .line 224
    :cond_9
    const-string v0, "ERROR in Lock"

    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 226
    :cond_a
    :goto_2
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    iget-object v3, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mEMMCHLCKcommand:Ljava/lang/String;

    aput-object v3, v0, v1

    const-string v1, ""

    aput-object v1, v0, v2

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/channellock/ChannelLock;->sendATCommand([Ljava/lang/String;I)V

    .line 228
    :cond_b
    :goto_3
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 123
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 124
    const v0, 0x7f08002e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/channellock/ChannelLock;->setContentView(I)V

    .line 125
    invoke-virtual {p0}, Lcom/mediatek/engineermode/channellock/ChannelLock;->getIntent()Landroid/content/Intent;

    move-result-object v0

    .line 126
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "mSimType"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mSimType:I

    .line 127
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "mSimType: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mSimType:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ChannelLock"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 130
    const v1, 0x7f060282

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/channellock/ChannelLock;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mSetButtonApply:Landroid/widget/Button;

    .line 132
    const v1, 0x7f06028a

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/channellock/ChannelLock;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mSetButtonReset:Landroid/widget/Button;

    .line 134
    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 135
    iget-object v1, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mSetButtonApply:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 138
    const v1, 0x7f060285

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/channellock/ChannelLock;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioLockEnableButton:Landroid/widget/RadioButton;

    .line 139
    const v1, 0x7f060284

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/channellock/ChannelLock;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioLockDisableButton:Landroid/widget/RadioButton;

    .line 142
    const v1, 0x7f060650

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/channellock/ChannelLock;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioRatGSMButton:Landroid/widget/RadioButton;

    .line 143
    const v1, 0x7f060655

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/channellock/ChannelLock;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioRatUMTSButton:Landroid/widget/RadioButton;

    .line 144
    const v1, 0x7f060651

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/channellock/ChannelLock;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioRatLTEButton:Landroid/widget/RadioButton;

    .line 145
    const v1, 0x7f060653

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/channellock/ChannelLock;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioRatNRButton:Landroid/widget/RadioButton;

    .line 148
    const v1, 0x7f0603e5

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/channellock/ChannelLock;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioGSM1900YesButton:Landroid/widget/RadioButton;

    .line 149
    const v1, 0x7f0603e4

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/channellock/ChannelLock;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioGSM1900NoButton:Landroid/widget/RadioButton;

    .line 152
    const v1, 0x7f060281

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/channellock/ChannelLock;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    iput-object v1, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mTextARFCNnumber:Landroid/widget/EditText;

    .line 155
    const v1, 0x7f060283

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/channellock/ChannelLock;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    iput-object v1, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mTextCELLIDNnumber:Landroid/widget/EditText;

    .line 158
    const v1, 0x7f06053b

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/channellock/ChannelLock;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioLockModeUnchanged:Landroid/widget/RadioButton;

    .line 159
    const v1, 0x7f06053a

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/channellock/ChannelLock;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioLockModeIdleOnly:Landroid/widget/RadioButton;

    .line 160
    const v1, 0x7f060539

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/channellock/ChannelLock;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/channellock/ChannelLock;->mRadioLockModeIdleConnected:Landroid/widget/RadioButton;

    .line 161
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 5
    .param p1, "id"    # I

    .line 318
    const/4 v0, 0x0

    .line 319
    .local v0, "dialog":Landroid/app/Dialog;
    const/4 v1, 0x0

    .line 320
    .local v1, "builder":Landroid/app/AlertDialog$Builder;
    const/16 v2, 0x7d0

    if-eq p1, v2, :cond_0

    .line 326
    return-object v0

    .line 322
    :cond_0
    new-instance v2, Landroid/app/AlertDialog$Builder;

    invoke-direct {v2, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const-string v3, "Channel lock:"

    invoke-virtual {v2, v3}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v2

    .line 323
    const-string v3, "Please click Reset by Airplane Mode button to take effect!"

    invoke-virtual {v2, v3}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v2

    const/4 v3, 0x0

    .line 324
    const-string v4, "OK"

    invoke-virtual {v2, v4, v3}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v2

    invoke-virtual {v2}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v2

    .line 322
    return-object v2
.end method

.method protected onResume()V
    .locals 4

    .line 165
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 166
    const/4 v0, 0x2

    new-array v1, v0, [Ljava/lang/String;

    .line 167
    .local v1, "cmd":[Ljava/lang/String;
    const/4 v2, 0x0

    const-string v3, "AT+EMMCHLCK?"

    aput-object v3, v1, v2

    .line 168
    const/4 v2, 0x1

    const-string v3, "+EMMCHLCK:"

    aput-object v3, v1, v2

    .line 169
    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/channellock/ChannelLock;->sendATCommand([Ljava/lang/String;I)V

    .line 170
    return-void
.end method
