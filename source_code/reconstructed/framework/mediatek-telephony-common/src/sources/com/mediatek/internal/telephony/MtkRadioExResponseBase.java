package com.mediatek.internal.telephony;

import android.hardware.radio.V1_0.RadioResponseInfo;
import android.os.RemoteException;
import com.android.internal.telephony.RIL;
import java.util.ArrayList;
import vendor.mediatek.hardware.mtkradioex.V2_0.CallForwardInfoEx;
import vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse;
import vendor.mediatek.hardware.mtkradioex.V2_0.OperatorInfoWithAct;
import vendor.mediatek.hardware.mtkradioex.V2_0.PhbEntryExt;
import vendor.mediatek.hardware.mtkradioex.V2_0.PhbEntryStructure;
import vendor.mediatek.hardware.mtkradioex.V2_0.PhbMemStorageResponse;
import vendor.mediatek.hardware.mtkradioex.V2_0.RsuResponseInfo;
import vendor.mediatek.hardware.mtkradioex.V2_0.SignalStrengthWithWcdmaEcio;
import vendor.mediatek.hardware.mtkradioex.V2_0.SmsMemStatus;
import vendor.mediatek.hardware.mtkradioex.V2_0.SmsParams;
import vendor.mediatek.hardware.mtkradioex.V2_0.VsimEvent;

/* JADX INFO: loaded from: classes.dex */
public class MtkRadioExResponseBase extends IMtkRadioExResponse.Stub {
    public MtkRadioExResponseBase(RIL ril) {
    }

    public void abortFemtocellListResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void acknowledgeRequest(int i) {
    }

    public void activateUiccCardRsp(RadioResponseInfo radioResponseInfo, int i) {
    }

    public void cancelAvailableNetworksResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void cfgA2offsetResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void cfgB1offsetResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void dataConnectionAttachResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void dataConnectionDetachResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void deactivateNrScgCommunicationResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void deactivateUiccCardRsp(RadioResponseInfo radioResponseInfo, int i) {
    }

    public void deleteUPBEntryResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void disableNRResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void eccPreferredRatResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void editUPBEntryResponse(RadioResponseInfo radioResponseInfo) {
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void enableCAPlusBandWidthFilterResponse(RadioResponseInfo radioResponseInfo) {
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void enableDsdaIndicationResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void enableSCGfailureResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void getATRResponse(RadioResponseInfo radioResponseInfo, String str) {
    }

    public void getApcInfoResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
    }

    public void getAvailableNetworksWithActResponse(RadioResponseInfo radioResponseInfo, ArrayList<OperatorInfoWithAct> arrayList) {
    }

    public void getCallSubAddressResponse(RadioResponseInfo radioResponseInfo, int i) {
    }

    public void getColpResponse(RadioResponseInfo radioResponseInfo, int i, int i2) {
    }

    public void getColrResponse(RadioResponseInfo radioResponseInfo, int i) {
    }

    public void getCurrentPOLListResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) {
    }

    public void getCurrentUiccCardProvisioningStatusRsp(RadioResponseInfo radioResponseInfo, int i) {
    }

    public void getDeactivateNrScgCommunicationResponse(RadioResponseInfo radioResponseInfo, int i, int i2) {
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getDsdaStatusResponse(RadioResponseInfo radioResponseInfo, int i) {
    }

    public void getEccNumResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void getFemtocellListResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) {
    }

    public void getGsmBroadcastActivationRsp(RadioResponseInfo radioResponseInfo, int i) {
    }

    public void getGsmBroadcastLangsResponse(RadioResponseInfo radioResponseInfo, String str) {
    }

    public void getIccidResponse(RadioResponseInfo radioResponseInfo, String str) {
    }

    public void getLteReleaseVersionResponse(RadioResponseInfo radioResponseInfo, int i) {
    }

