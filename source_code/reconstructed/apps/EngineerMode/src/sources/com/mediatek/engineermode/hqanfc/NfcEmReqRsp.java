package com.mediatek.engineermode.hqanfc;

import android.support.v4.internal.view.SupportMenu;
import com.mediatek.engineermode.Elog;
import java.nio.BufferOverflowException;
import java.nio.BufferUnderflowException;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes2.dex */
public class NfcEmReqRsp {
    private static final int TAG_WRITE_MAXDATA = 512;

    public static class EXTTagT {
        public static final int CONTENT_SIZE = 578;
        public static final int DATA_LENGTH = 64;
        public short mExtLength;
        public byte[] mExtTagType = new byte[64];
        public byte[] mExtData = new byte[512];
    }

    public static class NfcEmAlsCardmReq extends NfcEmReq {
        public static final int CONTENT_SIZE = 16;
        public int mAction;
        public int mFgVirtualCard;
        public int mSupportType;
        public int mSwNum;

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public int getContentSize() {
            return 16;
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
            this.mAction = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mSwNum = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mSupportType = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mAction));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_als_cardm_req action: " + this.mAction);
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mSwNum));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_als_cardm_req SWNum: " + this.mSwNum);
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mSupportType));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_als_cardm_req supporttype: " + this.mSupportType);
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mFgVirtualCard));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_als_cardm_req fgvirtualcard: " + this.mFgVirtualCard);
        }
    }

    public static class NfcEmAlsCardmRsp extends NfcEmRsp {
    }

    public static class NfcEmAlsP2pNtf implements RawOperation {
        public static final int CONTENT_SIZE = 4;
        public static final int DATA_MAX_LENGTH = 256;
        public int mResult;

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public int getContentSize() {
            return 4;
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
            this.mResult = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]s_mtk_nfc_em_als_p2p_ntf result: " + this.mResult);
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mResult));
        }
    }

    public static class NfcEmAlsP2pReq extends NfcEmReq {
        public static final int CONTENT_SIZE = 28;
        public int mAction;
        public int mIsDisableCardM;
        public int mMode;
        public int mRole;
        public int mSupportType;
        public int mTypeADataRate;
        public int mTypeFDataRate;

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public int getContentSize() {
            return 28;
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
            this.mAction = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mSupportType = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mTypeADataRate = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mTypeFDataRate = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mMode = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mRole = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mIsDisableCardM = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mAction));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_als_p2p_req action: " + this.mAction);
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mSupportType));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_als_p2p_req supporttype: " + this.mSupportType);
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mTypeADataRate));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_als_p2p_req typeA_speedrate: " + this.mTypeADataRate);
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mTypeFDataRate));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_als_p2p_req typeV_speedrate: " + this.mTypeFDataRate);
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mMode));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_als_p2p_req mode: " + this.mMode);
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mRole));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_als_p2p_req role: " + this.mRole);
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mIsDisableCardM));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_als_p2p_req isDisableCardM: " + this.mIsDisableCardM);
        }
    }

    public static class NfcEmAlsP2pRsp extends NfcEmRsp {
    }

    public static class NfcEmAlsReadermNtf implements RawOperation {
        public static final int CONTENT_SIZE = 44;
        public static final int DATA_MAX_LENGTH = 32;
        public int mIsNdef;
        public int mResult;
        public byte[] mUid = new byte[32];
        public int mUidLen;

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public int getContentSize() {
            return 44;
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
            this.mResult = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]s_mtk_nfc_em_als_readerm_ntf result: " + this.mResult);
            this.mIsNdef = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]s_mtk_nfc_em_als_readerm_ntf isNDEF: " + this.mIsNdef);
            this.mUidLen = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]s_mtk_nfc_em_als_readerm_ntf UidLen: " + this.mUidLen);
            byteBuffer.get(this.mUid, 0, this.mUidLen);
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]s_mtk_nfc_em_als_readerm_ntf mUid: " + new String(this.mUid));
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mResult));
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mIsNdef));
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mUidLen));
            byteBuffer.put(this.mUid, 0, this.mUidLen);
        }
    }

    public static class NfcEmAlsReadermOptReq extends NfcEmReq {
        public static final int CONTENT_SIZE = 594;
        public int mAction;
        public NfcTagWriteNdef mTagWriteNdef = new NfcTagWriteNdef();

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public int getContentSize() {
            return CONTENT_SIZE;
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
            this.mAction = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mTagWriteNdef.readRaw(byteBuffer);
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mAction));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_als_readerm_opt_req action: " + this.mAction);
            this.mTagWriteNdef.writeRaw(byteBuffer);
        }
    }

    public static class NfcEmAlsReadermOptRsp implements RawOperation {
        public static final int CONTENT_SIZE = 561;
        public int mResult;
        public NfcTagReadNdef mTagReadNdef = new NfcTagReadNdef();

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public int getContentSize() {
            return CONTENT_SIZE;
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
            this.mResult = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_als_readerm_opt_rsp result: " + this.mResult);
            this.mTagReadNdef.readRaw(byteBuffer);
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mResult));
            this.mTagReadNdef.writeRaw(byteBuffer);
        }
    }

    public static class NfcEmAlsReadermReq extends NfcEmReq {
        public static final int CONTENT_SIZE = 32;
        public int mAction;
        public int mSupportType;
        public int mTypeADataRate;
        public int mTypeBDataRate;
        public int mTypeFDataRate;
        public int mTypeVCodingMode;
        public int mTypeVDataRate;
        public int mTypeVSubcarrier;

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public int getContentSize() {
            return 32;
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
            this.mAction = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mSupportType = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mTypeADataRate = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mTypeBDataRate = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mTypeVDataRate = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mTypeFDataRate = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mTypeVSubcarrier = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mTypeVCodingMode = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mAction));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_als_readerm_req action: " + this.mAction);
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mSupportType));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_als_readerm_req supporttype: " + this.mSupportType);
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mTypeADataRate));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_als_readerm_req typeA_datarate: " + this.mTypeADataRate);
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mTypeBDataRate));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_als_readerm_req typeB_datarate: " + this.mTypeBDataRate);
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mTypeVDataRate));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_als_readerm_req typeV_datarate: " + this.mTypeVDataRate);
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mTypeFDataRate));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_als_readerm_req typeF_datarate: " + this.mTypeFDataRate);
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mTypeVSubcarrier));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_als_readerm_req typeV_subcarrier: " + this.mTypeVSubcarrier);
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mTypeVCodingMode));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_als_readerm_req typeV_codingmode: " + this.mTypeVCodingMode);
        }
    }

    public static class NfcEmAlsReadermRsp extends NfcEmRsp {
    }

    public static class NfcEmLoopbackReq extends NfcEmReq {
        public static final int CONTENT_SIZE = 1;
        public byte mAction;

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public int getContentSize() {
            return 1;
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
            this.mAction = byteBuffer.get();
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
            byteBuffer.put(this.mAction);
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]s_mtk_nfc_loopback_test_req action: " + ((int) this.mAction));
        }
    }

    public static class NfcEmLoopbackRsp {
        public static final int CONTENT_SIZE = 1;
        public byte mResult;

        public int getContentSize() {
            return 1;
        }

        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
            this.mResult = byteBuffer.get();
            Elog.d(NfcMainPage.TAG, "NfcEmLoopbackRsp result: " + ((int) this.mResult));
        }

        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
            byteBuffer.put(this.mResult);
        }
    }

    public static class NfcEmOptionReq extends NfcEmReq {
        public static final int CONTENT_SIZE = 4;
        public short mAutoCheck;
        public short mForceDownload;

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public int getContentSize() {
            return 4;
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
            int iByteToInt = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mForceDownload = (short) (iByteToInt & SupportMenu.USER_MASK);
            this.mAutoCheck = (short) (65535 & (iByteToInt >> 16));
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
            byteBuffer.put(NfcCommand.DataConvert.shortToLH(this.mForceDownload));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]s_mtk_nfc_test_mode_setting_req forceDownload: " + ((int) this.mForceDownload));
            byteBuffer.put(NfcCommand.DataConvert.shortToLH(this.mAutoCheck));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]s_mtk_nfc_test_mode_setting_req tagAutoPresenceChk: " + ((int) this.mAutoCheck));
        }
    }

    public static class NfcEmOptionRsp {
        public static final int CONTENT_SIZE = 1;
        public byte mResult;

        public int getContentSize() {
            return 1;
        }

        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
            this.mResult = byteBuffer.get();
            Elog.d(NfcMainPage.TAG, "NfcEmOptionRsp result: " + ((int) this.mResult));
        }

        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
            byteBuffer.put(this.mResult);
        }
    }

    public static class NfcEmPnfcReq extends NfcEmReq {
        public static final int CONTENT_SIZE = 264;
        public static final int DATA_MAX_LENGTH = 256;
        public int mAction;
        public byte[] mData = new byte[256];
        public int mDataLen;

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public int getContentSize() {
            return 264;
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
            this.mAction = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            int iByteToInt = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mDataLen = iByteToInt;
            byteBuffer.get(this.mData, 0, iByteToInt);
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mAction));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]s_mtk_nfc_em_pnfc_req action: " + this.mAction);
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mDataLen));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]s_mtk_nfc_em_pnfc_req datalen: " + this.mDataLen);
            byteBuffer.put(this.mData, 0, this.mDataLen);
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]s_mtk_nfc_em_pnfc_req data: " + new String(this.mData));
        }
    }

    public static class NfcEmPnfcRsp implements RawOperation {
        public static final int CONTENT_SIZE = 264;
        private static final int DATA_LENGTH = 256;
        public byte[] mData = new byte[256];
        public int mLength;
        public int mResult;

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public int getContentSize() {
            return 264;
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
            this.mResult = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            int iByteToInt = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mLength = iByteToInt;
            byteBuffer.get(this.mData, 0, iByteToInt);
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mResult));
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mLength));
            byteBuffer.put(this.mData, 0, 256);
        }
    }

    public static class NfcEmPollingNty implements RawOperation {
        public static final int CONTENT_SIZE = 48;
        public byte[] mData = new byte[44];
        public int mDetectType;

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public int getContentSize() {
            return 48;
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
            this.mDetectType = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_polling_ntf detecttype: " + this.mDetectType);
            byteBuffer.get(this.mData, 0, 44);
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mDetectType));
            byteBuffer.put(this.mData, 0, 44);
        }
    }

    public static class NfcEmPollingReq extends NfcEmReq {
        public static final int CONTENT_SIZE = 92;
        public int mAction;
        public int mEnableFunc;
        public int mPeriod;
        public int mPhase;
        public NfcEmAlsP2pReq mP2pmReq = new NfcEmAlsP2pReq();
        public NfcEmAlsCardmReq mCardmReq = new NfcEmAlsCardmReq();
        public NfcEmAlsReadermReq mReadermReq = new NfcEmAlsReadermReq();

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public int getContentSize() {
            return 92;
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
            this.mAction = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mPhase = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mPeriod = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mEnableFunc = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mP2pmReq.readRaw(byteBuffer);
            this.mCardmReq.readRaw(byteBuffer);
            this.mReadermReq.readRaw(byteBuffer);
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mAction));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_polling_req action: " + this.mAction);
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mPhase));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_polling_req phase: " + this.mPhase);
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mPeriod));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_polling_req period: " + this.mPeriod);
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mEnableFunc));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_polling_req enablefunc: " + this.mEnableFunc);
            this.mP2pmReq.writeRaw(byteBuffer);
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_polling_req write p2p.");
            this.mCardmReq.writeRaw(byteBuffer);
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_polling_req write card mode.");
            this.mReadermReq.writeRaw(byteBuffer);
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_polling_req write reader mode.");
        }
    }

    public static class NfcEmPollingRsp extends NfcEmRsp {
    }

    public static abstract class NfcEmReq implements RawOperation {
        public static final int CONTENT_SIZE = 0;

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public int getContentSize() {
            return 0;
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
        }
    }

    public static abstract class NfcEmRsp implements RawOperation {
        public static final int CONTENT_SIZE = 4;
        public int mResult;

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public int getContentSize() {
            return 4;
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
            this.mResult = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            Elog.d(NfcMainPage.TAG, "NfcEmRsp result: " + this.mResult);
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mResult));
        }
    }

    public static class NfcEmSwpReq extends NfcEmReq {
        public static final int CONTENT_SIZE = 4;
        public int mAction;

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public int getContentSize() {
            return 4;
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
            this.mAction = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mAction));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]s_mtk_nfc_fm_swp_test_req action: " + this.mAction);
        }
    }

    public static class NfcEmSwpRsp extends NfcEmRsp {
    }

    public static class NfcEmTxCarrAlsOnReq extends NfcEmReq {
        public static final int CONTENT_SIZE = 4;
        public int mAction;

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public int getContentSize() {
            return 4;
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
            this.mAction = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mAction));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_tx_carr_als_on_req action: " + this.mAction);
        }
    }

    public static class NfcEmTxCarrAlsOnRsp extends NfcEmRsp {
    }

    public static class NfcEmVersionRsp implements RawOperation {
        public static final int CONTENT_SIZE = 25;
        private static final int DATA_LENGTH = 19;
        public int mChipVersion;
        public int mFwVersion;
        public int mHwVersion;
        public byte[] mMwVersion = new byte[19];

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public int getContentSize() {
            return 25;
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
            byteBuffer.get(this.mMwVersion, 0, 19);
            int iByteToInt = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mFwVersion = iByteToInt & SupportMenu.USER_MASK;
            this.mHwVersion = 65535 & (iByteToInt >> 16);
            byte[] bArr = new byte[2];
            byteBuffer.get(bArr, 0, 2);
            this.mChipVersion = NfcCommand.DataConvert.byte2uint16(bArr);
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
            byteBuffer.put(this.mMwVersion, 0, 19);
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mFwVersion));
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mHwVersion));
        }
    }

    public static class NfcEmVirtualCardReq extends NfcEmReq {
        public static final int CONTENT_SIZE = 12;
        public int mAction;
        public int mSupportType;
        public int mTypeFDataRate;

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public int getContentSize() {
            return 12;
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
            this.mAction = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mSupportType = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mTypeFDataRate = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.NfcEmReq, com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mAction));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_victual_card_req action: " + this.mAction);
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mSupportType));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_victual_card_req supporttype: " + this.mSupportType);
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mTypeFDataRate));
            Elog.d(NfcMainPage.TAG, "[NfcEmReqRsp]mtk_nfc_em_victual_card_req typeF_datarate: " + this.mTypeFDataRate);
        }
    }

    public static class NfcEmVirtualCardRsp extends NfcEmRsp {
    }

    public static class NfcNdefLangType implements RawOperation {
        public static final int CONTENT_SIZE = 4;
        public static final int DE = 1;
        public static final int DEFAULT = 0;
        public static final int EN = 2;
        public static final int FR = 3;
        public int mEnumValue;

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public int getContentSize() {
            return 4;
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
            this.mEnumValue = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mEnumValue));
        }
    }

    public static class NfcNdefType implements RawOperation {
        public static final int CONTENT_SIZE = 4;
        public static final int OTHERS = 3;
        public static final int SP = 2;
        public static final int TEXT = 1;
        public static final int URI = 0;
        public int mEnumValue;

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public int getContentSize() {
            return 4;
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
            this.mEnumValue = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mEnumValue));
        }
    }

    public static class NfcTagReadNdef implements RawOperation {
        public static final int CONTENT_SIZE = 557;
        private static final int DATA_LENGTH = 512;
        private static final int LANG_LENGTH = 3;
        private static final int RECORD_ID_LENGTH = 32;
        public int mLength;
        public byte mRecordFlags;
        public byte mRecordTnf;
        public NfcNdefType mNdefType = new NfcNdefType();
        public byte[] mLang = new byte[3];
        public byte[] mRecordId = new byte[32];
        public byte[] mData = new byte[512];

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public int getContentSize() {
            return CONTENT_SIZE;
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
            this.mNdefType.readRaw(byteBuffer);
            byteBuffer.get(this.mLang, 0, 3);
            this.mRecordFlags = byteBuffer.get();
            byteBuffer.get(this.mRecordId, 0, 32);
            this.mRecordTnf = byteBuffer.get();
            this.mLength = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            byteBuffer.get(this.mData, 0, 512);
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
            this.mNdefType.readRaw(byteBuffer);
            byteBuffer.put(this.mLang, 0, 3);
            byteBuffer.put(this.mRecordFlags);
            byteBuffer.put(this.mRecordId, 0, 32);
            byteBuffer.put(this.mRecordTnf);
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mLength));
            byteBuffer.put(this.mData, 0, 512);
            this.mNdefType.writeRaw(byteBuffer);
        }
    }

    public static class NfcTagWriteNdef implements RawOperation {
        public static final int CONTENT_SIZE = 590;
        public int mLength;
        public NfcNdefType mNdefType = new NfcNdefType();
        public NfcNdefLangType mNdefLangType = new NfcNdefLangType();
        public NfcTagWriteNdefData mNdefData = new NfcTagWriteNdefData();

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public int getContentSize() {
            return CONTENT_SIZE;
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
            this.mNdefType.readRaw(byteBuffer);
            this.mNdefLangType.readRaw(byteBuffer);
            this.mLength = NfcCommand.DataConvert.byteToInt(NfcCommand.DataConvert.getByteArr(byteBuffer));
            this.mNdefData.readRaw(byteBuffer);
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
            this.mNdefType.writeRaw(byteBuffer);
            this.mNdefLangType.writeRaw(byteBuffer);
            byteBuffer.put(NfcCommand.DataConvert.intToLH(this.mLength));
            this.mNdefData.writeRaw(byteBuffer);
        }
    }

    public static class NfcTagWriteNdefData implements RawOperation {
        public static final int CONTENT_SIZE = 578;
        public byte[] mData = new byte[578];

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public int getContentSize() {
            return 578;
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException {
            byteBuffer.get(this.mData, 0, 578);
        }

        @Override // com.mediatek.engineermode.hqanfc.NfcEmReqRsp.RawOperation
        public void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException {
            byteBuffer.put(this.mData, 0, 578);
        }
    }

    interface RawOperation {
        int getContentSize();

        void readRaw(ByteBuffer byteBuffer) throws NullPointerException, BufferUnderflowException;

        void writeRaw(ByteBuffer byteBuffer) throws BufferOverflowException, NullPointerException;
    }

    public static class SmartPosterT {
        public static final int COMPANY_LENGTH = 64;
        public static final int COMPANY_URL_LENGTH = 64;
        public static final int CONTENT_SIZE = 132;
        public short mCompanyLength;
        public short mCompanyUrlLength;
        public byte[] mCompany = new byte[64];
        public byte[] mCompanyUrl = new byte[64];

        public byte[] getByteArray() {
            byte[] bArr = new byte[132];
            byte[] bArr2 = this.mCompany;
            System.arraycopy(bArr2, 0, bArr, 0, bArr2.length);
            byte[] bArrShortToLH = NfcCommand.DataConvert.shortToLH(this.mCompanyLength);
            System.arraycopy(bArrShortToLH, 0, bArr, 64, bArrShortToLH.length);
            byte[] bArr3 = this.mCompanyUrl;
            System.arraycopy(bArr3, 0, bArr, bArrShortToLH.length + 64, bArr3.length);
            byte[] bArrShortToLH2 = NfcCommand.DataConvert.shortToLH(this.mCompanyUrlLength);
            System.arraycopy(bArrShortToLH2, 0, bArr, bArrShortToLH2.length + 64 + 64, bArrShortToLH2.length);
            return bArr;
        }
    }

    public static class TextT {
        public static final int CONTENT_SIZE = 514;
        public static final int DATA_LENGTH = 512;
        public byte[] mData = new byte[512];
        public short mDataLength;

        public byte[] getByteArray() {
            byte[] bArr = new byte[CONTENT_SIZE];
            byte[] bArr2 = this.mData;
            System.arraycopy(bArr2, 0, bArr, 0, bArr2.length);
            byte[] bArrShortToLH = NfcCommand.DataConvert.shortToLH(this.mDataLength);
            System.arraycopy(bArrShortToLH, 0, bArr, 512, bArrShortToLH.length);
            return bArr;
        }
    }

    public static class UrlT {
        public static final int CONTENT_SIZE = 66;
        public static final int DATA_LENGTH = 64;
        public byte[] mUrlData = new byte[64];
        public short mUrlDataLength;

        public byte[] getByteArray() {
            byte[] bArr = new byte[66];
            byte[] bArr2 = this.mUrlData;
            System.arraycopy(bArr2, 0, bArr, 0, bArr2.length);
            byte[] bArrShortToLH = NfcCommand.DataConvert.shortToLH(this.mUrlDataLength);
            System.arraycopy(bArrShortToLH, 0, bArr, 64, bArrShortToLH.length);
            return bArr;
        }
    }
}
