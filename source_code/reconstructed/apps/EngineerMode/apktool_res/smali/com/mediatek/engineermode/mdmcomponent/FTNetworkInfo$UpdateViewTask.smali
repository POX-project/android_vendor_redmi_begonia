.class Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;
.super Landroid/os/AsyncTask;
.source "MDMComponentFT.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "UpdateViewTask"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/os/AsyncTask<",
        "Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;",
        "[",
        "Ljava/lang/Object;",
        "Ljava/lang/Void;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V
    .locals 0

    .line 2603
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;
    .param p2, "x1"    # Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$1;

    .line 2603
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V

    return-void
.end method


# virtual methods
.method protected bridge synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 2603
    check-cast p1, [Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->doInBackground([Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;)Ljava/lang/Void;

    move-result-object p1

    return-object p1
.end method

.method protected varargs doInBackground([Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;)Ljava/lang/Void;
    .locals 21
    .param p1, "params"    # [Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;

    .line 2613
    move-object/from16 v0, p0

    const/4 v1, 0x0

    .line 2660
    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    .line 2613
    aget-object v3, p1, v1

    invoke-virtual {v3}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->getExtraName()Ljava/lang/String;

    move-result-object v3

    .line 2614
    .local v3, "name":Ljava/lang/String;
    aget-object v4, p1, v1

    invoke-virtual {v4}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->getExtraMsg()Ljava/lang/Object;

    move-result-object v4

    .line 2615
    .local v4, "msg":Ljava/lang/Object;
    aget-object v5, p1, v1

    invoke-virtual {v5}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->getExtraSimID()I

    move-result v5

    .line 2616
    .local v5, "simID":I
    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    invoke-static {v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->access$200(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)[Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7, v5, v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getUpdateMap([Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)Ljava/util/HashMap;

    move-result-object v6

    .line 2617
    .local v6, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    invoke-static {v7, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->access$300(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;I)[Ljava/lang/String;

    move-result-object v7

    .line 2618
    .local v7, "networkInfo":[Ljava/lang/String;
    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    invoke-static {v8, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->access$400(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;I)Ljava/util/Set;

    move-result-object v8

    .line 2619
    .local v8, "validLabelSets":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
    new-instance v9, Ljava/util/HashSet;

    invoke-direct {v9}, Ljava/util/HashSet;-><init>()V

    .line 2620
    .local v9, "tempLabels":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
    const/4 v10, 0x0

    .line 2621
    .local v10, "hasValidLabel":Z
    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    invoke-static {v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->access$200(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)[Ljava/lang/String;

    move-result-object v11

    array-length v12, v11

    move v13, v1

    :goto_0
    const-string v14, "EmInfo/MDMComponent"

    const-string v1, "Unknown"

    const/16 v17, 0x2

    if-ge v13, v12, :cond_b

    aget-object v15, v11, v13

    .line 2622
    .local v15, "mLabel":Ljava/lang/String;
    move-object/from16 v19, v3

    .end local v3    # "name":Ljava/lang/String;
    .local v19, "name":Ljava/lang/String;
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    iget-object v3, v3, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mUpdateTaskDriven:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->isDriverDead()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 2623
    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->cancel(Z)Z

    .line 2624
    const-string v1, "Exit doInBackground, Driver dead"

    invoke-static {v14, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 2625
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->taskDone()V

    .line 2626
    const/4 v1, 0x0

    return-object v1

    .line 2628
    :cond_0
    const/4 v3, 0x0

    aget-object v14, v7, v3

    invoke-virtual {v14, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const-string v14, "-"

    move-object/from16 v20, v4

    .end local v4    # "msg":Ljava/lang/Object;
    .local v20, "msg":Ljava/lang/Object;
    if-eqz v3, :cond_5

    const/4 v3, 0x1

    aget-object v4, v7, v3

    .line 2629
    invoke-virtual {v4, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 2630
    invoke-virtual {v6}, Ljava/util/HashMap;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1, v15}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 2631
    invoke-interface {v8, v15}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 2632
    invoke-virtual {v15, v14}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    const/4 v3, 0x0

    aget-object v1, v1, v3

    invoke-interface {v8, v1}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    goto :goto_1

    :cond_1
    const/4 v1, 0x1

    const/4 v14, 0x3

    const/16 v16, 0x0

    goto :goto_2

    .line 2633
    :cond_2
    :goto_1
    const/4 v1, 0x1

    new-array v3, v1, [[Ljava/lang/Object;

    const/4 v4, 0x4

    new-array v4, v4, [Ljava/lang/Object;

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    const/16 v16, 0x0

    aput-object v14, v4, v16

    aput-object v15, v4, v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v14

    aput-object v14, v4, v17

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    const/4 v14, 0x3

    aput-object v1, v4, v14

    aput-object v4, v3, v16

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->publishProgress([Ljava/lang/Object;)V

    .line 2634
    const/4 v1, 0x1

    move v10, v1

    .end local v10    # "hasValidLabel":Z
    .local v1, "hasValidLabel":Z
    goto/16 :goto_8

    .line 2630
    .end local v1    # "hasValidLabel":Z
    .restart local v10    # "hasValidLabel":Z
    :cond_3
    const/4 v1, 0x1

    const/4 v14, 0x3

    const/16 v16, 0x0

    .line 2636
    :goto_2
    new-array v3, v1, [[Ljava/lang/Object;

    new-array v4, v14, [Ljava/lang/Object;

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    aput-object v14, v4, v16

    aput-object v15, v4, v1

    aput-object v2, v4, v17

    aput-object v4, v3, v16

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->publishProgress([Ljava/lang/Object;)V

    .line 2637
    invoke-interface {v9, v15}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    goto/16 :goto_8

    .line 2629
    :cond_4
    const/16 v16, 0x0

    goto :goto_3

    .line 2628
    :cond_5
    const/16 v16, 0x0

    .line 2639
    :goto_3
    aget-object v1, v7, v16

    invoke-virtual {v15, v1}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v1

    if-gez v1, :cond_7

    const/4 v1, 0x1

    aget-object v3, v7, v1

    .line 2640
    invoke-virtual {v15, v3}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v1

    if-ltz v1, :cond_6

    goto :goto_4

    :cond_6
    const/4 v3, 0x0

    goto :goto_5

    .line 2641
    :cond_7
    :goto_4
    invoke-interface {v8, v15}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_9

    .line 2642
    invoke-virtual {v15, v14}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    const/4 v3, 0x0

    aget-object v1, v1, v3

    invoke-interface {v8, v1}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_8

    goto :goto_6

    .line 2650
    :cond_8
    :goto_5
    const/4 v1, 0x1

    new-array v4, v1, [[Ljava/lang/Object;

    const/4 v14, 0x3

    new-array v14, v14, [Ljava/lang/Object;

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v14, v3

    aput-object v15, v14, v1

    aput-object v2, v14, v17

    aput-object v14, v4, v3

    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->publishProgress([Ljava/lang/Object;)V

    .line 2651
    invoke-interface {v9, v15}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    goto :goto_8

    .line 2643
    :cond_9
    :goto_6
    const/4 v1, 0x1

    .line 2644
    .end local v10    # "hasValidLabel":Z
    .restart local v1    # "hasValidLabel":Z
    invoke-virtual {v6}, Ljava/util/HashMap;->keySet()Ljava/util/Set;

    move-result-object v3

    invoke-interface {v3, v15}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_a

    invoke-virtual {v6, v15}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Boolean;

    invoke-virtual {v3}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v3

    if-eqz v3, :cond_a

    .line 2645
    const/4 v3, 0x1

    new-array v4, v3, [[Ljava/lang/Object;

    const/4 v10, 0x4

    new-array v10, v10, [Ljava/lang/Object;

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    const/16 v16, 0x0

    aput-object v14, v10, v16

    aput-object v15, v10, v3

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v14

    aput-object v14, v10, v17

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    const/4 v14, 0x3

    aput-object v3, v10, v14

    aput-object v10, v4, v16

    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->publishProgress([Ljava/lang/Object;)V

    goto :goto_7

    .line 2644
    :cond_a
    const/4 v3, 0x1

    const/16 v16, 0x0

    .line 2647
    new-array v4, v3, [[Ljava/lang/Object;

    const/4 v10, 0x4

    new-array v10, v10, [Ljava/lang/Object;

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    aput-object v14, v10, v16

    aput-object v15, v10, v3

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    aput-object v3, v10, v17

    const/4 v3, 0x3

    aput-object v2, v10, v3

    aput-object v10, v4, v16

    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->publishProgress([Ljava/lang/Object;)V

    .line 2621
    .end local v15    # "mLabel":Ljava/lang/String;
    :goto_7
    move v10, v1

    .end local v1    # "hasValidLabel":Z
    .restart local v10    # "hasValidLabel":Z
    :goto_8
    add-int/lit8 v13, v13, 0x1

    move-object/from16 v3, v19

    move-object/from16 v4, v20

    const/4 v1, 0x0

    goto/16 :goto_0

    .line 2654
    .end local v19    # "name":Ljava/lang/String;
    .end local v20    # "msg":Ljava/lang/Object;
    .restart local v3    # "name":Ljava/lang/String;
    .restart local v4    # "msg":Ljava/lang/Object;
    :cond_b
    move-object/from16 v19, v3

    move-object/from16 v20, v4

    .end local v3    # "name":Ljava/lang/String;
    .end local v4    # "msg":Ljava/lang/Object;
    .restart local v19    # "name":Ljava/lang/String;
    .restart local v20    # "msg":Ljava/lang/Object;
    if-nez v10, :cond_f

    .line 2655
    invoke-interface {v9}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :goto_9
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_f

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 2656
    .local v4, "tempLabel":Ljava/lang/String;
    const/4 v11, 0x0

    aget-object v12, v7, v11

    invoke-virtual {v4, v12}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v12

    if-gez v12, :cond_e

    const/4 v12, 0x1

    aget-object v13, v7, v12

    .line 2657
    invoke-virtual {v4, v13}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v13

    if-gez v13, :cond_e

    aget-object v13, v7, v11

    .line 2658
    invoke-virtual {v13, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-eqz v11, :cond_d

    aget-object v11, v7, v12

    .line 2659
    invoke-virtual {v11, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-eqz v11, :cond_c

    goto :goto_a

    :cond_c
    const/4 v11, 0x1

    const/4 v13, 0x3

    const/16 v16, 0x0

    goto :goto_b

    .line 2658
    :cond_d
    const/4 v11, 0x1

    const/4 v13, 0x3

    const/16 v16, 0x0

    goto :goto_b

    .line 2660
    :cond_e
    :goto_a
    const/4 v11, 0x1

    new-array v12, v11, [[Ljava/lang/Object;

    const/4 v13, 0x3

    new-array v15, v13, [Ljava/lang/Object;

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v18

    const/16 v16, 0x0

    aput-object v18, v15, v16

    aput-object v4, v15, v11

    aput-object v2, v15, v17

    aput-object v15, v12, v16

    invoke-virtual {v0, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->publishProgress([Ljava/lang/Object;)V

    .line 2661
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    const-string v15, "[showView] Sim"

    invoke-virtual {v12, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v15, " has no valid labels, show label:"

    invoke-virtual {v12, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-static {v14, v12}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2664
    .end local v4    # "tempLabel":Ljava/lang/String;
    :goto_b
    goto :goto_9

    .line 2666
    :cond_f
    const/4 v1, 0x0

    return-object v1
.end method

.method protected bridge synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 0

    .line 2603
    check-cast p1, Ljava/lang/Void;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->onPostExecute(Ljava/lang/Void;)V

    return-void
.end method

.method protected onPostExecute(Ljava/lang/Void;)V
    .locals 1
    .param p1, "aVoid"    # Ljava/lang/Void;

    .line 2692
    invoke-super {p0, p1}, Landroid/os/AsyncTask;->onPostExecute(Ljava/lang/Object;)V

    .line 2693
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->taskDone()V

    .line 2694
    return-void
.end method

.method protected onPreExecute()V
    .locals 2

    .line 2607
    invoke-super {p0}, Landroid/os/AsyncTask;->onPreExecute()V

    .line 2608
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->access$200(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)[Ljava/lang/String;

    move-result-object v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initLabels()[Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->access$202(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;[Ljava/lang/String;)[Ljava/lang/String;

    .line 2609
    :cond_0
    return-void
.end method

.method protected bridge synthetic onProgressUpdate([Ljava/lang/Object;)V
    .locals 0

    .line 2603
    check-cast p1, [[Ljava/lang/Object;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->onProgressUpdate([[Ljava/lang/Object;)V

    return-void
.end method

.method protected varargs onProgressUpdate([[Ljava/lang/Object;)V
    .locals 5
    .param p1, "values"    # [[Ljava/lang/Object;

    .line 2671
    invoke-super {p0, p1}, Landroid/os/AsyncTask;->onProgressUpdate([Ljava/lang/Object;)V

    .line 2672
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    iget-object v0, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mUpdateTaskDriven:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->isDriverDead()Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    .line 2673
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->cancel(Z)Z

    .line 2674
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->taskDone()V

    .line 2675
    return-void

    .line 2677
    :cond_0
    const/4 v0, 0x0

    aget-object v2, p1, v0

    aget-object v2, v2, v0

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    .line 2678
    .local v2, "simID":I
    aget-object v3, p1, v0

    aget-object v1, v3, v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 2679
    .local v1, "mLabel":Ljava/lang/String;
    aget-object v3, p1, v0

    const/4 v4, 0x2

    aget-object v3, v3, v4

    check-cast v3, Ljava/lang/Boolean;

    invoke-virtual {v3}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v3

    .line 2680
    .local v3, "updateViewFlag":Z
    if-eqz v3, :cond_1

    .line 2681
    aget-object v0, p1, v0

    const/4 v4, 0x3

    aget-object v0, v0, v4

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    .line 2682
    .local v0, "updateDataFlag":Z
    if-eqz v0, :cond_1

    .line 2683
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    invoke-virtual {v4, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->clearData(Ljava/lang/String;I)V

    .line 2684
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    invoke-virtual {v4, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addData(Ljava/lang/String;I)V

    .line 2687
    .end local v0    # "updateDataFlag":Z
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    invoke-virtual {v0, v1, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->displayView(Ljava/lang/String;IZ)V

    .line 2688
    return-void
.end method