    public void getPOLCapabilityResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
    }

    public void getPhoneBookMemStorageResponse(RadioResponseInfo radioResponseInfo, PhbMemStorageResponse phbMemStorageResponse) {
    }

    public void getPhoneBookStringsLengthResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getPlmnNameFromSE13TableResponse(RadioResponseInfo radioResponseInfo, String str) {
    }

    public void getRoamingEnableResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
    }

    public void getRxTestResultResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
    }

    public void getSignalStrengthWithWcdmaEcioResponse(RadioResponseInfo radioResponseInfo, SignalStrengthWithWcdmaEcio signalStrengthWithWcdmaEcio) {
    }

    public void getSmsMemStatusResponse(RadioResponseInfo radioResponseInfo, SmsMemStatus smsMemStatus) {
    }

    public void getSmsParametersResponse(RadioResponseInfo radioResponseInfo, SmsParams smsParams) {
    }

    public void getSmsRuimMemoryStatusResponse(RadioResponseInfo radioResponseInfo, SmsMemStatus smsMemStatus) {
    }

    public void getSuggestedPlmnListResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) {
    }

    public void handleStkCallSetupRequestFromSimWithResCodeResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void hangupAllResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
    }

    public void hangupWithReasonResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void modifyModemTypeResponse(RadioResponseInfo radioResponseInfo, int i) {
    }

    public void notifyEPDGScreenStateResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void queryCallForwardInTimeSlotStatusResponse(RadioResponseInfo radioResponseInfo, ArrayList<CallForwardInfoEx> arrayList) {
    }

    public void queryFemtoCellSystemSelectionModeResponse(RadioResponseInfo radioResponseInfo, int i) {
    }

    public void queryNetworkLockResponse(RadioResponseInfo radioResponseInfo, int i, int i2, int i3, int i4, int i5, int i6, int i7) {
    }

    public void queryPhbStorageInfoResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
    }

    public void queryUPBAvailableResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
    }

    public void queryUPBCapabilityResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
    }

    public void readPhbEntryResponse(RadioResponseInfo radioResponseInfo, ArrayList<PhbEntryStructure> arrayList) {
    }

    public void readPhoneBookEntryExtResponse(RadioResponseInfo radioResponseInfo, ArrayList<PhbEntryExt> arrayList) {
    }

    public void readUPBAasListResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) {
    }

    public void readUPBAnrEntryResponse(RadioResponseInfo radioResponseInfo, ArrayList<PhbEntryStructure> arrayList) {
    }

    public void readUPBEmailEntryResponse(RadioResponseInfo radioResponseInfo, String str) {
    }

    public void readUPBGasListResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) {
    }

    public void readUPBGrpEntryResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
    }

    public void readUPBSneEntryResponse(RadioResponseInfo radioResponseInfo, String str) {
    }

    public void registerCellQltyReportResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void removeCbMsgResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void resetAllConnectionsResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void resetMdDataRetryCountResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void restartRILDResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void runGbaAuthenticationResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) {
    }

    public void selectFemtocellResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void sendCnapResponse(RadioResponseInfo radioResponseInfo, int i, int i2) {
    }

    public void sendEmbmsAtCommandResponse(RadioResponseInfo radioResponseInfo, String str) {
    }

    public void sendOemRilRequestRawResponse(RadioResponseInfo radioResponseInfo, ArrayList<Byte> arrayList) {
    }

    public void sendRequestRawResponse(RadioResponseInfo radioResponseInfo, ArrayList<Byte> arrayList) {
    }

    public void sendRequestStringsResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) {
    }

    public void sendRsuRequestResponse(RadioResponseInfo radioResponseInfo, RsuResponseInfo rsuResponseInfo) {
    }

    public void sendSarIndicatorResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void sendWifiAssociatedResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void sendWifiEnabledResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void sendWifiIpAddressResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setApcModeResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setBgsrchDeltaSleepTimerResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setCallForwardInTimeSlotResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setCallIndicationResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setCallSubAddressResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setCallValidTimerResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setClipResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setColpResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setColrResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setEccModeResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setEccNumResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setEmergencyAddressIdResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setEtwsResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setFdModeResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setFemtoCellSystemSelectionModeResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setGsmBroadcastLangsResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setGwsdModeResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setIgnoreSameNumberIntervalResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setKeepAliveByIpDataResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setKeepAliveByPDCPCtrlPDUResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setLocationInfoResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setLteReleaseVersionResponse(RadioResponseInfo radioResponseInfo) {
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setMaxUlSpeedResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setModemPowerResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setNattKeepAliveStatusResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setNetworkLockResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setNetworkSelectionModeManualWithActResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setPOLEntryResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setPhoneBookMemStorageResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setPhonebookReadyResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setRemoveRestrictEutranModeResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setResumeRegistrationResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setRoamingEnableResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setRxTestConfigResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
    }

    public void setSearchRatResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setSearchStoredFreqInfoResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setServiceStateToModemResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setSimPowerResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setSmsParametersResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setSuppServPropertyResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setTrmResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setTxPowerResponse(RadioResponseInfo radioResponseInfo) {
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setTxPowerStatusResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setVendorSettingResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setVoicePreferStatusResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setWifiAssociatedResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setWifiEnabledResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setWifiIpAddressResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setWifiPingResultResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setWifiSignalLevelResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void supplyDepersonalizationResponse(RadioResponseInfo radioResponseInfo, int i) {
    }

    public void supplyDeviceNetworkDepersonalizationResponse(RadioResponseInfo radioResponseInfo, int i) {
    }

    public void syncDataSettingsToMdResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void triggerModeSwitchByEccResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void vsimNotificationResponse(RadioResponseInfo radioResponseInfo, VsimEvent vsimEvent) {
    }

    public void vsimOperationResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void writePhbEntryResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void writePhoneBookEntryExtResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void writeUPBGrpEntryResponse(RadioResponseInfo radioResponseInfo) {
    }
}
