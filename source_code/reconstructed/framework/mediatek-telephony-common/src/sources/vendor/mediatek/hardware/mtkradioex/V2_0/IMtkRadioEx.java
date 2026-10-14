package vendor.mediatek.hardware.mtkradioex.V2_0;

import android.hardware.radio.V1_0.CdmaSmsAck;
import android.hardware.radio.V1_0.Dial;
import android.hardware.radio.V1_0.ImsSmsMessage;
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
import com.mediatek.android.mms.pdu.MtkPduPart;
import com.mediatek.internal.telephony.MtkEtwsUtils;
import com.mediatek.internal.telephony.MtkGsmCdmaPhone;
import com.mediatek.internal.telephony.MtkWspTypeDecoder;
import com.mediatek.internal.telephony.cat.BipUtils;
import com.mediatek.internal.telephony.cat.MtkCatService;
import com.mediatek.internal.telephony.ppl.PplMessageManager;
import com.mediatek.internal.telephony.uicc.MtkIccConstants;
import com.mediatek.internal.telephony.uicc.MtkSIMRecords;
import com.mediatek.internal.telephony.worldphone.IWorldPhone;
import com.mediatek.telephony.internal.telephony.vsim.ExternalSimConstants;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Objects;
import vendor.xiaomi.hardware.misys.V1_0.IResultValue;

/* JADX INFO: loaded from: classes.dex */
public interface IMtkRadioEx extends IBase {
    public static final String kInterfaceName = "vendor.mediatek.hardware.mtkradioex@2.0::IMtkRadioEx";

    public static final class Proxy implements IMtkRadioEx {
        private IHwBinder mRemote;

