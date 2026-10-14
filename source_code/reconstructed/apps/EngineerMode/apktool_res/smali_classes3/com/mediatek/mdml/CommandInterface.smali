.class interface abstract Lcom/mediatek/mdml/CommandInterface;
.super Ljava/lang/Object;
.source "CommandInterface.java"


# virtual methods
.method public abstract onCloseSession(J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
.end method

.method public abstract onCreateSession()J
.end method

.method public abstract onDisableTrap(J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
.end method

.method public abstract onEnableTrap(J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
.end method

.method public abstract onSetTrapReceiver(JLjava/lang/String;)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
.end method

.method public abstract onSubscribeMultiTrap(JLcom/mediatek/mdml/TRAP_TYPE;[J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
.end method

.method public abstract onSubscribeTrap(JLcom/mediatek/mdml/TRAP_TYPE;J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
.end method

.method public abstract onUnsubscribeMultiTrap(JLcom/mediatek/mdml/TRAP_TYPE;[J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
.end method

.method public abstract onUnsubscribeTrap(JLcom/mediatek/mdml/TRAP_TYPE;J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
.end method
