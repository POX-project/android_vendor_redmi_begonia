.class public Lcom/mediatek/engineermode/EmRadioHidl;
.super Ljava/lang/Object;
.source "EmRadioHidl.java"


# static fields
.field private static final HIDL_SERVICE_NAME:[Ljava/lang/String;

.field public static final TAG:Ljava/lang/String; = "EmRadioHidl"

.field public static mHandler:Landroid/os/Handler;

.field private static mIsRadioIndicationListen:Z

.field private static mRadioIndicationMtk:Lcom/mediatek/engineermode/MtkRadioIndication;

.field public static mRadioIndicationType:I

.field private static mRadioProxyMtk:[Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;

.field private static mRadioResponseMtk:Lcom/mediatek/engineermode/MtkRadioResponseBase;

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

    .line 16
    const-string v0, "mtkEm1"

    const-string v1, "mtkEm2"

    const-string v2, "mtkEm3"

    const-string v3, "mtkEm4"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/EmRadioHidl;->HIDL_SERVICE_NAME:[Ljava/lang/String;

    .line 17
    new-instance v0, Landroid/util/SparseArray;

    invoke-direct {v0}, Landroid/util/SparseArray;-><init>()V

    sput-object v0, Lcom/mediatek/engineermode/EmRadioHidl;->mRequestList:Landroid/util/SparseArray;

    .line 20
    const/4 v0, -0x1

    sput v0, Lcom/mediatek/engineermode/EmRadioHidl;->mRadioIndicationType:I

    .line 21
    const/4 v0, 0x0

    sput-object v0, Lcom/mediatek/engineermode/EmRadioHidl;->mRadioResponseMtk:Lcom/mediatek/engineermode/MtkRadioResponseBase;

    .line 22
    sput-object v0, Lcom/mediatek/engineermode/EmRadioHidl;->mRadioIndicationMtk:Lcom/mediatek/engineermode/MtkRadioIndication;

    .line 23
    const/4 v0, 0x4

    new-array v0, v0, [Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;

    sput-object v0, Lcom/mediatek/engineermode/EmRadioHidl;->mRadioProxyMtk:[Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;

    .line 24
    const/4 v0, 0x0

    sput-boolean v0, Lcom/mediatek/engineermode/EmRadioHidl;->mIsRadioIndicationListen:Z

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static getRadioProxy(ILandroid/os/Message;)Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;
    .locals 5
    .param p0, "phoneId"    # I
    .param p1, "result"    # Landroid/os/Message;

    .line 28
    const-string v0, "EmRadioHidl"

    sget-object v1, Lcom/mediatek/engineermode/EmRadioHidl;->mRadioResponseMtk:Lcom/mediatek/engineermode/MtkRadioResponseBase;

    const/4 v2, 0x0

    if-nez v1, :cond_0

    .line 29
    new-instance v1, Lcom/mediatek/engineermode/MtkRadioResponseBase;

    invoke-direct {v1, v2}, Lcom/mediatek/engineermode/MtkRadioResponseBase;-><init>(Lcom/android/internal/telephony/RIL;)V

    sput-object v1, Lcom/mediatek/engineermode/EmRadioHidl;->mRadioResponseMtk:Lcom/mediatek/engineermode/MtkRadioResponseBase;

    .line 32
    :cond_0
    sget-object v1, Lcom/mediatek/engineermode/EmRadioHidl;->mRadioIndicationMtk:Lcom/mediatek/engineermode/MtkRadioIndication;

    if-nez v1, :cond_1

    .line 33
    new-instance v1, Lcom/mediatek/engineermode/MtkRadioIndication;

    invoke-direct {v1, v2}, Lcom/mediatek/engineermode/MtkRadioIndication;-><init>(Lcom/android/internal/telephony/RIL;)V

    sput-object v1, Lcom/mediatek/engineermode/EmRadioHidl;->mRadioIndicationMtk:Lcom/mediatek/engineermode/MtkRadioIndication;

    .line 36
    :cond_1
    if-eqz p1, :cond_2

    .line 37
    sget-object v1, Lcom/mediatek/engineermode/EmRadioHidl;->mRequestList:Landroid/util/SparseArray;

    iget v3, p1, Landroid/os/Message;->what:I

    invoke-virtual {v1, v3, p1}, Landroid/util/SparseArray;->append(ILjava/lang/Object;)V

    .line 41
    :cond_2
    :try_start_0
    sget-object v1, Lcom/mediatek/engineermode/EmRadioHidl;->mRadioProxyMtk:[Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;

    sget-object v3, Lcom/mediatek/engineermode/EmRadioHidl;->HIDL_SERVICE_NAME:[Ljava/lang/String;

    aget-object v3, v3, p0

    const/4 v4, 0x0

    invoke-static {v3, v4}, Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;->getService(Ljava/lang/String;Z)Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;

    move-result-object v3

    aput-object v3, v1, p0

    .line 42
    sget-object v1, Lcom/mediatek/engineermode/EmRadioHidl;->mRadioProxyMtk:[Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;

    aget-object v1, v1, p0

    if-eqz v1, :cond_4

    .line 43
    sget-object v1, Lcom/mediatek/engineermode/EmRadioHidl;->mRadioProxyMtk:[Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;

    aget-object v1, v1, p0

    sget-object v3, Lcom/mediatek/engineermode/EmRadioHidl;->mRadioResponseMtk:Lcom/mediatek/engineermode/MtkRadioResponseBase;

    .line 44
    sget-boolean v4, Lcom/mediatek/engineermode/EmRadioHidl;->mIsRadioIndicationListen:Z

    if-eqz v4, :cond_3

    sget-object v4, Lcom/mediatek/engineermode/EmRadioHidl;->mRadioIndicationMtk:Lcom/mediatek/engineermode/MtkRadioIndication;

    goto :goto_0

    :cond_3
    move-object v4, v2

    .line 43
    :goto_0
    invoke-interface {v1, v3, v4}, Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;->setResponseFunctionsEm(Lvendor/mediatek/hardware/mtkradioex/V2_0/IEmRadioResponse;Lvendor/mediatek/hardware/mtkradioex/V2_0/IEmRadioIndication;)V

    .line 45
    const-string v1, "getMtkRadioProxy succeed"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 47
    :cond_4
    const-string v1, "getMtkRadioProxy failed"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0
    .catch Ljava/lang/RuntimeException; {:try_start_0 .. :try_end_0} :catch_0

    .line 52
    :goto_1
    goto :goto_2

    .line 49
    :catch_0
    move-exception v1

    .line 50
    .local v1, "e":Ljava/lang/Exception;
    sget-object v3, Lcom/mediatek/engineermode/EmRadioHidl;->mRadioProxyMtk:[Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;

    aput-object v2, v3, p0

    .line 51
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "RadioProxy getService: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 53
    .end local v1    # "e":Ljava/lang/Exception;
    :goto_2
    sget-object v0, Lcom/mediatek/engineermode/EmRadioHidl;->mRadioProxyMtk:[Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;

    aget-object v0, v0, p0

    return-object v0
.end method

.method public static getSlotId(I)I
    .locals 1
    .param p0, "phoneid"    # I

    .line 58
    const/4 v0, -0x1

    if-eq p0, v0, :cond_1

    const/16 v0, 0xff

    if-eq p0, v0, :cond_0

    .line 66
    move v0, p0

    .local v0, "slotId":I
    goto :goto_0

    .line 63
    .end local v0    # "slotId":I
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaPhoneId()I

    move-result v0

    .line 64
    .restart local v0    # "slotId":I
    goto :goto_0

    .line 60
    .end local v0    # "slotId":I
    :cond_1
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCapabilitySim()I

    move-result v0

    .line 61
    .restart local v0    # "slotId":I
    nop

    .line 69
    :goto_0
    return v0
.end method

.method public static invokeOemRilRequestRawEm(I[BLandroid/os/Message;)V
    .locals 5
    .param p0, "phoneId"    # I
    .param p1, "data"    # [B
    .param p2, "result"    # Landroid/os/Message;

    .line 97
    invoke-static {p0}, Lcom/mediatek/engineermode/EmRadioHidl;->getSlotId(I)I

    move-result v0

    .line 98
    .local v0, "slotId":I
    invoke-static {v0, p2}, Lcom/mediatek/engineermode/EmRadioHidl;->getRadioProxy(ILandroid/os/Message;)Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;

    move-result-object v1

    .line 99
    .local v1, "radioProxy":Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;
    const-string v2, "EmRadioHidl"

    if-eqz v1, :cond_0

    .line 102
    :try_start_0
    iget v3, p2, Landroid/os/Message;->what:I

    invoke-static {p1}, Lcom/mediatek/engineermode/EmRadioHidl;->primitiveArrayToArrayList([B)Ljava/util/ArrayList;

    move-result-object v4

    invoke-interface {v1, v3, v4}, Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;->sendRequestRaw(ILjava/util/ArrayList;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0
    .catch Ljava/lang/RuntimeException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 103
    :catch_0
    move-exception v3

    .line 104
    .local v3, "e":Ljava/lang/Exception;
    invoke-virtual {v3}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 105
    .end local v3    # "e":Ljava/lang/Exception;
    :goto_0
    goto :goto_1

    .line 107
    :cond_0
    const-string v3, "MTkRadioProxy is null"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 109
    :goto_1
    return-void
.end method

.method public static invokeOemRilRequestStringsEm(I[Ljava/lang/String;Landroid/os/Message;)V
    .locals 5
    .param p0, "phoneId"    # I
    .param p1, "strings"    # [Ljava/lang/String;
    .param p2, "result"    # Landroid/os/Message;

    .line 74
    invoke-static {p0}, Lcom/mediatek/engineermode/EmRadioHidl;->getSlotId(I)I

    move-result v0

    .line 75
    .local v0, "slotId":I
    invoke-static {v0, p2}, Lcom/mediatek/engineermode/EmRadioHidl;->getRadioProxy(ILandroid/os/Message;)Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;

    move-result-object v1

    .line 76
    .local v1, "radioProxy":Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;
    if-eqz v1, :cond_1

    .line 79
    if-nez p2, :cond_0

    const/4 v2, 0x0

    goto :goto_0

    :cond_0
    :try_start_0
    iget v2, p2, Landroid/os/Message;->what:I

    :goto_0
    new-instance v3, Ljava/util/ArrayList;

    .line 80
    invoke-static {p1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v4

    invoke-direct {v3, v4}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    .line 79
    invoke-interface {v1, v2, v3}, Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;->sendRequestStrings(ILjava/util/ArrayList;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0
    .catch Ljava/lang/RuntimeException; {:try_start_0 .. :try_end_0} :catch_0

    .line 83
    goto :goto_1

    .line 81
    :catch_0
    move-exception v2

    .line 82
    .local v2, "e":Ljava/lang/Exception;
    invoke-virtual {v2}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "EmRadioHidl"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 85
    .end local v2    # "e":Ljava/lang/Exception;
    :cond_1
    :goto_1
    return-void
.end method

.method public static mSetRadioIndicationMtk(ILandroid/os/Handler;IZ)V
    .locals 3
    .param p0, "phoneId"    # I
    .param p1, "handler"    # Landroid/os/Handler;
    .param p2, "what"    # I
    .param p3, "isRadioIndicationListen"    # Z

    .line 117
    sput-boolean p3, Lcom/mediatek/engineermode/EmRadioHidl;->mIsRadioIndicationListen:Z

    .line 118
    sput-object p1, Lcom/mediatek/engineermode/EmRadioHidl;->mHandler:Landroid/os/Handler;

    .line 119
    sput p2, Lcom/mediatek/engineermode/EmRadioHidl;->mWhat:I

    .line 120
    const/4 v0, 0x0

    invoke-static {p0, v0}, Lcom/mediatek/engineermode/EmRadioHidl;->getRadioProxy(ILandroid/os/Message;)Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;

    move-result-object v0

    .line 121
    .local v0, "radioProxy":Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;
    const-string v1, "EmRadioHidl"

    if-eqz v0, :cond_0

    .line 122
    const-string v2, "SetMtkRadioIndication succeed"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 124
    :cond_0
    const-string v2, "MtkRadioIndicatio is null"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 126
    :goto_0
    return-void
.end method

.method public static mSetRadioIndicationType(I)V
    .locals 0
    .param p0, "type"    # I

    .line 113
    return-void
.end method

.method private static primitiveArrayToArrayList([B)Ljava/util/ArrayList;
    .locals 5
    .param p0, "arr"    # [B
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([B)",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;"
        }
    .end annotation

    .line 88
    new-instance v0, Ljava/util/ArrayList;

    array-length v1, p0

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    .line 89
    .local v0, "arrayList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    array-length v1, p0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_0

    aget-byte v3, p0, v2

    .line 90
    .local v3, "b":B
    invoke-static {v3}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 89
    .end local v3    # "b":B
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 92
    :cond_0
    return-object v0
.end method

.method public static rebootModemHidl()V
    .locals 4

    .line 129
    invoke-static {}, Lcom/mediatek/engineermode/aospradio/RadioIndication;->resetStateLast()V

    .line 130
    const/4 v0, 0x0

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/EmRadioHidl;->getRadioProxy(ILandroid/os/Message;)Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;

    move-result-object v1

    .line 131
    .local v1, "radioProxy":Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;
    const-string v2, "EmRadioHidl"

    if-eqz v1, :cond_0

    .line 133
    const/4 v3, 0x2

    :try_start_0
    invoke-interface {v1, v0, v3}, Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;->setTrm(II)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0
    .catch Ljava/lang/RuntimeException; {:try_start_0 .. :try_end_0} :catch_0

    .line 136
    :goto_0
    goto :goto_1

    .line 134
    :catch_0
    move-exception v0

    .line 135
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .end local v0    # "e":Ljava/lang/Exception;
    goto :goto_0

    .line 138
    :cond_0
    const-string v0, "radioProxy is null"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 140
    :goto_1
    return-void
.end method

.method public static reloadModemType(I)V
    .locals 5
    .param p0, "modemType"    # I

    .line 143
    const/4 v0, -0x1

    invoke-static {v0}, Lcom/mediatek/engineermode/EmRadioHidl;->getSlotId(I)I

    move-result v0

    .line 144
    .local v0, "slotId":I
    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/EmRadioHidl;->getRadioProxy(ILandroid/os/Message;)Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;

    move-result-object v1

    .line 145
    .local v1, "radioProxy":Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;
    const-string v2, "EmRadioHidl"

    if-eqz v1, :cond_0

    .line 147
    const/4 v3, 0x0

    const/4 v4, 0x1

    :try_start_0
    invoke-interface {v1, v3, v4, p0}, Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;->modifyModemType(III)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0
    .catch Ljava/lang/RuntimeException; {:try_start_0 .. :try_end_0} :catch_0

    .line 150
    :goto_0
    goto :goto_1

    .line 148
    :catch_0
    move-exception v3

    .line 149
    .local v3, "e":Ljava/lang/Exception;
    invoke-virtual {v3}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .end local v3    # "e":Ljava/lang/Exception;
    goto :goto_0

    .line 152
    :cond_0
    const-string v3, "radioProxy is null"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 154
    :goto_1
    return-void
.end method

.method public static storeModemType(I)V
    .locals 5
    .param p0, "modemType"    # I

    .line 157
    const/4 v0, -0x1

    invoke-static {v0}, Lcom/mediatek/engineermode/EmRadioHidl;->getSlotId(I)I

    move-result v0

    .line 158
    .local v0, "slotId":I
    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/EmRadioHidl;->getRadioProxy(ILandroid/os/Message;)Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;

    move-result-object v1

    .line 159
    .local v1, "radioProxy":Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;
    const-string v2, "EmRadioHidl"

    if-eqz v1, :cond_0

    .line 161
    const/4 v3, 0x0

    const/4 v4, 0x2

    :try_start_0
    invoke-interface {v1, v3, v4, p0}, Lvendor/mediatek/hardware/mtkradioex/V2_0/IMtkRadioEx;->modifyModemType(III)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0
    .catch Ljava/lang/RuntimeException; {:try_start_0 .. :try_end_0} :catch_0

    .line 164
    :goto_0
    goto :goto_1

    .line 162
    :catch_0
    move-exception v3

    .line 163
    .local v3, "e":Ljava/lang/Exception;
    invoke-virtual {v3}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .end local v3    # "e":Ljava/lang/Exception;
    goto :goto_0

    .line 166
    :cond_0
    const-string v3, "radioProxy is null"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 168
    :goto_1
    return-void
.end method
