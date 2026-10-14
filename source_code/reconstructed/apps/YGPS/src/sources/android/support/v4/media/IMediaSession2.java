package android.support.v4.media;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;

/* JADX INFO: loaded from: classes.dex */
public interface IMediaSession2 extends IInterface {

    public static abstract class Stub extends Binder implements IMediaSession2 {

        private static class Proxy implements IMediaSession2 {
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }
        }

        public static IMediaSession2 asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("android.support.v4.media.IMediaSession2");
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IMediaSession2)) ? new Proxy(iBinder) : (IMediaSession2) iInterfaceQueryLocalInterface;
        }
    }
}
