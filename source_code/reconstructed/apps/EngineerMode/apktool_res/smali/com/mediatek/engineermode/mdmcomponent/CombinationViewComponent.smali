.class abstract Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;
.super Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;
.source "MDMComponentFT.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;,
        Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;,
        Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;
    }
.end annotation


# static fields
.field private static final SHOW_SIM_ALL:I = -0x1

.field private static final SHOW_SIM_ONE:I = 0x0

.field private static final SHOW_SIM_TWO:I = 0x1


# instance fields
.field commonInfoAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

.field commonView:Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

.field private currentSimID:I

.field hmapAdapterList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;",
            ">;>;"
        }
    .end annotation
.end field

.field hmapLabelsList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/util/LinkedHashMap;",
            ">;>;"
        }
    .end annotation
.end field

.field hmapViewList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;",
            ">;>;"
        }
    .end annotation
.end field

.field imsi:[Ljava/lang/String;

.field layout:Landroid/widget/LinearLayout;

.field location:Ljava/lang/String;

.field mContext:Landroid/app/Activity;

.field mHandlerThread:Landroid/os/HandlerThread;

.field mUpdateTaskDriven:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;

.field scrollView:Landroid/widget/ScrollView;

.field private supportSimCount:I


# direct methods
.method public constructor <init>(Landroid/app/Activity;I)V
    .locals 5
    .param p1, "context"    # Landroid/app/Activity;
    .param p2, "simCount"    # I

    .line 2889
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;-><init>(Landroid/app/Activity;)V

    .line 2861
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->currentSimID:I

    .line 2862
    const/4 v0, 0x2

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->supportSimCount:I

    .line 2863
    const/4 v1, 0x0

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    .line 2864
    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapViewList:Ljava/util/List;

    .line 2865
    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapAdapterList:Ljava/util/List;

    .line 2890
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->mContext:Landroid/app/Activity;

    .line 2891
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    invoke-direct {v1, p1}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;-><init>(Landroid/app/Activity;)V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->commonView:Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    .line 2892
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-direct {v1, p1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;-><init>(Landroid/app/Activity;)V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->commonInfoAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    .line 2893
    iput p2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->supportSimCount:I

    .line 2894
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->getSupportSimCount()I

    move-result v1

    new-array v1, v1, [Ljava/lang/String;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->imsi:[Ljava/lang/String;

    .line 2896
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->scrollView:Landroid/widget/ScrollView;

    const/4 v2, -0x1

    if-nez v1, :cond_0

    .line 2897
    new-instance v1, Landroid/widget/ScrollView;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->mContext:Landroid/app/Activity;

    invoke-direct {v1, v3}, Landroid/widget/ScrollView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->scrollView:Landroid/widget/ScrollView;

    .line 2898
    new-instance v3, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v3, v2, v2}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {v1, v3}, Landroid/widget/ScrollView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 2901
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->layout:Landroid/widget/LinearLayout;

    if-nez v1, :cond_1

    .line 2902
    new-instance v1, Landroid/widget/LinearLayout;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->mContext:Landroid/app/Activity;

    invoke-direct {v1, v3}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->layout:Landroid/widget/LinearLayout;

    .line 2903
    const/4 v3, 0x1

    invoke-virtual {v1, v3}, Landroid/widget/LinearLayout;->setOrientation(I)V

    .line 2904
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->layout:Landroid/widget/LinearLayout;

    new-instance v3, Landroid/view/ViewGroup$LayoutParams;

    const/4 v4, -0x2

    invoke-direct {v3, v2, v4}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {v1, v3}, Landroid/widget/LinearLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 2907
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    if-nez v1, :cond_2

    .line 2908
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    .line 2909
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapViewList:Ljava/util/List;

    .line 2910
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapAdapterList:Ljava/util/List;

    .line 2911
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->getSupportSimCount()I

    move-result v2

    if-ge v1, v2, :cond_2

    .line 2912
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    new-instance v3, Ljava/util/LinkedHashMap;

    invoke-direct {v3}, Ljava/util/LinkedHashMap;-><init>()V

    invoke-interface {v2, v1, v3}, Ljava/util/List;->add(ILjava/lang/Object;)V

    .line 2913
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapViewList:Ljava/util/List;

    new-instance v3, Ljava/util/HashMap;

    invoke-direct {v3}, Ljava/util/HashMap;-><init>()V

    invoke-interface {v2, v1, v3}, Ljava/util/List;->add(ILjava/lang/Object;)V

    .line 2914
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapAdapterList:Ljava/util/List;

    new-instance v3, Ljava/util/HashMap;

    invoke-direct {v3}, Ljava/util/HashMap;-><init>()V

    invoke-interface {v2, v1, v3}, Ljava/util/List;->add(ILjava/lang/Object;)V

    .line 2911
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 2917
    .end local v1    # "i":I
    :cond_2
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->mHandlerThread:Landroid/os/HandlerThread;

    if-nez v1, :cond_3

    .line 2918
    new-instance v0, Landroid/os/HandlerThread;

    const-string v1, "MtkMdmViewManager"

    invoke-direct {v0, v1}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->mHandlerThread:Landroid/os/HandlerThread;

    .line 2919
    invoke-virtual {v0}, Landroid/os/HandlerThread;->start()V

    .line 2920
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->mHandlerThread:Landroid/os/HandlerThread;

    invoke-virtual {v0}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v0

    .line 2921
    .local v0, "looper":Landroid/os/Looper;
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;

    invoke-direct {v1, p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;Landroid/os/Looper;)V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->mUpdateTaskDriven:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;

    .line 2922
    .end local v0    # "looper":Landroid/os/Looper;
    goto :goto_1

    .line 2923
    :cond_3
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->mUpdateTaskDriven:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->access$000(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;I)V

    .line 2925
    :goto_1
    return-void
.end method

.method private taskStart()V
    .locals 3

    .line 2940
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;I)V

    .line 2941
    .local v0, "startTask":Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->mUpdateTaskDriven:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;

    const/4 v2, 0x2

    invoke-virtual {v1, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->addFirstTask(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;I)V

    .line 2942
    return-void
.end method


# virtual methods
.method addData(Ljava/lang/String;I)V
    .locals 2
    .param p1, "label"    # Ljava/lang/String;
    .param p2, "simID"    # I

    .line 3538
    invoke-virtual {p0, p2}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->isValidSimID(I)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 3539
    invoke-virtual {p0, p1, p2}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->setHmapAdapterByLabel(Ljava/lang/String;I)V

    .line 3540
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/HashMap;

    invoke-virtual {v1, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/widget/ListAdapter;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 3541
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->notifyDataSetChanged()V

    .line 3542
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->setListViewHeightBasedOnChildren()V

    .line 3544
    :cond_0
    return-void
.end method

.method addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V
    .locals 6
    .param p1, "label"    # Ljava/lang/String;
    .param p2, "simID"    # I
    .param p3, "key"    # Ljava/lang/String;
    .param p4, "value"    # Ljava/lang/Object;

    .line 3338
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->isLabelArrayType(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 3339
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p3}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 3340
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p3}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Ljava/lang/String;

    goto :goto_0

    :cond_0
    new-array v0, v1, [Ljava/lang/String;

    .line 3341
    .local v0, "oldValue":[Ljava/lang/String;
    :goto_0
    instance-of v2, p4, [Ljava/lang/String;

    if-eqz v2, :cond_1

    .line 3342
    move-object v2, p4

    check-cast v2, [Ljava/lang/String;

    goto :goto_1

    :cond_1
    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/String;

    invoke-virtual {p4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v2, v1

    .line 3343
    .local v2, "setValue":[Ljava/lang/String;
    :goto_1
    array-length v3, v0

    array-length v4, v2

    add-int/2addr v3, v4

    new-array v3, v3, [Ljava/lang/String;

    .line 3344
    .local v3, "newValue":[Ljava/lang/String;
    array-length v4, v0

    invoke-static {v0, v1, v3, v1, v4}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 3345
    array-length v4, v0

    array-length v5, v2

    invoke-static {v2, v1, v3, v4, v5}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 3346
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1, p3, v3}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3347
    .end local v0    # "oldValue":[Ljava/lang/String;
    .end local v2    # "setValue":[Ljava/lang/String;
    .end local v3    # "newValue":[Ljava/lang/String;
    goto :goto_2

    .line 3348
    :cond_2
    invoke-virtual {p0, p1, p2, p3, p4}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 3350
    :goto_2
    return-void
.end method

.method addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V
    .locals 4
    .param p1, "Label"    # Ljava/lang/String;
    .param p2, "simID"    # I
    .param p3, "values"    # [Ljava/lang/String;

    .line 3377
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->size()I

    move-result v0

    new-array v0, v0, [Ljava/lang/String;

    .line 3378
    .local v0, "keys":[Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1, v0}, Ljava/util/Set;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    .line 3379
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, v0

    if-ge v1, v2, :cond_0

    .line 3380
    aget-object v2, v0, v1

    aget-object v3, p3, v1

    invoke-virtual {p0, p1, p2, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 3379
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 3382
    .end local v1    # "i":I
    :cond_0
    return-void
.end method

.method clearData(Ljava/lang/String;I)V
    .locals 2
    .param p1, "key"    # Ljava/lang/String;
    .param p2, "simID"    # I

    .line 3495
    invoke-virtual {p0, p2}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->isValidSimID(I)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 3496
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 3497
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->clear()V

    goto :goto_1

    .line 3500
    :cond_0
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 3501
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/HashMap;

    invoke-virtual {v1, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 3502
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/HashMap;

    invoke-virtual {v1, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->clear()V

    .line 3500
    :cond_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 3506
    .end local v0    # "i":I
    :cond_2
    :goto_1
    return-void
.end method

.method clearViewData(I)V
    .locals 2
    .param p1, "SimID"    # I

    .line 3250
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->isValidSimID(I)Z

    move-result v0

    if-nez v0, :cond_2

    .line 3251
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->getSupportSimCount()I

    move-result v1

    if-ge v0, v1, :cond_1

    .line 3252
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-le v1, v0, :cond_0

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 3253
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->clear()V

    .line 3254
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->clear()V

    .line 3255
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->clear()V

    .line 3251
    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .end local v0    # "i":I
    :cond_1
    goto :goto_1

    .line 3259
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 3260
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->clear()V

    .line 3261
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->clear()V

    .line 3262
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->clear()V

    .line 3265
    :cond_3
    :goto_1
    return-void
.end method

.method displayView(Ljava/lang/String;IZ)V
    .locals 2
    .param p1, "label"    # Ljava/lang/String;
    .param p2, "simID"    # I
    .param p3, "isShow"    # Z

    .line 3509
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->mUpdateTaskDriven:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->isDriverDead()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 3510
    const-string v0, "EmInfo/MDMComponent"

    const-string v1, "Exit displayView, Driver dead"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 3511
    return-void

    .line 3513
    :cond_0
    invoke-virtual {p0, p2}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->isValidSimID(I)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 3514
    if-eqz p3, :cond_2

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->getCurrentSimID()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->isValidSimID(I)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->getCurrentSimID()I

    move-result v0

    if-ne v0, p2, :cond_2

    .line 3515
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->showView()V

    goto :goto_2

    .line 3517
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->hideView()V

    goto :goto_2

    .line 3520
    :cond_3
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->getSupportSimCount()I

    move-result v1

    if-ge v0, v1, :cond_5

    .line 3521
    if-eqz p3, :cond_4

    .line 3522
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/HashMap;

    invoke-virtual {v1, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->showView()V

    goto :goto_1

    .line 3524
    :cond_4
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/HashMap;

    invoke-virtual {v1, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->hideView()V

    .line 3520
    :goto_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 3528
    .end local v0    # "i":I
    :cond_5
    :goto_2
    return-void
.end method

.method public getCurrentSimID()I
    .locals 1

    .line 2881
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->currentSimID:I

    return v0
.end method

.method getHashMapLabels()Ljava/util/LinkedHashMap;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/util/LinkedHashMap;",
            ">;"
        }
    .end annotation

    .line 3297
    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    .line 3299
    .local v0, "hashMapkeyValues":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/util/LinkedHashMap;>;"
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->size()I

    move-result v1

    if-nez v1, :cond_0

    .line 3300
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->initHashMapValues()Ljava/util/ArrayList;

    move-result-object v1

    .line 3301
    .local v1, "hashMapValues":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/util/LinkedHashMap;>;"
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->initLabels()[Ljava/lang/String;

    move-result-object v2

    .line 3302
    .local v2, "labelKeys":[Ljava/lang/String;
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    array-length v4, v2

    if-ge v3, v4, :cond_0

    .line 3303
    aget-object v4, v2, v3

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, v4, v5}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3302
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 3306
    .end local v1    # "hashMapValues":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/util/LinkedHashMap;>;"
    .end local v2    # "labelKeys":[Ljava/lang/String;
    .end local v3    # "i":I
    :cond_0
    return-object v0
.end method

.method public getSupportSimCount()I
    .locals 1

    .line 2877
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->supportSimCount:I

    return v0
.end method

.method getView()Landroid/view/View;
    .locals 5

    .line 3386
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 3387
    .local v0, "startTime":J
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->registeListener()V

    .line 3388
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->scrollView:Landroid/widget/ScrollView;

    invoke-virtual {v2}, Landroid/widget/ScrollView;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 3389
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->scrollView:Landroid/widget/ScrollView;

    invoke-virtual {v2}, Landroid/widget/ScrollView;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    check-cast v2, Landroid/view/ViewGroup;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->scrollView:Landroid/widget/ScrollView;

    invoke-virtual {v2, v3}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 3390
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->scrollView:Landroid/widget/ScrollView;

    invoke-virtual {v2}, Landroid/widget/ScrollView;->getChildCount()I

    move-result v2

    if-lez v2, :cond_1

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->scrollView:Landroid/widget/ScrollView;

    invoke-virtual {v2}, Landroid/widget/ScrollView;->removeAllViews()V

    .line 3391
    :cond_1
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->layout:Landroid/widget/LinearLayout;

    invoke-virtual {v2}, Landroid/widget/LinearLayout;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->layout:Landroid/widget/LinearLayout;

    invoke-virtual {v2}, Landroid/widget/LinearLayout;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    check-cast v2, Landroid/view/ViewGroup;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->layout:Landroid/widget/LinearLayout;

    invoke-virtual {v2, v3}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 3392
    :cond_2
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->scrollView:Landroid/widget/ScrollView;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->layout:Landroid/widget/LinearLayout;

    invoke-virtual {p0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->safeAddView(Landroid/view/ViewGroup;Landroid/view/View;)V

    .line 3393
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->getCurrentSimID()I

    move-result v2

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->updateCommonView(I)V

    .line 3394
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->layout:Landroid/widget/LinearLayout;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->commonView:Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    invoke-virtual {p0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->safeAddView(Landroid/view/ViewGroup;Landroid/view/View;)V

    .line 3395
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->taskStart()V

    .line 3396
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "getView done! cost: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    sub-long/2addr v3, v0

    invoke-virtual {v2, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v3, "ms"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "EmInfo/MDMComponent"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 3397
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->scrollView:Landroid/widget/ScrollView;

    return-object v2
.end method

.method initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;
    .locals 4
    .param p1, "keys"    # [Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([",
            "Ljava/lang/Object;",
            ")",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 3288
    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    .line 3289
    .local v0, "hashMapObj":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/lang/String;>;"
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, p1

    if-ge v1, v2, :cond_0

    .line 3290
    aget-object v2, p1, v1

    check-cast v2, Ljava/lang/String;

    const/4 v3, 0x0

    invoke-virtual {v0, v2, v3}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3289
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 3292
    .end local v1    # "i":I
    :cond_0
    return-object v0
.end method

.method initHashMap(I)V
    .locals 2
    .param p1, "simID"    # I

    .line 3268
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->isValidSimID(I)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 3269
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->initHashMapByID(I)V

    goto :goto_1

    .line 3271
    :cond_0
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->getSupportSimCount()I

    move-result v1

    if-ge v0, v1, :cond_1

    .line 3272
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->initHashMapByID(I)V

    .line 3271
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 3275
    .end local v0    # "i":I
    :cond_1
    :goto_1
    return-void
.end method

.method initHashMapByID(I)V
    .locals 5
    .param p1, "id"    # I

    .line 3278
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-ge p1, v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 3279
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->getHashMapLabels()Ljava/util/LinkedHashMap;

    move-result-object v1

    invoke-interface {v0, p1, v1}, Ljava/util/List;->set(ILjava/lang/Object;)Ljava/lang/Object;

    .line 3280
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 3281
    .local v1, "key":Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v2, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/HashMap;

    new-instance v3, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->mContext:Landroid/app/Activity;

    invoke-direct {v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;-><init>(Landroid/app/Activity;)V

    invoke-virtual {v2, v1, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3282
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v2, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/HashMap;

    new-instance v3, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->mContext:Landroid/app/Activity;

    invoke-direct {v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;-><init>(Landroid/app/Activity;)V

    invoke-virtual {v2, v1, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3283
    .end local v1    # "key":Ljava/lang/String;
    goto :goto_0

    .line 3285
    :cond_0
    return-void
.end method

.method abstract initHashMapValues()Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/util/LinkedHashMap;",
            ">;"
        }
    .end annotation
.end method

.method abstract initLabels()[Ljava/lang/String;
.end method

.method abstract isLabelArrayType(Ljava/lang/String;)Z
.end method

.method isValidSimID(I)Z
    .locals 1
    .param p1, "simID"    # I

    .line 3531
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->getSupportSimCount()I

    move-result v0

    if-ge p1, v0, :cond_0

    if-ltz p1, :cond_0

    .line 3532
    const/4 v0, 0x1

    return v0

    .line 3534
    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method abstract registeListener()V
.end method

.method removeView()V
    .locals 1

    .line 3485
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->unRegisteListener()V

    .line 3486
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->layout:Landroid/widget/LinearLayout;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/widget/LinearLayout;->getChildCount()I

    move-result v0

    if-lez v0, :cond_0

    .line 3487
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->layout:Landroid/widget/LinearLayout;

    invoke-virtual {v0}, Landroid/widget/LinearLayout;->removeAllViews()V

    .line 3488
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->scrollView:Landroid/widget/ScrollView;

    invoke-virtual {v0}, Landroid/widget/ScrollView;->removeAllViews()V

    .line 3490
    :cond_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->taskStop()V

    .line 3492
    return-void
.end method

.method resetHashMapKeyValues(Ljava/lang/String;I)V
    .locals 3
    .param p1, "Label"    # Ljava/lang/String;
    .param p2, "simID"    # I

    .line 3310
    invoke-virtual {p0, p2}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->isValidSimID(I)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 3311
    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    .line 3312
    .local v0, "map":Ljava/util/LinkedHashMap;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->toArray()[Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v0

    .line 3313
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->clear()V

    .line 3314
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1, v0}, Ljava/util/LinkedHashMap;->putAll(Ljava/util/Map;)V

    .line 3315
    .end local v0    # "map":Ljava/util/LinkedHashMap;
    goto :goto_1

    .line 3316
    :cond_0
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->getSupportSimCount()I

    move-result v1

    if-ge v0, v1, :cond_1

    .line 3317
    new-instance v1, Ljava/util/LinkedHashMap;

    invoke-direct {v1}, Ljava/util/LinkedHashMap;-><init>()V

    .line 3318
    .local v1, "map":Ljava/util/LinkedHashMap;
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v2, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/LinkedHashMap;

    invoke-virtual {v2, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/LinkedHashMap;

    invoke-virtual {v2}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/Set;->toArray()[Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v1

    .line 3319
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v2, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/LinkedHashMap;

    invoke-virtual {v2, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/LinkedHashMap;

    invoke-virtual {v2}, Ljava/util/LinkedHashMap;->clear()V

    .line 3320
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v2, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/LinkedHashMap;

    invoke-virtual {v2, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/LinkedHashMap;

    invoke-virtual {v2, v1}, Ljava/util/LinkedHashMap;->putAll(Ljava/util/Map;)V

    .line 3316
    .end local v1    # "map":Ljava/util/LinkedHashMap;
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 3323
    .end local v0    # "i":I
    :cond_1
    :goto_1
    return-void
.end method

.method public safeAddView(Landroid/view/ViewGroup;Landroid/view/View;)V
    .locals 1
    .param p1, "parent"    # Landroid/view/ViewGroup;
    .param p2, "view"    # Landroid/view/View;

    .line 3478
    invoke-virtual {p2}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p2}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    invoke-virtual {v0, p2}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 3479
    :cond_0
    invoke-virtual {p1, p2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    .line 3480
    return-void
.end method

.method public setCurrentSimID(I)V
    .locals 0
    .param p1, "currentSimID"    # I

    .line 2885
    iput p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->currentSimID:I

    .line 2886
    return-void
.end method

.method setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V
    .locals 4
    .param p1, "label"    # Ljava/lang/String;
    .param p2, "simID"    # I
    .param p3, "key"    # Ljava/lang/String;
    .param p4, "value"    # Ljava/lang/Object;

    .line 3326
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->isLabelArrayType(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 3327
    instance-of v0, p4, [Ljava/lang/String;

    if-eqz v0, :cond_0

    .line 3328
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    move-object v1, p4

    check-cast v1, [Ljava/lang/String;

    invoke-virtual {v0, p3, v1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 3330
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/String;

    const/4 v2, 0x0

    invoke-virtual {p4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, v2

    invoke-virtual {v0, p3, v1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 3333
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-static {p4}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, p3, v1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3335
    :goto_0
    return-void
.end method

.method setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V
    .locals 1
    .param p1, "Label"    # Ljava/lang/String;
    .param p2, "simID"    # I
    .param p3, "key"    # Ljava/lang/String;
    .param p4, "values"    # [Ljava/lang/String;

    .line 3369
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->isLabelArrayType(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 3370
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p3, p4}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 3372
    :cond_0
    invoke-virtual {p0, p1, p2, p4}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->setHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 3374
    :goto_0
    return-void
.end method

.method setHashMapKeyValues(Ljava/lang/String;ILjava/util/LinkedHashMap;)V
    .locals 1
    .param p1, "Label"    # Ljava/lang/String;
    .param p2, "simID"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "I",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 3353
    .local p3, "keyValues":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/lang/String;>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p1, p3}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3354
    return-void
.end method

.method setHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V
    .locals 4
    .param p1, "Label"    # Ljava/lang/String;
    .param p2, "simID"    # I
    .param p3, "values"    # [Ljava/lang/String;

    .line 3357
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->size()I

    move-result v0

    new-array v0, v0, [Ljava/lang/String;

    .line 3358
    .local v0, "keys":[Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1, v0}, Ljava/util/Set;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    .line 3359
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, v0

    if-ge v1, v2, :cond_1

    .line 3360
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->isLabelArrayType(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 3361
    aget-object v2, v0, v1

    aget-object v3, p3, v1

    invoke-virtual {p0, p1, p2, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    goto :goto_1

    .line 3363
    :cond_0
    aget-object v2, v0, v1

    aget-object v3, p3, v1

    invoke-virtual {p0, p1, p2, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 3359
    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 3366
    .end local v1    # "i":I
    :cond_1
    return-void
.end method

.method setHmapAdapter(I)V
    .locals 3
    .param p1, "simID"    # I

    .line 3547
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 3548
    .local v1, "label":Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v2, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/HashMap;

    invoke-virtual {v2, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->getCount()I

    move-result v2

    if-nez v2, :cond_0

    .line 3549
    invoke-virtual {p0, v1, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->setHmapAdapterByLabel(Ljava/lang/String;I)V

    .line 3551
    .end local v1    # "label":Ljava/lang/String;
    :cond_0
    goto :goto_0

    .line 3552
    :cond_1
    return-void
.end method

.method setHmapAdapterByLabel(Ljava/lang/String;I)V
    .locals 10
    .param p1, "label"    # Ljava/lang/String;
    .param p2, "simID"    # I

    .line 3555
    invoke-virtual {p0, p2}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->isValidSimID(I)Z

    move-result v0

    if-eqz v0, :cond_d

    .line 3556
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->clear()V

    .line 3557
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->size()I

    move-result v0

    new-array v0, v0, [Ljava/lang/String;

    .line 3558
    .local v0, "keys":[Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1, v0}, Ljava/util/Set;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    .line 3559
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->isLabelArrayType(Ljava/lang/String;)Z

    move-result v1

    const-string v2, ""

    if-eqz v1, :cond_8

    .line 3560
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    .line 3561
    .local v1, "arrayValuesMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/String;>;"
    const/4 v3, 0x0

    .line 3562
    .local v3, "length":I
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v4, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/HashMap;

    invoke-virtual {v4, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v4, v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 3563
    const/4 v4, 0x0

    .local v4, "i":I
    :goto_0
    array-length v5, v0

    if-ge v4, v5, :cond_2

    .line 3564
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v5, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/util/LinkedHashMap;

    invoke-virtual {v5, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/util/LinkedHashMap;

    aget-object v6, v0, v4

    invoke-virtual {v5, v6}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    if-nez v5, :cond_0

    .line 3565
    aget-object v5, v0, v4

    filled-new-array {v2}, [Ljava/lang/String;

    move-result-object v6

    invoke-interface {v1, v5, v6}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_2

    .line 3567
    :cond_0
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    .line 3568
    invoke-interface {v5, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/util/LinkedHashMap;

    invoke-virtual {v5, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/util/LinkedHashMap;

    aget-object v6, v0, v4

    invoke-virtual {v5, v6}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, [Ljava/lang/Object;

    .line 3569
    .local v5, "values":[Ljava/lang/Object;
    array-length v6, v5

    if-ge v3, v6, :cond_1

    array-length v6, v5

    goto :goto_1

    :cond_1
    move v6, v3

    :goto_1
    move v3, v6

    .line 3570
    aget-object v6, v0, v4

    move-object v7, v5

    check-cast v7, [Ljava/lang/String;

    invoke-interface {v1, v6, v7}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3563
    .end local v5    # "values":[Ljava/lang/Object;
    :goto_2
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 3573
    .end local v4    # "i":I
    :cond_2
    const/4 v4, 0x0

    .restart local v4    # "i":I
    :goto_3
    if-ge v4, v3, :cond_7

    .line 3574
    array-length v5, v0

    new-array v5, v5, [Ljava/lang/String;

    .line 3575
    .local v5, "arrayValue":[Ljava/lang/String;
    const/4 v6, 0x0

    .line 3576
    .local v6, "valid":Z
    const/4 v7, 0x0

    .local v7, "j":I
    :goto_4
    array-length v8, v0

    if-ge v7, v8, :cond_5

    .line 3577
    aget-object v8, v0, v7

    invoke-interface {v1, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    if-eqz v8, :cond_3

    aget-object v8, v0, v7

    .line 3578
    invoke-interface {v1, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, [Ljava/lang/String;

    array-length v8, v8

    if-ge v4, v8, :cond_3

    .line 3579
    aget-object v8, v0, v7

    invoke-interface {v1, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, [Ljava/lang/String;

    aget-object v8, v8, v4

    goto :goto_5

    :cond_3
    move-object v8, v2

    :goto_5
    aput-object v8, v5, v7

    .line 3580
    aget-object v8, v5, v7

    if-eqz v8, :cond_4

    aget-object v8, v5, v7

    invoke-virtual {v8, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-nez v8, :cond_4

    const/4 v6, 0x1

    .line 3576
    :cond_4
    add-int/lit8 v7, v7, 0x1

    goto :goto_4

    .line 3582
    .end local v7    # "j":I
    :cond_5
    if-eqz v6, :cond_6

    .line 3583
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v7, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/util/HashMap;

    invoke-virtual {v7, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v7, v5}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 3584
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "[setHmapAdapter][ArrayType] label: "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, " ,values: "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 3585
    invoke-static {v5}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    .line 3584
    const-string v8, "EmInfo/MDMComponent"

    invoke-static {v8, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 3573
    .end local v5    # "arrayValue":[Ljava/lang/String;
    .end local v6    # "valid":Z
    :cond_6
    add-int/lit8 v4, v4, 0x1

    goto :goto_3

    .line 3588
    .end local v1    # "arrayValuesMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/String;>;"
    .end local v3    # "length":I
    .end local v4    # "i":I
    :cond_7
    goto/16 :goto_b

    .line 3589
    :cond_8
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_6
    array-length v3, v0

    if-ge v1, v3, :cond_d

    .line 3590
    add-int/lit8 v3, v1, 0x1

    array-length v4, v0

    const/4 v5, 0x3

    const/4 v6, 0x0

    const/4 v7, 0x4

    const/4 v8, 0x2

    const/4 v9, 0x1

    if-ge v3, v4, :cond_b

    .line 3591
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v3, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/HashMap;

    invoke-virtual {v3, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    new-array v4, v7, [Ljava/lang/String;

    aget-object v7, v0, v1

    aput-object v7, v4, v6

    .line 3593
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v6, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/util/LinkedHashMap;

    invoke-virtual {v6, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/util/LinkedHashMap;

    aget-object v7, v0, v1

    invoke-virtual {v6, v7}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    if-nez v6, :cond_9

    .line 3594
    move-object v6, v2

    goto :goto_7

    :cond_9
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v6, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/util/LinkedHashMap;

    invoke-virtual {v6, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/util/LinkedHashMap;

    aget-object v7, v0, v1

    invoke-virtual {v6, v7}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    :goto_7
    check-cast v6, Ljava/lang/String;

    aput-object v6, v4, v9

    add-int/lit8 v6, v1, 0x1

    aget-object v6, v0, v6

    aput-object v6, v4, v8

    .line 3596
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v6, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/util/LinkedHashMap;

    invoke-virtual {v6, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/util/LinkedHashMap;

    add-int/lit8 v7, v1, 0x1

    aget-object v7, v0, v7

    invoke-virtual {v6, v7}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    if-nez v6, :cond_a

    .line 3597
    move-object v6, v2

    goto :goto_8

    :cond_a
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v6, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/util/LinkedHashMap;

    invoke-virtual {v6, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/util/LinkedHashMap;

    add-int/lit8 v7, v1, 0x1

    aget-object v7, v0, v7

    invoke-virtual {v6, v7}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    :goto_8
    check-cast v6, Ljava/lang/String;

    aput-object v6, v4, v5

    .line 3591
    invoke-virtual {v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    goto :goto_a

    .line 3599
    :cond_b
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v3, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/HashMap;

    invoke-virtual {v3, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    new-array v4, v7, [Ljava/lang/String;

    aget-object v7, v0, v1

    aput-object v7, v4, v6

    .line 3601
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v6, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/util/LinkedHashMap;

    invoke-virtual {v6, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/util/LinkedHashMap;

    aget-object v7, v0, v1

    invoke-virtual {v6, v7}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    if-nez v6, :cond_c

    .line 3602
    move-object v6, v2

    goto :goto_9

    :cond_c
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v6, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/util/LinkedHashMap;

    invoke-virtual {v6, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/util/LinkedHashMap;

    aget-object v7, v0, v1

    invoke-virtual {v6, v7}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    :goto_9
    check-cast v6, Ljava/lang/String;

    aput-object v6, v4, v9

    aput-object v2, v4, v8

    aput-object v2, v4, v5

    .line 3599
    invoke-virtual {v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 3589
    :goto_a
    add-int/lit8 v1, v1, 0x2

    goto/16 :goto_6

    .line 3609
    .end local v0    # "keys":[Ljava/lang/String;
    .end local v1    # "i":I
    :cond_d
    :goto_b
    return-void
.end method

.method abstract startUpdateProcess(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;)V
.end method

.method taskDone()V
    .locals 2

    .line 2928
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->mUpdateTaskDriven:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 2929
    .local v0, "ssmsg":Landroid/os/Message;
    invoke-virtual {v0}, Landroid/os/Message;->sendToTarget()V

    .line 2930
    return-void
.end method

.method protected taskStop()V
    .locals 3

    .line 2934
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;

    const/4 v1, 0x2

    invoke-direct {v0, p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;I)V

    .line 2935
    .local v0, "startTask":Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->mUpdateTaskDriven:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;

    const/4 v2, 0x0

    invoke-virtual {v1, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->addFirstTask(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;I)V

    .line 2936
    return-void
.end method

.method abstract unRegisteListener()V
.end method

.method public updateCommonView(I)V
    .locals 7
    .param p1, "simID"    # I

    .line 3455
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->commonInfoAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->clear()V

    .line 3456
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->isValidSimID(I)Z

    move-result v0

    const-string v1, "IMSI"

    const-string v2, "Location"

    const/4 v3, 0x0

    const/4 v4, 0x1

    if-eqz v0, :cond_0

    .line 3457
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->commonInfoAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    const/4 v5, 0x2

    new-array v6, v5, [Ljava/lang/String;

    aput-object v2, v6, v3

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v1, p1, 0x1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    aput-object v1, v6, v4

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 3458
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->commonInfoAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    new-array v1, v5, [Ljava/lang/String;

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->location:Ljava/lang/String;

    aput-object v2, v1, v3

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->imsi:[Ljava/lang/String;

    aget-object v2, v2, p1

    aput-object v2, v1, v4

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    goto :goto_2

    .line 3460
    :cond_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->getSupportSimCount()I

    move-result v0

    add-int/2addr v0, v4

    new-array v0, v0, [Ljava/lang/String;

    .line 3461
    .local v0, "commonTitles":[Ljava/lang/String;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->getSupportSimCount()I

    move-result v5

    add-int/2addr v5, v4

    new-array v4, v5, [Ljava/lang/String;

    .line 3462
    .local v4, "commonValues":[Ljava/lang/String;
    aput-object v2, v0, v3

    .line 3463
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->location:Ljava/lang/String;

    aput-object v2, v4, v3

    .line 3464
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->getSupportSimCount()I

    move-result v3

    if-ge v2, v3, :cond_2

    .line 3465
    add-int/lit8 v3, v2, 0x1

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v6, v2, 0x1

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v0, v3

    .line 3466
    add-int/lit8 v3, v2, 0x1

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->imsi:[Ljava/lang/String;

    aget-object v6, v5, v2

    if-nez v6, :cond_1

    const-string v5, " "

    goto :goto_1

    :cond_1
    aget-object v5, v5, v2

    :goto_1
    aput-object v5, v4, v3

    .line 3464
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 3468
    .end local v2    # "i":I
    :cond_2
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->commonInfoAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 3469
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->commonInfoAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 3471
    .end local v0    # "commonTitles":[Ljava/lang/String;
    .end local v4    # "commonValues":[Ljava/lang/String;
    :goto_2
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->commonView:Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->commonInfoAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 3472
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->commonView:Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    const-string v1, "Common"

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->setTextContent(Ljava/lang/String;)V

    .line 3473
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->commonInfoAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->notifyDataSetChanged()V

    .line 3474
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->commonView:Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->setListViewHeightBasedOnChildren()V

    .line 3475
    return-void
.end method
