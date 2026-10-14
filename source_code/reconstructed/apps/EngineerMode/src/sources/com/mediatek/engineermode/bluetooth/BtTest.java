package com.mediatek.engineermode.bluetooth;

import android.bluetooth.BluetoothAdapter;
import android.content.Context;
import android.os.RemoteException;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.R;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes2.dex */
public class BtTest {
    static final int ANT0_INDEX = 0;
    static final int ANT1_INDEX = 1;
    private static final int ANT_SWAP_RES_LENGTH = 9;
    private static final String TAG = "BtTest";
    private static final int TYPE_ANT_SWITCH = 2;
    private static final int TYPE_DO_TX_ONLY = 0;
    private static final int TYPE_ENABLE_TEST_MODE = 1;
    private static final int VALUE_NOT_USE = -1;

    enum BtTestResult {
        RESULT_SUCCESS,
        RESULT_ANT_INIT_FAIL,
        RESULT_ANT_SWAP_FAIL,
        RESULT_CHANNEL_HOP_20_NO_SUPPORT,
        RESULT_CHANNEL_HOP_20_SUPPORT,
        RESULT_TEST_FAIL
    }

    boolean checkInitState(BluetoothAdapter bluetoothAdapter, Context context) {
        if (bluetoothAdapter == null) {
            Toast.makeText(context, R.string.bt_no_dev, 1).show();
            return false;
        }
        int state = bluetoothAdapter.getState();
        Elog.i(TAG, "btState:" + state);
        if (state != 10) {
            Toast.makeText(context, R.string.bt_turn_bt_off, 1).show();
            return false;
        }
        int leState = bluetoothAdapter.getLeState();
        Elog.i(TAG, "bleState:" + leState);
        if (leState == 10) {
            return true;
        }
        Toast.makeText(context, R.string.bt_turn_ble_off, 1).show();
        return false;
    }

    public boolean doTxOnlyTest(int i, int i2, int i3, int i4, int i5) {
        try {
            return EmUtils.getEmHidlService().btDoTest(0, i, i2, i3, i4, i5, -1) == 0;
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }

    boolean enableTestMode(int i) {
        try {
            return EmUtils.getEmHidlService().btDoTest(1, i, -1, -1, -1, -1, -1) == 0;
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }

    int getAntNum() {
        char[] cArr = {1, 148, 253, 1, 0};
        char[] cArrHciCommandRun = hciCommandRun(cArr, cArr.length);
        if (cArrHciCommandRun == null || cArrHciCommandRun.length < 9) {
            return 1;
        }
        return cArrHciCommandRun[8];
    }

    char[] hciCommandRun(char[] cArr, int i) {
        ArrayList<Byte> arrayList = new ArrayList<>();
        for (char c : cArr) {
            arrayList.add(Byte.valueOf((byte) c));
        }
        try {
            ArrayList<Byte> arrayListBtHciCommandRun = EmUtils.getEmHidlService().btHciCommandRun(arrayList);
            int size = arrayListBtHciCommandRun.size();
            char[] cArr2 = new char[size];
            for (int i2 = 0; i2 < size; i2++) {
                Elog.i(TAG, "result.get(i):" + arrayListBtHciCommandRun.get(i2));
                Elog.i(TAG, "result.after:" + (arrayListBtHciCommandRun.get(i2).byteValue() & 255));
                cArr2[i2] = (char) (arrayListBtHciCommandRun.get(i2).byteValue() & 255);
            }
            return cArr2;
        } catch (RemoteException e) {
            e.printStackTrace();
            return null;
        }
    }

    public boolean init() {
        try {
            return EmUtils.getEmHidlService().btInit() == 0;
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }

    boolean isBLEEnhancedSupport() {
        try {
            return EmUtils.getEmHidlService().btIsBLEEnhancedSupport();
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }

    boolean isBLESupport() {
        try {
            return EmUtils.getEmHidlService().btIsBLESupport() == 1;
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }

    boolean isComboSupport() {
        try {
            return EmUtils.getEmHidlService().btIsComboSupport() == 1;
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }

    int[] noSigRxTestResult() {
        try {
            ArrayList<Integer> arrayListBtEndNoSigRxTest = EmUtils.getEmHidlService().btEndNoSigRxTest();
            int size = arrayListBtEndNoSigRxTest.size();
            int[] iArr = new int[size];
            for (int i = 0; i < size; i++) {
                iArr[i] = arrayListBtEndNoSigRxTest.get(i).intValue();
            }
            return iArr;
        } catch (RemoteException e) {
            e.printStackTrace();
            return null;
        }
    }

    boolean noSigRxTestStart(int i, int i2, int i3, int i4) {
        try {
            return EmUtils.getEmHidlService().btStartNoSigRxTest(i, i2, i3, i4);
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }

    public int pollingStart() {
        try {
            return EmUtils.getEmHidlService().btPollingStart();
        } catch (RemoteException e) {
            e.printStackTrace();
            return -1;
        }
    }

    public int pollingStop() {
        try {
            return EmUtils.getEmHidlService().btPollingStop();
        } catch (RemoteException e) {
            e.printStackTrace();
            return -1;
        }
    }

    public void runHCIResetCmd() {
        hciCommandRun(new char[]{1, 3, '\f', 0}, 4);
    }

    boolean startRelayerMode(int i, int i2) {
        try {
            return EmUtils.getEmHidlService().btStartRelayer(i, i2) == 0;
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }

    boolean stopRelayerMode() {
        try {
            return EmUtils.getEmHidlService().btStopRelayer() == 0;
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }

    boolean switchAnt(int i, boolean z) {
        Elog.i(TAG, "index:" + i + " inTestProcess:" + z);
        try {
            return EmUtils.getEmHidlService().btDoTest(2, i, z ? 0 : 1, -1, -1, -1, -1) == 0;
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }

    public boolean unInit() {
        try {
            return EmUtils.getEmHidlService().btUninit() == 0;
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }
}
