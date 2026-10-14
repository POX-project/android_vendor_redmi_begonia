package com.mediatek.powerhalmgr;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.IRemoteCallback;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IPowerHalMgr extends IInterface {

    public static class Default implements IPowerHalMgr {
        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public void UpdateManagementPkt(int i, String str) throws RemoteException {
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public void getCpuCap() throws RemoteException {
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public void getCpuRTInfo() throws RemoteException {
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public void getGpuCap() throws RemoteException {
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public void getGpuRTInfo() throws RemoteException {
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public int getTimeToLastTouch() throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public boolean isDupPacketPredictionStarted() throws RemoteException {
            return false;
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public void mtkCusPowerHint(int i, int i2) throws RemoteException {
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public void mtkPowerHint(int i, int i2) throws RemoteException {
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public int perfCusLockHint(int i, int i2) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public int perfLockAcquire(int i, int i2, int[] iArr) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public void perfLockRelease(int i) throws RemoteException {
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public int querySysInfo(int i, int i2) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public boolean registerDuplicatePacketPredictionEvent(IRemoteCallback iRemoteCallback) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public void scnConfig(int i, int i2, int i3, int i4, int i5, int i6) throws RemoteException {
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public void scnDisable(int i) throws RemoteException {
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public void scnEnable(int i, int i2) throws RemoteException {
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public int scnReg() throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public void scnUltraCfg(int i, int i2, int i3, int i4, int i5, int i6) throws RemoteException {
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public void scnUnreg(int i) throws RemoteException {
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public void setForegroundSports() throws RemoteException {
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public void setPredictInfo(String str, int i) throws RemoteException {
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public void setSysInfo(int i, String str) throws RemoteException {
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public int setSysInfoSync(int i, String str) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public boolean startDuplicatePacketPrediction() throws RemoteException {
            return false;
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public boolean stopDuplicatePacketPrediction() throws RemoteException {
            return false;
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public boolean unregisterDuplicatePacketPredictionEvent(IRemoteCallback iRemoteCallback) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.powerhalmgr.IPowerHalMgr
        public boolean updateMultiDuplicatePacketLink(DupLinkInfo[] dupLinkInfoArr) throws RemoteException {
            return false;
        }
    }

    public static abstract class Stub extends Binder implements IPowerHalMgr {
        private static final String DESCRIPTOR = "com.mediatek.powerhalmgr.IPowerHalMgr";
        static final int TRANSACTION_UpdateManagementPkt = 12;
        static final int TRANSACTION_getCpuCap = 8;
        static final int TRANSACTION_getCpuRTInfo = 11;
        static final int TRANSACTION_getGpuCap = 9;
        static final int TRANSACTION_getGpuRTInfo = 10;
        static final int TRANSACTION_getTimeToLastTouch = 28;
        static final int TRANSACTION_isDupPacketPredictionStarted = 17;
        static final int TRANSACTION_mtkCusPowerHint = 7;
        static final int TRANSACTION_mtkPowerHint = 25;
        static final int TRANSACTION_perfCusLockHint = 26;
        static final int TRANSACTION_perfLockAcquire = 22;
        static final int TRANSACTION_perfLockRelease = 23;
        static final int TRANSACTION_querySysInfo = 24;
        static final int TRANSACTION_registerDuplicatePacketPredictionEvent = 18;
        static final int TRANSACTION_scnConfig = 2;
        static final int TRANSACTION_scnDisable = 5;
        static final int TRANSACTION_scnEnable = 4;
        static final int TRANSACTION_scnReg = 1;
        static final int TRANSACTION_scnUltraCfg = 6;
        static final int TRANSACTION_scnUnreg = 3;
        static final int TRANSACTION_setForegroundSports = 13;
        static final int TRANSACTION_setPredictInfo = 21;
        static final int TRANSACTION_setSysInfo = 14;
        static final int TRANSACTION_setSysInfoSync = 27;
        static final int TRANSACTION_startDuplicatePacketPrediction = 15;
        static final int TRANSACTION_stopDuplicatePacketPrediction = 16;
        static final int TRANSACTION_unregisterDuplicatePacketPredictionEvent = 19;
        static final int TRANSACTION_updateMultiDuplicatePacketLink = 20;

        private static class Proxy implements IPowerHalMgr {
            public static IPowerHalMgr sDefaultImpl;
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public void UpdateManagementPkt(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (this.mRemote.transact(12, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().UpdateManagementPkt(i, str);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public void getCpuCap() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (this.mRemote.transact(8, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().getCpuCap();
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public void getCpuRTInfo() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (this.mRemote.transact(11, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().getCpuRTInfo();
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public void getGpuCap() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (this.mRemote.transact(9, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().getGpuCap();
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public void getGpuRTInfo() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (this.mRemote.transact(10, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().getGpuRTInfo();
                } finally {
                    parcelObtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return Stub.DESCRIPTOR;
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public int getTimeToLastTouch() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getTimeToLastTouch, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getTimeToLastTouch();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public boolean isDupPacketPredictionStarted() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(Stub.TRANSACTION_isDupPacketPredictionStarted, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().isDupPacketPredictionStarted();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public void mtkCusPowerHint(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (this.mRemote.transact(7, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().mtkCusPowerHint(i, i2);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public void mtkPowerHint(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (this.mRemote.transact(Stub.TRANSACTION_mtkPowerHint, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().mtkPowerHint(i, i2);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public int perfCusLockHint(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (!this.mRemote.transact(Stub.TRANSACTION_perfCusLockHint, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().perfCusLockHint(i, i2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public int perfLockAcquire(int i, int i2, int[] iArr) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeIntArray(iArr);
                    if (!this.mRemote.transact(Stub.TRANSACTION_perfLockAcquire, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().perfLockAcquire(i, i2, iArr);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public void perfLockRelease(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (this.mRemote.transact(Stub.TRANSACTION_perfLockRelease, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().perfLockRelease(i);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public int querySysInfo(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (!this.mRemote.transact(Stub.TRANSACTION_querySysInfo, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().querySysInfo(i, i2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public boolean registerDuplicatePacketPredictionEvent(IRemoteCallback iRemoteCallback) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeStrongBinder(iRemoteCallback != null ? iRemoteCallback.asBinder() : null);
                    if (!this.mRemote.transact(Stub.TRANSACTION_registerDuplicatePacketPredictionEvent, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().registerDuplicatePacketPredictionEvent(iRemoteCallback);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public void scnConfig(int i, int i2, int i3, int i4, int i5, int i6) throws Throwable {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    try {
                        parcelObtain.writeInt(i);
                        try {
                            parcelObtain.writeInt(i2);
                            try {
                                parcelObtain.writeInt(i3);
                                try {
                                    parcelObtain.writeInt(i4);
                                    try {
                                        parcelObtain.writeInt(i5);
                                        try {
                                            parcelObtain.writeInt(i6);
                                            try {
                                                if (this.mRemote.transact(2, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                                                    parcelObtain.recycle();
                                                } else {
                                                    Stub.getDefaultImpl().scnConfig(i, i2, i3, i4, i5, i6);
                                                    parcelObtain.recycle();
                                                }
                                            } catch (Throwable th) {
                                                th = th;
                                                parcelObtain.recycle();
                                                throw th;
                                            }
                                        } catch (Throwable th2) {
                                            th = th2;
                                        }
                                    } catch (Throwable th3) {
                                        th = th3;
                                        parcelObtain.recycle();
                                        throw th;
                                    }
                                } catch (Throwable th4) {
                                    th = th4;
                                    parcelObtain.recycle();
                                    throw th;
                                }
                            } catch (Throwable th5) {
                                th = th5;
                                parcelObtain.recycle();
                                throw th;
                            }
                        } catch (Throwable th6) {
                            th = th6;
                            parcelObtain.recycle();
                            throw th;
                        }
                    } catch (Throwable th7) {
                        th = th7;
                        parcelObtain.recycle();
                        throw th;
                    }
                } catch (Throwable th8) {
                    th = th8;
                }
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public void scnDisable(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (this.mRemote.transact(5, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().scnDisable(i);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public void scnEnable(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (this.mRemote.transact(4, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().scnEnable(i, i2);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public int scnReg() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().scnReg();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public void scnUltraCfg(int i, int i2, int i3, int i4, int i5, int i6) throws Throwable {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    try {
                        parcelObtain.writeInt(i);
                        try {
                            parcelObtain.writeInt(i2);
                            try {
                                parcelObtain.writeInt(i3);
                                try {
                                    parcelObtain.writeInt(i4);
                                    try {
                                        parcelObtain.writeInt(i5);
                                        try {
                                            parcelObtain.writeInt(i6);
                                            try {
                                                if (this.mRemote.transact(6, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                                                    parcelObtain.recycle();
                                                } else {
                                                    Stub.getDefaultImpl().scnUltraCfg(i, i2, i3, i4, i5, i6);
                                                    parcelObtain.recycle();
                                                }
                                            } catch (Throwable th) {
                                                th = th;
                                                parcelObtain.recycle();
                                                throw th;
                                            }
                                        } catch (Throwable th2) {
                                            th = th2;
                                        }
                                    } catch (Throwable th3) {
                                        th = th3;
                                        parcelObtain.recycle();
                                        throw th;
                                    }
                                } catch (Throwable th4) {
                                    th = th4;
                                    parcelObtain.recycle();
                                    throw th;
                                }
                            } catch (Throwable th5) {
                                th = th5;
                                parcelObtain.recycle();
                                throw th;
                            }
                        } catch (Throwable th6) {
                            th = th6;
                            parcelObtain.recycle();
                            throw th;
                        }
                    } catch (Throwable th7) {
                        th = th7;
                        parcelObtain.recycle();
                        throw th;
                    }
                } catch (Throwable th8) {
                    th = th8;
                }
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public void scnUnreg(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (this.mRemote.transact(3, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().scnUnreg(i);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public void setForegroundSports() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (this.mRemote.transact(13, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().setForegroundSports();
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public void setPredictInfo(String str, int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeInt(i);
                    if (this.mRemote.transact(Stub.TRANSACTION_setPredictInfo, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().setPredictInfo(str, i);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public void setSysInfo(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (this.mRemote.transact(14, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().setSysInfo(i, str);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public int setSysInfoSync(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(Stub.TRANSACTION_setSysInfoSync, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().setSysInfoSync(i, str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public boolean startDuplicatePacketPrediction() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(Stub.TRANSACTION_startDuplicatePacketPrediction, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().startDuplicatePacketPrediction();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public boolean stopDuplicatePacketPrediction() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(16, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().stopDuplicatePacketPrediction();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public boolean unregisterDuplicatePacketPredictionEvent(IRemoteCallback iRemoteCallback) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeStrongBinder(iRemoteCallback != null ? iRemoteCallback.asBinder() : null);
                    if (!this.mRemote.transact(Stub.TRANSACTION_unregisterDuplicatePacketPredictionEvent, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().unregisterDuplicatePacketPredictionEvent(iRemoteCallback);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.powerhalmgr.IPowerHalMgr
            public boolean updateMultiDuplicatePacketLink(DupLinkInfo[] dupLinkInfoArr) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeTypedArray(dupLinkInfoArr, 0);
                    if (!this.mRemote.transact(20, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().updateMultiDuplicatePacketLink(dupLinkInfoArr);
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

        public static IPowerHalMgr asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IPowerHalMgr)) ? new Proxy(iBinder) : (IPowerHalMgr) iInterfaceQueryLocalInterface;
        }

        public static IPowerHalMgr getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IPowerHalMgr iPowerHalMgr) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iPowerHalMgr == null) {
                return false;
            }
            Proxy.sDefaultImpl = iPowerHalMgr;
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
                    int iScnReg = scnReg();
                    parcel2.writeNoException();
                    parcel2.writeInt(iScnReg);
                    return true;
                case 2:
                    parcel.enforceInterface(DESCRIPTOR);
                    scnConfig(parcel.readInt(), parcel.readInt(), parcel.readInt(), parcel.readInt(), parcel.readInt(), parcel.readInt());
                    return true;
                case 3:
                    parcel.enforceInterface(DESCRIPTOR);
                    scnUnreg(parcel.readInt());
                    return true;
                case 4:
                    parcel.enforceInterface(DESCRIPTOR);
                    scnEnable(parcel.readInt(), parcel.readInt());
                    return true;
                case 5:
                    parcel.enforceInterface(DESCRIPTOR);
                    scnDisable(parcel.readInt());
                    return true;
                case 6:
                    parcel.enforceInterface(DESCRIPTOR);
                    scnUltraCfg(parcel.readInt(), parcel.readInt(), parcel.readInt(), parcel.readInt(), parcel.readInt(), parcel.readInt());
                    return true;
                case 7:
                    parcel.enforceInterface(DESCRIPTOR);
                    mtkCusPowerHint(parcel.readInt(), parcel.readInt());
                    return true;
                case 8:
                    parcel.enforceInterface(DESCRIPTOR);
                    getCpuCap();
                    return true;
                case 9:
                    parcel.enforceInterface(DESCRIPTOR);
                    getGpuCap();
                    return true;
                case 10:
                    parcel.enforceInterface(DESCRIPTOR);
                    getGpuRTInfo();
                    return true;
                case 11:
                    parcel.enforceInterface(DESCRIPTOR);
                    getCpuRTInfo();
                    return true;
                case 12:
                    parcel.enforceInterface(DESCRIPTOR);
                    UpdateManagementPkt(parcel.readInt(), parcel.readString());
                    return true;
                case 13:
                    parcel.enforceInterface(DESCRIPTOR);
                    setForegroundSports();
                    return true;
                case 14:
                    parcel.enforceInterface(DESCRIPTOR);
                    setSysInfo(parcel.readInt(), parcel.readString());
                    return true;
                case TRANSACTION_startDuplicatePacketPrediction /* 15 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zStartDuplicatePacketPrediction = startDuplicatePacketPrediction();
                    parcel2.writeNoException();
                    parcel2.writeInt(zStartDuplicatePacketPrediction ? 1 : 0);
                    return true;
                case 16:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zStopDuplicatePacketPrediction = stopDuplicatePacketPrediction();
                    parcel2.writeNoException();
                    parcel2.writeInt(zStopDuplicatePacketPrediction ? 1 : 0);
                    return true;
                case TRANSACTION_isDupPacketPredictionStarted /* 17 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zIsDupPacketPredictionStarted = isDupPacketPredictionStarted();
                    parcel2.writeNoException();
                    parcel2.writeInt(zIsDupPacketPredictionStarted ? 1 : 0);
                    return true;
                case TRANSACTION_registerDuplicatePacketPredictionEvent /* 18 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zRegisterDuplicatePacketPredictionEvent = registerDuplicatePacketPredictionEvent(IRemoteCallback.Stub.asInterface(parcel.readStrongBinder()));
                    parcel2.writeNoException();
                    parcel2.writeInt(zRegisterDuplicatePacketPredictionEvent ? 1 : 0);
                    return true;
                case TRANSACTION_unregisterDuplicatePacketPredictionEvent /* 19 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zUnregisterDuplicatePacketPredictionEvent = unregisterDuplicatePacketPredictionEvent(IRemoteCallback.Stub.asInterface(parcel.readStrongBinder()));
                    parcel2.writeNoException();
                    parcel2.writeInt(zUnregisterDuplicatePacketPredictionEvent ? 1 : 0);
                    return true;
                case 20:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zUpdateMultiDuplicatePacketLink = updateMultiDuplicatePacketLink((DupLinkInfo[]) parcel.createTypedArray(DupLinkInfo.CREATOR));
                    parcel2.writeNoException();
                    parcel2.writeInt(zUpdateMultiDuplicatePacketLink ? 1 : 0);
                    return true;
                case TRANSACTION_setPredictInfo /* 21 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    setPredictInfo(parcel.readString(), parcel.readInt());
                    return true;
                case TRANSACTION_perfLockAcquire /* 22 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iPerfLockAcquire = perfLockAcquire(parcel.readInt(), parcel.readInt(), parcel.createIntArray());
                    parcel2.writeNoException();
                    parcel2.writeInt(iPerfLockAcquire);
                    return true;
                case TRANSACTION_perfLockRelease /* 23 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    perfLockRelease(parcel.readInt());
                    return true;
                case TRANSACTION_querySysInfo /* 24 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iQuerySysInfo = querySysInfo(parcel.readInt(), parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(iQuerySysInfo);
                    return true;
                case TRANSACTION_mtkPowerHint /* 25 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    mtkPowerHint(parcel.readInt(), parcel.readInt());
                    return true;
                case TRANSACTION_perfCusLockHint /* 26 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iPerfCusLockHint = perfCusLockHint(parcel.readInt(), parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(iPerfCusLockHint);
                    return true;
                case TRANSACTION_setSysInfoSync /* 27 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    int sysInfoSync = setSysInfoSync(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(sysInfoSync);
                    return true;
                case TRANSACTION_getTimeToLastTouch /* 28 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    int timeToLastTouch = getTimeToLastTouch();
                    parcel2.writeNoException();
                    parcel2.writeInt(timeToLastTouch);
                    return true;
                default:
                    return super.onTransact(i, parcel, parcel2, i2);
            }
        }
    }

    void UpdateManagementPkt(int i, String str) throws RemoteException;

    void getCpuCap() throws RemoteException;

    void getCpuRTInfo() throws RemoteException;

    void getGpuCap() throws RemoteException;

    void getGpuRTInfo() throws RemoteException;

    int getTimeToLastTouch() throws RemoteException;

    boolean isDupPacketPredictionStarted() throws RemoteException;

    void mtkCusPowerHint(int i, int i2) throws RemoteException;

    void mtkPowerHint(int i, int i2) throws RemoteException;

    int perfCusLockHint(int i, int i2) throws RemoteException;

    int perfLockAcquire(int i, int i2, int[] iArr) throws RemoteException;

    void perfLockRelease(int i) throws RemoteException;

    int querySysInfo(int i, int i2) throws RemoteException;

    boolean registerDuplicatePacketPredictionEvent(IRemoteCallback iRemoteCallback) throws RemoteException;

    void scnConfig(int i, int i2, int i3, int i4, int i5, int i6) throws RemoteException;

    void scnDisable(int i) throws RemoteException;

    void scnEnable(int i, int i2) throws RemoteException;

    int scnReg() throws RemoteException;

    void scnUltraCfg(int i, int i2, int i3, int i4, int i5, int i6) throws RemoteException;

    void scnUnreg(int i) throws RemoteException;

    void setForegroundSports() throws RemoteException;

    void setPredictInfo(String str, int i) throws RemoteException;

    void setSysInfo(int i, String str) throws RemoteException;

    int setSysInfoSync(int i, String str) throws RemoteException;

    boolean startDuplicatePacketPrediction() throws RemoteException;

    boolean stopDuplicatePacketPrediction() throws RemoteException;

    boolean unregisterDuplicatePacketPredictionEvent(IRemoteCallback iRemoteCallback) throws RemoteException;

    boolean updateMultiDuplicatePacketLink(DupLinkInfo[] dupLinkInfoArr) throws RemoteException;
}
