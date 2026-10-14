package vendor.mediatek.hardware.radio.V3_9;

import android.hardware.radio.V1_0.CdmaCallWaiting;
import android.hardware.radio.V1_0.CdmaInformationRecords;
import android.hardware.radio.V1_0.CdmaSignalInfoRecord;
import android.hardware.radio.V1_0.CdmaSmsMessage;
import android.hardware.radio.V1_0.CellInfo;
import android.hardware.radio.V1_0.HardwareConfig;
import android.hardware.radio.V1_0.LastCallFailCause;
import android.hardware.radio.V1_0.LceDataInfo;
import android.hardware.radio.V1_0.PcoDataInfo;
import android.hardware.radio.V1_0.RadioCapability;
import android.hardware.radio.V1_0.SetupDataCallResult;
import android.hardware.radio.V1_0.SignalStrength;
import android.hardware.radio.V1_0.SimRefreshResult;
import android.hardware.radio.V1_0.StkCcUnsolSsResult;
import android.hardware.radio.V1_0.SuppSvcNotification;
import android.hardware.radio.V1_1.KeepaliveStatus;
import android.hardware.radio.V1_1.NetworkScanResult;
import android.hardware.radio.V1_2.LinkCapacityEstimate;
import android.hardware.radio.V1_2.PhysicalChannelConfig;
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
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Objects;
import vendor.mediatek.hardware.radio.V3_0.CfuStatusNotification;
import vendor.mediatek.hardware.radio.V3_0.CipherNotification;
import vendor.mediatek.hardware.radio.V3_0.CrssNotification;
import vendor.mediatek.hardware.radio.V3_0.DedicateDataCall;
import vendor.mediatek.hardware.radio.V3_0.EtwsNotification;
import vendor.mediatek.hardware.radio.V3_0.IncomingCallNotification;
import vendor.mediatek.hardware.radio.V3_0.PcoDataAttachedInfo;
import vendor.mediatek.hardware.radio.V3_0.SignalStrengthWithWcdmaEcio;
import vendor.mediatek.hardware.radio.V3_0.VsimOperationEvent;

/* JADX INFO: loaded from: classes.dex */
public interface IRadioIndication extends vendor.mediatek.hardware.radio.V3_8.IRadioIndication {
    public static final String kInterfaceName = "vendor.mediatek.hardware.radio@3.9::IRadioIndication";

    public static final class Proxy implements IRadioIndication {
        private IHwBinder mRemote;

        public Proxy(IHwBinder iHwBinder) {
            Objects.requireNonNull(iHwBinder);
            this.mRemote = iHwBinder;
        }

