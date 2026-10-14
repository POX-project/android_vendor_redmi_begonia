.class Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;
.super Landroid/os/Handler;
.source "MDMComponentFT.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "UpdateTaskDriven"
.end annotation


# static fields
.field private static final DRIVER_DEAD:I = 0x0

.field private static final DRIVER_NOT_READY:I = 0x2

.field private static final DRIVER_READY:I = 0x1

.field private static final EVENT_DONE:I = 0x2

.field private static final EVENT_EXEC_NEXT:I = 0x1

.field private static final STATE_DOING:I = 0x1

.field private static final STATE_DONE:I = 0x2

.field private static final STATE_NO_PENDING:I = 0x0

.field private static final TAG:Ljava/lang/String; = "EmInfo/MDMComponentFT/UpdateTaskDriven"

.field protected static final TASK_INIT_VIEW:I = 0x0

.field protected static final TASK_REMOVE_VIEW:I = 0x2

.field protected static final TASK_UPDATE_DATA:I = 0x1


# instance fields
.field private mDriverState:I

.field private mDriverStateLock:Ljava/lang/Object;

.field private mPendingTask:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;",
            ">;"
        }
    .end annotation
.end field

.field private mState:I

.field private mStateLock:Ljava/lang/Object;

.field private mTaskLock:Ljava/lang/Object;

.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;


# direct methods
.method public constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;)V
    .locals 1
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    .line 3011
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    .line 2986
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    .line 2989
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mTaskLock:Ljava/lang/Object;

    .line 2990
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mStateLock:Ljava/lang/Object;

    .line 2991
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mDriverStateLock:Ljava/lang/Object;

    .line 3008
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mState:I

    .line 3009
    const/4 v0, 0x2

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mDriverState:I

    .line 3012
    return-void
.end method

.method public constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;Landroid/os/Looper;)V
    .locals 1
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;
    .param p2, "looper"    # Landroid/os/Looper;

    .line 3014
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    .line 3015
    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 2986
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    .line 2989
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mTaskLock:Ljava/lang/Object;

    .line 2990
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mStateLock:Ljava/lang/Object;

    .line 2991
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mDriverStateLock:Ljava/lang/Object;

    .line 3008
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mState:I

    .line 3009
    const/4 v0, 0x2

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mDriverState:I

    .line 3016
    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;
    .param p1, "x1"    # I

    .line 2985
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->setDriverState(I)V

    return-void
.end method

.method private driverStateToStr(I)Ljava/lang/String;
    .locals 2
    .param p1, "state"    # I

    .line 3098
    if-eqz p1, :cond_2

    const/4 v0, 0x1

    if-eq p1, v0, :cond_1

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    .line 3106
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Unknown: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 3104
    :cond_0
    const-string v0, "Not Ready"

    return-object v0

    .line 3102
    :cond_1
    const-string v0, "Ready"

    return-object v0

    .line 3100
    :cond_2
    const-string v0, "Dead"

    return-object v0
.end method

.method private eventToString(I)Ljava/lang/String;
    .locals 1
    .param p1, "event"    # I

    .line 3239
    const/4 v0, 0x1

    if-eq p1, v0, :cond_1

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    .line 3245
    const-string v0, "UNKNOWN_EVENT"

    return-object v0

    .line 3241
    :cond_0
    const-string v0, "EVENT_DONE"

    return-object v0

    .line 3243
    :cond_1
    const-string v0, "EVENT_EXEC_NEXT"

    return-object v0
.end method

