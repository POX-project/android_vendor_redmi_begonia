.class public Lcom/mediatek/mdml/MonitorCmdProxy;
.super Ljava/lang/Object;
.source "MonitorCmdProxy.java"

# interfaces
.implements Lcom/mediatek/mdml/CommandInterface;


# static fields
.field private static final TAG:Ljava/lang/String; = "MDML/MonitorCmdProxy"


# instance fields
.field private mJsonCmdEncoder:Lcom/mediatek/mdml/JsonCmdEncoder;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1
    .param p1, "context"    # Landroid/content/Context;

    .line 41
    const-string v0, "com.mediatek.mdmonitor.command"

    invoke-direct {p0, v0, p1}, Lcom/mediatek/mdml/MonitorCmdProxy;-><init>(Ljava/lang/String;Landroid/content/Context;)V

    .line 42
    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Landroid/content/Context;)V
    .locals 3
    .param p1, "strServerName"    # Ljava/lang/String;
    .param p2, "context"    # Landroid/content/Context;

    .line 27
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 29
    const-string v0, "MDML/MonitorCmdProxy"

    const-string v1, "MonitorCmdProxy Constructor start "

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 30
    new-instance v1, Lcom/mediatek/mdml/JsonCmdEncoder;

    new-instance v2, Lcom/mediatek/mdml/HIDLMCPTransmitter;

    invoke-direct {v2, p1}, Lcom/mediatek/mdml/HIDLMCPTransmitter;-><init>(Ljava/lang/String;)V

    invoke-direct {v1, v2, p2}, Lcom/mediatek/mdml/JsonCmdEncoder;-><init>(Lcom/mediatek/mdml/HIDLMCPTransmitter;Landroid/content/Context;)V

    iput-object v1, p0, Lcom/mediatek/mdml/MonitorCmdProxy;->mJsonCmdEncoder:Lcom/mediatek/mdml/JsonCmdEncoder;

    .line 31
    const-string v1, "MonitorCmdProxy Constructor end"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 32
    return-void
.end method


# virtual methods
.method public onCloseSession(J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    .locals 1
    .param p1, "sessionId"    # J

    .line 51
    iget-object v0, p0, Lcom/mediatek/mdml/MonitorCmdProxy;->mJsonCmdEncoder:Lcom/mediatek/mdml/JsonCmdEncoder;

    invoke-virtual {v0, p1, p2}, Lcom/mediatek/mdml/JsonCmdEncoder;->closeSession(J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    move-result-object v0

    return-object v0
.end method

.method public onCreateSession()J
    .locals 2

    .line 46
    iget-object v0, p0, Lcom/mediatek/mdml/MonitorCmdProxy;->mJsonCmdEncoder:Lcom/mediatek/mdml/JsonCmdEncoder;

    invoke-virtual {v0}, Lcom/mediatek/mdml/JsonCmdEncoder;->createSession()J

    move-result-wide v0

    return-wide v0
.end method

.method public onDisableTrap(J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    .locals 1
    .param p1, "sessionId"    # J

    .line 85
    iget-object v0, p0, Lcom/mediatek/mdml/MonitorCmdProxy;->mJsonCmdEncoder:Lcom/mediatek/mdml/JsonCmdEncoder;

    invoke-virtual {v0, p1, p2}, Lcom/mediatek/mdml/JsonCmdEncoder;->disableTrap(J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    move-result-object v0

    return-object v0
.end method

.method public onEnableTrap(J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    .locals 1
    .param p1, "sessionId"    # J

    .line 80
    iget-object v0, p0, Lcom/mediatek/mdml/MonitorCmdProxy;->mJsonCmdEncoder:Lcom/mediatek/mdml/JsonCmdEncoder;

    invoke-virtual {v0, p1, p2}, Lcom/mediatek/mdml/JsonCmdEncoder;->enableTrap(J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    move-result-object v0

    return-object v0
.end method

.method public onSetTrapReceiver(JLjava/lang/String;)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    .locals 1
    .param p1, "sessionId"    # J
    .param p3, "szServerName"    # Ljava/lang/String;

    .line 91
    iget-object v0, p0, Lcom/mediatek/mdml/MonitorCmdProxy;->mJsonCmdEncoder:Lcom/mediatek/mdml/JsonCmdEncoder;

    invoke-virtual {v0, p1, p2, p3}, Lcom/mediatek/mdml/JsonCmdEncoder;->setTrapReceiver(JLjava/lang/String;)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    move-result-object v0

    return-object v0
.end method

.method public onSubscribeMultiTrap(JLcom/mediatek/mdml/TRAP_TYPE;[J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    .locals 1
    .param p1, "sessionId"    # J
    .param p3, "type"    # Lcom/mediatek/mdml/TRAP_TYPE;
    .param p4, "msgId"    # [J

    .line 63
    iget-object v0, p0, Lcom/mediatek/mdml/MonitorCmdProxy;->mJsonCmdEncoder:Lcom/mediatek/mdml/JsonCmdEncoder;

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/mediatek/mdml/JsonCmdEncoder;->subscribeMultiTrap(JLcom/mediatek/mdml/TRAP_TYPE;[J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    move-result-object v0

    return-object v0
.end method

.method public onSubscribeTrap(JLcom/mediatek/mdml/TRAP_TYPE;J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    .locals 6
    .param p1, "sessionId"    # J
    .param p3, "type"    # Lcom/mediatek/mdml/TRAP_TYPE;
    .param p4, "msgId"    # J

    .line 57
    iget-object v0, p0, Lcom/mediatek/mdml/MonitorCmdProxy;->mJsonCmdEncoder:Lcom/mediatek/mdml/JsonCmdEncoder;

    move-wide v1, p1

    move-object v3, p3

    move-wide v4, p4

    invoke-virtual/range {v0 .. v5}, Lcom/mediatek/mdml/JsonCmdEncoder;->subscribeTrap(JLcom/mediatek/mdml/TRAP_TYPE;J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    move-result-object v0

    return-object v0
.end method

.method public onUnsubscribeMultiTrap(JLcom/mediatek/mdml/TRAP_TYPE;[J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    .locals 1
    .param p1, "sessionId"    # J
    .param p3, "type"    # Lcom/mediatek/mdml/TRAP_TYPE;
    .param p4, "msgId"    # [J

    .line 75
    iget-object v0, p0, Lcom/mediatek/mdml/MonitorCmdProxy;->mJsonCmdEncoder:Lcom/mediatek/mdml/JsonCmdEncoder;

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/mediatek/mdml/JsonCmdEncoder;->unsubscribeMultiTrap(JLcom/mediatek/mdml/TRAP_TYPE;[J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    move-result-object v0

    return-object v0
.end method

.method public onUnsubscribeTrap(JLcom/mediatek/mdml/TRAP_TYPE;J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    .locals 6
    .param p1, "sessionId"    # J
    .param p3, "type"    # Lcom/mediatek/mdml/TRAP_TYPE;
    .param p4, "msgId"    # J

    .line 69
    iget-object v0, p0, Lcom/mediatek/mdml/MonitorCmdProxy;->mJsonCmdEncoder:Lcom/mediatek/mdml/JsonCmdEncoder;

    move-wide v1, p1

    move-object v3, p3

    move-wide v4, p4

    invoke-virtual/range {v0 .. v5}, Lcom/mediatek/mdml/JsonCmdEncoder;->unsubscribeTrap(JLcom/mediatek/mdml/TRAP_TYPE;J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    move-result-object v0

    return-object v0
.end method
