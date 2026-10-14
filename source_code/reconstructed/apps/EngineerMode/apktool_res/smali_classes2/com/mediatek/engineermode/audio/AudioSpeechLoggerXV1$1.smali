.class Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;
.super Ljava/lang/Object;
.source "AudioSpeechLoggerXV1.java"

# interfaces
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    .line 103
    iput-object p1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 11
    .param p1, "buttonView"    # Landroid/widget/CompoundButton;
    .param p2, "checked"    # Z

    .line 105
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    .line 106
    const-string v1, "engineermode_audiolog_preferences"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 107
    .local v0, "preferences":Landroid/content/SharedPreferences;
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    .line 108
    .local v1, "edit":Landroid/content/SharedPreferences$Editor;
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-static {v3}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->access$000(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)Landroid/widget/CheckBox;

    move-result-object v3

    invoke-virtual {p1, v3}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 109
    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-static {v2, v1, p2}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->access$100(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;Landroid/content/SharedPreferences$Editor;Z)V

    goto/16 :goto_3

    .line 110
    :cond_0
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-static {v3}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->access$200(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)Landroid/widget/CheckBox;

    move-result-object v3

    invoke-virtual {p1, v3}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v3

    const v4, 0x7f0a05b0

    const/16 v5, 0x5a4

    const/4 v6, 0x1

    const-string v7, "Audio/SpeechLogger1"

    if-eqz v3, :cond_3

    .line 111
    const/16 v2, 0x5a0

    if-eqz p2, :cond_1

    .line 112
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-static {v3}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->access$300(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)[B

    move-result-object v3

    aget-byte v8, v3, v2

    const/4 v9, 0x2

    or-int/2addr v8, v9

    int-to-byte v8, v8

    aput-byte v8, v3, v2

    .line 113
    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-static {v2, v9}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->access$476(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;I)I

    .line 114
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "E mVmLogState "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-static {v3}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->access$400(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v7, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 116
    :cond_1
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-static {v3}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->access$300(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)[B

    move-result-object v3

    aget-byte v8, v3, v2

    const/4 v9, -0x3

    and-int/2addr v8, v9

    int-to-byte v8, v8

    aput-byte v8, v3, v2

    .line 117
    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-static {v2, v9}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->access$472(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;I)I

    .line 118
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "D mVmLogState "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-static {v3}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->access$400(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v7, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 120
    :goto_0
    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-static {v2}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->access$300(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)[B

    move-result-object v2

    invoke-static {v2, v5}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->setEmParameter([BI)I

    move-result v2

    .line 121
    .local v2, "index":I
    if-eqz v2, :cond_2

    const/16 v3, -0x26

    if-eq v2, v3, :cond_2

    .line 122
    const-string v3, "set CTM4WAY parameter failed"

    invoke-static {v7, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 123
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-static {v3, v4, v6}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v3

    .line 124
    invoke-virtual {v3}, Landroid/widget/Toast;->show()V

    .line 126
    .end local v2    # "index":I
    :cond_2
    goto/16 :goto_3

    :cond_3
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-static {v3}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->access$500(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)Landroid/widget/CheckBox;

    move-result-object v3

    invoke-virtual {p1, v3}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_5

    .line 127
    const/16 v3, 0xa0

    if-eqz p2, :cond_4

    .line 128
    const-string v2, "mCKEPLDebug checked"

    invoke-static {v7, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 129
    invoke-static {v3, v6}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->setAudioCommand(II)I

    .line 130
    goto/16 :goto_3

    .line 131
    :cond_4
    const-string v4, "mCKEPLDebug Unchecked"

    invoke-static {v7, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 132
    invoke-static {v3, v2}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->setAudioCommand(II)I

    .line 133
    goto/16 :goto_3

    .line 134
    :cond_5
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-static {v3}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->access$600(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)Landroid/widget/RadioButton;

    move-result-object v3

    invoke-virtual {p1, v3}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v3

    const-string v8, "epl_status"

    const/4 v9, -0x1

    const/16 v10, 0x60

    if-eqz v3, :cond_8

    .line 135
    if-eqz p2, :cond_7

    .line 136
    const-string v2, "mCKBEPL checked"

    invoke-static {v7, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 137
    invoke-static {v10, v6}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->setAudioCommand(II)I

    move-result v2

    .line 138
    .local v2, "ret":I
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-static {v3}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->access$300(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)[B

    move-result-object v3

    invoke-static {v3, v5}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->getEmParameter([BI)I

    .line 139
    if-ne v2, v9, :cond_6

    .line 140
    const-string v3, "set mCKBEPL parameter failed"

    invoke-static {v7, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 141
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-static {v3, v4, v6}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v3

    .line 142
    invoke-virtual {v3}, Landroid/widget/Toast;->show()V

    .line 144
    :cond_6
    invoke-interface {v1, v8, v6}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 145
    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 146
    .end local v2    # "ret":I
    goto/16 :goto_3

    .line 147
    :cond_7
    const-string v2, "mCKBEPL unchecked"

    invoke-static {v7, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_3

    .line 149
    :cond_8
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-static {v3}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->access$700(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)Landroid/widget/RadioButton;

    move-result-object v3

    invoke-virtual {p1, v3}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_c

    .line 150
    if-eqz p2, :cond_b

    .line 151
    const-string v3, "mCKBNormalVm checked"

    invoke-static {v7, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 152
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-static {v3}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->access$800(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)Z

    move-result v3

    if-eqz v3, :cond_9

    .line 153
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->access$802(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;Z)Z

    goto/16 :goto_3

    .line 155
    :cond_9
    const-string v3, "mCKBNormalVm checked ok"

    invoke-static {v7, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 156
    invoke-static {v10, v2}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->setAudioCommand(II)I

    move-result v3

    .line 157
    .local v3, "ret":I
    iget-object v10, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-static {v10}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->access$300(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)[B

    move-result-object v10

    invoke-static {v10, v5}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->getEmParameter([BI)I

    .line 158
    if-ne v3, v9, :cond_a

    .line 159
    const-string v5, "set mCKBNormalVm parameter failed"

    invoke-static {v7, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 160
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-static {v5, v4, v6}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v4

    .line 161
    invoke-virtual {v4}, Landroid/widget/Toast;->show()V

    .line 163
    :cond_a
    invoke-interface {v1, v8, v2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 164
    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 165
    .end local v3    # "ret":I
    goto/16 :goto_3

    .line 167
    :cond_b
    const-string v2, "mCKBNormalVm unchecked"

    invoke-static {v7, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_3

    .line 169
    :cond_c
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-static {v3}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->access$900(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)Landroid/widget/CheckBox;

    move-result-object v3

    invoke-virtual {p1, v3}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_f

    .line 170
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_1
    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-static {v4}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->access$1000(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)Landroid/widget/RadioGroup;

    move-result-object v4

    invoke-virtual {v4}, Landroid/widget/RadioGroup;->getChildCount()I

    move-result v4

    if-ge v3, v4, :cond_d

    .line 171
    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-static {v4}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->access$1000(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)Landroid/widget/RadioGroup;

    move-result-object v4

    invoke-virtual {v4, v3}, Landroid/widget/RadioGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v4

    invoke-virtual {v4, p2}, Landroid/view/View;->setEnabled(Z)V

    .line 170
    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    .line 173
    .end local v3    # "i":I
    :cond_d
    if-eqz p2, :cond_e

    .line 174
    const-string v2, "mCbSpeechLogger checked"

    invoke-static {v7, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 175
    const/16 v2, 0xb3

    invoke-static {v2, v6}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->setAudioCommand(II)I

    move-result v2

    .line 177
    .restart local v2    # "ret":I
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-static {v3}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->access$1000(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)Landroid/widget/RadioGroup;

    move-result-object v3

    const v4, 0x7f060009

    invoke-virtual {v3, v4}, Landroid/widget/RadioGroup;->check(I)V

    .line 179
    .end local v2    # "ret":I
    goto :goto_2

    .line 180
    :cond_e
    const-string v3, "mCbSpeechLogger unchecked"

    invoke-static {v7, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 181
    const/16 v3, 0xb4

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->setAudioCommand(II)I

    .line 183
    :goto_2
    const-string v2, "anc_status"

    const-string v3, "downSample"

    invoke-interface {v1, v2, v3}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 184
    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    goto :goto_3

    .line 186
    :cond_f
    iget-object v2, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    invoke-static {v2}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->access$1100(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)Landroid/widget/CheckBox;

    move-result-object v2

    invoke-virtual {p1, v2}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_11

    .line 187
    if-eqz p2, :cond_10

    .line 188
    const-string v2, "mCbMagiConf checked"

    invoke-static {v7, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 189
    const-string v2, "SET_MAGI_CONFERENCE_ENABLE=1"

    invoke-static {v2}, Landroid/media/AudioSystem;->setParameters(Ljava/lang/String;)I

    .line 190
    goto :goto_3

    .line 191
    :cond_10
    const-string v2, "mCbMagiConf Unchecked"

    invoke-static {v7, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 192
    const-string v2, "SET_MAGI_CONFERENCE_ENABLE=0"

    invoke-static {v2}, Landroid/media/AudioSystem;->setParameters(Ljava/lang/String;)I

    .line 195
    :cond_11
    :goto_3
    return-void
.end method
