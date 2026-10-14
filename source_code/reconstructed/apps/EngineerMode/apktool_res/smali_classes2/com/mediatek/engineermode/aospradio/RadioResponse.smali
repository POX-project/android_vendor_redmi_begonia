.class public Lcom/mediatek/engineermode/aospradio/RadioResponse;
.super Landroid/hardware/radio/V1_3/IRadioResponse$Stub;
.source "RadioResponse.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "RadioResponse"


# instance fields
.field private isEnabledLast:Z


# direct methods
.method public constructor <init>(Lcom/android/internal/telephony/RIL;)V
    .locals 1
    .param p1, "ril"    # Lcom/android/internal/telephony/RIL;

    .line 43
    invoke-direct {p0}, Landroid/hardware/radio/V1_3/IRadioResponse$Stub;-><init>()V

    .line 41
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/aospradio/RadioResponse;->isEnabledLast:Z

    .line 45
    return-void
.end method

.method private sendMessageResponse(Landroid/os/Message;Ljava/lang/Object;)V
    .locals 1
    .param p1, "msg"    # Landroid/os/Message;
    .param p2, "ret"    # Ljava/lang/Object;

    .line 48
    if-eqz p1, :cond_0

    .line 49
    const/4 v0, 0x0

    invoke-static {p1, p2, v0}, Landroid/os/AsyncResult;->forMessage(Landroid/os/Message;Ljava/lang/Object;Ljava/lang/Throwable;)Landroid/os/AsyncResult;

    .line 50
    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    .line 52
    :cond_0
    return-void
.end method

.method private sendMessageResponseError(Landroid/os/Message;ILjava/lang/Object;)V
    .locals 1
    .param p1, "msg"    # Landroid/os/Message;
    .param p2, "error"    # I
    .param p3, "ret"    # Ljava/lang/Object;

    .line 56
    invoke-static {p2}, Lcom/android/internal/telephony/CommandException;->fromRilErrno(I)Lcom/android/internal/telephony/CommandException;

    move-result-object v0

    .line 57
    .local v0, "ex":Lcom/android/internal/telephony/CommandException;
    if-eqz p1, :cond_0

    .line 58
    invoke-static {p1, p3, v0}, Landroid/os/AsyncResult;->forMessage(Landroid/os/Message;Ljava/lang/Object;Ljava/lang/Throwable;)Landroid/os/AsyncResult;

    .line 59
    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    .line 61
    :cond_0
    return-void
.end method


# virtual methods
.method public acceptCallResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 100
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in acceptCallResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 101
    return-void
.end method

.method public acknowledgeIncomingGsmSmsWithPduResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 105
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in acknowledgeIncomingGsmSmsWithPduResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 106
    return-void
.end method

.method public acknowledgeLastIncomingCdmaSmsResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 110
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in acknowledgeLastIncomingCdmaSmsResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 111
    return-void
.end method

.method public acknowledgeLastIncomingGsmSmsResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 115
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in acknowledgeLastIncomingGsmSmsResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 116
    return-void
.end method

.method public acknowledgeRequest(I)V
    .locals 2
    .param p1, "info"    # I

    .line 120
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in acknowledgeRequest"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 121
    return-void
.end method

.method public cancelPendingUssdResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 125
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in cancelPendingUssdResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 126
    return-void
.end method

.method public changeIccPin2ForAppResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;I)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # I

    .line 130
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in changeIccPin2ForAppResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 131
    return-void
.end method

.method public changeIccPinForAppResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;I)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # I

    .line 135
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in changeIccPinForAppResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 136
    return-void
.end method

.method public conferenceResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 140
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in conferenceResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 141
    return-void
.end method

.method public deactivateDataCallResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 145
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in deactivateDataCallResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 146
    return-void
.end method

.method public deleteSmsOnRuimResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 150
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in deleteSmsOnRuimResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 151
    return-void
.end method

.method public deleteSmsOnSimResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 155
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in deleteSmsOnSimResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 156
    return-void
