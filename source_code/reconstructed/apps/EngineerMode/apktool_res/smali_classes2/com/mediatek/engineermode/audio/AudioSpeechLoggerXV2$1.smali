.class Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;
.super Ljava/lang/Object;
.source "AudioSpeechLoggerXV2.java"

# interfaces
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    .line 139
    iput-object p1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 20
    .param p1, "buttonView"    # Landroid/widget/CompoundButton;
    .param p2, "checked"    # Z

    .line 141
    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move/from16 v2, p2

    iget-object v3, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    .line 142
    const-string v4, "engineermode_audiolog_preferences"

    const/4 v5, 0x0

    invoke-virtual {v3, v4, v5}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v3

    .line 143
    .local v3, "preferences":Landroid/content/SharedPreferences;
    invoke-interface {v3}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v4

    .line 144
    .local v4, "edit":Landroid/content/SharedPreferences$Editor;
    iget-object v6, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v6}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$000(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/CheckBox;

    move-result-object v6

    invoke-virtual {v1, v6}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_1

    .line 145
    if-eqz v2, :cond_0

    iget-object v6, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v6}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$100(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/CheckBox;

    move-result-object v6

    invoke-virtual {v6}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v6

    if-eqz v6, :cond_0

    .line 146
    iget-object v6, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v6}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$100(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/CheckBox;

    move-result-object v6

    invoke-virtual {v6, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 148
    :cond_0
    iget-object v5, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v5, v4, v2}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$200(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;Landroid/content/SharedPreferences$Editor;Z)V

    move-object/from16 v16, v3

    move-object/from16 v19, v4

    move-object v4, v1

    move-object/from16 v1, v19

    goto/16 :goto_d

    .line 149
    :cond_1
    iget-object v6, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v6}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$100(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/CheckBox;

    move-result-object v6

    invoke-virtual {v1, v6}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_4

    .line 150
    if-eqz v2, :cond_3

    .line 151
    iget-object v6, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v6}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$000(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/CheckBox;

    move-result-object v6

    invoke-virtual {v6}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v6

    if-eqz v6, :cond_2

    .line 152
    iget-object v6, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v6}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$000(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/CheckBox;

    move-result-object v6

    invoke-virtual {v6, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 154
    :cond_2
    iget-object v5, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    iget-object v5, v5, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mAudioManager:Landroid/media/AudioManager;

    const-string v6, "SET_VMLOG_CONFIG=2"

    invoke-virtual {v5, v6}, Landroid/media/AudioManager;->setParameters(Ljava/lang/String;)V

    move-object/from16 v16, v3

    move-object/from16 v19, v4

    move-object v4, v1

    move-object/from16 v1, v19

    goto/16 :goto_d

    .line 156
    :cond_3
    iget-object v5, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    iget-object v5, v5, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mAudioManager:Landroid/media/AudioManager;

    const-string v6, "SET_VMLOG_CONFIG=0"

    invoke-virtual {v5, v6}, Landroid/media/AudioManager;->setParameters(Ljava/lang/String;)V

    move-object/from16 v16, v3

    move-object/from16 v19, v4

    move-object v4, v1

    move-object/from16 v1, v19

    goto/16 :goto_d

    .line 158
    :cond_4
    iget-object v6, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v6}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$300(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/CheckBox;

    move-result-object v6

    invoke-virtual {v1, v6}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v6

    const/4 v7, 0x1

    const-string v8, "Audio/SpeechLogger2"

    if-eqz v6, :cond_6

    .line 159
    const/16 v6, 0xa0

    if-eqz v2, :cond_5

    .line 160
    const-string v5, "mCKEPLDebug checked"

    invoke-static {v8, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 161
    invoke-static {v6, v7}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->setAudioCommand(II)I

    .line 162
    move-object/from16 v16, v3

    move-object/from16 v19, v4

    move-object v4, v1

    move-object/from16 v1, v19

    goto/16 :goto_d

    .line 163
    :cond_5
    const-string v7, "mCKEPLDebug Unchecked"

    invoke-static {v8, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 164
    invoke-static {v6, v5}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->setAudioCommand(II)I

    .line 165
    move-object/from16 v16, v3

    move-object/from16 v19, v4

    move-object v4, v1

    move-object/from16 v1, v19

    goto/16 :goto_d

    .line 166
    :cond_6
    iget-object v6, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v6}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$400(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/RadioButton;

    move-result-object v6

    invoke-virtual {v1, v6}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v6

    const-string v9, "epl_status"

    const-string v10, "get CUST_XML_PARAM = 1"

    const-string v11, "GET_CUST_XML_ENABLE=1"

    const-string v12, "SET_CUST_XML_ENABLE=1"

    const-string v13, "set CUST_XML_PARAM = 1"

    const-string v14, "GET_CUST_XML_ENABLE"

    const-string v15, "APP_GET_PARAM=SpeechGeneral#CategoryLayer,Common#debug_info"

    const-string v5, "setParameters "

    const-string v7, "getParameters "

    move-object/from16 v16, v3

    .end local v3    # "preferences":Landroid/content/SharedPreferences;
    .local v16, "preferences":Landroid/content/SharedPreferences;
    const-string v3, ","

    const-string v1, "set mCKBEPL parameter failed"

    if-eqz v6, :cond_10

    .line 167
    if-eqz v2, :cond_f

    .line 168
    const-string v6, "mCKBEPL checked"

    invoke-static {v8, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 169
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->isEngLoad()Z

    move-result v6

    if-nez v6, :cond_8

    .line 170
    iget-object v6, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    iget-object v6, v6, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mAudioManager:Landroid/media/AudioManager;

    invoke-virtual {v6, v14}, Landroid/media/AudioManager;->getParameters(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 171
    .local v6, "check":Ljava/lang/String;
    if-eqz v6, :cond_7

    invoke-virtual {v11, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-eqz v11, :cond_7

    .line 172
    invoke-static {v8, v10}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 174
    :cond_7
    invoke-static {v8, v13}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 175
    iget-object v10, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    iget-object v10, v10, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mAudioManager:Landroid/media/AudioManager;

    invoke-virtual {v10, v12}, Landroid/media/AudioManager;->setParameters(Ljava/lang/String;)V

    .line 176
    const/4 v10, 0x1

    invoke-static {v10}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->CustXmlEnableChanged(I)Z

    .line 179
    .end local v6    # "check":Ljava/lang/String;
    :cond_8
    :goto_0
    iget-object v6, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v6, v15}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$500(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 180
    .local v6, "ret":Ljava/lang/String;
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-static {v8, v10}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 181
    if-eqz v6, :cond_b

    .line 182
    invoke-virtual {v6, v3}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v10

    .line 183
    .local v10, "entries":[Ljava/lang/String;
    array-length v11, v10

    const/4 v12, 0x1

    if-lt v11, v12, :cond_a

    .line 184
    const-string v11, "0x3"

    const/4 v12, 0x0

    aput-object v11, v10, v12

    .line 185
    const-string v11, "APP_SET_PARAM=SpeechGeneral#CategoryLayer,Common#debug_info#"

    .line 186
    .local v11, "cmd":Ljava/lang/String;
    const/4 v12, 0x0

    .local v12, "i":I
    :goto_1
    array-length v13, v10

    if-ge v12, v13, :cond_9

    .line 187
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v14, v10, v12

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    .line 186
    add-int/lit8 v12, v12, 0x1

    goto :goto_1

    .line 189
    .end local v12    # "i":I
    :cond_9
    invoke-virtual {v11}, Ljava/lang/String;->length()I

    move-result v12

    const/4 v13, 0x1

    sub-int/2addr v12, v13

    const/4 v13, 0x0

    invoke-virtual {v11, v13, v12}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v11

    .line 190
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-static {v8, v12}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 191
    iget-object v12, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v12, v11}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$600(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;Ljava/lang/String;)V

    .line 192
    .end local v11    # "cmd":Ljava/lang/String;
    const v12, 0x7f0a05b0

    const/4 v13, 0x1

    goto :goto_2

    .line 193
    :cond_a
    invoke-static {v8, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 194
    iget-object v11, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    const v12, 0x7f0a05b0

    const/4 v13, 0x1

    invoke-static {v11, v12, v13}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v11

    .line 195
    invoke-virtual {v11}, Landroid/widget/Toast;->show()V

    .line 197
    .end local v10    # "entries":[Ljava/lang/String;
    :goto_2
    goto :goto_3

    .line 198
    :cond_b
    const v12, 0x7f0a05b0

    const/4 v13, 0x1

    invoke-static {v8, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 199
    iget-object v10, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v10, v12, v13}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v10

    .line 200
    invoke-virtual {v10}, Landroid/widget/Toast;->show()V

    .line 203
    :goto_3
    iget-object v10, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    const-string v11, "APP_GET_PARAM=SpeechGeneral#CategoryLayer,Common#speech_common_para"

    invoke-static {v10, v11}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$500(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 204
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v8, v7}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 205
    if-eqz v6, :cond_e

    .line 206
    invoke-virtual {v6, v3}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v7

    .line 207
    .local v7, "entries":[Ljava/lang/String;
    array-length v10, v7

    const/4 v11, 0x1

    if-lt v10, v11, :cond_d

    .line 208
    const-string v1, "0x6"

    const/4 v10, 0x0

    aput-object v1, v7, v10

    .line 209
    const-string v1, "APP_SET_PARAM=SpeechGeneral#CategoryLayer,Common#speech_common_para#"

    .line 210
    .local v1, "cmd":Ljava/lang/String;
    const/4 v10, 0x0

    .local v10, "i":I
    :goto_4
    array-length v11, v7

    if-ge v10, v11, :cond_c

    .line 211
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v12, v7, v10

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 210
    add-int/lit8 v10, v10, 0x1

    goto :goto_4

    .line 213
    .end local v10    # "i":I
    :cond_c
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v3

    const/4 v10, 0x1

    sub-int/2addr v3, v10

    const/4 v10, 0x0

    invoke-virtual {v1, v10, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v1

    .line 214
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 215
    iget-object v3, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$600(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;Ljava/lang/String;)V

    .line 216
    .end local v1    # "cmd":Ljava/lang/String;
    const/4 v5, 0x1

    goto :goto_5

    .line 217
    :cond_d
    invoke-static {v8, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 218
    iget-object v1, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    const v3, 0x7f0a05b0

    const/4 v5, 0x1

    invoke-static {v1, v3, v5}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v1

    .line 219
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 221
    .end local v7    # "entries":[Ljava/lang/String;
    :goto_5
    goto :goto_6

    .line 222
    :cond_e
    const v3, 0x7f0a05b0

    const/4 v5, 0x1

    invoke-static {v8, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 223
    iget-object v1, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v1, v3, v5}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v1

    .line 224
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 227
    :goto_6
    invoke-interface {v4, v9, v5}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 228
    invoke-interface {v4}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 229
    .end local v6    # "ret":Ljava/lang/String;
    move-object v1, v4

    move-object/from16 v4, p1

    goto/16 :goto_d

    .line 230
    :cond_f
    const-string v1, "mCKBEPL unchecked"

    invoke-static {v8, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    move-object v1, v4

    move-object/from16 v4, p1

    goto/16 :goto_d

    .line 232
    :cond_10
    const v6, 0x7f0a05b0

    iget-object v6, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v6}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$700(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/RadioButton;

    move-result-object v6

    move-object/from16 v18, v4

    move-object/from16 v17, v9

    const v9, 0x7f0a05b0

    move-object/from16 v4, p1

    .end local v4    # "edit":Landroid/content/SharedPreferences$Editor;
    .local v18, "edit":Landroid/content/SharedPreferences$Editor;
    invoke-virtual {v4, v6}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_19

    .line 233
    if-eqz v2, :cond_18

    .line 234
    const-string v6, "mCKBNormalVm checked"

    invoke-static {v8, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 235
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->isEngLoad()Z

    move-result v6

    if-nez v6, :cond_12

    .line 236
    iget-object v6, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    iget-object v6, v6, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mAudioManager:Landroid/media/AudioManager;

    invoke-virtual {v6, v14}, Landroid/media/AudioManager;->getParameters(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 237
    .local v6, "check":Ljava/lang/String;
    if-eqz v6, :cond_11

    invoke-virtual {v11, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-eqz v11, :cond_11

    .line 238
    invoke-static {v8, v10}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_7

    .line 240
    :cond_11
    invoke-static {v8, v13}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 241
    iget-object v10, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    iget-object v10, v10, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mAudioManager:Landroid/media/AudioManager;

    invoke-virtual {v10, v12}, Landroid/media/AudioManager;->setParameters(Ljava/lang/String;)V

    .line 242
    const/4 v10, 0x1

    invoke-static {v10}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->CustXmlEnableChanged(I)Z

    .line 245
    .end local v6    # "check":Ljava/lang/String;
    :cond_12
    :goto_7
    iget-object v6, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v6}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$800(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Z

    move-result v6

    if-eqz v6, :cond_13

    .line 246
    iget-object v1, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    const/4 v3, 0x0

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$802(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;Z)Z

    move-object/from16 v1, v18

    goto/16 :goto_d

    .line 248
    :cond_13
    const-string v6, "mCKBNormalVm checked ok"

    invoke-static {v8, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 249
    iget-object v6, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v6, v15}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$500(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 250
    .local v6, "ret":Ljava/lang/String;
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v8, v7}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 251
    if-eqz v6, :cond_17

    .line 252
    invoke-virtual {v6, v3}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v7

    .line 253
    .restart local v7    # "entries":[Ljava/lang/String;
    array-length v10, v7

    const/4 v11, 0x1

    if-lt v10, v11, :cond_15

    .line 254
    const/4 v1, 0x0

    aget-object v9, v7, v1

    const-string v10, "0x0"

    invoke-virtual {v10, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v9

    if-nez v9, :cond_16

    .line 255
    aput-object v10, v7, v1

    .line 256
    const-string v1, "APP_SET_PARAM=SpeechGeneral#CategoryLayer,Common#debug_info#"

    .line 257
    .restart local v1    # "cmd":Ljava/lang/String;
    const/4 v9, 0x0

    .local v9, "i":I
    :goto_8
    array-length v10, v7

    if-ge v9, v10, :cond_14

    .line 258
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v11, v7, v9

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 257
    add-int/lit8 v9, v9, 0x1

    goto :goto_8

    .line 260
    .end local v9    # "i":I
    :cond_14
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v3

    const/4 v9, 0x1

    sub-int/2addr v3, v9

    const/4 v9, 0x0

    invoke-virtual {v1, v9, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v1

    .line 261
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 262
    iget-object v3, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$600(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;Ljava/lang/String;)V

    .line 263
    .end local v1    # "cmd":Ljava/lang/String;
    goto :goto_9

    .line 265
    :cond_15
    invoke-static {v8, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 266
    iget-object v1, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    const/4 v3, 0x1

    invoke-static {v1, v9, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v1

    .line 267
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 269
    .end local v7    # "entries":[Ljava/lang/String;
    :cond_16
    :goto_9
    goto :goto_a

    .line 270
    :cond_17
    const/4 v3, 0x1

    invoke-static {v8, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 271
    iget-object v1, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v1, v9, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v1

    .line 272
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 274
    :goto_a
    move-object/from16 v3, v17

    move-object/from16 v1, v18

    const/4 v5, 0x0

    .end local v18    # "edit":Landroid/content/SharedPreferences$Editor;
    .local v1, "edit":Landroid/content/SharedPreferences$Editor;
    invoke-interface {v1, v3, v5}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 275
    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 276
    .end local v6    # "ret":Ljava/lang/String;
    goto/16 :goto_d

    .line 278
    .end local v1    # "edit":Landroid/content/SharedPreferences$Editor;
    .restart local v18    # "edit":Landroid/content/SharedPreferences$Editor;
    :cond_18
    move-object/from16 v1, v18

    .end local v18    # "edit":Landroid/content/SharedPreferences$Editor;
    .restart local v1    # "edit":Landroid/content/SharedPreferences$Editor;
    const-string v3, "mCKBNormalVm unchecked"

    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_d

    .line 280
    .end local v1    # "edit":Landroid/content/SharedPreferences$Editor;
    .restart local v18    # "edit":Landroid/content/SharedPreferences$Editor;
    :cond_19
    move-object/from16 v1, v18

    .end local v18    # "edit":Landroid/content/SharedPreferences$Editor;
    .restart local v1    # "edit":Landroid/content/SharedPreferences$Editor;
    iget-object v3, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v3}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$900(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/CheckBox;

    move-result-object v3

    invoke-virtual {v4, v3}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1c

    .line 281
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_b
    iget-object v5, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v5}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1000(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/RadioGroup;

    move-result-object v5

    invoke-virtual {v5}, Landroid/widget/RadioGroup;->getChildCount()I

    move-result v5

    if-ge v3, v5, :cond_1a

    .line 282
    iget-object v5, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v5}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1000(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/RadioGroup;

    move-result-object v5

    invoke-virtual {v5, v3}, Landroid/widget/RadioGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v5

    invoke-virtual {v5, v2}, Landroid/view/View;->setEnabled(Z)V

    .line 281
    add-int/lit8 v3, v3, 0x1

    goto :goto_b

    .line 284
    .end local v3    # "i":I
    :cond_1a
    if-eqz v2, :cond_1b

    .line 285
    const-string v3, "mCbSpeechLogger checked"

    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 286
    const/16 v3, 0xb3

    const/4 v5, 0x1

    invoke-static {v3, v5}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->setAudioCommand(II)I

    move-result v3

    .line 288
    .local v3, "ret":I
    iget-object v5, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v5}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1000(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/RadioGroup;

    move-result-object v5

    const v6, 0x7f060009

    invoke-virtual {v5, v6}, Landroid/widget/RadioGroup;->check(I)V

    .line 290
    .end local v3    # "ret":I
    goto :goto_c

    .line 291
    :cond_1b
    const-string v3, "mCbSpeechLogger unchecked"

    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 292
    const/16 v3, 0xb4

    const/4 v5, 0x0

    invoke-static {v3, v5}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->setAudioCommand(II)I

    .line 294
    :goto_c
    const-string v3, "anc_status"

    const-string v5, "downSample"

    invoke-interface {v1, v3, v5}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 295
    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    goto :goto_d

    .line 297
    :cond_1c
    iget-object v3, v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v3}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1100(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/CheckBox;

    move-result-object v3

    invoke-virtual {v4, v3}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1e

    .line 298
    if-eqz v2, :cond_1d

    .line 299
    const-string v3, "mCbMagiConf checked"

    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 300
    const-string v3, "SET_MAGI_CONFERENCE_ENABLE=1"

    invoke-static {v3}, Landroid/media/AudioSystem;->setParameters(Ljava/lang/String;)I

    .line 301
    goto :goto_d

    .line 302
    :cond_1d
    const-string v3, "mCbMagiConf Unchecked"

    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 303
    const-string v3, "SET_MAGI_CONFERENCE_ENABLE=0"

    invoke-static {v3}, Landroid/media/AudioSystem;->setParameters(Ljava/lang/String;)I

    .line 306
    :cond_1e
    :goto_d
    return-void
.end method
