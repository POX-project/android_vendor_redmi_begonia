.class public Lcom/mediatek/engineermode/audio/Audio;
.super Landroid/app/Activity;
.source "Audio.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;
    }
.end annotation


# static fields
.field private static final AUDIO_LOGGER_NAME:Ljava/lang/String; = "Audio Logger"

.field private static final AUDIO_TURNING_VER:Ljava/lang/String; = "ro.vendor.mtk_audio_tuning_tool_ver"

.field private static final AUDIO_TURNING_VER_V1:Ljava/lang/String; = "V1"

.field private static final AUDIO_TURNING_VER_V2_1:Ljava/lang/String; = "V2.1"

.field private static final AUDIO_TURNING_VER_V2_2:Ljava/lang/String; = "V2.2"

.field public static final AUDIO_VERSION_1:Ljava/lang/String; = "GET_AUDIO_VOLUME_VERSION=1"

.field public static final AUDIO_VERSION_COMMAND:Ljava/lang/String; = "GET_AUDIO_VOLUME_VERSION"

.field public static final CURRENT_MODE:Ljava/lang/String; = "CurrentMode"

.field private static final DEBUG_INFO_NAME:Ljava/lang/String; = "Debug Info"

.field private static final DEBUG_SESSION_NAME:Ljava/lang/String; = "Debug Session"

.field public static final ENHANCE_MODE:Ljava/lang/String; = "is_enhance"

.field private static final HEADSET_LOUDSPEAKER_MODE_NAME:Ljava/lang/String; = "Headset_LoudSpeaker Mode"

.field private static final HEADSET_MODE_NAME:Ljava/lang/String; = "Headset Mode"

.field private static final LOUDSPEAKER_MODE_NAME:Ljava/lang/String; = "LoudSpeaker Mode"

.field private static final NORMAL_MODE_NAME:Ljava/lang/String; = "Normal Mode"

.field private static final SPEECH_ENHANCE_NAME:Ljava/lang/String; = "Speech Enhancement"

.field private static final SPEECH_LOGGER_NAME:Ljava/lang/String; = "Speech Logger"

.field public static final TAG:Ljava/lang/String; = "Audio"

.field private static final VOLUME_NAME:Ljava/lang/String; = "Volume"

.field private static sAudioTuningVer:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;


# instance fields
.field private mAudioListView:Landroid/widget/ListView;

.field private mIsVolumeEnhancementMode:Z

.field private mListData:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 110
    sget-object v0, Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;->UNKNOWN:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    sput-object v0, Lcom/mediatek/engineermode/audio/Audio;->sAudioTuningVer:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 61
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 95
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/audio/Audio;->mIsVolumeEnhancementMode:Z

    return-void
.end method

.method static getAudioTuningVer()Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;
    .locals 2

    .line 230
    sget-object v0, Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;->UNKNOWN:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    sget-object v1, Lcom/mediatek/engineermode/audio/Audio;->sAudioTuningVer:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    if-ne v0, v1, :cond_0

    .line 231
    invoke-static {}, Lcom/mediatek/engineermode/audio/Audio;->initAudioTunVer()V

    .line 233
    :cond_0
    sget-object v0, Lcom/mediatek/engineermode/audio/Audio;->sAudioTuningVer:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    return-object v0
.end method

.method private static initAudioTunVer()V
    .locals 4

    .line 123
    const-string v0, "ro.vendor.mtk_audio_tuning_tool_ver"

    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 125
    .local v0, "value":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "initAudioTurnVer:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "Audio"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 126
    sget-object v1, Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;->VER_1:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    sput-object v1, Lcom/mediatek/engineermode/audio/Audio;->sAudioTuningVer:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    .line 128
    if-eqz v0, :cond_2

    .line 129
    const-string v1, "V2.1"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 130
    sget-object v1, Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;->VER_2_1:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    sput-object v1, Lcom/mediatek/engineermode/audio/Audio;->sAudioTuningVer:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    .line 133
    :cond_0
    const-string v1, "V2.2"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 134
    sget-object v1, Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;->VER_2_2:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    sput-object v1, Lcom/mediatek/engineermode/audio/Audio;->sAudioTuningVer:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    .line 135
    invoke-static {}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->registerXmlChangedCallback()Z

    move-result v1

    .line 136
    .local v1, "result":Z
    const/4 v3, 0x1

    if-ne v1, v3, :cond_1

    .line 137
    const-string v3, "registerXmlChangedCallback OK!"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 139
    :cond_1
    const-string v3, "registerXmlChangedCallback failed!"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 142
    .end local v1    # "result":Z
    :cond_2
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "sAudioTuningVer:"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/mediatek/engineermode/audio/Audio;->sAudioTuningVer:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 143
    return-void
