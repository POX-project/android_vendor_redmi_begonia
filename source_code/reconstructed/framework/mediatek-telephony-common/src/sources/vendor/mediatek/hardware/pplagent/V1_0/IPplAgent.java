package vendor.mediatek.hardware.pplagent.V1_0;

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
import com.mediatek.internal.telephony.ppl.PplControlData;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public interface IPplAgent extends IBase {
    public static final String kInterfaceName = "vendor.mediatek.hardware.pplagent@1.0::IPplAgent";

    public static final class Proxy implements IPplAgent {
        private IHwBinder mRemote;

        public Proxy(IHwBinder iHwBinder) {
            Objects.requireNonNull(iHwBinder);
            this.mRemote = iHwBinder;
        }

        @Override // vendor.mediatek.hardware.pplagent.V1_0.IPplAgent
        public IHwBinder asBinder() {
            return this.mRemote;
        }

        @Override // vendor.mediatek.hardware.pplagent.V1_0.IPplAgent
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

        @Override // vendor.mediatek.hardware.pplagent.V1_0.IPplAgent
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

        @Override // vendor.mediatek.hardware.pplagent.V1_0.IPplAgent
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

        @Override // vendor.mediatek.hardware.pplagent.V1_0.IPplAgent
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

        @Override // vendor.mediatek.hardware.pplagent.V1_0.IPplAgent
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

        @Override // vendor.mediatek.hardware.pplagent.V1_0.IPplAgent
        public boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException {
            return this.mRemote.linkToDeath(deathRecipient, j);
        }

        @Override // vendor.mediatek.hardware.pplagent.V1_0.IPplAgent
        public int needLock() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IPplAgent.kInterfaceName);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(3, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readInt32();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.pplagent.V1_0.IPplAgent
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

        @Override // vendor.mediatek.hardware.pplagent.V1_0.IPplAgent
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

        @Override // vendor.mediatek.hardware.pplagent.V1_0.IPplAgent
        public ArrayList<Byte> readControlData() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IPplAgent.kInterfaceName);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(1, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readInt8Vector();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.pplagent.V1_0.IPplAgent
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

        public String toString() {
            try {
                return interfaceDescriptor() + "@Proxy";
            } catch (RemoteException e) {
                return "[class or subclass of vendor.mediatek.hardware.pplagent@1.0::IPplAgent]@Proxy";
            }
        }

        @Override // vendor.mediatek.hardware.pplagent.V1_0.IPplAgent
        public boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException {
            return this.mRemote.unlinkToDeath(deathRecipient);
        }

        @Override // vendor.mediatek.hardware.pplagent.V1_0.IPplAgent
        public int writeControlData(ArrayList<Byte> arrayList, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IPplAgent.kInterfaceName);
            hwParcel.writeInt8Vector(arrayList);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(2, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readInt32();
            } finally {
                hwParcel2.release();
            }
        }
    }

    public static abstract class Stub extends HwBinder implements IPplAgent {
        @Override // vendor.mediatek.hardware.pplagent.V1_0.IPplAgent
        public IHwBinder asBinder() {
            return this;
        }

        @Override // vendor.mediatek.hardware.pplagent.V1_0.IPplAgent
        public void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) {
        }

        @Override // vendor.mediatek.hardware.pplagent.V1_0.IPplAgent
        public final DebugInfo getDebugInfo() {
            DebugInfo debugInfo = new DebugInfo();
            debugInfo.pid = HidlSupport.getPidIfSharable();
            debugInfo.ptr = 0L;
            debugInfo.arch = 0;
            return debugInfo;
        }

        @Override // vendor.mediatek.hardware.pplagent.V1_0.IPplAgent
        public final ArrayList<byte[]> getHashChain() {
            return new ArrayList<>(Arrays.asList(new byte[]{124, 107, -92, 112, BipUtils.TCP_STATUS_LISTEN, -4, -112, 63, 39, 74, -84, 36, -122, -119, 15, -80, 106, 53, -65, 78, 125, -26, 90, 12, -24, -20, -54, 111, -82, 120, PplControlData.STATUS_WIPE_REQUESTED, 92}, new byte[]{-20, 127, -41, -98, -48, 45, -6, -123, -68, 73, -108, 38, -83, -82, 62, -66, 35, -17, 5, 36, -13, -51, 105, 87, 19, -109, 36, -72, 59, 24, -54, 76}));
        }

        @Override // vendor.mediatek.hardware.pplagent.V1_0.IPplAgent
        public final ArrayList<String> interfaceChain() {
            return new ArrayList<>(Arrays.asList(IPplAgent.kInterfaceName, "android.hidl.base@1.0::IBase"));
        }

        @Override // vendor.mediatek.hardware.pplagent.V1_0.IPplAgent
        public final String interfaceDescriptor() {
            return IPplAgent.kInterfaceName;
        }

        @Override // vendor.mediatek.hardware.pplagent.V1_0.IPplAgent
        public final boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) {
            return true;
        }

        @Override // vendor.mediatek.hardware.pplagent.V1_0.IPplAgent
        public final void notifySyspropsChanged() {
            HwBinder.enableInstrumentation();
        }

        public void onTransact(int i, HwParcel hwParcel, HwParcel hwParcel2, int i2) throws RemoteException {
            if (i == 1) {
                hwParcel.enforceInterface(IPplAgent.kInterfaceName);
                ArrayList<Byte> controlData = readControlData();
                hwParcel2.writeStatus(0);
                hwParcel2.writeInt8Vector(controlData);
                hwParcel2.send();
                return;
            }
            if (i == 2) {
                hwParcel.enforceInterface(IPplAgent.kInterfaceName);
                int iWriteControlData = writeControlData(hwParcel.readInt8Vector(), hwParcel.readInt32());
                hwParcel2.writeStatus(0);
                hwParcel2.writeInt32(iWriteControlData);
                hwParcel2.send();
                return;
            }
            if (i == 3) {
                hwParcel.enforceInterface(IPplAgent.kInterfaceName);
                int iNeedLock = needLock();
                hwParcel2.writeStatus(0);
                hwParcel2.writeInt32(iNeedLock);
                hwParcel2.send();
                return;
            }
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

        @Override // vendor.mediatek.hardware.pplagent.V1_0.IPplAgent
        public final void ping() {
        }

        public IHwInterface queryLocalInterface(String str) {
            if (IPplAgent.kInterfaceName.equals(str)) {
                return this;
            }
            return null;
        }

        public void registerAsService(String str) throws RemoteException {
            registerService(str);
        }

        @Override // vendor.mediatek.hardware.pplagent.V1_0.IPplAgent
        public final void setHALInstrumentation() {
        }

        public String toString() {
            return interfaceDescriptor() + "@Stub";
        }

        @Override // vendor.mediatek.hardware.pplagent.V1_0.IPplAgent
        public final boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) {
            return true;
        }
    }

    static IPplAgent asInterface(IHwBinder iHwBinder) {
        if (iHwBinder == null) {
            return null;
        }
        IPplAgent iPplAgentQueryLocalInterface = iHwBinder.queryLocalInterface(kInterfaceName);
        if (iPplAgentQueryLocalInterface != null && (iPplAgentQueryLocalInterface instanceof IPplAgent)) {
            return iPplAgentQueryLocalInterface;
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

    static IPplAgent castFrom(IHwInterface iHwInterface) {
        if (iHwInterface == null) {
            return null;
        }
        return asInterface(iHwInterface.asBinder());
    }

    static IPplAgent getService() throws RemoteException {
        return getService("default");
    }

    static IPplAgent getService(String str) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str));
    }

    static IPplAgent getService(String str, boolean z) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str, z));
    }

    static IPplAgent getService(boolean z) throws RemoteException {
        return getService("default", z);
    }

    IHwBinder asBinder();

    void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) throws RemoteException;

    DebugInfo getDebugInfo() throws RemoteException;

    ArrayList<byte[]> getHashChain() throws RemoteException;

    ArrayList<String> interfaceChain() throws RemoteException;

    String interfaceDescriptor() throws RemoteException;

    boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException;

    int needLock() throws RemoteException;

    void notifySyspropsChanged() throws RemoteException;

    void ping() throws RemoteException;

    ArrayList<Byte> readControlData() throws RemoteException;

    void setHALInstrumentation() throws RemoteException;

    boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException;

    int writeControlData(ArrayList<Byte> arrayList, int i) throws RemoteException;
}
