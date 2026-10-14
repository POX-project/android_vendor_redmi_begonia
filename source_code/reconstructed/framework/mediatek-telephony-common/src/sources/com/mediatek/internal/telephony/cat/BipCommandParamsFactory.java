package com.mediatek.internal.telephony.cat;

import android.R;
import android.content.Context;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.os.Handler;
import android.os.Message;
import com.android.internal.telephony.cat.AppInterface;
import com.android.internal.telephony.cat.BerTlv;
import com.android.internal.telephony.cat.CommandDetails;
import com.android.internal.telephony.cat.CommandParams;
import com.android.internal.telephony.cat.ComprehensionTlv;
import com.android.internal.telephony.cat.ComprehensionTlvTag;
import com.android.internal.telephony.cat.IconId;
import com.android.internal.telephony.cat.ResultCode;
import com.android.internal.telephony.cat.ResultException;
import com.android.internal.telephony.cat.SetEventListParams;
import com.android.internal.telephony.cat.TextMessage;
import com.android.internal.telephony.cat.ValueParser;
import com.android.internal.telephony.uicc.IccFileHandler;
import com.mediatek.internal.telephony.ppl.PplMessageManager;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
class BipCommandParamsFactory extends Handler {
    static final int LOAD_MULTI_ICONS = 2;
    static final int LOAD_NO_ICON = 0;
    static final int LOAD_SINGLE_ICON = 1;
    static final int MSG_ID_LOAD_ICON_DONE = 1;
    private static BipCommandParamsFactory sInstance = null;
    private BipRilMessageDecoder mCaller;
    private BipIconLoader mIconLoader;
    private boolean mNoAlphaUsrCnf;
    private CommandParams mCmdParams = null;
    private int mIconLoadState = 0;
    int tlvIndex = -1;

    /* JADX INFO: renamed from: com.mediatek.internal.telephony.cat.BipCommandParamsFactory$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$com$android$internal$telephony$cat$AppInterface$CommandType;

        static {
            int[] iArr = new int[AppInterface.CommandType.values().length];
            $SwitchMap$com$android$internal$telephony$cat$AppInterface$CommandType = iArr;
            try {
                iArr[AppInterface.CommandType.SET_UP_EVENT_LIST.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$cat$AppInterface$CommandType[AppInterface.CommandType.OPEN_CHANNEL.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$cat$AppInterface$CommandType[AppInterface.CommandType.CLOSE_CHANNEL.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$cat$AppInterface$CommandType[AppInterface.CommandType.SEND_DATA.ordinal()] = 4;
            } catch (NoSuchFieldError e4) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$cat$AppInterface$CommandType[AppInterface.CommandType.RECEIVE_DATA.ordinal()] = 5;
            } catch (NoSuchFieldError e5) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$cat$AppInterface$CommandType[AppInterface.CommandType.GET_CHANNEL_STATUS.ordinal()] = 6;
            } catch (NoSuchFieldError e6) {
            }
        }
    }

    private BipCommandParamsFactory(BipRilMessageDecoder bipRilMessageDecoder, IccFileHandler iccFileHandler, Context context) {
        this.mCaller = null;
        this.mNoAlphaUsrCnf = false;
        this.mCaller = bipRilMessageDecoder;
        this.mIconLoader = BipIconLoader.getInstance(this, iccFileHandler, bipRilMessageDecoder.getSlotId());
        try {
            this.mNoAlphaUsrCnf = context.getResources().getBoolean(R.bool.config_cecQuerySadWmaproDisabled_default);
        } catch (Resources.NotFoundException e) {
            this.mNoAlphaUsrCnf = false;
        }
    }

    static synchronized BipCommandParamsFactory getInstance(BipRilMessageDecoder bipRilMessageDecoder, IccFileHandler iccFileHandler, Context context) {
        if (sInstance != null) {
            return sInstance;
        }
        if (iccFileHandler == null) {
            return null;
        }
        return new BipCommandParamsFactory(bipRilMessageDecoder, iccFileHandler, context);
    }

    private boolean processCloseChannel(CommandDetails commandDetails, List<ComprehensionTlv> list) throws ResultException {
        MtkCatLog.d(this, "enter: process CloseChannel");
        TextMessage textMessage = new TextMessage();
        IconId iconIdRetrieveIconId = null;
        int i = 0;
        ComprehensionTlv comprehensionTlvSearchForTag = searchForTag(ComprehensionTlvTag.ALPHA_ID, list);
        if (comprehensionTlvSearchForTag != null) {
            textMessage.text = MtkValueParser.retrieveAlphaId(comprehensionTlvSearchForTag, this.mNoAlphaUsrCnf);
        }
        ComprehensionTlv comprehensionTlvSearchForTag2 = searchForTag(ComprehensionTlvTag.ICON_ID, list);
        if (comprehensionTlvSearchForTag2 != null) {
            iconIdRetrieveIconId = ValueParser.retrieveIconId(comprehensionTlvSearchForTag2);
            textMessage.iconSelfExplanatory = iconIdRetrieveIconId.selfExplanatory;
        }
        ComprehensionTlv comprehensionTlvSearchForTag3 = searchForTag(ComprehensionTlvTag.DEVICE_IDENTITIES, list);
        if (comprehensionTlvSearchForTag3 != null) {
            i = comprehensionTlvSearchForTag3.getRawValue()[comprehensionTlvSearchForTag3.getValueIndex() + 1] & 15;
            MtkCatLog.d("[BIP]", "To close channel " + i);
        }
        this.mCmdParams = new CloseChannelParams(commandDetails, i, textMessage, 1 == (commandDetails.commandQualifier & 1));
        if (iconIdRetrieveIconId == null) {
            return false;
        }
        this.mIconLoadState = 1;
        this.mIconLoader.loadIcon(iconIdRetrieveIconId.recordNumber, obtainMessage(1));
        return true;
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.cat.ResultException */
    private CommandDetails processCommandDetails(List<ComprehensionTlv> list) throws ResultException {
        ComprehensionTlv comprehensionTlvSearchForTag;
        if (list == null || (comprehensionTlvSearchForTag = searchForTag(ComprehensionTlvTag.COMMAND_DETAILS, list)) == null) {
            return null;
        }
        try {
            return ValueParser.retrieveCommandDetails(comprehensionTlvSearchForTag);
        } catch (ResultException e) {
            MtkCatLog.d(this, "Failed to procees command details");
            throw new ResultException(ResultCode.CMD_DATA_NOT_UNDERSTOOD);
        }
    }

