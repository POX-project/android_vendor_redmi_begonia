.class Lcom/tencent/soter/soterserver/SoterService$ServiceStub$5;
.super Ljava/lang/Object;
.source "SoterService.java"

# interfaces
.implements Lvendor/microtrust/hardware/soter/V1_0/ISoter$getDeviceIdCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tencent/soter/soterserver/SoterService$ServiceStub;->getDeviceId()Lcom/tencent/soter/soterserver/SoterDeviceResult;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/tencent/soter/soterserver/SoterService$ServiceStub;

.field final synthetic val$result:Lcom/tencent/soter/soterserver/SoterDeviceResult;


# direct methods
.method constructor <init>(Lcom/tencent/soter/soterserver/SoterService$ServiceStub;Lcom/tencent/soter/soterserver/SoterDeviceResult;)V
    .locals 0

    .line 344
    iput-object p1, p0, Lcom/tencent/soter/soterserver/SoterService$ServiceStub$5;->this$1:Lcom/tencent/soter/soterserver/SoterService$ServiceStub;

    iput-object p2, p0, Lcom/tencent/soter/soterserver/SoterService$ServiceStub$5;->val$result:Lcom/tencent/soter/soterserver/SoterDeviceResult;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onValues(ILjava/util/ArrayList;I)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;I)V"
        }
    .end annotation

    .line 347
    iget-object v0, p0, Lcom/tencent/soter/soterserver/SoterService$ServiceStub$5;->val$result:Lcom/tencent/soter/soterserver/SoterDeviceResult;

    iput p1, v0, Lcom/tencent/soter/soterserver/SoterDeviceResult;->resultCode:I

    .line 348
    iget-object p1, p0, Lcom/tencent/soter/soterserver/SoterService$ServiceStub$5;->this$1:Lcom/tencent/soter/soterserver/SoterService$ServiceStub;

    iget-object p1, p1, Lcom/tencent/soter/soterserver/SoterService$ServiceStub;->this$0:Lcom/tencent/soter/soterserver/SoterService;

    invoke-static {p1, p2}, Lcom/tencent/soter/soterserver/SoterService;->access$000(Lcom/tencent/soter/soterserver/SoterService;Ljava/util/List;)[B

    move-result-object p1

    iput-object p1, v0, Lcom/tencent/soter/soterserver/SoterDeviceResult;->exportData:[B

    .line 349
    iget-object p0, p0, Lcom/tencent/soter/soterserver/SoterService$ServiceStub$5;->val$result:Lcom/tencent/soter/soterserver/SoterDeviceResult;

    iput p3, p0, Lcom/tencent/soter/soterserver/SoterDeviceResult;->exportDataLength:I

    return-void
.end method
