.class public Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;
.super Ljava/lang/Object;
.source "EmRadioHidlAosp.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp$CapRadioProxyDeathRecipient;
    }
.end annotation


# static fields
.field private static final EVENT_RADIO_PROXY_DEAD:I = 0x1

.field private static final HIDL_SERVICE_NAME:[Ljava/lang/String;

.field private static final IRADIO_GET_SERVICE_DELAY_MILLIS:I = 0x1f4

.field public static final TAG:Ljava/lang/String; = "EmRadioHidlAosp"

.field private static mCapRadioProxyDeathRecipient:Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp$CapRadioProxyDeathRecipient;

.field public static mHandler:Landroid/os/Handler;

.field private static mHandlerRadio:Landroid/os/Handler;

.field private static mIsRadioIndicationListen:Z

.field private static mIsRadioResponseListen:Z

.field private static mRadioIndicationMtk:Lcom/mediatek/engineermode/aospradio/RadioIndication;

.field public static mRadioIndicationType:I

.field private static mRadioProxyMtk:[Landroid/hardware/radio/V1_3/IRadio;

.field private static mRadioResponseMtk:Lcom/mediatek/engineermode/aospradio/RadioResponse;

.field public static mRequestList:Landroid/util/SparseArray;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/util/SparseArray<",
            "Landroid/os/Message;",
            ">;"
        }
    .end annotation
.end field

.field public static mWhat:I


# direct methods
.method static constructor <clinit>()V
    .locals 4

    .line 19
    const-string v0, "em1"

    const-string v1, "em2"

    const-string v2, "em3"

    const-string v3, "em4"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->HIDL_SERVICE_NAME:[Ljava/lang/String;

    .line 21
    new-instance v0, Landroid/util/SparseArray;

    invoke-direct {v0}, Landroid/util/SparseArray;-><init>()V

    sput-object v0, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRequestList:Landroid/util/SparseArray;

    .line 24
    const/4 v0, -0x1

    sput v0, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRadioIndicationType:I

    .line 25
    const/4 v0, 0x0

    sput-object v0, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRadioIndicationMtk:Lcom/mediatek/engineermode/aospradio/RadioIndication;

    .line 26
    sput-object v0, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRadioResponseMtk:Lcom/mediatek/engineermode/aospradio/RadioResponse;

    .line 27
    const/4 v1, 0x4

    new-array v1, v1, [Landroid/hardware/radio/V1_3/IRadio;

    sput-object v1, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRadioProxyMtk:[Landroid/hardware/radio/V1_3/IRadio;

    .line 28
    const/4 v1, 0x0

    sput-boolean v1, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mIsRadioIndicationListen:Z

    .line 29
    sput-boolean v1, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mIsRadioResponseListen:Z

    .line 31
    sput-object v0, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mCapRadioProxyDeathRecipient:Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp$CapRadioProxyDeathRecipient;

    .line 33
    new-instance v0, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp$1;

    invoke-direct {v0}, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp$1;-><init>()V

    sput-object v0, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mHandlerRadio:Landroid/os/Handler;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 17
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000(ILandroid/os/Message;)Landroid/hardware/radio/V1_3/IRadio;
    .locals 1
    .param p0, "x0"    # I
    .param p1, "x1"    # Landroid/os/Message;

    .line 17
    invoke-static {p0, p1}, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->getRadioProxy(ILandroid/os/Message;)Landroid/hardware/radio/V1_3/IRadio;

    move-result-object v0

    return-object v0
.end method

.method static synthetic access$100()Landroid/os/Handler;
    .locals 1

    .line 17
    sget-object v0, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mHandlerRadio:Landroid/os/Handler;

    return-object v0
.end method

.method public static getModemStatus(I)V
    .locals 4
    .param p0, "phoneId"    # I

    .line 110
    const/4 v0, 0x0

    invoke-static {p0, v0}, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->getRadioProxy(ILandroid/os/Message;)Landroid/hardware/radio/V1_3/IRadio;

    move-result-object v0

    .line 111
    .local v0, "radioProxy":Landroid/hardware/radio/V1_3/IRadio;
    const-string v1, "EmRadioHidlAosp"

    if-eqz v0, :cond_0

    .line 113
    const/4 v2, 0x0

    :try_start_0
    invoke-interface {v0, v2}, Landroid/hardware/radio/V1_3/IRadio;->getModemStackStatus(I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0
    .catch Ljava/lang/RuntimeException; {:try_start_0 .. :try_end_0} :catch_0

    .line 116
    :goto_0
    goto :goto_1

    .line 114
    :catch_0
    move-exception v2

    .line 115
    .local v2, "e":Ljava/lang/Exception;
    invoke-virtual {v2}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .end local v2    # "e":Ljava/lang/Exception;
    goto :goto_0

    .line 118
    :cond_0
    const-string v2, "radioProxy is null"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 120
    :goto_1
    return-void
.end method

.method private static getRadioProxy(ILandroid/os/Message;)Landroid/hardware/radio/V1_3/IRadio;
    .locals 6
    .param p0, "phoneId"    # I
    .param p1, "result"    # Landroid/os/Message;

    .line 49
    const-string v0, "EmRadioHidlAosp"

    sget-object v1, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mCapRadioProxyDeathRecipient:Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp$CapRadioProxyDeathRecipient;

    if-nez v1, :cond_0

    .line 50
    new-instance v1, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp$CapRadioProxyDeathRecipient;

    invoke-direct {v1}, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp$CapRadioProxyDeathRecipient;-><init>()V

    sput-object v1, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mCapRadioProxyDeathRecipient:Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp$CapRadioProxyDeathRecipient;

    .line 52
    :cond_0
    sget-object v1, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRadioIndicationMtk:Lcom/mediatek/engineermode/aospradio/RadioIndication;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    .line 53
    new-instance v1, Lcom/mediatek/engineermode/aospradio/RadioIndication;

    invoke-direct {v1, v2}, Lcom/mediatek/engineermode/aospradio/RadioIndication;-><init>(Lcom/android/internal/telephony/RIL;)V

    sput-object v1, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRadioIndicationMtk:Lcom/mediatek/engineermode/aospradio/RadioIndication;

    .line 55
    :cond_1
    sget-object v1, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRadioResponseMtk:Lcom/mediatek/engineermode/aospradio/RadioResponse;

    if-nez v1, :cond_2

    .line 56
    new-instance v1, Lcom/mediatek/engineermode/aospradio/RadioResponse;

    invoke-direct {v1, v2}, Lcom/mediatek/engineermode/aospradio/RadioResponse;-><init>(Lcom/android/internal/telephony/RIL;)V

    sput-object v1, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRadioResponseMtk:Lcom/mediatek/engineermode/aospradio/RadioResponse;

    .line 59
    :cond_2
    if-eqz p1, :cond_3

    .line 60
    sget-object v1, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRequestList:Landroid/util/SparseArray;

    iget v3, p1, Landroid/os/Message;->what:I

    invoke-virtual {v1, v3, p1}, Landroid/util/SparseArray;->append(ILjava/lang/Object;)V

    .line 64
    :cond_3
    :try_start_0
    sget-object v1, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRadioProxyMtk:[Landroid/hardware/radio/V1_3/IRadio;

    sget-object v3, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->HIDL_SERVICE_NAME:[Ljava/lang/String;

    aget-object v3, v3, p0

    const/4 v4, 0x0

    invoke-static {v3, v4}, Landroid/hardware/radio/V1_3/IRadio;->getService(Ljava/lang/String;Z)Landroid/hardware/radio/V1_3/IRadio;

    move-result-object v3

    aput-object v3, v1, p0

    .line 65
    sget-object v1, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRadioProxyMtk:[Landroid/hardware/radio/V1_3/IRadio;

    aget-object v1, v1, p0

    if-eqz v1, :cond_6

    .line 66
    sget-object v1, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRadioProxyMtk:[Landroid/hardware/radio/V1_3/IRadio;

    aget-object v1, v1, p0

    sget-boolean v3, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mIsRadioResponseListen:Z

    if-eqz v3, :cond_4

    sget-object v3, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRadioResponseMtk:Lcom/mediatek/engineermode/aospradio/RadioResponse;

    goto :goto_0

    :cond_4
    move-object v3, v2

    .line 67
    :goto_0
    sget-boolean v4, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mIsRadioIndicationListen:Z

    if-eqz v4, :cond_5

    sget-object v4, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRadioIndicationMtk:Lcom/mediatek/engineermode/aospradio/RadioIndication;

    goto :goto_1

    :cond_5
    move-object v4, v2

    .line 66
    :goto_1
    invoke-interface {v1, v3, v4}, Landroid/hardware/radio/V1_3/IRadio;->setResponseFunctions(Landroid/hardware/radio/V1_0/IRadioResponse;Landroid/hardware/radio/V1_0/IRadioIndication;)V

    .line 68
    sget-object v1, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRadioProxyMtk:[Landroid/hardware/radio/V1_3/IRadio;

    aget-object v1, v1, p0

    sget-object v3, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mCapRadioProxyDeathRecipient:Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp$CapRadioProxyDeathRecipient;

    const-wide/16 v4, 0x0

    invoke-interface {v1, v3, v4, v5}, Landroid/hardware/radio/V1_3/IRadio;->linkToDeath(Landroid/os/IHwBinder$DeathRecipient;J)Z

    .line 69
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "getAospRadioProxy succeed "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 71
    :cond_6
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "getAospRadioProxy failed "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0
    .catch Ljava/lang/RuntimeException; {:try_start_0 .. :try_end_0} :catch_0

    .line 79
    :goto_2
    goto :goto_3

    .line 73
    :catch_0
    move-exception v1

    .line 74
    .local v1, "e":Ljava/lang/Exception;
    sget-object v3, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRadioProxyMtk:[Landroid/hardware/radio/V1_3/IRadio;

    aput-object v2, v3, p0

    .line 75
    sget-object v2, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRadioResponseMtk:Lcom/mediatek/engineermode/aospradio/RadioResponse;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/aospradio/RadioResponse;->resetModemStatus()V

    .line 76
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "AospRadioProxy "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ", getService: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 77
    sget-object v0, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mHandlerRadio:Landroid/os/Handler;

    const/4 v2, 0x1

    invoke-virtual {v0, v2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v2

    const-wide/16 v3, 0x1f4

    invoke-virtual {v0, v2, v3, v4}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    .line 80
    .end local v1    # "e":Ljava/lang/Exception;
    :goto_3
    sget-object v0, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRadioProxyMtk:[Landroid/hardware/radio/V1_3/IRadio;

    aget-object v0, v0, p0

    return-object v0
.end method

.method public static mSetRadioIndicationAosp(ILandroid/os/Handler;IZ)V
    .locals 3
    .param p0, "phoneId"    # I
    .param p1, "handler"    # Landroid/os/Handler;
    .param p2, "what"    # I
    .param p3, "isRadioIndicationListen"    # Z

    .line 85
    sput-boolean p3, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mIsRadioIndicationListen:Z

    .line 86
    sput-object p1, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mHandler:Landroid/os/Handler;

    .line 87
    sput p2, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mWhat:I

    .line 88
    const/4 v0, 0x0

    invoke-static {p0, v0}, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->getRadioProxy(ILandroid/os/Message;)Landroid/hardware/radio/V1_3/IRadio;

    move-result-object v0

    .line 89
    .local v0, "radioProxy":Landroid/hardware/radio/V1_3/IRadio;
    const-string v1, "EmRadioHidlAosp"

    if-eqz v0, :cond_0

    .line 90
    const-string v2, "Set AospRadioIndication succeed"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 92
    :cond_0
    const-string v2, "AospRadioProxy is null"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 94
    :goto_0
    return-void
.end method

.method public static setRadioResponseAosp(ILandroid/os/Handler;IZ)V
    .locals 4
    .param p0, "phoneId"    # I
    .param p1, "handler"    # Landroid/os/Handler;
    .param p2, "what"    # I
    .param p3, "isRadioResponseListen"    # Z

    .line 98
    sput-boolean p3, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mIsRadioResponseListen:Z

    .line 99
    sput-object p1, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mHandler:Landroid/os/Handler;

    .line 100
    sput p2, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mWhat:I

    .line 101
    const/4 v0, 0x0

    invoke-static {p0, v0}, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->getRadioProxy(ILandroid/os/Message;)Landroid/hardware/radio/V1_3/IRadio;

    move-result-object v0

    .line 102
    .local v0, "radioProxy":Landroid/hardware/radio/V1_3/IRadio;
    const-string v1, "EmRadioHidlAosp"

    if-eqz v0, :cond_0

    .line 103
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Set AospRadioIndication succeed: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ", "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 105
    :cond_0
    const-string v2, "AospRadioProxy is null"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 107
    :goto_0
    return-void
.end method
