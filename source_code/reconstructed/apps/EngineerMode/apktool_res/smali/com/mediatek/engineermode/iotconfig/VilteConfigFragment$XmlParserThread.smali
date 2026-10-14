.class public Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;
.super Ljava/lang/Thread;
.source "VilteConfigFragment.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "XmlParserThread"
.end annotation


# instance fields
.field private action:I

.field final synthetic this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;


# direct methods
.method public constructor <init>(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;I)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;
    .param p2, "action"    # I

    .line 304
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    .line 305
    iput p2, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->action:I

    .line 306
    return-void
.end method


# virtual methods
.method public run()V
    .locals 27

    .line 309
    move-object/from16 v1, p0

    const-string v0, "viLTE_media_profiles_opxx.xml"

    new-instance v2, Landroid/os/Message;

    invoke-direct {v2}, Landroid/os/Message;-><init>()V

    .line 310
    .local v2, "msg":Landroid/os/Message;
    iget v3, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->action:I

    const-string v4, "vilte_media_profiles_opxx.xml"

    const-string v5, "viLTE_media_profiles.xml"

    const/4 v6, 0x1

    const-string v7, "Iot/VilteConfigFragment"

    const-string v9, ""

    if-eqz v3, :cond_e

    if-eq v3, v6, :cond_0

    .line 462
    const/4 v0, 0x4

    iput v0, v2, Landroid/os/Message;->what:I

    goto/16 :goto_10

    .line 359
    :cond_0
    iget-object v0, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-static {v0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->access$000(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;)Landroid/widget/EditText;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    .line 360
    .local v3, "opId":Ljava/lang/String;
    sget-object v0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->selectProfileList:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-eqz v0, :cond_d

    sget-object v0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->selectqualityList:Ljava/util/ArrayList;

    .line 361
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-nez v0, :cond_1

    goto/16 :goto_a

    .line 365
    :cond_1
    if-eqz v3, :cond_2

    :try_start_0
    const-string v0, " "

    invoke-virtual {v3, v0, v9}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 366
    invoke-static {v3}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->isNumeric(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 367
    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v3, v0

    goto :goto_0

    .line 454
    :catch_0
    move-exception v0

    goto/16 :goto_9

    .line 370
    :cond_2
    :goto_0
    :try_start_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "Write  "

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-static {v10}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->access$400(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v7, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 372
    iget-object v0, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-static {v0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->access$400(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2

    if-eqz v0, :cond_3

    .line 373
    :try_start_2
    new-instance v0, Ljava/io/InputStreamReader;

    iget-object v4, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    .line 374
    invoke-virtual {v4}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v4

    invoke-virtual {v4}, Landroid/support/v4/app/FragmentActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v4

    .line 375
    invoke-virtual {v4}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v4

    iget-object v10, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-static {v10}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->access$400(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v4, v10}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object v4

    invoke-direct {v0, v4}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    .line 376
    .local v0, "tempInputStream":Ljava/io/InputStreamReader;
    new-instance v4, Ljava/io/BufferedReader;

    invoke-direct {v4, v0}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    move-object v0, v4

    .line 377
    .local v0, "br":Ljava/io/BufferedReader;
    goto :goto_1

    .line 378
    .end local v0    # "br":Ljava/io/BufferedReader;
    :cond_3
    :try_start_3
    new-instance v0, Ljava/io/File;

    iget-object v4, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-static {v4}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->access$400(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;)Ljava/lang/String;

    move-result-object v4

    invoke-direct {v0, v4}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 379
    .local v0, "tempFile":Ljava/io/File;
    new-instance v4, Ljava/io/BufferedReader;

    new-instance v10, Ljava/io/FileReader;

    invoke-direct {v10, v0}, Ljava/io/FileReader;-><init>(Ljava/io/File;)V

    invoke-direct {v4, v10}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V

    move-object v0, v4

    .line 381
    .local v0, "br":Ljava/io/BufferedReader;
    :goto_1
    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4}, Ljava/util/ArrayList;-><init>()V

    .line 382
    .local v4, "lines":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    move-object v10, v9

    .line 383
    .local v10, "readline":Ljava/lang/String;
    :goto_2
    invoke-virtual {v0}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v11
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_2

    move-object v10, v11

    if-eqz v11, :cond_4

    .line 384
    :try_start_4
    invoke-virtual {v4, v10}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0

    goto :goto_2

    .line 386
    :cond_4
    const/4 v11, 0x0

    .line 387
    .local v11, "isProfileWrited":Z
    const/4 v12, 0x0

    .line 388
    .local v12, "isQualityWrited":Z
    :try_start_5
    new-instance v13, Ljava/lang/StringBuffer;

    invoke-direct {v13}, Ljava/lang/StringBuffer;-><init>()V

    .line 389
    .local v13, "sb":Ljava/lang/StringBuffer;
    move-object v14, v9

    .line 390
    .local v14, "profileStart":Ljava/lang/String;
    move-object v15, v9

    .line 391
    .local v15, "qualityStart":Ljava/lang/String;
    new-instance v6, Ljava/io/File;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v16, v0

    .end local v0    # "br":Ljava/io/BufferedReader;
    .local v16, "br":Ljava/io/BufferedReader;
    iget-object v0, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->getInnerSDCardPath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v8, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v8, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v6, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    move-object v0, v6

    .line 393
    .local v0, "newFile":Ljava/io/File;
    new-instance v5, Ljava/io/BufferedWriter;

    new-instance v6, Ljava/io/FileWriter;

    const/4 v8, 0x0

    invoke-direct {v6, v0, v8}, Ljava/io/FileWriter;-><init>(Ljava/io/File;Z)V

    invoke-direct {v5, v6}, Ljava/io/BufferedWriter;-><init>(Ljava/io/Writer;)V

    .line 395
    .local v5, "bw":Ljava/io/BufferedWriter;
    invoke-virtual {v4}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v6

    :goto_3
    invoke-interface {v6}, Ljava/util/Iterator;->hasNext()Z

    move-result v8

    if-eqz v8, :cond_c

    invoke-interface {v6}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/String;

    .line 396
    .local v8, "line":Ljava/lang/String;
    move-object/from16 v17, v0

    .end local v0    # "newFile":Ljava/io/File;
    .local v17, "newFile":Ljava/io/File;
    const-string v0, "<VideoProfile name="

    invoke-virtual {v8, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_2

    move-object/from16 v18, v3

    .end local v3    # "opId":Ljava/lang/String;
    .local v18, "opId":Ljava/lang/String;
    const-string v3, "name"

    if-eqz v0, :cond_5

    .line 397
    :try_start_6
    invoke-virtual {v8, v3}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    const/4 v3, 0x0

    aget-object v0, v0, v3
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_1

    move-object v14, v0

    move-object/from16 v19, v4

    move-object/from16 v20, v6

    move-object/from16 v21, v10

    move-object/from16 v22, v13

    .end local v14    # "profileStart":Ljava/lang/String;
    .local v0, "profileStart":Ljava/lang/String;
    goto/16 :goto_8

    .line 399
    .end local v0    # "profileStart":Ljava/lang/String;
    .restart local v14    # "profileStart":Ljava/lang/String;
    :cond_5
    const-string v0, "\"/>"

    move-object/from16 v19, v4

    .end local v4    # "lines":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    .local v19, "lines":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    const-string v4, "\" level=\""

    move-object/from16 v20, v6

    const-string v6, "\" profile=\""

    move-object/from16 v21, v10

    .end local v10    # "readline":Ljava/lang/String;
    .local v21, "readline":Ljava/lang/String;
    const-string v10, "name=\""

    move-object/from16 v22, v13

    .end local v13    # "sb":Ljava/lang/StringBuffer;
    .local v22, "sb":Ljava/lang/StringBuffer;
    const-string v13, "\r\n"

    if-nez v11, :cond_8

    .line 400
    :try_start_7
    invoke-virtual {v14, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v23

    if-nez v23, :cond_7

    .line 401
    sget-object v23, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->selectProfileList:Ljava/util/ArrayList;

    invoke-virtual/range {v23 .. v23}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v23

    :goto_4
    invoke-interface/range {v23 .. v23}, Ljava/util/Iterator;->hasNext()Z

    move-result v24

    if-eqz v24, :cond_6

    invoke-interface/range {v23 .. v23}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v24

    check-cast v24, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    .line 402
    .local v24, "model":Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;
    move/from16 v25, v11

    .end local v11    # "isProfileWrited":Z
    .local v25, "isProfileWrited":Z
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 403
    move-object/from16 v26, v14

    .end local v14    # "profileStart":Ljava/lang/String;
    .local v26, "profileStart":Ljava/lang/String;
    invoke-virtual/range {v24 .. v24}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getName()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 405
    invoke-virtual/range {v24 .. v24}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getProfile()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 407
    invoke-virtual/range {v24 .. v24}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getLevel()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "\" width=\""

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 409
    invoke-virtual/range {v24 .. v24}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getWidth()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "\" height=\""

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 411
    invoke-virtual/range {v24 .. v24}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getHeight()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "\" framerate=\""

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 413
    invoke-virtual/range {v24 .. v24}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getFramerate()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "\" Iinterval=\""

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 415
    invoke-virtual/range {v24 .. v24}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getIinterval()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "\" minBitRate=\""

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 417
    invoke-virtual/range {v24 .. v24}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getMinBitRate()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "\" maxBitRate=\""

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 419
    invoke-virtual/range {v24 .. v24}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getMaxBitRate()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    .line 402
    invoke-virtual {v5, v11}, Ljava/io/BufferedWriter;->write(Ljava/lang/String;)V

    .line 421
    invoke-virtual {v5, v13}, Ljava/io/BufferedWriter;->write(Ljava/lang/String;)V

    .line 422
    invoke-virtual {v5}, Ljava/io/BufferedWriter;->flush()V

    .line 423
    .end local v24    # "model":Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;
    move/from16 v11, v25

    move-object/from16 v14, v26

    goto/16 :goto_4

    .line 424
    .end local v25    # "isProfileWrited":Z
    .end local v26    # "profileStart":Ljava/lang/String;
    .restart local v11    # "isProfileWrited":Z
    .restart local v14    # "profileStart":Ljava/lang/String;
    :cond_6
    move/from16 v25, v11

    move-object/from16 v26, v14

    .end local v11    # "isProfileWrited":Z
    .end local v14    # "profileStart":Ljava/lang/String;
    .restart local v25    # "isProfileWrited":Z
    .restart local v26    # "profileStart":Ljava/lang/String;
    const/4 v11, 0x1

    .end local v25    # "isProfileWrited":Z
    .restart local v11    # "isProfileWrited":Z
    goto :goto_6

    .line 400
    .end local v26    # "profileStart":Ljava/lang/String;
    .restart local v14    # "profileStart":Ljava/lang/String;
    :cond_7
    move/from16 v25, v11

    move-object/from16 v26, v14

    .end local v11    # "isProfileWrited":Z
    .end local v14    # "profileStart":Ljava/lang/String;
    .restart local v25    # "isProfileWrited":Z
    .restart local v26    # "profileStart":Ljava/lang/String;
    goto :goto_5

    .line 399
    .end local v25    # "isProfileWrited":Z
    .end local v26    # "profileStart":Ljava/lang/String;
    .restart local v11    # "isProfileWrited":Z
    .restart local v14    # "profileStart":Ljava/lang/String;
    :cond_8
    move/from16 v25, v11

    move-object/from16 v26, v14

    .line 426
    .end local v11    # "isProfileWrited":Z
    .end local v14    # "profileStart":Ljava/lang/String;
    .restart local v25    # "isProfileWrited":Z
    .restart local v26    # "profileStart":Ljava/lang/String;
    :goto_5
    move/from16 v11, v25

    .end local v25    # "isProfileWrited":Z
    .restart local v11    # "isProfileWrited":Z
    :goto_6
    const-string v14, "<VideoQuality name="

    invoke-virtual {v8, v14}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v14

    if-eqz v14, :cond_9

    .line 427
    invoke-virtual {v8, v3}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    const/4 v3, 0x0

    aget-object v0, v0, v3

    move-object v15, v0

    move-object/from16 v14, v26

    .end local v15    # "qualityStart":Ljava/lang/String;
    .local v0, "qualityStart":Ljava/lang/String;
    goto :goto_8

    .line 429
    .end local v0    # "qualityStart":Ljava/lang/String;
    .restart local v15    # "qualityStart":Ljava/lang/String;
    :cond_9
    if-nez v12, :cond_b

    .line 430
    invoke-virtual {v15, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_b

    .line 431
    sget-object v3, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->selectqualityList:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :goto_7
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v14

    if-eqz v14, :cond_a

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Lcom/mediatek/engineermode/iotconfig/VideoQualityModel;

    .line 432
    .local v14, "model":Lcom/mediatek/engineermode/iotconfig/VideoQualityModel;
    move-object/from16 v23, v3

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 433
    move-object/from16 v24, v10

    invoke-virtual {v14}, Lcom/mediatek/engineermode/iotconfig/VideoQualityModel;->getName()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, "\" format=\""

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 435
    invoke-virtual {v14}, Lcom/mediatek/engineermode/iotconfig/VideoQualityModel;->getFormat()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 437
    invoke-virtual {v14}, Lcom/mediatek/engineermode/iotconfig/VideoQualityModel;->getProfile()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 439
    invoke-virtual {v14}, Lcom/mediatek/engineermode/iotconfig/VideoQualityModel;->getLevel()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 432
    invoke-virtual {v5, v3}, Ljava/io/BufferedWriter;->write(Ljava/lang/String;)V

    .line 440
    invoke-virtual {v5, v13}, Ljava/io/BufferedWriter;->write(Ljava/lang/String;)V

    .line 441
    invoke-virtual {v5}, Ljava/io/BufferedWriter;->flush()V

    .line 442
    .end local v14    # "model":Lcom/mediatek/engineermode/iotconfig/VideoQualityModel;
    move-object/from16 v3, v23

    move-object/from16 v10, v24

    goto :goto_7

    .line 443
    :cond_a
    const/4 v12, 0x1

    .line 445
    :cond_b
    invoke-virtual {v5, v8}, Ljava/io/BufferedWriter;->write(Ljava/lang/String;)V

    .line 446
    invoke-virtual {v5, v13}, Ljava/io/BufferedWriter;->write(Ljava/lang/String;)V

    .line 447
    invoke-virtual {v5}, Ljava/io/BufferedWriter;->flush()V

    move-object/from16 v14, v26

    .line 451
    .end local v8    # "line":Ljava/lang/String;
    .end local v26    # "profileStart":Ljava/lang/String;
    .local v14, "profileStart":Ljava/lang/String;
    :goto_8
    move-object/from16 v0, v17

    move-object/from16 v3, v18

    move-object/from16 v4, v19

    move-object/from16 v6, v20

    move-object/from16 v10, v21

    move-object/from16 v13, v22

    goto/16 :goto_3

    .line 452
    .end local v17    # "newFile":Ljava/io/File;
    .end local v18    # "opId":Ljava/lang/String;
    .end local v19    # "lines":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    .end local v21    # "readline":Ljava/lang/String;
    .end local v22    # "sb":Ljava/lang/StringBuffer;
    .local v0, "newFile":Ljava/io/File;
    .restart local v3    # "opId":Ljava/lang/String;
    .restart local v4    # "lines":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    .restart local v10    # "readline":Ljava/lang/String;
    .restart local v13    # "sb":Ljava/lang/StringBuffer;
    :cond_c
    move-object/from16 v17, v0

    move-object/from16 v18, v3

    move-object/from16 v19, v4

    move-object/from16 v21, v10

    move/from16 v25, v11

    move-object/from16 v22, v13

    move-object/from16 v26, v14

    .end local v0    # "newFile":Ljava/io/File;
    .end local v3    # "opId":Ljava/lang/String;
    .end local v4    # "lines":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    .end local v10    # "readline":Ljava/lang/String;
    .end local v11    # "isProfileWrited":Z
    .end local v13    # "sb":Ljava/lang/StringBuffer;
    .end local v14    # "profileStart":Ljava/lang/String;
    .restart local v17    # "newFile":Ljava/io/File;
    .restart local v18    # "opId":Ljava/lang/String;
    .restart local v19    # "lines":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    .restart local v21    # "readline":Ljava/lang/String;
    .restart local v22    # "sb":Ljava/lang/StringBuffer;
    .restart local v25    # "isProfileWrited":Z
    .restart local v26    # "profileStart":Ljava/lang/String;
    const/4 v0, 0x3

    iput v0, v2, Landroid/os/Message;->what:I

    .line 453
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Write success:"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-static {v3}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->access$400(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v7, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_1

    .line 458
    .end local v5    # "bw":Ljava/io/BufferedWriter;
    .end local v12    # "isQualityWrited":Z
    .end local v15    # "qualityStart":Ljava/lang/String;
    .end local v16    # "br":Ljava/io/BufferedReader;
    .end local v17    # "newFile":Ljava/io/File;
    .end local v19    # "lines":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    .end local v21    # "readline":Ljava/lang/String;
    .end local v22    # "sb":Ljava/lang/StringBuffer;
    .end local v25    # "isProfileWrited":Z
    .end local v26    # "profileStart":Ljava/lang/String;
    goto/16 :goto_10

    .line 454
    :catch_1
    move-exception v0

    move-object/from16 v3, v18

    goto :goto_9

    .end local v18    # "opId":Ljava/lang/String;
    .restart local v3    # "opId":Ljava/lang/String;
    :catch_2
    move-exception v0

    move-object/from16 v18, v3

    .line 455
    .local v0, "e":Ljava/lang/Exception;
    :goto_9
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 456
    const/4 v4, 0x2

    iput v4, v2, Landroid/os/Message;->what:I

    .line 457
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Read failed:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-static {v5}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->access$400(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v7, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 460
    .end local v0    # "e":Ljava/lang/Exception;
    goto/16 :goto_10

    .line 362
    :cond_d
    :goto_a
    const/4 v4, 0x2

    iput v4, v2, Landroid/os/Message;->what:I

    goto/16 :goto_10

    .line 312
    .end local v3    # "opId":Ljava/lang/String;
    :cond_e
    iget-object v3, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-static {v3, v9}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->access$402(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;Ljava/lang/String;)Ljava/lang/String;

    .line 315
    :try_start_8
    invoke-static {}, Lorg/xmlpull/v1/XmlPullParserFactory;->newInstance()Lorg/xmlpull/v1/XmlPullParserFactory;

    move-result-object v3

    .line 316
    .local v3, "factory":Lorg/xmlpull/v1/XmlPullParserFactory;
    invoke-virtual {v3, v6}, Lorg/xmlpull/v1/XmlPullParserFactory;->setNamespaceAware(Z)V

    .line 317
    invoke-virtual {v3}, Lorg/xmlpull/v1/XmlPullParserFactory;->newPullParser()Lorg/xmlpull/v1/XmlPullParser;

    move-result-object v8

    .line 318
    .local v8, "parser":Lorg/xmlpull/v1/XmlPullParser;
    const/4 v10, 0x0

    .line 319
    .local v10, "isSupported":Z
    new-instance v11, Ljava/io/File;

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v13, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-virtual {v13}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->getInnerSDCardPath()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v13, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-direct {v11, v12}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 320
    invoke-virtual {v11}, Ljava/io/File;->exists()Z

    move-result v11

    if-eqz v11, :cond_f

    .line 321
    iget-object v0, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v12, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-virtual {v12}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->getInnerSDCardPath()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v12, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v0, v5}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->access$402(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;Ljava/lang/String;)Ljava/lang/String;

    .line 323
    const/4 v10, 0x1

    goto :goto_b

    .line 324
    :cond_f
    new-instance v5, Ljava/io/File;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v12, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-virtual {v12}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->getInnerSDCardPath()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v12, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-direct {v5, v11}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 325
    invoke-virtual {v5}, Ljava/io/File;->exists()Z

    move-result v5

    if-eqz v5, :cond_10

    .line 326
    iget-object v5, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v12, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-virtual {v12}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->getInnerSDCardPath()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v12, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v5, v0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->access$402(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;Ljava/lang/String;)Ljava/lang/String;

    .line 329
    :cond_10
    :goto_b
    iget-object v0, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-static {v0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->access$400(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_11

    .line 330
    new-instance v0, Ljava/io/FileInputStream;

    iget-object v4, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-static {v4}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->access$400(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;)Ljava/lang/String;

    move-result-object v4

    invoke-direct {v0, v4}, Ljava/io/FileInputStream;-><init>(Ljava/lang/String;)V

    .line 331
    .local v0, "fis":Ljava/io/FileInputStream;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Read from"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-static {v5}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->access$400(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v7, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 332
    new-instance v4, Ljava/io/InputStreamReader;

    invoke-direct {v4, v0}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    invoke-interface {v8, v4}, Lorg/xmlpull/v1/XmlPullParser;->setInput(Ljava/io/Reader;)V

    .line 333
    .end local v0    # "fis":Ljava/io/FileInputStream;
    goto :goto_c

    .line 334
    :cond_11
    iget-object v0, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-static {v0, v4}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->access$402(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;Ljava/lang/String;)Ljava/lang/String;

    .line 335
    new-instance v0, Ljava/io/InputStreamReader;

    iget-object v4, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-virtual {v4}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v4

    .line 336
    invoke-virtual {v4}, Landroid/support/v4/app/FragmentActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v4

    invoke-virtual {v4}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v4

    iget-object v5, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    .line 337
    invoke-static {v5}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->access$400(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object v4

    invoke-direct {v0, v4}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    .line 335
    invoke-interface {v8, v0}, Lorg/xmlpull/v1/XmlPullParser;->setInput(Ljava/io/Reader;)V

    .line 338
    const-string v0, "Read from R.xml.vilte_media_profiles_opxx"

    invoke-static {v7, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 341
    :goto_c
    iget-object v0, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-static {v0, v8, v10}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->access$500(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;Lorg/xmlpull/v1/XmlPullParser;Z)Z

    move-result v0

    if-eqz v0, :cond_12

    .line 342
    iput v6, v2, Landroid/os/Message;->what:I
    :try_end_8
    .catch Lorg/xmlpull/v1/XmlPullParserException; {:try_start_8 .. :try_end_8} :catch_7
    .catch Ljava/io/FileNotFoundException; {:try_start_8 .. :try_end_8} :catch_6
    .catch Ljava/io/IOException; {:try_start_8 .. :try_end_8} :catch_5

    goto :goto_d

    .line 344
    :cond_12
    const/4 v4, 0x0

    :try_start_9
    iput v4, v2, Landroid/os/Message;->what:I
    :try_end_9
    .catch Lorg/xmlpull/v1/XmlPullParserException; {:try_start_9 .. :try_end_9} :catch_4
    .catch Ljava/io/FileNotFoundException; {:try_start_9 .. :try_end_9} :catch_3
    .catch Ljava/io/IOException; {:try_start_9 .. :try_end_9} :catch_5

    .line 356
    .end local v8    # "parser":Lorg/xmlpull/v1/XmlPullParser;
    .end local v10    # "isSupported":Z
    :goto_d
    goto :goto_10

    .line 349
    .end local v3    # "factory":Lorg/xmlpull/v1/XmlPullParserFactory;
    :catch_3
    move-exception v0

    move v3, v4

    goto :goto_e

    .line 346
    :catch_4
    move-exception v0

    move v3, v4

    goto :goto_f

    .line 352
    :catch_5
    move-exception v0

    .line 354
    .local v0, "e":Ljava/io/IOException;
    const/4 v3, 0x0

    iput v3, v2, Landroid/os/Message;->what:I

    .line 355
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    .line 357
    .end local v0    # "e":Ljava/io/IOException;
    goto :goto_10

    .line 349
    :catch_6
    move-exception v0

    const/4 v3, 0x0

    .line 350
    .local v0, "e":Ljava/io/FileNotFoundException;
    :goto_e
    iput v3, v2, Landroid/os/Message;->what:I

    .line 351
    invoke-virtual {v0}, Ljava/io/FileNotFoundException;->printStackTrace()V

    .line 356
    .end local v0    # "e":Ljava/io/FileNotFoundException;
    goto :goto_10

    .line 346
    :catch_7
    move-exception v0

    const/4 v3, 0x0

    .line 347
    .local v0, "e":Lorg/xmlpull/v1/XmlPullParserException;
    :goto_f
    iput v3, v2, Landroid/os/Message;->what:I

    .line 348
    invoke-virtual {v0}, Lorg/xmlpull/v1/XmlPullParserException;->printStackTrace()V

    .line 356
    .end local v0    # "e":Lorg/xmlpull/v1/XmlPullParserException;
    nop

    .line 465
    :goto_10
    iget-object v0, v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-static {v0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->access$600(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;)Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 466
    return-void
.end method
