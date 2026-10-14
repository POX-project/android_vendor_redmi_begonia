.class public Lcom/mediatek/engineermode/ims/ImsActivity;
.super Landroid/app/Activity;
.source "ImsActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Landroid/widget/AdapterView$OnItemClickListener;


# static fields
.field private static final DISABLE_MODE_ADD_RULE_DEACTIVATED_TAG:I = 0x2

.field private static final DISABLE_MODE_DELETE_RULE:I = 0x1

.field private static final DISABLE_VOLTE_HD_CALL:Ljava/lang/String; = "Disable VoLTE HD call"

.field private static final ENABLE_VOLTE_HD_CALL:Ljava/lang/String; = "Enable VoLTE HD call"

.field private static final IMS_MODE_DISABLED:I = 0x0

.field private static final IMS_MODE_ENABLED:I = 0x1

.field private static final IMS_OVER_SGS_PREFERE_92MODEM:Ljava/lang/String; = "ims_over_sgs_prefere_92modem"

.field private static final IMS_SIGNAL_DEFAULT:Ljava/lang/String; = "5"

.field private static final IMS_SIGNAL_VALUE:Ljava/lang/String; = "5"

.field private static final IMS_VOLTE_SETTING_SHAREPRE:Ljava/lang/String; = "telephony_ims_volte_settings"

.field private static final MODE_SS_CS:Ljava/lang/String; = "Prefer CS"

.field private static final MODE_SS_XCAP:Ljava/lang/String; = "Prefer XCAP"

.field private static final MSG_GET_VDP:I = 0x5

.field private static final MSG_IMS_OVER_SGS_DISABLE:I = 0x31

.field private static final MSG_IMS_OVER_SGS_ENABLE:I = 0x30

.field private static final MSG_QUERY_IMS_OVER_SGS_MODEM_90:I = 0x20

.field private static final MSG_QUERY_IMS_OVER_SGS_MODEM_91:I = 0x21

.field private static final MSG_QUERY_IMS_OVER_SGS_MODEM_92:I = 0x22

.field private static final MSG_QUERY_IMS_OVER_SGS_MODEM_93:I = 0x23

.field private static final MSG_SET_IMS_MODE:I = 0x6

.field private static final MSG_SET_IMS_OVER_SGS_MODEM_90:I = 0x10

.field private static final MSG_SET_IMS_OVER_SGS_MODEM_91:I = 0x11

.field private static final MSG_SET_IMS_OVER_SGS_MODEM_92:I = 0x12

.field private static final MSG_SET_IMS_OVER_SGS_MODEM_93:I = 0x13

.field private static final MSG_SET_IMS_SIGNAL:I = 0x1

.field private static final MSG_SET_OPERATOR_CODE:I = 0x0

.field private static final MSG_SET_PRECONDITION:I = 0x2

.field private static final MSG_SET_VDP:I = 0x4

.field private static final MSG_SET_VOLTE_SETTING:I = 0x3

.field private static final OPERATOR_CODE_DEFAULT:Ljava/lang/String; = "0"

.field private static final OPERATOR_CODE_VALUE:Ljava/lang/String; = "16386"

.field private static final PRECONDITION_DEFAULT:Ljava/lang/String; = "1"

.field private static final PRECONDITION_VALUE:Ljava/lang/String; = "0"

.field private static final PROP_DYNAMIC_SBP:Ljava/lang/String; = "persist.vendor.radio.mtk_dsbp_support"

.field private static final PROP_IMS_MODE:Ljava/lang/String; = "persist.vendor.radio.imstestmode"

.field private static final PROP_SMS_OVER_IMS_TEST_MODE:Ljava/lang/String; = "persist.vendor.radio.smsformat"

.field private static final PROP_SS_CFNUM:Ljava/lang/String; = "persist.vendor.radio.xcap.cfn"

.field private static final PROP_SS_DISABLE_METHOD:Ljava/lang/String; = "persist.vendor.radio.ss.xrdm"

.field private static final PROP_SS_MODE:Ljava/lang/String; = "persist.vendor.radio.ss.mode"

.field private static final SET_IMS_SIGNAL:Ljava/lang/String; = "ims_signaling_qci"

.field private static final SET_OPERATOR_CODE:Ljava/lang/String; = "operator_code"

.field private static final SET_PRECONDITION:Ljava/lang/String; = "UA_call_precondition"

.field private static final SMS_FORMAT_3GPP:Ljava/lang/String; = "3gpp"

.field private static final SMS_FORMAT_3GPP2:Ljava/lang/String; = "3gpp2"

.field private static final SMS_FORMAT_NONE:Ljava/lang/String; = "none"

.field private static final TAG:Ljava/lang/String; = "Ims/ImsActivity"

.field private static final TYPE_IP:Ljava/lang/String; = "IP"

.field private static final TYPE_IPV4V6:Ljava/lang/String; = "IPV4V6"

.field private static final TYPE_IPV6:Ljava/lang/String; = "IPV6"

