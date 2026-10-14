package com.mediatek.common.voicecommand;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IVoiceTrainingEnrollmentService extends IInterface {
    public static final String DESCRIPTOR = "com.mediatek.common.voicecommand.IVoiceTrainingEnrollmentService";

    public static class Default implements IVoiceTrainingEnrollmentService {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.common.voicecommand.IVoiceTrainingEnrollmentService
        public boolean enrollSoundModel(int i, int i2, String str, int i3) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.common.voicecommand.IVoiceTrainingEnrollmentService
        public boolean unEnrollSoundModel() throws RemoteException {
            return false;
        }
    }

    public static abstract class Stub extends Binder implements IVoiceTrainingEnrollmentService {
        static final int TRANSACTION_enrollSoundModel = 1;
        static final int TRANSACTION_unEnrollSoundModel = 2;

        private static class Proxy implements IVoiceTrainingEnrollmentService {
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.mediatek.common.voicecommand.IVoiceTrainingEnrollmentService
            public boolean enrollSoundModel(int i, int i2, String str, int i3) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceTrainingEnrollmentService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeString(str);
                    parcelObtain.writeInt(i3);
                    this.mRemote.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readBoolean();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return IVoiceTrainingEnrollmentService.DESCRIPTOR;
            }

            @Override // com.mediatek.common.voicecommand.IVoiceTrainingEnrollmentService
            public boolean unEnrollSoundModel() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceTrainingEnrollmentService.DESCRIPTOR);
                    this.mRemote.transact(2, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readBoolean();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, IVoiceTrainingEnrollmentService.DESCRIPTOR);
        }

        public static IVoiceTrainingEnrollmentService asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(IVoiceTrainingEnrollmentService.DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IVoiceTrainingEnrollmentService)) ? new Proxy(iBinder) : (IVoiceTrainingEnrollmentService) iInterfaceQueryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i >= 1 && i <= 16777215) {
                parcel.enforceInterface(IVoiceTrainingEnrollmentService.DESCRIPTOR);
            }
            switch (i) {
                case 1598968902:
                    parcel2.writeString(IVoiceTrainingEnrollmentService.DESCRIPTOR);
                    return true;
                default:
                    switch (i) {
                        case 1:
                            int i3 = parcel.readInt();
                            int i4 = parcel.readInt();
                            String string = parcel.readString();
                            int i5 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            boolean zEnrollSoundModel = enrollSoundModel(i3, i4, string, i5);
                            parcel2.writeNoException();
                            parcel2.writeBoolean(zEnrollSoundModel);
                            return true;
                        case 2:
                            boolean zUnEnrollSoundModel = unEnrollSoundModel();
                            parcel2.writeNoException();
                            parcel2.writeBoolean(zUnEnrollSoundModel);
                            return true;
                        default:
                            return super.onTransact(i, parcel, parcel2, i2);
                    }
            }
        }
    }

    boolean enrollSoundModel(int i, int i2, String str, int i3) throws RemoteException;

    boolean unEnrollSoundModel() throws RemoteException;
}
