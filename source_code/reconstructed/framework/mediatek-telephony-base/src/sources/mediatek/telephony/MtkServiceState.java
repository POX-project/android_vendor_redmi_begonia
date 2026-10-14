package mediatek.telephony;

import android.os.Bundle;
import android.os.Parcel;
import android.telephony.NetworkRegistrationInfo;
import android.telephony.Rlog;
import android.telephony.ServiceState;
import com.mediatek.internal.telephony.MtkPhoneNumberFormatUtil;
import java.util.Arrays;

/* JADX INFO: loaded from: classes.dex */
public class MtkServiceState extends ServiceState {
    static final boolean DBG = false;
    static final String LOG_TAG = "MTKSS";
    public static final int REGISTRATION_STATE_NOT_REGISTERED_AND_NOT_SEARCHING_EMERGENCY_CALL_ENABLED = 10;
    public static final int REGISTRATION_STATE_NOT_REGISTERED_AND_SEARCHING_EMERGENCY_CALL_ENABLED = 12;
    public static final int REGISTRATION_STATE_REGISTRATION_DENIED_EMERGENCY_CALL_ENABLED = 13;
    public static final int REGISTRATION_STATE_UNKNOWN_EMERGENCY_CALL_ENABLED = 14;
    public static final int RIL_RADIO_TECHNOLOGY_DC_DPA = 133;
    public static final int RIL_RADIO_TECHNOLOGY_DC_HSDPAP = 135;
    public static final int RIL_RADIO_TECHNOLOGY_DC_HSDPAP_DPA = 137;
    public static final int RIL_RADIO_TECHNOLOGY_DC_HSDPAP_UPA = 136;
    public static final int RIL_RADIO_TECHNOLOGY_DC_HSPAP = 138;
    public static final int RIL_RADIO_TECHNOLOGY_DC_UPA = 134;
    public static final int RIL_RADIO_TECHNOLOGY_HSDPAP = 129;
    public static final int RIL_RADIO_TECHNOLOGY_HSDPAP_UPA = 130;
    public static final int RIL_RADIO_TECHNOLOGY_HSUPAP = 131;
    public static final int RIL_RADIO_TECHNOLOGY_HSUPAP_DPA = 132;
    public static final int RIL_RADIO_TECHNOLOGY_MTK = 128;
    private int mCellularDataNetworkType;
    private int mDataRejectCause;
    private int mProprietaryDataRadioTechnology;
    private int mRilCellularDataRegState;
    private int mRilDataRegState;
    private int mRilVoiceRegState;
    private int mVoiceRejectCause;

    public MtkServiceState() {
        this.mRilVoiceRegState = 0;
        this.mRilDataRegState = 0;
        this.mVoiceRejectCause = -1;
        this.mDataRejectCause = -1;
        this.mRilCellularDataRegState = 0;
        this.mCellularDataNetworkType = 0;
        setStateOutOfService();
    }

    public MtkServiceState(Parcel parcel) {
        super(parcel);
        this.mRilVoiceRegState = 0;
        this.mRilDataRegState = 0;
        this.mVoiceRejectCause = -1;
        this.mDataRejectCause = -1;
        this.mRilCellularDataRegState = 0;
        this.mCellularDataNetworkType = 0;
        this.mRilVoiceRegState = parcel.readInt();
        this.mRilDataRegState = parcel.readInt();
        this.mProprietaryDataRadioTechnology = parcel.readInt();
        this.mVoiceRejectCause = parcel.readInt();
        this.mDataRejectCause = parcel.readInt();
        this.mRilCellularDataRegState = parcel.readInt();
        this.mCellularDataNetworkType = parcel.readInt();
    }

    public MtkServiceState(ServiceState serviceState) {
        this.mRilVoiceRegState = 0;
        this.mRilDataRegState = 0;
        this.mVoiceRejectCause = -1;
        this.mDataRejectCause = -1;
        this.mRilCellularDataRegState = 0;
        this.mCellularDataNetworkType = 0;
        copyFrom((MtkServiceState) serviceState);
    }

