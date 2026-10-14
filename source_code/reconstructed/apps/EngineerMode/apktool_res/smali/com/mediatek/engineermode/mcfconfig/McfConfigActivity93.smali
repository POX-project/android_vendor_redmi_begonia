.class public Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;
.super Landroid/app/Activity;
.source "McfConfigActivity93.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$loadOTAPathTask;,
        Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$saveOTAPathTask;
    }
.end annotation


# instance fields
.field private final CMD_OTA_RETURN:Ljava/lang/String;

.field private final DEFAULT_FILE_PATH:Ljava/lang/String;

.field private final DUMP_OTA_COMMAND:Ljava/lang/String;

.field private final GENERAL_OPOTA_FILEPATH_KEY:Ljava/lang/String;

.field private final MCF_CONFIG_SHAREPRE:Ljava/lang/String;

.field private final MSG_CLEAR_OPOTA_FILEPATH:I

.field private final MSG_CLEAR_OTA_FILEPATH:I

.field private final MSG_DUMP_OTA_FILE:I

.field protected final MSG_GET_MCF_STATUS_URC:I

.field private final MSG_MCF_MODEM_STATUS_CHANGED:I

.field private final MSG_MCF_RADIO_STATE_CHANGED:I

.field private final MSG_MODEM_REBOOT_COMPLETE:I

.field private final MSG_OPOTA_QUERY:I

.field private final MSG_OTA_QUERY:I

.field private final MSG_SET_OPOTA_FILEPATH:I

.field private final MSG_SET_OTA_FILEPATH:I

.field private final OPOTA_QUERY_COMMAND:Ljava/lang/String;

.field private final OTA_FILEPATH_KEY:Ljava/lang/String;

.field private final OTA_QUERY_COMMAND:Ljava/lang/String;

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

.field private final SET_OPOTA_COMMAND:Ljava/lang/String;

.field private final SET_OPOTA_RSTMD_COMMAND:Ljava/lang/String;

.field private final SET_OTA_COMMAND:Ljava/lang/String;

.field private final SHOW_GENERAL_VIEW:I

.field private final SHOW_OPOTA_VIEW:I

.field private final SIM1_OPOTA_FILEPATH_KEY:Ljava/lang/String;

.field private final SIM2_OPOTA_FILEPATH_KEY:Ljava/lang/String;

.field private final SIM_COUNT:I

.field private final STATE_DUMP_OTA:I

.field private final STATE_REBOOT_MODEM:I

.field private final TAG:Ljava/lang/String;

.field private addOpOtaBtn:Landroid/widget/Button;

.field private addOtaBtn:Landroid/widget/Button;

.field private applyOpOtaBtn:Landroid/widget/Button;

.field private applyOtaBtn:Landroid/widget/Button;

.field private clearOpOtaBtn:Landroid/widget/Button;

.field private clearOtaBtn:Landroid/widget/Button;

.field private curOpOtaFile:Ljava/lang/String;

.field private curOtaFile:Ljava/lang/String;

.field dumpBegain:J

.field dumpEnd:J

.field private dumpOta:Landroid/widget/Button;

.field private generalView:Landroid/widget/LinearLayout;

.field private isOpOtaPathValid:Z

.field private isOtaPathValid:Z

.field private final mHandler:Landroid/os/Handler;

.field private mIsModemEnabled:Z

.field private mProgressDialog:Landroid/app/ProgressDialog;

.field mRadioStates:I

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

.field private opOtaFile:Landroid/widget/TextView;

.field private opOtaQueryBtn:Landroid/widget/Button;

.field private opotaResetMdEnable:Landroid/widget/CheckBox;

.field private opotaView:Landroid/widget/LinearLayout;

.field private otaFile:Landroid/widget/TextView;

.field private otaQueryBtn:Landroid/widget/Button;

.field private phoneid:I

.field private readySim:I

.field private resetMd:Z

.field private targetOpOtaFile:Ljava/lang/String;

.field private targetOtaFile:Ljava/lang/String;

.field private taskSet:Ljava/util/Set;

.field timer:Landroid/os/CountDownTimer;

.field private viewId:I