        @Override // vendor.mediatek.hardware.radio.V3_9.IRadioIndication, vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public IHwBinder asBinder() {
            return this.mRemote;
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void bipProactiveCommand(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(99, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void callRing(int i, boolean z, CdmaSignalInfoRecord cdmaSignalInfoRecord) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            cdmaSignalInfoRecord.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(18, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void callStateChanged(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(2, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_1.IRadioIndication
        public void carrierInfoForImsiEncryption(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_1.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(46, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void cdmaCallAccepted(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(62, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void cdmaCallWaiting(int i, CdmaCallWaiting cdmaCallWaiting) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            cdmaCallWaiting.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(25, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void cdmaInfoRec(int i, CdmaInformationRecords cdmaInformationRecords) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            cdmaInformationRecords.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(27, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void cdmaNewSms(int i, CdmaSmsMessage cdmaSmsMessage) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            cdmaSmsMessage.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(20, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void cdmaOtaProvisionStatus(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
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

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void cdmaPrlChanged(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(31, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void cdmaRuimSmsStorageFull(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(22, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void cdmaSubscriptionSourceChanged(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(30, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void cellInfoList(int i, ArrayList<CellInfo> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            CellInfo.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(35, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_2.IRadioIndication
        public void cellInfoList_1_2(int i, ArrayList<android.hardware.radio.V1_2.CellInfo> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_2.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            android.hardware.radio.V1_2.CellInfo.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(50, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void cfuStatusNotify(int i, CfuStatusNotification cfuStatusNotification) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            cfuStatusNotification.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(57, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void cipherIndication(int i, CipherNotification cipherNotification) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            cipherNotification.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(59, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void confSRVCC(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(UtranBands.BAND_F, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void crssIndication(int i, CrssNotification crssNotification) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            crssNotification.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(60, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_2.IRadioIndication
        public void currentLinkCapacityEstimate(int i, LinkCapacityEstimate linkCapacityEstimate) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_2.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            linkCapacityEstimate.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(51, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_2.IRadioIndication
        public void currentPhysicalChannelConfigs(int i, ArrayList<PhysicalChannelConfig> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_2.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            PhysicalChannelConfig.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(52, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void currentSignalStrength(int i, SignalStrength signalStrength) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            signalStrength.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(9, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void currentSignalStrengthWithWcdmaEcioInd(int i, SignalStrengthWithWcdmaEcio signalStrengthWithWcdmaEcio) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            signalStrengthWithWcdmaEcio.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(94, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_2.IRadioIndication
        public void currentSignalStrength_1_2(int i, android.hardware.radio.V1_2.SignalStrength signalStrength) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_2.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            signalStrength.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(53, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void dataAllowedNotification(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(91, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void dataCallListChanged(int i, ArrayList<SetupDataCallResult> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            SetupDataCallResult.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(10, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_9.IRadioIndication, vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void dedicatedBearerActivationInd(int i, DedicateDataCall dedicateDataCall) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            dedicateDataCall.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(96, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void dedicatedBearerDeactivationInd(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(98, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void dedicatedBearerModificationInd(int i, DedicateDataCall dedicateDataCall) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            dedicateDataCall.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(97, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void dsbpStateChanged(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void eMBMSAtInfoIndication(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(54, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void eMBMSSessionStatusIndication(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(55, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void eccNumIndication(int i, String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(63, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void enterEmergencyCallbackMode(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(24, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public final boolean equals(Object obj) {
            return HidlSupport.interfacesEqual(this, obj);
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void esnMeidChangeInd(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(85, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void exitEmergencyCallbackMode(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(32, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_9.IRadioIndication, vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.radio.V3_9.IRadioIndication, vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void gmssRatChangedIndication(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(83, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void hardwareConfigChanged(int i, ArrayList<HardwareConfig> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HardwareConfig.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(39, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        public final int hashCode() {
            return asBinder().hashCode();
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void imsNetworkStateChanged(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(36, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_9.IRadioIndication
        public void incomingCallAdditionalInfoInd(int i, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(121, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void incomingCallIndication(int i, IncomingCallNotification incomingCallNotification) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            incomingCallNotification.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(58, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void indicateRingbackTone(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(28, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_9.IRadioIndication, vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.radio.V3_9.IRadioIndication, vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
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

        @Override // android.hardware.radio.V1_1.IRadioIndication
        public void keepaliveStatus(int i, KeepaliveStatus keepaliveStatus) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_1.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            keepaliveStatus.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(48, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void lceData(int i, LceDataInfo lceDataInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            lceDataInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(43, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_9.IRadioIndication, vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException {
            return this.mRemote.linkToDeath(deathRecipient, j);
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void mdChangedApnInd(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(UtranBands.BAND_C, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void meSmsStorageFullInd(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(78, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void modemReset(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(45, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_7.IRadioIndication
        public void networkBandInfoInd(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_7.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(119, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void networkInfoInd(int i, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(93, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void networkRejectCauseInd(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(115, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_1.IRadioIndication
        public void networkScanResult(int i, NetworkScanResult networkScanResult) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_1.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            networkScanResult.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(47, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_2.IRadioIndication
        public void networkScanResult_1_2(int i, android.hardware.radio.V1_2.NetworkScanResult networkScanResult) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_2.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            networkScanResult.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(49, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void networkStateChanged(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(3, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void newBroadcastSms(int i, ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt8Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(21, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void newEtwsInd(int i, EtwsNotification etwsNotification) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            etwsNotification.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(77, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void newSms(int i, ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt8Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(4, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void newSmsOnSim(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(6, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void newSmsStatusReport(int i, ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt8Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(5, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void nitzTimeReceived(int i, String str, long j) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeInt64(j);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(8, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_9.IRadioIndication, vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void oemHookRaw(int i, ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt8Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(80, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void onCardDetectedInd(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(75, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void onImeiLock(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(66, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void onImsiRefreshDone(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(67, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void onLteAccessStratumStateChanged(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(110, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void onMccMncChanged(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(113, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void onMdDataRetryCountReset(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(108, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void onPcoStatus(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(UtranBands.BAND_E, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void onPseudoCellInfoInd(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(112, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void onRemoveRestrictEutran(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(109, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void onSimCommonSlotNoChanged(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(73, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void onSimMeLockEvent(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(74, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void onSimMissing(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void onSimPlugIn(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(68, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void onSimPlugOut(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(69, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_2.IRadioIndication
        public void onSimPowerChangedInd(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_2.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(118, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void onSimRecovery(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(71, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void onSimTrayPlugIn(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(72, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void onStkMenuReset(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(101, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void onSupplementaryServiceIndication(int i, StkCcUnsolSsResult stkCcUnsolSsResult) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            stkCcUnsolSsResult.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(41, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void onTxPowerIndication(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(111, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void onTxPowerStatusIndication(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(114, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void onUssd(int i, int i2, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void onVirtualSimOff(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void onVirtualSimOn(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(64, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void onVsimEventIndication(int i, VsimOperationEvent vsimOperationEvent) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            vsimOperationEvent.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(76, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void pcoData(int i, PcoDataInfo pcoDataInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            pcoDataInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(44, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void pcoDataAfterAttached(int i, PcoDataAttachedInfo pcoDataAttachedInfo) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            pcoDataAttachedInfo.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(UtranBands.BAND_D, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void phbReadyNotification(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
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

        @Override // vendor.mediatek.hardware.radio.V3_9.IRadioIndication, vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void plmnChangedIndication(int i, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(81, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void radioCapabilityIndication(int i, RadioCapability radioCapability) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            radioCapability.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(40, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void radioStateChanged(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(1, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void registrationSuspendedIndication(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(82, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void resendIncallMute(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(29, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void resetAttachApnInd(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(102, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void responseCsNetworkStateChangeInd(int i, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(86, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void responseFemtocellInfo(int i, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(92, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void responseInvalidSimInd(int i, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(88, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void responseLteNetworkInfo(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void responseModulationInfoInd(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(90, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void responseNetworkEventInd(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(89, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void responsePsNetworkStateChangeInd(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(87, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void restrictedStateChanged(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
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

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void rilConnected(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(33, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_9.IRadioIndication, vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
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

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void simRefresh(int i, SimRefreshResult simRefreshResult) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            simRefreshResult.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(17, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void simSmsStorageFull(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(16, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void simStatusChanged(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(19, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void smlSlotLockInfoChangedInd(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(117, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_8.IRadioIndication
        public void smsInfoExtInd(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_8.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(120, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void smsReadyInd(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(79, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void speechCodecInfoIndication(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
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

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void srvccStateNotify(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
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

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void stkCallControlAlphaNotify(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
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

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void stkCallSetup(int i, long j) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt64(j);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(15, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void stkEventNotify(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(14, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void stkProactiveCommand(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(13, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void stkSessionEnd(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(12, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void subscriptionStatusChanged(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(37, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void suppSvcNotify(int i, SuppSvcNotification suppSvcNotification) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
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
                return "[class or subclass of vendor.mediatek.hardware.radio@3.9::IRadioIndication]@Proxy";
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void triggerOtaSP(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(100, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_9.IRadioIndication, vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException {
            return this.mRemote.unlinkToDeath(deathRecipient);
        }

        @Override // android.hardware.radio.V1_0.IRadioIndication
        public void voiceRadioTechChanged(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void volteLteConnectionStatus(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(107, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IRadioIndication
        public void worldModeChangedIndication(int i, ArrayList<Integer> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(84, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }
    }

    public static abstract class Stub extends HwBinder implements IRadioIndication {
        @Override // vendor.mediatek.hardware.radio.V3_9.IRadioIndication, vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public IHwBinder asBinder() {
            return this;
        }

        @Override // vendor.mediatek.hardware.radio.V3_9.IRadioIndication, vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) {
        }

        @Override // vendor.mediatek.hardware.radio.V3_9.IRadioIndication, vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public final DebugInfo getDebugInfo() {
            DebugInfo debugInfo = new DebugInfo();
            debugInfo.pid = HidlSupport.getPidIfSharable();
            debugInfo.ptr = 0L;
            debugInfo.arch = 0;
            return debugInfo;
        }

        @Override // vendor.mediatek.hardware.radio.V3_9.IRadioIndication, vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public final ArrayList<byte[]> getHashChain() {
            return new ArrayList<>(Arrays.asList(new byte[]{-101, 40, -5, -1, -106, -23, -96, 2, 82, 119, -26, -78, 81, 41, 0, -8, -24, 110, 7, 112, 94, -10, -101, 24, 96, 43, -43, 28, -60, -75, 21, -83}, new byte[]{-5, -88, 7, 98, -92, 90, 110, 105, 69, 39, 113, -36, -63, -79, -54, 84, -41, 60, 26, -60, -37, 12, -1, 93, -67, 65, 112, 101, -54, 39, 24, -102}, new byte[]{72, 22, 94, 123, 42, 45, -89, -115, -66, 54, -12, 5, 82, -86, -114, -26, -38, -50, -119, 117, -115, 41, 88, -99, 5, 5, -11, 101, 48, -84, 73, -82}, new byte[]{14, -103, -58, 11, 0, 107, -72, -40, -121, -47, 10, 48, -74, -53, 17, -43, 126, -111, -28, 1, -10, 116, 75, -110, 8, -75, 98, -119, 0, 87, -24, 122}, new byte[]{21, -124, 124, -46, 107, -56, -5, -28, -6, -54, 115, 15, -119, 11, 93, -91, 118, 15, 20, -79, 79, 69, -12, -38, 90, 42, -17, 57, 116, 78, -3, -89}, new byte[]{59, -115, -116, -44, 53, -92, 69, -110, -26, 1, 69, -79, -94, 94, 34, -128, 33, -105, -87, -121, 50, -94, 113, -35, 77, -116, -21, -23, 45, 106, 36, 25}, new byte[]{-52, 61, 58, -43, -111, -7, -112, 13, -19, -29, -122, 76, -116, 3, 88, 104, -113, -30, 10, 106, -126, 64, -45, 95, -37, 118, 32, 39, 63, -46, -8, 44}, new byte[]{-94, -73, -44, 39, -54, -63, 0, -42, -89, -77, -87, -60, -36, -38, -120, -47, 10, 99, 106, -20, -89, -125, -116, 62, 39, 76, -104, -17, -29, -119, 84, 127}, new byte[]{-51, -89, 82, -82, -85, -86, -68, 32, 72, 106, -126, -84, 87, -93, -35, 16, 119, -123, -64, 6, 9, 74, 52, -101, -59, -30, 36, -24, -86, 34, -95, 124}, new byte[]{-4, -59, -56, -56, -117, -123, -87, -10, 63, -70, 103, -39, -26, 116, -38, 70, 108, 114, -87, -116, -94, -121, -13, 67, -5, 87, 33, -48, -104, 113, 63, -122}, new byte[]{92, -114, -5, -71, -60, 81, -91, -105, 55, -19, 44, 108, 32, 35, 10, -82, 71, 69, -125, -100, -96, 29, -128, -120, -42, -36, -55, 2, 14, 82, -46, -59}, new byte[]{-20, 127, -41, -98, -48, 45, -6, -123, -68, 73, -108, 38, -83, -82, 62, -66, 35, -17, 5, 36, -13, -51, 105, 87, 19, -109, 36, -72, 59, 24, -54, 76}));
        }

        @Override // vendor.mediatek.hardware.radio.V3_9.IRadioIndication, vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public final ArrayList<String> interfaceChain() {
            return new ArrayList<>(Arrays.asList(IRadioIndication.kInterfaceName, vendor.mediatek.hardware.radio.V3_8.IRadioIndication.kInterfaceName, vendor.mediatek.hardware.radio.V3_7.IRadioIndication.kInterfaceName, vendor.mediatek.hardware.radio.V3_4.IRadioIndication.kInterfaceName, vendor.mediatek.hardware.radio.V3_3.IRadioIndication.kInterfaceName, vendor.mediatek.hardware.radio.V3_2.IRadioIndication.kInterfaceName, vendor.mediatek.hardware.radio.V3_1.IRadioIndication.kInterfaceName, vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName, android.hardware.radio.V1_2.IRadioIndication.kInterfaceName, android.hardware.radio.V1_1.IRadioIndication.kInterfaceName, android.hardware.radio.V1_0.IRadioIndication.kInterfaceName, IBase.kInterfaceName));
        }

        @Override // vendor.mediatek.hardware.radio.V3_9.IRadioIndication, vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public final String interfaceDescriptor() {
            return IRadioIndication.kInterfaceName;
        }

        @Override // vendor.mediatek.hardware.radio.V3_9.IRadioIndication, vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public final boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) {
            return true;
        }

        @Override // vendor.mediatek.hardware.radio.V3_9.IRadioIndication, vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public final void notifySyspropsChanged() {
            HwBinder.enableInstrumentation();
        }

        public void onTransact(int i, HwParcel hwParcel, HwParcel hwParcel2, int i2) throws RemoteException {
            switch (i) {
                case 1:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    radioStateChanged(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 2:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    callStateChanged(hwParcel.readInt32());
                    return;
                case 3:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    networkStateChanged(hwParcel.readInt32());
                    return;
                case 4:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    newSms(hwParcel.readInt32(), hwParcel.readInt8Vector());
                    return;
                case 5:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    newSmsStatusReport(hwParcel.readInt32(), hwParcel.readInt8Vector());
                    return;
                case 6:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    newSmsOnSim(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 7:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    onUssd(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 8:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    nitzTimeReceived(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readInt64());
                    return;
                case 9:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    int int32 = hwParcel.readInt32();
                    SignalStrength signalStrength = new SignalStrength();
                    signalStrength.readFromParcel(hwParcel);
                    currentSignalStrength(int32, signalStrength);
                    return;
                case 10:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    dataCallListChanged(hwParcel.readInt32(), SetupDataCallResult.readVectorFromParcel(hwParcel));
                    return;
                case 11:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    int int33 = hwParcel.readInt32();
                    SuppSvcNotification suppSvcNotification = new SuppSvcNotification();
                    suppSvcNotification.readFromParcel(hwParcel);
                    suppSvcNotify(int33, suppSvcNotification);
                    return;
                case 12:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    stkSessionEnd(hwParcel.readInt32());
                    return;
                case 13:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    stkProactiveCommand(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 14:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    stkEventNotify(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 15:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    stkCallSetup(hwParcel.readInt32(), hwParcel.readInt64());
                    return;
                case 16:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    simSmsStorageFull(hwParcel.readInt32());
                    return;
                case 17:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    int int34 = hwParcel.readInt32();
                    SimRefreshResult simRefreshResult = new SimRefreshResult();
                    simRefreshResult.readFromParcel(hwParcel);
                    simRefresh(int34, simRefreshResult);
                    return;
                case 18:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    int int35 = hwParcel.readInt32();
                    boolean bool = hwParcel.readBool();
                    CdmaSignalInfoRecord cdmaSignalInfoRecord = new CdmaSignalInfoRecord();
                    cdmaSignalInfoRecord.readFromParcel(hwParcel);
                    callRing(int35, bool, cdmaSignalInfoRecord);
                    return;
                case 19:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    simStatusChanged(hwParcel.readInt32());
                    return;
                case 20:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    int int36 = hwParcel.readInt32();
                    CdmaSmsMessage cdmaSmsMessage = new CdmaSmsMessage();
                    cdmaSmsMessage.readFromParcel(hwParcel);
                    cdmaNewSms(int36, cdmaSmsMessage);
                    return;
                case 21:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    newBroadcastSms(hwParcel.readInt32(), hwParcel.readInt8Vector());
                    return;
                case 22:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    cdmaRuimSmsStorageFull(hwParcel.readInt32());
                    return;
                case 23:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    restrictedStateChanged(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 24:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    enterEmergencyCallbackMode(hwParcel.readInt32());
                    return;
                case 25:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    int int37 = hwParcel.readInt32();
                    CdmaCallWaiting cdmaCallWaiting = new CdmaCallWaiting();
                    cdmaCallWaiting.readFromParcel(hwParcel);
                    cdmaCallWaiting(int37, cdmaCallWaiting);
                    return;
                case 26:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    cdmaOtaProvisionStatus(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 27:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    int int38 = hwParcel.readInt32();
                    CdmaInformationRecords cdmaInformationRecords = new CdmaInformationRecords();
                    cdmaInformationRecords.readFromParcel(hwParcel);
                    cdmaInfoRec(int38, cdmaInformationRecords);
                    return;
                case 28:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    indicateRingbackTone(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 29:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    resendIncallMute(hwParcel.readInt32());
                    return;
                case 30:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    cdmaSubscriptionSourceChanged(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 31:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    cdmaPrlChanged(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 32:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    exitEmergencyCallbackMode(hwParcel.readInt32());
                    return;
                case 33:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    rilConnected(hwParcel.readInt32());
                    return;
                case 34:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    voiceRadioTechChanged(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 35:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    cellInfoList(hwParcel.readInt32(), CellInfo.readVectorFromParcel(hwParcel));
                    return;
                case 36:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    imsNetworkStateChanged(hwParcel.readInt32());
                    return;
                case 37:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    subscriptionStatusChanged(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 38:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    srvccStateNotify(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 39:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    hardwareConfigChanged(hwParcel.readInt32(), HardwareConfig.readVectorFromParcel(hwParcel));
                    return;
                case 40:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    int int39 = hwParcel.readInt32();
                    RadioCapability radioCapability = new RadioCapability();
                    radioCapability.readFromParcel(hwParcel);
                    radioCapabilityIndication(int39, radioCapability);
                    return;
                case 41:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    int int310 = hwParcel.readInt32();
                    StkCcUnsolSsResult stkCcUnsolSsResult = new StkCcUnsolSsResult();
                    stkCcUnsolSsResult.readFromParcel(hwParcel);
                    onSupplementaryServiceIndication(int310, stkCcUnsolSsResult);
                    return;
                case 42:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    stkCallControlAlphaNotify(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 43:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    int int311 = hwParcel.readInt32();
                    LceDataInfo lceDataInfo = new LceDataInfo();
                    lceDataInfo.readFromParcel(hwParcel);
                    lceData(int311, lceDataInfo);
                    return;
                case 44:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    int int312 = hwParcel.readInt32();
                    PcoDataInfo pcoDataInfo = new PcoDataInfo();
                    pcoDataInfo.readFromParcel(hwParcel);
                    pcoData(int312, pcoDataInfo);
                    return;
                case 45:
                    hwParcel.enforceInterface(android.hardware.radio.V1_0.IRadioIndication.kInterfaceName);
                    modemReset(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 46:
                    hwParcel.enforceInterface(android.hardware.radio.V1_1.IRadioIndication.kInterfaceName);
                    carrierInfoForImsiEncryption(hwParcel.readInt32());
                    return;
                case 47:
                    hwParcel.enforceInterface(android.hardware.radio.V1_1.IRadioIndication.kInterfaceName);
                    int int313 = hwParcel.readInt32();
                    NetworkScanResult networkScanResult = new NetworkScanResult();
                    networkScanResult.readFromParcel(hwParcel);
                    networkScanResult(int313, networkScanResult);
                    return;
                case 48:
                    hwParcel.enforceInterface(android.hardware.radio.V1_1.IRadioIndication.kInterfaceName);
                    int int314 = hwParcel.readInt32();
                    KeepaliveStatus keepaliveStatus = new KeepaliveStatus();
                    keepaliveStatus.readFromParcel(hwParcel);
                    keepaliveStatus(int314, keepaliveStatus);
                    return;
                case 49:
                    hwParcel.enforceInterface(android.hardware.radio.V1_2.IRadioIndication.kInterfaceName);
                    int int315 = hwParcel.readInt32();
                    android.hardware.radio.V1_2.NetworkScanResult networkScanResult2 = new android.hardware.radio.V1_2.NetworkScanResult();
                    networkScanResult2.readFromParcel(hwParcel);
                    networkScanResult_1_2(int315, networkScanResult2);
                    return;
                case 50:
                    hwParcel.enforceInterface(android.hardware.radio.V1_2.IRadioIndication.kInterfaceName);
                    cellInfoList_1_2(hwParcel.readInt32(), android.hardware.radio.V1_2.CellInfo.readVectorFromParcel(hwParcel));
                    return;
                case 51:
                    hwParcel.enforceInterface(android.hardware.radio.V1_2.IRadioIndication.kInterfaceName);
                    int int316 = hwParcel.readInt32();
                    LinkCapacityEstimate linkCapacityEstimate = new LinkCapacityEstimate();
                    linkCapacityEstimate.readFromParcel(hwParcel);
                    currentLinkCapacityEstimate(int316, linkCapacityEstimate);
                    return;
                case 52:
                    hwParcel.enforceInterface(android.hardware.radio.V1_2.IRadioIndication.kInterfaceName);
                    currentPhysicalChannelConfigs(hwParcel.readInt32(), PhysicalChannelConfig.readVectorFromParcel(hwParcel));
                    return;
                case 53:
                    hwParcel.enforceInterface(android.hardware.radio.V1_2.IRadioIndication.kInterfaceName);
                    int int317 = hwParcel.readInt32();
                    android.hardware.radio.V1_2.SignalStrength signalStrength2 = new android.hardware.radio.V1_2.SignalStrength();
                    signalStrength2.readFromParcel(hwParcel);
                    currentSignalStrength_1_2(int317, signalStrength2);
                    return;
                case 54:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    eMBMSAtInfoIndication(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 55:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    eMBMSSessionStatusIndication(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 56:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    phbReadyNotification(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 57:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    int int318 = hwParcel.readInt32();
                    CfuStatusNotification cfuStatusNotification = new CfuStatusNotification();
                    cfuStatusNotification.readFromParcel(hwParcel);
                    cfuStatusNotify(int318, cfuStatusNotification);
                    return;
                case 58:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    int int319 = hwParcel.readInt32();
                    IncomingCallNotification incomingCallNotification = new IncomingCallNotification();
                    incomingCallNotification.readFromParcel(hwParcel);
                    incomingCallIndication(int319, incomingCallNotification);
                    return;
                case 59:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    int int320 = hwParcel.readInt32();
                    CipherNotification cipherNotification = new CipherNotification();
                    cipherNotification.readFromParcel(hwParcel);
                    cipherIndication(int320, cipherNotification);
                    return;
                case 60:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    int int321 = hwParcel.readInt32();
                    CrssNotification crssNotification = new CrssNotification();
                    crssNotification.readFromParcel(hwParcel);
                    crssIndication(int321, crssNotification);
                    return;
                case 61:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    speechCodecInfoIndication(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 62:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    cdmaCallAccepted(hwParcel.readInt32());
                    return;
                case 63:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    eccNumIndication(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 64:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    onVirtualSimOn(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 65:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    onVirtualSimOff(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 66:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    onImeiLock(hwParcel.readInt32());
                    return;
                case 67:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    onImsiRefreshDone(hwParcel.readInt32());
                    return;
                case 68:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    onSimPlugIn(hwParcel.readInt32());
                    return;
                case LastCallFailCause.REQUESTED_FACILITY_NOT_IMPLEMENTED /* 69 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    onSimPlugOut(hwParcel.readInt32());
                    return;
                case 70:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    onSimMissing(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 71:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    onSimRecovery(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 72:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    onSimTrayPlugIn(hwParcel.readInt32());
                    return;
                case 73:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    onSimCommonSlotNoChanged(hwParcel.readInt32());
                    return;
                case 74:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    onSimMeLockEvent(hwParcel.readInt32());
                    return;
                case 75:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    onCardDetectedInd(hwParcel.readInt32());
                    return;
                case 76:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    int int322 = hwParcel.readInt32();
                    VsimOperationEvent vsimOperationEvent = new VsimOperationEvent();
                    vsimOperationEvent.readFromParcel(hwParcel);
                    onVsimEventIndication(int322, vsimOperationEvent);
                    return;
                case 77:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    int int323 = hwParcel.readInt32();
                    EtwsNotification etwsNotification = new EtwsNotification();
                    etwsNotification.readFromParcel(hwParcel);
                    newEtwsInd(int323, etwsNotification);
                    return;
                case 78:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    meSmsStorageFullInd(hwParcel.readInt32());
                    return;
                case 79:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    smsReadyInd(hwParcel.readInt32());
                    return;
                case NgranBands.BAND_80 /* 80 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    oemHookRaw(hwParcel.readInt32(), hwParcel.readInt8Vector());
                    return;
                case 81:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    plmnChangedIndication(hwParcel.readInt32(), hwParcel.readStringVector());
                    return;
                case NgranBands.BAND_82 /* 82 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    registrationSuspendedIndication(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case NgranBands.BAND_83 /* 83 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    gmssRatChangedIndication(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case NgranBands.BAND_84 /* 84 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    worldModeChangedIndication(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case EutranBands.BAND_85 /* 85 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    esnMeidChangeInd(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case NgranBands.BAND_86 /* 86 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    responseCsNetworkStateChangeInd(hwParcel.readInt32(), hwParcel.readStringVector());
                    return;
                case 87:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    responsePsNetworkStateChangeInd(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 88:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    responseInvalidSimInd(hwParcel.readInt32(), hwParcel.readStringVector());
                    return;
                case NgranBands.BAND_89 /* 89 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    responseNetworkEventInd(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case NgranBands.BAND_90 /* 90 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    responseModulationInfoInd(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 91:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    dataAllowedNotification(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case NgranBands.BAND_92 /* 92 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    responseFemtocellInfo(hwParcel.readInt32(), hwParcel.readStringVector());
                    return;
                case NgranBands.BAND_93 /* 93 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    networkInfoInd(hwParcel.readInt32(), hwParcel.readStringVector());
                    return;
                case NgranBands.BAND_94 /* 94 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    int int324 = hwParcel.readInt32();
                    SignalStrengthWithWcdmaEcio signalStrengthWithWcdmaEcio = new SignalStrengthWithWcdmaEcio();
                    signalStrengthWithWcdmaEcio.readFromParcel(hwParcel);
                    currentSignalStrengthWithWcdmaEcioInd(int324, signalStrengthWithWcdmaEcio);
                    return;
                case 95:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    responseLteNetworkInfo(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 96:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    int int325 = hwParcel.readInt32();
                    DedicateDataCall dedicateDataCall = new DedicateDataCall();
                    dedicateDataCall.readFromParcel(hwParcel);
                    dedicatedBearerActivationInd(int325, dedicateDataCall);
                    return;
                case 97:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    int int326 = hwParcel.readInt32();
                    DedicateDataCall dedicateDataCall2 = new DedicateDataCall();
                    dedicateDataCall2.readFromParcel(hwParcel);
                    dedicatedBearerModificationInd(int326, dedicateDataCall2);
                    return;
                case 98:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    dedicatedBearerDeactivationInd(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 99:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    bipProactiveCommand(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 100:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    triggerOtaSP(hwParcel.readInt32());
                    return;
                case 101:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    onStkMenuReset(hwParcel.readInt32());
                    return;
                case 102:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    resetAttachApnInd(hwParcel.readInt32());
                    return;
                case UtranBands.BAND_C /* 103 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    mdChangedApnInd(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case UtranBands.BAND_D /* 104 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    int int327 = hwParcel.readInt32();
                    PcoDataAttachedInfo pcoDataAttachedInfo = new PcoDataAttachedInfo();
                    pcoDataAttachedInfo.readFromParcel(hwParcel);
                    pcoDataAfterAttached(int327, pcoDataAttachedInfo);
                    return;
                case UtranBands.BAND_E /* 105 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    onPcoStatus(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case UtranBands.BAND_F /* 106 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    confSRVCC(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 107:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    volteLteConnectionStatus(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 108:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    onMdDataRetryCountReset(hwParcel.readInt32());
                    return;
                case 109:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    onRemoveRestrictEutran(hwParcel.readInt32());
                    return;
                case 110:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    onLteAccessStratumStateChanged(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 111:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    onTxPowerIndication(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 112:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    onPseudoCellInfoInd(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 113:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    onMccMncChanged(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 114:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    onTxPowerStatusIndication(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 115:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    networkRejectCauseInd(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 116:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    dsbpStateChanged(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 117:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IRadioIndication.kInterfaceName);
                    smlSlotLockInfoChangedInd(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 118:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_2.IRadioIndication.kInterfaceName);
                    onSimPowerChangedInd(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 119:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_7.IRadioIndication.kInterfaceName);
                    networkBandInfoInd(hwParcel.readInt32(), hwParcel.readInt32Vector());
                    return;
                case 120:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_8.IRadioIndication.kInterfaceName);
                    smsInfoExtInd(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 121:
                    hwParcel.enforceInterface(IRadioIndication.kInterfaceName);
                    incomingCallAdditionalInfoInd(hwParcel.readInt32(), hwParcel.readStringVector());
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

        @Override // vendor.mediatek.hardware.radio.V3_9.IRadioIndication, vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public final void ping() {
        }

        public IHwInterface queryLocalInterface(String str) {
            if (IRadioIndication.kInterfaceName.equals(str)) {
                return this;
            }
            return null;
        }

        public void registerAsService(String str) throws RemoteException {
            registerService(str);
        }

        @Override // vendor.mediatek.hardware.radio.V3_9.IRadioIndication, vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public final void setHALInstrumentation() {
        }

        public String toString() {
            return interfaceDescriptor() + "@Stub";
        }

        @Override // vendor.mediatek.hardware.radio.V3_9.IRadioIndication, vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public final boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) {
            return true;
        }
    }

    static IRadioIndication asInterface(IHwBinder iHwBinder) {
        if (iHwBinder == null) {
            return null;
        }
        IHwInterface iHwInterfaceQueryLocalInterface = iHwBinder.queryLocalInterface(kInterfaceName);
        if (iHwInterfaceQueryLocalInterface != null && (iHwInterfaceQueryLocalInterface instanceof IRadioIndication)) {
            return (IRadioIndication) iHwInterfaceQueryLocalInterface;
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

    static IRadioIndication castFrom(IHwInterface iHwInterface) {
        if (iHwInterface == null) {
            return null;
        }
        return asInterface(iHwInterface.asBinder());
    }

    static IRadioIndication getService() throws RemoteException {
        return getService("default");
    }

    static IRadioIndication getService(String str) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str));
    }

    static IRadioIndication getService(String str, boolean z) throws RemoteException {
        return asInterface(HwBinder.getService(kInterfaceName, str, z));
    }

    static IRadioIndication getService(boolean z) throws RemoteException {
        return getService("default", z);
    }

    @Override // vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
    IHwBinder asBinder();

    @Override // vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
    void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
    DebugInfo getDebugInfo() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
    ArrayList<byte[]> getHashChain() throws RemoteException;

    void incomingCallAdditionalInfoInd(int i, ArrayList<String> arrayList) throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
    ArrayList<String> interfaceChain() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
    String interfaceDescriptor() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
    boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
    void notifySyspropsChanged() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
    void ping() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
    void setHALInstrumentation() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_8.IRadioIndication, vendor.mediatek.hardware.radio.V3_7.IRadioIndication, vendor.mediatek.hardware.radio.V3_4.IRadioIndication, vendor.mediatek.hardware.radio.V3_3.IRadioIndication, vendor.mediatek.hardware.radio.V3_2.IRadioIndication, vendor.mediatek.hardware.radio.V3_1.IRadioIndication, vendor.mediatek.hardware.radio.V3_0.IRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
    boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException;
}
