package vendor.mediatek.hardware.lbs.V1_0;

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
public interface ILbs extends IHwInterface {

    public static final class Proxy implements ILbs {
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

        @Override // vendor.mediatek.hardware.lbs.V1_0.ILbs
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

        @Override // vendor.mediatek.hardware.lbs.V1_0.ILbs
        public boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException {
            return this.mRemote.linkToDeath(deathRecipient, j);
        }

        @Override // vendor.mediatek.hardware.lbs.V1_0.ILbs
        public boolean sendToServer(ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.mediatek.hardware.lbs@1.0::ILbs");
            hwParcel.writeInt8Vector(arrayList);
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

        @Override // vendor.mediatek.hardware.lbs.V1_0.ILbs
        public boolean sendToServerWithCallback(ILbsCallback iLbsCallback, ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.mediatek.hardware.lbs@1.0::ILbs");
            hwParcel.writeStrongBinder(iLbsCallback == null ? null : iLbsCallback.asBinder());
            hwParcel.writeInt8Vector(arrayList);
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

        @Override // vendor.mediatek.hardware.lbs.V1_0.ILbs
        public void setCallback(ILbsCallback iLbsCallback) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken("vendor.mediatek.hardware.lbs@1.0::ILbs");
            hwParcel.writeStrongBinder(iLbsCallback == null ? null : iLbsCallback.asBinder());
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(1, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public String toString() {
            try {
                return interfaceDescriptor() + "@Proxy";
            } catch (RemoteException unused) {
                return "[class or subclass of vendor.mediatek.hardware.lbs@1.0::ILbs]@Proxy";
            }
        }
    }

    static ILbs asInterface(IHwBinder iHwBinder) {
        if (iHwBinder == null) {
            return null;
        }
        IHwInterface iHwInterfaceQueryLocalInterface = iHwBinder.queryLocalInterface("vendor.mediatek.hardware.lbs@1.0::ILbs");
        if (iHwInterfaceQueryLocalInterface != null && (iHwInterfaceQueryLocalInterface instanceof ILbs)) {
            return (ILbs) iHwInterfaceQueryLocalInterface;
        }
        Proxy proxy = new Proxy(iHwBinder);
        try {
            Iterator<String> it = proxy.interfaceChain().iterator();
            while (it.hasNext()) {
                if (it.next().equals("vendor.mediatek.hardware.lbs@1.0::ILbs")) {
                    return proxy;
                }
            }
        } catch (RemoteException unused) {
        }
        return null;
    }

    static ILbs getService(String str) throws RemoteException {
        return asInterface(HwBinder.getService("vendor.mediatek.hardware.lbs@1.0::ILbs", str));
    }

    ArrayList<String> interfaceChain() throws RemoteException;

    boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException;

    boolean sendToServer(ArrayList<Byte> arrayList) throws RemoteException;

    boolean sendToServerWithCallback(ILbsCallback iLbsCallback, ArrayList<Byte> arrayList) throws RemoteException;

    void setCallback(ILbsCallback iLbsCallback) throws RemoteException;
}