# direct methods
.method public constructor <init>()V
    .locals 3

    .line 42
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 44
    const-string v0, "McfConfig/McfConfigActivity93"

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->TAG:Ljava/lang/String;

    .line 45
    const-string v0, "mcf_config_settings"

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->MCF_CONFIG_SHAREPRE:Ljava/lang/String;

    .line 46
    const/4 v0, 0x2

    iput v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->SIM_COUNT:I

    .line 47
    const/4 v1, 0x0

    iput v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->MSG_SET_OTA_FILEPATH:I

    .line 48
    const/4 v2, 0x1

    iput v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->MSG_CLEAR_OTA_FILEPATH:I

    .line 49
    iput v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->MSG_SET_OPOTA_FILEPATH:I

    .line 50
    const/4 v0, 0x3

    iput v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->MSG_CLEAR_OPOTA_FILEPATH:I

    .line 51
    const/4 v0, 0x6

    iput v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->MSG_DUMP_OTA_FILE:I

    .line 52
    const/16 v0, 0x8

    iput v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->MSG_OTA_QUERY:I

    .line 53
    const/16 v0, 0x9

    iput v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->MSG_OPOTA_QUERY:I

    .line 54
    const/16 v0, 0x64

    iput v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->MSG_MCF_RADIO_STATE_CHANGED:I

    .line 55
    const/16 v0, 0x65

    iput v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->MSG_MODEM_REBOOT_COMPLETE:I

    .line 56
    const/16 v0, 0x66

    iput v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->MSG_MCF_MODEM_STATUS_CHANGED:I

    .line 57
    const/16 v0, 0xb

    iput v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->MSG_GET_MCF_STATUS_URC:I

    .line 58
    iput v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->SHOW_OPOTA_VIEW:I

    .line 59
    iput v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->SHOW_GENERAL_VIEW:I

    .line 60
    const-string v0, "/mnt/vendor/nvdata/md/mdota"

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->DEFAULT_FILE_PATH:Ljava/lang/String;

    .line 61
    const-string v0, "AT+EMCFC=1"

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->SET_OTA_COMMAND:Ljava/lang/String;

    .line 62
    const-string v0, "AT+EMCFC=2"

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->SET_OPOTA_COMMAND:Ljava/lang/String;

    .line 63
    const-string v0, "AT+EMCFC=3,1,1"

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->SET_OPOTA_RSTMD_COMMAND:Ljava/lang/String;

    .line 64
    const-string v0, "+EMCFC:"

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->CMD_OTA_RETURN:Ljava/lang/String;

    .line 65
    const-string v0, "AT+EMCFC=5"

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->DUMP_OTA_COMMAND:Ljava/lang/String;

    .line 66
    const-string v0, "AT+EMCFC=4,0"

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->OTA_QUERY_COMMAND:Ljava/lang/String;

    .line 67
    const-string v0, "AT+EMCFC=4,1"

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->OPOTA_QUERY_COMMAND:Ljava/lang/String;

    .line 68
    const/16 v0, 0xb4

    iput v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->OTA_WAIT_TIME:I

    .line 69
    const/16 v0, 0x3c

    iput v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->REBOOT_MODEM_WAIT_TIME:I

    .line 70
    const-string v0, "ota_file_path"

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->OTA_FILEPATH_KEY:Ljava/lang/String;

    .line 71
    const-string v0, "general_opota_path"

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->GENERAL_OPOTA_FILEPATH_KEY:Ljava/lang/String;

    .line 72
    const-string v0, "sim2_opota_file_path"

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->SIM2_OPOTA_FILEPATH_KEY:Ljava/lang/String;

    .line 73
    const-string v0, "sim1_opota_file_path"

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->SIM1_OPOTA_FILEPATH_KEY:Ljava/lang/String;

    .line 74
    iput v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->STATE_REBOOT_MODEM:I

    .line 75
    iput v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->STATE_DUMP_OTA:I

    .line 76
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$1;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->OtaFilePathType:Ljava/util/HashMap;

    .line 81
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$2;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mcfOtaDumpResult:Ljava/util/HashMap;

    .line 104
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->taskSet:Ljava/util/Set;

    .line 127
    iput-boolean v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->isOtaPathValid:Z

    .line 128
    iput-boolean v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->isOpOtaPathValid:Z

    .line 129
    iput-boolean v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mIsModemEnabled:Z

    .line 130
    iput-boolean v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->resetMd:Z

    .line 134
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$3;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mcfApplyDsbpResult:Ljava/util/HashMap;

    .line 147
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$4;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mcfApplyOtaResult:Ljava/util/HashMap;

    .line 177
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/util/HashMap;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 42
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mcfApplyOtaResult:Ljava/util/HashMap;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/util/HashMap;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 42
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mcfApplyDsbpResult:Ljava/util/HashMap;

    return-object v0
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/util/Set;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 42
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->taskSet:Ljava/util/Set;

    return-object v0
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 42
    iget v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->phoneid:I

    return v0
.end method

