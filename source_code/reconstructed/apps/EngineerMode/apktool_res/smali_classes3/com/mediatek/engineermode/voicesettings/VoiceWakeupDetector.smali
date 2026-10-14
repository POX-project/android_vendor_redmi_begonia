.class public Lcom/mediatek/engineermode/voicesettings/VoiceWakeupDetector;
.super Landroid/app/Activity;
.source "VoiceWakeupDetector.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# static fields
.field private static final CATEGORY:Ljava/lang/String; = "VoWHwVad"

.field private static final DETECTOR_PAR_COUNT:I = 0xa

.field private static final KEY_PRE:Ljava/lang/String; = "Par_"

.field private static final TAG:Ljava/lang/String; = "VoiceWakeupDetector"

.field private static final TYPE:Ljava/lang/String; = "VAD,common"


# instance fields
.field private mBtnSet:Landroid/widget/Button;

.field private mSpnParArr:[Landroid/widget/Spinner;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 58
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 62
    const/16 v0, 0xa

    new-array v0, v0, [Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupDetector;->mSpnParArr:[Landroid/widget/Spinner;

    return-void
.end method

.method private checkSetResult()Z
    .locals 4

    .line 138
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupDetector;->mSpnParArr:[Landroid/widget/Spinner;

    array-length v2, v1

    if-ge v0, v2, :cond_1

    .line 139
    aget-object v1, v1, v0

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    .line 140
    .local v1, "selection":I
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupDetector;->getValue(I)I

    move-result v2

    .line 141
    .local v2, "value":I
    if-eq v1, v2, :cond_0

    .line 142
    const/4 v3, 0x0

    return v3

    .line 138
    .end local v1    # "selection":I
    .end local v2    # "value":I
    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 145
    .end local v0    # "i":I
    :cond_1
    const/4 v0, 0x1

    return v0
.end method

.method private getValue(I)I
    .locals 5
    .param p1, "index"    # I

    .line 130
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Par_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    add-int/lit8 v2, p1, 0x1

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    const-string v2, "%02d"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 131
    .local v0, "strKey":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "strKey:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "VoiceWakeupDetector"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 132
    const-string v1, "VoWHwVad"

    const-string v3, "VAD,common"

    invoke-static {v1, v3, v0}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->getParams(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 133
    .local v1, "result":Ljava/lang/String;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "result:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 134
    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    return v2
.end method

.method private initUiByData()V
    .locals 4

    .line 111
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupDetector;->mSpnParArr:[Landroid/widget/Spinner;

    array-length v1, v1

    if-ge v0, v1, :cond_0

    .line 112
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupDetector;->getValue(I)I

    move-result v1

    .line 113
    .local v1, "val":I
    iget-object v2, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupDetector;->mSpnParArr:[Landroid/widget/Spinner;

    aget-object v2, v2, v0

    invoke-virtual {v2, v1}, Landroid/widget/Spinner;->setSelection(I)V

    .line 114
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "val:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "VoiceWakeupDetector"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 111
    .end local v1    # "val":I
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 116
    .end local v0    # "i":I
    :cond_0
    return-void
.end method

.method private initUiComponent()V
    .locals 8

    .line 75
    const/16 v0, 0xa

    new-array v1, v0, [I

    fill-array-data v1, :array_0

    .line 87
    .local v1, "spnIds":[I
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    if-ge v2, v0, :cond_2

    .line 88
    aget v3, v1, v2

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupDetector;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/Spinner;

    .line 89
    .local v3, "spn":Landroid/widget/Spinner;
    iget-object v4, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupDetector;->mSpnParArr:[Landroid/widget/Spinner;

    aput-object v3, v4, v2

    .line 90
    new-instance v4, Landroid/widget/ArrayAdapter;

    const v5, 0x1090008

    invoke-direct {v4, p0, v5}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    .line 92
    .local v4, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    const v5, 0x1090009

    invoke-virtual {v4, v5}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 93
    const/4 v5, 0x0

    .line 94
    .local v5, "maxIdx":I
    const/4 v6, 0x4

    if-gt v2, v6, :cond_0

    .line 95
    const/16 v5, 0xf

    goto :goto_1

    .line 97
    :cond_0
    const/4 v5, 0x7

    .line 99
    :goto_1
    const/4 v6, 0x0

    .local v6, "j":I
    :goto_2
    if-gt v6, v5, :cond_1

    .line 100
    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v4, v7}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 99
    add-int/lit8 v6, v6, 0x1

    goto :goto_2

    .line 102
    .end local v6    # "j":I
    :cond_1
    invoke-virtual {v3, v4}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 87
    .end local v3    # "spn":Landroid/widget/Spinner;
    .end local v4    # "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    .end local v5    # "maxIdx":I
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 104
    .end local v2    # "i":I
    :cond_2
    const v0, 0x7f0607de

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupDetector;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupDetector;->mBtnSet:Landroid/widget/Button;

    .line 105
    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 107
    invoke-direct {p0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupDetector;->initUiByData()V

    .line 108
    return-void

    nop

    :array_0
    .array-data 4
        0x7f0607d4
        0x7f0607d5
        0x7f0607d6
        0x7f0607d7
        0x7f0607d8
        0x7f0607d9
        0x7f0607da
        0x7f0607db
        0x7f0607dc
        0x7f0607dd
    .end array-data
.end method

.method private setDetectorSetting()V
    .locals 7

    .line 119
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupDetector;->mSpnParArr:[Landroid/widget/Spinner;

    array-length v2, v1

    const-string v3, "VoWHwVad"

    if-ge v0, v2, :cond_0

    .line 120
    aget-object v1, v1, v0

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    .line 121
    .local v1, "selection":I
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Par_"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v4, 0x1

    new-array v4, v4, [Ljava/lang/Object;

    const/4 v5, 0x0

    add-int/lit8 v6, v0, 0x1

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v4, v5

    const-string v5, "%02d"

    invoke-static {v5, v4}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 122
    .local v2, "strKey":Ljava/lang/String;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "strKey:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, "VoiceWakeupDetector"

    invoke-static {v5, v4}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 123
    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    const-string v5, "VAD,common"

    invoke-static {v3, v5, v2, v4}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->setParams(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    .line 119
    .end local v1    # "selection":I
    .end local v2    # "strKey":Ljava/lang/String;
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 126
    .end local v0    # "i":I
    :cond_0
    invoke-static {v3}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->saveToWork(Ljava/lang/String;)Z

    .line 127
    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2
    .param p1, "view"    # Landroid/view/View;

    .line 150
    iget-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupDetector;->mBtnSet:Landroid/widget/Button;

    if-ne p1, v0, :cond_1

    .line 151
    invoke-direct {p0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupDetector;->setDetectorSetting()V

    .line 152
    const/4 v0, -0x1

    .line 153
    .local v0, "msgid":I
    invoke-direct {p0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupDetector;->checkSetResult()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 154
    const v0, 0x7f0a06a7

    goto :goto_0

    .line 156
    :cond_0
    const v0, 0x7f0a06a6

    .line 158
    :goto_0
    const/4 v1, 0x0

    invoke-static {p0, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 161
    .end local v0    # "msgid":I
    :cond_1
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 1
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 69
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 70
    const v0, 0x7f0800f8

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupDetector;->setContentView(I)V

    .line 71
    invoke-direct {p0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeupDetector;->initUiComponent()V

    .line 72
    return-void
.end method