    private boolean processGetChannelStatus(CommandDetails commandDetails, List<ComprehensionTlv> list) throws ResultException {
        MtkCatLog.d(this, "enter: process GetChannelStatus");
        TextMessage textMessage = new TextMessage();
        IconId iconIdRetrieveIconId = null;
        ComprehensionTlv comprehensionTlvSearchForTag = searchForTag(ComprehensionTlvTag.ALPHA_ID, list);
        if (comprehensionTlvSearchForTag != null) {
            textMessage.text = MtkValueParser.retrieveAlphaId(comprehensionTlvSearchForTag, this.mNoAlphaUsrCnf);
        }
        ComprehensionTlv comprehensionTlvSearchForTag2 = searchForTag(ComprehensionTlvTag.ICON_ID, list);
        if (comprehensionTlvSearchForTag2 != null) {
            iconIdRetrieveIconId = ValueParser.retrieveIconId(comprehensionTlvSearchForTag2);
            textMessage.iconSelfExplanatory = iconIdRetrieveIconId.selfExplanatory;
        }
        this.mCmdParams = new GetChannelStatusParams(commandDetails, textMessage);
        if (iconIdRetrieveIconId == null) {
            return false;
        }
        this.mIconLoadState = 1;
        this.mIconLoader.loadIcon(iconIdRetrieveIconId.recordNumber, obtainMessage(1));
        return true;
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.cat.ResultException */
    private boolean processOpenChannel(CommandDetails commandDetails, List<ComprehensionTlv> list) throws ResultException {
        TextMessage textMessage;
        IconId iconIdRetrieveIconId;
        String str;
        BearerDesc bearerDesc;
        int i;
        int i2;
        OtherAddress otherAddress;
        OtherAddress otherAddress2;
        TextMessage textMessage2;
        int i3;
        MtkCatLog.d(this, "enter: process OpenChannel");
        boolean z = (commandDetails.commandQualifier & 1) != 1;
        boolean z2 = (commandDetails.commandQualifier & 2) != 0;
        OtherAddress otherAddressRetrieveOtherAddress = null;
        TransportProtocol transportProtocolRetrieveTransportProtocol = null;
        OtherAddress otherAddressRetrieveOtherAddress2 = null;
        TextMessage textMessage3 = new TextMessage();
        ComprehensionTlv comprehensionTlvSearchForTag = searchForTag(ComprehensionTlvTag.ALPHA_ID, list);
        if (comprehensionTlvSearchForTag != null) {
            textMessage = textMessage3;
            textMessage.text = MtkValueParser.retrieveAlphaId(comprehensionTlvSearchForTag, this.mNoAlphaUsrCnf);
        } else {
            textMessage = textMessage3;
        }
        ComprehensionTlv comprehensionTlvSearchForTag2 = searchForTag(ComprehensionTlvTag.ICON_ID, list);
        if (comprehensionTlvSearchForTag2 != null) {
            this.mIconLoadState = 1;
            iconIdRetrieveIconId = ValueParser.retrieveIconId(comprehensionTlvSearchForTag2);
            textMessage.iconSelfExplanatory = iconIdRetrieveIconId.selfExplanatory;
        } else {
            iconIdRetrieveIconId = null;
        }
        ComprehensionTlv comprehensionTlvSearchForTag3 = searchForTag(ComprehensionTlvTag.BEARER_DESCRIPTION, list);
        if (comprehensionTlvSearchForTag3 != null) {
            BearerDesc bearerDescRetrieveBearerDesc = BipValueParser.retrieveBearerDesc(comprehensionTlvSearchForTag3);
            MtkCatLog.d("[BIP]", "bearerDesc bearer type: " + bearerDescRetrieveBearerDesc.bearerType);
            if (bearerDescRetrieveBearerDesc instanceof GPRSBearerDesc) {
                MtkCatLog.d("[BIP]", "\nprecedence: " + ((GPRSBearerDesc) bearerDescRetrieveBearerDesc).precedence + "\ndelay: " + ((GPRSBearerDesc) bearerDescRetrieveBearerDesc).delay + "\nreliability: " + ((GPRSBearerDesc) bearerDescRetrieveBearerDesc).reliability + "\npeak: " + ((GPRSBearerDesc) bearerDescRetrieveBearerDesc).peak + "\nmean: " + ((GPRSBearerDesc) bearerDescRetrieveBearerDesc).mean + "\npdp type: " + ((GPRSBearerDesc) bearerDescRetrieveBearerDesc).pdpType);
                str = null;
            } else if (bearerDescRetrieveBearerDesc instanceof UTranBearerDesc) {
                StringBuilder sb = new StringBuilder();
                sb.append("\ntrafficClass: ");
                sb.append(((UTranBearerDesc) bearerDescRetrieveBearerDesc).trafficClass);
                sb.append("\nmaxBitRateUL_High: ");
                sb.append(((UTranBearerDesc) bearerDescRetrieveBearerDesc).maxBitRateUL_High);
                sb.append("\nmaxBitRateUL_Low: ");
                str = null;
                sb.append(((UTranBearerDesc) bearerDescRetrieveBearerDesc).maxBitRateUL_Low);
                sb.append("\nmaxBitRateDL_High: ");
                sb.append(((UTranBearerDesc) bearerDescRetrieveBearerDesc).maxBitRateDL_High);
                sb.append("\nmaxBitRateUL_Low: ");
                sb.append(((UTranBearerDesc) bearerDescRetrieveBearerDesc).maxBitRateDL_Low);
                sb.append("\nguarBitRateUL_High: ");
                sb.append(((UTranBearerDesc) bearerDescRetrieveBearerDesc).guarBitRateUL_High);
                sb.append("\nguarBitRateUL_Low: ");
                sb.append(((UTranBearerDesc) bearerDescRetrieveBearerDesc).guarBitRateUL_Low);
                sb.append("\nguarBitRateDL_High: ");
                sb.append(((UTranBearerDesc) bearerDescRetrieveBearerDesc).guarBitRateDL_High);
                sb.append("\nguarBitRateDL_Low: ");
                sb.append(((UTranBearerDesc) bearerDescRetrieveBearerDesc).guarBitRateDL_Low);
                sb.append("\ndeliveryOrder: ");
                sb.append(((UTranBearerDesc) bearerDescRetrieveBearerDesc).deliveryOrder);
                sb.append("\nmaxSduSize: ");
                sb.append(((UTranBearerDesc) bearerDescRetrieveBearerDesc).maxSduSize);
                sb.append("\nsduErrorRatio: ");
                sb.append(((UTranBearerDesc) bearerDescRetrieveBearerDesc).sduErrorRatio);
                sb.append("\nresidualBitErrorRadio: ");
                sb.append(((UTranBearerDesc) bearerDescRetrieveBearerDesc).residualBitErrorRadio);
                sb.append("\ndeliveryOfErroneousSdus: ");
                sb.append(((UTranBearerDesc) bearerDescRetrieveBearerDesc).deliveryOfErroneousSdus);
                sb.append("\ntransferDelay: ");
                sb.append(((UTranBearerDesc) bearerDescRetrieveBearerDesc).transferDelay);
                sb.append("\ntrafficHandlingPriority: ");
                sb.append(((UTranBearerDesc) bearerDescRetrieveBearerDesc).trafficHandlingPriority);
                sb.append("\npdp type: ");
                sb.append(((UTranBearerDesc) bearerDescRetrieveBearerDesc).pdpType);
                MtkCatLog.d("[BIP]", sb.toString());
            } else {
                str = null;
                if (bearerDescRetrieveBearerDesc instanceof EUTranBearerDesc) {
                    MtkCatLog.d("[BIP]", "\nQCI: " + ((EUTranBearerDesc) bearerDescRetrieveBearerDesc).QCI + "\nmaxBitRateU: " + ((EUTranBearerDesc) bearerDescRetrieveBearerDesc).maxBitRateU + "\nmaxBitRateD: " + ((EUTranBearerDesc) bearerDescRetrieveBearerDesc).maxBitRateD + "\nguarBitRateU: " + ((EUTranBearerDesc) bearerDescRetrieveBearerDesc).guarBitRateU + "\nguarBitRateD: " + ((EUTranBearerDesc) bearerDescRetrieveBearerDesc).guarBitRateD + "\nmaxBitRateUEx: " + ((EUTranBearerDesc) bearerDescRetrieveBearerDesc).maxBitRateUEx + "\nmaxBitRateDEx: " + ((EUTranBearerDesc) bearerDescRetrieveBearerDesc).maxBitRateDEx + "\nguarBitRateUEx: " + ((EUTranBearerDesc) bearerDescRetrieveBearerDesc).guarBitRateUEx + "\nguarBitRateDEx: " + ((EUTranBearerDesc) bearerDescRetrieveBearerDesc).guarBitRateDEx + "\npdn Type: " + ((EUTranBearerDesc) bearerDescRetrieveBearerDesc).pdnType);
                } else if (!(bearerDescRetrieveBearerDesc instanceof DefaultBearerDesc)) {
                    MtkCatLog.d("[BIP]", "Not support bearerDesc");
                }
            }
            bearerDesc = bearerDescRetrieveBearerDesc;
        } else {
            str = null;
            MtkCatLog.d("[BIP]", "May Need BearerDescription object");
            bearerDesc = null;
        }
        ComprehensionTlv comprehensionTlvSearchForTag4 = searchForTag(ComprehensionTlvTag.BUFFER_SIZE, list);
        if (comprehensionTlvSearchForTag4 == null) {
            MtkCatLog.d("[BIP]", "Need BufferSize object");
            throw new ResultException(ResultCode.REQUIRED_VALUES_MISSING);
        }
        int iRetrieveBufferSize = BipValueParser.retrieveBufferSize(comprehensionTlvSearchForTag4);
        MtkCatLog.d("[BIP]", "buffer size: " + iRetrieveBufferSize);
        ComprehensionTlv comprehensionTlvSearchForTag5 = searchForTag(ComprehensionTlvTag.NETWORK_ACCESS_NAME, list);
        if (comprehensionTlvSearchForTag5 != null) {
            String strRetrieveNetworkAccessName = BipValueParser.retrieveNetworkAccessName(comprehensionTlvSearchForTag5);
            MtkCatLog.d("[BIP]", "access point name: " + strRetrieveNetworkAccessName);
            str = strRetrieveNetworkAccessName;
        }
        Iterator<ComprehensionTlv> it = list.iterator();
        ComprehensionTlv comprehensionTlvSearchForNextTag = searchForNextTag(ComprehensionTlvTag.TEXT_STRING, it);
        String strRetrieveTextString = comprehensionTlvSearchForNextTag != null ? ValueParser.retrieveTextString(comprehensionTlvSearchForNextTag) : null;
        ComprehensionTlv comprehensionTlvSearchForNextTag2 = searchForNextTag(ComprehensionTlvTag.TEXT_STRING, it);
        String strRetrieveTextString2 = comprehensionTlvSearchForNextTag2 != null ? ValueParser.retrieveTextString(comprehensionTlvSearchForNextTag2) : null;
        ComprehensionTlv comprehensionTlvSearchForTagAndIndex = searchForTagAndIndex(ComprehensionTlvTag.SIM_ME_INTERFACE_TRANSPORT_LEVEL, list);
        if (comprehensionTlvSearchForTagAndIndex != null) {
            int i4 = this.tlvIndex;
            MtkCatLog.d("[BIP]", "CPF-processOpenChannel: indexTransportProtocol = " + i4);
            transportProtocolRetrieveTransportProtocol = BipValueParser.retrieveTransportProtocol(comprehensionTlvSearchForTagAndIndex);
            MtkCatLog.d("[BIP]", "CPF-processOpenChannel: transport protocol(type/port): " + transportProtocolRetrieveTransportProtocol.protocolType + "/" + transportProtocolRetrieveTransportProtocol.portNumber);
            if ((1 == transportProtocolRetrieveTransportProtocol.protocolType || 2 == transportProtocolRetrieveTransportProtocol.protocolType) && bearerDesc == null) {
                MtkCatLog.d("[BIP]", "Need BearerDescription object");
                throw new ResultException(ResultCode.REQUIRED_VALUES_MISSING);
            }
            i = i4;
        } else {
            if (bearerDesc == null) {
                MtkCatLog.d("[BIP]", "BearerDescription & transportProtocol object are null");
                throw new ResultException(ResultCode.REQUIRED_VALUES_MISSING);
            }
            i = -1;
        }
        if (transportProtocolRetrieveTransportProtocol != null) {
            MtkCatLog.d("[BIP]", "CPF-processOpenChannel: transport protocol is existed");
            Iterator<ComprehensionTlv> it2 = list.iterator();
            resetTlvIndex();
            ComprehensionTlv comprehensionTlvSearchForNextTagAndIndex = searchForNextTagAndIndex(ComprehensionTlvTag.OTHER_ADDRESS, it2);
            if (comprehensionTlvSearchForNextTagAndIndex != null) {
                int i5 = this.tlvIndex;
                if (i5 < i) {
                    StringBuilder sb2 = new StringBuilder();
                    i2 = iRetrieveBufferSize;
                    sb2.append("CPF-processOpenChannel: get local address, index is ");
                    sb2.append(this.tlvIndex);
                    MtkCatLog.d("[BIP]", sb2.toString());
                    otherAddressRetrieveOtherAddress = BipValueParser.retrieveOtherAddress(comprehensionTlvSearchForNextTagAndIndex);
                    comprehensionTlvSearchForNextTagAndIndex = searchForNextTagAndIndex(ComprehensionTlvTag.OTHER_ADDRESS, it2);
                    if (comprehensionTlvSearchForNextTagAndIndex == null || this.tlvIndex <= i) {
                        MtkCatLog.d("[BIP]", "CPF-processOpenChannel: missing dest address " + this.tlvIndex + "/" + i);
                        throw new ResultException(ResultCode.REQUIRED_VALUES_MISSING);
                    }
                    MtkCatLog.d("[BIP]", "CPF-processOpenChannel: get dest address, index is " + this.tlvIndex);
                    otherAddressRetrieveOtherAddress2 = BipValueParser.retrieveOtherAddress(comprehensionTlvSearchForNextTagAndIndex);
                } else {
                    i2 = iRetrieveBufferSize;
                    if (i5 > i) {
                        MtkCatLog.d("[BIP]", "CPF-processOpenChannel: get dest address, but no local address");
                        otherAddressRetrieveOtherAddress2 = BipValueParser.retrieveOtherAddress(comprehensionTlvSearchForNextTagAndIndex);
                    } else {
                        MtkCatLog.d("[BIP]", "CPF-processOpenChannel: Incorrect index");
                    }
                }
            } else {
                i2 = iRetrieveBufferSize;
                MtkCatLog.d("[BIP]", "CPF-processOpenChannel: No other address object");
            }
            if (otherAddressRetrieveOtherAddress2 == null && (2 == transportProtocolRetrieveTransportProtocol.protocolType || 1 == transportProtocolRetrieveTransportProtocol.protocolType)) {
                MtkCatLog.d("[BIP]", "BM-openChannel: dataDestinationAddress is null.");
                throw new ResultException(ResultCode.REQUIRED_VALUES_MISSING);
            }
            otherAddress = otherAddressRetrieveOtherAddress;
            otherAddress2 = otherAddressRetrieveOtherAddress2;
        } else {
            i2 = iRetrieveBufferSize;
            otherAddress = null;
            otherAddress2 = null;
        }
        if (bearerDesc == null) {
            textMessage2 = textMessage;
            i3 = i2;
        } else if (bearerDesc.bearerType == 2 || bearerDesc.bearerType == 3 || bearerDesc.bearerType == 9 || bearerDesc.bearerType == 11) {
            i3 = i2;
            textMessage2 = textMessage;
            this.mCmdParams = new OpenChannelParams(commandDetails, bearerDesc, i3, otherAddress, transportProtocolRetrieveTransportProtocol, otherAddress2, str, strRetrieveTextString, strRetrieveTextString2, textMessage2);
        } else {
            MtkCatLog.d("[BIP]", "Unsupport bearerType: " + bearerDesc.bearerType);
            textMessage2 = textMessage;
            i3 = i2;
        }
        this.mCmdParams = new OpenChannelParams(commandDetails, bearerDesc, i3, otherAddress, transportProtocolRetrieveTransportProtocol, otherAddress2, str, strRetrieveTextString, strRetrieveTextString2, textMessage2);
        if (iconIdRetrieveIconId == null) {
            return false;
        }
        this.mIconLoadState = 1;
        this.mIconLoader.loadIcon(iconIdRetrieveIconId.recordNumber, obtainMessage(1));
        return true;
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.cat.ResultException */
    private boolean processReceiveData(CommandDetails commandDetails, List<ComprehensionTlv> list) throws ResultException {
        MtkCatLog.d(this, "enter: process ReceiveData");
        int iRetrieveChannelDataLength = 0;
        TextMessage textMessage = new TextMessage();
        IconId iconIdRetrieveIconId = null;
        int i = 0;
        ComprehensionTlv comprehensionTlvSearchForTag = searchForTag(ComprehensionTlvTag.CHANNEL_DATA_LENGTH, list);
        if (comprehensionTlvSearchForTag != null) {
            iRetrieveChannelDataLength = BipValueParser.retrieveChannelDataLength(comprehensionTlvSearchForTag);
            MtkCatLog.d("[BIP]", "Channel data length: " + iRetrieveChannelDataLength);
        }
        ComprehensionTlv comprehensionTlvSearchForTag2 = searchForTag(ComprehensionTlvTag.ALPHA_ID, list);
        if (comprehensionTlvSearchForTag2 != null) {
            textMessage.text = MtkValueParser.retrieveAlphaId(comprehensionTlvSearchForTag2, this.mNoAlphaUsrCnf);
        }
        ComprehensionTlv comprehensionTlvSearchForTag3 = searchForTag(ComprehensionTlvTag.ICON_ID, list);
        if (comprehensionTlvSearchForTag3 != null) {
            iconIdRetrieveIconId = ValueParser.retrieveIconId(comprehensionTlvSearchForTag3);
            textMessage.iconSelfExplanatory = iconIdRetrieveIconId.selfExplanatory;
        }
        ComprehensionTlv comprehensionTlvSearchForTag4 = searchForTag(ComprehensionTlvTag.DEVICE_IDENTITIES, list);
        if (comprehensionTlvSearchForTag4 != null) {
            i = comprehensionTlvSearchForTag4.getRawValue()[comprehensionTlvSearchForTag4.getValueIndex() + 1] & 15;
            MtkCatLog.d("[BIP]", "To Receive data: " + i);
        }
        this.mCmdParams = new ReceiveDataParams(commandDetails, iRetrieveChannelDataLength, i, textMessage);
        if (iconIdRetrieveIconId == null) {
            return false;
        }
        this.mIconLoadState = 1;
        this.mIconLoader.loadIcon(iconIdRetrieveIconId.recordNumber, obtainMessage(1));
        return true;
    }

    private boolean processSendData(CommandDetails commandDetails, List<ComprehensionTlv> list) throws ResultException {
        IconId iconId;
        int i;
        MtkCatLog.d(this, "enter: process SendData");
        TextMessage textMessage = new TextMessage();
        int i2 = (commandDetails.commandQualifier & 1) == 1 ? 1 : 0;
        ComprehensionTlv comprehensionTlvSearchForTag = searchForTag(ComprehensionTlvTag.CHANNEL_DATA, list);
        byte[] bArrRetrieveChannelData = comprehensionTlvSearchForTag != null ? BipValueParser.retrieveChannelData(comprehensionTlvSearchForTag) : null;
        ComprehensionTlv comprehensionTlvSearchForTag2 = searchForTag(ComprehensionTlvTag.ALPHA_ID, list);
        if (comprehensionTlvSearchForTag2 != null) {
            textMessage.text = MtkValueParser.retrieveAlphaId(comprehensionTlvSearchForTag2, this.mNoAlphaUsrCnf);
        }
        ComprehensionTlv comprehensionTlvSearchForTag3 = searchForTag(ComprehensionTlvTag.ICON_ID, list);
        if (comprehensionTlvSearchForTag3 != null) {
            IconId iconIdRetrieveIconId = ValueParser.retrieveIconId(comprehensionTlvSearchForTag3);
            textMessage.iconSelfExplanatory = iconIdRetrieveIconId.selfExplanatory;
            iconId = iconIdRetrieveIconId;
        } else {
            iconId = null;
        }
        ComprehensionTlv comprehensionTlvSearchForTag4 = searchForTag(ComprehensionTlvTag.DEVICE_IDENTITIES, list);
        if (comprehensionTlvSearchForTag4 != null) {
            int i3 = comprehensionTlvSearchForTag4.getRawValue()[comprehensionTlvSearchForTag4.getValueIndex() + 1] & 15;
            MtkCatLog.d("[BIP]", "To send data: " + i3);
            i = i3;
        } else {
            i = 0;
        }
        this.mCmdParams = new SendDataParams(commandDetails, bArrRetrieveChannelData, i, textMessage, i2);
        if (iconId == null) {
            return false;
        }
        this.mIconLoadState = 1;
        this.mIconLoader.loadIcon(iconId.recordNumber, obtainMessage(1));
        return true;
    }

    private boolean processSetUpEventList(CommandDetails commandDetails, List<ComprehensionTlv> list) {
        MtkCatLog.d(this, "process SetUpEventList");
        ComprehensionTlv comprehensionTlvSearchForTag = searchForTag(ComprehensionTlvTag.EVENT_LIST, list);
        if (comprehensionTlvSearchForTag == null) {
            return false;
        }
        try {
            byte[] rawValue = comprehensionTlvSearchForTag.getRawValue();
            int valueIndex = comprehensionTlvSearchForTag.getValueIndex();
            int length = comprehensionTlvSearchForTag.getLength();
            int[] iArr = new int[length];
            int i = 0;
            while (length > 0) {
                int i2 = rawValue[valueIndex] & PplMessageManager.Type.INVALID;
                valueIndex++;
                length--;
                if (i2 == 4 || i2 == 5 || i2 == 7 || i2 == 8 || i2 == 15) {
                    iArr[i] = i2;
                    i++;
                }
            }
            this.mCmdParams = new SetEventListParams(commandDetails, iArr);
            return false;
        } catch (IndexOutOfBoundsException e) {
            MtkCatLog.e(this, " IndexOutofBoundException in processSetUpEventList");
            return false;
        }
    }

    private void resetTlvIndex() {
        this.tlvIndex = -1;
    }

    private ComprehensionTlv searchForNextTag(ComprehensionTlvTag comprehensionTlvTag, Iterator<ComprehensionTlv> it) {
        int iValue = comprehensionTlvTag.value();
        while (it.hasNext()) {
            ComprehensionTlv next = it.next();
            if (next.getTag() == iValue) {
                return next;
            }
        }
        return null;
    }

    private ComprehensionTlv searchForNextTagAndIndex(ComprehensionTlvTag comprehensionTlvTag, Iterator<ComprehensionTlv> it) {
        if (comprehensionTlvTag == null || it == null) {
            MtkCatLog.d(this, "CPF-searchForNextTagAndIndex: Invalid params");
            return null;
        }
        int iValue = comprehensionTlvTag.value();
        while (it.hasNext()) {
            this.tlvIndex++;
            ComprehensionTlv next = it.next();
            if (next.getTag() == iValue) {
                return next;
            }
        }
        return null;
    }

    private ComprehensionTlv searchForTag(ComprehensionTlvTag comprehensionTlvTag, List<ComprehensionTlv> list) {
        return searchForNextTag(comprehensionTlvTag, list.iterator());
    }

    private ComprehensionTlv searchForTagAndIndex(ComprehensionTlvTag comprehensionTlvTag, List<ComprehensionTlv> list) {
        resetTlvIndex();
        return searchForNextTagAndIndex(comprehensionTlvTag, list.iterator());
    }

    private void sendCmdParams(ResultCode resultCode) {
        this.mCaller.sendMsgParamsDecoded(resultCode, this.mCmdParams);
    }

    private ResultCode setIcons(Object obj) {
        if (obj == null) {
            return ResultCode.PRFRMD_ICON_NOT_DISPLAYED;
        }
        if (this.mIconLoadState == 2) {
            for (Bitmap bitmap : (Bitmap[]) obj) {
            }
        }
        return ResultCode.OK;
    }

    public void dispose() {
        this.mIconLoader.dispose();
        this.mIconLoader = null;
        this.mCmdParams = null;
        this.mCaller = null;
        synchronized (BipCommandParamsFactory.class) {
            sInstance = null;
        }
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        if (message.what != 1) {
            return;
        }
        sendCmdParams(setIcons(message.obj));
    }

    void make(BerTlv berTlv) {
        boolean zProcessSetUpEventList;
        if (berTlv == null) {
            return;
        }
        this.mCmdParams = null;
        this.mIconLoadState = 0;
        if (berTlv.getTag() != 208) {
            MtkCatLog.e(this, "CPF-make: Ununderstood proactive command tag");
            sendCmdParams(ResultCode.CMD_TYPE_NOT_UNDERSTOOD);
            return;
        }
        List<ComprehensionTlv> comprehensionTlvs = berTlv.getComprehensionTlvs();
        try {
            CommandDetails commandDetailsProcessCommandDetails = processCommandDetails(comprehensionTlvs);
            if (commandDetailsProcessCommandDetails == null) {
                MtkCatLog.e(this, "CPF-make: No CommandDetails object");
                sendCmdParams(ResultCode.CMD_TYPE_NOT_UNDERSTOOD);
                return;
            }
            AppInterface.CommandType commandTypeFromInt = AppInterface.CommandType.fromInt(commandDetailsProcessCommandDetails.typeOfCommand);
            if (commandTypeFromInt == null) {
                MtkCatLog.d(this, "CPF-make: Command type can't be found");
                this.mCmdParams = new CommandParams(commandDetailsProcessCommandDetails);
                sendCmdParams(ResultCode.BEYOND_TERMINAL_CAPABILITY);
                return;
            }
            if (!berTlv.isLengthValid()) {
                this.mCmdParams = new CommandParams(commandDetailsProcessCommandDetails);
                sendCmdParams(ResultCode.CMD_DATA_NOT_UNDERSTOOD);
                return;
            }
            try {
                switch (AnonymousClass1.$SwitchMap$com$android$internal$telephony$cat$AppInterface$CommandType[commandTypeFromInt.ordinal()]) {
                    case 1:
                        zProcessSetUpEventList = processSetUpEventList(commandDetailsProcessCommandDetails, comprehensionTlvs);
                        break;
                    case 2:
                        zProcessSetUpEventList = processOpenChannel(commandDetailsProcessCommandDetails, comprehensionTlvs);
                        MtkCatLog.d(this, "process OpenChannel");
                        break;
                    case 3:
                        zProcessSetUpEventList = processCloseChannel(commandDetailsProcessCommandDetails, comprehensionTlvs);
                        MtkCatLog.d(this, "process CloseChannel");
                        break;
                    case 4:
                        zProcessSetUpEventList = processSendData(commandDetailsProcessCommandDetails, comprehensionTlvs);
                        MtkCatLog.d(this, "process SendData");
                        break;
                    case 5:
                        zProcessSetUpEventList = processReceiveData(commandDetailsProcessCommandDetails, comprehensionTlvs);
                        MtkCatLog.d(this, "process ReceiveData");
                        break;
                    case 6:
                        zProcessSetUpEventList = processGetChannelStatus(commandDetailsProcessCommandDetails, comprehensionTlvs);
                        MtkCatLog.d(this, "process GetChannelStatus");
                        break;
                    default:
                        this.mCmdParams = new CommandParams(commandDetailsProcessCommandDetails);
                        MtkCatLog.d(this, "CPF-make: default case");
                        sendCmdParams(ResultCode.BEYOND_TERMINAL_CAPABILITY);
                        return;
                }
                if (zProcessSetUpEventList) {
                    return;
                }
                sendCmdParams(ResultCode.OK);
            } catch (ResultException e) {
                MtkCatLog.d(this, "make: caught ResultException e=" + e);
                this.mCmdParams = new CommandParams(commandDetailsProcessCommandDetails);
                sendCmdParams(e.result());
            }
        } catch (ResultException e2) {
            MtkCatLog.e(this, "CPF-make: Except to procees command details : " + e2.result());
            sendCmdParams(e2.result());
        }
    }
}
