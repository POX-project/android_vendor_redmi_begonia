package vendor.mediatek.hardware.mtkradioex.V2_0;

import android.hardware.radio.V1_0.RadioResponseInfo;
import android.hardware.radio.V1_0.SendSmsResult;
import android.internal.hidl.base.V1_0.DebugInfo;
import android.internal.hidl.base.V1_0.IBase;
import android.os.HidlSupport;
import android.os.HwBinder;
import android.os.HwBlob;
import android.os.HwParcel;
import android.os.IHwBinder;
import android.os.IHwInterface;
import android.os.NativeHandle;
import android.os.RemoteException;
import com.mediatek.internal.telephony.MtkEtwsUtils;
import com.mediatek.internal.telephony.MtkWspTypeDecoder;
import com.mediatek.internal.telephony.cat.BipUtils;
import com.mediatek.internal.telephony.cat.MtkCatService;
import com.mediatek.internal.telephony.ppl.PplMessageManager;
import com.mediatek.internal.telephony.worldphone.IWorldPhone;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Objects;
import vendor.xiaomi.hardware.misys.V1_0.IResultValue;

/* JADX INFO: loaded from: classes.dex */
public interface IImsRadioResponse extends IBase {
    public static final String kInterfaceName = "vendor.mediatek.hardware.mtkradioex@2.0::IImsRadioResponse";

    public static final class Proxy implements IImsRadioResponse {
        private IHwBinder mRemote;