    public MtkServiceState(MtkServiceState mtkServiceState) {
        this.mRilVoiceRegState = 0;
        this.mRilDataRegState = 0;
        this.mVoiceRejectCause = -1;
        this.mDataRejectCause = -1;
        this.mRilCellularDataRegState = 0;
        this.mCellularDataNetworkType = 0;
        copyFrom(mtkServiceState);
    }

    public static MtkServiceState mergeMtkServiceStates(MtkServiceState mtkServiceState, MtkServiceState mtkServiceState2) {
        if (mtkServiceState2.mVoiceRegState != 0) {
            return mtkServiceState;
        }
        MtkServiceState mtkServiceState3 = new MtkServiceState(mtkServiceState);
        mtkServiceState3.mVoiceRegState = mtkServiceState2.mVoiceRegState;
        mtkServiceState3.mIsEmergencyOnly = false;
        return mtkServiceState3;
    }

    private static int mtkNetworkTypeToRilRadioTechnology(int i) {
        switch (i) {
            case 1:
                return 1;
            case 2:
                return 2;
            case 3:
                return 3;
            case 4:
                return 4;
            case 5:
                return 7;
            case 6:
                return 8;
            case 7:
                return 6;
            case 8:
                return 9;
            case 9:
                return 10;
            case 10:
                return 11;
            case 11:
            default:
                return 0;
            case 12:
                return 12;
            case 13:
                return 14;
            case 14:
                return 13;
            case 15:
                return 15;
            case 16:
                return 16;
            case MtkPhoneNumberFormatUtil.FORMAT_THAILAND /* 17 */:
                return 17;
            case MtkPhoneNumberFormatUtil.FORMAT_VIETNAM /* 18 */:
                return 18;
            case MtkPhoneNumberFormatUtil.FORMAT_PORTUGAL /* 19 */:
                return 19;
            case MtkPhoneNumberFormatUtil.FORMAT_POLAND /* 20 */:
                return 20;
        }
    }

    public static ServiceState newFromBundle(Bundle bundle) {
        MtkServiceState mtkServiceState = new MtkServiceState();
        mtkServiceState.setFromNotifierBundle(bundle);
        return mtkServiceState;
    }

    public boolean compareTwoRadioTechnology(int i, int i2) {
        if (i == i2) {
            return false;
        }
        if (i == 14) {
            return true;
        }
        if (i2 == 14) {
            return false;
        }
        if (i == 16) {
            return i2 == 0;
        }
        if (i2 == 16) {
            return i != 0;
        }
        return i > i2;
    }

    protected void copyFrom(MtkServiceState mtkServiceState) {
        super.copyFrom((ServiceState) mtkServiceState);
        this.mRilVoiceRegState = mtkServiceState.mRilVoiceRegState;
        this.mRilDataRegState = mtkServiceState.mRilDataRegState;
        this.mProprietaryDataRadioTechnology = mtkServiceState.mProprietaryDataRadioTechnology;
        this.mVoiceRejectCause = mtkServiceState.mVoiceRejectCause;
        this.mDataRejectCause = mtkServiceState.mDataRejectCause;
        this.mRilCellularDataRegState = mtkServiceState.mRilCellularDataRegState;
        this.mCellularDataNetworkType = mtkServiceState.mCellularDataNetworkType;
    }

