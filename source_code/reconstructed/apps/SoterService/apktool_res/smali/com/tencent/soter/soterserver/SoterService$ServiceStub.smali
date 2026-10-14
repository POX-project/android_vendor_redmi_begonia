.class final Lcom/tencent/soter/soterserver/SoterService$ServiceStub;
.super Lcom/tencent/soter/soterserver/ISoterService$Stub;
.source "SoterService.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tencent/soter/soterserver/SoterService;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "ServiceStub"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/tencent/soter/soterserver/SoterService;


# direct methods
.method constructor <init>(Lcom/tencent/soter/soterserver/SoterService;Lcom/tencent/soter/soterserver/SoterService;)V
    .locals 0

    .line 83
    iput-object p1, p0, Lcom/tencent/soter/soterserver/SoterService$ServiceStub;->this$0:Lcom/tencent/soter/soterserver/SoterService;

    invoke-direct {p0}, Lcom/tencent/soter/soterserver/ISoterService$Stub;-><init>()V

    .line 84
    new-instance p0, Ljava/lang/ref/WeakReference;

    invoke-direct {p0, p2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    return-void
.end method


# virtual methods
.method public aidlAuth()Ljava/lang/String;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const/4 p0, 0x0

    return-object p0
.end method

.method public finishSign(J)Lcom/tencent/soter/soterserver/SoterSignResult;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const-string v0, "SoterService"

    const-string v1, "finishSignImp in"

    .line 308
    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 309
    new-instance v1, Lcom/tencent/soter/soterserver/SoterSignResult;

    invoke-direct {v1}, Lcom/tencent/soter/soterserver/SoterSignResult;-><init>()V

    const-wide/16 v2, 0x0

    cmp-long v2, p1, v2

    if-nez v2, :cond_0

    const/16 v2, -0xcc

    .line 311
    iput v2, v1, Lcom/tencent/soter/soterserver/SoterSignResult;->resultCode:I

    .line 315
    :cond_0
    :try_start_0
    invoke-static {}, Lvendor/microtrust/hardware/soter/V1_0/ISoter;->getService()Lvendor/microtrust/hardware/soter/V1_0/ISoter;

    move-result-object v2

    if-eqz v2, :cond_1

    const-string v3, "start initSign"

    .line 317
    invoke-static {v0, v3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 318
    new-instance v3, Lcom/tencent/soter/soterserver/SoterService$ServiceStub$4;

    invoke-direct {v3, p0, v1}, Lcom/tencent/soter/soterserver/SoterService$ServiceStub$4;-><init>(Lcom/tencent/soter/soterserver/SoterService$ServiceStub;Lcom/tencent/soter/soterserver/SoterSignResult;)V

    invoke-interface {v2, p1, p2, v3}, Lvendor/microtrust/hardware/soter/V1_0/ISoter;->finishSign(JLvendor/microtrust/hardware/soter/V1_0/ISoter$finishSignCallback;)V

    goto :goto_0

    :cond_1
    const-string p0, "soterService is null"

    .line 327
    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 330
    invoke-virtual {p0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 332
    :goto_0
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p1, "finishSignImp errcode:"

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, v1, Lcom/tencent/soter/soterserver/SoterSignResult;->resultCode:I

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1
.end method

.method public generateAppSecureKey(I)I
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const-string p0, "SoterService"

    const-string p1, "generateAppSecureKey in"

    .line 89
    invoke-static {p0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const/16 p1, -0xc8

    .line 92
    :try_start_0
    invoke-static {}, Lvendor/microtrust/hardware/soter/V1_0/ISoter;->getService()Lvendor/microtrust/hardware/soter/V1_0/ISoter;

    move-result-object v0

    if-eqz v0, :cond_0

    const-string v1, "start generateAppSecureKey"

    .line 94
    invoke-static {p0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 95
    invoke-static {}, Landroid/os/Binder;->getCallingUid()I

    move-result v1

    .line 96
    invoke-interface {v0, v1}, Lvendor/microtrust/hardware/soter/V1_0/ISoter;->generateAskKeyPair(I)I

    move-result p1

    goto :goto_0

    :cond_0
    const-string v0, "soterService is null"

    .line 98
    invoke-static {p0, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 101
    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 103
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "generateAppSecureKey errcode:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return p1
.end method

.method public generateAuthKey(ILjava/lang/String;)I
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const-string p0, "SoterService"

    const-string p1, "generateAuthKey in"

    .line 154
    invoke-static {p0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz p2, :cond_2

    .line 155
    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result p1

    if-nez p1, :cond_0

    goto :goto_1

    :cond_0
    const/16 p1, -0xc8

    .line 160
    :try_start_0
    invoke-static {}, Lvendor/microtrust/hardware/soter/V1_0/ISoter;->getService()Lvendor/microtrust/hardware/soter/V1_0/ISoter;

    move-result-object v0

    if-eqz v0, :cond_1

    const-string v1, "start generateAuthKey"

    .line 162
    invoke-static {p0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 163
    invoke-static {}, Landroid/os/Binder;->getCallingUid()I

    move-result v1

    .line 164
    invoke-interface {v0, v1, p2}, Lvendor/microtrust/hardware/soter/V1_0/ISoter;->generateAuthKeyPair(ILjava/lang/String;)I

    move-result p1

    goto :goto_0

    :cond_1
    const-string p2, "soterService is null"

    .line 166
    invoke-static {p0, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p2

    .line 169
    invoke-virtual {p2}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p0, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 171
    :goto_0
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "generateAuthKey errcode:"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p0, p2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return p1

    :cond_2
    :goto_1
    const/16 p0, -0xca

    return p0
.end method

.method public getAppSecureKey(I)Lcom/tencent/soter/soterserver/SoterExportResult;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const-string p1, "SoterService"

    const-string v0, "getAppSecureKeyImp in"

    .line 109
    invoke-static {p1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 110
    new-instance v0, Lcom/tencent/soter/soterserver/SoterExportResult;

    invoke-direct {v0}, Lcom/tencent/soter/soterserver/SoterExportResult;-><init>()V

    const/16 v1, -0x3e8

    .line 111
    iput v1, v0, Lcom/tencent/soter/soterserver/SoterExportResult;->resultCode:I

    .line 113
    :try_start_0
    invoke-static {}, Lvendor/microtrust/hardware/soter/V1_0/ISoter;->getService()Lvendor/microtrust/hardware/soter/V1_0/ISoter;

    move-result-object v1

    if-eqz v1, :cond_0

    const-string v2, "start exportAskPublicKey"

    .line 115
    invoke-static {p1, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 116
    invoke-static {}, Landroid/os/Binder;->getCallingUid()I

    move-result v2

    .line 117
    new-instance v3, Lcom/tencent/soter/soterserver/SoterService$ServiceStub$1;

    invoke-direct {v3, p0, v0}, Lcom/tencent/soter/soterserver/SoterService$ServiceStub$1;-><init>(Lcom/tencent/soter/soterserver/SoterService$ServiceStub;Lcom/tencent/soter/soterserver/SoterExportResult;)V

    invoke-interface {v1, v2, v3}, Lvendor/microtrust/hardware/soter/V1_0/ISoter;->exportAskPublicKey(ILvendor/microtrust/hardware/soter/V1_0/ISoter$exportAskPublicKeyCallback;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    const/16 v1, -0xc8

    .line 127
    iput v1, v0, Lcom/tencent/soter/soterserver/SoterExportResult;->resultCode:I

    .line 128
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "exception"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    :goto_0
    return-object v0
.end method

.method public getAuthKey(ILjava/lang/String;)Lcom/tencent/soter/soterserver/SoterExportResult;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const-string p1, "SoterService"

    const-string v0, "getAuthKey in"

    .line 200
    invoke-static {p1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 201
    new-instance v0, Lcom/tencent/soter/soterserver/SoterExportResult;

    invoke-direct {v0}, Lcom/tencent/soter/soterserver/SoterExportResult;-><init>()V

    const/16 v1, -0x3e8

    .line 202
    iput v1, v0, Lcom/tencent/soter/soterserver/SoterExportResult;->resultCode:I

    if-eqz p2, :cond_2

    .line 203
    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result v1

    if-nez v1, :cond_0

    goto :goto_1

    .line 209
    :cond_0
    :try_start_0
    invoke-static {}, Lvendor/microtrust/hardware/soter/V1_0/ISoter;->getService()Lvendor/microtrust/hardware/soter/V1_0/ISoter;

    move-result-object v1

    if-eqz v1, :cond_1

    const-string v2, "start exportAuthKeyPublicKey"

    .line 211
    invoke-static {p1, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 212
    invoke-static {}, Landroid/os/Binder;->getCallingUid()I

    move-result v2

    .line 213
    new-instance v3, Lcom/tencent/soter/soterserver/SoterService$ServiceStub$2;

    invoke-direct {v3, p0, v0}, Lcom/tencent/soter/soterserver/SoterService$ServiceStub$2;-><init>(Lcom/tencent/soter/soterserver/SoterService$ServiceStub;Lcom/tencent/soter/soterserver/SoterExportResult;)V

    invoke-interface {v1, v2, p2, v3}, Lvendor/microtrust/hardware/soter/V1_0/ISoter;->exportAuthKeyPublicKey(ILjava/lang/String;Lvendor/microtrust/hardware/soter/V1_0/ISoter$exportAuthKeyPublicKeyCallback;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 223
    invoke-virtual {p0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 225
    :cond_1
    :goto_0
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "exportAuthKeyPublicKey errcode:"

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p2, v0, Lcom/tencent/soter/soterserver/SoterExportResult;->resultCode:I

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p1, p0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-object v0

    :cond_2
    :goto_1
    const/16 p0, -0xca

    .line 204
    iput p0, v0, Lcom/tencent/soter/soterserver/SoterExportResult;->resultCode:I

    return-object v0
.end method

.method public getDeviceId()Lcom/tencent/soter/soterserver/SoterDeviceResult;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const-string v0, "SoterService"

    const-string v1, "getDeviceIdImp in"

    .line 338
    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 339
    new-instance v1, Lcom/tencent/soter/soterserver/SoterDeviceResult;

    invoke-direct {v1}, Lcom/tencent/soter/soterserver/SoterDeviceResult;-><init>()V

    .line 341
    :try_start_0
    invoke-static {}, Lvendor/microtrust/hardware/soter/V1_0/ISoter;->getService()Lvendor/microtrust/hardware/soter/V1_0/ISoter;

    move-result-object v2

    if-eqz v2, :cond_0

    const-string v3, "start getDeviceId"

    .line 343
    invoke-static {v0, v3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 344
    new-instance v3, Lcom/tencent/soter/soterserver/SoterService$ServiceStub$5;

    invoke-direct {v3, p0, v1}, Lcom/tencent/soter/soterserver/SoterService$ServiceStub$5;-><init>(Lcom/tencent/soter/soterserver/SoterService$ServiceStub;Lcom/tencent/soter/soterserver/SoterDeviceResult;)V

    invoke-interface {v2, v3}, Lvendor/microtrust/hardware/soter/V1_0/ISoter;->getDeviceId(Lvendor/microtrust/hardware/soter/V1_0/ISoter$getDeviceIdCallback;)V

    goto :goto_0

    :cond_0
    const-string p0, "soterService is null"

    .line 353
    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 356
    invoke-virtual {p0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 358
    :goto_0
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getDeviceId errcode:"

    invoke-virtual {p0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, v1, Lcom/tencent/soter/soterserver/SoterDeviceResult;->resultCode:I

    invoke-virtual {p0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1
.end method

.method public getVersion()I
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const/4 p0, 0x2

    return p0
.end method

.method public hasAskAlready(I)Z
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const-string p0, "SoterService"

    const-string p1, "hasAskAlready called"

    .line 135
    invoke-static {p0, p1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    const/16 p1, -0x3e8

    .line 138
    :try_start_0
    invoke-static {}, Lvendor/microtrust/hardware/soter/V1_0/ISoter;->getService()Lvendor/microtrust/hardware/soter/V1_0/ISoter;

    move-result-object v0

    if-eqz v0, :cond_0

    const-string v1, "start hasAskAlready"

    .line 140
    invoke-static {p0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 141
    invoke-static {}, Landroid/os/Binder;->getCallingUid()I

    move-result v1

    .line 142
    invoke-interface {v0, v1}, Lvendor/microtrust/hardware/soter/V1_0/ISoter;->hasAskAlready(I)I

    move-result p0

    move p1, p0

    goto :goto_0

    :cond_0
    const-string v0, "soterService is null"

    .line 144
    invoke-static {p0, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 147
    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    if-nez p1, :cond_1

    const/4 p0, 0x1

    goto :goto_1

    :cond_1
    const/4 p0, 0x0

    :goto_1
    return p0
.end method

.method public hasAuthKey(ILjava/lang/String;)Z
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const-string p0, "SoterService"

    const-string p1, "hasAuthKey in"

    .line 251
    invoke-static {p0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const/4 p1, 0x0

    if-eqz p2, :cond_3

    .line 252
    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_1

    :cond_0
    const/16 v0, -0x3e8

    .line 258
    :try_start_0
    invoke-static {}, Lvendor/microtrust/hardware/soter/V1_0/ISoter;->getService()Lvendor/microtrust/hardware/soter/V1_0/ISoter;

    move-result-object v1

    if-eqz v1, :cond_1

    const-string v2, "start hasAuthKeyImp"

    .line 260
    invoke-static {p0, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 261
    invoke-static {}, Landroid/os/Binder;->getCallingUid()I

    move-result v2

    .line 262
    invoke-interface {v1, v2, p2}, Lvendor/microtrust/hardware/soter/V1_0/ISoter;->hasAuthKey(ILjava/lang/String;)I

    move-result p0

    move v0, p0

    goto :goto_0

    :cond_1
    const-string p2, "soterService is null"

    .line 264
    invoke-static {p0, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p2

    .line 267
    invoke-virtual {p2}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p0, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    if-nez v0, :cond_2

    const/4 p1, 0x1

    :cond_2
    return p1

    :cond_3
    :goto_1
    const-string p2, "kname is null"

    .line 253
    invoke-static {p0, p2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return p1
.end method

.method public initSigh(ILjava/lang/String;Ljava/lang/String;)Lcom/tencent/soter/soterserver/SoterSessionResult;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const-string p1, "SoterService"

    const-string v0, "initSigh in"

    .line 274
    invoke-static {p1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 275
    new-instance v0, Lcom/tencent/soter/soterserver/SoterSessionResult;

    invoke-direct {v0}, Lcom/tencent/soter/soterserver/SoterSessionResult;-><init>()V

    if-eqz p2, :cond_4

    .line 276
    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result v1

    if-nez v1, :cond_0

    goto :goto_2

    :cond_0
    if-eqz p3, :cond_3

    .line 281
    invoke-virtual {p3}, Ljava/lang/String;->length()I

    move-result v1

    if-nez v1, :cond_1

    goto :goto_1

    .line 287
    :cond_1
    :try_start_0
    invoke-static {}, Lvendor/microtrust/hardware/soter/V1_0/ISoter;->getService()Lvendor/microtrust/hardware/soter/V1_0/ISoter;

    move-result-object v1

    if-eqz v1, :cond_2

    const-string v2, "start initSign"

    .line 289
    invoke-static {p1, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 290
    invoke-static {}, Landroid/os/Binder;->getCallingUid()I

    move-result v2

    .line 291
    new-instance v3, Lcom/tencent/soter/soterserver/SoterService$ServiceStub$3;

    invoke-direct {v3, p0, v0}, Lcom/tencent/soter/soterserver/SoterService$ServiceStub$3;-><init>(Lcom/tencent/soter/soterserver/SoterService$ServiceStub;Lcom/tencent/soter/soterserver/SoterSessionResult;)V

    invoke-interface {v1, v2, p2, p3, v3}, Lvendor/microtrust/hardware/soter/V1_0/ISoter;->initSign(ILjava/lang/String;Ljava/lang/String;Lvendor/microtrust/hardware/soter/V1_0/ISoter$initSignCallback;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 300
    invoke-virtual {p0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 302
    :cond_2
    :goto_0
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "initSign errcode:"

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p2, v0, Lcom/tencent/soter/soterserver/SoterSessionResult;->resultCode:I

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p1, p0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-object v0

    :cond_3
    :goto_1
    const/16 p0, -0xcb

    .line 282
    iput p0, v0, Lcom/tencent/soter/soterserver/SoterSessionResult;->resultCode:I

    return-object v0

    :cond_4
    :goto_2
    const/16 p0, -0xca

    .line 277
    iput p0, v0, Lcom/tencent/soter/soterserver/SoterSessionResult;->resultCode:I

    return-object v0
.end method

.method public removeAllAuthKey(I)I
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const-string p0, "SoterService"

    const-string p1, "removeAllAuthKey in"

    .line 231
    invoke-static {p0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const/16 p1, -0xc8

    .line 234
    :try_start_0
    invoke-static {}, Lvendor/microtrust/hardware/soter/V1_0/ISoter;->getService()Lvendor/microtrust/hardware/soter/V1_0/ISoter;

    move-result-object v0

    if-eqz v0, :cond_0

    const-string v1, "start removeAllAuthKey"

    .line 236
    invoke-static {p0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 237
    invoke-static {}, Landroid/os/Binder;->getCallingUid()I

    move-result v1

    .line 238
    invoke-interface {v0, v1}, Lvendor/microtrust/hardware/soter/V1_0/ISoter;->removeAllUidKey(I)I

    move-result p1

    goto :goto_0

    :cond_0
    const-string v0, "soterService is null"

    .line 240
    invoke-static {p0, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 243
    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 245
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "removeAllAuthKeyImp errcode:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return p1
.end method

.method public removeAuthKey(ILjava/lang/String;)I
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const-string p0, "SoterService"

    const-string p1, "removeAuthKey in"

    .line 177
    invoke-static {p0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz p2, :cond_2

    .line 178
    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result p1

    if-nez p1, :cond_0

    goto :goto_1

    :cond_0
    const/16 p1, -0xc8

    .line 183
    :try_start_0
    invoke-static {}, Lvendor/microtrust/hardware/soter/V1_0/ISoter;->getService()Lvendor/microtrust/hardware/soter/V1_0/ISoter;

    move-result-object v0

    if-eqz v0, :cond_1

    const-string v1, "start removeAuthKey"

    .line 185
    invoke-static {p0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 186
    invoke-static {}, Landroid/os/Binder;->getCallingUid()I

    move-result v1

    .line 187
    invoke-interface {v0, v1, p2}, Lvendor/microtrust/hardware/soter/V1_0/ISoter;->removeAuthKey(ILjava/lang/String;)I

    move-result p1

    goto :goto_0

    :cond_1
    const-string p2, "soterService is null"

    .line 189
    invoke-static {p0, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p2

    .line 192
    invoke-virtual {p2}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p0, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 194
    :goto_0
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "removeAuthKeyImp errcode:"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p0, p2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return p1

    :cond_2
    :goto_1
    const/16 p0, -0xca

    return p0
.end method
