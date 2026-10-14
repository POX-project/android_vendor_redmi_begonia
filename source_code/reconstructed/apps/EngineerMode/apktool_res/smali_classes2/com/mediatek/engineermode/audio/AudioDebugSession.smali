.class public Lcom/mediatek/engineermode/audio/AudioDebugSession;
.super Landroid/app/Activity;
.source "AudioDebugSession.java"

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# static fields
.field private static final AUDIO_DISENABLE_HYBRID_NLE:Ljava/lang/String; = "AudioEnableHybridNLE=0"

.field private static final AUDIO_ENABLE_HYBRID_NLE:Ljava/lang/String; = "AudioEnableHybridNLE=1"

.field private static final AUDIO_HYBRID_NLE:Ljava/lang/String; = "AudioEnableHybridNLE"

.field private static final AUDIO_HYBRID_NLE_EOP:Ljava/lang/String; = "AudioHybridNLEEOP"

.field private static final CUST_XML_PARAM:Ljava/lang/String; = "GET_CUST_XML_ENABLE"

.field private static final CUST_XML_SET_SUPPORT_PARAM:Ljava/lang/String; = "SET_CUST_XML_ENABLE=1"

.field private static final CUST_XML_SET_UNSUPPORT_PARAM:Ljava/lang/String; = "SET_CUST_XML_ENABLE=0"

.field private static final GET_AECREC_TEST_ENABLE:I = 0xa5

.field private static final GET_MAGIASR_TEST_ENABLE:I = 0xa3

.field private static final HEAD_DETECT_PATH:Ljava/lang/String; = "/sys/bus/platform/drivers/Accdet_Driver/state"

.field private static final HEAD_DETECT_PATH2:Ljava/lang/String; = "/sys/bus/platform/drivers/pmic-codec-accdet/state"

.field private static final MTK_AUDIO_HYBRID_NLE_SUPPORT:Ljava/lang/String; = "MTK_AUDIO_HYBRID_NLE_SUPPORT"

.field private static final RESULT_SUPPORT:Ljava/lang/String; = "GET_CUST_XML_ENABLE=1"

.field private static final RESULT_UNSUPPORT:Ljava/lang/String; = "GET_CUST_XML_ENABLE=0"

.field private static final SET_AECREC_TEST_ENABLE:I = 0xa4

.field private static final SET_MAGIASR_TEST_ENABLE:I = 0xa2

.field private static final TAG:Ljava/lang/String; = "Audio/DebugSession"


# instance fields
.field private mAudioMgr:Landroid/media/AudioManager;

.field private mBtnDetect:Landroid/widget/Button;

.field private mBtnSetNLE:Landroid/widget/Button;

.field private mCbAecRec:Landroid/widget/CheckBox;

.field private mCbCustParam:Landroid/widget/CheckBox;

.field private mCbMagi:Landroid/widget/CheckBox;

.field private mCbNLE:Landroid/widget/CheckBox;

.field private mEtNLE:Landroid/widget/EditText;

.field private mLinearLayoutNLE:Landroid/widget/LinearLayout;

.field private mToast:Landroid/widget/Toast;

.field private mTvDetect:Landroid/widget/TextView;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 68
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 100
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mToast:Landroid/widget/Toast;

    .line 101
    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mAudioMgr:Landroid/media/AudioManager;

    return-void
.end method

