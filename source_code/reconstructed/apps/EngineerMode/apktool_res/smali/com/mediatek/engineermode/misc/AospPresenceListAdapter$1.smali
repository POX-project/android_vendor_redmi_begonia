.class Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$1;
.super Landroid/os/Handler;
.source "AospPresenceListAdapter.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    .line 71
    iput-object p1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$1;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 2
    .param p1, "msg"    # Landroid/os/Message;

    .line 74
    iget v0, p1, Landroid/os/Message;->what:I

    if-nez v0, :cond_0

    .line 75
    invoke-virtual {p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object v0

    const-string v1, "toastInfo"

    invoke-virtual {v0, v1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 76
    .local v0, "info":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$1;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->access$000(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;Ljava/lang/String;)V

    .line 78
    .end local v0    # "info":Ljava/lang/String;
    :cond_0
    return-void
.end method
