.class public Lcom/mediatek/engineermode/ModemCategory;
.super Ljava/lang/Object;
.source "ModemCategory.java"


# static fields
.field public static final FK_CDMA_SLOT:Ljava/lang/String; = "persist.vendor.radio.cdma_slot"

.field public static final FK_NR_SLOT:Ljava/lang/String; = "persist.vendor.radio.nrslot"

.field public static final FK_SIM_SWITCH:Ljava/lang/String; = "persist.vendor.radio.simswitch"

.field public static final MODEM_FDD:I = 0x1

.field public static final MODEM_NO3G:I = 0x3

.field public static final MODEM_TD:I = 0x2

.field private static final ModemType:[Ljava/lang/String;

.field private static final PROPERTY_RIL_CT3G:[Ljava/lang/String;

.field private static final PROPERTY_RIL_FULL_UICC_TYPE:[Ljava/lang/String;

.field private static final TAG:Ljava/lang/String; = "ModemCategory"


# direct methods
.method static constructor <clinit>()V
    .locals 4

    .line 60
    const-string v0, "none"

    const-string v1, "FDD"

    const-string v2, "TDD"

    const-string v3, "No3G"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/ModemCategory;->ModemType:[Ljava/lang/String;

    .line 65
    const-string v0, "vendor.gsm.ril.ct3g"

    const-string v1, "vendor.gsm.ril.ct3g.2"

    const-string v2, "vendor.gsm.ril.ct3g.3"

    const-string v3, "vendor.gsm.ril.ct3g.4"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/ModemCategory;->PROPERTY_RIL_CT3G:[Ljava/lang/String;

    .line 74
    const-string v0, "vendor.gsm.ril.fulluicctype"

    const-string v1, "vendor.gsm.ril.fulluicctype.2"

    const-string v2, "vendor.gsm.ril.fulluicctype.3"

    const-string v3, "vendor.gsm.ril.fulluicctype.4"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/ModemCategory;->PROPERTY_RIL_FULL_UICC_TYPE:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 52
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static CheckViceSimCdmaCapability(I)Z
    .locals 3
    .param p0, "simtype"    # I

    .line 166
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaPhoneId()I

    move-result v0

    .line 167
    .local v0, "cdmaid":I
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "sCdmaSlotId = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ModemCategory"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 168
    if-ne p0, v0, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method public static CheckViceSimNRCapability(I)Z
    .locals 7
    .param p0, "simtype"    # I

    .line 309
    const-string v0, "persist.vendor.radio.nrslot"

    const-string v1, "0"

    invoke-static {v0, v1}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 310
    .local v0, "sNRSlotId":Ljava/lang/String;
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->isNrSupported()Z

    move-result v1

    const/4 v2, 0x0

    const-string v3, "ModemCategory"

    if-nez v1, :cond_0

    .line 311
    const-string v1, "project not support NR"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 312
    return v2

    .line 314
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "sNRSlotId = "

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 315
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    const/4 v4, 0x1

    sub-int/2addr v1, v4

    .line 316
    .local v1, "NRSlotId":I
    const/4 v5, -0x1

    if-ne v1, v5, :cond_1

    .line 317
    const-string v2, "both sim support NR"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 318
    return v4

    .line 320
    :cond_1
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "sim "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, " support NR"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v3, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 321
    if-ne p0, v1, :cond_2

    move v2, v4

    :cond_2
    return v2
.end method

.method public static CheckViceSimWCapability(I)Z
    .locals 6
    .param p0, "simtype"    # I

    .line 183
    const-string v0, "ModemCategory"

    invoke-static {}, Landroid/telephony/TelephonyManager;->getDefault()Landroid/telephony/TelephonyManager;

    move-result-object v1

    .line 184
    .local v1, "telephonyManager":Landroid/telephony/TelephonyManager;
    nop

    .line 185
    const-string v2, "phone"

    invoke-static {v2}, Landroid/os/ServiceManager;->getService(Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object v2

    invoke-static {v2}, Lcom/android/internal/telephony/ITelephony$Stub;->asInterface(Landroid/os/IBinder;)Lcom/android/internal/telephony/ITelephony;

    move-result-object v2

    .line 186
    .local v2, "iTelephony":Lcom/android/internal/telephony/ITelephony;
    const/4 v3, 0x0

    if-eqz v2, :cond_2

    if-eqz v1, :cond_2

    .line 187
    invoke-virtual {v1}, Landroid/telephony/TelephonyManager;->getSimCount()I

    move-result v4

    const/4 v5, 0x1

    if-gt v4, v5, :cond_0

    goto :goto_1

    .line 191
    :cond_0
    :try_start_0
    const-string v4, "engineermode"

    invoke-interface {v2, p0, v4}, Lcom/android/internal/telephony/ITelephony;->getRadioAccessFamily(ILjava/lang/String;)I

    move-result v4

    and-int/lit8 v4, v4, 0x4

    if-lez v4, :cond_1

    .line 193
    const-string v4, "SIM has W capability "

    invoke-static {v0, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 194
    return v5

    .line 198
    :cond_1
    goto :goto_0

    .line 196
    :catch_0
    move-exception v4

    .line 197
    .local v4, "e":Landroid/os/RemoteException;
    invoke-virtual {v4}, Landroid/os/RemoteException;->getMessage()Ljava/lang/String;

    move-result-object v5

    invoke-static {v0, v5}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 199
    .end local v4    # "e":Landroid/os/RemoteException;
    :goto_0
    const-string v4, "SIM has no W capability "

    invoke-static {v0, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 200
    return v3

    .line 188
    :cond_2
    :goto_1
    return v3
.end method

.method public static checkViceSimCapability(II)Z
    .locals 6
    .param p0, "simType"    # I
    .param p1, "capability"    # I

    .line 204
    const-string v0, "ModemCategory"

    invoke-static {}, Landroid/telephony/TelephonyManager;->getDefault()Landroid/telephony/TelephonyManager;

    move-result-object v1

    .line 205
    .local v1, "telephonyManager":Landroid/telephony/TelephonyManager;
    nop

    .line 206
    const-string v2, "phone"

    invoke-static {v2}, Landroid/os/ServiceManager;->getService(Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object v2

    invoke-static {v2}, Lcom/android/internal/telephony/ITelephony$Stub;->asInterface(Landroid/os/IBinder;)Lcom/android/internal/telephony/ITelephony;

    move-result-object v2

    .line 207
    .local v2, "iTelephony":Lcom/android/internal/telephony/ITelephony;
    const/4 v3, 0x0

    if-eqz v2, :cond_2

    if-eqz v1, :cond_2

    .line 208
    invoke-virtual {v1}, Landroid/telephony/TelephonyManager;->getSimCount()I

    move-result v4

    const/4 v5, 0x1

    if-gt v4, v5, :cond_0

    goto :goto_1

    .line 212
    :cond_0
    :try_start_0
    const-string v4, "engineermode"

    invoke-interface {v2, p0, v4}, Lcom/android/internal/telephony/ITelephony;->getRadioAccessFamily(ILjava/lang/String;)I

    move-result v4

    and-int/2addr v4, p1

    if-lez v4, :cond_1

    .line 214
    const-string v4, "SIM has checked capability "

    invoke-static {v0, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 215
    return v5

    .line 219
    :cond_1
    goto :goto_0

    .line 217
    :catch_0
    move-exception v4

    .line 218
    .local v4, "e":Landroid/os/RemoteException;
    invoke-virtual {v4}, Landroid/os/RemoteException;->getMessage()Ljava/lang/String;

    move-result-object v5

    invoke-static {v0, v5}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 220
    .end local v4    # "e":Landroid/os/RemoteException;
    :goto_0
    const-string v4, "SIM has no checked capability "

    invoke-static {v0, v4}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 221
    return v3

    .line 209
    :cond_2
    :goto_1
    return v3
.end method

.method public static getCapabilitySim()I
    .locals 5

    .line 116
    const/4 v0, 0x0

    .line 117
    .local v0, "phoneid":I
    const-string v1, "persist.vendor.radio.simswitch"

    const-string v2, "1"

    invoke-static {v1, v2}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 118
    .local v1, "mPhoneId":Ljava/lang/String;
    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    const-string v3, "ModemCategory"

    if-eqz v2, :cond_0

    .line 119
    const/4 v0, 0x0

    goto :goto_0

    .line 120
    :cond_0
    const-string v2, "2"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 121
    const/4 v0, 0x1

    goto :goto_0

    .line 122
    :cond_1
    const-string v2, "3"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 123
    const/4 v0, 0x2

    .line 128
    :goto_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "main card phoneid = "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 129
    return v0

    .line 125
    :cond_2
    const-string v2, "read phone id error"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 126
    const/4 v2, -0x1

    return v2
.end method

.method public static getCdmaCmdArr([Ljava/lang/String;)[Ljava/lang/String;
    .locals 3
    .param p0, "cmdArray"    # [Ljava/lang/String;

    .line 172
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v0

    if-nez v0, :cond_0

    .line 173
    return-object p0

    .line 175
    :cond_0
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    .line 176
    .local v0, "cmdArrayNew":[Ljava/lang/String;
    const/4 v1, 0x0

    aget-object v2, p0, v1

    aput-object v2, v0, v1

    .line 177
    const/4 v1, 0x1

    aget-object v2, p0, v1

    aput-object v2, v0, v1

    .line 178
    return-object v0
.end method

.method public static getCdmaPhone()Lcom/android/internal/telephony/Phone;
    .locals 5

    .line 133
    const-string v0, "ModemCategory"

    const/4 v1, 0x0

    .line 135
    .local v1, "mPhone":Lcom/android/internal/telephony/Phone;
    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v2

    if-nez v2, :cond_0

    .line 136
    const-string v2, "persist.vendor.radio.cdma_slot"

    const-string v3, "1"

    invoke-static {v2, v3}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 137
    .local v2, "sCdmaSlotId":Ljava/lang/String;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "sCdmaSlotId = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 138
    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    .line 139
    .local v3, "iCdmaSlotId":I
    add-int/lit8 v4, v3, -0x1

    invoke-static {v4}, Lcom/android/internal/telephony/PhoneFactory;->getPhone(I)Lcom/android/internal/telephony/Phone;

    move-result-object v0

    .line 140
    .end local v1    # "mPhone":Lcom/android/internal/telephony/Phone;
    .end local v2    # "sCdmaSlotId":Ljava/lang/String;
    .end local v3    # "iCdmaSlotId":I
    .local v0, "mPhone":Lcom/android/internal/telephony/Phone;
    move-object v1, v0

    goto :goto_0

    .line 141
    .end local v0    # "mPhone":Lcom/android/internal/telephony/Phone;
    .restart local v1    # "mPhone":Lcom/android/internal/telephony/Phone;
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCapabilitySim()I

    move-result v2

    invoke-static {v2}, Lcom/android/internal/telephony/PhoneFactory;->getPhone(I)Lcom/android/internal/telephony/Phone;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v1, v0

    .line 145
    :goto_0
    goto :goto_1

    .line 143
    :catch_0
    move-exception v2

    .line 144
    .local v2, "e":Ljava/lang/Exception;
    invoke-virtual {v2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 146
    .end local v2    # "e":Ljava/lang/Exception;
    :goto_1
    return-object v1
.end method

.method public static getCdmaPhoneId()I
    .locals 5

    .line 150
    const-string v0, "ModemCategory"

    const/4 v1, 0x0

    .line 152
    .local v1, "iCdmaSlotId":I
    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v2

    if-nez v2, :cond_0

    .line 153
    const-string v2, "persist.vendor.radio.cdma_slot"

    const-string v3, "1"

    invoke-static {v2, v3}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 154
    .local v2, "sCdmaSlotId":Ljava/lang/String;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "sCdmaSlotId = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 155
    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    add-int/lit8 v0, v0, -0x1

    .line 156
    .end local v1    # "iCdmaSlotId":I
    .end local v2    # "sCdmaSlotId":Ljava/lang/String;
    .local v0, "iCdmaSlotId":I
    move v1, v0

    goto :goto_0

    .line 157
    .end local v0    # "iCdmaSlotId":I
    .restart local v1    # "iCdmaSlotId":I
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCapabilitySim()I

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move v1, v0

    .line 161
    :goto_0
    goto :goto_1

    .line 159
    :catch_0
    move-exception v2

    .line 160
    .local v2, "e":Ljava/lang/Exception;
    invoke-virtual {v2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 162
    .end local v2    # "e":Ljava/lang/Exception;
    :goto_1
    return v1
.end method

.method public static getModemType()I
    .locals 4

    .line 82
    const/4 v0, 0x3

    .line 83
    .local v0, "mode":I
    invoke-static {}, Lcom/mediatek/engineermode/WorldModeUtil;->get3GDivisionDuplexMode()I

    move-result v1

    .line 84
    .local v1, "mask":I
    const/4 v2, 0x1

    if-eq v2, v1, :cond_0

    const/4 v2, 0x2

    if-ne v2, v1, :cond_1

    .line 85
    :cond_0
    move v0, v1

    .line 87
    :cond_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mode = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "("

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/mediatek/engineermode/ModemCategory;->ModemType:[Ljava/lang/String;

    aget-object v3, v3, v0

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ")"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "ModemCategory"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 88
    return v0
.end method

.method public static getSubIdBySlot(I)I
    .locals 5
    .param p0, "slot"    # I

    .line 274
    invoke-static {p0}, Landroid/telephony/SubscriptionManager;->getSubId(I)[I

    move-result-object v0

    .line 275
    .local v0, "subId":[I
    const-string v1, "ModemCategory"

    if-eqz v0, :cond_0

    .line 276
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    array-length v3, v0

    if-ge v2, v3, :cond_0

    .line 277
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "subId["

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "]: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget v4, v0, v2

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 276
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 280
    .end local v2    # "i":I
    :cond_0
    if-eqz v0, :cond_2

    array-length v2, v0

    if-nez v2, :cond_1

    goto :goto_1

    .line 284
    :cond_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "subId = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v3, 0x0

    aget v4, v0, v3

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 285
    aget v1, v0, v3

    return v1

    .line 281
    :cond_2
    :goto_1
    const-string v2, "the subid is empty"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 282
    const/4 v1, -0x1

    return v1
.end method

.method public static getSupportCardType(I)[Ljava/lang/String;
    .locals 6
    .param p0, "slotId"    # I

    .line 255
    const/4 v0, 0x0

    .line 256
    .local v0, "property":Ljava/lang/String;
    const/4 v1, 0x0

    .line 257
    .local v1, "prop":Ljava/lang/String;
    const/4 v2, 0x0

    .line 259
    .local v2, "values":[Ljava/lang/String;
    const-string v3, "ModemCategory"

    if-ltz p0, :cond_3

    sget-object v4, Lcom/mediatek/engineermode/ModemCategory;->PROPERTY_RIL_FULL_UICC_TYPE:[Ljava/lang/String;

    array-length v5, v4

    if-lt p0, v5, :cond_0

    goto :goto_1

    .line 263
    :cond_0
    aget-object v4, v4, p0

    const-string v5, ""

    invoke-static {v4, v5}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 264
    invoke-virtual {v1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_1

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v4

    if-lez v4, :cond_1

    .line 265
    const-string v4, ","

    invoke-virtual {v1, v4}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v2

    .line 267
    :cond_1
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "getSupportCardType slotId "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, ", prop value= "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ", size= "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 268
    if-eqz v2, :cond_2

    array-length v5, v2

    goto :goto_0

    :cond_2
    const/4 v5, 0x0

    :goto_0
    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 267
    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 269
    return-object v2

    .line 260
    :cond_3
    :goto_1
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "getSupportCardType: invalid slotId "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 261
    const/4 v3, 0x0

    return-object v3
.end method

.method public static isCapabilitySim(I)Z
    .locals 4
    .param p0, "mSimType"    # I

    .line 225
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCapabilitySim()I

    move-result v0

    .line 226
    .local v0, "mainCard":I
    if-ne p0, v0, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    .line 227
    .local v1, "isCapability":Z
    :goto_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "The card: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " is main card = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "ModemCategory"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 228
    return v1
.end method

.method public static isCdma()Z
    .locals 1

    .line 92
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->isC2kSupported()Z

    move-result v0

    return v0
.end method

.method public static isCt3gDualMode(I)Z
    .locals 4
    .param p0, "slotId"    # I

    .line 238
    const-string v0, "ModemCategory"

    if-ltz p0, :cond_1

    sget-object v1, Lcom/mediatek/engineermode/ModemCategory;->PROPERTY_RIL_CT3G:[Ljava/lang/String;

    array-length v2, v1

    if-lt p0, v2, :cond_0

    goto :goto_0

    .line 242
    :cond_0
    aget-object v1, v1, p0

    const-string v2, ""

    invoke-static {v1, v2}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 243
    .local v1, "result":Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "isCt3gDualMode:  "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 244
    const-string v0, "1"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0

    .line 239
    .end local v1    # "result":Ljava/lang/String;
    :cond_1
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "isCt3gDualMode: invalid slotId "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 240
    const/4 v0, 0x0

    return v0
.end method

.method public static isGsmSupport()Z
    .locals 1

    .line 104
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->isGsmSupported()Z

    move-result v0

    return v0
.end method

.method public static isLteSupport()Z
    .locals 1

    .line 96
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->isLteFddSupported()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->isLteTddSupported()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    return v0
.end method

.method public static isNrSupport()Z
    .locals 1

    .line 100
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->isNrSupported()Z

    move-result v0

    return v0
.end method

.method public static isSimReady(I)Z
    .locals 4
    .param p0, "slotId"    # I

    .line 291
    invoke-static {}, Lcom/mediatek/engineermode/EmApplication;->getContext()Landroid/content/Context;

    move-result-object v0

    .line 292
    invoke-static {}, Lcom/mediatek/engineermode/EmApplication;->getContext()Landroid/content/Context;

    const-string v1, "phone"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/telephony/TelephonyManager;

    .line 294
    .local v0, "telephonyManager":Landroid/telephony/TelephonyManager;
    if-gez p0, :cond_0

    .line 295
    invoke-virtual {v0}, Landroid/telephony/TelephonyManager;->getSimState()I

    move-result v1

    .local v1, "status":I
    goto :goto_0

    .line 297
    .end local v1    # "status":I
    :cond_0
    invoke-virtual {v0, p0}, Landroid/telephony/TelephonyManager;->getSimState(I)I

    move-result v1

    .line 299
    .restart local v1    # "status":I
    :goto_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "slotId = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ",simStatus = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "ModemCategory"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 300
    const/4 v2, 0x1

    if-eq v1, v2, :cond_2

    if-nez v1, :cond_1

    goto :goto_1

    .line 303
    :cond_1
    return v2

    .line 302
    :cond_2
    :goto_1
    const/4 v2, 0x0

    return v2
.end method

.method public static isTdscdmaSupport()Z
    .locals 1

    .line 112
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->isTdscdmaSupported()Z

    move-result v0

    return v0
.end method

.method public static isWcdmaSupport()Z
    .locals 1

    .line 108
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->isWcdmaSupported()Z

    move-result v0

    return v0
.end method
