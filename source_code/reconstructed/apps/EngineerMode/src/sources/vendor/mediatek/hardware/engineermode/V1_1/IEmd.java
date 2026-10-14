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
import android.support.v4.view.MotionEventCompat;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Objects;

/* JADX INFO: loaded from: classes3.dex */
public interface IEmd extends vendor.mediatek.hardware.engineermode.V1_0.IEmd {
    public static final String kInterfaceName = "vendor.mediatek.hardware.engineermode@1.1::IEmd";

    public static final class Proxy implements IEmd {
        private IHwBinder mRemote;

        public Proxy(IHwBinder iHwBinder) {
            Objects.requireNonNull(iHwBinder);
            this.mRemote = iHwBinder;
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmd, vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
        public IHwBinder asBinder() {
            return this.mRemote;
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public int btDoTest(int i, int i2, int i3, int i4, int i5, int i6, int i7) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            hwParcel.writeInt32(i5);
            hwParcel.writeInt32(i6);
            hwParcel.writeInt32(i7);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(19, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readInt32();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public ArrayList<Integer> btEndNoSigRxTest() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(22, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readInt32Vector();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public ArrayList<Byte> btHciCommandRun(ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeInt8Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(20, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readInt8Vector();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public int btInit() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(17, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readInt32();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean btIsBLEEnhancedSupport() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(16, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public int btIsBLESupport() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(15, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readInt32();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public int btIsComboSupport() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(23, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readInt32();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public int btPollingStart() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(24, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readInt32();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public int btPollingStop() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(25, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readInt32();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean btStartNoSigRxTest(int i, int i2, int i3, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(21, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public int btStartRelayer(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(13, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readInt32();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public int btStopRelayer() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(14, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readInt32();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public int btUninit() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(18, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readInt32();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean clearItemsforRsc() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(44, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmd, vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean genMdLogFilter(String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(35, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmd, vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean getFilePathListWithCallBack(String str, vendor.mediatek.hardware.engineermode.V1_0.IEmCallback iEmCallback) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            hwParcel.writeStrongBinder(iEmCallback == null ? null : iEmCallback.asBinder());
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(45, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmd, vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmd, vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmd, vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmd, vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
        public boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException {
            return this.mRemote.linkToDeath(deathRecipient, j);
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmd, vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmd, vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean sendToServer(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(2, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean sendToServerWithCallBack(String str, vendor.mediatek.hardware.engineermode.V1_0.IEmCallback iEmCallback) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            hwParcel.writeStrongBinder(iEmCallback == null ? null : iEmCallback.asBinder());
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(3, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setBypassDis(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(41, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setBypassEn(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(40, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setBypassService(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(42, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public void setCallback(vendor.mediatek.hardware.engineermode.V1_0.IEmCallback iEmCallback) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeStrongBinder(iEmCallback == null ? null : iEmCallback.asBinder());
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(1, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setCtIREngMode(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(5, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setDisableC2kCap(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(9, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setDsbpSupport(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(11, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmd
        public boolean setEmConfigure(String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IEmd.kInterfaceName);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(46, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setEmUsbType(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(39, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setEmUsbValue(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(38, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmd, vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setImsTestMode(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(10, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setMdResetDelay(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(26, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setModemWarningEnable(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(34, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setMoms(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(43, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setOmxCoreLogEnable(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(32, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setOmxVdecLogEnable(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(29, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setOmxVencLogEnable(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(28, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setPreferGprsMode(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(7, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setRadioCapabilitySwitchEnable(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(8, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setSmsFormat(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(4, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setSvpLogEnable(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(31, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setTestSimCardType(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(6, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setUsbOtgSwitch(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(37, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setUsbPort(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(36, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setVdecDriverLogEnable(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(30, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setVencDriverLogEnable(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(33, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setVolteMalPctid(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(12, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd
        public boolean setWcnCoreDump(String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(27, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readBool();
            } finally {
                hwParcel2.release();
            }
        }

        public String toString() {
            try {
                return interfaceDescriptor() + "@Proxy";
            } catch (RemoteException e) {
                return "[class or subclass of vendor.mediatek.hardware.engineermode@1.1::IEmd]@Proxy";
            }
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmd, vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
        public boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException {
            return this.mRemote.unlinkToDeath(deathRecipient);
        }
    }

    public static abstract class Stub extends HwBinder implements IEmd {
        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmd, vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
        public IHwBinder asBinder() {
            return this;
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmd, vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
        public void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) {
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmd, vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
        public final DebugInfo getDebugInfo() {
            DebugInfo debugInfo = new DebugInfo();
            debugInfo.pid = HidlSupport.getPidIfSharable();
            debugInfo.ptr = 0L;
            debugInfo.arch = 0;
            return debugInfo;
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmd, vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
        public final ArrayList<byte[]> getHashChain() {
            return new ArrayList<>(Arrays.asList(new byte[]{99, -93, 35, -85, -5, -25, 48, 13, -112, -127, 102, -26, 71, 112, 32, -43, 73, 58, 120, -17, -118, -84, 123, -14, -27, -42, -96, 67, -65, -69, -92, -113}, new byte[]{-66, -27, 18, -107, 121, -115, -5, -113, -11, 28, 119, -105, 121, -100, 105, -29, 86, 105, -79, 32, -9, 25, 54, -117, -93, -97, -29, -30, -10, -48, 79, -100}, new byte[]{-20, 127, -41, -98, -48, 45, -6, -123, -68, 73, -108, 38, -83, -82, 62, -66, 35, -17, 5, 36, -13, -51, 105, 87, 19, -109, 36, -72, 59, 24, -54, 76}));
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmd, vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
        public final ArrayList<String> interfaceChain() {
            return new ArrayList<>(Arrays.asList(IEmd.kInterfaceName, vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName, IBase.kInterfaceName));
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmd, vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
        public final String interfaceDescriptor() {
            return IEmd.kInterfaceName;
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmd, vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
        public final boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) {
            return true;
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmd, vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
        public final void notifySyspropsChanged() {
            HwBinder.enableInstrumentation();
        }

        public void onTransact(int i, HwParcel hwParcel, HwParcel hwParcel2, int i2) throws RemoteException {
            switch (i) {
                case 1:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    setCallback(vendor.mediatek.hardware.engineermode.V1_0.IEmCallback.asInterface(hwParcel.readStrongBinder()));
                    hwParcel2.writeStatus(0);
                    hwParcel2.send();
                    return;
                case 2:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean zSendToServer = sendToServer(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(zSendToServer);
                    hwParcel2.send();
                    return;
                case 3:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean zSendToServerWithCallBack = sendToServerWithCallBack(hwParcel.readString(), vendor.mediatek.hardware.engineermode.V1_0.IEmCallback.asInterface(hwParcel.readStrongBinder()));
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(zSendToServerWithCallBack);
                    hwParcel2.send();
                    return;
                case 4:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean smsFormat = setSmsFormat(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(smsFormat);
                    hwParcel2.send();
                    return;
                case 5:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean ctIREngMode = setCtIREngMode(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(ctIREngMode);
                    hwParcel2.send();
                    return;
                case 6:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean testSimCardType = setTestSimCardType(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(testSimCardType);
                    hwParcel2.send();
                    return;
                case 7:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean preferGprsMode = setPreferGprsMode(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(preferGprsMode);
                    hwParcel2.send();
                    return;
                case 8:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean radioCapabilitySwitchEnable = setRadioCapabilitySwitchEnable(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(radioCapabilitySwitchEnable);
                    hwParcel2.send();
                    return;
                case 9:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean disableC2kCap = setDisableC2kCap(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(disableC2kCap);
                    hwParcel2.send();
                    return;
                case 10:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean imsTestMode = setImsTestMode(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(imsTestMode);
                    hwParcel2.send();
                    return;
                case 11:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean dsbpSupport = setDsbpSupport(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(dsbpSupport);
                    hwParcel2.send();
                    return;
                case 12:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean volteMalPctid = setVolteMalPctid(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(volteMalPctid);
                    hwParcel2.send();
                    return;
                case 13:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    int iBtStartRelayer = btStartRelayer(hwParcel.readInt32(), hwParcel.readInt32());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeInt32(iBtStartRelayer);
                    hwParcel2.send();
                    return;
                case 14:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    int iBtStopRelayer = btStopRelayer();
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeInt32(iBtStopRelayer);
                    hwParcel2.send();
                    return;
                case 15:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    int iBtIsBLESupport = btIsBLESupport();
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeInt32(iBtIsBLESupport);
                    hwParcel2.send();
                    return;
                case 16:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean zBtIsBLEEnhancedSupport = btIsBLEEnhancedSupport();
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(zBtIsBLEEnhancedSupport);
                    hwParcel2.send();
                    return;
                case 17:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    int iBtInit = btInit();
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeInt32(iBtInit);
                    hwParcel2.send();
                    return;
                case 18:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    int iBtUninit = btUninit();
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeInt32(iBtUninit);
                    hwParcel2.send();
                    return;
                case 19:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    int iBtDoTest = btDoTest(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeInt32(iBtDoTest);
                    hwParcel2.send();
                    return;
                case 20:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    ArrayList<Byte> arrayListBtHciCommandRun = btHciCommandRun(hwParcel.readInt8Vector());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeInt8Vector(arrayListBtHciCommandRun);
                    hwParcel2.send();
                    return;
                case 21:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean zBtStartNoSigRxTest = btStartNoSigRxTest(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(zBtStartNoSigRxTest);
                    hwParcel2.send();
                    return;
                case 22:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    ArrayList<Integer> arrayListBtEndNoSigRxTest = btEndNoSigRxTest();
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeInt32Vector(arrayListBtEndNoSigRxTest);
                    hwParcel2.send();
                    return;
                case 23:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    int iBtIsComboSupport = btIsComboSupport();
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeInt32(iBtIsComboSupport);
                    hwParcel2.send();
                    return;
                case 24:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    int iBtPollingStart = btPollingStart();
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeInt32(iBtPollingStart);
                    hwParcel2.send();
                    return;
                case 25:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    int iBtPollingStop = btPollingStop();
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeInt32(iBtPollingStop);
                    hwParcel2.send();
                    return;
                case 26:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean mdResetDelay = setMdResetDelay(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(mdResetDelay);
                    hwParcel2.send();
                    return;
                case 27:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean wcnCoreDump = setWcnCoreDump(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(wcnCoreDump);
                    hwParcel2.send();
                    return;
                case 28:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean omxVencLogEnable = setOmxVencLogEnable(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(omxVencLogEnable);
                    hwParcel2.send();
                    return;
                case 29:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean omxVdecLogEnable = setOmxVdecLogEnable(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(omxVdecLogEnable);
                    hwParcel2.send();
                    return;
                case 30:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean vdecDriverLogEnable = setVdecDriverLogEnable(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(vdecDriverLogEnable);
                    hwParcel2.send();
                    return;
                case 31:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean svpLogEnable = setSvpLogEnable(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(svpLogEnable);
                    hwParcel2.send();
                    return;
                case 32:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean omxCoreLogEnable = setOmxCoreLogEnable(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(omxCoreLogEnable);
                    hwParcel2.send();
                    return;
                case 33:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean vencDriverLogEnable = setVencDriverLogEnable(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(vencDriverLogEnable);
                    hwParcel2.send();
                    return;
                case 34:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean modemWarningEnable = setModemWarningEnable(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(modemWarningEnable);
                    hwParcel2.send();
                    return;
                case 35:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean zGenMdLogFilter = genMdLogFilter(hwParcel.readString(), hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(zGenMdLogFilter);
                    hwParcel2.send();
                    return;
                case 36:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean usbPort = setUsbPort(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(usbPort);
                    hwParcel2.send();
                    return;
                case 37:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean usbOtgSwitch = setUsbOtgSwitch(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(usbOtgSwitch);
                    hwParcel2.send();
                    return;
                case 38:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean emUsbValue = setEmUsbValue(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(emUsbValue);
                    hwParcel2.send();
                    return;
                case 39:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean emUsbType = setEmUsbType(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(emUsbType);
                    hwParcel2.send();
                    return;
                case 40:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean bypassEn = setBypassEn(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(bypassEn);
                    hwParcel2.send();
                    return;
                case MotionEventCompat.AXIS_GENERIC_10 /* 41 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean bypassDis = setBypassDis(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(bypassDis);
                    hwParcel2.send();
                    return;
                case MotionEventCompat.AXIS_GENERIC_11 /* 42 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean bypassService = setBypassService(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(bypassService);
                    hwParcel2.send();
                    return;
                case MotionEventCompat.AXIS_GENERIC_12 /* 43 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean moms = setMoms(hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(moms);
                    hwParcel2.send();
                    return;
                case 44:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean zClearItemsforRsc = clearItemsforRsc();
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(zClearItemsforRsc);
                    hwParcel2.send();
                    return;
                case MotionEventCompat.AXIS_GENERIC_14 /* 45 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.engineermode.V1_0.IEmd.kInterfaceName);
                    boolean filePathListWithCallBack = getFilePathListWithCallBack(hwParcel.readString(), vendor.mediatek.hardware.engineermode.V1_0.IEmCallback.asInterface(hwParcel.readStrongBinder()));
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(filePathListWithCallBack);
                    hwParcel2.send();
                    return;
                case MotionEventCompat.AXIS_GENERIC_15 /* 46 */:
                    hwParcel.enforceInterface(IEmd.kInterfaceName);
                    boolean emConfigure = setEmConfigure(hwParcel.readString(), hwParcel.readString());
                    hwParcel2.writeStatus(0);
                    hwParcel2.writeBool(emConfigure);
                    hwParcel2.send();
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

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmd, vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
        public final void ping() {
        }

        public IHwInterface queryLocalInterface(String str) {
            if (IEmd.kInterfaceName.equals(str)) {
                return this;
            }
            return null;
        }

        public void registerAsService(String str) throws RemoteException {
            registerService(str);
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmd, vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
        public final void setHALInstrumentation() {
        }

        public String toString() {
            return interfaceDescriptor() + "@Stub";
        }

        @Override // vendor.mediatek.hardware.engineermode.V1_1.IEmd, vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
        public final boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) {
            return true;
        }
    }

    static IEmd asInterface(IHwBinder iHwBinder) {
        if (iHwBinder == null) {
            return null;
        }
        IHwInterface iHwInterfaceQueryLocalInterface = iHwBinder.queryLocalInterface(kInterfaceName);
        if (iHwInterfaceQueryLocalInterface != null && (iHwInterfaceQueryLocalInterface instanceof IEmd)) {
            return (IEmd) iHwInterfaceQueryLocalInterface;
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

    static IEmd castFrom(IHwInterface iHwInterface) {
        if (iHwInterface == null) {
            return null;
        }
        return asInterface(iHwInterface.asBinder());
    }

    static IEmd getService() throws RemoteException {
        return getService("default");
    }

    static IEmd getService(String str) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str));
    }

    static IEmd getService(String str, boolean z) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str, z));
    }

    static IEmd getService(boolean z) throws RemoteException {
        return getService("default", z);
    }

    @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
    IHwBinder asBinder();

    @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
    void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) throws RemoteException;

    @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
    DebugInfo getDebugInfo() throws RemoteException;

    @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
    ArrayList<byte[]> getHashChain() throws RemoteException;

    @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
    ArrayList<String> interfaceChain() throws RemoteException;

    @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
    String interfaceDescriptor() throws RemoteException;

    @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
    boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException;

    @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
    void notifySyspropsChanged() throws RemoteException;

    @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
    void ping() throws RemoteException;

    boolean setEmConfigure(String str, String str2) throws RemoteException;

    @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
    void setHALInstrumentation() throws RemoteException;

    @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmd, android.hidl.base.V1_0.IBase
    boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException;
}