.end method

.method private initListItem()V
    .locals 3

    .line 153
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/Audio;->mListData:Ljava/util/ArrayList;

    .line 154
    sget-object v0, Lcom/mediatek/engineermode/audio/Audio;->sAudioTuningVer:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    sget-object v1, Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;->VER_2_2:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    if-eq v0, v1, :cond_0

    .line 155
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/Audio;->mListData:Ljava/util/ArrayList;

    const-string v1, "Normal Mode"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 156
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/Audio;->mListData:Ljava/util/ArrayList;

    const-string v1, "Headset Mode"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 157
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/Audio;->mListData:Ljava/util/ArrayList;

    const-string v1, "LoudSpeaker Mode"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 158
    iget-boolean v0, p0, Lcom/mediatek/engineermode/audio/Audio;->mIsVolumeEnhancementMode:Z

    if-eqz v0, :cond_1

    .line 159
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/Audio;->mListData:Ljava/util/ArrayList;

    const-string v1, "Headset_LoudSpeaker Mode"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 162
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/Audio;->mListData:Ljava/util/ArrayList;

    const-string v1, "Volume"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 164
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/Audio;->mListData:Ljava/util/ArrayList;

    const-string v1, "Speech Enhancement"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 165
    sget-object v0, Lcom/mediatek/engineermode/audio/Audio;->sAudioTuningVer:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    sget-object v1, Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;->VER_1:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    if-ne v0, v1, :cond_2

    .line 166
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/Audio;->mListData:Ljava/util/ArrayList;

    const-string v1, "Debug Info"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 168
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/Audio;->mListData:Ljava/util/ArrayList;

    const-string v1, "Debug Session"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 169
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/Audio;->mListData:Ljava/util/ArrayList;

    const-string v1, "Speech Logger"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 170
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/Audio;->mListData:Ljava/util/ArrayList;

    const-string v1, "Audio Logger"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 172
    const v0, 0x7f060070

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/Audio;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ListView;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/Audio;->mAudioListView:Landroid/widget/ListView;

    .line 173
    new-instance v0, Landroid/widget/ArrayAdapter;

    const v1, 0x1090003

    iget-object v2, p0, Lcom/mediatek/engineermode/audio/Audio;->mListData:Ljava/util/ArrayList;

    invoke-direct {v0, p0, v1, v2}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;ILjava/util/List;)V

    .line 175
    .local v0, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    iget-object v1, p0, Lcom/mediatek/engineermode/audio/Audio;->mAudioListView:Landroid/widget/ListView;

    invoke-virtual {v1, v0}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 176
    iget-object v1, p0, Lcom/mediatek/engineermode/audio/Audio;->mAudioListView:Landroid/widget/ListView;

    invoke-virtual {v1, p0}, Landroid/widget/ListView;->setOnItemClickListener(Landroid/widget/AdapterView$OnItemClickListener;)V

    .line 178
    return-void
.end method

