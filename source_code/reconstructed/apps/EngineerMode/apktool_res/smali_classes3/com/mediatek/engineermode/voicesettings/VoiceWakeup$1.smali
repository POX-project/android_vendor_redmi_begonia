.class Lcom/mediatek/engineermode/voicesettings/VoiceWakeup$1;
.super Ljava/lang/Object;
.source "VoiceWakeup.java"

# interfaces
.implements Landroid/widget/RadioGroup$OnCheckedChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;

    .line 64
    iput-object p1, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup$1;->this$0:Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/RadioGroup;I)V
    .locals 3
    .param p1, "group"    # Landroid/widget/RadioGroup;
    .param p2, "checkedId"    # I

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup$1;->this$0:Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;

    invoke-static {v0}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;->access$000(Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;)Landroid/widget/RadioGroup;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 67
    const/4 v0, 0x0

    .line 68
    .local v0, "state":I
    const v1, 0x7f0607e4

    const-string v2, "VoiceWakeup"

    if-ne p2, v1, :cond_0

    .line 69
    const-string v1, "check voice_switch_1"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 70
    const/4 v0, 0x1

    goto :goto_0

    .line 71
    :cond_0
    const v1, 0x7f0607e5

    if-ne p2, v1, :cond_1

    .line 72
    const-string v1, "check voice_switch_2"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 73
    const/4 v0, 0x2

    .line 75
    :cond_1
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup$1;->this$0:Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/voicesettings/VoiceWakeup;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v1

    sget-object v2, Lcom/mediatek/provider/MtkSettingsExt$System;->VOICE_WAKEUP_MODE:Ljava/lang/String;

    invoke-static {v1, v2, v0}, Landroid/provider/Settings$System;->putInt(Landroid/content/ContentResolver;Ljava/lang/String;I)Z

    .line 79
    .end local v0    # "state":I
    :cond_2
    return-void
.end method
