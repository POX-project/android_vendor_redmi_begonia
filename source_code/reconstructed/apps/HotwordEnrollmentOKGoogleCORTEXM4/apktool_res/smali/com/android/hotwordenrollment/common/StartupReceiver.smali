.class public Lcom/android/hotwordenrollment/common/StartupReceiver;
.super Landroid/content/BroadcastReceiver;
.source "StartupReceiver.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 32
    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method

.method static synthetic access$000(Landroid/content/Context;)V
    .locals 0

    .line 32
    invoke-static {p0}, Lcom/android/hotwordenrollment/common/StartupReceiver;->updateSoundModel(Landroid/content/Context;)V

    return-void
.end method

.method private static updateSoundModel(Landroid/content/Context;)V
    .locals 14

    .line 56
    new-instance v0, Lcom/android/hotwordenrollment/common/EnrollmentUtil;

    invoke-direct {v0, p0}, Lcom/android/hotwordenrollment/common/EnrollmentUtil;-><init>(Landroid/content/Context;)V

    const-string v1, "enrollment_prefs"

    const/4 v2, 0x0

    .line 57
    invoke-virtual {p0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    const-string v1, "key_enrolled_version"

    .line 61
    invoke-interface {p0, v1, v2}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v2

    .line 62
    invoke-virtual {v0}, Lcom/android/hotwordenrollment/common/EnrollmentUtil;->getCurrentVersion()I

    move-result v3

    const-string v4, "KeyphraseSoundModel id "

    const-string v5, "EnrollmentStartupRcv"

    if-ne v2, v3, :cond_0

    .line 63
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/android/hotwordenrollment/common/EnrollmentUtil;->getKeyphraseId()I

    move-result v0

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " is fresh at version "

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v5, p0}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 67
    :cond_0
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/android/hotwordenrollment/common/EnrollmentUtil;->getKeyphraseId()I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "is out of date: current="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", new="

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 69
    invoke-virtual {v0}, Lcom/android/hotwordenrollment/common/EnrollmentUtil;->getCurrentVersion()I

    move-result v2

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 67
    invoke-static {v5, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v2, 0x1

    .line 74
    invoke-virtual {v0}, Lcom/android/hotwordenrollment/common/EnrollmentUtil;->getSupportedLocales()Ljava/util/Set;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :cond_1
    :goto_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_4

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 75
    invoke-virtual {v0, v4}, Lcom/android/hotwordenrollment/common/EnrollmentUtil;->getSoundModel(Ljava/lang/String;)Landroid/hardware/soundtrigger/SoundTrigger$KeyphraseSoundModel;

    move-result-object v6

    if-eqz v6, :cond_1

    .line 76
    invoke-virtual {v6}, Landroid/hardware/soundtrigger/SoundTrigger$KeyphraseSoundModel;->getKeyphrases()[Landroid/hardware/soundtrigger/SoundTrigger$Keyphrase;

    move-result-object v7

    if-eqz v7, :cond_1

    .line 77
    invoke-virtual {v6}, Landroid/hardware/soundtrigger/SoundTrigger$KeyphraseSoundModel;->getKeyphrases()[Landroid/hardware/soundtrigger/SoundTrigger$Keyphrase;

    move-result-object v7

    array-length v7, v7

    if-nez v7, :cond_2

    goto :goto_0

    .line 82
    :cond_2
    invoke-virtual {v0, v4}, Lcom/android/hotwordenrollment/common/EnrollmentUtil;->readHotwordResource(Ljava/lang/String;)[B

    move-result-object v11

    .line 83
    new-instance v4, Landroid/hardware/soundtrigger/SoundTrigger$KeyphraseSoundModel;

    .line 84
    invoke-virtual {v6}, Landroid/hardware/soundtrigger/SoundTrigger$KeyphraseSoundModel;->getUuid()Ljava/util/UUID;

    move-result-object v9

    invoke-virtual {v0}, Lcom/android/hotwordenrollment/common/EnrollmentUtil;->getVendorUUID()Ljava/util/UUID;

    move-result-object v10

    invoke-virtual {v6}, Landroid/hardware/soundtrigger/SoundTrigger$KeyphraseSoundModel;->getKeyphrases()[Landroid/hardware/soundtrigger/SoundTrigger$Keyphrase;

    move-result-object v12

    .line 85
    invoke-virtual {v0}, Lcom/android/hotwordenrollment/common/EnrollmentUtil;->getCurrentVersion()I

    move-result v13

    move-object v8, v4

    invoke-direct/range {v8 .. v13}, Landroid/hardware/soundtrigger/SoundTrigger$KeyphraseSoundModel;-><init>(Ljava/util/UUID;Ljava/util/UUID;[B[Landroid/hardware/soundtrigger/SoundTrigger$Keyphrase;I)V

    .line 86
    invoke-virtual {v0, v4}, Lcom/android/hotwordenrollment/common/EnrollmentUtil;->addOrUpdateSoundModel(Landroid/hardware/soundtrigger/SoundTrigger$KeyphraseSoundModel;)Z

    move-result v4

    if-nez v4, :cond_3

    .line 88
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "Failed to update out-of-date KeyphraseSoundModel id "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 89
    invoke-virtual {v0}, Lcom/android/hotwordenrollment/common/EnrollmentUtil;->getKeyphraseId()I

    move-result v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    .line 88
    invoke-static {v5, v6}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_3
    and-int/2addr v2, v4

    goto :goto_0

    :cond_4
    if-eqz v2, :cond_5

    .line 96
    invoke-interface {p0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-virtual {v0}, Lcom/android/hotwordenrollment/common/EnrollmentUtil;->getCurrentVersion()I

    move-result v0

    invoke-interface {p0, v1, v0}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p0}, Landroid/content/SharedPreferences$Editor;->commit()Z

    :cond_5
    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 2

    .line 39
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    const-string v1, "android.intent.action.BOOT_COMPLETED"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 40
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p2

    const-string v0, "android.intent.action.MY_PACKAGE_REPLACED"

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-nez p2, :cond_0

    return-void

    .line 45
    :cond_0
    invoke-virtual {p0}, Landroid/content/BroadcastReceiver;->goAsync()Landroid/content/BroadcastReceiver$PendingResult;

    move-result-object p2

    .line 46
    new-instance v0, Lcom/android/hotwordenrollment/common/StartupReceiver$1;

    invoke-direct {v0, p0, p1, p2}, Lcom/android/hotwordenrollment/common/StartupReceiver$1;-><init>(Lcom/android/hotwordenrollment/common/StartupReceiver;Landroid/content/Context;Landroid/content/BroadcastReceiver$PendingResult;)V

    .line 52
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    return-void
.end method
