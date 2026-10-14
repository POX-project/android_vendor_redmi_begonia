.class Lcom/mediatek/engineermode/misc/MiscConfig$1;
.super Landroid/os/Handler;
.source "MiscConfig.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/misc/MiscConfig;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/misc/MiscConfig;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/misc/MiscConfig;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/misc/MiscConfig;

    .line 108
    iput-object p1, p0, Lcom/mediatek/engineermode/misc/MiscConfig$1;->this$0:Lcom/mediatek/engineermode/misc/MiscConfig;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 9
    .param p1, "msg"    # Landroid/os/Message;

    .line 111
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 112
    .local v0, "ar":Landroid/os/AsyncResult;
    iget v1, p1, Landroid/os/Message;->what:I

    const/4 v2, 0x0

    if-nez v1, :cond_2

    .line 113
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_1

    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v1, :cond_1

    .line 114
    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v1, [Ljava/lang/String;

    .line 115
    .local v1, "data":[Ljava/lang/String;
    array-length v3, v1

    if-lez v3, :cond_0

    aget-object v3, v1, v2

    if-eqz v3, :cond_0

    .line 116
    iget-object v3, p0, Lcom/mediatek/engineermode/misc/MiscConfig$1;->this$0:Lcom/mediatek/engineermode/misc/MiscConfig;

    aget-object v2, v1, v2

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/misc/MiscConfig;->access$000(Lcom/mediatek/engineermode/misc/MiscConfig;Ljava/lang/String;)V

    .line 117
    return-void

    .line 119
    .end local v1    # "data":[Ljava/lang/String;
    :cond_0
    goto/16 :goto_6

    .line 120
    :cond_1
    const-string v1, "Query failed"

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    goto/16 :goto_6

    .line 122
    :cond_2
    iget v1, p1, Landroid/os/Message;->what:I

    const/4 v3, 0x1

    const-string v4, "MiscConfig"

    if-ne v1, v3, :cond_4

    .line 123
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_3

    .line 124
    const-string v1, "Set successful"

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 125
    invoke-static {v4, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_6

    .line 127
    :cond_3
    const-string v1, "Set failed"

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 128
    invoke-static {v4, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_6

    .line 130
    :cond_4
    iget v1, p1, Landroid/os/Message;->what:I

    const/4 v5, 0x2

    const-string v6, ""

    const-string v7, " "

    if-ne v1, v5, :cond_7

    .line 131
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_13

    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v1, :cond_13

    .line 132
    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v1, [Ljava/lang/String;

    .line 133
    .restart local v1    # "data":[Ljava/lang/String;
    array-length v3, v1

    if-lez v3, :cond_6

    aget-object v3, v1, v2

    if-eqz v3, :cond_6

    .line 134
    const-string v3, "0"

    .line 136
    .local v3, "hVolte":Ljava/lang/String;
    :try_start_0
    aget-object v2, v1, v2

    invoke-virtual {v2, v7, v6}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v2

    const-string v5, "+CEVDP:"

    .line 137
    invoke-virtual {v5}, Ljava/lang/String;->length()I

    move-result v5

    invoke-virtual {v2, v5}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v3, v2

    .line 140
    goto :goto_0

    .line 138
    :catch_0
    move-exception v2

    .line 139
    .local v2, "e":Ljava/lang/Exception;
    const-string v5, "CEVDP failed "

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 141
    .end local v2    # "e":Ljava/lang/Exception;
    :goto_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "hVolte = "

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 142
    iget-object v2, p0, Lcom/mediatek/engineermode/misc/MiscConfig$1;->this$0:Lcom/mediatek/engineermode/misc/MiscConfig;

    invoke-static {v2}, Lcom/mediatek/engineermode/misc/MiscConfig;->access$100(Lcom/mediatek/engineermode/misc/MiscConfig;)Landroid/preference/ListPreference;

    move-result-object v2

    invoke-virtual {v2, v3}, Landroid/preference/ListPreference;->setValue(Ljava/lang/String;)V

    .line 143
    iget-object v2, p0, Lcom/mediatek/engineermode/misc/MiscConfig$1;->this$0:Lcom/mediatek/engineermode/misc/MiscConfig;

    invoke-static {v2}, Lcom/mediatek/engineermode/misc/MiscConfig;->access$100(Lcom/mediatek/engineermode/misc/MiscConfig;)Landroid/preference/ListPreference;

    move-result-object v2

    invoke-virtual {v2}, Landroid/preference/ListPreference;->getEntry()Ljava/lang/CharSequence;

    move-result-object v2

    if-eqz v2, :cond_5

    .line 144
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "mHVolteDeviceModePreference.getEntry() = "

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/misc/MiscConfig$1;->this$0:Lcom/mediatek/engineermode/misc/MiscConfig;

    .line 145
    invoke-static {v5}, Lcom/mediatek/engineermode/misc/MiscConfig;->access$100(Lcom/mediatek/engineermode/misc/MiscConfig;)Landroid/preference/ListPreference;

    move-result-object v5

    invoke-virtual {v5}, Landroid/preference/ListPreference;->getEntry()Ljava/lang/CharSequence;

    move-result-object v5

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 144
    invoke-static {v4, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 146
    iget-object v2, p0, Lcom/mediatek/engineermode/misc/MiscConfig$1;->this$0:Lcom/mediatek/engineermode/misc/MiscConfig;

    invoke-static {v2}, Lcom/mediatek/engineermode/misc/MiscConfig;->access$100(Lcom/mediatek/engineermode/misc/MiscConfig;)Landroid/preference/ListPreference;

    move-result-object v2

    iget-object v4, p0, Lcom/mediatek/engineermode/misc/MiscConfig$1;->this$0:Lcom/mediatek/engineermode/misc/MiscConfig;

    .line 147
    invoke-static {v4}, Lcom/mediatek/engineermode/misc/MiscConfig;->access$100(Lcom/mediatek/engineermode/misc/MiscConfig;)Landroid/preference/ListPreference;

    move-result-object v4

    invoke-virtual {v4}, Landroid/preference/ListPreference;->getEntry()Ljava/lang/CharSequence;

    move-result-object v4

    .line 146
    invoke-virtual {v2, v4}, Landroid/preference/ListPreference;->setSummary(Ljava/lang/CharSequence;)V

    goto :goto_1

    .line 149
    :cond_5
    const-string v2, "mHVolteDeviceModePreference.getEntry() = null"

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 152
    .end local v1    # "data":[Ljava/lang/String;
    .end local v3    # "hVolte":Ljava/lang/String;
    :cond_6
    :goto_1
    goto/16 :goto_6

    .line 153
    :cond_7
    iget v1, p1, Landroid/os/Message;->what:I

    const/4 v5, 0x3

    if-ne v1, v5, :cond_9

    .line 154
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_13

    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v1, :cond_13

    .line 155
    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v1, [Ljava/lang/String;

    .line 156
    .restart local v1    # "data":[Ljava/lang/String;
    array-length v3, v1

    if-lez v3, :cond_8

    aget-object v3, v1, v2

    if-eqz v3, :cond_8

    .line 157
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "EHVOLTE data[0] = "

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v5, v1, v2

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 158
    const-string v3, "0"

    .line 160
    .local v3, "slient":Ljava/lang/String;
    :try_start_1
    aget-object v2, v1, v2

    invoke-virtual {v2, v7, v6}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v2

    const-string v5, "+EHVOLTE:4,"

    .line 161
    invoke-virtual {v5}, Ljava/lang/String;->length()I

    move-result v5

    invoke-virtual {v2, v5}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    move-object v3, v2

    .line 164
    goto :goto_2

    .line 162
    :catch_1
    move-exception v2

    .line 163
    .restart local v2    # "e":Ljava/lang/Exception;
    const-string v5, "+EHVOLTE: failed "

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 165
    .end local v2    # "e":Ljava/lang/Exception;
    :goto_2
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "EHVOLTE data = "

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 166
    iget-object v2, p0, Lcom/mediatek/engineermode/misc/MiscConfig$1;->this$0:Lcom/mediatek/engineermode/misc/MiscConfig;

    invoke-static {v2}, Lcom/mediatek/engineermode/misc/MiscConfig;->access$200(Lcom/mediatek/engineermode/misc/MiscConfig;)Landroid/preference/CheckBoxPreference;

    move-result-object v2

    .line 167
    const-string v4, "1"

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    invoke-virtual {v2, v4}, Landroid/preference/CheckBoxPreference;->setChecked(Z)V

    .line 169
    .end local v1    # "data":[Ljava/lang/String;
    .end local v3    # "slient":Ljava/lang/String;
    :cond_8
    goto/16 :goto_6

    .line 170
    :cond_9
    iget v1, p1, Landroid/os/Message;->what:I

    const/4 v5, 0x4

    if-ne v1, v5, :cond_b

    .line 171
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_13

    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v1, :cond_13

    .line 172
    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v1, [Ljava/lang/String;

    .line 173
    .restart local v1    # "data":[Ljava/lang/String;
    array-length v3, v1

    if-lez v3, :cond_a

    aget-object v3, v1, v2

    if-eqz v3, :cond_a

    .line 174
    const-string v3, "0"

    .line 175
    .local v3, "volteHys":Ljava/lang/String;
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "volteHys data[0] = "

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v8, v1, v2

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 177
    :try_start_2
    aget-object v2, v1, v2

    invoke-virtual {v2, v7, v6}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v2

    const-string v5, "+EVZWT:11,"

    .line 178
    invoke-virtual {v5}, Ljava/lang/String;->length()I

    move-result v5

    invoke-virtual {v2, v5}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v2
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    move-object v3, v2

    .line 181
    goto :goto_3

    .line 179
    :catch_2
    move-exception v2

    .line 180
    .restart local v2    # "e":Ljava/lang/Exception;
    const-string v5, "+EVZWT:11 failed "

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 182
    .end local v2    # "e":Ljava/lang/Exception;
    :goto_3
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "volteHys data = "

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 183
    iget-object v2, p0, Lcom/mediatek/engineermode/misc/MiscConfig$1;->this$0:Lcom/mediatek/engineermode/misc/MiscConfig;

    invoke-static {v2}, Lcom/mediatek/engineermode/misc/MiscConfig;->access$300(Lcom/mediatek/engineermode/misc/MiscConfig;)Landroid/preference/EditTextPreference;

    move-result-object v2

    invoke-virtual {v2, v3}, Landroid/preference/EditTextPreference;->setText(Ljava/lang/String;)V

    .line 184
    iget-object v2, p0, Lcom/mediatek/engineermode/misc/MiscConfig$1;->this$0:Lcom/mediatek/engineermode/misc/MiscConfig;

    invoke-static {v2}, Lcom/mediatek/engineermode/misc/MiscConfig;->access$300(Lcom/mediatek/engineermode/misc/MiscConfig;)Landroid/preference/EditTextPreference;

    move-result-object v2

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mediatek/engineermode/misc/MiscConfig$1;->this$0:Lcom/mediatek/engineermode/misc/MiscConfig;

    const v6, 0x7f0a0438

    .line 185
    invoke-virtual {v5, v6}, Lcom/mediatek/engineermode/misc/MiscConfig;->getString(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " : "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 184
    invoke-virtual {v2, v4}, Landroid/preference/EditTextPreference;->setSummary(Ljava/lang/CharSequence;)V

    .line 187
    .end local v1    # "data":[Ljava/lang/String;
    .end local v3    # "volteHys":Ljava/lang/String;
    :cond_a
    goto/16 :goto_6

    .line 188
    :cond_b
    iget v1, p1, Landroid/os/Message;->what:I

    const/4 v5, 0x5

    if-ne v1, v5, :cond_d

    .line 189
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_c

    .line 190
    const-string v1, "Disable_Time_REG successful."

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    goto/16 :goto_6

    .line 192
    :cond_c
    const-string v1, "Disable_Time_REG failed."

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    goto/16 :goto_6

    .line 194
    :cond_d
    iget v1, p1, Landroid/os/Message;->what:I

    const/4 v5, 0x6

    if-ne v1, v5, :cond_f

    .line 195
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_e

    .line 196
    const-string v1, "Enable_Time_REG successful."

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    goto/16 :goto_6

    .line 198
    :cond_e
    const-string v1, "Enable_Time_REG failed."

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    goto/16 :goto_6

    .line 200
    :cond_f
    iget v1, p1, Landroid/os/Message;->what:I

    const/4 v5, 0x7

    if-ne v1, v5, :cond_13

    .line 201
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_12

    .line 202
    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v1, [Ljava/lang/String;

    .line 203
    .local v1, "mReturnData":[Ljava/lang/String;
    array-length v5, v1

    if-lez v5, :cond_11

    .line 204
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "close 1x mReturnData = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v6, v1, v2

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 205
    const-string v5, ""

    .line 207
    .local v5, "result":Ljava/lang/String;
    :try_start_3
    aget-object v6, v1, v2

    const-string v7, ","

    invoke-virtual {v6, v7}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v6

    aget-object v6, v6, v3
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3

    move-object v5, v6

    .line 211
    goto :goto_4

    .line 208
    :catch_3
    move-exception v6

    .line 209
    .local v6, "e":Ljava/lang/Exception;
    invoke-virtual {v6}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v7

    invoke-static {v4, v7}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 210
    const-string v7, "mReturnData error"

    invoke-static {v4, v7}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 212
    .end local v6    # "e":Ljava/lang/Exception;
    :goto_4
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "result = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v4, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 213
    const-string v4, "0"

    invoke-virtual {v5, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_10

    .line 214
    iget-object v2, p0, Lcom/mediatek/engineermode/misc/MiscConfig$1;->this$0:Lcom/mediatek/engineermode/misc/MiscConfig;

    invoke-static {v2}, Lcom/mediatek/engineermode/misc/MiscConfig;->access$400(Lcom/mediatek/engineermode/misc/MiscConfig;)Landroid/preference/CheckBoxPreference;

    move-result-object v2

    invoke-virtual {v2, v3}, Landroid/preference/CheckBoxPreference;->setChecked(Z)V

    goto :goto_5

    .line 216
    :cond_10
    iget-object v3, p0, Lcom/mediatek/engineermode/misc/MiscConfig$1;->this$0:Lcom/mediatek/engineermode/misc/MiscConfig;

    invoke-static {v3}, Lcom/mediatek/engineermode/misc/MiscConfig;->access$400(Lcom/mediatek/engineermode/misc/MiscConfig;)Landroid/preference/CheckBoxPreference;

    move-result-object v3

    invoke-virtual {v3, v2}, Landroid/preference/CheckBoxPreference;->setChecked(Z)V

    .line 219
    .end local v1    # "mReturnData":[Ljava/lang/String;
    .end local v5    # "result":Ljava/lang/String;
    :cond_11
    :goto_5
    goto :goto_6

    .line 220
    :cond_12
    const-string v1, "quary MSG_QUERY_STATUS_TIME_REG failed."

    invoke-static {v4, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 223
    :cond_13
    :goto_6
    return-void
.end method
