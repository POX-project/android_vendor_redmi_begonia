package com.mediatek.ims.internal;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import android.telephony.ims.aidl.IImsSmsListener;
import android.telephony.ims.feature.CapabilityChangeRequest;
import com.android.ims.internal.IImsRegistrationListener;
import com.mediatek.gba.NafSessionKey;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public interface IMtkImsService extends IInterface {
    public static final String DESCRIPTOR = "com.mediatek.ims.internal.IMtkImsService";

    public static class Default implements IMtkImsService {
        @Override // com.mediatek.ims.internal.IMtkImsService
        public void UpdateImsState(int i) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsService
        public void addImsSmsListener(int i, IImsSmsListener iImsSmsListener) throws RemoteException {
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.ims.internal.IMtkImsService
        public void changeEnabledCapabilities(int i, CapabilityChangeRequest capabilityChangeRequest) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsService
        public void deregisterIms(int i) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsService
        public void fallBackAospMTFlow(int i) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsService
        public IMtkImsConfig getConfigInterfaceEx(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.ims.internal.IMtkImsService
        public int getCurrentCallCount(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.ims.internal.IMtkImsService
        public int[] getImsNetworkState(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.ims.internal.IMtkImsService
        public int getImsRegUriType(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.ims.internal.IMtkImsService
        public int getImsState(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.ims.internal.IMtkImsService
        public int getModemMultiImsCount() throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.ims.internal.IMtkImsService
        public IMtkImsUt getMtkUtInterface(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.ims.internal.IMtkImsService
        public IMtkImsCallSession getPendingMtkCallSession(int i, String str) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.ims.internal.IMtkImsService
        public int getWfcRegErrorCode(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.ims.internal.IMtkImsService
        public void hangupAllCall(int i) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsService
        public boolean isCameraAvailable() throws RemoteException {
            return false;
        }

        @Override // com.mediatek.ims.internal.IMtkImsService
        public void registerProprietaryImsListener(int i, IImsRegistrationListener iImsRegistrationListener, IMtkImsRegistrationListener iMtkImsRegistrationListener, boolean z) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsService
        public NafSessionKey runGbaAuthentication(String str, byte[] bArr, boolean z, int i, int i2) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.ims.internal.IMtkImsService
        public void sendSms(int i, int i2, int i3, String str, String str2, boolean z, byte[] bArr) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsService
        public void setCallIndication(int i, String str, String str2, int i2, String str3, boolean z, int i3) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsService
        public void setImsPreCallInfo(int i, int i2, String str, String str2, Map map, String[] strArr) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsService
        public void setMTRedirect(int i, boolean z) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsService
        public void setSipHeader(int i, Map map, String str) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsService
        public void setWfcRegErrorCode(int i, int i2) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsService
        public void updateRadioState(int i, int i2) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IMtkImsService {
        static final int TRANSACTION_UpdateImsState = 8;
        static final int TRANSACTION_addImsSmsListener = 15;
        static final int TRANSACTION_changeEnabledCapabilities = 22;
        static final int TRANSACTION_deregisterIms = 6;
        static final int TRANSACTION_fallBackAospMTFlow = 20;
        static final int TRANSACTION_getConfigInterfaceEx = 9;
        static final int TRANSACTION_getCurrentCallCount = 13;
        static final int TRANSACTION_getImsNetworkState = 14;
        static final int TRANSACTION_getImsRegUriType = 4;
        static final int TRANSACTION_getImsState = 3;
        static final int TRANSACTION_getModemMultiImsCount = 12;
        static final int TRANSACTION_getMtkUtInterface = 10;
        static final int TRANSACTION_getPendingMtkCallSession = 2;
        static final int TRANSACTION_getWfcRegErrorCode = 24;
        static final int TRANSACTION_hangupAllCall = 5;
        static final int TRANSACTION_isCameraAvailable = 18;
        static final int TRANSACTION_registerProprietaryImsListener = 17;
        static final int TRANSACTION_runGbaAuthentication = 11;
        static final int TRANSACTION_sendSms = 16;
        static final int TRANSACTION_setCallIndication = 1;
        static final int TRANSACTION_setImsPreCallInfo = 25;
        static final int TRANSACTION_setMTRedirect = 19;
        static final int TRANSACTION_setSipHeader = 21;
        static final int TRANSACTION_setWfcRegErrorCode = 23;
        static final int TRANSACTION_updateRadioState = 7;

        private static class Proxy implements IMtkImsService {
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // com.mediatek.ims.internal.IMtkImsService
            public void UpdateImsState(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(Stub.TRANSACTION_UpdateImsState, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsService
            public void addImsSmsListener(int i, IImsSmsListener iImsSmsListener) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeStrongInterface(iImsSmsListener);
                    this.mRemote.transact(Stub.TRANSACTION_addImsSmsListener, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.mediatek.ims.internal.IMtkImsService
            public void changeEnabledCapabilities(int i, CapabilityChangeRequest capabilityChangeRequest) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeTypedObject(capabilityChangeRequest, 0);
                    this.mRemote.transact(Stub.TRANSACTION_changeEnabledCapabilities, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsService
            public void deregisterIms(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(6, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsService
            public void fallBackAospMTFlow(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(Stub.TRANSACTION_fallBackAospMTFlow, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsService
            public IMtkImsConfig getConfigInterfaceEx(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(Stub.TRANSACTION_getConfigInterfaceEx, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return IMtkImsConfig.Stub.asInterface(parcelObtain2.readStrongBinder());
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsService
            public int getCurrentCallCount(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(Stub.TRANSACTION_getCurrentCallCount, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsService
            public int[] getImsNetworkState(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(Stub.TRANSACTION_getImsNetworkState, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.createIntArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsService
            public int getImsRegUriType(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(4, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsService
            public int getImsState(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(3, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return IMtkImsService.DESCRIPTOR;
            }

            @Override // com.mediatek.ims.internal.IMtkImsService
            public int getModemMultiImsCount() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsService.DESCRIPTOR);
                    this.mRemote.transact(Stub.TRANSACTION_getModemMultiImsCount, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsService
            public IMtkImsUt getMtkUtInterface(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(Stub.TRANSACTION_getMtkUtInterface, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return IMtkImsUt.Stub.asInterface(parcelObtain2.readStrongBinder());
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsService
            public IMtkImsCallSession getPendingMtkCallSession(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    this.mRemote.transact(2, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return IMtkImsCallSession.Stub.asInterface(parcelObtain2.readStrongBinder());
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsService
            public int getWfcRegErrorCode(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(Stub.TRANSACTION_getWfcRegErrorCode, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsService
            public void hangupAllCall(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(5, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsService
            public boolean isCameraAvailable() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsService.DESCRIPTOR);
                    this.mRemote.transact(Stub.TRANSACTION_isCameraAvailable, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readBoolean();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsService
            public void registerProprietaryImsListener(int i, IImsRegistrationListener iImsRegistrationListener, IMtkImsRegistrationListener iMtkImsRegistrationListener, boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeStrongInterface(iImsRegistrationListener);
                    parcelObtain.writeStrongInterface(iMtkImsRegistrationListener);
                    parcelObtain.writeBoolean(z);
                    this.mRemote.transact(Stub.TRANSACTION_registerProprietaryImsListener, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsService
            public NafSessionKey runGbaAuthentication(String str, byte[] bArr, boolean z, int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsService.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeByteArray(bArr);
                    parcelObtain.writeBoolean(z);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    this.mRemote.transact(Stub.TRANSACTION_runGbaAuthentication, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return (NafSessionKey) parcelObtain2.readTypedObject(NafSessionKey.CREATOR);
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsService
            public void sendSms(int i, int i2, int i3, String str, String str2, boolean z, byte[] bArr) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeInt(i3);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    parcelObtain.writeBoolean(z);
                    parcelObtain.writeByteArray(bArr);
                    this.mRemote.transact(Stub.TRANSACTION_sendSms, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsService
            public void setCallIndication(int i, String str, String str2, int i2, String str3, boolean z, int i3) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeString(str3);
                    parcelObtain.writeBoolean(z);
                    parcelObtain.writeInt(i3);
                    this.mRemote.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsService
            public void setImsPreCallInfo(int i, int i2, String str, String str2, Map map, String[] strArr) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    parcelObtain.writeMap(map);
                    parcelObtain.writeStringArray(strArr);
                    this.mRemote.transact(Stub.TRANSACTION_setImsPreCallInfo, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsService
            public void setMTRedirect(int i, boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeBoolean(z);
                    this.mRemote.transact(Stub.TRANSACTION_setMTRedirect, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsService
            public void setSipHeader(int i, Map map, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeMap(map);
                    parcelObtain.writeString(str);
                    this.mRemote.transact(Stub.TRANSACTION_setSipHeader, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsService
            public void setWfcRegErrorCode(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    this.mRemote.transact(Stub.TRANSACTION_setWfcRegErrorCode, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsService
            public void updateRadioState(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    this.mRemote.transact(7, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, IMtkImsService.DESCRIPTOR);
        }

        public static IMtkImsService asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(IMtkImsService.DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IMtkImsService)) ? new Proxy(iBinder) : (IMtkImsService) iInterfaceQueryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i >= 1 && i <= 16777215) {
                parcel.enforceInterface(IMtkImsService.DESCRIPTOR);
            }
            switch (i) {
                case 1598968902:
                    parcel2.writeString(IMtkImsService.DESCRIPTOR);
                    return true;
                default:
                    switch (i) {
                        case 1:
                            int i3 = parcel.readInt();
                            String string = parcel.readString();
                            String string2 = parcel.readString();
                            int i4 = parcel.readInt();
                            String string3 = parcel.readString();
                            boolean z = parcel.readBoolean();
                            int i5 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            setCallIndication(i3, string, string2, i4, string3, z, i5);
                            parcel2.writeNoException();
                            return true;
                        case 2:
                            int i6 = parcel.readInt();
                            String string4 = parcel.readString();
                            parcel.enforceNoDataAvail();
                            IMtkImsCallSession pendingMtkCallSession = getPendingMtkCallSession(i6, string4);
                            parcel2.writeNoException();
                            parcel2.writeStrongInterface(pendingMtkCallSession);
                            return true;
                        case 3:
                            int i7 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            int imsState = getImsState(i7);
                            parcel2.writeNoException();
                            parcel2.writeInt(imsState);
                            return true;
                        case 4:
                            int i8 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            int imsRegUriType = getImsRegUriType(i8);
                            parcel2.writeNoException();
                            parcel2.writeInt(imsRegUriType);
                            return true;
                        case 5:
                            int i9 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            hangupAllCall(i9);
                            parcel2.writeNoException();
                            return true;
                        case 6:
                            int i10 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            deregisterIms(i10);
                            parcel2.writeNoException();
                            return true;
                        case 7:
                            int i11 = parcel.readInt();
                            int i12 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            updateRadioState(i11, i12);
                            parcel2.writeNoException();
                            return true;
                        case TRANSACTION_UpdateImsState /* 8 */:
                            int i13 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            UpdateImsState(i13);
                            parcel2.writeNoException();
                            return true;
                        case TRANSACTION_getConfigInterfaceEx /* 9 */:
                            int i14 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            IMtkImsConfig configInterfaceEx = getConfigInterfaceEx(i14);
                            parcel2.writeNoException();
                            parcel2.writeStrongInterface(configInterfaceEx);
                            return true;
                        case TRANSACTION_getMtkUtInterface /* 10 */:
                            int i15 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            IMtkImsUt mtkUtInterface = getMtkUtInterface(i15);
                            parcel2.writeNoException();
                            parcel2.writeStrongInterface(mtkUtInterface);
                            return true;
                        case TRANSACTION_runGbaAuthentication /* 11 */:
                            String string5 = parcel.readString();
                            byte[] bArrCreateByteArray = parcel.createByteArray();
                            boolean z2 = parcel.readBoolean();
                            int i16 = parcel.readInt();
                            int i17 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            NafSessionKey nafSessionKeyRunGbaAuthentication = runGbaAuthentication(string5, bArrCreateByteArray, z2, i16, i17);
                            parcel2.writeNoException();
                            parcel2.writeTypedObject(nafSessionKeyRunGbaAuthentication, 1);
                            return true;
                        case TRANSACTION_getModemMultiImsCount /* 12 */:
                            int modemMultiImsCount = getModemMultiImsCount();
                            parcel2.writeNoException();
                            parcel2.writeInt(modemMultiImsCount);
                            return true;
                        case TRANSACTION_getCurrentCallCount /* 13 */:
                            int i18 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            int currentCallCount = getCurrentCallCount(i18);
                            parcel2.writeNoException();
                            parcel2.writeInt(currentCallCount);
                            return true;
                        case TRANSACTION_getImsNetworkState /* 14 */:
                            int i19 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            int[] imsNetworkState = getImsNetworkState(i19);
                            parcel2.writeNoException();
                            parcel2.writeIntArray(imsNetworkState);
                            return true;
                        case TRANSACTION_addImsSmsListener /* 15 */:
                            int i20 = parcel.readInt();
                            IImsSmsListener iImsSmsListenerAsInterface = IImsSmsListener.Stub.asInterface(parcel.readStrongBinder());
                            parcel.enforceNoDataAvail();
                            addImsSmsListener(i20, iImsSmsListenerAsInterface);
                            parcel2.writeNoException();
                            return true;
                        case TRANSACTION_sendSms /* 16 */:
                            int i21 = parcel.readInt();
                            int i22 = parcel.readInt();
                            int i23 = parcel.readInt();
                            String string6 = parcel.readString();
                            String string7 = parcel.readString();
                            boolean z3 = parcel.readBoolean();
                            byte[] bArrCreateByteArray2 = parcel.createByteArray();
                            parcel.enforceNoDataAvail();
                            sendSms(i21, i22, i23, string6, string7, z3, bArrCreateByteArray2);
                            parcel2.writeNoException();
                            return true;
                        case TRANSACTION_registerProprietaryImsListener /* 17 */:
                            int i24 = parcel.readInt();
                            IImsRegistrationListener iImsRegistrationListenerAsInterface = IImsRegistrationListener.Stub.asInterface(parcel.readStrongBinder());
                            IMtkImsRegistrationListener iMtkImsRegistrationListenerAsInterface = IMtkImsRegistrationListener.Stub.asInterface(parcel.readStrongBinder());
                            boolean z4 = parcel.readBoolean();
                            parcel.enforceNoDataAvail();
                            registerProprietaryImsListener(i24, iImsRegistrationListenerAsInterface, iMtkImsRegistrationListenerAsInterface, z4);
                            parcel2.writeNoException();
                            return true;
                        case TRANSACTION_isCameraAvailable /* 18 */:
                            boolean zIsCameraAvailable = isCameraAvailable();
                            parcel2.writeNoException();
                            parcel2.writeBoolean(zIsCameraAvailable);
                            return true;
                        case TRANSACTION_setMTRedirect /* 19 */:
                            int i25 = parcel.readInt();
                            boolean z5 = parcel.readBoolean();
                            parcel.enforceNoDataAvail();
                            setMTRedirect(i25, z5);
                            parcel2.writeNoException();
                            return true;
                        case TRANSACTION_fallBackAospMTFlow /* 20 */:
                            int i26 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            fallBackAospMTFlow(i26);
                            parcel2.writeNoException();
                            return true;
                        case TRANSACTION_setSipHeader /* 21 */:
                            int i27 = parcel.readInt();
                            HashMap hashMap = parcel.readHashMap(getClass().getClassLoader());
                            String string8 = parcel.readString();
                            parcel.enforceNoDataAvail();
                            setSipHeader(i27, hashMap, string8);
                            parcel2.writeNoException();
                            return true;
                        case TRANSACTION_changeEnabledCapabilities /* 22 */:
                            int i28 = parcel.readInt();
                            CapabilityChangeRequest capabilityChangeRequest = (CapabilityChangeRequest) parcel.readTypedObject(CapabilityChangeRequest.CREATOR);
                            parcel.enforceNoDataAvail();
                            changeEnabledCapabilities(i28, capabilityChangeRequest);
                            parcel2.writeNoException();
                            return true;
                        case TRANSACTION_setWfcRegErrorCode /* 23 */:
                            int i29 = parcel.readInt();
                            int i30 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            setWfcRegErrorCode(i29, i30);
                            parcel2.writeNoException();
                            return true;
                        case TRANSACTION_getWfcRegErrorCode /* 24 */:
                            int i31 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            int wfcRegErrorCode = getWfcRegErrorCode(i31);
                            parcel2.writeNoException();
                            parcel2.writeInt(wfcRegErrorCode);
                            return true;
                        case TRANSACTION_setImsPreCallInfo /* 25 */:
                            int i32 = parcel.readInt();
                            int i33 = parcel.readInt();
                            String string9 = parcel.readString();
                            String string10 = parcel.readString();
                            HashMap hashMap2 = parcel.readHashMap(getClass().getClassLoader());
                            String[] strArrCreateStringArray = parcel.createStringArray();
                            parcel.enforceNoDataAvail();
                            setImsPreCallInfo(i32, i33, string9, string10, hashMap2, strArrCreateStringArray);
                            parcel2.writeNoException();
                            return true;
                        default:
                            return super.onTransact(i, parcel, parcel2, i2);
                    }
            }
        }
    }

    void UpdateImsState(int i) throws RemoteException;

    void addImsSmsListener(int i, IImsSmsListener iImsSmsListener) throws RemoteException;

    void changeEnabledCapabilities(int i, CapabilityChangeRequest capabilityChangeRequest) throws RemoteException;

    void deregisterIms(int i) throws RemoteException;

    void fallBackAospMTFlow(int i) throws RemoteException;

    IMtkImsConfig getConfigInterfaceEx(int i) throws RemoteException;

    int getCurrentCallCount(int i) throws RemoteException;

    int[] getImsNetworkState(int i) throws RemoteException;

    int getImsRegUriType(int i) throws RemoteException;

    int getImsState(int i) throws RemoteException;

    int getModemMultiImsCount() throws RemoteException;

    IMtkImsUt getMtkUtInterface(int i) throws RemoteException;

    IMtkImsCallSession getPendingMtkCallSession(int i, String str) throws RemoteException;

    int getWfcRegErrorCode(int i) throws RemoteException;

    void hangupAllCall(int i) throws RemoteException;

    boolean isCameraAvailable() throws RemoteException;

    void registerProprietaryImsListener(int i, IImsRegistrationListener iImsRegistrationListener, IMtkImsRegistrationListener iMtkImsRegistrationListener, boolean z) throws RemoteException;

    NafSessionKey runGbaAuthentication(String str, byte[] bArr, boolean z, int i, int i2) throws RemoteException;

    void sendSms(int i, int i2, int i3, String str, String str2, boolean z, byte[] bArr) throws RemoteException;

    void setCallIndication(int i, String str, String str2, int i2, String str3, boolean z, int i3) throws RemoteException;

    void setImsPreCallInfo(int i, int i2, String str, String str2, Map map, String[] strArr) throws RemoteException;

    void setMTRedirect(int i, boolean z) throws RemoteException;

    void setSipHeader(int i, Map map, String str) throws RemoteException;

    void setWfcRegErrorCode(int i, int i2) throws RemoteException;

    void updateRadioState(int i, int i2) throws RemoteException;
}
