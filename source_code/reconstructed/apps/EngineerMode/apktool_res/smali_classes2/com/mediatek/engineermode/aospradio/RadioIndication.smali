.class public Lcom/mediatek/engineermode/aospradio/RadioIndication;
.super Landroid/hardware/radio/V1_0/IRadioIndication$Stub;
.source "RadioIndication.java"


# static fields
.field public static final TAG:Ljava/lang/String; = "AospRadioIndication"

.field public static stateLast:I


# instance fields
.field private radioStatus:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 27
    const/4 v0, 0x2

    sput v0, Lcom/mediatek/engineermode/aospradio/RadioIndication;->stateLast:I

    return-void
.end method

.method public constructor <init>(Lcom/android/internal/telephony/RIL;)V
    .locals 3
    .param p1, "ril"    # Lcom/android/internal/telephony/RIL;

    .line 29
    invoke-direct {p0}, Landroid/hardware/radio/V1_0/IRadioIndication$Stub;-><init>()V

    .line 26
    const-string v0, "off"

    const-string v1, "on"

    const-string v2, "power downm"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/aospradio/RadioIndication;->radioStatus:[Ljava/lang/String;

    .line 31
    return-void
.end method

.method public static radioStateToPrimitiveArrayString(Ljava/util/List;)[Ljava/lang/String;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)[",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 38
    .local p0, "info":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v0

    new-array v0, v0, [Ljava/lang/String;

    .line 39
    .local v0, "ret":[Ljava/lang/String;
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, v0

    if-ge v1, v2, :cond_0

    .line 40
    invoke-interface {p0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    aput-object v2, v0, v1

    .line 39
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 42
    .end local v1    # "i":I
    :cond_0
    return-object v0
.end method

.method public static resetStateLast()V
    .locals 1

    .line 34
    const/4 v0, 0x2

    sput v0, Lcom/mediatek/engineermode/aospradio/RadioIndication;->stateLast:I

    .line 35
    return-void
.end method

.method private sendMessageResponse(Landroid/os/Message;Ljava/lang/Object;)V
    .locals 3
    .param p1, "msg"    # Landroid/os/Message;
    .param p2, "ret"    # Ljava/lang/Object;

    .line 69
    const/4 v0, 0x0

    :try_start_0
    invoke-static {p1, p2, v0}, Landroid/os/AsyncResult;->forMessage(Landroid/os/Message;Ljava/lang/Object;Ljava/lang/Throwable;)Landroid/os/AsyncResult;

    .line 70
    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 73
    goto :goto_0

    .line 71
    :catch_0
    move-exception v0

    .line 72
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "sendMessageResponse: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "AospRadioIndication"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 74
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method


# virtual methods
.method public callRing(IZLandroid/hardware/radio/V1_0/CdmaSignalInfoRecord;)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "isGsm"    # Z
    .param p3, "record"    # Landroid/hardware/radio/V1_0/CdmaSignalInfoRecord;

    .line 178
    return-void
.end method

.method public callStateChanged(I)V
    .locals 0
    .param p1, "indicationType"    # I

    .line 101
    return-void
.end method

.method public cdmaCallWaiting(ILandroid/hardware/radio/V1_0/CdmaCallWaiting;)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "callWaitingRecord"    # Landroid/hardware/radio/V1_0/CdmaCallWaiting;

    .line 206
    return-void
.end method

.method public cdmaInfoRec(ILandroid/hardware/radio/V1_0/CdmaInformationRecords;)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "records"    # Landroid/hardware/radio/V1_0/CdmaInformationRecords;

    .line 215
    return-void
.end method

.method public cdmaNewSms(ILandroid/hardware/radio/V1_0/CdmaSmsMessage;)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "msg"    # Landroid/hardware/radio/V1_0/CdmaSmsMessage;

    .line 186
    return-void
.end method

.method public cdmaOtaProvisionStatus(II)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "status"    # I

    .line 210
    return-void
.end method

.method public cdmaPrlChanged(II)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "version"    # I

    .line 231
    return-void
.end method

.method public cdmaRuimSmsStorageFull(I)V
    .locals 0
    .param p1, "indicationType"    # I

    .line 194
    return-void
.end method

.method public cdmaSubscriptionSourceChanged(II)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "cdmaSource"    # I

    .line 227
    return-void
.end method

.method public cellInfoList(ILjava/util/ArrayList;)V
    .locals 0
    .param p1, "indicationType"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/ArrayList<",
            "Landroid/hardware/radio/V1_0/CellInfo;",
            ">;)V"
        }
    .end annotation

    .line 251
    .local p2, "records":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/hardware/radio/V1_0/CellInfo;>;"
    return-void
.end method

.method public currentSignalStrength(ILandroid/hardware/radio/V1_0/SignalStrength;)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "signalStrength"    # Landroid/hardware/radio/V1_0/SignalStrength;

    .line 135
    return-void
.end method

.method public dataCallListChanged(ILjava/util/ArrayList;)V
    .locals 0
    .param p1, "indicationType"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/ArrayList<",
            "Landroid/hardware/radio/V1_0/SetupDataCallResult;",
            ">;)V"
        }
    .end annotation

    .line 145
    .local p2, "dcList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/hardware/radio/V1_0/SetupDataCallResult;>;"
    return-void
.end method

.method public enterEmergencyCallbackMode(I)V
    .locals 0
    .param p1, "indicationType"    # I

    .line 202
    return-void
.end method

.method public exitEmergencyCallbackMode(I)V
    .locals 0
    .param p1, "indicationType"    # I

    .line 235
    return-void
.end method

.method getRadioStateFromInt(I)I
    .locals 3
    .param p1, "stateInt"    # I

    .line 51
    if-eqz p1, :cond_2

    const/4 v0, 0x1

    if-eq p1, v0, :cond_1

    const/16 v0, 0xa

    if-ne p1, v0, :cond_0

    .line 59
    const/4 v0, 0x1

    .line 60
    .local v0, "state":I
    goto :goto_0

    .line 62
    .end local v0    # "state":I
    :cond_0
    new-instance v0, Ljava/lang/RuntimeException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Unrecognized RadioState: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 56
    :cond_1
    const/4 v0, 0x2

    .line 57
    .restart local v0    # "state":I
    goto :goto_0

    .line 53
    .end local v0    # "state":I
    :cond_2
    const/4 v0, 0x0

    .line 54
    .restart local v0    # "state":I
    nop

    .line 64
    :goto_0
    return v0
.end method

.method public hardwareConfigChanged(ILjava/util/ArrayList;)V
    .locals 0
    .param p1, "indicationType"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/ArrayList<",
            "Landroid/hardware/radio/V1_0/HardwareConfig;",
            ">;)V"
        }
    .end annotation

    .line 269
    .local p2, "configs":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/hardware/radio/V1_0/HardwareConfig;>;"
    return-void
.end method

.method public imsNetworkStateChanged(I)V
    .locals 0
    .param p1, "indicationType"    # I

    .line 255
    return-void
.end method

.method public indicateRingbackTone(IZ)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "start"    # Z

    .line 219
    return-void
.end method

.method public lceData(ILandroid/hardware/radio/V1_0/LceDataInfo;)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "lce"    # Landroid/hardware/radio/V1_0/LceDataInfo;

    .line 287
    return-void
.end method

.method public modemReset(ILjava/lang/String;)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "reason"    # Ljava/lang/String;

    .line 295
    return-void
.end method

.method public networkStateChanged(I)V
    .locals 0
    .param p1, "indicationType"    # I

    .line 110
    return-void
.end method

.method public newBroadcastSms(ILjava/util/ArrayList;)V
    .locals 0
    .param p1, "indicationType"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;)V"
        }
    .end annotation

    .line 190
    .local p2, "data":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    return-void
