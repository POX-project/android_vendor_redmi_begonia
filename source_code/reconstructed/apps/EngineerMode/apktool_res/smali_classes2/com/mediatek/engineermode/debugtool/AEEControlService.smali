.class public Lcom/mediatek/engineermode/debugtool/AEEControlService;
.super Landroid/app/Service;
.source "AEEControlService.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/debugtool/AEEControlService$LocalBinder;
    }
.end annotation


# static fields
.field protected static final COMMAND_CLEAN_DATA:Ljava/lang/String; = "rm -r /data/core/ /data/anr"

.field protected static final COMMAND_CLEAR_DAL:Ljava/lang/String; = "aee -c dal"

.field private static final TAG:Ljava/lang/String; = "AEEControlService/Debugutils"


# instance fields
.field private final mBinder:Landroid/os/IBinder;

.field protected mCommandMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 58
    invoke-direct {p0}, Landroid/app/Service;-><init>()V

    .line 68
    new-instance v0, Lcom/mediatek/engineermode/debugtool/AEEControlService$LocalBinder;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/debugtool/AEEControlService$LocalBinder;-><init>(Lcom/mediatek/engineermode/debugtool/AEEControlService;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/debugtool/AEEControlService;->mBinder:Landroid/os/IBinder;

    return-void
.end method

.method private static varargs buildCommandList([Ljava/lang/String;)Ljava/util/Map;
    .locals 8
    .param p0, "cmdentries"    # [Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 177
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 178
    .local v0, "commandMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    array-length v1, p0

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_0

    aget-object v4, p0, v3

    .line 179
    .local v4, "cmdentry":Ljava/lang/String;
    const-string v5, "#"

    invoke-virtual {v4, v5}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v5

    .line 180
    .local v5, "kv":[Ljava/lang/String;
    aget-object v6, v5, v2

    const/4 v7, 0x1

    aget-object v7, v5, v7

    invoke-interface {v0, v6, v7}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 178
    .end local v4    # "cmdentry":Ljava/lang/String;
    .end local v5    # "kv":[Ljava/lang/String;
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 182
    :cond_0
    return-object v0
.end method

.method private static systemexec(Ljava/lang/String;)Ljava/lang/StringBuffer;
    .locals 8
    .param p0, "command"    # Ljava/lang/String;

    .line 154
    const-string v0, "Operation failed."

    const-string v1, "AEEControlService/Debugutils"

    new-instance v2, Ljava/lang/StringBuffer;

    invoke-direct {v2}, Ljava/lang/StringBuffer;-><init>()V

    .line 156
    .local v2, "output":Ljava/lang/StringBuffer;
    :try_start_0
    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v3

    invoke-virtual {v3, p0}, Ljava/lang/Runtime;->exec(Ljava/lang/String;)Ljava/lang/Process;

    move-result-object v3

    .line 157
    .local v3, "process":Ljava/lang/Process;
    new-instance v4, Ljava/io/BufferedReader;

    new-instance v5, Ljava/io/InputStreamReader;

    .line 158
    invoke-virtual {v3}, Ljava/lang/Process;->getInputStream()Ljava/io/InputStream;

    move-result-object v6

    invoke-direct {v5, v6}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    invoke-direct {v4, v5}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V

    .line 159
    .local v4, "reader":Ljava/io/BufferedReader;
    new-instance v5, Ljava/lang/String;

    invoke-direct {v5}, Ljava/lang/String;-><init>()V

    .line 160
    .local v5, "line":Ljava/lang/String;
    :goto_0
    invoke-virtual {v4}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v6

    move-object v5, v6

    if-eqz v6, :cond_0

    .line 161
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "\n"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v6}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_0

    .line 163
    :cond_0
    invoke-virtual {v2}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v1, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 164
    invoke-virtual {v3}, Ljava/lang/Process;->waitFor()I

    .line 165
    invoke-virtual {v4}, Ljava/io/BufferedReader;->close()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    .end local v3    # "process":Ljava/lang/Process;
    .end local v4    # "reader":Ljava/io/BufferedReader;
    .end local v5    # "line":Ljava/lang/String;
    goto :goto_1

    .line 169
    :catch_0
    move-exception v3

    .line 170
    .local v3, "ie":Ljava/lang/InterruptedException;
    invoke-virtual {v3}, Ljava/lang/InterruptedException;->printStackTrace()V

    .line 171
    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 166
    .end local v3    # "ie":Ljava/lang/InterruptedException;
    :catch_1
    move-exception v3

    .line 167
    .local v3, "ioe":Ljava/io/IOException;
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V

    .line 168
    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 172
    .end local v3    # "ioe":Ljava/io/IOException;
    :goto_1
    nop

    .line 173
    :goto_2
    return-object v2
.end method


# virtual methods
.method public changeAEEMode(Ljava/lang/String;)V
    .locals 1
    .param p1, "modevalue"    # Ljava/lang/String;

    .line 113
    iget-object v0, p0, Lcom/mediatek/engineermode/debugtool/AEEControlService;->mCommandMap:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 114
    .local v0, "command":Ljava/lang/String;
    if-eqz v0, :cond_0

    .line 115
    invoke-static {v0}, Lcom/mediatek/engineermode/debugtool/AEEControlService;->systemexec(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 117
    :cond_0
    return-void
.end method

.method public cleanData()V
    .locals 3

    .line 145
    iget-object v0, p0, Lcom/mediatek/engineermode/debugtool/AEEControlService;->mCommandMap:Ljava/util/Map;

    const-string v1, "AEECleanData"

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 146
    .local v0, "command":Ljava/lang/String;
    if-eqz v0, :cond_0

    .line 147
    invoke-static {v0}, Lcom/mediatek/engineermode/debugtool/AEEControlService;->systemexec(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 149
    :cond_0
    const-string v1, "AEEControlService/Debugutils"

    const-string v2, "Device /data partition cleaned up."

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 150
    const/4 v1, 0x0

    invoke-static {p0, v2, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 151
    return-void
.end method

.method public clearDAL()V
    .locals 3

    .line 133
    iget-object v0, p0, Lcom/mediatek/engineermode/debugtool/AEEControlService;->mCommandMap:Ljava/util/Map;

    const-string v1, "AEEClearDAL"

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 134
    .local v0, "command":Ljava/lang/String;
    if-eqz v0, :cond_0

    .line 135
    invoke-static {v0}, Lcom/mediatek/engineermode/debugtool/AEEControlService;->systemexec(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 137
    :cond_0
    const-string v1, "AEEControlService/Debugutils"

    const-string v2, "Device AEE red screen cleared."

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 139
    return-void
.end method

.method public dalSetting(Ljava/lang/String;)V
    .locals 1
    .param p1, "dalOption"    # Ljava/lang/String;

    .line 123
    iget-object v0, p0, Lcom/mediatek/engineermode/debugtool/AEEControlService;->mCommandMap:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 124
    .local v0, "command":Ljava/lang/String;
    if-eqz v0, :cond_0

    .line 125
    invoke-static {v0}, Lcom/mediatek/engineermode/debugtool/AEEControlService;->systemexec(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 127
    :cond_0
    return-void
.end method

.method public onBind(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 1
    .param p1, "intent"    # Landroid/content/Intent;

    .line 106
    iget-object v0, p0, Lcom/mediatek/engineermode/debugtool/AEEControlService;->mBinder:Landroid/os/IBinder;

    return-object v0
.end method

.method public onCreate()V
    .locals 8

    .line 82
    const-string v0, "AEECleanData#rm -r /data/core /data/anr /data/tombstones"

    const-string v1, "AEEClearDAL#aee -c dal"

    const-string v2, "MediatekEngineer#aee -m 1"

    const-string v3, "MediatekUser#aee -m 2"

    const-string v4, "CustomerEngineer#aee -m 3"

    const-string v5, "CustomerUser#aee -m 4"

    const-string v6, "EnableDAL#aee -s on"

    const-string v7, "DisableDAL#aee -s off"

    filled-new-array/range {v0 .. v7}, [Ljava/lang/String;

    move-result-object v0

    .line 83
    invoke-static {v0}, Lcom/mediatek/engineermode/debugtool/AEEControlService;->buildCommandList([Ljava/lang/String;)Ljava/util/Map;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/debugtool/AEEControlService;->mCommandMap:Ljava/util/Map;

    .line 87
    return-void
.end method

.method public onDestroy()V
    .locals 0

    .line 102
    return-void
.end method

.method public onStartCommand(Landroid/content/Intent;II)I
    .locals 2
    .param p1, "intent"    # Landroid/content/Intent;
    .param p2, "flags"    # I
    .param p3, "startId"    # I

    .line 91
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Received start id "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ": "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "AEEControlService"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 94
    const/4 v0, 0x1

    return v0
.end method
