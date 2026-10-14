package vendor.mediatek.hardware.engineermode.V1_1;

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

/* JADX INFO: loaded from: classes3.dex */
public interface IEmCallback extends vendor.mediatek.hardware.engineermode.V1_0.IEmCallback {
    public static final String kInterfaceName = "vendor.mediatek.hardware.engineermode@1.1::IEmCallback";

    public static final class Proxy implements IEmCallback {
        private IHwBinder mRemote;

        public Proxy(IHwBinder iHwBinder) {
            Objects.requireNonNull(iHwBinder);
            this.mRemote = iHwBinder;
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmCallback, vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
        public IHwBinder asBinder() {
            return this.mRemote;
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmCallback
        public boolean callbackToClient(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmCallback.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(1, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmCallback, vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
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

        public final boolean equals(Object obj) {
            return HidlSupport.interfacesEqual(this, obj);
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmCallback, vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmCallback, vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
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

        public final int hashCode() {
            return asBinder().hashCode();
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmCallback, vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmCallback, vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmCallback, vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
        public boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException {
            return this.mRemote.linkToDeath(deathRecipient, j);
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmCallback, vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmCallback, vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmCallback, vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
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

        public String toString() {
            try {
                return interfaceDescriptor() + "@Proxy";
            } catch (RemoteException e) {
                return "[class or subclass of vendor.mediatek.hardware.engineermode@1.1::IEmCallback]@Proxy";
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmCallback, vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
        public boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException {
            return this.mRemote.unlinkToDeath(deathRecipient);
        }
    }

    public static abstract class Stub extends HwBinder implements IEmCallback {
        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmCallback, vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
        public IHwBinder asBinder() {
            return this;
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmCallback, vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
        public void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) {
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmCallback, vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
        public final DebugInfo getDebugInfo() {
            DebugInfo debugInfo = new DebugInfo();
            debugInfo.pid = HidlSupport.getPidIfSharable();
            debugInfo.ptr = 0L;
            debugInfo.arch = 0;
            return debugInfo;
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmCallback, vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
        public final ArrayList<byte[]> getHashChain() {
            return new ArrayList<>(Arrays.asList(new byte[]{14, 83, 28, -4, 104, 98, -79, -83, 71, 92, -81, 120, 64, 84, 28, 92, 58, 73, -62, -33, -63, 120, 64, 9, -60, 101, -42, 36, 34, 68, -3, -34}, new byte[]{-27, 112, 36, 113, -82, 20, -75, -113, 38, -39, 101, -23, -128, -21, 119, 117, -10, 40, -108, 42, 29, -83, 7, -109, 100, 101, -90, 100, -55, 73, 93, -105}, new byte[]{-20, 127, -41, -98, -48, 45, -6, -123, -68, 73, -108, 38, -83, -82, 62, -66, 35, -17, 5, 36, -13, -51, 105, 87, 19, -109, 36, -72, 59, 24, -54, 76}));
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmCallback, vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
        public final ArrayList<String> interfaceChain() {
            return new ArrayList<>(Arrays.asList(IEmCallback.kInterfaceName, vendor.mediatek.hardware.engineermode.V1_0.IEmCallback.kInterfaceName, IBase.kInterfaceName));
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmCallback, vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
        public final String interfaceDescriptor() {
            return IEmCallback.kInterfaceName;
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmCallback, vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
        public final boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) {
            return true;
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmCallback, vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
        public final void notifySyspropsChanged() {
            HwBinder.enableInstrumentation();
        }

        public void onTransact(int i, HwParcel hwParcel, HwParcel hwParcel2, int i2) throws RemoteException {
            switch (i) {
                case 1:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmCallback.kInterfaceName);
                    boolean zCallbackToClient = callbackToClient(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(zCallbackToClient);
                    hwParcel2.send();
                    return;
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

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmCallback, vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
        public final void ping() {
        }

        public IHwInterface queryLocalInterface(String str) {
            if (IEmCallback.kInterfaceName.equals(str)) {
                return this;
            }
            return null;
        }

        public void registerAsService(String str) throws RemoteException {
            registerService(str);
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmCallback, vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
        public final void setHALInstrumentation() {
        }

        public String toString() {
            return interfaceDescriptor() + "@Stub";
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmCallback, vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
        public final boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) {
            return true;
        }
    }

    static IEmCallback asInterface(IHwBinder iHwBinder) {
        if (iHwBinder == null) {
            return null;
        }
        IHwInterface iHwInterfaceQueryLocalInterface = iHwBinder.queryLocalInterface(kInterfaceName);
        if (iHwInterfaceQueryLocalInterface != null && (iHwInterfaceQueryLocalInterface instanceof IEmCallback)) {
            return (IEmCallback) iHwInterfaceQueryLocalInterface;
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

    static IEmCallback castFrom(IHwInterface iHwInterface) {
        if (iHwInterface == null) {
            return null;
        }
        return asInterface(iHwInterface.asBinder());
    }

    static IEmCallback getService() throws RemoteException {
        return getService("default");
    }

    static IEmCallback getService(String str) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str));
    }

    static IEmCallback getService(String str, boolean z) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str, z));
    }

    static IEmCallback getService(boolean z) throws RemoteException {
        return getService("default", z);
    }

    @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
    IHwBinder asBinder();

    @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
    void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) throws RemoteException;

    @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
    DebugInfo getDebugInfo() throws RemoteException;

    @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
    ArrayList<byte[]> getHashChain() throws RemoteException;

    @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
    ArrayList<String> interfaceChain() throws RemoteException;

    @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
    String interfaceDescriptor() throws RemoteException;

    @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
    boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException;

    @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
    void notifySyspropsChanged() throws RemoteException;

    @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
    void ping() throws RemoteException;

    @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
    void setHALInstrumentation() throws RemoteException;

    @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmCallback, android.hidl.base.V1_0.IBase
    boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException;
}
