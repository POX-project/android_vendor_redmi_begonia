.class public Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;
.super Landroid/app/Activity;
.source "VoiceWakeupRecognition.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# static fields
.field private static final CATEGORY:Ljava/lang/String; = "VoWHwVad"

.field private static final KEY_PRE_KR:Ljava/lang/String; = "vow_KR"

.field private static final KEY_PRE_KRSR:Ljava/lang/String; = "vow_KRSR"

.field private static final RECOGNITION_CLEAN:I = 0x1

.field private static final RECOGNITION_NOISY:I = 0x2

.field private static final RECOGNITION_TESTING:I = 0x4

.field private static final RECOGNITION_TRAINING:I = 0x3

.field private static final TAG:Ljava/lang/String; = "VoiceWakeupRecognition"

.field private static final TYPE:Ljava/lang/String; = "VAD,common"

.field private static final WAKEUP_MODE_KEYWORD:I = 0x1

.field private static final WAKEUP_MODE_KEYWORD_SPEAKER:I = 0x2

.field private static final WAKEUP_MODE_TRIGGER_KEYWORD:I = 0x3


# instance fields
.field private mBtnSet:Landroid/widget/Button;

.field private mSpnClean:Landroid/widget/Spinner;

.field private mSpnNoisy:Landroid/widget/Spinner;

.field private mSpnTesting:Landroid/widget/Spinner;

.field private mSpnTraining:Landroid/widget/Spinner;

.field private mWakeupMode:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 22
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 39
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mWakeupMode:I

    return-void
.end method

.method private checkSetResult()Z
    .locals 9

    .line 142
    iget-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mSpnClean:Landroid/widget/Spinner;

    invoke-virtual {v0}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v0

    .line 143
    .local v0, "clean":I
    iget-object v1, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mSpnNoisy:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    .line 144
    .local v1, "noisy":I
    iget-object v2, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mSpnTraining:Landroid/widget/Spinner;

    invoke-virtual {v2}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v2

    .line 145
    .local v2, "training":I
    iget-object v3, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mSpnTesting:Landroid/widget/Spinner;

    invoke-virtual {v3}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v3

    .line 146
    .local v3, "testing":I
    const/4 v4, 0x1

    invoke-direct {p0, v4}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->getValue(I)I

    move-result v5

    .line 147
    .local v5, "clean2":I
    const/4 v6, 0x2

    invoke-direct {p0, v6}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->getValue(I)I

    move-result v6

    .line 148
    .local v6, "noisy2":I
    const/4 v7, 0x3

    invoke-direct {p0, v7}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->getValue(I)I

    move-result v7

    .line 149
    .local v7, "training2":I
    const/4 v8, 0x4

    invoke-direct {p0, v8}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->getValue(I)I

    move-result v8

    .line 150
    .local v8, "testing2":I
    if-ne v0, v5, :cond_1

    if-ne v1, v6, :cond_1

    if-ne v2, v7, :cond_1

    if-eq v3, v8, :cond_0

    goto :goto_0

    .line 154
    :cond_0
    return v4

    .line 152
    :cond_1
    :goto_0
    const/4 v4, 0x0

    return v4
.end method

