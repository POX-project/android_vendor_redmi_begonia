package vendor.microtrust.hardware.soter.V1_0;

import android.os.HidlSupport;
import android.os.HwBinder;
import android.os.HwParcel;
import android.os.IHwBinder;
import android.os.IHwInterface;
import android.os.RemoteException;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public interface ISoter extends IHwInterface {

    public static final class Proxy implements ISoter {
        private IHwBinder mRemote;

        public Proxy(IHwBinder iHwBinder) {
            Objects.requireNonNull(iHwBinder);
            this.mRemote = iHwBinder;
        }

        public IHwBinder asBinder() {
            return this.mRemote;
        }

        public final boolean equals(Object obj) {
            return HidlSupport.interfacesEqual(this, obj);
        }

        @Override // vendor.microtrust.hardware.soter.V1_0.ISoter
        public void exportAskPublicKey(int i, exportAskPublicKeyCallback exportaskpublickeycallback) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.microtrust.hardware.soter@1.0::ISoter");
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(6, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                exportaskpublickeycallback.onValues(hwParcel2.readInt32(), hwParcel2.readInt8Vector(), hwParcel2.readInt32());
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.microtrust.hardware.soter.V1_0.ISoter
        public void exportAuthKeyPublicKey(int i, String str, exportAuthKeyPublicKeyCallback exportauthkeypublickeycallback) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.microtrust.hardware.soter@1.0::ISoter");
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(10, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                exportauthkeypublickeycallback.onValues(hwParcel2.readInt32(), hwParcel2.readInt8Vector(), hwParcel2.readInt32());
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.microtrust.hardware.soter.V1_0.ISoter
        public void finishSign(long j, finishSignCallback finishsigncallback) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.microtrust.hardware.soter@1.0::ISoter");
            hwParcel.writeInt64(j);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(14, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                finishsigncallback.onValues(hwParcel2.readInt32(), hwParcel2.readInt8Vector(), hwParcel2.readInt32());
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.microtrust.hardware.soter.V1_0.ISoter
        public int generateAskKeyPair(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.microtrust.hardware.soter@1.0::ISoter");
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(5, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readInt32();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.microtrust.hardware.soter.V1_0.ISoter
        public int generateAuthKeyPair(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.microtrust.hardware.soter@1.0::ISoter");
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(9, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readInt32();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.microtrust.hardware.soter.V1_0.ISoter
        public void getDeviceId(getDeviceIdCallback getdeviceidcallback) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.microtrust.hardware.soter@1.0::ISoter");
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(4, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                getdeviceidcallback.onValues(hwParcel2.readInt32(), hwParcel2.readInt8Vector(), hwParcel2.readInt32());
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.microtrust.hardware.soter.V1_0.ISoter
        public int hasAskAlready(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.microtrust.hardware.soter@1.0::ISoter");
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(8, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readInt32();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.microtrust.hardware.soter.V1_0.ISoter
        public int hasAuthKey(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.microtrust.hardware.soter@1.0::ISoter");
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(12, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readInt32();
            } finally {
                hwParcel2.release();
            }
        }

        public final int hashCode() {
            return asBinder().hashCode();
        }

        @Override // vendor.microtrust.hardware.soter.V1_0.ISoter
        public void initSign(int i, String str, String str2, initSignCallback initsigncallback) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.microtrust.hardware.soter@1.0::ISoter");
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(13, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                initsigncallback.onValues(hwParcel2.readInt32(), hwParcel2.readInt64());
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.microtrust.hardware.soter.V1_0.ISoter
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

        @Override // vendor.microtrust.hardware.soter.V1_0.ISoter
        public int removeAllUidKey(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.microtrust.hardware.soter@1.0::ISoter");
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(7, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readInt32();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.microtrust.hardware.soter.V1_0.ISoter
        public int removeAuthKey(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.microtrust.hardware.soter@1.0::ISoter");
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(11, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readInt32();
            } finally {
                hwParcel2.release();
            }
        }

        public String toString() {
            try {
                return interfaceDescriptor() + "@Proxy";
            } catch (RemoteException unused) {
                return "[class or subclass of vendor.microtrust.hardware.soter@1.0::ISoter]@Proxy";
            }
        }
    }

    @FunctionalInterface
    public interface exportAskPublicKeyCallback {
        void onValues(int i, ArrayList<Byte> arrayList, int i2);
    }

    @FunctionalInterface
    public interface exportAuthKeyPublicKeyCallback {
        void onValues(int i, ArrayList<Byte> arrayList, int i2);
    }

    @FunctionalInterface
    public interface finishSignCallback {
        void onValues(int i, ArrayList<Byte> arrayList, int i2);
    }

    @FunctionalInterface
    public interface getDeviceIdCallback {
        void onValues(int i, ArrayList<Byte> arrayList, int i2);
    }

    @FunctionalInterface
    public interface initSignCallback {
        void onValues(int i, long j);
    }

    static ISoter asInterface(IHwBinder iHwBinder) {
        if (iHwBinder == null) {
            return null;
        }
        IHwInterface iHwInterfaceQueryLocalInterface = iHwBinder.queryLocalInterface("vendor.microtrust.hardware.soter@1.0::ISoter");
        if (iHwInterfaceQueryLocalInterface != null && (iHwInterfaceQueryLocalInterface instanceof ISoter)) {
            return (ISoter) iHwInterfaceQueryLocalInterface;
        }
        Proxy proxy = new Proxy(iHwBinder);
        try {
            Iterator<String> it = proxy.interfaceChain().iterator();
            while (it.hasNext()) {
                if (it.next().equals("vendor.microtrust.hardware.soter@1.0::ISoter")) {
                    return proxy;
                }
            }
        } catch (RemoteException unused) {
        }
        return null;
    }

    static ISoter getService() throws RemoteException {
        return getService("default");
    }

    static ISoter getService(String str) throws RemoteException {
        return asInterface(HwBinder.getService("vendor.microtrust.hardware.soter@1.0::ISoter", str));
    }

    void exportAskPublicKey(int i, exportAskPublicKeyCallback exportaskpublickeycallback) throws RemoteException;

    void exportAuthKeyPublicKey(int i, String str, exportAuthKeyPublicKeyCallback exportauthkeypublickeycallback) throws RemoteException;

    void finishSign(long j, finishSignCallback finishsigncallback) throws RemoteException;

    int generateAskKeyPair(int i) throws RemoteException;

    int generateAuthKeyPair(int i, String str) throws RemoteException;

    void getDeviceId(getDeviceIdCallback getdeviceidcallback) throws RemoteException;

    int hasAskAlready(int i) throws RemoteException;

    int hasAuthKey(int i, String str) throws RemoteException;

    void initSign(int i, String str, String str2, initSignCallback initsigncallback) throws RemoteException;

    ArrayList<String> interfaceChain() throws RemoteException;

    int removeAllUidKey(int i) throws RemoteException;

    int removeAuthKey(int i, String str) throws RemoteException;
}
