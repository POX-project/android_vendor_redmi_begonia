package vendor.mediatek.hardware.mtkradioex.V2_0;

import android.hardware.radio.V1_0.LastCallFailCause;
import android.hardware.radio.V1_0.RadioResponseInfo;
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
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public interface IMtkRadioExResponse extends IBase {
    public static final String kInterfaceName = "vendor.mediatek.hardware.mtkradioex@2.0::IMtkRadioExResponse";

    public static final class Proxy implements IMtkRadioExResponse {
        private IHwBinder mRemote;

        public Proxy(IHwBinder iHwBinder) {
            Objects.requireNonNull(iHwBinder);
            this.mRemote = iHwBinder;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void abortFemtocellListResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(73, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void activateUiccCardRsp(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(47, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse, android.hidl.base.V1_0.IBase
        public IHwBinder asBinder() {
            return this.mRemote;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void cancelAvailableNetworksResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(71, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void cfgA2offsetResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(78, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void cfgB1offsetResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(79, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void dataConnectionAttachResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(100, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void dataConnectionDetachResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(101, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void deactivateNrScgCommunicationResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(121, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void deactivateUiccCardRsp(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(48, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void deleteUPBEntryResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(9, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void disableNRResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(81, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void eccPreferredRatResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(36, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void editUPBEntryResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(8, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void enableCAPlusBandWidthFilterResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(111, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void enableDsdaIndicationResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(117, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void enableSCGfailureResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(80, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public final boolean equals(Object obj) {
            return HidlSupport.interfacesEqual(this, obj);
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getATRResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(44, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getApcInfoResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(99, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getAvailableNetworksWithActResponse(RadioResponseInfo radioResponseInfo, ArrayList<OperatorInfoWithAct> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            OperatorInfoWithAct.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(69, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getCallSubAddressResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getColpResponse(RadioResponseInfo radioResponseInfo, int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(25, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getColrResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(26, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getCurrentPOLListResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(89, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getCurrentUiccCardProvisioningStatusRsp(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(49, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getDeactivateNrScgCommunicationResponse(RadioResponseInfo radioResponseInfo, int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(122, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getDsdaStatusResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(118, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getEccNumResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(39, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getFemtocellListResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(72, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getGsmBroadcastActivationRsp(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(62, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getGsmBroadcastLangsResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(61, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getIccidResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(45, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getLteReleaseVersionResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(UtranBands.BAND_D, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getPOLCapabilityResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(88, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getPhoneBookMemStorageResponse(RadioResponseInfo radioResponseInfo, PhbMemStorageResponse phbMemStorageResponse) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            phbMemStorageResponse.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(14, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getPhoneBookStringsLengthResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(13, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getPlmnNameFromSE13TableResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(110, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getRoamingEnableResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(3, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getRxTestResultResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(87, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getSignalStrengthWithWcdmaEcioResponse(RadioResponseInfo radioResponseInfo, SignalStrengthWithWcdmaEcio signalStrengthWithWcdmaEcio) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            signalStrengthWithWcdmaEcio.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(70, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getSmsMemStatusResponse(RadioResponseInfo radioResponseInfo, SmsMemStatus smsMemStatus) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            smsMemStatus.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(57, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getSmsParametersResponse(RadioResponseInfo radioResponseInfo, SmsParams smsParams) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            smsParams.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(55, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getSmsRuimMemoryStatusResponse(RadioResponseInfo radioResponseInfo, SmsMemStatus smsMemStatus) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            smsMemStatus.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(67, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void getSuggestedPlmnListResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(120, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void handleStkCallSetupRequestFromSimWithResCodeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(93, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void hangupAllResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(33, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void hangupWithReasonResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(108, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public final int hashCode() {
            return asBinder().hashCode();
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse, android.hidl.base.V1_0.IBase
        public boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException {
            return this.mRemote.linkToDeath(deathRecipient, j);
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void modifyModemTypeResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(66, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void queryCallForwardInTimeSlotStatusResponse(RadioResponseInfo radioResponseInfo, ArrayList<CallForwardInfoEx> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            CallForwardInfoEx.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(30, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void queryFemtoCellSystemSelectionModeResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(75, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void queryNetworkLockResponse(RadioResponseInfo radioResponseInfo, int i, int i2, int i3, int i4, int i5, int i6, int i7) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
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
                this.mRemote.transact(50, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void queryPhbStorageInfoResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(4, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void queryUPBAvailableResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(18, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void queryUPBCapabilityResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(7, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void readPhbEntryResponse(RadioResponseInfo radioResponseInfo, ArrayList<PhbEntryStructure> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            PhbEntryStructure.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(6, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void readPhoneBookEntryExtResponse(RadioResponseInfo radioResponseInfo, ArrayList<PhbEntryExt> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            PhbEntryExt.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(16, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void readUPBAasListResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(22, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void readUPBAnrEntryResponse(RadioResponseInfo radioResponseInfo, ArrayList<PhbEntryStructure> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            PhbEntryStructure.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(21, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void readUPBEmailEntryResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(19, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void readUPBGasListResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(10, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void readUPBGrpEntryResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(11, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void readUPBSneEntryResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(20, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void registerCellQltyReportResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(119, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void removeCbMsgResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(59, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void resetAllConnectionsResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(102, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void resetMdDataRetryCountResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(96, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void restartRILDResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(94, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void runGbaAuthenticationResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(32, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void selectFemtocellResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(74, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void sendCnapResponse(RadioResponseInfo radioResponseInfo, int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(27, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void sendEmbmsAtCommandResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(1, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void sendRequestRawResponse(RadioResponseInfo radioResponseInfo, ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt8Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(63, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void sendRequestStringsResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(64, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void sendRsuRequestResponse(RadioResponseInfo radioResponseInfo, RsuResponseInfo rsuResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            rsuResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(125, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void sendSarIndicatorResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(DataCallFailCause.INVALID_PCSCF_OR_DNS_ADDRESS, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void sendWifiAssociatedResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(127, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void sendWifiEnabledResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(126, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void sendWifiIpAddressResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(128, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setApcModeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(98, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setBgsrchDeltaSleepTimerResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(85, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setCallForwardInTimeSlotResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(31, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setCallIndicationResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(34, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setCallSubAddressResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(40, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setCallValidTimerResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(113, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setClipResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(24, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setColpResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(28, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setColrResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(29, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setEccModeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(35, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setEccNumResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(38, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setEtwsResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(58, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setFdModeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(91, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setFemtoCellSystemSelectionModeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(76, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setGsmBroadcastLangsResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(60, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setGwsdModeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(112, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setIgnoreSameNumberIntervalResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(114, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setKeepAliveByIpDataResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(116, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setKeepAliveByPDCPCtrlPDUResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(115, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setLteReleaseVersionResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(UtranBands.BAND_C, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setMaxUlSpeedResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(DataCallFailCause.INVALID_DNS_ADDR, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setModemPowerResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(42, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setNetworkLockResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(51, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setNetworkSelectionModeManualWithActResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(68, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setPOLEntryResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(90, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setPhoneBookMemStorageResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(15, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setPhonebookReadyResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(23, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setRemoveRestrictEutranModeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(97, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setResumeRegistrationResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(65, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setRoamingEnableResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(2, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setRxTestConfigResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(86, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setSearchRatResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(84, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setSearchStoredFreqInfoResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(83, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setServiceStateToModemResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(77, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setSimPowerResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(46, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setSmsParametersResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(56, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setSuppServPropertyResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(UtranBands.BAND_F, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setTrmResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(92, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setTxPowerResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(82, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setTxPowerStatusResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(UtranBands.BAND_E, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setVendorSettingResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(109, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void setVoicePreferStatusResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(37, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void supplyDepersonalizationResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(52, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void supplyDeviceNetworkDepersonalizationResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(107, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void syncDataSettingsToMdResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(95, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public String toString() {
            try {
                return interfaceDescriptor() + "@Proxy";
            } catch (RemoteException e) {
                return "[class or subclass of vendor.mediatek.hardware.mtkradioex@2.0::IMtkRadioExResponse]@Proxy";
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void triggerModeSwitchByEccResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(43, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse, android.hidl.base.V1_0.IBase
        public boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException {
            return this.mRemote.unlinkToDeath(deathRecipient);
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void vsimNotificationResponse(RadioResponseInfo radioResponseInfo, VsimEvent vsimEvent) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            vsimEvent.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(53, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void vsimOperationResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(54, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void writePhbEntryResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(5, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void writePhoneBookEntryExtResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(17, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
        public void writeUPBGrpEntryResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(12, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }
    }

    public static abstract class Stub extends HwBinder implements IMtkRadioExResponse {
        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse, android.hidl.base.V1_0.IBase
        public IHwBinder asBinder() {
            return this;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse, android.hidl.base.V1_0.IBase
        public void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) {
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse, android.hidl.base.V1_0.IBase
        public final DebugInfo getDebugInfo() {
            DebugInfo debugInfo = new DebugInfo();
            debugInfo.pid = HidlSupport.getPidIfSharable();
            debugInfo.ptr = 0L;
            debugInfo.arch = 0;
            return debugInfo;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse, android.hidl.base.V1_0.IBase
        public final ArrayList<byte[]> getHashChain() {
            return new ArrayList<>(Arrays.asList(new byte[]{-77, -96, 39, 17, -80, -52, 16, -96, 45, 43, 27, -102, 25, 87, -88, -85, 97, 16, 84, -108, 54, 107, -29, -53, 85, 124, -20, 31, -8, -99, -125, -112}, new byte[]{-20, 127, -41, -98, -48, 45, -6, -123, -68, 73, -108, 38, -83, -82, 62, -66, 35, -17, 5, 36, -13, -51, 105, 87, 19, -109, 36, -72, 59, 24, -54, 76}));
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse, android.hidl.base.V1_0.IBase
        public final ArrayList<String> interfaceChain() {
            return new ArrayList<>(Arrays.asList(IMtkRadioExResponse.kInterfaceName, IBase.kInterfaceName));
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse, android.hidl.base.V1_0.IBase
        public final String interfaceDescriptor() {
            return IMtkRadioExResponse.kInterfaceName;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse, android.hidl.base.V1_0.IBase
        public final boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) {
            return true;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse, android.hidl.base.V1_0.IBase
        public final void notifySyspropsChanged() {
            HwBinder.enableInstrumentation();
        }

        public void onTransact(int i, HwParcel hwParcel, HwParcel hwParcel2, int i2) throws RemoteException {
            switch (i) {
                case 1:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo = new RadioResponseInfo();
                    radioResponseInfo.readFromParcel(hwParcel);
                    sendEmbmsAtCommandResponse(radioResponseInfo, hwParcel.readString());
                    return;
                case 2:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo2 = new RadioResponseInfo();
                    radioResponseInfo2.readFromParcel(hwParcel);
                    setRoamingEnableResponse(radioResponseInfo2);
                    return;
                case 3:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo3 = new RadioResponseInfo();
                    radioResponseInfo3.readFromParcel(hwParcel);
                    getRoamingEnableResponse(radioResponseInfo3, hwParcel.readInt32Vector());
                    return;
                case 4:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo4 = new RadioResponseInfo();
                    radioResponseInfo4.readFromParcel(hwParcel);
                    queryPhbStorageInfoResponse(radioResponseInfo4, hwParcel.readInt32Vector());
                    return;
                case 5:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo5 = new RadioResponseInfo();
                    radioResponseInfo5.readFromParcel(hwParcel);
                    writePhbEntryResponse(radioResponseInfo5);
                    return;
                case 6:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo6 = new RadioResponseInfo();
                    radioResponseInfo6.readFromParcel(hwParcel);
                    readPhbEntryResponse(radioResponseInfo6, PhbEntryStructure.readVectorFromParcel(hwParcel));
                    return;
                case 7:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo7 = new RadioResponseInfo();
                    radioResponseInfo7.readFromParcel(hwParcel);
                    queryUPBCapabilityResponse(radioResponseInfo7, hwParcel.readInt32Vector());
                    return;
                case 8:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo8 = new RadioResponseInfo();
                    radioResponseInfo8.readFromParcel(hwParcel);
                    editUPBEntryResponse(radioResponseInfo8);
                    return;
                case 9:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo9 = new RadioResponseInfo();
                    radioResponseInfo9.readFromParcel(hwParcel);
                    deleteUPBEntryResponse(radioResponseInfo9);
                    return;
                case 10:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo10 = new RadioResponseInfo();
                    radioResponseInfo10.readFromParcel(hwParcel);
                    readUPBGasListResponse(radioResponseInfo10, hwParcel.readStringVector());
                    return;
                case 11:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo11 = new RadioResponseInfo();
                    radioResponseInfo11.readFromParcel(hwParcel);
                    readUPBGrpEntryResponse(radioResponseInfo11, hwParcel.readInt32Vector());
                    return;
                case 12:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo12 = new RadioResponseInfo();
                    radioResponseInfo12.readFromParcel(hwParcel);
                    writeUPBGrpEntryResponse(radioResponseInfo12);
                    return;
                case 13:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo13 = new RadioResponseInfo();
                    radioResponseInfo13.readFromParcel(hwParcel);
                    getPhoneBookStringsLengthResponse(radioResponseInfo13, hwParcel.readInt32Vector());
                    return;
                case 14:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo14 = new RadioResponseInfo();
                    radioResponseInfo14.readFromParcel(hwParcel);
                    PhbMemStorageResponse phbMemStorageResponse = new PhbMemStorageResponse();
                    phbMemStorageResponse.readFromParcel(hwParcel);
                    getPhoneBookMemStorageResponse(radioResponseInfo14, phbMemStorageResponse);
                    return;
                case 15:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo15 = new RadioResponseInfo();
                    radioResponseInfo15.readFromParcel(hwParcel);
                    setPhoneBookMemStorageResponse(radioResponseInfo15);
                    return;
                case 16:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo16 = new RadioResponseInfo();
                    radioResponseInfo16.readFromParcel(hwParcel);
                    readPhoneBookEntryExtResponse(radioResponseInfo16, PhbEntryExt.readVectorFromParcel(hwParcel));
                    return;
                case 17:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo17 = new RadioResponseInfo();
                    radioResponseInfo17.readFromParcel(hwParcel);
                    writePhoneBookEntryExtResponse(radioResponseInfo17);
                    return;
                case 18:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo18 = new RadioResponseInfo();
                    radioResponseInfo18.readFromParcel(hwParcel);
                    queryUPBAvailableResponse(radioResponseInfo18, hwParcel.readInt32Vector());
                    return;
                case 19:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo19 = new RadioResponseInfo();
                    radioResponseInfo19.readFromParcel(hwParcel);
                    readUPBEmailEntryResponse(radioResponseInfo19, hwParcel.readString());
                    return;
                case 20:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo20 = new RadioResponseInfo();
                    radioResponseInfo20.readFromParcel(hwParcel);
                    readUPBSneEntryResponse(radioResponseInfo20, hwParcel.readString());
                    return;
                case 21:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo21 = new RadioResponseInfo();
                    radioResponseInfo21.readFromParcel(hwParcel);
                    readUPBAnrEntryResponse(radioResponseInfo21, PhbEntryStructure.readVectorFromParcel(hwParcel));
                    return;
                case 22:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo22 = new RadioResponseInfo();
                    radioResponseInfo22.readFromParcel(hwParcel);
                    readUPBAasListResponse(radioResponseInfo22, hwParcel.readStringVector());
                    return;
                case 23:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo23 = new RadioResponseInfo();
                    radioResponseInfo23.readFromParcel(hwParcel);
                    setPhonebookReadyResponse(radioResponseInfo23);
                    return;
                case 24:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo24 = new RadioResponseInfo();
                    radioResponseInfo24.readFromParcel(hwParcel);
                    setClipResponse(radioResponseInfo24);
                    return;
                case 25:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo25 = new RadioResponseInfo();
                    radioResponseInfo25.readFromParcel(hwParcel);
                    getColpResponse(radioResponseInfo25, hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 26:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo26 = new RadioResponseInfo();
                    radioResponseInfo26.readFromParcel(hwParcel);
                    getColrResponse(radioResponseInfo26, hwParcel.readInt32());
                    return;
                case 27:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo27 = new RadioResponseInfo();
                    radioResponseInfo27.readFromParcel(hwParcel);
                    sendCnapResponse(radioResponseInfo27, hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 28:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo28 = new RadioResponseInfo();
                    radioResponseInfo28.readFromParcel(hwParcel);
                    setColpResponse(radioResponseInfo28);
                    return;
                case 29:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo29 = new RadioResponseInfo();
                    radioResponseInfo29.readFromParcel(hwParcel);
                    setColrResponse(radioResponseInfo29);
                    return;
                case 30:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo30 = new RadioResponseInfo();
                    radioResponseInfo30.readFromParcel(hwParcel);
                    queryCallForwardInTimeSlotStatusResponse(radioResponseInfo30, CallForwardInfoEx.readVectorFromParcel(hwParcel));
                    return;
                case 31:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo31 = new RadioResponseInfo();
                    radioResponseInfo31.readFromParcel(hwParcel);
                    setCallForwardInTimeSlotResponse(radioResponseInfo31);
                    return;
                case 32:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo32 = new RadioResponseInfo();
                    radioResponseInfo32.readFromParcel(hwParcel);
                    runGbaAuthenticationResponse(radioResponseInfo32, hwParcel.readStringVector());
                    return;
                case 33:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo33 = new RadioResponseInfo();
                    radioResponseInfo33.readFromParcel(hwParcel);
                    hangupAllResponse(radioResponseInfo33);
                    return;
                case 34:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo34 = new RadioResponseInfo();
                    radioResponseInfo34.readFromParcel(hwParcel);
                    setCallIndicationResponse(radioResponseInfo34);
                    return;
                case 35:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo35 = new RadioResponseInfo();
                    radioResponseInfo35.readFromParcel(hwParcel);
                    setEccModeResponse(radioResponseInfo35);
                    return;
                case 36:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo36 = new RadioResponseInfo();
                    radioResponseInfo36.readFromParcel(hwParcel);
                    eccPreferredRatResponse(radioResponseInfo36);
                    return;
                case 37:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo37 = new RadioResponseInfo();
                    radioResponseInfo37.readFromParcel(hwParcel);
                    setVoicePreferStatusResponse(radioResponseInfo37);
                    return;
                case 38:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo38 = new RadioResponseInfo();
                    radioResponseInfo38.readFromParcel(hwParcel);
                    setEccNumResponse(radioResponseInfo38);
                    return;
                case 39:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo39 = new RadioResponseInfo();
                    radioResponseInfo39.readFromParcel(hwParcel);
                    getEccNumResponse(radioResponseInfo39);
                    return;
                case 40:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo40 = new RadioResponseInfo();
                    radioResponseInfo40.readFromParcel(hwParcel);
                    setCallSubAddressResponse(radioResponseInfo40);
                    return;
                case 41:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo41 = new RadioResponseInfo();
                    radioResponseInfo41.readFromParcel(hwParcel);
                    getCallSubAddressResponse(radioResponseInfo41, hwParcel.readInt32());
                    return;
                case 42:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo42 = new RadioResponseInfo();
                    radioResponseInfo42.readFromParcel(hwParcel);
                    setModemPowerResponse(radioResponseInfo42);
                    return;
                case 43:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo43 = new RadioResponseInfo();
                    radioResponseInfo43.readFromParcel(hwParcel);
                    triggerModeSwitchByEccResponse(radioResponseInfo43);
                    return;
                case 44:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo44 = new RadioResponseInfo();
                    radioResponseInfo44.readFromParcel(hwParcel);
                    getATRResponse(radioResponseInfo44, hwParcel.readString());
                    return;
                case 45:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo45 = new RadioResponseInfo();
                    radioResponseInfo45.readFromParcel(hwParcel);
                    getIccidResponse(radioResponseInfo45, hwParcel.readString());
                    return;
                case 46:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo46 = new RadioResponseInfo();
                    radioResponseInfo46.readFromParcel(hwParcel);
                    setSimPowerResponse(radioResponseInfo46);
                    return;
                case 47:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo47 = new RadioResponseInfo();
                    radioResponseInfo47.readFromParcel(hwParcel);
                    activateUiccCardRsp(radioResponseInfo47, hwParcel.readInt32());
                    return;
                case 48:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo48 = new RadioResponseInfo();
                    radioResponseInfo48.readFromParcel(hwParcel);
                    deactivateUiccCardRsp(radioResponseInfo48, hwParcel.readInt32());
                    return;
                case 49:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo49 = new RadioResponseInfo();
                    radioResponseInfo49.readFromParcel(hwParcel);
                    getCurrentUiccCardProvisioningStatusRsp(radioResponseInfo49, hwParcel.readInt32());
                    return;
                case 50:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo50 = new RadioResponseInfo();
                    radioResponseInfo50.readFromParcel(hwParcel);
                    queryNetworkLockResponse(radioResponseInfo50, hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 51:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo51 = new RadioResponseInfo();
                    radioResponseInfo51.readFromParcel(hwParcel);
                    setNetworkLockResponse(radioResponseInfo51);
                    return;
                case 52:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo52 = new RadioResponseInfo();
                    radioResponseInfo52.readFromParcel(hwParcel);
                    supplyDepersonalizationResponse(radioResponseInfo52, hwParcel.readInt32());
                    return;
                case 53:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo53 = new RadioResponseInfo();
                    radioResponseInfo53.readFromParcel(hwParcel);
                    VsimEvent vsimEvent = new VsimEvent();
                    vsimEvent.readFromParcel(hwParcel);
                    vsimNotificationResponse(radioResponseInfo53, vsimEvent);
                    return;
                case 54:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo54 = new RadioResponseInfo();
                    radioResponseInfo54.readFromParcel(hwParcel);
                    vsimOperationResponse(radioResponseInfo54);
                    return;
                case 55:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo55 = new RadioResponseInfo();
                    radioResponseInfo55.readFromParcel(hwParcel);
                    SmsParams smsParams = new SmsParams();
                    smsParams.readFromParcel(hwParcel);
                    getSmsParametersResponse(radioResponseInfo55, smsParams);
                    return;
                case 56:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo56 = new RadioResponseInfo();
                    radioResponseInfo56.readFromParcel(hwParcel);
                    setSmsParametersResponse(radioResponseInfo56);
                    return;
                case 57:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo57 = new RadioResponseInfo();
                    radioResponseInfo57.readFromParcel(hwParcel);
                    SmsMemStatus smsMemStatus = new SmsMemStatus();
                    smsMemStatus.readFromParcel(hwParcel);
                    getSmsMemStatusResponse(radioResponseInfo57, smsMemStatus);
                    return;
                case 58:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo58 = new RadioResponseInfo();
                    radioResponseInfo58.readFromParcel(hwParcel);
                    setEtwsResponse(radioResponseInfo58);
                    return;
                case 59:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo59 = new RadioResponseInfo();
                    radioResponseInfo59.readFromParcel(hwParcel);
                    removeCbMsgResponse(radioResponseInfo59);
                    return;
                case 60:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo60 = new RadioResponseInfo();
                    radioResponseInfo60.readFromParcel(hwParcel);
                    setGsmBroadcastLangsResponse(radioResponseInfo60);
                    return;
                case 61:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo61 = new RadioResponseInfo();
                    radioResponseInfo61.readFromParcel(hwParcel);
                    getGsmBroadcastLangsResponse(radioResponseInfo61, hwParcel.readString());
                    return;
                case 62:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo62 = new RadioResponseInfo();
                    radioResponseInfo62.readFromParcel(hwParcel);
                    getGsmBroadcastActivationRsp(radioResponseInfo62, hwParcel.readInt32());
                    return;
                case 63:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo63 = new RadioResponseInfo();
                    radioResponseInfo63.readFromParcel(hwParcel);
                    sendRequestRawResponse(radioResponseInfo63, hwParcel.readInt8Vector());
                    return;
                case 64:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo64 = new RadioResponseInfo();
                    radioResponseInfo64.readFromParcel(hwParcel);
                    sendRequestStringsResponse(radioResponseInfo64, hwParcel.readStringVector());
                    return;
                case 65:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo65 = new RadioResponseInfo();
                    radioResponseInfo65.readFromParcel(hwParcel);
                    setResumeRegistrationResponse(radioResponseInfo65);
                    return;
                case 66:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo66 = new RadioResponseInfo();
                    radioResponseInfo66.readFromParcel(hwParcel);
                    modifyModemTypeResponse(radioResponseInfo66, hwParcel.readInt32());
                    return;
                case 67:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo67 = new RadioResponseInfo();
                    radioResponseInfo67.readFromParcel(hwParcel);
                    SmsMemStatus smsMemStatus2 = new SmsMemStatus();
                    smsMemStatus2.readFromParcel(hwParcel);
                    getSmsRuimMemoryStatusResponse(radioResponseInfo67, smsMemStatus2);
                    return;
                case 68:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo68 = new RadioResponseInfo();
                    radioResponseInfo68.readFromParcel(hwParcel);
                    setNetworkSelectionModeManualWithActResponse(radioResponseInfo68);
                    return;
                case LastCallFailCause.REQUESTED_FACILITY_NOT_IMPLEMENTED /* 69 */:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo69 = new RadioResponseInfo();
                    radioResponseInfo69.readFromParcel(hwParcel);
                    getAvailableNetworksWithActResponse(radioResponseInfo69, OperatorInfoWithAct.readVectorFromParcel(hwParcel));
                    return;
                case 70:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo70 = new RadioResponseInfo();
                    radioResponseInfo70.readFromParcel(hwParcel);
                    SignalStrengthWithWcdmaEcio signalStrengthWithWcdmaEcio = new SignalStrengthWithWcdmaEcio();
                    signalStrengthWithWcdmaEcio.readFromParcel(hwParcel);
                    getSignalStrengthWithWcdmaEcioResponse(radioResponseInfo70, signalStrengthWithWcdmaEcio);
                    return;
                case 71:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo71 = new RadioResponseInfo();
                    radioResponseInfo71.readFromParcel(hwParcel);
                    cancelAvailableNetworksResponse(radioResponseInfo71);
                    return;
                case 72:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo72 = new RadioResponseInfo();
                    radioResponseInfo72.readFromParcel(hwParcel);
                    getFemtocellListResponse(radioResponseInfo72, hwParcel.readStringVector());
                    return;
                case 73:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo73 = new RadioResponseInfo();
                    radioResponseInfo73.readFromParcel(hwParcel);
                    abortFemtocellListResponse(radioResponseInfo73);
                    return;
                case 74:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo74 = new RadioResponseInfo();
                    radioResponseInfo74.readFromParcel(hwParcel);
                    selectFemtocellResponse(radioResponseInfo74);
                    return;
                case 75:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo75 = new RadioResponseInfo();
                    radioResponseInfo75.readFromParcel(hwParcel);
                    queryFemtoCellSystemSelectionModeResponse(radioResponseInfo75, hwParcel.readInt32());
                    return;
                case 76:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo76 = new RadioResponseInfo();
                    radioResponseInfo76.readFromParcel(hwParcel);
                    setFemtoCellSystemSelectionModeResponse(radioResponseInfo76);
                    return;
                case 77:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo77 = new RadioResponseInfo();
                    radioResponseInfo77.readFromParcel(hwParcel);
                    setServiceStateToModemResponse(radioResponseInfo77);
                    return;
                case 78:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo78 = new RadioResponseInfo();
                    radioResponseInfo78.readFromParcel(hwParcel);
                    cfgA2offsetResponse(radioResponseInfo78);
                    return;
                case 79:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo79 = new RadioResponseInfo();
                    radioResponseInfo79.readFromParcel(hwParcel);
                    cfgB1offsetResponse(radioResponseInfo79);
                    return;
                case NgranBands.BAND_80 /* 80 */:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo80 = new RadioResponseInfo();
                    radioResponseInfo80.readFromParcel(hwParcel);
                    enableSCGfailureResponse(radioResponseInfo80);
                    return;
                case 81:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo81 = new RadioResponseInfo();
                    radioResponseInfo81.readFromParcel(hwParcel);
                    disableNRResponse(radioResponseInfo81);
                    return;
                case NgranBands.BAND_82 /* 82 */:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo82 = new RadioResponseInfo();
                    radioResponseInfo82.readFromParcel(hwParcel);
                    setTxPowerResponse(radioResponseInfo82);
                    return;
                case NgranBands.BAND_83 /* 83 */:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo83 = new RadioResponseInfo();
                    radioResponseInfo83.readFromParcel(hwParcel);
                    setSearchStoredFreqInfoResponse(radioResponseInfo83);
                    return;
                case NgranBands.BAND_84 /* 84 */:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo84 = new RadioResponseInfo();
                    radioResponseInfo84.readFromParcel(hwParcel);
                    setSearchRatResponse(radioResponseInfo84);
                    return;
                case EutranBands.BAND_85 /* 85 */:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo85 = new RadioResponseInfo();
                    radioResponseInfo85.readFromParcel(hwParcel);
                    setBgsrchDeltaSleepTimerResponse(radioResponseInfo85);
                    return;
                case NgranBands.BAND_86 /* 86 */:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo86 = new RadioResponseInfo();
                    radioResponseInfo86.readFromParcel(hwParcel);
                    setRxTestConfigResponse(radioResponseInfo86, hwParcel.readInt32Vector());
                    return;
                case 87:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo87 = new RadioResponseInfo();
                    radioResponseInfo87.readFromParcel(hwParcel);
                    getRxTestResultResponse(radioResponseInfo87, hwParcel.readInt32Vector());
                    return;
                case 88:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo88 = new RadioResponseInfo();
                    radioResponseInfo88.readFromParcel(hwParcel);
                    getPOLCapabilityResponse(radioResponseInfo88, hwParcel.readInt32Vector());
                    return;
                case NgranBands.BAND_89 /* 89 */:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo89 = new RadioResponseInfo();
                    radioResponseInfo89.readFromParcel(hwParcel);
                    getCurrentPOLListResponse(radioResponseInfo89, hwParcel.readStringVector());
                    return;
                case NgranBands.BAND_90 /* 90 */:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo90 = new RadioResponseInfo();
                    radioResponseInfo90.readFromParcel(hwParcel);
                    setPOLEntryResponse(radioResponseInfo90);
                    return;
                case 91:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo91 = new RadioResponseInfo();
                    radioResponseInfo91.readFromParcel(hwParcel);
                    setFdModeResponse(radioResponseInfo91);
                    return;
                case NgranBands.BAND_92 /* 92 */:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo92 = new RadioResponseInfo();
                    radioResponseInfo92.readFromParcel(hwParcel);
                    setTrmResponse(radioResponseInfo92);
                    return;
                case NgranBands.BAND_93 /* 93 */:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo93 = new RadioResponseInfo();
                    radioResponseInfo93.readFromParcel(hwParcel);
                    handleStkCallSetupRequestFromSimWithResCodeResponse(radioResponseInfo93);
                    return;
                case NgranBands.BAND_94 /* 94 */:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo94 = new RadioResponseInfo();
                    radioResponseInfo94.readFromParcel(hwParcel);
                    restartRILDResponse(radioResponseInfo94);
                    return;
                case 95:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo95 = new RadioResponseInfo();
                    radioResponseInfo95.readFromParcel(hwParcel);
                    syncDataSettingsToMdResponse(radioResponseInfo95);
                    return;
                case 96:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo96 = new RadioResponseInfo();
                    radioResponseInfo96.readFromParcel(hwParcel);
                    resetMdDataRetryCountResponse(radioResponseInfo96);
                    return;
                case 97:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo97 = new RadioResponseInfo();
                    radioResponseInfo97.readFromParcel(hwParcel);
                    setRemoveRestrictEutranModeResponse(radioResponseInfo97);
                    return;
                case 98:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo98 = new RadioResponseInfo();
                    radioResponseInfo98.readFromParcel(hwParcel);
                    setApcModeResponse(radioResponseInfo98);
                    return;
                case 99:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo99 = new RadioResponseInfo();
                    radioResponseInfo99.readFromParcel(hwParcel);
                    getApcInfoResponse(radioResponseInfo99, hwParcel.readInt32Vector());
                    return;
                case 100:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo100 = new RadioResponseInfo();
                    radioResponseInfo100.readFromParcel(hwParcel);
                    dataConnectionAttachResponse(radioResponseInfo100);
                    return;
                case 101:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo101 = new RadioResponseInfo();
                    radioResponseInfo101.readFromParcel(hwParcel);
                    dataConnectionDetachResponse(radioResponseInfo101);
                    return;
                case 102:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo102 = new RadioResponseInfo();
                    radioResponseInfo102.readFromParcel(hwParcel);
                    resetAllConnectionsResponse(radioResponseInfo102);
                    return;
                case UtranBands.BAND_C /* 103 */:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo103 = new RadioResponseInfo();
                    radioResponseInfo103.readFromParcel(hwParcel);
                    setLteReleaseVersionResponse(radioResponseInfo103);
                    return;
                case UtranBands.BAND_D /* 104 */:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo104 = new RadioResponseInfo();
                    radioResponseInfo104.readFromParcel(hwParcel);
                    getLteReleaseVersionResponse(radioResponseInfo104, hwParcel.readInt32());
                    return;
                case UtranBands.BAND_E /* 105 */:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo105 = new RadioResponseInfo();
                    radioResponseInfo105.readFromParcel(hwParcel);
                    setTxPowerStatusResponse(radioResponseInfo105);
                    return;
                case UtranBands.BAND_F /* 106 */:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo106 = new RadioResponseInfo();
                    radioResponseInfo106.readFromParcel(hwParcel);
                    setSuppServPropertyResponse(radioResponseInfo106);
                    return;
                case 107:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo107 = new RadioResponseInfo();
                    radioResponseInfo107.readFromParcel(hwParcel);
                    supplyDeviceNetworkDepersonalizationResponse(radioResponseInfo107, hwParcel.readInt32());
                    return;
                case 108:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo108 = new RadioResponseInfo();
                    radioResponseInfo108.readFromParcel(hwParcel);
                    hangupWithReasonResponse(radioResponseInfo108);
                    return;
                case 109:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo109 = new RadioResponseInfo();
                    radioResponseInfo109.readFromParcel(hwParcel);
                    setVendorSettingResponse(radioResponseInfo109);
                    return;
                case 110:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo110 = new RadioResponseInfo();
                    radioResponseInfo110.readFromParcel(hwParcel);
                    getPlmnNameFromSE13TableResponse(radioResponseInfo110, hwParcel.readString());
                    return;
                case 111:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo111 = new RadioResponseInfo();
                    radioResponseInfo111.readFromParcel(hwParcel);
                    enableCAPlusBandWidthFilterResponse(radioResponseInfo111);
                    return;
                case 112:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo112 = new RadioResponseInfo();
                    radioResponseInfo112.readFromParcel(hwParcel);
                    setGwsdModeResponse(radioResponseInfo112);
                    return;
                case 113:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo113 = new RadioResponseInfo();
                    radioResponseInfo113.readFromParcel(hwParcel);
                    setCallValidTimerResponse(radioResponseInfo113);
                    return;
                case 114:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo114 = new RadioResponseInfo();
                    radioResponseInfo114.readFromParcel(hwParcel);
                    setIgnoreSameNumberIntervalResponse(radioResponseInfo114);
                    return;
                case 115:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo115 = new RadioResponseInfo();
                    radioResponseInfo115.readFromParcel(hwParcel);
                    setKeepAliveByPDCPCtrlPDUResponse(radioResponseInfo115);
                    return;
                case 116:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo116 = new RadioResponseInfo();
                    radioResponseInfo116.readFromParcel(hwParcel);
                    setKeepAliveByIpDataResponse(radioResponseInfo116);
                    return;
                case 117:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo117 = new RadioResponseInfo();
                    radioResponseInfo117.readFromParcel(hwParcel);
                    enableDsdaIndicationResponse(radioResponseInfo117);
                    return;
                case 118:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo118 = new RadioResponseInfo();
                    radioResponseInfo118.readFromParcel(hwParcel);
                    getDsdaStatusResponse(radioResponseInfo118, hwParcel.readInt32());
                    return;
                case 119:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo119 = new RadioResponseInfo();
                    radioResponseInfo119.readFromParcel(hwParcel);
                    registerCellQltyReportResponse(radioResponseInfo119);
                    return;
                case 120:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo120 = new RadioResponseInfo();
                    radioResponseInfo120.readFromParcel(hwParcel);
                    getSuggestedPlmnListResponse(radioResponseInfo120, hwParcel.readStringVector());
                    return;
                case 121:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo121 = new RadioResponseInfo();
                    radioResponseInfo121.readFromParcel(hwParcel);
                    deactivateNrScgCommunicationResponse(radioResponseInfo121);
                    return;
                case 122:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo122 = new RadioResponseInfo();
                    radioResponseInfo122.readFromParcel(hwParcel);
                    getDeactivateNrScgCommunicationResponse(radioResponseInfo122, hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case DataCallFailCause.INVALID_DNS_ADDR /* 123 */:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo123 = new RadioResponseInfo();
                    radioResponseInfo123.readFromParcel(hwParcel);
                    setMaxUlSpeedResponse(radioResponseInfo123);
                    return;
                case DataCallFailCause.INVALID_PCSCF_OR_DNS_ADDRESS /* 124 */:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo124 = new RadioResponseInfo();
                    radioResponseInfo124.readFromParcel(hwParcel);
                    sendSarIndicatorResponse(radioResponseInfo124);
                    return;
                case 125:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo125 = new RadioResponseInfo();
                    radioResponseInfo125.readFromParcel(hwParcel);
                    RsuResponseInfo rsuResponseInfo = new RsuResponseInfo();
                    rsuResponseInfo.readFromParcel(hwParcel);
                    sendRsuRequestResponse(radioResponseInfo125, rsuResponseInfo);
                    return;
                case 126:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo126 = new RadioResponseInfo();
                    radioResponseInfo126.readFromParcel(hwParcel);
                    sendWifiEnabledResponse(radioResponseInfo126);
                    return;
                case 127:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo127 = new RadioResponseInfo();
                    radioResponseInfo127.readFromParcel(hwParcel);
                    sendWifiAssociatedResponse(radioResponseInfo127);
                    return;
                case 128:
                    hwParcel.enforceInterface(IMtkRadioExResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo128 = new RadioResponseInfo();
                    radioResponseInfo128.readFromParcel(hwParcel);
                    sendWifiIpAddressResponse(radioResponseInfo128);
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse, android.hidl.base.V1_0.IBase
        public final void ping() {
        }

        public IHwInterface queryLocalInterface(String str) {
            if (IMtkRadioExResponse.kInterfaceName.equals(str)) {
                return this;
            }
            return null;
        }

        public void registerAsService(String str) throws RemoteException {
            registerService(str);
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse, android.hidl.base.V1_0.IBase
        public final void setHALInstrumentation() {
        }

        public String toString() {
            return interfaceDescriptor() + "@Stub";
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse, android.hidl.base.V1_0.IBase
        public final boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) {
            return true;
        }
    }

    static IMtkRadioExResponse asInterface(IHwBinder iHwBinder) {
        if (iHwBinder == null) {
            return null;
        }
        IHwInterface iHwInterfaceQueryLocalInterface = iHwBinder.queryLocalInterface(kInterfaceName);
        if (iHwInterfaceQueryLocalInterface != null && (iHwInterfaceQueryLocalInterface instanceof IMtkRadioExResponse)) {
            return (IMtkRadioExResponse) iHwInterfaceQueryLocalInterface;
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

    static IMtkRadioExResponse castFrom(IHwInterface iHwInterface) {
        if (iHwInterface == null) {
            return null;
        }
        return asInterface(iHwInterface.asBinder());
    }

    static IMtkRadioExResponse getService() throws RemoteException {
        return getService("default");
    }

    static IMtkRadioExResponse getService(String str) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str));
    }

    static IMtkRadioExResponse getService(String str, boolean z) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str, z));
    }

    static IMtkRadioExResponse getService(boolean z) throws RemoteException {
        return getService("default", z);
    }

    void abortFemtocellListResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void activateUiccCardRsp(RadioResponseInfo radioResponseInfo, int i) throws RemoteException;

    @Override // android.hidl.base.V1_0.IBase
    IHwBinder asBinder();

    void cancelAvailableNetworksResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void cfgA2offsetResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void cfgB1offsetResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void dataConnectionAttachResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void dataConnectionDetachResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void deactivateNrScgCommunicationResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void deactivateUiccCardRsp(RadioResponseInfo radioResponseInfo, int i) throws RemoteException;

    @Override // android.hidl.base.V1_0.IBase
    void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) throws RemoteException;

    void deleteUPBEntryResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void disableNRResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void eccPreferredRatResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void editUPBEntryResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void enableCAPlusBandWidthFilterResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void enableDsdaIndicationResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void enableSCGfailureResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void getATRResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException;

    void getApcInfoResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException;

    void getAvailableNetworksWithActResponse(RadioResponseInfo radioResponseInfo, ArrayList<OperatorInfoWithAct> arrayList) throws RemoteException;

    void getCallSubAddressResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException;

    void getColpResponse(RadioResponseInfo radioResponseInfo, int i, int i2) throws RemoteException;

    void getColrResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException;

    void getCurrentPOLListResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) throws RemoteException;

    void getCurrentUiccCardProvisioningStatusRsp(RadioResponseInfo radioResponseInfo, int i) throws RemoteException;

    void getDeactivateNrScgCommunicationResponse(RadioResponseInfo radioResponseInfo, int i, int i2) throws RemoteException;

    @Override // android.hidl.base.V1_0.IBase
    DebugInfo getDebugInfo() throws RemoteException;

    void getDsdaStatusResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException;

    void getEccNumResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void getFemtocellListResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) throws RemoteException;

    void getGsmBroadcastActivationRsp(RadioResponseInfo radioResponseInfo, int i) throws RemoteException;

    void getGsmBroadcastLangsResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException;

    @Override // android.hidl.base.V1_0.IBase
    ArrayList<byte[]> getHashChain() throws RemoteException;

    void getIccidResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException;

    void getLteReleaseVersionResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException;

    void getPOLCapabilityResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException;

    void getPhoneBookMemStorageResponse(RadioResponseInfo radioResponseInfo, PhbMemStorageResponse phbMemStorageResponse) throws RemoteException;

    void getPhoneBookStringsLengthResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException;

    void getPlmnNameFromSE13TableResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException;

    void getRoamingEnableResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException;

    void getRxTestResultResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException;

    void getSignalStrengthWithWcdmaEcioResponse(RadioResponseInfo radioResponseInfo, SignalStrengthWithWcdmaEcio signalStrengthWithWcdmaEcio) throws RemoteException;

    void getSmsMemStatusResponse(RadioResponseInfo radioResponseInfo, SmsMemStatus smsMemStatus) throws RemoteException;

    void getSmsParametersResponse(RadioResponseInfo radioResponseInfo, SmsParams smsParams) throws RemoteException;

    void getSmsRuimMemoryStatusResponse(RadioResponseInfo radioResponseInfo, SmsMemStatus smsMemStatus) throws RemoteException;

    void getSuggestedPlmnListResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) throws RemoteException;

    void handleStkCallSetupRequestFromSimWithResCodeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void hangupAllResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void hangupWithReasonResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    @Override // android.hidl.base.V1_0.IBase
    ArrayList<String> interfaceChain() throws RemoteException;

    @Override // android.hidl.base.V1_0.IBase
    String interfaceDescriptor() throws RemoteException;

    @Override // android.hidl.base.V1_0.IBase
    boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException;

    void modifyModemTypeResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException;

    @Override // android.hidl.base.V1_0.IBase
    void notifySyspropsChanged() throws RemoteException;

    @Override // android.hidl.base.V1_0.IBase
    void ping() throws RemoteException;

    void queryCallForwardInTimeSlotStatusResponse(RadioResponseInfo radioResponseInfo, ArrayList<CallForwardInfoEx> arrayList) throws RemoteException;

    void queryFemtoCellSystemSelectionModeResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException;

    void queryNetworkLockResponse(RadioResponseInfo radioResponseInfo, int i, int i2, int i3, int i4, int i5, int i6, int i7) throws RemoteException;

    void queryPhbStorageInfoResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException;

    void queryUPBAvailableResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException;

    void queryUPBCapabilityResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException;

    void readPhbEntryResponse(RadioResponseInfo radioResponseInfo, ArrayList<PhbEntryStructure> arrayList) throws RemoteException;

    void readPhoneBookEntryExtResponse(RadioResponseInfo radioResponseInfo, ArrayList<PhbEntryExt> arrayList) throws RemoteException;

    void readUPBAasListResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) throws RemoteException;

    void readUPBAnrEntryResponse(RadioResponseInfo radioResponseInfo, ArrayList<PhbEntryStructure> arrayList) throws RemoteException;

    void readUPBEmailEntryResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException;

    void readUPBGasListResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) throws RemoteException;

    void readUPBGrpEntryResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException;

    void readUPBSneEntryResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException;

    void registerCellQltyReportResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void removeCbMsgResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void resetAllConnectionsResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void resetMdDataRetryCountResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void restartRILDResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void runGbaAuthenticationResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) throws RemoteException;

    void selectFemtocellResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void sendCnapResponse(RadioResponseInfo radioResponseInfo, int i, int i2) throws RemoteException;

    void sendEmbmsAtCommandResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException;

    void sendRequestRawResponse(RadioResponseInfo radioResponseInfo, ArrayList<Byte> arrayList) throws RemoteException;

    void sendRequestStringsResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) throws RemoteException;

    void sendRsuRequestResponse(RadioResponseInfo radioResponseInfo, RsuResponseInfo rsuResponseInfo) throws RemoteException;

    void sendSarIndicatorResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void sendWifiAssociatedResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void sendWifiEnabledResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void sendWifiIpAddressResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setApcModeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setBgsrchDeltaSleepTimerResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setCallForwardInTimeSlotResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setCallIndicationResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setCallSubAddressResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setCallValidTimerResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setClipResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setColpResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setColrResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setEccModeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setEccNumResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setEtwsResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setFdModeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setFemtoCellSystemSelectionModeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setGsmBroadcastLangsResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setGwsdModeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    @Override // android.hidl.base.V1_0.IBase
    void setHALInstrumentation() throws RemoteException;

    void setIgnoreSameNumberIntervalResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setKeepAliveByIpDataResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setKeepAliveByPDCPCtrlPDUResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setLteReleaseVersionResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setMaxUlSpeedResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setModemPowerResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setNetworkLockResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setNetworkSelectionModeManualWithActResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setPOLEntryResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setPhoneBookMemStorageResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setPhonebookReadyResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setRemoveRestrictEutranModeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setResumeRegistrationResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setRoamingEnableResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setRxTestConfigResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException;

    void setSearchRatResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setSearchStoredFreqInfoResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setServiceStateToModemResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setSimPowerResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setSmsParametersResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setSuppServPropertyResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setTrmResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setTxPowerResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setTxPowerStatusResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setVendorSettingResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setVoicePreferStatusResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void supplyDepersonalizationResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException;

    void supplyDeviceNetworkDepersonalizationResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException;

    void syncDataSettingsToMdResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void triggerModeSwitchByEccResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    @Override // android.hidl.base.V1_0.IBase
    boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException;

    void vsimNotificationResponse(RadioResponseInfo radioResponseInfo, VsimEvent vsimEvent) throws RemoteException;

    void vsimOperationResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void writePhbEntryResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void writePhoneBookEntryExtResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void writeUPBGrpEntryResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;
}
