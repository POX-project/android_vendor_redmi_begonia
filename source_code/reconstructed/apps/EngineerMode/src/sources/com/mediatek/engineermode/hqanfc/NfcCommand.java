package com.mediatek.engineermode.hqanfc;

import android.widget.CheckBox;
import android.widget.RadioButton;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes2.dex */
public class NfcCommand {
    public static final String ACTION_PRE = "com.mediatek.hqanfc.";
    public static final int EM_ALS_CARD_M_SW_NUM_SWIO1 = 1;
    public static final int EM_ALS_CARD_M_SW_NUM_SWIO2 = 2;
    public static final int EM_ALS_CARD_M_SW_NUM_SWIOSE = 4;
    public static final int EM_ALS_READER_M_CODING_MODE_256 = 1;
    public static final int EM_ALS_READER_M_CODING_MODE_4 = 0;
    public static final int EM_ALS_READER_M_DUAL_SUB_CARRIER = 1;
    public static final int EM_ALS_READER_M_SPDRATE_106 = 1;
    public static final int EM_ALS_READER_M_SPDRATE_212 = 2;
    public static final int EM_ALS_READER_M_SPDRATE_2648 = 32;
    public static final int EM_ALS_READER_M_SPDRATE_424 = 4;
    public static final int EM_ALS_READER_M_SPDRATE_662 = 16;
    public static final int EM_ALS_READER_M_SPDRATE_848 = 8;
    public static final int EM_ALS_READER_M_SUB_CARRIER = 0;
    public static final int EM_ALS_READER_M_TYPE_A = 1;
    public static final int EM_ALS_READER_M_TYPE_B = 2;
    public static final int EM_ALS_READER_M_TYPE_BPRIME = 16;
    public static final int EM_ALS_READER_M_TYPE_F = 4;
    public static final int EM_ALS_READER_M_TYPE_KOVIO = 32;
    public static final int EM_ALS_READER_M_TYPE_V = 8;
    public static final int EM_ENABLE_FUNC_P2P_MODE = 4;
    public static final int EM_ENABLE_FUNC_RCARDR_MODE = 2;
    public static final int EM_ENABLE_FUNC_READER_MODE = 1;
    public static final int EM_P2P_MODE_ACTIVE_MODE = 2;
    public static final int EM_P2P_MODE_PASSIVE_MODE = 1;
    public static final int EM_P2P_ROLE_INITIATOR_MODE = 1;
    public static final int EM_P2P_ROLE_TARGET_MODE = 2;
    public static final int INT_SIZE = 4;
    public static final int MAIN_MESSAGE_SIZE = 8;
    public static final String MESSAGE_CONTENT_KEY = "content";
    private static final int MOVE_BIT_16 = 16;
    private static final int MOVE_BIT_24 = 24;
    private static final int MOVE_BIT_8 = 8;
    private static final int NUMBER_OXFF = 255;
    private static final int POS_3 = 3;
    private static final int POS_4 = 4;
    private static final int POS_5 = 5;
    public static final int RECEIVE_DATA_SIZE = 1024;
    private ByteBuffer mMessageContent;
    private int mMessageType;

    public static class BitMapValue {
        public static int getFunctionValue(CheckBox[] checkBoxArr) {
            return 0 | (checkBoxArr[0].isChecked() ? 1 : 0) | (checkBoxArr[1].isChecked() ? 2 : 0) | (checkBoxArr[2].isChecked() ? 4 : 0);
        }

        public static int getSwioValue(CheckBox[] checkBoxArr) {
            return 0 | (checkBoxArr[0].isChecked() ? 1 : 0) | (checkBoxArr[1].isChecked() ? 2 : 0) | (checkBoxArr[2].isChecked() ? 4 : 0);
        }

        public static int getTypeAbDataRateValue(RadioButton[] radioButtonArr) {
            return 0 | (radioButtonArr[0].isChecked() ? 1 : 0) | (radioButtonArr[1].isChecked() ? 2 : 0) | (radioButtonArr[2].isChecked() ? 4 : 0) | (radioButtonArr[3].isChecked() ? 8 : 0);
        }

        public static int getTypeFDataRateValue(RadioButton[] radioButtonArr) {
            return 0 | (radioButtonArr[0].isChecked() ? 2 : 0) | (radioButtonArr[1].isChecked() ? 4 : 0);
        }

        public static int getTypeVDataRateValue(RadioButton[] radioButtonArr) {
            return 0 | (radioButtonArr[0].isChecked() ? 16 : 0) | (radioButtonArr[1].isChecked() ? 32 : 0);
        }

        public static int getTypeValue(CheckBox[] checkBoxArr) {
            return 0 | (checkBoxArr[0].isChecked() ? 1 : 0) | (checkBoxArr[1].isChecked() ? 2 : 0) | (checkBoxArr[2].isChecked() ? 4 : 0) | (checkBoxArr[3].isChecked() ? 8 : 0) | (checkBoxArr[4].isChecked() ? 32 : 0);
        }
    }

