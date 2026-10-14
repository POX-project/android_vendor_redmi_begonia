.class Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;
.super Ljava/lang/Object;
.source "AudioAudioLogger.java"

# interfaces
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


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

    .line 238
    iput-object p1, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 20
    .param p1, "buttonView"    # Landroid/widget/CompoundButton;
    .param p2, "isChecked"    # Z

    .line 241
    move-object/from16 v0, p0

    const/4 v1, -0x1

    .line 242
    .local v1, "ret":I
    invoke-virtual/range {p1 .. p1}, Landroid/widget/CompoundButton;->getId()I

    move-result v2

    .line 243
    .local v2, "mCheckBoxID":I
    invoke-virtual/range {p1 .. p1}, Landroid/widget/CompoundButton;->getText()Ljava/lang/CharSequence;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 244
    .local v3, "mCheckBoxName":Ljava/lang/String;
    const/4 v4, 0x0

    .line 245
    .local v4, "cmdSend":Ljava/lang/String;
    shr-int/lit8 v5, v2, 0x8

    .line 246
    .local v5, "cmdID":I
    and-int/lit16 v6, v2, 0xff

    .line 247
    .local v6, "cmdParameter":I
    iget-object v7, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v7}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$800(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;

    move-result-object v7

    iget-object v7, v7, Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;->mAudioDumpOperation:Ljava/util/ArrayList;

    invoke-virtual {v7, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/mediatek/engineermode/audio/DumpOptions;

    iget-object v7, v7, Lcom/mediatek/engineermode/audio/DumpOptions;->mCategoryTitle:Ljava/lang/String;

    .line 248
    invoke-virtual {v7, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    const-string v8, "USB"

    const-string v9, "Input"

    const v10, 0x7f0a0132

    const-string v11, "Output"

    const-string v13, "Audio/AudioLogger"

    const/4 v14, 0x1

    if-eqz v7, :cond_4

    .line 249
    iget-object v7, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v7, v14}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$902(Lcom/mediatek/engineermode/audio/AudioAudioLogger;Z)Z

    .line 250
    const/4 v7, 0x0

    .local v7, "i":I
    :goto_0
    iget-object v15, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v15}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$800(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;

    move-result-object v15

    iget-object v15, v15, Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;->mAudioDumpOperation:Ljava/util/ArrayList;

    invoke-virtual {v15, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v15

    check-cast v15, Lcom/mediatek/engineermode/audio/DumpOptions;

    iget-object v15, v15, Lcom/mediatek/engineermode/audio/DumpOptions;->mCmdName:Ljava/util/ArrayList;

    .line 251
    invoke-virtual {v15}, Ljava/util/ArrayList;->size()I

    move-result v15

    if-ge v7, v15, :cond_0

    .line 252
    iget-object v15, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    add-int v16, v2, v7

    add-int/lit8 v12, v16, 0x1

    invoke-virtual {v15, v12}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->findViewById(I)Landroid/view/View;

    move-result-object v12

    check-cast v12, Landroid/widget/CheckBox;

    .line 253
    .local v12, "tempCheck":Landroid/widget/CheckBox;
    invoke-virtual/range {p1 .. p1}, Landroid/widget/CompoundButton;->isChecked()Z

    move-result v15

    .line 254
    .local v15, "isboxChecked":Z
    invoke-virtual {v12, v15}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 251
    .end local v12    # "tempCheck":Landroid/widget/CheckBox;
    .end local v15    # "isboxChecked":Z
    add-int/lit8 v7, v7, 0x1

    goto :goto_0

    .line 256
    .end local v7    # "i":I
    :cond_0
    iget-object v7, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v7}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$1000(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Ljava/util/ArrayList;

    move-result-object v7

    if-eqz v7, :cond_3

    iget-object v7, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v7}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$1000(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Ljava/util/ArrayList;

    move-result-object v7

    invoke-virtual {v7}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v7

    if-nez v7, :cond_3

    .line 257
    const-string v7, "CategoryTitle is checked, show dialog"

    invoke-static {v13, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 258
    iget-object v7, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v7, v3}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$302(Lcom/mediatek/engineermode/audio/AudioAudioLogger;Ljava/lang/String;)Ljava/lang/String;

    .line 259
    if-eqz p2, :cond_2

    iget-object v7, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v7}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$300(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v11, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-nez v7, :cond_1

    iget-object v7, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    .line 260
    invoke-static {v7}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$300(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v9, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-nez v7, :cond_1

    iget-object v7, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    .line 261
    invoke-static {v7}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$300(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v8, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_2

    .line 262
    :cond_1
    iget-object v7, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v7, v10, v14}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v7

    .line 263
    invoke-virtual {v7}, Landroid/widget/Toast;->show()V

    .line 265
    :cond_2
    iget-object v7, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    const/4 v8, 0x5

    invoke-virtual {v7, v8}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->showDialog(I)V

    .line 267
    :cond_3
    iget-object v7, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    const/4 v8, 0x0

    invoke-static {v7, v8}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$902(Lcom/mediatek/engineermode/audio/AudioAudioLogger;Z)Z

    move/from16 v17, v1

    move/from16 v18, v2

    goto/16 :goto_5

    .line 268
    :cond_4
    iget-object v7, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v7}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$800(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;

    move-result-object v7

    iget-object v7, v7, Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;->mAudioDumpOperation:Ljava/util/ArrayList;

    invoke-virtual {v7, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/mediatek/engineermode/audio/DumpOptions;

    iget-object v7, v7, Lcom/mediatek/engineermode/audio/DumpOptions;->mCmdName:Ljava/util/ArrayList;

    add-int/lit8 v12, v6, -0x1

    invoke-virtual {v7, v12}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    .line 269
    invoke-virtual {v7, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_e

    .line 271
    iget-object v7, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v7}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$800(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;

    move-result-object v7

    iget-object v7, v7, Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;->mAudioDumpOperation:Ljava/util/ArrayList;

    invoke-virtual {v7, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/mediatek/engineermode/audio/DumpOptions;

    iget-object v7, v7, Lcom/mediatek/engineermode/audio/DumpOptions;->mType:Ljava/util/ArrayList;

    add-int/lit8 v12, v6, -0x1

    invoke-virtual {v7, v12}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    .line 272
    const-string v12, "SetAudioCommand"

    invoke-virtual {v7, v12}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    const-string v12, "cmdSend: "

    if-eqz v7, :cond_7

    .line 273
    iget-object v7, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    .line 274
    invoke-static {v7}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$800(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;

    move-result-object v7

    iget-object v7, v7, Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;->mAudioDumpOperation:Ljava/util/ArrayList;

    invoke-virtual {v7, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/mediatek/engineermode/audio/DumpOptions;

    iget-object v7, v7, Lcom/mediatek/engineermode/audio/DumpOptions;->mCmd:Ljava/util/ArrayList;

    add-int/lit8 v15, v6, -0x1

    .line 275
    invoke-virtual {v7, v15}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    .line 273
    invoke-static {v7}, Ljava/lang/Integer;->decode(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v7

    .line 275
    invoke-virtual {v7}, Ljava/lang/Integer;->intValue()I

    move-result v7

    .line 276
    .local v7, "mCmd":I
    iget-object v15, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    .line 277
    invoke-static {v15}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$800(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;

    move-result-object v15

    iget-object v15, v15, Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;->mAudioDumpOperation:Ljava/util/ArrayList;

    invoke-virtual {v15, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v15

    check-cast v15, Lcom/mediatek/engineermode/audio/DumpOptions;

    iget-object v15, v15, Lcom/mediatek/engineermode/audio/DumpOptions;->mCheck:Ljava/util/ArrayList;

    add-int/lit8 v10, v6, -0x1

    .line 278
    invoke-virtual {v15, v10}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Ljava/lang/String;

    .line 276
    invoke-static {v10}, Ljava/lang/Integer;->decode(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v10

    .line 278
    invoke-virtual {v10}, Ljava/lang/Integer;->intValue()I

    move-result v10

    .line 279
    .local v10, "mCheck":I
    iget-object v15, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    .line 280
    invoke-static {v15}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$800(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;

    move-result-object v15

    iget-object v15, v15, Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;->mAudioDumpOperation:Ljava/util/ArrayList;

    invoke-virtual {v15, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v15

    check-cast v15, Lcom/mediatek/engineermode/audio/DumpOptions;

    iget-object v15, v15, Lcom/mediatek/engineermode/audio/DumpOptions;->mUncheck:Ljava/util/ArrayList;

    add-int/lit8 v14, v6, -0x1

    .line 281
    invoke-virtual {v15, v14}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Ljava/lang/String;

    .line 279
    invoke-static {v14}, Ljava/lang/Integer;->decode(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v14

    .line 281
    invoke-virtual {v14}, Ljava/lang/Integer;->intValue()I

    move-result v14

    .line 282
    .local v14, "mUncheck":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v17, v1

    .end local v1    # "ret":I
    .local v17, "ret":I
    invoke-static {v7}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v15, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", "

    invoke-virtual {v15, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 284
    if-eqz p2, :cond_5

    invoke-static {v10}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    goto :goto_1

    .line 285
    :cond_5
    invoke-static {v14}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    :goto_1
    invoke-virtual {v15, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 286
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v13, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 287
    nop

    .line 288
    if-eqz p2, :cond_6

    move v1, v10

    goto :goto_2

    :cond_6
    move v1, v14

    :goto_2
    invoke-static {v7, v1}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->setAudioCommand(II)I

    move-result v1

    .line 289
    .end local v17    # "ret":I
    .restart local v1    # "ret":I
    iget-object v12, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v12}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$1000(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Ljava/util/ArrayList;

    move-result-object v12

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v18, v2

    .end local v2    # "mCheckBoxID":I
    .local v18, "mCheckBoxID":I
    const-string v2, "Set: 0x"

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " Ret: "

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 290
    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 289
    invoke-virtual {v12, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 291
    .end local v7    # "mCmd":I
    .end local v10    # "mCheck":I
    .end local v14    # "mUncheck":I
    goto/16 :goto_4

    .end local v18    # "mCheckBoxID":I
    .restart local v2    # "mCheckBoxID":I
    :cond_7
    move/from16 v17, v1

    move/from16 v18, v2

    .end local v1    # "ret":I
    .end local v2    # "mCheckBoxID":I
    .restart local v17    # "ret":I
    .restart local v18    # "mCheckBoxID":I
    iget-object v1, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v1}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$800(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;

    move-result-object v1

    iget-object v1, v1, Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;->mAudioDumpOperation:Ljava/util/ArrayList;

    invoke-virtual {v1, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/audio/DumpOptions;

    iget-object v1, v1, Lcom/mediatek/engineermode/audio/DumpOptions;->mType:Ljava/util/ArrayList;

    add-int/lit8 v2, v6, -0x1

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 292
    const-string v2, "SetParameters"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v2, "   Ret: "

    if-eqz v1, :cond_9

    .line 293
    iget-object v1, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v1}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$800(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;

    move-result-object v1

    iget-object v1, v1, Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;->mAudioDumpOperation:Ljava/util/ArrayList;

    invoke-virtual {v1, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/audio/DumpOptions;

    iget-object v1, v1, Lcom/mediatek/engineermode/audio/DumpOptions;->mCmd:Ljava/util/ArrayList;

    add-int/lit8 v7, v6, -0x1

    .line 294
    invoke-virtual {v1, v7}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 295
    .local v1, "mCmd":Ljava/lang/String;
    iget-object v7, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v7}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$800(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;

    move-result-object v7

    iget-object v7, v7, Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;->mAudioDumpOperation:Ljava/util/ArrayList;

    invoke-virtual {v7, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/mediatek/engineermode/audio/DumpOptions;

    iget-object v7, v7, Lcom/mediatek/engineermode/audio/DumpOptions;->mCheck:Ljava/util/ArrayList;

    add-int/lit8 v10, v6, -0x1

    .line 296
    invoke-virtual {v7, v10}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    .line 297
    .local v7, "mCheck":Ljava/lang/String;
    iget-object v10, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v10}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$800(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;

    move-result-object v10

    iget-object v10, v10, Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;->mAudioDumpOperation:Ljava/util/ArrayList;

    invoke-virtual {v10, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Lcom/mediatek/engineermode/audio/DumpOptions;

    iget-object v10, v10, Lcom/mediatek/engineermode/audio/DumpOptions;->mUncheck:Ljava/util/ArrayList;

    add-int/lit8 v14, v6, -0x1

    .line 298
    invoke-virtual {v10, v14}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Ljava/lang/String;

    .line 299
    .local v10, "mUncheck":Ljava/lang/String;
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "="

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-eqz p2, :cond_8

    move-object v15, v7

    goto :goto_3

    :cond_8
    move-object v15, v10

    :goto_3
    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 300
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-static {v13, v12}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 301
    invoke-static {v4}, Landroid/media/AudioSystem;->setParameters(Ljava/lang/String;)I

    move-result v12

    .line 302
    .end local v17    # "ret":I
    .local v12, "ret":I
    iget-object v14, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v14}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$1000(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Ljava/util/ArrayList;

    move-result-object v14

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v19, v1

    .end local v1    # "mCmd":Ljava/lang/String;
    .local v19, "mCmd":Ljava/lang/String;
    const-string v1, "Set: "

    invoke-virtual {v15, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 303
    invoke-static {v12}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v15, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 302
    invoke-virtual {v14, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 304
    .end local v7    # "mCheck":Ljava/lang/String;
    .end local v10    # "mUncheck":Ljava/lang/String;
    .end local v19    # "mCmd":Ljava/lang/String;
    move v1, v12

    goto/16 :goto_4

    .end local v12    # "ret":I
    .restart local v17    # "ret":I
    :cond_9
    iget-object v1, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v1}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$800(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;

    move-result-object v1

    iget-object v1, v1, Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;->mAudioDumpOperation:Ljava/util/ArrayList;

    invoke-virtual {v1, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/audio/DumpOptions;

    iget-object v1, v1, Lcom/mediatek/engineermode/audio/DumpOptions;->mType:Ljava/util/ArrayList;

    add-int/lit8 v7, v6, -0x1

    invoke-virtual {v1, v7}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 305
    const-string v7, "GetAudioCommand"

    invoke-virtual {v1, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v7, "Get: "

    if-eqz v1, :cond_a

    .line 306
    iget-object v1, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v1}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$800(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;

    move-result-object v1

    iget-object v1, v1, Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;->mAudioDumpOperation:Ljava/util/ArrayList;

    invoke-virtual {v1, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/audio/DumpOptions;

    iget-object v1, v1, Lcom/mediatek/engineermode/audio/DumpOptions;->mCmd:Ljava/util/ArrayList;

    add-int/lit8 v2, v6, -0x1

    .line 307
    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 308
    .local v1, "str":Ljava/lang/String;
    invoke-static {v1}, Ljava/lang/Integer;->decode(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    .line 309
    .local v2, "mCmd":I
    move-object v4, v1

    .line 310
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-static {v13, v10}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 311
    invoke-static {v2}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->getAudioCommand(I)I

    move-result v10

    .line 312
    .end local v17    # "ret":I
    .local v10, "ret":I
    iget-object v12, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v12}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$1000(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Ljava/util/ArrayList;

    move-result-object v12

    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "  Ret: "

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 313
    invoke-static {v10}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    .line 312
    invoke-virtual {v12, v7}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 314
    .end local v1    # "str":Ljava/lang/String;
    .end local v2    # "mCmd":I
    move v1, v10

    goto :goto_4

    .end local v10    # "ret":I
    .restart local v17    # "ret":I
    :cond_a
    iget-object v1, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v1}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$800(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;

    move-result-object v1

    iget-object v1, v1, Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;->mAudioDumpOperation:Ljava/util/ArrayList;

    invoke-virtual {v1, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/audio/DumpOptions;

    iget-object v1, v1, Lcom/mediatek/engineermode/audio/DumpOptions;->mType:Ljava/util/ArrayList;

    add-int/lit8 v10, v6, -0x1

    invoke-virtual {v1, v10}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 315
    const-string v10, "GetParameters"

    invoke-virtual {v1, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_b

    .line 316
    iget-object v1, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v1}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$800(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;

    move-result-object v1

    iget-object v1, v1, Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;->mAudioDumpOperation:Ljava/util/ArrayList;

    invoke-virtual {v1, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/audio/DumpOptions;

    iget-object v1, v1, Lcom/mediatek/engineermode/audio/DumpOptions;->mCmd:Ljava/util/ArrayList;

    add-int/lit8 v10, v6, -0x1

    .line 317
    invoke-virtual {v1, v10}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 318
    .restart local v1    # "str":Ljava/lang/String;
    move-object v4, v1

    .line 319
    invoke-static {v1}, Landroid/media/AudioSystem;->getParameters(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    .line 320
    .local v10, "retString":Ljava/lang/String;
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-static {v13, v12}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 321
    iget-object v12, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v12}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$1000(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Ljava/util/ArrayList;

    move-result-object v12

    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v12, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    move/from16 v1, v17

    goto :goto_4

    .line 315
    .end local v1    # "str":Ljava/lang/String;
    .end local v10    # "retString":Ljava/lang/String;
    :cond_b
    move/from16 v1, v17

    .line 323
    .end local v17    # "ret":I
    .local v1, "ret":I
    :goto_4
    iget-object v2, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v2}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$900(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Z

    move-result v2

    if-nez v2, :cond_f

    .line 324
    const-string v2, "mCmdName is checked, show dialog"

    invoke-static {v13, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 325
    iget-object v2, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v2}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$800(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;

    move-result-object v7

    iget-object v7, v7, Lcom/mediatek/engineermode/audio/AudioLoggerXMLData;->mAudioDumpOperation:Ljava/util/ArrayList;

    invoke-virtual {v7, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/mediatek/engineermode/audio/DumpOptions;

    iget-object v7, v7, Lcom/mediatek/engineermode/audio/DumpOptions;->mCategoryTitle:Ljava/lang/String;

    invoke-static {v2, v7}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$302(Lcom/mediatek/engineermode/audio/AudioAudioLogger;Ljava/lang/String;)Ljava/lang/String;

    .line 326
    if-eqz p2, :cond_d

    iget-object v2, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v2}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$300(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v11, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_c

    iget-object v2, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    .line 327
    invoke-static {v2}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$300(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v9, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_c

    iget-object v2, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    .line 328
    invoke-static {v2}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$300(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v8, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_d

    .line 329
    :cond_c
    iget-object v2, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    const v7, 0x7f0a0132

    const/4 v8, 0x1

    invoke-static {v2, v7, v8}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v2

    .line 330
    invoke-virtual {v2}, Landroid/widget/Toast;->show()V

    .line 332
    :cond_d
    iget-object v2, v0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$3;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    const/4 v7, 0x5

    invoke-virtual {v2, v7}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->showDialog(I)V

    goto :goto_6

    .line 269
    .end local v18    # "mCheckBoxID":I
    .local v2, "mCheckBoxID":I
    :cond_e
    move/from16 v17, v1

    move/from16 v18, v2

    .line 335
    .end local v1    # "ret":I
    .end local v2    # "mCheckBoxID":I
    .restart local v17    # "ret":I
    .restart local v18    # "mCheckBoxID":I
    :goto_5
    move/from16 v1, v17

    .end local v17    # "ret":I
    .restart local v1    # "ret":I
    :cond_f
    :goto_6
    return-void
.end method