.end method

.method public newSms(ILjava/util/ArrayList;)V
    .locals 0
    .param p1, "indicationType"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;)V"
        }
    .end annotation

    .line 114
    .local p2, "pdu":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    return-void
.end method

.method public newSmsOnSim(II)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "recordNumber"    # I

    .line 122
    return-void
.end method

.method public newSmsStatusReport(ILjava/util/ArrayList;)V
    .locals 0
    .param p1, "indicationType"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;)V"
        }
    .end annotation

    .line 118
    .local p2, "pdu":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    return-void
.end method

.method public nitzTimeReceived(ILjava/lang/String;J)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "nitzTime"    # Ljava/lang/String;
    .param p3, "receivedTime"    # J

    .line 130
    return-void
.end method

.method public onSupplementaryServiceIndication(ILandroid/hardware/radio/V1_0/StkCcUnsolSsResult;)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "ss"    # Landroid/hardware/radio/V1_0/StkCcUnsolSsResult;

    .line 279
    return-void
.end method

.method public onUssd(IILjava/lang/String;)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "ussdModeType"    # I
    .param p3, "msg"    # Ljava/lang/String;

    .line 126
    return-void
.end method

.method public pcoData(ILandroid/hardware/radio/V1_0/PcoDataInfo;)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "pco"    # Landroid/hardware/radio/V1_0/PcoDataInfo;

    .line 291
    return-void
