.class Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread;
.super Ljava/lang/Thread;
.source "Rtnmain.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/rttn/Rtnmain;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "WorkerThread"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rttn/Rtnmain;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/rttn/Rtnmain;

    .line 313
    iput-object p1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    .line 316
    invoke-static {}, Landroid/os/Looper;->prepare()V

    .line 317
    new-instance v0, Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread$1;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread;)V

    invoke-static {v0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$902(Landroid/os/Handler;)Landroid/os/Handler;

    .line 451
    invoke-static {}, Landroid/os/Looper;->loop()V

    .line 452
    return-void
.end method
