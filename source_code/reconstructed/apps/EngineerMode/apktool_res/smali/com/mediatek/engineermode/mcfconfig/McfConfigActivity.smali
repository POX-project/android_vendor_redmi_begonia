.class public Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
.super Landroid/app/Activity;
.source "McfConfigActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$FileLoadTask;,
        Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;,
        Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$saveOTAPathTask;
    }
.end annotation


# instance fields
.field private final CERTIFICATION_OPID_INPUT_KEY:Ljava/lang/String;

.field private final CERTIFICATION_OPID_KEY:Ljava/lang/String;

.field private final CMD_OTA_RETURN:Ljava/lang/String;

.field private final DUMP_OTA_COMMAND:Ljava/lang/String;

.field private final GENERAL_OPOTA_IS_OTAPATH_KEY:Ljava/lang/String;

.field private final GENERAL_OPOTA_OTA_FILEPATH_KEY:Ljava/lang/String;

.field private final GENERAL_OPOTA_RUNTIME_FILEPATH_KEY:Ljava/lang/String;

.field private final GEN_OPOTA_QUERY_COMMAND:Ljava/lang/String;

.field private final INI_REFRESH_COMMAND:Ljava/lang/String;

.field private final INI_REFRESH_WAIT_TIME:I

.field private final IS_OTAPATH_KEY:Ljava/lang/String;

.field private final MCF_CONFIG_SHAREPRE:Ljava/lang/String;

.field private final MSG_CLEAR_GEN_OPOTA_FILEPATH:I

.field private final MSG_CLEAR_OPOTA_FILEPATH:I

.field private final MSG_CLEAR_OTA_FILEPATH:I

.field private final MSG_DUMP_OTA_FILE:I

.field private final MSG_GEN_OPOTA_QUERY:I

.field protected final MSG_GET_MCF_STATUS_URC:I

.field private final MSG_INI_REFRESH:I

.field private final MSG_MCF_MODEM_STATUS_CHANGED:I

.field private final MSG_MCF_RADIO_STATE_CHANGED:I

.field private final MSG_MODEM_REBOOT_COMPLETE:I

.field private final MSG_OPOTA_QUERY:I

.field private final MSG_OTA_QUERY:I

.field private final MSG_SET_CERT_CERTIFICATIN:I

.field private final MSG_SET_CMCC_CERTIFICATIN:I

.field private final MSG_SET_CT_CERTIFICATIN:I

.field private final MSG_SET_CU_CERTIFICATIN:I

.field private final MSG_SET_GEN_OPOTA_FILEPATH:I

.field private final MSG_SET_OM_CERTIFICATIN:I

.field private final MSG_SET_OPOTA_FILEPATH:I

.field private final MSG_SET_OTA_FILEPATH:I

.field private final MSG_SET_USER_CERTIFICATIN:I

.field private final OPOTA_QUERY_COMMAND:Ljava/lang/String;

.field private final OTA_IS_OTAPATH_KEY:Ljava/lang/String;

.field private final OTA_OTA_FILEPATH_KEY:Ljava/lang/String;

.field private final OTA_PATH:Ljava/lang/String;

.field private final OTA_QUERY_COMMAND:Ljava/lang/String;

.field private final OTA_RUNTIME_FILEPATH_KEY:Ljava/lang/String;

.field private final OTA_WAIT_TIME:I

.field private final OtaFilePathType:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private final REBOOT_MODEM_WAIT_TIME:I

.field private final RUNTIME_PATH:Ljava/lang/String;

.field private final SET_CERT_CMD:Ljava/lang/String;

.field private final SET_GEN_OPOTA_COMMAND:Ljava/lang/String;

.field private final SET_OPOTA_COMMAND:Ljava/lang/String;

.field private final SET_OTA_COMMAND:Ljava/lang/String;

.field private final SHOW_CERTIFICATION_VIEW:I

.field private final SHOW_GENERAL_VIEW:I

.field private final SHOW_OPOTA_VIEW:I

.field private final SIM1_OPOTA_IS_OTAPATH_KEY:Ljava/lang/String;

.field private final SIM1_OPOTA_OTA_FILEPATH_KEY:Ljava/lang/String;

.field private final SIM1_OPOTA_RUNTIME_FILEPATH_KEY:Ljava/lang/String;

.field private final SIM2_OPOTA_IS_OTAPATH_KEY:Ljava/lang/String;

.field private final SIM2_OPOTA_OTA_FILEPATH_KEY:Ljava/lang/String;

.field private final SIM2_OPOTA_RUNTIME_FILEPATH_KEY:Ljava/lang/String;

.field private final SIM_COUNT:I

.field private final STATE_DUMP_OTA:I

.field private final STATE_INI_REFRESH:I

.field private final STATE_REBOOT_MODEM:I

.field private final TAG:Ljava/lang/String;

.field private addGenOpOtaBtn:Landroid/widget/Button;

.field private addOpOtaBtn:Landroid/widget/Button;

.field private addOtaBtn:Landroid/widget/Button;

.field private applyGenOpOtaBtn:Landroid/widget/Button;

.field private applyOpOtaBtn:Landroid/widget/Button;

.field private applyOtaBtn:Landroid/widget/Button;

.field private certBtn:Landroid/widget/Button;

.field private certificationView:Landroid/widget/LinearLayout;

.field private certotaQueryBtn:Landroid/widget/Button;

.field private clearGenOpOtaBtn:Landroid/widget/Button;

.field private clearOpOtaBtn:Landroid/widget/Button;

.field private clearOtaBtn:Landroid/widget/Button;

.field private curGenOpOtaFile:Ljava/lang/String;

.field private curOpOtaFile:Ljava/lang/String;

.field private curOtaFile:Ljava/lang/String;

.field dumpBegain:J

.field dumpEnd:J

.field private dumpOta:Landroid/widget/Button;

.field private genOpOtaFile:Landroid/widget/TextView;

.field private genOpotaPathRgroup:Landroid/widget/RadioGroup;

.field private genOpotaResetMdEnable:Landroid/widget/CheckBox;

.field private generalView:Landroid/widget/LinearLayout;

.field private iniRefreshBtn:Landroid/widget/Button;

.field private iniStatus:I

.field private iniStatusGroup:Landroid/widget/RadioGroup;

.field private inputOp:Ljava/lang/String;

.field private isGenOpOtaPathValid:Z

.field private isGenopotaOtaPath:Z

.field isGenopotaOtaPathBt:Landroid/widget/RadioButton;

.field isGenopotaRuntimePathBt:Landroid/widget/RadioButton;

.field private isOpOtaPathValid:Z

.field private isOpotaOtaPath:Z

.field isOpotaOtaPathBt:Landroid/widget/RadioButton;

.field isOpotaRuntimePathBt:Landroid/widget/RadioButton;

.field private isOtaOtaPath:Z

.field isOtaOtaPathBt:Landroid/widget/RadioButton;

.field private isOtaPath:Z

.field private isOtaPathValid:Z

.field isOtaRuntimePathBt:Landroid/widget/RadioButton;

.field mApplyUrcTypeMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mEmCallback:Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;

.field private final mHandler:Landroid/os/Handler;

.field private mIsModemEnabled:Z

.field private mProgressDialog:Landroid/app/ProgressDialog;

.field private mSpinner:Landroid/widget/Spinner;

.field private mTelephonyManager:Landroid/telephony/TelephonyManager;

.field private final mcfApplyDsbpResult:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private final mcfApplyOtaResult:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

.field private mcfConfigSh:Landroid/content/SharedPreferences;

.field private final mcfOtaDumpResult:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private onCheckedChangeListener:Landroid/widget/RadioGroup$OnCheckedChangeListener;

.field private opId:I

.field private opOtaFile:Landroid/widget/TextView;

.field private opOtaPathRgroup:Landroid/widget/RadioGroup;

.field private opOtaQueryBtn:Landroid/widget/Button;

.field private opotaResetMdEnable:Landroid/widget/CheckBox;

.field private opotaView:Landroid/widget/LinearLayout;

.field private otaFile:Landroid/widget/TextView;

.field private otaPathRgroup:Landroid/widget/RadioGroup;

.field private otaQueryBtn:Landroid/widget/Button;

.field private pathRgroup:Landroid/widget/RadioGroup;

.field private phoneid:I

.field private readySim:I

.field private resetMd:Z

.field private sertInputEt:Landroid/widget/EditText;

.field simType:I

.field private targetGenOpOtaFile:Ljava/lang/String;

.field private targetOpOtaFile:Ljava/lang/String;

.field private targetOtaFile:Ljava/lang/String;

.field private taskSet:Ljava/util/Set;

.field timer:Landroid/os/CountDownTimer;

.field private viewId:I