.end method

.method public dialResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 160
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in dialResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 161
    return-void
.end method

.method public enableModemResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 3
    .param p1, "responseInfo"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 85
    const-string v0, "RadioResponse"

    const-string v1, "enableModemResponse "

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 86
    sget-object v0, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRequestList:Landroid/util/SparseArray;

    iget v1, p1, Landroid/hardware/radio/V1_0/RadioResponseInfo;->serial:I

    invoke-virtual {v0, v1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/Message;

    .line 87
    .local v0, "msg":Landroid/os/Message;
    if-eqz v0, :cond_0

    .line 88
    sget-object v1, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRequestList:Landroid/util/SparseArray;

    iget v2, p1, Landroid/hardware/radio/V1_0/RadioResponseInfo;->serial:I

    invoke-virtual {v1, v2}, Landroid/util/SparseArray;->remove(I)V

    .line 90
    :cond_0
    const/4 v1, 0x0

    .line 91
    .local v1, "ret":Ljava/lang/Object;
    iget v2, p1, Landroid/hardware/radio/V1_0/RadioResponseInfo;->error:I

    if-nez v2, :cond_1

    .line 92
    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/aospradio/RadioResponse;->sendMessageResponse(Landroid/os/Message;Ljava/lang/Object;)V

    goto :goto_0

    .line 94
    :cond_1
    iget v2, p1, Landroid/hardware/radio/V1_0/RadioResponseInfo;->error:I

    invoke-direct {p0, v0, v2, v1}, Lcom/mediatek/engineermode/aospradio/RadioResponse;->sendMessageResponseError(Landroid/os/Message;ILjava/lang/Object;)V

    .line 96
    :goto_0
    return-void
.end method

.method public exitEmergencyCallbackModeResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 165
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in exitEmergencyCallbackModeResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 166
    return-void
.end method

.method public explicitCallTransferResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 170
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in explicitCallTransferResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 171
    return-void
.end method

.method public getAllowedCarriersResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;ZLandroid/hardware/radio/V1_0/CarrierRestrictions;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Z
    .param p3, "arg2"    # Landroid/hardware/radio/V1_0/CarrierRestrictions;

    .line 177
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getAllowedCarriersResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 178
    return-void
.end method

.method public getAvailableBandModesResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Ljava/util/ArrayList;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/hardware/radio/V1_0/RadioResponseInfo;",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Integer;",
            ">;)V"
        }
    .end annotation

    .line 184
    .local p2, "arg1":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Integer;>;"
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getAvailableBandModesResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 185
    return-void
.end method

.method public getAvailableNetworksResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Ljava/util/ArrayList;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/hardware/radio/V1_0/RadioResponseInfo;",
            "Ljava/util/ArrayList<",
            "Landroid/hardware/radio/V1_0/OperatorInfo;",
            ">;)V"
        }
    .end annotation

    .line 191
    .local p2, "arg1":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/hardware/radio/V1_0/OperatorInfo;>;"
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getAvailableNetworksResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 192
    return-void
.end method

.method public getBasebandVersionResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Ljava/lang/String;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Ljava/lang/String;

    .line 196
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getBasebandVersionResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 197
    return-void
.end method

.method public getCDMASubscriptionResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Ljava/lang/String;
    .param p3, "arg2"    # Ljava/lang/String;
    .param p4, "arg3"    # Ljava/lang/String;
    .param p5, "arg4"    # Ljava/lang/String;
    .param p6, "arg5"    # Ljava/lang/String;

    .line 205
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getCDMASubscriptionResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 206
    return-void
.end method

.method public getCallForwardStatusResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Ljava/util/ArrayList;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/hardware/radio/V1_0/RadioResponseInfo;",
            "Ljava/util/ArrayList<",
            "Landroid/hardware/radio/V1_0/CallForwardInfo;",
            ">;)V"
        }
    .end annotation

    .line 212
    .local p2, "list":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/hardware/radio/V1_0/CallForwardInfo;>;"
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getCallForwardStatusResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 213
    return-void
