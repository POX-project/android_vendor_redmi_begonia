package vendor.mediatek.hardware.mtkradioex.V2_0;

import android.hardware.radio.V1_0.SuppSvcNotification;
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
import com.mediatek.internal.telephony.MtkEtwsUtils;
import com.mediatek.internal.telephony.MtkWspTypeDecoder;
import com.mediatek.internal.telephony.cat.MtkCatService;
import com.mediatek.internal.telephony.ppl.PplMessageManager;
import com.mediatek.internal.telephony.worldphone.IWorldPhone;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Objects;
import vendor.xiaomi.hardware.misys.V1_0.IResultValue;

/* JADX INFO: loaded from: classes.dex */
public interface IMtkRadioExIndication extends IBase {
    public static final String kInterfaceName = "vendor.mediatek.hardware.mtkradioex@2.0::IMtkRadioExIndication";

    public static final class Proxy implements IMtkRadioExIndication {
        private IHwBinder mRemote;

        public Proxy(IHwBinder iHwBinder) {
            Objects.requireNonNull(iHwBinder);
            this.mRemote = iHwBinder;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public IHwBinder asBinder() {
            return this.mRemote;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void bipProactiveCommand(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(42, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void callAdditionalInfoInd(int i, int i2, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(6, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void cdmaCallAccepted(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(10, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void cfuStatusNotify(int i, CfuStatusNotification cfuStatusNotification) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            cfuStatusNotification.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(4, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void cipherIndication(int i, CipherNotification cipherNotification) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            cipherNotification.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(7, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void confSRVCC(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(48, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void crssIndication(int i, CrssNotification crssNotification) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            crssNotification.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(9, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void currentSignalStrengthWithWcdmaEcioInd(int i, SignalStrengthWithWcdmaEcio signalStrengthWithWcdmaEcio) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            signalStrengthWithWcdmaEcio.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(37, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void dataAllowedNotification(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(34, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void dedicatedBearerActivationInd(int i, DedicateDataCall dedicateDataCall) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            dedicateDataCall.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(39, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void dedicatedBearerDeactivationInd(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(41, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void dedicatedBearerModificationInd(int i, DedicateDataCall dedicateDataCall) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            dedicateDataCall.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(40, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void dsbpStateChanged(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(56, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void eMBMSAtInfoIndication(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(1, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void eMBMSSessionStatusIndication(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void eccNumIndication(int i, String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(11, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public final boolean equals(Object obj) {
            return HidlSupport.interfacesEqual(this, obj);
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void esnMeidChangeInd(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(28, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void gmssRatChangedIndication(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(26, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public final int hashCode() {
            return asBinder().hashCode();
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void iccidChanged(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(66, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void incomingCallIndication(int i, IncomingCallNotification incomingCallNotification) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            incomingCallNotification.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(5, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException {
            return this.mRemote.linkToDeath(deathRecipient, j);
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void mdChangedApnInd(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(46, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void meSmsStorageFullInd(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(21, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void mobileDataUsageInd(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(64, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void networkBandInfoInd(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(59, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void networkInfoInd(int i, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(36, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void networkRejectCauseInd(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(55, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void newEtwsInd(int i, EtwsNotification etwsNotification) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            etwsNotification.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(20, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void oemHookRaw(int i, ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt8Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(23, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void onCardDetectedInd(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(18, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void onCellularQualityChangedInd(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(63, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void onDsdaChangedInd(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(61, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void onImeiLock(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(13, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void onImsiRefreshDone(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(14, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void onMccMncChanged(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(53, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void onMdDataRetryCountReset(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(49, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void onNwLimitInd(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(65, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void onPlmnDataInd(int i, PlmnMvnoInfo plmnMvnoInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            plmnMvnoInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(67, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void onPseudoCellInfoInd(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(52, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void onRemoveRestrictEutran(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(50, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void onRsuEvent(int i, int i2, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(68, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void onRsuSimLockEvent(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(17, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void onSimHotSwapInd(int i, int i2, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(15, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void onSimMeLockEvent(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(16, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void onSimPowerChangedInd(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(58, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void onStkMenuReset(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(44, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void onTxPowerIndication(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(51, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void onTxPowerStatusIndication(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(54, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void onVirtualSimStatusChanged(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(12, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void onVsimEventIndication(int i, VsimOperationEvent vsimOperationEvent) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            vsimOperationEvent.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(19, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void pcoDataAfterAttached(int i, PcoDataAttachedInfo pcoDataAttachedInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            pcoDataAttachedInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(47, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void phbReadyNotification(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(3, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void plmnChangedIndication(int i, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(24, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void qualifiedNetworkTypesChangedInd(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(62, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void registrationSuspendedIndication(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(25, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void resetAttachApnInd(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(45, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void responseCsNetworkStateChangeInd(int i, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(29, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void responseFemtocellInfo(int i, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(35, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void responseInvalidSimInd(int i, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(31, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void responseLteNetworkInfo(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(38, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void responseModulationInfoInd(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(33, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void responseNetworkEventInd(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(32, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void responsePsNetworkStateChangeInd(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(30, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void smlSlotLockInfoChangedInd(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(57, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void smsInfoExtInd(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(60, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void smsReadyInd(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(22, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void suppSvcNotifyEx(int i, SuppSvcNotification suppSvcNotification) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            suppSvcNotification.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(8, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public String toString() {
            try {
                return interfaceDescriptor() + "@Proxy";
            } catch (RemoteException e) {
                return "[class or subclass of vendor.mediatek.hardware.mtkradioex@2.0::IMtkRadioExIndication]@Proxy";
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void triggerOtaSP(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(43, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException {
            return this.mRemote.unlinkToDeath(deathRecipient);
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void worldModeChangedIndication(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioExIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(27, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }
    }

    public static abstract class Stub extends HwBinder implements IMtkRadioExIndication {
        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public IHwBinder asBinder() {
            return this;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) {
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public final DebugInfo getDebugInfo() {
            DebugInfo debugInfo = new DebugInfo();
            debugInfo.pid = HidlSupport.getPidIfSharable();
            debugInfo.ptr = 0L;
            debugInfo.arch = 0;
            return debugInfo;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public final ArrayList<byte[]> getHashChain() {
            return new ArrayList<>(Arrays.asList(new byte[]{18, 91, 85, -48, 5, 34, -1, 15, -16, 125, 70, -85, -117, -12, -7, 21, -116, -116, 92, -75, -74, 44, -38, 120, 39, 41, 102, -107, 50, 100, 12, 14}, new byte[]{-20, 127, -41, -98, -48, 45, -6, -123, -68, 73, -108, 38, -83, -82, 62, -66, 35, -17, 5, 36, -13, -51, 105, 87, 19, -109, 36, -72, 59, 24, -54, 76}));
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public final ArrayList<String> interfaceChain() {
            return new ArrayList<>(Arrays.asList(IMtkRadioExIndication.kInterfaceName, "android.hidl.base@1.0::IBase"));
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public final String interfaceDescriptor() {
            return IMtkRadioExIndication.kInterfaceName;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public final boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) {
            return true;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public final void notifySyspropsChanged() {
            HwBinder.enableInstrumentation();
        }

        public void onTransact(int i, HwParcel hwParcel, HwParcel hwParcel2, int i2) throws RemoteException {
            switch (i) {
                case 1:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    eMBMSAtInfoIndication(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 2:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    eMBMSSessionStatusIndication(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 3:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    phbReadyNotification(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 4:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    int int32 = hwParcel.readInt32();
                    CfuStatusNotification cfuStatusNotification = new CfuStatusNotification();
                    cfuStatusNotification.readFromParcel(hwParcel);
                    cfuStatusNotify(int32, cfuStatusNotification);
                    return;
                case 5:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    int int33 = hwParcel.readInt32();
                    IncomingCallNotification incomingCallNotification = new IncomingCallNotification();
                    incomingCallNotification.readFromParcel(hwParcel);
                    incomingCallIndication(int33, incomingCallNotification);
                    return;
                case 6:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    callAdditionalInfoInd(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readStringVector());
                    return;
                case 7:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    int int34 = hwParcel.readInt32();
                    CipherNotification cipherNotification = new CipherNotification();
                    cipherNotification.readFromParcel(hwParcel);
                    cipherIndication(int34, cipherNotification);
                    return;
                case 8:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    int int35 = hwParcel.readInt32();
                    SuppSvcNotification suppSvcNotification = new SuppSvcNotification();
                    suppSvcNotification.readFromParcel(hwParcel);
                    suppSvcNotifyEx(int35, suppSvcNotification);
                    return;
                case 9:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    int int36 = hwParcel.readInt32();
                    CrssNotification crssNotification = new CrssNotification();
                    crssNotification.readFromParcel(hwParcel);
                    crssIndication(int36, crssNotification);
                    return;
                case 10:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    cdmaCallAccepted(hwParcel.readInt32());
                    return;
                case 11:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    eccNumIndication(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 12:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    onVirtualSimStatusChanged(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 13:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    onImeiLock(hwParcel.readInt32());
                    return;
                case 14:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    onImsiRefreshDone(hwParcel.readInt32());
                    return;
                case 15:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    onSimHotSwapInd(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 16:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    onSimMeLockEvent(hwParcel.readInt32());
                    return;
                case 17:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    onRsuSimLockEvent(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 18:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    onCardDetectedInd(hwParcel.readInt32());
                    return;
                case 19:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    int int37 = hwParcel.readInt32();
                    VsimOperationEvent vsimOperationEvent = new VsimOperationEvent();
                    vsimOperationEvent.readFromParcel(hwParcel);
                    onVsimEventIndication(int37, vsimOperationEvent);
                    return;
                case 20:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    int int38 = hwParcel.readInt32();
                    EtwsNotification etwsNotification = new EtwsNotification();
                    etwsNotification.readFromParcel(hwParcel);
                    newEtwsInd(int38, etwsNotification);
                    return;
                case 21:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    meSmsStorageFullInd(hwParcel.readInt32());
                    return;
                case IResultValue.MISYS_EINVAL /* 22 */:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    smsReadyInd(hwParcel.readInt32());
                    return;
                case IResultValue.MISYS_ENFILE /* 23 */:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    oemHookRaw(hwParcel.readInt32(), hwParcel.readInt8Vector());
                    return;
                case IResultValue.MISYS_EMFILE /* 24 */:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    plmnChangedIndication(hwParcel.readInt32(), hwParcel.readStringVector());
                    return;
                case IResultValue.MISYS_ENOTTY /* 25 */:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    registrationSuspendedIndication(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case IResultValue.MISYS_ETXTBSY /* 26 */:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    gmssRatChangedIndication(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case IResultValue.MISYS_EFBIG /* 27 */:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    worldModeChangedIndication(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case IResultValue.MISYS_ENOSPC /* 28 */:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    esnMeidChangeInd(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case IResultValue.MISYS_ESPIPE /* 29 */:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    responseCsNetworkStateChangeInd(hwParcel.readInt32(), hwParcel.readStringVector());
                    return;
                case 30:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    responsePsNetworkStateChangeInd(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 31:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    responseInvalidSimInd(hwParcel.readInt32(), hwParcel.readStringVector());
                    return;
                case 32:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    responseNetworkEventInd(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 33:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    responseModulationInfoInd(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 34:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    dataAllowedNotification(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 35:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    responseFemtocellInfo(hwParcel.readInt32(), hwParcel.readStringVector());
                    return;
                case 36:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    networkInfoInd(hwParcel.readInt32(), hwParcel.readStringVector());
                    return;
                case 37:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    int int39 = hwParcel.readInt32();
                    SignalStrengthWithWcdmaEcio signalStrengthWithWcdmaEcio = new SignalStrengthWithWcdmaEcio();
                    signalStrengthWithWcdmaEcio.readFromParcel(hwParcel);
                    currentSignalStrengthWithWcdmaEcioInd(int39, signalStrengthWithWcdmaEcio);
                    return;
                case 38:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    responseLteNetworkInfo(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 39:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    int int310 = hwParcel.readInt32();
                    DedicateDataCall dedicateDataCall = new DedicateDataCall();
                    dedicateDataCall.readFromParcel(hwParcel);
                    dedicatedBearerActivationInd(int310, dedicateDataCall);
                    return;
                case 40:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    int int311 = hwParcel.readInt32();
                    DedicateDataCall dedicateDataCall2 = new DedicateDataCall();
                    dedicateDataCall2.readFromParcel(hwParcel);
                    dedicatedBearerModificationInd(int311, dedicateDataCall2);
                    return;
                case 41:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    dedicatedBearerDeactivationInd(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 42:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    bipProactiveCommand(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 43:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    triggerOtaSP(hwParcel.readInt32());
                    return;
                case 44:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    onStkMenuReset(hwParcel.readInt32());
                    return;
                case 45:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    resetAttachApnInd(hwParcel.readInt32());
                    return;
                case MtkCatService.MSG_ID_CACHED_DISPLAY_TEXT_TIMEOUT /* 46 */:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    mdChangedApnInd(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case MtkCatService.MSG_ID_CONN_RETRY_TIMEOUT /* 47 */:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    int int312 = hwParcel.readInt32();
                    PcoDataAttachedInfo pcoDataAttachedInfo = new PcoDataAttachedInfo();
                    pcoDataAttachedInfo.readFromParcel(hwParcel);
                    pcoDataAfterAttached(int312, pcoDataAttachedInfo);
                    return;
                case 48:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    confSRVCC(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case PplMessageManager.PendingMessage.PENDING_MESSAGE_LENGTH /* 49 */:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    onMdDataRetryCountReset(hwParcel.readInt32());
                    return;
                case 50:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    onRemoveRestrictEutran(hwParcel.readInt32());
                    return;
                case 51:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    onTxPowerIndication(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 52:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    onPseudoCellInfoInd(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case MtkWspTypeDecoder.CONTENT_TYPE_B_CONNECTIVITY /* 53 */:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    onMccMncChanged(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 54:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    onTxPowerStatusIndication(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 55:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    networkRejectCauseInd(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case MtkEtwsUtils.ETWS_PDU_LENGTH /* 56 */:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    dsbpStateChanged(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 57:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    smlSlotLockInfoChangedInd(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 58:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    onSimPowerChangedInd(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 59:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    networkBandInfoInd(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 60:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    smsInfoExtInd(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case IWorldPhone.EVENT_INVALID_SIM_NOTIFY_2 /* 61 */:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    onDsdaChangedInd(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case IWorldPhone.EVENT_INVALID_SIM_NOTIFY_3 /* 62 */:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    qualifiedNetworkTypesChangedInd(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case IWorldPhone.EVENT_INVALID_SIM_NOTIFY_4 /* 63 */:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    onCellularQualityChangedInd(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 64:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    mobileDataUsageInd(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 65:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    onNwLimitInd(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 66:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    iccidChanged(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 67:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    int int313 = hwParcel.readInt32();
                    PlmnMvnoInfo plmnMvnoInfo = new PlmnMvnoInfo();
                    plmnMvnoInfo.readFromParcel(hwParcel);
                    onPlmnDataInd(int313, plmnMvnoInfo);
                    return;
                case 68:
                    hwParcel.enforceInterface(IMtkRadioExIndication.kInterfaceName);
                    onRsuEvent(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString());
                    return;
                default:
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
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public final void ping() {
        }

        public IHwInterface queryLocalInterface(String str) {
            if (IMtkRadioExIndication.kInterfaceName.equals(str)) {
                return this;
            }
            return null;
        }

        public void registerAsService(String str) throws RemoteException {
            registerService(str);
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public final void setHALInstrumentation() {
        }

        public String toString() {
            return interfaceDescriptor() + "@Stub";
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
        public final boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) {
            return true;
        }
    }

    static IMtkRadioExIndication asInterface(IHwBinder iHwBinder) {
        if (iHwBinder == null) {
            return null;
        }
        IMtkRadioExIndication iMtkRadioExIndicationQueryLocalInterface = iHwBinder.queryLocalInterface(kInterfaceName);
        if (iMtkRadioExIndicationQueryLocalInterface != null && (iMtkRadioExIndicationQueryLocalInterface instanceof IMtkRadioExIndication)) {
            return iMtkRadioExIndicationQueryLocalInterface;
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

    static IMtkRadioExIndication castFrom(IHwInterface iHwInterface) {
        if (iHwInterface == null) {
            return null;
        }
        return asInterface(iHwInterface.asBinder());
    }

    static IMtkRadioExIndication getService() throws RemoteException {
        return getService("default");
    }

    static IMtkRadioExIndication getService(String str) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str));
    }

    static IMtkRadioExIndication getService(String str, boolean z) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str, z));
    }

    static IMtkRadioExIndication getService(boolean z) throws RemoteException {
        return getService("default", z);
    }

    IHwBinder asBinder();

    void bipProactiveCommand(int i, String str) throws RemoteException;

    void callAdditionalInfoInd(int i, int i2, ArrayList<String> arrayList) throws RemoteException;

    void cdmaCallAccepted(int i) throws RemoteException;

    void cfuStatusNotify(int i, CfuStatusNotification cfuStatusNotification) throws RemoteException;

    void cipherIndication(int i, CipherNotification cipherNotification) throws RemoteException;

    void confSRVCC(int i, ArrayList<Integer> arrayList) throws RemoteException;

    void crssIndication(int i, CrssNotification crssNotification) throws RemoteException;

    void currentSignalStrengthWithWcdmaEcioInd(int i, SignalStrengthWithWcdmaEcio signalStrengthWithWcdmaEcio) throws RemoteException;

    void dataAllowedNotification(int i, int i2) throws RemoteException;

    void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) throws RemoteException;

    void dedicatedBearerActivationInd(int i, DedicateDataCall dedicateDataCall) throws RemoteException;

    void dedicatedBearerDeactivationInd(int i, int i2) throws RemoteException;

    void dedicatedBearerModificationInd(int i, DedicateDataCall dedicateDataCall) throws RemoteException;

    void dsbpStateChanged(int i, int i2) throws RemoteException;

    void eMBMSAtInfoIndication(int i, String str) throws RemoteException;

    void eMBMSSessionStatusIndication(int i, int i2) throws RemoteException;

    void eccNumIndication(int i, String str, String str2) throws RemoteException;

    void esnMeidChangeInd(int i, String str) throws RemoteException;

    DebugInfo getDebugInfo() throws RemoteException;

    ArrayList<byte[]> getHashChain() throws RemoteException;

    void gmssRatChangedIndication(int i, ArrayList<Integer> arrayList) throws RemoteException;

    void iccidChanged(int i, String str) throws RemoteException;

    void incomingCallIndication(int i, IncomingCallNotification incomingCallNotification) throws RemoteException;

    ArrayList<String> interfaceChain() throws RemoteException;

    String interfaceDescriptor() throws RemoteException;

    boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException;

    void mdChangedApnInd(int i, int i2) throws RemoteException;

    void meSmsStorageFullInd(int i) throws RemoteException;

    void mobileDataUsageInd(int i, ArrayList<Integer> arrayList) throws RemoteException;

    void networkBandInfoInd(int i, ArrayList<Integer> arrayList) throws RemoteException;

    void networkInfoInd(int i, ArrayList<String> arrayList) throws RemoteException;

    void networkRejectCauseInd(int i, ArrayList<Integer> arrayList) throws RemoteException;

    void newEtwsInd(int i, EtwsNotification etwsNotification) throws RemoteException;

    void notifySyspropsChanged() throws RemoteException;

    void oemHookRaw(int i, ArrayList<Byte> arrayList) throws RemoteException;

    void onCardDetectedInd(int i) throws RemoteException;

    void onCellularQualityChangedInd(int i, ArrayList<Integer> arrayList) throws RemoteException;

    void onDsdaChangedInd(int i, int i2) throws RemoteException;

    void onImeiLock(int i) throws RemoteException;

    void onImsiRefreshDone(int i) throws RemoteException;

    void onMccMncChanged(int i, String str) throws RemoteException;

    void onMdDataRetryCountReset(int i) throws RemoteException;

    void onNwLimitInd(int i, ArrayList<Integer> arrayList) throws RemoteException;

    void onPlmnDataInd(int i, PlmnMvnoInfo plmnMvnoInfo) throws RemoteException;

    void onPseudoCellInfoInd(int i, ArrayList<Integer> arrayList) throws RemoteException;

    void onRemoveRestrictEutran(int i) throws RemoteException;

    void onRsuEvent(int i, int i2, String str) throws RemoteException;

    void onRsuSimLockEvent(int i, int i2) throws RemoteException;

    void onSimHotSwapInd(int i, int i2, String str) throws RemoteException;

    void onSimMeLockEvent(int i) throws RemoteException;

    void onSimPowerChangedInd(int i, ArrayList<Integer> arrayList) throws RemoteException;

    void onStkMenuReset(int i) throws RemoteException;

    void onTxPowerIndication(int i, ArrayList<Integer> arrayList) throws RemoteException;

    void onTxPowerStatusIndication(int i, ArrayList<Integer> arrayList) throws RemoteException;

    void onVirtualSimStatusChanged(int i, int i2) throws RemoteException;

    void onVsimEventIndication(int i, VsimOperationEvent vsimOperationEvent) throws RemoteException;

    void pcoDataAfterAttached(int i, PcoDataAttachedInfo pcoDataAttachedInfo) throws RemoteException;

    void phbReadyNotification(int i, int i2) throws RemoteException;

    void ping() throws RemoteException;

    void plmnChangedIndication(int i, ArrayList<String> arrayList) throws RemoteException;

    void qualifiedNetworkTypesChangedInd(int i, ArrayList<Integer> arrayList) throws RemoteException;

    void registrationSuspendedIndication(int i, ArrayList<Integer> arrayList) throws RemoteException;

    void resetAttachApnInd(int i) throws RemoteException;

    void responseCsNetworkStateChangeInd(int i, ArrayList<String> arrayList) throws RemoteException;

    void responseFemtocellInfo(int i, ArrayList<String> arrayList) throws RemoteException;

    void responseInvalidSimInd(int i, ArrayList<String> arrayList) throws RemoteException;

    void responseLteNetworkInfo(int i, int i2) throws RemoteException;

    void responseModulationInfoInd(int i, ArrayList<Integer> arrayList) throws RemoteException;

    void responseNetworkEventInd(int i, ArrayList<Integer> arrayList) throws RemoteException;

    void responsePsNetworkStateChangeInd(int i, ArrayList<Integer> arrayList) throws RemoteException;

    void setHALInstrumentation() throws RemoteException;

    void smlSlotLockInfoChangedInd(int i, ArrayList<Integer> arrayList) throws RemoteException;

    void smsInfoExtInd(int i, String str) throws RemoteException;

    void smsReadyInd(int i) throws RemoteException;

    void suppSvcNotifyEx(int i, SuppSvcNotification suppSvcNotification) throws RemoteException;

    void triggerOtaSP(int i) throws RemoteException;

    boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException;

    void worldModeChangedIndication(int i, ArrayList<Integer> arrayList) throws RemoteException;
}