# direct methods
.method public constructor <init>()V
    .locals 6

    .line 49
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 51
    const-string v0, "McfConfig"

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->TAG:Ljava/lang/String;

    .line 52
    const/4 v0, 0x2

    iput v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->SIM_COUNT:I

    .line 53
    const/4 v1, 0x0

    iput v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->MSG_SET_OTA_FILEPATH:I

    .line 54
    const/4 v2, 0x1

    iput v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->MSG_CLEAR_OTA_FILEPATH:I

    .line 55
    iput v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->MSG_SET_OPOTA_FILEPATH:I

    .line 56
    const/4 v3, 0x3

    iput v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->MSG_CLEAR_OPOTA_FILEPATH:I

    .line 57
    const/4 v4, 0x4

    iput v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->MSG_SET_GEN_OPOTA_FILEPATH:I

    .line 58
    const/4 v4, 0x5

    iput v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->MSG_CLEAR_GEN_OPOTA_FILEPATH:I

    .line 59
    const/4 v4, 0x6

    iput v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->MSG_DUMP_OTA_FILE:I

    .line 60
    const/4 v4, 0x7

    iput v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->MSG_INI_REFRESH:I

    .line 61
    const/16 v4, 0x8

    iput v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->MSG_OTA_QUERY:I

    .line 62
    const/16 v4, 0x9

    iput v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->MSG_OPOTA_QUERY:I

    .line 63
    const/16 v4, 0xa

    iput v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->MSG_GEN_OPOTA_QUERY:I

    .line 64
    const/16 v4, 0x64

    iput v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->MSG_MCF_RADIO_STATE_CHANGED:I

    .line 65
    const/16 v4, 0x65

    iput v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->MSG_MODEM_REBOOT_COMPLETE:I

    .line 66
    const/16 v4, 0x66

    iput v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->MSG_MCF_MODEM_STATUS_CHANGED:I

    .line 67
    const/16 v4, 0xb

    iput v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->MSG_GET_MCF_STATUS_URC:I

    .line 68
    const/16 v4, 0xc

    iput v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->MSG_SET_USER_CERTIFICATIN:I

    .line 69
    const/16 v4, 0xd

    iput v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->MSG_SET_OM_CERTIFICATIN:I

    .line 70
    const/16 v4, 0xe

    iput v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->MSG_SET_CMCC_CERTIFICATIN:I

    .line 71
    const/16 v4, 0xf

    iput v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->MSG_SET_CT_CERTIFICATIN:I

    .line 72
    const/16 v4, 0x10

    iput v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->MSG_SET_CU_CERTIFICATIN:I

    .line 73
    const/16 v4, 0x11

    iput v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->MSG_SET_CERT_CERTIFICATIN:I

    .line 74
    iput v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->SHOW_OPOTA_VIEW:I

    .line 75
    iput v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->SHOW_GENERAL_VIEW:I

    .line 76
    iput v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->SHOW_CERTIFICATION_VIEW:I

    .line 77
    const-string v4, "mcf_config_settings"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->MCF_CONFIG_SHAREPRE:Ljava/lang/String;

    .line 78
    const-string v4, "/vendor/etc/mdota/"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->OTA_PATH:Ljava/lang/String;

    .line 79
    const-string v4, "/mnt/vendor/nvcfg/mdota/"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->RUNTIME_PATH:Ljava/lang/String;

    .line 80
    const-string v4, "AT+EMCFC=6,0,"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->SET_OTA_COMMAND:Ljava/lang/String;

    .line 81
    const-string v4, "AT+EMCFC=6,1,"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->SET_OPOTA_COMMAND:Ljava/lang/String;

    .line 82
    const-string v4, "+EMCFC:"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->CMD_OTA_RETURN:Ljava/lang/String;

    .line 83
    const-string v4, "AT+EMCFC=6,2,"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->SET_GEN_OPOTA_COMMAND:Ljava/lang/String;

    .line 84
    const-string v4, "AT+EMCFC=6"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->SET_CERT_CMD:Ljava/lang/String;

    .line 85
    const-string v4, "AT+EMCFC=5"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->DUMP_OTA_COMMAND:Ljava/lang/String;

    .line 86
    const-string v4, "AT+EMCFC=7"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->INI_REFRESH_COMMAND:Ljava/lang/String;

    .line 87
    const-string v4, "AT+EMCFC=4,0"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->OTA_QUERY_COMMAND:Ljava/lang/String;

    .line 88
    const-string v4, "AT+EMCFC=4,1"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->OPOTA_QUERY_COMMAND:Ljava/lang/String;

    .line 89
    const-string v4, "AT+EMCFC=4,2"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->GEN_OPOTA_QUERY_COMMAND:Ljava/lang/String;

    .line 90
    const/16 v4, 0xb4

    iput v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->OTA_WAIT_TIME:I

    .line 91
    const/16 v5, 0x12c

    iput v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->INI_REFRESH_WAIT_TIME:I

    .line 92
    iput v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->REBOOT_MODEM_WAIT_TIME:I

    .line 93
    const-string v4, "ota_file_otapath"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->OTA_OTA_FILEPATH_KEY:Ljava/lang/String;

    .line 94
    const-string v4, "ota_file_runtimepath"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->OTA_RUNTIME_FILEPATH_KEY:Ljava/lang/String;

    .line 95
    const-string v4, "is_otapath"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->IS_OTAPATH_KEY:Ljava/lang/String;

    .line 96
    const-string v4, "op_id"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->CERTIFICATION_OPID_KEY:Ljava/lang/String;

    .line 97
    const-string v4, "input_op_id"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->CERTIFICATION_OPID_INPUT_KEY:Ljava/lang/String;

    .line 98
    const-string v4, "ota_is_otapath"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->OTA_IS_OTAPATH_KEY:Ljava/lang/String;

    .line 99
    const-string v4, "general_opota_otapath"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->GENERAL_OPOTA_OTA_FILEPATH_KEY:Ljava/lang/String;

    .line 100
    const-string v4, "general_opota_runtimepath"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->GENERAL_OPOTA_RUNTIME_FILEPATH_KEY:Ljava/lang/String;

    .line 101
    const-string v4, "general_opota_is_otapath"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->GENERAL_OPOTA_IS_OTAPATH_KEY:Ljava/lang/String;

    .line 102
    const-string v4, "sim2_opota_file_otapath"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->SIM2_OPOTA_OTA_FILEPATH_KEY:Ljava/lang/String;

    .line 103
    const-string v4, "sim2_opota_file_runtimepath"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->SIM2_OPOTA_RUNTIME_FILEPATH_KEY:Ljava/lang/String;

    .line 104
    const-string v4, "sim2_opota_is_otapath"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->SIM2_OPOTA_IS_OTAPATH_KEY:Ljava/lang/String;

    .line 105
    const-string v4, "sim1_opota_file_otapath"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->SIM1_OPOTA_OTA_FILEPATH_KEY:Ljava/lang/String;

    .line 106
    const-string v4, "sim1_opota_file_runtimepath"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->SIM1_OPOTA_RUNTIME_FILEPATH_KEY:Ljava/lang/String;

    .line 107
    const-string v4, "sim1_opota_is_otapath"

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->SIM1_OPOTA_IS_OTAPATH_KEY:Ljava/lang/String;

    .line 108
    iput v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->STATE_REBOOT_MODEM:I

    .line 109
    iput v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->STATE_DUMP_OTA:I

    .line 110
    iput v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->STATE_INI_REFRESH:I

    .line 111
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->taskSet:Ljava/util/Set;

    .line 157
    iput-boolean v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaPathValid:Z

    .line 158
    iput-boolean v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpOtaPathValid:Z

    .line 159
    iput-boolean v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isGenOpOtaPathValid:Z

    .line 160
    iput-boolean v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mIsModemEnabled:Z

    .line 161
    iput-boolean v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->resetMd:Z

    .line 162
    iput-boolean v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaPath:Z

    .line 163
    iput-boolean v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpotaOtaPath:Z

    .line 164
    iput-boolean v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isGenopotaOtaPath:Z

    .line 165
    iput-boolean v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaOtaPath:Z

    .line 177
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$1;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->OtaFilePathType:Ljava/util/HashMap;

    .line 183
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$2;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfOtaDumpResult:Ljava/util/HashMap;

    .line 204
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$3;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfApplyDsbpResult:Ljava/util/HashMap;

    .line 217
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$4;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$4;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfApplyOtaResult:Ljava/util/HashMap;

    .line 244
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mHandler:Landroid/os/Handler;

    .line 653
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->onCheckedChangeListener:Landroid/widget/RadioGroup$OnCheckedChangeListener;

    .line 1447
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$8;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$8;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mApplyUrcTypeMapping:Ljava/util/HashMap;

    .line 1474
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$9;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$9;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mEmCallback:Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/util/HashMap;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfApplyOtaResult:Ljava/util/HashMap;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/util/HashMap;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfApplyDsbpResult:Ljava/util/HashMap;

    return-object v0
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetGenOpOtaFile:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$1002(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
    .param p1, "x1"    # Ljava/lang/String;

    .line 49
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetGenOpOtaFile:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-boolean v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mIsModemEnabled:Z

    return v0
.end method

.method static synthetic access$1102(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
    .param p1, "x1"    # Z

    .line 49
    iput-boolean p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mIsModemEnabled:Z

    return p1
.end method

.method static synthetic access$1200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/util/Set;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->taskSet:Ljava/util/Set;

    return-object v0
.end method

.method static synthetic access$1300(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->phoneid:I

    return v0
.end method

.method static synthetic access$1400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
    .param p1, "x1"    # Ljava/lang/String;
    .param p2, "x2"    # Ljava/lang/String;

    .line 49
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->showProgressDialog(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$1500(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/util/HashMap;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->OtaFilePathType:Ljava/util/HashMap;

    return-object v0
.end method

.method static synthetic access$1600(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->curOtaFile:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$1602(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
    .param p1, "x1"    # Ljava/lang/String;

    .line 49
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->curOtaFile:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$1700(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->curOpOtaFile:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$1702(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
    .param p1, "x1"    # Ljava/lang/String;

    .line 49
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->curOpOtaFile:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$1800(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->curGenOpOtaFile:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$1802(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
    .param p1, "x1"    # Ljava/lang/String;

    .line 49
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->curGenOpOtaFile:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$1900(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
    .param p1, "x1"    # Ljava/lang/String;
    .param p2, "x2"    # I

    .line 49
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->sendATCommand(Ljava/lang/String;I)V

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-boolean v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->resetMd:Z

    return v0
.end method

.method static synthetic access$2000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/app/ProgressDialog;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    return-object v0
.end method

.method static synthetic access$2002(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Landroid/app/ProgressDialog;)Landroid/app/ProgressDialog;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
    .param p1, "x1"    # Landroid/app/ProgressDialog;

    .line 49
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    return-object p1
.end method

.method static synthetic access$2100(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/util/HashMap;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfOtaDumpResult:Ljava/util/HashMap;

    return-object v0
.end method

.method static synthetic access$2200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Lcom/mediatek/engineermode/mcfconfig/McfCertification;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    return-object v0
.end method

.method static synthetic access$2300(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
    .param p1, "x1"    # I

    .line 49
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->doCertificationAction(I)V

    return-void
.end method

.method static synthetic access$2400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$2502(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
    .param p1, "x1"    # I

    .line 49
    iput p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->iniStatus:I

    return p1
.end method

.method static synthetic access$2600(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-boolean v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaPath:Z

    return v0
.end method

.method static synthetic access$2602(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
    .param p1, "x1"    # Z

    .line 49
    iput-boolean p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaPath:Z

    return p1
.end method

.method static synthetic access$2700(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-boolean v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaOtaPath:Z

    return v0
.end method

.method static synthetic access$2702(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
    .param p1, "x1"    # Z

    .line 49
    iput-boolean p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaOtaPath:Z

    return p1
.end method

.method static synthetic access$2800(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-boolean v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpotaOtaPath:Z

    return v0
.end method

.method static synthetic access$2802(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
    .param p1, "x1"    # Z

    .line 49
    iput-boolean p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpotaOtaPath:Z

    return p1
.end method

.method static synthetic access$2900(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-boolean v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isGenopotaOtaPath:Z

    return v0
.end method

.method static synthetic access$2902(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
    .param p1, "x1"    # Z

    .line 49
    iput-boolean p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isGenopotaOtaPath:Z

    return p1
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
    .param p1, "x1"    # Z

    .line 49
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->rebootModem(Z)V

    return-void
.end method

.method static synthetic access$3000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->readySim:I

    return v0
.end method

.method static synthetic access$3100(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
    .param p1, "x1"    # I

    .line 49
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->saveSharedPreference(I)V

    return-void
.end method

.method static synthetic access$3200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    invoke-direct {p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->getSharedPreference()V

    return-void
.end method

.method static synthetic access$3300(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    invoke-direct {p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->reloadOtaPathSharedPreference()V

    return-void
.end method

.method static synthetic access$3400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    invoke-direct {p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->getCertPathSharedPreference()V

    return-void
.end method

.method static synthetic access$3500(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->viewId:I

    return v0
.end method

.method static synthetic access$3600(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->otaPathRgroup:Landroid/widget/RadioGroup;

    return-object v0
.end method

.method static synthetic access$3700(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->genOpotaPathRgroup:Landroid/widget/RadioGroup;

    return-object v0
.end method

.method static synthetic access$3800(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/RadioGroup$OnCheckedChangeListener;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->onCheckedChangeListener:Landroid/widget/RadioGroup$OnCheckedChangeListener;

    return-object v0
.end method

.method static synthetic access$3900(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opOtaPathRgroup:Landroid/widget/RadioGroup;

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
    .param p1, "x1"    # Ljava/lang/String;
    .param p2, "x2"    # Ljava/lang/String;

    .line 49
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$4000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->pathRgroup:Landroid/widget/RadioGroup;

    return-object v0
.end method

.method static synthetic access$4100(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opId:I

    return v0
.end method

.method static synthetic access$4102(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
    .param p1, "x1"    # I

    .line 49
    iput p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opId:I

    return p1
.end method

.method static synthetic access$4200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mSpinner:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$4300(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/EditText;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->sertInputEt:Landroid/widget/EditText;

    return-object v0
.end method

.method static synthetic access$4400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->inputOp:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$4500(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mEmCallback:Lvendor/mediatek/hardware/engineermode/V1_0/IEmCallback;

    return-object v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->otaFile:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOtaFile:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$602(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
    .param p1, "x1"    # Ljava/lang/String;

    .line 49
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOtaFile:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opOtaFile:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOpOtaFile:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$802(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
    .param p1, "x1"    # Ljava/lang/String;

    .line 49
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOpOtaFile:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->genOpOtaFile:Landroid/widget/TextView;

    return-object v0
.end method

.method private checkPathValid(Ljava/lang/String;[Ljava/lang/String;)Z
    .locals 3
    .param p1, "filePath"    # Ljava/lang/String;
    .param p2, "suffix"    # [Ljava/lang/String;

    .line 938
    const/4 v0, 0x1

    if-nez p2, :cond_0

    .line 939
    return v0

    .line 940
    :cond_0
    invoke-static {p1}, Lcom/mediatek/engineermode/mcfconfig/FileUtils;->getFileExtension(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 941
    .local v1, "fileExtension":Ljava/lang/String;
    if-eqz v1, :cond_1

    .line 942
    invoke-static {p2}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v2

    invoke-interface {v2, v1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 943
    return v0

    .line 945
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[checkPathValid] file path is InValid "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " suffixList:"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 946
    invoke-static {p2}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 945
    const-string v2, "McfConfig"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 947
    const/4 v0, 0x0

    return v0
.end method

.method private doCertificationAction(I)V
    .locals 7
    .param p1, "phoneNum"    # I

    .line 1485
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "doCertificationAction :"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    .line 1486
    invoke-virtual {v1, p1}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getCurrentCmd(I)I

    move-result v1

    const/4 v2, 0x1

    add-int/2addr v1, v2

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1485
    const-string v1, "McfConfig"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1487
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v0, p1}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getCurrentCmd(I)I

    move-result v0

    const-string v1, "\",0"

    const-string v3, ",\""

    const/16 v4, 0xd

    const/4 v5, 0x2

    const-string v6, ",\"\",0"

    if-eqz v0, :cond_4

    if-eq v0, v2, :cond_1

    if-eq v0, v5, :cond_0

    goto/16 :goto_1

    .line 1517
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    const/4 v1, 0x3

    invoke-virtual {v0, p1, v1}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setCurrentCmd(II)V

    .line 1518
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "AT+EMCFC=6,2,"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getPathFleg()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1519
    .local v0, "atMsg":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getOpid()I

    move-result v1

    invoke-direct {p0, p1, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->sendATCommand(ILjava/lang/String;I)V

    .line 1520
    goto/16 :goto_1

    .line 1504
    .end local v0    # "atMsg":Ljava/lang/String;
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v0, p1, v5}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setCurrentCmd(II)V

    .line 1505
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getOpid()I

    move-result v0

    const-string v2, "AT+EMCFC=6,1,"

    if-ne v0, v4, :cond_2

    .line 1506
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getPathFleg()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .restart local v0    # "atMsg":Ljava/lang/String;
    goto :goto_0

    .line 1507
    .end local v0    # "atMsg":Ljava/lang/String;
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getFileList()Ljava/lang/String;

    move-result-object v0

    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    .line 1508
    invoke-virtual {v4}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getOpotaFilePath()Ljava/lang/String;

    move-result-object v4

    .line 1507
    invoke-static {v0, v4}, Lcom/mediatek/engineermode/mcfconfig/FileUtils;->isFileExist(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 1509
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getPathFleg()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    .line 1510
    invoke-virtual {v2}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getOpotaFileName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .restart local v0    # "atMsg":Ljava/lang/String;
    goto :goto_0

    .line 1512
    .end local v0    # "atMsg":Ljava/lang/String;
    :cond_3
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getPathFleg()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1514
    .restart local v0    # "atMsg":Ljava/lang/String;
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getOpid()I

    move-result v1

    invoke-direct {p0, p1, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->sendATCommand(ILjava/lang/String;I)V

    .line 1515
    goto/16 :goto_1

    .line 1489
    .end local v0    # "atMsg":Ljava/lang/String;
    :cond_4
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    new-array v2, v5, [I

    fill-array-data v2, :array_0

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setCurrentCmd([I)V

    .line 1490
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getOpid()I

    move-result v0

    const-string v2, "AT+EMCFC=6,0,"

    if-ne v0, v4, :cond_5

    .line 1491
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getPathFleg()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1492
    .restart local v0    # "atMsg":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getOpid()I

    move-result v1

    invoke-direct {p0, p1, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->sendATCommand(ILjava/lang/String;I)V

    goto :goto_1

    .line 1493
    .end local v0    # "atMsg":Ljava/lang/String;
    :cond_5
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getFileList()Ljava/lang/String;

    move-result-object v0

    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    .line 1494
    invoke-virtual {v4}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getOtaFilePath()Ljava/lang/String;

    move-result-object v4

    .line 1493
    invoke-static {v0, v4}, Lcom/mediatek/engineermode/mcfconfig/FileUtils;->isFileExist(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 1495
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getPathFleg()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    .line 1496
    invoke-virtual {v2}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getOtaFileName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1497
    .restart local v0    # "atMsg":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getOpid()I

    move-result v1

    invoke-direct {p0, p1, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->sendATCommand(ILjava/lang/String;I)V

    goto :goto_1

    .line 1499
    .end local v0    # "atMsg":Ljava/lang/String;
    :cond_6
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getPathFleg()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1500
    .restart local v0    # "atMsg":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getOpid()I

    move-result v1

    invoke-direct {p0, p1, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->sendATCommand(ILjava/lang/String;I)V

    .line 1502
    nop

    .line 1524
    .end local v0    # "atMsg":Ljava/lang/String;
    :goto_1
    return-void

    nop

    :array_0
    .array-data 4
        0x1
        0x1
    .end array-data
.end method

.method private getCertPathSharedPreference()V
    .locals 3

    .line 1356
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfConfigSh:Landroid/content/SharedPreferences;

    const-string v1, "is_otapath"

    const/4 v2, 0x1

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaPath:Z

    .line 1357
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfConfigSh:Landroid/content/SharedPreferences;

    const-string v1, "op_id"

    const/16 v2, 0xd

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opId:I

    .line 1358
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfConfigSh:Landroid/content/SharedPreferences;

    const-string v1, "input_op_id"

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->inputOp:Ljava/lang/String;

    .line 1359
    return-void
.end method

.method private getSharedPreference()V
    .locals 4

    .line 1362
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfConfigSh:Landroid/content/SharedPreferences;

    const-string v1, "ota_is_otapath"

    const/4 v2, 0x1

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaOtaPath:Z

    .line 1363
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfConfigSh:Landroid/content/SharedPreferences;

    if-eqz v0, :cond_0

    .line 1364
    const-string v0, "ota_file_otapath"

    goto :goto_0

    :cond_0
    const-string v0, "ota_file_runtimepath"

    .line 1363
    :goto_0
    const-string v3, ""

    invoke-interface {v1, v0, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOtaFile:Ljava/lang/String;

    .line 1365
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfConfigSh:Landroid/content/SharedPreferences;

    const-string v1, "general_opota_is_otapath"

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isGenopotaOtaPath:Z

    .line 1366
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfConfigSh:Landroid/content/SharedPreferences;

    if-eqz v0, :cond_1

    .line 1367
    const-string v0, "general_opota_otapath"

    goto :goto_1

    :cond_1
    const-string v0, "general_opota_runtimepath"

    .line 1366
    :goto_1
    invoke-interface {v1, v0, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetGenOpOtaFile:Ljava/lang/String;

    .line 1369
    iget v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->phoneid:I

    if-ne v0, v2, :cond_3

    .line 1370
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfConfigSh:Landroid/content/SharedPreferences;

    const-string v1, "sim2_opota_is_otapath"

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpotaOtaPath:Z

    .line 1371
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfConfigSh:Landroid/content/SharedPreferences;

    if-eqz v0, :cond_2

    .line 1372
    const-string v0, "sim2_opota_file_otapath"

    goto :goto_2

    :cond_2
    const-string v0, "sim2_opota_file_runtimepath"

    .line 1371
    :goto_2
    invoke-interface {v1, v0, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOpOtaFile:Ljava/lang/String;

    goto :goto_4

    .line 1374
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfConfigSh:Landroid/content/SharedPreferences;

    const-string v1, "sim1_opota_is_otapath"

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpotaOtaPath:Z

    .line 1375
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfConfigSh:Landroid/content/SharedPreferences;

    if-eqz v0, :cond_4

    .line 1376
    const-string v0, "sim1_opota_file_otapath"

    goto :goto_3

    :cond_4
    const-string v0, "sim1_opota_file_runtimepath"

    .line 1375
    :goto_3
    invoke-interface {v1, v0, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOpOtaFile:Ljava/lang/String;

    .line 1378
    :goto_4
    return-void
.end method

.method private rebootModem(Z)V
    .locals 3
    .param p1, "needReset"    # Z

    .line 973
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[rebootModem] begining ... needReset:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "McfConfig"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 974
    if-eqz p1, :cond_0

    .line 975
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->taskSet:Ljava/util/Set;

    const/4 v1, 0x2

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    .line 976
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->rebootModem()V

    .line 977
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mIsModemEnabled:Z

    .line 978
    const/16 v0, 0xb4

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->startTimer(II)V

    .line 980
    :cond_0
    return-void
.end method

.method private reloadOtaPathSharedPreference()V
    .locals 3

    .line 1381
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfConfigSh:Landroid/content/SharedPreferences;

    iget-boolean v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaOtaPath:Z

    if-eqz v1, :cond_0

    .line 1382
    const-string v1, "ota_file_otapath"

    goto :goto_0

    :cond_0
    const-string v1, "ota_file_runtimepath"

    .line 1381
    :goto_0
    const-string v2, ""

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOtaFile:Ljava/lang/String;

    .line 1383
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfConfigSh:Landroid/content/SharedPreferences;

    iget-boolean v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isGenopotaOtaPath:Z

    if-eqz v1, :cond_1

    .line 1384
    const-string v1, "general_opota_otapath"

    goto :goto_1

    :cond_1
    const-string v1, "general_opota_runtimepath"

    .line 1383
    :goto_1
    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetGenOpOtaFile:Ljava/lang/String;

    .line 1386
    iget v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->phoneid:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_3

    .line 1387
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfConfigSh:Landroid/content/SharedPreferences;

    iget-boolean v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpotaOtaPath:Z

    if-eqz v1, :cond_2

    .line 1388
    const-string v1, "sim2_opota_file_otapath"

    goto :goto_2

    :cond_2
    const-string v1, "sim2_opota_file_runtimepath"

    .line 1387
    :goto_2
    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOpOtaFile:Ljava/lang/String;

    goto :goto_4

    .line 1390
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfConfigSh:Landroid/content/SharedPreferences;

    iget-boolean v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpotaOtaPath:Z

    if-eqz v1, :cond_4

    .line 1391
    const-string v1, "sim1_opota_file_otapath"

    goto :goto_3

    :cond_4
    const-string v1, "sim1_opota_file_runtimepath"

    .line 1390
    :goto_3
    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOpOtaFile:Ljava/lang/String;

    .line 1393
    :goto_4
    return-void
.end method

.method private saveSharedPreference(I)V
    .locals 5
    .param p1, "actionCode"    # I

    .line 1396
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfConfigSh:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 1397
    .local v0, "editor":Landroid/content/SharedPreferences$Editor;
    const/4 v1, 0x1

    const-string v2, "McfConfig"

    if-ne p1, v1, :cond_3

    .line 1398
    iget v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->phoneid:I

    if-ne v3, v1, :cond_1

    .line 1399
    nop

    .line 1400
    iget-boolean v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpotaOtaPath:Z

    if-eqz v1, :cond_0

    const-string v1, "sim2_opota_file_otapath"

    goto :goto_0

    .line 1401
    :cond_0
    const-string v1, "sim2_opota_file_runtimepath"

    :goto_0
    iget-object v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOpOtaFile:Ljava/lang/String;

    .line 1399
    invoke-interface {v0, v1, v3}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 1402
    iget-boolean v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpotaOtaPath:Z

    const-string v3, "sim2_opota_is_otapath"

    invoke-interface {v0, v3, v1}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    goto :goto_2

    .line 1404
    :cond_1
    nop

    .line 1405
    iget-boolean v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpotaOtaPath:Z

    if-eqz v1, :cond_2

    const-string v1, "sim1_opota_file_otapath"

    goto :goto_1

    .line 1406
    :cond_2
    const-string v1, "sim1_opota_file_runtimepath"

    :goto_1
    iget-object v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOpOtaFile:Ljava/lang/String;

    .line 1404
    invoke-interface {v0, v1, v3}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 1407
    iget-boolean v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpotaOtaPath:Z

    const-string v3, "sim1_opota_is_otapath"

    invoke-interface {v0, v3, v1}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    .line 1409
    :goto_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[saveSharedPreference] Save opOtaFile success ! opota_file_path: SIM"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->phoneid:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ":["

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOpOtaFile:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "],"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpotaOtaPath:Z

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_5

    .line 1412
    :cond_3
    const-string v1, ","

    if-nez p1, :cond_5

    .line 1413
    nop

    .line 1414
    iget-boolean v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaOtaPath:Z

    if-eqz v3, :cond_4

    const-string v3, "ota_file_otapath"

    goto :goto_3

    .line 1415
    :cond_4
    const-string v3, "ota_file_runtimepath"

    :goto_3
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOtaFile:Ljava/lang/String;

    .line 1413
    invoke-interface {v0, v3, v4}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 1416
    iget-boolean v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaOtaPath:Z

    const-string v4, "ota_is_otapath"

    invoke-interface {v0, v4, v3}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    .line 1417
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "[saveSharedPreference] Save otaFile success "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOtaFile:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaOtaPath:Z

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_5

    .line 1419
    :cond_5
    const/4 v3, 0x2

    if-ne p1, v3, :cond_7

    .line 1420
    nop

    .line 1421
    iget-boolean v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isGenopotaOtaPath:Z

    if-eqz v3, :cond_6

    const-string v3, "general_opota_otapath"

    goto :goto_4

    .line 1422
    :cond_6
    const-string v3, "general_opota_runtimepath"

    :goto_4
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetGenOpOtaFile:Ljava/lang/String;

    .line 1420
    invoke-interface {v0, v3, v4}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 1423
    iget-boolean v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isGenopotaOtaPath:Z

    const-string v4, "general_opota_is_otapath"

    invoke-interface {v0, v4, v3}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    .line 1424
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "[saveSharedPreference] Save genOpOtaFile success ! "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetGenOpOtaFile:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isGenopotaOtaPath:Z

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_5

    .line 1426
    :cond_7
    const/16 v1, 0xc

    if-lt p1, v1, :cond_9

    const/16 v1, 0x17

    if-gt p1, v1, :cond_9

    .line 1428
    iget-boolean v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaPath:Z

    const-string v3, "is_otapath"

    invoke-interface {v0, v3, v1}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    .line 1429
    iget v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opId:I

    const-string v3, "op_id"

    invoke-interface {v0, v3, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 1430
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->sertInputEt:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getVisibility()I

    move-result v1

    if-nez v1, :cond_8

    .line 1431
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->inputOp:Ljava/lang/String;

    const-string v3, "input_op_id"

    invoke-interface {v0, v3, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 1433
    :cond_8
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[saveSharedPreference] Save Certification success ! "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaPath:Z

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, ", "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opId:I

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->inputOp:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1436
    :cond_9
    :goto_5
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 1437
    return-void
.end method

.method private selectFile(Ljava/lang/String;I)V
    .locals 2
    .param p1, "targetPath"    # Ljava/lang/String;
    .param p2, "requestCode"    # I

    .line 845
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[selectFile] storagePath: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "McfConfig"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 846
    invoke-static {p0, p1, p2}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->actionStart(Landroid/app/Activity;Ljava/lang/String;I)V

    .line 848
    return-void
.end method

.method private sendATCommand(ILjava/lang/String;I)V
    .locals 4
    .param p1, "phoneNum"    # I
    .param p2, "cmd"    # Ljava/lang/String;
    .param p3, "what"    # I

    .line 959
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    aput-object p2, v0, v1

    const-string v1, "+EMCFC:"

    const/4 v2, 0x1

    aput-object v1, v0, v2

    .line 960
    .local v0, "atCmd":[Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v1, p1}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getCurCmdResult(I)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 961
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v1, p1}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getCurrentCmd(I)I

    move-result v1

    const-string v3, "McfConfig"

    if-eq v1, v2, :cond_2

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isSimReady(I)Z

    move-result v1

    if-eqz v1, :cond_1

    goto :goto_0

    .line 967
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    const/4 v2, 0x3

    new-array v2, v2, [Z

    fill-array-data v2, :array_0

    invoke-virtual {v1, p1, v2}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setCmdResult(I[Z)V

    .line 968
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[sendATCommand], sim"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " is absent!"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 962
    :cond_2
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[sendATCommand] cmd: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v0}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ", what:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", phoneid: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 964
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mHandler:Landroid/os/Handler;

    mul-int/lit8 v2, p1, 0x6

    add-int/2addr v2, p3

    .line 965
    invoke-virtual {v1, v2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v1

    .line 964
    invoke-static {p1, v0, v1}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 970
    :goto_1
    return-void

    nop

    :array_0
    .array-data 1
        0x1t
        0x1t
        0x1t
    .end array-data
.end method

.method private sendATCommand(Ljava/lang/String;I)V
    .locals 3
    .param p1, "cmd"    # Ljava/lang/String;
    .param p2, "what"    # I

    .line 951
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    const/4 v1, 0x1

    const-string v2, "+EMCFC:"

    aput-object v2, v0, v1

    .line 952
    .local v0, "atCmd":[Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[sendATCommand] cmd: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v0}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ", what:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "McfConfig"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 954
    iget v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->phoneid:I

    iget-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mHandler:Landroid/os/Handler;

    .line 955
    invoke-virtual {v2, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v2

    .line 954
    invoke-static {v1, v0, v2}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 956
    return-void
.end method

.method private showDialog(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3
    .param p1, "title"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/String;

    .line 851
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isFinishing()Z

    move-result v0

    if-nez v0, :cond_0

    .line 852
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const/4 v1, 0x1

    .line 853
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    invoke-virtual {v0, p2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const v1, 0x104000a

    const/4 v2, 0x0

    .line 854
    invoke-virtual {v0, v1, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 855
    .local v0, "dialog":Landroid/app/AlertDialog;
    invoke-virtual {v0}, Landroid/app/AlertDialog;->show()V

    .line 857
    .end local v0    # "dialog":Landroid/app/AlertDialog;
    :cond_0
    return-void
.end method

.method private showProgressDialog(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2
    .param p1, "title"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/String;

    .line 860
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    if-nez v0, :cond_0

    .line 861
    new-instance v0, Landroid/app/ProgressDialog;

    invoke-direct {v0, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    .line 863
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    invoke-virtual {v0, p1}, Landroid/app/ProgressDialog;->setTitle(Ljava/lang/CharSequence;)V

    .line 864
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    invoke-virtual {v0, p2}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 865
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 866
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 867
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    invoke-virtual {v0}, Landroid/app/ProgressDialog;->show()V

    .line 868
    const-string v0, "McfConfig"

    const-string v1, "After timer.start"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 869
    return-void
.end method


# virtual methods
.method public byteArrayToStr([B)Ljava/lang/String;
    .locals 1
    .param p1, "byteArray"    # [B

    .line 1440
    if-nez p1, :cond_0

    .line 1441
    const/4 v0, 0x0

    return-object v0

    .line 1443
    :cond_0
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, p1}, Ljava/lang/String;-><init>([B)V

    .line 1444
    .local v0, "str":Ljava/lang/String;
    return-object v0
.end method

.method public getSelectedFilePath(Landroid/net/Uri;)V
    .locals 3
    .param p1, "contentUri"    # Landroid/net/Uri;

    .line 983
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[getSelectedFilePath] uri: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 984
    if-eqz p1, :cond_0

    invoke-virtual {p1}, Landroid/net/Uri;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_0
    const-string v1, "NULL"

    :goto_0
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 983
    const-string v1, "McfConfig"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 985
    if-nez p1, :cond_1

    .line 986
    return-void

    .line 988
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[getUriForFile] path :"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/net/Uri;->getPath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 989
    return-void
.end method

.method getStringValueFromMap(ILjava/util/HashMap;)Ljava/lang/String;
    .locals 2
    .param p1, "key"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 241
    .local p2, "sourceSet":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/Integer;Ljava/lang/String;>;"
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    goto :goto_0

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    :goto_0
    return-object v0
.end method

.method public isSimReady(I)Z
    .locals 3
    .param p1, "slotId"    # I

    .line 810
    nop

    .line 811
    const-string v0, "phone"

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/telephony/TelephonyManager;

    .line 812
    .local v0, "telephonyManager":Landroid/telephony/TelephonyManager;
    const/4 v1, 0x0

    .line 813
    .local v1, "status":I
    if-gez p1, :cond_0

    .line 814
    invoke-virtual {v0}, Landroid/telephony/TelephonyManager;->getSimState()I

    move-result v1

    goto :goto_0

    .line 816
    :cond_0
    invoke-virtual {v0, p1}, Landroid/telephony/TelephonyManager;->getSimState(I)I

    move-result v1

    .line 819
    :goto_0
    const/4 v2, 0x1

    if-ne v1, v2, :cond_1

    .line 820
    const/4 v2, 0x0

    return v2

    .line 821
    :cond_1
    return v2
.end method

.method public onActivityResult(IILandroid/content/Intent;)V
    .locals 8
    .param p1, "requestCode"    # I
    .param p2, "resultCode"    # I
    .param p3, "data"    # Landroid/content/Intent;

    .line 873
    const-string v0, "McfConfig"

    const/4 v1, -0x1

    if-eq p2, v1, :cond_0

    .line 874
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[onActivityResult] error, resultCode: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 875
    invoke-super {p0, p1, p2, p3}, Landroid/app/Activity;->onActivityResult(IILandroid/content/Intent;)V

    .line 876
    return-void

    .line 878
    :cond_0
    invoke-virtual {p3}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v1

    .line 879
    .local v1, "uri":Landroid/net/Uri;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[getSelectedFilePath] uri: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 881
    if-eqz v1, :cond_1

    invoke-virtual {v1}, Landroid/net/Uri;->toString()Ljava/lang/String;

    move-result-object v3

    goto :goto_0

    :cond_1
    const-string v3, "NULL"

    :goto_0
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 879
    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 882
    if-nez v1, :cond_2

    .line 883
    return-void

    .line 885
    :cond_2
    invoke-virtual {v1}, Landroid/net/Uri;->getPath()Ljava/lang/String;

    move-result-object v2

    .line 886
    .local v2, "srcOtaPath":Ljava/lang/String;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "[onActivityResult] otaFile: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 887
    const/4 v3, -0x1

    .line 888
    .local v3, "ret":I
    const-string v4, ""

    if-eqz p1, :cond_7

    const/4 v5, 0x1

    const-string v6, "Invalid File! (ex:*.mcfopota)"

    const-string v7, "Select OP-OTA Path: "

    if-eq p1, v5, :cond_5

    const/4 v5, 0x2

    if-eq p1, v5, :cond_3

    .line 931
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "unsupport requestCode :"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_1

    .line 917
    :cond_3
    sget-object v5, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->OP_OTA_SUFFIX:[Ljava/lang/String;

    invoke-direct {p0, v2, v5}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->checkPathValid(Ljava/lang/String;[Ljava/lang/String;)Z

    move-result v5

    iput-boolean v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isGenOpOtaPathValid:Z

    .line 919
    if-eqz v5, :cond_4

    .line 920
    iput-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetGenOpOtaFile:Ljava/lang/String;

    .line 921
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->genOpOtaFile:Landroid/widget/TextView;

    invoke-virtual {v4, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 922
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "isGenOpOtaPathValid: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isGenOpOtaPathValid:Z

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v5, ",targetGenOpOtaFile :"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetGenOpOtaFile:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_1

    .line 925
    :cond_4
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->genOpOtaFile:Landroid/widget/TextView;

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 926
    invoke-direct {p0, v7, v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    .line 929
    goto/16 :goto_1

    .line 903
    :cond_5
    sget-object v5, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->OP_OTA_SUFFIX:[Ljava/lang/String;

    invoke-direct {p0, v2, v5}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->checkPathValid(Ljava/lang/String;[Ljava/lang/String;)Z

    move-result v5

    iput-boolean v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpOtaPathValid:Z

    .line 905
    if-eqz v5, :cond_6

    .line 906
    iput-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOpOtaFile:Ljava/lang/String;

    .line 907
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opOtaFile:Landroid/widget/TextView;

    invoke-virtual {v4, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 908
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "isOpOtaPathValid: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpOtaPathValid:Z

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v5, ",targetOpOtaPath :"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOpOtaFile:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ", "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opOtaFile:Landroid/widget/TextView;

    .line 909
    invoke-virtual {v5}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 908
    invoke-static {v0, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 911
    :cond_6
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opOtaFile:Landroid/widget/TextView;

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 912
    invoke-direct {p0, v7, v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    .line 915
    goto :goto_1

    .line 890
    :cond_7
    sget-object v5, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->OTA_SUFFIX:[Ljava/lang/String;

    invoke-direct {p0, v2, v5}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->checkPathValid(Ljava/lang/String;[Ljava/lang/String;)Z

    move-result v5

    iput-boolean v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaPathValid:Z

    .line 892
    if-eqz v5, :cond_8

    .line 893
    iput-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOtaFile:Ljava/lang/String;

    .line 894
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->otaFile:Landroid/widget/TextView;

    invoke-virtual {v4, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 895
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "isOtaPathValid: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaPathValid:Z

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v5, ",targetOtaPath :"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOtaFile:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 898
    :cond_8
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->otaFile:Landroid/widget/TextView;

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 899
    const-string v0, "Select OTA Path: "

    const-string v4, "Invalid File! (ex:*.mcfota)"

    invoke-direct {p0, v0, v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    .line 901
    nop

    .line 934
    :goto_1
    invoke-super {p0, p1, p2, p3}, Landroid/app/Activity;->onActivityResult(IILandroid/content/Intent;)V

    .line 935
    return-void
.end method

.method public onBackPressed()V
    .locals 2

    .line 835
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->taskSet:Ljava/util/Set;

    const/4 v1, 0x2

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 836
    const-string v0, "Please Wait"

    const-string v1, "Reboot modem is ongoing......"

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    .line 837
    return-void

    .line 839
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->taskSet:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->clear()V

    .line 840
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->finish()V

    .line 842
    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 18
    .param p1, "v"    # Landroid/view/View;

    .line 1033
    move-object/from16 v0, p0

    invoke-virtual/range {p1 .. p1}, Landroid/view/View;->getId()I

    move-result v1

    const-string v2, "OP-OTA File is invalid!"

    const-string v3, "AT+EMCFC=6,0,"

    const-string v4, "AT+EMCFC=6,1,"

    const-string v5, "AT+EMCFC=6,2,"

    const-string v6, "AT+EMCFC=4,0"

    const-string v7, "\""

    const-string v8, "\"\",0"

    const-string v9, ","

    const-string v12, "Reboot modem is ongoing......"

    const-string v13, "Please Wait"

    const-string v14, ""

    const-string v15, "McfConfig"

    const/4 v10, 0x2

    .line 1199
    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    .line 1033
    const-string v10, "/vendor/etc/mdota/"

    move-object/from16 v16, v5

    const-string v5, "/mnt/vendor/nvcfg/mdota/"

    move-object/from16 v17, v2

    const/4 v2, 0x1

    sparse-switch v1, :sswitch_data_0

    goto/16 :goto_14

    .line 1184
    :sswitch_0
    const-string v1, "Ota query begain"

    invoke-static {v15, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1185
    const/16 v1, 0x8

    iput v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opId:I

    .line 1186
    invoke-direct {v0, v6, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->sendATCommand(Ljava/lang/String;I)V

    .line 1187
    goto/16 :goto_14

    .line 1169
    :sswitch_1
    const-string v1, "AT+EMCFC=5"

    .line 1170
    .local v1, "dumpOtaCmd":Ljava/lang/String;
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iput-wide v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->dumpBegain:J

    .line 1171
    new-instance v2, Ljava/text/SimpleDateFormat;

    const-string v3, "HH:mm:ss"

    invoke-direct {v2, v3}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    .line 1172
    .local v2, "df":Ljava/text/SimpleDateFormat;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Dump OTA file begain :"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v4, Ljava/util/Date;

    iget-wide v5, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->dumpBegain:J

    invoke-direct {v4, v5, v6}, Ljava/util/Date;-><init>(J)V

    .line 1173
    invoke-virtual {v2, v4}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 1172
    invoke-static {v15, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1174
    const/4 v3, 0x6

    iput v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opId:I

    .line 1175
    invoke-direct {v0, v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->sendATCommand(Ljava/lang/String;I)V

    .line 1176
    goto/16 :goto_14

    .line 1075
    .end local v1    # "dumpOtaCmd":Ljava/lang/String;
    .end local v2    # "df":Ljava/text/SimpleDateFormat;
    :sswitch_2
    iput-boolean v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->resetMd:Z

    .line 1076
    iput v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opId:I

    .line 1077
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->taskSet:Ljava/util/Set;

    invoke-interface {v1, v11}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 1078
    invoke-direct {v0, v13, v12}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    .line 1079
    return-void

    .line 1081
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1082
    iget-boolean v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaOtaPath:Z

    xor-int/2addr v3, v2

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ",\"\",0"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 1083
    .local v1, "clearOtaCmd":Ljava/lang/String;
    invoke-direct {v0, v1, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->sendATCommand(Ljava/lang/String;I)V

    .line 1084
    goto/16 :goto_14

    .line 1047
    .end local v1    # "clearOtaCmd":Ljava/lang/String;
    :sswitch_3
    iput-boolean v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->resetMd:Z

    .line 1048
    const/4 v1, 0x0

    iput v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opId:I

    .line 1049
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->otaFile:Landroid/widget/TextView;

    invoke-virtual {v1}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    iput-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOtaFile:Ljava/lang/String;

    .line 1050
    sget-object v4, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->OTA_SUFFIX:[Ljava/lang/String;

    invoke-direct {v0, v1, v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->checkPathValid(Ljava/lang/String;[Ljava/lang/String;)Z

    move-result v1

    iput-boolean v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaPathValid:Z

    .line 1052
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaOtaPath:Z

    xor-int/2addr v2, v3

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 1053
    .local v1, "setOtaCmd":Ljava/lang/String;
    iget-boolean v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaPathValid:Z

    if-nez v2, :cond_1

    .line 1054
    const-string v2, "Apply OTA Error"

    const-string v3, "OTA File is invalid!"

    invoke-direct {v0, v2, v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    .line 1055
    return-void

    .line 1057
    :cond_1
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->taskSet:Ljava/util/Set;

    invoke-interface {v2, v11}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 1058
    invoke-direct {v0, v13, v12}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    .line 1059
    return-void

    .line 1061
    :cond_2
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOtaFile:Ljava/lang/String;

    if-eqz v2, :cond_6

    invoke-virtual {v2}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    goto :goto_2

    .line 1064
    :cond_3
    iget-boolean v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaOtaPath:Z

    if-eqz v2, :cond_4

    .line 1065
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOtaFile:Ljava/lang/String;

    invoke-virtual {v2, v10}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v10}, Ljava/lang/String;->length()I

    move-result v3

    add-int/2addr v2, v3

    goto :goto_0

    .line 1066
    :cond_4
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOtaFile:Ljava/lang/String;

    invoke-virtual {v2, v5}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v5}, Ljava/lang/String;->length()I

    move-result v3

    add-int/2addr v2, v3

    :goto_0
    nop

    .line 1067
    .local v2, "dirPos":I
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1068
    iget-boolean v4, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaPathValid:Z

    if-eqz v4, :cond_5

    if-ltz v2, :cond_5

    .line 1069
    iget-object v4, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOtaFile:Ljava/lang/String;

    invoke-virtual {v4, v2}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v14

    goto :goto_1

    :cond_5
    nop

    :goto_1
    invoke-virtual {v3, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "\",0"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_3

    .line 1062
    .end local v2    # "dirPos":I
    :cond_6
    :goto_2
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 1071
    :goto_3
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "ATCommand: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v15, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1072
    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->sendATCommand(Ljava/lang/String;I)V

    .line 1073
    goto/16 :goto_14

    .line 1194
    .end local v1    # "setOtaCmd":Ljava/lang/String;
    :sswitch_4
    const-string v1, "OpOta query begain"

    invoke-static {v15, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1195
    const/16 v1, 0x9

    iput v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opId:I

    .line 1196
    const-string v2, "AT+EMCFC=4,1"

    invoke-direct {v0, v2, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->sendATCommand(Ljava/lang/String;I)V

    .line 1197
    goto/16 :goto_14

    .line 1114
    :sswitch_5
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->taskSet:Ljava/util/Set;

    invoke-interface {v1, v11}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_7

    .line 1115
    invoke-direct {v0, v13, v12}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    .line 1116
    return-void

    .line 1118
    :cond_7
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1119
    iget-boolean v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpotaOtaPath:Z

    xor-int/2addr v3, v2

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ",\"\","

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 1120
    .local v1, "clearOpOtaCmd":Ljava/lang/String;
    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opotaResetMdEnable:Landroid/widget/CheckBox;

    invoke-virtual {v3}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v3

    iput-boolean v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->resetMd:Z

    .line 1121
    const/4 v3, 0x3

    iput v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opId:I

    .line 1122
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v4, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->resetMd:Z

    xor-int/2addr v2, v4

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 1123
    const/4 v2, 0x3

    invoke-direct {v0, v1, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->sendATCommand(Ljava/lang/String;I)V

    .line 1124
    goto/16 :goto_14

    .line 1086
    .end local v1    # "clearOpOtaCmd":Ljava/lang/String;
    :sswitch_6
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opOtaFile:Landroid/widget/TextView;

    invoke-virtual {v1}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    iput-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOpOtaFile:Ljava/lang/String;

    .line 1087
    sget-object v3, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->OP_OTA_SUFFIX:[Ljava/lang/String;

    invoke-direct {v0, v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->checkPathValid(Ljava/lang/String;[Ljava/lang/String;)Z

    move-result v1

    iput-boolean v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpOtaPathValid:Z

    .line 1089
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpotaOtaPath:Z

    xor-int/2addr v3, v2

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 1090
    .local v1, "setOpOtaCmd":Ljava/lang/String;
    iget-boolean v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpOtaPathValid:Z

    if-nez v3, :cond_8

    .line 1091
    const-string v2, "Apply Op-OTA Error"

    move-object/from16 v3, v17

    invoke-direct {v0, v2, v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    .line 1092
    return-void

    .line 1094
    :cond_8
    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->taskSet:Ljava/util/Set;

    invoke-interface {v3, v11}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_9

    .line 1095
    invoke-direct {v0, v13, v12}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    .line 1096
    return-void

    .line 1098
    :cond_9
    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOpOtaFile:Ljava/lang/String;

    if-eqz v3, :cond_d

    invoke-virtual {v3}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_a

    goto :goto_6

    .line 1101
    :cond_a
    iget-boolean v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpotaOtaPath:Z

    if-eqz v3, :cond_b

    .line 1102
    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOpOtaFile:Ljava/lang/String;

    invoke-virtual {v3, v10}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v10}, Ljava/lang/String;->length()I

    move-result v4

    add-int/2addr v3, v4

    goto :goto_4

    .line 1103
    :cond_b
    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOpOtaFile:Ljava/lang/String;

    invoke-virtual {v3, v5}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v5}, Ljava/lang/String;->length()I

    move-result v4

    add-int/2addr v3, v4

    :goto_4
    nop

    .line 1104
    .local v3, "opDirPos":I
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1105
    iget-boolean v5, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpOtaPathValid:Z

    if-eqz v5, :cond_c

    if-ltz v3, :cond_c

    .line 1106
    iget-object v5, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetOpOtaFile:Ljava/lang/String;

    invoke-virtual {v5, v3}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v14

    goto :goto_5

    :cond_c
    nop

    :goto_5
    invoke-virtual {v4, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "\","

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_7

    .line 1099
    .end local v3    # "opDirPos":I
    :cond_d
    :goto_6
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 1108
    :goto_7
    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opotaResetMdEnable:Landroid/widget/CheckBox;

    invoke-virtual {v3}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v3

    iput-boolean v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->resetMd:Z

    .line 1109
    const/4 v3, 0x2

    iput v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opId:I

    .line 1110
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v4, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->resetMd:Z

    xor-int/2addr v2, v4

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 1111
    const/4 v2, 0x2

    invoke-direct {v0, v1, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->sendATCommand(Ljava/lang/String;I)V

    .line 1112
    goto/16 :goto_14

    .line 1178
    .end local v1    # "setOpOtaCmd":Ljava/lang/String;
    :sswitch_7
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Ini refresh begain, iniStatus:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->iniStatus:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v15, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1179
    const/4 v1, 0x7

    iput v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opId:I

    .line 1180
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "AT+EMCFC=7,"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->iniStatus:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v2, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->sendATCommand(Ljava/lang/String;I)V

    .line 1182
    goto/16 :goto_14

    .line 1157
    :sswitch_8
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->taskSet:Ljava/util/Set;

    invoke-interface {v1, v11}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_e

    .line 1158
    invoke-direct {v0, v13, v12}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    .line 1159
    return-void

    .line 1161
    :cond_e
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v4, v16

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1162
    iget-boolean v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isGenopotaOtaPath:Z

    xor-int/2addr v3, v2

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ",\"\","

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 1163
    .local v1, "clearGenOpOtaCmd":Ljava/lang/String;
    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->genOpotaResetMdEnable:Landroid/widget/CheckBox;

    invoke-virtual {v3}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v3

    iput-boolean v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->resetMd:Z

    .line 1164
    const/4 v3, 0x5

    iput v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opId:I

    .line 1165
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v4, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->resetMd:Z

    xor-int/2addr v2, v4

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 1166
    const/4 v2, 0x5

    invoke-direct {v0, v1, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->sendATCommand(Ljava/lang/String;I)V

    .line 1167
    goto/16 :goto_14

    .line 1126
    .end local v1    # "clearGenOpOtaCmd":Ljava/lang/String;
    :sswitch_9
    move-object/from16 v4, v16

    move-object/from16 v3, v17

    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->genOpOtaFile:Landroid/widget/TextView;

    invoke-virtual {v1}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    iput-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetGenOpOtaFile:Ljava/lang/String;

    .line 1127
    sget-object v6, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->OP_OTA_SUFFIX:[Ljava/lang/String;

    invoke-direct {v0, v1, v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->checkPathValid(Ljava/lang/String;[Ljava/lang/String;)Z

    move-result v1

    iput-boolean v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isGenOpOtaPathValid:Z

    .line 1129
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1130
    iget-boolean v4, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isGenopotaOtaPath:Z

    xor-int/2addr v4, v2

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 1131
    .local v1, "setGenOpOtaCmd":Ljava/lang/String;
    iget-boolean v4, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isGenOpOtaPathValid:Z

    if-nez v4, :cond_f

    .line 1132
    const-string v2, "Apply General Op-OTA Error"

    invoke-direct {v0, v2, v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    .line 1134
    return-void

    .line 1136
    :cond_f
    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->taskSet:Ljava/util/Set;

    invoke-interface {v3, v11}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_10

    .line 1137
    invoke-direct {v0, v13, v12}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    .line 1138
    return-void

    .line 1140
    :cond_10
    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetGenOpOtaFile:Ljava/lang/String;

    if-eqz v3, :cond_14

    .line 1141
    invoke-virtual {v3}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_11

    goto :goto_a

    .line 1144
    :cond_11
    iget-boolean v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isGenopotaOtaPath:Z

    if-eqz v3, :cond_12

    .line 1145
    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetGenOpOtaFile:Ljava/lang/String;

    invoke-virtual {v3, v10}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v10}, Ljava/lang/String;->length()I

    move-result v4

    add-int/2addr v3, v4

    goto :goto_8

    .line 1146
    :cond_12
    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetGenOpOtaFile:Ljava/lang/String;

    invoke-virtual {v3, v5}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v5}, Ljava/lang/String;->length()I

    move-result v4

    add-int/2addr v3, v4

    :goto_8
    nop

    .line 1147
    .restart local v3    # "opDirPos":I
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1148
    iget-boolean v5, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isGenOpOtaPathValid:Z

    if-eqz v5, :cond_13

    if-ltz v3, :cond_13

    .line 1149
    iget-object v5, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->targetGenOpOtaFile:Ljava/lang/String;

    invoke-virtual {v5, v3}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v14

    goto :goto_9

    :cond_13
    nop

    :goto_9
    invoke-virtual {v4, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "\",0"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_b

    .line 1142
    .end local v3    # "opDirPos":I
    :cond_14
    :goto_a
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 1151
    :goto_b
    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->genOpotaResetMdEnable:Landroid/widget/CheckBox;

    invoke-virtual {v3}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v3

    iput-boolean v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->resetMd:Z

    .line 1152
    const/4 v3, 0x4

    iput v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opId:I

    .line 1153
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v4, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->resetMd:Z

    xor-int/2addr v2, v4

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 1154
    const/4 v2, 0x4

    invoke-direct {v0, v1, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->sendATCommand(Ljava/lang/String;I)V

    .line 1155
    goto/16 :goto_14

    .line 1189
    .end local v1    # "setGenOpOtaCmd":Ljava/lang/String;
    :sswitch_a
    const-string v1, "Cert Ota query begain"

    invoke-static {v15, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1190
    const/16 v1, 0x8

    iput v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opId:I

    .line 1191
    invoke-direct {v0, v6, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->sendATCommand(Ljava/lang/String;I)V

    .line 1192
    goto/16 :goto_14

    .line 1199
    :sswitch_b
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->taskSet:Ljava/util/Set;

    invoke-interface {v1, v11}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_15

    .line 1200
    invoke-direct {v0, v13, v12}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    .line 1201
    return-void

    .line 1203
    :cond_15
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "certification begain "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opId:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ", isOtaPath: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaPath:Z

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v15, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1204
    new-instance v1, Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-direct {v1}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;-><init>()V

    iput-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    .line 1205
    iget v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opId:I

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setOpid(I)V

    .line 1206
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    const/4 v3, 0x2

    new-array v3, v3, [[Z

    const/4 v4, 0x3

    new-array v6, v4, [Z

    fill-array-data v6, :array_0

    const/4 v7, 0x0

    aput-object v6, v3, v7

    new-array v4, v4, [Z

    fill-array-data v4, :array_1

    aput-object v4, v3, v2

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setCmdResult([[Z)V

    .line 1207
    iget v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opId:I

    packed-switch v1, :pswitch_data_0

    .line 1262
    goto/16 :goto_14

    .line 1253
    :pswitch_0
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    const-string v3, "CERT_COMMON"

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setOpName(Ljava/lang/String;)V

    .line 1254
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    const-string v3, "MTK_OTA_CERT_COMMON.mcfota"

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setOtaFileName(Ljava/lang/String;)V

    .line 1255
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    const-string v3, "MTK_OPOTA_CERT_COMMON.mcfopota"

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setOpotaFileName(Ljava/lang/String;)V

    .line 1256
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    iget-boolean v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaPath:Z

    if-eqz v3, :cond_16

    goto :goto_c

    .line 1257
    :cond_16
    move-object v10, v5

    .line 1256
    :goto_c
    invoke-virtual {v1, v10}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setFilePath(Ljava/lang/String;)V

    .line 1258
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    iget-boolean v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaPath:Z

    xor-int/2addr v3, v2

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setPathFleg(I)V

    .line 1259
    new-instance v1, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$FileLoadTask;

    invoke-direct {v1, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$FileLoadTask;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    new-array v2, v2, [Ljava/lang/String;

    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getFilePath()Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x0

    aput-object v3, v2, v4

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$FileLoadTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 1260
    goto/16 :goto_14

    .line 1244
    :pswitch_1
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    const-string v3, "CU"

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setOpName(Ljava/lang/String;)V

    .line 1245
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    const-string v3, "MTK_OTA_CU.mcfota"

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setOtaFileName(Ljava/lang/String;)V

    .line 1246
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    const-string v3, "MTK_OPOTA_CU.mcfopota"

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setOpotaFileName(Ljava/lang/String;)V

    .line 1247
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    iget-boolean v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaPath:Z

    if-eqz v3, :cond_17

    goto :goto_d

    .line 1248
    :cond_17
    move-object v10, v5

    .line 1247
    :goto_d
    invoke-virtual {v1, v10}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setFilePath(Ljava/lang/String;)V

    .line 1249
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    iget-boolean v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaPath:Z

    xor-int/2addr v3, v2

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setPathFleg(I)V

    .line 1250
    new-instance v1, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$FileLoadTask;

    invoke-direct {v1, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$FileLoadTask;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    new-array v2, v2, [Ljava/lang/String;

    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getFilePath()Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x0

    aput-object v3, v2, v4

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$FileLoadTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 1251
    goto/16 :goto_14

    .line 1235
    :pswitch_2
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    const-string v3, "CT"

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setOpName(Ljava/lang/String;)V

    .line 1236
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    const-string v3, "MTK_OTA_CT.mcfota"

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setOtaFileName(Ljava/lang/String;)V

    .line 1237
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    const-string v3, "MTK_OPOTA_CT.mcfopota"

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setOpotaFileName(Ljava/lang/String;)V

    .line 1238
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    iget-boolean v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaPath:Z

    if-eqz v3, :cond_18

    goto :goto_e

    .line 1239
    :cond_18
    move-object v10, v5

    .line 1238
    :goto_e
    invoke-virtual {v1, v10}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setFilePath(Ljava/lang/String;)V

    .line 1240
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    iget-boolean v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaPath:Z

    xor-int/2addr v3, v2

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setPathFleg(I)V

    .line 1241
    new-instance v1, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$FileLoadTask;

    invoke-direct {v1, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$FileLoadTask;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    new-array v2, v2, [Ljava/lang/String;

    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getFilePath()Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x0

    aput-object v3, v2, v4

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$FileLoadTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 1242
    goto/16 :goto_14

    .line 1226
    :pswitch_3
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    const-string v3, "CMCC"

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setOpName(Ljava/lang/String;)V

    .line 1227
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    const-string v3, "MTK_OTA_CMCC.mcfota"

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setOtaFileName(Ljava/lang/String;)V

    .line 1228
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    const-string v3, "MTK_OPOTA_CMCC.mcfopota"

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setOpotaFileName(Ljava/lang/String;)V

    .line 1229
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    iget-boolean v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaPath:Z

    if-eqz v3, :cond_19

    goto :goto_f

    .line 1230
    :cond_19
    move-object v10, v5

    .line 1229
    :goto_f
    invoke-virtual {v1, v10}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setFilePath(Ljava/lang/String;)V

    .line 1231
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    iget-boolean v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaPath:Z

    xor-int/2addr v3, v2

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setPathFleg(I)V

    .line 1232
    new-instance v1, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$FileLoadTask;

    invoke-direct {v1, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$FileLoadTask;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    new-array v2, v2, [Ljava/lang/String;

    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getFilePath()Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x0

    aput-object v3, v2, v4

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$FileLoadTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 1233
    goto/16 :goto_14

    .line 1220
    :pswitch_4
    const/4 v4, 0x0

    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v1, v14}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setOpName(Ljava/lang/String;)V

    .line 1221
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    iget v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->phoneid:I

    invoke-virtual {v1, v3, v4}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setCurrentCmd(II)V

    .line 1222
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    iget-boolean v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaPath:Z

    xor-int/2addr v2, v3

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setPathFleg(I)V

    .line 1223
    iget v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->phoneid:I

    invoke-direct {v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->doCertificationAction(I)V

    .line 1224
    goto/16 :goto_14

    .line 1209
    :pswitch_5
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->sertInputEt:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, " "

    invoke-virtual {v1, v3, v14}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->inputOp:Ljava/lang/String;

    .line 1210
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Select operator is "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->inputOp:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v15, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1211
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->inputOp:Ljava/lang/String;

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setOpName(Ljava/lang/String;)V

    .line 1212
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "MTK_OTA_"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->inputOp:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ".mcfota"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setOtaFileName(Ljava/lang/String;)V

    .line 1213
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "MTK_OPOTA_"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->inputOp:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ".mcfopota"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setOpotaFileName(Ljava/lang/String;)V

    .line 1214
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    iget-boolean v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaPath:Z

    if-eqz v3, :cond_1a

    goto :goto_10

    .line 1215
    :cond_1a
    move-object v10, v5

    .line 1214
    :goto_10
    invoke-virtual {v1, v10}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setFilePath(Ljava/lang/String;)V

    .line 1216
    iget-object v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    iget-boolean v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaPath:Z

    xor-int/2addr v3, v2

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setPathFleg(I)V

    .line 1217
    new-instance v1, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$FileLoadTask;

    invoke-direct {v1, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$FileLoadTask;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    new-array v2, v2, [Ljava/lang/String;

    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getFilePath()Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x0

    aput-object v3, v2, v4

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$FileLoadTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 1218
    goto :goto_14

    .line 1035
    :sswitch_c
    iget-boolean v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaOtaPath:Z

    if-eqz v1, :cond_1b

    goto :goto_11

    .line 1036
    :cond_1b
    move-object v10, v5

    :goto_11
    nop

    .line 1035
    const/4 v1, 0x0

    invoke-direct {v0, v10, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->selectFile(Ljava/lang/String;I)V

    .line 1037
    goto :goto_14

    .line 1039
    :sswitch_d
    iget-boolean v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpotaOtaPath:Z

    if-eqz v1, :cond_1c

    goto :goto_12

    .line 1040
    :cond_1c
    move-object v10, v5

    :goto_12
    nop

    .line 1039
    invoke-direct {v0, v10, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->selectFile(Ljava/lang/String;I)V

    .line 1041
    goto :goto_14

    .line 1043
    :sswitch_e
    iget-boolean v1, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isGenopotaOtaPath:Z

    if-eqz v1, :cond_1d

    goto :goto_13

    .line 1044
    :cond_1d
    move-object v10, v5

    :goto_13
    nop

    .line 1043
    const/4 v1, 0x2

    invoke-direct {v0, v10, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->selectFile(Ljava/lang/String;I)V

    .line 1045
    nop

    .line 1268
    :goto_14
    return-void

    nop

    :sswitch_data_0
    .sparse-switch
        0x7f06017c -> :sswitch_e
        0x7f060181 -> :sswitch_d
        0x7f060182 -> :sswitch_c
        0x7f060271 -> :sswitch_b
        0x7f060273 -> :sswitch_a
        0x7f0603d6 -> :sswitch_9
        0x7f0603d7 -> :sswitch_8
        0x7f060506 -> :sswitch_7
        0x7f0605dd -> :sswitch_6
        0x7f0605de -> :sswitch_5
        0x7f0605e1 -> :sswitch_4
        0x7f0605e5 -> :sswitch_3
        0x7f0605e6 -> :sswitch_2
        0x7f0605e7 -> :sswitch_1
        0x7f0605eb -> :sswitch_0
    .end sparse-switch

    :pswitch_data_0
    .packed-switch 0xc
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch

    :array_0
    .array-data 1
        0x0t
        0x0t
        0x0t
    .end array-data

    :array_1
    .array-data 1
        0x0t
        0x0t
        0x0t
    .end array-data
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 9
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 706
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 707
    const v0, 0x7f080050

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->setContentView(I)V

    .line 708
    const v0, 0x7f06066e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opotaResetMdEnable:Landroid/widget/CheckBox;

    .line 709
    const v0, 0x7f0603dc

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->genOpotaResetMdEnable:Landroid/widget/CheckBox;

    .line 710
    const v0, 0x7f06055f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opotaView:Landroid/widget/LinearLayout;

    .line 711
    const v0, 0x7f06055e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->generalView:Landroid/widget/LinearLayout;

    .line 712
    const v0, 0x7f06055d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->certificationView:Landroid/widget/LinearLayout;

    .line 713
    const v0, 0x7f060182

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->addOtaBtn:Landroid/widget/Button;

    .line 714
    const v0, 0x7f060181

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->addOpOtaBtn:Landroid/widget/Button;

    .line 715
    const v0, 0x7f06017c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->addGenOpOtaBtn:Landroid/widget/Button;

    .line 716
    const v0, 0x7f0605eb

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->otaQueryBtn:Landroid/widget/Button;

    .line 717
    const v0, 0x7f060273

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->certotaQueryBtn:Landroid/widget/Button;

    .line 718
    const v0, 0x7f0605e1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opOtaQueryBtn:Landroid/widget/Button;

    .line 719
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->addOtaBtn:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 720
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->addOpOtaBtn:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 721
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->addGenOpOtaBtn:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 722
    const v0, 0x7f0605e5

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->applyOtaBtn:Landroid/widget/Button;

    .line 723
    const v0, 0x7f0605e6

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->clearOtaBtn:Landroid/widget/Button;

    .line 724
    const v0, 0x7f0605dd

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->applyOpOtaBtn:Landroid/widget/Button;

    .line 725
    const v0, 0x7f0605de

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->clearOpOtaBtn:Landroid/widget/Button;

    .line 726
    const v0, 0x7f0603d6

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->applyGenOpOtaBtn:Landroid/widget/Button;

    .line 727
    const v0, 0x7f0603d7

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->clearGenOpOtaBtn:Landroid/widget/Button;

    .line 728
    const v0, 0x7f0605e7

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->dumpOta:Landroid/widget/Button;

    .line 729
    const v0, 0x7f060506

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->iniRefreshBtn:Landroid/widget/Button;

    .line 730
    const v0, 0x7f060507

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->iniStatusGroup:Landroid/widget/RadioGroup;

    .line 731
    const v0, 0x7f060271

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->certBtn:Landroid/widget/Button;

    .line 732
    const v0, 0x7f0605f5

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->pathRgroup:Landroid/widget/RadioGroup;

    .line 733
    const v0, 0x7f0603db

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->otaPathRgroup:Landroid/widget/RadioGroup;

    .line 734
    const v0, 0x7f0605e0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opOtaPathRgroup:Landroid/widget/RadioGroup;

    .line 735
    const v0, 0x7f0603d9

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->genOpotaPathRgroup:Landroid/widget/RadioGroup;

    .line 736
    const v0, 0x7f0605e9

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaOtaPathBt:Landroid/widget/RadioButton;

    .line 737
    const v0, 0x7f0605ec

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaRuntimePathBt:Landroid/widget/RadioButton;

    .line 738
    const v0, 0x7f0603d8

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isGenopotaOtaPathBt:Landroid/widget/RadioButton;

    .line 739
    const v0, 0x7f0603da

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isGenopotaRuntimePathBt:Landroid/widget/RadioButton;

    .line 740
    const v0, 0x7f0605df

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpotaOtaPathBt:Landroid/widget/RadioButton;

    .line 741
    const v0, 0x7f0605e2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOpotaRuntimePathBt:Landroid/widget/RadioButton;

    .line 742
    const v0, 0x7f0605db

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mSpinner:Landroid/widget/Spinner;

    .line 743
    const v0, 0x7f060272

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->sertInputEt:Landroid/widget/EditText;

    .line 744
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->applyOtaBtn:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 745
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->clearOtaBtn:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 746
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->applyOpOtaBtn:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 747
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->clearOpOtaBtn:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 748
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->applyGenOpOtaBtn:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 749
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->clearGenOpOtaBtn:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 750
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->dumpOta:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 751
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->iniRefreshBtn:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 752
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->otaQueryBtn:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 753
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->certotaQueryBtn:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 754
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opOtaQueryBtn:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 755
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->certBtn:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 756
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->sertInputEt:Landroid/widget/EditText;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setVisibility(I)V

    .line 758
    const v0, 0x7f0605da

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opOtaFile:Landroid/widget/TextView;

    .line 759
    const v0, 0x7f0605e8

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->otaFile:Landroid/widget/TextView;

    .line 760
    const v0, 0x7f0603de

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->genOpOtaFile:Landroid/widget/TextView;

    .line 761
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isOtaPath:Z

    .line 762
    const v2, 0x7f010056

    const v3, 0x1090008

    invoke-static {p0, v2, v3}, Landroid/widget/ArrayAdapter;->createFromResource(Landroid/content/Context;II)Landroid/widget/ArrayAdapter;

    move-result-object v2

    .line 765
    .local v2, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/CharSequence;>;"
    const v3, 0x1090009

    invoke-virtual {v2, v3}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 766
    iget-object v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mSpinner:Landroid/widget/Spinner;

    invoke-virtual {v3, v2}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 768
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->getIntent()Landroid/content/Intent;

    move-result-object v3

    .line 769
    .local v3, "intent":Landroid/content/Intent;
    const-string v4, "mSimType"

    invoke-virtual {v3, v4, v0}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v4

    iput v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->simType:I

    .line 770
    sget v5, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->SHOW_GENERAL_VIEW:I

    const/4 v6, 0x2

    const/4 v7, 0x1

    if-ne v4, v5, :cond_0

    .line 771
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opotaView:Landroid/widget/LinearLayout;

    invoke-virtual {v4, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 772
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->generalView:Landroid/widget/LinearLayout;

    invoke-virtual {v4, v0}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 773
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->certificationView:Landroid/widget/LinearLayout;

    invoke-virtual {v4, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 774
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCapabilitySim()I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->phoneid:I

    .line 775
    iput v7, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->viewId:I

    goto :goto_0

    .line 776
    :cond_0
    iget v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->simType:I

    sget v5, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->SHOW_CERTIFICATION_VIEW:I

    if-ne v4, v5, :cond_1

    .line 777
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opotaView:Landroid/widget/LinearLayout;

    invoke-virtual {v4, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 778
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->generalView:Landroid/widget/LinearLayout;

    invoke-virtual {v4, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 779
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->certificationView:Landroid/widget/LinearLayout;

    invoke-virtual {v1, v0}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 780
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCapabilitySim()I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->phoneid:I

    .line 781
    iput v6, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->viewId:I

    .line 782
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mSpinner:Landroid/widget/Spinner;

    invoke-virtual {v1, v7}, Landroid/widget/Spinner;->setSelection(I)V

    goto :goto_0

    .line 784
    :cond_1
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->opotaView:Landroid/widget/LinearLayout;

    invoke-virtual {v4, v0}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 785
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->generalView:Landroid/widget/LinearLayout;

    invoke-virtual {v4, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 786
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->certificationView:Landroid/widget/LinearLayout;

    invoke-virtual {v4, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 787
    iget v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->simType:I

    iput v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->phoneid:I

    .line 788
    iput v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->viewId:I

    .line 790
    :goto_0
    iget v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->phoneid:I

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isSimReady(I)Z

    move-result v1

    if-eqz v1, :cond_2

    iget v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->phoneid:I

    goto :goto_1

    .line 791
    :cond_2
    iget v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->phoneid:I

    add-int/2addr v1, v7

    rem-int/2addr v1, v6

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isSimReady(I)Z

    move-result v1

    if-eqz v1, :cond_3

    iget v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->phoneid:I

    add-int/2addr v1, v7

    rem-int/2addr v1, v6

    goto :goto_1

    .line 792
    :cond_3
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCapabilitySim()I

    move-result v1

    :goto_1
    nop

    .line 793
    .local v1, "readySim":I
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Selected: Sim"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->phoneid:I

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, ", Ready: Sim"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, "McfConfig"

    invoke-static {v5, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 795
    const-string v4, "phone"

    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Landroid/telephony/TelephonyManager;

    iput-object v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mTelephonyManager:Landroid/telephony/TelephonyManager;

    .line 796
    iget-object v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mHandler:Landroid/os/Handler;

    const/16 v8, 0x66

    invoke-static {v1, v5, v8}, Lcom/mediatek/engineermode/EmUtils;->registerForModemStatusChanged(ILandroid/os/Handler;I)V

    .line 798
    iget-object v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mHandler:Landroid/os/Handler;

    const/16 v8, 0xb

    invoke-static {v1, v5, v8}, Lcom/mediatek/engineermode/EmUtils;->registerForUrcInfo(ILandroid/os/Handler;I)V

    .line 799
    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/telephony/TelephonyManager;

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mTelephonyManager:Landroid/telephony/TelephonyManager;

    .line 801
    const-string v4, "mcf_config_settings"

    invoke-virtual {p0, v4, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v4

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfConfigSh:Landroid/content/SharedPreferences;

    .line 803
    new-instance v4, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;

    invoke-direct {v4, p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    new-array v5, v7, [Ljava/lang/Integer;

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    aput-object v8, v5, v0

    invoke-virtual {v4, v5}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 804
    new-instance v4, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;

    invoke-direct {v4, p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    new-array v5, v7, [Ljava/lang/Integer;

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v5, v0

    invoke-virtual {v4, v5}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 805
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    invoke-direct {v0}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->mcfCertObj:Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    .line 806
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->iniStatusGroup:Landroid/widget/RadioGroup;

    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->onCheckedChangeListener:Landroid/widget/RadioGroup$OnCheckedChangeListener;

    invoke-virtual {v0, v4}, Landroid/widget/RadioGroup;->setOnCheckedChangeListener(Landroid/widget/RadioGroup$OnCheckedChangeListener;)V

    .line 807
    return-void
.end method

.method public onDestroy()V
    .locals 2

    .line 826
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 827
    const-string v0, "McfConfig"

    const-string v1, "onDestroy"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 828
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->taskSet:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->clear()V

    .line 829
    iget v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->readySim:I

    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->unregisterForUrcInfo(I)V

    .line 830
    iget v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->readySim:I

    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->unregisterForModemStatusChanged(I)V

    .line 831
    return-void
.end method

.method public startTimer(II)V
    .locals 9
    .param p1, "type"    # I
    .param p2, "waitTime"    # I

    .line 992
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "waitTime = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " s"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "McfConfig"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 993
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$7;

    mul-int/lit16 v2, p2, 0x3e8

    int-to-long v4, v2

    const-wide/16 v6, 0x3e8

    move-object v2, v0

    move-object v3, p0

    move v8, p1

    invoke-direct/range {v2 .. v8}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$7;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;JJI)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->timer:Landroid/os/CountDownTimer;

    .line 1027
    invoke-virtual {v0}, Landroid/os/CountDownTimer;->start()Landroid/os/CountDownTimer;

    .line 1028
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Start timer for "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", WAIT_TIME="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "s"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1029
    return-void
.end method
