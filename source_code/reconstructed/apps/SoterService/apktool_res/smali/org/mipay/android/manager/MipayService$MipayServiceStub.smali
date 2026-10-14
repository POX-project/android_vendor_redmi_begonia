.class final Lorg/mipay/android/manager/MipayService$MipayServiceStub;
.super Lorg/mipay/android/manager/IMipayService$Stub;
.source "MipayService.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lorg/mipay/android/manager/MipayService;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "MipayServiceStub"
.end annotation


# instance fields
.field final synthetic this$0:Lorg/mipay/android/manager/MipayService;


# direct methods
.method constructor <init>(Lorg/mipay/android/manager/MipayService;Lorg/mipay/android/manager/MipayService;)V
    .locals 0

    .line 58
    iput-object p1, p0, Lorg/mipay/android/manager/MipayService$MipayServiceStub;->this$0:Lorg/mipay/android/manager/MipayService;

    invoke-direct {p0}, Lorg/mipay/android/manager/IMipayService$Stub;-><init>()V

    .line 59
    new-instance p0, Ljava/lang/ref/WeakReference;

    invoke-direct {p0, p2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    return-void
.end method


# virtual methods
.method public contains(ILjava/lang/String;)Z
    .locals 3

    const-string v0, "MipayService"

    const/4 v1, 0x0

    .line 66
    :try_start_0
    iget-object v2, p0, Lorg/mipay/android/manager/MipayService$MipayServiceStub;->this$0:Lorg/mipay/android/manager/MipayService;

    invoke-static {v2}, Lorg/mipay/android/manager/MipayService;->access$000(Lorg/mipay/android/manager/MipayService;)V

    .line 67
    iget-object v2, p0, Lorg/mipay/android/manager/MipayService$MipayServiceStub;->this$0:Lorg/mipay/android/manager/MipayService;

    invoke-static {v2}, Lorg/mipay/android/manager/MipayService;->access$100(Lorg/mipay/android/manager/MipayService;)Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 68
    iget-object p0, p0, Lorg/mipay/android/manager/MipayService$MipayServiceStub;->this$0:Lorg/mipay/android/manager/MipayService;

    invoke-static {p0}, Lorg/mipay/android/manager/MipayService;->access$100(Lorg/mipay/android/manager/MipayService;)Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;

    move-result-object p0

    invoke-interface {p0, p1, p2}, Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;->contains_1_1(ILjava/lang/String;)Z

    move-result v1

    goto :goto_0

    :cond_0
    const-string p0, "ITidaService not found"

    .line 70
    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 73
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "transact fail. "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return v1
.end method

.method public generateKeyPair(ILjava/lang/String;Ljava/lang/String;)I
    .locals 3

    const-string v0, "MipayService"

    const/4 v1, -0x1

    .line 83
    :try_start_0
    iget-object v2, p0, Lorg/mipay/android/manager/MipayService$MipayServiceStub;->this$0:Lorg/mipay/android/manager/MipayService;

    invoke-static {v2}, Lorg/mipay/android/manager/MipayService;->access$000(Lorg/mipay/android/manager/MipayService;)V

    .line 84
    iget-object v2, p0, Lorg/mipay/android/manager/MipayService$MipayServiceStub;->this$0:Lorg/mipay/android/manager/MipayService;

    invoke-static {v2}, Lorg/mipay/android/manager/MipayService;->access$100(Lorg/mipay/android/manager/MipayService;)Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 85
    iget-object p0, p0, Lorg/mipay/android/manager/MipayService$MipayServiceStub;->this$0:Lorg/mipay/android/manager/MipayService;

    invoke-static {p0}, Lorg/mipay/android/manager/MipayService;->access$100(Lorg/mipay/android/manager/MipayService;)Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;

    move-result-object p0

    invoke-interface {p0, p1, p2, p3}, Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;->generateKeyPair_1_1(ILjava/lang/String;Ljava/lang/String;)I

    move-result v1

    goto :goto_0

    :cond_0
    const-string p0, "ITidaService not found"

    .line 87
    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 90
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "transact fail. "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return v1
.end method

.method public getFpIds()Ljava/lang/String;
    .locals 4

    const-string v0, "MipayService"

    const-string v1, ""

    .line 173
    :try_start_0
    iget-object v2, p0, Lorg/mipay/android/manager/MipayService$MipayServiceStub;->this$0:Lorg/mipay/android/manager/MipayService;

    invoke-static {v2}, Lorg/mipay/android/manager/MipayService;->access$000(Lorg/mipay/android/manager/MipayService;)V

    .line 174
    iget-object v2, p0, Lorg/mipay/android/manager/MipayService$MipayServiceStub;->this$0:Lorg/mipay/android/manager/MipayService;

    invoke-static {v2}, Lorg/mipay/android/manager/MipayService;->access$100(Lorg/mipay/android/manager/MipayService;)Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 175
    iget-object p0, p0, Lorg/mipay/android/manager/MipayService$MipayServiceStub;->this$0:Lorg/mipay/android/manager/MipayService;

    invoke-static {p0}, Lorg/mipay/android/manager/MipayService;->access$100(Lorg/mipay/android/manager/MipayService;)Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;

    move-result-object p0

    invoke-interface {p0}, Lvendor/xiaomi/hardware/tidaservice/V1_0/ITidaService;->getFpIds()Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_0
    const-string p0, "ITidaService not found"

    .line 177
    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 180
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "transact fail. "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return-object v1
.end method

.method public removeAllKey(I)I
    .locals 3

    const-string v0, "MipayService"

    const/4 v1, -0x1

    .line 156
    :try_start_0
    iget-object v2, p0, Lorg/mipay/android/manager/MipayService$MipayServiceStub;->this$0:Lorg/mipay/android/manager/MipayService;

    invoke-static {v2}, Lorg/mipay/android/manager/MipayService;->access$000(Lorg/mipay/android/manager/MipayService;)V

    .line 157
    iget-object v2, p0, Lorg/mipay/android/manager/MipayService$MipayServiceStub;->this$0:Lorg/mipay/android/manager/MipayService;

    invoke-static {v2}, Lorg/mipay/android/manager/MipayService;->access$100(Lorg/mipay/android/manager/MipayService;)Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 158
    iget-object p0, p0, Lorg/mipay/android/manager/MipayService$MipayServiceStub;->this$0:Lorg/mipay/android/manager/MipayService;

    invoke-static {p0}, Lorg/mipay/android/manager/MipayService;->access$100(Lorg/mipay/android/manager/MipayService;)Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;

    move-result-object p0

    invoke-interface {p0, p1}, Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;->removeAllKey_1_1(I)I

    move-result v1

    goto :goto_0

    :cond_0
    const-string p0, "ITidaService not found"

    .line 160
    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 163
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "transact fail. "

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return v1
.end method

.method public sign()[B
    .locals 5

    const-string v0, "MipayService"

    .line 133
    :try_start_0
    iget-object v1, p0, Lorg/mipay/android/manager/MipayService$MipayServiceStub;->this$0:Lorg/mipay/android/manager/MipayService;

    invoke-static {v1}, Lorg/mipay/android/manager/MipayService;->access$000(Lorg/mipay/android/manager/MipayService;)V

    .line 134
    iget-object v1, p0, Lorg/mipay/android/manager/MipayService$MipayServiceStub;->this$0:Lorg/mipay/android/manager/MipayService;

    invoke-static {v1}, Lorg/mipay/android/manager/MipayService;->access$100(Lorg/mipay/android/manager/MipayService;)Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 135
    iget-object p0, p0, Lorg/mipay/android/manager/MipayService$MipayServiceStub;->this$0:Lorg/mipay/android/manager/MipayService;

    invoke-static {p0}, Lorg/mipay/android/manager/MipayService;->access$100(Lorg/mipay/android/manager/MipayService;)Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;

    move-result-object p0

    invoke-interface {p0}, Lvendor/xiaomi/hardware/tidaservice/V1_0/ITidaService;->sign()Ljava/util/ArrayList;

    move-result-object p0

    .line 136
    invoke-virtual {p0}, Ljava/util/ArrayList;->size()I

    move-result v1

    .line 137
    new-array v2, v1, [B

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v1, :cond_0

    .line 139
    invoke-virtual {p0, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Byte;

    invoke-virtual {v4}, Ljava/lang/Byte;->byteValue()B

    move-result v4

    aput-byte v4, v2, v3

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_0
    return-object v2

    :cond_1
    const-string p0, "ITidaService not found"

    .line 143
    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    .line 146
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "transact fail. "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_1
    const-string p0, "sign fail, return null"

    .line 148
    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const/4 p0, 0x0

    return-object p0
.end method

.method public signInit(ILjava/lang/String;Ljava/lang/String;)I
    .locals 3

    const-string v0, "MipayService"

    const/4 v1, -0x1

    .line 100
    :try_start_0
    iget-object v2, p0, Lorg/mipay/android/manager/MipayService$MipayServiceStub;->this$0:Lorg/mipay/android/manager/MipayService;

    invoke-static {v2}, Lorg/mipay/android/manager/MipayService;->access$000(Lorg/mipay/android/manager/MipayService;)V

    .line 101
    iget-object v2, p0, Lorg/mipay/android/manager/MipayService$MipayServiceStub;->this$0:Lorg/mipay/android/manager/MipayService;

    invoke-static {v2}, Lorg/mipay/android/manager/MipayService;->access$100(Lorg/mipay/android/manager/MipayService;)Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 102
    iget-object p0, p0, Lorg/mipay/android/manager/MipayService$MipayServiceStub;->this$0:Lorg/mipay/android/manager/MipayService;

    invoke-static {p0}, Lorg/mipay/android/manager/MipayService;->access$100(Lorg/mipay/android/manager/MipayService;)Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;

    move-result-object p0

    invoke-interface {p0, p1, p2, p3}, Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;->signInit_1_1(ILjava/lang/String;Ljava/lang/String;)I

    move-result v1

    goto :goto_0

    :cond_0
    const-string p0, "ITidaService not found"

    .line 104
    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 107
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "transact fail. "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return v1
.end method

.method public signUpdate(ILjava/lang/String;)I
    .locals 3

    const-string v0, "MipayService"

    const/4 v1, -0x1

    .line 117
    :try_start_0
    iget-object v2, p0, Lorg/mipay/android/manager/MipayService$MipayServiceStub;->this$0:Lorg/mipay/android/manager/MipayService;

    invoke-static {v2}, Lorg/mipay/android/manager/MipayService;->access$000(Lorg/mipay/android/manager/MipayService;)V

    .line 118
    iget-object v2, p0, Lorg/mipay/android/manager/MipayService$MipayServiceStub;->this$0:Lorg/mipay/android/manager/MipayService;

    invoke-static {v2}, Lorg/mipay/android/manager/MipayService;->access$100(Lorg/mipay/android/manager/MipayService;)Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 119
    iget-object p0, p0, Lorg/mipay/android/manager/MipayService$MipayServiceStub;->this$0:Lorg/mipay/android/manager/MipayService;

    invoke-static {p0}, Lorg/mipay/android/manager/MipayService;->access$100(Lorg/mipay/android/manager/MipayService;)Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;

    move-result-object p0

    invoke-interface {p0, p1, p2}, Lvendor/xiaomi/hardware/tidaservice/V1_1/ITidaService;->signUpdate_1_1(ILjava/lang/String;)I

    move-result v1

    goto :goto_0

    :cond_0
    const-string p0, "ITidaService not found"

    .line 121
    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 124
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "transact fail. "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return v1
.end method
