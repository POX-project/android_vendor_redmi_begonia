.class Lcom/tencent/soter/soterserver/SoterService$ServiceStub$3;
.super Ljava/lang/Object;
.source "SoterService.java"

# interfaces
.implements Lvendor/microtrust/hardware/soter/V1_0/ISoter$initSignCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tencent/soter/soterserver/SoterService$ServiceStub;->initSigh(ILjava/lang/String;Ljava/lang/String;)Lcom/tencent/soter/soterserver/SoterSessionResult;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic val$result:Lcom/tencent/soter/soterserver/SoterSessionResult;


# direct methods
.method constructor <init>(Lcom/tencent/soter/soterserver/SoterService$ServiceStub;Lcom/tencent/soter/soterserver/SoterSessionResult;)V
    .locals 0

    .line 291
    iput-object p2, p0, Lcom/tencent/soter/soterserver/SoterService$ServiceStub$3;->val$result:Lcom/tencent/soter/soterserver/SoterSessionResult;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onValues(IJ)V
    .locals 0

    .line 294
    iget-object p0, p0, Lcom/tencent/soter/soterserver/SoterService$ServiceStub$3;->val$result:Lcom/tencent/soter/soterserver/SoterSessionResult;

    iput-wide p2, p0, Lcom/tencent/soter/soterserver/SoterSessionResult;->session:J

    .line 295
    iput p1, p0, Lcom/tencent/soter/soterserver/SoterSessionResult;->resultCode:I

    return-void
.end method
