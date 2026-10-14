.class Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;
.super Landroid/os/AsyncTask;
.source "MDMComponentFT.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "InitViewTask"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/os/AsyncTask<",
        "Ljava/lang/Void;",
        "[",
        "Ljava/lang/String;",
        "Ljava/lang/Void;",
        ">;"
    }
.end annotation


# instance fields
.field startTime:J

.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;)V
    .locals 0

    .line 3400
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;
    .param p2, "x1"    # Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$1;

    .line 3400
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;)V

    return-void
.end method


# virtual methods
.method protected bridge synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 3400
    check-cast p1, [Ljava/lang/Void;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->doInBackground([Ljava/lang/Void;)Ljava/lang/Void;

    move-result-object p1

    return-object p1
.end method

.method protected varargs doInBackground([Ljava/lang/Void;)Ljava/lang/Void;
    .locals 8
    .param p1, "params"    # [Ljava/lang/Void;

    .line 3411
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->getSupportSimCount()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 3412
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->initHashMap(I)V

    .line 3413
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    iget-object v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 3414
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    iget-object v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 3415
    .local v2, "label":Ljava/lang/String;
    const-string v3, "-"

    invoke-virtual {v2, v3}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v4

    array-length v4, v4

    const/4 v5, 0x1

    if-le v4, v5, :cond_0

    .line 3416
    invoke-virtual {v2, v3}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v3

    aget-object v3, v3, v5

    const-string v4, "."

    invoke-virtual {v3, v4}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v3

    if-gez v3, :cond_0

    .line 3417
    new-array v3, v5, [[Ljava/lang/String;

    const/4 v4, 0x2

    new-array v4, v4, [Ljava/lang/String;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, ""

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    const/4 v7, 0x0

    aput-object v6, v4, v7

    aput-object v2, v4, v5

    aput-object v4, v3, v7

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->publishProgress([Ljava/lang/Object;)V

    .line 3419
    .end local v2    # "label":Ljava/lang/String;
    :cond_0
    goto :goto_1

    .line 3411
    :cond_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 3422
    .end local v0    # "i":I
    :cond_2
    const/4 v0, 0x0

    return-object v0
.end method

.method protected bridge synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 0

    .line 3400
    check-cast p1, Ljava/lang/Void;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->onPostExecute(Ljava/lang/Void;)V

    return-void
.end method

.method protected onPostExecute(Ljava/lang/Void;)V
    .locals 5
    .param p1, "aVoid"    # Ljava/lang/Void;

    .line 3447
    invoke-super {p0, p1}, Landroid/os/AsyncTask;->onPostExecute(Ljava/lang/Object;)V

    .line 3448
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    iget-object v0, v0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->mUpdateTaskDriven:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->access$000(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;I)V

    .line 3449
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->taskDone()V

    .line 3450
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "InitViewTask cost: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->startTime:J

    sub-long/2addr v1, v3

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, "ms"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "EmInfo/MDMComponent"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 3451
    return-void
.end method

.method protected onPreExecute()V
    .locals 2

    .line 3405
    invoke-super {p0}, Landroid/os/AsyncTask;->onPreExecute()V

    .line 3406
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->startTime:J

    .line 3407
    return-void
.end method

.method protected bridge synthetic onProgressUpdate([Ljava/lang/Object;)V
    .locals 0

    .line 3400
    check-cast p1, [[Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->onProgressUpdate([[Ljava/lang/String;)V

    return-void
.end method

.method protected varargs onProgressUpdate([[Ljava/lang/String;)V
    .locals 5
    .param p1, "values"    # [[Ljava/lang/String;

    .line 3427
    invoke-super {p0, p1}, Landroid/os/AsyncTask;->onProgressUpdate([Ljava/lang/Object;)V

    .line 3428
    const/4 v0, 0x0

    aget-object v1, p1, v0

    aget-object v1, v1, v0

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    .line 3429
    .local v1, "index":I
    aget-object v0, p1, v0

    const/4 v2, 0x1

    aget-object v0, v0, v2

    .line 3430
    .local v0, "label":Ljava/lang/String;
    const-string v3, "-"

    invoke-virtual {v0, v3}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v4

    array-length v4, v4

    if-le v4, v2, :cond_0

    invoke-virtual {v0, v3}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v3

    aget-object v2, v3, v2

    const-string v3, "."

    invoke-virtual {v2, v3}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v2

    if-gez v2, :cond_0

    .line 3431
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    iget-object v2, v2, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/HashMap;

    invoke-virtual {v2, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->showTitle()V

    .line 3432
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    iget-object v2, v2, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/HashMap;

    invoke-virtual {v2, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "SIM"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v4, v1, 0x1

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, ":"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->setTextContent(Ljava/lang/String;)V

    .line 3434
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    invoke-virtual {v2, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->setHmapAdapterByLabel(Ljava/lang/String;I)V

    .line 3435
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    iget-object v2, v2, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/HashMap;

    invoke-virtual {v2, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    iget-object v3, v3, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v3, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/HashMap;

    invoke-virtual {v3, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/widget/ListAdapter;

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 3436
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    iget-object v2, v2, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/HashMap;

    invoke-virtual {v2, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->notifyDataSetChanged()V

    .line 3437
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    iget-object v2, v2, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/HashMap;

    invoke-virtual {v2, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->setListViewHeightBasedOnChildren()V

    .line 3438
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    iget-object v2, v2, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/HashMap;

    invoke-virtual {v2, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 3439
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    iget-object v2, v2, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/HashMap;

    invoke-virtual {v2, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    check-cast v2, Landroid/view/ViewGroup;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    iget-object v3, v3, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapViewList:Ljava/util/List;

    .line 3440
    invoke-interface {v3, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/HashMap;

    invoke-virtual {v3, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/view/View;

    .line 3439
    invoke-virtual {v2, v3}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 3442
    :cond_1
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    iget-object v3, v2, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->layout:Landroid/widget/LinearLayout;

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    iget-object v4, v4, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v4, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/HashMap;

    invoke-virtual {v4, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/view/View;

    invoke-virtual {v2, v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->safeAddView(Landroid/view/ViewGroup;Landroid/view/View;)V

    .line 3443
    return-void
.end method
