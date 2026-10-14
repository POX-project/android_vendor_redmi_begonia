.class Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$9;
.super Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback$Stub;
.source "McfConfigActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 1474
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$9;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

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

    .line 1477
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "callbackToClient data = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "McfConfig"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1478
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$9;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setFileList(Ljava/lang/String;)V

    .line 1479
    const/4 v0, 0x1

    return v0
.end method