        public Proxy(IHwBinder iHwBinder) {
            Objects.requireNonNull(iHwBinder);
            this.mRemote = iHwBinder;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void acknowledgeLastIncomingCdmaSmsExResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(42, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void acknowledgeLastIncomingGsmSmsExResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(41, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public IHwBinder asBinder() {
            return this.mRemote;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void cancelUssiResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(19, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void conferenceDialResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(14, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void controlCallResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(5, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void controlImsConferenceCallMemberResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(12, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("android.hidl.base@1.0::IBase");
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void dialWithSipUriResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(17, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void eccRedialApproveResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(62, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public final boolean equals(Object obj) {
            return HidlSupport.interfacesEqual(this, obj);
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void forceReleaseCallResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(23, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void getColpResponse(RadioResponseInfo radioResponseInfo, int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(32, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void getColrResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(33, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public DebugInfo getDebugInfo() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("android.hidl.base@1.0::IBase");
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public ArrayList<byte[]> getHashChain() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("android.hidl.base@1.0::IBase");
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void getImsCfgFeatureValueResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(45, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void getImsCfgProvisionValueResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(47, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void getImsCfgResourceCapValueResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void getProvisionValueResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(10, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void getVoiceDomainPreferenceResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void getXcapStatusResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(20, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void hangupAllResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(1, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void hangupWithReasonResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(49, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public final int hashCode() {
            return asBinder().hashCode();
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void imsBearerStateConfirmResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(24, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void imsDeregNotificationResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(6, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void imsEctCommandResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(4, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public ArrayList<String> interfaceChain() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("android.hidl.base@1.0::IBase");
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public String interfaceDescriptor() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("android.hidl.base@1.0::IBase");
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException {
            return this.mRemote.linkToDeath(deathRecipient, j);
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void notifySyspropsChanged() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("android.hidl.base@1.0::IBase");
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(257120595, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void ping() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("android.hidl.base@1.0::IBase");
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(256921159, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void pullCallResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(28, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void queryCallForwardInTimeSlotStatusResponse(RadioResponseInfo radioResponseInfo, ArrayList<CallForwardInfoEx> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            CallForwardInfoEx.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(36, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void querySsacStatusResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(61, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void queryVopsStatusResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(55, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void resetSuppServResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(21, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void rttModifyRequestResponseResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(53, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void runGbaAuthenticationResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(38, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void sendImsSmsExResponse(RadioResponseInfo radioResponseInfo, SendSmsResult sendSmsResult) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            sendSmsResult.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(40, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void sendRttModifyRequestResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(51, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void sendRttTextResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(52, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void sendUssiResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(18, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setCallAdditionalInfoResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(63, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setCallForwardInTimeSlotResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(37, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setCallIndicationResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(2, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setClipResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(31, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setColpResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(34, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setColrResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(35, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setHALInstrumentation() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("android.hidl.base@1.0::IBase");
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(256462420, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setImsBearerNotificationResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(43, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setImsCallModeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(59, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setImsCallStatusResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(25, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setImsCfgFeatureValueResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(44, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setImsCfgProvisionValueResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(46, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setImsEnableResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(7, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setImsRegistrationReportResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(29, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setImsRtpReportResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(27, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setImsVideoEnableResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(8, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setImscfgResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(9, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setModemImsCfgResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(39, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setProvisionValueResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(11, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setRttModeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(50, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setSipHeaderReportResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(58, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setSipHeaderResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(57, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setVendorSettingResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(60, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setVoiceDomainPreferenceResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(30, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setWfcProfileResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(13, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void setupXcapUserAgentStringResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(22, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public String toString() {
            try {
                return interfaceDescriptor() + "@Proxy";
            } catch (RemoteException e) {
                return "[class or subclass of vendor.mediatek.hardware.mtkradioex@2.0::IImsRadioResponse]@Proxy";
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void toggleRttAudioIndicationResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(54, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException {
            return this.mRemote.unlinkToDeath(deathRecipient);
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void updateImsRegistrationStatusResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(26, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void videoCallAcceptResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(3, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void vtDialResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(16, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void vtDialWithSipUriResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(15, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }
    }

    public static abstract class Stub extends HwBinder implements IImsRadioResponse {
        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public IHwBinder asBinder() {
            return this;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) {
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public final DebugInfo getDebugInfo() {
            DebugInfo debugInfo = new DebugInfo();
            debugInfo.pid = HidlSupport.getPidIfSharable();
            debugInfo.ptr = 0L;
            debugInfo.arch = 0;
            return debugInfo;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public final ArrayList<byte[]> getHashChain() {
            return new ArrayList<>(Arrays.asList(new byte[]{6, 31, -80, 125, -12, -78, 125, -91, -7, -95, 113, -40, 90, -100, -93, -79, 59, -94, 87, BipUtils.TCP_STATUS_LISTEN, 59, -120, -80, -93, -88, 45, -119, 14, -57, 119, -127, -38}, new byte[]{-20, 127, -41, -98, -48, 45, -6, -123, -68, 73, -108, 38, -83, -82, 62, -66, 35, -17, 5, 36, -13, -51, 105, 87, 19, -109, 36, -72, 59, 24, -54, 76}));
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public final ArrayList<String> interfaceChain() {
            return new ArrayList<>(Arrays.asList(IImsRadioResponse.kInterfaceName, "android.hidl.base@1.0::IBase"));
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public final String interfaceDescriptor() {
            return IImsRadioResponse.kInterfaceName;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public final boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) {
            return true;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public final void notifySyspropsChanged() {
            HwBinder.enableInstrumentation();
        }

        public void onTransact(int i, HwParcel hwParcel, HwParcel hwParcel2, int i2) throws RemoteException {
            switch (i) {
                case 1:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo = new RadioResponseInfo();
                    radioResponseInfo.readFromParcel(hwParcel);
                    hangupAllResponse(radioResponseInfo);
                    return;
                case 2:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo2 = new RadioResponseInfo();
                    radioResponseInfo2.readFromParcel(hwParcel);
                    setCallIndicationResponse(radioResponseInfo2);
                    return;
                case 3:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo3 = new RadioResponseInfo();
                    radioResponseInfo3.readFromParcel(hwParcel);
                    videoCallAcceptResponse(radioResponseInfo3);
                    return;
                case 4:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo4 = new RadioResponseInfo();
                    radioResponseInfo4.readFromParcel(hwParcel);
                    imsEctCommandResponse(radioResponseInfo4);
                    return;
                case 5:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo5 = new RadioResponseInfo();
                    radioResponseInfo5.readFromParcel(hwParcel);
                    controlCallResponse(radioResponseInfo5);
                    return;
                case 6:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo6 = new RadioResponseInfo();
                    radioResponseInfo6.readFromParcel(hwParcel);
                    imsDeregNotificationResponse(radioResponseInfo6);
                    return;
                case 7:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo7 = new RadioResponseInfo();
                    radioResponseInfo7.readFromParcel(hwParcel);
                    setImsEnableResponse(radioResponseInfo7);
                    return;
                case 8:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo8 = new RadioResponseInfo();
                    radioResponseInfo8.readFromParcel(hwParcel);
                    setImsVideoEnableResponse(radioResponseInfo8);
                    return;
                case 9:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo9 = new RadioResponseInfo();
                    radioResponseInfo9.readFromParcel(hwParcel);
                    setImscfgResponse(radioResponseInfo9);
                    return;
                case 10:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo10 = new RadioResponseInfo();
                    radioResponseInfo10.readFromParcel(hwParcel);
                    getProvisionValueResponse(radioResponseInfo10);
                    return;
                case 11:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo11 = new RadioResponseInfo();
                    radioResponseInfo11.readFromParcel(hwParcel);
                    setProvisionValueResponse(radioResponseInfo11);
                    return;
                case 12:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo12 = new RadioResponseInfo();
                    radioResponseInfo12.readFromParcel(hwParcel);
                    controlImsConferenceCallMemberResponse(radioResponseInfo12);
                    return;
                case 13:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo13 = new RadioResponseInfo();
                    radioResponseInfo13.readFromParcel(hwParcel);
                    setWfcProfileResponse(radioResponseInfo13);
                    return;
                case 14:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo14 = new RadioResponseInfo();
                    radioResponseInfo14.readFromParcel(hwParcel);
                    conferenceDialResponse(radioResponseInfo14);
                    return;
                case 15:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo15 = new RadioResponseInfo();
                    radioResponseInfo15.readFromParcel(hwParcel);
                    vtDialWithSipUriResponse(radioResponseInfo15);
                    return;
                case 16:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo16 = new RadioResponseInfo();
                    radioResponseInfo16.readFromParcel(hwParcel);
                    vtDialResponse(radioResponseInfo16);
                    return;
                case 17:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo17 = new RadioResponseInfo();
                    radioResponseInfo17.readFromParcel(hwParcel);
                    dialWithSipUriResponse(radioResponseInfo17);
                    return;
                case 18:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo18 = new RadioResponseInfo();
                    radioResponseInfo18.readFromParcel(hwParcel);
                    sendUssiResponse(radioResponseInfo18);
                    return;
                case 19:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo19 = new RadioResponseInfo();
                    radioResponseInfo19.readFromParcel(hwParcel);
                    cancelUssiResponse(radioResponseInfo19);
                    return;
                case 20:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo20 = new RadioResponseInfo();
                    radioResponseInfo20.readFromParcel(hwParcel);
                    getXcapStatusResponse(radioResponseInfo20);
                    return;
                case 21:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo21 = new RadioResponseInfo();
                    radioResponseInfo21.readFromParcel(hwParcel);
                    resetSuppServResponse(radioResponseInfo21);
                    return;
                case IResultValue.MISYS_EINVAL /* 22 */:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo22 = new RadioResponseInfo();
                    radioResponseInfo22.readFromParcel(hwParcel);
                    setupXcapUserAgentStringResponse(radioResponseInfo22);
                    return;
                case IResultValue.MISYS_ENFILE /* 23 */:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo23 = new RadioResponseInfo();
                    radioResponseInfo23.readFromParcel(hwParcel);
                    forceReleaseCallResponse(radioResponseInfo23);
                    return;
                case IResultValue.MISYS_EMFILE /* 24 */:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo24 = new RadioResponseInfo();
                    radioResponseInfo24.readFromParcel(hwParcel);
                    imsBearerStateConfirmResponse(radioResponseInfo24);
                    return;
                case IResultValue.MISYS_ENOTTY /* 25 */:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo25 = new RadioResponseInfo();
                    radioResponseInfo25.readFromParcel(hwParcel);
                    setImsCallStatusResponse(radioResponseInfo25);
                    return;
                case IResultValue.MISYS_ETXTBSY /* 26 */:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo26 = new RadioResponseInfo();
                    radioResponseInfo26.readFromParcel(hwParcel);
                    updateImsRegistrationStatusResponse(radioResponseInfo26);
                    return;
                case IResultValue.MISYS_EFBIG /* 27 */:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo27 = new RadioResponseInfo();
                    radioResponseInfo27.readFromParcel(hwParcel);
                    setImsRtpReportResponse(radioResponseInfo27);
                    return;
                case IResultValue.MISYS_ENOSPC /* 28 */:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo28 = new RadioResponseInfo();
                    radioResponseInfo28.readFromParcel(hwParcel);
                    pullCallResponse(radioResponseInfo28);
                    return;
                case IResultValue.MISYS_ESPIPE /* 29 */:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo29 = new RadioResponseInfo();
                    radioResponseInfo29.readFromParcel(hwParcel);
                    setImsRegistrationReportResponse(radioResponseInfo29);
                    return;
                case 30:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo30 = new RadioResponseInfo();
                    radioResponseInfo30.readFromParcel(hwParcel);
                    setVoiceDomainPreferenceResponse(radioResponseInfo30);
                    return;
                case 31:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo31 = new RadioResponseInfo();
                    radioResponseInfo31.readFromParcel(hwParcel);
                    setClipResponse(radioResponseInfo31);
                    return;
                case 32:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo32 = new RadioResponseInfo();
                    radioResponseInfo32.readFromParcel(hwParcel);
                    getColpResponse(radioResponseInfo32, hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 33:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo33 = new RadioResponseInfo();
                    radioResponseInfo33.readFromParcel(hwParcel);
                    getColrResponse(radioResponseInfo33, hwParcel.readInt32());
                    return;
                case 34:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo34 = new RadioResponseInfo();
                    radioResponseInfo34.readFromParcel(hwParcel);
                    setColpResponse(radioResponseInfo34);
                    return;
                case 35:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo35 = new RadioResponseInfo();
                    radioResponseInfo35.readFromParcel(hwParcel);
                    setColrResponse(radioResponseInfo35);
                    return;
                case 36:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo36 = new RadioResponseInfo();
                    radioResponseInfo36.readFromParcel(hwParcel);
                    queryCallForwardInTimeSlotStatusResponse(radioResponseInfo36, CallForwardInfoEx.readVectorFromParcel(hwParcel));
                    return;
                case 37:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo37 = new RadioResponseInfo();
                    radioResponseInfo37.readFromParcel(hwParcel);
                    setCallForwardInTimeSlotResponse(radioResponseInfo37);
                    return;
                case 38:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo38 = new RadioResponseInfo();
                    radioResponseInfo38.readFromParcel(hwParcel);
                    runGbaAuthenticationResponse(radioResponseInfo38, hwParcel.readStringVector());
                    return;
                case 39:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo39 = new RadioResponseInfo();
                    radioResponseInfo39.readFromParcel(hwParcel);
                    setModemImsCfgResponse(radioResponseInfo39, hwParcel.readString());
                    return;
                case 40:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo40 = new RadioResponseInfo();
                    radioResponseInfo40.readFromParcel(hwParcel);
                    SendSmsResult sendSmsResult = new SendSmsResult();
                    sendSmsResult.readFromParcel(hwParcel);
                    sendImsSmsExResponse(radioResponseInfo40, sendSmsResult);
                    return;
                case 41:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo41 = new RadioResponseInfo();
                    radioResponseInfo41.readFromParcel(hwParcel);
                    acknowledgeLastIncomingGsmSmsExResponse(radioResponseInfo41);
                    return;
                case 42:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo42 = new RadioResponseInfo();
                    radioResponseInfo42.readFromParcel(hwParcel);
                    acknowledgeLastIncomingCdmaSmsExResponse(radioResponseInfo42);
                    return;
                case 43:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo43 = new RadioResponseInfo();
                    radioResponseInfo43.readFromParcel(hwParcel);
                    setImsBearerNotificationResponse(radioResponseInfo43);
                    return;
                case 44:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo44 = new RadioResponseInfo();
                    radioResponseInfo44.readFromParcel(hwParcel);
                    setImsCfgFeatureValueResponse(radioResponseInfo44);
                    return;
                case 45:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo45 = new RadioResponseInfo();
                    radioResponseInfo45.readFromParcel(hwParcel);
                    getImsCfgFeatureValueResponse(radioResponseInfo45, hwParcel.readInt32());
                    return;
                case MtkCatService.MSG_ID_CACHED_DISPLAY_TEXT_TIMEOUT /* 46 */:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo46 = new RadioResponseInfo();
                    radioResponseInfo46.readFromParcel(hwParcel);
                    setImsCfgProvisionValueResponse(radioResponseInfo46);
                    return;
                case MtkCatService.MSG_ID_CONN_RETRY_TIMEOUT /* 47 */:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo47 = new RadioResponseInfo();
                    radioResponseInfo47.readFromParcel(hwParcel);
                    getImsCfgProvisionValueResponse(radioResponseInfo47, hwParcel.readString());
                    return;
                case 48:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo48 = new RadioResponseInfo();
                    radioResponseInfo48.readFromParcel(hwParcel);
                    getImsCfgResourceCapValueResponse(radioResponseInfo48, hwParcel.readInt32());
                    return;
                case PplMessageManager.PendingMessage.PENDING_MESSAGE_LENGTH /* 49 */:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo49 = new RadioResponseInfo();
                    radioResponseInfo49.readFromParcel(hwParcel);
                    hangupWithReasonResponse(radioResponseInfo49);
                    return;
                case 50:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo50 = new RadioResponseInfo();
                    radioResponseInfo50.readFromParcel(hwParcel);
                    setRttModeResponse(radioResponseInfo50);
                    return;
                case 51:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo51 = new RadioResponseInfo();
                    radioResponseInfo51.readFromParcel(hwParcel);
                    sendRttModifyRequestResponse(radioResponseInfo51);
                    return;
                case 52:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo52 = new RadioResponseInfo();
                    radioResponseInfo52.readFromParcel(hwParcel);
                    sendRttTextResponse(radioResponseInfo52);
                    return;
                case MtkWspTypeDecoder.CONTENT_TYPE_B_CONNECTIVITY /* 53 */:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo53 = new RadioResponseInfo();
                    radioResponseInfo53.readFromParcel(hwParcel);
                    rttModifyRequestResponseResponse(radioResponseInfo53);
                    return;
                case 54:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo54 = new RadioResponseInfo();
                    radioResponseInfo54.readFromParcel(hwParcel);
                    toggleRttAudioIndicationResponse(radioResponseInfo54);
                    return;
                case 55:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo55 = new RadioResponseInfo();
                    radioResponseInfo55.readFromParcel(hwParcel);
                    queryVopsStatusResponse(radioResponseInfo55, hwParcel.readInt32());
                    return;
                case MtkEtwsUtils.ETWS_PDU_LENGTH /* 56 */:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo56 = new RadioResponseInfo();
                    radioResponseInfo56.readFromParcel(hwParcel);
                    getVoiceDomainPreferenceResponse(radioResponseInfo56, hwParcel.readInt32());
                    return;
                case 57:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo57 = new RadioResponseInfo();
                    radioResponseInfo57.readFromParcel(hwParcel);
                    setSipHeaderResponse(radioResponseInfo57);
                    return;
                case 58:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo58 = new RadioResponseInfo();
                    radioResponseInfo58.readFromParcel(hwParcel);
                    setSipHeaderReportResponse(radioResponseInfo58);
                    return;
                case 59:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo59 = new RadioResponseInfo();
                    radioResponseInfo59.readFromParcel(hwParcel);
                    setImsCallModeResponse(radioResponseInfo59);
                    return;
                case 60:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo60 = new RadioResponseInfo();
                    radioResponseInfo60.readFromParcel(hwParcel);
                    setVendorSettingResponse(radioResponseInfo60);
                    return;
                case IWorldPhone.EVENT_INVALID_SIM_NOTIFY_2 /* 61 */:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo61 = new RadioResponseInfo();
                    radioResponseInfo61.readFromParcel(hwParcel);
                    querySsacStatusResponse(radioResponseInfo61, hwParcel.readInt32Vector());
                    return;
                case IWorldPhone.EVENT_INVALID_SIM_NOTIFY_3 /* 62 */:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo62 = new RadioResponseInfo();
                    radioResponseInfo62.readFromParcel(hwParcel);
                    eccRedialApproveResponse(radioResponseInfo62);
                    return;
                case IWorldPhone.EVENT_INVALID_SIM_NOTIFY_4 /* 63 */:
                    hwParcel.enforceInterface(IImsRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo63 = new RadioResponseInfo();
                    radioResponseInfo63.readFromParcel(hwParcel);
                    setCallAdditionalInfoResponse(radioResponseInfo63);
                    return;
                default:
                    switch (i) {
                        case 256067662:
                            hwParcel.enforceInterface("android.hidl.base@1.0::IBase");
                            ArrayList<String> arrayListInterfaceChain = interfaceChain();
                            hwParcel2.writeStatus(0);
                            hwParcel2.writeStringVector(arrayListInterfaceChain);
                            hwParcel2.send();
                            return;
                        case 256131655:
                            hwParcel.enforceInterface("android.hidl.base@1.0::IBase");
                            debug(hwParcel.readNativeHandle(), hwParcel.readStringVector());
                            hwParcel2.writeStatus(0);
                            hwParcel2.send();
                            return;
                        case 256136003:
                            hwParcel.enforceInterface("android.hidl.base@1.0::IBase");
                            String strInterfaceDescriptor = interfaceDescriptor();
                            hwParcel2.writeStatus(0);
                            hwParcel2.writeString(strInterfaceDescriptor);
                            hwParcel2.send();
                            return;
                        case 256398152:
                            hwParcel.enforceInterface("android.hidl.base@1.0::IBase");
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
                            hwParcel.enforceInterface("android.hidl.base@1.0::IBase");
                            setHALInstrumentation();
                            return;
                        case 256921159:
                            hwParcel.enforceInterface("android.hidl.base@1.0::IBase");
                            ping();
                            hwParcel2.writeStatus(0);
                            hwParcel2.send();
                            return;
                        case 257049926:
                            hwParcel.enforceInterface("android.hidl.base@1.0::IBase");
                            DebugInfo debugInfo = getDebugInfo();
                            hwParcel2.writeStatus(0);
                            debugInfo.writeToParcel(hwParcel2);
                            hwParcel2.send();
                            return;
                        case 257120595:
                            hwParcel.enforceInterface("android.hidl.base@1.0::IBase");
                            notifySyspropsChanged();
                            return;
                        default:
                            return;
                    }
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public final void ping() {
        }

        public IHwInterface queryLocalInterface(String str) {
            if (IImsRadioResponse.kInterfaceName.equals(str)) {
                return this;
            }
            return null;
        }

        public void registerAsService(String str) throws RemoteException {
            registerService(str);
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public final void setHALInstrumentation() {
        }

        public String toString() {
            return interfaceDescriptor() + "@Stub";
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
        public final boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) {
            return true;
        }
    }

    static IImsRadioResponse asInterface(IHwBinder iHwBinder) {
        if (iHwBinder == null) {
            return null;
        }
        IImsRadioResponse iImsRadioResponseQueryLocalInterface = iHwBinder.queryLocalInterface(kInterfaceName);
        if (iImsRadioResponseQueryLocalInterface != null && (iImsRadioResponseQueryLocalInterface instanceof IImsRadioResponse)) {
            return iImsRadioResponseQueryLocalInterface;
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

    static IImsRadioResponse castFrom(IHwInterface iHwInterface) {
        if (iHwInterface == null) {
            return null;
        }
        return asInterface(iHwInterface.asBinder());
    }

    static IImsRadioResponse getService() throws RemoteException {
        return getService("default");
    }

    static IImsRadioResponse getService(String str) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str));
    }

    static IImsRadioResponse getService(String str, boolean z) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str, z));
    }

    static IImsRadioResponse getService(boolean z) throws RemoteException {
        return getService("default", z);
    }

    void acknowledgeLastIncomingCdmaSmsExResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void acknowledgeLastIncomingGsmSmsExResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    IHwBinder asBinder();

    void cancelUssiResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void conferenceDialResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void controlCallResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void controlImsConferenceCallMemberResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) throws RemoteException;

    void dialWithSipUriResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void eccRedialApproveResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void forceReleaseCallResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void getColpResponse(RadioResponseInfo radioResponseInfo, int i, int i2) throws RemoteException;

    void getColrResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException;

    DebugInfo getDebugInfo() throws RemoteException;

    ArrayList<byte[]> getHashChain() throws RemoteException;

    void getImsCfgFeatureValueResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException;

    void getImsCfgProvisionValueResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException;

    void getImsCfgResourceCapValueResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException;

    void getProvisionValueResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void getVoiceDomainPreferenceResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException;

    void getXcapStatusResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void hangupAllResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void hangupWithReasonResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void imsBearerStateConfirmResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void imsDeregNotificationResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void imsEctCommandResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    ArrayList<String> interfaceChain() throws RemoteException;

    String interfaceDescriptor() throws RemoteException;

    boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException;

    void notifySyspropsChanged() throws RemoteException;

    void ping() throws RemoteException;

    void pullCallResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void queryCallForwardInTimeSlotStatusResponse(RadioResponseInfo radioResponseInfo, ArrayList<CallForwardInfoEx> arrayList) throws RemoteException;

    void querySsacStatusResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) throws RemoteException;

    void queryVopsStatusResponse(RadioResponseInfo radioResponseInfo, int i) throws RemoteException;

    void resetSuppServResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void rttModifyRequestResponseResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void runGbaAuthenticationResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) throws RemoteException;

    void sendImsSmsExResponse(RadioResponseInfo radioResponseInfo, SendSmsResult sendSmsResult) throws RemoteException;

    void sendRttModifyRequestResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void sendRttTextResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void sendUssiResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setCallAdditionalInfoResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setCallForwardInTimeSlotResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setCallIndicationResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setClipResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setColpResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setColrResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setHALInstrumentation() throws RemoteException;

    void setImsBearerNotificationResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setImsCallModeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setImsCallStatusResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setImsCfgFeatureValueResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setImsCfgProvisionValueResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setImsEnableResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setImsRegistrationReportResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setImsRtpReportResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setImsVideoEnableResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setImscfgResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setModemImsCfgResponse(RadioResponseInfo radioResponseInfo, String str) throws RemoteException;

    void setProvisionValueResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setRttModeResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setSipHeaderReportResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setSipHeaderResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setVendorSettingResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setVoiceDomainPreferenceResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setWfcProfileResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setupXcapUserAgentStringResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void toggleRttAudioIndicationResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException;

    void updateImsRegistrationStatusResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void videoCallAcceptResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void vtDialResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void vtDialWithSipUriResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;
}