.method private showToast(Ljava/lang/String;)V
    .locals 1
    .param p1, "msg"    # Ljava/lang/String;

    .line 260
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mToast:Landroid/widget/Toast;

    if-eqz v0, :cond_0

    .line 261
    invoke-virtual {v0}, Landroid/widget/Toast;->cancel()V

    .line 263
    :cond_0
    const/4 v0, 0x0

    invoke-static {p0, p1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mToast:Landroid/widget/Toast;

    .line 264
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 265
    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 6
    .param p1, "buttonView"    # Landroid/widget/CompoundButton;
    .param p2, "isChecked"    # Z

    .line 175
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mCbMagi:Landroid/widget/CheckBox;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, -0x1

    const-string v2, ") ret "

    const-string v3, "Audio/DebugSession"

    if-eqz v0, :cond_1

    .line 176
    const/16 v0, 0xa2

    invoke-static {v0, p2}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->setAudioCommand(II)I

    move-result v0

    .line 177
    .local v0, "ret":I
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "setAudioCommand(0xA2, "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 178
    if-ne v0, v1, :cond_0

    .line 179
    const-string v1, "set audio parameter 0xA2 failed."

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->showToast(Ljava/lang/String;)V

    .line 181
    .end local v0    # "ret":I
    :cond_0
    goto/16 :goto_3

    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mCbAecRec:Landroid/widget/CheckBox;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 182
    const/16 v0, 0xa4

    invoke-static {v0, p2}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->setAudioCommand(II)I

    move-result v0

    .line 183
    .restart local v0    # "ret":I
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "setAudioCommand(0xA4, "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 184
    if-ne v0, v1, :cond_2

    .line 185
    const-string v1, "set audio parameter 0xA4 failed."

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->showToast(Ljava/lang/String;)V

    .line 187
    .end local v0    # "ret":I
    :cond_2
    goto :goto_3

    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mCbCustParam:Landroid/widget/CheckBox;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 188
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mAudioMgr:Landroid/media/AudioManager;

    iget-object v1, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mCbCustParam:Landroid/widget/CheckBox;

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    if-eqz v1, :cond_4

    .line 189
    const-string v1, "SET_CUST_XML_ENABLE=1"

    goto :goto_0

    :cond_4
    const-string v1, "SET_CUST_XML_ENABLE=0"

    .line 188
    :goto_0
    invoke-virtual {v0, v1}, Landroid/media/AudioManager;->setParameters(Ljava/lang/String;)V

    .line 190
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mCbCustParam:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->CustXmlEnableChanged(I)Z

    goto :goto_3

    .line 192
    :cond_5
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mCbNLE:Landroid/widget/CheckBox;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_8

    .line 193
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mAudioMgr:Landroid/media/AudioManager;

    iget-object v1, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mCbNLE:Landroid/widget/CheckBox;

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    const-string v2, "AudioEnableHybridNLE=1"

    const-string v4, "AudioEnableHybridNLE=0"

    if-eqz v1, :cond_6

    .line 194
    move-object v1, v2

    goto :goto_1

    :cond_6
    move-object v1, v4

    .line 193
    :goto_1
    invoke-virtual {v0, v1}, Landroid/media/AudioManager;->setParameters(Ljava/lang/String;)V

    .line 195
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mCbNLE changed "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mCbNLE:Landroid/widget/CheckBox;

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    if-eqz v1, :cond_7

    .line 196
    goto :goto_2

    :cond_7
    move-object v2, v4

    :goto_2
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 195
    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 198
    :cond_8
    :goto_3
    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 9
    .param p1, "arg0"    # Landroid/view/View;

    .line 202
    const-string v0, "Detection failed"

    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v1

    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mBtnDetect:Landroid/widget/Button;

    invoke-virtual {v2}, Landroid/widget/Button;->getId()I

    move-result v2

    const-string v3, "Audio/DebugSession"

    if-ne v1, v2, :cond_4

    .line 203
    const-string v1, "/sys/bus/platform/drivers/Accdet_Driver/state"

    .line 204
    .local v1, "headDetectPath":Ljava/lang/String;
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v2

    if-nez v2, :cond_0

    .line 205
    const-string v1, "/sys/bus/platform/drivers/pmic-codec-accdet/state"

    .line 207
    :cond_0
    const/4 v2, -0x1

    .line 208
    .local v2, "ret":I
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "cat "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 210
    .local v4, "cmd":Ljava/lang/String;
    const/4 v5, 0x1

    :try_start_0
    invoke-static {v4, v5}, Lcom/mediatek/engineermode/ShellExe;->execCommand(Ljava/lang/String;Z)I

    move-result v6

    move v2, v6

    .line 211
    if-nez v2, :cond_3

    .line 212
    invoke-static {}, Lcom/mediatek/engineermode/ShellExe;->getOutput()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v6

    .line 213
    .local v6, "mode":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, ": "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mediatek/engineermode/ShellExe;->getOutput()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v3, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 214
    if-ne v6, v5, :cond_1

    .line 215
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mTvDetect:Landroid/widget/TextView;

    const v7, 0x7f0a0023

    invoke-virtual {p0, v7}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->getString(I)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v5, v7}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    .line 216
    :cond_1
    const/4 v5, 0x2

    if-ne v6, v5, :cond_2

    .line 217
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mTvDetect:Landroid/widget/TextView;

    const v7, 0x7f0a0022

    invoke-virtual {p0, v7}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->getString(I)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v5, v7}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    .line 219
    :cond_2
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mTvDetect:Landroid/widget/TextView;

    const v7, 0x7f0a0024

    invoke-virtual {p0, v7}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->getString(I)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v5, v7}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 221
    .end local v6    # "mode":I
    :goto_0
    goto :goto_1

    .line 222
    :cond_3
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->showToast(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    .line 227
    :catch_0
    move-exception v3

    .line 228
    .local v3, "e":Ljava/lang/NumberFormatException;
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->showToast(Ljava/lang/String;)V

    goto :goto_2

    .line 224
    .end local v3    # "e":Ljava/lang/NumberFormatException;
    :catch_1
    move-exception v5

    .line 225
    .local v5, "e":Ljava/io/IOException;
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v3, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 226
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->showToast(Ljava/lang/String;)V

    .line 229
    .end local v5    # "e":Ljava/io/IOException;
    :goto_1
    nop

    .line 230
    .end local v1    # "headDetectPath":Ljava/lang/String;
    .end local v2    # "ret":I
    .end local v4    # "cmd":Ljava/lang/String;
    :goto_2
    goto/16 :goto_5

    .line 231
    :cond_4
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    iget-object v1, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mBtnSetNLE:Landroid/widget/Button;

    invoke-virtual {v1}, Landroid/widget/Button;->getId()I

    move-result v1

    if-ne v0, v1, :cond_a

    .line 232
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mEtNLE:Landroid/widget/EditText;

    const-string v1, "Please input an num 0 ~~ -96"

    if-eqz v0, :cond_9

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    if-nez v0, :cond_5

    goto/16 :goto_4

    .line 236
    :cond_5
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mEtNLE:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 237
    .local v0, "input":Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "input AUDIO_HYBRID_NLE_EOP = "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 239
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v2

    if-nez v2, :cond_8

    invoke-static {v0}, Ljava/lang/Long;->valueOf(Ljava/lang/String;)Ljava/lang/Long;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Long;->longValue()J

    move-result-wide v4

    const-wide/16 v6, 0x0

    cmp-long v2, v4, v6

    if-gtz v2, :cond_8

    invoke-static {v0}, Ljava/lang/Long;->valueOf(Ljava/lang/String;)Ljava/lang/Long;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Long;->longValue()J

    move-result-wide v4

    const-wide/16 v6, -0x60

    cmp-long v2, v4, v6

    if-gez v2, :cond_6

    goto :goto_3

    .line 243
    :cond_6
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "AudioHybridNLEEOP="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 244
    .local v1, "sets":Ljava/lang/String;
    invoke-static {v1}, Landroid/media/AudioSystem;->setParameters(Ljava/lang/String;)I

    .line 245
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "set AUDIO_HYBRID_NLE_EOP = "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 247
    const-string v2, "AudioHybridNLEEOP"

    invoke-static {v2}, Landroid/media/AudioSystem;->getParameters(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 248
    .local v2, "ret":Ljava/lang/String;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "get AUDIO_HYBRID_NLE_EOP = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 249
    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_7

    .line 250
    const-string v3, "The value set succeeful"

    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->showToast(Ljava/lang/String;)V

    goto :goto_5

    .line 254
    :cond_7
    const-string v3, "The value set failed"

    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->showToast(Ljava/lang/String;)V

    goto :goto_5

    .line 240
    .end local v1    # "sets":Ljava/lang/String;
    .end local v2    # "ret":Ljava/lang/String;
    :cond_8
    :goto_3
    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->showToast(Ljava/lang/String;)V

    .line 241
    return-void

    .line 233
    .end local v0    # "input":Ljava/lang/String;
    :cond_9
    :goto_4
    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->showToast(Ljava/lang/String;)V

    .line 234
    return-void

    .line 257
    :cond_a
    :goto_5
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 10
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 105
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 106
    const v0, 0x7f080011

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->setContentView(I)V

    .line 107
    const-string v0, "audio"

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/media/AudioManager;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mAudioMgr:Landroid/media/AudioManager;

    .line 108
    const v0, 0x7f06001f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mBtnDetect:Landroid/widget/Button;

    .line 109
    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 110
    const v0, 0x7f060021

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mTvDetect:Landroid/widget/TextView;

    .line 111
    const v0, 0x7f060029

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mCbMagi:Landroid/widget/CheckBox;

    .line 112
    const v0, 0x7f060008

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mCbAecRec:Landroid/widget/CheckBox;

    .line 113
    const v0, 0x7f06000f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mCbCustParam:Landroid/widget/CheckBox;

    .line 114
    const v0, 0x7f060027

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mBtnSetNLE:Landroid/widget/Button;

    .line 115
    const v0, 0x7f060025

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mEtNLE:Landroid/widget/EditText;

    .line 116
    const v0, 0x7f060022

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mCbNLE:Landroid/widget/CheckBox;

    .line 117
    const v0, 0x7f060023

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mLinearLayoutNLE:Landroid/widget/LinearLayout;

    .line 119
    nop

    .line 120
    const-string v0, "MTK_AUDIO_HYBRID_NLE_SUPPORT"

    invoke-static {v0}, Landroid/media/AudioSystem;->getParameters(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 121
    .local v0, "audioHybridNleSupport":Ljava/lang/String;
    const-string v1, "Audio/DebugSession"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 122
    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mLinearLayoutNLE:Landroid/widget/LinearLayout;

    const/16 v3, 0x8

    invoke-virtual {v2, v3}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 123
    const-string v2, "MTK_AUDIO_HYBRID_NLE_SUPPORT=1"

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    const/4 v4, 0x0

    const/4 v5, 0x1

    if-eqz v2, :cond_1

    .line 124
    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mLinearLayoutNLE:Landroid/widget/LinearLayout;

    invoke-virtual {v2, v4}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 125
    const-string v2, "AudioEnableHybridNLE"

    invoke-static {v2}, Landroid/media/AudioSystem;->getParameters(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 126
    .local v2, "ret":Ljava/lang/String;
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "getParameters(AUDIO_HYBRID_NLE) ret = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v1, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 127
    iget-object v6, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mCbNLE:Landroid/widget/CheckBox;

    const-string v7, "AudioEnableHybridNLE=1"

    invoke-virtual {v7, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    invoke-virtual {v6, v7}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 128
    iget-object v6, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mCbNLE:Landroid/widget/CheckBox;

    invoke-virtual {v6, p0}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 129
    const-string v6, "AudioHybridNLEEOP"

    invoke-static {v6}, Landroid/media/AudioSystem;->getParameters(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 130
    .local v6, "rets":Ljava/lang/String;
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "getParameters(AUDIO_HYBRID_NLE_EOP) rets = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v1, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 131
    const-string v7, "="

    invoke-virtual {v6, v7}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v7

    .line 132
    .local v7, "values":[Ljava/lang/String;
    array-length v8, v7

    const/4 v9, 0x2

    if-ne v8, v9, :cond_0

    .line 133
    iget-object v8, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mEtNLE:Landroid/widget/EditText;

    aget-object v9, v7, v5

    invoke-virtual {v8, v9}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 135
    :cond_0
    iget-object v8, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mBtnSetNLE:Landroid/widget/Button;

    invoke-virtual {v8, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 138
    .end local v2    # "ret":Ljava/lang/String;
    .end local v6    # "rets":Ljava/lang/String;
    .end local v7    # "values":[Ljava/lang/String;
    :cond_1
    const v2, 0x7f060011

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    .line 139
    .local v2, "tvCustParam":Landroid/widget/TextView;
    const v6, 0x7f060010

    invoke-virtual {p0, v6}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->findViewById(I)Landroid/view/View;

    move-result-object v6

    .line 140
    .local v6, "divider":Landroid/view/View;
    sget-object v7, Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;->VER_2_2:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    invoke-static {}, Lcom/mediatek/engineermode/audio/Audio;->getAudioTuningVer()Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    move-result-object v8

    if-eq v7, v8, :cond_2

    .line 141
    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mCbCustParam:Landroid/widget/CheckBox;

    invoke-virtual {v7, v3}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 142
    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setVisibility(I)V

    .line 143
    invoke-virtual {v6, v3}, Landroid/view/View;->setVisibility(I)V

    goto :goto_1

    .line 145
    :cond_2
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->isEngLoad()Z

    move-result v7

    if-eqz v7, :cond_3

    .line 146
    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mCbCustParam:Landroid/widget/CheckBox;

    invoke-virtual {v7, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 147
    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mCbCustParam:Landroid/widget/CheckBox;

    invoke-virtual {v7, v4}, Landroid/widget/CheckBox;->setEnabled(Z)V

    goto :goto_1

    .line 149
    :cond_3
    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mAudioMgr:Landroid/media/AudioManager;

    const-string v8, "GET_CUST_XML_ENABLE"

    invoke-virtual {v7, v8}, Landroid/media/AudioManager;->getParameters(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 150
    .local v7, "check":Ljava/lang/String;
    if-eqz v7, :cond_4

    const-string v8, "GET_CUST_XML_ENABLE=1"

    invoke-virtual {v8, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_4

    .line 151
    iget-object v8, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mCbCustParam:Landroid/widget/CheckBox;

    invoke-virtual {v8, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_0

    .line 153
    :cond_4
    iget-object v8, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mCbCustParam:Landroid/widget/CheckBox;

    invoke-virtual {v8, v4}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 155
    :goto_0
    iget-object v8, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mCbCustParam:Landroid/widget/CheckBox;

    invoke-virtual {v8, p0}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 158
    .end local v7    # "check":Ljava/lang/String;
    :goto_1
    const/16 v7, 0xa3

    invoke-static {v7}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->getAudioCommand(I)I

    move-result v7

    .line 159
    .local v7, "ret":I
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "getAudioCommand(0xA3) ret "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v1, v8}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 160
    if-nez v7, :cond_5

    .line 161
    const v8, 0x7f06002a

    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/audio/AudioDebugSession;->findViewById(I)Landroid/view/View;

    move-result-object v8

    invoke-virtual {v8, v3}, Landroid/view/View;->setVisibility(I)V

    goto :goto_3

    .line 163
    :cond_5
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mCbMagi:Landroid/widget/CheckBox;

    if-ne v7, v5, :cond_6

    move v8, v5

    goto :goto_2

    :cond_6
    move v8, v4

    :goto_2
    invoke-virtual {v3, v8}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 164
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mCbMagi:Landroid/widget/CheckBox;

    invoke-virtual {v3, p0}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 167
    :goto_3
    const/16 v3, 0xa5

    invoke-static {v3}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->getAudioCommand(I)I

    move-result v3

    .line 168
    .end local v7    # "ret":I
    .local v3, "ret":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "getAudioCommand(0xA5) ret "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v1, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 169
    iget-object v1, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mCbAecRec:Landroid/widget/CheckBox;

    if-ne v3, v5, :cond_7

    move v4, v5

    :cond_7
    invoke-virtual {v1, v4}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 170
    iget-object v1, p0, Lcom/mediatek/engineermode/audio/AudioDebugSession;->mCbAecRec:Landroid/widget/CheckBox;

    invoke-virtual {v1, p0}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 171
    return-void
.end method