    @Override // android.telephony.ServiceState
    public boolean equals(Object obj) {
        boolean z = false;
        try {
            MtkServiceState mtkServiceState = (MtkServiceState) obj;
            if (obj == null) {
                return false;
            }
            synchronized (this.mNetworkRegistrationInfos) {
                if (this.mVoiceRegState == mtkServiceState.mVoiceRegState && this.mDataRegState == mtkServiceState.mDataRegState && this.mIsManualNetworkSelection == mtkServiceState.mIsManualNetworkSelection && this.mChannelNumber == mtkServiceState.mChannelNumber && Arrays.equals(this.mCellBandwidths, mtkServiceState.mCellBandwidths) && equalsHandlesNulls(this.mOperatorAlphaLong, mtkServiceState.mOperatorAlphaLong) && equalsHandlesNulls(this.mOperatorAlphaShort, mtkServiceState.mOperatorAlphaShort) && equalsHandlesNulls(this.mOperatorNumeric, mtkServiceState.mOperatorNumeric) && equalsHandlesNulls(Boolean.valueOf(this.mCssIndicator), Boolean.valueOf(mtkServiceState.mCssIndicator)) && equalsHandlesNulls(Integer.valueOf(this.mNetworkId), Integer.valueOf(mtkServiceState.mNetworkId)) && equalsHandlesNulls(Integer.valueOf(this.mSystemId), Integer.valueOf(mtkServiceState.mSystemId)) && equalsHandlesNulls(Integer.valueOf(this.mCdmaRoamingIndicator), Integer.valueOf(mtkServiceState.mCdmaRoamingIndicator)) && equalsHandlesNulls(Integer.valueOf(this.mCdmaDefaultRoamingIndicator), Integer.valueOf(mtkServiceState.mCdmaDefaultRoamingIndicator)) && this.mIsEmergencyOnly == mtkServiceState.mIsEmergencyOnly && equalsHandlesNulls(this.mOperatorAlphaLongRaw, mtkServiceState.mOperatorAlphaLongRaw) && equalsHandlesNulls(this.mOperatorAlphaShortRaw, mtkServiceState.mOperatorAlphaShortRaw) && this.mNetworkRegistrationInfos.size() == mtkServiceState.mNetworkRegistrationInfos.size() && this.mNetworkRegistrationInfos.containsAll(mtkServiceState.mNetworkRegistrationInfos) && this.mNrFrequencyRange == mtkServiceState.mNrFrequencyRange && this.mIsIwlanPreferred == mtkServiceState.mIsIwlanPreferred && this.mRilVoiceRegState == mtkServiceState.mRilVoiceRegState && this.mRilDataRegState == mtkServiceState.mRilDataRegState && equalsHandlesNulls(Integer.valueOf(this.mProprietaryDataRadioTechnology), Integer.valueOf(mtkServiceState.mProprietaryDataRadioTechnology)) && this.mVoiceRejectCause == mtkServiceState.mVoiceRejectCause && this.mDataRejectCause == mtkServiceState.mDataRejectCause && this.mRilCellularDataRegState == mtkServiceState.mRilCellularDataRegState && this.mCellularDataNetworkType == mtkServiceState.mCellularDataNetworkType) {
                    z = true;
                }
            }
            return z;
        } catch (ClassCastException e) {
            return false;
        }
    }

    public void fillInNotifierBundle(Bundle bundle) {
        super.fillInNotifierBundle(bundle);
        bundle.putInt("RilVoiceRegState", this.mRilVoiceRegState);
        bundle.putInt("RilDataRegState", this.mRilDataRegState);
        bundle.putInt("proprietaryDataRadioTechnology", this.mProprietaryDataRadioTechnology);
        bundle.putInt("VoiceRejectCause", this.mVoiceRejectCause);
        bundle.putInt("DataRejectCause", this.mDataRejectCause);
        bundle.putInt("RilCellularDataRegState", this.mRilCellularDataRegState);
        bundle.putInt("CellularDataNetworkType", this.mCellularDataNetworkType);
    }

    public int getCellularDataNetworkType() {
        return this.mCellularDataNetworkType;
    }

    public int getCellularDataRegState() {
        if (this.mVoiceRegState == 3) {
            return this.mVoiceRegState;
        }
        int i = this.mRilCellularDataRegState;
        return (i == 1 || i == 5) ? 0 : 1;
    }

    public boolean getCellularDataRoaming() {
        NetworkRegistrationInfo networkRegistrationInfo = getNetworkRegistrationInfo(2, 1);
        return (networkRegistrationInfo == null || networkRegistrationInfo.getRoamingType() == 0) ? false : true;
    }

    public int getCellularDataRoamingType() {
        NetworkRegistrationInfo networkRegistrationInfo = getNetworkRegistrationInfo(2, 1);
        if (this.mVoiceRegState == 3 || networkRegistrationInfo == null) {
            return 0;
        }
        return networkRegistrationInfo.getRoamingType();
    }

    public int getCellularRegState() {
        if (getCellularVoiceRegState() == 3) {
            return 3;
        }
        if (getCellularDataRegState() == 0) {
            return 0;
        }
        return getCellularVoiceRegState();
    }

