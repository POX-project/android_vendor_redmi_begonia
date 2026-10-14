.class Lcom/tencent/soter/soterserver/SoterService$ServiceStub$2;
.super Ljava/lang/Object;
.source "SoterService.java"

# interfaces
.implements Lvendor/microtrust/hardware/soter/V1_0/ISoter$exportAuthKeyPublicKeyCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tencent/soter/soterserver/SoterService$ServiceStub;->getAuthKey(ILjava/lang/String;)Lcom/tencent/soter/soterserver/SoterExportResult;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/tencent/soter/soterserver/SoterService$ServiceStub;

.field final synthetic val$result:Lcom/tencent/soter/soterserver/SoterExportResult;


# direct methods
.method constructor <init>(Lcom/tencent/soter/soterserver/SoterService$ServiceStub;Lcom/tencent/soter/soterserver/SoterExportResult;)V
    .locals 0

    .line 213
    iput-object p1, p0, Lcom/tencent/soter/soterserver/SoterService$ServiceStub$2;->this$1:Lcom/tencent/soter/soterserver/SoterService$ServiceStub;

    iput-object p2, p0, Lcom/tencent/soter/soterserver/SoterService$ServiceStub$2;->val$result:Lcom/tencent/soter/soterserver/SoterExportResult;

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

    .line 216
    iget-object v0, p0, Lcom/tencent/soter/soterserver/SoterService$ServiceStub$2;->val$result:Lcom/tencent/soter/soterserver/SoterExportResult;

    iput p1, v0, Lcom/tencent/soter/soterserver/SoterExportResult;->resultCode:I

    .line 217
    iget-object p1, p0, Lcom/tencent/soter/soterserver/SoterService$ServiceStub$2;->this$1:Lcom/tencent/soter/soterserver/SoterService$ServiceStub;

    iget-object p1, p1, Lcom/tencent/soter/soterserver/SoterService$ServiceStub;->this$0:Lcom/tencent/soter/soterserver/SoterService;

    invoke-static {p1, p2}, Lcom/tencent/soter/soterserver/SoterService;->access$000(Lcom/tencent/soter/soterserver/SoterService;Ljava/util/List;)[B

    move-result-object p1

    iput-object p1, v0, Lcom/tencent/soter/soterserver/SoterExportResult;->exportData:[B

    .line 218
    iget-object p0, p0, Lcom/tencent/soter/soterserver/SoterService$ServiceStub$2;->val$result:Lcom/tencent/soter/soterserver/SoterExportResult;

    iput p3, p0, Lcom/tencent/soter/soterserver/SoterExportResult;->exportDataLength:I

    return-void
.end method