.method private getCurrentPendingTask()Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;
    .locals 3

    .line 3148
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mTaskLock:Ljava/lang/Object;

    monitor-enter v0

    .line 3149
    :try_start_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-nez v1, :cond_0

    .line 3150
    const/4 v1, 0x0

    monitor-exit v0

    return-object v1

    .line 3152
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;

    monitor-exit v0

    return-object v1

    .line 3153
    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method private getDriverState()I
    .locals 2

    .line 3092
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mDriverStateLock:Ljava/lang/Object;

    monitor-enter v0

    .line 3093
    :try_start_0
    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mDriverState:I

    monitor-exit v0

    return v1

    .line 3094
    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method private getState()I
    .locals 2

    .line 3086
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mStateLock:Ljava/lang/Object;

    monitor-enter v0

    .line 3087
    :try_start_0
    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mState:I

    monitor-exit v0

    return v1

    .line 3088
    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method private removePendingTask(I)V
    .locals 2
    .param p1, "index"    # I

    .line 3157
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mTaskLock:Ljava/lang/Object;

    monitor-enter v0

    .line 3158
    :try_start_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 3161
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    invoke-virtual {v1, p1}, Ljava/util/ArrayList;->remove(I)Ljava/lang/Object;

    .line 3163
    :cond_0
    monitor-exit v0

    .line 3164
    return-void

    .line 3163
    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method private setDriverState(I)V
    .locals 2
    .param p1, "driverState"    # I

    .line 3113
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mDriverStateLock:Ljava/lang/Object;

    monitor-enter v0

    .line 3114
    :try_start_0
    iput p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mDriverState:I

    .line 3115
    monitor-exit v0

    .line 3116
    return-void

    .line 3115
    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method private setState(I)V
    .locals 2
    .param p1, "state"    # I

    .line 3142
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mStateLock:Ljava/lang/Object;

    monitor-enter v0

    .line 3143
    :try_start_0
    iput p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mState:I

    .line 3144
    monitor-exit v0

    .line 3145
    return-void

    .line 3144
    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method private stateToString(I)Ljava/lang/String;
    .locals 1
    .param p1, "state"    # I

    .line 3227
    if-eqz p1, :cond_2

    const/4 v0, 0x1

    if-eq p1, v0, :cond_1

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    .line 3235
    const-string v0, "UNKNOWN_STATE"

    return-object v0

    .line 3233
    :cond_0
    const-string v0, "STATE_DONE"

    return-object v0

    .line 3231
    :cond_1
    const-string v0, "STATE_DOING"

    return-object v0

    .line 3229
    :cond_2
    const-string v0, "STATE_NO_PENDING"

    return-object v0
.end method


