package vendor.xiaomi.hardware.mlipay.V1_1;

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
public interface IMlipayService extends vendor.xiaomi.hardware.mlipay.V1_0.IMlipayService {

    public static final class Proxy implements IMlipayService {
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

        @Override // vendor.xiaomi.hardware.mlipay.V1_1.IMlipayService
        public ArrayList<Integer> ifaa_get_idlist(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.xiaomi.hardware.mlipay@1.1::IMlipayService");
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(6, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
                return hwParcel2.readInt32Vector();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.xiaomi.hardware.mlipay.V1_1.IMlipayService
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

        @Override // vendor.xiaomi.hardware.mlipay.V1_0.IMlipayService
        public ArrayList<Byte> invoke_command(ArrayList<Byte> arrayList, int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.xiaomi.hardware.mlipay@1.0::IMlipayService");
            hwParcel.writeInt8Vector(arrayList);
            hwParcel.writeInt32(i);
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

        public String toString() {
            try {
                return interfaceDescriptor() + "@Proxy";
            } catch (RemoteException unused) {
                return "[class or subclass of vendor.xiaomi.hardware.mlipay@1.1::IMlipayService]@Proxy";
            }
        }
    }

    static IMlipayService asInterface(IHwBinder iHwBinder) {
        if (iHwBinder == null) {
            return null;
        }
        IHwInterface iHwInterfaceQueryLocalInterface = iHwBinder.queryLocalInterface("vendor.xiaomi.hardware.mlipay@1.1::IMlipayService");
        if (iHwInterfaceQueryLocalInterface != null && (iHwInterfaceQueryLocalInterface instanceof IMlipayService)) {
            return (IMlipayService) iHwInterfaceQueryLocalInterface;
        }
        Proxy proxy = new Proxy(iHwBinder);
        try {
            Iterator<String> it = proxy.interfaceChain().iterator();
            while (it.hasNext()) {
                if (it.next().equals("vendor.xiaomi.hardware.mlipay@1.1::IMlipayService")) {
                    return proxy;
                }
            }
        } catch (RemoteException unused) {
        }
        return null;
    }

    static IMlipayService getService() throws RemoteException {
        return getService("default");
    }

    static IMlipayService getService(String str) throws RemoteException {
        return asInterface(HwBinder.getService("vendor.xiaomi.hardware.mlipay@1.1::IMlipayService", str));
    }

    ArrayList<Integer> ifaa_get_idlist(int i) throws RemoteException;

    ArrayList<String> interfaceChain() throws RemoteException;
}