.field private static final mImsOverSGSPrefereDisabled:[Ljava/lang/String;

.field private static final mImsOverSGSPrefereEnabled:[Ljava/lang/String;

.field private static mImsOverSGSPrefereModemType:I

.field private static final mImsOverSGSPrefereQuerry:[Ljava/lang/String;

.field private static final mImsOverSGSPrefereQuerryRes:[Ljava/lang/String;

.field private static mVolteSettingFlag:I


# instance fields
.field private final mATHandler:Landroid/os/Handler;

.field private mButtonSetDynamicSbp:Landroid/widget/Button;

.field private mButtonSetImsFormat:Landroid/widget/Button;

.field private mButtonSetImsMode:Landroid/widget/Button;

.field private mButtonSetImsOverSGSPrefere:Landroid/widget/Button;

.field private mButtonSetSSDisable:Landroid/widget/Button;

.field private mButtonSetSSMode:Landroid/widget/Button;

.field private mButtonSetVdp:Landroid/widget/Button;

.field private mButtonSetVolte:Landroid/widget/Button;

.field private mButtonSetVolteCall:Landroid/widget/Button;

.field private mButtonSetXcapCFNum:Landroid/widget/Button;

.field private mCategoryList:Landroid/widget/ListView;

.field private mImsMultStatus:Landroid/widget/TextView;

.field private mImsStatus:Landroid/widget/TextView;

.field private mRadioDynamicSbpDisabled:Landroid/widget/RadioButton;

.field private mRadioDynamicSbpEnabled:Landroid/widget/RadioButton;

.field private mRadioImsFormat3gpp:Landroid/widget/RadioButton;

.field private mRadioImsFormat3gpp2:Landroid/widget/RadioButton;

.field private mRadioImsFormatNone:Landroid/widget/RadioButton;

.field private mRadioImsModeDisabled:Landroid/widget/RadioButton;

.field private mRadioImsModeEnabled:Landroid/widget/RadioButton;

.field private mRadioImsOverSGSPrefereDisabled:Landroid/widget/RadioButton;

.field private mRadioImsOverSGSPrefereEnabled:Landroid/widget/RadioButton;

.field private mRadioSSCs:Landroid/widget/RadioButton;

.field private mRadioSSDisableDel:Landroid/widget/RadioButton;

.field private mRadioSSDisableTag:Landroid/widget/RadioButton;

.field private mRadioSSXcap:Landroid/widget/RadioButton;

.field private mRadioSetVolteOff:Landroid/widget/RadioButton;

.field private mRadioSetVolteOn:Landroid/widget/RadioButton;

.field private final mSettingHandler:Landroid/os/Handler;

.field private mSimType:I

.field private mSubId:I

.field private mToast:Landroid/widget/Toast;

.field private mVdp:Landroid/widget/EditText;

.field private mXcapCFNum:Landroid/widget/EditText;


# direct methods
.method static constructor <clinit>()V
    .locals 4

    .line 136
    const-string v0, "AT+ESBP=1,88,1"

    const-string v1, "AT+ESBP=5,\"SBP_SDM_PREFER_SMS_OVER_SGS_TO_IMS\",1"

    const-string v2, "AT+EGCMD=6,1,\"SDM_ADS_PREFER_SMS_OVER_SGS_TO_IMS\""

    const-string v3, "AT+ECFGSET=\"sdm_profile_prefer_sms_over_sgs_to_ims\",\"1\""

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsOverSGSPrefereEnabled:[Ljava/lang/String;

    .line 142
    const-string v0, "AT+ESBP=1,88,0"

    const-string v1, "AT+ESBP=5,\"SBP_SDM_PREFER_SMS_OVER_SGS_TO_IMS\",0"

    const-string v2, "AT+EGCMD=6,2,\"SDM_ADS_PREFER_SMS_OVER_SGS_TO_IMS\""

    const-string v3, "AT+ECFGSET=\"sdm_profile_prefer_sms_over_sgs_to_ims\",\"0\""

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsOverSGSPrefereDisabled:[Ljava/lang/String;

    .line 148
    const-string v0, "AT+ESBP=3,88"

    const-string v1, "AT+ESBP=7,\"SBP_SDM_PREFER_SMS_OVER_SGS_TO_IMS\""

    const-string v2, ""

    const-string v3, "AT+ECFGGET=\"sdm_profile_prefer_sms_over_sgs_to_ims\""

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsOverSGSPrefereQuerry:[Ljava/lang/String;

    .line 154
    const-string v0, "+ESBP:"

    const-string v1, "+ECFGGET:"

    filled-new-array {v0, v0, v2, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsOverSGSPrefereQuerryRes:[Ljava/lang/String;

    .line 162
    const/4 v0, 0x0

    sput v0, Lcom/mediatek/engineermode/ims/ImsActivity;->mVolteSettingFlag:I

    .line 163
    sput v0, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsOverSGSPrefereModemType:I

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 80
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 199
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mToast:Landroid/widget/Toast;

    .line 201
    new-instance v0, Lcom/mediatek/engineermode/ims/ImsActivity$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/ims/ImsActivity$1;-><init>(Lcom/mediatek/engineermode/ims/ImsActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mSettingHandler:Landroid/os/Handler;

    .line 220
    new-instance v0, Lcom/mediatek/engineermode/ims/ImsActivity$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/ims/ImsActivity$2;-><init>(Lcom/mediatek/engineermode/ims/ImsActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mATHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/ims/ImsActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/ims/ImsActivity;

    .line 80
    invoke-direct {p0}, Lcom/mediatek/engineermode/ims/ImsActivity;->set4gLte()V

    return-void
.end method

.method static synthetic access$100()I
    .locals 1

    .line 80
    sget v0, Lcom/mediatek/engineermode/ims/ImsActivity;->mVolteSettingFlag:I

    return v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/ims/ImsActivity;Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/ims/ImsActivity;
    .param p1, "x1"    # Ljava/lang/String;

    .line 80
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/ims/ImsActivity;->showToast(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/ims/ImsActivity;)Landroid/widget/RadioButton;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/ims/ImsActivity;

    .line 80
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioImsOverSGSPrefereEnabled:Landroid/widget/RadioButton;

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/ims/ImsActivity;)Landroid/widget/RadioButton;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/ims/ImsActivity;

    .line 80
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioImsOverSGSPrefereDisabled:Landroid/widget/RadioButton;

    return-object v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/ims/ImsActivity;Ljava/lang/String;Ljava/lang/String;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/ims/ImsActivity;
    .param p1, "x1"    # Ljava/lang/String;
    .param p2, "x2"    # Ljava/lang/String;
    .param p3, "x3"    # I

    .line 80
    invoke-direct {p0, p1, p2, p3}, Lcom/mediatek/engineermode/ims/ImsActivity;->sendCommand(Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/ims/ImsActivity;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/ims/ImsActivity;

    .line 80
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mSettingHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/ims/ImsActivity;)Landroid/widget/EditText;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/ims/ImsActivity;

    .line 80
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mVdp:Landroid/widget/EditText;

    return-object v0
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/ims/ImsActivity;)Landroid/widget/RadioButton;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/ims/ImsActivity;

    .line 80
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioImsModeEnabled:Landroid/widget/RadioButton;

    return-object v0
.end method

.method private queryImsOverSGSPrefereStatus()V
    .locals 5

    .line 816
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is90Modem()Z

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x2

    const/4 v3, 0x1

    const-string v4, "Ims/ImsActivity"

    if-eqz v0, :cond_0

    .line 817
    const-string v0, "it is 90 modem"

    invoke-static {v4, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 818
    sput v1, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsOverSGSPrefereModemType:I

    goto :goto_0

    .line 819
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is91Modem()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 820
    const-string v0, "it is 91 modem"

    invoke-static {v4, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 821
    sput v3, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsOverSGSPrefereModemType:I

    goto :goto_0

    .line 822
    :cond_1
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is92Modem()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 823
    const-string v0, "it is 92 modem"

    invoke-static {v4, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 824
    sput v2, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsOverSGSPrefereModemType:I

    goto :goto_0

    .line 825
    :cond_2
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 826
    const-string v0, "it is 93 modem"

    invoke-static {v4, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 827
    const/4 v0, 0x3

    sput v0, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsOverSGSPrefereModemType:I

    goto :goto_0

    .line 829
    :cond_3
    const-string v0, "it is 90 before modem"

    invoke-static {v4, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 830
    sput v2, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsOverSGSPrefereModemType:I

    .line 833
    :goto_0
    sget v0, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsOverSGSPrefereModemType:I

    if-ne v0, v2, :cond_5

    .line 834
    invoke-direct {p0}, Lcom/mediatek/engineermode/ims/ImsActivity;->read92modemImsOverSGSPrefereSharedPreference()Z

    move-result v0

    if-ne v0, v3, :cond_4

    .line 835
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioImsOverSGSPrefereEnabled:Landroid/widget/RadioButton;

    invoke-virtual {v0, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_1

    .line 837
    :cond_4
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioImsOverSGSPrefereDisabled:Landroid/widget/RadioButton;

    invoke-virtual {v0, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_1

    .line 839
    :cond_5
    new-array v2, v2, [Ljava/lang/String;

    sget-object v4, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsOverSGSPrefereQuerry:[Ljava/lang/String;

    aget-object v4, v4, v0

    aput-object v4, v2, v1

    sget-object v1, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsOverSGSPrefereQuerryRes:[Ljava/lang/String;

    aget-object v1, v1, v0

    aput-object v1, v2, v3

    or-int/lit8 v0, v0, 0x20

    invoke-direct {p0, v2, v0}, Lcom/mediatek/engineermode/ims/ImsActivity;->sendAtCommand([Ljava/lang/String;I)V

    .line 843
    :goto_1
    return-void
.end method

.method private read92modemImsOverSGSPrefereSharedPreference()Z
    .locals 3

    .line 851
    nop

    .line 852
    const-string v0, "ims_over_sgs_prefere_92modem"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 854
    .local v0, "ImsOverSGSPrefereSh":Landroid/content/SharedPreferences;
    const v2, 0x7f0a03b7

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/ims/ImsActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v1

    .line 856
    .local v1, "ImsOverSGSPrefereShtChecked":Z
    return v1
.end method

.method private sendATCommand(Ljava/lang/String;Ljava/lang/String;I)V
    .locals 4
    .param p1, "cmd"    # Ljava/lang/String;
    .param p2, "value"    # Ljava/lang/String;
    .param p3, "msgtype"    # I

    .line 743
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "cmd = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Ims/ImsActivity"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 744
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mATHandler:Landroid/os/Handler;

    invoke-virtual {v0, p3}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 745
    .local v0, "msg":Landroid/os/Message;
    iget v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mSimType:I

    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/String;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    const/4 v3, 0x1

    aput-object p2, v2, v3

    invoke-static {v1, v2, v0}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 746
    return-void
.end method

.method private sendAtCommand([Ljava/lang/String;I)V
    .locals 2
    .param p1, "command"    # [Ljava/lang/String;
    .param p2, "msg"    # I

    .line 846
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sendAtCommand() "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v1, 0x0

    aget-object v1, p1, v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Ims/ImsActivity"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 847
    iget v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mSimType:I

    iget-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mATHandler:Landroid/os/Handler;

    invoke-virtual {v1, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v1

    invoke-static {v0, p1, v1}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 848
    return-void
.end method

.method private sendAtCommandRaw(Ljava/lang/String;I)V
    .locals 4
    .param p1, "str"    # Ljava/lang/String;
    .param p2, "message"    # I

    .line 749
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sendAtCommand() "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Ims/ImsActivity"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 751
    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    .line 752
    .local v0, "rawData":[B
    array-length v1, v0

    add-int/lit8 v1, v1, 0x1

    new-array v1, v1, [B

    .line 753
    .local v1, "cmdByte":[B
    array-length v2, v0

    const/4 v3, 0x0

    invoke-static {v0, v3, v1, v3, v2}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 754
    array-length v2, v1

    add-int/lit8 v2, v2, -0x1

    aput-byte v3, v1, v2

    .line 755
    iget v2, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mSimType:I

    iget-object v3, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mATHandler:Landroid/os/Handler;

    invoke-virtual {v3, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v3

    invoke-static {v2, v1, v3}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestRawEm(I[BLandroid/os/Message;)V

    .line 756
    return-void
.end method

.method private sendCommand(Ljava/lang/String;Ljava/lang/String;I)V
    .locals 5
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "value"    # Ljava/lang/String;
    .param p3, "msgtype"    # I

    .line 736
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mATHandler:Landroid/os/Handler;

    invoke-virtual {v0, p3}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 738
    .local v0, "msg":Landroid/os/Message;
    iget v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mSimType:I

    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "AT+ECFGSET=\""

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "\",\""

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "\""

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x0

    aput-object v3, v2, v4

    const/4 v3, 0x1

    const-string v4, ""

    aput-object v4, v2, v3

    invoke-static {v1, v2, v0}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 740
    return-void
.end method

.method private set4gLte()V
    .locals 5

    .line 758
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "set4gLte mVolteSettingFlag = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v1, Lcom/mediatek/engineermode/ims/ImsActivity;->mVolteSettingFlag:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Ims/ImsActivity"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 759
    const/4 v0, 0x0

    .line 760
    .local v0, "enabled":Z
    sget v2, Lcom/mediatek/engineermode/ims/ImsActivity;->mVolteSettingFlag:I

    const/4 v3, 0x1

    if-ne v2, v3, :cond_0

    .line 761
    const/4 v0, 0x1

    .line 763
    :cond_0
    iget v2, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mSimType:I

    invoke-static {p0, v2}, Lcom/android/ims/ImsManager;->getInstance(Landroid/content/Context;I)Lcom/android/ims/ImsManager;

    move-result-object v2

    .line 764
    .local v2, "imsMgr":Lcom/android/ims/ImsManager;
    if-eqz v2, :cond_1

    .line 765
    invoke-virtual {v2, v0}, Lcom/android/ims/ImsManager;->setEnhanced4gLteModeSetting(Z)V

    .line 766
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "set4gLte enabled = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 768
    :cond_1
    return-void
.end method

.method private setImsOverSGSPrefereMode()V
    .locals 7

    .line 780
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is90Modem()Z

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    const-string v3, "Ims/ImsActivity"

    const/4 v4, 0x2

    if-eqz v0, :cond_0

    .line 781
    const-string v0, "it is 90 modem"

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 782
    sput v2, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsOverSGSPrefereModemType:I

    goto :goto_0

    .line 783
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is91Modem()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 784
    const-string v0, "it is 91 modem"

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 785
    sput v1, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsOverSGSPrefereModemType:I

    goto :goto_0

    .line 786
    :cond_1
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is92Modem()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 787
    const-string v0, "it is 92 modem"

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 788
    sput v4, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsOverSGSPrefereModemType:I

    goto :goto_0

    .line 789
    :cond_2
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 790
    const-string v0, "it is 93 modem"

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 791
    const/4 v0, 0x3

    sput v0, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsOverSGSPrefereModemType:I

    goto :goto_0

    .line 793
    :cond_3
    const-string v0, "it is 90 before modem"

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 794
    sput v4, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsOverSGSPrefereModemType:I

    .line 797
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioImsOverSGSPrefereEnabled:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    const-string v3, ""

    if-eqz v0, :cond_4

    .line 798
    new-array v0, v4, [Ljava/lang/String;

    sget-object v5, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsOverSGSPrefereEnabled:[Ljava/lang/String;

    sget v6, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsOverSGSPrefereModemType:I

    aget-object v5, v5, v6

    aput-object v5, v0, v2

    aput-object v3, v0, v1

    or-int/lit8 v2, v6, 0x10

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/ims/ImsActivity;->sendAtCommand([Ljava/lang/String;I)V

    .line 801
    sget v0, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsOverSGSPrefereModemType:I

    if-ne v0, v4, :cond_6

    .line 802
    invoke-static {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->write92modemImsOverSGSPrefereSharedPreference(Landroid/content/Context;Z)V

    goto :goto_1

    .line 804
    :cond_4
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioImsOverSGSPrefereDisabled:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 805
    new-array v0, v4, [Ljava/lang/String;

    sget-object v5, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsOverSGSPrefereDisabled:[Ljava/lang/String;

    sget v6, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsOverSGSPrefereModemType:I

    aget-object v5, v5, v6

    aput-object v5, v0, v2

    aput-object v3, v0, v1

    or-int/lit8 v1, v6, 0x10

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->sendAtCommand([Ljava/lang/String;I)V

    .line 808
    sget v0, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsOverSGSPrefereModemType:I

    if-ne v0, v4, :cond_6

    .line 809
    invoke-static {p0, v2}, Lcom/mediatek/engineermode/ims/ImsActivity;->write92modemImsOverSGSPrefereSharedPreference(Landroid/content/Context;Z)V

    goto :goto_1

    .line 811
    :cond_5
    const-string v0, "please select the ebabled or disabled"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/ims/ImsActivity;->showToast(Ljava/lang/String;)V

    .line 812
    :cond_6
    :goto_1
    return-void
.end method

.method private setListViewItemsHeight(Landroid/widget/ListView;)V
    .locals 5
    .param p1, "listview"    # Landroid/widget/ListView;

    .line 450
    if-nez p1, :cond_0

    .line 451
    return-void

    .line 453
    :cond_0
    invoke-virtual {p1}, Landroid/widget/ListView;->getAdapter()Landroid/widget/ListAdapter;

    move-result-object v0

    .line 454
    .local v0, "adapter":Landroid/widget/ListAdapter;
    const/4 v1, 0x0

    .line 455
    .local v1, "totalHeight":I
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    invoke-interface {v0}, Landroid/widget/ListAdapter;->getCount()I

    move-result v3

    if-ge v2, v3, :cond_1

    .line 456
    const/4 v3, 0x0

    invoke-interface {v0, v2, v3, p1}, Landroid/widget/ListAdapter;->getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v3

    .line 457
    .local v3, "itemView":Landroid/view/View;
    const/4 v4, 0x0

    invoke-virtual {v3, v4, v4}, Landroid/view/View;->measure(II)V

    .line 458
    invoke-virtual {v3}, Landroid/view/View;->getMeasuredHeight()I

    move-result v4

    add-int/2addr v1, v4

    .line 455
    .end local v3    # "itemView":Landroid/view/View;
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 460
    .end local v2    # "i":I
    :cond_1
    invoke-interface {v0}, Landroid/widget/ListAdapter;->getCount()I

    move-result v2

    add-int/lit8 v2, v2, -0x1

    invoke-virtual {p1}, Landroid/widget/ListView;->getDividerHeight()I

    move-result v3

    mul-int/2addr v2, v3

    add-int/2addr v1, v2

    .line 461
    invoke-virtual {p1}, Landroid/widget/ListView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    .line 462
    .local v2, "params":Landroid/view/ViewGroup$LayoutParams;
    iput v1, v2, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 463
    invoke-virtual {p1, v2}, Landroid/widget/ListView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 464
    return-void
.end method

.method private showToast(Ljava/lang/String;)V
    .locals 1
    .param p1, "msg"    # Ljava/lang/String;

    .line 731
    const/4 v0, 0x0

    invoke-static {p0, p1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mToast:Landroid/widget/Toast;

    .line 732
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 733
    return-void
.end method

.method public static write92modemImsOverSGSPrefereSharedPreference(Landroid/content/Context;Z)V
    .locals 3
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "check"    # Z

    .line 364
    const-string v0, "ims_over_sgs_prefere_92modem"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 366
    .local v0, "ImsOverSGSPrefereSh":Landroid/content/SharedPreferences;
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    .line 367
    .local v1, "editor":Landroid/content/SharedPreferences$Editor;
    const v2, 0x7f0a03b7

    invoke-virtual {p0, v2}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2, p1}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    .line 368
    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 369
    return-void
.end method

.method private writeVolteSettingSharedPreference(Z)V
    .locals 3
    .param p1, "check"    # Z

    .line 772
    const-string v0, "telephony_ims_volte_settings"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 774
    .local v0, "volteSettingSh":Landroid/content/SharedPreferences;
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    .line 775
    .local v1, "editor":Landroid/content/SharedPreferences$Editor;
    const v2, 0x7f0a06c2

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/ims/ImsActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2, p1}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    .line 776
    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 777
    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 7
    .param p1, "v"    # Landroid/view/View;

    .line 587
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mButtonSetSSMode:Landroid/widget/Button;

    const-string v1, "Ims/ImsActivity"

    if-ne p1, v0, :cond_2

    .line 588
    const-string v0, ""

    .line 589
    .local v0, "ssmode":Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioSSXcap:Landroid/widget/RadioButton;

    invoke-virtual {v2}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 590
    const-string v0, "Prefer XCAP"

    goto :goto_0

    .line 591
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioSSCs:Landroid/widget/RadioButton;

    invoke-virtual {v2}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 592
    const-string v0, "Prefer CS"

    .line 597
    :goto_0
    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v2

    const-string v3, "persist.vendor.radio.ss.mode"

    invoke-interface {v2, v3, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z

    .line 599
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Set persist.vendor.radio.ss.mode = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 600
    const-string v2, "Set SS Mode done"

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/ims/ImsActivity;->showToast(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 605
    goto :goto_1

    .line 601
    :catch_0
    move-exception v2

    .line 602
    .local v2, "e":Ljava/lang/Exception;
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    .line 603
    const-string v3, "Set SS Mode failed ..."

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 604
    const-string v1, "Set SS Mode failed"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->showToast(Ljava/lang/String;)V

    .line 606
    .end local v0    # "ssmode":Ljava/lang/String;
    .end local v2    # "e":Ljava/lang/Exception;
    :goto_1
    goto/16 :goto_f

    .line 594
    .restart local v0    # "ssmode":Ljava/lang/String;
    :cond_1
    return-void

    .line 606
    .end local v0    # "ssmode":Ljava/lang/String;
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mButtonSetSSDisable:Landroid/widget/Button;

    const/4 v2, 0x1

    if-ne p1, v0, :cond_5

    .line 607
    const-string v0, ""

    .line 608
    .local v0, "ssdisableMethod":Ljava/lang/String;
    iget-object v3, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioSSDisableTag:Landroid/widget/RadioButton;

    invoke-virtual {v3}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v3

    if-eqz v3, :cond_3

    .line 609
    const/4 v2, 0x2

    invoke-static {v2}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v0

    goto :goto_2

    .line 610
    :cond_3
    iget-object v3, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioSSDisableDel:Landroid/widget/RadioButton;

    invoke-virtual {v3}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v3

    if-eqz v3, :cond_4

    .line 611
    invoke-static {v2}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v0

    .line 616
    :goto_2
    :try_start_1
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v2

    const-string v3, "persist.vendor.radio.ss.xrdm"

    invoke-interface {v2, v3, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z

    .line 618
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Set persist.vendor.radio.ss.xrdm = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 619
    const-string v2, "Set SS Disable done"

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/ims/ImsActivity;->showToast(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 624
    goto :goto_3

    .line 620
    :catch_1
    move-exception v2

    .line 621
    .restart local v2    # "e":Ljava/lang/Exception;
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    .line 622
    const-string v3, "Set SS Disable failed ..."

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 623
    const-string v1, "Set SS Disable failed"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->showToast(Ljava/lang/String;)V

    .line 625
    .end local v0    # "ssdisableMethod":Ljava/lang/String;
    .end local v2    # "e":Ljava/lang/Exception;
    :goto_3
    goto/16 :goto_f

    .line 613
    .restart local v0    # "ssdisableMethod":Ljava/lang/String;
    :cond_4
    return-void

    .line 625
    .end local v0    # "ssdisableMethod":Ljava/lang/String;
    :cond_5
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mButtonSetXcapCFNum:Landroid/widget/Button;

    if-ne p1, v0, :cond_6

    .line 627
    :try_start_2
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    const-string v2, "persist.vendor.radio.xcap.cfn"

    iget-object v3, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mXcapCFNum:Landroid/widget/EditText;

    .line 628
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    .line 627
    invoke-interface {v0, v2, v3}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z

    .line 630
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Set persist.vendor.radio.xcap.cfn = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mXcapCFNum:Landroid/widget/EditText;

    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 631
    const-string v0, "Set SS CF Number done"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/ims/ImsActivity;->showToast(Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    goto :goto_4

    .line 632
    :catch_2
    move-exception v0

    .line 633
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 634
    const-string v2, "Set SS CF Number failed ..."

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 635
    const-string v1, "Set SS CF Number failed"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->showToast(Ljava/lang/String;)V

    .line 636
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_4
    goto/16 :goto_f

    .line 637
    :cond_6
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mButtonSetVolte:Landroid/widget/Button;

    const/4 v3, 0x0

    const-string v4, "0"

    if-ne p1, v0, :cond_a

    .line 638
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioSetVolteOff:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_7

    .line 639
    sput v3, Lcom/mediatek/engineermode/ims/ImsActivity;->mVolteSettingFlag:I

    goto :goto_5

    .line 640
    :cond_7
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioSetVolteOn:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_9

    .line 641
    sput v2, Lcom/mediatek/engineermode/ims/ImsActivity;->mVolteSettingFlag:I

    .line 645
    :goto_5
    const-string v0, "Set VOLTE"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 646
    nop

    .line 647
    sget v0, Lcom/mediatek/engineermode/ims/ImsActivity;->mVolteSettingFlag:I

    if-ne v0, v2, :cond_8

    const-string v4, "16386"

    .line 646
    :cond_8
    const-string v0, "operator_code"

    invoke-direct {p0, v0, v4, v3}, Lcom/mediatek/engineermode/ims/ImsActivity;->sendCommand(Ljava/lang/String;Ljava/lang/String;I)V

    goto/16 :goto_f

    .line 643
    :cond_9
    return-void

    .line 649
    :cond_a
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mButtonSetDynamicSbp:Landroid/widget/Button;

    const-string v5, "set property failed ..."

    const-string v6, "1"

    if-ne p1, v0, :cond_d

    .line 650
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Set persist.vendor.radio.mtk_dsbp_support = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 651
    iget-object v2, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioDynamicSbpEnabled:Landroid/widget/RadioButton;

    invoke-virtual {v2}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v2

    if-eqz v2, :cond_b

    move-object v2, v6

    goto :goto_6

    :cond_b
    move-object v2, v4

    :goto_6
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 650
    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 653
    :try_start_3
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    .line 654
    iget-object v2, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioDynamicSbpEnabled:Landroid/widget/RadioButton;

    invoke-virtual {v2}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v2

    if-eqz v2, :cond_c

    move-object v4, v6

    :cond_c
    invoke-interface {v0, v4}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setDsbpSupport(Ljava/lang/String;)Z
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3

    .line 658
    goto :goto_7

    .line 655
    :catch_3
    move-exception v0

    .line 656
    .restart local v0    # "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 657
    invoke-static {v1, v5}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 659
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_7
    const-string v0, "Set Dynamic SBP done"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/ims/ImsActivity;->showToast(Ljava/lang/String;)V

    goto/16 :goto_f

    .line 660
    :cond_d
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mButtonSetImsMode:Landroid/widget/Button;

    if-ne p1, v0, :cond_11

    .line 662
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v0

    if-eqz v0, :cond_f

    .line 663
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioImsModeEnabled:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    const/4 v1, 0x6

    if-eqz v0, :cond_e

    .line 664
    const-string v0, "AT+EIMSTESTMODE=1"

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->sendAtCommandRaw(Ljava/lang/String;I)V

    goto/16 :goto_f

    .line 666
    :cond_e
    const-string v0, "AT+EIMSTESTMODE=0"

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->sendAtCommandRaw(Ljava/lang/String;I)V

    goto/16 :goto_f

    .line 670
    :cond_f
    :try_start_4
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    .line 671
    iget-object v2, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioImsModeEnabled:Landroid/widget/RadioButton;

    invoke-virtual {v2}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v2

    if-eqz v2, :cond_10

    move-object v4, v6

    :cond_10
    invoke-interface {v0, v4}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setImsTestMode(Ljava/lang/String;)Z
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_4

    .line 675
    goto :goto_8

    .line 672
    :catch_4
    move-exception v0

    .line 673
    .restart local v0    # "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 674
    invoke-static {v1, v5}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 676
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_8
    const-string v0, "Set test mode done"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/ims/ImsActivity;->showToast(Ljava/lang/String;)V

    goto/16 :goto_f

    .line 678
    :cond_11
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mButtonSetImsFormat:Landroid/widget/Button;

    if-ne p1, v0, :cond_15

    .line 679
    const-string v0, ""

    .line 680
    .local v0, "smsformat":Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioImsFormatNone:Landroid/widget/RadioButton;

    invoke-virtual {v2}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v2

    if-eqz v2, :cond_12

    .line 681
    const-string v0, "none"

    goto :goto_9

    .line 682
    :cond_12
    iget-object v2, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioImsFormat3gpp:Landroid/widget/RadioButton;

    invoke-virtual {v2}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v2

    if-eqz v2, :cond_13

    .line 683
    const-string v0, "3gpp"

    goto :goto_9

    .line 684
    :cond_13
    iget-object v2, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioImsFormat3gpp2:Landroid/widget/RadioButton;

    invoke-virtual {v2}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v2

    if-eqz v2, :cond_14

    .line 685
    const-string v0, "3gpp2"

    .line 690
    :goto_9
    :try_start_5
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v2

    invoke-interface {v2, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setSmsFormat(Ljava/lang/String;)Z
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_5

    .line 694
    goto :goto_a

    .line 691
    :catch_5
    move-exception v2

    .line 692
    .restart local v2    # "e":Ljava/lang/Exception;
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    .line 693
    invoke-static {v1, v5}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 695
    .end local v2    # "e":Ljava/lang/Exception;
    :goto_a
    const-string v1, "Set ims format test mode done"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->showToast(Ljava/lang/String;)V

    .line 696
    .end local v0    # "smsformat":Ljava/lang/String;
    goto/16 :goto_f

    .line 687
    .restart local v0    # "smsformat":Ljava/lang/String;
    :cond_14
    return-void

    .line 696
    .end local v0    # "smsformat":Ljava/lang/String;
    :cond_15
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mButtonSetImsOverSGSPrefere:Landroid/widget/Button;

    if-ne p1, v0, :cond_16

    .line 697
    invoke-direct {p0}, Lcom/mediatek/engineermode/ims/ImsActivity;->setImsOverSGSPrefereMode()V

    goto/16 :goto_f

    .line 698
    :cond_16
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mButtonSetVdp:Landroid/widget/Button;

    if-ne p1, v0, :cond_19

    .line 699
    const/4 v0, 0x0

    .line 701
    .local v0, "select":I
    :try_start_6
    iget-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mVdp:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1
    :try_end_6
    .catch Ljava/lang/NumberFormatException; {:try_start_6 .. :try_end_6} :catch_6

    move v0, v1

    .line 704
    goto :goto_b

    .line 702
    :catch_6
    move-exception v1

    .line 703
    .local v1, "e":Ljava/lang/NumberFormatException;
    const/4 v0, 0x0

    .line 705
    .end local v1    # "e":Ljava/lang/NumberFormatException;
    :goto_b
    const/4 v1, 0x4

    if-gt v0, v1, :cond_18

    if-ge v0, v2, :cond_17

    goto :goto_c

    .line 708
    :cond_17
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "AT+CEVDP="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, ""

    invoke-direct {p0, v2, v3, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->sendATCommand(Ljava/lang/String;Ljava/lang/String;I)V

    goto :goto_e

    .line 706
    :cond_18
    :goto_c
    const-string v1, "The input of VDP is wrong, please check!"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->showToast(Ljava/lang/String;)V

    goto :goto_e

    .line 710
    .end local v0    # "select":I
    :cond_19
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mButtonSetVolteCall:Landroid/widget/Button;

    if-ne p1, v0, :cond_1c

    .line 711
    iget v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mSimType:I

    invoke-static {p0, v0}, Lcom/android/ims/ImsManager;->getInstance(Landroid/content/Context;I)Lcom/android/ims/ImsManager;

    move-result-object v0

    .line 712
    .local v0, "imsMgr":Lcom/android/ims/ImsManager;
    if-eqz v0, :cond_1d

    .line 713
    invoke-virtual {v0}, Lcom/android/ims/ImsManager;->isVolteEnabledByPlatform()Z

    move-result v2

    if-nez v2, :cond_1a

    .line 714
    const-string v1, "Current SIM doesn\'t support VoLTE, set fail"

    invoke-static {p0, v1, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    .line 715
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    goto :goto_f

    .line 717
    :cond_1a
    invoke-virtual {v0}, Lcom/android/ims/ImsManager;->isEnhanced4gLteModeSettingEnabledByUser()Z

    move-result v2

    .line 718
    .local v2, "enabled":Z
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "setVolteSetting old is "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 719
    if-eqz v2, :cond_1b

    .line 720
    iget-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mButtonSetVolteCall:Landroid/widget/Button;

    const-string v3, "Enable VoLTE HD call"

    invoke-virtual {v1, v3}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    goto :goto_d

    .line 722
    :cond_1b
    iget-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mButtonSetVolteCall:Landroid/widget/Button;

    const-string v3, "Disable VoLTE HD call"

    invoke-virtual {v1, v3}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    .line 724
    :goto_d
    xor-int/lit8 v1, v2, 0x1

    invoke-virtual {v0, v1}, Lcom/android/ims/ImsManager;->setEnhanced4gLteModeSetting(Z)V

    goto :goto_f

    .line 710
    .end local v0    # "imsMgr":Lcom/android/ims/ImsManager;
    .end local v2    # "enabled":Z
    :cond_1c
    :goto_e
    nop

    .line 728
    :cond_1d
    :goto_f
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 6
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 373
    const-string v0, "Ims/ImsActivity"

    const-string v1, "onCreate()"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 374
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 375
    const v0, 0x7f080076

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/ims/ImsActivity;->setContentView(I)V

    .line 377
    invoke-virtual {p0}, Lcom/mediatek/engineermode/ims/ImsActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    .line 378
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "mSimType"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mSimType:I

    .line 379
    const v1, 0x7f0604e9

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsStatus:Landroid/widget/TextView;

    .line 380
    const v1, 0x7f0604d9

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsMultStatus:Landroid/widget/TextView;

    .line 381
    const v1, 0x7f0604e0

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mXcapCFNum:Landroid/widget/EditText;

    .line 382
    const v1, 0x7f0604e5

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioSSXcap:Landroid/widget/RadioButton;

    .line 383
    const v1, 0x7f0604e4

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioSSCs:Landroid/widget/RadioButton;

    .line 384
    const v1, 0x7f0604e8

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mButtonSetSSMode:Landroid/widget/Button;

    .line 385
    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 386
    const v1, 0x7f0604e3

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioSSDisableTag:Landroid/widget/RadioButton;

    .line 387
    const v1, 0x7f0604e2

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioSSDisableDel:Landroid/widget/RadioButton;

    .line 388
    const v1, 0x7f0604e7

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mButtonSetSSDisable:Landroid/widget/Button;

    .line 389
    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 390
    const v1, 0x7f0604de

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mButtonSetXcapCFNum:Landroid/widget/Button;

    .line 391
    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 392
    const v1, 0x7f0607eb

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioSetVolteOff:Landroid/widget/RadioButton;

    .line 393
    const v1, 0x7f0607ec

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioSetVolteOn:Landroid/widget/RadioButton;

    .line 394
    const v1, 0x7f0607e9

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mButtonSetVolte:Landroid/widget/Button;

    .line 395
    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 396
    const v1, 0x7f0604d3

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mButtonSetDynamicSbp:Landroid/widget/Button;

    .line 397
    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 398
    const v1, 0x7f0604d2

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioDynamicSbpEnabled:Landroid/widget/RadioButton;

    .line 399
    const v1, 0x7f0604d1

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioDynamicSbpDisabled:Landroid/widget/RadioButton;

    .line 400
    const v1, 0x7f0604ee

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mButtonSetImsMode:Landroid/widget/Button;

    .line 401
    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 402
    const v1, 0x7f0604ea

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mButtonSetImsFormat:Landroid/widget/Button;

    .line 403
    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 404
    const v1, 0x7f0604ed

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioImsModeEnabled:Landroid/widget/RadioButton;

    .line 405
    const v1, 0x7f0604ec

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioImsModeDisabled:Landroid/widget/RadioButton;

    .line 406
    const v1, 0x7f0604d7

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioImsFormatNone:Landroid/widget/RadioButton;

    .line 407
    const v1, 0x7f0604d5

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioImsFormat3gpp:Landroid/widget/RadioButton;

    .line 408
    const v1, 0x7f0604d6

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioImsFormat3gpp2:Landroid/widget/RadioButton;

    .line 410
    const v1, 0x7f0604dd

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mButtonSetImsOverSGSPrefere:Landroid/widget/Button;

    .line 411
    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 412
    nop

    .line 413
    const v1, 0x7f0604dc

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioImsOverSGSPrefereEnabled:Landroid/widget/RadioButton;

    .line 414
    nop

    .line 415
    const v1, 0x7f0604db

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioImsOverSGSPrefereDisabled:Landroid/widget/RadioButton;

    .line 418
    const v1, 0x7f0604ef

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mVdp:Landroid/widget/EditText;

    .line 419
    const v1, 0x7f0604f0

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mButtonSetVdp:Landroid/widget/Button;

    .line 420
    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 422
    const-string v1, "telephony_ims_volte_settings"

    invoke-virtual {p0, v1, v2}, Lcom/mediatek/engineermode/ims/ImsActivity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v1

    .line 424
    .local v1, "volteSettingSh":Landroid/content/SharedPreferences;
    const v2, 0x7f0a06c2

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/ims/ImsActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x1

    invoke-interface {v1, v2, v3}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v2

    .line 426
    .local v2, "volteSetChecked":Z
    if-eqz v2, :cond_0

    .line 427
    iget-object v4, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioSetVolteOn:Landroid/widget/RadioButton;

    invoke-virtual {v4, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_0

    .line 429
    :cond_0
    iget-object v4, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioSetVolteOff:Landroid/widget/RadioButton;

    invoke-virtual {v4, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 431
    :goto_0
    const v3, 0x7f0604c6

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/ListView;

    iput-object v3, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mCategoryList:Landroid/widget/ListView;

    .line 432
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3}, Ljava/util/ArrayList;-><init>()V

    .line 433
    .local v3, "items":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    const v4, 0x7f0a03ac

    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/ims/ImsActivity;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 434
    const v4, 0x7f0a03ae

    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/ims/ImsActivity;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 435
    const v4, 0x7f0a03ab

    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/ims/ImsActivity;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 436
    const v4, 0x7f0a03af

    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/ims/ImsActivity;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 437
    const v4, 0x7f0a03aa

    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/ims/ImsActivity;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 438
    const v4, 0x7f0a03ad

    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/ims/ImsActivity;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 439
    const v4, 0x7f0a03b0

    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/ims/ImsActivity;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 440
    new-instance v4, Landroid/widget/ArrayAdapter;

    const v5, 0x1090003

    invoke-direct {v4, p0, v5, v3}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;ILjava/util/List;)V

    .line 442
    .local v4, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    iget-object v5, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mCategoryList:Landroid/widget/ListView;

    invoke-virtual {v5, v4}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 443
    iget-object v5, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mCategoryList:Landroid/widget/ListView;

    invoke-virtual {v5, p0}, Landroid/widget/ListView;->setOnItemClickListener(Landroid/widget/AdapterView$OnItemClickListener;)V

    .line 444
    iget-object v5, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mCategoryList:Landroid/widget/ListView;

    invoke-direct {p0, v5}, Lcom/mediatek/engineermode/ims/ImsActivity;->setListViewItemsHeight(Landroid/widget/ListView;)V

    .line 445
    const v5, 0x7f0607e8

    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/ims/ImsActivity;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/Button;

    iput-object v5, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mButtonSetVolteCall:Landroid/widget/Button;

    .line 446
    invoke-virtual {v5, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 447
    return-void
.end method

.method public onDestroy()V
    .locals 1

    .line 581
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioSetVolteOn:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/ims/ImsActivity;->writeVolteSettingSharedPreference(Z)V

    .line 582
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 583
    return-void
.end method

.method public onItemClick(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 3
    .param p2, "arg1"    # Landroid/view/View;
    .param p3, "arg2"    # I
    .param p4, "arg3"    # J
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;",
            "Landroid/view/View;",
            "IJ)V"
        }
    .end annotation

    .line 468
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/mediatek/engineermode/ims/ConfigIMSActivity;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 469
    .local v0, "intent":Landroid/content/Intent;
    iget v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mSimType:I

    const-string v2, "mSimType"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 470
    const-string v1, "category"

    packed-switch p3, :pswitch_data_0

    goto :goto_0

    .line 490
    :pswitch_0
    const v2, 0x7f0a03b0

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/ims/ImsActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 491
    goto :goto_0

    .line 487
    :pswitch_1
    const v2, 0x7f0a03ad

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/ims/ImsActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 488
    goto :goto_0

    .line 484
    :pswitch_2
    const v2, 0x7f0a03aa

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/ims/ImsActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 485
    goto :goto_0

    .line 481
    :pswitch_3
    const v2, 0x7f0a03af

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/ims/ImsActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 482
    goto :goto_0

    .line 478
    :pswitch_4
    const v2, 0x7f0a03ab

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/ims/ImsActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 479
    goto :goto_0

    .line 475
    :pswitch_5
    const v2, 0x7f0a03ae

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/ims/ImsActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 476
    goto :goto_0

    .line 472
    :pswitch_6
    const v2, 0x7f0a03ac

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/ims/ImsActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 473
    nop

    .line 495
    :goto_0
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/ims/ImsActivity;->startActivity(Landroid/content/Intent;)V

    .line 496
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method protected onResume()V
    .locals 14

    .line 500
    const-string v0, "Ims/ImsActivity"

    const-string v1, "onResume()"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 501
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 502
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "mSimType "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mSimType:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 503
    iget v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mSimType:I

    invoke-static {v1}, Landroid/telephony/SubscriptionManager;->getSubId(I)[I

    move-result-object v1

    .line 504
    .local v1, "SubId":[I
    if-eqz v1, :cond_0

    array-length v2, v1

    if-lez v2, :cond_0

    .line 505
    const/4 v2, 0x0

    aget v2, v1, v2

    iput v2, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mSubId:I

    .line 507
    :cond_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mSubId "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mSubId:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 510
    invoke-static {}, Landroid/telephony/TelephonyManager;->getDefault()Landroid/telephony/TelephonyManager;

    move-result-object v2

    iget v3, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mSubId:I

    invoke-virtual {v2, v3}, Landroid/telephony/TelephonyManager;->isImsRegistered(I)Z

    move-result v2

    .line 511
    .local v2, "status":Z
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "getImsRegInfo(): "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 512
    iget-object v3, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsStatus:Landroid/widget/TextView;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const v5, 0x7f0a03c2

    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/ims/ImsActivity;->getString(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-eqz v2, :cond_1

    const-string v5, "true"

    goto :goto_0

    :cond_1
    const-string v5, "false"

    :goto_0
    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 513
    const/4 v3, 0x5

    const-string v4, "AT+CEVDP?"

    const-string v5, "+CEVDP:"

    invoke-direct {p0, v4, v5, v3}, Lcom/mediatek/engineermode/ims/ImsActivity;->sendATCommand(Ljava/lang/String;Ljava/lang/String;I)V

    .line 515
    iget-object v3, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mImsMultStatus:Landroid/widget/TextView;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "persist.vendor.mims_support: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 516
    const-string v5, "persist.vendor.mims_support"

    const-string v6, "-"

    invoke-static {v5, v6}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 515
    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 518
    const-string v3, "persist.vendor.radio.ss.mode"

    const-string v4, "Prefer XCAP"

    invoke-static {v3, v4}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 519
    .local v3, "ssmode":Ljava/lang/String;
    nop

    .line 520
    const/4 v5, 0x2

    invoke-static {v5}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v6

    .line 519
    const-string v7, "persist.vendor.radio.ss.xrdm"

    invoke-static {v7, v6}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 521
    .local v6, "ssdisableMethod":Ljava/lang/String;
    const-string v7, "persist.vendor.radio.xcap.cfn"

    const-string v8, ""

    invoke-static {v7, v8}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 522
    .local v7, "xcapCFNum":Ljava/lang/String;
    const-string v8, "persist.vendor.radio.mtk_dsbp_support"

    const-string v9, "0"

    invoke-static {v8, v9}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    .line 523
    .local v8, "dynamicSbp":Ljava/lang/String;
    const-string v10, "persist.vendor.radio.imstestmode"

    invoke-static {v10, v9}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    .line 524
    .local v9, "imsMode":Ljava/lang/String;
    const-string v10, "persist.vendor.radio.smsformat"

    const-string v11, "none"

    invoke-static {v10, v11}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    .line 526
    .local v10, "smsformat":Ljava/lang/String;
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "persist.vendor.radio.ss.mode: "

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-static {v0, v12}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 527
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "persist.vendor.radio.ss.xrdm: "

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-static {v0, v12}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 528
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "persist.vendor.radio.xcap.cfn:"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-static {v0, v12}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 529
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "persist.vendor.radio.mtk_dsbp_support:"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-static {v0, v12}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 530
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "persist.vendor.radio.imstestmode:"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-static {v0, v12}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 531
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "persist.vendor.radio.smsformat:"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-static {v0, v12}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 533
    invoke-direct {p0}, Lcom/mediatek/engineermode/ims/ImsActivity;->queryImsOverSGSPrefereStatus()V

    .line 536
    invoke-virtual {v4, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const-string v4, "\""

    const/4 v12, 0x1

    if-eqz v0, :cond_2

    .line 537
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioSSXcap:Landroid/widget/RadioButton;

    invoke-virtual {v0, v12}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_1

    .line 538
    :cond_2
    const-string v0, "Prefer CS"

    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 539
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioSSCs:Landroid/widget/RadioButton;

    invoke-virtual {v0, v12}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_1

    .line 541
    :cond_3
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "Got invalid SS Mode: \""

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/ims/ImsActivity;->showToast(Ljava/lang/String;)V

    .line 544
    :goto_1
    invoke-static {v6}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    if-ne v5, v0, :cond_4

    .line 545
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioSSDisableTag:Landroid/widget/RadioButton;

    invoke-virtual {v0, v12}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_2

    .line 546
    :cond_4
    invoke-static {v6}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    if-ne v12, v0, :cond_5

    .line 547
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioSSDisableDel:Landroid/widget/RadioButton;

    invoke-virtual {v0, v12}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_2

    .line 549
    :cond_5
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Got invalid SS Disable Method: \""

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/ims/ImsActivity;->showToast(Ljava/lang/String;)V

    .line 552
    :goto_2
    invoke-static {v8}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    if-ne v12, v0, :cond_6

    .line 553
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioDynamicSbpEnabled:Landroid/widget/RadioButton;

    invoke-virtual {v0, v12}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_3

    .line 554
    :cond_6
    invoke-static {v8}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    if-nez v0, :cond_7

    .line 555
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioDynamicSbpDisabled:Landroid/widget/RadioButton;

    invoke-virtual {v0, v12}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 557
    :cond_7
    :goto_3
    invoke-static {v9}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    if-ne v12, v0, :cond_8

    .line 558
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioImsModeEnabled:Landroid/widget/RadioButton;

    invoke-virtual {v0, v12}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_4

    .line 559
    :cond_8
    invoke-static {v9}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    if-nez v0, :cond_9

    .line 560
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioImsModeDisabled:Landroid/widget/RadioButton;

    invoke-virtual {v0, v12}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 562
    :cond_9
    :goto_4
    invoke-virtual {v11, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_a

    .line 563
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioImsFormatNone:Landroid/widget/RadioButton;

    invoke-virtual {v0, v12}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_5

    .line 564
    :cond_a
    const-string v0, "3gpp"

    invoke-virtual {v0, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_b

    .line 565
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioImsFormat3gpp:Landroid/widget/RadioButton;

    invoke-virtual {v0, v12}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_5

    .line 566
    :cond_b
    const-string v0, "3gpp2"

    invoke-virtual {v0, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_c

    .line 567
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mRadioImsFormat3gpp2:Landroid/widget/RadioButton;

    invoke-virtual {v0, v12}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 569
    :cond_c
    :goto_5
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mXcapCFNum:Landroid/widget/EditText;

    invoke-virtual {v0, v7}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 570
    iget v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mSimType:I

    invoke-static {p0, v0}, Lcom/android/ims/ImsManager;->getInstance(Landroid/content/Context;I)Lcom/android/ims/ImsManager;

    move-result-object v0

    .line 571
    .local v0, "imsMgr":Lcom/android/ims/ImsManager;
    invoke-virtual {v0}, Lcom/android/ims/ImsManager;->isEnhanced4gLteModeSettingEnabledByUser()Z

    move-result v4

    .line 572
    .local v4, "enabled":Z
    if-eqz v4, :cond_d

    .line 573
    iget-object v5, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mButtonSetVolteCall:Landroid/widget/Button;

    const-string v11, "Disable VoLTE HD call"

    invoke-virtual {v5, v11}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    goto :goto_6

    .line 575
    :cond_d
    iget-object v5, p0, Lcom/mediatek/engineermode/ims/ImsActivity;->mButtonSetVolteCall:Landroid/widget/Button;

    const-string v11, "Enable VoLTE HD call"

    invoke-virtual {v5, v11}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    .line 577
    :goto_6
    return-void
.end method