    public static class CommandType {
        public static final int MTK_EM_LOOPBACK_TEST_REQ = 129;
        public static final int MTK_EM_LOOPBACK_TEST_RSP = 130;
        public static final int MTK_NFC_EM_ALS_CARD_MODE_REQ = 107;
        public static final int MTK_NFC_EM_ALS_CARD_MODE_RSP = 108;
        public static final int MTK_NFC_EM_ALS_P2P_MODE_NTF = 119;
        public static final int MTK_NFC_EM_ALS_P2P_MODE_REQ = 105;
        public static final int MTK_NFC_EM_ALS_P2P_MODE_RSP = 106;
        public static final int MTK_NFC_EM_ALS_READER_MODE_NTF = 118;
        public static final int MTK_NFC_EM_ALS_READER_MODE_OPT_REQ = 103;
        public static final int MTK_NFC_EM_ALS_READER_MODE_OPT_RSP = 104;
        public static final int MTK_NFC_EM_ALS_READER_MODE_REQ = 101;
        public static final int MTK_NFC_EM_ALS_READER_MODE_RSP = 102;
        public static final int MTK_NFC_EM_DEACTIVATE_CMD = 135;
        public static final int MTK_NFC_EM_MSG_END = 204;
        public static final int MTK_NFC_EM_PNFC_CMD_REQ = 115;
        public static final int MTK_NFC_EM_PNFC_CMD_RSP = 116;
        public static final int MTK_NFC_EM_POLLING_MODE_NTF = 117;
        public static final int MTK_NFC_EM_POLLING_MODE_REQ = 109;
        public static final int MTK_NFC_EM_POLLING_MODE_RSP = 110;
        public static final int MTK_NFC_EM_START_CMD = 100;
        public static final int MTK_NFC_EM_STOP_CMD = 120;
        public static final int MTK_NFC_EM_TX_CARRIER_ALS_ON_REQ = 111;
        public static final int MTK_NFC_EM_TX_CARRIER_ALS_ON_RSP = 112;
        public static final int MTK_NFC_EM_VIRTUAL_CARD_REQ = 113;
        public static final int MTK_NFC_EM_VIRTUAL_CARD_RSP = 114;
        public static final int MTK_NFC_FM_SWP_TEST_NTF = 202;
        public static final int MTK_NFC_FM_SWP_TEST_REQ = 201;
        public static final int MTK_NFC_FM_SWP_TEST_RSP = 203;
        public static final int MTK_NFC_SW_VERSION_QUERY = 131;
        public static final int MTK_NFC_SW_VERSION_RESPONSE = 132;
        public static final int MTK_NFC_TESTMODE_SETTING_REQ = 127;
        public static final int MTK_NFC_TESTMODE_SETTING_RSP = 128;
    }

    public static class DataConvert {
        static int byte2uint16(byte[] bArr) {
            if (bArr == null || bArr.length != 2) {
                throw new IllegalArgumentException("invalid uint16 byte array");
            }
            return (bArr[0] + bArr[1]) << 8;
        }

        public static int byteToInt(byte[] bArr) {
            int i = 0;
            for (int i2 = 0; i2 < 4; i2++) {
                i = (i << 8) + (bArr[3 - i2] & 255);
            }
            return i;
        }

        public static byte[] getByteArr(ByteBuffer byteBuffer) {
            byte[] bArr = new byte[4];
            byteBuffer.get(bArr);
            return bArr;
        }

        public static byte[] intToLH(int i) {
            return new byte[]{(byte) (i & 255), (byte) ((i >> 8) & 255), (byte) ((i >> 16) & 255), (byte) ((i >> 24) & 255)};
        }

        public static String printHexString(byte b) {
            String hexString = Integer.toHexString(b & 255);
            if (hexString.length() == 1) {
                hexString = '0' + hexString;
            }
            return "0x" + hexString.toUpperCase() + " ";
        }

        public static String printHexString(byte[] bArr, int i) {
            String str = "";
            int length = bArr.length;
            if (i != 0) {
                length = i;
            }
            for (int i2 = 0; i2 < length; i2++) {
                String hexString = Integer.toHexString(bArr[i2] & 255);
                if (hexString.length() == 1) {
                    hexString = '0' + hexString;
                }
                str = str + "0x" + hexString.toUpperCase() + " ";
            }
            return str;
        }

        public static long readUnsignedInt(byte[] bArr) {
            return (bArr[0] & 255) | (((long) (bArr[1] & 255)) << 8) | (((long) (bArr[2] & 255)) << 16) | (((long) (bArr[3] & 255)) << 24);
        }

        public static byte[] shortToLH(short s) {
            return new byte[]{(byte) (s & 255), (byte) ((s >> 8) & 255)};
        }
    }

    public static class EmAction {
        public static final int ACTION_RUNINBG = 2;
        public static final int ACTION_START = 0;
        public static final int ACTION_STOP = 1;
    }

    public static class EmOptAction {
        public static final int FORMAT = 2;
        public static final int READ = 0;
        public static final int WRITE = 1;
    }

    public static class P2pDisableCardM {
        public static final int DISABLE = 1;
        public static final int NOT_DISABLE = 0;
    }

    public static class ReaderModeRspResult {
        public static final int CONNECT = 0;
        public static final int DISCONNECT = 2;
        public static final int FAIL = 1;
    }

    public static class RspResult {
        public static final int FAIL = 1;
        public static final int NFC_STATUS_INVALID_FORMAT = 33;
        public static final int NFC_STATUS_INVALID_NDEF_FORMAT = 32;
        public static final int NFC_STATUS_LINK_DOWN = 0;
        public static final int NFC_STATUS_LINK_UP = 1;
        public static final int NFC_STATUS_NDEF_EOF_REACHED = 34;
        public static final int NFC_STATUS_NOT_SUPPORT = 10;
        public static final int NFC_STATUS_NO_SIM = 225;
        public static final int NFC_STATUS_REMOVE_SE = 227;
        public static final int SUCCESS = 0;
    }

    public NfcCommand(int i, ByteBuffer byteBuffer) {
        this.mMessageType = i;
        this.mMessageContent = byteBuffer;
    }

    public ByteBuffer getMessageContent() {
        return this.mMessageContent;
    }

    public int getMessageType() {
        return this.mMessageType;
    }

    public void setMessageContent(ByteBuffer byteBuffer) {
        this.mMessageContent = byteBuffer;
    }

    public void setMessageType(int i) {
        this.mMessageType = i;
    }
}
