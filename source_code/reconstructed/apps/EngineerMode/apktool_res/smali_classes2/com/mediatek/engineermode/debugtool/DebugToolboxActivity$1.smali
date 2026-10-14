.class Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity$1;
.super Ljava/lang/Object;
.source "DebugToolboxActivity.java"

# interfaces
.implements Landroid/content/ServiceConnection;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;

    .line 228
    iput-object p1, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity$1;->this$0:Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 2
    .param p1, "className"    # Landroid/content/ComponentName;
    .param p2, "service"    # Landroid/os/IBinder;

    .line 236
    iget-object v0, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity$1;->this$0:Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;

    move-object v1, p2

    check-cast v1, Lcom/mediatek/engineermode/debugtool/AEEControlService$LocalBinder;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/debugtool/AEEControlService$LocalBinder;->getService()Lcom/mediatek/engineermode/debugtool/AEEControlService;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->access$002(Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;Lcom/mediatek/engineermode/debugtool/AEEControlService;)Lcom/mediatek/engineermode/debugtool/AEEControlService;

    .line 241
    return-void
.end method

.method public onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 2
    .param p1, "className"    # Landroid/content/ComponentName;

    .line 249
    iget-object v0, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity$1;->this$0:Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->access$002(Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;Lcom/mediatek/engineermode/debugtool/AEEControlService;)Lcom/mediatek/engineermode/debugtool/AEEControlService;

    .line 253
    return-void
.end method
