package vendor.mediatek.hardware.mtkradioex.V2_0;

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
public interface IEmRadioIndication extends IBase {
    public static final String kInterfaceName = "vendor.mediatek.hardware.mtkradioex@2.0::IEmRadioIndication";

    public static final class Proxy implements IEmRadioIndication {
        private IHwBinder mRemote;

        public Proxy(IHwBinder iHwBinder) {
            Objects.requireNonNull(iHwBinder);
            this.mRemote = iHwBinder;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication, android.hidl.base.V1_0.IBase
        public IHwBinder asBinder() {
            return this.mRemote;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication, android.hidl.base.V1_0.IBase
        public boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException {
            return this.mRemote.linkToDeath(deathRecipient, j);
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication
        public void networkInfoInd(int i, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IEmRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(2, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication
        public void oemHookRaw(int i, ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IEmRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt8Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(3, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication
        public void onTxPowerIndication(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IEmRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(1, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication, android.hidl.base.V1_0.IBase
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
                return "[class or subclass of vendor.mediatek.hardware.mtkradioex@2.0::IEmRadioIndication]@Proxy";
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication, android.hidl.base.V1_0.IBase
        public boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException {
            return this.mRemote.unlinkToDeath(deathRecipient);
        }
    }

    public static abstract class Stub extends HwBinder implements IEmRadioIndication {
        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication, android.hidl.base.V1_0.IBase
        public IHwBinder asBinder() {
            return this;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication, android.hidl.base.V1_0.IBase
        public void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) {
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication, android.hidl.base.V1_0.IBase
        public final DebugInfo getDebugInfo() {
            DebugInfo debugInfo = new DebugInfo();
            debugInfo.pid = HidlSupport.getPidIfSharable();
            debugInfo.ptr = 0L;
            debugInfo.arch = 0;
            return debugInfo;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication, android.hidl.base.V1_0.IBase
        public final ArrayList<byte[]> getHashChain() {
            return new ArrayList<>(Arrays.asList(new byte[]{120, 65, 124, -37, 41, 78, -47, 42, 87, -71, 97, -26, -11, -90, -44, -70, -119, 29, 24, -113, 35, -21, -31, -70, 93, 58, -103, -19, 84, -81, 25, -109}, new byte[]{-20, 127, -41, -98, -48, 45, -6, -123, -68, 73, -108, 38, -83, -82, 62, -66, 35, -17, 5, 36, -13, -51, 105, 87, 19, -109, 36, -72, 59, 24, -54, 76}));
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication, android.hidl.base.V1_0.IBase
        public final ArrayList<String> interfaceChain() {
            return new ArrayList<>(Arrays.asList(IEmRadioIndication.kInterfaceName, IBase.kInterfaceName));
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication, android.hidl.base.V1_0.IBase
        public final String interfaceDescriptor() {
            return IEmRadioIndication.kInterfaceName;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication, android.hidl.base.V1_0.IBase
        public final boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) {
            return true;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication, android.hidl.base.V1_0.IBase
        public final void notifySyspropsChanged() {
            HwBinder.enableInstrumentation();
        }

        public void onTransact(int i, HwParcel hwParcel, HwParcel hwParcel2, int i2) throws RemoteException {
            if (i == 1) {
                hwParcel.enforceInterface(IEmRadioIndication.kInterfaceName);
                onTxPowerIndication(hwParcel.readInt32(), hwParcel.readInt32Vector());
                return;
            }
            if (i == 2) {
                hwParcel.enforceInterface(IEmRadioIndication.kInterfaceName);
                networkInfoInd(hwParcel.readInt32(), hwParcel.readStringVector());
                return;
            }
            if (i == 3) {
                hwParcel.enforceInterface(IEmRadioIndication.kInterfaceName);
                oemHookRaw(hwParcel.readInt32(), hwParcel.readInt8Vector());
                return;
            }
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication, android.hidl.base.V1_0.IBase
        public final void ping() {
        }

        public IHwInterface queryLocalInterface(String str) {
            if (IEmRadioIndication.kInterfaceName.equals(str)) {
                return this;
            }
            return null;
        }

        public void registerAsService(String str) throws RemoteException {
            registerService(str);
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication, android.hidl.base.V1_0.IBase
        public final void setHALInstrumentation() {
        }

        public String toString() {
            return interfaceDescriptor() + "@Stub";
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication, android.hidl.base.V1_0.IBase
        public final boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) {
            return true;
        }
    }

    static IEmRadioIndication asInterface(IHwBinder iHwBinder) {
        if (iHwBinder == null) {
            return null;
        }
        IHwInterface iHwInterfaceQueryLocalInterface = iHwBinder.queryLocalInterface(kInterfaceName);
        if (iHwInterfaceQueryLocalInterface != null && (iHwInterfaceQueryLocalInterface instanceof IEmRadioIndication)) {
            return (IEmRadioIndication) iHwInterfaceQueryLocalInterface;
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

    static IEmRadioIndication castFrom(IHwInterface iHwInterface) {
        if (iHwInterface == null) {
            return null;
        }
        return asInterface(iHwInterface.asBinder());
    }

    static IEmRadioIndication getService() throws RemoteException {
        return getService("default");
    }

    static IEmRadioIndication getService(String str) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str));
    }

    static IEmRadioIndication getService(String str, boolean z) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str, z));
    }

    static IEmRadioIndication getService(boolean z) throws RemoteException {
        return getService("default", z);
    }

    @Override // android.hidl.base.V1_0.IBase
    IHwBinder asBinder();

    @Override // android.hidl.base.V1_0.IBase
    void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) throws RemoteException;

    @Override // android.hidl.base.V1_0.IBase
    DebugInfo getDebugInfo() throws RemoteException;

    @Override // android.hidl.base.V1_0.IBase
    ArrayList<byte[]> getHashChain() throws RemoteException;

    @Override // android.hidl.base.V1_0.IBase
    ArrayList<String> interfaceChain() throws RemoteException;

    @Override // android.hidl.base.V1_0.IBase
    String interfaceDescriptor() throws RemoteException;

    @Override // android.hidl.base.V1_0.IBase
    boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException;

    void networkInfoInd(int i, ArrayList<String> arrayList) throws RemoteException;

    @Override // android.hidl.base.V1_0.IBase
    void notifySyspropsChanged() throws RemoteException;

    void oemHookRaw(int i, ArrayList<Byte> arrayList) throws RemoteException;

    void onTxPowerIndication(int i, ArrayList<Integer> arrayList) throws RemoteException;

    @Override // android.hidl.base.V1_0.IBase
    void ping() throws RemoteException;

    @Override // android.hidl.base.V1_0.IBase
    void setHALInstrumentation() throws RemoteException;

    @Override // android.hidl.base.V1_0.IBase
    boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException;
}
