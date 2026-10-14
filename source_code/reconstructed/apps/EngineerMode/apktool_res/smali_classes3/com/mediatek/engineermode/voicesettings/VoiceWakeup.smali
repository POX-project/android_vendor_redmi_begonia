.class public Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;
.super Landroid/app/Activity;
.source "VoiceWakeup.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "VoiceWakeup"


# instance fields
.field private final mCheckedListener:Landroid/widget/RadioGroup$OnCheckedChangeListener;

.field private mRgSwtich:Landroid/widget/RadioGroup;

.field private mSwitchEnable:I

.field private mSwitchInfo:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 52
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 54
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;->mRgSwtich:Landroid/widget/RadioGroup;

    .line 60
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;->mSwitchInfo:I

    .line 61
    iput v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;->mSwitchEnable:I

    .line 63
    new-instance v0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup$1;-><init>(Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;->mCheckedListener:Landroid/widget/RadioGroup$OnCheckedChangeListener;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;

    .line 52
    iget-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;->mRgSwtich:Landroid/widget/RadioGroup;

    return-object v0
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 85
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 86
    const v0, 0x7f0800f7

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;->setContentView(I)V

    .line 88
    invoke-virtual {p0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    sget-object v1, Lcom/mediatek/provider/MtkSettingsExt$System;->VOICE_WAKEUP_MODE:Ljava/lang/String;

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Landroid/provider/Settings$System;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;->mSwitchInfo:I

    .line 91
    const v0, 0x7f0607e6

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;->mRgSwtich:Landroid/widget/RadioGroup;

    .line 92
    iget-object v1, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;->mCheckedListener:Landroid/widget/RadioGroup$OnCheckedChangeListener;

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->setOnCheckedChangeListener(Landroid/widget/RadioGroup$OnCheckedChangeListener;)V

    .line 94
    iget v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;->mSwitchInfo:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    .line 96
    iget-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;->mRgSwtich:Landroid/widget/RadioGroup;

    const v1, 0x7f0607e4

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    goto :goto_0

    .line 97
    :cond_0
    const/4 v1, 0x2

    if-ne v0, v1, :cond_1

    .line 99
    iget-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;->mRgSwtich:Landroid/widget/RadioGroup;

    const v1, 0x7f0607e5

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    .line 101
    :cond_1
    :goto_0
    return-void
.end method

.method protected onResume()V
    .locals 3

    .line 104
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 105
    invoke-virtual {p0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    sget-object v1, Lcom/mediatek/provider/MtkSettingsExt$System;->VOICE_WAKEUP_COMMAND_STATUS:Ljava/lang/String;

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Landroid/provider/Settings$System;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;->mSwitchEnable:I

    .line 108
    if-nez v0, :cond_1

    .line 110
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;->mRgSwtich:Landroid/widget/RadioGroup;

    invoke-virtual {v1}, Landroid/widget/RadioGroup;->getChildCount()I

    move-result v1

    if-ge v0, v1, :cond_0

    .line 111
    iget-object v1, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;->mRgSwtich:Landroid/widget/RadioGroup;

    invoke-virtual {v1, v0}, Landroid/widget/RadioGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Landroid/view/View;->setEnabled(Z)V

    .line 110
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .end local v0    # "i":I
    :cond_0
    goto :goto_2

    .line 114
    :cond_1
    const-string v0, "VoiceWakeup"

    const-string v1, "Disable switch info"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 115
    const/4 v0, 0x0

    .restart local v0    # "i":I
    :goto_1
    iget-object v1, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;->mRgSwtich:Landroid/widget/RadioGroup;

    invoke-virtual {v1}, Landroid/widget/RadioGroup;->getChildCount()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 116
    iget-object v1, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;->mRgSwtich:Landroid/widget/RadioGroup;

    invoke-virtual {v1, v0}, Landroid/widget/RadioGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1, v2}, Landroid/view/View;->setEnabled(Z)V

    .line 115
    add-int/lit8 v0, v0, 0x1

    goto :goto_1

    .line 119
    .end local v0    # "i":I
    :cond_2
    :goto_2
    return-void
.end method
