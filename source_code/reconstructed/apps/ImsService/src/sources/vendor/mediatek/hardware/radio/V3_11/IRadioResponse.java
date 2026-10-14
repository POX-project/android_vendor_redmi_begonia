package vendor.mediatek.hardware.radio.V3_11;

import android.hardware.radio.V1_0.ActivityStatsInfo;
import android.hardware.radio.V1_0.Call;
import android.hardware.radio.V1_0.CallForwardInfo;
import android.hardware.radio.V1_0.CardStatus;
import android.hardware.radio.V1_0.CarrierRestrictions;
import android.hardware.radio.V1_0.CdmaBroadcastSmsConfigInfo;
import android.hardware.radio.V1_0.CellInfo;
import android.hardware.radio.V1_0.DataRegStateResult;
import android.hardware.radio.V1_0.GsmBroadcastSmsConfigInfo;
import android.hardware.radio.V1_0.HardwareConfig;
import android.hardware.radio.V1_0.IccIoResult;
import android.hardware.radio.V1_0.LastCallFailCause;
import android.hardware.radio.V1_0.LastCallFailCauseInfo;
import android.hardware.radio.V1_0.LceDataInfo;
import android.hardware.radio.V1_0.LceStatusInfo;
import android.hardware.radio.V1_0.NeighboringCell;
import android.hardware.radio.V1_0.OperatorInfo;
import android.hardware.radio.V1_0.RadioCapability;
import android.hardware.radio.V1_0.RadioCdmaSmsConst;
import android.hardware.radio.V1_0.RadioResponseInfo;
import android.hardware.radio.V1_0.SendSmsResult;
import android.hardware.radio.V1_0.SetupDataCallResult;
import android.hardware.radio.V1_0.SignalStrength;
import android.hardware.radio.V1_0.SmsAcknowledgeFailCause;
import android.hardware.radio.V1_0.VoiceRegStateResult;
import android.hardware.radio.V1_1.KeepaliveStatus;
import android.hardware.radio.V1_4.DataCallFailCause;
import android.hardware.radio.V1_5.EutranBands;
import android.hardware.radio.V1_5.NgranBands;
import android.hardware.radio.V1_5.UtranBands;
import android.hidl.base.V1_0.DebugInfo;
import android.hidl.base.V1_0.IBase;
import android.os.HidlSupport;
import android.os.HwBinder;
import android.os.HwBlob;
import android.os.HwParcel;
import android.os.IHwBinder;
import android.os.IHwInterface;
import android.os.NativeHandle;
import android.os.RemoteException;
import com.mediatek.ims.ImsCallSessionProxy;
import com.mediatek.ims.SipMessage;
import com.mediatek.ims.internal.ImsVTProvider;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Objects;
import vendor.mediatek.hardware.radio.V3_0.CallForwardInfoEx;
import vendor.mediatek.hardware.radio.V3_0.OperatorInfoWithAct;
import vendor.mediatek.hardware.radio.V3_0.PhbEntryExt;
import vendor.mediatek.hardware.radio.V3_0.PhbEntryStructure;
import vendor.mediatek.hardware.radio.V3_0.PhbMemStorageResponse;
import vendor.mediatek.hardware.radio.V3_0.SignalStrengthWithWcdmaEcio;
import vendor.mediatek.hardware.radio.V3_0.SmsMemStatus;
import vendor.mediatek.hardware.radio.V3_0.SmsParams;
import vendor.mediatek.hardware.radio.V3_0.VsimEvent;

/* JADX INFO: loaded from: classes.dex */
public interface IRadioResponse extends vendor.mediatek.hardware.radio.V3_10.IRadioResponse {
    public static final String kInterfaceName = "vendor.mediatek.hardware.radio@3.11::IRadioResponse";

    public static final class Proxy implements IRadioResponse {
        private IHwBinder mRemote;

