package vendor.mediatek.hardware.radio.V3_1;

import android.hardware.radio.V1_0.ISapCallback;
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
public interface ISap extends vendor.mediatek.hardware.radio.V3_0.ISap {
    public static final String kInterfaceName = "vendor.mediatek.hardware.radio@3.1::ISap";

    public static final class Proxy implements ISap {
        private IHwBinder mRemote;

        public Proxy(IHwBinder iHwBinder) {
            Objects.requireNonNull(iHwBinder);
            this.mRemote = iHwBinder;
        }

        @Override // android.hardware.radio.V1_0.ISap
        public void apduReq(int i, int i2, ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.ISap.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt8Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(4, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_1.ISap, vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
        public IHwBinder asBinder() {
            return this.mRemote;
        }

        @Override // android.hardware.radio.V1_0.ISap
        public void connectReq(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.ISap.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(2, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_1.ISap, vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
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

        @Override // android.hardware.radio.V1_0.ISap
        public void disconnectReq(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.ISap.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(3, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public final boolean equals(Object obj) {
            return HidlSupport.interfacesEqual(this, obj);
        }

        @Override // vendor.mediatek.hardware.radio.V3_1.ISap, vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.radio.V3_1.ISap, vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.radio.V3_1.ISap, vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.radio.V3_1.ISap, vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.radio.V3_1.ISap, vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
        public boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException {
            return this.mRemote.linkToDeath(deathRecipient, j);
        }

        @Override // vendor.mediatek.hardware.radio.V3_1.ISap, vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.radio.V3_1.ISap, vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
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

        @Override // android.hardware.radio.V1_0.ISap
        public void powerReq(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.ISap.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(6, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.ISap
        public void resetSimReq(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.ISap.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(7, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.ISap
        public void setCallback(ISapCallback iSapCallback) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.ISap.kInterfaceName);
            hwParcel.writeStrongBinder(iSapCallback == null ? null : iSapCallback.asBinder());
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(1, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_1.ISap, vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
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

        @Override // android.hardware.radio.V1_0.ISap
        public void setTransferProtocolReq(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.ISap.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(9, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public String toString() {
            try {
                return interfaceDescriptor() + "@Proxy";
            } catch (RemoteException e) {
                return "[class or subclass of vendor.mediatek.hardware.radio@3.1::ISap]@Proxy";
            }
        }

        @Override // android.hardware.radio.V1_0.ISap
        public void transferAtrReq(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.ISap.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(5, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.ISap
        public void transferCardReaderStatusReq(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.ISap.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(8, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_1.ISap, vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
        public boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException {
            return this.mRemote.unlinkToDeath(deathRecipient);
        }
    }

    public static abstract class Stub extends HwBinder implements ISap {
        @Override // vendor.mediatek.hardware.radio.V3_1.ISap, vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
        public IHwBinder asBinder() {
            return this;
        }

        @Override // vendor.mediatek.hardware.radio.V3_1.ISap, vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
        public void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) {
        }

        @Override // vendor.mediatek.hardware.radio.V3_1.ISap, vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
        public final DebugInfo getDebugInfo() {
            DebugInfo debugInfo = new DebugInfo();
            debugInfo.pid = HidlSupport.getPidIfSharable();
            debugInfo.ptr = 0L;
            debugInfo.arch = 0;
            return debugInfo;
        }

        @Override // vendor.mediatek.hardware.radio.V3_1.ISap, vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
        public final ArrayList<byte[]> getHashChain() {
            return new ArrayList<>(Arrays.asList(new byte[]{67, -67, 44, 88, -49, -70, 65, -28, 6, -55, 55, 92, 83, -69, -70, -112, -10, 31, 115, 59, -1, -65, -125, -49, -10, -118, 61, 106, -123, -77, -128, -117}, new byte[]{-103, -55, 62, 63, 48, 60, 92, 76, 8, -118, 32, -10, 91, -30, 71, -127, 106, 89, -65, 55, 10, 101, -58, 123, 57, 71, -23, 98, 105, -113, -2, -70}, new byte[]{45, -122, -110, -105, -108, 121, 94, 92, 112, -12, -3, -75, 7, 52, -123, -3, 5, -125, 92, -100, 111, 73, 97, 22, 104, 124, 61, -97, 50, -26, -33, 62}, new byte[]{-7, 108, -68, 89, -33, -31, 108, -115, 12, 42, 126, 6, -37, 36, -40, 115, -118, 99, 40, -74, -23, 15, 123, -114, 22, 64, -22, 43, 70, 0, -34, -67}, new byte[]{-34, 58, -71, -9, 59, 16, 115, -51, 103, 123, 25, -40, -122, -5, -110, 126, -109, -127, -77, 1, 97, -89, 4, 113, 45, 43, 48, -8, 117, -121, 63, 92}, new byte[]{-20, 127, -41, -98, -48, 45, -6, -123, -68, 73, -108, 38, -83, -82, 62, -66, 35, -17, 5, 36, -13, -51, 105, 87, 19, -109, 36, -72, 59, 24, -54, 76}));
        }

        @Override // vendor.mediatek.hardware.radio.V3_1.ISap, vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
        public final ArrayList<String> interfaceChain() {
            return new ArrayList<>(Arrays.asList(ISap.kInterfaceName, vendor.mediatek.hardware.radio.V3_0.ISap.kInterfaceName, android.hardware.radio.V1_2.ISap.kInterfaceName, android.hardware.radio.V1_1.ISap.kInterfaceName, android.hardware.radio.V1_0.ISap.kInterfaceName, IBase.kInterfaceName));
        }

        @Override // vendor.mediatek.hardware.radio.V3_1.ISap, vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
        public final String interfaceDescriptor() {
            return ISap.kInterfaceName;
        }

        @Override // vendor.mediatek.hardware.radio.V3_1.ISap, vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
        public final boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) {
            return true;
        }

        @Override // vendor.mediatek.hardware.radio.V3_1.ISap, vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
        public final void notifySyspropsChanged() {
            HwBinder.enableInstrumentation();
        }

        public void onTransact(int i, HwParcel hwParcel, HwParcel hwParcel2, int i2) throws RemoteException {
            switch (i) {
                case 1:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.ISap.kInterfaceName);
                    setCallback(ISapCallback.asInterface(hwParcel.readStrongBinder()));
                    hwParcel2.writeStatus(0);
                    hwParcel2.send();
                    return;
                case 2:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.ISap.kInterfaceName);
                    connectReq(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 3:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.ISap.kInterfaceName);
                    disconnectReq(hwParcel.readInt32());
                    return;
                case 4:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.ISap.kInterfaceName);
                    apduReq(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt8Vector());
                    return;
                case 5:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.ISap.kInterfaceName);
                    transferAtrReq(hwParcel.readInt32());
                    return;
                case 6:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.ISap.kInterfaceName);
                    powerReq(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 7:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.ISap.kInterfaceName);
                    resetSimReq(hwParcel.readInt32());
                    return;
                case 8:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.ISap.kInterfaceName);
                    transferCardReaderStatusReq(hwParcel.readInt32());
                    return;
                case 9:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.ISap.kInterfaceName);
                    setTransferProtocolReq(hwParcel.readInt32(), hwParcel.readInt32());
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

        @Override // vendor.mediatek.hardware.radio.V3_1.ISap, vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
        public final void ping() {
        }

        public IHwInterface queryLocalInterface(String str) {
            if (ISap.kInterfaceName.equals(str)) {
                return this;
            }
            return null;
        }

        public void registerAsService(String str) throws RemoteException {
            registerService(str);
        }

        @Override // vendor.mediatek.hardware.radio.V3_1.ISap, vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
        public final void setHALInstrumentation() {
        }

        public String toString() {
            return interfaceDescriptor() + "@Stub";
        }

        @Override // vendor.mediatek.hardware.radio.V3_1.ISap, vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
        public final boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) {
            return true;
        }
    }

    static ISap asInterface(IHwBinder iHwBinder) {
        if (iHwBinder == null) {
            return null;
        }
        IHwInterface iHwInterfaceQueryLocalInterface = iHwBinder.queryLocalInterface(kInterfaceName);
        if (iHwInterfaceQueryLocalInterface != null && (iHwInterfaceQueryLocalInterface instanceof ISap)) {
            return (ISap) iHwInterfaceQueryLocalInterface;
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

    static ISap castFrom(IHwInterface iHwInterface) {
        if (iHwInterface == null) {
            return null;
        }
        return asInterface(iHwInterface.asBinder());
    }

    static ISap getService() throws RemoteException {
        return getService("default");
    }

    static ISap getService(String str) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str));
    }

    static ISap getService(String str, boolean z) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str, z));
    }

    static ISap getService(boolean z) throws RemoteException {
        return getService("default", z);
    }

    @Override // vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
    IHwBinder asBinder();

    @Override // vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
    void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
    DebugInfo getDebugInfo() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
    ArrayList<byte[]> getHashChain() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
    ArrayList<String> interfaceChain() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
    String interfaceDescriptor() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
    boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
    void notifySyspropsChanged() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
    void ping() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
    void setHALInstrumentation() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_0.ISap, android.hardware.radio.V1_2.ISap, android.hardware.radio.V1_1.ISap, android.hardware.radio.V1_0.ISap, android.hidl.base.V1_0.IBase
    boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException;
}
