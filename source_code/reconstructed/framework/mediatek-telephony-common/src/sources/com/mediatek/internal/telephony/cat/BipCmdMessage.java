package com.mediatek.internal.telephony.cat;

import android.os.Parcel;
import android.os.Parcelable;
import com.android.internal.telephony.cat.AppInterface;
import com.android.internal.telephony.cat.CommandDetails;
import com.android.internal.telephony.cat.CommandParams;
import com.android.internal.telephony.cat.SetEventListParams;
import com.android.internal.telephony.cat.TextMessage;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class BipCmdMessage implements Parcelable {
    public static final Parcelable.Creator<BipCmdMessage> CREATOR = new Parcelable.Creator<BipCmdMessage>() { // from class: com.mediatek.internal.telephony.cat.BipCmdMessage.1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public BipCmdMessage createFromParcel(Parcel parcel) {
            return new BipCmdMessage(parcel);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public BipCmdMessage[] newArray(int i) {
            return new BipCmdMessage[i];
        }
    };
    public String mApn;
    public BearerDesc mBearerDesc;
    public int mBufferSize;
    public byte[] mChannelData;
    public int mChannelDataLength;
    public ChannelStatus mChannelStatusData;
    public List<ChannelStatus> mChannelStatusList;
    public boolean mCloseBackToTcpListen;
    public int mCloseCid;
    CommandDetails mCmdDet;
    public OtherAddress mDataDestinationAddress;
    public String mDestAddress;
    public DnsServerAddress mDnsServerAddress;
    public int mInfoType;
    public OtherAddress mLocalAddress;
    public String mLogin;
    public String mPwd;
    public int mReceiveDataCid;
    public int mRemainingDataLength;
    public int mSendDataCid;
    public int mSendMode;
    private SetupEventListSettings mSetupEventListSettings;
    private TextMessage mTextMsg;
    public TransportProtocol mTransportProtocol;

    /* JADX INFO: renamed from: com.mediatek.internal.telephony.cat.BipCmdMessage$2, reason: invalid class name */
    static /* synthetic */ class AnonymousClass2 {
        static final /* synthetic */ int[] $SwitchMap$com$android$internal$telephony$cat$AppInterface$CommandType;

        static {
            int[] iArr = new int[AppInterface.CommandType.values().length];
            $SwitchMap$com$android$internal$telephony$cat$AppInterface$CommandType = iArr;
            try {
                iArr[AppInterface.CommandType.GET_CHANNEL_STATUS.ordinal()] = 1;
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
                $SwitchMap$com$android$internal$telephony$cat$AppInterface$CommandType[AppInterface.CommandType.RECEIVE_DATA.ordinal()] = 4;
            } catch (NoSuchFieldError e4) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$cat$AppInterface$CommandType[AppInterface.CommandType.SEND_DATA.ordinal()] = 5;
            } catch (NoSuchFieldError e5) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$cat$AppInterface$CommandType[AppInterface.CommandType.SET_UP_EVENT_LIST.ordinal()] = 6;
            } catch (NoSuchFieldError e6) {
            }
        }
    }

    public class SetupEventListSettings {
        public int[] eventList;

        public SetupEventListSettings() {
        }
    }

    public BipCmdMessage(Parcel parcel) {
        this.mBearerDesc = null;
        this.mBufferSize = 0;
        this.mLocalAddress = null;
        this.mDnsServerAddress = null;
        this.mTransportProtocol = null;
        this.mDataDestinationAddress = null;
        this.mApn = null;
        this.mLogin = null;
        this.mPwd = null;
        this.mChannelDataLength = 0;
        this.mRemainingDataLength = 0;
        this.mChannelData = null;
        this.mChannelStatusData = null;
        this.mCloseCid = 0;
        this.mSendDataCid = 0;
        this.mReceiveDataCid = 0;
        this.mCloseBackToTcpListen = false;
        this.mSendMode = 0;
        this.mChannelStatusList = null;
        this.mInfoType = 0;
        this.mDestAddress = null;
        this.mSetupEventListSettings = null;
        this.mCmdDet = parcel.readParcelable(null);
        this.mTextMsg = parcel.readParcelable(null);
        if (getCmdType() == null) {
            MtkCatLog.e("[BIP]", "cmd type is null");
            return;
        }
        int i = AnonymousClass2.$SwitchMap$com$android$internal$telephony$cat$AppInterface$CommandType[getCmdType().ordinal()];
        if (i == 2) {
            this.mBearerDesc = (BearerDesc) parcel.readParcelable(null);
            return;
        }
        if (i != 6) {
            return;
        }
        this.mSetupEventListSettings = new SetupEventListSettings();
        int i2 = parcel.readInt();
        this.mSetupEventListSettings.eventList = new int[i2];
        for (int i3 = 0; i3 < i2; i3++) {
            this.mSetupEventListSettings.eventList[i3] = parcel.readInt();
        }
    }

    BipCmdMessage(CommandParams commandParams) {
        this.mBearerDesc = null;
        this.mBufferSize = 0;
        this.mLocalAddress = null;
        this.mDnsServerAddress = null;
        this.mTransportProtocol = null;
        this.mDataDestinationAddress = null;
        this.mApn = null;
        this.mLogin = null;
        this.mPwd = null;
        this.mChannelDataLength = 0;
        this.mRemainingDataLength = 0;
        this.mChannelData = null;
        this.mChannelStatusData = null;
        this.mCloseCid = 0;
        this.mSendDataCid = 0;
        this.mReceiveDataCid = 0;
        this.mCloseBackToTcpListen = false;
        this.mSendMode = 0;
        this.mChannelStatusList = null;
        this.mInfoType = 0;
        this.mDestAddress = null;
        this.mSetupEventListSettings = null;
        this.mCmdDet = commandParams.mCmdDet;
        if (getCmdType() == null) {
            MtkCatLog.e("[BIP]", "cmd type is null!");
        }
        switch (AnonymousClass2.$SwitchMap$com$android$internal$telephony$cat$AppInterface$CommandType[getCmdType().ordinal()]) {
            case 1:
                this.mTextMsg = ((GetChannelStatusParams) commandParams).textMsg;
                break;
            case 2:
                this.mBearerDesc = ((OpenChannelParams) commandParams).bearerDesc;
                this.mBufferSize = ((OpenChannelParams) commandParams).bufferSize;
                this.mLocalAddress = ((OpenChannelParams) commandParams).localAddress;
                this.mTransportProtocol = ((OpenChannelParams) commandParams).transportProtocol;
                this.mDataDestinationAddress = ((OpenChannelParams) commandParams).dataDestinationAddress;
                this.mTextMsg = ((OpenChannelParams) commandParams).textMsg;
                BearerDesc bearerDesc = this.mBearerDesc;
                if (bearerDesc == null) {
                    MtkCatLog.d("[BIP]", "Invalid BearerDesc object");
                } else if (bearerDesc.bearerType == 2 || this.mBearerDesc.bearerType == 3 || this.mBearerDesc.bearerType == 9 || this.mBearerDesc.bearerType == 11) {
                    this.mApn = ((OpenChannelParams) commandParams).gprsParams.accessPointName;
                    this.mLogin = ((OpenChannelParams) commandParams).gprsParams.userLogin;
                    this.mPwd = ((OpenChannelParams) commandParams).gprsParams.userPwd;
                }
                break;
            case 3:
                this.mTextMsg = ((CloseChannelParams) commandParams).textMsg;
                this.mCloseCid = ((CloseChannelParams) commandParams).mCloseCid;
                this.mCloseBackToTcpListen = ((CloseChannelParams) commandParams).mBackToTcpListen;
                break;
            case 4:
                this.mTextMsg = ((ReceiveDataParams) commandParams).textMsg;
                this.mChannelDataLength = ((ReceiveDataParams) commandParams).channelDataLength;
                this.mReceiveDataCid = ((ReceiveDataParams) commandParams).mReceiveDataCid;
                break;
            case 5:
                this.mTextMsg = ((SendDataParams) commandParams).textMsg;
                this.mChannelData = ((SendDataParams) commandParams).channelData;
                this.mSendDataCid = ((SendDataParams) commandParams).mSendDataCid;
                this.mSendMode = ((SendDataParams) commandParams).mSendMode;
                break;
            case 6:
                SetupEventListSettings setupEventListSettings = new SetupEventListSettings();
                this.mSetupEventListSettings = setupEventListSettings;
                setupEventListSettings.eventList = ((SetEventListParams) commandParams).mEventInfo;
                break;
        }
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public BearerDesc getBearerDesc() {
        return this.mBearerDesc;
    }

    public int getCmdQualifier() {
        return this.mCmdDet.commandQualifier;
    }

    public AppInterface.CommandType getCmdType() {
        return AppInterface.CommandType.fromInt(this.mCmdDet.typeOfCommand);
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeParcelable(this.mCmdDet, 0);
        parcel.writeParcelable(this.mTextMsg, 0);
        if (getCmdType() == null) {
            MtkCatLog.e("[BIP]", "cmd type is null");
            return;
        }
        int i2 = AnonymousClass2.$SwitchMap$com$android$internal$telephony$cat$AppInterface$CommandType[getCmdType().ordinal()];
        if (i2 == 2) {
            parcel.writeParcelable(this.mBearerDesc, 0);
        } else {
            if (i2 != 6) {
                return;
            }
            parcel.writeIntArray(this.mSetupEventListSettings.eventList);
        }
    }
}
