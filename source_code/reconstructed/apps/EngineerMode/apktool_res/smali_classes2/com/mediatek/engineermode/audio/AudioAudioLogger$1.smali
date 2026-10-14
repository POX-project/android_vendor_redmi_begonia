.class Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;
.super Ljava/lang/Object;
.source "AudioAudioLogger.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/audio/AudioAudioLogger;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    .line 128
    iput-object p1, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 14
    .param p1, "arg0"    # Landroid/view/View;

    .line 134
    const/4 v0, -0x1

    .line 135
    .local v0, "ret":I
    const/4 v1, 0x0

    .line 136
    .local v1, "str":Ljava/lang/String;
    const/4 v2, 0x0

    .line 137
    .local v2, "cmdID":I
    const/4 v3, 0x0

    .line 138
    .local v3, "cmdParameter":I
    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v4}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$000(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Ljava/lang/Boolean;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v4

    if-nez v4, :cond_0

    .line 139
    return-void

    .line 142
    :cond_0
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v4

    const v5, 0x7fffffff

    const v6, 0x7f0a04c2

    const/4 v7, 0x4

    const/4 v8, 0x3

    const/4 v9, 0x1

    const-string v10, ",ret= "

    const-string v11, "Audio/AudioLogger"

    const/4 v12, 0x0

    sparse-switch v4, :sswitch_data_0

    goto/16 :goto_1

    .line 182
    :sswitch_0
    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v4}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$600(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Landroid/widget/EditText;

    move-result-object v4

    invoke-virtual {v4}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 183
    invoke-static {v1}, Landroid/media/AudioSystem;->setParameters(Ljava/lang/String;)I

    move-result v0

    .line 184
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Audio_SetAudioParameter="

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v11, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 185
    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v4, v0}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$202(Lcom/mediatek/engineermode/audio/AudioAudioLogger;I)I

    .line 186
    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v4, v1}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$302(Lcom/mediatek/engineermode/audio/AudioAudioLogger;Ljava/lang/String;)Ljava/lang/String;

    .line 187
    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v4}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$200(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)I

    move-result v5

    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5, v12}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v4

    .line 188
    invoke-virtual {v4}, Landroid/widget/Toast;->show()V

    .line 189
    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-virtual {v4, v7}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->showDialog(I)V

    .line 190
    goto/16 :goto_1

    .line 144
    :sswitch_1
    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v4}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$100(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Landroid/widget/EditText;

    move-result-object v4

    invoke-virtual {v4}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 145
    const-string v4, "\\s*"

    const-string v8, ""

    invoke-virtual {v1, v4, v8}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    const-string v8, ","

    invoke-virtual {v4, v8}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v4

    .line 147
    .local v4, "cmdStr":[Ljava/lang/String;
    :try_start_0
    aget-object v8, v4, v12

    invoke-static {v8}, Ljava/lang/Integer;->decode(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v8

    invoke-virtual {v8}, Ljava/lang/Integer;->intValue()I

    move-result v8

    move v2, v8

    .line 148
    aget-object v8, v4, v9

    invoke-static {v8}, Ljava/lang/Integer;->decode(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v8

    invoke-virtual {v8}, Ljava/lang/Integer;->intValue()I

    move-result v8

    move v3, v8

    .line 149
    invoke-static {v2, v3}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->setAudioCommand(II)I

    move-result v8

    move v0, v8

    .line 150
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "Audio_SetAudioCommand="

    invoke-virtual {v8, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v11, v8}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 151
    iget-object v8, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v8, v0}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$202(Lcom/mediatek/engineermode/audio/AudioAudioLogger;I)I

    .line 152
    iget-object v8, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v8, v1}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$302(Lcom/mediatek/engineermode/audio/AudioAudioLogger;Ljava/lang/String;)Ljava/lang/String;

    .line 153
    iget-object v8, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    iget-object v10, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v10}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$200(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)I

    move-result v10

    invoke-static {v10}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v10

    invoke-static {v8, v10, v12}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v8

    .line 154
    invoke-virtual {v8}, Landroid/widget/Toast;->show()V

    .line 155
    iget-object v8, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-virtual {v8, v7}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->showDialog(I)V
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/ArrayIndexOutOfBoundsException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 159
    :catch_0
    move-exception v5

    .line 160
    .local v5, "exception":Ljava/lang/ArrayIndexOutOfBoundsException;
    iget-object v6, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    const v7, 0x7f0a05b0

    invoke-virtual {v6, v7}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->getString(I)Ljava/lang/String;

    move-result-object v7

    invoke-static {v6, v7, v12}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v6

    .line 161
    invoke-virtual {v6}, Landroid/widget/Toast;->show()V

    .line 163
    .end local v5    # "exception":Ljava/lang/ArrayIndexOutOfBoundsException;
    goto/16 :goto_1

    .line 156
    :catch_1
    move-exception v7

    .line 157
    .local v7, "e":Ljava/lang/NumberFormatException;
    iget-object v8, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    new-array v9, v9, [Ljava/lang/Object;

    .line 158
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v9, v12

    .line 157
    invoke-virtual {v8, v6, v9}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v8, v5, v12}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v5

    .line 158
    invoke-virtual {v5}, Landroid/widget/Toast;->show()V

    .line 162
    .end local v7    # "e":Ljava/lang/NumberFormatException;
    :goto_0
    goto/16 :goto_1

    .line 192
    .end local v4    # "cmdStr":[Ljava/lang/String;
    :sswitch_2
    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v4}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$700(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Landroid/widget/EditText;

    move-result-object v4

    invoke-virtual {v4}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 193
    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v1}, Landroid/media/AudioSystem;->getParameters(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$502(Lcom/mediatek/engineermode/audio/AudioAudioLogger;Ljava/lang/String;)Ljava/lang/String;

    .line 194
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Audio_GetAudioParameter="

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ",ret="

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    .line 195
    invoke-static {v5}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$500(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 194
    invoke-static {v11, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 196
    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v4, v1}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$302(Lcom/mediatek/engineermode/audio/AudioAudioLogger;Ljava/lang/String;)Ljava/lang/String;

    .line 197
    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v4}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$500(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5, v12}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v4

    .line 198
    invoke-virtual {v4}, Landroid/widget/Toast;->show()V

    .line 199
    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-virtual {v4, v8}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->showDialog(I)V

    .line 200
    goto/16 :goto_1

    .line 165
    :sswitch_3
    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v4}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$400(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Landroid/widget/EditText;

    move-result-object v4

    invoke-virtual {v4}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 166
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "Audio_GetAudioCommand="

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v11, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 168
    :try_start_1
    invoke-static {v1}, Ljava/lang/Integer;->decode(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4

    move v2, v4

    .line 169
    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v2}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->getAudioCommand(I)I

    move-result v13

    invoke-static {v13}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v13

    invoke-static {v4, v13}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$502(Lcom/mediatek/engineermode/audio/AudioAudioLogger;Ljava/lang/String;)Ljava/lang/String;

    .line 170
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    .line 171
    invoke-static {v7}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$500(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 170
    invoke-static {v11, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 172
    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v4, v1}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$302(Lcom/mediatek/engineermode/audio/AudioAudioLogger;Ljava/lang/String;)Ljava/lang/String;

    .line 173
    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v7}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$500(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Ljava/lang/String;

    move-result-object v7

    invoke-static {v4, v7, v12}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v4

    .line 174
    invoke-virtual {v4}, Landroid/widget/Toast;->show()V

    .line 175
    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-virtual {v4, v8}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->showDialog(I)V
    :try_end_1
    .catch Ljava/lang/NumberFormatException; {:try_start_1 .. :try_end_1} :catch_2

    .line 179
    goto :goto_1

    .line 176
    :catch_2
    move-exception v4

    .line 177
    .local v4, "e":Ljava/lang/NumberFormatException;
    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$1;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    new-array v8, v9, [Ljava/lang/Object;

    .line 178
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v8, v12

    .line 177
    invoke-virtual {v7, v6, v8}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v7, v5, v12}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v5

    .line 178
    invoke-virtual {v5}, Landroid/widget/Toast;->show()V

    .line 180
    .end local v4    # "e":Ljava/lang/NumberFormatException;
    nop

    .line 204
    :goto_1
    return-void

    nop

    :sswitch_data_0
    .sparse-switch
        0x7f06001a -> :sswitch_3
        0x7f06001c -> :sswitch_2
        0x7f060039 -> :sswitch_1
        0x7f06003b -> :sswitch_0
    .end sparse-switch
.end method
