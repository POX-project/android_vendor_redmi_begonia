package vendor.xiaomi.hardware.mtdservice.V1_1;

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
public interface IMTService extends IHwInterface {

    public static final class Proxy implements IMTService {
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

        public final int hashCode() {
            return asBinder().hashCode();
        }

        @Override // vendor.xiaomi.hardware.mtdservice.V1_1.IMTService
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

        public String toString() {
            try {
                return interfaceDescriptor() + "@Proxy";
            } catch (RemoteException unused) {
                return "[class or subclass of vendor.xiaomi.hardware.mtdservice@1.1::IMTService]@Proxy";
            }
        }

        @Override // vendor.xiaomi.hardware.mtdservice.V1_1.IMTService
        public String widevine_dump() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.xiaomi.hardware.mtdservice@1.1::IMTService");
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(21, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readString();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.xiaomi.hardware.mtdservice.V1_1.IMTService
        public int widevine_get_version() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.xiaomi.hardware.mtdservice@1.1::IMTService");
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

        @Override // vendor.xiaomi.hardware.mtdservice.V1_1.IMTService
        public int widevine_load(String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.xiaomi.hardware.mtdservice@1.1::IMTService");
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(20, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readInt32();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.xiaomi.hardware.mtdservice.V1_1.IMTService
        public String widevine_prepare() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.xiaomi.hardware.mtdservice@1.1::IMTService");
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(19, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readString();
            } finally {
                hwParcel2.release();
            }
        }
    }

    static IMTService asInterface(IHwBinder iHwBinder) {
        if (iHwBinder == null) {
            return null;
        }
        IHwInterface iHwInterfaceQueryLocalInterface = iHwBinder.queryLocalInterface("vendor.xiaomi.hardware.mtdservice@1.1::IMTService");
        if (iHwInterfaceQueryLocalInterface != null && (iHwInterfaceQueryLocalInterface instanceof IMTService)) {
            return (IMTService) iHwInterfaceQueryLocalInterface;
        }
        Proxy proxy = new Proxy(iHwBinder);
        try {
            Iterator<String> it = proxy.interfaceChain().iterator();
            while (it.hasNext()) {
                if (it.next().equals("vendor.xiaomi.hardware.mtdservice@1.1::IMTService")) {
                    return proxy;
                }
            }
        } catch (RemoteException unused) {
        }
        return null;
    }

    static IMTService getService() throws RemoteException {
        return getService("default");
    }

    static IMTService getService(String str) throws RemoteException {
        return asInterface(HwBinder.getService("vendor.xiaomi.hardware.mtdservice@1.1::IMTService", str));
    }

    ArrayList<String> interfaceChain() throws RemoteException;

    String widevine_dump() throws RemoteException;

    int widevine_get_version() throws RemoteException;

    int widevine_load(String str, String str2) throws RemoteException;

    String widevine_prepare() throws RemoteException;
}
