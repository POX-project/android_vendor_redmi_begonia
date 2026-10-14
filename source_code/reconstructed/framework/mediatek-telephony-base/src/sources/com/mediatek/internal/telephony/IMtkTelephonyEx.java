package com.mediatek.internal.telephony;

import android.net.NetworkStats;
import android.os.Binder;
import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import android.telephony.CellInfo;
import android.telephony.RadioAccessFamily;
import android.telephony.ServiceState;
import com.mediatek.telephony.IOemHookCallback;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public interface IMtkTelephonyEx extends IInterface {

    public static class Default implements IMtkTelephonyEx {
        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public boolean abortFemtoCellList(int i) throws RemoteException {
            return false;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public boolean cancelAvailableNetworks(int i) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public boolean exitEmergencyCallbackMode(int i) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public int[] getAdnStorageInfo(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public List<CellInfo> getAllCellInfo(int i, String str) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public PseudoCellInfo getApcInfoUsingSlotId(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public boolean getCallSubAddressEnabled(int i) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public int getCdmaSubscriptionActStatus(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public Bundle getCellLocationUsingSlotId(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public int getDebuggingDsdaStatus() throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public int getDisable2G(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public List<FemtoCellInfo> getFemtoCellList(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public int getIccAppFamily(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public String getIccAtr(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public String getIccCardType(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public boolean getIsLastEccIms() throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public String getLocatedPlmn(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public int getMainCapabilityPhoneId() throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public NetworkStats getMobileDataUsage(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public String getMvnoMatchType(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public String getMvnoPattern(int i, String str) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public String getNrMapStatus(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public int getPCO520State(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public int[] getRoamingEnable(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public int[] getRxTestResult(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public int getSelfActivateState(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public ServiceState getServiceStateByPhoneId(int i, String str, String str2) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public int getSimLockStateForRSU(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public int getSimOnOffExecutingState(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public int getSimOnOffState(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public String[] getSimOperatorNumericForPhoneEx(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public String getSimSerialNumber(String str, int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public String[] getSuggestedPlmnList(int i, int i2, int i3, int i4, String str) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public String getUimSubscriberId(String str, int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public byte[] iccExchangeSimIOEx(int i, int i2, int i3, int i4, int i5, int i6, String str, String str2, String str3) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public int invokeOemRilRequestRaw(byte[] bArr, byte[] bArr2) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public int invokeOemRilRequestRawBySlot(int i, byte[] bArr, byte[] bArr2) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public boolean isAppTypeSupported(int i, int i2) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public boolean isCapabilitySwitching() throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public boolean isEmergencyNumber(int i, String str) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public boolean isFdnEnabled(int i) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public boolean isImsRegistered(int i) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public boolean isInCsCall(int i) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public boolean isInHomeNetwork(int i) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public boolean isNrMapEnabled(int i) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public boolean isPhbReady(int i) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public boolean isRadioOffBySimManagement(int i) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public boolean isTestIccCard(int i) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public boolean isVolteEnabled(int i) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public boolean isWifiCallingEnabled(int i) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public List<String> loadEFLinearFixedAll(int i, int i2, int i3, String str) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public byte[] loadEFTransparent(int i, int i2, int i3, String str) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public void manuallySetNrMap(int i, int i2) throws RemoteException {
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public int queryFemtoCellSystemSelectionMode(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public Bundle queryNetworkLock(int i, int i2) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public void registerAtUrcInd(int i, IOemHookCallback iOemHookCallback) throws RemoteException {
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public void repollIccStateForNetworkLock(int i, boolean z) throws RemoteException {
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public boolean selectFemtoCell(int i, FemtoCellInfo femtoCellInfo) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public int selfActivationAction(int i, Bundle bundle, int i2) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public void sendAtCmd(int i, long j, String str, IOemHookCallback iOemHookCallback) throws RemoteException {
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public void setApcModeUsingSlotId(int i, int i2, boolean z, int i3) throws RemoteException {
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public void setCallSubAddressEnabled(int i, boolean z) throws RemoteException {
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public boolean setDisable2G(int i, boolean z) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public boolean setFemtoCellSystemSelectionMode(int i, int i2) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public void setIsLastEccIms(boolean z) throws RemoteException {
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public void setMobileDataUsageSum(int i, long j, long j2, long j3, long j4) throws RemoteException {
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public boolean setRadioCapability(RadioAccessFamily[] radioAccessFamilyArr) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public boolean setRoamingEnable(int i, int[] iArr) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public int[] setRxTestConfig(int i, int i2) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public int setSimPower(int i, int i2) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public boolean setupPdnByType(int i, String str) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public byte[] simAkaAuthentication(int i, int i2, byte[] bArr, byte[] bArr2) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public byte[] simGbaAuthBootStrapMode(int i, int i2, byte[] bArr, byte[] bArr2) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public byte[] simGbaAuthNafMode(int i, int i2, byte[] bArr, byte[] bArr2) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public int[] supplyDeviceNetworkDepersonalization(String str) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public int supplyNetworkDepersonalization(int i, String str) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public void switchNrMap(int i, boolean z) throws RemoteException {
        }

        @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
        public boolean tearDownPdnByType(int i, String str) throws RemoteException {
            return false;
        }
    }

    public static abstract class Stub extends Binder implements IMtkTelephonyEx {
        private static final String DESCRIPTOR = "com.mediatek.internal.telephony.IMtkTelephonyEx";
        static final int TRANSACTION_abortFemtoCellList = 56;
        static final int TRANSACTION_cancelAvailableNetworks = 60;
        static final int TRANSACTION_exitEmergencyCallbackMode = 40;
        static final int TRANSACTION_getAdnStorageInfo = 33;
        static final int TRANSACTION_getAllCellInfo = 51;
        static final int TRANSACTION_getApcInfoUsingSlotId = 42;
        static final int TRANSACTION_getCallSubAddressEnabled = 77;
        static final int TRANSACTION_getCdmaSubscriptionActStatus = 43;
        static final int TRANSACTION_getCellLocationUsingSlotId = 23;
        static final int TRANSACTION_getDebuggingDsdaStatus = 72;
        static final int TRANSACTION_getDisable2G = 54;
        static final int TRANSACTION_getFemtoCellList = 55;
        static final int TRANSACTION_getIccAppFamily = 2;
        static final int TRANSACTION_getIccAtr = 6;
        static final int TRANSACTION_getIccCardType = 3;
        static final int TRANSACTION_getIsLastEccIms = 45;
        static final int TRANSACTION_getLocatedPlmn = 52;
        static final int TRANSACTION_getMainCapabilityPhoneId = 29;
        static final int TRANSACTION_getMobileDataUsage = 69;
        static final int TRANSACTION_getMvnoMatchType = 16;
        static final int TRANSACTION_getMvnoPattern = 17;
        static final int TRANSACTION_getNrMapStatus = 76;
        static final int TRANSACTION_getPCO520State = 39;
        static final int TRANSACTION_getRoamingEnable = 67;
        static final int TRANSACTION_getRxTestResult = 36;
        static final int TRANSACTION_getSelfActivateState = 38;
        static final int TRANSACTION_getServiceStateByPhoneId = 65;
        static final int TRANSACTION_getSimLockStateForRSU = 62;
        static final int TRANSACTION_getSimOnOffExecutingState = 12;
        static final int TRANSACTION_getSimOnOffState = 11;
        static final int TRANSACTION_getSimOperatorNumericForPhoneEx = 26;
        static final int TRANSACTION_getSimSerialNumber = 25;
        static final int TRANSACTION_getSuggestedPlmnList = 68;
        static final int TRANSACTION_getUimSubscriberId = 24;
        static final int TRANSACTION_iccExchangeSimIOEx = 7;
        static final int TRANSACTION_invokeOemRilRequestRaw = 48;
        static final int TRANSACTION_invokeOemRilRequestRawBySlot = 49;
        static final int TRANSACTION_isAppTypeSupported = 4;
        static final int TRANSACTION_isCapabilitySwitching = 28;
        static final int TRANSACTION_isEmergencyNumber = 71;
        static final int TRANSACTION_isFdnEnabled = 22;
        static final int TRANSACTION_isImsRegistered = 30;
        static final int TRANSACTION_isInCsCall = 50;
        static final int TRANSACTION_isInHomeNetwork = 1;
        static final int TRANSACTION_isNrMapEnabled = 75;
        static final int TRANSACTION_isPhbReady = 34;
        static final int TRANSACTION_isRadioOffBySimManagement = 21;
        static final int TRANSACTION_isTestIccCard = 5;
        static final int TRANSACTION_isVolteEnabled = 31;
        static final int TRANSACTION_isWifiCallingEnabled = 32;
        static final int TRANSACTION_loadEFLinearFixedAll = 9;
        static final int TRANSACTION_loadEFTransparent = 8;
        static final int TRANSACTION_manuallySetNrMap = 74;
        static final int TRANSACTION_queryFemtoCellSystemSelectionMode = 58;
        static final int TRANSACTION_queryNetworkLock = 13;
        static final int TRANSACTION_registerAtUrcInd = 46;
        static final int TRANSACTION_repollIccStateForNetworkLock = 15;
        static final int TRANSACTION_selectFemtoCell = 57;
        static final int TRANSACTION_selfActivationAction = 37;
        static final int TRANSACTION_sendAtCmd = 47;
        static final int TRANSACTION_setApcModeUsingSlotId = 41;
        static final int TRANSACTION_setCallSubAddressEnabled = 78;
        static final int TRANSACTION_setDisable2G = 53;
        static final int TRANSACTION_setFemtoCellSystemSelectionMode = 59;
        static final int TRANSACTION_setIsLastEccIms = 44;
        static final int TRANSACTION_setMobileDataUsageSum = 70;
        static final int TRANSACTION_setRadioCapability = 27;
        static final int TRANSACTION_setRoamingEnable = 66;
        static final int TRANSACTION_setRxTestConfig = 35;
        static final int TRANSACTION_setSimPower = 10;
        static final int TRANSACTION_setupPdnByType = 64;
        static final int TRANSACTION_simAkaAuthentication = 18;
        static final int TRANSACTION_simGbaAuthBootStrapMode = 19;
        static final int TRANSACTION_simGbaAuthNafMode = 20;
        static final int TRANSACTION_supplyDeviceNetworkDepersonalization = 61;
        static final int TRANSACTION_supplyNetworkDepersonalization = 14;
        static final int TRANSACTION_switchNrMap = 73;
        static final int TRANSACTION_tearDownPdnByType = 63;

        private static class Proxy implements IMtkTelephonyEx {
            public static IMtkTelephonyEx sDefaultImpl;
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public boolean abortFemtoCellList(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_abortFemtoCellList, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().abortFemtoCellList(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public boolean cancelAvailableNetworks(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_cancelAvailableNetworks, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().cancelAvailableNetworks(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public boolean exitEmergencyCallbackMode(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_exitEmergencyCallbackMode, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().exitEmergencyCallbackMode(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public int[] getAdnStorageInfo(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getAdnStorageInfo, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getAdnStorageInfo(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createIntArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public List<CellInfo> getAllCellInfo(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getAllCellInfo, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getAllCellInfo(i, str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createTypedArrayList(CellInfo.CREATOR);
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public PseudoCellInfo getApcInfoUsingSlotId(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getApcInfoUsingSlotId, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getApcInfoUsingSlotId(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0 ? PseudoCellInfo.CREATOR.createFromParcel(parcelObtain2) : null;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public boolean getCallSubAddressEnabled(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getCallSubAddressEnabled, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getCallSubAddressEnabled(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public int getCdmaSubscriptionActStatus(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getCdmaSubscriptionActStatus, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getCdmaSubscriptionActStatus(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public Bundle getCellLocationUsingSlotId(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(23, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getCellLocationUsingSlotId(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0 ? (Bundle) Bundle.CREATOR.createFromParcel(parcelObtain2) : null;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public int getDebuggingDsdaStatus() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getDebuggingDsdaStatus, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getDebuggingDsdaStatus();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public int getDisable2G(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(54, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getDisable2G(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public List<FemtoCellInfo> getFemtoCellList(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getFemtoCellList, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getFemtoCellList(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createTypedArrayList(FemtoCellInfo.CREATOR);
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public int getIccAppFamily(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getIccAppFamily(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public String getIccAtr(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(6, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getIccAtr(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public String getIccCardType(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(3, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getIccCardType(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return Stub.DESCRIPTOR;
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public boolean getIsLastEccIms() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getIsLastEccIms, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getIsLastEccIms();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public String getLocatedPlmn(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getLocatedPlmn, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getLocatedPlmn(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public int getMainCapabilityPhoneId() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getMainCapabilityPhoneId, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getMainCapabilityPhoneId();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public NetworkStats getMobileDataUsage(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getMobileDataUsage, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getMobileDataUsage(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0 ? (NetworkStats) NetworkStats.CREATOR.createFromParcel(parcelObtain2) : null;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public String getMvnoMatchType(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(16, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getMvnoMatchType(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public String getMvnoPattern(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(17, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getMvnoPattern(i, str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public String getNrMapStatus(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getNrMapStatus, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getNrMapStatus(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public int getPCO520State(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getPCO520State, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getPCO520State(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public int[] getRoamingEnable(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getRoamingEnable, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getRoamingEnable(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createIntArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public int[] getRxTestResult(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getRxTestResult, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getRxTestResult(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createIntArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public int getSelfActivateState(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getSelfActivateState, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getSelfActivateState(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public ServiceState getServiceStateByPhoneId(int i, String str, String str2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getServiceStateByPhoneId, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getServiceStateByPhoneId(i, str, str2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0 ? (ServiceState) ServiceState.CREATOR.createFromParcel(parcelObtain2) : null;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public int getSimLockStateForRSU(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getSimLockStateForRSU, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getSimLockStateForRSU(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public int getSimOnOffExecutingState(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(12, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getSimOnOffExecutingState(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public int getSimOnOffState(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(11, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getSimOnOffState(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public String[] getSimOperatorNumericForPhoneEx(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getSimOperatorNumericForPhoneEx, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getSimOperatorNumericForPhoneEx(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createStringArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public String getSimSerialNumber(String str, int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getSimSerialNumber, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getSimSerialNumber(str, i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public String[] getSuggestedPlmnList(int i, int i2, int i3, int i4, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeInt(i3);
                    parcelObtain.writeInt(i4);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getSuggestedPlmnList, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getSuggestedPlmnList(i, i2, i3, i4, str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createStringArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public String getUimSubscriberId(String str, int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(24, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getUimSubscriberId(str, i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public byte[] iccExchangeSimIOEx(int i, int i2, int i3, int i4, int i5, int i6, String str, String str2, String str3) throws Throwable {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    try {
                        parcelObtain.writeInt(i);
                        try {
                            parcelObtain.writeInt(i2);
                            try {
                                parcelObtain.writeInt(i3);
                                parcelObtain.writeInt(i4);
                                parcelObtain.writeInt(i5);
                                parcelObtain.writeInt(i6);
                                parcelObtain.writeString(str);
                                parcelObtain.writeString(str2);
                                parcelObtain.writeString(str3);
                                if (!this.mRemote.transact(7, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                                    byte[] bArrIccExchangeSimIOEx = Stub.getDefaultImpl().iccExchangeSimIOEx(i, i2, i3, i4, i5, i6, str, str2, str3);
                                    parcelObtain2.recycle();
                                    parcelObtain.recycle();
                                    return bArrIccExchangeSimIOEx;
                                }
                                parcelObtain2.readException();
                                byte[] bArrCreateByteArray = parcelObtain2.createByteArray();
                                parcelObtain2.recycle();
                                parcelObtain.recycle();
                                return bArrCreateByteArray;
                            } catch (Throwable th) {
                                th = th;
                                parcelObtain2.recycle();
                                parcelObtain.recycle();
                                throw th;
                            }
                        } catch (Throwable th2) {
                            th = th2;
                            parcelObtain2.recycle();
                            parcelObtain.recycle();
                            throw th;
                        }
                    } catch (Throwable th3) {
                        th = th3;
                        parcelObtain2.recycle();
                        parcelObtain.recycle();
                        throw th;
                    }
                } catch (Throwable th4) {
                    th = th4;
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public int invokeOemRilRequestRaw(byte[] bArr, byte[] bArr2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeByteArray(bArr);
                    if (bArr2 == null) {
                        parcelObtain.writeInt(-1);
                    } else {
                        parcelObtain.writeInt(bArr2.length);
                    }
                    if (!this.mRemote.transact(Stub.TRANSACTION_invokeOemRilRequestRaw, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().invokeOemRilRequestRaw(bArr, bArr2);
                    }
                    parcelObtain2.readException();
                    int i = parcelObtain2.readInt();
                    parcelObtain2.readByteArray(bArr2);
                    return i;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public int invokeOemRilRequestRawBySlot(int i, byte[] bArr, byte[] bArr2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeByteArray(bArr);
                    if (bArr2 == null) {
                        parcelObtain.writeInt(-1);
                    } else {
                        parcelObtain.writeInt(bArr2.length);
                    }
                    if (!this.mRemote.transact(Stub.TRANSACTION_invokeOemRilRequestRawBySlot, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().invokeOemRilRequestRawBySlot(i, bArr, bArr2);
                    }
                    parcelObtain2.readException();
                    int i2 = parcelObtain2.readInt();
                    parcelObtain2.readByteArray(bArr2);
                    return i2;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public boolean isAppTypeSupported(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (!this.mRemote.transact(4, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().isAppTypeSupported(i, i2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public boolean isCapabilitySwitching() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(Stub.TRANSACTION_isCapabilitySwitching, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().isCapabilitySwitching();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public boolean isEmergencyNumber(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(71, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().isEmergencyNumber(i, str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public boolean isFdnEnabled(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(22, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().isFdnEnabled(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public boolean isImsRegistered(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_isImsRegistered, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().isImsRegistered(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public boolean isInCsCall(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_isInCsCall, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().isInCsCall(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public boolean isInHomeNetwork(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().isInHomeNetwork(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public boolean isNrMapEnabled(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_isNrMapEnabled, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().isNrMapEnabled(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public boolean isPhbReady(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_isPhbReady, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().isPhbReady(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public boolean isRadioOffBySimManagement(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(21, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().isRadioOffBySimManagement(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public boolean isTestIccCard(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(5, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().isTestIccCard(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public boolean isVolteEnabled(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_isVolteEnabled, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().isVolteEnabled(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public boolean isWifiCallingEnabled(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(32, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().isWifiCallingEnabled(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public List<String> loadEFLinearFixedAll(int i, int i2, int i3, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeInt(i3);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(9, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().loadEFLinearFixedAll(i, i2, i3, str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createStringArrayList();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public byte[] loadEFTransparent(int i, int i2, int i3, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeInt(i3);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(8, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().loadEFTransparent(i, i2, i3, str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createByteArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public void manuallySetNrMap(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (this.mRemote.transact(Stub.TRANSACTION_manuallySetNrMap, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().manuallySetNrMap(i, i2);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public int queryFemtoCellSystemSelectionMode(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_queryFemtoCellSystemSelectionMode, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().queryFemtoCellSystemSelectionMode(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public Bundle queryNetworkLock(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (!this.mRemote.transact(13, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().queryNetworkLock(i, i2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0 ? (Bundle) Bundle.CREATOR.createFromParcel(parcelObtain2) : null;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public void registerAtUrcInd(int i, IOemHookCallback iOemHookCallback) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeStrongBinder(iOemHookCallback != null ? iOemHookCallback.asBinder() : null);
                    if (this.mRemote.transact(Stub.TRANSACTION_registerAtUrcInd, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().registerAtUrcInd(i, iOemHookCallback);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public void repollIccStateForNetworkLock(int i, boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(z ? 1 : 0);
                    if (this.mRemote.transact(15, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().repollIccStateForNetworkLock(i, z);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public boolean selectFemtoCell(int i, FemtoCellInfo femtoCellInfo) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (femtoCellInfo != null) {
                        parcelObtain.writeInt(1);
                        femtoCellInfo.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (!this.mRemote.transact(Stub.TRANSACTION_selectFemtoCell, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().selectFemtoCell(i, femtoCellInfo);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public int selfActivationAction(int i, Bundle bundle, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (bundle != null) {
                        parcelObtain.writeInt(1);
                        bundle.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    parcelObtain.writeInt(i2);
                    if (!this.mRemote.transact(Stub.TRANSACTION_selfActivationAction, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().selfActivationAction(i, bundle, i2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public void sendAtCmd(int i, long j, String str, IOemHookCallback iOemHookCallback) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeLong(j);
                    parcelObtain.writeString(str);
                    parcelObtain.writeStrongBinder(iOemHookCallback != null ? iOemHookCallback.asBinder() : null);
                    if (this.mRemote.transact(Stub.TRANSACTION_sendAtCmd, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().sendAtCmd(i, j, str, iOemHookCallback);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public void setApcModeUsingSlotId(int i, int i2, boolean z, int i3) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeInt(z ? 1 : 0);
                    parcelObtain.writeInt(i3);
                    if (this.mRemote.transact(Stub.TRANSACTION_setApcModeUsingSlotId, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().setApcModeUsingSlotId(i, i2, z, i3);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public void setCallSubAddressEnabled(int i, boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(z ? 1 : 0);
                    if (this.mRemote.transact(Stub.TRANSACTION_setCallSubAddressEnabled, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().setCallSubAddressEnabled(i, z);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public boolean setDisable2G(int i, boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(z ? 1 : 0);
                    if (!this.mRemote.transact(Stub.TRANSACTION_setDisable2G, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().setDisable2G(i, z);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public boolean setFemtoCellSystemSelectionMode(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (!this.mRemote.transact(Stub.TRANSACTION_setFemtoCellSystemSelectionMode, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().setFemtoCellSystemSelectionMode(i, i2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public void setIsLastEccIms(boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(z ? 1 : 0);
                    if (this.mRemote.transact(Stub.TRANSACTION_setIsLastEccIms, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().setIsLastEccIms(z);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public void setMobileDataUsageSum(int i, long j, long j2, long j3, long j4) throws Throwable {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    try {
                        parcelObtain.writeInt(i);
                        try {
                            parcelObtain.writeLong(j);
                            parcelObtain.writeLong(j2);
                            parcelObtain.writeLong(j3);
                            parcelObtain.writeLong(j4);
                            if (this.mRemote.transact(Stub.TRANSACTION_setMobileDataUsageSum, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                                parcelObtain2.readException();
                                parcelObtain2.recycle();
                                parcelObtain.recycle();
                            } else {
                                Stub.getDefaultImpl().setMobileDataUsageSum(i, j, j2, j3, j4);
                                parcelObtain2.recycle();
                                parcelObtain.recycle();
                            }
                        } catch (Throwable th) {
                            th = th;
                            parcelObtain2.recycle();
                            parcelObtain.recycle();
                            throw th;
                        }
                    } catch (Throwable th2) {
                        th = th2;
                        parcelObtain2.recycle();
                        parcelObtain.recycle();
                        throw th;
                    }
                } catch (Throwable th3) {
                    th = th3;
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public boolean setRadioCapability(RadioAccessFamily[] radioAccessFamilyArr) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeTypedArray(radioAccessFamilyArr, 0);
                    if (!this.mRemote.transact(Stub.TRANSACTION_setRadioCapability, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().setRadioCapability(radioAccessFamilyArr);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public boolean setRoamingEnable(int i, int[] iArr) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeIntArray(iArr);
                    if (!this.mRemote.transact(Stub.TRANSACTION_setRoamingEnable, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().setRoamingEnable(i, iArr);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public int[] setRxTestConfig(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (!this.mRemote.transact(Stub.TRANSACTION_setRxTestConfig, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().setRxTestConfig(i, i2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createIntArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public int setSimPower(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (!this.mRemote.transact(10, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().setSimPower(i, i2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public boolean setupPdnByType(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(64, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().setupPdnByType(i, str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public byte[] simAkaAuthentication(int i, int i2, byte[] bArr, byte[] bArr2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeByteArray(bArr);
                    parcelObtain.writeByteArray(bArr2);
                    if (!this.mRemote.transact(18, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().simAkaAuthentication(i, i2, bArr, bArr2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createByteArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public byte[] simGbaAuthBootStrapMode(int i, int i2, byte[] bArr, byte[] bArr2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeByteArray(bArr);
                    parcelObtain.writeByteArray(bArr2);
                    if (!this.mRemote.transact(19, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().simGbaAuthBootStrapMode(i, i2, bArr, bArr2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createByteArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public byte[] simGbaAuthNafMode(int i, int i2, byte[] bArr, byte[] bArr2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeByteArray(bArr);
                    parcelObtain.writeByteArray(bArr2);
                    if (!this.mRemote.transact(20, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().simGbaAuthNafMode(i, i2, bArr, bArr2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createByteArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public int[] supplyDeviceNetworkDepersonalization(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(Stub.TRANSACTION_supplyDeviceNetworkDepersonalization, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().supplyDeviceNetworkDepersonalization(str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createIntArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public int supplyNetworkDepersonalization(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(14, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().supplyNetworkDepersonalization(i, str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public void switchNrMap(int i, boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(z ? 1 : 0);
                    if (this.mRemote.transact(Stub.TRANSACTION_switchNrMap, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().switchNrMap(i, z);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkTelephonyEx
            public boolean tearDownPdnByType(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(Stub.TRANSACTION_tearDownPdnByType, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().tearDownPdnByType(i, str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IMtkTelephonyEx asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IMtkTelephonyEx)) ? new Proxy(iBinder) : (IMtkTelephonyEx) iInterfaceQueryLocalInterface;
        }

        public static IMtkTelephonyEx getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IMtkTelephonyEx iMtkTelephonyEx) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iMtkTelephonyEx == null) {
                return false;
            }
            Proxy.sDefaultImpl = iMtkTelephonyEx;
            return true;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i == 1598968902) {
                parcel2.writeString(DESCRIPTOR);
                return true;
            }
            switch (i) {
                case 1:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zIsInHomeNetwork = isInHomeNetwork(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(zIsInHomeNetwork ? 1 : 0);
                    return true;
                case 2:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iccAppFamily = getIccAppFamily(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(iccAppFamily);
                    return true;
                case 3:
                    parcel.enforceInterface(DESCRIPTOR);
                    String iccCardType = getIccCardType(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeString(iccCardType);
                    return true;
                case 4:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zIsAppTypeSupported = isAppTypeSupported(parcel.readInt(), parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(zIsAppTypeSupported ? 1 : 0);
                    return true;
                case 5:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zIsTestIccCard = isTestIccCard(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(zIsTestIccCard ? 1 : 0);
                    return true;
                case 6:
                    parcel.enforceInterface(DESCRIPTOR);
                    String iccAtr = getIccAtr(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeString(iccAtr);
                    return true;
                case 7:
                    parcel.enforceInterface(DESCRIPTOR);
                    byte[] bArrIccExchangeSimIOEx = iccExchangeSimIOEx(parcel.readInt(), parcel.readInt(), parcel.readInt(), parcel.readInt(), parcel.readInt(), parcel.readInt(), parcel.readString(), parcel.readString(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeByteArray(bArrIccExchangeSimIOEx);
                    return true;
                case 8:
                    parcel.enforceInterface(DESCRIPTOR);
                    byte[] bArrLoadEFTransparent = loadEFTransparent(parcel.readInt(), parcel.readInt(), parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeByteArray(bArrLoadEFTransparent);
                    return true;
                case 9:
                    parcel.enforceInterface(DESCRIPTOR);
                    List<String> listLoadEFLinearFixedAll = loadEFLinearFixedAll(parcel.readInt(), parcel.readInt(), parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeStringList(listLoadEFLinearFixedAll);
                    return true;
                case 10:
                    parcel.enforceInterface(DESCRIPTOR);
                    int simPower = setSimPower(parcel.readInt(), parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(simPower);
                    return true;
                case 11:
                    parcel.enforceInterface(DESCRIPTOR);
                    int simOnOffState = getSimOnOffState(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(simOnOffState);
                    return true;
                case 12:
                    parcel.enforceInterface(DESCRIPTOR);
                    int simOnOffExecutingState = getSimOnOffExecutingState(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(simOnOffExecutingState);
                    return true;
                case 13:
                    parcel.enforceInterface(DESCRIPTOR);
                    Bundle bundleQueryNetworkLock = queryNetworkLock(parcel.readInt(), parcel.readInt());
                    parcel2.writeNoException();
                    if (bundleQueryNetworkLock != null) {
                        parcel2.writeInt(1);
                        bundleQueryNetworkLock.writeToParcel(parcel2, 1);
                    } else {
                        parcel2.writeInt(0);
                    }
                    return true;
                case 14:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iSupplyNetworkDepersonalization = supplyNetworkDepersonalization(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(iSupplyNetworkDepersonalization);
                    return true;
                case 15:
                    parcel.enforceInterface(DESCRIPTOR);
                    repollIccStateForNetworkLock(parcel.readInt(), parcel.readInt() != 0);
                    parcel2.writeNoException();
                    return true;
                case 16:
                    parcel.enforceInterface(DESCRIPTOR);
                    String mvnoMatchType = getMvnoMatchType(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeString(mvnoMatchType);
                    return true;
                case 17:
                    parcel.enforceInterface(DESCRIPTOR);
                    String mvnoPattern = getMvnoPattern(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeString(mvnoPattern);
                    return true;
                case 18:
                    parcel.enforceInterface(DESCRIPTOR);
                    byte[] bArrSimAkaAuthentication = simAkaAuthentication(parcel.readInt(), parcel.readInt(), parcel.createByteArray(), parcel.createByteArray());
                    parcel2.writeNoException();
                    parcel2.writeByteArray(bArrSimAkaAuthentication);
                    return true;
                case 19:
                    parcel.enforceInterface(DESCRIPTOR);
                    byte[] bArrSimGbaAuthBootStrapMode = simGbaAuthBootStrapMode(parcel.readInt(), parcel.readInt(), parcel.createByteArray(), parcel.createByteArray());
                    parcel2.writeNoException();
                    parcel2.writeByteArray(bArrSimGbaAuthBootStrapMode);
                    return true;
                case 20:
                    parcel.enforceInterface(DESCRIPTOR);
                    byte[] bArrSimGbaAuthNafMode = simGbaAuthNafMode(parcel.readInt(), parcel.readInt(), parcel.createByteArray(), parcel.createByteArray());
                    parcel2.writeNoException();
                    parcel2.writeByteArray(bArrSimGbaAuthNafMode);
                    return true;
                case 21:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zIsRadioOffBySimManagement = isRadioOffBySimManagement(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(zIsRadioOffBySimManagement ? 1 : 0);
                    return true;
                case 22:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zIsFdnEnabled = isFdnEnabled(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(zIsFdnEnabled ? 1 : 0);
                    return true;
                case 23:
                    parcel.enforceInterface(DESCRIPTOR);
                    Bundle cellLocationUsingSlotId = getCellLocationUsingSlotId(parcel.readInt());
                    parcel2.writeNoException();
                    if (cellLocationUsingSlotId != null) {
                        parcel2.writeInt(1);
                        cellLocationUsingSlotId.writeToParcel(parcel2, 1);
                    } else {
                        parcel2.writeInt(0);
                    }
                    return true;
                case 24:
                    parcel.enforceInterface(DESCRIPTOR);
                    String uimSubscriberId = getUimSubscriberId(parcel.readString(), parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeString(uimSubscriberId);
                    return true;
                case TRANSACTION_getSimSerialNumber /* 25 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    String simSerialNumber = getSimSerialNumber(parcel.readString(), parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeString(simSerialNumber);
                    return true;
                case TRANSACTION_getSimOperatorNumericForPhoneEx /* 26 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    String[] simOperatorNumericForPhoneEx = getSimOperatorNumericForPhoneEx(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeStringArray(simOperatorNumericForPhoneEx);
                    return true;
                case TRANSACTION_setRadioCapability /* 27 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean radioCapability = setRadioCapability((RadioAccessFamily[]) parcel.createTypedArray(RadioAccessFamily.CREATOR));
                    parcel2.writeNoException();
                    parcel2.writeInt(radioCapability ? 1 : 0);
                    return true;
                case TRANSACTION_isCapabilitySwitching /* 28 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zIsCapabilitySwitching = isCapabilitySwitching();
                    parcel2.writeNoException();
                    parcel2.writeInt(zIsCapabilitySwitching ? 1 : 0);
                    return true;
                case TRANSACTION_getMainCapabilityPhoneId /* 29 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    int mainCapabilityPhoneId = getMainCapabilityPhoneId();
                    parcel2.writeNoException();
                    parcel2.writeInt(mainCapabilityPhoneId);
                    return true;
                case TRANSACTION_isImsRegistered /* 30 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zIsImsRegistered = isImsRegistered(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(zIsImsRegistered ? 1 : 0);
                    return true;
                case TRANSACTION_isVolteEnabled /* 31 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zIsVolteEnabled = isVolteEnabled(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(zIsVolteEnabled ? 1 : 0);
                    return true;
                case 32:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zIsWifiCallingEnabled = isWifiCallingEnabled(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(zIsWifiCallingEnabled ? 1 : 0);
                    return true;
                case TRANSACTION_getAdnStorageInfo /* 33 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    int[] adnStorageInfo = getAdnStorageInfo(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeIntArray(adnStorageInfo);
                    return true;
                case TRANSACTION_isPhbReady /* 34 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zIsPhbReady = isPhbReady(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(zIsPhbReady ? 1 : 0);
                    return true;
                case TRANSACTION_setRxTestConfig /* 35 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    int[] rxTestConfig = setRxTestConfig(parcel.readInt(), parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeIntArray(rxTestConfig);
                    return true;
                case TRANSACTION_getRxTestResult /* 36 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    int[] rxTestResult = getRxTestResult(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeIntArray(rxTestResult);
                    return true;
                case TRANSACTION_selfActivationAction /* 37 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iSelfActivationAction = selfActivationAction(parcel.readInt(), parcel.readInt() != 0 ? (Bundle) Bundle.CREATOR.createFromParcel(parcel) : null, parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(iSelfActivationAction);
                    return true;
                case TRANSACTION_getSelfActivateState /* 38 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    int selfActivateState = getSelfActivateState(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(selfActivateState);
                    return true;
                case TRANSACTION_getPCO520State /* 39 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    int pCO520State = getPCO520State(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(pCO520State);
                    return true;
                case TRANSACTION_exitEmergencyCallbackMode /* 40 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zExitEmergencyCallbackMode = exitEmergencyCallbackMode(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(zExitEmergencyCallbackMode ? 1 : 0);
                    return true;
                case TRANSACTION_setApcModeUsingSlotId /* 41 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    setApcModeUsingSlotId(parcel.readInt(), parcel.readInt(), parcel.readInt() != 0, parcel.readInt());
                    parcel2.writeNoException();
                    return true;
                case TRANSACTION_getApcInfoUsingSlotId /* 42 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    PseudoCellInfo apcInfoUsingSlotId = getApcInfoUsingSlotId(parcel.readInt());
                    parcel2.writeNoException();
                    if (apcInfoUsingSlotId != null) {
                        parcel2.writeInt(1);
                        apcInfoUsingSlotId.writeToParcel(parcel2, 1);
                    } else {
                        parcel2.writeInt(0);
                    }
                    return true;
                case TRANSACTION_getCdmaSubscriptionActStatus /* 43 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    int cdmaSubscriptionActStatus = getCdmaSubscriptionActStatus(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(cdmaSubscriptionActStatus);
                    return true;
                case TRANSACTION_setIsLastEccIms /* 44 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    setIsLastEccIms(parcel.readInt() != 0);
                    parcel2.writeNoException();
                    return true;
                case TRANSACTION_getIsLastEccIms /* 45 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean isLastEccIms = getIsLastEccIms();
                    parcel2.writeNoException();
                    parcel2.writeInt(isLastEccIms ? 1 : 0);
                    return true;
                case TRANSACTION_registerAtUrcInd /* 46 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    registerAtUrcInd(parcel.readInt(), IOemHookCallback.Stub.asInterface(parcel.readStrongBinder()));
                    parcel2.writeNoException();
                    return true;
                case TRANSACTION_sendAtCmd /* 47 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    sendAtCmd(parcel.readInt(), parcel.readLong(), parcel.readString(), IOemHookCallback.Stub.asInterface(parcel.readStrongBinder()));
                    parcel2.writeNoException();
                    return true;
                case TRANSACTION_invokeOemRilRequestRaw /* 48 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    byte[] bArrCreateByteArray = parcel.createByteArray();
                    int i3 = parcel.readInt();
                    byte[] bArr = i3 < 0 ? null : new byte[i3];
                    int iInvokeOemRilRequestRaw = invokeOemRilRequestRaw(bArrCreateByteArray, bArr);
                    parcel2.writeNoException();
                    parcel2.writeInt(iInvokeOemRilRequestRaw);
                    parcel2.writeByteArray(bArr);
                    return true;
                case TRANSACTION_invokeOemRilRequestRawBySlot /* 49 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    int i4 = parcel.readInt();
                    byte[] bArrCreateByteArray2 = parcel.createByteArray();
                    int i5 = parcel.readInt();
                    byte[] bArr2 = i5 < 0 ? null : new byte[i5];
                    int iInvokeOemRilRequestRawBySlot = invokeOemRilRequestRawBySlot(i4, bArrCreateByteArray2, bArr2);
                    parcel2.writeNoException();
                    parcel2.writeInt(iInvokeOemRilRequestRawBySlot);
                    parcel2.writeByteArray(bArr2);
                    return true;
                case TRANSACTION_isInCsCall /* 50 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zIsInCsCall = isInCsCall(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(zIsInCsCall ? 1 : 0);
                    return true;
                case TRANSACTION_getAllCellInfo /* 51 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    List<CellInfo> allCellInfo = getAllCellInfo(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeTypedList(allCellInfo);
                    return true;
                case TRANSACTION_getLocatedPlmn /* 52 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    String locatedPlmn = getLocatedPlmn(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeString(locatedPlmn);
                    return true;
                case TRANSACTION_setDisable2G /* 53 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean disable2G = setDisable2G(parcel.readInt(), parcel.readInt() != 0);
                    parcel2.writeNoException();
                    parcel2.writeInt(disable2G ? 1 : 0);
                    return true;
                case 54:
                    parcel.enforceInterface(DESCRIPTOR);
                    int disable2G2 = getDisable2G(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(disable2G2);
                    return true;
                case TRANSACTION_getFemtoCellList /* 55 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    List<FemtoCellInfo> femtoCellList = getFemtoCellList(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeTypedList(femtoCellList);
                    return true;
                case TRANSACTION_abortFemtoCellList /* 56 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zAbortFemtoCellList = abortFemtoCellList(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(zAbortFemtoCellList ? 1 : 0);
                    return true;
                case TRANSACTION_selectFemtoCell /* 57 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zSelectFemtoCell = selectFemtoCell(parcel.readInt(), parcel.readInt() != 0 ? FemtoCellInfo.CREATOR.createFromParcel(parcel) : null);
                    parcel2.writeNoException();
                    parcel2.writeInt(zSelectFemtoCell ? 1 : 0);
                    return true;
                case TRANSACTION_queryFemtoCellSystemSelectionMode /* 58 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iQueryFemtoCellSystemSelectionMode = queryFemtoCellSystemSelectionMode(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(iQueryFemtoCellSystemSelectionMode);
                    return true;
                case TRANSACTION_setFemtoCellSystemSelectionMode /* 59 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean femtoCellSystemSelectionMode = setFemtoCellSystemSelectionMode(parcel.readInt(), parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(femtoCellSystemSelectionMode ? 1 : 0);
                    return true;
                case TRANSACTION_cancelAvailableNetworks /* 60 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zCancelAvailableNetworks = cancelAvailableNetworks(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(zCancelAvailableNetworks ? 1 : 0);
                    return true;
                case TRANSACTION_supplyDeviceNetworkDepersonalization /* 61 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    int[] iArrSupplyDeviceNetworkDepersonalization = supplyDeviceNetworkDepersonalization(parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeIntArray(iArrSupplyDeviceNetworkDepersonalization);
                    return true;
                case TRANSACTION_getSimLockStateForRSU /* 62 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    int simLockStateForRSU = getSimLockStateForRSU(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(simLockStateForRSU);
                    return true;
                case TRANSACTION_tearDownPdnByType /* 63 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zTearDownPdnByType = tearDownPdnByType(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(zTearDownPdnByType ? 1 : 0);
                    return true;
                case 64:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean z = setupPdnByType(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(z ? 1 : 0);
                    return true;
                case TRANSACTION_getServiceStateByPhoneId /* 65 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    ServiceState serviceStateByPhoneId = getServiceStateByPhoneId(parcel.readInt(), parcel.readString(), parcel.readString());
                    parcel2.writeNoException();
                    if (serviceStateByPhoneId != null) {
                        parcel2.writeInt(1);
                        serviceStateByPhoneId.writeToParcel(parcel2, 1);
                    } else {
                        parcel2.writeInt(0);
                    }
                    return true;
                case TRANSACTION_setRoamingEnable /* 66 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean roamingEnable = setRoamingEnable(parcel.readInt(), parcel.createIntArray());
                    parcel2.writeNoException();
                    parcel2.writeInt(roamingEnable ? 1 : 0);
                    return true;
                case TRANSACTION_getRoamingEnable /* 67 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    int[] roamingEnable2 = getRoamingEnable(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeIntArray(roamingEnable2);
                    return true;
                case TRANSACTION_getSuggestedPlmnList /* 68 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    String[] suggestedPlmnList = getSuggestedPlmnList(parcel.readInt(), parcel.readInt(), parcel.readInt(), parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeStringArray(suggestedPlmnList);
                    return true;
                case TRANSACTION_getMobileDataUsage /* 69 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    NetworkStats mobileDataUsage = getMobileDataUsage(parcel.readInt());
                    parcel2.writeNoException();
                    if (mobileDataUsage != null) {
                        parcel2.writeInt(1);
                        mobileDataUsage.writeToParcel(parcel2, 1);
                    } else {
                        parcel2.writeInt(0);
                    }
                    return true;
                case TRANSACTION_setMobileDataUsageSum /* 70 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    setMobileDataUsageSum(parcel.readInt(), parcel.readLong(), parcel.readLong(), parcel.readLong(), parcel.readLong());
                    parcel2.writeNoException();
                    return true;
                case 71:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zIsEmergencyNumber = isEmergencyNumber(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(zIsEmergencyNumber ? 1 : 0);
                    return true;
                case TRANSACTION_getDebuggingDsdaStatus /* 72 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    int debuggingDsdaStatus = getDebuggingDsdaStatus();
                    parcel2.writeNoException();
                    parcel2.writeInt(debuggingDsdaStatus);
                    return true;
                case TRANSACTION_switchNrMap /* 73 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    switchNrMap(parcel.readInt(), parcel.readInt() != 0);
                    parcel2.writeNoException();
                    return true;
                case TRANSACTION_manuallySetNrMap /* 74 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    manuallySetNrMap(parcel.readInt(), parcel.readInt());
                    parcel2.writeNoException();
                    return true;
                case TRANSACTION_isNrMapEnabled /* 75 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zIsNrMapEnabled = isNrMapEnabled(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(zIsNrMapEnabled ? 1 : 0);
                    return true;
                case TRANSACTION_getNrMapStatus /* 76 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    String nrMapStatus = getNrMapStatus(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeString(nrMapStatus);
                    return true;
                case TRANSACTION_getCallSubAddressEnabled /* 77 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean callSubAddressEnabled = getCallSubAddressEnabled(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(callSubAddressEnabled ? 1 : 0);
                    return true;
                case TRANSACTION_setCallSubAddressEnabled /* 78 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    setCallSubAddressEnabled(parcel.readInt(), parcel.readInt() != 0);
                    parcel2.writeNoException();
                    return true;
                default:
                    return super.onTransact(i, parcel, parcel2, i2);
            }
        }
    }

    boolean abortFemtoCellList(int i) throws RemoteException;

    boolean cancelAvailableNetworks(int i) throws RemoteException;

    boolean exitEmergencyCallbackMode(int i) throws RemoteException;

    int[] getAdnStorageInfo(int i) throws RemoteException;

    List<CellInfo> getAllCellInfo(int i, String str) throws RemoteException;

    PseudoCellInfo getApcInfoUsingSlotId(int i) throws RemoteException;

    boolean getCallSubAddressEnabled(int i) throws RemoteException;

    int getCdmaSubscriptionActStatus(int i) throws RemoteException;

    Bundle getCellLocationUsingSlotId(int i) throws RemoteException;

    int getDebuggingDsdaStatus() throws RemoteException;

    int getDisable2G(int i) throws RemoteException;

    List<FemtoCellInfo> getFemtoCellList(int i) throws RemoteException;

    int getIccAppFamily(int i) throws RemoteException;

    String getIccAtr(int i) throws RemoteException;

    String getIccCardType(int i) throws RemoteException;

    boolean getIsLastEccIms() throws RemoteException;

    String getLocatedPlmn(int i) throws RemoteException;

    int getMainCapabilityPhoneId() throws RemoteException;

    NetworkStats getMobileDataUsage(int i) throws RemoteException;

    String getMvnoMatchType(int i) throws RemoteException;

    String getMvnoPattern(int i, String str) throws RemoteException;

    String getNrMapStatus(int i) throws RemoteException;

    int getPCO520State(int i) throws RemoteException;

    int[] getRoamingEnable(int i) throws RemoteException;

    int[] getRxTestResult(int i) throws RemoteException;

    int getSelfActivateState(int i) throws RemoteException;

    ServiceState getServiceStateByPhoneId(int i, String str, String str2) throws RemoteException;

    int getSimLockStateForRSU(int i) throws RemoteException;

    int getSimOnOffExecutingState(int i) throws RemoteException;

    int getSimOnOffState(int i) throws RemoteException;

    String[] getSimOperatorNumericForPhoneEx(int i) throws RemoteException;

    String getSimSerialNumber(String str, int i) throws RemoteException;

    String[] getSuggestedPlmnList(int i, int i2, int i3, int i4, String str) throws RemoteException;

    String getUimSubscriberId(String str, int i) throws RemoteException;

    byte[] iccExchangeSimIOEx(int i, int i2, int i3, int i4, int i5, int i6, String str, String str2, String str3) throws RemoteException;

    int invokeOemRilRequestRaw(byte[] bArr, byte[] bArr2) throws RemoteException;

    int invokeOemRilRequestRawBySlot(int i, byte[] bArr, byte[] bArr2) throws RemoteException;

    boolean isAppTypeSupported(int i, int i2) throws RemoteException;

    boolean isCapabilitySwitching() throws RemoteException;

    boolean isEmergencyNumber(int i, String str) throws RemoteException;

    boolean isFdnEnabled(int i) throws RemoteException;

    boolean isImsRegistered(int i) throws RemoteException;

    boolean isInCsCall(int i) throws RemoteException;

    boolean isInHomeNetwork(int i) throws RemoteException;

    boolean isNrMapEnabled(int i) throws RemoteException;

    boolean isPhbReady(int i) throws RemoteException;

    boolean isRadioOffBySimManagement(int i) throws RemoteException;

    boolean isTestIccCard(int i) throws RemoteException;

    boolean isVolteEnabled(int i) throws RemoteException;

    boolean isWifiCallingEnabled(int i) throws RemoteException;

    List<String> loadEFLinearFixedAll(int i, int i2, int i3, String str) throws RemoteException;

    byte[] loadEFTransparent(int i, int i2, int i3, String str) throws RemoteException;

    void manuallySetNrMap(int i, int i2) throws RemoteException;

    int queryFemtoCellSystemSelectionMode(int i) throws RemoteException;

    Bundle queryNetworkLock(int i, int i2) throws RemoteException;

    void registerAtUrcInd(int i, IOemHookCallback iOemHookCallback) throws RemoteException;

    void repollIccStateForNetworkLock(int i, boolean z) throws RemoteException;

    boolean selectFemtoCell(int i, FemtoCellInfo femtoCellInfo) throws RemoteException;

    int selfActivationAction(int i, Bundle bundle, int i2) throws RemoteException;

    void sendAtCmd(int i, long j, String str, IOemHookCallback iOemHookCallback) throws RemoteException;

    void setApcModeUsingSlotId(int i, int i2, boolean z, int i3) throws RemoteException;

    void setCallSubAddressEnabled(int i, boolean z) throws RemoteException;

    boolean setDisable2G(int i, boolean z) throws RemoteException;

    boolean setFemtoCellSystemSelectionMode(int i, int i2) throws RemoteException;

    void setIsLastEccIms(boolean z) throws RemoteException;

    void setMobileDataUsageSum(int i, long j, long j2, long j3, long j4) throws RemoteException;

    boolean setRadioCapability(RadioAccessFamily[] radioAccessFamilyArr) throws RemoteException;

    boolean setRoamingEnable(int i, int[] iArr) throws RemoteException;

    int[] setRxTestConfig(int i, int i2) throws RemoteException;

    int setSimPower(int i, int i2) throws RemoteException;

    boolean setupPdnByType(int i, String str) throws RemoteException;

    byte[] simAkaAuthentication(int i, int i2, byte[] bArr, byte[] bArr2) throws RemoteException;

    byte[] simGbaAuthBootStrapMode(int i, int i2, byte[] bArr, byte[] bArr2) throws RemoteException;

    byte[] simGbaAuthNafMode(int i, int i2, byte[] bArr, byte[] bArr2) throws RemoteException;

    int[] supplyDeviceNetworkDepersonalization(String str) throws RemoteException;

    int supplyNetworkDepersonalization(int i, String str) throws RemoteException;

    void switchNrMap(int i, boolean z) throws RemoteException;

    boolean tearDownPdnByType(int i, String str) throws RemoteException;
}
