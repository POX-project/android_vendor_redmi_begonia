package com.tencent.soter.soterserver;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface ISoterService extends IInterface {

    public static abstract class Stub extends Binder implements ISoterService {
        public Stub() {
            attachInterface(this, "com.tencent.soter.soterserver.ISoterService");
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i == 1598968902) {
                parcel2.writeString("com.tencent.soter.soterserver.ISoterService");
                return true;
            }
            switch (i) {
                case 1:
                    parcel.enforceInterface("com.tencent.soter.soterserver.ISoterService");
                    int iGenerateAppSecureKey = generateAppSecureKey(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(iGenerateAppSecureKey);
                    return true;
                case 2:
                    parcel.enforceInterface("com.tencent.soter.soterserver.ISoterService");
                    SoterExportResult appSecureKey = getAppSecureKey(parcel.readInt());
                    parcel2.writeNoException();
                    if (appSecureKey != null) {
                        parcel2.writeInt(1);
                        appSecureKey.writeToParcel(parcel2, 1);
                    } else {
                        parcel2.writeInt(0);
                    }
                    return true;
                case 3:
                    parcel.enforceInterface("com.tencent.soter.soterserver.ISoterService");
                    boolean zHasAskAlready = hasAskAlready(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(zHasAskAlready ? 1 : 0);
                    return true;
                case 4:
                    parcel.enforceInterface("com.tencent.soter.soterserver.ISoterService");
                    int iGenerateAuthKey = generateAuthKey(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(iGenerateAuthKey);
                    return true;
                case 5:
                    parcel.enforceInterface("com.tencent.soter.soterserver.ISoterService");
                    int iRemoveAuthKey = removeAuthKey(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(iRemoveAuthKey);
                    return true;
                case 6:
                    parcel.enforceInterface("com.tencent.soter.soterserver.ISoterService");
                    SoterExportResult authKey = getAuthKey(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    if (authKey != null) {
                        parcel2.writeInt(1);
                        authKey.writeToParcel(parcel2, 1);
                    } else {
                        parcel2.writeInt(0);
                    }
                    return true;
                case 7:
                    parcel.enforceInterface("com.tencent.soter.soterserver.ISoterService");
                    int iRemoveAllAuthKey = removeAllAuthKey(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(iRemoveAllAuthKey);
                    return true;
                case 8:
                    parcel.enforceInterface("com.tencent.soter.soterserver.ISoterService");
                    boolean zHasAuthKey = hasAuthKey(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(zHasAuthKey ? 1 : 0);
                    return true;
                case 9:
                    parcel.enforceInterface("com.tencent.soter.soterserver.ISoterService");
                    SoterSessionResult soterSessionResultInitSigh = initSigh(parcel.readInt(), parcel.readString(), parcel.readString());
                    parcel2.writeNoException();
                    if (soterSessionResultInitSigh != null) {
                        parcel2.writeInt(1);
                        soterSessionResultInitSigh.writeToParcel(parcel2, 1);
                    } else {
                        parcel2.writeInt(0);
                    }
                    return true;
                case 10:
                    parcel.enforceInterface("com.tencent.soter.soterserver.ISoterService");
                    SoterSignResult soterSignResultFinishSign = finishSign(parcel.readLong());
                    parcel2.writeNoException();
                    if (soterSignResultFinishSign != null) {
                        parcel2.writeInt(1);
                        soterSignResultFinishSign.writeToParcel(parcel2, 1);
                    } else {
                        parcel2.writeInt(0);
                    }
                    return true;
                case 11:
                    parcel.enforceInterface("com.tencent.soter.soterserver.ISoterService");
                    SoterDeviceResult deviceId = getDeviceId();
                    parcel2.writeNoException();
                    if (deviceId != null) {
                        parcel2.writeInt(1);
                        deviceId.writeToParcel(parcel2, 1);
                    } else {
                        parcel2.writeInt(0);
                    }
                    return true;
                case 12:
                    parcel.enforceInterface("com.tencent.soter.soterserver.ISoterService");
                    int version = getVersion();
                    parcel2.writeNoException();
                    parcel2.writeInt(version);
                    return true;
                case 13:
                    parcel.enforceInterface("com.tencent.soter.soterserver.ISoterService");
                    String strAidlAuth = aidlAuth();
                    parcel2.writeNoException();
                    parcel2.writeString(strAidlAuth);
                    return true;
                default:
                    return super.onTransact(i, parcel, parcel2, i2);
            }
        }
    }

    String aidlAuth() throws RemoteException;

    SoterSignResult finishSign(long j) throws RemoteException;

    int generateAppSecureKey(int i) throws RemoteException;

    int generateAuthKey(int i, String str) throws RemoteException;

    SoterExportResult getAppSecureKey(int i) throws RemoteException;

    SoterExportResult getAuthKey(int i, String str) throws RemoteException;

    SoterDeviceResult getDeviceId() throws RemoteException;

    int getVersion() throws RemoteException;

    boolean hasAskAlready(int i) throws RemoteException;

    boolean hasAuthKey(int i, String str) throws RemoteException;

    SoterSessionResult initSigh(int i, String str, String str2) throws RemoteException;

    int removeAllAuthKey(int i) throws RemoteException;

    int removeAuthKey(int i, String str) throws RemoteException;
}
