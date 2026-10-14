.class Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$3;
.super Lcom/android/ims/internal/uce/uceservice/IUceListener$Stub;
.source "AospPresenceListAdapter.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->initUce()V
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

    .line 176
    iput-object p1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$3;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-direct {p0}, Lcom/android/ims/internal/uce/uceservice/IUceListener$Stub;-><init>()V

    return-void
.end method


# virtual methods
.method public setStatus(I)V
    .locals 2
    .param p1, "serviceStatusValue"    # I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 179
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "SUCCESS!! [setStatus] Service status value = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 180
    .local v0, "info":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$3;->this$0:Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->access$200(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;Ljava/lang/String;)V

    .line 181
    return-void
.end method
