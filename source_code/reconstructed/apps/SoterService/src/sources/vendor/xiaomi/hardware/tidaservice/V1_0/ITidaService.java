package vendor.xiaomi.hardware.tidaservice.V1_0;

import android.os.IHwInterface;
import android.os.RemoteException;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public interface ITidaService extends IHwInterface {
    String getFpIds() throws RemoteException;

    ArrayList<Byte> sign() throws RemoteException;
}
