package vendor.mediatek.hardware.radio.V3_0;

import android.hardware.radio.V1_0.CallForwardInfo;
import android.hardware.radio.V1_0.CarrierRestrictions;
import android.hardware.radio.V1_0.CdmaBroadcastSmsConfigInfo;
import android.hardware.radio.V1_0.CdmaSmsAck;
import android.hardware.radio.V1_0.CdmaSmsMessage;
import android.hardware.radio.V1_0.CdmaSmsWriteArgs;
import android.hardware.radio.V1_0.DataProfileInfo;
import android.hardware.radio.V1_0.Dial;
import android.hardware.radio.V1_0.GsmBroadcastSmsConfigInfo;
import android.hardware.radio.V1_0.GsmSmsMessage;
import android.hardware.radio.V1_0.IccIo;
import android.hardware.radio.V1_0.ImsSmsMessage;
import android.hardware.radio.V1_0.LastCallFailCause;
import android.hardware.radio.V1_0.NvWriteItem;
import android.hardware.radio.V1_0.RadioCapability;
import android.hardware.radio.V1_0.RadioCdmaSmsConst;
import android.hardware.radio.V1_0.SelectUiccSub;
import android.hardware.radio.V1_0.SimApdu;
import android.hardware.radio.V1_0.SmsAcknowledgeFailCause;
import android.hardware.radio.V1_0.SmsWriteArgs;
import android.hardware.radio.V1_1.ImsiEncryptionInfo;
import android.hardware.radio.V1_1.KeepaliveRequest;
import android.hardware.radio.V1_1.NetworkScanRequest;
import android.hardware.radio.V1_2.ScanIntervalRange;
import android.hardware.radio.V1_4.DataCallFailCause;
import android.hardware.radio.V1_5.EutranBands;
import android.hardware.radio.V1_5.NgranBands;
import android.hardware.radio.V1_5.UtranBands;
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
import com.mediatek.ims.ImsCallSessionProxy;
import com.mediatek.ims.SipMessage;
import com.mediatek.ims.internal.ImsVTProvider;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public interface IRadio extends android.hardware.radio.V1_2.IRadio {
    public static final String kInterfaceName = "vendor.mediatek.hardware.radio@3.0::IRadio";

    public static final class Proxy implements IRadio {
        private IHwBinder mRemote;

        public Proxy(IHwBinder iHwBinder) {
            Objects.requireNonNull(iHwBinder);
            this.mRemote = iHwBinder;
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void abortFemtocellList(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.RADIO_RELEASE_ABNORMAL, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void acceptCall(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(39, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void acknowledgeIncomingGsmSmsWithPdu(int i, boolean z, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(97, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void acknowledgeLastIncomingCdmaSms(int i, CdmaSmsAck cdmaSmsAck) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            cdmaSmsAck.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(79, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void acknowledgeLastIncomingCdmaSmsEx(int i, CdmaSmsAck cdmaSmsAck) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            cdmaSmsAck.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.RADIO_OFF, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void acknowledgeLastIncomingGsmSms(int i, boolean z, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(38, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void acknowledgeLastIncomingGsmSmsEx(int i, boolean z, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.DIAL_MODIFIED_TO_DIAL, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void addImsConferenceCallMember(int i, int i2, String str, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(163, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio, android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
        public IHwBinder asBinder() {
            return this.mRemote;
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void cancelAvailableNetworks(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(257, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void cancelPendingUssd(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(31, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void cancelUssi(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(191, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void changeIccPin2ForApp(int i, String str, String str2, String str3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(8, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void changeIccPinForApp(int i, String str, String str2, String str3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(7, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void conference(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(17, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void conferenceDial(int i, ConferenceDial conferenceDial) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            conferenceDial.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(166, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void currentStatus(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(ImsVTProvider.ConnectionEx.VideoProvider.SESSION_MODIFY_CANCEL_UPGRADE_FAIL, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void dataConnectionAttach(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(303, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void dataConnectionDetach(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(304, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void deactivateDataCall(int i, int i2, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(40, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_2.IRadio
        public void deactivateDataCall_1_2(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_2.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(142, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio, android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
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

        @Override // android.hardware.radio.V1_0.IRadio
        public void deleteSmsOnRuim(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(88, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void deleteSmsOnSim(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void deleteUPBEntry(int i, int i2, int i3, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(210, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void dial(int i, Dial dial) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            dial.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(11, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void dialWithSipUri(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(168, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void doGeneralSimAuthentication(int i, SimAuthStructure simAuthStructure) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            simAuthStructure.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(230, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void eccPreferredRat(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(ImsVTProvider.ConnectionEx.VideoProvider.SESSION_MODIFY_CANCEL_UPGRADE_FAIL_AUTO_DOWNGRADE, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void editUPBEntry(int i, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(209, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void emergencyDial(int i, Dial dial) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            dial.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(197, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public final boolean equals(Object obj) {
            return HidlSupport.interfacesEqual(this, obj);
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void exitEmergencyCallbackMode(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(90, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void explicitCallTransfer(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(64, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void forceReleaseCall(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(171, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getATR(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(227, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getAllowedCarriers(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(126, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getApcInfo(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(295, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getAvailableBandModes(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(60, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getAvailableNetworks(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(47, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getAvailableNetworksWithAct(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(255, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getBasebandVersion(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(50, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getCDMASubscription(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(86, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getCallForwardStatus(int i, CallForwardInfo callForwardInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            callForwardInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(34, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getCallWaiting(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(36, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getCdmaBroadcastConfig(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(83, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getCdmaRoamingPreference(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(71, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getCdmaSubscriptionSource(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(95, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getCellInfoList(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(100, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getClip(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(54, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getClir(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(32, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getColp(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(182, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getColr(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(SipMessage.CODE_SESSION_PROGRESS, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getCurrentCalls(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(10, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getCurrentPOLList(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(267, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getDataCallList(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(55, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getDataRegistrationState(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(22, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio, android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
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

        @Override // android.hardware.radio.V1_0.IRadio
        public void getDeviceIdentity(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(89, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getEccNum(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(204, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getFacilityLockForApp(int i, String str, String str2, int i2, String str3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(41, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getFemtocellList(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(258, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getGsmBroadcastActivation(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.IMEI_NOT_ACCEPTED, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getGsmBroadcastConfig(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(80, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getGsmBroadcastLangs(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.IMSI_UNKNOWN_IN_VLR, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getHardwareConfig(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(115, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio, android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
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

        @Override // android.hardware.radio.V1_0.IRadio
        public void getIccCardStatus(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(2, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getIccid(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(228, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getImsCfgFeatureValue(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(298, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getImsCfgProvisionValue(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(ScanIntervalRange.MAX, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getImsCfgResourceCapValue(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(302, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getImsRegistrationState(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(UtranBands.BAND_C, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getImsiForApp(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(12, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getLastCallFailCause(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(19, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getLteReleaseVersion(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(307, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getModemActivityInfo(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(DataCallFailCause.INVALID_PCSCF_OR_DNS_ADDRESS, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getMute(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(53, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getNeighboringCids(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(67, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getNetworkSelectionMode(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(44, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getOperator(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(23, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getPOLCapability(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(266, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getPhoneBookMemStorage(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(215, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getPhoneBookStringsLength(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(214, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getPreferredNetworkType(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(66, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getPreferredVoicePrivacy(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(75, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getProvisionValue(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(161, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getRadioCapability(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(119, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getRoamingEnable(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(179, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getRxTestResult(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(265, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getSignalStrength(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(20, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getSignalStrengthWithWcdmaEcio(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(256, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getSmsMemStatus(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(238, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getSmsParameters(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(236, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getSmsRuimMemoryStatus(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.RADIO_ACCESS_FAILURE, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getSmscAddress(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(91, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getSuppServProperty(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(315, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getTTYMode(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(73, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getVoiceRadioTechnology(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(99, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void getVoiceRegistrationState(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(21, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void getXcapStatus(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(192, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void handleStkCallSetupRequestFromSim(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(63, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void handleStkCallSetupRequestFromSimWithResCode(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(271, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void hangup(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void hangupAll(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(195, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void hangupForegroundResumeBackground(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(15, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void hangupWaitingOrBackground(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(14, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public final int hashCode() {
            return asBinder().hashCode();
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void holdCall(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(149, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void iccCloseLogicalChannel(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(107, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void iccIOForApp(int i, IccIo iccIo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            iccIo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(29, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void iccOpenLogicalChannel(int i, String str, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(UtranBands.BAND_F, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void iccTransmitApduBasicChannel(int i, SimApdu simApdu) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            simApdu.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(UtranBands.BAND_E, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void iccTransmitApduLogicalChannel(int i, SimApdu simApdu) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            simApdu.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(108, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void imsBearerActivationDone(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(172, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void imsBearerDeactivationDone(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(173, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void imsDeregNotification(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(151, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void imsEctCommand(int i, String str, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(148, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio, android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio, android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio, android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
        public boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException {
            return this.mRemote.linkToDeath(deathRecipient, j);
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio, android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
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

        @Override // android.hardware.radio.V1_0.IRadio
        public void nvReadItem(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(109, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void nvResetConfig(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(112, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void nvWriteCdmaPrl(int i, ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt8Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(111, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void nvWriteItem(int i, NvWriteItem nvWriteItem) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            nvWriteItem.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(110, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio, android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void pullCall(int i, String str, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(175, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void pullLceData(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(DataCallFailCause.INVALID_DNS_ADDR, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void queryCallForwardInTimeSlotStatus(int i, CallForwardInfoEx callForwardInfoEx) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            callForwardInfoEx.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(187, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void queryFemtoCellSystemSelectionMode(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(261, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void queryNetworkLock(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(231, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void queryPhbStorageInfo(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void queryUPBAvailable(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(219, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void queryUPBCapability(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(208, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void readPhbEntry(int i, int i2, int i3, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(207, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void readPhoneBookEntryExt(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(217, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void readUPBAasList(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(223, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void readUPBAnrEntry(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(222, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void readUPBEmailEntry(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(220, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void readUPBGasList(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(SmsAcknowledgeFailCause.MEMORY_CAPACITY_EXCEEDED, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void readUPBGrpEntry(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(212, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void readUPBSneEntry(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(221, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void rejectCall(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(18, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void reloadModemType(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.NETWORK_REJECT, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void removeCbMsg(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.CALL_BARRED, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void removeImsConferenceCallMember(int i, int i2, String str, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(164, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void reportAirplaneMode(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(308, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void reportSimMode(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(309, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void reportSmsMemoryStatus(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(93, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void reportStkServiceIsRunning(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(94, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void requestIccSimAuthentication(int i, int i2, String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(116, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void requestIsimAuthentication(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(96, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void requestShutdown(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(118, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void resetAllConnections(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(305, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void resetMdDataRetryCount(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(280, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void resetRadio(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(277, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void resetSuppServ(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(193, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void responseAcknowledgement() throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(ImsCallSessionProxy.CALL_INFO_MSG_TYPE_MO_CALL_ID_ASSIGN, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void restartRILD(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(278, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void resumeCall(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(150, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void runGbaAuthentication(int i, String str, String str2, boolean z, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeBool(z);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(189, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void selectFemtocell(int i, String str, String str2, String str3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(260, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void sendAtciRequest(int i, ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt8Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(276, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void sendBurstDtmf(int i, String str, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(77, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void sendCDMAFeatureCode(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(76, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void sendCdmaSms(int i, CdmaSmsMessage cdmaSmsMessage) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            cdmaSmsMessage.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(78, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void sendCnap(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(184, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void sendDeviceState(int i, int i2, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(127, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void sendDtmf(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(25, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void sendEmbmsAtCommand(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(177, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void sendEnvelope(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(61, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void sendEnvelopeWithStatus(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(98, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void sendImsSms(int i, ImsSmsMessage imsSmsMessage) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            imsSmsMessage.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(UtranBands.BAND_D, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void sendImsSmsEx(int i, ImsSmsMessage imsSmsMessage) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            imsSmsMessage.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.DIAL_MODIFIED_TO_USSD, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void sendRequestRaw(int i, ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt8Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.OUT_OF_SERVICE, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void sendRequestStrings(int i, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.NO_VALID_SIM, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void sendSMSExpectMore(int i, GsmSmsMessage gsmSmsMessage) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            gsmSmsMessage.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(27, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void sendSms(int i, GsmSmsMessage gsmSmsMessage) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            gsmSmsMessage.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(26, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void sendTerminalResponseToSim(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(62, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void sendUssd(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(30, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void sendUssi(int i, int i2, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(190, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void sendVsimNotification(int i, int i2, int i3, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(234, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void sendVsimOperation(int i, int i2, int i3, int i4, int i5, ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            hwParcel.writeInt32(i5);
            hwParcel.writeInt8Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(235, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void separateConnection(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(51, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setAllowedCarriers(int i, boolean z, CarrierRestrictions carrierRestrictions) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            carrierRestrictions.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(125, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setApcMode(int i, int i2, int i3, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(294, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setBandMode(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(59, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setBarringPassword(int i, String str, String str2, String str3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(43, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setBarringPasswordCheckedByNW(int i, String str, String str2, String str3, String str4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            hwParcel.writeString(str4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(180, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setCallForward(int i, CallForwardInfo callForwardInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            callForwardInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(35, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setCallForwardInTimeSlot(int i, CallForwardInfoEx callForwardInfoEx) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            callForwardInfoEx.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(188, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setCallIndication(int i, int i2, int i3, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(196, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setCallWaiting(int i, boolean z, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(37, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_1.IRadio
        public void setCarrierInfoForImsiEncryption(int i, ImsiEncryptionInfo imsiEncryptionInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_1.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            imsiEncryptionInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(131, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setCdmaBroadcastActivation(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(85, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setCdmaBroadcastConfig(int i, ArrayList<CdmaBroadcastSmsConfigInfo> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            CdmaBroadcastSmsConfigInfo.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(84, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setCdmaRoamingPreference(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(70, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setCdmaSubscriptionSource(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(69, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setCellInfoListRate(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(101, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setClip(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(181, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setClir(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setColp(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setColr(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(186, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setDataAllowed(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(114, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setDataProfile(int i, ArrayList<DataProfileInfo> arrayList, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            DataProfileInfo.writeVectorToParcel(hwParcel, arrayList);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(117, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setE911State(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(284, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setEccList(int i, String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(199, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setEccNum(int i, String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(203, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setEccServiceCategory(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setEmergencyAddressId(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(291, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setEtws(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(239, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setFacilityLockForApp(int i, String str, boolean z, String str2, int i2, String str3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeBool(z);
            hwParcel.writeString(str2);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(42, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setFdMode(int i, int i2, int i3, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(269, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setFemtoCellSystemSelectionMode(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(262, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setGsmBroadcastActivation(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(82, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setGsmBroadcastConfig(int i, ArrayList<GsmBroadcastSmsConfigInfo> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            GsmBroadcastSmsConfigInfo.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(81, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setGsmBroadcastLangs(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.FDN_BLOCKED, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio, android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setImsBearerNotification(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(296, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setImsCfgFeatureValue(int i, int i2, int i3, int i4, int i5) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            hwParcel.writeInt32(i5);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(297, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setImsCfgProvisionValue(int i, int i2, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(299, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setImsCfgResourceCapValue(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(301, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setImsEnable(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(152, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setImsRegistrationReport(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(176, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setImsRtpReport(int i, int i2, int i3, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(174, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setImsVideoEnable(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(159, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setImsVoiceEnable(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(158, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setImscfg(int i, boolean z, boolean z2, boolean z3, boolean z4, boolean z5, boolean z6) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            hwParcel.writeBool(z2);
            hwParcel.writeBool(z3);
            hwParcel.writeBool(z4);
            hwParcel.writeBool(z5);
            hwParcel.writeBool(z6);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(160, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setIndicationFilter(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(128, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_2.IRadio
        public void setIndicationFilter_1_2(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_2.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(138, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setInitialAttachApn(int i, DataProfileInfo dataProfileInfo, boolean z, boolean z2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            dataProfileInfo.writeToParcel(hwParcel);
            hwParcel.writeBool(z);
            hwParcel.writeBool(z2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(102, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_2.IRadio
        public void setLinkCapacityReportingCriteria(int i, int i2, int i3, int i4, ArrayList<Integer> arrayList, ArrayList<Integer> arrayList2, int i5) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_2.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            hwParcel.writeInt32Vector(arrayList);
            hwParcel.writeInt32Vector(arrayList2);
            hwParcel.writeInt32(i5);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(140, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setLocationInfo(int i, String str, String str2, String str3, String str4, String str5, String str6, String str7, String str8, String str9, String str10, String str11) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
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
                this.mRemote.transact(290, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setLocationUpdates(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(68, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setLteAccessStratumReport(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(282, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setLteReleaseVersion(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(306, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setLteUplinkDataTransfer(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(283, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setModemImsCfg(int i, String str, String str2, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(167, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setModemPower(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(225, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setMute(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(52, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setNattKeepAliveStatus(int i, String str, boolean z, String str2, int i2, String str3, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeBool(z);
            hwParcel.writeString(str2);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str3);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(292, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setNetworkLock(int i, int i2, int i3, String str, String str2, String str3, String str4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            hwParcel.writeString(str4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(232, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setNetworkSelectionModeAutomatic(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(45, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setNetworkSelectionModeManual(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(46, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setNetworkSelectionModeManualWithAct(int i, String str, String str2, String str3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.RADIO_LINK_FAILURE, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setOperatorConfiguration(int i, int i2, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(313, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setOverrideApn(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(273, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setPOLEntry(int i, int i2, String str, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(268, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setPdnNameReuse(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(274, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setPdnReuse(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(272, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setPhoneBookMemStorage(int i, String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(216, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setPhonebookReady(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(224, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setPreferredNetworkType(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
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

        @Override // android.hardware.radio.V1_0.IRadio
        public void setPreferredVoicePrivacy(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(74, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setPropImsHandover(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(312, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setProvisionValue(int i, String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(162, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setRadioCapability(int i, RadioCapability radioCapability) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            radioCapability.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(120, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setRadioPower(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(24, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setRcsUaEnable(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(157, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setRemoveRestrictEutranMode(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(281, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setResponseFunctions(android.hardware.radio.V1_0.IRadioResponse iRadioResponse, android.hardware.radio.V1_0.IRadioIndication iRadioIndication) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeStrongBinder(iRadioResponse == null ? null : iRadioResponse.asBinder());
            hwParcel.writeStrongBinder(iRadioIndication != null ? iRadioIndication.asBinder() : null);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(1, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setResponseFunctionsForAtci(IAtciResponse iAtciResponse, IAtciIndication iAtciIndication) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeStrongBinder(iAtciResponse == null ? null : iAtciResponse.asBinder());
            hwParcel.writeStrongBinder(iAtciIndication != null ? iAtciIndication.asBinder() : null);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(275, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setResponseFunctionsIms(IImsRadioResponse iImsRadioResponse, IImsRadioIndication iImsRadioIndication) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeStrongBinder(iImsRadioResponse == null ? null : iImsRadioResponse.asBinder());
            hwParcel.writeStrongBinder(iImsRadioIndication != null ? iImsRadioIndication.asBinder() : null);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(144, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setResponseFunctionsMtk(IRadioResponse iRadioResponse, IRadioIndication iRadioIndication) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeStrongBinder(iRadioResponse == null ? null : iRadioResponse.asBinder());
            hwParcel.writeStrongBinder(iRadioIndication != null ? iRadioIndication.asBinder() : null);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(143, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setResponseFunctionsMwi(IMwiRadioResponse iMwiRadioResponse, IMwiRadioIndication iMwiRadioIndication) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeStrongBinder(iMwiRadioResponse == null ? null : iMwiRadioResponse.asBinder());
            hwParcel.writeStrongBinder(iMwiRadioIndication != null ? iMwiRadioIndication.asBinder() : null);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(145, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setResponseFunctionsSE(ISERadioResponse iSERadioResponse, ISERadioIndication iSERadioIndication) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeStrongBinder(iSERadioResponse == null ? null : iSERadioResponse.asBinder());
            hwParcel.writeStrongBinder(iSERadioIndication != null ? iSERadioIndication.asBinder() : null);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(146, hwParcel, hwParcel2, 0);
                hwParcel2.verifySuccess();
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setResumeRegistration(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.RADIO_INTERNAL_ERROR, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setRoamingEnable(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(178, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setRxTestConfig(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(264, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setServiceStateToModem(int i, int i2, int i3, int i4, int i5, int i6, int i7) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            hwParcel.writeInt32(i5);
            hwParcel.writeInt32(i6);
            hwParcel.writeInt32(i7);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(263, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_2.IRadio
        public void setSignalStrengthReportingCriteria(int i, int i2, int i3, ArrayList<Integer> arrayList, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_2.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32Vector(arrayList);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(139, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setSilentReboot(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(310, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setSimCardPower(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(129, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_1.IRadio
        public void setSimCardPower_1_1(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_1.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(ImsCallSessionProxy.CALL_INFO_MSG_TYPE_ACTIVE, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setSimPower(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(RadioCdmaSmsConst.USER_DATA_MAX, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setSmsFwkReady(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.DIAL_MODIFIED_TO_SS, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setSmsParameters(int i, SmsParams smsParams) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            smsParams.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(237, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setSmscAddress(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(92, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setSuppServProperty(int i, String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(314, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setSuppServiceNotifications(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
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

        @Override // android.hardware.radio.V1_0.IRadio
        public void setTTYMode(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(72, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setTrm(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(270, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setTxPowerStatus(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(311, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setUiccSubscription(int i, SelectUiccSub selectUiccSub) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            selectUiccSub.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(113, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setViWifiEnable(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(156, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setVilteEnable(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(155, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setVoiceDomainPreference(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(285, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setVoicePreferStatus(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(ImsVTProvider.ConnectionEx.VideoProvider.SESSION_MODIFY_CANCEL_UPGRADE_FAIL_REMOTE_REJECT_UPGRADE, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setVolteEnable(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(153, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setWfcEnable(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(154, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setWfcProfile(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(165, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setWifiAssociated(int i, String str, int i2, String str2, String str3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(287, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setWifiEnabled(int i, String str, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(286, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setWifiIpAddress(int i, String str, String str2, String str3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(289, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setWifiPingResult(int i, int i2, int i3, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(293, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setWifiSignalLevel(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(288, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void setupDataCall(int i, int i2, DataProfileInfo dataProfileInfo, boolean z, boolean z2, boolean z3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            dataProfileInfo.writeToParcel(hwParcel);
            hwParcel.writeBool(z);
            hwParcel.writeBool(z2);
            hwParcel.writeBool(z3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(28, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_2.IRadio
        public void setupDataCall_1_2(int i, int i2, DataProfileInfo dataProfileInfo, boolean z, boolean z2, boolean z3, int i3, ArrayList<String> arrayList, ArrayList<String> arrayList2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_2.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            dataProfileInfo.writeToParcel(hwParcel);
            hwParcel.writeBool(z);
            hwParcel.writeBool(z2);
            hwParcel.writeBool(z3);
            hwParcel.writeInt32(i3);
            hwParcel.writeStringVector(arrayList);
            hwParcel.writeStringVector(arrayList2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(141, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void setupXcapUserAgentString(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(194, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void startDtmf(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
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

        @Override // android.hardware.radio.V1_1.IRadio
        public void startKeepalive(int i, KeepaliveRequest keepaliveRequest) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_1.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            keepaliveRequest.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(ImsCallSessionProxy.CALL_INFO_MSG_TYPE_REMOTE_HOLD, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void startLceService(int i, int i2, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(121, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_1.IRadio
        public void startNetworkScan(int i, NetworkScanRequest networkScanRequest) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_1.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            networkScanRequest.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(ImsCallSessionProxy.CALL_INFO_MSG_TYPE_DISCONNECTED, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_2.IRadio
        public void startNetworkScan_1_2(int i, android.hardware.radio.V1_2.NetworkScanRequest networkScanRequest) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_2.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            networkScanRequest.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(137, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void stopDtmf(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(49, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_1.IRadio
        public void stopKeepalive(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_1.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(ImsCallSessionProxy.CALL_INFO_MSG_TYPE_REMOTE_RESUME, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void stopLceService(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(122, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_1.IRadio
        public void stopNetworkScan(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_1.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(RadioCdmaSmsConst.UDH_VAR_PIC_SIZE, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void storeModemType(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(LastCallFailCause.NETWORK_RESP_TIMEOUT, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void supplyDepersonalization(int i, String str, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(233, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void supplyDeviceNetworkDepersonalization(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(316, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void supplyIccPin2ForApp(int i, String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(5, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void supplyIccPinForApp(int i, String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(3, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void supplyIccPuk2ForApp(int i, String str, String str2, String str3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
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

        @Override // android.hardware.radio.V1_0.IRadio
        public void supplyIccPukForApp(int i, String str, String str2, String str3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(4, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void supplyNetworkDepersonalization(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(9, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void switchWaitingOrHoldingAndActive(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(16, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void syncDataSettingsToMd(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(279, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public String toString() {
            try {
                return interfaceDescriptor() + "@Proxy";
            } catch (RemoteException e) {
                return "[class or subclass of vendor.mediatek.hardware.radio@3.0::IRadio]@Proxy";
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void triggerModeSwitchByEcc(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(RadioCdmaSmsConst.UDH_OTHER_SIZE, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio, android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
        public boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException {
            return this.mRemote.unlinkToDeath(deathRecipient);
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void videoCallAccept(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(147, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void vtDial(int i, Dial dial) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            dial.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(170, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void vtDialWithSipUri(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(169, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void writePhbEntry(int i, PhbEntryStructure phbEntryStructure) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            phbEntryStructure.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(206, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void writePhoneBookEntryExt(int i, PhbEntryExt phbEntryExt) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            phbEntryExt.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(218, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void writeSmsToRuim(int i, CdmaSmsWriteArgs cdmaSmsWriteArgs) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            cdmaSmsWriteArgs.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(87, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadio
        public void writeSmsToSim(int i, SmsWriteArgs smsWriteArgs) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            smsWriteArgs.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(57, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio
        public void writeUPBGrpEntry(int i, int i2, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadio.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(213, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }
    }

    public static abstract class Stub extends HwBinder implements IRadio {
        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio, android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
        public IHwBinder asBinder() {
            return this;
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio, android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
        public void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) {
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio, android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
        public final DebugInfo getDebugInfo() {
            DebugInfo debugInfo = new DebugInfo();
            debugInfo.pid = HidlSupport.getPidIfSharable();
            debugInfo.ptr = 0L;
            debugInfo.arch = 0;
            return debugInfo;
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio, android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
        public final ArrayList<byte[]> getHashChain() {
            return new ArrayList<>(Arrays.asList(new byte[]{-52, -9, -76, -55, 88, -117, 5, 95, 74, 2, -86, -82, -118, 1, 48, -96, 123, -12, 82, -59, -72, -10, -41, -99, 59, 43, 118, 94, -21, -91, 21, -73}, new byte[]{29, 25, 114, 13, 79, -45, -117, 16, -107, -16, -11, 85, -92, -67, -110, -77, -79, 44, -101, 29, 15, 86, 11, 14, -102, 71, 76, -42, -36, -62, 13, -74}, new byte[]{-9, -98, -33, 80, -93, 120, -87, -55, -69, 115, 127, -109, -14, 5, -38, -71, 27, 76, 99, -22, 73, 114, 58, -4, 111, -123, 108, 19, -126, 3, -22, -127}, new byte[]{-101, 90, -92, -103, -20, 59, 66, 38, -15, 95, 72, -11, -19, 8, -119, 110, 47, -64, 103, 111, -105, -116, -98, 25, -100, 29, -94, 29, -86, -16, 2, -90}, new byte[]{-20, 127, -41, -98, -48, 45, -6, -123, -68, 73, -108, 38, -83, -82, 62, -66, 35, -17, 5, 36, -13, -51, 105, 87, 19, -109, 36, -72, 59, 24, -54, 76}));
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio, android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
        public final ArrayList<String> interfaceChain() {
            return new ArrayList<>(Arrays.asList(IRadio.kInterfaceName, android.hardware.radio.V1_2.IRadio.kInterfaceName, android.hardware.radio.V1_1.IRadio.kInterfaceName, android.hardware.radio.V1_0.IRadio.kInterfaceName, IBase.kInterfaceName));
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio, android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
        public final String interfaceDescriptor() {
            return IRadio.kInterfaceName;
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio, android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
        public final boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) {
            return true;
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio, android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
        public final void notifySyspropsChanged() {
            HwBinder.enableInstrumentation();
        }

        public void onTransact(int i, HwParcel hwParcel, HwParcel hwParcel2, int i2) throws RemoteException {
            switch (i) {
                case 1:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setResponseFunctions(android.hardware.radio.V1_0.IRadioResponse.asInterface(hwParcel.readStrongBinder()), android.hardware.radio.V1_0.IRadioIndication.asInterface(hwParcel.readStrongBinder()));
                    hwParcel2.writeStatus(0);
                    hwParcel2.send();
                    return;
                case 2:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getIccCardStatus(hwParcel.readInt32());
                    return;
                case 3:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    supplyIccPinForApp(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 4:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    supplyIccPukForApp(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 5:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    supplyIccPin2ForApp(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 6:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    supplyIccPuk2ForApp(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 7:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    changeIccPinForApp(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 8:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    changeIccPin2ForApp(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 9:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    supplyNetworkDepersonalization(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 10:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getCurrentCalls(hwParcel.readInt32());
                    return;
                case 11:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    int int32 = hwParcel.readInt32();
                    Dial dial = new Dial();
                    dial.readFromParcel(hwParcel);
                    dial(int32, dial);
                    return;
                case 12:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getImsiForApp(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 13:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    hangup(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 14:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    hangupWaitingOrBackground(hwParcel.readInt32());
                    return;
                case 15:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    hangupForegroundResumeBackground(hwParcel.readInt32());
                    return;
                case 16:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    switchWaitingOrHoldingAndActive(hwParcel.readInt32());
                    return;
                case 17:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    conference(hwParcel.readInt32());
                    return;
                case 18:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    rejectCall(hwParcel.readInt32());
                    return;
                case 19:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getLastCallFailCause(hwParcel.readInt32());
                    return;
                case 20:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getSignalStrength(hwParcel.readInt32());
                    return;
                case 21:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getVoiceRegistrationState(hwParcel.readInt32());
                    return;
                case 22:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getDataRegistrationState(hwParcel.readInt32());
                    return;
                case 23:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getOperator(hwParcel.readInt32());
                    return;
                case 24:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setRadioPower(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 25:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    sendDtmf(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 26:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    int int33 = hwParcel.readInt32();
                    GsmSmsMessage gsmSmsMessage = new GsmSmsMessage();
                    gsmSmsMessage.readFromParcel(hwParcel);
                    sendSms(int33, gsmSmsMessage);
                    return;
                case 27:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    int int34 = hwParcel.readInt32();
                    GsmSmsMessage gsmSmsMessage2 = new GsmSmsMessage();
                    gsmSmsMessage2.readFromParcel(hwParcel);
                    sendSMSExpectMore(int34, gsmSmsMessage2);
                    return;
                case 28:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    int int35 = hwParcel.readInt32();
                    int int36 = hwParcel.readInt32();
                    DataProfileInfo dataProfileInfo = new DataProfileInfo();
                    dataProfileInfo.readFromParcel(hwParcel);
                    setupDataCall(int35, int36, dataProfileInfo, hwParcel.readBool(), hwParcel.readBool(), hwParcel.readBool());
                    return;
                case 29:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    int int37 = hwParcel.readInt32();
                    IccIo iccIo = new IccIo();
                    iccIo.readFromParcel(hwParcel);
                    iccIOForApp(int37, iccIo);
                    return;
                case 30:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    sendUssd(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 31:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    cancelPendingUssd(hwParcel.readInt32());
                    return;
                case 32:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getClir(hwParcel.readInt32());
                    return;
                case 33:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setClir(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 34:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    int int38 = hwParcel.readInt32();
                    CallForwardInfo callForwardInfo = new CallForwardInfo();
                    callForwardInfo.readFromParcel(hwParcel);
                    getCallForwardStatus(int38, callForwardInfo);
                    return;
                case 35:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    int int39 = hwParcel.readInt32();
                    CallForwardInfo callForwardInfo2 = new CallForwardInfo();
                    callForwardInfo2.readFromParcel(hwParcel);
                    setCallForward(int39, callForwardInfo2);
                    return;
                case 36:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getCallWaiting(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 37:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setCallWaiting(hwParcel.readInt32(), hwParcel.readBool(), hwParcel.readInt32());
                    return;
                case 38:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    acknowledgeLastIncomingGsmSms(hwParcel.readInt32(), hwParcel.readBool(), hwParcel.readInt32());
                    return;
                case 39:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    acceptCall(hwParcel.readInt32());
                    return;
                case 40:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    deactivateDataCall(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 41:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getFacilityLockForApp(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 42:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setFacilityLockForApp(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readBool(), hwParcel.readString(), hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 43:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setBarringPassword(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 44:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getNetworkSelectionMode(hwParcel.readInt32());
                    return;
                case 45:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setNetworkSelectionModeAutomatic(hwParcel.readInt32());
                    return;
                case 46:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setNetworkSelectionModeManual(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 47:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getAvailableNetworks(hwParcel.readInt32());
                    return;
                case 48:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    startDtmf(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 49:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    stopDtmf(hwParcel.readInt32());
                    return;
                case 50:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getBasebandVersion(hwParcel.readInt32());
                    return;
                case 51:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    separateConnection(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 52:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setMute(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 53:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getMute(hwParcel.readInt32());
                    return;
                case 54:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getClip(hwParcel.readInt32());
                    return;
                case 55:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getDataCallList(hwParcel.readInt32());
                    return;
                case 56:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setSuppServiceNotifications(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 57:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    int int310 = hwParcel.readInt32();
                    SmsWriteArgs smsWriteArgs = new SmsWriteArgs();
                    smsWriteArgs.readFromParcel(hwParcel);
                    writeSmsToSim(int310, smsWriteArgs);
                    return;
                case 58:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    deleteSmsOnSim(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 59:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setBandMode(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 60:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getAvailableBandModes(hwParcel.readInt32());
                    return;
                case 61:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    sendEnvelope(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 62:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    sendTerminalResponseToSim(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 63:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    handleStkCallSetupRequestFromSim(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 64:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    explicitCallTransfer(hwParcel.readInt32());
                    return;
                case 65:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setPreferredNetworkType(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 66:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getPreferredNetworkType(hwParcel.readInt32());
                    return;
                case 67:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getNeighboringCids(hwParcel.readInt32());
                    return;
                case 68:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setLocationUpdates(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case LastCallFailCause.REQUESTED_FACILITY_NOT_IMPLEMENTED /* 69 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setCdmaSubscriptionSource(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 70:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setCdmaRoamingPreference(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 71:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getCdmaRoamingPreference(hwParcel.readInt32());
                    return;
                case 72:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setTTYMode(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 73:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getTTYMode(hwParcel.readInt32());
                    return;
                case 74:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setPreferredVoicePrivacy(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 75:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getPreferredVoicePrivacy(hwParcel.readInt32());
                    return;
                case 76:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    sendCDMAFeatureCode(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 77:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    sendBurstDtmf(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 78:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    int int311 = hwParcel.readInt32();
                    CdmaSmsMessage cdmaSmsMessage = new CdmaSmsMessage();
                    cdmaSmsMessage.readFromParcel(hwParcel);
                    sendCdmaSms(int311, cdmaSmsMessage);
                    return;
                case 79:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    int int312 = hwParcel.readInt32();
                    CdmaSmsAck cdmaSmsAck = new CdmaSmsAck();
                    cdmaSmsAck.readFromParcel(hwParcel);
                    acknowledgeLastIncomingCdmaSms(int312, cdmaSmsAck);
                    return;
                case NgranBands.BAND_80 /* 80 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getGsmBroadcastConfig(hwParcel.readInt32());
                    return;
                case 81:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setGsmBroadcastConfig(hwParcel.readInt32(), GsmBroadcastSmsConfigInfo.readVectorFromParcel(hwParcel));
                    return;
                case NgranBands.BAND_82 /* 82 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setGsmBroadcastActivation(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case NgranBands.BAND_83 /* 83 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getCdmaBroadcastConfig(hwParcel.readInt32());
                    return;
                case NgranBands.BAND_84 /* 84 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setCdmaBroadcastConfig(hwParcel.readInt32(), CdmaBroadcastSmsConfigInfo.readVectorFromParcel(hwParcel));
                    return;
                case EutranBands.BAND_85 /* 85 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setCdmaBroadcastActivation(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case NgranBands.BAND_86 /* 86 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getCDMASubscription(hwParcel.readInt32());
                    return;
                case 87:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    int int313 = hwParcel.readInt32();
                    CdmaSmsWriteArgs cdmaSmsWriteArgs = new CdmaSmsWriteArgs();
                    cdmaSmsWriteArgs.readFromParcel(hwParcel);
                    writeSmsToRuim(int313, cdmaSmsWriteArgs);
                    return;
                case 88:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    deleteSmsOnRuim(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case NgranBands.BAND_89 /* 89 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getDeviceIdentity(hwParcel.readInt32());
                    return;
                case NgranBands.BAND_90 /* 90 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    exitEmergencyCallbackMode(hwParcel.readInt32());
                    return;
                case 91:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getSmscAddress(hwParcel.readInt32());
                    return;
                case NgranBands.BAND_92 /* 92 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setSmscAddress(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case NgranBands.BAND_93 /* 93 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    reportSmsMemoryStatus(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case NgranBands.BAND_94 /* 94 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    reportStkServiceIsRunning(hwParcel.readInt32());
                    return;
                case 95:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getCdmaSubscriptionSource(hwParcel.readInt32());
                    return;
                case 96:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    requestIsimAuthentication(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 97:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    acknowledgeIncomingGsmSmsWithPdu(hwParcel.readInt32(), hwParcel.readBool(), hwParcel.readString());
                    return;
                case 98:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    sendEnvelopeWithStatus(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 99:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getVoiceRadioTechnology(hwParcel.readInt32());
                    return;
                case 100:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getCellInfoList(hwParcel.readInt32());
                    return;
                case 101:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setCellInfoListRate(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 102:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    int int314 = hwParcel.readInt32();
                    DataProfileInfo dataProfileInfo2 = new DataProfileInfo();
                    dataProfileInfo2.readFromParcel(hwParcel);
                    setInitialAttachApn(int314, dataProfileInfo2, hwParcel.readBool(), hwParcel.readBool());
                    return;
                case UtranBands.BAND_C /* 103 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getImsRegistrationState(hwParcel.readInt32());
                    return;
                case UtranBands.BAND_D /* 104 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    int int315 = hwParcel.readInt32();
                    ImsSmsMessage imsSmsMessage = new ImsSmsMessage();
                    imsSmsMessage.readFromParcel(hwParcel);
                    sendImsSms(int315, imsSmsMessage);
                    return;
                case UtranBands.BAND_E /* 105 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    int int316 = hwParcel.readInt32();
                    SimApdu simApdu = new SimApdu();
                    simApdu.readFromParcel(hwParcel);
                    iccTransmitApduBasicChannel(int316, simApdu);
                    return;
                case UtranBands.BAND_F /* 106 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    iccOpenLogicalChannel(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readInt32());
                    return;
                case 107:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    iccCloseLogicalChannel(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 108:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    int int317 = hwParcel.readInt32();
                    SimApdu simApdu2 = new SimApdu();
                    simApdu2.readFromParcel(hwParcel);
                    iccTransmitApduLogicalChannel(int317, simApdu2);
                    return;
                case 109:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    nvReadItem(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 110:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    int int318 = hwParcel.readInt32();
                    NvWriteItem nvWriteItem = new NvWriteItem();
                    nvWriteItem.readFromParcel(hwParcel);
                    nvWriteItem(int318, nvWriteItem);
                    return;
                case 111:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    nvWriteCdmaPrl(hwParcel.readInt32(), hwParcel.readInt8Vector());
                    return;
                case 112:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    nvResetConfig(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 113:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    int int319 = hwParcel.readInt32();
                    SelectUiccSub selectUiccSub = new SelectUiccSub();
                    selectUiccSub.readFromParcel(hwParcel);
                    setUiccSubscription(int319, selectUiccSub);
                    return;
                case 114:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setDataAllowed(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 115:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getHardwareConfig(hwParcel.readInt32());
                    return;
                case 116:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    requestIccSimAuthentication(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 117:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setDataProfile(hwParcel.readInt32(), DataProfileInfo.readVectorFromParcel(hwParcel), hwParcel.readBool());
                    return;
                case 118:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    requestShutdown(hwParcel.readInt32());
                    return;
                case 119:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getRadioCapability(hwParcel.readInt32());
                    return;
                case 120:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    int int320 = hwParcel.readInt32();
                    RadioCapability radioCapability = new RadioCapability();
                    radioCapability.readFromParcel(hwParcel);
                    setRadioCapability(int320, radioCapability);
                    return;
                case 121:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    startLceService(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 122:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    stopLceService(hwParcel.readInt32());
                    return;
                case DataCallFailCause.INVALID_DNS_ADDR /* 123 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    pullLceData(hwParcel.readInt32());
                    return;
                case DataCallFailCause.INVALID_PCSCF_OR_DNS_ADDRESS /* 124 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getModemActivityInfo(hwParcel.readInt32());
                    return;
                case 125:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    int int321 = hwParcel.readInt32();
                    boolean bool = hwParcel.readBool();
                    CarrierRestrictions carrierRestrictions = new CarrierRestrictions();
                    carrierRestrictions.readFromParcel(hwParcel);
                    setAllowedCarriers(int321, bool, carrierRestrictions);
                    return;
                case 126:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    getAllowedCarriers(hwParcel.readInt32());
                    return;
                case 127:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    sendDeviceState(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 128:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setIndicationFilter(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 129:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    setSimCardPower(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case ImsCallSessionProxy.CALL_INFO_MSG_TYPE_MO_CALL_ID_ASSIGN /* 130 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadio.kInterfaceName);
                    responseAcknowledgement();
                    return;
                case 131:
                    hwParcel.enforceInterface(android.hardware.radio.V1_1.IRadio.kInterfaceName);
                    int int322 = hwParcel.readInt32();
                    ImsiEncryptionInfo imsiEncryptionInfo = new ImsiEncryptionInfo();
                    imsiEncryptionInfo.readFromParcel(hwParcel);
                    setCarrierInfoForImsiEncryption(int322, imsiEncryptionInfo);
                    return;
                case ImsCallSessionProxy.CALL_INFO_MSG_TYPE_ACTIVE /* 132 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_1.IRadio.kInterfaceName);
                    setSimCardPower_1_1(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case ImsCallSessionProxy.CALL_INFO_MSG_TYPE_DISCONNECTED /* 133 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_1.IRadio.kInterfaceName);
                    int int323 = hwParcel.readInt32();
                    NetworkScanRequest networkScanRequest = new NetworkScanRequest();
                    networkScanRequest.readFromParcel(hwParcel);
                    startNetworkScan(int323, networkScanRequest);
                    return;
                case RadioCdmaSmsConst.UDH_VAR_PIC_SIZE /* 134 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_1.IRadio.kInterfaceName);
                    stopNetworkScan(hwParcel.readInt32());
                    return;
                case ImsCallSessionProxy.CALL_INFO_MSG_TYPE_REMOTE_HOLD /* 135 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_1.IRadio.kInterfaceName);
                    int int324 = hwParcel.readInt32();
                    KeepaliveRequest keepaliveRequest = new KeepaliveRequest();
                    keepaliveRequest.readFromParcel(hwParcel);
                    startKeepalive(int324, keepaliveRequest);
                    return;
                case ImsCallSessionProxy.CALL_INFO_MSG_TYPE_REMOTE_RESUME /* 136 */:
                    hwParcel.enforceInterface(android.hardware.radio.V1_1.IRadio.kInterfaceName);
                    stopKeepalive(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 137:
                    hwParcel.enforceInterface(android.hardware.radio.V1_2.IRadio.kInterfaceName);
                    int int325 = hwParcel.readInt32();
                    android.hardware.radio.V1_2.NetworkScanRequest networkScanRequest2 = new android.hardware.radio.V1_2.NetworkScanRequest();
                    networkScanRequest2.readFromParcel(hwParcel);
                    startNetworkScan_1_2(int325, networkScanRequest2);
                    return;
                case 138:
                    hwParcel.enforceInterface(android.hardware.radio.V1_2.IRadio.kInterfaceName);
                    setIndicationFilter_1_2(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 139:
                    hwParcel.enforceInterface(android.hardware.radio.V1_2.IRadio.kInterfaceName);
                    setSignalStrengthReportingCriteria(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32Vector(), hwParcel.readInt32());
                    return;
                case 140:
                    hwParcel.enforceInterface(android.hardware.radio.V1_2.IRadio.kInterfaceName);
                    setLinkCapacityReportingCriteria(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32Vector(), hwParcel.readInt32Vector(), hwParcel.readInt32());
                    return;
                case 141:
                    hwParcel.enforceInterface(android.hardware.radio.V1_2.IRadio.kInterfaceName);
                    int int326 = hwParcel.readInt32();
                    int int327 = hwParcel.readInt32();
                    DataProfileInfo dataProfileInfo3 = new DataProfileInfo();
                    dataProfileInfo3.readFromParcel(hwParcel);
                    setupDataCall_1_2(int326, int327, dataProfileInfo3, hwParcel.readBool(), hwParcel.readBool(), hwParcel.readBool(), hwParcel.readInt32(), hwParcel.readStringVector(), hwParcel.readStringVector());
                    return;
                case 142:
                    hwParcel.enforceInterface(android.hardware.radio.V1_2.IRadio.kInterfaceName);
                    deactivateDataCall_1_2(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 143:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setResponseFunctionsMtk(IRadioResponse.asInterface(hwParcel.readStrongBinder()), IRadioIndication.asInterface(hwParcel.readStrongBinder()));
                    hwParcel2.writeStatus(0);
                    hwParcel2.send();
                    return;
                case 144:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setResponseFunctionsIms(IImsRadioResponse.asInterface(hwParcel.readStrongBinder()), IImsRadioIndication.asInterface(hwParcel.readStrongBinder()));
                    hwParcel2.writeStatus(0);
                    hwParcel2.send();
                    return;
                case 145:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setResponseFunctionsMwi(IMwiRadioResponse.asInterface(hwParcel.readStrongBinder()), IMwiRadioIndication.asInterface(hwParcel.readStrongBinder()));
                    hwParcel2.writeStatus(0);
                    hwParcel2.send();
                    return;
                case 146:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setResponseFunctionsSE(ISERadioResponse.asInterface(hwParcel.readStrongBinder()), ISERadioIndication.asInterface(hwParcel.readStrongBinder()));
                    hwParcel2.writeStatus(0);
                    hwParcel2.send();
                    return;
                case 147:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    videoCallAccept(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 148:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    imsEctCommand(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readInt32());
                    return;
                case 149:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    holdCall(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 150:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    resumeCall(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 151:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    imsDeregNotification(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 152:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setImsEnable(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 153:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setVolteEnable(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 154:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setWfcEnable(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 155:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setVilteEnable(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 156:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setViWifiEnable(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 157:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setRcsUaEnable(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 158:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setImsVoiceEnable(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 159:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setImsVideoEnable(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 160:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setImscfg(hwParcel.readInt32(), hwParcel.readBool(), hwParcel.readBool(), hwParcel.readBool(), hwParcel.readBool(), hwParcel.readBool(), hwParcel.readBool());
                    return;
                case 161:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getProvisionValue(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 162:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setProvisionValue(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 163:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    addImsConferenceCallMember(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString(), hwParcel.readInt32());
                    return;
                case 164:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    removeImsConferenceCallMember(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString(), hwParcel.readInt32());
                    return;
                case 165:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setWfcProfile(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 166:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    int int328 = hwParcel.readInt32();
                    ConferenceDial conferenceDial = new ConferenceDial();
                    conferenceDial.readFromParcel(hwParcel);
                    conferenceDial(int328, conferenceDial);
                    return;
                case 167:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setModemImsCfg(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readInt32());
                    return;
                case 168:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    dialWithSipUri(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 169:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    vtDialWithSipUri(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 170:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    int int329 = hwParcel.readInt32();
                    Dial dial2 = new Dial();
                    dial2.readFromParcel(hwParcel);
                    vtDial(int329, dial2);
                    return;
                case 171:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    forceReleaseCall(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 172:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    imsBearerActivationDone(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 173:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    imsBearerDeactivationDone(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 174:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setImsRtpReport(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 175:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    pullCall(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readBool());
                    return;
                case 176:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setImsRegistrationReport(hwParcel.readInt32());
                    return;
                case 177:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    sendEmbmsAtCommand(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 178:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setRoamingEnable(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 179:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getRoamingEnable(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 180:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setBarringPasswordCheckedByNW(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 181:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setClip(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 182:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getColp(hwParcel.readInt32());
                    return;
                case SipMessage.CODE_SESSION_PROGRESS /* 183 */:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getColr(hwParcel.readInt32());
                    return;
                case 184:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    sendCnap(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 185:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setColp(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 186:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setColr(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 187:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    int int330 = hwParcel.readInt32();
                    CallForwardInfoEx callForwardInfoEx = new CallForwardInfoEx();
                    callForwardInfoEx.readFromParcel(hwParcel);
                    queryCallForwardInTimeSlotStatus(int330, callForwardInfoEx);
                    return;
                case 188:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    int int331 = hwParcel.readInt32();
                    CallForwardInfoEx callForwardInfoEx2 = new CallForwardInfoEx();
                    callForwardInfoEx2.readFromParcel(hwParcel);
                    setCallForwardInTimeSlot(int331, callForwardInfoEx2);
                    return;
                case 189:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    runGbaAuthentication(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readBool(), hwParcel.readInt32());
                    return;
                case 190:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    sendUssi(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 191:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    cancelUssi(hwParcel.readInt32());
                    return;
                case 192:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getXcapStatus(hwParcel.readInt32());
                    return;
                case 193:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    resetSuppServ(hwParcel.readInt32());
                    return;
                case 194:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setupXcapUserAgentString(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 195:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    hangupAll(hwParcel.readInt32());
                    return;
                case 196:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setCallIndication(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 197:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    int int332 = hwParcel.readInt32();
                    Dial dial3 = new Dial();
                    dial3.readFromParcel(hwParcel);
                    emergencyDial(int332, dial3);
                    return;
                case 198:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setEccServiceCategory(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 199:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setEccList(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString());
                    return;
                case ImsVTProvider.ConnectionEx.VideoProvider.SESSION_MODIFY_CANCEL_UPGRADE_FAIL /* 200 */:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    currentStatus(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case ImsVTProvider.ConnectionEx.VideoProvider.SESSION_MODIFY_CANCEL_UPGRADE_FAIL_AUTO_DOWNGRADE /* 201 */:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    eccPreferredRat(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case ImsVTProvider.ConnectionEx.VideoProvider.SESSION_MODIFY_CANCEL_UPGRADE_FAIL_REMOTE_REJECT_UPGRADE /* 202 */:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setVoicePreferStatus(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 203:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setEccNum(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 204:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getEccNum(hwParcel.readInt32());
                    return;
                case 205:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    queryPhbStorageInfo(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 206:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    int int333 = hwParcel.readInt32();
                    PhbEntryStructure phbEntryStructure = new PhbEntryStructure();
                    phbEntryStructure.readFromParcel(hwParcel);
                    writePhbEntry(int333, phbEntryStructure);
                    return;
                case 207:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    readPhbEntry(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 208:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    queryUPBCapability(hwParcel.readInt32());
                    return;
                case 209:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    editUPBEntry(hwParcel.readInt32(), hwParcel.readStringVector());
                    return;
                case 210:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    deleteUPBEntry(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case SmsAcknowledgeFailCause.MEMORY_CAPACITY_EXCEEDED /* 211 */:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    readUPBGasList(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 212:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    readUPBGrpEntry(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 213:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    writeUPBGrpEntry(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 214:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getPhoneBookStringsLength(hwParcel.readInt32());
                    return;
                case 215:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getPhoneBookMemStorage(hwParcel.readInt32());
                    return;
                case 216:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setPhoneBookMemStorage(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 217:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    readPhoneBookEntryExt(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 218:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    int int334 = hwParcel.readInt32();
                    PhbEntryExt phbEntryExt = new PhbEntryExt();
                    phbEntryExt.readFromParcel(hwParcel);
                    writePhoneBookEntryExt(int334, phbEntryExt);
                    return;
                case 219:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    queryUPBAvailable(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 220:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    readUPBEmailEntry(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 221:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    readUPBSneEntry(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 222:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    readUPBAnrEntry(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 223:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    readUPBAasList(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 224:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setPhonebookReady(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 225:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setModemPower(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case RadioCdmaSmsConst.UDH_OTHER_SIZE /* 226 */:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    triggerModeSwitchByEcc(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 227:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getATR(hwParcel.readInt32());
                    return;
                case 228:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getIccid(hwParcel.readInt32());
                    return;
                case RadioCdmaSmsConst.USER_DATA_MAX /* 229 */:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setSimPower(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 230:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    int int335 = hwParcel.readInt32();
                    SimAuthStructure simAuthStructure = new SimAuthStructure();
                    simAuthStructure.readFromParcel(hwParcel);
                    doGeneralSimAuthentication(int335, simAuthStructure);
                    return;
                case 231:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    queryNetworkLock(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 232:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setNetworkLock(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 233:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    supplyDepersonalization(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readInt32());
                    return;
                case 234:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    sendVsimNotification(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 235:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    sendVsimOperation(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt8Vector());
                    return;
                case 236:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getSmsParameters(hwParcel.readInt32());
                    return;
                case 237:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    int int336 = hwParcel.readInt32();
                    SmsParams smsParams = new SmsParams();
                    smsParams.readFromParcel(hwParcel);
                    setSmsParameters(int336, smsParams);
                    return;
                case 238:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getSmsMemStatus(hwParcel.readInt32());
                    return;
                case 239:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setEtws(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case LastCallFailCause.CALL_BARRED /* 240 */:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    removeCbMsg(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case LastCallFailCause.FDN_BLOCKED /* 241 */:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setGsmBroadcastLangs(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case LastCallFailCause.IMSI_UNKNOWN_IN_VLR /* 242 */:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getGsmBroadcastLangs(hwParcel.readInt32());
                    return;
                case LastCallFailCause.IMEI_NOT_ACCEPTED /* 243 */:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getGsmBroadcastActivation(hwParcel.readInt32());
                    return;
                case LastCallFailCause.DIAL_MODIFIED_TO_USSD /* 244 */:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    int int337 = hwParcel.readInt32();
                    ImsSmsMessage imsSmsMessage2 = new ImsSmsMessage();
                    imsSmsMessage2.readFromParcel(hwParcel);
                    sendImsSmsEx(int337, imsSmsMessage2);
                    return;
                case LastCallFailCause.DIAL_MODIFIED_TO_SS /* 245 */:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setSmsFwkReady(hwParcel.readInt32());
                    return;
                case LastCallFailCause.DIAL_MODIFIED_TO_DIAL /* 246 */:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    acknowledgeLastIncomingGsmSmsEx(hwParcel.readInt32(), hwParcel.readBool(), hwParcel.readInt32());
                    return;
                case LastCallFailCause.RADIO_OFF /* 247 */:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    int int338 = hwParcel.readInt32();
                    CdmaSmsAck cdmaSmsAck2 = new CdmaSmsAck();
                    cdmaSmsAck2.readFromParcel(hwParcel);
                    acknowledgeLastIncomingCdmaSmsEx(int338, cdmaSmsAck2);
                    return;
                case LastCallFailCause.OUT_OF_SERVICE /* 248 */:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    sendRequestRaw(hwParcel.readInt32(), hwParcel.readInt8Vector());
                    return;
                case LastCallFailCause.NO_VALID_SIM /* 249 */:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    sendRequestStrings(hwParcel.readInt32(), hwParcel.readStringVector());
                    return;
                case LastCallFailCause.RADIO_INTERNAL_ERROR /* 250 */:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setResumeRegistration(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case LastCallFailCause.NETWORK_RESP_TIMEOUT /* 251 */:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    storeModemType(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case LastCallFailCause.NETWORK_REJECT /* 252 */:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    reloadModemType(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case LastCallFailCause.RADIO_ACCESS_FAILURE /* 253 */:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getSmsRuimMemoryStatus(hwParcel.readInt32());
                    return;
                case LastCallFailCause.RADIO_LINK_FAILURE /* 254 */:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setNetworkSelectionModeManualWithAct(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 255:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getAvailableNetworksWithAct(hwParcel.readInt32());
                    return;
                case 256:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getSignalStrengthWithWcdmaEcio(hwParcel.readInt32());
                    return;
                case 257:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    cancelAvailableNetworks(hwParcel.readInt32());
                    return;
                case 258:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getFemtocellList(hwParcel.readInt32());
                    return;
                case LastCallFailCause.RADIO_RELEASE_ABNORMAL /* 259 */:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    abortFemtocellList(hwParcel.readInt32());
                    return;
                case 260:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    selectFemtocell(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 261:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    queryFemtoCellSystemSelectionMode(hwParcel.readInt32());
                    return;
                case 262:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setFemtoCellSystemSelectionMode(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 263:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setServiceStateToModem(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 264:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setRxTestConfig(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 265:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getRxTestResult(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 266:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getPOLCapability(hwParcel.readInt32());
                    return;
                case 267:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getCurrentPOLList(hwParcel.readInt32());
                    return;
                case 268:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setPOLEntry(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString(), hwParcel.readInt32());
                    return;
                case 269:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setFdMode(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 270:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setTrm(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 271:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    handleStkCallSetupRequestFromSimWithResCode(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 272:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setPdnReuse(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 273:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setOverrideApn(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 274:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setPdnNameReuse(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 275:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setResponseFunctionsForAtci(IAtciResponse.asInterface(hwParcel.readStrongBinder()), IAtciIndication.asInterface(hwParcel.readStrongBinder()));
                    return;
                case 276:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    sendAtciRequest(hwParcel.readInt32(), hwParcel.readInt8Vector());
                    return;
                case 277:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    resetRadio(hwParcel.readInt32());
                    return;
                case 278:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    restartRILD(hwParcel.readInt32());
                    return;
                case 279:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    syncDataSettingsToMd(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 280:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    resetMdDataRetryCount(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 281:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setRemoveRestrictEutranMode(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 282:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setLteAccessStratumReport(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 283:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setLteUplinkDataTransfer(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 284:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setE911State(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 285:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setVoiceDomainPreference(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 286:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setWifiEnabled(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 287:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setWifiAssociated(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 288:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setWifiSignalLevel(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 289:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setWifiIpAddress(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 290:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setLocationInfo(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 291:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setEmergencyAddressId(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 292:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setNattKeepAliveStatus(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readBool(), hwParcel.readString(), hwParcel.readInt32(), hwParcel.readString(), hwParcel.readInt32());
                    return;
                case 293:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setWifiPingResult(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 294:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setApcMode(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 295:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getApcInfo(hwParcel.readInt32());
                    return;
                case 296:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setImsBearerNotification(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 297:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setImsCfgFeatureValue(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 298:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getImsCfgFeatureValue(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 299:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setImsCfgProvisionValue(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString());
                    return;
                case ScanIntervalRange.MAX /* 300 */:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getImsCfgProvisionValue(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 301:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setImsCfgResourceCapValue(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 302:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getImsCfgResourceCapValue(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 303:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    dataConnectionAttach(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 304:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    dataConnectionDetach(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 305:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    resetAllConnections(hwParcel.readInt32());
                    return;
                case 306:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setLteReleaseVersion(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 307:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getLteReleaseVersion(hwParcel.readInt32());
                    return;
                case 308:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    reportAirplaneMode(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 309:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    reportSimMode(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 310:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setSilentReboot(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 311:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setTxPowerStatus(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 312:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setPropImsHandover(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 313:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setOperatorConfiguration(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 314:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    setSuppServProperty(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 315:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    getSuppServProperty(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 316:
                    hwParcel.enforceInterface(IRadio.kInterfaceName);
                    supplyDeviceNetworkDepersonalization(hwParcel.readInt32(), hwParcel.readString());
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio, android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
        public final void ping() {
        }

        public IHwInterface queryLocalInterface(String str) {
            if (IRadio.kInterfaceName.equals(str)) {
                return this;
            }
            return null;
        }

        public void registerAsService(String str) throws RemoteException {
            registerService(str);
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio, android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
        public final void setHALInstrumentation() {
        }

        public String toString() {
            return interfaceDescriptor() + "@Stub";
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadio, android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
        public final boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) {
            return true;
        }
    }

    static IRadio asInterface(IHwBinder iHwBinder) {
        if (iHwBinder == null) {
            return null;
        }
        IHwInterface iHwInterfaceQueryLocalInterface = iHwBinder.queryLocalInterface(kInterfaceName);
        if (iHwInterfaceQueryLocalInterface != null && (iHwInterfaceQueryLocalInterface instanceof IRadio)) {
            return (IRadio) iHwInterfaceQueryLocalInterface;
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

    static IRadio castFrom(IHwInterface iHwInterface) {
        if (iHwInterface == null) {
            return null;
        }
        return asInterface(iHwInterface.asBinder());
    }

    static IRadio getService() throws RemoteException {
        return getService("default");
    }

    static IRadio getService(String str) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str));
    }

    static IRadio getService(String str, boolean z) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str, z));
    }

    static IRadio getService(boolean z) throws RemoteException {
        return getService("default", z);
    }

    void abortFemtocellList(int i) throws RemoteException;

    void acknowledgeLastIncomingCdmaSmsEx(int i, CdmaSmsAck cdmaSmsAck) throws RemoteException;

    void acknowledgeLastIncomingGsmSmsEx(int i, boolean z, int i2) throws RemoteException;

    void addImsConferenceCallMember(int i, int i2, String str, int i3) throws RemoteException;

    @Override // android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
    IHwBinder asBinder();

    void cancelAvailableNetworks(int i) throws RemoteException;

    void cancelUssi(int i) throws RemoteException;

    void conferenceDial(int i, ConferenceDial conferenceDial) throws RemoteException;

    void currentStatus(int i, int i2, int i3) throws RemoteException;

    void dataConnectionAttach(int i, int i2) throws RemoteException;

    void dataConnectionDetach(int i, int i2) throws RemoteException;

    @Override // android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
    void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) throws RemoteException;

    void deleteUPBEntry(int i, int i2, int i3, int i4) throws RemoteException;

    void dialWithSipUri(int i, String str) throws RemoteException;

    void doGeneralSimAuthentication(int i, SimAuthStructure simAuthStructure) throws RemoteException;

    void eccPreferredRat(int i, int i2) throws RemoteException;

    void editUPBEntry(int i, ArrayList<String> arrayList) throws RemoteException;

    void emergencyDial(int i, Dial dial) throws RemoteException;

    void forceReleaseCall(int i, int i2) throws RemoteException;

    void getATR(int i) throws RemoteException;

    void getApcInfo(int i) throws RemoteException;

    void getAvailableNetworksWithAct(int i) throws RemoteException;

    void getColp(int i) throws RemoteException;

    void getColr(int i) throws RemoteException;

    void getCurrentPOLList(int i) throws RemoteException;

    @Override // android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
    DebugInfo getDebugInfo() throws RemoteException;

    void getEccNum(int i) throws RemoteException;

    void getFemtocellList(int i) throws RemoteException;

    void getGsmBroadcastActivation(int i) throws RemoteException;

    void getGsmBroadcastLangs(int i) throws RemoteException;

    @Override // android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
    ArrayList<byte[]> getHashChain() throws RemoteException;

    void getIccid(int i) throws RemoteException;

    void getImsCfgFeatureValue(int i, int i2, int i3) throws RemoteException;

    void getImsCfgProvisionValue(int i, int i2) throws RemoteException;

    void getImsCfgResourceCapValue(int i, int i2) throws RemoteException;

    void getLteReleaseVersion(int i) throws RemoteException;

    void getPOLCapability(int i) throws RemoteException;

    void getPhoneBookMemStorage(int i) throws RemoteException;

    void getPhoneBookStringsLength(int i) throws RemoteException;

    void getProvisionValue(int i, String str) throws RemoteException;

    void getRoamingEnable(int i, int i2) throws RemoteException;

    void getRxTestResult(int i, int i2) throws RemoteException;

    void getSignalStrengthWithWcdmaEcio(int i) throws RemoteException;

    void getSmsMemStatus(int i) throws RemoteException;

    void getSmsParameters(int i) throws RemoteException;

    void getSmsRuimMemoryStatus(int i) throws RemoteException;

    void getSuppServProperty(int i, String str) throws RemoteException;

    void getXcapStatus(int i) throws RemoteException;

    void handleStkCallSetupRequestFromSimWithResCode(int i, int i2) throws RemoteException;

    void hangupAll(int i) throws RemoteException;

    void holdCall(int i, int i2) throws RemoteException;

    void imsBearerActivationDone(int i, int i2, int i3) throws RemoteException;

    void imsBearerDeactivationDone(int i, int i2, int i3) throws RemoteException;

    void imsDeregNotification(int i, int i2) throws RemoteException;

    void imsEctCommand(int i, String str, int i2) throws RemoteException;

    @Override // android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
    ArrayList<String> interfaceChain() throws RemoteException;

    @Override // android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
    String interfaceDescriptor() throws RemoteException;

    @Override // android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
    boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException;

    @Override // android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
    void notifySyspropsChanged() throws RemoteException;

    @Override // android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
    void ping() throws RemoteException;

    void pullCall(int i, String str, boolean z) throws RemoteException;

    void queryCallForwardInTimeSlotStatus(int i, CallForwardInfoEx callForwardInfoEx) throws RemoteException;

    void queryFemtoCellSystemSelectionMode(int i) throws RemoteException;

    void queryNetworkLock(int i, int i2) throws RemoteException;

    void queryPhbStorageInfo(int i, int i2) throws RemoteException;

    void queryUPBAvailable(int i, int i2, int i3) throws RemoteException;

    void queryUPBCapability(int i) throws RemoteException;

    void readPhbEntry(int i, int i2, int i3, int i4) throws RemoteException;

    void readPhoneBookEntryExt(int i, int i2, int i3) throws RemoteException;

    void readUPBAasList(int i, int i2, int i3) throws RemoteException;

    void readUPBAnrEntry(int i, int i2, int i3) throws RemoteException;

    void readUPBEmailEntry(int i, int i2, int i3) throws RemoteException;

    void readUPBGasList(int i, int i2, int i3) throws RemoteException;

    void readUPBGrpEntry(int i, int i2) throws RemoteException;

    void readUPBSneEntry(int i, int i2, int i3) throws RemoteException;

    void reloadModemType(int i, int i2) throws RemoteException;

    void removeCbMsg(int i, int i2, int i3) throws RemoteException;

    void removeImsConferenceCallMember(int i, int i2, String str, int i3) throws RemoteException;

    void reportAirplaneMode(int i, int i2) throws RemoteException;

    void reportSimMode(int i, int i2) throws RemoteException;

    void resetAllConnections(int i) throws RemoteException;

    void resetMdDataRetryCount(int i, String str) throws RemoteException;

    void resetRadio(int i) throws RemoteException;

    void resetSuppServ(int i) throws RemoteException;

    void restartRILD(int i) throws RemoteException;

    void resumeCall(int i, int i2) throws RemoteException;

    void runGbaAuthentication(int i, String str, String str2, boolean z, int i2) throws RemoteException;

    void selectFemtocell(int i, String str, String str2, String str3) throws RemoteException;

    void sendAtciRequest(int i, ArrayList<Byte> arrayList) throws RemoteException;

    void sendCnap(int i, String str) throws RemoteException;

    void sendEmbmsAtCommand(int i, String str) throws RemoteException;

    void sendImsSmsEx(int i, ImsSmsMessage imsSmsMessage) throws RemoteException;

    void sendRequestRaw(int i, ArrayList<Byte> arrayList) throws RemoteException;

    void sendRequestStrings(int i, ArrayList<String> arrayList) throws RemoteException;

    void sendUssi(int i, int i2, String str) throws RemoteException;

    void sendVsimNotification(int i, int i2, int i3, int i4) throws RemoteException;

    void sendVsimOperation(int i, int i2, int i3, int i4, int i5, ArrayList<Byte> arrayList) throws RemoteException;

    void setApcMode(int i, int i2, int i3, int i4) throws RemoteException;

    void setBarringPasswordCheckedByNW(int i, String str, String str2, String str3, String str4) throws RemoteException;

    void setCallForwardInTimeSlot(int i, CallForwardInfoEx callForwardInfoEx) throws RemoteException;

    void setCallIndication(int i, int i2, int i3, int i4) throws RemoteException;

    void setClip(int i, int i2) throws RemoteException;

    void setColp(int i, int i2) throws RemoteException;

    void setColr(int i, int i2) throws RemoteException;

    void setE911State(int i, int i2) throws RemoteException;

    void setEccList(int i, String str, String str2) throws RemoteException;

    void setEccNum(int i, String str, String str2) throws RemoteException;

    void setEccServiceCategory(int i, int i2) throws RemoteException;

    void setEmergencyAddressId(int i, String str) throws RemoteException;

    void setEtws(int i, int i2) throws RemoteException;

    void setFdMode(int i, int i2, int i3, int i4) throws RemoteException;

    void setFemtoCellSystemSelectionMode(int i, int i2) throws RemoteException;

    void setGsmBroadcastLangs(int i, String str) throws RemoteException;

    @Override // android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
    void setHALInstrumentation() throws RemoteException;

    void setImsBearerNotification(int i, int i2) throws RemoteException;

    void setImsCfgFeatureValue(int i, int i2, int i3, int i4, int i5) throws RemoteException;

    void setImsCfgProvisionValue(int i, int i2, String str) throws RemoteException;

    void setImsCfgResourceCapValue(int i, int i2, int i3) throws RemoteException;

    void setImsEnable(int i, boolean z) throws RemoteException;

    void setImsRegistrationReport(int i) throws RemoteException;

    void setImsRtpReport(int i, int i2, int i3, int i4) throws RemoteException;

    void setImsVideoEnable(int i, boolean z) throws RemoteException;

    void setImsVoiceEnable(int i, boolean z) throws RemoteException;

    void setImscfg(int i, boolean z, boolean z2, boolean z3, boolean z4, boolean z5, boolean z6) throws RemoteException;

    void setLocationInfo(int i, String str, String str2, String str3, String str4, String str5, String str6, String str7, String str8, String str9, String str10, String str11) throws RemoteException;

    void setLteAccessStratumReport(int i, int i2) throws RemoteException;

    void setLteReleaseVersion(int i, int i2) throws RemoteException;

    void setLteUplinkDataTransfer(int i, int i2, int i3) throws RemoteException;

    void setModemImsCfg(int i, String str, String str2, int i2) throws RemoteException;

    void setModemPower(int i, boolean z) throws RemoteException;

    void setNattKeepAliveStatus(int i, String str, boolean z, String str2, int i2, String str3, int i3) throws RemoteException;

    void setNetworkLock(int i, int i2, int i3, String str, String str2, String str3, String str4) throws RemoteException;

    void setNetworkSelectionModeManualWithAct(int i, String str, String str2, String str3) throws RemoteException;

    void setOperatorConfiguration(int i, int i2, String str) throws RemoteException;

    void setOverrideApn(int i, String str) throws RemoteException;

    void setPOLEntry(int i, int i2, String str, int i3) throws RemoteException;

    void setPdnNameReuse(int i, String str) throws RemoteException;

    void setPdnReuse(int i, String str) throws RemoteException;

    void setPhoneBookMemStorage(int i, String str, String str2) throws RemoteException;

    void setPhonebookReady(int i, int i2) throws RemoteException;

    void setPropImsHandover(int i, String str) throws RemoteException;

    void setProvisionValue(int i, String str, String str2) throws RemoteException;

    void setRcsUaEnable(int i, boolean z) throws RemoteException;

    void setRemoveRestrictEutranMode(int i, int i2) throws RemoteException;

    void setResponseFunctionsForAtci(IAtciResponse iAtciResponse, IAtciIndication iAtciIndication) throws RemoteException;

    void setResponseFunctionsIms(IImsRadioResponse iImsRadioResponse, IImsRadioIndication iImsRadioIndication) throws RemoteException;

    void setResponseFunctionsMtk(IRadioResponse iRadioResponse, IRadioIndication iRadioIndication) throws RemoteException;

    void setResponseFunctionsMwi(IMwiRadioResponse iMwiRadioResponse, IMwiRadioIndication iMwiRadioIndication) throws RemoteException;

    void setResponseFunctionsSE(ISERadioResponse iSERadioResponse, ISERadioIndication iSERadioIndication) throws RemoteException;

    void setResumeRegistration(int i, int i2) throws RemoteException;

    void setRoamingEnable(int i, ArrayList<Integer> arrayList) throws RemoteException;

    void setRxTestConfig(int i, int i2) throws RemoteException;

    void setServiceStateToModem(int i, int i2, int i3, int i4, int i5, int i6, int i7) throws RemoteException;

    void setSilentReboot(int i, int i2) throws RemoteException;

    void setSimPower(int i, int i2) throws RemoteException;

    void setSmsFwkReady(int i) throws RemoteException;

    void setSmsParameters(int i, SmsParams smsParams) throws RemoteException;

    void setSuppServProperty(int i, String str, String str2) throws RemoteException;

    void setTrm(int i, int i2) throws RemoteException;

    void setTxPowerStatus(int i, int i2) throws RemoteException;

    void setViWifiEnable(int i, boolean z) throws RemoteException;

    void setVilteEnable(int i, boolean z) throws RemoteException;

    void setVoiceDomainPreference(int i, int i2) throws RemoteException;

    void setVoicePreferStatus(int i, int i2) throws RemoteException;

    void setVolteEnable(int i, boolean z) throws RemoteException;

    void setWfcEnable(int i, boolean z) throws RemoteException;

    void setWfcProfile(int i, int i2) throws RemoteException;

    void setWifiAssociated(int i, String str, int i2, String str2, String str3) throws RemoteException;

    void setWifiEnabled(int i, String str, int i2, int i3) throws RemoteException;

    void setWifiIpAddress(int i, String str, String str2, String str3) throws RemoteException;

    void setWifiPingResult(int i, int i2, int i3, int i4) throws RemoteException;

    void setWifiSignalLevel(int i, int i2, int i3) throws RemoteException;

    void setupXcapUserAgentString(int i, String str) throws RemoteException;

    void storeModemType(int i, int i2) throws RemoteException;

    void supplyDepersonalization(int i, String str, int i2) throws RemoteException;

    void supplyDeviceNetworkDepersonalization(int i, String str) throws RemoteException;

    void syncDataSettingsToMd(int i, ArrayList<Integer> arrayList) throws RemoteException;

    void triggerModeSwitchByEcc(int i, int i2) throws RemoteException;

    @Override // android.hardware.radio.V1_2.IRadio, android.hardware.radio.V1_1.IRadio, android.hardware.radio.V1_0.IRadio, android.hidl.base.V1_0.IBase
    boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException;

    void videoCallAccept(int i, int i2, int i3) throws RemoteException;

    void vtDial(int i, Dial dial) throws RemoteException;

    void vtDialWithSipUri(int i, String str) throws RemoteException;

    void writePhbEntry(int i, PhbEntryStructure phbEntryStructure) throws RemoteException;

    void writePhoneBookEntryExt(int i, PhbEntryExt phbEntryExt) throws RemoteException;

    void writeUPBGrpEntry(int i, int i2, ArrayList<Integer> arrayList) throws RemoteException;
}
