.class Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler$Consumer;
.super Ljava/lang/Object;
.source "NfcCommandHandler.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "Consumer"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler;)V
    .locals 0

    .line 58
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler$Consumer;->this$0:Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler;Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler;
    .param p2, "x1"    # Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler$1;

    .line 58
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler$Consumer;-><init>(Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler;)V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    .line 70
    const-string v0, "Nfc"

    :goto_0
    :try_start_0
    const-string v1, "[NfcCommandHandler] Consumer take."

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 71
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler$Consumer;->this$0:Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler;->access$100(Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler;)Ljava/util/concurrent/BlockingQueue;

    move-result-object v1

    if-nez v1, :cond_0

    .line 72
    const-string v1, "[NfcCommandHandler] mCommandQueue is null."

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 74
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler$Consumer;->this$0:Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler;->access$100(Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler;)Ljava/util/concurrent/BlockingQueue;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/concurrent/BlockingQueue;->take()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/hqanfc/NfcCommand;

    .line 75
    .local v1, "command":Lcom/mediatek/engineermode/hqanfc/NfcCommand;
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler$Consumer;->this$0:Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler;

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler;->access$200(Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler;Lcom/mediatek/engineermode/hqanfc/NfcCommand;)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    .line 77
    .end local v1    # "command":Lcom/mediatek/engineermode/hqanfc/NfcCommand;
    :catch_0
    move-exception v1

    .line 78
    .local v1, "ex":Ljava/lang/InterruptedException;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[NfcCommandHandler]Consumer InterruptedException: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/InterruptedException;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 79
    invoke-virtual {v1}, Ljava/lang/InterruptedException;->printStackTrace()V

    .line 80
    .end local v1    # "ex":Ljava/lang/InterruptedException;
    :goto_1
    goto :goto_0
.end method
