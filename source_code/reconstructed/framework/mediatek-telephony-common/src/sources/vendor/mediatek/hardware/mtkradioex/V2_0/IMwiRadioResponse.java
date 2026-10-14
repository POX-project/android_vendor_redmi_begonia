package vendor.mediatek.hardware.mtkradioex.V2_0;

import android.hardware.radio.V1_0.RadioResponseInfo;
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
import com.mediatek.internal.telephony.cat.BipUtils;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public interface IMwiRadioResponse extends IBase {
    public static final String kInterfaceName = "vendor.mediatek.hardware.mtkradioex@2.0::IMwiRadioResponse";

    public static final class Proxy implements IMwiRadioResponse {
        private IHwBinder mRemote;

        public Proxy(IHwBinder iHwBinder) {
            Objects.requireNonNull(iHwBinder);
            this.mRemote = iHwBinder;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
        public IHwBinder asBinder() {
            return this.mRemote;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
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

        public final boolean equals(Object obj) {
            return HidlSupport.interfacesEqual(this, obj);
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
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

        public final int hashCode() {
            return asBinder().hashCode();
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
        public boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException {
            return this.mRemote.linkToDeath(deathRecipient, j);
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
        public void notifyEPDGScreenStateResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMwiRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(10, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
        public void setEmergencyAddressIdResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMwiRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(7, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
        public void setLocationInfoResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMwiRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(6, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
        public void setNattKeepAliveStatusResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMwiRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(8, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
        public void setWfcConfigResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMwiRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(3, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
        public void setWifiAssociatedResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMwiRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(2, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
        public void setWifiEnabledResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMwiRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(1, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
        public void setWifiIpAddressResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMwiRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(5, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
        public void setWifiPingResultResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMwiRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(9, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
        public void setWifiSignalLevelResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMwiRadioResponse.kInterfaceName);
            radioResponseInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(4, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public String toString() {
            try {
                return interfaceDescriptor() + "@Proxy";
            } catch (RemoteException e) {
                return "[class or subclass of vendor.mediatek.hardware.mtkradioex@2.0::IMwiRadioResponse]@Proxy";
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
        public boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException {
            return this.mRemote.unlinkToDeath(deathRecipient);
        }
    }

    public static abstract class Stub extends HwBinder implements IMwiRadioResponse {
        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
        public IHwBinder asBinder() {
            return this;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
        public void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) {
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
        public final DebugInfo getDebugInfo() {
            DebugInfo debugInfo = new DebugInfo();
            debugInfo.pid = HidlSupport.getPidIfSharable();
            debugInfo.ptr = 0L;
            debugInfo.arch = 0;
            return debugInfo;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
        public final ArrayList<byte[]> getHashChain() {
            return new ArrayList<>(Arrays.asList(new byte[]{112, 52, 8, 26, -51, BipUtils.TCP_STATUS_ESTABLISHED, -114, 53, -89, -48, 0, 27, 91, 101, 41, -74, 70, 6, -4, 92, -78, -68, 21, -41, 20, 66, -46, 59, -126, -5, -61, 78}, new byte[]{-20, 127, -41, -98, -48, 45, -6, -123, -68, 73, -108, 38, -83, -82, 62, -66, 35, -17, 5, 36, -13, -51, 105, 87, 19, -109, 36, -72, 59, 24, -54, 76}));
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
        public final ArrayList<String> interfaceChain() {
            return new ArrayList<>(Arrays.asList(IMwiRadioResponse.kInterfaceName, "android.hidl.base@1.0::IBase"));
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
        public final String interfaceDescriptor() {
            return IMwiRadioResponse.kInterfaceName;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
        public final boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) {
            return true;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
        public final void notifySyspropsChanged() {
            HwBinder.enableInstrumentation();
        }

        public void onTransact(int i, HwParcel hwParcel, HwParcel hwParcel2, int i2) throws RemoteException {
            switch (i) {
                case 1:
                    hwParcel.enforceInterface(IMwiRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo = new RadioResponseInfo();
                    radioResponseInfo.readFromParcel(hwParcel);
                    setWifiEnabledResponse(radioResponseInfo);
                    return;
                case 2:
                    hwParcel.enforceInterface(IMwiRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo2 = new RadioResponseInfo();
                    radioResponseInfo2.readFromParcel(hwParcel);
                    setWifiAssociatedResponse(radioResponseInfo2);
                    return;
                case 3:
                    hwParcel.enforceInterface(IMwiRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo3 = new RadioResponseInfo();
                    radioResponseInfo3.readFromParcel(hwParcel);
                    setWfcConfigResponse(radioResponseInfo3);
                    return;
                case 4:
                    hwParcel.enforceInterface(IMwiRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo4 = new RadioResponseInfo();
                    radioResponseInfo4.readFromParcel(hwParcel);
                    setWifiSignalLevelResponse(radioResponseInfo4);
                    return;
                case 5:
                    hwParcel.enforceInterface(IMwiRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo5 = new RadioResponseInfo();
                    radioResponseInfo5.readFromParcel(hwParcel);
                    setWifiIpAddressResponse(radioResponseInfo5);
                    return;
                case 6:
                    hwParcel.enforceInterface(IMwiRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo6 = new RadioResponseInfo();
                    radioResponseInfo6.readFromParcel(hwParcel);
                    setLocationInfoResponse(radioResponseInfo6);
                    return;
                case 7:
                    hwParcel.enforceInterface(IMwiRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo7 = new RadioResponseInfo();
                    radioResponseInfo7.readFromParcel(hwParcel);
                    setEmergencyAddressIdResponse(radioResponseInfo7);
                    return;
                case 8:
                    hwParcel.enforceInterface(IMwiRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo8 = new RadioResponseInfo();
                    radioResponseInfo8.readFromParcel(hwParcel);
                    setNattKeepAliveStatusResponse(radioResponseInfo8);
                    return;
                case 9:
                    hwParcel.enforceInterface(IMwiRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo9 = new RadioResponseInfo();
                    radioResponseInfo9.readFromParcel(hwParcel);
                    setWifiPingResultResponse(radioResponseInfo9);
                    return;
                case 10:
                    hwParcel.enforceInterface(IMwiRadioResponse.kInterfaceName);
                    RadioResponseInfo radioResponseInfo10 = new RadioResponseInfo();
                    radioResponseInfo10.readFromParcel(hwParcel);
                    notifyEPDGScreenStateResponse(radioResponseInfo10);
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
        public final void ping() {
        }

        public IHwInterface queryLocalInterface(String str) {
            if (IMwiRadioResponse.kInterfaceName.equals(str)) {
                return this;
            }
            return null;
        }

        public void registerAsService(String str) throws RemoteException {
            registerService(str);
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
        public final void setHALInstrumentation() {
        }

        public String toString() {
            return interfaceDescriptor() + "@Stub";
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
        public final boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) {
            return true;
        }
    }

    static IMwiRadioResponse asInterface(IHwBinder iHwBinder) {
        if (iHwBinder == null) {
            return null;
        }
        IMwiRadioResponse iMwiRadioResponseQueryLocalInterface = iHwBinder.queryLocalInterface(kInterfaceName);
        if (iMwiRadioResponseQueryLocalInterface != null && (iMwiRadioResponseQueryLocalInterface instanceof IMwiRadioResponse)) {
            return iMwiRadioResponseQueryLocalInterface;
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

    static IMwiRadioResponse castFrom(IHwInterface iHwInterface) {
        if (iHwInterface == null) {
            return null;
        }
        return asInterface(iHwInterface.asBinder());
    }

    static IMwiRadioResponse getService() throws RemoteException {
        return getService("default");
    }

    static IMwiRadioResponse getService(String str) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str));
    }

    static IMwiRadioResponse getService(String str, boolean z) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str, z));
    }

    static IMwiRadioResponse getService(boolean z) throws RemoteException {
        return getService("default", z);
    }

    IHwBinder asBinder();

    void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) throws RemoteException;

    DebugInfo getDebugInfo() throws RemoteException;

    ArrayList<byte[]> getHashChain() throws RemoteException;

    ArrayList<String> interfaceChain() throws RemoteException;

    String interfaceDescriptor() throws RemoteException;

    boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException;

    void notifyEPDGScreenStateResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void notifySyspropsChanged() throws RemoteException;

    void ping() throws RemoteException;

    void setEmergencyAddressIdResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setHALInstrumentation() throws RemoteException;

    void setLocationInfoResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setNattKeepAliveStatusResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setWfcConfigResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setWifiAssociatedResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setWifiEnabledResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setWifiIpAddressResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setWifiPingResultResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    void setWifiSignalLevelResponse(RadioResponseInfo radioResponseInfo) throws RemoteException;

    boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException;
}