.end method

.method public getCallWaitingResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;ZI)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Z
    .param p3, "arg2"    # I

    .line 219
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getCallWaitingResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 220
    return-void
.end method

.method public getCdmaBroadcastConfigResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Ljava/util/ArrayList;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/hardware/radio/V1_0/RadioResponseInfo;",
            "Ljava/util/ArrayList<",
            "Landroid/hardware/radio/V1_0/CdmaBroadcastSmsConfigInfo;",
            ">;)V"
        }
    .end annotation

    .line 226
    .local p2, "arg1":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/hardware/radio/V1_0/CdmaBroadcastSmsConfigInfo;>;"
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getCdmaBroadcastConfigResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 227
    return-void
.end method

.method public getCdmaRoamingPreferenceResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;I)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # I

    .line 231
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getCdmaRoamingPreferenceResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 232
    return-void
.end method

.method public getCdmaSubscriptionSourceResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;I)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # I

    .line 236
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getCdmaSubscriptionSourceResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 237
    return-void
.end method

.method public getCellInfoListResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Ljava/util/ArrayList;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/hardware/radio/V1_0/RadioResponseInfo;",
            "Ljava/util/ArrayList<",
            "Landroid/hardware/radio/V1_0/CellInfo;",
            ">;)V"
        }
    .end annotation

    .line 241
    .local p2, "arg1":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/hardware/radio/V1_0/CellInfo;>;"
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getCellInfoListResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 242
    return-void
.end method

.method public getCellInfoListResponse_1_2(Landroid/hardware/radio/V1_0/RadioResponseInfo;Ljava/util/ArrayList;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/hardware/radio/V1_0/RadioResponseInfo;",
            "Ljava/util/ArrayList<",
            "Landroid/hardware/radio/V1_2/CellInfo;",
            ">;)V"
        }
    .end annotation

    .line 905
    .local p2, "cellInfo":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/hardware/radio/V1_2/CellInfo;>;"
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getCellInfoListResponse_1_2"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 906
    return-void
.end method

.method public getClipResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;I)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # I

    .line 246
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getClipResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 247
    return-void
.end method

.method public getClirResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;II)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # I
    .param p3, "arg2"    # I

    .line 251
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getClirResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 252
    return-void
.end method

.method public getCurrentCallsResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Ljava/util/ArrayList;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/hardware/radio/V1_0/RadioResponseInfo;",
            "Ljava/util/ArrayList<",
            "Landroid/hardware/radio/V1_0/Call;",
            ">;)V"
        }
    .end annotation

    .line 258
    .local p2, "arg1":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/hardware/radio/V1_0/Call;>;"
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getCurrentCallsResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 259
    return-void
.end method

.method public getCurrentCallsResponse_1_2(Landroid/hardware/radio/V1_0/RadioResponseInfo;Ljava/util/ArrayList;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/hardware/radio/V1_0/RadioResponseInfo;",
            "Ljava/util/ArrayList<",
            "Landroid/hardware/radio/V1_2/Call;",
            ">;)V"
        }
    .end annotation

    .line 865
    .local p2, "calls":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/hardware/radio/V1_2/Call;>;"
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getCurrentCallsResponse_1_2"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 866
    return-void
.end method

.method public getDataCallListResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Ljava/util/ArrayList;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/hardware/radio/V1_0/RadioResponseInfo;",
            "Ljava/util/ArrayList<",
            "Landroid/hardware/radio/V1_0/SetupDataCallResult;",
            ">;)V"
        }
    .end annotation

    .line 265
    .local p2, "arg1":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/hardware/radio/V1_0/SetupDataCallResult;>;"
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getDataCallListResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 266
    return-void
.end method

.method public getDataRegistrationStateResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_0/DataRegStateResult;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Landroid/hardware/radio/V1_0/DataRegStateResult;

    .line 272
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getDataRegistrationStateResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 273
    return-void
.end method