.end method

.method public radioCapabilityIndication(ILandroid/hardware/radio/V1_0/RadioCapability;)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "rc"    # Landroid/hardware/radio/V1_0/RadioCapability;

    .line 274
    return-void
.end method

.method public radioStateChanged(II)V
    .locals 5
    .param p1, "indicationType"    # I
    .param p2, "radioState"    # I

    .line 83
    invoke-virtual {p0, p2}, Lcom/mediatek/engineermode/aospradio/RadioIndication;->getRadioStateFromInt(I)I

    move-result v0

    .line 84
    .local v0, "state":I
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "radioStateChanged,state = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ":"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/aospradio/RadioIndication;->radioStatus:[Ljava/lang/String;

    aget-object v2, v2, v0

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "AospRadioIndication"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 85
    const/4 v1, 0x2

    new-array v1, v1, [I

    .line 86
    .local v1, "response":[I
    const/4 v3, 0x0

    aput v0, v1, v3

    .line 87
    sget v3, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRadioIndicationType:I

    const/4 v4, 0x3

    if-ne v3, v4, :cond_1

    .line 89
    sget-object v2, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mHandler:Landroid/os/Handler;

    sget v3, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mWhat:I

    invoke-virtual {v2, v3}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v2

    .line 90
    .local v2, "msg":Landroid/os/Message;
    sget v3, Lcom/mediatek/engineermode/aospradio/RadioIndication;->stateLast:I

    if-eq v0, v3, :cond_0

    .line 91
    invoke-direct {p0, v2, v1}, Lcom/mediatek/engineermode/aospradio/RadioIndication;->sendMessageResponse(Landroid/os/Message;Ljava/lang/Object;)V

    .line 93
    :cond_0
    sput v0, Lcom/mediatek/engineermode/aospradio/RadioIndication;->stateLast:I

    .line 94
    .end local v2    # "msg":Landroid/os/Message;
    goto :goto_0

    .line 95
    :cond_1
    const-string v3, "radioStateChanged not send to app"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 97
    :goto_0
    return-void
.end method

.method public resendIncallMute(I)V
    .locals 0
    .param p1, "indicationType"    # I

    .line 223
    return-void
.end method

.method public restrictedStateChanged(II)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "state"    # I

    .line 198
    return-void
.end method

.method public rilConnected(I)V
    .locals 0
    .param p1, "indicationType"    # I

    .line 239
    return-void
.end method

.method public simRefresh(ILandroid/hardware/radio/V1_0/SimRefreshResult;)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "refreshResult"    # Landroid/hardware/radio/V1_0/SimRefreshResult;

    .line 174
    return-void
.end method

.method public simSmsStorageFull(I)V
    .locals 0
    .param p1, "indicationType"    # I

    .line 170
    return-void
.end method

.method public simStatusChanged(I)V
    .locals 0
    .param p1, "indicationType"    # I

    .line 182
    return-void
.end method

.method public srvccStateNotify(II)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "state"    # I

    .line 263
    return-void
.end method

.method public stkCallControlAlphaNotify(ILjava/lang/String;)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "alpha"    # Ljava/lang/String;

    .line 283
    return-void
.end method

.method public stkCallSetup(IJ)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "timeout"    # J

    .line 166
    return-void
.end method

.method public stkEventNotify(ILjava/lang/String;)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "cmd"    # Ljava/lang/String;

    .line 162
    return-void
.end method

.method public stkProactiveCommand(ILjava/lang/String;)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "cmd"    # Ljava/lang/String;

    .line 158
    return-void
.end method

.method public stkSessionEnd(I)V
    .locals 0
    .param p1, "indicationType"    # I

    .line 154
    return-void
.end method

.method public subscriptionStatusChanged(IZ)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "activate"    # Z

    .line 259
    return-void
.end method

.method public suppSvcNotify(ILandroid/hardware/radio/V1_0/SuppSvcNotification;)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "suppSvcNotification"    # Landroid/hardware/radio/V1_0/SuppSvcNotification;

    .line 150
    return-void
.end method

.method public voiceRadioTechChanged(II)V
    .locals 0
    .param p1, "indicationType"    # I
    .param p2, "rat"    # I

    .line 243
    return-void
.end method
