package vendor.mediatek.hardware.radio.V3_11;

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
import vendor.mediatek.hardware.radio.V3_0.Dialog;
import vendor.mediatek.hardware.radio.V3_0.ImsConfParticipant;
import vendor.mediatek.hardware.radio.V3_0.IncomingCallNotification;

/* JADX INFO: loaded from: classes.dex */
public interface IImsRadioIndication extends vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication {
    public static final String kInterfaceName = "vendor.mediatek.hardware.radio@3.11::IImsRadioIndication";

    public static final class Proxy implements IImsRadioIndication {
        private IHwBinder mRemote;

        public Proxy(IHwBinder iHwBinder) {
            Objects.requireNonNull(iHwBinder);
            this.mRemote = iHwBinder;
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public IHwBinder asBinder() {
            return this.mRemote;
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void callInfoIndication(int i, ArrayList<String> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeStringVector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(55, hwParcel, hwParcel2, 1);
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void callmodChangeIndicator(int i, String str, String str2, String str3, String str4, String str5) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            hwParcel.writeString(str4);
            hwParcel.writeString(str5);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(58, hwParcel, hwParcel2, 1);
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void cdmaNewSmsEx(int i, CdmaSmsMessage cdmaSmsMessage) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            cdmaSmsMessage.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(91, hwParcel, hwParcel2, 1);
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

        @Override // vendor.mediatek.hardware.radio.V3_11.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void econfResultIndication(int i, String str, String str2, String str3, String str4, String str5, String str6) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            hwParcel.writeString(str4);
            hwParcel.writeString(str5);
            hwParcel.writeString(str6);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(56, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void ectIndication(int i, int i2, int i3, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(71, hwParcel, hwParcel2, 1);
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

        @Override // vendor.mediatek.hardware.radio.V3_11.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.radio.V3_11.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void getProvisionDone(int i, String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(61, hwParcel, hwParcel2, 1);
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void imsBearerActivation(int i, int i2, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(73, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void imsBearerDeactivation(int i, int i2, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(74, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void imsBearerInit(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(75, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void imsCfgConfigChanged(int i, int i2, String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(86, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void imsCfgConfigLoaded(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(87, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void imsCfgDynamicImsSwitchComplete(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(84, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void imsCfgFeatureChanged(int i, int i2, int i3, int i4) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            hwParcel.writeInt32(i4);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(85, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void imsConferenceInfoIndication(int i, ArrayList<ImsConfParticipant> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            ImsConfParticipant.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(81, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void imsDataInfoNotify(int i, String str, String str2, String str3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(88, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void imsDeregDone(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(76, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void imsDialogIndication(int i, ArrayList<Dialog> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            Dialog.writeVectorToParcel(hwParcel, arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(83, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void imsDisableDone(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(68, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void imsDisableStart(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(70, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void imsEnableDone(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(67, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void imsEnableStart(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(69, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void imsEventPackageIndication(int i, String str, String str2, String str3, String str4, String str5) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            hwParcel.writeString(str4);
            hwParcel.writeString(str5);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(65, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void imsRadioInfoChange(int i, String str, String str2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(79, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication
        public void imsRedialEmergencyIndication(int i, String str) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(93, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void imsRegistrationInfo(int i, int i2, int i3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            hwParcel.writeInt32(i3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(66, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void imsRtpInfo(int i, String str, String str2, String str3, String str4, String str5) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            hwParcel.writeString(str4);
            hwParcel.writeString(str5);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(62, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IImsRadioIndication
        public void imsRtpInfoReport(int i, String str, String str2, String str3, String str4, String str5, String str6, String str7) throws RemoteException {
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
                this.mRemote.transact(94, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void imsSupportEcc(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(78, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void incomingCallIndication(int i, IncomingCallNotification incomingCallNotification) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            incomingCallNotification.writeToParcel(hwParcel);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(54, hwParcel, hwParcel2, 1);
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

        @Override // vendor.mediatek.hardware.radio.V3_11.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.radio.V3_11.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.radio.V3_11.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException {
            return this.mRemote.linkToDeath(deathRecipient, j);
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void lteMessageWaitingIndication(int i, String str, String str2, String str3, String str4, String str5) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            hwParcel.writeString(str4);
            hwParcel.writeString(str5);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(82, hwParcel, hwParcel2, 1);
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void multiImsCount(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void newSmsEx(int i, ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt8Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(89, hwParcel, hwParcel2, 1);
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void newSmsStatusReportEx(int i, ArrayList<Byte> arrayList) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt8Vector(arrayList);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(90, hwParcel, hwParcel2, 1);
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

        @Override // vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication
        public void noEmergencyCallbackMode(int i) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(92, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void onUssi(int i, String str, String str2, String str3, String str4, String str5, String str6, String str7) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
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
                this.mRemote.transact(60, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void onVolteSubscription(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void onXui(int i, String str, String str2, String str3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(63, hwParcel, hwParcel2, 1);
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

        @Override // vendor.mediatek.hardware.radio.V3_11.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.radio.V3_11.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void sipCallProgressIndicator(int i, String str, String str2, String str3, String str4, String str5, String str6) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            hwParcel.writeString(str4);
            hwParcel.writeString(str5);
            hwParcel.writeString(str6);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(57, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void speechCodecInfoIndication(int i, int i2) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeInt32(i2);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(80, hwParcel, hwParcel2, 1);
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
                return "[class or subclass of vendor.mediatek.hardware.radio@3.11::IImsRadioIndication]@Proxy";
            }
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException {
            return this.mRemote.unlinkToDeath(deathRecipient);
        }

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void videoCapabilityIndicator(int i, String str, String str2, String str3) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeString(str);
            hwParcel.writeString(str2);
            hwParcel.writeString(str3);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(59, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
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

        @Override // vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication
        public void volteSetting(int i, boolean z) throws RemoteException {
            HwParcel hwParcel = new HwParcel();
            hwParcel.writeInterfaceToken(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
            hwParcel.writeInt32(i);
            hwParcel.writeBool(z);
            HwParcel hwParcel2 = new HwParcel();
            try {
                this.mRemote.transact(72, hwParcel, hwParcel2, 1);
                hwParcel.releaseTemporaryStorage();
            } finally {
                hwParcel2.release();
            }
        }
    }

    public static abstract class Stub extends HwBinder implements IImsRadioIndication {
        @Override // vendor.mediatek.hardware.radio.V3_11.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public IHwBinder asBinder() {
            return this;
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) {
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public final DebugInfo getDebugInfo() {
            DebugInfo debugInfo = new DebugInfo();
            debugInfo.pid = HidlSupport.getPidIfSharable();
            debugInfo.ptr = 0L;
            debugInfo.arch = 0;
            return debugInfo;
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public final ArrayList<byte[]> getHashChain() {
            return new ArrayList<>(Arrays.asList(new byte[]{-122, -84, 57, -57, -69, -17, -59, -31, -101, 30, 77, -93, -109, -86, 86, 42, -55, -1, -80, 30, -36, 92, 103, -57, -51, 110, 53, -24, -128, 38, -124, 92}, new byte[]{-107, 61, 119, -98, 19, -123, 36, -43, 122, 110, 96, -73, -91, -70, -64, -2, -36, -2, -105, 39, 88, 31, -103, 82, 57, 0, -127, -46, 83, 33, -106, -33}, new byte[]{103, -38, -1, -90, 116, -103, -120, 109, -118, -72, 112, -88, -12, -121, -37, 83, -11, -32, -80, -103, 123, 47, -97, 20, 33, -4, 126, 84, 61, -13, 90, -36}, new byte[]{73, 71, -84, -7, -87, -33, 103, 82, -94, -3, 25, -125, 20, 86, 89, -26, -120, -41, -81, -95, -59, 35, 122, 82, -25, -34, 0, 44, -63, -15, -99, -68}, new byte[]{-51, -89, 82, -82, -85, -86, -68, 32, 72, 106, -126, -84, 87, -93, -35, 16, 119, -123, -64, 6, 9, 74, 52, -101, -59, -30, 36, -24, -86, 34, -95, 124}, new byte[]{-4, -59, -56, -56, -117, -123, -87, -10, 63, -70, 103, -39, -26, 116, -38, 70, 108, 114, -87, -116, -94, -121, -13, 67, -5, 87, 33, -48, -104, 113, 63, -122}, new byte[]{92, -114, -5, -71, -60, 81, -91, -105, 55, -19, 44, 108, 32, 35, 10, -82, 71, 69, -125, -100, -96, 29, -128, -120, -42, -36, -55, 2, 14, 82, -46, -59}, new byte[]{-20, 127, -41, -98, -48, 45, -6, -123, -68, 73, -108, 38, -83, -82, 62, -66, 35, -17, 5, 36, -13, -51, 105, 87, 19, -109, 36, -72, 59, 24, -54, 76}));
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public final ArrayList<String> interfaceChain() {
            return new ArrayList<>(Arrays.asList(IImsRadioIndication.kInterfaceName, vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication.kInterfaceName, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication.kInterfaceName, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName, android.hardware.radio.V1_2.IRadioIndication.kInterfaceName, android.hardware.radio.V1_1.IRadioIndication.kInterfaceName, android.hardware.radio.V1_0.IRadioIndication.kInterfaceName, IBase.kInterfaceName));
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public final String interfaceDescriptor() {
            return IImsRadioIndication.kInterfaceName;
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public final boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) {
            return true;
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
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
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    int int318 = hwParcel.readInt32();
                    IncomingCallNotification incomingCallNotification = new IncomingCallNotification();
                    incomingCallNotification.readFromParcel(hwParcel);
                    incomingCallIndication(int318, incomingCallNotification);
                    return;
                case 55:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    callInfoIndication(hwParcel.readInt32(), hwParcel.readStringVector());
                    return;
                case 56:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    econfResultIndication(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 57:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    sipCallProgressIndicator(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 58:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    callmodChangeIndicator(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 59:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    videoCapabilityIndicator(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 60:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    onUssi(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 61:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    getProvisionDone(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 62:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    imsRtpInfo(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 63:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    onXui(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 64:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    onVolteSubscription(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 65:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    imsEventPackageIndication(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 66:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    imsRegistrationInfo(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 67:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    imsEnableDone(hwParcel.readInt32());
                    return;
                case 68:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    imsDisableDone(hwParcel.readInt32());
                    return;
                case LastCallFailCause.REQUESTED_FACILITY_NOT_IMPLEMENTED /* 69 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    imsEnableStart(hwParcel.readInt32());
                    return;
                case 70:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    imsDisableStart(hwParcel.readInt32());
                    return;
                case 71:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    ectIndication(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 72:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    volteSetting(hwParcel.readInt32(), hwParcel.readBool());
                    return;
                case 73:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    imsBearerActivation(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 74:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    imsBearerDeactivation(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString());
                    return;
                case 75:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    imsBearerInit(hwParcel.readInt32());
                    return;
                case 76:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    imsDeregDone(hwParcel.readInt32());
                    return;
                case 77:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    multiImsCount(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 78:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    imsSupportEcc(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 79:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    imsRadioInfoChange(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString());
                    return;
                case NgranBands.BAND_80 /* 80 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    speechCodecInfoIndication(hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case 81:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    imsConferenceInfoIndication(hwParcel.readInt32(), ImsConfParticipant.readVectorFromParcel(hwParcel));
                    return;
                case NgranBands.BAND_82 /* 82 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    lteMessageWaitingIndication(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case NgranBands.BAND_83 /* 83 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    imsDialogIndication(hwParcel.readInt32(), Dialog.readVectorFromParcel(hwParcel));
                    return;
                case NgranBands.BAND_84 /* 84 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    imsCfgDynamicImsSwitchComplete(hwParcel.readInt32());
                    return;
                case EutranBands.BAND_85 /* 85 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    imsCfgFeatureChanged(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readInt32());
                    return;
                case NgranBands.BAND_86 /* 86 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    imsCfgConfigChanged(hwParcel.readInt32(), hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString());
                    return;
                case 87:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    imsCfgConfigLoaded(hwParcel.readInt32());
                    return;
                case 88:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    imsDataInfoNotify(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
                    return;
                case NgranBands.BAND_89 /* 89 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    newSmsEx(hwParcel.readInt32(), hwParcel.readInt8Vector());
                    return;
                case NgranBands.BAND_90 /* 90 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    newSmsStatusReportEx(hwParcel.readInt32(), hwParcel.readInt8Vector());
                    return;
                case 91:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication.kInterfaceName);
                    int int319 = hwParcel.readInt32();
                    CdmaSmsMessage cdmaSmsMessage2 = new CdmaSmsMessage();
                    cdmaSmsMessage2.readFromParcel(hwParcel);
                    cdmaNewSmsEx(int319, cdmaSmsMessage2);
                    return;
                case NgranBands.BAND_92 /* 92 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication.kInterfaceName);
                    noEmergencyCallbackMode(hwParcel.readInt32());
                    return;
                case NgranBands.BAND_93 /* 93 */:
                    hwParcel.enforceInterface(vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication.kInterfaceName);
                    imsRedialEmergencyIndication(hwParcel.readInt32(), hwParcel.readString());
                    return;
                case NgranBands.BAND_94 /* 94 */:
                    hwParcel.enforceInterface(IImsRadioIndication.kInterfaceName);
                    imsRtpInfoReport(hwParcel.readInt32(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString(), hwParcel.readString());
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

        @Override // vendor.mediatek.hardware.radio.V3_11.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
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

        @Override // vendor.mediatek.hardware.radio.V3_11.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public final void setHALInstrumentation() {
        }

        public String toString() {
            return interfaceDescriptor() + "@Stub";
        }

        @Override // vendor.mediatek.hardware.radio.V3_11.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
        public final boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) {
            return true;
        }
    }

    static IImsRadioIndication asInterface(IHwBinder iHwBinder) {
        if (iHwBinder == null) {
            return null;
        }
        IHwInterface iHwInterfaceQueryLocalInterface = iHwBinder.queryLocalInterface(kInterfaceName);
        if (iHwInterfaceQueryLocalInterface != null && (iHwInterfaceQueryLocalInterface instanceof IImsRadioIndication)) {
            return (IImsRadioIndication) iHwInterfaceQueryLocalInterface;
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

    @Override // vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
    IHwBinder asBinder();

    @Override // vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
    void debug(NativeHandle nativeHandle, ArrayList<String> arrayList) throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
    DebugInfo getDebugInfo() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
    ArrayList<byte[]> getHashChain() throws RemoteException;

    void imsRtpInfoReport(int i, String str, String str2, String str3, String str4, String str5, String str6, String str7) throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
    ArrayList<String> interfaceChain() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
    String interfaceDescriptor() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
    boolean linkToDeath(IHwBinder.DeathRecipient deathRecipient, long j) throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
    void notifySyspropsChanged() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
    void ping() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
    void setHALInstrumentation() throws RemoteException;

    @Override // vendor.mediatek.hardware.radio.V3_6.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_1.IImsRadioIndication, vendor.mediatek.hardware.radio.V3_0.IImsRadioIndication, android.hardware.radio.V1_2.IRadioIndication, android.hardware.radio.V1_1.IRadioIndication, android.hardware.radio.V1_0.IRadioIndication, android.hidl.base.V1_0.IBase
    boolean unlinkToDeath(IHwBinder.DeathRecipient deathRecipient) throws RemoteException;
}
