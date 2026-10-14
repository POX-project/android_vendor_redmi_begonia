package vendor.mediatek.hardware.mtkradioex.V2_0;

import android.hardware.radio.V1_0.CdmaSmsMessage;
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
import com.mediatek.internal.telephony.MtkWspTypeDecoder;
import com.mediatek.internal.telephony.cat.MtkCatService;
import com.mediatek.internal.telephony.ppl.PplMessageManager;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Objects;
import vendor.xiaomi.hardware.misys.V1_0.IResultValue;

/* JADX INFO: loaded from: classes.dex */
public interface IImsRadioIndication extends IBase {
    public static final String kInterfaceName = "vendor.mediatek.hardware.mtkradioex@2.0::IImsRadioIndication";

    public static final class Proxy implements IImsRadioIndication {
        private IHwBinder mRemote;

        public Proxy(IHwBinder iHwBinder) {
            Objects.requireNonNull(iHwBinder);
            this.mRemote = iHwBinder;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public IHwBinder asBinder() {
            return this.mRemote;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void audioIndication(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(45, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void callAdditionalInfoInd(int i, int i2, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(47, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void callInfoIndication(int i, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void callRatIndication(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(49, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void callmodChangeIndicator(int i, String str, String str2, String str3, String str4, String str5) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            hwParcel.writeString(str4);
            hwParcel.writeString(str5);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(5, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void cdmaNewSmsEx(int i, CdmaSmsMessage cdmaSmsMessage) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            cdmaSmsMessage.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(37, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void econfResultIndication(int i, String str, String str2, String str3, String str4, String str5, String str6) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            hwParcel.writeString(str4);
            hwParcel.writeString(str5);
            hwParcel.writeString(str6);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(3, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void ectIndication(int i, int i2, int i3, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(18, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public final boolean equals(Object obj) {
            return HidlSupport.interfacesEqual(this, obj);
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void getProvisionDone(int i, String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(8, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public final int hashCode() {
            return asBinder().hashCode();
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void imsBearerInit(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(21, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void imsBearerStateNotify(int i, int i2, int i3, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(20, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void imsCfgConfigChanged(int i, int i2, String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(32, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void imsCfgConfigLoaded(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(33, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void imsCfgDynamicImsSwitchComplete(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(30, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void imsCfgFeatureChanged(int i, int i2, int i3, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(31, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void imsConferenceInfoIndication(int i, ArrayList<ImsConfParticipant> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            ImsConfParticipant.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(27, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void imsDataInfoNotify(int i, String str, String str2, String str3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(34, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void imsDeregDone(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(22, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void imsDialogIndication(int i, ArrayList<Dialog> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            Dialog.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(29, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void imsDisableDone(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(15, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void imsDisableStart(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(17, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void imsEnableDone(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(14, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void imsEnableStart(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(16, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void imsEventPackageIndication(int i, String str, String str2, String str3, String str4, String str5) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            hwParcel.writeString(str4);
            hwParcel.writeString(str5);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(12, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void imsRadioInfoChange(int i, String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(25, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void imsRedialEmergencyIndication(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(39, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void imsRegInfoInd(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void imsRegStatusReport(int i, ImsRegStatusInfo imsRegStatusInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            imsRegStatusInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(51, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void imsRegistrationInfo(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(13, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void imsRtpInfo(int i, String str, String str2, String str3, String str4, String str5, String str6, String str7) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            hwParcel.writeString(str4);
            hwParcel.writeString(str5);
            hwParcel.writeString(str6);
            hwParcel.writeString(str7);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(40, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void imsSupportEcc(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(24, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void incomingCallIndication(int i, IncomingCallNotification incomingCallNotification) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            incomingCallNotification.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(1, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException {
            return this.mRemote.linkToDeath(deathRecipient, j);
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void lteMessageWaitingIndication(int i, String str, String str2, String str3, String str4, String str5) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            hwParcel.writeString(str4);
            hwParcel.writeString(str5);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(28, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void multiImsCount(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(23, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void newSmsEx(int i, ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt8Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(35, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void newSmsStatusReportEx(int i, ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt8Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(36, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void noEmergencyCallbackMode(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(38, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void onSsacStatus(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(53, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void onUssi(int i, int i2, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(7, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void onVolteSubscription(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(10, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void onXui(int i, String str, String str2, String str3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(9, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void rttCapabilityIndication(int i, int i2, int i3, int i4, int i5, int i6) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            hwParcel.writeInt32(i5);
            hwParcel.writeInt32(i6);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(41, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void rttModifyRequestReceive(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(44, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void rttModifyResponse(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(42, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void rttTextReceive(int i, int i2, int i3, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(43, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void sendVopsIndication(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void sipCallProgressIndicator(int i, String str, String str2, String str3, String str4, String str5, String str6) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            hwParcel.writeString(str4);
            hwParcel.writeString(str5);
            hwParcel.writeString(str6);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(4, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void sipHeaderReport(int i, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(48, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void sipRegInfoInd(int i, int i2, int i3, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(50, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void speechCodecInfoIndication(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(26, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void suppSvcNotify(int i, SuppSvcNotification suppSvcNotification) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            suppSvcNotification.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(11, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public String toString() {
            try {
                return interfaceDescriptor() + "@Proxy";
            } catch (RemoteException e) {
                return "[class or subclass of vendor.mediatek.hardware.mtkradioex@2.0::IImsRadioIndication]@Proxy";
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException {
            return this.mRemote.unlinkToDeath(deathRecipient);
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void videoCapabilityIndicator(int i, String str, String str2, String str3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(6, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void volteSetting(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(19, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }
    }

    public static abstract class Stub extends HwBinder implements IImsRadioIndication {
        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public IHwBinder asBinder() {
            return this;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) {
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public final DebugInfo getDebugInfo() {
            DebugInfo debugInfo = new DebugInfo();
            debugInfo.pid = HidlSupport.getPidIfSharable();
            debugInfo.ptr = 0L;
            debugInfo.arch = 0;
            return debugInfo;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public final ArrayList<byte[]> getHashChain() {
            return new ArrayList<>(Arrays.asList(new byte[]{-114, 48, 99, 32, -7, -94, -91, 68, 48, 32, 115, -18, 99, -57, -110, 31, -61, 90, 49, 94, -70, -64, 115, 9, -65, 81, -9, -98, -80, 114, 34, -85}, new byte[]{-20, 127, -41, -98, -48, 45, -6, -123, -68, 73, -108, 38, -83, -82, 62, -66, 35, -17, 5, 36, -13, -51, 105, 87, 19, -109, 36, -72, 59, 24, -54, 76}));
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public final ArrayList<String> interfaceChain() {
            return new ArrayList<>(Arrays.asList(IImsRadioIndication.kInterfaceName, "android.hidl.base@1.0::IBase"));
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public final String interfaceDescriptor() {
            return IImsRadioIndication.kInterfaceName;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public final boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) {
            return true;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public final void notifySyspropsChanged() {
            HwBinder.enableInstrumentation();
        }

        public void onTransact(int i, HwParcel hwParcel, HwParcel hwParcel2, int i2) throws RemoteException {
            switch (i) {
                case 1:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    int int32 = hwParcel.readInt32();
                    IncomingCallNotification incomingCallNotification = new IncomingCallNotification();
                    incomingCallNotification.readFromParcel(hwParcel);
                    incomingCallIndication(int32, incomingCallNotification);
                    return;
                case 2:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    callInfoIndication(hwParcel.readInt32(), hwParcel.readStringVector());
                    return;
                case 3:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    econfResultIndication(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 4:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    sipCallProgressIndicator(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 5:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    callmodChangeIndicator(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 6:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    videoCapabilityIndicator(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 7:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    onUssi(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 8:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    getProvisionDone(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 9:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    onXui(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 10:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    onVolteSubscription(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 11:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    int int33 = hwParcel.readInt32();
                    SuppSvcNotification suppSvcNotification = new SuppSvcNotification();
                    suppSvcNotification.readFromParcel(hwParcel);
                    suppSvcNotify(int33, suppSvcNotification);
                    return;
                case 12:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    imsEventPackageIndication(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 13:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    imsRegistrationInfo(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 14:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    imsEnableDone(hwParcel.readInt32());
                    return;
                case 15:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    imsDisableDone(hwParcel.readInt32());
                    return;
                case 16:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    imsEnableStart(hwParcel.readInt32());
                    return;
                case 17:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    imsDisableStart(hwParcel.readInt32());
                    return;
                case 18:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    ectIndication(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 19:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    volteSetting(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 20:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    imsBearerStateNotify(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 21:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    imsBearerInit(hwParcel.readInt32());
                    return;
                case IResultValue.MISYS_EINVAL /* 22 */:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    imsDeregDone(hwParcel.readInt32());
                    return;
                case IResultValue.MISYS_ENFILE /* 23 */:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    multiImsCount(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case IResultValue.MISYS_EMFILE /* 24 */:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    imsSupportEcc(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case IResultValue.MISYS_ENOTTY /* 25 */:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    imsRadioInfoChange(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString());
                    return;
                case IResultValue.MISYS_ETXTBSY /* 26 */:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    speechCodecInfoIndication(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case IResultValue.MISYS_EFBIG /* 27 */:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    imsConferenceInfoIndication(hwParcel.readInt32(), ImsConfParticipant.readVectorFromParcel(hwParcel));
                    return;
                case IResultValue.MISYS_ENOSPC /* 28 */:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    lteMessageWaitingIndication(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case IResultValue.MISYS_ESPIPE /* 29 */:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    imsDialogIndication(hwParcel.readInt32(), Dialog.readVectorFromParcel(hwParcel));
                    return;
                case 30:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    imsCfgDynamicImsSwitchComplete(hwParcel.readInt32());
                    return;
                case 31:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    imsCfgFeatureChanged(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 32:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    imsCfgConfigChanged(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 33:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    imsCfgConfigLoaded(hwParcel.readInt32());
                    return;
                case 34:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    imsDataInfoNotify(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 35:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    newSmsEx(hwParcel.readInt32(), hwParcel.readInt8Vector());
                    return;
                case 36:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    newSmsStatusReportEx(hwParcel.readInt32(), hwParcel.readInt8Vector());
                    return;
                case 37:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    int int34 = hwParcel.readInt32();
                    CdmaSmsMessage cdmaSmsMessage = new CdmaSmsMessage();
                    cdmaSmsMessage.readFromParcel(hwParcel);
                    cdmaNewSmsEx(int34, cdmaSmsMessage);
                    return;
                case 38:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    noEmergencyCallbackMode(hwParcel.readInt32());
                    return;
                case 39:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    imsRedialEmergencyIndication(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 40:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    imsRtpInfo(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 41:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    rttCapabilityIndication(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 42:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    rttModifyResponse(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 43:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    rttTextReceive(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 44:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    rttModifyRequestReceive(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 45:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    audioIndication(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case MtkCatService.MSG_ID_CACHED_DISPLAY_TEXT_TIMEOUT /* 46 */:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    sendVopsIndication(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case MtkCatService.MSG_ID_CONN_RETRY_TIMEOUT /* 47 */:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    callAdditionalInfoInd(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readStringVector());
                    return;
                case 48:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    sipHeaderReport(hwParcel.readInt32(), hwParcel.readStringVector());
                    return;
                case PplMessageManager.PendingMessage.PENDING_MESSAGE_LENGTH /* 49 */:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    callRatIndication(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 50:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    sipRegInfoInd(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readStringVector());
                    return;
                case 51:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    int int35 = hwParcel.readInt32();
                    ImsRegStatusInfo imsRegStatusInfo = new ImsRegStatusInfo();
                    imsRegStatusInfo.readFromParcel(hwParcel);
                    imsRegStatusReport(int35, imsRegStatusInfo);
                    return;
                case 52:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    imsRegInfoInd(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case MtkWspTypeDecoder.CONTENT_TYPE_B_CONNECTIVITY /* 53 */:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    onSsacStatus(hwParcel.readInt32(), hwParcel.readInt32Vector());
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public final void ping() {
        }

        public IHwInterface queryLocalInterface(String str) {
            if (IImsRadioIndication.kInterfaceName.equals(str)) {
                return this;
            }
            return null;
        }

        public void registerAsService(String str) throws RemoteException {
            registerService(str);
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public final void setHALInstrumentation() {
        }

        public String toString() {
            return interfaceDescriptor() + "@Stub";
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
        public final boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) {
            return true;
        }
    }

    static IImsRadioIndication asInterface(IHwBinder iHwBinder) {
        if (iHwBinder == null) {
            return null;
        }
        IImsRadioIndication iImsRadioIndicationQueryLocalInterface = iHwBinder.queryLocalInterface(kInterfaceName);
        if (iImsRadioIndicationQueryLocalInterface != null && (iImsRadioIndicationQueryLocalInterface instanceof IImsRadioIndication)) {
            return iImsRadioIndicationQueryLocalInterface;
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

    static IImsRadioIndication castFrom(IHwInterface iHwInterface) {
        if (iHwInterface == null) {
            return null;
        }
        return asInterface(iHwInterface.asBinder());
    }

    static IImsRadioIndication getService() throws RemoteException {
        return getService("default");
    }

    static IImsRadioIndication getService(String str) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str));
    }

    static IImsRadioIndication getService(String str, boolean z) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str, z));
    }

    static IImsRadioIndication getService(boolean z) throws RemoteException {
        return getService("default", z);
    }

    IHwBinder asBinder();

    void audioIndication(int i, int i2, int i3) throws RemoteException;

    void callAdditionalInfoInd(int i, int i2, ArrayList<String> arrayList) throws RemoteException;

    void callInfoIndication(int i, ArrayList<String> arrayList) throws RemoteException;

    void callRatIndication(int i, int i2, int i3) throws RemoteException;

    void callmodChangeIndicator(int i, String str, String str2, String str3, String str4, String str5) throws RemoteException;

    void cdmaNewSmsEx(int i, CdmaSmsMessage cdmaSmsMessage) throws RemoteException;

    void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) throws RemoteException;

    void econfResultIndication(int i, String str, String str2, String str3, String str4, String str5, String str6) throws RemoteException;

    void ectIndication(int i, int i2, int i3, int i4) throws RemoteException;

    DebugInfo getDebugInfo() throws RemoteException;

    ArrayList<byte[]> getHashChain() throws RemoteException;

    void getProvisionDone(int i, String str, String str2) throws RemoteException;

    void imsBearerInit(int i) throws RemoteException;

    void imsBearerStateNotify(int i, int i2, int i3, String str) throws RemoteException;

    void imsCfgConfigChanged(int i, int i2, String str, String str2) throws RemoteException;

    void imsCfgConfigLoaded(int i) throws RemoteException;

    void imsCfgDynamicImsSwitchComplete(int i) throws RemoteException;

    void imsCfgFeatureChanged(int i, int i2, int i3, int i4) throws RemoteException;

    void imsConferenceInfoIndication(int i, ArrayList<ImsConfParticipant> arrayList) throws RemoteException;

    void imsDataInfoNotify(int i, String str, String str2, String str3) throws RemoteException;

    void imsDeregDone(int i) throws RemoteException;

    void imsDialogIndication(int i, ArrayList<Dialog> arrayList) throws RemoteException;

    void imsDisableDone(int i) throws RemoteException;

    void imsDisableStart(int i) throws RemoteException;

    void imsEnableDone(int i) throws RemoteException;

    void imsEnableStart(int i) throws RemoteException;

    void imsEventPackageIndication(int i, String str, String str2, String str3, String str4, String str5) throws RemoteException;

    void imsRadioInfoChange(int i, String str, String str2) throws RemoteException;

    void imsRedialEmergencyIndication(int i, String str) throws RemoteException;

    void imsRegInfoInd(int i, ArrayList<Integer> arrayList) throws RemoteException;

    void imsRegStatusReport(int i, ImsRegStatusInfo imsRegStatusInfo) throws RemoteException;

    void imsRegistrationInfo(int i, int i2, int i3) throws RemoteException;

    void imsRtpInfo(int i, String str, String str2, String str3, String str4, String str5, String str6, String str7) throws RemoteException;

    void imsSupportEcc(int i, int i2) throws RemoteException;

    void incomingCallIndication(int i, IncomingCallNotification incomingCallNotification) throws RemoteException;

    ArrayList<String> interfaceChain() throws RemoteException;

    String interfaceDescriptor() throws RemoteException;

    boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException;

    void lteMessageWaitingIndication(int i, String str, String str2, String str3, String str4, String str5) throws RemoteException;

    void multiImsCount(int i, int i2) throws RemoteException;

    void newSmsEx(int i, ArrayList<Byte> arrayList) throws RemoteException;

    void newSmsStatusReportEx(int i, ArrayList<Byte> arrayList) throws RemoteException;

    void noEmergencyCallbackMode(int i) throws RemoteException;

    void notifySyspropsChanged() throws RemoteException;

    void onSsacStatus(int i, ArrayList<Integer> arrayList) throws RemoteException;

    void onUssi(int i, int i2, String str) throws RemoteException;

    void onVolteSubscription(int i, int i2) throws RemoteException;

    void onXui(int i, String str, String str2, String str3) throws RemoteException;

    void ping() throws RemoteException;

    void rttCapabilityIndication(int i, int i2, int i3, int i4, int i5, int i6) throws RemoteException;

    void rttModifyRequestReceive(int i, int i2, int i3) throws RemoteException;

    void rttModifyResponse(int i, int i2, int i3) throws RemoteException;

    void rttTextReceive(int i, int i2, int i3, String str) throws RemoteException;

    void sendVopsIndication(int i, int i2) throws RemoteException;

    void setHALInstrumentation() throws RemoteException;

    void sipCallProgressIndicator(int i, String str, String str2, String str3, String str4, String str5, String str6) throws RemoteException;

    void sipHeaderReport(int i, ArrayList<String> arrayList) throws RemoteException;

    void sipRegInfoInd(int i, int i2, int i3, ArrayList<String> arrayList) throws RemoteException;

    void speechCodecInfoIndication(int i, int i2) throws RemoteException;

    void suppSvcNotify(int i, SuppSvcNotification suppSvcNotification) throws RemoteException;

    boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException;

    void videoCapabilityIndicator(int i, String str, String str2, String str3) throws RemoteException;

    void volteSetting(int i, boolean z) throws RemoteException;
}
