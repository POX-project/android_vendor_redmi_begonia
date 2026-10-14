package vendor.xiaomi.hardware.tidaservice.V1_1;

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
public interface ITidaService extends vendor.xiaomi.hardware.tidaservice.V1_0.ITidaService {

    public static final class Proxy implements ITidaService {
        private IHwBinder mRemote;

        public Proxy(IHwBinder iHwBinder) {
            Objects.requireNonNull(iHwBinder);
            this.mRemote = iHwBinder;
        }

        public IHwBinder asBinder() {
            return this.mRemote;
        }

        @Override // vendor.xiaomi.hardware.tidaservice.V1_1.ITidaService
        public boolean contains_1_1(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.xiaomi.hardware.tidaservice@1.1::ITidaService");
            hwParcel.writeInt32(i);
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

        public final boolean equals(Object obj) {
            return HidlSupport.interfacesEqual(this, obj);
        }

        @Override // vendor.xiaomi.hardware.tidaservice.V1_1.ITidaService
        public int generateKeyPair_1_1(int i, String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.xiaomi.hardware.tidaservice@1.1::ITidaService");
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
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

        @Override // vendor.xiaomi.hardware.tidaservice.V1_0.ITidaService
        public String getFpIds() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.xiaomi.hardware.tidaservice@1.0::ITidaService");
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(7, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readString();
            } finally {
                hwParcel2.release();
            }
        }

        public final int hashCode() {
            return asBinder().hashCode();
        }

        @Override // vendor.xiaomi.hardware.tidaservice.V1_1.ITidaService
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

        @Override // vendor.xiaomi.hardware.tidaservice.V1_1.ITidaService
        public int removeAllKey_1_1(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.xiaomi.hardware.tidaservice@1.1::ITidaService");
            hwParcel.writeInt32(i);
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

        @Override // vendor.xiaomi.hardware.tidaservice.V1_0.ITidaService
        public ArrayList<Byte> sign() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.xiaomi.hardware.tidaservice@1.0::ITidaService");
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(5, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readInt8Vector();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.xiaomi.hardware.tidaservice.V1_1.ITidaService
        public int signInit_1_1(int i, String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.xiaomi.hardware.tidaservice@1.1::ITidaService");
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(10, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readInt32();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.xiaomi.hardware.tidaservice.V1_1.ITidaService
        public int signUpdate_1_1(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.xiaomi.hardware.tidaservice@1.1::ITidaService");
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
                return "[class or subclass of vendor.xiaomi.hardware.tidaservice@1.1::ITidaService]@Proxy";
            }
        }
    }

    static ITidaService asInterface(IHwBinder iHwBinder) {
        if (iHwBinder == null) {
            return null;
        }
        IHwInterface iHwInterfaceQueryLocalInterface = iHwBinder.queryLocalInterface("vendor.xiaomi.hardware.tidaservice@1.1::ITidaService");
        if (iHwInterfaceQueryLocalInterface != null && (iHwInterfaceQueryLocalInterface instanceof ITidaService)) {
            return (ITidaService) iHwInterfaceQueryLocalInterface;
        }
        Proxy proxy = new Proxy(iHwBinder);
        try {
            Iterator<String> it = proxy.interfaceChain().iterator();
            while (it.hasNext()) {
                if (it.next().equals("vendor.xiaomi.hardware.tidaservice@1.1::ITidaService")) {
                    return proxy;
                }
            }
        } catch (RemoteException unused) {
        }
        return null;
    }

    static ITidaService getService() throws RemoteException {
        return getService("default");
    }

    static ITidaService getService(String str) throws RemoteException {
        return asInterface(HwBinder.getService("vendor.xiaomi.hardware.tidaservice@1.1::ITidaService", str));
    }

    boolean contains_1_1(int i, String str) throws RemoteException;

    int generateKeyPair_1_1(int i, String str, String str2) throws RemoteException;

    ArrayList<String> interfaceChain() throws RemoteException;

    int removeAllKey_1_1(int i) throws RemoteException;

    int signInit_1_1(int i, String str, String str2) throws RemoteException;

    int signUpdate_1_1(int i, String str) throws RemoteException;
}