.method static synthetic access$1200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;
    .param p1, "x1"    # Ljava/lang/String;
    .param p2, "x2"    # Ljava/lang/String;

    .line 42
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->showProgressDialog(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$1300(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/util/HashMap;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 42
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->OtaFilePathType:Ljava/util/HashMap;

    return-object v0
.end method

.method static synthetic access$1400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 42
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->curOtaFile:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$1402(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;
    .param p1, "x1"    # Ljava/lang/String;

    .line 42
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->curOtaFile:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$1500(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 42
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->curOpOtaFile:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$1502(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;
    .param p1, "x1"    # Ljava/lang/String;

    .line 42
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->curOpOtaFile:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$1600(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Landroid/app/ProgressDialog;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 42
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mProgressDialog:Landroid/app/ProgressDialog;

    return-object v0
.end method

.method static synthetic access$1602(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Landroid/app/ProgressDialog;)Landroid/app/ProgressDialog;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;
    .param p1, "x1"    # Landroid/app/ProgressDialog;

    .line 42
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mProgressDialog:Landroid/app/ProgressDialog;

    return-object p1
.end method

.method static synthetic access$1700(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/util/HashMap;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 42
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mcfOtaDumpResult:Ljava/util/HashMap;

    return-object v0
.end method

.method static synthetic access$1800(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 42
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$1900(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 42
    iget v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->readySim:I

    return v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 42
    iget-boolean v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->resetMd:Z

    return v0
.end method

.method static synthetic access$2000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;
    .param p1, "x1"    # I

    .line 42
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->saveSharedPreference(I)V

    return-void
.end method

.method static synthetic access$2100(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 42
    invoke-direct {p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->getSharedPreference()V

    return-void
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;
    .param p1, "x1"    # Z

    .line 42
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->rebootModem(Z)V

    return-void
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;
    .param p1, "x1"    # Ljava/lang/String;
    .param p2, "x2"    # Ljava/lang/String;

    .line 42
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 42
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->otaFile:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 42
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOtaFile:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$602(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;
    .param p1, "x1"    # Ljava/lang/String;

    .line 42
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOtaFile:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 42
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->opOtaFile:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 42
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOpOtaFile:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$802(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;
    .param p1, "x1"    # Ljava/lang/String;

    .line 42
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOpOtaFile:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 42
    iget-boolean v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mIsModemEnabled:Z

    return v0
.end method

.method static synthetic access$902(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;
    .param p1, "x1"    # Z

    .line 42
    iput-boolean p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mIsModemEnabled:Z

    return p1
.end method

.method private checkPathValid(Ljava/lang/String;[Ljava/lang/String;)Z
    .locals 3
    .param p1, "filePath"    # Ljava/lang/String;
    .param p2, "suffix"    # [Ljava/lang/String;

    .line 588
    const/4 v0, 0x1

    if-nez p2, :cond_0

    return v0

    .line 589
    :cond_0
    invoke-static {p1}, Lcom/mediatek/engineermode/mcfconfig/FileUtils;->getFileExtension(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 590
    .local v1, "fileExtension":Ljava/lang/String;
    if-eqz v1, :cond_1

    invoke-static {p2}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v2

    invoke-interface {v2, v1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 591
    return v0

    .line 593
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[checkPathValid] file path is InValid "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " suffixList:"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 594
    invoke-static {p2}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 593
    const-string v2, "McfConfig/McfConfigActivity93"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 595
    const/4 v0, 0x0

    return v0
.end method

.method private getSharedPreference()V
    .locals 3

    .line 779
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mcfConfigSh:Landroid/content/SharedPreferences;

    const-string v1, "ota_file_path"

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOtaFile:Ljava/lang/String;

    .line 780
    iget v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->phoneid:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    .line 781
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mcfConfigSh:Landroid/content/SharedPreferences;

    const-string v1, "sim2_opota_file_path"

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOpOtaFile:Ljava/lang/String;

    goto :goto_0

    .line 783
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mcfConfigSh:Landroid/content/SharedPreferences;

    const-string v1, "sim1_opota_file_path"

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOpOtaFile:Ljava/lang/String;

    .line 785
    :goto_0
    return-void
.end method

.method private rebootModem(Z)V
    .locals 3
    .param p1, "needReset"    # Z

    .line 605
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[rebootModem] begining ... needReset:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "McfConfig/McfConfigActivity93"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 606
    if-eqz p1, :cond_0

    .line 607
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->taskSet:Ljava/util/Set;

    const/4 v1, 0x0

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    .line 608
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->rebootModem()V

    .line 609
    iput-boolean v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mIsModemEnabled:Z

    .line 610
    const/16 v0, 0x3c

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->startTimer(II)V

    .line 612
    :cond_0
    return-void
.end method

.method private saveSharedPreference(I)V
    .locals 4
    .param p1, "actionCode"    # I

    .line 788
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mcfConfigSh:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 789
    .local v0, "editor":Landroid/content/SharedPreferences$Editor;
    const-string v1, "McfConfig/McfConfigActivity93"

    const/4 v2, 0x1

    if-ne p1, v2, :cond_1

    .line 790
    iget v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->phoneid:I

    if-ne v3, v2, :cond_0

    .line 791
    iget-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOpOtaFile:Ljava/lang/String;

    const-string v3, "sim2_opota_file_path"

    invoke-interface {v0, v3, v2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    goto :goto_0

    .line 793
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOpOtaFile:Ljava/lang/String;

    const-string v3, "sim1_opota_file_path"

    invoke-interface {v0, v3, v2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 795
    :goto_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[saveSharedPreference] Save opOtaFile success ! opota_file_path: SIM"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->phoneid:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ":["

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOpOtaFile:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "]"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 797
    :cond_1
    if-nez p1, :cond_2

    .line 798
    iget-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOtaFile:Ljava/lang/String;

    const-string v3, "ota_file_path"

    invoke-interface {v0, v3, v2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 799
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[saveSharedPreference] Save otaFile success ota_file_path:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOtaFile:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 802
    :cond_2
    :goto_1
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 803
    return-void
.end method

.method private selectFile(Ljava/lang/String;I)V
    .locals 2
    .param p1, "targetPath"    # Ljava/lang/String;
    .param p2, "requestCode"    # I

    .line 514
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[selectFile] storagePath: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "McfConfig/McfConfigActivity93"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 515
    invoke-static {p0, p1, p2}, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->actionStart(Landroid/app/Activity;Ljava/lang/String;I)V

    .line 517
    return-void
.end method

.method private sendATCommand(Ljava/lang/String;I)V
    .locals 3
    .param p1, "cmd"    # Ljava/lang/String;
    .param p2, "what"    # I

    .line 599
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    const/4 v1, 0x1

    const-string v2, "+EMCFC:"

    aput-object v2, v0, v1

    .line 600
    .local v0, "atCmd":[Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[sendATCommand] cmd: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v0}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "McfConfig/McfConfigActivity93"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 601
    iget v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->phoneid:I

    iget-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mHandler:Landroid/os/Handler;

    invoke-virtual {v2, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v2

    invoke-static {v1, v0, v2}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 602
    return-void
.end method

.method private showDialog(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3
    .param p1, "title"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/String;

    .line 520
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->isFinishing()Z

    move-result v0

    if-nez v0, :cond_0

    .line 521
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 522
    invoke-virtual {v0, p1}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    invoke-virtual {v0, p2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const v1, 0x104000a

    const/4 v2, 0x0

    .line 523
    invoke-virtual {v0, v1, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 524
    .local v0, "dialog":Landroid/app/AlertDialog;
    invoke-virtual {v0}, Landroid/app/AlertDialog;->show()V

    .line 526
    .end local v0    # "dialog":Landroid/app/AlertDialog;
    :cond_0
    return-void
.end method

.method private showProgressDialog(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2
    .param p1, "title"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/String;

    .line 529
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mProgressDialog:Landroid/app/ProgressDialog;

    if-nez v0, :cond_0

    .line 530
    new-instance v0, Landroid/app/ProgressDialog;

    invoke-direct {v0, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mProgressDialog:Landroid/app/ProgressDialog;

    .line 532
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mProgressDialog:Landroid/app/ProgressDialog;

    invoke-virtual {v0, p1}, Landroid/app/ProgressDialog;->setTitle(Ljava/lang/CharSequence;)V

    .line 533
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mProgressDialog:Landroid/app/ProgressDialog;

    invoke-virtual {v0, p2}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 534
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mProgressDialog:Landroid/app/ProgressDialog;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 535
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mProgressDialog:Landroid/app/ProgressDialog;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 536
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mProgressDialog:Landroid/app/ProgressDialog;

    invoke-virtual {v0}, Landroid/app/ProgressDialog;->show()V

    .line 537
    const-string v0, "McfConfig/McfConfigActivity93"

    const-string v1, "After timer.start"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 538
    return-void
.end method


# virtual methods
.method public byteArrayToStr([B)Ljava/lang/String;
    .locals 1
    .param p1, "byteArray"    # [B

    .line 806
    if-nez p1, :cond_0

    .line 807
    const/4 v0, 0x0

    return-object v0

    .line 809
    :cond_0
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, p1}, Ljava/lang/String;-><init>([B)V

    .line 810
    .local v0, "str":Ljava/lang/String;
    return-object v0
.end method

.method public getSelectedFilePath(Landroid/net/Uri;)V
    .locals 3
    .param p1, "contentUri"    # Landroid/net/Uri;

    .line 615
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[getSelectedFilePath] uri: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 616
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

    .line 615
    const-string v1, "McfConfig/McfConfigActivity93"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 617
    if-nez p1, :cond_1

    .line 618
    return-void

    .line 620
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

    .line 621
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

    .line 174
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
    .locals 4
    .param p1, "slotId"    # I

    .line 479
    nop

    .line 480
    const-string v0, "phone"

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/telephony/TelephonyManager;

    .line 481
    .local v0, "telephonyManager":Landroid/telephony/TelephonyManager;
    const/4 v1, 0x0

    .line 482
    .local v1, "status":I
    if-gez p1, :cond_0

    .line 483
    invoke-virtual {v0}, Landroid/telephony/TelephonyManager;->getSimState()I

    move-result v1

    goto :goto_0

    .line 485
    :cond_0
    invoke-virtual {v0, p1}, Landroid/telephony/TelephonyManager;->getSimState(I)I

    move-result v1

    .line 487
    :goto_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "slotId = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ",simStatus = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "McfConfig/McfConfigActivity93"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 488
    const/4 v2, 0x1

    if-ne v1, v2, :cond_1

    .line 489
    const/4 v2, 0x0

    return v2

    .line 490
    :cond_1
    return v2
.end method

.method public onActivityResult(IILandroid/content/Intent;)V
    .locals 6
    .param p1, "requestCode"    # I
    .param p2, "resultCode"    # I
    .param p3, "data"    # Landroid/content/Intent;

    .line 542
    const-string v0, "McfConfig/McfConfigActivity93"

    const/4 v1, -0x1

    if-eq p2, v1, :cond_0

    .line 543
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[onActivityResult] error, resultCode: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 544
    invoke-super {p0, p1, p2, p3}, Landroid/app/Activity;->onActivityResult(IILandroid/content/Intent;)V

    .line 545
    return-void

    .line 547
    :cond_0
    invoke-virtual {p3}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v1

    .line 548
    .local v1, "uri":Landroid/net/Uri;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[getSelectedFilePath] uri: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 549
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

    .line 548
    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 550
    if-nez v1, :cond_2

    .line 551
    return-void

    .line 553
    :cond_2
    invoke-virtual {v1}, Landroid/net/Uri;->getPath()Ljava/lang/String;

    move-result-object v2

    .line 554
    .local v2, "srcOtaPath":Ljava/lang/String;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "[onActivityResult] otaFile: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 555
    const/4 v3, -0x1

    .line 556
    .local v3, "ret":I
    const-string v4, ""

    if-eqz p1, :cond_5

    const/4 v5, 0x1

    if-eq p1, v5, :cond_3

    goto/16 :goto_1

    .line 570
    :cond_3
    sget-object v5, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->OP_OTA_SUFFIX:[Ljava/lang/String;

    invoke-direct {p0, v2, v5}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->checkPathValid(Ljava/lang/String;[Ljava/lang/String;)Z

    move-result v5

    iput-boolean v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->isOpOtaPathValid:Z

    .line 571
    if-eqz v5, :cond_4

    .line 572
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->opOtaFile:Landroid/widget/TextView;

    invoke-virtual {v4, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 573
    iput-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOpOtaFile:Ljava/lang/String;

    .line 574
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "isOpOtaPathValid: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->isOpOtaPathValid:Z

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v5, ",targetOpOtaPath :"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOpOtaFile:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 577
    :cond_4
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->opOtaFile:Landroid/widget/TextView;

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 578
    const-string v0, "Select OP-OTA Path: "

    const-string v4, "Invalid File! (ex:*.mcfopota)"

    invoke-direct {p0, v0, v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    .line 580
    goto :goto_1

    .line 558
    :cond_5
    sget-object v5, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->OTA_SUFFIX:[Ljava/lang/String;

    invoke-direct {p0, v2, v5}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->checkPathValid(Ljava/lang/String;[Ljava/lang/String;)Z

    move-result v5

    iput-boolean v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->isOtaPathValid:Z

    .line 559
    if-eqz v5, :cond_6

    .line 560
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->otaFile:Landroid/widget/TextView;

    invoke-virtual {v4, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 561
    iput-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOtaFile:Ljava/lang/String;

    .line 562
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "isOtaPathValid: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->isOtaPathValid:Z

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v5, ",targetOtaPath :"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOtaFile:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 565
    :cond_6
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->otaFile:Landroid/widget/TextView;

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 566
    const-string v0, "Select OTA Path: "

    const-string v4, "Invalid File! (ex:*.mcfota)"

    invoke-direct {p0, v0, v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    .line 568
    nop

    .line 584
    :goto_1
    invoke-super {p0, p1, p2, p3}, Landroid/app/Activity;->onActivityResult(IILandroid/content/Intent;)V

    .line 585
    return-void
.end method

.method public onBackPressed()V
    .locals 2

    .line 504
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->taskSet:Ljava/util/Set;

    const/4 v1, 0x0

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 505
    const-string v0, "Please Wait"

    const-string v1, "Reboot modem is ongoing......"

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    .line 506
    return-void

    .line 508
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->taskSet:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->clear()V

    .line 509
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->finish()V

    .line 511
    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 13
    .param p1, "v"    # Landroid/view/View;

    .line 663
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    const-string v1, "\",\""

    const-string v2, "\"\",\"\""

    const-string v3, "Reboot modem is ongoing......"

    const-string v4, "Please Wait"

    const-string v5, "\""

    const-string v6, ""

    const/4 v7, 0x0

    .line 751
    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    .line 663
    const/4 v9, 0x1

    const-string v10, "McfConfig/McfConfigActivity93"

    const-string v11, "/mnt/vendor/nvdata/md/mdota"

    sparse-switch v0, :sswitch_data_0

    goto/16 :goto_9

    .line 768
    :sswitch_0
    const-string v0, "Ota query begain"

    invoke-static {v10, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 769
    const/16 v0, 0x8

    const-string v1, "AT+EMCFC=4,0"

    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->sendATCommand(Ljava/lang/String;I)V

    .line 770
    goto/16 :goto_9

    .line 761
    :sswitch_1
    const-string v0, "AT+EMCFC=5"

    .line 762
    .local v0, "dumpOtaCmd":Ljava/lang/String;
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iput-wide v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->dumpBegain:J

    .line 763
    new-instance v1, Ljava/text/SimpleDateFormat;

    const-string v2, "HH:mm:ss"

    invoke-direct {v1, v2}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    .line 764
    .local v1, "df":Ljava/text/SimpleDateFormat;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Dump OTA file begain :"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v3, Ljava/util/Date;

    iget-wide v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->dumpBegain:J

    invoke-direct {v3, v4, v5}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v1, v3}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v10, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 765
    const/4 v2, 0x6

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->sendATCommand(Ljava/lang/String;I)V

    .line 766
    goto/16 :goto_9

    .line 698
    .end local v0    # "dumpOtaCmd":Ljava/lang/String;
    .end local v1    # "df":Ljava/text/SimpleDateFormat;
    :sswitch_2
    const-string v0, "ota_clear begain"

    invoke-static {v10, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 699
    iput-boolean v9, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->resetMd:Z

    .line 700
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->taskSet:Ljava/util/Set;

    invoke-interface {v0, v8}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 701
    invoke-direct {p0, v4, v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    .line 702
    return-void

    .line 704
    :cond_0
    const-string v0, "AT+EMCFC=1,\"\",\"\""

    .line 705
    .local v0, "clearOtaCmd":Ljava/lang/String;
    invoke-direct {p0, v0, v9}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->sendATCommand(Ljava/lang/String;I)V

    .line 706
    goto/16 :goto_9

    .line 671
    .end local v0    # "clearOtaCmd":Ljava/lang/String;
    :sswitch_3
    const-string v0, "ota_apply begain"

    invoke-static {v10, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 672
    iput-boolean v9, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->resetMd:Z

    .line 673
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->otaFile:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOtaFile:Ljava/lang/String;

    .line 674
    sget-object v12, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->OTA_SUFFIX:[Ljava/lang/String;

    invoke-direct {p0, v0, v12}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->checkPathValid(Ljava/lang/String;[Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->isOtaPathValid:Z

    .line 675
    const-string v12, "AT+EMCFC=1,"

    .line 676
    .local v12, "setOtaCmd":Ljava/lang/String;
    if-nez v0, :cond_1

    .line 677
    const-string v0, "Apply OTA Error"

    const-string v1, "OTA File is invalid!"

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    .line 678
    return-void

    .line 680
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->taskSet:Ljava/util/Set;

    invoke-interface {v0, v8}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 681
    invoke-direct {p0, v4, v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    .line 682
    return-void

    .line 684
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOtaFile:Ljava/lang/String;

    if-eqz v0, :cond_5

    invoke-virtual {v0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    goto :goto_1

    .line 687
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOtaFile:Ljava/lang/String;

    invoke-virtual {v0, v11}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v0

    .line 688
    invoke-virtual {v11}, Ljava/lang/String;->length()I

    move-result v2

    add-int/2addr v0, v2

    add-int/2addr v0, v9

    .line 689
    .local v0, "dirPos":I
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOtaFile:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 691
    iget-boolean v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->isOtaPathValid:Z

    if-eqz v1, :cond_4

    if-ltz v0, :cond_4

    .line 692
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOtaFile:Ljava/lang/String;

    invoke-virtual {v1, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v6

    goto :goto_0

    :cond_4
    nop

    :goto_0
    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .end local v12    # "setOtaCmd":Ljava/lang/String;
    .local v1, "setOtaCmd":Ljava/lang/String;
    goto :goto_2

    .line 685
    .end local v0    # "dirPos":I
    .end local v1    # "setOtaCmd":Ljava/lang/String;
    .restart local v12    # "setOtaCmd":Ljava/lang/String;
    :cond_5
    :goto_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 694
    .end local v12    # "setOtaCmd":Ljava/lang/String;
    .restart local v1    # "setOtaCmd":Ljava/lang/String;
    :goto_2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "ATCommand: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v10, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 695
    invoke-direct {p0, v1, v7}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->sendATCommand(Ljava/lang/String;I)V

    .line 696
    goto/16 :goto_9

    .line 772
    .end local v1    # "setOtaCmd":Ljava/lang/String;
    :sswitch_4
    const-string v0, "OpOta query begain"

    invoke-static {v10, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 773
    const/16 v0, 0x9

    const-string v1, "AT+EMCFC=4,1"

    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->sendATCommand(Ljava/lang/String;I)V

    goto/16 :goto_9

    .line 749
    :sswitch_5
    const-string v0, "opota_clear begain"

    invoke-static {v10, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 750
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->opotaResetMdEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->resetMd:Z

    .line 751
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->taskSet:Ljava/util/Set;

    invoke-interface {v0, v8}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 752
    invoke-direct {p0, v4, v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    .line 753
    return-void

    .line 755
    :cond_6
    iget-boolean v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->resetMd:Z

    if-eqz v0, :cond_7

    .line 756
    const-string v0, "AT+EMCFC=2,\"\",\"\""

    goto :goto_3

    .line 757
    :cond_7
    const-string v0, "AT+EMCFC=3,1,1,\"\""

    :goto_3
    nop

    .line 758
    .local v0, "clearOpOtaCmd":Ljava/lang/String;
    const/4 v1, 0x3

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->sendATCommand(Ljava/lang/String;I)V

    .line 759
    goto/16 :goto_9

    .line 708
    .end local v0    # "clearOpOtaCmd":Ljava/lang/String;
    :sswitch_6
    const-string v0, "opota_apply begain"

    invoke-static {v10, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 709
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->opotaResetMdEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->resetMd:Z

    .line 710
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->opOtaFile:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOpOtaFile:Ljava/lang/String;

    .line 711
    sget-object v7, Lcom/mediatek/engineermode/mcfconfig/McfFileSelectActivity;->OP_OTA_SUFFIX:[Ljava/lang/String;

    invoke-direct {p0, v0, v7}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->checkPathValid(Ljava/lang/String;[Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->isOpOtaPathValid:Z

    .line 713
    if-nez v0, :cond_8

    .line 714
    const-string v0, "Apply Op-OTA Error"

    const-string v1, "OP-OTA File is invalid!"

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    .line 715
    return-void

    .line 717
    :cond_8
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->taskSet:Ljava/util/Set;

    invoke-interface {v0, v8}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_9

    .line 718
    invoke-direct {p0, v4, v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    .line 719
    return-void

    .line 722
    :cond_9
    iget-boolean v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->resetMd:Z

    if-eqz v0, :cond_d

    .line 723
    const-string v0, "AT+EMCFC=2,"

    .line 724
    .local v0, "setOpOtaCmd":Ljava/lang/String;
    iget-object v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOpOtaFile:Ljava/lang/String;

    if-eqz v3, :cond_c

    invoke-virtual {v3}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_a

    goto :goto_5

    .line 727
    :cond_a
    iget-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOpOtaFile:Ljava/lang/String;

    invoke-virtual {v2, v11}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v2

    .line 728
    invoke-virtual {v11}, Ljava/lang/String;->length()I

    move-result v3

    add-int/2addr v2, v3

    add-int/2addr v2, v9

    .line 729
    .local v2, "opDirPos":I
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOpOtaFile:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 731
    iget-boolean v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->isOpOtaPathValid:Z

    if-eqz v1, :cond_b

    if-ltz v2, :cond_b

    .line 732
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOpOtaFile:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v6

    goto :goto_4

    :cond_b
    nop

    :goto_4
    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 733
    .end local v2    # "opDirPos":I
    goto :goto_8

    .line 725
    :cond_c
    :goto_5
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_8

    .line 735
    .end local v0    # "setOpOtaCmd":Ljava/lang/String;
    :cond_d
    const-string v0, "AT+EMCFC=3,1,1,"

    .line 736
    .restart local v0    # "setOpOtaCmd":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOpOtaFile:Ljava/lang/String;

    if-eqz v1, :cond_10

    invoke-virtual {v1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_e

    goto :goto_7

    .line 739
    :cond_e
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOpOtaFile:Ljava/lang/String;

    invoke-virtual {v1, v11}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v1

    .line 740
    invoke-virtual {v11}, Ljava/lang/String;->length()I

    move-result v2

    add-int/2addr v1, v2

    add-int/2addr v1, v9

    .line 741
    .local v1, "opDirPos":I
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 742
    iget-boolean v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->isOpOtaPathValid:Z

    if-eqz v3, :cond_f

    if-ltz v1, :cond_f

    .line 743
    iget-object v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->targetOpOtaFile:Ljava/lang/String;

    invoke-virtual {v3, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v6

    goto :goto_6

    :cond_f
    nop

    :goto_6
    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_8

    .line 737
    .end local v1    # "opDirPos":I
    :cond_10
    :goto_7
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "\"\""

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 746
    :goto_8
    const/4 v1, 0x2

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->sendATCommand(Ljava/lang/String;I)V

    .line 747
    goto :goto_9

    .line 665
    .end local v0    # "setOpOtaCmd":Ljava/lang/String;
    :sswitch_7
    invoke-direct {p0, v11, v7}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->selectFile(Ljava/lang/String;I)V

    .line 666
    goto :goto_9

    .line 668
    :sswitch_8
    invoke-direct {p0, v11, v9}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->selectFile(Ljava/lang/String;I)V

    .line 669
    nop

    .line 776
    :goto_9
    return-void

    :sswitch_data_0
    .sparse-switch
        0x7f060181 -> :sswitch_8
        0x7f060182 -> :sswitch_7
        0x7f0605dd -> :sswitch_6
        0x7f0605de -> :sswitch_5
        0x7f0605e1 -> :sswitch_4
        0x7f0605e5 -> :sswitch_3
        0x7f0605e6 -> :sswitch_2
        0x7f0605e7 -> :sswitch_1
        0x7f0605eb -> :sswitch_0
    .end sparse-switch
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 6
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 426
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 427
    const v0, 0x7f080051

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->setContentView(I)V

    .line 428
    const v0, 0x7f06066e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->opotaResetMdEnable:Landroid/widget/CheckBox;

    .line 429
    const v0, 0x7f06055f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->opotaView:Landroid/widget/LinearLayout;

    .line 430
    const v0, 0x7f06055e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->generalView:Landroid/widget/LinearLayout;

    .line 431
    const v0, 0x7f060182

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->addOtaBtn:Landroid/widget/Button;

    .line 432
    const v0, 0x7f060181

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->addOpOtaBtn:Landroid/widget/Button;

    .line 433
    const v0, 0x7f0605eb

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->otaQueryBtn:Landroid/widget/Button;

    .line 434
    const v0, 0x7f0605e1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->opOtaQueryBtn:Landroid/widget/Button;

    .line 435
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->addOtaBtn:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 436
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->addOpOtaBtn:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 437
    const v0, 0x7f0605e5

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->applyOtaBtn:Landroid/widget/Button;

    .line 438
    const v0, 0x7f0605e6

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->clearOtaBtn:Landroid/widget/Button;

    .line 439
    const v0, 0x7f0605dd

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->applyOpOtaBtn:Landroid/widget/Button;

    .line 440
    const v0, 0x7f0605de

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->clearOpOtaBtn:Landroid/widget/Button;

    .line 441
    const v0, 0x7f0605e7

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->dumpOta:Landroid/widget/Button;

    .line 442
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->applyOtaBtn:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 443
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->clearOtaBtn:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 444
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->applyOpOtaBtn:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 445
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->clearOpOtaBtn:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 446
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->dumpOta:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 447
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->otaQueryBtn:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 448
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->opOtaQueryBtn:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 449
    const v0, 0x7f0605da

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->opOtaFile:Landroid/widget/TextView;

    .line 450
    const v0, 0x7f0605e8

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->otaFile:Landroid/widget/TextView;

    .line 451
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->getIntent()Landroid/content/Intent;

    move-result-object v0

    .line 452
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "mSimType"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    .line 453
    .local v1, "simType":I
    const/16 v3, 0x8

    const/4 v4, 0x1

    const/4 v5, -0x1

    if-ne v1, v5, :cond_0

    .line 454
    iget-object v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->opotaView:Landroid/widget/LinearLayout;

    invoke-virtual {v5, v3}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 455
    iget-object v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->generalView:Landroid/widget/LinearLayout;

    invoke-virtual {v3, v2}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 456
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCapabilitySim()I

    move-result v3

    iput v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->phoneid:I

    .line 457
    iput v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->viewId:I

    goto :goto_0

    .line 459
    :cond_0
    iget-object v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->opotaView:Landroid/widget/LinearLayout;

    invoke-virtual {v5, v2}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 460
    iget-object v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->generalView:Landroid/widget/LinearLayout;

    invoke-virtual {v5, v3}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 461
    iput v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->phoneid:I

    .line 462
    iput v2, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->viewId:I

    .line 464
    :goto_0
    iget v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->phoneid:I

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->isSimReady(I)Z

    move-result v3

    if-eqz v3, :cond_1

    iget v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->phoneid:I

    goto :goto_1

    .line 465
    :cond_1
    iget v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->phoneid:I

    add-int/2addr v3, v4

    rem-int/lit8 v3, v3, 0x2

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->isSimReady(I)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 466
    iget v3, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->phoneid:I

    add-int/2addr v3, v4

    rem-int/lit8 v3, v3, 0x2

    goto :goto_1

    :cond_2
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCapabilitySim()I

    move-result v3

    :goto_1
    nop

    .line 467
    .local v3, "readySim":I
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Selected: Sim"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v5, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->phoneid:I

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, ", Ready: Sim"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, "McfConfig/McfConfigActivity93"

    invoke-static {v5, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 469
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mHandler:Landroid/os/Handler;

    const/16 v5, 0x66

    invoke-static {v3, v4, v5}, Lcom/mediatek/engineermode/EmUtils;->registerForModemStatusChanged(ILandroid/os/Handler;I)V

    .line 471
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mHandler:Landroid/os/Handler;

    const/16 v5, 0xb

    invoke-static {v3, v4, v5}, Lcom/mediatek/engineermode/EmUtils;->registerForUrcInfo(ILandroid/os/Handler;I)V

    .line 473
    const-string v4, "mcf_config_settings"

    invoke-virtual {p0, v4, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v4

    iput-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->mcfConfigSh:Landroid/content/SharedPreferences;

    .line 475
    new-instance v4, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$loadOTAPathTask;

    invoke-direct {v4, p0}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$loadOTAPathTask;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)V

    new-array v2, v2, [Ljava/lang/Void;

    invoke-virtual {v4, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$loadOTAPathTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 476
    return-void
.end method

.method public onDestroy()V
    .locals 2

    .line 495
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 496
    const-string v0, "McfConfig/McfConfigActivity93"

    const-string v1, "onDestroy"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 497
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->taskSet:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->clear()V

    .line 498
    iget v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->readySim:I

    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->unregisterForUrcInfo(I)V

    .line 499
    iget v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->readySim:I

    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->unregisterForModemStatusChanged(I)V

    .line 500
    return-void
.end method

.method public startTimer(II)V
    .locals 9
    .param p1, "type"    # I
    .param p2, "waitTime"    # I

    .line 624
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "waitTime = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "ms"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "McfConfig/McfConfigActivity93"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 625
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$6;

    mul-int/lit16 v2, p2, 0x3e8

    int-to-long v4, v2

    const-wide/16 v6, 0x3e8

    move-object v2, v0

    move-object v3, p0

    move v8, p1

    invoke-direct/range {v2 .. v8}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$6;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;JJI)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->timer:Landroid/os/CountDownTimer;

    .line 657
    invoke-virtual {v0}, Landroid/os/CountDownTimer;->start()Landroid/os/CountDownTimer;

    .line 658
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

    .line 659
    return-void
.end method