.method public getDataRegistrationStateResponse_1_2(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_2/DataRegStateResult;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "dataRegResponse"    # Landroid/hardware/radio/V1_2/DataRegStateResult;

    .line 917
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getDataRegistrationStateResponse_1_2"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 918
    return-void
.end method

.method public getDeviceIdentityResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Ljava/lang/String;
    .param p3, "arg2"    # Ljava/lang/String;
    .param p4, "arg3"    # Ljava/lang/String;
    .param p5, "arg4"    # Ljava/lang/String;

    .line 279
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getDeviceIdentityResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 280
    return-void
.end method

.method public getFacilityLockForAppResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;I)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # I

    .line 284
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getFacilityLockForAppResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 285
    return-void
.end method

.method public getGsmBroadcastConfigResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Ljava/util/ArrayList;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/hardware/radio/V1_0/RadioResponseInfo;",
            "Ljava/util/ArrayList<",
            "Landroid/hardware/radio/V1_0/GsmBroadcastSmsConfigInfo;",
            ">;)V"
        }
    .end annotation

    .line 291
    .local p2, "arg1":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/hardware/radio/V1_0/GsmBroadcastSmsConfigInfo;>;"
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getGsmBroadcastConfigResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 292
    return-void
.end method

.method public getHardwareConfigResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Ljava/util/ArrayList;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/hardware/radio/V1_0/RadioResponseInfo;",
            "Ljava/util/ArrayList<",
            "Landroid/hardware/radio/V1_0/HardwareConfig;",
            ">;)V"
        }
    .end annotation

    .line 298
    .local p2, "arg1":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/hardware/radio/V1_0/HardwareConfig;>;"
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getHardwareConfigResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 299
    return-void
.end method

.method public getIMSIForAppResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Ljava/lang/String;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Ljava/lang/String;

    .line 303
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getIMSIForAppResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 304
    return-void
.end method

.method public getIccCardStatusResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_0/CardStatus;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Landroid/hardware/radio/V1_0/CardStatus;

    .line 308
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getIccCardStatusResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 309
    return-void
.end method

.method public getIccCardStatusResponse_1_2(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_2/CardStatus;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "cardStatus"    # Landroid/hardware/radio/V1_2/CardStatus;

    .line 894
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getIccCardStatusResponse_1_2"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 895
    return-void
.end method

.method public getImsRegistrationStateResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;ZI)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Z
    .param p3, "arg2"    # I

    .line 315
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getImsRegistrationStateResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 316
    return-void
.end method

.method public getLastCallFailCauseResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_0/LastCallFailCauseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Landroid/hardware/radio/V1_0/LastCallFailCauseInfo;

    .line 322
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getLastCallFailCauseResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 323
    return-void
.end method

.method public getModemActivityInfoResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_0/ActivityStatsInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Landroid/hardware/radio/V1_0/ActivityStatsInfo;

    .line 329
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getModemActivityInfoResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 330
    return-void
.end method