        public Proxy(IHwBinder iHwBinder) {
            Objects.requireNonNull(iHwBinder);
            this.mRemote = iHwBinder;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void abortCertificate(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(198, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void abortFemtocellList(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(113, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void acknowledgeLastIncomingCdmaSmsEx(int i, CdmaSmsAck cdmaSmsAck) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            cdmaSmsAck.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(102, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void acknowledgeLastIncomingGsmSmsEx(int i, boolean z, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(101, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void activateUiccCard(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(83, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public IHwBinder asBinder() {
            return this.mRemote;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void cancelAvailableNetworks(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(MtkGsmCdmaPhone.EVENT_UNSOL_RADIO_CAPABILITY_CHANGED, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void cancelUssi(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(45, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void cfgA2offset(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(118, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void cfgB1offset(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(119, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void conferenceDial(int i, ConferenceDial conferenceDial) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            conferenceDial.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(21, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void controlCall(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(12, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void controlImsConferenceCallMember(int i, int i2, int i3, String str, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeString(str);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(19, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void dataConnectionAttach(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(159, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void dataConnectionDetach(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(160, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void deactivateNrScgCommunication(int i, boolean z, boolean z2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            hwParcel.writeBool(z2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(200, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void deactivateUiccCard(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(84, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void deleteUPBEntry(int i, int i2, int i3, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(63, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void dialWithSipUri(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(23, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void disableNR(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(121, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void doGeneralSimAuthentication(int i, SimAuthStructure simAuthStructure) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            simAuthStructure.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(86, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void eccPreferredRat(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(52, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void eccRedialApprove(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(199, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void editUPBEntry(int i, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(62, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void enableCAPlusBandWidthFilter(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(181, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void enableCapabaility(int i, String str, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(197, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void enableDsdaIndication(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(191, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void enableSCGfailure(int i, boolean z, int i2, int i3, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(120, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public final boolean equals(Object obj) {
            return HidlSupport.interfacesEqual(this, obj);
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void forceReleaseCall(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getATR(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(80, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getApcInfo(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(152, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getAvailableNetworksWithAct(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(109, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getCallSubAddress(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(57, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getColp(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(36, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getColr(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(37, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getCurrentPOLList(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(129, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getCurrentUiccCardProvisioningStatus(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(85, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getDeactivateNrScgCommunication(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(ExternalSimConstants.EVENT_TYPE_SEND_RSIM_AUTH_IND, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getDsdaStatus(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(192, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getEccNum(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(55, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getFemtocellList(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(112, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getGsmBroadcastActivation(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(99, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getGsmBroadcastLangs(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(98, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getIccid(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(81, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getImsCfgFeatureValue(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(155, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getImsCfgProvisionValue(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(157, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getImsCfgResourceCapValue(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(158, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getLteReleaseVersion(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(163, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getPOLCapability(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(128, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getPhoneBookMemStorage(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(68, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getPhoneBookStringsLength(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(67, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getPlmnNameFromSE13Table(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(180, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getProvisionValue(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(17, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getRoamingEnable(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(33, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getRxTestResult(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(127, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getSignalStrengthWithWcdmaEcio(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(110, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getSmartRatSwitch(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(205, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getSmsMemStatus(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(94, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getSmsParameters(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(92, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getSmsRuimMemoryStatus(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(107, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getSuggestedPlmnList(int i, int i2, int i3, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(194, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getVoiceDomainPreference(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(182, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void getXcapStatus(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(46, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void handleStkCallSetupRequestFromSimWithResCode(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(133, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void hangupAll(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(49, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void hangupWithReason(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(168, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public final int hashCode() {
            return asBinder().hashCode();
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void imsBearerStateConfirm(int i, int i2, int i3, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(27, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void imsDeregNotification(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(13, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void imsEctCommand(int i, String str, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(11, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException {
            return this.mRemote.linkToDeath(deathRecipient, j);
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void modifyModemType(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(106, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void notifyEPDGScreenState(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(MtkPduPart.P_TRANSFER_ENCODING, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void notifyImsServiceReady() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(179, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void pullCall(int i, String str, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(29, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void queryCallForwardInTimeSlotStatus(int i, CallForwardInfoEx callForwardInfoEx) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            callForwardInfoEx.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(41, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void queryFemtoCellSystemSelectionMode(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(115, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void queryNetworkLock(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(87, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void queryPhbStorageInfo(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(58, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void querySsacStatus(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(146, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void queryUPBAvailable(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(72, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void queryUPBCapability(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(61, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void queryVopsStatus(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(178, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void readPhbEntry(int i, int i2, int i3, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(60, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void readPhoneBookEntryExt(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(70, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void readUPBAasList(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(76, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void readUPBAnrEntry(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(75, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void readUPBEmailEntry(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(73, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void readUPBGasList(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(64, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void readUPBGrpEntry(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(65, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void readUPBSneEntry(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(74, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void registerCellQltyReport(int i, String str, String str2, String str3, String str4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            hwParcel.writeString(str4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(193, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void removeCbMsg(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(96, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void resetAllConnections(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(161, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void resetMdDataRetryCount(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(138, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void resetSuppServ(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(47, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void responseAcknowledgementMtk() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(1, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void restartRILD(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(136, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void routeAuthMessage(int i, int i2, ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt8Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(196, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void routeCertificate(int i, int i2, ArrayList<Byte> arrayList, ArrayList<Byte> arrayList2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt8Vector(arrayList);
            hwParcel.writeInt8Vector(arrayList2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(195, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void rttModifyRequestResponse(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(MtkIccConstants.SMS_RECORD_LENGTH, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void runGbaAuthentication(int i, String str, String str2, boolean z, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeBool(z);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(43, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void selectFemtocell(int i, String str, String str2, String str3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(114, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void sendAtciRequest(int i, ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt8Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(135, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void sendCnap(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(38, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void sendEmbmsAtCommand(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(31, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void sendImsSmsEx(int i, ImsSmsMessage imsSmsMessage) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            imsSmsMessage.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(100, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void sendRequestRaw(int i, ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt8Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(MtkSIMRecords.EVENT_OPL5G, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void sendRequestStrings(int i, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(104, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void sendRsuRequest(int i, RsuRequestInfo rsuRequestInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            rsuRequestInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(209, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void sendRttModifyRequest(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(174, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void sendRttText(int i, int i2, int i3, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(175, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void sendSarIndicator(int i, int i2, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(207, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void sendSubsidyLockRequest(int i, int i2, ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt8Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(171, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void sendUssi(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(44, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void sendVsimNotification(int i, int i2, int i3, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(90, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void sendVsimOperation(int i, int i2, int i3, int i4, int i5, ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            hwParcel.writeInt32(i5);
            hwParcel.writeInt8Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(91, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void sendWifiAssociated(int i, String str, int i2, String str2, String str3, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(211, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void sendWifiEnabled(int i, String str, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(210, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void sendWifiIpAddress(int i, String str, String str2, String str3, int i2, int i3, String str4, String str5, int i4, String str6) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeString(str4);
            hwParcel.writeString(str5);
            hwParcel.writeInt32(i4);
            hwParcel.writeString(str6);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(212, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setApcMode(int i, int i2, int i3, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(151, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setBarringPasswordCheckedByNW(int i, String str, String str2, String str3, String str4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            hwParcel.writeString(str4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(34, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setBgsrchDeltaSleepTimer(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(125, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setCallAdditionalInfo(int i, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(208, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setCallForwardInTimeSlot(int i, CallForwardInfoEx callForwardInfoEx) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            callForwardInfoEx.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(42, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setCallIndication(int i, int i2, int i3, int i4, int i5) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            hwParcel.writeInt32(i5);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(50, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setCallSubAddress(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(56, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setCallValidTimer(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(187, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setClip(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(35, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setColp(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(39, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setColr(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(40, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setEccMode(int i, String str, int i2, int i3, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(51, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setEccNum(int i, String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(54, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setEmergencyAddressId(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(148, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setEtws(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(95, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setFdMode(int i, int i2, int i3, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(131, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setFemtoCellSystemSelectionMode(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(116, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setGsmBroadcastLangs(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(97, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setGwsdMode(int i, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(186, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setIgnoreSameNumberInterval(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(188, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setImsBearerNotification(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(153, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setImsCallMode(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(185, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setImsCfgFeatureValue(int i, int i2, int i3, int i4, int i5) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            hwParcel.writeInt32(i5);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(154, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setImsCfgProvisionValue(int i, int i2, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(156, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setImsEnable(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(14, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setImsRegistrationReport(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(30, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setImsRtpReport(int i, int i2, int i3, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(28, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setImsVideoEnable(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(15, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setImscfg(int i, boolean z, boolean z2, boolean z3, boolean z4, boolean z5, boolean z6) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            hwParcel.writeBool(z2);
            hwParcel.writeBool(z3);
            hwParcel.writeBool(z4);
            hwParcel.writeBool(z5);
            hwParcel.writeBool(z6);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(16, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setKeepAliveByIpData(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(190, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setKeepAliveByPDCPCtrlPDU(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(189, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setLocationInfo(int i, String str, String str2, String str3, String str4, String str5, String str6, String str7, String str8, String str9, String str10, String str11) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            hwParcel.writeString(str4);
            hwParcel.writeString(str5);
            hwParcel.writeString(str6);
            hwParcel.writeString(str7);
            hwParcel.writeString(str8);
            hwParcel.writeString(str9);
            hwParcel.writeString(str10);
            hwParcel.writeString(str11);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(147, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setLteReleaseVersion(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(162, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setMaxUlSpeed(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(ExternalSimConstants.EVENT_TYPE_RECEIVE_RSIM_AUTH_RSP, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setModemImsCfg(int i, String str, String str2, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(22, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setModemPower(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(78, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setNattKeepAliveStatus(int i, String str, boolean z, String str2, int i2, String str3, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeBool(z);
            hwParcel.writeString(str2);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str3);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(149, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setNetworkLock(int i, int i2, int i3, String str, String str2, String str3, String str4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            hwParcel.writeString(str4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(88, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setNetworkSelectionModeManualWithAct(int i, String str, String str2, String str3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(108, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setPOLEntry(int i, int i2, String str, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(130, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setPhoneBookMemStorage(int i, String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(69, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setPhonebookReady(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(77, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setProvisionValue(int i, String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(18, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setRemoveRestrictEutranMode(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(139, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setResponseFunctionsAssist(IAssistRadioResponse iAssistRadioResponse) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeStrongBinder(iAssistRadioResponse == null ? null : iAssistRadioResponse.asBinder());
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(7, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setResponseFunctionsCap(ICapRadioResponse iCapRadioResponse) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeStrongBinder(iCapRadioResponse == null ? null : iCapRadioResponse.asBinder());
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(8, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setResponseFunctionsEm(IEmRadioResponse iEmRadioResponse, IEmRadioIndication iEmRadioIndication) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeStrongBinder(iEmRadioResponse == null ? null : iEmRadioResponse.asBinder());
            hwParcel.writeStrongBinder(iEmRadioIndication != null ? iEmRadioIndication.asBinder() : null);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(6, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setResponseFunctionsForAtci(IAtciResponse iAtciResponse, IAtciIndication iAtciIndication) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeStrongBinder(iAtciResponse == null ? null : iAtciResponse.asBinder());
            hwParcel.writeStrongBinder(iAtciIndication != null ? iAtciIndication.asBinder() : null);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(134, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setResponseFunctionsIms(IImsRadioResponse iImsRadioResponse, IImsRadioIndication iImsRadioIndication) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeStrongBinder(iImsRadioResponse == null ? null : iImsRadioResponse.asBinder());
            hwParcel.writeStrongBinder(iImsRadioIndication != null ? iImsRadioIndication.asBinder() : null);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(3, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setResponseFunctionsMtk(IMtkRadioExResponse iMtkRadioExResponse, IMtkRadioExIndication iMtkRadioExIndication) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeStrongBinder(iMtkRadioExResponse == null ? null : iMtkRadioExResponse.asBinder());
            hwParcel.writeStrongBinder(iMtkRadioExIndication != null ? iMtkRadioExIndication.asBinder() : null);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(2, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setResponseFunctionsMwi(IMwiRadioResponse iMwiRadioResponse, IMwiRadioIndication iMwiRadioIndication) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeStrongBinder(iMwiRadioResponse == null ? null : iMwiRadioResponse.asBinder());
            hwParcel.writeStrongBinder(iMwiRadioIndication != null ? iMwiRadioIndication.asBinder() : null);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(4, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setResponseFunctionsRcs(IRcsRadioResponse iRcsRadioResponse, IRcsRadioIndication iRcsRadioIndication) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeStrongBinder(iRcsRadioResponse == null ? null : iRcsRadioResponse.asBinder());
            hwParcel.writeStrongBinder(iRcsRadioIndication != null ? iRcsRadioIndication.asBinder() : null);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(170, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setResponseFunctionsRsu(IRsuRadioResponse iRsuRadioResponse, IRsuRadioIndication iRsuRadioIndication) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeStrongBinder(iRsuRadioResponse == null ? null : iRsuRadioResponse.asBinder());
            hwParcel.writeStrongBinder(iRsuRadioIndication != null ? iRsuRadioIndication.asBinder() : null);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(9, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setResponseFunctionsSE(ISERadioResponse iSERadioResponse, ISERadioIndication iSERadioIndication) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeStrongBinder(iSERadioResponse == null ? null : iSERadioResponse.asBinder());
            hwParcel.writeStrongBinder(iSERadioIndication != null ? iSERadioIndication.asBinder() : null);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(5, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setResponseFunctionsSmartRatSwitch(ISmartRatSwitchRadioResponse iSmartRatSwitchRadioResponse, ISmartRatSwitchRadioIndication iSmartRatSwitchRadioIndication) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeStrongBinder(iSmartRatSwitchRadioResponse == null ? null : iSmartRatSwitchRadioResponse.asBinder());
            hwParcel.writeStrongBinder(iSmartRatSwitchRadioIndication != null ? iSmartRatSwitchRadioIndication.asBinder() : null);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(ExternalSimConstants.EVENT_TYPE_RSIM_AUTH_DONE, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setResponseFunctionsSubsidyLock(ISubsidyLockResponse iSubsidyLockResponse, ISubsidyLockIndication iSubsidyLockIndication) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeStrongBinder(iSubsidyLockResponse == null ? null : iSubsidyLockResponse.asBinder());
            hwParcel.writeStrongBinder(iSubsidyLockIndication != null ? iSubsidyLockIndication.asBinder() : null);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(169, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setResumeRegistration(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(105, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setRoamingEnable(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setRttMode(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(173, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setRxTestConfig(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(126, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setSearchRat(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(124, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setSearchStoredFreqInfo(int i, int i2, int i3, int i4, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(123, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setServiceStateToModem(int i, int i2, int i3, int i4, int i5, int i6, int i7) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            hwParcel.writeInt32(i5);
            hwParcel.writeInt32(i6);
            hwParcel.writeInt32(i7);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(117, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setSimPower(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(82, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setSipHeader(int i, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(183, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setSipHeaderReport(int i, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(184, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setSmartSceneSwitch(int i, int i2, int i3, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(206, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setSmsParameters(int i, SmsParams smsParams) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            smsParams.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(93, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setSuppServProperty(int i, String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(165, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setTrm(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(132, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setTxPower(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(122, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setTxPowerStatus(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(164, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setVendorSetting(int i, int i2, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(172, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setVoiceDomainPreference(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(140, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setVoicePreferStatus(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(53, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setWfcConfig(int i, int i2, String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(145, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setWfcProfile(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(20, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setWifiAssociated(int i, String str, int i2, String str2, String str3, int i3, String str4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            hwParcel.writeInt32(i3);
            hwParcel.writeString(str4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(142, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setWifiEnabled(int i, String str, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(141, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setWifiIpAddress(int i, String str, String str2, String str3, int i2, int i3, String str4, String str5, int i4, String str6) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeString(str4);
            hwParcel.writeString(str5);
            hwParcel.writeInt32(i4);
            hwParcel.writeString(str6);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(144, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setWifiPingResult(int i, int i2, int i3, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(150, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setWifiSignalLevel(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(143, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void setupXcapUserAgentString(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(48, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void smartRatSwitch(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(ExternalSimConstants.EVENT_TYPE_EXTERNAL_SIM_CONNECTED, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void supplyDepersonalization(int i, String str, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(89, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void supplyDeviceNetworkDepersonalization(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(166, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void syncDataSettingsToMd(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(137, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public String toString() {
            try {
                return interfaceDescriptor() + "@Proxy";
            } catch (RemoteException e) {
                return "[class or subclass of vendor.mediatek.hardware.mtkradioex@2.0::IMtkRadioEx]@Proxy";
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void toggleRttAudioIndication(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(177, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void triggerModeSwitchByEcc(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(79, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException {
            return this.mRemote.unlinkToDeath(deathRecipient);
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void videoCallAccept(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(10, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void vtDial(int i, Dial dial) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            dial.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(25, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void vtDialWithSipUri(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(24, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void writePhbEntry(int i, PhbEntryStructure phbEntryStructure) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            phbEntryStructure.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(59, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void writePhoneBookEntryExt(int i, PhbEntryExt phbEntryExt) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            phbEntryExt.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(71, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void writeUPBGrpEntry(int i, int i2, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IMtkRadioEx.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(66, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }
    }

    public static abstract class Stub extends HwBinder implements IMtkRadioEx {
        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public IHwBinder asBinder() {
            return this;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) {
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public final DebugInfo getDebugInfo() {
            DebugInfo debugInfo = new DebugInfo();
            debugInfo.pid = HidlSupport.getPidIfSharable();
            debugInfo.ptr = 0L;
            debugInfo.arch = 0;
            return debugInfo;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public final ArrayList<byte[]> getHashChain() {
            return new ArrayList<>(Arrays.asList(new byte[]{76, -66, -61, -49, -120, 33, 35, -48, 109, -32, -71, -85, -40, -103, -9, BipUtils.TCP_STATUS_LISTEN, -104, -16, -25, 104, -80, -86, -75, 44, -25, -104, 126, -71, -106, -15, 4, -96}, new byte[]{-20, 127, -41, -98, -48, 45, -6, -123, -68, 73, -108, 38, -83, -82, 62, -66, 35, -17, 5, 36, -13, -51, 105, 87, 19, -109, 36, -72, 59, 24, -54, 76}));
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public final ArrayList<String> interfaceChain() {
            return new ArrayList<>(Arrays.asList(IMtkRadioEx.kInterfaceName, "android.hidl.base@1.0::IBase"));
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public final String interfaceDescriptor() {
            return IMtkRadioEx.kInterfaceName;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public final boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) {
            return true;
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public final void notifySyspropsChanged() {
            HwBinder.enableInstrumentation();
        }

        public void onTransact(int i, HwParcel hwParcel, HwParcel hwParcel2, int i2) throws RemoteException {
            switch (i) {
                case 1:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    responseAcknowledgementMtk();
                    return;
                case 2:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setResponseFunctionsMtk(IMtkRadioExResponse.asInterface(hwParcel.readStrongBinder()), IMtkRadioExIndication.asInterface(hwParcel.readStrongBinder()));
                    hwParcel2.writeStatus(0);
                    hwParcel2.send();
                    return;
                case 3:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setResponseFunctionsIms(IImsRadioResponse.asInterface(hwParcel.readStrongBinder()), IImsRadioIndication.asInterface(hwParcel.readStrongBinder()));
                    hwParcel2.writeStatus(0);
                    hwParcel2.send();
                    return;
                case 4:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setResponseFunctionsMwi(IMwiRadioResponse.asInterface(hwParcel.readStrongBinder()), IMwiRadioIndication.asInterface(hwParcel.readStrongBinder()));
                    hwParcel2.writeStatus(0);
                    hwParcel2.send();
                    return;
                case 5:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setResponseFunctionsSE(ISERadioResponse.asInterface(hwParcel.readStrongBinder()), ISERadioIndication.asInterface(hwParcel.readStrongBinder()));
                    hwParcel2.writeStatus(0);
                    hwParcel2.send();
                    return;
                case 6:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setResponseFunctionsEm(IEmRadioResponse.asInterface(hwParcel.readStrongBinder()), IEmRadioIndication.asInterface(hwParcel.readStrongBinder()));
                    hwParcel2.writeStatus(0);
                    hwParcel2.send();
                    return;
                case 7:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setResponseFunctionsAssist(IAssistRadioResponse.asInterface(hwParcel.readStrongBinder()));
                    hwParcel2.writeStatus(0);
                    hwParcel2.send();
                    return;
                case 8:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setResponseFunctionsCap(ICapRadioResponse.asInterface(hwParcel.readStrongBinder()));
                    hwParcel2.writeStatus(0);
                    hwParcel2.send();
                    return;
                case 9:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setResponseFunctionsRsu(IRsuRadioResponse.asInterface(hwParcel.readStrongBinder()), IRsuRadioIndication.asInterface(hwParcel.readStrongBinder()));
                    hwParcel2.writeStatus(0);
                    hwParcel2.send();
                    return;
                case 10:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    videoCallAccept(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 11:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    imsEctCommand(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readInt32());
                    return;
                case 12:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    controlCall(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 13:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    imsDeregNotification(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 14:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setImsEnable(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 15:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setImsVideoEnable(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 16:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setImscfg(hwParcel.readInt32(), hwParcel.readBool(), hwParcel.readBool(), hwParcel.readBool(), hwParcel.readBool(), hwParcel.readBool(), hwParcel.readBool());
                    return;
                case 17:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getProvisionValue(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 18:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setProvisionValue(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 19:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    controlImsConferenceCallMember(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString(), hwParcel.readInt32());
                    return;
                case 20:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setWfcProfile(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 21:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    int int32 = hwParcel.readInt32();
                    ConferenceDial conferenceDial = new ConferenceDial();
                    conferenceDial.readFromParcel(hwParcel);
                    conferenceDial(int32, conferenceDial);
                    return;
                case IResultValue.MISYS_EINVAL /* 22 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setModemImsCfg(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readInt32());
                    return;
                case IResultValue.MISYS_ENFILE /* 23 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    dialWithSipUri(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case IResultValue.MISYS_EMFILE /* 24 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    vtDialWithSipUri(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case IResultValue.MISYS_ENOTTY /* 25 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    int int33 = hwParcel.readInt32();
                    Dial dial = new Dial();
                    dial.readFromParcel(hwParcel);
                    vtDial(int33, dial);
                    return;
                case IResultValue.MISYS_ETXTBSY /* 26 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    forceReleaseCall(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case IResultValue.MISYS_EFBIG /* 27 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    imsBearerStateConfirm(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case IResultValue.MISYS_ENOSPC /* 28 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setImsRtpReport(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case IResultValue.MISYS_ESPIPE /* 29 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    pullCall(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readBool());
                    return;
                case 30:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setImsRegistrationReport(hwParcel.readInt32());
                    return;
                case 31:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    sendEmbmsAtCommand(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 32:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setRoamingEnable(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 33:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getRoamingEnable(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 34:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setBarringPasswordCheckedByNW(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 35:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setClip(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 36:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getColp(hwParcel.readInt32());
                    return;
                case 37:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getColr(hwParcel.readInt32());
                    return;
                case 38:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    sendCnap(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 39:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setColp(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 40:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setColr(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 41:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    int int34 = hwParcel.readInt32();
                    CallForwardInfoEx callForwardInfoEx = new CallForwardInfoEx();
                    callForwardInfoEx.readFromParcel(hwParcel);
                    queryCallForwardInTimeSlotStatus(int34, callForwardInfoEx);
                    return;
                case 42:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    int int35 = hwParcel.readInt32();
                    CallForwardInfoEx callForwardInfoEx2 = new CallForwardInfoEx();
                    callForwardInfoEx2.readFromParcel(hwParcel);
                    setCallForwardInTimeSlot(int35, callForwardInfoEx2);
                    return;
                case 43:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    runGbaAuthentication(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readBool(), hwParcel.readInt32());
                    return;
                case 44:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    sendUssi(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 45:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    cancelUssi(hwParcel.readInt32());
                    return;
                case MtkCatService.MSG_ID_CACHED_DISPLAY_TEXT_TIMEOUT /* 46 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getXcapStatus(hwParcel.readInt32());
                    return;
                case MtkCatService.MSG_ID_CONN_RETRY_TIMEOUT /* 47 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    resetSuppServ(hwParcel.readInt32());
                    return;
                case 48:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setupXcapUserAgentString(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case PplMessageManager.PendingMessage.PENDING_MESSAGE_LENGTH /* 49 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    hangupAll(hwParcel.readInt32());
                    return;
                case 50:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setCallIndication(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 51:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setEccMode(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 52:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    eccPreferredRat(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case MtkWspTypeDecoder.CONTENT_TYPE_B_CONNECTIVITY /* 53 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setVoicePreferStatus(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 54:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setEccNum(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 55:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getEccNum(hwParcel.readInt32());
                    return;
                case MtkEtwsUtils.ETWS_PDU_LENGTH /* 56 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setCallSubAddress(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 57:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getCallSubAddress(hwParcel.readInt32());
                    return;
                case 58:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    queryPhbStorageInfo(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 59:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    int int36 = hwParcel.readInt32();
                    PhbEntryStructure phbEntryStructure = new PhbEntryStructure();
                    phbEntryStructure.readFromParcel(hwParcel);
                    writePhbEntry(int36, phbEntryStructure);
                    return;
                case 60:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    readPhbEntry(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case IWorldPhone.EVENT_INVALID_SIM_NOTIFY_2 /* 61 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    queryUPBCapability(hwParcel.readInt32());
                    return;
                case IWorldPhone.EVENT_INVALID_SIM_NOTIFY_3 /* 62 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    editUPBEntry(hwParcel.readInt32(), hwParcel.readStringVector());
                    return;
                case IWorldPhone.EVENT_INVALID_SIM_NOTIFY_4 /* 63 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    deleteUPBEntry(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 64:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    readUPBGasList(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 65:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    readUPBGrpEntry(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 66:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    writeUPBGrpEntry(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 67:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getPhoneBookStringsLength(hwParcel.readInt32());
                    return;
                case 68:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getPhoneBookMemStorage(hwParcel.readInt32());
                    return;
                case 69:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setPhoneBookMemStorage(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString());
                    return;
                case IWorldPhone.EVENT_RESUME_CAMPING_1 /* 70 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    readPhoneBookEntryExt(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case IWorldPhone.EVENT_RESUME_CAMPING_2 /* 71 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    int int37 = hwParcel.readInt32();
                    PhbEntryExt phbEntryExt = new PhbEntryExt();
                    phbEntryExt.readFromParcel(hwParcel);
                    writePhoneBookEntryExt(int37, phbEntryExt);
                    return;
                case IWorldPhone.EVENT_RESUME_CAMPING_3 /* 72 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    queryUPBAvailable(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case IWorldPhone.EVENT_RESUME_CAMPING_4 /* 73 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    readUPBEmailEntry(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 74:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    readUPBSneEntry(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 75:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    readUPBAnrEntry(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 76:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    readUPBAasList(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 77:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setPhonebookReady(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 78:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setModemPower(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 79:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    triggerModeSwitchByEcc(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case IWorldPhone.EVENT_SERVICE_STATE_CHANGED_1 /* 80 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getATR(hwParcel.readInt32());
                    return;
                case IWorldPhone.EVENT_SERVICE_STATE_CHANGED_2 /* 81 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getIccid(hwParcel.readInt32());
                    return;
                case IWorldPhone.EVENT_SERVICE_STATE_CHANGED_3 /* 82 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setSimPower(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case IWorldPhone.EVENT_SERVICE_STATE_CHANGED_4 /* 83 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    activateUiccCard(hwParcel.readInt32());
                    return;
                case 84:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    deactivateUiccCard(hwParcel.readInt32());
                    return;
                case 85:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getCurrentUiccCardProvisioningStatus(hwParcel.readInt32());
                    return;
                case 86:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    int int38 = hwParcel.readInt32();
                    SimAuthStructure simAuthStructure = new SimAuthStructure();
                    simAuthStructure.readFromParcel(hwParcel);
                    doGeneralSimAuthentication(int38, simAuthStructure);
                    return;
                case BipUtils.ADDRESS_TYPE_IPV6 /* 87 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    queryNetworkLock(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 88:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setNetworkLock(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 89:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    supplyDepersonalization(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readInt32());
                    return;
                case 90:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    sendVsimNotification(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 91:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    sendVsimOperation(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt8Vector());
                    return;
                case 92:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getSmsParameters(hwParcel.readInt32());
                    return;
                case 93:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    int int39 = hwParcel.readInt32();
                    SmsParams smsParams = new SmsParams();
                    smsParams.readFromParcel(hwParcel);
                    setSmsParameters(int39, smsParams);
                    return;
                case 94:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getSmsMemStatus(hwParcel.readInt32());
                    return;
                case 95:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setEtws(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 96:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    removeCbMsg(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 97:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setGsmBroadcastLangs(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 98:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getGsmBroadcastLangs(hwParcel.readInt32());
                    return;
                case 99:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getGsmBroadcastActivation(hwParcel.readInt32());
                    return;
                case 100:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    int int310 = hwParcel.readInt32();
                    ImsSmsMessage imsSmsMessage = new ImsSmsMessage();
                    imsSmsMessage.readFromParcel(hwParcel);
                    sendImsSmsEx(int310, imsSmsMessage);
                    return;
                case 101:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    acknowledgeLastIncomingGsmSmsEx(hwParcel.readInt32(), hwParcel.readBool(), hwParcel.readInt32());
                    return;
                case 102:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    int int311 = hwParcel.readInt32();
                    CdmaSmsAck cdmaSmsAck = new CdmaSmsAck();
                    cdmaSmsAck.readFromParcel(hwParcel);
                    acknowledgeLastIncomingCdmaSmsEx(int311, cdmaSmsAck);
                    return;
                case MtkSIMRecords.EVENT_OPL5G /* 103 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    sendRequestRaw(hwParcel.readInt32(), hwParcel.readInt8Vector());
                    return;
                case 104:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    sendRequestStrings(hwParcel.readInt32(), hwParcel.readStringVector());
                    return;
                case 105:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setResumeRegistration(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 106:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    modifyModemType(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 107:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getSmsRuimMemoryStatus(hwParcel.readInt32());
                    return;
                case 108:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setNetworkSelectionModeManualWithAct(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 109:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getAvailableNetworksWithAct(hwParcel.readInt32());
                    return;
                case 110:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getSignalStrengthWithWcdmaEcio(hwParcel.readInt32());
                    return;
                case MtkGsmCdmaPhone.EVENT_UNSOL_RADIO_CAPABILITY_CHANGED /* 111 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    cancelAvailableNetworks(hwParcel.readInt32());
                    return;
                case 112:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getFemtocellList(hwParcel.readInt32());
                    return;
                case 113:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    abortFemtocellList(hwParcel.readInt32());
                    return;
                case 114:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    selectFemtocell(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 115:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    queryFemtoCellSystemSelectionMode(hwParcel.readInt32());
                    return;
                case 116:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setFemtoCellSystemSelectionMode(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 117:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setServiceStateToModem(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 118:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    cfgA2offset(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 119:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    cfgB1offset(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 120:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    enableSCGfailure(hwParcel.readInt32(), hwParcel.readBool(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 121:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    disableNR(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 122:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setTxPower(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 123:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setSearchStoredFreqInfo(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 124:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setSearchRat(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 125:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setBgsrchDeltaSleepTimer(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 126:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setRxTestConfig(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 127:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getRxTestResult(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 128:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getPOLCapability(hwParcel.readInt32());
                    return;
                case 129:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getCurrentPOLList(hwParcel.readInt32());
                    return;
                case 130:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setPOLEntry(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString(), hwParcel.readInt32());
                    return;
                case 131:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setFdMode(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 132:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setTrm(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 133:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    handleStkCallSetupRequestFromSimWithResCode(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 134:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setResponseFunctionsForAtci(IAtciResponse.asInterface(hwParcel.readStrongBinder()), IAtciIndication.asInterface(hwParcel.readStrongBinder()));
                    return;
                case 135:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    sendAtciRequest(hwParcel.readInt32(), hwParcel.readInt8Vector());
                    return;
                case 136:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    restartRILD(hwParcel.readInt32());
                    return;
                case 137:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    syncDataSettingsToMd(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 138:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    resetMdDataRetryCount(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 139:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setRemoveRestrictEutranMode(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 140:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setVoiceDomainPreference(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 141:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setWifiEnabled(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 142:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setWifiAssociated(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 143:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setWifiSignalLevel(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 144:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setWifiIpAddress(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 145:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setWfcConfig(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 146:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    querySsacStatus(hwParcel.readInt32());
                    return;
                case 147:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setLocationInfo(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 148:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setEmergencyAddressId(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 149:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setNattKeepAliveStatus(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readBool(), hwParcel.readString(), hwParcel.readInt32(), hwParcel.readString(), hwParcel.readInt32());
                    return;
                case 150:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setWifiPingResult(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 151:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setApcMode(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 152:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getApcInfo(hwParcel.readInt32());
                    return;
                case 153:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setImsBearerNotification(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 154:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setImsCfgFeatureValue(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 155:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getImsCfgFeatureValue(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 156:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setImsCfgProvisionValue(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 157:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getImsCfgProvisionValue(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 158:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getImsCfgResourceCapValue(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 159:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    dataConnectionAttach(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 160:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    dataConnectionDetach(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 161:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    resetAllConnections(hwParcel.readInt32());
                    return;
                case 162:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setLteReleaseVersion(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 163:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getLteReleaseVersion(hwParcel.readInt32());
                    return;
                case 164:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setTxPowerStatus(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 165:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setSuppServProperty(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 166:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    supplyDeviceNetworkDepersonalization(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case MtkPduPart.P_TRANSFER_ENCODING /* 167 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    notifyEPDGScreenState(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 168:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    hangupWithReason(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 169:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setResponseFunctionsSubsidyLock(ISubsidyLockResponse.asInterface(hwParcel.readStrongBinder()), ISubsidyLockIndication.asInterface(hwParcel.readStrongBinder()));
                    return;
                case 170:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setResponseFunctionsRcs(IRcsRadioResponse.asInterface(hwParcel.readStrongBinder()), IRcsRadioIndication.asInterface(hwParcel.readStrongBinder()));
                    return;
                case 171:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    sendSubsidyLockRequest(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt8Vector());
                    return;
                case 172:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setVendorSetting(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 173:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setRttMode(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 174:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    sendRttModifyRequest(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 175:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    sendRttText(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString());
                    return;
                case MtkIccConstants.SMS_RECORD_LENGTH /* 176 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    rttModifyRequestResponse(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 177:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    toggleRttAudioIndication(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 178:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    queryVopsStatus(hwParcel.readInt32());
                    return;
                case 179:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    notifyImsServiceReady();
                    return;
                case 180:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getPlmnNameFromSE13Table(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 181:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    enableCAPlusBandWidthFilter(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 182:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getVoiceDomainPreference(hwParcel.readInt32());
                    return;
                case 183:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setSipHeader(hwParcel.readInt32(), hwParcel.readStringVector());
                    return;
                case 184:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setSipHeaderReport(hwParcel.readInt32(), hwParcel.readStringVector());
                    return;
                case 185:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setImsCallMode(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 186:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setGwsdMode(hwParcel.readInt32(), hwParcel.readStringVector());
                    return;
                case 187:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setCallValidTimer(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 188:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setIgnoreSameNumberInterval(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 189:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setKeepAliveByPDCPCtrlPDU(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 190:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setKeepAliveByIpData(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 191:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    enableDsdaIndication(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 192:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getDsdaStatus(hwParcel.readInt32());
                    return;
                case 193:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    registerCellQltyReport(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 194:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getSuggestedPlmnList(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 195:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    routeCertificate(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt8Vector(), hwParcel.readInt8Vector());
                    return;
                case 196:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    routeAuthMessage(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt8Vector());
                    return;
                case 197:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    enableCapabaility(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 198:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    abortCertificate(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 199:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    eccRedialApprove(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 200:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    deactivateNrScgCommunication(hwParcel.readInt32(), hwParcel.readBool(), hwParcel.readBool());
                    return;
                case ExternalSimConstants.EVENT_TYPE_SEND_RSIM_AUTH_IND /* 201 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getDeactivateNrScgCommunication(hwParcel.readInt32());
                    return;
                case ExternalSimConstants.EVENT_TYPE_RECEIVE_RSIM_AUTH_RSP /* 202 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setMaxUlSpeed(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case ExternalSimConstants.EVENT_TYPE_RSIM_AUTH_DONE /* 203 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setResponseFunctionsSmartRatSwitch(ISmartRatSwitchRadioResponse.asInterface(hwParcel.readStrongBinder()), ISmartRatSwitchRadioIndication.asInterface(hwParcel.readStrongBinder()));
                    hwParcel2.writeStatus(0);
                    hwParcel2.send();
                    return;
                case ExternalSimConstants.EVENT_TYPE_EXTERNAL_SIM_CONNECTED /* 204 */:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    smartRatSwitch(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 205:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    getSmartRatSwitch(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 206:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setSmartSceneSwitch(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 207:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    sendSarIndicator(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 208:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    setCallAdditionalInfo(hwParcel.readInt32(), hwParcel.readStringVector());
                    return;
                case 209:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    int int312 = hwParcel.readInt32();
                    RsuRequestInfo rsuRequestInfo = new RsuRequestInfo();
                    rsuRequestInfo.readFromParcel(hwParcel);
                    sendRsuRequest(int312, rsuRequestInfo);
                    return;
                case 210:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    sendWifiEnabled(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readInt32());
                    return;
                case 211:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    sendWifiAssociated(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readInt32());
                    return;
                case 212:
                    hwParcel.enforceInterface(IMtkRadioEx.kInterfaceName);
                    sendWifiIpAddress(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readInt32(), hwParcel.readString());
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

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public final void ping() {
        }

        public IHwInterface queryLocalInterface(String str) {
            if (IMtkRadioEx.kInterfaceName.equals(str)) {
                return this;
            }
            return null;
        }

        public void registerAsService(String str) throws RemoteException {
            registerService(str);
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public final void setHALInstrumentation() {
        }

        public String toString() {
            return interfaceDescriptor() + "@Stub";
        }

        @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx
        public final boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) {
            return true;
        }
    }

    static IMtkRadioEx asInterface(IHwBinder iHwBinder) {
        if (iHwBinder == null) {
            return null;
        }
        IMtkRadioEx iMtkRadioExQueryLocalInterface = iHwBinder.queryLocalInterface(kInterfaceName);
        if (iMtkRadioExQueryLocalInterface != null && (iMtkRadioExQueryLocalInterface instanceof IMtkRadioEx)) {
            return iMtkRadioExQueryLocalInterface;
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

    static IMtkRadioEx castFrom(IHwInterface iHwInterface) {
        if (iHwInterface == null) {
            return null;
        }
        return asInterface(iHwInterface.asBinder());
    }

    static IMtkRadioEx getService() throws RemoteException {
        return getService("default");
    }

    static IMtkRadioEx getService(String str) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str));
    }

    static IMtkRadioEx getService(String str, boolean z) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str, z));
    }

    static IMtkRadioEx getService(boolean z) throws RemoteException {
        return getService("default", z);
    }

    void abortCertificate(int i, int i2) throws RemoteException;

    void abortFemtocellList(int i) throws RemoteException;

    void acknowledgeLastIncomingCdmaSmsEx(int i, CdmaSmsAck cdmaSmsAck) throws RemoteException;

    void acknowledgeLastIncomingGsmSmsEx(int i, boolean z, int i2) throws RemoteException;

    void activateUiccCard(int i) throws RemoteException;

    IHwBinder asBinder();

    void cancelAvailableNetworks(int i) throws RemoteException;

    void cancelUssi(int i) throws RemoteException;

    void cfgA2offset(int i, int i2, int i3) throws RemoteException;

    void cfgB1offset(int i, int i2, int i3) throws RemoteException;

    void conferenceDial(int i, ConferenceDial conferenceDial) throws RemoteException;

    void controlCall(int i, int i2, int i3) throws RemoteException;

    void controlImsConferenceCallMember(int i, int i2, int i3, String str, int i4) throws RemoteException;

    void dataConnectionAttach(int i, int i2) throws RemoteException;

    void dataConnectionDetach(int i, int i2) throws RemoteException;

    void deactivateNrScgCommunication(int i, boolean z, boolean z2) throws RemoteException;

    void deactivateUiccCard(int i) throws RemoteException;

    void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) throws RemoteException;

    void deleteUPBEntry(int i, int i2, int i3, int i4) throws RemoteException;

    void dialWithSipUri(int i, String str) throws RemoteException;

    void disableNR(int i, boolean z) throws RemoteException;

    void doGeneralSimAuthentication(int i, SimAuthStructure simAuthStructure) throws RemoteException;

    void eccPreferredRat(int i, int i2) throws RemoteException;

    void eccRedialApprove(int i, int i2, int i3) throws RemoteException;

    void editUPBEntry(int i, ArrayList<String> arrayList) throws RemoteException;

    void enableCAPlusBandWidthFilter(int i, boolean z) throws RemoteException;

    void enableCapabaility(int i, String str, int i2, int i3) throws RemoteException;

    void enableDsdaIndication(int i, boolean z) throws RemoteException;

    void enableSCGfailure(int i, boolean z, int i2, int i3, int i4) throws RemoteException;

    void forceReleaseCall(int i, int i2) throws RemoteException;

    void getATR(int i) throws RemoteException;

    void getApcInfo(int i) throws RemoteException;

    void getAvailableNetworksWithAct(int i) throws RemoteException;

    void getCallSubAddress(int i) throws RemoteException;

    void getColp(int i) throws RemoteException;

    void getColr(int i) throws RemoteException;

    void getCurrentPOLList(int i) throws RemoteException;

    void getCurrentUiccCardProvisioningStatus(int i) throws RemoteException;

    void getDeactivateNrScgCommunication(int i) throws RemoteException;

    DebugInfo getDebugInfo() throws RemoteException;

    void getDsdaStatus(int i) throws RemoteException;

    void getEccNum(int i) throws RemoteException;

    void getFemtocellList(int i) throws RemoteException;

    void getGsmBroadcastActivation(int i) throws RemoteException;

    void getGsmBroadcastLangs(int i) throws RemoteException;

    ArrayList<byte[]> getHashChain() throws RemoteException;

    void getIccid(int i) throws RemoteException;

    void getImsCfgFeatureValue(int i, int i2, int i3) throws RemoteException;

    void getImsCfgProvisionValue(int i, int i2) throws RemoteException;

    void getImsCfgResourceCapValue(int i, int i2) throws RemoteException;

    void getLteReleaseVersion(int i) throws RemoteException;

    void getPOLCapability(int i) throws RemoteException;

    void getPhoneBookMemStorage(int i) throws RemoteException;

    void getPhoneBookStringsLength(int i) throws RemoteException;

    void getPlmnNameFromSE13Table(int i, int i2, int i3) throws RemoteException;

    void getProvisionValue(int i, String str) throws RemoteException;

    void getRoamingEnable(int i, int i2) throws RemoteException;

    void getRxTestResult(int i, int i2) throws RemoteException;

    void getSignalStrengthWithWcdmaEcio(int i) throws RemoteException;

    void getSmartRatSwitch(int i, int i2) throws RemoteException;

    void getSmsMemStatus(int i) throws RemoteException;

    void getSmsParameters(int i) throws RemoteException;

    void getSmsRuimMemoryStatus(int i) throws RemoteException;

    void getSuggestedPlmnList(int i, int i2, int i3, int i4) throws RemoteException;

    void getVoiceDomainPreference(int i) throws RemoteException;

    void getXcapStatus(int i) throws RemoteException;

    void handleStkCallSetupRequestFromSimWithResCode(int i, int i2) throws RemoteException;

    void hangupAll(int i) throws RemoteException;

    void hangupWithReason(int i, int i2, int i3) throws RemoteException;

    void imsBearerStateConfirm(int i, int i2, int i3, int i4) throws RemoteException;

    void imsDeregNotification(int i, int i2) throws RemoteException;

    void imsEctCommand(int i, String str, int i2) throws RemoteException;

    ArrayList<String> interfaceChain() throws RemoteException;

    String interfaceDescriptor() throws RemoteException;

    boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException;

    void modifyModemType(int i, int i2, int i3) throws RemoteException;

    void notifyEPDGScreenState(int i, int i2) throws RemoteException;

    void notifyImsServiceReady() throws RemoteException;

    void notifySyspropsChanged() throws RemoteException;

    void ping() throws RemoteException;

    void pullCall(int i, String str, boolean z) throws RemoteException;

    void queryCallForwardInTimeSlotStatus(int i, CallForwardInfoEx callForwardInfoEx) throws RemoteException;

    void queryFemtoCellSystemSelectionMode(int i) throws RemoteException;

    void queryNetworkLock(int i, int i2) throws RemoteException;

    void queryPhbStorageInfo(int i, int i2) throws RemoteException;

    void querySsacStatus(int i) throws RemoteException;

    void queryUPBAvailable(int i, int i2, int i3) throws RemoteException;

    void queryUPBCapability(int i) throws RemoteException;

    void queryVopsStatus(int i) throws RemoteException;

    void readPhbEntry(int i, int i2, int i3, int i4) throws RemoteException;

    void readPhoneBookEntryExt(int i, int i2, int i3) throws RemoteException;

    void readUPBAasList(int i, int i2, int i3) throws RemoteException;

    void readUPBAnrEntry(int i, int i2, int i3) throws RemoteException;

    void readUPBEmailEntry(int i, int i2, int i3) throws RemoteException;

    void readUPBGasList(int i, int i2, int i3) throws RemoteException;

    void readUPBGrpEntry(int i, int i2) throws RemoteException;

    void readUPBSneEntry(int i, int i2, int i3) throws RemoteException;

    void registerCellQltyReport(int i, String str, String str2, String str3, String str4) throws RemoteException;

    void removeCbMsg(int i, int i2, int i3) throws RemoteException;

    void resetAllConnections(int i) throws RemoteException;

    void resetMdDataRetryCount(int i, String str) throws RemoteException;

    void resetSuppServ(int i) throws RemoteException;

    void responseAcknowledgementMtk() throws RemoteException;

    void restartRILD(int i) throws RemoteException;

    void routeAuthMessage(int i, int i2, ArrayList<Byte> arrayList) throws RemoteException;

    void routeCertificate(int i, int i2, ArrayList<Byte> arrayList, ArrayList<Byte> arrayList2) throws RemoteException;

    void rttModifyRequestResponse(int i, int i2, int i3) throws RemoteException;

    void runGbaAuthentication(int i, String str, String str2, boolean z, int i2) throws RemoteException;

    void selectFemtocell(int i, String str, String str2, String str3) throws RemoteException;

    void sendAtciRequest(int i, ArrayList<Byte> arrayList) throws RemoteException;

    void sendCnap(int i, String str) throws RemoteException;

    void sendEmbmsAtCommand(int i, String str) throws RemoteException;

    void sendImsSmsEx(int i, ImsSmsMessage imsSmsMessage) throws RemoteException;

    void sendRequestRaw(int i, ArrayList<Byte> arrayList) throws RemoteException;

    void sendRequestStrings(int i, ArrayList<String> arrayList) throws RemoteException;

    void sendRsuRequest(int i, RsuRequestInfo rsuRequestInfo) throws RemoteException;

    void sendRttModifyRequest(int i, int i2, int i3) throws RemoteException;

    void sendRttText(int i, int i2, int i3, String str) throws RemoteException;

    void sendSarIndicator(int i, int i2, String str) throws RemoteException;

    void sendSubsidyLockRequest(int i, int i2, ArrayList<Byte> arrayList) throws RemoteException;

    void sendUssi(int i, String str) throws RemoteException;

    void sendVsimNotification(int i, int i2, int i3, int i4) throws RemoteException;

    void sendVsimOperation(int i, int i2, int i3, int i4, int i5, ArrayList<Byte> arrayList) throws RemoteException;

    void sendWifiAssociated(int i, String str, int i2, String str2, String str3, int i3) throws RemoteException;

    void sendWifiEnabled(int i, String str, int i2) throws RemoteException;

    void sendWifiIpAddress(int i, String str, String str2, String str3, int i2, int i3, String str4, String str5, int i4, String str6) throws RemoteException;

    void setApcMode(int i, int i2, int i3, int i4) throws RemoteException;

    void setBarringPasswordCheckedByNW(int i, String str, String str2, String str3, String str4) throws RemoteException;

    void setBgsrchDeltaSleepTimer(int i, int i2) throws RemoteException;

    void setCallAdditionalInfo(int i, ArrayList<String> arrayList) throws RemoteException;

    void setCallForwardInTimeSlot(int i, CallForwardInfoEx callForwardInfoEx) throws RemoteException;

    void setCallIndication(int i, int i2, int i3, int i4, int i5) throws RemoteException;

    void setCallSubAddress(int i, boolean z) throws RemoteException;

    void setCallValidTimer(int i, int i2) throws RemoteException;

    void setClip(int i, int i2) throws RemoteException;

    void setColp(int i, int i2) throws RemoteException;

    void setColr(int i, int i2) throws RemoteException;

    void setEccMode(int i, String str, int i2, int i3, int i4) throws RemoteException;

    void setEccNum(int i, String str, String str2) throws RemoteException;

    void setEmergencyAddressId(int i, String str) throws RemoteException;

    void setEtws(int i, int i2) throws RemoteException;

    void setFdMode(int i, int i2, int i3, int i4) throws RemoteException;

    void setFemtoCellSystemSelectionMode(int i, int i2) throws RemoteException;

    void setGsmBroadcastLangs(int i, String str) throws RemoteException;

    void setGwsdMode(int i, ArrayList<String> arrayList) throws RemoteException;

    void setHALInstrumentation() throws RemoteException;

    void setIgnoreSameNumberInterval(int i, int i2) throws RemoteException;

    void setImsBearerNotification(int i, int i2) throws RemoteException;

    void setImsCallMode(int i, int i2) throws RemoteException;

    void setImsCfgFeatureValue(int i, int i2, int i3, int i4, int i5) throws RemoteException;

    void setImsCfgProvisionValue(int i, int i2, String str) throws RemoteException;

    void setImsEnable(int i, boolean z) throws RemoteException;

    void setImsRegistrationReport(int i) throws RemoteException;

    void setImsRtpReport(int i, int i2, int i3, int i4) throws RemoteException;

    void setImsVideoEnable(int i, boolean z) throws RemoteException;

    void setImscfg(int i, boolean z, boolean z2, boolean z3, boolean z4, boolean z5, boolean z6) throws RemoteException;

    void setKeepAliveByIpData(int i, String str) throws RemoteException;

    void setKeepAliveByPDCPCtrlPDU(int i, String str) throws RemoteException;

    void setLocationInfo(int i, String str, String str2, String str3, String str4, String str5, String str6, String str7, String str8, String str9, String str10, String str11) throws RemoteException;

    void setLteReleaseVersion(int i, int i2) throws RemoteException;

    void setMaxUlSpeed(int i, int i2) throws RemoteException;

    void setModemImsCfg(int i, String str, String str2, int i2) throws RemoteException;

    void setModemPower(int i, boolean z) throws RemoteException;

    void setNattKeepAliveStatus(int i, String str, boolean z, String str2, int i2, String str3, int i3) throws RemoteException;

    void setNetworkLock(int i, int i2, int i3, String str, String str2, String str3, String str4) throws RemoteException;

    void setNetworkSelectionModeManualWithAct(int i, String str, String str2, String str3) throws RemoteException;

    void setPOLEntry(int i, int i2, String str, int i3) throws RemoteException;

    void setPhoneBookMemStorage(int i, String str, String str2) throws RemoteException;

    void setPhonebookReady(int i, int i2) throws RemoteException;

    void setProvisionValue(int i, String str, String str2) throws RemoteException;

    void setRemoveRestrictEutranMode(int i, int i2) throws RemoteException;

    void setResponseFunctionsAssist(IAssistRadioResponse iAssistRadioResponse) throws RemoteException;

    void setResponseFunctionsCap(ICapRadioResponse iCapRadioResponse) throws RemoteException;

    void setResponseFunctionsEm(IEmRadioResponse iEmRadioResponse, IEmRadioIndication iEmRadioIndication) throws RemoteException;

    void setResponseFunctionsForAtci(IAtciResponse iAtciResponse, IAtciIndication iAtciIndication) throws RemoteException;

    void setResponseFunctionsIms(IImsRadioResponse iImsRadioResponse, IImsRadioIndication iImsRadioIndication) throws RemoteException;

    void setResponseFunctionsMtk(IMtkRadioExResponse iMtkRadioExResponse, IMtkRadioExIndication iMtkRadioExIndication) throws RemoteException;

    void setResponseFunctionsMwi(IMwiRadioResponse iMwiRadioResponse, IMwiRadioIndication iMwiRadioIndication) throws RemoteException;

    void setResponseFunctionsRcs(IRcsRadioResponse iRcsRadioResponse, IRcsRadioIndication iRcsRadioIndication) throws RemoteException;

    void setResponseFunctionsRsu(IRsuRadioResponse iRsuRadioResponse, IRsuRadioIndication iRsuRadioIndication) throws RemoteException;

    void setResponseFunctionsSE(ISERadioResponse iSERadioResponse, ISERadioIndication iSERadioIndication) throws RemoteException;

    void setResponseFunctionsSmartRatSwitch(ISmartRatSwitchRadioResponse iSmartRatSwitchRadioResponse, ISmartRatSwitchRadioIndication iSmartRatSwitchRadioIndication) throws RemoteException;

    void setResponseFunctionsSubsidyLock(ISubsidyLockResponse iSubsidyLockResponse, ISubsidyLockIndication iSubsidyLockIndication) throws RemoteException;

    void setResumeRegistration(int i, int i2) throws RemoteException;

    void setRoamingEnable(int i, ArrayList<Integer> arrayList) throws RemoteException;

    void setRttMode(int i, int i2) throws RemoteException;

    void setRxTestConfig(int i, int i2) throws RemoteException;

    void setSearchRat(int i, ArrayList<Integer> arrayList) throws RemoteException;

    void setSearchStoredFreqInfo(int i, int i2, int i3, int i4, ArrayList<Integer> arrayList) throws RemoteException;

    void setServiceStateToModem(int i, int i2, int i3, int i4, int i5, int i6, int i7) throws RemoteException;

    void setSimPower(int i, int i2) throws RemoteException;

    void setSipHeader(int i, ArrayList<String> arrayList) throws RemoteException;

    void setSipHeaderReport(int i, ArrayList<String> arrayList) throws RemoteException;

    void setSmartSceneSwitch(int i, int i2, int i3, int i4) throws RemoteException;

    void setSmsParameters(int i, SmsParams smsParams) throws RemoteException;

    void setSuppServProperty(int i, String str, String str2) throws RemoteException;

    void setTrm(int i, int i2) throws RemoteException;

    void setTxPower(int i, int i2) throws RemoteException;

    void setTxPowerStatus(int i, int i2) throws RemoteException;

    void setVendorSetting(int i, int i2, String str) throws RemoteException;

    void setVoiceDomainPreference(int i, int i2) throws RemoteException;

    void setVoicePreferStatus(int i, int i2) throws RemoteException;

    void setWfcConfig(int i, int i2, String str, String str2) throws RemoteException;

    void setWfcProfile(int i, int i2) throws RemoteException;

    void setWifiAssociated(int i, String str, int i2, String str2, String str3, int i3, String str4) throws RemoteException;

    void setWifiEnabled(int i, String str, int i2, int i3) throws RemoteException;

    void setWifiIpAddress(int i, String str, String str2, String str3, int i2, int i3, String str4, String str5, int i4, String str6) throws RemoteException;

    void setWifiPingResult(int i, int i2, int i3, int i4) throws RemoteException;

    void setWifiSignalLevel(int i, int i2, int i3) throws RemoteException;

    void setupXcapUserAgentString(int i, String str) throws RemoteException;

    void smartRatSwitch(int i, int i2, int i3) throws RemoteException;

    void supplyDepersonalization(int i, String str, int i2) throws RemoteException;

    void supplyDeviceNetworkDepersonalization(int i, String str) throws RemoteException;

    void syncDataSettingsToMd(int i, ArrayList<Integer> arrayList) throws RemoteException;

    void toggleRttAudioIndication(int i, int i2, int i3) throws RemoteException;

    void triggerModeSwitchByEcc(int i, int i2) throws RemoteException;

    boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException;

    void videoCallAccept(int i, int i2, int i3) throws RemoteException;

    void vtDial(int i, Dial dial) throws RemoteException;

    void vtDialWithSipUri(int i, String str) throws RemoteException;

    void writePhbEntry(int i, PhbEntryStructure phbEntryStructure) throws RemoteException;

    void writePhoneBookEntryExt(int i, PhbEntryExt phbEntryExt) throws RemoteException;

    void writeUPBGrpEntry(int i, int i2, ArrayList<Integer> arrayList) throws RemoteException;
}
