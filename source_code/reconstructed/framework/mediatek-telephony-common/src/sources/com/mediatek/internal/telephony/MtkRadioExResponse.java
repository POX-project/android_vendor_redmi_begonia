package com.mediatek.internal.telephony;

import android.hardware.radio.V1_0.OperatorInfo;
import android.hardware.radio.V1_0.RadioResponseInfo;
import android.os.AsyncResult;
import android.os.Message;
import android.os.RemoteException;
import android.os.SystemProperties;
import android.telephony.ServiceState;
import android.telephony.SignalStrength;
import android.telephony.SubscriptionManager;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneFactory;
import com.android.internal.telephony.RIL;
import com.android.internal.telephony.RILRequest;
import com.android.internal.telephony.ServiceStateTracker;
import com.android.internal.telephony.uicc.IccUtils;
import com.mediatek.internal.telephony.datasub.DataSubConstants;
import com.mediatek.internal.telephony.phb.PBEntry;
import com.mediatek.internal.telephony.phb.PBMemStorage;
import com.mediatek.internal.telephony.phb.PhbEntry;
import java.io.UnsupportedEncodingException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.TimeZone;
import mediatek.telephony.MtkSmsParameters;
import vendor.mediatek.hardware.mtkradioex.V2_0.CallForwardInfoEx;
import vendor.mediatek.hardware.mtkradioex.V2_0.OperatorInfoWithAct;
import vendor.mediatek.hardware.mtkradioex.V2_0.PhbEntryExt;
import vendor.mediatek.hardware.mtkradioex.V2_0.PhbEntryStructure;
import vendor.mediatek.hardware.mtkradioex.V2_0.PhbMemStorageResponse;
import vendor.mediatek.hardware.mtkradioex.V2_0.RsuResponseInfo;
import vendor.mediatek.hardware.mtkradioex.V2_0.SignalStrengthWithWcdmaEcio;
import vendor.mediatek.hardware.mtkradioex.V2_0.SmsMemStatus;
import vendor.mediatek.hardware.mtkradioex.V2_0.SmsParams;
import vendor.mediatek.hardware.mtkradioex.V2_0.VsimEvent;

/* JADX INFO: loaded from: classes.dex */
public class MtkRadioExResponse extends MtkRadioExResponseBase {
    private static final String TAG = "MtkRadioRespEx";
    private static final boolean isUserLoad = SystemProperties.get("ro.build.type").equals(DataSubConstants.REASON_MOBILE_DATA_ENABLE_USER);
    MtkMessageBoost mMtkMessageBoost;
    MtkRIL mMtkRil;

    public MtkRadioExResponse(RIL ril) {
        super(ril);
        MtkRIL mtkRIL = (MtkRIL) ril;
        this.mMtkRil = mtkRIL;
        this.mMtkMessageBoost = MtkMessageBoost.init(mtkRIL);
    }

    private static String convertOpertatorInfoToString(int i) {
        if (i == 0) {
            return "unknown";
        }
        if (i == 1) {
            return "available";
        }
        if (i == 2) {
            return "current";
        }
        return i == 3 ? "forbidden" : "";
    }

    private int getSubId(int i) {
        int[] subId = SubscriptionManager.getSubId(i);
        if (subId == null || subId.length <= 0) {
            return -1;
        }
        return subId[0];
    }