.method public getModemStackStatusResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Z)V
    .locals 3
    .param p1, "responseInfo"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "isEnabled"    # Z

    .line 69
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "getModemStatusResponse isEnabled = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", Last: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/mediatek/engineermode/aospradio/RadioResponse;->isEnabledLast:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RadioResponse"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 70
    sget-object v0, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mHandler:Landroid/os/Handler;

    sget v1, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mWhat:I

    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 72
    .local v0, "msg":Landroid/os/Message;
    if-nez p2, :cond_0

    .line 73
    const/4 v1, 0x0

    iput-boolean v1, p0, Lcom/mediatek/engineermode/aospradio/RadioResponse;->isEnabledLast:Z

    .line 74
    return-void

    .line 76
    :cond_0
    if-eqz p2, :cond_1

    iget-boolean v1, p0, Lcom/mediatek/engineermode/aospradio/RadioResponse;->isEnabledLast:Z

    if-nez v1, :cond_1

    iget v1, p1, Landroid/hardware/radio/V1_0/RadioResponseInfo;->error:I

    if-nez v1, :cond_1

    .line 77
    invoke-static {p2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/aospradio/RadioResponse;->sendMessageResponse(Landroid/os/Message;Ljava/lang/Object;)V

    .line 78
    iput-boolean p2, p0, Lcom/mediatek/engineermode/aospradio/RadioResponse;->isEnabledLast:Z

    goto :goto_0

    .line 79
    :cond_1
    iget v1, p1, Landroid/hardware/radio/V1_0/RadioResponseInfo;->error:I

    if-eqz v1, :cond_2

    .line 80
    iget v1, p1, Landroid/hardware/radio/V1_0/RadioResponseInfo;->error:I

    invoke-static {p2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    invoke-direct {p0, v0, v1, v2}, Lcom/mediatek/engineermode/aospradio/RadioResponse;->sendMessageResponseError(Landroid/os/Message;ILjava/lang/Object;)V

    .line 82
    :cond_2
    :goto_0
    return-void
.end method

.method public getMuteResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Z)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Z

    .line 335
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getMuteResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 336
    return-void
.end method

.method public getNeighboringCidsResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Ljava/util/ArrayList;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/hardware/radio/V1_0/RadioResponseInfo;",
            "Ljava/util/ArrayList<",
            "Landroid/hardware/radio/V1_0/NeighboringCell;",
            ">;)V"
        }
    .end annotation

    .line 342
    .local p2, "arg1":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/hardware/radio/V1_0/NeighboringCell;>;"
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getNeighboringCidsResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 343
    return-void
.end method

.method public getNetworkSelectionModeResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Z)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Z

    .line 349
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getNetworkSelectionModeResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 350
    return-void
.end method

.method public getOperatorResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Ljava/lang/String;
    .param p3, "arg2"    # Ljava/lang/String;
    .param p4, "arg3"    # Ljava/lang/String;

    .line 356
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getOperatorResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 357
    return-void
.end method

.method public getPreferredNetworkTypeResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;I)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # I

    .line 361
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getPreferredNetworkTypeResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 362
    return-void
.end method

.method public getPreferredVoicePrivacyResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Z)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Z

    .line 368
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getPreferredVoicePrivacyResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 369
    return-void
.end method

.method public getRadioCapabilityResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_0/RadioCapability;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Landroid/hardware/radio/V1_0/RadioCapability;

    .line 375
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getRadioCapabilityResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 376
    return-void
.end method

.method public getSignalStrengthResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_0/SignalStrength;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Landroid/hardware/radio/V1_0/SignalStrength;

    .line 382
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getSignalStrengthResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 383
    return-void
.end method

.method public getSignalStrengthResponse_1_2(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_2/SignalStrength;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "signalStrength"    # Landroid/hardware/radio/V1_2/SignalStrength;

    .line 854
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getSignalStrengthResponse_1_2"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 855
    return-void
.end method

.method public getSmscAddressResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Ljava/lang/String;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Ljava/lang/String;

    .line 387
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getSmscAddressResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 388
    return-void
.end method

.method public getTTYModeResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;I)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # I

    .line 392
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getTTYModeResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 393
    return-void
.end method

.method public getVoiceRadioTechnologyResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;I)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # I

    .line 397
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getVoiceRadioTechnologyResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 398
    return-void
.end method

.method public getVoiceRegistrationStateResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_0/VoiceRegStateResult;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Landroid/hardware/radio/V1_0/VoiceRegStateResult;

    .line 404
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getVoiceRegistrationStateResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 405
    return-void
.end method

