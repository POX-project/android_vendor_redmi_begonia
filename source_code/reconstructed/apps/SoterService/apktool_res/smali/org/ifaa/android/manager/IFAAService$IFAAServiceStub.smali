.class final Lorg/ifaa/android/manager/IFAAService$IFAAServiceStub;
.super Lorg/ifaa/android/manager/IIFAAService$Stub;
.source "IFAAService.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lorg/ifaa/android/manager/IFAAService;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "IFAAServiceStub"
.end annotation


# instance fields
.field final synthetic this$0:Lorg/ifaa/android/manager/IFAAService;


# direct methods
.method constructor <init>(Lorg/ifaa/android/manager/IFAAService;Lorg/ifaa/android/manager/IFAAService;)V
    .locals 0

    .line 66
    iput-object p1, p0, Lorg/ifaa/android/manager/IFAAService$IFAAServiceStub;->this$0:Lorg/ifaa/android/manager/IFAAService;

    invoke-direct {p0}, Lorg/ifaa/android/manager/IIFAAService$Stub;-><init>()V

    .line 67
    new-instance p0, Ljava/lang/ref/WeakReference;

    invoke-direct {p0, p2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    return-void
.end method


# virtual methods
.method public getIDList(I)[I
    .locals 4

    const-string v0, "IFAAService"

    .line 95
    :try_start_0
    iget-object v1, p0, Lorg/ifaa/android/manager/IFAAService$IFAAServiceStub;->this$0:Lorg/ifaa/android/manager/IFAAService;

    invoke-static {v1}, Lorg/ifaa/android/manager/IFAAService;->access$000(Lorg/ifaa/android/manager/IFAAService;)V

    .line 96
    iget-object v1, p0, Lorg/ifaa/android/manager/IFAAService$IFAAServiceStub;->this$0:Lorg/ifaa/android/manager/IFAAService;

    invoke-static {v1}, Lorg/ifaa/android/manager/IFAAService;->access$100(Lorg/ifaa/android/manager/IFAAService;)Lvendor/xiaomi/hardware/mlipay/V1_1/IMlipayService;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 97
    iget-object p0, p0, Lorg/ifaa/android/manager/IFAAService$IFAAServiceStub;->this$0:Lorg/ifaa/android/manager/IFAAService;

    invoke-static {p0}, Lorg/ifaa/android/manager/IFAAService;->access$100(Lorg/ifaa/android/manager/IFAAService;)Lvendor/xiaomi/hardware/mlipay/V1_1/IMlipayService;

    move-result-object p0

    invoke-interface {p0, p1}, Lvendor/xiaomi/hardware/mlipay/V1_1/IMlipayService;->ifaa_get_idlist(I)Ljava/util/ArrayList;

    move-result-object p0

    .line 98
    invoke-virtual {p0}, Ljava/util/ArrayList;->size()I

    move-result p1

    .line 99
    new-array v1, p1, [I

    const/4 v2, 0x0

    :goto_0
    if-ge v2, p1, :cond_0

    .line 101
    invoke-virtual {p0, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    aput v3, v1, v2

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    return-object v1

    :cond_1
    const-string p0, "IMlipayService not found"

    .line 105
    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    .line 108
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "transact fail. "

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_1
    const/4 p0, 0x0

    return-object p0
.end method

.method public processCmd_v2([B)[B
    .locals 4

    const-string v0, "IFAAService"

    .line 73
    :try_start_0
    iget-object v1, p0, Lorg/ifaa/android/manager/IFAAService$IFAAServiceStub;->this$0:Lorg/ifaa/android/manager/IFAAService;

    invoke-static {v1}, Lorg/ifaa/android/manager/IFAAService;->access$000(Lorg/ifaa/android/manager/IFAAService;)V

    .line 74
    iget-object v1, p0, Lorg/ifaa/android/manager/IFAAService$IFAAServiceStub;->this$0:Lorg/ifaa/android/manager/IFAAService;

    invoke-static {v1}, Lorg/ifaa/android/manager/IFAAService;->access$100(Lorg/ifaa/android/manager/IFAAService;)Lvendor/xiaomi/hardware/mlipay/V1_1/IMlipayService;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 75
    new-instance v1, Ljava/util/ArrayList;

    iget-object v2, p0, Lorg/ifaa/android/manager/IFAAService$IFAAServiceStub;->this$0:Lorg/ifaa/android/manager/IFAAService;

    invoke-static {v2, p1}, Lorg/ifaa/android/manager/IFAAService;->access$200(Lorg/ifaa/android/manager/IFAAService;[B)[Ljava/lang/Byte;

    move-result-object p1

    invoke-static {p1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object p1

    invoke-direct {v1, p1}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    .line 76
    iget-object p0, p0, Lorg/ifaa/android/manager/IFAAService$IFAAServiceStub;->this$0:Lorg/ifaa/android/manager/IFAAService;

    invoke-static {p0}, Lorg/ifaa/android/manager/IFAAService;->access$100(Lorg/ifaa/android/manager/IFAAService;)Lvendor/xiaomi/hardware/mlipay/V1_1/IMlipayService;

    move-result-object p0

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result p1

    invoke-interface {p0, v1, p1}, Lvendor/xiaomi/hardware/mlipay/V1_0/IMlipayService;->invoke_command(Ljava/util/ArrayList;I)Ljava/util/ArrayList;

    move-result-object p0

    .line 77
    invoke-virtual {p0}, Ljava/util/ArrayList;->size()I

    move-result p1

    .line 78
    new-array v1, p1, [B

    const/4 v2, 0x0

    :goto_0
    if-ge v2, p1, :cond_0

    .line 80
    invoke-virtual {p0, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Byte;

    invoke-virtual {v3}, Ljava/lang/Byte;->byteValue()B

    move-result v3

    aput-byte v3, v1, v2

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    return-object v1

    :cond_1
    const-string p0, "IMlipayService not found"

    .line 84
    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    .line 87
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "transact fail. "

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_1
    const/4 p0, 0x0

    return-object p0
.end method