    public int getCellularVoiceRegState() {
        NetworkRegistrationInfo networkRegistrationInfo = getNetworkRegistrationInfo(1, 1);
        if (this.mVoiceRegState == 3) {
            return this.mVoiceRegState;
        }
        return (networkRegistrationInfo == null || !networkRegistrationInfo.isInService()) ? 1 : 0;
    }

    public int getDataRejectCause() {
        return this.mDataRejectCause;
    }

    public int getIwlanRegState() {
        NetworkRegistrationInfo networkRegistrationInfo = getNetworkRegistrationInfo(2, 2);
        return (networkRegistrationInfo == null || !networkRegistrationInfo.isInService()) ? 1 : 0;
    }

    public NetworkRegistrationInfo getNetworkRegistrationInfo(int i, int i2) {
        synchronized (this.mNetworkRegistrationInfos) {
            for (NetworkRegistrationInfo networkRegistrationInfo : this.mNetworkRegistrationInfos) {
                if (networkRegistrationInfo == null) {
                    Rlog.e(LOG_TAG, "getNetworkRegistrationInfo find null nris=" + this.mNetworkRegistrationInfos);
                } else if (networkRegistrationInfo.getTransportType() == i2 && networkRegistrationInfo.getDomain() == i) {
                    return new NetworkRegistrationInfo(networkRegistrationInfo);
                }
            }
            return null;
        }
    }

    public int getProprietaryDataRadioTechnology() {
        return this.mProprietaryDataRadioTechnology;
    }

    public int getRilCellularDataRegState() {
        return this.mRilCellularDataRegState;
    }

    public int getRilDataRadioTechnology() {
        return mtkNetworkTypeToRilRadioTechnology(getDataNetworkType());
    }

    public int getRilDataRegState() {
        return this.mRilDataRegState;
    }

    public int getRilVoiceRadioTechnology() {
        NetworkRegistrationInfo networkRegistrationInfo = getNetworkRegistrationInfo(1, 1);
        if (networkRegistrationInfo != null) {
            return mtkNetworkTypeToRilRadioTechnology(networkRegistrationInfo.getAccessNetworkTechnology());
        }
        return 0;
    }

    public int getRilVoiceRegState() {
        return this.mRilVoiceRegState;
    }

    public int getVoiceRejectCause() {
        return this.mVoiceRejectCause;
    }

    protected void init() {
        super.init();
        this.mRilVoiceRegState = 0;
        this.mRilDataRegState = 0;
        this.mProprietaryDataRadioTechnology = 0;
        this.mVoiceRejectCause = -1;
        this.mDataRejectCause = -1;
        this.mRilCellularDataRegState = 0;
        this.mCellularDataNetworkType = 0;
    }

    public boolean isUsingCellularCarrierAggregation() {
        return isUsingCarrierAggregation();
    }

    public void keepCellularDataServiceState() {
        NetworkRegistrationInfo networkRegistrationInfo = getNetworkRegistrationInfo(2, 1);
        if (networkRegistrationInfo != null) {
            this.mRilCellularDataRegState = networkRegistrationInfo.getRegistrationState();
            this.mCellularDataNetworkType = networkRegistrationInfo.getAccessNetworkTechnology();
        }
    }

    public void setDataRejectCause(int i) {
        this.mDataRejectCause = i;
    }

    protected void setFromNotifierBundle(Bundle bundle) {
        MtkServiceState mtkServiceState = (MtkServiceState) bundle.getParcelable("android.intent.extra.SERVICE_STATE");
        if (mtkServiceState != null) {
            copyFrom(mtkServiceState);
        }
    }

    public void setProprietaryDataRadioTechnology(int i) {
        this.mProprietaryDataRadioTechnology = i;
    }

    public void setRilDataRegState(int i) {
        this.mRilDataRegState = i;
    }

    public void setRilVoiceRegState(int i) {
        this.mRilVoiceRegState = i;
    }

    public void setVoiceRejectCause(int i) {
        this.mVoiceRejectCause = i;
    }