    private void responseCallForwardInfoEx(RadioResponseInfo radioResponseInfo, ArrayList<CallForwardInfoEx> arrayList) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            MtkCallForwardInfo[] mtkCallForwardInfoArr = new MtkCallForwardInfo[arrayList.size()];
            for (int i = 0; i < arrayList.size(); i++) {
                long[] jArr = new long[2];
                mtkCallForwardInfoArr[i] = new MtkCallForwardInfo();
                mtkCallForwardInfoArr[i].status = arrayList.get(i).status;
                mtkCallForwardInfoArr[i].reason = arrayList.get(i).reason;
                mtkCallForwardInfoArr[i].serviceClass = arrayList.get(i).serviceClass;
                mtkCallForwardInfoArr[i].toa = arrayList.get(i).toa;
                mtkCallForwardInfoArr[i].number = arrayList.get(i).number;
                mtkCallForwardInfoArr[i].timeSeconds = arrayList.get(i).timeSeconds;
                String[] strArr = {arrayList.get(i).timeSlotBegin, arrayList.get(i).timeSlotEnd};
                if (strArr[0] == null || strArr[1] == null) {
                    mtkCallForwardInfoArr[i].timeSlot = null;
                } else {
                    for (int i2 = 0; i2 < 2; i2++) {
                        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("HH:mm");
                        simpleDateFormat.setTimeZone(TimeZone.getTimeZone("GMT+8"));
                        try {
                            jArr[i2] = simpleDateFormat.parse(strArr[i2]).getTime();
                        } catch (ParseException e) {
                            e.printStackTrace();
                            jArr = null;
                        }
                    }
                    mtkCallForwardInfoArr[i].timeSlot = jArr;
                }
            }
            if (radioResponseInfo.error == 0) {
                this.mMtkRil.getMtkRadioResponse();
                MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, mtkCallForwardInfoArr);
            }
            this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, mtkCallForwardInfoArr);
        }
    }

    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$PrimitiveArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:596)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    private void responseFemtoCellInfos(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) {
        Phone phone;
        String str;
        int i;
        RILRequest rILRequestProcessResponse = this.mMtkRil.getMtkRadioResponse().mRil.processResponse(radioResponseInfo);
        ArrayList arrayList2 = null;
        String femtoPlmn = null;
        String femtoAct = null;
        String femtoCsgId = null;
        Phone phone2 = PhoneFactory.getPhone(this.mMtkRil.mInstanceId.intValue());
        if (phone2 != null) {
            ServiceStateTracker serviceStateTracker = phone2.getServiceStateTracker();
            ServiceState serviceState = serviceStateTracker.mSS;
            femtoPlmn = ((MtkServiceStateTracker) serviceStateTracker).getFemtoPlmn();
            femtoAct = ((MtkServiceStateTracker) serviceStateTracker).getFemtoAct();
            femtoCsgId = ((MtkServiceStateTracker) serviceStateTracker).getFemtoCsgId();
        }
        if (rILRequestProcessResponse != null && radioResponseInfo.error == 0) {
            String[] strArr = new String[arrayList.size()];
            for (int i2 = 0; i2 < arrayList.size(); i2++) {
                strArr[i2] = arrayList.get(i2);
            }
            if (strArr.length % 7 != 0) {
                throw new RuntimeException("responseFemtoCellInfos: invalid response. Got " + strArr.length + " strings, expected multible of 7");
            }
            ArrayList arrayList3 = new ArrayList(strArr.length / 7);
            int i3 = 0;
            while (i3 < strArr.length) {
                if (strArr[i3 + 1] != null) {
                    phone = phone2;
                    if (strArr[i3 + 1].startsWith("uCs2")) {
                        this.mMtkRil.riljLog("responseFemtoCellInfos handling UCS2 format name");
                        try {
                            strArr[i3 + 0] = new String(IccUtils.hexStringToBytes(strArr[i3 + 1].substring(4)), "UTF-16");
                        } catch (UnsupportedEncodingException e) {
                            this.mMtkRil.riljLog("responseFemtoCellInfos UnsupportedEncodingException");
                        }
                    }
                } else {
                    phone = phone2;
                }
                if (strArr[i3 + 1] != null && (strArr[i3 + 1].equals("") || strArr[i3 + 1].equals(strArr[i3 + 0]))) {
                    this.mMtkRil.riljLog("lookup RIL responseFemtoCellInfos() for plmn id= " + strArr[i3 + 0]);
                    MtkRIL mtkRIL = this.mMtkRil;
                    strArr[i3 + 1] = mtkRIL.lookupOperatorName(getSubId(mtkRIL.mInstanceId.intValue()), strArr[i3 + 0], true, -1);
                }
                int iIntValue = Integer.valueOf(strArr[i3 + 6]).intValue();
                if (strArr[i3 + 2].equals("7")) {
                    str = MtkGsmCdmaPhone.LTE_INDICATOR;
                    i = 14;
                } else if (strArr[i3 + 2].equals(MtkGsmCdmaPhone.ACT_TYPE_UTRAN)) {
                    str = MtkGsmCdmaPhone.UTRAN_INDICATOR;
                    i = 3;
                } else {
                    str = MtkGsmCdmaPhone.GSM_INDICATOR;
                    i = 1;
                }
                strArr[i3 + 1] = strArr[i3 + 1].concat(" " + str);
                String str2 = new String(IccUtils.hexStringToBytes(strArr[i3 + 5]));
                boolean z = strArr[i3 + 0] != null && strArr[i3 + 0].equals(femtoPlmn) && strArr[i3 + 2] != null && strArr[i3 + 2].equals(femtoAct) && strArr[i3 + 3] != null && strArr[i3 + 3].equals(femtoCsgId);
                this.mMtkRil.riljLog("FemtoCellInfo(" + strArr[i3 + 3] + "," + strArr[i3 + 4] + "," + strArr[i3 + 5] + "," + strArr[i3 + 0] + "," + strArr[i3 + 1] + "," + i + ") hnbName=" + str2 + ",sig=" + iIntValue + ",con=" + z);
                arrayList3.add(new FemtoCellInfo(Integer.parseInt(strArr[i3 + 3]), Integer.parseInt(strArr[i3 + 4]), str2, strArr[i3 + 0], strArr[i3 + 1], i, z, iIntValue));
                i3 += 7;
                phone2 = phone;
                femtoPlmn = femtoPlmn;
                femtoAct = femtoAct;
            }
            this.mMtkRil.getMtkRadioResponse();
            MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, arrayList3);
            arrayList2 = arrayList3;
        }
        this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, arrayList2);
    }

    private void responseGetPhbMemStorage(RadioResponseInfo radioResponseInfo, PhbMemStorageResponse phbMemStorageResponse) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            PBMemStorage pBMemStorage = new PBMemStorage();
            if (radioResponseInfo.error == 0) {
                pBMemStorage.setStorage(phbMemStorageResponse.storage);
                pBMemStorage.setUsed(phbMemStorageResponse.used);
                pBMemStorage.setTotal(phbMemStorageResponse.total);
                this.mMtkRil.getMtkRadioResponse();
                MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, pBMemStorage);
            }
            this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, pBMemStorage);
        }
    }

    private void responseGetSignalStrengthWithWcdmaEcio(RadioResponseInfo radioResponseInfo, SignalStrengthWithWcdmaEcio signalStrengthWithWcdmaEcio) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.getMtkRadioResponse().mRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            SignalStrength signalStrength = new SignalStrength();
            if (radioResponseInfo.error == 0) {
                this.mMtkRil.getMtkRadioResponse();
                MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, signalStrength);
            }
            this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, signalStrength);
        }
    }

    private void responseOperatorInfosWithAct(RadioResponseInfo radioResponseInfo, ArrayList<OperatorInfoWithAct> arrayList) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.getMtkRadioResponse().mRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            ArrayList arrayList2 = null;
            if (radioResponseInfo.error == 0) {
                arrayList2 = new ArrayList();
                for (int i = 0; i < arrayList.size(); i++) {
                    int i2 = arrayList.get(i).lac.length() > 0 ? Integer.parseInt(arrayList.get(i).lac, 16) : -1;
                    OperatorInfo operatorInfo = arrayList.get(i).base;
                    MtkRIL mtkRIL = this.mMtkRil;
                    operatorInfo.alphaLong = mtkRIL.lookupOperatorNameForPlmnList(getSubId(mtkRIL.mInstanceId.intValue()), arrayList.get(i).base.operatorNumeric, true, i2);
                    OperatorInfo operatorInfo2 = arrayList.get(i).base;
                    MtkRIL mtkRIL2 = this.mMtkRil;
                    operatorInfo2.alphaShort = mtkRIL2.lookupOperatorNameForPlmnList(getSubId(mtkRIL2.mInstanceId.intValue()), arrayList.get(i).base.operatorNumeric, false, i2);
                    arrayList.get(i).base.alphaLong = arrayList.get(i).base.alphaLong.concat(" " + arrayList.get(i).act);
                    arrayList.get(i).base.alphaShort = arrayList.get(i).base.alphaShort.concat(" " + arrayList.get(i).act);
                    if (this.mMtkRil.hidePLMN(arrayList.get(i).base.operatorNumeric)) {
                        this.mMtkRil.riljLog("remove this one " + arrayList.get(i).base.operatorNumeric);
                    } else {
                        arrayList2.add(new com.android.internal.telephony.OperatorInfo(arrayList.get(i).base.alphaLong, arrayList.get(i).base.alphaShort, arrayList.get(i).base.operatorNumeric, convertOpertatorInfoToString(arrayList.get(i).base.status)));
                    }
                }
                this.mMtkRil.getMtkRadioResponse();
                MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, arrayList2);
            }
            this.mMtkRil.getMtkRadioResponse().mRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, arrayList2);
        }
    }

    private void responsePhbEntries(RadioResponseInfo radioResponseInfo, ArrayList<PhbEntryStructure> arrayList) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            PhbEntry[] phbEntryArr = null;
            if (radioResponseInfo.error == 0) {
                phbEntryArr = new PhbEntry[arrayList.size()];
                for (int i = 0; i < arrayList.size(); i++) {
                    phbEntryArr[i] = new PhbEntry();
                    phbEntryArr[i].type = arrayList.get(i).type;
                    phbEntryArr[i].index = arrayList.get(i).index;
                    phbEntryArr[i].number = arrayList.get(i).number;
                    phbEntryArr[i].ton = arrayList.get(i).ton;
                    phbEntryArr[i].alphaId = arrayList.get(i).alphaId;
                }
                this.mMtkRil.getMtkRadioResponse();
                MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, phbEntryArr);
            }
            this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, phbEntryArr);
        }
    }

    private void responseReadPhbEntryExt(RadioResponseInfo radioResponseInfo, ArrayList<PhbEntryExt> arrayList) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            PBEntry[] pBEntryArr = null;
            if (radioResponseInfo.error == 0) {
                pBEntryArr = new PBEntry[arrayList.size()];
                for (int i = 0; i < arrayList.size(); i++) {
                    pBEntryArr[i] = new PBEntry();
                    pBEntryArr[i].setIndex1(arrayList.get(i).type);
                    pBEntryArr[i].setNumber(arrayList.get(i).number);
                    pBEntryArr[i].setType(arrayList.get(i).type);
                    pBEntryArr[i].setText(arrayList.get(i).text);
                    pBEntryArr[i].setHidden(arrayList.get(i).hidden);
                    pBEntryArr[i].setGroup(arrayList.get(i).group);
                    pBEntryArr[i].setAdnumber(arrayList.get(i).adnumber);
                    pBEntryArr[i].setAdtype(arrayList.get(i).adtype);
                    pBEntryArr[i].setSecondtext(arrayList.get(i).secondtext);
                    pBEntryArr[i].setEmail(arrayList.get(i).email);
                }
                this.mMtkRil.getMtkRadioResponse();
                MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, pBEntryArr);
            }
            this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, pBEntryArr);
        }
    }

    private void responseSmsMemStatus(RadioResponseInfo radioResponseInfo, SmsMemStatus smsMemStatus) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            MtkIccSmsStorageStatus mtkIccSmsStorageStatus = null;
            if (radioResponseInfo.error == 0) {
                MtkIccSmsStorageStatus mtkIccSmsStorageStatus2 = new MtkIccSmsStorageStatus(smsMemStatus.used, smsMemStatus.total);
                this.mMtkRil.riljLog("responseSmsMemStatus: from HIDL: " + mtkIccSmsStorageStatus2);
                mtkIccSmsStorageStatus = mtkIccSmsStorageStatus2;
                this.mMtkRil.getMtkRadioResponse();
                MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, mtkIccSmsStorageStatus);
            }
            this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, mtkIccSmsStorageStatus);
        }
    }

    private void responseSmsParams(RadioResponseInfo radioResponseInfo, SmsParams smsParams) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            MtkSmsParameters mtkSmsParameters = null;
            if (radioResponseInfo.error == 0) {
                MtkSmsParameters mtkSmsParameters2 = new MtkSmsParameters(smsParams.format, smsParams.vp, smsParams.pid, smsParams.dcs);
                this.mMtkRil.riljLog("responseSmsParams: from HIDL: " + mtkSmsParameters2);
                mtkSmsParameters = mtkSmsParameters2;
                this.mMtkRil.getMtkRadioResponse();
                MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, mtkSmsParameters);
            }
            this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, mtkSmsParameters);
        }
    }

    static void sendMessageResponse(Message message, Object obj) {
        if (message != null) {
            AsyncResult.forMessage(message, obj, (Throwable) null);
            message.sendToTarget();
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void abortFemtocellListResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase
    public void acknowledgeRequest(int i) {
        this.mMtkRil.processRequestAck(i);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void activateUiccCardRsp(RadioResponseInfo radioResponseInfo, int i) {
        this.mMtkRil.getMtkRadioResponse().responseInts(radioResponseInfo, new int[]{i});
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void cancelAvailableNetworksResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void cfgA2offsetResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void cfgB1offsetResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void dataConnectionAttachResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void dataConnectionDetachResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void deactivateNrScgCommunicationResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void deactivateUiccCardRsp(RadioResponseInfo radioResponseInfo, int i) {
        this.mMtkRil.getMtkRadioResponse().responseInts(radioResponseInfo, new int[]{i});
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void deleteUPBEntryResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void disableNRResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void eccPreferredRatResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void editUPBEntryResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void enableSCGfailureResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getATRResponse(RadioResponseInfo radioResponseInfo, String str) {
        this.mMtkRil.getMtkRadioResponse().responseString(radioResponseInfo, str);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getApcInfoResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            int[] iArr = new int[arrayList.size()];
            if (radioResponseInfo.error == 0) {
                for (int i = 0; i < arrayList.size(); i++) {
                    iArr[i] = arrayList.get(i).intValue();
                }
                this.mMtkRil.getMtkRadioResponse();
                MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, iArr);
            }
            this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, iArr);
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getAvailableNetworksWithActResponse(RadioResponseInfo radioResponseInfo, ArrayList<OperatorInfoWithAct> arrayList) {
        responseOperatorInfosWithAct(radioResponseInfo, arrayList);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getCallSubAddressResponse(RadioResponseInfo radioResponseInfo, int i) {
        this.mMtkRil.getMtkRadioResponse().responseInts(radioResponseInfo, new int[]{i});
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getColpResponse(RadioResponseInfo radioResponseInfo, int i, int i2) {
        this.mMtkRil.getMtkRadioResponse().responseInts(radioResponseInfo, new int[]{i, i2});
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getColrResponse(RadioResponseInfo radioResponseInfo, int i) {
        this.mMtkRil.getMtkRadioResponse().responseInts(radioResponseInfo, new int[]{i});
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getCurrentPOLListResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        ArrayList arrayList2 = null;
        if (rILRequestProcessResponse != null) {
            if (radioResponseInfo.error == 0) {
                if (arrayList.size() % 4 != 0) {
                    this.mMtkRil.riljLog("RIL_REQUEST_GET_POL_LIST: invalid response. Got " + arrayList.size() + " strings, expected multible of 4");
                } else {
                    arrayList2 = new ArrayList(arrayList.size() / 4);
                    for (int i = 0; i < arrayList.size(); i += 4) {
                        String strLookupOperatorName = null;
                        String str = null;
                        int i2 = arrayList.get(i) != null ? Integer.parseInt(arrayList.get(i)) : 0;
                        if (arrayList.get(i + 1) != null) {
                            int i3 = Integer.parseInt(arrayList.get(i + 1));
                            if (i3 == 0 || i3 == 1) {
                                strLookupOperatorName = arrayList.get(i + 2);
                            } else if (i3 == 2 && arrayList.get(i + 2) != null) {
                                str = arrayList.get(i + 2);
                                MtkRIL mtkRIL = this.mMtkRil;
                                strLookupOperatorName = mtkRIL.lookupOperatorName(getSubId(mtkRIL.mInstanceId.intValue()), str, true, -1);
                            }
                        }
                        int i4 = arrayList.get(i + 3) != null ? Integer.parseInt(arrayList.get(i + 3)) : 0;
                        if (str != null && !str.equals("?????")) {
                            arrayList2.add(new NetworkInfoWithAcT(strLookupOperatorName, str, i4, i2));
                        }
                    }
                    this.mMtkRil.getMtkRadioResponse();
                    MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, arrayList2);
                }
            }
            this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, arrayList2);
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getCurrentUiccCardProvisioningStatusRsp(RadioResponseInfo radioResponseInfo, int i) {
        this.mMtkRil.getMtkRadioResponse().responseInts(radioResponseInfo, new int[]{i});
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getDeactivateNrScgCommunicationResponse(RadioResponseInfo radioResponseInfo, int i, int i2) {
        this.mMtkRil.getMtkRadioResponse().responseInts(radioResponseInfo, new int[]{i, i2});
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getEccNumResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getFemtocellListResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) {
        responseFemtoCellInfos(radioResponseInfo, arrayList);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getGsmBroadcastActivationRsp(RadioResponseInfo radioResponseInfo, int i) {
        this.mMtkRil.getMtkRadioResponse().responseInts(radioResponseInfo, new int[]{i});
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getGsmBroadcastLangsResponse(RadioResponseInfo radioResponseInfo, String str) {
        this.mMtkRil.getMtkRadioResponse().responseString(radioResponseInfo, str);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getIccidResponse(RadioResponseInfo radioResponseInfo, String str) {
        this.mMtkRil.getMtkRadioResponse().responseString(radioResponseInfo, str);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getLteReleaseVersionResponse(RadioResponseInfo radioResponseInfo, int i) {
        this.mMtkRil.getMtkRadioResponse().responseInts(radioResponseInfo, new int[]{i});
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getPOLCapabilityResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
        this.mMtkRil.getMtkRadioResponse().responseIntArrayList(radioResponseInfo, arrayList);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getPhoneBookMemStorageResponse(RadioResponseInfo radioResponseInfo, PhbMemStorageResponse phbMemStorageResponse) {
        responseGetPhbMemStorage(radioResponseInfo, phbMemStorageResponse);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getPhoneBookStringsLengthResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
        this.mMtkRil.getMtkRadioResponse().responseIntArrayList(radioResponseInfo, arrayList);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getRoamingEnableResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
        this.mMtkRil.getMtkRadioResponse().responseIntArrayList(radioResponseInfo, arrayList);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getRxTestResultResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
        this.mMtkRil.getMtkRadioResponse().responseIntArrayList(radioResponseInfo, arrayList);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getSignalStrengthWithWcdmaEcioResponse(RadioResponseInfo radioResponseInfo, SignalStrengthWithWcdmaEcio signalStrengthWithWcdmaEcio) {
        responseGetSignalStrengthWithWcdmaEcio(radioResponseInfo, signalStrengthWithWcdmaEcio);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getSmsMemStatusResponse(RadioResponseInfo radioResponseInfo, SmsMemStatus smsMemStatus) {
        responseSmsMemStatus(radioResponseInfo, smsMemStatus);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getSmsParametersResponse(RadioResponseInfo radioResponseInfo, SmsParams smsParams) {
        responseSmsParams(radioResponseInfo, smsParams);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getSmsRuimMemoryStatusResponse(RadioResponseInfo radioResponseInfo, SmsMemStatus smsMemStatus) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            MtkIccSmsStorageStatus mtkIccSmsStorageStatus = null;
            if (radioResponseInfo.error == 0) {
                mtkIccSmsStorageStatus = new MtkIccSmsStorageStatus(smsMemStatus.used, smsMemStatus.total);
                this.mMtkRil.getMtkRadioResponse();
                MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, mtkIccSmsStorageStatus);
            }
            this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, mtkIccSmsStorageStatus);
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void getSuggestedPlmnListResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) {
        this.mMtkRil.getMtkRadioResponse();
        MtkRadioResponse.responseStringArrayList(this.mMtkRil, radioResponseInfo, arrayList);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void handleStkCallSetupRequestFromSimWithResCodeResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void hangupAllResponse(RadioResponseInfo radioResponseInfo) throws RemoteException {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void hangupWithReasonResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void modifyModemTypeResponse(RadioResponseInfo radioResponseInfo, int i) {
        this.mMtkRil.getMtkRadioResponse().responseInts(radioResponseInfo, new int[]{i});
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase
    public void notifyEPDGScreenStateResponse(RadioResponseInfo radioResponseInfo) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            this.mMtkRil.getMtkRadioResponse();
            MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, null);
        }
        this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, null);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void queryCallForwardInTimeSlotStatusResponse(RadioResponseInfo radioResponseInfo, ArrayList<CallForwardInfoEx> arrayList) {
        responseCallForwardInfoEx(radioResponseInfo, arrayList);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void queryFemtoCellSystemSelectionModeResponse(RadioResponseInfo radioResponseInfo, int i) {
        this.mMtkRil.getMtkRadioResponse().responseInts(radioResponseInfo, new int[]{i});
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void queryNetworkLockResponse(RadioResponseInfo radioResponseInfo, int i, int i2, int i3, int i4, int i5, int i6, int i7) {
        this.mMtkRil.getMtkRadioResponse().responseInts(radioResponseInfo, new int[]{i, i2, i3, i4, i5, i6, i7});
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void queryPhbStorageInfoResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
        this.mMtkRil.getMtkRadioResponse().responseIntArrayList(radioResponseInfo, arrayList);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void queryUPBAvailableResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
        this.mMtkRil.getMtkRadioResponse().responseIntArrayList(radioResponseInfo, arrayList);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void queryUPBCapabilityResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
        this.mMtkRil.getMtkRadioResponse().responseIntArrayList(radioResponseInfo, arrayList);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void readPhbEntryResponse(RadioResponseInfo radioResponseInfo, ArrayList<PhbEntryStructure> arrayList) {
        responsePhbEntries(radioResponseInfo, arrayList);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void readPhoneBookEntryExtResponse(RadioResponseInfo radioResponseInfo, ArrayList<PhbEntryExt> arrayList) {
        responseReadPhbEntryExt(radioResponseInfo, arrayList);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void readUPBAasListResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) {
        this.mMtkRil.getMtkRadioResponse();
        MtkRadioResponse.responseStringArrayList(this.mMtkRil.getMtkRadioResponse().mRil, radioResponseInfo, arrayList);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void readUPBAnrEntryResponse(RadioResponseInfo radioResponseInfo, ArrayList<PhbEntryStructure> arrayList) {
        responsePhbEntries(radioResponseInfo, arrayList);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void readUPBEmailEntryResponse(RadioResponseInfo radioResponseInfo, String str) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            if (radioResponseInfo.error == 0) {
                this.mMtkRil.getMtkRadioResponse();
                MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, str);
            }
            this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, "xxx@email.com");
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void readUPBGasListResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) {
        this.mMtkRil.getMtkRadioResponse();
        MtkRadioResponse.responseStringArrayList(this.mMtkRil.getMtkRadioResponse().mRil, radioResponseInfo, arrayList);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void readUPBGrpEntryResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
        this.mMtkRil.getMtkRadioResponse().responseIntArrayList(radioResponseInfo, arrayList);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void readUPBSneEntryResponse(RadioResponseInfo radioResponseInfo, String str) {
        this.mMtkRil.getMtkRadioResponse().responseString(radioResponseInfo, str);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void registerCellQltyReportResponse(RadioResponseInfo radioResponseInfo) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            this.mMtkRil.getMtkRadioResponse();
            MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, null);
        }
        this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, null);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void removeCbMsgResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void resetAllConnectionsResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void resetMdDataRetryCountResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void restartRILDResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void runGbaAuthenticationResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) {
        this.mMtkRil.getMtkRadioResponse();
        MtkRadioResponse.responseStringArrayList(this.mMtkRil.getMtkRadioResponse().mRil, radioResponseInfo, arrayList);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void selectFemtocellResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void sendCnapResponse(RadioResponseInfo radioResponseInfo, int i, int i2) {
        this.mMtkRil.getMtkRadioResponse().responseInts(radioResponseInfo, new int[]{i, i2});
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void sendEmbmsAtCommandResponse(RadioResponseInfo radioResponseInfo, String str) {
        this.mMtkRil.getMtkRadioResponse().responseString(radioResponseInfo, str);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase
    public void sendOemRilRequestRawResponse(RadioResponseInfo radioResponseInfo, ArrayList<Byte> arrayList) {
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void sendRequestRawResponse(RadioResponseInfo radioResponseInfo, ArrayList<Byte> arrayList) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            byte[] bArrArrayListToPrimitiveArray = null;
            if (radioResponseInfo.error == 0) {
                bArrArrayListToPrimitiveArray = RIL.arrayListToPrimitiveArray(arrayList);
                this.mMtkRil.getMtkRadioResponse();
                MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, bArrArrayListToPrimitiveArray);
            }
            this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, bArrArrayListToPrimitiveArray);
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void sendRequestStringsResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) {
        this.mMtkRil.getMtkRadioResponse();
        MtkRadioResponse.responseStringArrayList(this.mMtkRil, radioResponseInfo, arrayList);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void sendRsuRequestResponse(RadioResponseInfo radioResponseInfo, RsuResponseInfo rsuResponseInfo) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse == null) {
            this.mMtkRil.riljLog("sendRsuRequestResponse, rr is null");
            return;
        }
        if (radioResponseInfo.error == 0) {
            AsyncResult.forMessage(rILRequestProcessResponse.mResult, rsuResponseInfo, (Throwable) null);
            rILRequestProcessResponse.mResult.sendToTarget();
        }
        this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, rsuResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void sendSarIndicatorResponse(RadioResponseInfo radioResponseInfo) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse == null) {
            this.mMtkRil.riljLog("sendSarIndicatorResponse, rr is null");
            return;
        }
        if (radioResponseInfo.error == 0) {
            this.mMtkRil.getMtkRadioResponse();
            MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, null);
        }
        this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, null);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void sendWifiAssociatedResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void sendWifiEnabledResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void sendWifiIpAddressResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setApcModeResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setBgsrchDeltaSleepTimerResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setCallForwardInTimeSlotResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setCallIndicationResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setCallSubAddressResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setCallValidTimerResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setClipResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setColpResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setColrResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setEccModeResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setEccNumResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase
    public void setEmergencyAddressIdResponse(RadioResponseInfo radioResponseInfo) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            this.mMtkRil.getMtkRadioResponse();
            MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, null);
        }
        this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, null);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setEtwsResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setFdModeResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setFemtoCellSystemSelectionModeResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setGsmBroadcastLangsResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setGwsdModeResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setIgnoreSameNumberIntervalResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setKeepAliveByIpDataResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setKeepAliveByPDCPCtrlPDUResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase
    public void setLocationInfoResponse(RadioResponseInfo radioResponseInfo) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            this.mMtkRil.getMtkRadioResponse();
            MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, null);
        }
        this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, null);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setLteReleaseVersionResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setModemPowerResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase
    public void setNattKeepAliveStatusResponse(RadioResponseInfo radioResponseInfo) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            this.mMtkRil.getMtkRadioResponse();
            MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, null);
        }
        this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, null);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setNetworkLockResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setNetworkSelectionModeManualWithActResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().setNetworkSelectionModeManualResponse(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setPOLEntryResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setPhoneBookMemStorageResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setPhonebookReadyResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setRemoveRestrictEutranModeResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setResumeRegistrationResponse(RadioResponseInfo radioResponseInfo) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            this.mMtkRil.getMtkRadioResponse();
            MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, null);
        }
        this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, null);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setRoamingEnableResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setRxTestConfigResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
        this.mMtkRil.getMtkRadioResponse().responseIntArrayList(radioResponseInfo, arrayList);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setSearchRatResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setSearchStoredFreqInfoResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setServiceStateToModemResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setSimPowerResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setSmsParametersResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setSuppServPropertyResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setTrmResponse(RadioResponseInfo radioResponseInfo) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            if (radioResponseInfo.error == 0) {
                this.mMtkRil.getMtkRadioResponse();
                MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, null);
            }
            this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, null);
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setTxPowerResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    public void setTxPowerStatusResponse(RadioResponseInfo radioResponseInfo, ArrayList<Byte> arrayList) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse == null) {
            this.mMtkRil.riljLog("setTxPowerStatusResponse, rr is null");
            return;
        }
        if (radioResponseInfo.error == 0) {
            this.mMtkRil.getMtkRadioResponse();
            MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, null);
        }
        this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, null);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setVendorSettingResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void setVoicePreferStatusResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase
    public void setWifiAssociatedResponse(RadioResponseInfo radioResponseInfo) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            this.mMtkRil.getMtkRadioResponse();
            MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, null);
        }
        this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, null);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase
    public void setWifiEnabledResponse(RadioResponseInfo radioResponseInfo) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            this.mMtkRil.getMtkRadioResponse();
            MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, null);
        }
        this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, null);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase
    public void setWifiIpAddressResponse(RadioResponseInfo radioResponseInfo) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            this.mMtkRil.getMtkRadioResponse();
            MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, null);
        }
        this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, null);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase
    public void setWifiPingResultResponse(RadioResponseInfo radioResponseInfo) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            this.mMtkRil.getMtkRadioResponse();
            MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, null);
        }
        this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, null);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase
    public void setWifiSignalLevelResponse(RadioResponseInfo radioResponseInfo) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            this.mMtkRil.getMtkRadioResponse();
            MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, null);
        }
        this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, null);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void supplyDepersonalizationResponse(RadioResponseInfo radioResponseInfo, int i) {
        this.mMtkRil.getMtkRadioResponse().supplyNetworkDepersonalizationResponse(radioResponseInfo, i);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void supplyDeviceNetworkDepersonalizationResponse(RadioResponseInfo radioResponseInfo, int i) {
        this.mMtkRil.getMtkRadioResponse().responseInts(radioResponseInfo, new int[]{i});
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void syncDataSettingsToMdResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void triggerModeSwitchByEccResponse(RadioResponseInfo radioResponseInfo) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            if (radioResponseInfo.error == 0) {
                this.mMtkRil.getMtkRadioResponse();
                MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, null);
            }
            this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, null);
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void vsimNotificationResponse(RadioResponseInfo radioResponseInfo, VsimEvent vsimEvent) {
        RILRequest rILRequestProcessResponse = this.mMtkRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            Integer numValueOf = null;
            if (radioResponseInfo.error == 0) {
                numValueOf = Integer.valueOf(vsimEvent.transactionId);
                this.mMtkRil.getMtkRadioResponse();
                MtkRadioResponse.sendMessageResponse(rILRequestProcessResponse.mResult, numValueOf);
            }
            this.mMtkRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, numValueOf);
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void vsimOperationResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void writePhbEntryResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void writePhoneBookEntryExtResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExResponse
    public void writeUPBGrpEntryResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.getMtkRadioResponse().responseVoid(radioResponseInfo);
    }
}
