.class Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity$2;
.super Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback$Stub;
.source "McfFileSelectActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;

    .line 161
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity$2;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;

    invoke-direct {p0}, Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback$Stub;-><init>()V

    return-void
.end method


# virtual methods
.method public callbackToClient(Ljava/lang/String;)Z
    .locals 2
    .param p1, "dataStr"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 164
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "callbackToClient data = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "McfConfig/McfFileSelectActivity"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 165
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity$2;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;

    invoke-virtual {v0, p1}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->setFilePathListFromServer(Ljava/lang/String;)V

    .line 166
    const/4 v0, 0x1

    return v0
.end method
