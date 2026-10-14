.class public Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;
.super Landroid/os/Handler;
.source "UpdateTaskDriven.java"


# static fields
.field private static final DRIVER_DEAD:I = 0x0

.field private static final DRIVER_NOT_READY:I = 0x2

.field private static final DRIVER_READY:I = 0x1

.field private static final EVENT_DONE:I = 0x2

.field private static final EVENT_EXEC_NEXT:I = 0x1

.field private static final STATE_DOING:I = 0x1

.field private static final STATE_DONE:I = 0x2

.field private static final STATE_NO_PENDING:I = 0x0

.field private static final TAG:Ljava/lang/String; = "EmInfo/UpdateTaskDriven"

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
            "Lcom/mediatek/engineermode/mdmcomponent/Task;",
            ">;"
        }
    .end annotation
.end field

.field private mState:I

.field private mStateLock:Ljava/lang/Object;

.field private mTaskLock:Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 38
    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    .line 14
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    .line 17
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mTaskLock:Ljava/lang/Object;

    .line 18
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mStateLock:Ljava/lang/Object;

    .line 19
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mDriverStateLock:Ljava/lang/Object;

    .line 35
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mState:I

    .line 36
    const/4 v0, 0x2

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mDriverState:I

    .line 39
    return-void
.end method

.method public constructor <init>(Landroid/os/Looper;)V
    .locals 1
    .param p1, "looper"    # Landroid/os/Looper;

    .line 42
    invoke-direct {p0, p1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 14
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    .line 17
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mTaskLock:Ljava/lang/Object;

    .line 18
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mStateLock:Ljava/lang/Object;

    .line 19
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mDriverStateLock:Ljava/lang/Object;

    .line 35
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mState:I

    .line 36
    const/4 v0, 0x2

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mDriverState:I

    .line 43
    return-void
.end method

.method private eventToString(I)Ljava/lang/String;
    .locals 1
    .param p1, "event"    # I

    .line 225
    const/4 v0, 0x1

    if-eq p1, v0, :cond_1

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    .line 231
    const-string v0, "UNKNOWN_EVENT"

    return-object v0

    .line 227
    :cond_0
    const-string v0, "EVENT_DONE"

    return-object v0

    .line 229
    :cond_1
    const-string v0, "EVENT_EXEC_NEXT"

    return-object v0
.end method

.method private getCurrentPendingTask()Lcom/mediatek/engineermode/mdmcomponent/Task;
    .locals 3

    .line 135
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mTaskLock:Ljava/lang/Object;

    monitor-enter v0

    .line 136
    :try_start_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-nez v1, :cond_0

    .line 137
    const/4 v1, 0x0

    monitor-exit v0

    return-object v1

    .line 139
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/mdmcomponent/Task;

    monitor-exit v0

    return-object v1

    .line 140
    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method private getDriverState()I
    .locals 2

    .line 89
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mDriverStateLock:Ljava/lang/Object;

    monitor-enter v0

    .line 90
    :try_start_0
    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mDriverState:I

    monitor-exit v0

    return v1

    .line 91
    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method private getState()I
    .locals 2

    .line 83
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mStateLock:Ljava/lang/Object;

    monitor-enter v0

    .line 84
    :try_start_0
    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mState:I

    monitor-exit v0

    return v1

    .line 85
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

    .line 144
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mTaskLock:Ljava/lang/Object;

    monitor-enter v0

    .line 145
    :try_start_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 148
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    invoke-virtual {v1, p1}, Ljava/util/ArrayList;->remove(I)Ljava/lang/Object;

    .line 150
    :cond_0
    monitor-exit v0

    .line 151
    return-void

    .line 150
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

    .line 96
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mDriverStateLock:Ljava/lang/Object;

    monitor-enter v0

    .line 97
    :try_start_0
    iput p1, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mDriverState:I

    .line 98
    monitor-exit v0

    .line 99
    return-void

    .line 98
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

    .line 129
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mStateLock:Ljava/lang/Object;

    monitor-enter v0

    .line 130
    :try_start_0
    iput p1, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mState:I

    .line 131
    monitor-exit v0

    .line 132
    return-void

    .line 131
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

    .line 213
    if-eqz p1, :cond_2

    const/4 v0, 0x1

    if-eq p1, v0, :cond_1

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    .line 221
    const-string v0, "UNKNOWN_STATE"

    return-object v0

    .line 219
    :cond_0
    const-string v0, "STATE_DONE"

    return-object v0

    .line 217
    :cond_1
    const-string v0, "STATE_DOING"

    return-object v0

    .line 215
    :cond_2
    const-string v0, "STATE_NO_PENDING"

    return-object v0
.end method


# virtual methods
.method public appendEmTask(Ljava/lang/Object;I)V
    .locals 3
    .param p1, "EmMsg"    # Ljava/lang/Object;
    .param p2, "msgId"    # I

    .line 72
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/Task;

    const/4 v1, 0x1

    const/4 v2, 0x3

    invoke-direct {v0, v1, p1, p2, v2}, Lcom/mediatek/engineermode/mdmcomponent/Task;-><init>(ILjava/lang/Object;II)V

    .line 74
    .local v0, "task":Lcom/mediatek/engineermode/mdmcomponent/Task;
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->appendTask(Lcom/mediatek/engineermode/mdmcomponent/Task;)V

    .line 75
    return-void
.end method

.method public appendIcdTask(Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;Ljava/nio/ByteBuffer;)V
    .locals 2
    .param p1, "IcdHeader"    # Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;
    .param p2, "icdPacket"    # Ljava/nio/ByteBuffer;

    .line 66
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/Task;

    const/4 v1, 0x1

    invoke-direct {v0, v1, p1, p2, v1}, Lcom/mediatek/engineermode/mdmcomponent/Task;-><init>(ILcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;Ljava/nio/ByteBuffer;I)V

    .line 68
    .local v0, "task":Lcom/mediatek/engineermode/mdmcomponent/Task;
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->appendTask(Lcom/mediatek/engineermode/mdmcomponent/Task;)V

    .line 69
    return-void
.end method

.method public appendTask(Lcom/mediatek/engineermode/mdmcomponent/Task;)V
    .locals 4
    .param p1, "task"    # Lcom/mediatek/engineermode/mdmcomponent/Task;

    .line 46
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mTaskLock:Ljava/lang/Object;

    monitor-enter v0

    .line 47
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->isDriverDead()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 48
    const-string v1, "EmInfo/UpdateTaskDriven"

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Driver dead! current task returned "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mediatek/engineermode/mdmcomponent/Task;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 49
    monitor-exit v0

    return-void

    .line 51
    :cond_0
    const/4 v1, 0x1

    .local v1, "i":I
    :goto_0
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-ge v1, v2, :cond_2

    .line 52
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    invoke-virtual {v2, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/mdmcomponent/Task;

    invoke-virtual {p0, p1, v2}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->isTaskRepeate(Lcom/mediatek/engineermode/mdmcomponent/Task;Lcom/mediatek/engineermode/mdmcomponent/Task;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 53
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    invoke-virtual {v2, v1}, Ljava/util/ArrayList;->remove(I)Ljava/lang/Object;

    .line 54
    goto :goto_1

    .line 51
    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 57
    .end local v1    # "i":I
    :cond_2
    :goto_1
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    invoke-virtual {v1, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 58
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 59
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->isDriverReady()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 60
    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 61
    .local v0, "msg":Landroid/os/Message;
    invoke-virtual {v0}, Landroid/os/Message;->sendToTarget()V

    .line 63
    .end local v0    # "msg":Landroid/os/Message;
    :cond_3
    return-void

    .line 58
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

    .line 154
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mTaskLock:Ljava/lang/Object;

    monitor-enter v0

    .line 155
    :try_start_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->clear()V

    .line 156
    monitor-exit v0

    .line 157
    return-void

    .line 156
    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public exec()V
    .locals 4

    .line 161
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->getCurrentPendingTask()Lcom/mediatek/engineermode/mdmcomponent/Task;

    move-result-object v0

    .line 162
    .local v0, "task":Lcom/mediatek/engineermode/mdmcomponent/Task;
    if-nez v0, :cond_0

    .line 163
    const/4 v1, 0x0

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->setState(I)V

    .line 165
    return-void

    .line 168
    :cond_0
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->getState()I

    move-result v1

    const/4 v2, 0x1

    if-ne v1, v2, :cond_1

    .line 170
    return-void

    .line 173
    :cond_1
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->isDriverDead()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->isStopTask(Lcom/mediatek/engineermode/mdmcomponent/Task;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 174
    const-string v1, "EmInfo/UpdateTaskDriven"

    const-string v2, "Driver is Stopped"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 175
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->taskDone()V

    .line 176
    return-void

    .line 178
    :cond_2
    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->setState(I)V

    .line 179
    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/Task;->getTaskId()I

    move-result v1

    .line 182
    .local v1, "taskId":I
    if-eq v1, v2, :cond_3

    .line 192
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->taskDone()V

    goto :goto_0

    .line 184
    :cond_3
    sget-object v2, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mUpdateUiHandler:Landroid/os/Handler;

    invoke-virtual {v2}, Landroid/os/Handler;->obtainMessage()Landroid/os/Message;

    move-result-object v2

    .line 185
    .local v2, "msgToUiEm":Landroid/os/Message;
    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/Task;->getType()I

    move-result v3

    iput v3, v2, Landroid/os/Message;->what:I

    .line 186
    iput-object v0, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 187
    sget-object v3, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mUpdateUiHandler:Landroid/os/Handler;

    .line 188
    invoke-virtual {v3, v2}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 189
    nop

    .line 196
    .end local v2    # "msgToUiEm":Landroid/os/Message;
    :goto_0
    return-void
.end method

.method public handleMessage(Landroid/os/Message;)V
    .locals 2
    .param p1, "msg"    # Landroid/os/Message;

    .line 201
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 204
    :cond_0
    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->removePendingTask(I)V

    .line 205
    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->setState(I)V

    .line 207
    :cond_1
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->exec()V

    .line 210
    :goto_0
    return-void
.end method

.method public isDriverDead()Z
    .locals 1

    .line 102
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->getDriverState()I

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

    .line 110
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->getDriverState()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method public isStopTask(Lcom/mediatek/engineermode/mdmcomponent/Task;)Z
    .locals 2
    .param p1, "task"    # Lcom/mediatek/engineermode/mdmcomponent/Task;

    .line 118
    invoke-virtual {p1}, Lcom/mediatek/engineermode/mdmcomponent/Task;->getTaskId()I

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

.method public isTaskRepeate(Lcom/mediatek/engineermode/mdmcomponent/Task;Lcom/mediatek/engineermode/mdmcomponent/Task;)Z
    .locals 1
    .param p1, "A"    # Lcom/mediatek/engineermode/mdmcomponent/Task;
    .param p2, "B"    # Lcom/mediatek/engineermode/mdmcomponent/Task;

    .line 125
    const/4 v0, 0x0

    return v0
.end method

.method public isTaskRunning()Z
    .locals 2

    .line 106
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->getState()I

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

    .line 78
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->mPendingTask:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    .line 79
    const/4 v0, 0x2

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->setDriverState(I)V

    .line 80
    return-void
.end method

.method public setDriverReady()V
    .locals 1

    .line 114
    const/4 v0, 0x1

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->setDriverState(I)V

    .line 115
    return-void
.end method

.method taskDone()V
    .locals 1

    .line 235
    const/4 v0, 0x2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 236
    .local v0, "ssmsg":Landroid/os/Message;
    invoke-virtual {v0}, Landroid/os/Message;->sendToTarget()V

    .line 237
    return-void
.end method

.method public taskStart()V
    .locals 1

    .line 247
    const/4 v0, 0x1

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->setDriverState(I)V

    .line 248
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->exec()V

    .line 249
    return-void
.end method

.method public taskStop()V
    .locals 1

    .line 241
    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->setDriverState(I)V

    .line 242
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;->clearPendingTask()V

    .line 243
    return-void
.end method