# virtual methods
.method public addFirstTask(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;I)V
    .locals 7
    .param p1, "task"    # Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;
    .param p2, "driverState"    # I

    .line 3047
    invoke-direct {p0, p2}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->setDriverState(I)V

    .line 3048
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mTaskLock:Ljava/lang/Object;

    monitor-enter v0

    .line 3049
    const/4 v1, 0x0

    const/4 v2, 0x1

    if-nez p2, :cond_1

    .line 3050
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->isTaskRunning()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 3051
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    invoke-virtual {v3, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;

    .line 3052
    .local v1, "curTask":Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->clear()V

    .line 3053
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    invoke-virtual {v3, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 3054
    nop

    .end local v1    # "curTask":Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;
    goto :goto_0

    .line 3055
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->clear()V

    .line 3057
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    invoke-virtual {v1, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_4

    .line 3072
    :catchall_0
    move-exception v1

    goto :goto_5

    .line 3059
    :cond_1
    const/4 v3, 0x0

    .line 3060
    .local v3, "start":I
    const/4 v4, 0x0

    .local v4, "i":I
    :goto_1
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    invoke-virtual {v5}, Ljava/util/ArrayList;->size()I

    move-result v5

    if-ge v4, v5, :cond_3

    .line 3061
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    invoke-virtual {v5, v4}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;

    invoke-virtual {v5}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->getTaskId()I

    move-result v5

    const/4 v6, 0x2

    if-ne v5, v6, :cond_2

    .line 3063
    move v3, v4

    .line 3064
    goto :goto_2

    .line 3060
    :cond_2
    add-int/lit8 v4, v4, 0x1

    goto :goto_1

    .line 3067
    .end local v4    # "i":I
    :cond_3
    :goto_2
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->isTaskRunning()Z

    move-result v4

    .local v4, "j":I
    :goto_3
    if-gt v4, v3, :cond_4

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    invoke-virtual {v5}, Ljava/util/ArrayList;->size()I

    move-result v5

    if-ge v4, v5, :cond_4

    .line 3068
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    invoke-virtual {v5, v4}, Ljava/util/ArrayList;->remove(I)Ljava/lang/Object;

    .line 3067
    add-int/lit8 v4, v4, 0x1

    goto :goto_3

    .line 3070
    .end local v4    # "j":I
    :cond_4
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->isTaskRunning()Z

    move-result v5

    if-eqz v5, :cond_5

    move v1, v2

    :cond_5
    invoke-virtual {v4, v1, p1}, Ljava/util/ArrayList;->add(ILjava/lang/Object;)V

    .line 3072
    .end local v3    # "start":I
    :goto_4
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 3076
    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 3077
    .local v0, "msg":Landroid/os/Message;
    invoke-virtual {v0}, Landroid/os/Message;->sendToTarget()V

    .line 3078
    return-void

    .line 3072
    .end local v0    # "msg":Landroid/os/Message;
    :goto_5
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v1
.end method

.method public appendTask(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;)V
    .locals 4
    .param p1, "task"    # Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;

    .line 3019
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mTaskLock:Ljava/lang/Object;

    monitor-enter v0

    .line 3020
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->isDriverDead()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 3021
    const-string v1, "EmInfo/MDMComponentFT/UpdateTaskDriven"

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Driver dead! current task returned "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 3022
    monitor-exit v0

    return-void

    .line 3036
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    invoke-virtual {v1, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 3037
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 3040
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->isDriverReady()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 3041
    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 3042
    .local v0, "msg":Landroid/os/Message;
    invoke-virtual {v0}, Landroid/os/Message;->sendToTarget()V

    .line 3044
    .end local v0    # "msg":Landroid/os/Message;
    :cond_1
    return-void

    .line 3037
    :catchall_0
    move-exception v1

    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v1
.end method

.method public clearPendingTask()V
    .locals 2

    .line 3167
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mTaskLock:Ljava/lang/Object;

    monitor-enter v0

    .line 3168
    :try_start_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->clear()V

    .line 3169
    monitor-exit v0

    .line 3170
    return-void

    .line 3169
    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public exec()V
    .locals 6

    .line 3174
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->getCurrentPendingTask()Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;

    move-result-object v0

    .line 3175
    .local v0, "task":Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;
    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 3176
    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->setState(I)V

    .line 3177
    return-void

    .line 3180
    :cond_0
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->getState()I

    move-result v2

    const/4 v3, 0x1

    if-ne v2, v3, :cond_1

    .line 3181
    return-void

    .line 3184
    :cond_1
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->isDriverDead()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->isStopTask(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 3185
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->taskStop()V

    .line 3186
    return-void

    .line 3188
    :cond_2
    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->setState(I)V

    .line 3189
    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->getTaskId()I

    move-result v2

    .line 3192
    .local v2, "taskId":I
    if-eqz v2, :cond_5

    if-eq v2, v3, :cond_4

    const/4 v1, 0x2

    if-eq v2, v1, :cond_3

    .line 3206
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->taskDone()V

    goto :goto_0

    .line 3202
    :cond_3
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->taskDone()V

    .line 3203
    goto :goto_0

    .line 3198
    :cond_4
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;->startUpdateProcess(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;)V

    .line 3199
    goto :goto_0

    .line 3194
    :cond_5
    new-instance v3, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;

    const/4 v5, 0x0

    invoke-direct {v3, v4, v5}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$1;)V

    new-array v1, v1, [Ljava/lang/Void;

    invoke-virtual {v3, v1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$InitViewTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 3195
    nop

    .line 3210
    :goto_0
    return-void
.end method

.method public handleMessage(Landroid/os/Message;)V
    .locals 2
    .param p1, "msg"    # Landroid/os/Message;

    .line 3215
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 3218
    :cond_0
    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->removePendingTask(I)V

    .line 3219
    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->setState(I)V

    .line 3221
    :cond_1
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->exec()V

    .line 3224
    :goto_0
    return-void
.end method

.method public isDriverDead()Z
    .locals 1

    .line 3119
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->getDriverState()I

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public isDriverReady()Z
    .locals 2

    .line 3127
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->getDriverState()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method public isStopTask(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;)Z
    .locals 2
    .param p1, "task"    # Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;

    .line 3131
    invoke-virtual {p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->getTaskId()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public isTaskRepeate(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;)Z
    .locals 3
    .param p1, "A"    # Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;
    .param p2, "B"    # Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;

    .line 3135
    invoke-static {p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->access$100(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    .line 3136
    :cond_0
    invoke-virtual {p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->getTaskId()I

    move-result v0

    invoke-virtual {p2}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->getTaskId()I

    move-result v2

    if-ne v0, v2, :cond_1

    .line 3137
    invoke-virtual {p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->getExtraName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->getExtraName()Ljava/lang/String;

    move-result-object v2

    if-ne v0, v2, :cond_1

    .line 3138
    invoke-virtual {p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->getExtraSimID()I

    move-result v0

    invoke-virtual {p2}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;->getExtraSimID()I

    move-result v2

    if-ne v0, v2, :cond_1

    const/4 v1, 0x1

    goto :goto_0

    :cond_1
    nop

    .line 3136
    :goto_0
    return v1
.end method

.method public isTaskRunning()Z
    .locals 2

    .line 3123
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->getState()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method public resetDriver()V
    .locals 1

    .line 3081
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    .line 3082
    const/4 v0, 0x2

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->setDriverState(I)V

    .line 3083
    return-void
.end method