.method private initVolumeModeVer()V
    .locals 3

    .line 145
    const-string v0, "GET_AUDIO_VOLUME_VERSION"

    invoke-static {v0}, Landroid/media/AudioSystem;->getParameters(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 146
    .local v0, "version":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "initVolumeModeVer:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "Audio"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 147
    const-string v1, "GET_AUDIO_VOLUME_VERSION=1"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 148
    const/4 v1, 0x0

    iput-boolean v1, p0, Lcom/mediatek/engineermode/audio/Audio;->mIsVolumeEnhancementMode:Z

    .line 150
    :cond_0
    return-void
.end method


# virtual methods
.method public onCreate(Landroid/os/Bundle;)V
    .locals 1
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 114
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 115
    const v0, 0x7f08000e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/Audio;->setContentView(I)V

    .line 116
    invoke-static {}, Lcom/mediatek/engineermode/audio/Audio;->initAudioTunVer()V

    .line 117
    invoke-direct {p0}, Lcom/mediatek/engineermode/audio/Audio;->initVolumeModeVer()V

    .line 119
    invoke-direct {p0}, Lcom/mediatek/engineermode/audio/Audio;->initListItem()V

    .line 120
    return-void
.end method

.method public onItemClick(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 4
    .param p2, "arg1"    # Landroid/view/View;
    .param p3, "arg2"    # I
    .param p4, "arg3"    # J
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;",
            "Landroid/view/View;",
            "IJ)V"
        }
    .end annotation

    .line 193
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/Audio;->mListData:Ljava/util/ArrayList;

    invoke-virtual {v0, p3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 194
    .local v0, "itemName":Ljava/lang/String;
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    .line 195
    .local v1, "intent":Landroid/content/Intent;
    const-string v2, "Normal Mode"

    invoke-virtual {v2, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_9

    .line 196
    const-string v2, "Headset Mode"

    invoke-virtual {v2, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_9

    .line 197
    const-string v2, "LoudSpeaker Mode"

    invoke-virtual {v2, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_9

    .line 198
    const-string v2, "Headset_LoudSpeaker Mode"

    invoke-virtual {v2, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    goto/16 :goto_0

    .line 202
    :cond_0
    const-string v2, "Volume"

    invoke-virtual {v2, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 203
    const-class v2, Lcom/mediatek/engineermode/audio/AudioVolume;

    invoke-virtual {v1, p0, v2}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    goto/16 :goto_1

    .line 204
    :cond_1
    const-string v2, "Speech Enhancement"

    invoke-virtual {v2, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 205
    sget-object v2, Lcom/mediatek/engineermode/audio/Audio;->sAudioTuningVer:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    sget-object v3, Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;->VER_1:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    if-ne v2, v3, :cond_2

    .line 206
    const-class v2, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV1;

    invoke-virtual {v1, p0, v2}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    goto :goto_1

    .line 209
    :cond_2
    const-class v2, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    invoke-virtual {v1, p0, v2}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    goto :goto_1

    .line 211
    :cond_3
    const-string v2, "Debug Info"

    invoke-virtual {v2, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_4

    .line 212
    const-class v2, Lcom/mediatek/engineermode/audio/AudioDebugInfo;

    invoke-virtual {v1, p0, v2}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    goto :goto_1

    .line 213
    :cond_4
    const-string v2, "Debug Session"

    invoke-virtual {v2, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_5

    .line 214
    const-class v2, Lcom/mediatek/engineermode/audio/AudioDebugSession;

    invoke-virtual {v1, p0, v2}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    goto :goto_1

    .line 215
    :cond_5
    const-string v2, "Speech Logger"

    invoke-virtual {v2, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_7

    .line 216
    sget-object v2, Lcom/mediatek/engineermode/audio/Audio;->sAudioTuningVer:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    sget-object v3, Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;->VER_1:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    if-ne v2, v3, :cond_6

    .line 217
    const-class v2, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-virtual {v1, p0, v2}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    goto :goto_1

    .line 219
    :cond_6
    const-class v2, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-virtual {v1, p0, v2}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    goto :goto_1

    .line 221
    :cond_7
    const-string v2, "Audio Logger"

    invoke-virtual {v2, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_8

    .line 222
    const-class v2, Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-virtual {v1, p0, v2}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    goto :goto_1

    .line 224
    :cond_8
    return-void

    .line 199
    :cond_9
    :goto_0
    const-class v2, Lcom/mediatek/engineermode/audio/AudioModeSetting;

    invoke-virtual {v1, p0, v2}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    .line 200
    const-string v2, "CurrentMode"

    invoke-virtual {v1, v2, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 201
    iget-boolean v2, p0, Lcom/mediatek/engineermode/audio/Audio;->mIsVolumeEnhancementMode:Z

    const-string v3, "is_enhance"

    invoke-virtual {v1, v3, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 226
    :goto_1
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/audio/Audio;->startActivity(Landroid/content/Intent;)V

    .line 227
    return-void
.end method