    @Override // android.telephony.ServiceState
    public String toString() {
        String string;
        synchronized (this.mNetworkRegistrationInfos) {
            StringBuilder sb = new StringBuilder();
            sb.append("{mVoiceRegState=");
            sb.append(this.mVoiceRegState);
            sb.append("(" + rilServiceStateToString(this.mVoiceRegState) + ")");
            sb.append(", mDataRegState=");
            sb.append(this.mDataRegState);
            sb.append("(" + rilServiceStateToString(this.mDataRegState) + ")");
            sb.append(", mChannelNumber=");
            sb.append(this.mChannelNumber);
            sb.append(", duplexMode()=");
            sb.append(getDuplexMode());
            sb.append(", mCellBandwidths=");
            sb.append(Arrays.toString(this.mCellBandwidths));
            sb.append(", mOperatorAlphaLong=");
            sb.append(this.mOperatorAlphaLong);
            sb.append(", mOperatorAlphaShort=");
            sb.append(this.mOperatorAlphaShort);
            sb.append(", isManualNetworkSelection=");
            sb.append(this.mIsManualNetworkSelection);
            sb.append(this.mIsManualNetworkSelection ? "(manual)" : "(automatic)");
            sb.append(", getRilVoiceRadioTechnology=");
            sb.append(getRilVoiceRadioTechnology());
            sb.append("(" + rilRadioTechnologyToString(getRilVoiceRadioTechnology()) + ")");
            sb.append(", getRilDataRadioTechnology=");
            sb.append(getRilDataRadioTechnology());
            sb.append("(" + rilRadioTechnologyToString(getRilDataRadioTechnology()) + ")");
            sb.append(", mCssIndicator=");
            sb.append(this.mCssIndicator ? "supported" : "unsupported");
            sb.append(", mNetworkId=");
            sb.append(this.mNetworkId);
            sb.append(", mSystemId=");
            sb.append(this.mSystemId);
            sb.append(", mCdmaRoamingIndicator=");
            sb.append(this.mCdmaRoamingIndicator);
            sb.append(", mCdmaDefaultRoamingIndicator=");
            sb.append(this.mCdmaDefaultRoamingIndicator);
            sb.append(", mIsEmergencyOnly=");
            sb.append(this.mIsEmergencyOnly);
            sb.append(", isUsingCarrierAggregation=");
            sb.append(isUsingCarrierAggregation());
            sb.append(", mNetworkRegistrationInfos=");
            sb.append(this.mNetworkRegistrationInfos);
            sb.append(", mNrFrequencyRange=");
            sb.append(this.mNrFrequencyRange);
            sb.append(", mOperatorAlphaLongRaw=");
            sb.append(this.mOperatorAlphaLongRaw);
            sb.append(", mOperatorAlphaShortRaw=");
            sb.append(this.mOperatorAlphaShortRaw);
            sb.append(", mIsIwlanPreferred=");
            sb.append(this.mIsIwlanPreferred);
            sb.append(", Ril Voice Regist state=");
            sb.append(this.mRilVoiceRegState);
            sb.append(", Ril Data Regist state=");
            sb.append(this.mRilDataRegState);
            sb.append(", mProprietaryDataRadioTechnology=");
            sb.append(this.mProprietaryDataRadioTechnology);
            sb.append(", VoiceRejectCause=");
            sb.append(this.mVoiceRejectCause);
            sb.append(", DataRejectCause=");
            sb.append(this.mDataRejectCause);
            sb.append(", IwlanRegState=");
            sb.append(getIwlanRegState());
            sb.append(", CellularVoiceRegState=");
            sb.append(getCellularVoiceRegState());
            sb.append(", CellularDataRegState=");
            sb.append(getCellularDataRegState());
            sb.append(", RilCellularDataRegState=");
            sb.append(getRilCellularDataRegState());
            sb.append(", CellularDataRoamingType=");
            sb.append(getCellularDataRoamingType());
            sb.append(", CellularDataNetworkType=");
            sb.append(getCellularDataNetworkType());
            sb.append("}");
            string = sb.toString();
        }
        return string;
    }

    @Override // android.telephony.ServiceState, android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        super.writeToParcel(parcel, i);
        parcel.writeInt(this.mRilVoiceRegState);
        parcel.writeInt(this.mRilDataRegState);
        parcel.writeInt(this.mProprietaryDataRadioTechnology);
        parcel.writeInt(this.mVoiceRejectCause);
        parcel.writeInt(this.mDataRejectCause);
        parcel.writeInt(this.mRilCellularDataRegState);
        parcel.writeInt(this.mCellularDataNetworkType);
    }
}
