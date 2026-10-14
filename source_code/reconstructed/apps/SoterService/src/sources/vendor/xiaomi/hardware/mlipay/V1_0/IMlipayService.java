package vendor.xiaomi.hardware.mlipay.V1_0;

import android.os.IHwInterface;
import android.os.RemoteException;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public interface IMlipayService extends IHwInterface {
    ArrayList<Byte> invoke_command(ArrayList<Byte> arrayList, int i) throws RemoteException;
}