.method public getVoiceRegistrationStateResponse_1_2(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_2/VoiceRegStateResult;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "voiceRegStateResult"    # Landroid/hardware/radio/V1_2/VoiceRegStateResult;

    .line 923
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in getVoiceRegistrationStateResponse_1_2"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 924
    return-void
.end method

.method public handleStkCallSetupRequestFromSimResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 409
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in handleStkCallSetupRequestFromSimResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 410
    return-void
.end method

.method public hangupConnectionResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 414
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in hangupConnectionResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 415
    return-void
.end method

.method public hangupForegroundResumeBackgroundResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 419
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in hangupForegroundResumeBackgroundResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 420
    return-void
.end method

.method public hangupWaitingOrBackgroundResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 424
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in hangupWaitingOrBackgroundResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 425
    return-void
.end method

.method public iccCloseLogicalChannelResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 429
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in iccCloseLogicalChannelResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 430
    return-void
.end method

.method public iccIOForAppResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_0/IccIoResult;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Landroid/hardware/radio/V1_0/IccIoResult;

    .line 434
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in iccIOForAppResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 435
    return-void
.end method

.method public iccOpenLogicalChannelResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;ILjava/util/ArrayList;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/hardware/radio/V1_0/RadioResponseInfo;",
            "I",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;)V"
        }
    .end annotation

    .line 441
    .local p3, "arg2":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in iccOpenLogicalChannelResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 442
    return-void
.end method

.method public iccTransmitApduBasicChannelResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_0/IccIoResult;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Landroid/hardware/radio/V1_0/IccIoResult;

    .line 448
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in iccTransmitApduBasicChannelResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 449
    return-void
.end method

.method public iccTransmitApduLogicalChannelResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_0/IccIoResult;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Landroid/hardware/radio/V1_0/IccIoResult;

    .line 455
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in iccTransmitApduLogicalChannelResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 456
    return-void
.end method

.method public nvReadItemResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Ljava/lang/String;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Ljava/lang/String;

    .line 460
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in nvReadItemResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 461
    return-void
.end method

.method public nvResetConfigResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 465
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in nvResetConfigResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 466
    return-void
.end method

.method public nvWriteCdmaPrlResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 470
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in nvWriteCdmaPrlResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 471
    return-void
.end method

.method public nvWriteItemResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 475
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in nvWriteItemResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 476
    return-void
.end method

.method public pullLceDataResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_0/LceDataInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Landroid/hardware/radio/V1_0/LceDataInfo;

    .line 480
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in pullLceDataResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 481
    return-void
.end method

.method public rejectCallResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 485
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in rejectCallResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 486
    return-void
.end method

.method public reportSmsMemoryStatusResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 490
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in reportSmsMemoryStatusResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 491
    return-void
.end method

.method public reportStkServiceIsRunningResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 495
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in reportStkServiceIsRunningResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 496
    return-void
.end method

.method public requestIccSimAuthenticationResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_0/IccIoResult;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Landroid/hardware/radio/V1_0/IccIoResult;

    .line 502
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in requestIccSimAuthenticationResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 503
    return-void
.end method

.method public requestIsimAuthenticationResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Ljava/lang/String;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Ljava/lang/String;

    .line 509
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in requestIsimAuthenticationResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 510
    return-void
.end method

.method public requestShutdownResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 514
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in requestShutdownResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 515
    return-void
.end method

.method public resetModemStatus()V
    .locals 1

    .line 64
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/aospradio/RadioResponse;->isEnabledLast:Z

    .line 65
    return-void
.end method

.method public sendBurstDtmfResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 519
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in sendBurstDtmfResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 520
    return-void
.end method

.method public sendCDMAFeatureCodeResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 524
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in sendCDMAFeatureCodeResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 525
    return-void
.end method

.method public sendCdmaSmsResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_0/SendSmsResult;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Landroid/hardware/radio/V1_0/SendSmsResult;

    .line 529
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in sendCdmaSmsResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 530
    return-void
.end method

.method public sendDeviceStateResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 534
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in sendDeviceStateResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 535
    return-void
.end method

.method public sendDtmfResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 539
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in sendDtmfResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 540
    return-void
.end method

.method public sendEnvelopeResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Ljava/lang/String;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Ljava/lang/String;

    .line 544
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in sendEnvelopeResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 545
    return-void
.end method

.method public sendEnvelopeWithStatusResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_0/IccIoResult;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Landroid/hardware/radio/V1_0/IccIoResult;

    .line 551
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in sendEnvelopeWithStatusResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 552
    return-void
.end method

.method public sendImsSmsResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_0/SendSmsResult;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Landroid/hardware/radio/V1_0/SendSmsResult;

    .line 556
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in sendImsSmsResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 557
    return-void
.end method

.method public sendSMSExpectMoreResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_0/SendSmsResult;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Landroid/hardware/radio/V1_0/SendSmsResult;

    .line 563
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in sendSMSExpectMoreResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 564
    return-void
.end method

.method public sendSmsResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_0/SendSmsResult;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Landroid/hardware/radio/V1_0/SendSmsResult;

    .line 568
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in sendSmsResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 569
    return-void
.end method

.method public sendTerminalResponseToSimResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 573
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in sendTerminalResponseToSimResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 574
    return-void
.end method

.method public sendUssdResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 578
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in sendUssdResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 579
    return-void
.end method

.method public separateConnectionResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 583
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in separateConnectionResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 584
    return-void
.end method

.method public setAllowedCarriersResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;I)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # I

    .line 588
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setAllowedCarriersResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 589
    return-void
.end method

.method public setBandModeResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 593
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setBandModeResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 594
    return-void
.end method

.method public setBarringPasswordResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 598
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setBarringPasswordResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 599
    return-void
.end method

.method public setCallForwardResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 603
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setCallForwardResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 604
    return-void
.end method

.method public setCallWaitingResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 608
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setCallWaitingResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 609
    return-void
.end method

.method public setCarrierInfoForImsiEncryptionResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 828
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setCarrierInfoForImsiEncryptionResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 829
    return-void
.end method

.method public setCdmaBroadcastActivationResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 613
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setCdmaBroadcastActivationResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 614
    return-void
.end method

.method public setCdmaBroadcastConfigResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 618
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setCdmaBroadcastConfigResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 619
    return-void
.end method

.method public setCdmaRoamingPreferenceResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 623
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setCdmaRoamingPreferenceResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 624
    return-void
.end method

.method public setCdmaSubscriptionSourceResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 628
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setCdmaSubscriptionSourceResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 629
    return-void
.end method

.method public setCellInfoListRateResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 633
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setCellInfoListRateResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 634
    return-void
.end method

.method public setClirResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 638
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setClirResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 639
    return-void
.end method

.method public setDataAllowedResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 643
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setDataAllowedResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 644
    return-void
.end method

.method public setDataProfileResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 648
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setDataProfileResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 649
    return-void
.end method

.method public setFacilityLockForAppResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;I)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # I

    .line 653
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setFacilityLockForAppResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 654
    return-void
.end method

.method public setGsmBroadcastActivationResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 658
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setGsmBroadcastActivationResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 659
    return-void
.end method

.method public setGsmBroadcastConfigResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 663
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setGsmBroadcastConfigResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 664
    return-void
.end method

.method public setIndicationFilterResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 668
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setIndicationFilterResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 669
    return-void
.end method

.method public setInitialAttachApnResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 673
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setInitialAttachApnResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 674
    return-void
.end method

.method public setLinkCapacityReportingCriteriaResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 874
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setLinkCapacityReportingCriteriaResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 875
    return-void
.end method

.method public setLocationUpdatesResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 678
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setLocationUpdatesResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 679
    return-void
.end method

.method public setMuteResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 683
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setMuteResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 684
    return-void
.end method

.method public setNetworkSelectionModeAutomaticResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 688
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setNetworkSelectionModeAutomaticResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 689
    return-void
.end method

.method public setNetworkSelectionModeManualResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 693
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setNetworkSelectionModeManualResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 694
    return-void
.end method

.method public setPreferredNetworkTypeResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 698
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setPreferredNetworkTypeResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 699
    return-void
.end method

.method public setPreferredVoicePrivacyResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 703
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setPreferredVoicePrivacyResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 704
    return-void
.end method

.method public setRadioCapabilityResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_0/RadioCapability;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Landroid/hardware/radio/V1_0/RadioCapability;

    .line 710
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setRadioCapabilityResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 711
    return-void
.end method

.method public setRadioPowerResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 715
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setRadioPowerResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 716
    return-void
.end method

.method public setSignalStrengthReportingCriteriaResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 883
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setSignalStrengthReportingCriteriaResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 884
    return-void
.end method

.method public setSimCardPowerResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 720
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setSimCardPowerResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 721
    return-void
.end method

.method public setSimCardPowerResponse_1_1(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 838
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setSimCardPowerResponse_1_1"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 839
    return-void
.end method

.method public setSmscAddressResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 725
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setSmscAddressResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 726
    return-void
.end method

.method public setSuppServiceNotificationsResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 730
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setSuppServiceNotificationsResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 731
    return-void
.end method

.method public setSystemSelectionChannelsResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "responseInfo"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 930
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setSystemSelectionChannelsResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 931
    return-void
.end method

.method public setTTYModeResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 735
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setTTYModeResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 736
    return-void
.end method

.method public setUiccSubscriptionResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 740
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setUiccSubscriptionResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 741
    return-void
.end method

.method public setupDataCallResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_0/SetupDataCallResult;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Landroid/hardware/radio/V1_0/SetupDataCallResult;

    .line 747
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in setupDataCallResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 748
    return-void
.end method

.method public startDtmfResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 752
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in startDtmfResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 753
    return-void
.end method

.method public startKeepaliveResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_1/KeepaliveStatus;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "status"    # Landroid/hardware/radio/V1_1/KeepaliveStatus;

    .line 843
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in startKeepaliveResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 844
    return-void
.end method

.method public startLceServiceResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_0/LceStatusInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Landroid/hardware/radio/V1_0/LceStatusInfo;

    .line 759
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in startLceServiceResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 760
    return-void
.end method

.method public startNetworkScanResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 818
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in startNetworkScanResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 819
    return-void
.end method

.method public stopDtmfResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 764
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in stopDtmfResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 765
    return-void
.end method

.method public stopKeepaliveResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 823
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in stopKeepaliveResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 824
    return-void
.end method

.method public stopLceServiceResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Landroid/hardware/radio/V1_0/LceStatusInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # Landroid/hardware/radio/V1_0/LceStatusInfo;

    .line 771
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in stopLceServiceResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 772
    return-void
.end method

.method public stopNetworkScanResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 833
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in stopNetworkScanResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 834
    return-void
.end method

.method public supplyIccPin2ForAppResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;I)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # I

    .line 776
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in supplyIccPin2ForAppResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 777
    return-void
.end method

.method public supplyIccPinForAppResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;I)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # I

    .line 781
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in supplyIccPinForAppResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 782
    return-void
.end method

.method public supplyIccPuk2ForAppResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;I)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # I

    .line 786
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in supplyIccPuk2ForAppResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 787
    return-void
.end method

.method public supplyIccPukForAppResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;I)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # I

    .line 791
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in supplyIccPukForAppResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 792
    return-void
.end method

.method public supplyNetworkDepersonalizationResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;I)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # I

    .line 798
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in supplyNetworkDepersonalizationResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 799
    return-void
.end method

.method public switchWaitingOrHoldingAndActiveResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;

    .line 803
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in switchWaitingOrHoldingAndActiveResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 804
    return-void
.end method

.method public writeSmsToRuimResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;I)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # I

    .line 808
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in writeSmsToRuimResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 809
    return-void
.end method

.method public writeSmsToSimResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;I)V
    .locals 2
    .param p1, "info"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .param p2, "arg1"    # I

    .line 813
    const-string v0, "RadioResponse"

    const-string v1, "No implementation in writeSmsToSimResponse"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 814
    return-void
.end method