        public Proxy(IHwBinder iHwBinder) {
            Objects.requireNonNull(iHwBinder);
            this.mRemote = iHwBinder;
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void abortFemtocellListResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(216, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void acceptCallResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(38, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void acknowledgeIncomingGsmSmsWithPduResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(96, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void acknowledgeLastIncomingCdmaSmsResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(78, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void acknowledgeLastIncomingGsmSmsResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(37, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void acknowledgeRequest(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(129, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IRadioResponse, vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
        public IHwBinder asBinder() {
            return this.mRemote;
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void cancelAvailableNetworksResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(214, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void cancelPendingUssdResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(30, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void changeIccPin2ForAppResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(7, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void changeIccPinForAppResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(6, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void conferenceResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(16, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void currentStatusResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(181, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void dataConnectionAttachResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.IMSI_UNKNOWN_IN_VLR, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void dataConnectionDetachResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.IMEI_NOT_ACCEPTED, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void deactivateDataCallResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(39, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IRadioResponse, vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
        public void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IBase.kInterfaceName);
            hwParcel.writeNativeHandle(nativeHandle);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(256131655, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void deleteSmsOnRuimResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(87, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void deleteSmsOnSimResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(57, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void deleteUPBEntryResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(152, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void dialResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(10, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void eccPreferredRatResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(182, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void editUPBEntryResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(151, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void emergencyDialResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(178, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public final boolean equals(Object obj) {
            return HidlSupport.interfacesEqual(this, obj);
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void exitEmergencyCallbackModeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(89, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void explicitCallTransferResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(63, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void getATRResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(188, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getAllowedCarriersResponse(RadioResponseInfo radioResponseInfo, boolean z, CarrierRestrictions carrierRestrictions) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeBool(z);
            carrierRestrictions.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(125, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void getApcInfoResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.FDN_BLOCKED, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getAvailableBandModesResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(59, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getAvailableNetworksResponse(RadioResponseInfo radioResponseInfo, ArrayList<OperatorInfo> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            OperatorInfo.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(46, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void getAvailableNetworksWithActResponse(RadioResponseInfo radioResponseInfo, ArrayList<OperatorInfoWithAct> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            OperatorInfoWithAct.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(212, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getBasebandVersionResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(49, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getCDMASubscriptionResponse(RadioResponseInfo radioResponseInfo, String str, String str2, String str3, String str4, String str5) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            hwParcel.writeString(str4);
            hwParcel.writeString(str5);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(85, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getCallForwardStatusResponse(RadioResponseInfo radioResponseInfo, ArrayList<CallForwardInfo> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            CallForwardInfo.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(33, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getCallWaitingResponse(RadioResponseInfo radioResponseInfo, boolean z, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeBool(z);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(35, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getCdmaBroadcastConfigResponse(RadioResponseInfo radioResponseInfo, ArrayList<CdmaBroadcastSmsConfigInfo> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            CdmaBroadcastSmsConfigInfo.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(82, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getCdmaRoamingPreferenceResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(70, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getCdmaSubscriptionSourceResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(94, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getCellInfoListResponse(RadioResponseInfo radioResponseInfo, ArrayList<CellInfo> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            CellInfo.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(99, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_2.IRadioResponse
        public void getCellInfoListResponse_1_2(RadioResponseInfo radioResponseInfo, ArrayList<android.hardware.radio.V1_2.CellInfo> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_2.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            android.hardware.radio.V1_2.CellInfo.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(ImsCallSessionProxy.CALL_INFO_MSG_TYPE_REMOTE_RESUME, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getClipResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(53, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getClirResponse(RadioResponseInfo radioResponseInfo, int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(31, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void getColpResponse(RadioResponseInfo radioResponseInfo, int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(168, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void getColrResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(169, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getCurrentCallsResponse(RadioResponseInfo radioResponseInfo, ArrayList<Call> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            Call.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(9, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_2.IRadioResponse
        public void getCurrentCallsResponse_1_2(RadioResponseInfo radioResponseInfo, ArrayList<android.hardware.radio.V1_2.Call> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_2.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            android.hardware.radio.V1_2.Call.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(140, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void getCurrentPOLListResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(224, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getDataCallListResponse(RadioResponseInfo radioResponseInfo, ArrayList<SetupDataCallResult> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            SetupDataCallResult.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(54, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getDataRegistrationStateResponse(RadioResponseInfo radioResponseInfo, DataRegStateResult dataRegStateResult) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            dataRegStateResult.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(21, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_2.IRadioResponse
        public void getDataRegistrationStateResponse_1_2(RadioResponseInfo radioResponseInfo, android.hardware.radio.V1_2.DataRegStateResult dataRegStateResult) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_2.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            dataRegStateResult.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(143, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IRadioResponse, vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
        public DebugInfo getDebugInfo() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IBase.kInterfaceName);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(257049926, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                DebugInfo debugInfo = new DebugInfo();
                debugInfo.readFromParcel(hwParcel2);
                return debugInfo;
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getDeviceIdentityResponse(RadioResponseInfo radioResponseInfo, String str, String str2, String str3, String str4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            hwParcel.writeString(str4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(88, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void getEccNumResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(185, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getFacilityLockForAppResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(40, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void getFemtocellListResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(215, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void getGsmBroadcastActivationRsp(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(203, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getGsmBroadcastConfigResponse(RadioResponseInfo radioResponseInfo, ArrayList<GsmBroadcastSmsConfigInfo> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            GsmBroadcastSmsConfigInfo.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(79, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void getGsmBroadcastLangsResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(ImsVTProvider.ConnectionEx.VideoProvider.SESSION_MODIFY_CANCEL_UPGRADE_FAIL_REMOTE_REJECT_UPGRADE, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getHardwareConfigResponse(RadioResponseInfo radioResponseInfo, ArrayList<HardwareConfig> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HardwareConfig.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(114, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IRadioResponse, vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
        public ArrayList<byte[]> getHashChain() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IBase.kInterfaceName);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(256398152, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                ArrayList<byte[]> arrayList = new ArrayList<>();
                HwBlob buffer = hwParcel2.readBuffer(16L);
                int int32 = buffer.getInt32(8L);
                HwBlob embeddedBuffer = hwParcel2.readEmbeddedBuffer(int32 * 32, buffer.handle(), 0L, true);
                arrayList.clear();
                for (int i = 0; i < int32; i++) {
                    byte[] bArr = new byte[32];
                    embeddedBuffer.copyToInt8Array(i * 32, bArr, 32);
                    arrayList.add(bArr);
                }
                hwParcel2.release();
                return arrayList;
            } catch (Throwable th) {
                hwParcel2.release();
                throw th;
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getIMSIForAppResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(11, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getIccCardStatusResponse(RadioResponseInfo radioResponseInfo, CardStatus cardStatus) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            cardStatus.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(1, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_2.IRadioResponse
        public void getIccCardStatusResponse_1_2(RadioResponseInfo radioResponseInfo, android.hardware.radio.V1_2.CardStatus cardStatus) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_2.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            cardStatus.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(137, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void getIccidResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(189, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getImsRegistrationStateResponse(RadioResponseInfo radioResponseInfo, boolean z, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeBool(z);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(102, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getLastCallFailCauseResponse(RadioResponseInfo radioResponseInfo, LastCallFailCauseInfo lastCallFailCauseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            lastCallFailCauseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(18, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void getLteReleaseVersionResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.DIAL_MODIFIED_TO_DIAL, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getModemActivityInfoResponse(RadioResponseInfo radioResponseInfo, ActivityStatsInfo activityStatsInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            activityStatsInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(DataCallFailCause.INVALID_DNS_ADDR, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getMuteResponse(RadioResponseInfo radioResponseInfo, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(52, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getNeighboringCidsResponse(RadioResponseInfo radioResponseInfo, ArrayList<NeighboringCell> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            NeighboringCell.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(66, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getNetworkSelectionModeResponse(RadioResponseInfo radioResponseInfo, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(43, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getOperatorResponse(RadioResponseInfo radioResponseInfo, String str, String str2, String str3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(22, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void getPOLCapabilityResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(223, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void getPhoneBookMemStorageResponse(RadioResponseInfo radioResponseInfo, PhbMemStorageResponse phbMemStorageResponse) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            phbMemStorageResponse.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(157, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void getPhoneBookStringsLengthResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(156, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getPreferredNetworkTypeResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(65, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getPreferredVoicePrivacyResponse(RadioResponseInfo radioResponseInfo, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(74, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getRadioCapabilityResponse(RadioResponseInfo radioResponseInfo, RadioCapability radioCapability) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            radioCapability.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(118, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void getRoamingEnableResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(146, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void getRxTestResultResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(222, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getSignalStrengthResponse(RadioResponseInfo radioResponseInfo, SignalStrength signalStrength) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            signalStrength.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(19, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_2.IRadioResponse
        public void getSignalStrengthResponse_1_2(RadioResponseInfo radioResponseInfo, android.hardware.radio.V1_2.SignalStrength signalStrength) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_2.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            signalStrength.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(141, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void getSignalStrengthWithWcdmaEcioResponse(RadioResponseInfo radioResponseInfo, SignalStrengthWithWcdmaEcio signalStrengthWithWcdmaEcio) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            signalStrengthWithWcdmaEcio.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(213, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void getSmsMemStatusResponse(RadioResponseInfo radioResponseInfo, SmsMemStatus smsMemStatus) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            smsMemStatus.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(198, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void getSmsParametersResponse(RadioResponseInfo radioResponseInfo, SmsParams smsParams) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            smsParams.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(196, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void getSmsRuimMemoryStatusResponse(RadioResponseInfo radioResponseInfo, SmsMemStatus smsMemStatus) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            smsMemStatus.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(210, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getSmscAddressResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(90, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void getSuppServPropertyResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.RADIO_LINK_FAILURE, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getTTYModeResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(72, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getVoiceRadioTechnologyResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(98, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void getVoiceRegistrationStateResponse(RadioResponseInfo radioResponseInfo, VoiceRegStateResult voiceRegStateResult) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            voiceRegStateResult.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(20, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_2.IRadioResponse
        public void getVoiceRegistrationStateResponse_1_2(RadioResponseInfo radioResponseInfo, android.hardware.radio.V1_2.VoiceRegStateResult voiceRegStateResult) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_2.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            voiceRegStateResult.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(142, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void handleStkCallSetupRequestFromSimResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(62, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void handleStkCallSetupRequestFromSimWithResCodeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(228, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void hangupAllResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(176, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void hangupConnectionResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(12, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void hangupForegroundResumeBackgroundResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(14, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void hangupWaitingOrBackgroundResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(13, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_4.IRadioResponse
        public void hangupWithReasonResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_4.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(256, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public final int hashCode() {
            return asBinder().hashCode();
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void iccCloseLogicalChannelResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(UtranBands.BAND_F, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void iccIOForAppResponse(RadioResponseInfo radioResponseInfo, IccIoResult iccIoResult) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            iccIoResult.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(28, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void iccOpenLogicalChannelResponse(RadioResponseInfo radioResponseInfo, int i, ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            hwParcel.writeInt8Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(UtranBands.BAND_E, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void iccTransmitApduBasicChannelResponse(RadioResponseInfo radioResponseInfo, IccIoResult iccIoResult) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            iccIoResult.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(UtranBands.BAND_D, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void iccTransmitApduLogicalChannelResponse(RadioResponseInfo radioResponseInfo, IccIoResult iccIoResult) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            iccIoResult.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(107, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IRadioResponse, vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
        public ArrayList<String> interfaceChain() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IBase.kInterfaceName);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(256067662, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readStringVector();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IRadioResponse, vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
        public String interfaceDescriptor() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IBase.kInterfaceName);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(256136003, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readString();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IRadioResponse, vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
        public boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException {
            return this.mRemote.linkToDeath(deathRecipient, j);
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IRadioResponse, vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
        public void notifySyspropsChanged() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IBase.kInterfaceName);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(257120595, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void nvReadItemResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(108, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void nvResetConfigResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(111, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void nvWriteCdmaPrlResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(110, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void nvWriteItemResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(109, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IRadioResponse, vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
        public void ping() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IBase.kInterfaceName);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(256921159, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void pullLceDataResponse(RadioResponseInfo radioResponseInfo, LceDataInfo lceDataInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            lceDataInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(122, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void queryCallForwardInTimeSlotStatusResponse(RadioResponseInfo radioResponseInfo, ArrayList<CallForwardInfoEx> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            CallForwardInfoEx.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(173, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void queryFemtoCellSystemSelectionModeResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(218, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void queryNetworkLockResponse(RadioResponseInfo radioResponseInfo, int i, int i2, int i3, int i4, int i5, int i6, int i7) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            hwParcel.writeInt32(i5);
            hwParcel.writeInt32(i6);
            hwParcel.writeInt32(i7);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(191, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void queryPhbStorageInfoResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(147, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void queryUPBAvailableResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(161, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void queryUPBCapabilityResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(150, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void readPhbEntryResponse(RadioResponseInfo radioResponseInfo, ArrayList<PhbEntryStructure> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            PhbEntryStructure.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(149, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void readPhoneBookEntryExtResponse(RadioResponseInfo radioResponseInfo, ArrayList<PhbEntryExt> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            PhbEntryExt.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(159, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void readUPBAasListResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(165, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void readUPBAnrEntryResponse(RadioResponseInfo radioResponseInfo, ArrayList<PhbEntryStructure> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            PhbEntryStructure.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(164, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void readUPBEmailEntryResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(162, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void readUPBGasListResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(153, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void readUPBGrpEntryResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(154, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void readUPBSneEntryResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(163, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void rejectCallResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(17, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void reloadModemTypeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(209, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void removeCbMsgResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(ImsVTProvider.ConnectionEx.VideoProvider.SESSION_MODIFY_CANCEL_UPGRADE_FAIL, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void reportAirplaneModeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.RADIO_OFF, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void reportSimModeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.OUT_OF_SERVICE, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void reportSmsMemoryStatusResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(92, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void reportStkServiceIsRunningResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(93, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void requestIccSimAuthenticationResponse(RadioResponseInfo radioResponseInfo, IccIoResult iccIoResult) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            iccIoResult.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(115, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void requestIsimAuthenticationResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(95, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void requestShutdownResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(117, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void resetAllConnectionsResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.DIAL_MODIFIED_TO_USSD, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void resetMdDataRetryCountResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(235, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void resetRadioResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(232, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void restartRILDResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(233, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void runGbaAuthenticationResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(175, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void selectFemtocellResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(217, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void sendBurstDtmfResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(76, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void sendCDMAFeatureCodeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(75, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void sendCdmaSmsResponse(RadioResponseInfo radioResponseInfo, SendSmsResult sendSmsResult) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            sendSmsResult.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(77, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void sendCnapResponse(RadioResponseInfo radioResponseInfo, int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(170, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void sendDeviceStateResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(126, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void sendDtmfResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(24, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void sendEmbmsAtCommandResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(144, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void sendEnvelopeResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(60, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void sendEnvelopeWithStatusResponse(RadioResponseInfo radioResponseInfo, IccIoResult iccIoResult) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            iccIoResult.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(97, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void sendImsSmsResponse(RadioResponseInfo radioResponseInfo, SendSmsResult sendSmsResult) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            sendSmsResult.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(UtranBands.BAND_C, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void sendRequestRawResponse(RadioResponseInfo radioResponseInfo, ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt8Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(205, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void sendRequestStringsResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(206, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void sendSMSExpectMoreResponse(RadioResponseInfo radioResponseInfo, SendSmsResult sendSmsResult) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            sendSmsResult.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(26, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void sendSmsResponse(RadioResponseInfo radioResponseInfo, SendSmsResult sendSmsResult) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            sendSmsResult.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(25, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void sendTerminalResponseToSimResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(61, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void sendUssdResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(29, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void separateConnectionResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(50, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setAllowedCarriersResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(DataCallFailCause.INVALID_PCSCF_OR_DNS_ADDRESS, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setApcModeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.CALL_BARRED, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setBandModeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(58, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setBarringPasswordResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(42, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setCallForwardInTimeSlotResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(174, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setCallForwardResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(34, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setCallIndicationResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(177, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setCallWaitingResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(36, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_1.IRadioResponse
        public void setCarrierInfoForImsiEncryptionResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_1.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(ImsCallSessionProxy.CALL_INFO_MSG_TYPE_MO_CALL_ID_ASSIGN, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setCdmaBroadcastActivationResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(84, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setCdmaBroadcastConfigResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(83, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setCdmaRoamingPreferenceResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(69, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setCdmaSubscriptionSourceResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(68, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setCellInfoListRateResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(100, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setClipResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(167, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setClirResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(32, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setColpResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(171, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setColrResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(172, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setDataAllowedResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(113, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setDataProfileResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(116, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setE911StateResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(239, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setEccListResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(180, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setEccNumResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(184, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setEccServiceCategoryResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(179, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setEtwsResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(199, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setFacilityLockForAppResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(41, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setFdModeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(RadioCdmaSmsConst.UDH_OTHER_SIZE, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setFemtoCellSystemSelectionModeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(219, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setGsmBroadcastActivationResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(81, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setGsmBroadcastConfigResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(80, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setGsmBroadcastLangsResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(ImsVTProvider.ConnectionEx.VideoProvider.SESSION_MODIFY_CANCEL_UPGRADE_FAIL_AUTO_DOWNGRADE, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IRadioResponse, vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
        public void setHALInstrumentation() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IBase.kInterfaceName);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(256462420, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setIndicationFilterResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(127, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setInitialAttachApnResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(101, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_2.IRadioResponse
        public void setLinkCapacityReportingCriteriaResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_2.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(139, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setLocationUpdatesResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(67, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setLteAccessStratumReportResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(237, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setLteReleaseVersionResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.DIAL_MODIFIED_TO_SS, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setLteUplinkDataTransferResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(238, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setModemPowerResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(186, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setMuteResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(51, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setNetworkLockResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(192, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setNetworkSelectionModeAutomaticResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(44, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setNetworkSelectionModeManualResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(45, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setNetworkSelectionModeManualWithActResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(SmsAcknowledgeFailCause.MEMORY_CAPACITY_EXCEEDED, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setOperatorConfigurationResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.NETWORK_REJECT, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setOverrideApnResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(230, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setPOLEntryResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(225, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setPdnNameReuseResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(231, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setPdnReuseResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(RadioCdmaSmsConst.USER_DATA_MAX, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setPhoneBookMemStorageResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(158, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setPhonebookReadyResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(166, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setPreferredNetworkTypeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(64, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setPreferredVoicePrivacyResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(73, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setPropImsHandoverResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.NETWORK_RESP_TIMEOUT, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setRadioCapabilityResponse(RadioResponseInfo radioResponseInfo, RadioCapability radioCapability) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            radioCapability.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(119, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setRadioPowerResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(23, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setRemoveRestrictEutranModeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(236, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setResumeRegistrationResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(207, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setRoamingEnableResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(145, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setRxTestConfigResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(221, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setServiceStateToModemResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(220, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_2.IRadioResponse
        public void setSignalStrengthReportingCriteriaResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_2.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(138, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setSilentRebootResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.NO_VALID_SIM, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setSimCardPowerResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(128, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_1.IRadioResponse
        public void setSimCardPowerResponse_1_1(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_1.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(131, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setSimPowerResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(190, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setSmsFwkReadyRsp(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(204, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setSmsParametersResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(197, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setSmscAddressResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(91, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setSuppServPropertyResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.RADIO_ACCESS_FAILURE, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setSuppServiceNotificationsResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(55, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setTTYModeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(71, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setTrmResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(227, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setTxPowerStatusResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.RADIO_INTERNAL_ERROR, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setUiccSubscriptionResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(112, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void setVoicePreferStatusResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(SipMessage.CODE_SESSION_PROGRESS, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void setupDataCallResponse(RadioResponseInfo radioResponseInfo, SetupDataCallResult setupDataCallResult) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            setupDataCallResult.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(27, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void startDtmfResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(47, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_1.IRadioResponse
        public void startKeepaliveResponse(RadioResponseInfo radioResponseInfo, KeepaliveStatus keepaliveStatus) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_1.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            keepaliveStatus.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(RadioCdmaSmsConst.UDH_VAR_PIC_SIZE, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void startLceServiceResponse(RadioResponseInfo radioResponseInfo, LceStatusInfo lceStatusInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            lceStatusInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(120, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_1.IRadioResponse
        public void startNetworkScanResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_1.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(ImsCallSessionProxy.CALL_INFO_MSG_TYPE_ACTIVE, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void stopDtmfResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(48, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_1.IRadioResponse
        public void stopKeepaliveResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_1.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(ImsCallSessionProxy.CALL_INFO_MSG_TYPE_REMOTE_HOLD, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void stopLceServiceResponse(RadioResponseInfo radioResponseInfo, LceStatusInfo lceStatusInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            lceStatusInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(121, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_1.IRadioResponse
        public void stopNetworkScanResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_1.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(ImsCallSessionProxy.CALL_INFO_MSG_TYPE_DISCONNECTED, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void storeModemTypeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(208, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void supplyDepersonalizationResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(193, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void supplyDeviceNetworkDepersonalizationResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(255, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void supplyIccPin2ForAppResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(4, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void supplyIccPinForAppResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(2, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void supplyIccPuk2ForAppResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(5, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void supplyIccPukForAppResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(3, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void supplyNetworkDepersonalizationResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(8, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void switchWaitingOrHoldingAndActiveResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(15, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void syncDataSettingsToMdResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(234, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public String toString() {
            try {
                return interfaceDescriptor() + "@Proxy";
            } catch (RemoteException e) {
                return "[class or subclass of vendor.mediatek.hardware.radio@3.11::IRadioResponse]@Proxy";
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void triggerModeSwitchByEccResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(187, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IRadioResponse, vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
        public boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException {
            return this.mRemote.unlinkToDeath(deathRecipient);
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void vsimNotificationResponse(RadioResponseInfo radioResponseInfo, VsimEvent vsimEvent) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            vsimEvent.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(194, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void vsimOperationResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(195, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void writePhbEntryResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(148, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void writePhoneBookEntryExtResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(160, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void writeSmsToRuimResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(86, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioResponse
        public void writeSmsToSimResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(56, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioResponse
        public void writeUPBGrpEntryResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(155, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }
    }

    public static abstract class Stub extends HwBinder implements IRadioResponse {
        @Override // vendor.mediatek.hardware.radio.V3_11.IRadioResponse, vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
        public IHwBinder asBinder() {
            return this;
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IRadioResponse, vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
        public void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) {
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IRadioResponse, vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
        public final DebugInfo getDebugInfo() {
            DebugInfo debugInfo = new DebugInfo();
            debugInfo.pid = HidlSupport.getPidIfSharable();
            debugInfo.ptr = 0L;
            debugInfo.arch = 0;
            return debugInfo;
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IRadioResponse, vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
        public final ArrayList<byte[]> getHashChain() {
            return new ArrayList<>(Arrays.asList(new byte[]{-19, 2, 43, -22, 122, 13, -123, 14, 79, 47, 9, -121, 42, 29, -64, 117, -86, -37, -2, 77, 122, -41, 34, 10, -49, -44, 124, -87, -66, -99, -73, 84}, new byte[]{-15, -79, 77, 117, -78, -25, 90, -12, 55, 43, -61, -6, -1, 112, -75, -68, -83, -80, 124, -104, 87, 69, -76, -76, 8, 111, 6, 37, 27, 123, 115, -54}, new byte[]{13, -1, -63, -57, 96, 5, 121, -30, 41, -41, 44, 22, -61, 92, -41, 30, 54, 29, 127, -18, -108, 8, -106, 31, 87, 114, 92, 81, -11, -71, 44, -39}, new byte[]{41, 47, -91, 67, 115, 70, 28, 56, 12, 126, -90, -8, -122, -20, 117, 14, -111, 6, -39, 98, 50, 88, -93, -84, 44, 15, 121, 8, 123, -49, -91, 31}, new byte[]{44, -71, 10, 111, -24, 104, 4, 72, 109, -95, 124, -100, -57, -111, 59, -57, -68, -46, -82, -102, 57, 124, 65, 81, 2, 38, 26, 124, 34, -1, 17, 71}, new byte[]{-34, 31, 89, -58, -9, 9, 124, 23, -13, -19, 99, 34, 103, -66, -59, 103, -37, -105, 79, -46, -79, 78, 89, 15, 44, 89, 36, -80, 119, 85, 27, -6}, new byte[]{-24, 116, 59, 13, 74, 0, -8, -104, 10, -116, 24, -42, -44, -45, 20, -92, -104, -24, -111, -7, -32, -71, -64, 84, -38, -116, 115, 113, 46, -86, 66, 7}, new byte[]{-38, -116, 106, -23, -111, -58, -92, -78, -124, -52, 110, 68, 83, 50, -32, 100, -30, -114, -24, -96, -108, -126, -19, 90, -1, -7, -47, 89, -20, 102, -108, -73}, new byte[]{5, -86, 61, -26, 19, 10, -105, -120, -3, -74, -12, -45, -52, 87, -61, -22, -112, -16, 103, -25, 122, 94, 9, -42, -89, 114, -20, 127, 107, -54, 51, -46}, new byte[]{29, 74, 87, 118, 97, 76, 8, -75, -41, -108, -91, -20, 90, -80, 70, -105, 38, 12, -67, 75, 52, 65, -43, -109, 92, -43, 62, -25, 29, 25, -38, 2}, new byte[]{-20, 127, -41, -98, -48, 45, -6, -123, -68, 73, -108, 38, -83, -82, 62, -66, 35, -17, 5, 36, -13, -51, 105, 87, 19, -109, 36, -72, 59, 24, -54, 76}));
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IRadioResponse, vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
        public final ArrayList<String> interfaceChain() {
            return new ArrayList<>(Arrays.asList(IRadioResponse.kInterfaceName, vendor.mediatek.hardware.radio.V3_10.IRadioResponse.kInterfaceName, vendor.mediatek.hardware.radio.V3_9.IRadioResponse.kInterfaceName, vendor.mediatek.hardware.radio.V3_8.IRadioResponse.kInterfaceName, vendor.mediatek.hardware.radio.V3_7.IRadioResponse.kInterfaceName, vendor.mediatek.hardware.radio.V3_4.IRadioResponse.kInterfaceName, vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName, android.hardware.radio.V1_2.IRadioResponse.kInterfaceName, android.hardware.radio.V1_1.IRadioResponse.kInterfaceName, android.hardware.radio.V1_0.IRadioResponse.kInterfaceName, IBase.kInterfaceName));
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IRadioResponse, vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
        public final String interfaceDescriptor() {
            return IRadioResponse.kInterfaceName;
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IRadioResponse, vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
        public final boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) {
            return true;
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IRadioResponse, vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
        public final void notifySyspropsChanged() {
            HwBinder.enableInstrumentation();
        }

        public void onTransact(int i, HwParcel hwParcel, HwParcel hwParcel2, int i2) throws RemoteException {
            switch (i) {
                case 1:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo = new RadioResponseInfo();
                    radioResponseInfo.readFromParcel(hwParcel);
                    CardStatus cardStatus = new CardStatus();
                    cardStatus.readFromParcel(hwParcel);
                    getIccCardStatusResponse(radioResponseInfo, cardStatus);
                    return;
                case 2:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo2 = new RadioResponseInfo();
                    radioResponseInfo2.readFromParcel(hwParcel);
                    supplyIccPinForAppResponse(radioResponseInfo2, hwParcel.readInt32());
                    return;
                case 3:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo3 = new RadioResponseInfo();
                    radioResponseInfo3.readFromParcel(hwParcel);
                    supplyIccPukForAppResponse(radioResponseInfo3, hwParcel.readInt32());
                    return;
                case 4:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo4 = new RadioResponseInfo();
                    radioResponseInfo4.readFromParcel(hwParcel);
                    supplyIccPin2ForAppResponse(radioResponseInfo4, hwParcel.readInt32());
                    return;
                case 5:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo5 = new RadioResponseInfo();
                    radioResponseInfo5.readFromParcel(hwParcel);
                    supplyIccPuk2ForAppResponse(radioResponseInfo5, hwParcel.readInt32());
                    return;
                case 6:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo6 = new RadioResponseInfo();
                    radioResponseInfo6.readFromParcel(hwParcel);
                    changeIccPinForAppResponse(radioResponseInfo6, hwParcel.readInt32());
                    return;
                case 7:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo7 = new RadioResponseInfo();
                    radioResponseInfo7.readFromParcel(hwParcel);
                    changeIccPin2ForAppResponse(radioResponseInfo7, hwParcel.readInt32());
                    return;
                case 8:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo8 = new RadioResponseInfo();
                    radioResponseInfo8.readFromParcel(hwParcel);
                    supplyNetworkDepersonalizationResponse(radioResponseInfo8, hwParcel.readInt32());
                    return;
                case 9:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo9 = new RadioResponseInfo();
                    radioResponseInfo9.readFromParcel(hwParcel);
                    getCurrentCallsResponse(radioResponseInfo9, Call.readVectorFromParcel(hwParcel));
                    return;
                case 10:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo10 = new RadioResponseInfo();
                    radioResponseInfo10.readFromParcel(hwParcel);
                    dialResponse(radioResponseInfo10);
                    return;
                case 11:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo11 = new RadioResponseInfo();
                    radioResponseInfo11.readFromParcel(hwParcel);
                    getIMSIForAppResponse(radioResponseInfo11, hwParcel.readString());
                    return;
                case 12:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo12 = new RadioResponseInfo();
                    radioResponseInfo12.readFromParcel(hwParcel);
                    hangupConnectionResponse(radioResponseInfo12);
                    return;
                case 13:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo13 = new RadioResponseInfo();
                    radioResponseInfo13.readFromParcel(hwParcel);
                    hangupWaitingOrBackgroundResponse(radioResponseInfo13);
                    return;
                case 14:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo14 = new RadioResponseInfo();
                    radioResponseInfo14.readFromParcel(hwParcel);
                    hangupForegroundResumeBackgroundResponse(radioResponseInfo14);
                    return;
                case 15:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo15 = new RadioResponseInfo();
                    radioResponseInfo15.readFromParcel(hwParcel);
                    switchWaitingOrHoldingAndActiveResponse(radioResponseInfo15);
                    return;
                case 16:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo16 = new RadioResponseInfo();
                    radioResponseInfo16.readFromParcel(hwParcel);
                    conferenceResponse(radioResponseInfo16);
                    return;
                case 17:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo17 = new RadioResponseInfo();
                    radioResponseInfo17.readFromParcel(hwParcel);
                    rejectCallResponse(radioResponseInfo17);
                    return;
                case 18:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo18 = new RadioResponseInfo();
                    radioResponseInfo18.readFromParcel(hwParcel);
                    LastCallFailCauseInfo lastCallFailCauseInfo = new LastCallFailCauseInfo();
                    lastCallFailCauseInfo.readFromParcel(hwParcel);
                    getLastCallFailCauseResponse(radioResponseInfo18, lastCallFailCauseInfo);
                    return;
                case 19:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo19 = new RadioResponseInfo();
                    radioResponseInfo19.readFromParcel(hwParcel);
                    SignalStrength signalStrength = new SignalStrength();
                    signalStrength.readFromParcel(hwParcel);
                    getSignalStrengthResponse(radioResponseInfo19, signalStrength);
                    return;
                case 20:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo20 = new RadioResponseInfo();
                    radioResponseInfo20.readFromParcel(hwParcel);
                    VoiceRegStateResult voiceRegStateResult = new VoiceRegStateResult();
                    voiceRegStateResult.readFromParcel(hwParcel);
                    getVoiceRegistrationStateResponse(radioResponseInfo20, voiceRegStateResult);
                    return;
                case 21:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo21 = new RadioResponseInfo();
                    radioResponseInfo21.readFromParcel(hwParcel);
                    DataRegStateResult dataRegStateResult = new DataRegStateResult();
                    dataRegStateResult.readFromParcel(hwParcel);
                    getDataRegistrationStateResponse(radioResponseInfo21, dataRegStateResult);
                    return;
                case 22:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo22 = new RadioResponseInfo();
                    radioResponseInfo22.readFromParcel(hwParcel);
                    getOperatorResponse(radioResponseInfo22, hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 23:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo23 = new RadioResponseInfo();
                    radioResponseInfo23.readFromParcel(hwParcel);
                    setRadioPowerResponse(radioResponseInfo23);
                    return;
                case 24:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo24 = new RadioResponseInfo();
                    radioResponseInfo24.readFromParcel(hwParcel);
                    sendDtmfResponse(radioResponseInfo24);
                    return;
                case 25:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo25 = new RadioResponseInfo();
                    radioResponseInfo25.readFromParcel(hwParcel);
                    SendSmsResult sendSmsResult = new SendSmsResult();
                    sendSmsResult.readFromParcel(hwParcel);
                    sendSmsResponse(radioResponseInfo25, sendSmsResult);
                    return;
                case 26:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo26 = new RadioResponseInfo();
                    radioResponseInfo26.readFromParcel(hwParcel);
                    SendSmsResult sendSmsResult2 = new SendSmsResult();
                    sendSmsResult2.readFromParcel(hwParcel);
                    sendSMSExpectMoreResponse(radioResponseInfo26, sendSmsResult2);
                    return;
                case 27:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo27 = new RadioResponseInfo();
                    radioResponseInfo27.readFromParcel(hwParcel);
                    SetupDataCallResult setupDataCallResult = new SetupDataCallResult();
                    setupDataCallResult.readFromParcel(hwParcel);
                    setupDataCallResponse(radioResponseInfo27, setupDataCallResult);
                    return;
                case 28:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo28 = new RadioResponseInfo();
                    radioResponseInfo28.readFromParcel(hwParcel);
                    IccIoResult iccIoResult = new IccIoResult();
                    iccIoResult.readFromParcel(hwParcel);
                    iccIOForAppResponse(radioResponseInfo28, iccIoResult);
                    return;
                case 29:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo29 = new RadioResponseInfo();
                    radioResponseInfo29.readFromParcel(hwParcel);
                    sendUssdResponse(radioResponseInfo29);
                    return;
                case 30:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo30 = new RadioResponseInfo();
                    radioResponseInfo30.readFromParcel(hwParcel);
                    cancelPendingUssdResponse(radioResponseInfo30);
                    return;
                case 31:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo31 = new RadioResponseInfo();
                    radioResponseInfo31.readFromParcel(hwParcel);
                    getClirResponse(radioResponseInfo31, hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 32:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo32 = new RadioResponseInfo();
                    radioResponseInfo32.readFromParcel(hwParcel);
                    setClirResponse(radioResponseInfo32);
                    return;
                case 33:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo33 = new RadioResponseInfo();
                    radioResponseInfo33.readFromParcel(hwParcel);
                    getCallForwardStatusResponse(radioResponseInfo33, CallForwardInfo.readVectorFromParcel(hwParcel));
                    return;
                case 34:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo34 = new RadioResponseInfo();
                    radioResponseInfo34.readFromParcel(hwParcel);
                    setCallForwardResponse(radioResponseInfo34);
                    return;
                case 35:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo35 = new RadioResponseInfo();
                    radioResponseInfo35.readFromParcel(hwParcel);
                    getCallWaitingResponse(radioResponseInfo35, hwParcel.readBool(), hwParcel.readInt32());
                    return;
                case 36:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo36 = new RadioResponseInfo();
                    radioResponseInfo36.readFromParcel(hwParcel);
                    setCallWaitingResponse(radioResponseInfo36);
                    return;
                case 37:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo37 = new RadioResponseInfo();
                    radioResponseInfo37.readFromParcel(hwParcel);
                    acknowledgeLastIncomingGsmSmsResponse(radioResponseInfo37);
                    return;
                case 38:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo38 = new RadioResponseInfo();
                    radioResponseInfo38.readFromParcel(hwParcel);
                    acceptCallResponse(radioResponseInfo38);
                    return;
                case 39:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo39 = new RadioResponseInfo();
                    radioResponseInfo39.readFromParcel(hwParcel);
                    deactivateDataCallResponse(radioResponseInfo39);
                    return;
                case 40:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo40 = new RadioResponseInfo();
                    radioResponseInfo40.readFromParcel(hwParcel);
                    getFacilityLockForAppResponse(radioResponseInfo40, hwParcel.readInt32());
                    return;
                case 41:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo41 = new RadioResponseInfo();
                    radioResponseInfo41.readFromParcel(hwParcel);
                    setFacilityLockForAppResponse(radioResponseInfo41, hwParcel.readInt32());
                    return;
                case 42:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo42 = new RadioResponseInfo();
                    radioResponseInfo42.readFromParcel(hwParcel);
                    setBarringPasswordResponse(radioResponseInfo42);
                    return;
                case 43:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo43 = new RadioResponseInfo();
                    radioResponseInfo43.readFromParcel(hwParcel);
                    getNetworkSelectionModeResponse(radioResponseInfo43, hwParcel.readBool());
                    return;
                case 44:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo44 = new RadioResponseInfo();
                    radioResponseInfo44.readFromParcel(hwParcel);
                    setNetworkSelectionModeAutomaticResponse(radioResponseInfo44);
                    return;
                case 45:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo45 = new RadioResponseInfo();
                    radioResponseInfo45.readFromParcel(hwParcel);
                    setNetworkSelectionModeManualResponse(radioResponseInfo45);
                    return;
                case 46:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo46 = new RadioResponseInfo();
                    radioResponseInfo46.readFromParcel(hwParcel);
                    getAvailableNetworksResponse(radioResponseInfo46, OperatorInfo.readVectorFromParcel(hwParcel));
                    return;
                case 47:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo47 = new RadioResponseInfo();
                    radioResponseInfo47.readFromParcel(hwParcel);
                    startDtmfResponse(radioResponseInfo47);
                    return;
                case 48:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo48 = new RadioResponseInfo();
                    radioResponseInfo48.readFromParcel(hwParcel);
                    stopDtmfResponse(radioResponseInfo48);
                    return;
                case 49:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo49 = new RadioResponseInfo();
                    radioResponseInfo49.readFromParcel(hwParcel);
                    getBasebandVersionResponse(radioResponseInfo49, hwParcel.readString());
                    return;
                case 50:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo50 = new RadioResponseInfo();
                    radioResponseInfo50.readFromParcel(hwParcel);
                    separateConnectionResponse(radioResponseInfo50);
                    return;
                case 51:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo51 = new RadioResponseInfo();
                    radioResponseInfo51.readFromParcel(hwParcel);
                    setMuteResponse(radioResponseInfo51);
                    return;
                case 52:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo52 = new RadioResponseInfo();
                    radioResponseInfo52.readFromParcel(hwParcel);
                    getMuteResponse(radioResponseInfo52, hwParcel.readBool());
                    return;
                case 53:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo53 = new RadioResponseInfo();
                    radioResponseInfo53.readFromParcel(hwParcel);
                    getClipResponse(radioResponseInfo53, hwParcel.readInt32());
                    return;
                case 54:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo54 = new RadioResponseInfo();
                    radioResponseInfo54.readFromParcel(hwParcel);
                    getDataCallListResponse(radioResponseInfo54, SetupDataCallResult.readVectorFromParcel(hwParcel));
                    return;
                case 55:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo55 = new RadioResponseInfo();
                    radioResponseInfo55.readFromParcel(hwParcel);
                    setSuppServiceNotificationsResponse(radioResponseInfo55);
                    return;
                case 56:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo56 = new RadioResponseInfo();
                    radioResponseInfo56.readFromParcel(hwParcel);
                    writeSmsToSimResponse(radioResponseInfo56, hwParcel.readInt32());
                    return;
                case 57:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo57 = new RadioResponseInfo();
                    radioResponseInfo57.readFromParcel(hwParcel);
                    deleteSmsOnSimResponse(radioResponseInfo57);
                    return;
                case 58:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo58 = new RadioResponseInfo();
                    radioResponseInfo58.readFromParcel(hwParcel);
                    setBandModeResponse(radioResponseInfo58);
                    return;
                case 59:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo59 = new RadioResponseInfo();
                    radioResponseInfo59.readFromParcel(hwParcel);
                    getAvailableBandModesResponse(radioResponseInfo59, hwParcel.readInt32Vector());
                    return;
                case 60:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo60 = new RadioResponseInfo();
                    radioResponseInfo60.readFromParcel(hwParcel);
                    sendEnvelopeResponse(radioResponseInfo60, hwParcel.readString());
                    return;
                case 61:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo61 = new RadioResponseInfo();
                    radioResponseInfo61.readFromParcel(hwParcel);
                    sendTerminalResponseToSimResponse(radioResponseInfo61);
                    return;
                case 62:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo62 = new RadioResponseInfo();
                    radioResponseInfo62.readFromParcel(hwParcel);
                    handleStkCallSetupRequestFromSimResponse(radioResponseInfo62);
                    return;
                case 63:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo63 = new RadioResponseInfo();
                    radioResponseInfo63.readFromParcel(hwParcel);
                    explicitCallTransferResponse(radioResponseInfo63);
                    return;
                case 64:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo64 = new RadioResponseInfo();
                    radioResponseInfo64.readFromParcel(hwParcel);
                    setPreferredNetworkTypeResponse(radioResponseInfo64);
                    return;
                case 65:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo65 = new RadioResponseInfo();
                    radioResponseInfo65.readFromParcel(hwParcel);
                    getPreferredNetworkTypeResponse(radioResponseInfo65, hwParcel.readInt32());
                    return;
                case 66:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo66 = new RadioResponseInfo();
                    radioResponseInfo66.readFromParcel(hwParcel);
                    getNeighboringCidsResponse(radioResponseInfo66, NeighboringCell.readVectorFromParcel(hwParcel));
                    return;
                case 67:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo67 = new RadioResponseInfo();
                    radioResponseInfo67.readFromParcel(hwParcel);
                    setLocationUpdatesResponse(radioResponseInfo67);
                    return;
                case 68:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo68 = new RadioResponseInfo();
                    radioResponseInfo68.readFromParcel(hwParcel);
                    setCdmaSubscriptionSourceResponse(radioResponseInfo68);
                    return;
                case LastCallFailCause.REQUESTED_FACILITY_NOT_IMPLEMENTED /* 69 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo69 = new RadioResponseInfo();
                    radioResponseInfo69.readFromParcel(hwParcel);
                    setCdmaRoamingPreferenceResponse(radioResponseInfo69);
                    return;
                case 70:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo70 = new RadioResponseInfo();
                    radioResponseInfo70.readFromParcel(hwParcel);
                    getCdmaRoamingPreferenceResponse(radioResponseInfo70, hwParcel.readInt32());
                    return;
                case 71:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo71 = new RadioResponseInfo();
                    radioResponseInfo71.readFromParcel(hwParcel);
                    setTTYModeResponse(radioResponseInfo71);
                    return;
                case 72:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo72 = new RadioResponseInfo();
                    radioResponseInfo72.readFromParcel(hwParcel);
                    getTTYModeResponse(radioResponseInfo72, hwParcel.readInt32());
                    return;
                case 73:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo73 = new RadioResponseInfo();
                    radioResponseInfo73.readFromParcel(hwParcel);
                    setPreferredVoicePrivacyResponse(radioResponseInfo73);
                    return;
                case 74:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo74 = new RadioResponseInfo();
                    radioResponseInfo74.readFromParcel(hwParcel);
                    getPreferredVoicePrivacyResponse(radioResponseInfo74, hwParcel.readBool());
                    return;
                case 75:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo75 = new RadioResponseInfo();
                    radioResponseInfo75.readFromParcel(hwParcel);
                    sendCDMAFeatureCodeResponse(radioResponseInfo75);
                    return;
                case 76:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo76 = new RadioResponseInfo();
                    radioResponseInfo76.readFromParcel(hwParcel);
                    sendBurstDtmfResponse(radioResponseInfo76);
                    return;
                case 77:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo77 = new RadioResponseInfo();
                    radioResponseInfo77.readFromParcel(hwParcel);
                    SendSmsResult sendSmsResult3 = new SendSmsResult();
                    sendSmsResult3.readFromParcel(hwParcel);
                    sendCdmaSmsResponse(radioResponseInfo77, sendSmsResult3);
                    return;
                case 78:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo78 = new RadioResponseInfo();
                    radioResponseInfo78.readFromParcel(hwParcel);
                    acknowledgeLastIncomingCdmaSmsResponse(radioResponseInfo78);
                    return;
                case 79:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo79 = new RadioResponseInfo();
                    radioResponseInfo79.readFromParcel(hwParcel);
                    getGsmBroadcastConfigResponse(radioResponseInfo79, GsmBroadcastSmsConfigInfo.readVectorFromParcel(hwParcel));
                    return;
                case NgranBands.BAND_80 /* 80 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo80 = new RadioResponseInfo();
                    radioResponseInfo80.readFromParcel(hwParcel);
                    setGsmBroadcastConfigResponse(radioResponseInfo80);
                    return;
                case 81:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo81 = new RadioResponseInfo();
                    radioResponseInfo81.readFromParcel(hwParcel);
                    setGsmBroadcastActivationResponse(radioResponseInfo81);
                    return;
                case NgranBands.BAND_82 /* 82 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo82 = new RadioResponseInfo();
                    radioResponseInfo82.readFromParcel(hwParcel);
                    getCdmaBroadcastConfigResponse(radioResponseInfo82, CdmaBroadcastSmsConfigInfo.readVectorFromParcel(hwParcel));
                    return;
                case NgranBands.BAND_83 /* 83 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo83 = new RadioResponseInfo();
                    radioResponseInfo83.readFromParcel(hwParcel);
                    setCdmaBroadcastConfigResponse(radioResponseInfo83);
                    return;
                case NgranBands.BAND_84 /* 84 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo84 = new RadioResponseInfo();
                    radioResponseInfo84.readFromParcel(hwParcel);
                    setCdmaBroadcastActivationResponse(radioResponseInfo84);
                    return;
                case EutranBands.BAND_85 /* 85 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo85 = new RadioResponseInfo();
                    radioResponseInfo85.readFromParcel(hwParcel);
                    getCDMASubscriptionResponse(radioResponseInfo85, hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case NgranBands.BAND_86 /* 86 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo86 = new RadioResponseInfo();
                    radioResponseInfo86.readFromParcel(hwParcel);
                    writeSmsToRuimResponse(radioResponseInfo86, hwParcel.readInt32());
                    return;
                case 87:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo87 = new RadioResponseInfo();
                    radioResponseInfo87.readFromParcel(hwParcel);
                    deleteSmsOnRuimResponse(radioResponseInfo87);
                    return;
                case 88:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo88 = new RadioResponseInfo();
                    radioResponseInfo88.readFromParcel(hwParcel);
                    getDeviceIdentityResponse(radioResponseInfo88, hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case NgranBands.BAND_89 /* 89 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo89 = new RadioResponseInfo();
                    radioResponseInfo89.readFromParcel(hwParcel);
                    exitEmergencyCallbackModeResponse(radioResponseInfo89);
                    return;
                case NgranBands.BAND_90 /* 90 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo90 = new RadioResponseInfo();
                    radioResponseInfo90.readFromParcel(hwParcel);
                    getSmscAddressResponse(radioResponseInfo90, hwParcel.readString());
                    return;
                case 91:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo91 = new RadioResponseInfo();
                    radioResponseInfo91.readFromParcel(hwParcel);
                    setSmscAddressResponse(radioResponseInfo91);
                    return;
                case NgranBands.BAND_92 /* 92 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo92 = new RadioResponseInfo();
                    radioResponseInfo92.readFromParcel(hwParcel);
                    reportSmsMemoryStatusResponse(radioResponseInfo92);
                    return;
                case NgranBands.BAND_93 /* 93 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo93 = new RadioResponseInfo();
                    radioResponseInfo93.readFromParcel(hwParcel);
                    reportStkServiceIsRunningResponse(radioResponseInfo93);
                    return;
                case NgranBands.BAND_94 /* 94 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo94 = new RadioResponseInfo();
                    radioResponseInfo94.readFromParcel(hwParcel);
                    getCdmaSubscriptionSourceResponse(radioResponseInfo94, hwParcel.readInt32());
                    return;
                case 95:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo95 = new RadioResponseInfo();
                    radioResponseInfo95.readFromParcel(hwParcel);
                    requestIsimAuthenticationResponse(radioResponseInfo95, hwParcel.readString());
                    return;
                case 96:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo96 = new RadioResponseInfo();
                    radioResponseInfo96.readFromParcel(hwParcel);
                    acknowledgeIncomingGsmSmsWithPduResponse(radioResponseInfo96);
                    return;
                case 97:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo97 = new RadioResponseInfo();
                    radioResponseInfo97.readFromParcel(hwParcel);
                    IccIoResult iccIoResult2 = new IccIoResult();
                    iccIoResult2.readFromParcel(hwParcel);
                    sendEnvelopeWithStatusResponse(radioResponseInfo97, iccIoResult2);
                    return;
                case 98:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo98 = new RadioResponseInfo();
                    radioResponseInfo98.readFromParcel(hwParcel);
                    getVoiceRadioTechnologyResponse(radioResponseInfo98, hwParcel.readInt32());
                    return;
                case 99:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo99 = new RadioResponseInfo();
                    radioResponseInfo99.readFromParcel(hwParcel);
                    getCellInfoListResponse(radioResponseInfo99, CellInfo.readVectorFromParcel(hwParcel));
                    return;
                case 100:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo100 = new RadioResponseInfo();
                    radioResponseInfo100.readFromParcel(hwParcel);
                    setCellInfoListRateResponse(radioResponseInfo100);
                    return;
                case 101:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo101 = new RadioResponseInfo();
                    radioResponseInfo101.readFromParcel(hwParcel);
                    setInitialAttachApnResponse(radioResponseInfo101);
                    return;
                case 102:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo102 = new RadioResponseInfo();
                    radioResponseInfo102.readFromParcel(hwParcel);
                    getImsRegistrationStateResponse(radioResponseInfo102, hwParcel.readBool(), hwParcel.readInt32());
                    return;
                case UtranBands.BAND_C /* 103 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo103 = new RadioResponseInfo();
                    radioResponseInfo103.readFromParcel(hwParcel);
                    SendSmsResult sendSmsResult4 = new SendSmsResult();
                    sendSmsResult4.readFromParcel(hwParcel);
                    sendImsSmsResponse(radioResponseInfo103, sendSmsResult4);
                    return;
                case UtranBands.BAND_D /* 104 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo104 = new RadioResponseInfo();
                    radioResponseInfo104.readFromParcel(hwParcel);
                    IccIoResult iccIoResult3 = new IccIoResult();
                    iccIoResult3.readFromParcel(hwParcel);
                    iccTransmitApduBasicChannelResponse(radioResponseInfo104, iccIoResult3);
                    return;
                case UtranBands.BAND_E /* 105 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo105 = new RadioResponseInfo();
                    radioResponseInfo105.readFromParcel(hwParcel);
                    iccOpenLogicalChannelResponse(radioResponseInfo105, hwParcel.readInt32(), hwParcel.readInt8Vector());
                    return;
                case UtranBands.BAND_F /* 106 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo106 = new RadioResponseInfo();
                    radioResponseInfo106.readFromParcel(hwParcel);
                    iccCloseLogicalChannelResponse(radioResponseInfo106);
                    return;
                case 107:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo107 = new RadioResponseInfo();
                    radioResponseInfo107.readFromParcel(hwParcel);
                    IccIoResult iccIoResult4 = new IccIoResult();
                    iccIoResult4.readFromParcel(hwParcel);
                    iccTransmitApduLogicalChannelResponse(radioResponseInfo107, iccIoResult4);
                    return;
                case 108:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo108 = new RadioResponseInfo();
                    radioResponseInfo108.readFromParcel(hwParcel);
                    nvReadItemResponse(radioResponseInfo108, hwParcel.readString());
                    return;
                case 109:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo109 = new RadioResponseInfo();
                    radioResponseInfo109.readFromParcel(hwParcel);
                    nvWriteItemResponse(radioResponseInfo109);
                    return;
                case 110:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo110 = new RadioResponseInfo();
                    radioResponseInfo110.readFromParcel(hwParcel);
                    nvWriteCdmaPrlResponse(radioResponseInfo110);
                    return;
                case 111:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo111 = new RadioResponseInfo();
                    radioResponseInfo111.readFromParcel(hwParcel);
                    nvResetConfigResponse(radioResponseInfo111);
                    return;
                case 112:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo112 = new RadioResponseInfo();
                    radioResponseInfo112.readFromParcel(hwParcel);
                    setUiccSubscriptionResponse(radioResponseInfo112);
                    return;
                case 113:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo113 = new RadioResponseInfo();
                    radioResponseInfo113.readFromParcel(hwParcel);
                    setDataAllowedResponse(radioResponseInfo113);
                    return;
                case 114:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo114 = new RadioResponseInfo();
                    radioResponseInfo114.readFromParcel(hwParcel);
                    getHardwareConfigResponse(radioResponseInfo114, HardwareConfig.readVectorFromParcel(hwParcel));
                    return;
                case 115:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo115 = new RadioResponseInfo();
                    radioResponseInfo115.readFromParcel(hwParcel);
                    IccIoResult iccIoResult5 = new IccIoResult();
                    iccIoResult5.readFromParcel(hwParcel);
                    requestIccSimAuthenticationResponse(radioResponseInfo115, iccIoResult5);
                    return;
                case 116:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo116 = new RadioResponseInfo();
                    radioResponseInfo116.readFromParcel(hwParcel);
                    setDataProfileResponse(radioResponseInfo116);
                    return;
                case 117:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo117 = new RadioResponseInfo();
                    radioResponseInfo117.readFromParcel(hwParcel);
                    requestShutdownResponse(radioResponseInfo117);
                    return;
                case 118:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo118 = new RadioResponseInfo();
                    radioResponseInfo118.readFromParcel(hwParcel);
                    RadioCapability radioCapability = new RadioCapability();
                    radioCapability.readFromParcel(hwParcel);
                    getRadioCapabilityResponse(radioResponseInfo118, radioCapability);
                    return;
                case 119:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo119 = new RadioResponseInfo();
                    radioResponseInfo119.readFromParcel(hwParcel);
                    RadioCapability radioCapability2 = new RadioCapability();
                    radioCapability2.readFromParcel(hwParcel);
                    setRadioCapabilityResponse(radioResponseInfo119, radioCapability2);
                    return;
                case 120:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo120 = new RadioResponseInfo();
                    radioResponseInfo120.readFromParcel(hwParcel);
                    LceStatusInfo lceStatusInfo = new LceStatusInfo();
                    lceStatusInfo.readFromParcel(hwParcel);
                    startLceServiceResponse(radioResponseInfo120, lceStatusInfo);
                    return;
                case 121:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo121 = new RadioResponseInfo();
                    radioResponseInfo121.readFromParcel(hwParcel);
                    LceStatusInfo lceStatusInfo2 = new LceStatusInfo();
                    lceStatusInfo2.readFromParcel(hwParcel);
                    stopLceServiceResponse(radioResponseInfo121, lceStatusInfo2);
                    return;
                case 122:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo122 = new RadioResponseInfo();
                    radioResponseInfo122.readFromParcel(hwParcel);
                    LceDataInfo lceDataInfo = new LceDataInfo();
                    lceDataInfo.readFromParcel(hwParcel);
                    pullLceDataResponse(radioResponseInfo122, lceDataInfo);
                    return;
                case DataCallFailCause.INVALID_DNS_ADDR /* 123 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo123 = new RadioResponseInfo();
                    radioResponseInfo123.readFromParcel(hwParcel);
                    ActivityStatsInfo activityStatsInfo = new ActivityStatsInfo();
                    activityStatsInfo.readFromParcel(hwParcel);
                    getModemActivityInfoResponse(radioResponseInfo123, activityStatsInfo);
                    return;
                case DataCallFailCause.INVALID_PCSCF_OR_DNS_ADDRESS /* 124 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo124 = new RadioResponseInfo();
                    radioResponseInfo124.readFromParcel(hwParcel);
                    setAllowedCarriersResponse(radioResponseInfo124, hwParcel.readInt32());
                    return;
                case 125:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo125 = new RadioResponseInfo();
                    radioResponseInfo125.readFromParcel(hwParcel);
                    boolean bool = hwParcel.readBool();
                    CarrierRestrictions carrierRestrictions = new CarrierRestrictions();
                    carrierRestrictions.readFromParcel(hwParcel);
                    getAllowedCarriersResponse(radioResponseInfo125, bool, carrierRestrictions);
                    return;
                case 126:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo126 = new RadioResponseInfo();
                    radioResponseInfo126.readFromParcel(hwParcel);
                    sendDeviceStateResponse(radioResponseInfo126);
                    return;
                case 127:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo127 = new RadioResponseInfo();
                    radioResponseInfo127.readFromParcel(hwParcel);
                    setIndicationFilterResponse(radioResponseInfo127);
                    return;
                case 128:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo128 = new RadioResponseInfo();
                    radioResponseInfo128.readFromParcel(hwParcel);
                    setSimCardPowerResponse(radioResponseInfo128);
                    return;
                case 129:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioResponse.kInterfaceName);
                    acknowledgeRequest(hwParcel.readInt32());
                    return;
                case ImsCallSessionProxy.CALL_INFO_MSG_TYPE_MO_CALL_ID_ASSIGN /* 130 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_1.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo129 = new RadioResponseInfo();
                    radioResponseInfo129.readFromParcel(hwParcel);
                    setCarrierInfoForImsiEncryptionResponse(radioResponseInfo129);
                    return;
                case 131:
                    hwParcel.enforceInterface(android.hardware.radio.V1_1.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo130 = new RadioResponseInfo();
                    radioResponseInfo130.readFromParcel(hwParcel);
                    setSimCardPowerResponse_1_1(radioResponseInfo130);
                    return;
                case ImsCallSessionProxy.CALL_INFO_MSG_TYPE_ACTIVE /* 132 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_1.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo131 = new RadioResponseInfo();
                    radioResponseInfo131.readFromParcel(hwParcel);
                    startNetworkScanResponse(radioResponseInfo131);
                    return;
                case ImsCallSessionProxy.CALL_INFO_MSG_TYPE_DISCONNECTED /* 133 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_1.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo132 = new RadioResponseInfo();
                    radioResponseInfo132.readFromParcel(hwParcel);
                    stopNetworkScanResponse(radioResponseInfo132);
                    return;
                case RadioCdmaSmsConst.UDH_VAR_PIC_SIZE /* 134 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_1.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo133 = new RadioResponseInfo();
                    radioResponseInfo133.readFromParcel(hwParcel);
                    KeepaliveStatus keepaliveStatus = new KeepaliveStatus();
                    keepaliveStatus.readFromParcel(hwParcel);
                    startKeepaliveResponse(radioResponseInfo133, keepaliveStatus);
                    return;
                case ImsCallSessionProxy.CALL_INFO_MSG_TYPE_REMOTE_HOLD /* 135 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_1.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo134 = new RadioResponseInfo();
                    radioResponseInfo134.readFromParcel(hwParcel);
                    stopKeepaliveResponse(radioResponseInfo134);
                    return;
                case ImsCallSessionProxy.CALL_INFO_MSG_TYPE_REMOTE_RESUME /* 136 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_2.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo135 = new RadioResponseInfo();
                    radioResponseInfo135.readFromParcel(hwParcel);
                    getCellInfoListResponse_1_2(radioResponseInfo135, android.hardware.radio.V1_2.CellInfo.readVectorFromParcel(hwParcel));
                    return;
                case 137:
                    hwParcel.enforceInterface(android.hardware.radio.V1_2.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo136 = new RadioResponseInfo();
                    radioResponseInfo136.readFromParcel(hwParcel);
                    android.hardware.radio.V1_2.CardStatus cardStatus2 = new android.hardware.radio.V1_2.CardStatus();
                    cardStatus2.readFromParcel(hwParcel);
                    getIccCardStatusResponse_1_2(radioResponseInfo136, cardStatus2);
                    return;
                case 138:
                    hwParcel.enforceInterface(android.hardware.radio.V1_2.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo137 = new RadioResponseInfo();
                    radioResponseInfo137.readFromParcel(hwParcel);
                    setSignalStrengthReportingCriteriaResponse(radioResponseInfo137);
                    return;
                case 139:
                    hwParcel.enforceInterface(android.hardware.radio.V1_2.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo138 = new RadioResponseInfo();
                    radioResponseInfo138.readFromParcel(hwParcel);
                    setLinkCapacityReportingCriteriaResponse(radioResponseInfo138);
                    return;
                case 140:
                    hwParcel.enforceInterface(android.hardware.radio.V1_2.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo139 = new RadioResponseInfo();
                    radioResponseInfo139.readFromParcel(hwParcel);
                    getCurrentCallsResponse_1_2(radioResponseInfo139, android.hardware.radio.V1_2.Call.readVectorFromParcel(hwParcel));
                    return;
                case 141:
                    hwParcel.enforceInterface(android.hardware.radio.V1_2.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo140 = new RadioResponseInfo();
                    radioResponseInfo140.readFromParcel(hwParcel);
                    android.hardware.radio.V1_2.SignalStrength signalStrength2 = new android.hardware.radio.V1_2.SignalStrength();
                    signalStrength2.readFromParcel(hwParcel);
                    getSignalStrengthResponse_1_2(radioResponseInfo140, signalStrength2);
                    return;
                case 142:
                    hwParcel.enforceInterface(android.hardware.radio.V1_2.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo141 = new RadioResponseInfo();
                    radioResponseInfo141.readFromParcel(hwParcel);
                    android.hardware.radio.V1_2.VoiceRegStateResult voiceRegStateResult2 = new android.hardware.radio.V1_2.VoiceRegStateResult();
                    voiceRegStateResult2.readFromParcel(hwParcel);
                    getVoiceRegistrationStateResponse_1_2(radioResponseInfo141, voiceRegStateResult2);
                    return;
                case 143:
                    hwParcel.enforceInterface(android.hardware.radio.V1_2.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo142 = new RadioResponseInfo();
                    radioResponseInfo142.readFromParcel(hwParcel);
                    android.hardware.radio.V1_2.DataRegStateResult dataRegStateResult2 = new android.hardware.radio.V1_2.DataRegStateResult();
                    dataRegStateResult2.readFromParcel(hwParcel);
                    getDataRegistrationStateResponse_1_2(radioResponseInfo142, dataRegStateResult2);
                    return;
                case 144:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo143 = new RadioResponseInfo();
                    radioResponseInfo143.readFromParcel(hwParcel);
                    sendEmbmsAtCommandResponse(radioResponseInfo143, hwParcel.readString());
                    return;
                case 145:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo144 = new RadioResponseInfo();
                    radioResponseInfo144.readFromParcel(hwParcel);
                    setRoamingEnableResponse(radioResponseInfo144);
                    return;
                case 146:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo145 = new RadioResponseInfo();
                    radioResponseInfo145.readFromParcel(hwParcel);
                    getRoamingEnableResponse(radioResponseInfo145, hwParcel.readInt32Vector());
                    return;
                case 147:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo146 = new RadioResponseInfo();
                    radioResponseInfo146.readFromParcel(hwParcel);
                    queryPhbStorageInfoResponse(radioResponseInfo146, hwParcel.readInt32Vector());
                    return;
                case 148:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo147 = new RadioResponseInfo();
                    radioResponseInfo147.readFromParcel(hwParcel);
                    writePhbEntryResponse(radioResponseInfo147);
                    return;
                case 149:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo148 = new RadioResponseInfo();
                    radioResponseInfo148.readFromParcel(hwParcel);
                    readPhbEntryResponse(radioResponseInfo148, PhbEntryStructure.readVectorFromParcel(hwParcel));
                    return;
                case 150:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo149 = new RadioResponseInfo();
                    radioResponseInfo149.readFromParcel(hwParcel);
                    queryUPBCapabilityResponse(radioResponseInfo149, hwParcel.readInt32Vector());
                    return;
                case 151:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo150 = new RadioResponseInfo();
                    radioResponseInfo150.readFromParcel(hwParcel);
                    editUPBEntryResponse(radioResponseInfo150);
                    return;
                case 152:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo151 = new RadioResponseInfo();
                    radioResponseInfo151.readFromParcel(hwParcel);
                    deleteUPBEntryResponse(radioResponseInfo151);
                    return;
                case 153:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo152 = new RadioResponseInfo();
                    radioResponseInfo152.readFromParcel(hwParcel);
                    readUPBGasListResponse(radioResponseInfo152, hwParcel.readStringVector());
                    return;
                case 154:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo153 = new RadioResponseInfo();
                    radioResponseInfo153.readFromParcel(hwParcel);
                    readUPBGrpEntryResponse(radioResponseInfo153, hwParcel.readInt32Vector());
                    return;
                case 155:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo154 = new RadioResponseInfo();
                    radioResponseInfo154.readFromParcel(hwParcel);
                    writeUPBGrpEntryResponse(radioResponseInfo154);
                    return;
                case 156:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo155 = new RadioResponseInfo();
                    radioResponseInfo155.readFromParcel(hwParcel);
                    getPhoneBookStringsLengthResponse(radioResponseInfo155, hwParcel.readInt32Vector());
                    return;
                case 157:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo156 = new RadioResponseInfo();
                    radioResponseInfo156.readFromParcel(hwParcel);
                    PhbMemStorageResponse phbMemStorageResponse = new PhbMemStorageResponse();
                    phbMemStorageResponse.readFromParcel(hwParcel);
                    getPhoneBookMemStorageResponse(radioResponseInfo156, phbMemStorageResponse);
                    return;
                case 158:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo157 = new RadioResponseInfo();
                    radioResponseInfo157.readFromParcel(hwParcel);
                    setPhoneBookMemStorageResponse(radioResponseInfo157);
                    return;
                case 159:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo158 = new RadioResponseInfo();
                    radioResponseInfo158.readFromParcel(hwParcel);
                    readPhoneBookEntryExtResponse(radioResponseInfo158, PhbEntryExt.readVectorFromParcel(hwParcel));
                    return;
                case 160:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo159 = new RadioResponseInfo();
                    radioResponseInfo159.readFromParcel(hwParcel);
                    writePhoneBookEntryExtResponse(radioResponseInfo159);
                    return;
                case 161:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo160 = new RadioResponseInfo();
                    radioResponseInfo160.readFromParcel(hwParcel);
                    queryUPBAvailableResponse(radioResponseInfo160, hwParcel.readInt32Vector());
                    return;
                case 162:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo161 = new RadioResponseInfo();
                    radioResponseInfo161.readFromParcel(hwParcel);
                    readUPBEmailEntryResponse(radioResponseInfo161, hwParcel.readString());
                    return;
                case 163:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo162 = new RadioResponseInfo();
                    radioResponseInfo162.readFromParcel(hwParcel);
                    readUPBSneEntryResponse(radioResponseInfo162, hwParcel.readString());
                    return;
                case 164:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo163 = new RadioResponseInfo();
                    radioResponseInfo163.readFromParcel(hwParcel);
                    readUPBAnrEntryResponse(radioResponseInfo163, PhbEntryStructure.readVectorFromParcel(hwParcel));
                    return;
                case 165:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo164 = new RadioResponseInfo();
                    radioResponseInfo164.readFromParcel(hwParcel);
                    readUPBAasListResponse(radioResponseInfo164, hwParcel.readStringVector());
                    return;
                case 166:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo165 = new RadioResponseInfo();
                    radioResponseInfo165.readFromParcel(hwParcel);
                    setPhonebookReadyResponse(radioResponseInfo165);
                    return;
                case 167:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo166 = new RadioResponseInfo();
                    radioResponseInfo166.readFromParcel(hwParcel);
                    setClipResponse(radioResponseInfo166);
                    return;
                case 168:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo167 = new RadioResponseInfo();
                    radioResponseInfo167.readFromParcel(hwParcel);
                    getColpResponse(radioResponseInfo167, hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 169:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo168 = new RadioResponseInfo();
                    radioResponseInfo168.readFromParcel(hwParcel);
                    getColrResponse(radioResponseInfo168, hwParcel.readInt32());
                    return;
                case 170:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo169 = new RadioResponseInfo();
                    radioResponseInfo169.readFromParcel(hwParcel);
                    sendCnapResponse(radioResponseInfo169, hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 171:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo170 = new RadioResponseInfo();
                    radioResponseInfo170.readFromParcel(hwParcel);
                    setColpResponse(radioResponseInfo170);
                    return;
                case 172:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo171 = new RadioResponseInfo();
                    radioResponseInfo171.readFromParcel(hwParcel);
                    setColrResponse(radioResponseInfo171);
                    return;
                case 173:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo172 = new RadioResponseInfo();
                    radioResponseInfo172.readFromParcel(hwParcel);
                    queryCallForwardInTimeSlotStatusResponse(radioResponseInfo172, CallForwardInfoEx.readVectorFromParcel(hwParcel));
                    return;
                case 174:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo173 = new RadioResponseInfo();
                    radioResponseInfo173.readFromParcel(hwParcel);
                    setCallForwardInTimeSlotResponse(radioResponseInfo173);
                    return;
                case 175:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo174 = new RadioResponseInfo();
                    radioResponseInfo174.readFromParcel(hwParcel);
                    runGbaAuthenticationResponse(radioResponseInfo174, hwParcel.readStringVector());
                    return;
                case 176:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo175 = new RadioResponseInfo();
                    radioResponseInfo175.readFromParcel(hwParcel);
                    hangupAllResponse(radioResponseInfo175);
                    return;
                case 177:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo176 = new RadioResponseInfo();
                    radioResponseInfo176.readFromParcel(hwParcel);
                    setCallIndicationResponse(radioResponseInfo176);
                    return;
                case 178:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo177 = new RadioResponseInfo();
                    radioResponseInfo177.readFromParcel(hwParcel);
                    emergencyDialResponse(radioResponseInfo177);
                    return;
                case 179:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo178 = new RadioResponseInfo();
                    radioResponseInfo178.readFromParcel(hwParcel);
                    setEccServiceCategoryResponse(radioResponseInfo178);
                    return;
                case 180:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo179 = new RadioResponseInfo();
                    radioResponseInfo179.readFromParcel(hwParcel);
                    setEccListResponse(radioResponseInfo179);
                    return;
                case 181:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo180 = new RadioResponseInfo();
                    radioResponseInfo180.readFromParcel(hwParcel);
                    currentStatusResponse(radioResponseInfo180);
                    return;
                case 182:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo181 = new RadioResponseInfo();
                    radioResponseInfo181.readFromParcel(hwParcel);
                    eccPreferredRatResponse(radioResponseInfo181);
                    return;
                case SipMessage.CODE_SESSION_PROGRESS /* 183 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo182 = new RadioResponseInfo();
                    radioResponseInfo182.readFromParcel(hwParcel);
                    setVoicePreferStatusResponse(radioResponseInfo182);
                    return;
                case 184:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo183 = new RadioResponseInfo();
                    radioResponseInfo183.readFromParcel(hwParcel);
                    setEccNumResponse(radioResponseInfo183);
                    return;
                case 185:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo184 = new RadioResponseInfo();
                    radioResponseInfo184.readFromParcel(hwParcel);
                    getEccNumResponse(radioResponseInfo184);
                    return;
                case 186:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo185 = new RadioResponseInfo();
                    radioResponseInfo185.readFromParcel(hwParcel);
                    setModemPowerResponse(radioResponseInfo185);
                    return;
                case 187:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo186 = new RadioResponseInfo();
                    radioResponseInfo186.readFromParcel(hwParcel);
                    triggerModeSwitchByEccResponse(radioResponseInfo186);
                    return;
                case 188:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo187 = new RadioResponseInfo();
                    radioResponseInfo187.readFromParcel(hwParcel);
                    getATRResponse(radioResponseInfo187, hwParcel.readString());
                    return;
                case 189:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo188 = new RadioResponseInfo();
                    radioResponseInfo188.readFromParcel(hwParcel);
                    getIccidResponse(radioResponseInfo188, hwParcel.readString());
                    return;
                case 190:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo189 = new RadioResponseInfo();
                    radioResponseInfo189.readFromParcel(hwParcel);
                    setSimPowerResponse(radioResponseInfo189);
                    return;
                case 191:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo190 = new RadioResponseInfo();
                    radioResponseInfo190.readFromParcel(hwParcel);
                    queryNetworkLockResponse(radioResponseInfo190, hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 192:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo191 = new RadioResponseInfo();
                    radioResponseInfo191.readFromParcel(hwParcel);
                    setNetworkLockResponse(radioResponseInfo191);
                    return;
                case 193:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo192 = new RadioResponseInfo();
                    radioResponseInfo192.readFromParcel(hwParcel);
                    supplyDepersonalizationResponse(radioResponseInfo192, hwParcel.readInt32());
                    return;
                case 194:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo193 = new RadioResponseInfo();
                    radioResponseInfo193.readFromParcel(hwParcel);
                    VsimEvent vsimEvent = new VsimEvent();
                    vsimEvent.readFromParcel(hwParcel);
                    vsimNotificationResponse(radioResponseInfo193, vsimEvent);
                    return;
                case 195:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo194 = new RadioResponseInfo();
                    radioResponseInfo194.readFromParcel(hwParcel);
                    vsimOperationResponse(radioResponseInfo194);
                    return;
                case 196:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo195 = new RadioResponseInfo();
                    radioResponseInfo195.readFromParcel(hwParcel);
                    SmsParams smsParams = new SmsParams();
                    smsParams.readFromParcel(hwParcel);
                    getSmsParametersResponse(radioResponseInfo195, smsParams);
                    return;
                case 197:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo196 = new RadioResponseInfo();
                    radioResponseInfo196.readFromParcel(hwParcel);
                    setSmsParametersResponse(radioResponseInfo196);
                    return;
                case 198:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo197 = new RadioResponseInfo();
                    radioResponseInfo197.readFromParcel(hwParcel);
                    SmsMemStatus smsMemStatus = new SmsMemStatus();
                    smsMemStatus.readFromParcel(hwParcel);
                    getSmsMemStatusResponse(radioResponseInfo197, smsMemStatus);
                    return;
                case 199:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo198 = new RadioResponseInfo();
                    radioResponseInfo198.readFromParcel(hwParcel);
                    setEtwsResponse(radioResponseInfo198);
                    return;
                case ImsVTProvider.ConnectionEx.VideoProvider.SESSION_MODIFY_CANCEL_UPGRADE_FAIL /* 200 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo199 = new RadioResponseInfo();
                    radioResponseInfo199.readFromParcel(hwParcel);
                    removeCbMsgResponse(radioResponseInfo199);
                    return;
                case ImsVTProvider.ConnectionEx.VideoProvider.SESSION_MODIFY_CANCEL_UPGRADE_FAIL_AUTO_DOWNGRADE /* 201 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo200 = new RadioResponseInfo();
                    radioResponseInfo200.readFromParcel(hwParcel);
                    setGsmBroadcastLangsResponse(radioResponseInfo200);
                    return;
                case ImsVTProvider.ConnectionEx.VideoProvider.SESSION_MODIFY_CANCEL_UPGRADE_FAIL_REMOTE_REJECT_UPGRADE /* 202 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo201 = new RadioResponseInfo();
                    radioResponseInfo201.readFromParcel(hwParcel);
                    getGsmBroadcastLangsResponse(radioResponseInfo201, hwParcel.readString());
                    return;
                case 203:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo202 = new RadioResponseInfo();
                    radioResponseInfo202.readFromParcel(hwParcel);
                    getGsmBroadcastActivationRsp(radioResponseInfo202, hwParcel.readInt32());
                    return;
                case 204:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo203 = new RadioResponseInfo();
                    radioResponseInfo203.readFromParcel(hwParcel);
                    setSmsFwkReadyRsp(radioResponseInfo203);
                    return;
                case 205:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo204 = new RadioResponseInfo();
                    radioResponseInfo204.readFromParcel(hwParcel);
                    sendRequestRawResponse(radioResponseInfo204, hwParcel.readInt8Vector());
                    return;
                case 206:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo205 = new RadioResponseInfo();
                    radioResponseInfo205.readFromParcel(hwParcel);
                    sendRequestStringsResponse(radioResponseInfo205, hwParcel.readStringVector());
                    return;
                case 207:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo206 = new RadioResponseInfo();
                    radioResponseInfo206.readFromParcel(hwParcel);
                    setResumeRegistrationResponse(radioResponseInfo206);
                    return;
                case 208:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo207 = new RadioResponseInfo();
                    radioResponseInfo207.readFromParcel(hwParcel);
                    storeModemTypeResponse(radioResponseInfo207);
                    return;
                case 209:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo208 = new RadioResponseInfo();
                    radioResponseInfo208.readFromParcel(hwParcel);
                    reloadModemTypeResponse(radioResponseInfo208);
                    return;
                case 210:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo209 = new RadioResponseInfo();
                    radioResponseInfo209.readFromParcel(hwParcel);
                    SmsMemStatus smsMemStatus2 = new SmsMemStatus();
                    smsMemStatus2.readFromParcel(hwParcel);
                    getSmsRuimMemoryStatusResponse(radioResponseInfo209, smsMemStatus2);
                    return;
                case SmsAcknowledgeFailCause.MEMORY_CAPACITY_EXCEEDED /* 211 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo210 = new RadioResponseInfo();
                    radioResponseInfo210.readFromParcel(hwParcel);
                    setNetworkSelectionModeManualWithActResponse(radioResponseInfo210);
                    return;
                case 212:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo211 = new RadioResponseInfo();
                    radioResponseInfo211.readFromParcel(hwParcel);
                    getAvailableNetworksWithActResponse(radioResponseInfo211, OperatorInfoWithAct.readVectorFromParcel(hwParcel));
                    return;
                case 213:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo212 = new RadioResponseInfo();
                    radioResponseInfo212.readFromParcel(hwParcel);
                    SignalStrengthWithWcdmaEcio signalStrengthWithWcdmaEcio = new SignalStrengthWithWcdmaEcio();
                    signalStrengthWithWcdmaEcio.readFromParcel(hwParcel);
                    getSignalStrengthWithWcdmaEcioResponse(radioResponseInfo212, signalStrengthWithWcdmaEcio);
                    return;
                case 214:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo213 = new RadioResponseInfo();
                    radioResponseInfo213.readFromParcel(hwParcel);
                    cancelAvailableNetworksResponse(radioResponseInfo213);
                    return;
                case 215:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo214 = new RadioResponseInfo();
                    radioResponseInfo214.readFromParcel(hwParcel);
                    getFemtocellListResponse(radioResponseInfo214, hwParcel.readStringVector());
                    return;
                case 216:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo215 = new RadioResponseInfo();
                    radioResponseInfo215.readFromParcel(hwParcel);
                    abortFemtocellListResponse(radioResponseInfo215);
                    return;
                case 217:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo216 = new RadioResponseInfo();
                    radioResponseInfo216.readFromParcel(hwParcel);
                    selectFemtocellResponse(radioResponseInfo216);
                    return;
                case 218:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo217 = new RadioResponseInfo();
                    radioResponseInfo217.readFromParcel(hwParcel);
                    queryFemtoCellSystemSelectionModeResponse(radioResponseInfo217, hwParcel.readInt32());
                    return;
                case 219:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo218 = new RadioResponseInfo();
                    radioResponseInfo218.readFromParcel(hwParcel);
                    setFemtoCellSystemSelectionModeResponse(radioResponseInfo218);
                    return;
                case 220:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo219 = new RadioResponseInfo();
                    radioResponseInfo219.readFromParcel(hwParcel);
                    setServiceStateToModemResponse(radioResponseInfo219);
                    return;
                case 221:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo220 = new RadioResponseInfo();
                    radioResponseInfo220.readFromParcel(hwParcel);
                    setRxTestConfigResponse(radioResponseInfo220, hwParcel.readInt32Vector());
                    return;
                case 222:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo221 = new RadioResponseInfo();
                    radioResponseInfo221.readFromParcel(hwParcel);
                    getRxTestResultResponse(radioResponseInfo221, hwParcel.readInt32Vector());
                    return;
                case 223:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo222 = new RadioResponseInfo();
                    radioResponseInfo222.readFromParcel(hwParcel);
                    getPOLCapabilityResponse(radioResponseInfo222, hwParcel.readInt32Vector());
                    return;
                case 224:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo223 = new RadioResponseInfo();
                    radioResponseInfo223.readFromParcel(hwParcel);
                    getCurrentPOLListResponse(radioResponseInfo223, hwParcel.readStringVector());
                    return;
                case 225:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo224 = new RadioResponseInfo();
                    radioResponseInfo224.readFromParcel(hwParcel);
                    setPOLEntryResponse(radioResponseInfo224);
                    return;
                case RadioCdmaSmsConst.UDH_OTHER_SIZE /* 226 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo225 = new RadioResponseInfo();
                    radioResponseInfo225.readFromParcel(hwParcel);
                    setFdModeResponse(radioResponseInfo225);
                    return;
                case 227:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo226 = new RadioResponseInfo();
                    radioResponseInfo226.readFromParcel(hwParcel);
                    setTrmResponse(radioResponseInfo226);
                    return;
                case 228:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo227 = new RadioResponseInfo();
                    radioResponseInfo227.readFromParcel(hwParcel);
                    handleStkCallSetupRequestFromSimWithResCodeResponse(radioResponseInfo227);
                    return;
                case RadioCdmaSmsConst.USER_DATA_MAX /* 229 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo228 = new RadioResponseInfo();
                    radioResponseInfo228.readFromParcel(hwParcel);
                    setPdnReuseResponse(radioResponseInfo228);
                    return;
                case 230:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo229 = new RadioResponseInfo();
                    radioResponseInfo229.readFromParcel(hwParcel);
                    setOverrideApnResponse(radioResponseInfo229);
                    return;
                case 231:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo230 = new RadioResponseInfo();
                    radioResponseInfo230.readFromParcel(hwParcel);
                    setPdnNameReuseResponse(radioResponseInfo230);
                    return;
                case 232:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo231 = new RadioResponseInfo();
                    radioResponseInfo231.readFromParcel(hwParcel);
                    resetRadioResponse(radioResponseInfo231);
                    return;
                case 233:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo232 = new RadioResponseInfo();
                    radioResponseInfo232.readFromParcel(hwParcel);
                    restartRILDResponse(radioResponseInfo232);
                    return;
                case 234:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo233 = new RadioResponseInfo();
                    radioResponseInfo233.readFromParcel(hwParcel);
                    syncDataSettingsToMdResponse(radioResponseInfo233);
                    return;
                case 235:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo234 = new RadioResponseInfo();
                    radioResponseInfo234.readFromParcel(hwParcel);
                    resetMdDataRetryCountResponse(radioResponseInfo234);
                    return;
                case 236:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo235 = new RadioResponseInfo();
                    radioResponseInfo235.readFromParcel(hwParcel);
                    setRemoveRestrictEutranModeResponse(radioResponseInfo235);
                    return;
                case 237:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo236 = new RadioResponseInfo();
                    radioResponseInfo236.readFromParcel(hwParcel);
                    setLteAccessStratumReportResponse(radioResponseInfo236);
                    return;
                case 238:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo237 = new RadioResponseInfo();
                    radioResponseInfo237.readFromParcel(hwParcel);
                    setLteUplinkDataTransferResponse(radioResponseInfo237);
                    return;
                case 239:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo238 = new RadioResponseInfo();
                    radioResponseInfo238.readFromParcel(hwParcel);
                    setE911StateResponse(radioResponseInfo238);
                    return;
                case LastCallFailCause.CALL_BARRED /* 240 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo239 = new RadioResponseInfo();
                    radioResponseInfo239.readFromParcel(hwParcel);
                    setApcModeResponse(radioResponseInfo239);
                    return;
                case LastCallFailCause.FDN_BLOCKED /* 241 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo240 = new RadioResponseInfo();
                    radioResponseInfo240.readFromParcel(hwParcel);
                    getApcInfoResponse(radioResponseInfo240, hwParcel.readInt32Vector());
                    return;
                case LastCallFailCause.IMSI_UNKNOWN_IN_VLR /* 242 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo241 = new RadioResponseInfo();
                    radioResponseInfo241.readFromParcel(hwParcel);
                    dataConnectionAttachResponse(radioResponseInfo241);
                    return;
                case LastCallFailCause.IMEI_NOT_ACCEPTED /* 243 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo242 = new RadioResponseInfo();
                    radioResponseInfo242.readFromParcel(hwParcel);
                    dataConnectionDetachResponse(radioResponseInfo242);
                    return;
                case LastCallFailCause.DIAL_MODIFIED_TO_USSD /* 244 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo243 = new RadioResponseInfo();
                    radioResponseInfo243.readFromParcel(hwParcel);
                    resetAllConnectionsResponse(radioResponseInfo243);
                    return;
                case LastCallFailCause.DIAL_MODIFIED_TO_SS /* 245 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo244 = new RadioResponseInfo();
                    radioResponseInfo244.readFromParcel(hwParcel);
                    setLteReleaseVersionResponse(radioResponseInfo244);
                    return;
                case LastCallFailCause.DIAL_MODIFIED_TO_DIAL /* 246 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo245 = new RadioResponseInfo();
                    radioResponseInfo245.readFromParcel(hwParcel);
                    getLteReleaseVersionResponse(radioResponseInfo245, hwParcel.readInt32());
                    return;
                case LastCallFailCause.RADIO_OFF /* 247 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo246 = new RadioResponseInfo();
                    radioResponseInfo246.readFromParcel(hwParcel);
                    reportAirplaneModeResponse(radioResponseInfo246);
                    return;
                case LastCallFailCause.OUT_OF_SERVICE /* 248 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo247 = new RadioResponseInfo();
                    radioResponseInfo247.readFromParcel(hwParcel);
                    reportSimModeResponse(radioResponseInfo247);
                    return;
                case LastCallFailCause.NO_VALID_SIM /* 249 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo248 = new RadioResponseInfo();
                    radioResponseInfo248.readFromParcel(hwParcel);
                    setSilentRebootResponse(radioResponseInfo248);
                    return;
                case LastCallFailCause.RADIO_INTERNAL_ERROR /* 250 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo249 = new RadioResponseInfo();
                    radioResponseInfo249.readFromParcel(hwParcel);
                    setTxPowerStatusResponse(radioResponseInfo249);
                    return;
                case LastCallFailCause.NETWORK_RESP_TIMEOUT /* 251 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo250 = new RadioResponseInfo();
                    radioResponseInfo250.readFromParcel(hwParcel);
                    setPropImsHandoverResponse(radioResponseInfo250);
                    return;
                case LastCallFailCause.NETWORK_REJECT /* 252 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo251 = new RadioResponseInfo();
                    radioResponseInfo251.readFromParcel(hwParcel);
                    setOperatorConfigurationResponse(radioResponseInfo251);
                    return;
                case LastCallFailCause.RADIO_ACCESS_FAILURE /* 253 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo252 = new RadioResponseInfo();
                    radioResponseInfo252.readFromParcel(hwParcel);
                    setSuppServPropertyResponse(radioResponseInfo252);
                    return;
                case LastCallFailCause.RADIO_LINK_FAILURE /* 254 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo253 = new RadioResponseInfo();
                    radioResponseInfo253.readFromParcel(hwParcel);
                    getSuppServPropertyResponse(radioResponseInfo253, hwParcel.readString());
                    return;
                case 255:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo254 = new RadioResponseInfo();
                    radioResponseInfo254.readFromParcel(hwParcel);
                    supplyDeviceNetworkDepersonalizationResponse(radioResponseInfo254, hwParcel.readInt32());
                    return;
                case 256:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_4.IRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo255 = new RadioResponseInfo();
                    radioResponseInfo255.readFromParcel(hwParcel);
                    hangupWithReasonResponse(radioResponseInfo255);
                    return;
                default:
                    switch (i) {
                        case 256067662:
                            hwParcel.enforceInterface(IBase.kInterfaceName);
                            ArrayList<String> arrayListInterfaceChain = interfaceChain();
                            hwParcel2.writeStatus(0);
                            hwParcel2.writeStringVector(arrayListInterfaceChain);
                            hwParcel2.send();
                            return;
                        case 256131655:
                            hwParcel.enforceInterface(IBase.kInterfaceName);
                            debug(hwParcel.readNativeHandle(), hwParcel.readStringVector());
                            hwParcel2.writeStatus(0);
                            hwParcel2.send();
                            return;
                        case 256136003:
                            hwParcel.enforceInterface(IBase.kInterfaceName);
                            String strInterfaceDescriptor = interfaceDescriptor();
                            hwParcel2.writeStatus(0);
                            hwParcel2.writeString(strInterfaceDescriptor);
                            hwParcel2.send();
                            return;
                        case 256398152:
                            hwParcel.enforceInterface(IBase.kInterfaceName);
                            ArrayList<byte[]> hashChain = getHashChain();
                            hwParcel2.writeStatus(0);
                            HwBlob hwBlob = new HwBlob(16);
                            int size = hashChain.size();
                            hwBlob.putInt32(8L, size);
                            hwBlob.putBool(12L, false);
                            HwBlob hwBlob2 = new HwBlob(size * 32);
                            for (int i3 = 0; i3 < size; i3++) {
                                long j = i3 * 32;
                                byte[] bArr = hashChain.get(i3);
                                if (bArr == null || bArr.length != 32) {
                                    throw new IllegalArgumentException("Array element is not of the expected length");
                                }
                                hwBlob2.putInt8Array(j, bArr);
                            }
                            hwBlob.putBlob(0L, hwBlob2);
                            hwParcel2.writeBuffer(hwBlob);
                            hwParcel2.send();
                            return;
                        case 256462420:
                            hwParcel.enforceInterface(IBase.kInterfaceName);
                            setHALInstrumentation();
                            return;
                        case 256921159:
                            hwParcel.enforceInterface(IBase.kInterfaceName);
                            ping();
                            hwParcel2.writeStatus(0);
                            hwParcel2.send();
                            return;
                        case 257049926:
                            hwParcel.enforceInterface(IBase.kInterfaceName);
                            DebugInfo debugInfo = getDebugInfo();
                            hwParcel2.writeStatus(0);
                            debugInfo.writeToParcel(hwParcel2);
                            hwParcel2.send();
                            return;
                        case 257120595:
                            hwParcel.enforceInterface(IBase.kInterfaceName);
                            notifySyspropsChanged();
                            return;
                        default:
                            return;
                    }
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IRadioResponse, vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
        public final void ping() {
        }

        public IHwInterface queryLocalInterface(String str) {
            if (IRadioResponse.kInterfaceName.equals(str)) {
                return this;
            }
            return null;
        }

        public void registerAsService(String str) throws RemoteException {
            registerService(str);
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IRadioResponse, vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
        public final void setHALInstrumentation() {
        }

        public String toString() {
            return interfaceDescriptor() + "@Stub";
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IRadioResponse, vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
        public final boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) {
            return true;
        }
    }

    static IRadioResponse asInterface(IHwBinder iHwBinder) {
        if (iHwBinder == null) {
            return null;
        }
        IHwInterface iHwInterfaceQueryLocalInterface = iHwBinder.queryLocalInterface(kInterfaceName);
        if (iHwInterfaceQueryLocalInterface != null && (iHwInterfaceQueryLocalInterface instanceof IRadioResponse)) {
            return (IRadioResponse) iHwInterfaceQueryLocalInterface;
        }
        Proxy proxy = new Proxy(iHwBinder);
        try {
            Iterator<String> it = proxy.interfaceChain().iterator();
            while (it.hasNext()) {
                if (it.next().equals(kInterfaceName)) {
                    return proxy;
                }
            }
        } catch (RemoteException e) {
        }
        return null;
    }

    static IRadioResponse castFrom(IHwInterface iHwInterface) {
        if (iHwInterface == null) {
            return null;
        }
        return asInterface(iHwInterface.asBinder());
    }

    static IRadioResponse getService() throws RemoteException {
        return getService("default");
    }

    static IRadioResponse getService(String str) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str));
    }

    static IRadioResponse getService(String str, boolean z) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str, z));
    }

    static IRadioResponse getService(boolean z) throws RemoteException {
        return getService("default", z);
    }

    @Override // vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
    IHwBinder asBinder();

    @Override // vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
    void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
    DebugInfo getDebugInfo() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
    ArrayList<byte[]> getHashChain() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
    ArrayList<String> interfaceChain() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
    String interfaceDescriptor() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
    boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
    void notifySyspropsChanged() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
    void ping() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
    void setHALInstrumentation() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_10.IRadioResponse, vendor.mediatek.hardware.radio.V3_9.IRadioResponse, vendor.mediatek.hardware.radio.V3_8.IRadioResponse, vendor.mediatek.hardware.radio.V3_7.IRadioResponse, vendor.mediatek.hardware.radio.V3_4.IRadioResponse, vendor.mediatek.hardware.radio.V3_0.IRadioResponse, android.hardware.radio.V1_2.IRadioResponse, android.hardware.radio.V1_1.IRadioResponse, android.hardware.radio.V1_0.IRadioResponse, android.hidl.base.V1_0.IBase
    boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException;
}