.method private createEmptySpinnerAdapter()Landroid/widget/ArrayAdapter;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 120
    new-instance v0, Landroid/widget/ArrayAdapter;

    const v1, 0x1090008

    invoke-direct {v0, p0, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    .line 122
    .local v0, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    const v1, 0x1090009

    invoke-virtual {v0, v1}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 123
    return-object v0
.end method

.method private getValue(I)I
    .locals 5
    .param p1, "index"    # I

    .line 110
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "index:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "VoiceWakeupRecognition"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 111
    iget v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mWakeupMode:I

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "vow_KR"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 112
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "vow_KRSR"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    :goto_0
    nop

    .line 113
    .local v0, "key":Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "key:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 114
    const-string v2, "VoWHwVad"

    const-string v3, "VAD,common"

    invoke-static {v2, v3, v0}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->getParams(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 115
    .local v2, "result":Ljava/lang/String;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "result"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 116
    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    return v1
.end method

.method private initUiByData()V
    .locals 2

    .line 103
    iget-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mSpnClean:Landroid/widget/Spinner;

    const/4 v1, 0x1

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->getValue(I)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setSelection(I)V

    .line 104
    iget-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mSpnNoisy:Landroid/widget/Spinner;

    const/4 v1, 0x2

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->getValue(I)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setSelection(I)V

    .line 105
    iget-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mSpnTraining:Landroid/widget/Spinner;

    const/4 v1, 0x3

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->getValue(I)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setSelection(I)V

    .line 106
    iget-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mSpnTesting:Landroid/widget/Spinner;

    const/4 v1, 0x4

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->getValue(I)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setSelection(I)V

    .line 107
    return-void
.end method

.method private initUiComponent()V
    .locals 4

    .line 62
    iget v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mWakeupMode:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    .line 63
    const v0, 0x7f0a06c0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->setTitle(I)V

    goto :goto_0

    .line 64
    :cond_0
    const/4 v1, 0x2

    if-ne v0, v1, :cond_1

    .line 65
    const v0, 0x7f0a06c1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->setTitle(I)V

    .line 67
    :cond_1
    :goto_0
    const v0, 0x7f0607df

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mSpnClean:Landroid/widget/Spinner;

    .line 68
    const v0, 0x7f0607e0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mSpnNoisy:Landroid/widget/Spinner;

    .line 69
    const v0, 0x7f0607e3

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mSpnTraining:Landroid/widget/Spinner;

    .line 70
    const v0, 0x7f0607e2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mSpnTesting:Landroid/widget/Spinner;

    .line 72
    invoke-direct {p0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->createEmptySpinnerAdapter()Landroid/widget/ArrayAdapter;

    move-result-object v0

    .line 73
    .local v0, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_1
    const/16 v2, 0xf

    if-gt v1, v2, :cond_2

    .line 74
    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 73
    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    .line 76
    .end local v1    # "i":I
    :cond_2
    iget-object v1, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mSpnClean:Landroid/widget/Spinner;

    invoke-virtual {v1, v0}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 78
    invoke-direct {p0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->createEmptySpinnerAdapter()Landroid/widget/ArrayAdapter;

    move-result-object v0

    .line 79
    const/4 v1, 0x0

    .restart local v1    # "i":I
    :goto_2
    if-gt v1, v2, :cond_3

    .line 80
    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 79
    add-int/lit8 v1, v1, 0x1

    goto :goto_2

    .line 82
    .end local v1    # "i":I
    :cond_3
    iget-object v1, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mSpnNoisy:Landroid/widget/Spinner;

    invoke-virtual {v1, v0}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 84
    invoke-direct {p0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->createEmptySpinnerAdapter()Landroid/widget/ArrayAdapter;

    move-result-object v0

    .line 85
    const/4 v1, 0x0

    .restart local v1    # "i":I
    :goto_3
    const/4 v2, 0x7

    if-gt v1, v2, :cond_4

    .line 86
    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 85
    add-int/lit8 v1, v1, 0x1

    goto :goto_3

    .line 88
    .end local v1    # "i":I
    :cond_4
    iget-object v1, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mSpnTraining:Landroid/widget/Spinner;

    invoke-virtual {v1, v0}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 90
    invoke-direct {p0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->createEmptySpinnerAdapter()Landroid/widget/ArrayAdapter;

    move-result-object v0

    .line 91
    const/4 v1, 0x0

    .restart local v1    # "i":I
    :goto_4
    if-gt v1, v2, :cond_5

    .line 92
    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 91
    add-int/lit8 v1, v1, 0x1

    goto :goto_4

    .line 94
    .end local v1    # "i":I
    :cond_5
    iget-object v1, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mSpnTesting:Landroid/widget/Spinner;

    invoke-virtual {v1, v0}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 96
    const v1, 0x7f0607e1

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mBtnSet:Landroid/widget/Button;

    .line 97
    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 99
    invoke-direct {p0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->initUiByData()V

    .line 100
    return-void
.end method

.method private setRecognitionSetting(IIII)V
    .locals 5
    .param p1, "clean"    # I
    .param p2, "noisy"    # I
    .param p3, "training"    # I
    .param p4, "testing"    # I

    .line 127
    iget v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mWakeupMode:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    const-string v0, "vow_KR"

    goto :goto_0

    :cond_0
    const-string v0, "vow_KRSR"

    .line 128
    .local v0, "strPreKey":Ljava/lang/String;
    :goto_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "setRecognitionSetting:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " strPreKey,"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ","

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "VoiceWakeupRecognition"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 130
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 131
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    .line 130
    const-string v3, "VoWHwVad"

    const-string v4, "VAD,common"

    invoke-static {v3, v4, v1, v2}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->setParams(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    .line 132
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v2, 0x2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 133
    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    .line 132
    invoke-static {v3, v4, v1, v2}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->setParams(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    .line 134
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v2, 0x3

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 135
    invoke-static {p3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    .line 134
    invoke-static {v3, v4, v1, v2}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->setParams(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    .line 136
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v2, 0x4

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 137
    invoke-static {p4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    .line 136
    invoke-static {v3, v4, v1, v2}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->setParams(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    .line 138
    invoke-static {v3}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->saveToWork(Ljava/lang/String;)Z

    .line 139
    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 6
    .param p1, "view"    # Landroid/view/View;

    .line 159
    iget-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mBtnSet:Landroid/widget/Button;

    if-ne p1, v0, :cond_1

    .line 160
    iget-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mSpnClean:Landroid/widget/Spinner;

    invoke-virtual {v0}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v0

    .line 161
    .local v0, "clean":I
    iget-object v1, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mSpnNoisy:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    .line 162
    .local v1, "noisy":I
    iget-object v2, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mSpnTraining:Landroid/widget/Spinner;

    invoke-virtual {v2}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v2

    .line 163
    .local v2, "training":I
    iget-object v3, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mSpnTesting:Landroid/widget/Spinner;

    invoke-virtual {v3}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v3

    .line 164
    .local v3, "testing":I
    invoke-direct {p0, v0, v1, v2, v3}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->setRecognitionSetting(IIII)V

    .line 165
    const/4 v4, -0x1

    .line 166
    .local v4, "msgid":I
    invoke-direct {p0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->checkSetResult()Z

    move-result v5

    if-eqz v5, :cond_0

    .line 167
    const v4, 0x7f0a06a7

    goto :goto_0

    .line 169
    :cond_0
    const v4, 0x7f0a06a6

    .line 171
    :goto_0
    const/4 v5, 0x0

    invoke-static {p0, v4, v5}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v5

    invoke-virtual {v5}, Landroid/widget/Toast;->show()V

    .line 173
    .end local v0    # "clean":I
    .end local v1    # "noisy":I
    .end local v2    # "training":I
    .end local v3    # "testing":I
    .end local v4    # "msgid":I
    :cond_1
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 4
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 44
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 45
    const v0, 0x7f0800f5

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->setContentView(I)V

    .line 46
    invoke-virtual {p0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    sget-object v1, Lcom/mediatek/provider/MtkSettingsExt$System;->VOICE_WAKEUP_MODE:Ljava/lang/String;

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Landroid/provider/Settings$System;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;I)I

    move-result v0

    .line 49
    .local v0, "wakeupMode":I
    const/4 v1, 0x1

    const/4 v3, 0x3

    if-ne v0, v3, :cond_0

    .line 50
    move v3, v1

    goto :goto_0

    :cond_0
    move v3, v0

    :goto_0
    iput v3, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mWakeupMode:I

    .line 51
    if-eq v3, v1, :cond_1

    const/4 v1, 0x2

    if-eq v3, v1, :cond_1

    .line 53
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Invalid voice wake-up mode:"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->mWakeupMode:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p0, v1, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    .line 54
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 55
    invoke-virtual {p0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->finish()V

    .line 56
    return-void

    .line 58
    :cond_1
    invoke-direct {p0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupRecognition;->initUiComponent()V

    .line 59
    return-void
.end method
