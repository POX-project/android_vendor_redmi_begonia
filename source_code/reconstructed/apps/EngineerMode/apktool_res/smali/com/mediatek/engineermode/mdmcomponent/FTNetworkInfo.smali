.class Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;
.source "MDMComponentFT.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;
    }
.end annotation


# static fields
.field private static final ACTION_SIM_STATE_CHANGED:Ljava/lang/String; = "android.intent.action.SIM_STATE_CHANGED"

.field private static final EM_TYPES:[Ljava/lang/String;

.field private static final INTENT_KEY_ICC_STATE:Ljava/lang/String; = "ss"

.field public static final NETWORK_TYPE_1xRTT:I = 0x7

.field public static final NETWORK_TYPE_CDMA:I = 0x4

.field public static final NETWORK_TYPE_EDGE:I = 0x2

.field public static final NETWORK_TYPE_EHRPD:I = 0xe

.field public static final NETWORK_TYPE_EVDO_0:I = 0x5

.field public static final NETWORK_TYPE_EVDO_A:I = 0x6

.field public static final NETWORK_TYPE_EVDO_B:I = 0xc

.field public static final NETWORK_TYPE_GPRS:I = 0x1

.field public static final NETWORK_TYPE_GSM:I = 0x10

.field public static final NETWORK_TYPE_HSDPA:I = 0x8

.field public static final NETWORK_TYPE_HSPA:I = 0xa

.field public static final NETWORK_TYPE_HSPAP:I = 0xf

.field public static final NETWORK_TYPE_HSUPA:I = 0x9

.field public static final NETWORK_TYPE_LTE:I = 0xd

.field public static final NETWORK_TYPE_LTE_CA:I = 0x13

.field public static final NETWORK_TYPE_TD_SCDMA:I = 0x11

.field public static final NETWORK_TYPE_UMTS:I = 0x3

.field public static final NETWORK_TYPE_UNKNOWN:I = 0x0

.field private static final SIM_STATE_ABSENT:I = 0x1

.field private static final SIM_STATE_UNKNOWN:I


# instance fields
.field AntennaMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field ERRCStateMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private Labels:[Ljava/lang/String;

.field ServingBandMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private SimCardChangedReceiver:Landroid/content/BroadcastReceiver;

.field TasEnableMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field TasVersion:I

.field attachTypeMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field bandMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private cids:[Ljava/lang/String;

.field private executorService:Ljava/util/concurrent/ExecutorService;

.field gmmStateMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field gsmBandMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private linkedCids:[Ljava/lang/String;

.field private locationManager:Landroid/location/LocationManager;

.field lteAttachTypeMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field lteTAUTypeMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private lte_ebi_s:[Ljava/lang/String;

.field private lte_index_s:[Ljava/lang/String;

.field private lte_pdpapn_s:[Ljava/lang/String;

.field private lte_ptebi_s:[Ljava/lang/String;

.field private lte_ptlinkebi_s:[Ljava/lang/String;

.field luTypeMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mFirstBroadcast:Z

.field private final mKeyWordMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "[",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public mLocListener:Landroid/location/LocationListener;

.field mLteMappingQam:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field mMappingBW:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field mMappingQam:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field mMappingSpeechCodec:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private final mRrStateMapping:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private final mStateMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private networkInfo:[Ljava/lang/String;

.field private oldDlMod0Pcell:I

.field private oldDlMod1Pcell:I

.field private oldUlMode:I

.field private pdpIndex:[Ljava/lang/String;

.field private pdpStatus:[Ljava/lang/String;

.field pdpStatusMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private pdpapn_s:[Ljava/lang/String;

.field repeateMsgArray:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field speechCodecMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private status:[Z


# direct methods
.method static constructor <clinit>()V
    .locals 52

    .line 84
    const-string v0, "MSG_ID_EM_EMM_PLMNSEL_INFO_IND"

    const-string v1, "MSG_ID_EM_EL2_OV_STATUS_IND"

    const-string v2, "MSG_ID_EM_ERRC_SERVING_INFO_IND"

    const-string v3, "MSG_ID_EM_EL1_STATUS_IND"

    const-string v4, "MSG_ID_EM_ERRC_STATE_IND"

    const-string v5, "MSG_ID_EM_ERRC_MOB_MEAS_INTRARAT_INFO_IND"

    const-string v6, "MSG_ID_EM_RRM_MEASUREMENT_REPORT_INFO_IND"

    const-string v7, "MSG_ID_EM_GSM_TAS_INFO_IND"

    const-string v8, "MSG_ID_EM_C2K_L4_EVDO_SERVING_INFO_IND"

    const-string v9, "MSG_ID_EM_C2K_L4_RTT_RADIO_INFO_IND"

    const-string v10, "MSG_ID_EM_MM_INFO_IND"

    const-string v11, "MSG_ID_TDD_EM_CSCE_SERV_CELL_S_STATUS_IND"

    const-string v12, "MSG_ID_EM_TDD_L1_TAS_INFO_IND"

    const-string v13, "MSG_ID_FDD_EM_CSCE_SERV_CELL_S_STATUS_IND"

    const-string v14, "MSG_ID_FDD_EM_MEME_DCH_UMTS_CELL_INFO_IND"

    const-string v15, "MSG_ID_FDD_EM_URR_3G_GENERAL_STATUS_IND"

    const-string v16, "MSG_ID_FDD_EM_UL1_TAS_INFO_IND"

    const-string v17, "MSG_ID_TDD_EM_URR_3G_GENERAL_STATUS_IND"

    const-string v18, "MSG_ID_EM_RRM_LAI_INFO_IND"

    const-string v19, "MSG_ID_EM_C2K_L4_SPRINT_EVDO_INFO_IND"

    const-string v20, "MSG_ID_EM_C2K_L4_SPRINT_XRTT_INFO_IND"

    const-string v21, "MSG_ID_EM_ERRC_MOB_MEAS_INTERRAT_UTRAN_INFO_IND"

    const-string v22, "MSG_ID_EM_ERRC_MOB_MEAS_INTERRAT_GERAN_INFO_IND"

    const-string v23, "MSG_ID_TDD_EM_MEME_DCH_LTE_CELL_INFO_IND"

    const-string v24, "MSG_ID_TDD_EM_CSCE_NEIGH_CELL_S_STATUS_IND"

    const-string v25, "MSG_ID_TDD_EM_MEME_DCH_UMTS_CELL_INFO_IND"

    const-string v26, "MSG_ID_TDD_EM_MEME_DCH_GSM_CELL_INFO_IND"

    const-string v27, "MSG_ID_EM_RRM_IR_4G_NEIGHBOR_MEAS_STATUS_IND"

    const-string v28, "MSG_ID_EM_RRM_IR_3G_NEIGHBOR_MEAS_STATUS_IND"

    const-string v29, "MSG_ID_FDD_EM_CSCE_NEIGH_CELL_S_STATUS_IND"

    const-string v30, "MSG_ID_FDD_EM_MEME_DCH_LTE_CELL_INFO_IND"

    const-string v31, "MSG_ID_FDD_EM_MEME_DCH_GSM_CELL_INFO_IND"

    const-string v32, "MSG_ID_FDD_EM_UL1_HSPA_INFO_GROUP_IND"

    const-string v33, "MSG_ID_EM_CSR_STATUS_IND"

    const-string v34, "MSG_ID_EM_GMM_INFO_IND"

    const-string v35, "MSG_ID_EM_MM_LU_INFO_IND"

    const-string v36, "MSG_ID_EM_SM_NSAPI5_STATUS_IND"

    const-string v37, "MSG_ID_EM_SM_NSAPI6_STATUS_IND"

    const-string v38, "MSG_ID_EM_SM_NSAPI7_STATUS_IND"

    const-string v39, "MSG_ID_EM_SM_NSAPI8_STATUS_IND"

    const-string v40, "MSG_ID_EM_SM_NSAPI9_STATUS_IND"

    const-string v41, "MSG_ID_EM_SM_NSAPI10_STATUS_IND"

    const-string v42, "MSG_ID_EM_SM_NSAPI11_STATUS_IND"

    const-string v43, "MSG_ID_EM_SM_NSAPI12_STATUS_IND"

    const-string v44, "MSG_ID_EM_SM_NSAPI13_STATUS_IND"

    const-string v45, "MSG_ID_EM_SM_NSAPI14_STATUS_IND"

    const-string v46, "MSG_ID_EM_SM_NSAPI15_STATUS_IND"

    const-string v47, "MSG_ID_EM_SPEECH_INFO_SPH_CODEC_IND"

    const-string v48, "MSG_ID_EM_EMM_REG_ATTACH_INFO_IND"

    const-string v49, "MSG_ID_EM_EMM_REG_TAU_INFO_IND"

    const-string v50, "MSG_ID_EM_ESM_ESM_INFO_IND"

    const-string v51, "MSG_ID_EM_TCM_INFO_IND"

    filled-new-array/range {v0 .. v51}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;I)V
    .locals 3
    .param p1, "context"    # Landroid/app/Activity;
    .param p2, "simCount"    # I

    .line 571
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;-><init>(Landroid/app/Activity;I)V

    .line 161
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mFirstBroadcast:Z

    .line 163
    const/4 v1, 0x0

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->locationManager:Landroid/location/LocationManager;

    .line 164
    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->SimCardChangedReceiver:Landroid/content/BroadcastReceiver;

    .line 165
    const-string v1, "UnKnown"

    filled-new-array {v1, v1}, [Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->networkInfo:[Ljava/lang/String;

    .line 167
    const/16 v1, 0xa

    invoke-static {v1}, Ljava/util/concurrent/Executors;->newFixedThreadPool(I)Ljava/util/concurrent/ExecutorService;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->executorService:Ljava/util/concurrent/ExecutorService;

    .line 169
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->TasVersion:I

    .line 170
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->oldDlMod0Pcell:I

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->oldDlMod1Pcell:I

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->oldUlMode:I

    .line 171
    const/16 v0, 0xb

    new-array v1, v0, [Ljava/lang/String;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->pdpIndex:[Ljava/lang/String;

    .line 172
    new-array v1, v0, [Ljava/lang/String;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->pdpapn_s:[Ljava/lang/String;

    .line 173
    new-array v1, v0, [Ljava/lang/String;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->pdpStatus:[Ljava/lang/String;

    .line 174
    new-array v1, v0, [Ljava/lang/String;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->cids:[Ljava/lang/String;

    .line 175
    new-array v1, v0, [Ljava/lang/String;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->linkedCids:[Ljava/lang/String;

    .line 176
    new-array v1, v0, [Z

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->status:[Z

    .line 177
    const/16 v1, 0xf

    new-array v2, v1, [Ljava/lang/String;

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_index_s:[Ljava/lang/String;

    .line 178
    new-array v2, v0, [Ljava/lang/String;

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_ebi_s:[Ljava/lang/String;

    .line 179
    new-array v0, v0, [Ljava/lang/String;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_pdpapn_s:[Ljava/lang/String;

    .line 180
    new-array v0, v1, [Ljava/lang/String;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_ptebi_s:[Ljava/lang/String;

    .line 181
    new-array v0, v1, [Ljava/lang/String;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_ptlinkebi_s:[Ljava/lang/String;

    .line 183
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->repeateMsgArray:Ljava/util/Set;

    .line 208
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->AntennaMapping:Ljava/util/HashMap;

    .line 217
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$3;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->TasEnableMapping:Ljava/util/HashMap;

    .line 225
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$4;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$4;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->ERRCStateMapping:Ljava/util/HashMap;

    .line 237
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$5;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$5;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->ServingBandMapping:Ljava/util/HashMap;

    .line 245
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$6;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$6;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mRrStateMapping:Ljava/util/Map;

    .line 253
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$7;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$7;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->bandMapping:Ljava/util/HashMap;

    .line 266
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$8;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$8;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mStateMapping:Ljava/util/HashMap;

    .line 287
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$9;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$9;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingQam:Ljava/util/HashMap;

    .line 297
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$10;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$10;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingBW:Ljava/util/HashMap;

    .line 309
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$11;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$11;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->gsmBandMapping:Ljava/util/HashMap;

    .line 317
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$12;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->speechCodecMapping:Ljava/util/HashMap;

    .line 349
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$13;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$13;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->pdpStatusMapping:Ljava/util/HashMap;

    .line 359
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$14;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$14;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->attachTypeMapping:Ljava/util/HashMap;

    .line 369
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$15;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$15;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->luTypeMapping:Ljava/util/HashMap;

    .line 378
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$16;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$16;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->gmmStateMapping:Ljava/util/HashMap;

    .line 412
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$17;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$17;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingSpeechCodec:Ljava/util/HashMap;

    .line 533
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$18;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$18;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lteAttachTypeMapping:Ljava/util/HashMap;

    .line 542
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$19;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$19;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lteTAUTypeMapping:Ljava/util/HashMap;

    .line 552
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$20;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$20;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLteMappingQam:Ljava/util/HashMap;

    .line 561
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$21;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$21;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mKeyWordMapping:Ljava/util/HashMap;

    .line 653
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$22;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$22;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLocListener:Landroid/location/LocationListener;

    .line 572
    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    .line 83
    iget-boolean v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mFirstBroadcast:Z

    return v0
.end method

.method static synthetic access$002(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;
    .param p1, "x1"    # Z

    .line 83
    iput-boolean p1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mFirstBroadcast:Z

    return p1
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)[Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    .line 83
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->Labels:[Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$202(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;[Ljava/lang/String;)[Ljava/lang/String;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;
    .param p1, "x1"    # [Ljava/lang/String;

    .line 83
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->Labels:[Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;I)[Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;
    .param p1, "x1"    # I

    .line 83
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getSurpportedLabel(I)[Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;I)Ljava/util/Set;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;
    .param p1, "x1"    # I

    .line 83
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getSupportedLabelsByKeyWord(I)Ljava/util/Set;

    move-result-object v0

    return-object v0
.end method

.method private getNetworkType(I)[I
    .locals 7
    .param p1, "simID"    # I

    .line 2813
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mActivity:Landroid/app/Activity;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mActivity:Landroid/app/Activity;

    .line 2814
    const-string v1, "phone"

    invoke-virtual {v0, v1}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/telephony/TelephonyManager;

    .line 2815
    .local v0, "telephonyManager":Landroid/telephony/TelephonyManager;
    const/4 v1, 0x2

    const-string v2, "EmInfo/MDMComponent"

    if-nez v0, :cond_0

    .line 2816
    const-string v3, "[getNetworkType] telephonyManager == null"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 2817
    new-array v1, v1, [I

    fill-array-data v1, :array_0

    return-object v1

    .line 2820
    :cond_0
    invoke-virtual {v0, p1}, Landroid/telephony/TelephonyManager;->getDataNetworkType(I)I

    move-result v3

    .line 2821
    .local v3, "dataNetworkType":I
    invoke-virtual {v0, p1}, Landroid/telephony/TelephonyManager;->getVoiceNetworkType(I)I

    move-result v4

    .line 2822
    .local v4, "voiceNetworkType":I
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "[getNetworkType] SIM"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ", getDataNetworkType "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ", getVoiceNetworkType "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v2, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2825
    new-array v1, v1, [I

    const/4 v2, 0x0

    aput v3, v1, v2

    const/4 v2, 0x1

    aput v4, v1, v2

    return-object v1

    nop

    :array_0
    .array-data 4
        0x0
        0x0
    .end array-data
.end method

.method private getSupportedLabelsByKeyWord(I)Ljava/util/Set;
    .locals 14
    .param p1, "simID"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 2698
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    .line 2699
    .local v0, "validLabels":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->isValidSimID(I)Z

    move-result v1

    if-eqz v1, :cond_8

    .line 2700
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initLabels()[Ljava/lang/String;

    move-result-object v1

    array-length v2, v1

    const/4 v3, 0x0

    move v4, v3

    :goto_0
    if-ge v4, v2, :cond_8

    aget-object v5, v1, v4

    .line 2701
    .local v5, "mLabel":Ljava/lang/String;
    const/4 v6, 0x1

    .line 2702
    .local v6, "isValid":Z
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mKeyWordMapping:Ljava/util/HashMap;

    invoke-virtual {v7, v5}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v7

    const-string v8, "-"

    if-nez v7, :cond_0

    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mKeyWordMapping:Ljava/util/HashMap;

    .line 2703
    invoke-virtual {v5, v8}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v9

    aget-object v9, v9, v3

    invoke-virtual {v7, v9}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_5

    .line 2704
    :cond_0
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mKeyWordMapping:Ljava/util/HashMap;

    invoke-virtual {v7, v5}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    if-eqz v7, :cond_1

    .line 2705
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mKeyWordMapping:Ljava/util/HashMap;

    invoke-virtual {v7, v5}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, [Ljava/lang/String;

    goto :goto_1

    .line 2706
    :cond_1
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mKeyWordMapping:Ljava/util/HashMap;

    invoke-virtual {v5, v8}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v9

    aget-object v9, v9, v3

    invoke-virtual {v7, v9}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, [Ljava/lang/String;

    :goto_1
    nop

    .line 2707
    .local v7, "keyWords":[Ljava/lang/String;
    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->isLabelArrayType(Ljava/lang/String;)Z

    move-result v9

    if-eqz v9, :cond_2

    .line 2708
    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v9, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/util/LinkedHashMap;

    invoke-virtual {v9, v5}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/util/LinkedHashMap;

    invoke-virtual {v9}, Ljava/util/LinkedHashMap;->size()I

    move-result v9

    const/4 v10, 0x1

    if-gt v9, v10, :cond_5

    .line 2709
    const/4 v6, 0x0

    .line 2710
    goto/16 :goto_5

    .line 2713
    :cond_2
    array-length v9, v7

    move v10, v3

    :goto_2
    if-ge v10, v9, :cond_5

    aget-object v11, v7, v10

    .line 2714
    .local v11, "key":Ljava/lang/String;
    iget-object v12, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v12, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v12

    check-cast v12, Ljava/util/LinkedHashMap;

    invoke-virtual {v12, v5}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v12

    check-cast v12, Ljava/util/LinkedHashMap;

    invoke-virtual {v12, v11}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v12

    if-eqz v12, :cond_4

    iget-object v12, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->hmapLabelsList:Ljava/util/List;

    .line 2715
    invoke-interface {v12, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v12

    check-cast v12, Ljava/util/LinkedHashMap;

    invoke-virtual {v12, v5}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v12

    check-cast v12, Ljava/util/LinkedHashMap;

    invoke-virtual {v12, v11}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v12

    const-string v13, ""

    invoke-virtual {v12, v13}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v12

    if-nez v12, :cond_4

    iget-object v12, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->hmapLabelsList:Ljava/util/List;

    .line 2716
    invoke-interface {v12, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v12

    check-cast v12, Ljava/util/LinkedHashMap;

    invoke-virtual {v12, v5}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v12

    check-cast v12, Ljava/util/LinkedHashMap;

    invoke-virtual {v12, v11}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v12

    const-string v13, "0"

    invoke-virtual {v12, v13}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v12

    if-eqz v12, :cond_3

    goto :goto_3

    .line 2713
    .end local v11    # "key":Ljava/lang/String;
    :cond_3
    add-int/lit8 v10, v10, 0x1

    goto :goto_2

    .line 2717
    .restart local v11    # "key":Ljava/lang/String;
    :cond_4
    :goto_3
    const/4 v6, 0x0

    .line 2718
    nop

    .line 2723
    .end local v7    # "keyWords":[Ljava/lang/String;
    .end local v11    # "key":Ljava/lang/String;
    :cond_5
    if-eqz v6, :cond_7

    .line 2724
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mKeyWordMapping:Ljava/util/HashMap;

    invoke-virtual {v5, v8}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v9

    aget-object v9, v9, v3

    invoke-virtual {v7, v9}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_6

    .line 2725
    invoke-virtual {v5, v8}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v7

    aget-object v7, v7, v3

    goto :goto_4

    :cond_6
    move-object v7, v5

    .line 2724
    :goto_4
    invoke-interface {v0, v7}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    .line 2700
    .end local v5    # "mLabel":Ljava/lang/String;
    .end local v6    # "isValid":Z
    :cond_7
    :goto_5
    add-int/lit8 v4, v4, 0x1

    goto/16 :goto_0

    .line 2729
    :cond_8
    return-object v0
.end method

.method private getSurpportedLabel(I)[Ljava/lang/String;
    .locals 10
    .param p1, "simID"    # I

    .line 2733
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getNetworkType(I)[I

    move-result-object v0

    .line 2734
    .local v0, "networkType":[I
    array-length v1, v0

    new-array v1, v1, [Ljava/lang/String;

    .line 2735
    .local v1, "rtString":[Ljava/lang/String;
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    array-length v3, v0

    const-string v4, "UMTS"

    const-string v5, "UMTS FDD"

    if-ge v2, v3, :cond_0

    .line 2736
    aget v3, v0, v2

    const-string v6, "LTE"

    const-string v7, "1xRTT"

    const-string v8, "GSM"

    const-string v9, "EVDO"

    packed-switch v3, :pswitch_data_0

    .line 2792
    :pswitch_0
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->networkInfo:[Ljava/lang/String;

    aget-object v3, v3, v2

    aput-object v3, v1, v2

    .line 2793
    const-string v3, "EmInfo/MDMComponent"

    const-string v4, "Unexpected radioTechnology"

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 2789
    :pswitch_1
    aput-object v6, v1, v2

    .line 2790
    goto :goto_1

    .line 2786
    :pswitch_2
    aput-object v5, v1, v2

    .line 2787
    goto :goto_1

    .line 2783
    :pswitch_3
    aput-object v8, v1, v2

    .line 2784
    goto :goto_1

    .line 2780
    :pswitch_4
    aput-object v5, v1, v2

    .line 2781
    goto :goto_1

    .line 2774
    :pswitch_5
    aput-object v9, v1, v2

    .line 2775
    goto :goto_1

    .line 2777
    :pswitch_6
    aput-object v6, v1, v2

    .line 2778
    goto :goto_1

    .line 2771
    :pswitch_7
    aput-object v9, v1, v2

    .line 2772
    goto :goto_1

    .line 2768
    :pswitch_8
    aput-object v5, v1, v2

    .line 2769
    goto :goto_1

    .line 2765
    :pswitch_9
    aput-object v5, v1, v2

    .line 2766
    goto :goto_1

    .line 2762
    :pswitch_a
    aput-object v5, v1, v2

    .line 2763
    goto :goto_1

    .line 2753
    :pswitch_b
    aput-object v7, v1, v2

    .line 2754
    goto :goto_1

    .line 2759
    :pswitch_c
    aput-object v9, v1, v2

    .line 2760
    goto :goto_1

    .line 2756
    :pswitch_d
    aput-object v9, v1, v2

    .line 2757
    goto :goto_1

    .line 2750
    :pswitch_e
    aput-object v7, v1, v2

    .line 2751
    goto :goto_1

    .line 2747
    :pswitch_f
    aput-object v4, v1, v2

    .line 2748
    goto :goto_1

    .line 2744
    :pswitch_10
    aput-object v8, v1, v2

    .line 2745
    goto :goto_1

    .line 2741
    :pswitch_11
    aput-object v8, v1, v2

    .line 2742
    goto :goto_1

    .line 2738
    :pswitch_12
    const-string v3, "Unknow"

    aput-object v3, v1, v2

    .line 2739
    nop

    .line 2735
    :goto_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 2797
    .end local v2    # "i":I
    :cond_0
    const/4 v2, 0x0

    aget-object v3, v1, v2

    invoke-virtual {v3, v4}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v3

    const/4 v6, 0x1

    if-gez v3, :cond_1

    aget-object v3, v1, v6

    invoke-virtual {v3, v4}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v3

    if-ltz v3, :cond_7

    .line 2798
    :cond_1
    invoke-static {}, Lcom/mediatek/engineermode/WorldModeUtil;->get3GDivisionDuplexMode()I

    move-result v3

    .line 2799
    .local v3, "mask":I
    if-eqz v3, :cond_7

    .line 2800
    if-ne v3, v6, :cond_2

    goto :goto_2

    :cond_2
    const-string v5, "UMTS TDD"

    .line 2801
    .local v5, "rt3GString":Ljava/lang/String;
    :goto_2
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCapabilitySim()I

    move-result v7

    if-ne v7, p1, :cond_3

    if-ne v3, v6, :cond_4

    .line 2803
    :cond_3
    const-string v5, "UMTS FDD"

    .line 2805
    :cond_4
    aget-object v7, v1, v2

    invoke-virtual {v7, v4}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v7

    if-ltz v7, :cond_5

    move-object v7, v5

    goto :goto_3

    :cond_5
    aget-object v7, v1, v2

    :goto_3
    aput-object v7, v1, v2

    .line 2806
    aget-object v2, v1, v6

    invoke-virtual {v2, v4}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v2

    if-ltz v2, :cond_6

    move-object v2, v5

    goto :goto_4

    :cond_6
    aget-object v2, v1, v6

    :goto_4
    aput-object v2, v1, v6

    .line 2809
    .end local v3    # "mask":I
    .end local v5    # "rt3GString":Ljava/lang/String;
    :cond_7
    return-object v1

    nop

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_12
        :pswitch_11
        :pswitch_10
        :pswitch_f
        :pswitch_e
        :pswitch_d
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_0
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_0
        :pswitch_1
    .end packed-switch
.end method

.method private getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;
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

    .line 406
    .local p2, "map":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/Integer;Ljava/lang/String;>;"
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 407
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    return-object v0

    .line 409
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "-("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ")"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method antidxMapping(I)Ljava/lang/String;
    .locals 4
    .param p1, "antidx"    # I

    .line 826
    const-string v0, " "

    .line 827
    .local v0, "antidx_s":Ljava/lang/String;
    if-ltz p1, :cond_0

    const/4 v1, 0x3

    if-gt p1, v1, :cond_0

    .line 828
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->AntennaMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    goto :goto_0

    .line 830
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->AntennaMapping:Ljava/util/HashMap;

    const/4 v3, 0x4

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "("

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ")"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 831
    :goto_0
    return-object v0
.end method

.method clearData()V
    .locals 2

    .line 2839
    const-string v0, "EmInfo/MDMComponent"

    const-string v1, "[clearData]"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2840
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->unRegisteListener()V

    .line 2841
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->layout:Landroid/widget/LinearLayout;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->layout:Landroid/widget/LinearLayout;

    invoke-virtual {v0}, Landroid/widget/LinearLayout;->getChildCount()I

    move-result v0

    if-lez v0, :cond_0

    .line 2842
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->layout:Landroid/widget/LinearLayout;

    invoke-virtual {v0}, Landroid/widget/LinearLayout;->removeAllViews()V

    .line 2843
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->scrollView:Landroid/widget/ScrollView;

    invoke-virtual {v0}, Landroid/widget/ScrollView;->removeAllViews()V

    .line 2845
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->commonView:Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 2846
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->commonInfoAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->clear()V

    .line 2847
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mUpdateTaskDriven:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->isTaskRunning()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 2848
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->taskStop()V

    .line 2849
    return-void

    .line 2851
    :cond_1
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->resetPublicValues()V

    .line 2852
    const/4 v0, -0x1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->clearViewData(I)V

    .line 2853
    return-void
.end method

.method public getArrayTypeLabels()Ljava/util/ArrayList;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 805
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 806
    .local v0, "arrayTypeKeys":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    const-string v1, "LTE-Scell"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 807
    const-string v1, "LTE-Neighbor Cell"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 808
    const-string v1, "GSM-Neighbor Cell"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 809
    const-string v1, "UMTS FDD-Active Set"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 810
    const-string v1, "UMTS TDD-Neighbor Cell"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 811
    const-string v1, "UMTS FDD-Neighbor Cell"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 812
    const-string v1, "UMTS FDD-PDN Context List"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 813
    const-string v1, "LTE-Pcell and Scell basic info"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 814
    const-string v1, "LTE-PDP Context Information"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 815
    return-object v0
.end method

.method getBandMapping(I)Ljava/lang/String;
    .locals 4
    .param p1, "bandidx"    # I

    .line 869
    const-string v0, ""

    .line 870
    .local v0, "bandidx_s":Ljava/lang/String;
    if-eqz p1, :cond_1

    const/4 v1, 0x1

    if-ne p1, v1, :cond_0

    goto :goto_0

    .line 873
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->gsmBandMapping:Ljava/util/HashMap;

    const/4 v3, 0x2

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "("

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ")"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    .line 871
    :cond_1
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->gsmBandMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    .line 874
    :goto_1
    return-object v0
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 725
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 720
    const-string v0, "1. General EM Component"

    return-object v0
.end method

.method getIndexOfEmTypes(Ljava/lang/String;)I
    .locals 3
    .param p1, "name"    # Ljava/lang/String;

    .line 860
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    sget-object v1, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->EM_TYPES:[Ljava/lang/String;

    array-length v2, v1

    if-ge v0, v2, :cond_1

    .line 861
    aget-object v1, v1, v0

    invoke-virtual {v1, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 862
    return v0

    .line 860
    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 865
    .end local v0    # "i":I
    :cond_1
    const/4 v0, -0x1

    return v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 715
    const-string v0, "FT Network Info"

    return-object v0
.end method

.method public getUpdateMap([Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)Ljava/util/HashMap;
    .locals 101
    .param p1, "Labels"    # [Ljava/lang/String;
    .param p2, "simID"    # I
    .param p3, "name"    # Ljava/lang/String;
    .param p4, "msg"    # Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([",
            "Ljava/lang/String;",
            "I",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ")",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation

    .line 927
    move-object/from16 v0, p0

    move/from16 v1, p2

    move-object/from16 v2, p3

    move-object/from16 v3, p4

    check-cast v3, Lcom/mediatek/mdml/Msg;

    .line 928
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    const-string v4, ""

    .line 929
    .local v4, "label":Ljava/lang/String;
    new-instance v5, Ljava/util/HashMap;

    invoke-direct {v5}, Ljava/util/HashMap;-><init>()V

    .line 930
    .local v5, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    const-string v6, ""

    .local v6, "coName":Ljava/lang/String;
    const-string v7, ""

    .line 936
    .local v7, "coName1":Ljava/lang/String;
    const/4 v8, 0x0

    .line 937
    .local v8, "antidx":I
    const/4 v9, 0x0

    .line 938
    .local v9, "rsrp_l_ant":I
    const/4 v10, 0x0

    .line 939
    .local v10, "rsrp_u_ant":I
    const/4 v11, 0x0

    .line 940
    .local v11, "rsrp_l_ant_a":I
    const/4 v12, 0x0

    .line 941
    .local v12, "tx_pwr":I
    const/4 v13, 0x2

    .line 942
    .local v13, "tasidx":I
    const/4 v14, 0x0

    .line 943
    .local v14, "cellNum":I
    const/4 v15, 0x0

    .line 946
    .local v15, "indexTotal":I
    const-string v16, ""

    .line 947
    .local v16, "plmn":Ljava/lang/String;
    move-object/from16 v17, v4

    .end local v4    # "label":Ljava/lang/String;
    .local v17, "label":Ljava/lang/String;
    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getIndexOfEmTypes(Ljava/lang/String;)I

    move-result v4

    .line 948
    .local v4, "emType":I
    move-object/from16 v18, v7

    .end local v7    # "coName1":Ljava/lang/String;
    .local v18, "coName1":Ljava/lang/String;
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v19, v8

    .end local v8    # "antidx":I
    .local v19, "antidx":I
    const-string v8, "Sim"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, ", update: "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, ","

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const-string v8, "EmInfo/MDMComponent"

    invoke-static {v8, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 949
    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap(I)V

    .line 951
    const-wide/16 v7, 0x0

    .line 952
    .local v7, "earfcnPcell":J
    move/from16 v20, v9

    .end local v9    # "rsrp_l_ant":I
    .local v20, "rsrp_l_ant":I
    const/4 v9, 0x3

    move/from16 v21, v10

    .end local v10    # "rsrp_u_ant":I
    .local v21, "rsrp_u_ant":I
    new-array v10, v9, [J

    .line 953
    .local v10, "earfcnScellArr":[J
    move/from16 v22, v11

    .end local v11    # "rsrp_l_ant_a":I
    .local v22, "rsrp_l_ant_a":I
    const/4 v11, 0x0

    .line 954
    .local v11, "bandPcell":I
    move/from16 v23, v12

    .end local v12    # "tx_pwr":I
    .local v23, "tx_pwr":I
    new-array v12, v9, [I

    .line 955
    .local v12, "bandScellArr":[I
    move/from16 v24, v13

    .end local v13    # "tasidx":I
    .local v24, "tasidx":I
    const/4 v13, 0x0

    .line 956
    .local v13, "dlBandwidthPcell":I
    move/from16 v25, v14

    .end local v14    # "cellNum":I
    .local v25, "cellNum":I
    new-array v14, v9, [I

    .line 957
    .local v14, "dlBandwidthScellArr":[I
    move/from16 v26, v15

    .end local v15    # "indexTotal":I
    .local v26, "indexTotal":I
    const/4 v15, 0x0

    .line 958
    .local v15, "ulBandwidthPcell":I
    move-wide/from16 v27, v7

    .end local v7    # "earfcnPcell":J
    .local v27, "earfcnPcell":J
    new-array v7, v9, [I

    .line 959
    .local v7, "ulBandwidthScellArr":[I
    const/4 v8, 0x0

    .line 960
    .local v8, "tmPcell":I
    move/from16 v29, v11

    .end local v11    # "bandPcell":I
    .local v29, "bandPcell":I
    new-array v11, v9, [I

    .line 961
    .local v11, "tmScellArr":[I
    move-object/from16 v30, v11

    .end local v11    # "tmScellArr":[I
    .local v30, "tmScellArr":[I
    const/4 v11, 0x0

    .line 962
    .local v11, "pciPcell":I
    move/from16 v31, v11

    .end local v11    # "pciPcell":I
    .local v31, "pciPcell":I
    new-array v11, v9, [I

    .line 963
    .local v11, "pciScellArr":[I
    move/from16 v32, v8

    .end local v8    # "tmPcell":I
    .local v32, "tmPcell":I
    const/4 v8, 0x0

    .line 964
    .local v8, "snrPcell":I
    move/from16 v33, v8

    .end local v8    # "snrPcell":I
    .local v33, "snrPcell":I
    new-array v8, v9, [I

    .line 965
    .local v8, "snrScellArr":[I
    move-object/from16 v34, v7

    .end local v7    # "ulBandwidthScellArr":[I
    .local v34, "ulBandwidthScellArr":[I
    const/4 v7, 0x0

    .line 966
    .local v7, "dlFreqPcell":I
    move/from16 v35, v7

    .end local v7    # "dlFreqPcell":I
    .local v35, "dlFreqPcell":I
    new-array v7, v9, [I

    .line 967
    .local v7, "dlFreqScellArr":[I
    move-object/from16 v36, v7

    .end local v7    # "dlFreqScellArr":[I
    .local v36, "dlFreqScellArr":[I
    const/4 v7, 0x0

    .line 968
    .local v7, "ulFreqPcell":I
    move/from16 v37, v7

    .end local v7    # "ulFreqPcell":I
    .local v37, "ulFreqPcell":I
    new-array v7, v9, [I

    .line 969
    .local v7, "ulFreqScellArr":[I
    move-object/from16 v38, v7

    .end local v7    # "ulFreqScellArr":[I
    .local v38, "ulFreqScellArr":[I
    const/4 v7, 0x0

    .line 970
    .local v7, "rsrpPcell":I
    move/from16 v39, v7

    .end local v7    # "rsrpPcell":I
    .local v39, "rsrpPcell":I
    new-array v7, v9, [I

    .line 971
    .local v7, "rsrpScellArr":[I
    move/from16 v40, v15

    .end local v15    # "ulBandwidthPcell":I
    .local v40, "ulBandwidthPcell":I
    const/4 v15, 0x0

    .line 972
    .local v15, "rsrqPcell":I
    move/from16 v41, v15

    .end local v15    # "rsrqPcell":I
    .local v41, "rsrqPcell":I
    new-array v15, v9, [I

    .line 973
    .local v15, "rsrqScellArr":[I
    const/16 v42, 0x0

    .line 974
    .local v42, "dlMod0Pcell":I
    move-object/from16 v43, v14

    .end local v14    # "dlBandwidthScellArr":[I
    .local v43, "dlBandwidthScellArr":[I
    const/4 v14, 0x0

    .line 975
    .local v14, "oldDlMod0Pcell":I
    move/from16 v44, v14

    .end local v14    # "oldDlMod0Pcell":I
    .local v44, "oldDlMod0Pcell":I
    new-array v14, v9, [I

    .line 976
    .local v14, "dlMod0ScellArr":[I
    move-object/from16 v45, v14

    .end local v14    # "dlMod0ScellArr":[I
    .local v45, "dlMod0ScellArr":[I
    new-array v14, v9, [I

    .line 977
    .local v14, "oldDlMod0ScellArr":[I
    const/16 v46, 0x0

    .line 978
    .local v46, "dlMod1Pcell":I
    move-object/from16 v47, v14

    .end local v14    # "oldDlMod0ScellArr":[I
    .local v47, "oldDlMod0ScellArr":[I
    const/4 v14, 0x0

    .line 979
    .local v14, "oldDlMod1Pcell":I
    move/from16 v48, v14

    .end local v14    # "oldDlMod1Pcell":I
    .local v48, "oldDlMod1Pcell":I
    new-array v14, v9, [I

    .line 980
    .local v14, "dlMod1ScellArr":[I
    move-object/from16 v49, v14

    .end local v14    # "dlMod1ScellArr":[I
    .local v49, "dlMod1ScellArr":[I
    new-array v14, v9, [I

    .line 981
    .local v14, "oldDlMod1ScellArr":[I
    const/16 v50, 0x0

    .line 982
    .local v50, "ulPcell":I
    move-object/from16 v51, v14

    .end local v14    # "oldDlMod1ScellArr":[I
    .local v51, "oldDlMod1ScellArr":[I
    const/4 v14, 0x0

    .line 983
    .local v14, "oldUlPcell":I
    move/from16 v52, v14

    .end local v14    # "oldUlPcell":I
    .local v52, "oldUlPcell":I
    new-array v14, v9, [I

    .line 984
    .local v14, "ulScellArr":[I
    move-object/from16 v53, v14

    .end local v14    # "ulScellArr":[I
    .local v53, "ulScellArr":[I
    new-array v14, v9, [I

    .line 987
    .local v14, "oldUlScellArr":[I
    const/4 v9, 0x4

    move-object/from16 v55, v14

    .end local v14    # "oldUlScellArr":[I
    .local v55, "oldUlScellArr":[I
    new-array v14, v9, [I

    .line 988
    .local v14, "DlCellAntPort":[I
    move-object/from16 v56, v14

    .end local v14    # "DlCellAntPort":[I
    .local v56, "DlCellAntPort":[I
    new-array v14, v9, [I

    .line 989
    .local v14, "DlCellTput":[I
    move-object/from16 v57, v14

    .end local v14    # "DlCellTput":[I
    .local v57, "DlCellTput":[I
    new-array v14, v9, [I

    .line 990
    .local v14, "UlCellTput":[I
    move-object/from16 v58, v14

    .end local v14    # "UlCellTput":[I
    .local v58, "UlCellTput":[I
    new-array v14, v9, [I

    .line 991
    .local v14, "DlCellImcs":[I
    move-object/from16 v59, v14

    .end local v14    # "DlCellImcs":[I
    .local v59, "DlCellImcs":[I
    new-array v14, v9, [I

    .line 992
    .local v14, "UlCellImcs":[I
    move-object/from16 v60, v14

    .end local v14    # "UlCellImcs":[I
    .local v60, "UlCellImcs":[I
    new-array v14, v9, [I

    .line 993
    .local v14, "DlCellBler":[I
    move-object/from16 v61, v14

    .end local v14    # "DlCellBler":[I
    .local v61, "DlCellBler":[I
    new-array v14, v9, [I

    .line 994
    .local v14, "UlCellBler":[I
    move-object/from16 v62, v14

    .end local v14    # "UlCellBler":[I
    .local v62, "UlCellBler":[I
    new-array v14, v9, [I

    .line 995
    .local v14, "DlCellRb":[I
    move-object/from16 v63, v14

    .end local v14    # "DlCellRb":[I
    .local v63, "DlCellRb":[I
    new-array v14, v9, [I

    .line 996
    .local v14, "UlCellRb":[I
    move-object/from16 v64, v14

    .end local v14    # "UlCellRb":[I
    .local v64, "UlCellRb":[I
    new-array v14, v9, [I

    .line 997
    .local v14, "DlCellCqiCw0":[I
    move-object/from16 v65, v14

    .end local v14    # "DlCellCqiCw0":[I
    .local v65, "DlCellCqiCw0":[I
    new-array v14, v9, [I

    .line 998
    .local v14, "DlCellCqiCw1":[I
    move-object/from16 v66, v14

    .end local v14    # "DlCellCqiCw1":[I
    .local v66, "DlCellCqiCw1":[I
    new-array v14, v9, [I

    .line 1000
    .local v14, "DlCellri":[I
    const-string v9, "UARFCN"

    move-object/from16 v68, v14

    .end local v14    # "DlCellri":[I
    .local v68, "DlCellri":[I
    const-string v14, "mnc"

    move/from16 v69, v13

    .end local v13    # "dlBandwidthPcell":I
    .local v69, "dlBandwidthPcell":I
    const-string v13, "mcc"

    move-object/from16 v70, v12

    .end local v12    # "bandScellArr":[I
    .local v70, "bandScellArr":[I
    const-string v12, "RSRQ"

    move-object/from16 v71, v8

    .end local v8    # "snrScellArr":[I
    .local v71, "snrScellArr":[I
    const-string v8, "RSRP"

    move-object/from16 v72, v15

    .end local v15    # "rsrqScellArr":[I
    .local v72, "rsrqScellArr":[I
    const-string v15, "PCI"

    move-object/from16 v73, v7

    .end local v7    # "rsrpScellArr":[I
    .local v73, "rsrpScellArr":[I
    const-string v7, "EARFCN"

    move-object/from16 v74, v11

    .end local v11    # "pciScellArr":[I
    .local v74, "pciScellArr":[I
    const/high16 v78, 0x40800000    # 4.0f

    const-string v11, "["

    move-object/from16 v81, v10

    .end local v10    # "earfcnScellArr":[J
    .local v81, "earfcnScellArr":[J
    const/16 v82, 0x0

    const-string v10, "]."

    move-object/from16 v85, v6

    .end local v6    # "coName":Ljava/lang/String;
    .local v85, "coName":Ljava/lang/String;
    const-string v6, ""

    move-object/from16 v86, v14

    const/4 v14, 0x1

    .line 1003
    move-object/from16 v87, v13

    invoke-static {v14}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v13

    .line 1000
    packed-switch v4, :pswitch_data_0

    :pswitch_0
    move v2, v1

    move-object/from16 v90, v3

    move/from16 v88, v4

    move-object v1, v5

    move/from16 v77, v32

    move/from16 v13, v39

    move/from16 v14, v41

    move/from16 v32, v48

    move/from16 v48, v40

    move/from16 v100, v37

    move/from16 v37, v35

    move/from16 v35, v100

    .end local v3    # "data":Lcom/mediatek/mdml/Msg;
    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v39    # "rsrpPcell":I
    .end local v40    # "ulBandwidthPcell":I
    .end local v41    # "rsrqPcell":I
    .local v1, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v13, "rsrpPcell":I
    .local v14, "rsrqPcell":I
    .local v32, "oldDlMod1Pcell":I
    .local v35, "ulFreqPcell":I
    .local v37, "dlFreqPcell":I
    .local v48, "ulBandwidthPcell":I
    .local v77, "tmPcell":I
    .local v88, "emType":I
    .local v90, "data":Lcom/mediatek/mdml/Msg;
    goto/16 :goto_85

    .line 2583
    .end local v1    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v13    # "rsrpPcell":I
    .end local v14    # "rsrqPcell":I
    .end local v77    # "tmPcell":I
    .end local v88    # "emType":I
    .end local v90    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v3    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v4    # "emType":I
    .restart local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v32, "tmPcell":I
    .local v35, "dlFreqPcell":I
    .local v37, "ulFreqPcell":I
    .restart local v39    # "rsrpPcell":I
    .restart local v40    # "ulBandwidthPcell":I
    .restart local v41    # "rsrqPcell":I
    .local v48, "oldDlMod1Pcell":I
    :pswitch_1
    const/16 v7, 0x19

    aget-object v7, p1, v7

    .line 2584
    .end local v17    # "label":Ljava/lang/String;
    .local v7, "label":Ljava/lang/String;
    invoke-virtual {v5, v7, v13}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2585
    const-string v8, "pdp.nsapi"

    invoke-virtual {v0, v3, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 2586
    .local v8, "nsapi":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "pdp.nsapi: "

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    const-string v10, "EmInfo/MDMComponent"

    invoke-static {v10, v9}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2587
    const/4 v9, 0x5

    if-lt v8, v9, :cond_0

    iget-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->status:[Z

    add-int/lit8 v10, v8, -0x5

    aget-boolean v9, v9, v10

    if-eqz v9, :cond_0

    iget-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->pdpIndex:[Ljava/lang/String;

    add-int/lit8 v10, v8, -0x5

    aget-object v9, v9, v10

    if-eqz v9, :cond_0

    .line 2588
    iget-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->cids:[Ljava/lang/String;

    add-int/lit8 v10, v8, -0x5

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "pdp.cid"

    invoke-virtual {v0, v3, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    aput-object v11, v9, v10

    .line 2589
    const-string v9, "pdp.primary_context_id"

    invoke-virtual {v0, v3, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 2590
    .local v9, "priContextId":I
    const/16 v10, 0xff

    if-eq v9, v10, :cond_0

    .line 2591
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->linkedCids:[Ljava/lang/String;

    add-int/lit8 v11, v8, -0x5

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    aput-object v6, v10, v11

    .line 2594
    .end local v9    # "priContextId":I
    :cond_0
    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->cids:[Ljava/lang/String;

    const-string v9, "Cid"

    invoke-virtual {v0, v7, v1, v9, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 2595
    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->linkedCids:[Ljava/lang/String;

    const-string v9, "Linked Cid"

    invoke-virtual {v0, v7, v1, v9, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 2596
    move v2, v1

    move-object/from16 v90, v3

    move/from16 v88, v4

    move-object v1, v5

    move-object v4, v7

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    move-object/from16 v6, v85

    goto/16 :goto_86

    .line 2540
    .end local v7    # "label":Ljava/lang/String;
    .end local v8    # "nsapi":I
    .restart local v17    # "label":Ljava/lang/String;
    :pswitch_2
    const/4 v7, 0x7

    aget-object v7, p1, v7

    .line 2541
    .end local v17    # "label":Ljava/lang/String;
    .restart local v7    # "label":Ljava/lang/String;
    invoke-virtual {v5, v7, v13}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2542
    invoke-virtual {v0, v7, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->resetHashMapKeyValues(Ljava/lang/String;I)V

    .line 2543
    const/16 v8, 0xb

    new-array v8, v8, [Ljava/lang/String;

    iput-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_pdpapn_s:[Ljava/lang/String;

    .line 2544
    const/16 v8, 0xb

    new-array v8, v8, [Ljava/lang/String;

    iput-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_ebi_s:[Ljava/lang/String;

    .line 2545
    const/16 v8, 0xf

    new-array v9, v8, [Ljava/lang/String;

    iput-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_index_s:[Ljava/lang/String;

    .line 2546
    new-array v9, v8, [Ljava/lang/String;

    iput-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_ptebi_s:[Ljava/lang/String;

    .line 2547
    new-array v8, v8, [Ljava/lang/String;

    iput-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_ptlinkebi_s:[Ljava/lang/String;

    .line 2548
    const/4 v8, 0x0

    .local v8, "j":I
    :goto_0
    const/16 v9, 0xb

    if-ge v8, v9, :cond_6

    .line 2549
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "esm_epsbc["

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    .line 2550
    .end local v85    # "coName":Ljava/lang/String;
    .local v9, "coName":Ljava/lang/String;
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "is_active"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v3, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 2551
    .local v11, "is_active":I
    if-nez v11, :cond_1

    .line 2552
    move/from16 v88, v4

    move-object/from16 v54, v9

    goto/16 :goto_4

    .line 2554
    :cond_1
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "is_active: "

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const-string v13, "EmInfo/MDMComponent"

    invoke-static {v13, v12}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2555
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "apn.length"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v3, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 2556
    .local v12, "apn_length":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "bearer_type"

    invoke-virtual {v13, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v3, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 2557
    .local v13, "lte_ebi_type":I
    if-ne v13, v14, :cond_2

    .line 2558
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_ebi_s:[Ljava/lang/String;

    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v88, v4

    .end local v4    # "emType":I
    .restart local v88    # "emType":I
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v17, v11

    .end local v11    # "is_active":I
    .local v17, "is_active":I
    const-string v11, "ebi"

    invoke-virtual {v4, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v14, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    aput-object v4, v15, v8

    goto :goto_1

    .line 2559
    .end local v17    # "is_active":I
    .end local v88    # "emType":I
    .restart local v4    # "emType":I
    .restart local v11    # "is_active":I
    :cond_2
    move/from16 v88, v4

    move/from16 v17, v11

    .end local v4    # "emType":I
    .end local v11    # "is_active":I
    .restart local v17    # "is_active":I
    .restart local v88    # "emType":I
    const/4 v4, 0x2

    if-ne v13, v4, :cond_3

    .line 2560
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_ptebi_s:[Ljava/lang/String;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "ebi"

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v0, v3, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    aput-object v11, v4, v8

    .line 2562
    :cond_3
    :goto_1
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_ptlinkebi_s:[Ljava/lang/String;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "linked_ebi"

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v0, v3, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    aput-object v11, v4, v8

    .line 2563
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_index_s:[Ljava/lang/String;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    aput-object v11, v4, v8

    .line 2564
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_pdpapn_s:[Ljava/lang/String;

    aput-object v6, v4, v8

    .line 2565
    const/4 v4, 0x0

    .local v4, "i":I
    :goto_2
    if-ge v4, v12, :cond_5

    .line 2566
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "apn.data["

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v14, "]"

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v3, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 2567
    .local v11, "value":I
    if-lez v4, :cond_4

    const/16 v14, 0x1f

    if-ge v11, v14, :cond_4

    .line 2568
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_pdpapn_s:[Ljava/lang/String;

    move-object/from16 v54, v9

    .end local v9    # "coName":Ljava/lang/String;
    .local v54, "coName":Ljava/lang/String;
    aget-object v9, v15, v8

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "."

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    aput-object v9, v15, v8

    goto :goto_3

    .line 2567
    .end local v54    # "coName":Ljava/lang/String;
    .restart local v9    # "coName":Ljava/lang/String;
    :cond_4
    move-object/from16 v54, v9

    .line 2570
    .end local v9    # "coName":Ljava/lang/String;
    .restart local v54    # "coName":Ljava/lang/String;
    int-to-char v9, v11

    .line 2571
    .local v9, "pdpapn":C
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_pdpapn_s:[Ljava/lang/String;

    move/from16 v67, v11

    .end local v11    # "value":I
    .local v67, "value":I
    aget-object v11, v15, v8

    invoke-virtual {v14, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    aput-object v11, v15, v8

    .line 2565
    .end local v9    # "pdpapn":C
    .end local v67    # "value":I
    :goto_3
    add-int/lit8 v4, v4, 0x1

    move-object/from16 v9, v54

    goto :goto_2

    .end local v54    # "coName":Ljava/lang/String;
    .local v9, "coName":Ljava/lang/String;
    :cond_5
    move-object/from16 v54, v9

    .line 2548
    .end local v4    # "i":I
    .end local v9    # "coName":Ljava/lang/String;
    .end local v12    # "apn_length":I
    .end local v13    # "lte_ebi_type":I
    .end local v17    # "is_active":I
    .restart local v54    # "coName":Ljava/lang/String;
    :goto_4
    add-int/lit8 v8, v8, 0x1

    move-object/from16 v85, v54

    move/from16 v4, v88

    const/4 v14, 0x1

    goto/16 :goto_0

    .end local v54    # "coName":Ljava/lang/String;
    .end local v88    # "emType":I
    .local v4, "emType":I
    .restart local v85    # "coName":Ljava/lang/String;
    :cond_6
    move/from16 v88, v4

    .line 2576
    .end local v4    # "emType":I
    .end local v8    # "j":I
    .restart local v88    # "emType":I
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_index_s:[Ljava/lang/String;

    const-string v6, "Index"

    invoke-virtual {v0, v7, v1, v6, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 2577
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_pdpapn_s:[Ljava/lang/String;

    const-string v6, "APN"

    invoke-virtual {v0, v7, v1, v6, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 2578
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_ebi_s:[Ljava/lang/String;

    const-string v6, "Bearer ID"

    invoke-virtual {v0, v7, v1, v6, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 2579
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_ptebi_s:[Ljava/lang/String;

    const-string v6, "Dedicated Bearer ID"

    invoke-virtual {v0, v7, v1, v6, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 2580
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_ptlinkebi_s:[Ljava/lang/String;

    const-string v6, "Dedicated Linked Bearer ID"

    invoke-virtual {v0, v7, v1, v6, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 2581
    move v2, v1

    move-object/from16 v90, v3

    move-object v1, v5

    move-object v4, v7

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    move-object/from16 v6, v85

    goto/16 :goto_86

    .line 2532
    .end local v7    # "label":Ljava/lang/String;
    .end local v88    # "emType":I
    .restart local v4    # "emType":I
    .local v17, "label":Ljava/lang/String;
    :pswitch_3
    move/from16 v88, v4

    .end local v4    # "emType":I
    .restart local v88    # "emType":I
    aget-object v4, p1, v82

    .line 2533
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    invoke-virtual {v5, v4, v13}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2534
    nop

    .line 2535
    const-string v6, "eps_update_type"

    invoke-virtual {v0, v3, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lteTAUTypeMapping:Ljava/util/HashMap;

    invoke-direct {v0, v6, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v6

    .line 2534
    const-string v7, "TAU Type"

    invoke-virtual {v0, v4, v1, v7, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2538
    move v2, v1

    move-object/from16 v90, v3

    move-object v1, v5

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    move-object/from16 v6, v85

    goto/16 :goto_86

    .line 2524
    .end local v88    # "emType":I
    .local v4, "emType":I
    .restart local v17    # "label":Ljava/lang/String;
    :pswitch_4
    move/from16 v88, v4

    .end local v4    # "emType":I
    .restart local v88    # "emType":I
    aget-object v4, p1, v82

    .line 2525
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    invoke-virtual {v5, v4, v13}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2526
    nop

    .line 2527
    const-string v6, "eps_attach_type"

    invoke-virtual {v0, v3, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lteAttachTypeMapping:Ljava/util/HashMap;

    invoke-direct {v0, v6, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v6

    .line 2526
    const-string v7, "Attach Type"

    invoke-virtual {v0, v4, v1, v7, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2530
    move v2, v1

    move-object/from16 v90, v3

    move-object v1, v5

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    move-object/from16 v6, v85

    goto/16 :goto_86

    .line 2502
    .end local v88    # "emType":I
    .local v4, "emType":I
    .restart local v17    # "label":Ljava/lang/String;
    :pswitch_5
    move/from16 v88, v4

    .end local v4    # "emType":I
    .restart local v88    # "emType":I
    aget-object v4, p1, v82

    .line 2503
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    invoke-virtual {v5, v4, v13}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2504
    const-string v6, "ulSphCodec"

    invoke-virtual {v0, v3, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 2505
    .local v6, "ulSpeechCodec":I
    const-string v7, "dlSphCodec"

    invoke-virtual {v0, v3, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 2506
    .local v7, "dlSpeechCodec":I
    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingSpeechCodec:Ljava/util/HashMap;

    .line 2507
    invoke-direct {v0, v6, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v8

    .line 2506
    const-string v9, "UL speech codec"

    invoke-virtual {v0, v4, v1, v9, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2508
    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingSpeechCodec:Ljava/util/HashMap;

    .line 2509
    invoke-direct {v0, v7, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v8

    .line 2508
    const-string v9, "DL speech codec"

    invoke-virtual {v0, v4, v1, v9, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2510
    const/16 v8, 0x8

    aget-object v4, p1, v8

    .line 2511
    invoke-virtual {v5, v4, v13}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2512
    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->speechCodecMapping:Ljava/util/HashMap;

    .line 2513
    invoke-direct {v0, v6, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v8

    .line 2512
    const-string v9, "UL speech codec"

    invoke-virtual {v0, v4, v1, v9, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2514
    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->speechCodecMapping:Ljava/util/HashMap;

    .line 2515
    invoke-direct {v0, v7, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v8

    .line 2514
    const-string v9, "DL speech codec"

    invoke-virtual {v0, v4, v1, v9, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2516
    const/16 v8, 0x15

    aget-object v4, p1, v8

    .line 2517
    invoke-virtual {v5, v4, v13}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2518
    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingSpeechCodec:Ljava/util/HashMap;

    .line 2519
    invoke-direct {v0, v6, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v8

    .line 2518
    const-string v9, "UL speech codec"

    invoke-virtual {v0, v4, v1, v9, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2520
    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingSpeechCodec:Ljava/util/HashMap;

    .line 2521
    invoke-direct {v0, v7, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v8

    .line 2520
    const-string v9, "DL speech codec"

    invoke-virtual {v0, v4, v1, v9, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2522
    move v2, v1

    move-object/from16 v90, v3

    move-object v1, v5

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    move-object/from16 v6, v85

    goto/16 :goto_86

    .line 2476
    .end local v6    # "ulSpeechCodec":I
    .end local v7    # "dlSpeechCodec":I
    .end local v88    # "emType":I
    .local v4, "emType":I
    .restart local v17    # "label":Ljava/lang/String;
    :pswitch_6
    move/from16 v88, v4

    .end local v4    # "emType":I
    .restart local v88    # "emType":I
    const/16 v4, 0x19

    aget-object v4, p1, v4

    .line 2477
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    invoke-virtual {v5, v4, v13}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2478
    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->parsIndex(Ljava/lang/String;)I

    move-result v7

    .line 2479
    .local v7, "index":I
    const-string v8, "pdp.pdp_context_status"

    invoke-virtual {v0, v3, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 2480
    .local v8, "pdp_context_status":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "index: "

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v10, " pdp_context_status:"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    const-string v10, "EmInfo/MDMComponent"

    invoke-static {v10, v9}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2481
    if-eqz v8, :cond_7

    const/4 v9, 0x2

    if-eq v8, v9, :cond_7

    .line 2482
    iget-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->status:[Z

    const/4 v10, 0x1

    aput-boolean v10, v9, v7

    goto :goto_5

    .line 2484
    :cond_7
    iget-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->status:[Z

    aput-boolean v82, v9, v7

    .line 2486
    :goto_5
    iget-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->status:[Z

    aget-boolean v9, v9, v7

    const/4 v10, 0x1

    if-ne v9, v10, :cond_9

    .line 2487
    iget-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->pdpapn_s:[Ljava/lang/String;

    aput-object v6, v9, v7

    .line 2488
    const/4 v6, 0x0

    .local v6, "i":I
    :goto_6
    const/16 v9, 0x64

    if-ge v6, v9, :cond_8

    .line 2489
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "pdp.apn["

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v10, "]"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v3, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    int-to-char v9, v9

    .line 2490
    .local v9, "pdpapn":C
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->pdpapn_s:[Ljava/lang/String;

    aget-object v12, v11, v7

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v9}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    aput-object v10, v11, v7

    .line 2488
    .end local v9    # "pdpapn":C
    add-int/lit8 v6, v6, 0x1

    goto :goto_6

    .line 2492
    .end local v6    # "i":I
    :cond_8
    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->pdpStatus:[Ljava/lang/String;

    .line 2493
    const-string v9, "pdp.pdp_context_status"

    invoke-virtual {v0, v3, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->pdpStatusMapping:Ljava/util/HashMap;

    .line 2492
    invoke-direct {v0, v9, v10}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v9

    aput-object v9, v6, v7

    .line 2495
    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->pdpIndex:[Ljava/lang/String;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "SM_NSAP"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v10, v7, 0x5

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    aput-object v9, v6, v7

    .line 2497
    :cond_9
    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->pdpIndex:[Ljava/lang/String;

    const-string v9, "NSAPI Index"

    invoke-virtual {v0, v4, v1, v9, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 2498
    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->pdpapn_s:[Ljava/lang/String;

    const-string v9, "APN"

    invoke-virtual {v0, v4, v1, v9, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 2499
    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->pdpStatus:[Ljava/lang/String;

    const-string v9, "State"

    invoke-virtual {v0, v4, v1, v9, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 2500
    move v2, v1

    move-object/from16 v90, v3

    move-object v1, v5

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    move-object/from16 v6, v85

    goto/16 :goto_86

    .line 2459
    .end local v7    # "index":I
    .end local v8    # "pdp_context_status":I
    .end local v88    # "emType":I
    .local v4, "emType":I
    .restart local v17    # "label":Ljava/lang/String;
    :pswitch_7
    move/from16 v88, v4

    .end local v4    # "emType":I
    .restart local v88    # "emType":I
    const/16 v4, 0x15

    aget-object v4, p1, v4

    .line 2460
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    invoke-virtual {v5, v4, v13}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2461
    nop

    .line 2462
    const-string v6, "lu_type"

    invoke-virtual {v0, v3, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->luTypeMapping:Ljava/util/HashMap;

    invoke-direct {v0, v6, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v6

    .line 2461
    const-string v7, "Location Update Type"

    invoke-virtual {v0, v4, v1, v7, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2464
    move v2, v1

    move-object/from16 v90, v3

    move-object v1, v5

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    move-object/from16 v6, v85

    goto/16 :goto_86

    .line 2447
    .end local v88    # "emType":I
    .local v4, "emType":I
    .restart local v17    # "label":Ljava/lang/String;
    :pswitch_8
    move/from16 v88, v4

    .end local v4    # "emType":I
    .restart local v88    # "emType":I
    const/16 v4, 0x15

    aget-object v4, p1, v4

    .line 2448
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    invoke-virtual {v5, v4, v13}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2449
    nop

    .line 2450
    const-string v6, "attach_type"

    invoke-virtual {v0, v3, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->attachTypeMapping:Ljava/util/HashMap;

    invoke-direct {v0, v6, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v6

    .line 2449
    const-string v7, "Attach Type"

    invoke-virtual {v0, v4, v1, v7, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2452
    const/16 v6, 0x8

    aget-object v4, p1, v6

    .line 2453
    invoke-virtual {v5, v4, v13}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2454
    nop

    .line 2455
    const-string v6, "gmm_state"

    invoke-virtual {v0, v3, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->gmmStateMapping:Ljava/util/HashMap;

    invoke-direct {v0, v6, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v6

    .line 2454
    const-string v7, "gmm state"

    invoke-virtual {v0, v4, v1, v7, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2457
    move v2, v1

    move-object/from16 v90, v3

    move-object v1, v5

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    move-object/from16 v6, v85

    goto/16 :goto_86

    .line 2411
    .end local v88    # "emType":I
    .local v4, "emType":I
    .restart local v17    # "label":Ljava/lang/String;
    :pswitch_9
    move/from16 v88, v4

    .end local v4    # "emType":I
    .restart local v88    # "emType":I
    const/16 v4, 0x18

    aget-object v4, p1, v4

    .line 2412
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    invoke-virtual {v5, v4, v13}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2413
    const-string v7, "secondary_hs_dsch_configuration_status."

    .line 2414
    .end local v85    # "coName":Ljava/lang/String;
    .local v7, "coName":Ljava/lang/String;
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "dc_on"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v3, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 2418
    .local v8, "dcOn":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, "dl_freq"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v3, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 2422
    .local v9, "freq":I
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "psc"

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v0, v3, v10}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v10

    .line 2426
    .local v10, "psc":I
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-lez v8, :cond_a

    const/4 v12, 0x1

    goto :goto_7

    :cond_a
    move/from16 v12, v82

    :goto_7
    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    const-string v12, "State"

    invoke-virtual {v0, v4, v1, v12, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2427
    if-lez v8, :cond_b

    .line 2428
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    const-string v12, "S-carrier UARFCN"

    invoke-virtual {v0, v4, v1, v12, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2429
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    const-string v11, "S-carrier PSC"

    invoke-virtual {v0, v4, v1, v11, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    goto :goto_8

    .line 2431
    :cond_b
    const-string v11, "S-carrier UARFCN"

    invoke-virtual {v0, v4, v1, v11, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2432
    const-string v11, "S-carrier PSC"

    invoke-virtual {v0, v4, v1, v11, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2434
    nop

    .line 2600
    .end local v8    # "dcOn":I
    .end local v9    # "freq":I
    .end local v10    # "psc":I
    :goto_8
    move v2, v1

    move-object/from16 v90, v3

    move-object v1, v5

    move-object v6, v7

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    goto/16 :goto_86

    .line 2389
    .end local v7    # "coName":Ljava/lang/String;
    .end local v88    # "emType":I
    .local v4, "emType":I
    .restart local v17    # "label":Ljava/lang/String;
    .restart local v85    # "coName":Ljava/lang/String;
    :pswitch_a
    move/from16 v88, v4

    .end local v4    # "emType":I
    .restart local v88    # "emType":I
    const/16 v4, 0x1c

    aget-object v4, p1, v4

    .line 2390
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    invoke-virtual {v5, v4, v13}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2391
    invoke-virtual {v0, v4, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->resetHashMapKeyValues(Ljava/lang/String;I)V

    .line 2392
    const-string v7, "num_cells"

    invoke-virtual {v0, v3, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 2394
    .end local v25    # "cellNum":I
    .local v14, "cellNum":I
    const-string v7, "gsm_cell_list["

    .line 2395
    .end local v85    # "coName":Ljava/lang/String;
    .restart local v7    # "coName":Ljava/lang/String;
    const/4 v8, 0x0

    .local v8, "i":I
    :goto_9
    if-ge v8, v14, :cond_c

    const/4 v9, 0x6

    if-ge v8, v9, :cond_c

    .line 2396
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "arfcn"

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v3, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 2398
    .local v9, "earfcn":I
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "bsic"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v3, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 2400
    .local v11, "bsic":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "rssi"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const/4 v13, 0x1

    invoke-virtual {v0, v3, v12, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    .line 2402
    .local v12, "rssi":I
    and-int/lit8 v13, v11, 0x7

    .line 2403
    .local v13, "bcc":I
    shr-int/lit8 v15, v11, 0x3

    and-int/lit8 v15, v15, 0x7

    .line 2404
    .local v15, "ncc":I
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    move-object/from16 v17, v7

    .end local v7    # "coName":Ljava/lang/String;
    .local v17, "coName":Ljava/lang/String;
    const-string v7, "GSM"

    invoke-virtual {v0, v4, v1, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2405
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v7, "ARFCN"

    invoke-virtual {v0, v4, v1, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2406
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v7, "BSIC"

    invoke-virtual {v0, v4, v1, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2407
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v7, "RSSI"

    invoke-virtual {v0, v4, v1, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2395
    .end local v13    # "bcc":I
    .end local v15    # "ncc":I
    add-int/lit8 v8, v8, 0x1

    move-object/from16 v2, p3

    move-object/from16 v7, v17

    goto/16 :goto_9

    .end local v9    # "earfcn":I
    .end local v11    # "bsic":I
    .end local v12    # "rssi":I
    .end local v17    # "coName":Ljava/lang/String;
    .restart local v7    # "coName":Ljava/lang/String;
    :cond_c
    move-object/from16 v17, v7

    .line 2409
    .end local v7    # "coName":Ljava/lang/String;
    .end local v8    # "i":I
    .restart local v17    # "coName":Ljava/lang/String;
    move v2, v1

    move-object/from16 v90, v3

    move-object v1, v5

    move/from16 v25, v14

    move-object/from16 v6, v17

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    goto/16 :goto_86

    .line 2366
    .end local v14    # "cellNum":I
    .end local v88    # "emType":I
    .local v4, "emType":I
    .local v17, "label":Ljava/lang/String;
    .restart local v25    # "cellNum":I
    .restart local v85    # "coName":Ljava/lang/String;
    :pswitch_b
    move/from16 v88, v4

    .end local v4    # "emType":I
    .restart local v88    # "emType":I
    const/16 v2, 0x1a

    aget-object v4, p1, v2

    .line 2367
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    invoke-virtual {v5, v4, v13}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2368
    invoke-virtual {v0, v4, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->resetHashMapKeyValues(Ljava/lang/String;I)V

    .line 2369
    const-string v2, "num_cells"

    invoke-virtual {v0, v3, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 2371
    .end local v25    # "cellNum":I
    .restart local v14    # "cellNum":I
    const-string v2, "lte_cell_list["

    .line 2372
    .end local v85    # "coName":Ljava/lang/String;
    .local v2, "coName":Ljava/lang/String;
    const/4 v9, 0x0

    .local v9, "i":I
    :goto_a
    if-ge v9, v14, :cond_d

    const/16 v11, 0x20

    if-ge v9, v11, :cond_d

    .line 2373
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v3, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 2375
    .local v11, "earfcn":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v3, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 2377
    .local v13, "pci":I
    move/from16 v17, v14

    .end local v14    # "cellNum":I
    .local v17, "cellNum":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    move-object/from16 v89, v5

    const/4 v5, 0x1

    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v89, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    invoke-virtual {v0, v3, v14, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v14

    .line 2379
    .local v14, "rsrp":I
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    move-object/from16 v25, v2

    const/4 v2, 0x1

    .end local v2    # "coName":Ljava/lang/String;
    .local v25, "coName":Ljava/lang/String;
    invoke-virtual {v0, v3, v5, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v5

    .line 2381
    .local v5, "rsrq":I
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    move-object/from16 v90, v10

    const-string v10, "LTE"

    invoke-virtual {v0, v4, v1, v10, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2382
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v4, v1, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2383
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v4, v1, v15, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2384
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    int-to-float v10, v14

    const/high16 v54, 0x45800000    # 4096.0f

    div-float v10, v10, v54

    invoke-virtual {v2, v10}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v4, v1, v8, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2385
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    int-to-float v10, v5

    div-float v10, v10, v54

    invoke-virtual {v2, v10}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v4, v1, v12, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2372
    add-int/lit8 v9, v9, 0x1

    move/from16 v14, v17

    move-object/from16 v2, v25

    move-object/from16 v5, v89

    move-object/from16 v10, v90

    goto/16 :goto_a

    .end local v11    # "earfcn":I
    .end local v13    # "pci":I
    .end local v17    # "cellNum":I
    .end local v25    # "coName":Ljava/lang/String;
    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v2    # "coName":Ljava/lang/String;
    .local v5, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v14, "cellNum":I
    :cond_d
    move-object/from16 v25, v2

    move-object/from16 v89, v5

    move/from16 v17, v14

    .line 2387
    .end local v2    # "coName":Ljava/lang/String;
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v9    # "i":I
    .end local v14    # "cellNum":I
    .restart local v17    # "cellNum":I
    .restart local v25    # "coName":Ljava/lang/String;
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    move v2, v1

    move-object/from16 v90, v3

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-object/from16 v6, v25

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    move-object/from16 v1, v89

    move/from16 v25, v17

    goto/16 :goto_86

    .line 2284
    .end local v88    # "emType":I
    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v4, "emType":I
    .restart local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v17, "label":Ljava/lang/String;
    .local v25, "cellNum":I
    .restart local v85    # "coName":Ljava/lang/String;
    :pswitch_c
    move/from16 v88, v4

    move-object/from16 v89, v5

    move-object/from16 v90, v10

    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v88    # "emType":I
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    const-string v2, "operation"

    invoke-virtual {v0, v3, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 2286
    .local v2, "operation":I
    const-string v4, "RAT_type"

    invoke-virtual {v0, v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 2288
    .local v4, "rat":I
    if-nez v4, :cond_12

    .line 2289
    const/16 v5, 0x1b

    aget-object v5, p1, v5

    .line 2290
    .end local v17    # "label":Ljava/lang/String;
    .local v5, "label":Ljava/lang/String;
    move-object/from16 v10, v89

    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v10, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    invoke-virtual {v10, v5, v13}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2291
    invoke-virtual {v0, v5, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->resetHashMapKeyValues(Ljava/lang/String;I)V

    .line 2292
    const/4 v7, 0x1

    if-eq v2, v7, :cond_f

    const/4 v7, 0x2

    if-ne v2, v7, :cond_e

    goto :goto_b

    :cond_e
    move v2, v1

    move-object/from16 v90, v3

    move-object v4, v5

    move-object v1, v10

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    move-object/from16 v6, v85

    goto/16 :goto_86

    .line 2293
    :cond_f
    :goto_b
    const-string v7, "neigh_cell_count"

    invoke-virtual {v0, v3, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 2295
    .end local v25    # "cellNum":I
    .restart local v14    # "cellNum":I
    const-string v7, "choice.neigh_cells["

    .line 2297
    .end local v85    # "coName":Ljava/lang/String;
    .restart local v7    # "coName":Ljava/lang/String;
    const/4 v8, 0x0

    .restart local v8    # "i":I
    :goto_c
    if-ge v8, v14, :cond_11

    const/16 v11, 0x10

    if-ge v8, v11, :cond_11

    .line 2298
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-object/from16 v12, v90

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "uarfcn_DL"

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v3, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 2300
    .local v11, "uarfcn":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "psc"

    invoke-virtual {v13, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v3, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 2302
    .local v13, "psc":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v17, v14

    .end local v14    # "cellNum":I
    .local v17, "cellNum":I
    const-string v14, "rscp"

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    const/4 v15, 0x1

    invoke-virtual {v0, v3, v14, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v14

    int-to-float v14, v14

    const/high16 v15, 0x45800000    # 4096.0f

    div-float/2addr v14, v15

    .line 2304
    .local v14, "rscp":F
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v25, v7

    .end local v7    # "coName":Ljava/lang/String;
    .local v25, "coName":Ljava/lang/String;
    const-string v7, "ec_no"

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v15, 0x1

    invoke-virtual {v0, v3, v7, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    int-to-float v7, v7

    const/high16 v15, 0x45800000    # 4096.0f

    div-float/2addr v7, v15

    .line 2306
    .local v7, "ecn0":F
    const/high16 v15, -0x3d100000    # -120.0f

    cmpl-float v15, v14, v15

    if-lez v15, :cond_10

    const/high16 v15, -0x3e380000    # -25.0f

    cmpl-float v15, v7, v15

    if-lez v15, :cond_10

    .line 2307
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    move-object/from16 v90, v12

    const-string v12, "UMTS"

    invoke-virtual {v0, v5, v1, v12, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2308
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v5, v1, v9, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2309
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const-string v15, "PSC"

    invoke-virtual {v0, v5, v1, v15, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2310
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const-string v15, "RSCP"

    invoke-virtual {v0, v5, v1, v15, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2311
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v7}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const-string v15, "Ec/No"

    invoke-virtual {v0, v5, v1, v15, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    goto :goto_d

    .line 2306
    :cond_10
    move-object/from16 v90, v12

    .line 2297
    :goto_d
    add-int/lit8 v8, v8, 0x1

    move/from16 v14, v17

    move-object/from16 v7, v25

    goto/16 :goto_c

    .end local v11    # "uarfcn":I
    .end local v13    # "psc":I
    .end local v17    # "cellNum":I
    .end local v25    # "coName":Ljava/lang/String;
    .local v7, "coName":Ljava/lang/String;
    .local v14, "cellNum":I
    :cond_11
    move-object/from16 v25, v7

    move/from16 v17, v14

    .end local v7    # "coName":Ljava/lang/String;
    .end local v8    # "i":I
    .end local v14    # "cellNum":I
    .restart local v17    # "cellNum":I
    .restart local v25    # "coName":Ljava/lang/String;
    move v2, v1

    move-object/from16 v90, v3

    move-object v4, v5

    move-object v1, v10

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-object/from16 v6, v25

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    move/from16 v25, v17

    goto/16 :goto_86

    .line 2315
    .end local v5    # "label":Ljava/lang/String;
    .end local v10    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v17, "label":Ljava/lang/String;
    .local v25, "cellNum":I
    .restart local v85    # "coName":Ljava/lang/String;
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    :cond_12
    move-object/from16 v10, v89

    move-object/from16 v5, v90

    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v10    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    const/4 v9, 0x1

    if-ne v4, v9, :cond_16

    .line 2316
    const/16 v7, 0x1c

    aget-object v7, p1, v7

    .line 2317
    .end local v17    # "label":Ljava/lang/String;
    .local v7, "label":Ljava/lang/String;
    invoke-virtual {v10, v7, v13}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2318
    invoke-virtual {v0, v7, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->resetHashMapKeyValues(Ljava/lang/String;I)V

    .line 2319
    if-eq v2, v9, :cond_14

    const/4 v8, 0x2

    if-ne v2, v8, :cond_13

    goto :goto_e

    :cond_13
    move v2, v1

    move-object/from16 v90, v3

    move-object v4, v7

    move-object v1, v10

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    move-object/from16 v6, v85

    goto/16 :goto_86

    .line 2320
    :cond_14
    :goto_e
    const-string v8, "choice.GSM_neigh_cells["

    .line 2322
    .end local v85    # "coName":Ljava/lang/String;
    .local v8, "coName":Ljava/lang/String;
    const-string v9, "neigh_cell_count"

    invoke-virtual {v0, v3, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 2323
    .end local v25    # "cellNum":I
    .restart local v14    # "cellNum":I
    const/4 v9, 0x0

    .restart local v9    # "i":I
    :goto_f
    if-ge v9, v14, :cond_15

    const/16 v11, 0x10

    if-ge v9, v11, :cond_15

    .line 2324
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "arfcn"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v3, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 2326
    .local v11, "arfcn":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "bsic"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v3, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 2328
    .local v12, "bsic":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "rssi"

    invoke-virtual {v13, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    const/4 v15, 0x1

    invoke-virtual {v0, v3, v13, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v13

    .line 2330
    .local v13, "rssi":I
    and-int/lit8 v15, v12, 0x7

    .line 2331
    .local v15, "bcc":I
    shr-int/lit8 v17, v12, 0x3

    move-object/from16 v54, v8

    .end local v8    # "coName":Ljava/lang/String;
    .restart local v54    # "coName":Ljava/lang/String;
    and-int/lit8 v8, v17, 0x7

    .line 2332
    .local v8, "ncc":I
    move/from16 v17, v12

    .end local v12    # "bsic":I
    .local v17, "bsic":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    move/from16 v25, v14

    .end local v14    # "cellNum":I
    .restart local v25    # "cellNum":I
    const-string v14, "GSM"

    invoke-virtual {v0, v7, v1, v14, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2333
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const-string v14, "ARFCN"

    invoke-virtual {v0, v7, v1, v14, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2334
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const-string v14, "BSIC"

    invoke-virtual {v0, v7, v1, v14, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2335
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const-string v14, "RSSI"

    invoke-virtual {v0, v7, v1, v14, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2323
    .end local v8    # "ncc":I
    .end local v15    # "bcc":I
    add-int/lit8 v9, v9, 0x1

    move/from16 v14, v25

    move-object/from16 v8, v54

    goto/16 :goto_f

    .end local v11    # "arfcn":I
    .end local v13    # "rssi":I
    .end local v17    # "bsic":I
    .end local v25    # "cellNum":I
    .end local v54    # "coName":Ljava/lang/String;
    .local v8, "coName":Ljava/lang/String;
    .restart local v14    # "cellNum":I
    :cond_15
    move-object/from16 v54, v8

    move/from16 v25, v14

    .end local v8    # "coName":Ljava/lang/String;
    .end local v9    # "i":I
    .end local v14    # "cellNum":I
    .restart local v25    # "cellNum":I
    .restart local v54    # "coName":Ljava/lang/String;
    move v2, v1

    move-object/from16 v90, v3

    move-object v4, v7

    move-object v1, v10

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move-object/from16 v6, v54

    move/from16 v13, v69

    goto/16 :goto_86

    .line 2338
    .end local v7    # "label":Ljava/lang/String;
    .end local v54    # "coName":Ljava/lang/String;
    .local v17, "label":Ljava/lang/String;
    .restart local v85    # "coName":Ljava/lang/String;
    :cond_16
    const/4 v9, 0x2

    if-ne v4, v9, :cond_1a

    .line 2339
    const/16 v11, 0x1a

    aget-object v11, p1, v11

    .line 2340
    .end local v17    # "label":Ljava/lang/String;
    .local v11, "label":Ljava/lang/String;
    invoke-virtual {v10, v11, v13}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2341
    invoke-virtual {v0, v11, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->resetHashMapKeyValues(Ljava/lang/String;I)V

    .line 2342
    if-ne v2, v9, :cond_19

    .line 2343
    const-string v9, "neigh_cell_count"

    invoke-virtual {v0, v3, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 2345
    .end local v25    # "cellNum":I
    .restart local v14    # "cellNum":I
    const-string v9, "choice.LTE_neigh_cells["

    .line 2347
    .end local v85    # "coName":Ljava/lang/String;
    .local v9, "coName":Ljava/lang/String;
    const/4 v13, 0x0

    .local v13, "i":I
    :goto_10
    if-ge v13, v14, :cond_18

    move/from16 v54, v2

    const/16 v2, 0x10

    .end local v2    # "operation":I
    .local v54, "operation":I
    if-ge v13, v2, :cond_17

    .line 2348
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v67, v4

    .end local v4    # "rat":I
    .local v67, "rat":I
    const-string v4, "earfcn"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v3, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 2350
    .local v2, "earfcn":I
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v17, v14

    .end local v14    # "cellNum":I
    .local v17, "cellNum":I
    const-string v14, "pci"

    invoke-virtual {v4, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 2352
    .local v4, "pci":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v89, v10

    .end local v10    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    const-string v10, "rsrp"

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    const/4 v14, 0x1

    invoke-virtual {v0, v3, v10, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v10

    .line 2354
    .local v10, "rsrp":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v25, v9

    .end local v9    # "coName":Ljava/lang/String;
    .local v25, "coName":Ljava/lang/String;
    const-string v9, "rsrq"

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    const/4 v14, 0x1

    invoke-virtual {v0, v3, v9, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v9

    .line 2356
    .local v9, "rsrq":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    move-object/from16 v90, v3

    .end local v3    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v90    # "data":Lcom/mediatek/mdml/Msg;
    const-string v3, "LTE"

    invoke-virtual {v0, v11, v1, v3, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2357
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v11, v1, v7, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2358
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v11, v1, v15, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2359
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    int-to-float v14, v10

    const/high16 v75, 0x45800000    # 4096.0f

    div-float v14, v14, v75

    invoke-virtual {v3, v14}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v11, v1, v8, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2360
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    int-to-float v14, v9

    div-float v14, v14, v75

    invoke-virtual {v3, v14}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v11, v1, v12, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2347
    add-int/lit8 v13, v13, 0x1

    move/from16 v14, v17

    move-object/from16 v9, v25

    move/from16 v2, v54

    move/from16 v4, v67

    move-object/from16 v10, v89

    move-object/from16 v3, v90

    goto/16 :goto_10

    .end local v2    # "earfcn":I
    .end local v17    # "cellNum":I
    .end local v25    # "coName":Ljava/lang/String;
    .end local v67    # "rat":I
    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v90    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v3    # "data":Lcom/mediatek/mdml/Msg;
    .local v4, "rat":I
    .local v9, "coName":Ljava/lang/String;
    .local v10, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v14    # "cellNum":I
    :cond_17
    move-object/from16 v90, v3

    move/from16 v67, v4

    move-object/from16 v25, v9

    move-object/from16 v89, v10

    move/from16 v17, v14

    .end local v3    # "data":Lcom/mediatek/mdml/Msg;
    .end local v4    # "rat":I
    .end local v9    # "coName":Ljava/lang/String;
    .end local v10    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v14    # "cellNum":I
    .restart local v17    # "cellNum":I
    .restart local v25    # "coName":Ljava/lang/String;
    .restart local v67    # "rat":I
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v90    # "data":Lcom/mediatek/mdml/Msg;
    goto :goto_11

    .end local v17    # "cellNum":I
    .end local v25    # "coName":Ljava/lang/String;
    .end local v54    # "operation":I
    .end local v67    # "rat":I
    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v90    # "data":Lcom/mediatek/mdml/Msg;
    .local v2, "operation":I
    .restart local v3    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v4    # "rat":I
    .restart local v9    # "coName":Ljava/lang/String;
    .restart local v10    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v14    # "cellNum":I
    :cond_18
    move/from16 v54, v2

    move-object/from16 v90, v3

    move/from16 v67, v4

    move-object/from16 v25, v9

    move-object/from16 v89, v10

    move/from16 v17, v14

    .end local v2    # "operation":I
    .end local v3    # "data":Lcom/mediatek/mdml/Msg;
    .end local v4    # "rat":I
    .end local v9    # "coName":Ljava/lang/String;
    .end local v10    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v13    # "i":I
    .end local v14    # "cellNum":I
    .restart local v17    # "cellNum":I
    .restart local v25    # "coName":Ljava/lang/String;
    .restart local v54    # "operation":I
    .restart local v67    # "rat":I
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v90    # "data":Lcom/mediatek/mdml/Msg;
    :goto_11
    move v2, v1

    move-object v4, v11

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-object/from16 v6, v25

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    move-object/from16 v1, v89

    move/from16 v25, v17

    goto/16 :goto_86

    .line 2342
    .end local v17    # "cellNum":I
    .end local v54    # "operation":I
    .end local v67    # "rat":I
    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v90    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v2    # "operation":I
    .restart local v3    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v4    # "rat":I
    .restart local v10    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v25, "cellNum":I
    .restart local v85    # "coName":Ljava/lang/String;
    :cond_19
    move/from16 v54, v2

    move-object/from16 v90, v3

    move/from16 v67, v4

    move-object/from16 v89, v10

    .end local v2    # "operation":I
    .end local v3    # "data":Lcom/mediatek/mdml/Msg;
    .end local v4    # "rat":I
    .end local v10    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v54    # "operation":I
    .restart local v67    # "rat":I
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v90    # "data":Lcom/mediatek/mdml/Msg;
    move v2, v1

    move-object v4, v11

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    move-object/from16 v6, v85

    move-object/from16 v1, v89

    goto/16 :goto_86

    .line 2338
    .end local v11    # "label":Ljava/lang/String;
    .end local v54    # "operation":I
    .end local v67    # "rat":I
    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v90    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v2    # "operation":I
    .restart local v3    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v4    # "rat":I
    .restart local v10    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v17, "label":Ljava/lang/String;
    :cond_1a
    move/from16 v54, v2

    move-object/from16 v90, v3

    move/from16 v67, v4

    move-object/from16 v89, v10

    .end local v2    # "operation":I
    .end local v3    # "data":Lcom/mediatek/mdml/Msg;
    .end local v4    # "rat":I
    .end local v10    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v54    # "operation":I
    .restart local v67    # "rat":I
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v90    # "data":Lcom/mediatek/mdml/Msg;
    move v2, v1

    move/from16 v77, v32

    move/from16 v13, v39

    move/from16 v14, v41

    move/from16 v32, v48

    move-object/from16 v1, v89

    move/from16 v48, v40

    move/from16 v100, v37

    move/from16 v37, v35

    move/from16 v35, v100

    goto/16 :goto_85

    .line 2257
    .end local v54    # "operation":I
    .end local v67    # "rat":I
    .end local v88    # "emType":I
    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v90    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v3    # "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .local v5, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    :pswitch_d
    move-object/from16 v90, v3

    move/from16 v88, v4

    move-object/from16 v89, v5

    move-object v5, v10

    .end local v3    # "data":Lcom/mediatek/mdml/Msg;
    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v88    # "emType":I
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v90    # "data":Lcom/mediatek/mdml/Msg;
    const/16 v2, 0xb

    aget-object v4, p1, v2

    .line 2258
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    move-object/from16 v2, v89

    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v2, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    invoke-virtual {v2, v4, v13}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2259
    invoke-virtual {v0, v4, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->resetHashMapKeyValues(Ljava/lang/String;I)V

    .line 2260
    const-string v3, "ir_3g_neighbor_meas_status["

    .line 2261
    .end local v85    # "coName":Ljava/lang/String;
    .local v3, "coName":Ljava/lang/String;
    const/4 v7, 0x0

    .local v7, "i":I
    :goto_12
    const/4 v8, 0x6

    if-ge v7, v8, :cond_1c

    .line 2262
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, "is_valid"

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    move-object/from16 v10, v90

    .end local v90    # "data":Lcom/mediatek/mdml/Msg;
    .local v10, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual {v0, v10, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 2264
    .local v8, "isValid":I
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "uarfcn"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v10, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 2266
    .local v11, "uarfcn":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "phy_id"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v10, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 2268
    .local v12, "psc":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "strength"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    const/4 v14, 0x1

    invoke-virtual {v0, v10, v13, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v13

    int-to-float v13, v13

    .line 2271
    .local v13, "rscp":F
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "quailty"

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    const/4 v15, 0x1

    invoke-virtual {v0, v10, v14, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v14

    int-to-float v14, v14

    .line 2274
    .local v14, "ecn0":F
    if-lez v8, :cond_1b

    .line 2275
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    move-object/from16 v17, v3

    .end local v3    # "coName":Ljava/lang/String;
    .local v17, "coName":Ljava/lang/String;
    const-string v3, "UMTS"

    invoke-virtual {v0, v4, v1, v3, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2276
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v4, v1, v9, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2277
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v15, "PSC"

    invoke-virtual {v0, v4, v1, v15, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2278
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v15, "RSCP"

    invoke-virtual {v0, v4, v1, v15, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2279
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v14}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v15, "Ec/No"

    invoke-virtual {v0, v4, v1, v15, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    goto :goto_13

    .line 2274
    .end local v17    # "coName":Ljava/lang/String;
    .restart local v3    # "coName":Ljava/lang/String;
    :cond_1b
    move-object/from16 v17, v3

    .line 2261
    .end local v3    # "coName":Ljava/lang/String;
    .end local v8    # "isValid":I
    .restart local v17    # "coName":Ljava/lang/String;
    :goto_13
    add-int/lit8 v7, v7, 0x1

    move-object/from16 v90, v10

    move-object/from16 v3, v17

    goto/16 :goto_12

    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v11    # "uarfcn":I
    .end local v12    # "psc":I
    .end local v13    # "rscp":F
    .end local v14    # "ecn0":F
    .end local v17    # "coName":Ljava/lang/String;
    .restart local v3    # "coName":Ljava/lang/String;
    .restart local v90    # "data":Lcom/mediatek/mdml/Msg;
    :cond_1c
    move-object/from16 v17, v3

    move-object/from16 v10, v90

    .line 2282
    .end local v3    # "coName":Ljava/lang/String;
    .end local v7    # "i":I
    .end local v90    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v17    # "coName":Ljava/lang/String;
    move-object/from16 v6, v17

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    move-object/from16 v100, v2

    move v2, v1

    move-object/from16 v1, v100

    goto/16 :goto_86

    .line 2232
    .end local v2    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v88    # "emType":I
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .restart local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v17, "label":Ljava/lang/String;
    .restart local v85    # "coName":Ljava/lang/String;
    :pswitch_e
    move/from16 v88, v4

    move-object v2, v5

    move-object v5, v10

    move-object v10, v3

    .end local v3    # "data":Lcom/mediatek/mdml/Msg;
    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v2    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v88    # "emType":I
    const/16 v3, 0xa

    aget-object v4, p1, v3

    .line 2233
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    invoke-virtual {v2, v4, v13}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2234
    invoke-virtual {v0, v4, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->resetHashMapKeyValues(Ljava/lang/String;I)V

    .line 2235
    const-string v3, "ir_4g_neighbor_meas_status["

    .line 2236
    .end local v85    # "coName":Ljava/lang/String;
    .local v3, "coName":Ljava/lang/String;
    const/4 v9, 0x0

    .local v9, "i":I
    :goto_14
    const/4 v11, 0x6

    if-ge v9, v11, :cond_1e

    .line 2237
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "is_valid"

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v10, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 2239
    .local v11, "isValid":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "earfcn"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v10, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 2241
    .local v13, "earfcn":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v89, v2

    .end local v2    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    const-string v2, "pci"

    invoke-virtual {v14, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v10, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 2243
    .local v2, "pci":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v79, v12

    const-string v12, "rsrp"

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const/4 v14, 0x1

    invoke-virtual {v0, v10, v12, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    .line 2245
    .local v12, "rsrp":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v17, v3

    .end local v3    # "coName":Ljava/lang/String;
    .local v17, "coName":Ljava/lang/String;
    const-string v3, "rsrq"

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v14, 0x1

    invoke-virtual {v0, v10, v3, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v3

    .line 2247
    .local v3, "rsrq":I
    if-lez v11, :cond_1d

    .line 2248
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    move/from16 v54, v11

    .end local v11    # "isValid":I
    .local v54, "isValid":I
    const-string v11, "LTE"

    invoke-virtual {v0, v4, v1, v11, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2249
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v4, v1, v7, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2250
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v4, v1, v15, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2251
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v4, v1, v8, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2252
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    move-object/from16 v14, v79

    invoke-virtual {v0, v4, v1, v14, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    goto :goto_15

    .line 2247
    .end local v54    # "isValid":I
    .restart local v11    # "isValid":I
    :cond_1d
    move/from16 v54, v11

    move-object/from16 v14, v79

    .line 2236
    .end local v11    # "isValid":I
    :goto_15
    add-int/lit8 v9, v9, 0x1

    move-object v12, v14

    move-object/from16 v3, v17

    move-object/from16 v2, v89

    goto/16 :goto_14

    .end local v12    # "rsrp":I
    .end local v13    # "earfcn":I
    .end local v17    # "coName":Ljava/lang/String;
    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v2, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v3, "coName":Ljava/lang/String;
    :cond_1e
    move-object/from16 v89, v2

    move-object/from16 v17, v3

    .line 2255
    .end local v2    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v3    # "coName":Ljava/lang/String;
    .end local v9    # "i":I
    .restart local v17    # "coName":Ljava/lang/String;
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    move v2, v1

    move-object/from16 v90, v10

    move-object/from16 v6, v17

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    move-object/from16 v1, v89

    goto/16 :goto_86

    .line 2211
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v88    # "emType":I
    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .restart local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v17, "label":Ljava/lang/String;
    .restart local v85    # "coName":Ljava/lang/String;
    :pswitch_f
    move/from16 v88, v4

    move-object/from16 v89, v5

    move-object v5, v10

    move-object v10, v3

    .end local v3    # "data":Lcom/mediatek/mdml/Msg;
    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v88    # "emType":I
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    const/16 v2, 0x14

    aget-object v4, p1, v2

    .line 2212
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    move-object/from16 v2, v89

    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v2    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    invoke-virtual {v2, v4, v13}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2213
    invoke-virtual {v0, v4, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->resetHashMapKeyValues(Ljava/lang/String;I)V

    .line 2214
    const-string v3, "gsm_cell_list"

    .line 2215
    .end local v85    # "coName":Ljava/lang/String;
    .local v3, "coName":Ljava/lang/String;
    const-string v7, "num_cells"

    invoke-virtual {v0, v10, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 2216
    .end local v25    # "cellNum":I
    .local v14, "cellNum":I
    const/4 v7, 0x0

    .restart local v7    # "i":I
    :goto_16
    if-ge v7, v14, :cond_1f

    const/4 v8, 0x6

    if-ge v7, v8, :cond_1f

    .line 2217
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "arfcn"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v10, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 2219
    .local v8, "arfcn":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "bsic"

    invoke-virtual {v9, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v10, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 2221
    .local v9, "bsic":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "rssi"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const/4 v13, 0x1

    invoke-virtual {v0, v10, v12, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    .line 2223
    .local v12, "rssi":I
    and-int/lit8 v13, v9, 0x7

    .line 2224
    .local v13, "bcc":I
    shr-int/lit8 v15, v9, 0x3

    and-int/lit8 v15, v15, 0x7

    .line 2225
    .local v15, "ncc":I
    move-object/from16 v17, v3

    .end local v3    # "coName":Ljava/lang/String;
    .local v17, "coName":Ljava/lang/String;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    move/from16 v25, v9

    .end local v9    # "bsic":I
    .local v25, "bsic":I
    const-string v9, "GSM"

    invoke-virtual {v0, v4, v1, v9, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2226
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v9, "ARFCN"

    invoke-virtual {v0, v4, v1, v9, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2227
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v9, "BSIC"

    invoke-virtual {v0, v4, v1, v9, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2228
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v9, "RSSI"

    invoke-virtual {v0, v4, v1, v9, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2216
    .end local v13    # "bcc":I
    .end local v15    # "ncc":I
    add-int/lit8 v7, v7, 0x1

    move-object/from16 v3, v17

    goto/16 :goto_16

    .end local v8    # "arfcn":I
    .end local v12    # "rssi":I
    .end local v17    # "coName":Ljava/lang/String;
    .end local v25    # "bsic":I
    .restart local v3    # "coName":Ljava/lang/String;
    :cond_1f
    move-object/from16 v17, v3

    .line 2230
    .end local v3    # "coName":Ljava/lang/String;
    .end local v7    # "i":I
    .restart local v17    # "coName":Ljava/lang/String;
    move-object/from16 v90, v10

    move/from16 v25, v14

    move-object/from16 v6, v17

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    move-object/from16 v100, v2

    move v2, v1

    move-object/from16 v1, v100

    goto/16 :goto_86

    .line 2187
    .end local v2    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v14    # "cellNum":I
    .end local v88    # "emType":I
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .restart local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v17, "label":Ljava/lang/String;
    .local v25, "cellNum":I
    .restart local v85    # "coName":Ljava/lang/String;
    :pswitch_10
    move/from16 v88, v4

    move-object v2, v5

    move-object v5, v10

    move-object v10, v3

    .end local v3    # "data":Lcom/mediatek/mdml/Msg;
    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v2    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v88    # "emType":I
    const/16 v3, 0x13

    aget-object v4, p1, v3

    .line 2188
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    invoke-virtual {v2, v4, v13}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2189
    invoke-virtual {v0, v4, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->resetHashMapKeyValues(Ljava/lang/String;I)V

    .line 2190
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_17
    const/16 v7, 0x40

    if-ge v3, v7, :cond_21

    .line 2191
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "umts_cell_list["

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    .line 2193
    .end local v85    # "coName":Ljava/lang/String;
    .local v7, "coName":Ljava/lang/String;
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v10, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 2195
    .local v8, "uarfcn":I
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "CELLPARAID"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v10, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 2197
    .local v11, "cellParaId":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "RSCP"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const/4 v13, 0x1

    invoke-virtual {v0, v10, v12, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    int-to-float v12, v12

    .line 2199
    .local v12, "rscp":F
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "isServingCell"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v10, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 2202
    .local v13, "isServingCell":I
    if-eqz v13, :cond_20

    const/high16 v14, -0x3d100000    # -120.0f

    cmpl-float v14, v12, v14

    if-lez v14, :cond_20

    .line 2203
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    const-string v15, "UMTS"

    invoke-virtual {v0, v4, v1, v15, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2204
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v0, v4, v1, v9, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2205
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    const-string v15, "PSC"

    invoke-virtual {v0, v4, v1, v15, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2206
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/high16 v15, 0x45800000    # 4096.0f

    div-float v15, v12, v15

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    const-string v15, "RSCP"

    invoke-virtual {v0, v4, v1, v15, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2190
    .end local v13    # "isServingCell":I
    :cond_20
    add-int/lit8 v3, v3, 0x1

    move-object/from16 v85, v7

    goto/16 :goto_17

    .line 2209
    .end local v3    # "i":I
    .end local v7    # "coName":Ljava/lang/String;
    .end local v8    # "uarfcn":I
    .end local v11    # "cellParaId":I
    .end local v12    # "rscp":F
    .restart local v85    # "coName":Ljava/lang/String;
    :cond_21
    move-object/from16 v90, v10

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    move-object/from16 v6, v85

    move-object/from16 v100, v2

    move v2, v1

    move-object/from16 v1, v100

    goto/16 :goto_86

    .line 2115
    .end local v2    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v88    # "emType":I
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .restart local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v17    # "label":Ljava/lang/String;
    :pswitch_11
    move/from16 v88, v4

    move-object v2, v5

    move-object v5, v10

    move-object v14, v12

    move-object v10, v3

    .end local v3    # "data":Lcom/mediatek/mdml/Msg;
    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v2    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v88    # "emType":I
    const/16 v3, 0x12

    aget-object v3, p1, v3

    .line 2116
    .end local v17    # "label":Ljava/lang/String;
    .local v3, "label":Ljava/lang/String;
    const-string v4, "choice.LTE_neigh_cells"

    .line 2118
    .end local v85    # "coName":Ljava/lang/String;
    .local v4, "coName":Ljava/lang/String;
    const-string v9, "neigh_cell_count"

    invoke-virtual {v0, v10, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 2119
    .end local v25    # "cellNum":I
    .local v9, "cellNum":I
    const-string v12, "RAT_type"

    invoke-virtual {v0, v10, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 2121
    .local v12, "rat":I
    move-object/from16 v79, v14

    const/4 v14, 0x2

    if-ne v12, v14, :cond_29

    .line 2122
    invoke-virtual {v2, v3, v13}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2123
    invoke-virtual {v0, v3, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->resetHashMapKeyValues(Ljava/lang/String;I)V

    .line 2124
    const/16 v14, 0x10

    if-ge v9, v14, :cond_22

    move v14, v9

    :cond_22
    new-array v14, v14, [Ljava/lang/String;

    .line 2125
    .local v14, "indexArrays":[Ljava/lang/String;
    move/from16 v17, v12

    const/16 v12, 0x10

    .end local v12    # "rat":I
    .local v17, "rat":I
    if-ge v9, v12, :cond_23

    move v12, v9

    :cond_23
    new-array v12, v12, [Ljava/lang/String;

    .line 2126
    .local v12, "arfcnArrays":[Ljava/lang/String;
    move-object/from16 v89, v2

    const/16 v2, 0x10

    .end local v2    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    if-ge v9, v2, :cond_24

    move v2, v9

    :cond_24
    new-array v2, v2, [Ljava/lang/String;

    .line 2127
    .local v2, "pciArrays":[Ljava/lang/String;
    move-object/from16 v90, v13

    const/16 v13, 0x10

    if-ge v9, v13, :cond_25

    move v13, v9

    :cond_25
    new-array v13, v13, [Ljava/lang/String;

    .line 2128
    .local v13, "rsrpArrays":[Ljava/lang/String;
    move-object/from16 v91, v8

    const/16 v8, 0x10

    if-ge v9, v8, :cond_26

    move v8, v9

    goto :goto_18

    :cond_26
    const/16 v8, 0x10

    :goto_18
    new-array v8, v8, [Ljava/lang/String;

    .line 2129
    .local v8, "rsrqArrays":[Ljava/lang/String;
    const/16 v25, 0x0

    move-object/from16 v92, v15

    move/from16 v15, v25

    .local v15, "i":I
    :goto_19
    if-ge v15, v9, :cond_28

    move/from16 v25, v9

    const/16 v9, 0x10

    .end local v9    # "cellNum":I
    .restart local v25    # "cellNum":I
    if-ge v15, v9, :cond_27

    .line 2130
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v93, v7

    const-string v7, "earfcn"

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v10, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 2134
    .local v7, "earfcn":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "pci"

    invoke-virtual {v9, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v10, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    .line 2138
    .local v1, "pci":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v54, v3

    .end local v3    # "label":Ljava/lang/String;
    .local v54, "label":Ljava/lang/String;
    const-string v3, "rsrp"

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v9, 0x1

    invoke-virtual {v0, v10, v3, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v3

    .line 2142
    .local v3, "rsrp":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v67, v4

    .end local v4    # "coName":Ljava/lang/String;
    .local v67, "coName":Ljava/lang/String;
    const-string v4, "rsrq"

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v9, 0x1

    invoke-virtual {v0, v10, v4, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v4

    .line 2147
    .local v4, "rsrq":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    aput-object v9, v14, v15

    .line 2148
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    aput-object v9, v12, v15

    .line 2149
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    aput-object v9, v2, v15

    .line 2150
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v75, v1

    .end local v1    # "pci":I
    .local v75, "pci":I
    int-to-float v1, v3

    div-float v1, v1, v78

    invoke-virtual {v9, v1}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    aput-object v1, v13, v15

    .line 2151
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    int-to-float v9, v4

    div-float v9, v9, v78

    invoke-virtual {v1, v9}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    aput-object v1, v8, v15

    .line 2129
    add-int/lit8 v15, v15, 0x1

    move/from16 v1, p2

    move/from16 v9, v25

    move-object/from16 v3, v54

    move-object/from16 v4, v67

    move-object/from16 v7, v93

    goto/16 :goto_19

    .end local v7    # "earfcn":I
    .end local v54    # "label":Ljava/lang/String;
    .end local v67    # "coName":Ljava/lang/String;
    .end local v75    # "pci":I
    .local v3, "label":Ljava/lang/String;
    .local v4, "coName":Ljava/lang/String;
    :cond_27
    move-object/from16 v54, v3

    move-object/from16 v67, v4

    move-object/from16 v93, v7

    .end local v3    # "label":Ljava/lang/String;
    .end local v4    # "coName":Ljava/lang/String;
    .restart local v54    # "label":Ljava/lang/String;
    .restart local v67    # "coName":Ljava/lang/String;
    goto :goto_1a

    .end local v25    # "cellNum":I
    .end local v54    # "label":Ljava/lang/String;
    .end local v67    # "coName":Ljava/lang/String;
    .restart local v3    # "label":Ljava/lang/String;
    .restart local v4    # "coName":Ljava/lang/String;
    .restart local v9    # "cellNum":I
    :cond_28
    move-object/from16 v54, v3

    move-object/from16 v67, v4

    move-object/from16 v93, v7

    move/from16 v25, v9

    .line 2153
    .end local v3    # "label":Ljava/lang/String;
    .end local v4    # "coName":Ljava/lang/String;
    .end local v9    # "cellNum":I
    .end local v15    # "i":I
    .restart local v25    # "cellNum":I
    .restart local v54    # "label":Ljava/lang/String;
    .restart local v67    # "coName":Ljava/lang/String;
    :goto_1a
    const-string v1, "LTE"

    move/from16 v3, p2

    move-object/from16 v4, v54

    .end local v54    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    invoke-virtual {v0, v4, v3, v1, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2154
    move-object/from16 v1, v93

    invoke-virtual {v0, v4, v3, v1, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2155
    move-object/from16 v7, v92

    invoke-virtual {v0, v4, v3, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2156
    move-object/from16 v9, v91

    invoke-virtual {v0, v4, v3, v9, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2157
    move-object/from16 v15, v79

    invoke-virtual {v0, v4, v3, v15, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    goto :goto_1b

    .line 2121
    .end local v8    # "rsrqArrays":[Ljava/lang/String;
    .end local v13    # "rsrpArrays":[Ljava/lang/String;
    .end local v14    # "indexArrays":[Ljava/lang/String;
    .end local v17    # "rat":I
    .end local v25    # "cellNum":I
    .end local v67    # "coName":Ljava/lang/String;
    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v2, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v3    # "label":Ljava/lang/String;
    .local v4, "coName":Ljava/lang/String;
    .restart local v9    # "cellNum":I
    .local v12, "rat":I
    :cond_29
    move-object/from16 v89, v2

    move-object/from16 v67, v4

    move/from16 v25, v9

    move/from16 v17, v12

    move-object/from16 v90, v13

    move-object v4, v3

    move v3, v1

    .line 2159
    .end local v2    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v3    # "label":Ljava/lang/String;
    .end local v9    # "cellNum":I
    .end local v12    # "rat":I
    .local v4, "label":Ljava/lang/String;
    .restart local v17    # "rat":I
    .restart local v25    # "cellNum":I
    .restart local v67    # "coName":Ljava/lang/String;
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    :goto_1b
    const/16 v1, 0x14

    aget-object v4, p1, v1

    .line 2160
    move-object/from16 v2, v89

    move-object/from16 v8, v90

    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v2    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    invoke-virtual {v2, v4, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2161
    const-string v1, "choice.GSM_neigh_cells"

    .line 2163
    .end local v67    # "coName":Ljava/lang/String;
    .local v1, "coName":Ljava/lang/String;
    const-string v7, "neigh_cell_count"

    invoke-virtual {v0, v10, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 2164
    .end local v25    # "cellNum":I
    .local v14, "cellNum":I
    invoke-virtual {v0, v4, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->resetHashMapKeyValues(Ljava/lang/String;I)V

    .line 2165
    const/4 v7, 0x0

    .local v7, "i":I
    :goto_1c
    if-ge v7, v14, :cond_2a

    const/16 v8, 0x10

    if-ge v7, v8, :cond_2a

    .line 2166
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "arfcn"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v10, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 2170
    .local v8, "arfcn":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "bsic"

    invoke-virtual {v9, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v10, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 2174
    .local v9, "bsic":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "rssi"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const/4 v13, 0x1

    invoke-virtual {v0, v10, v12, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    .line 2178
    .local v12, "rssi":I
    and-int/lit8 v13, v9, 0x7

    .line 2179
    .local v13, "bcc":I
    shr-int/lit8 v15, v9, 0x3

    and-int/lit8 v15, v15, 0x7

    .line 2180
    .local v15, "ncc":I
    move-object/from16 v25, v1

    .end local v1    # "coName":Ljava/lang/String;
    .local v25, "coName":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    move/from16 v54, v9

    .end local v9    # "bsic":I
    .local v54, "bsic":I
    const-string v9, "GSM"

    invoke-virtual {v0, v4, v3, v9, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2181
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v9, "ARFCN"

    invoke-virtual {v0, v4, v3, v9, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2182
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v9, "BSIC"

    invoke-virtual {v0, v4, v3, v9, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2183
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v9, "RSSI"

    invoke-virtual {v0, v4, v3, v9, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2165
    .end local v13    # "bcc":I
    .end local v15    # "ncc":I
    add-int/lit8 v7, v7, 0x1

    move-object/from16 v1, v25

    goto/16 :goto_1c

    .end local v8    # "arfcn":I
    .end local v12    # "rssi":I
    .end local v25    # "coName":Ljava/lang/String;
    .end local v54    # "bsic":I
    .restart local v1    # "coName":Ljava/lang/String;
    :cond_2a
    move-object/from16 v25, v1

    .line 2185
    .end local v1    # "coName":Ljava/lang/String;
    .end local v7    # "i":I
    .restart local v25    # "coName":Ljava/lang/String;
    move-object v1, v2

    move v2, v3

    move-object/from16 v90, v10

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-object/from16 v6, v25

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v13, v69

    move/from16 v25, v14

    move/from16 v14, v44

    goto/16 :goto_86

    .line 2083
    .end local v2    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v14    # "cellNum":I
    .end local v88    # "emType":I
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .restart local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v17, "label":Ljava/lang/String;
    .local v25, "cellNum":I
    .restart local v85    # "coName":Ljava/lang/String;
    :pswitch_12
    move/from16 v88, v4

    move-object v2, v5

    move-object v9, v8

    move-object v5, v10

    move-object v8, v13

    move-object v10, v3

    move v3, v1

    move-object v1, v7

    move-object v7, v15

    move-object v15, v12

    .end local v3    # "data":Lcom/mediatek/mdml/Msg;
    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v2    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v88    # "emType":I
    const/16 v4, 0x12

    aget-object v4, p1, v4

    .line 2084
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    invoke-virtual {v2, v4, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2085
    invoke-virtual {v0, v4, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->resetHashMapKeyValues(Ljava/lang/String;I)V

    .line 2086
    const-string v8, "lte_cell_list"

    .line 2087
    .end local v85    # "coName":Ljava/lang/String;
    .local v8, "coName":Ljava/lang/String;
    const-string v12, "num_cells"

    invoke-virtual {v0, v10, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 2088
    .end local v25    # "cellNum":I
    .restart local v14    # "cellNum":I
    const/16 v12, 0x20

    if-ge v14, v12, :cond_2b

    move v13, v14

    goto :goto_1d

    :cond_2b
    move v13, v12

    :goto_1d
    new-array v13, v13, [Ljava/lang/String;

    .line 2089
    .local v13, "indexArrays":[Ljava/lang/String;
    if-ge v14, v12, :cond_2c

    move v12, v14

    :cond_2c
    new-array v12, v12, [Ljava/lang/String;

    .line 2090
    .local v12, "arfcnArrays":[Ljava/lang/String;
    move-object/from16 v89, v2

    const/16 v2, 0x20

    .end local v2    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    if-ge v14, v2, :cond_2d

    move v2, v14

    :cond_2d
    new-array v2, v2, [Ljava/lang/String;

    .line 2091
    .local v2, "pciArrays":[Ljava/lang/String;
    const/16 v3, 0x20

    if-ge v14, v3, :cond_2e

    move v3, v14

    :cond_2e
    new-array v3, v3, [Ljava/lang/String;

    .line 2092
    .local v3, "rsrpArrays":[Ljava/lang/String;
    move-object/from16 v17, v4

    const/16 v4, 0x20

    .end local v4    # "label":Ljava/lang/String;
    .restart local v17    # "label":Ljava/lang/String;
    if-ge v14, v4, :cond_2f

    move v4, v14

    goto :goto_1e

    :cond_2f
    const/16 v4, 0x20

    :goto_1e
    new-array v4, v4, [Ljava/lang/String;

    .line 2093
    .local v4, "rsrqArrays":[Ljava/lang/String;
    const/16 v25, 0x0

    move-object/from16 v54, v4

    move/from16 v4, v25

    .local v4, "i":I
    .local v54, "rsrqArrays":[Ljava/lang/String;
    :goto_1f
    if-ge v4, v14, :cond_31

    move/from16 v25, v14

    const/16 v14, 0x20

    .end local v14    # "cellNum":I
    .restart local v25    # "cellNum":I
    if-ge v4, v14, :cond_30

    .line 2094
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v0, v10, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 2096
    .local v14, "earfcn":I
    move-object/from16 v93, v1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v10, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    .line 2098
    .local v1, "pci":I
    move-object/from16 v92, v7

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    move-object/from16 v91, v9

    const/4 v9, 0x1

    invoke-virtual {v0, v10, v7, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    .line 2100
    .local v7, "rsrp":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    move-object/from16 v67, v8

    const/4 v8, 0x1

    .end local v8    # "coName":Ljava/lang/String;
    .restart local v67    # "coName":Ljava/lang/String;
    invoke-virtual {v0, v10, v9, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v9

    .line 2102
    .local v9, "rsrq":I
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v13, v4

    .line 2103
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v12, v4

    .line 2104
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v2, v4

    .line 2105
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v3, v4

    .line 2106
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v54, v4

    .line 2093
    add-int/lit8 v4, v4, 0x1

    move/from16 v14, v25

    move-object/from16 v8, v67

    move-object/from16 v9, v91

    move-object/from16 v7, v92

    move-object/from16 v1, v93

    goto/16 :goto_1f

    .end local v1    # "pci":I
    .end local v7    # "rsrp":I
    .end local v9    # "rsrq":I
    .end local v14    # "earfcn":I
    .end local v67    # "coName":Ljava/lang/String;
    .restart local v8    # "coName":Ljava/lang/String;
    :cond_30
    move-object/from16 v93, v1

    move-object/from16 v92, v7

    move-object/from16 v67, v8

    move-object/from16 v91, v9

    .end local v8    # "coName":Ljava/lang/String;
    .restart local v67    # "coName":Ljava/lang/String;
    goto :goto_20

    .end local v25    # "cellNum":I
    .end local v67    # "coName":Ljava/lang/String;
    .restart local v8    # "coName":Ljava/lang/String;
    .local v14, "cellNum":I
    :cond_31
    move-object/from16 v93, v1

    move-object/from16 v92, v7

    move-object/from16 v67, v8

    move-object/from16 v91, v9

    move/from16 v25, v14

    .line 2108
    .end local v4    # "i":I
    .end local v8    # "coName":Ljava/lang/String;
    .end local v14    # "cellNum":I
    .restart local v25    # "cellNum":I
    .restart local v67    # "coName":Ljava/lang/String;
    :goto_20
    const-string v1, "LTE"

    move/from16 v4, p2

    move-object/from16 v5, v17

    .end local v17    # "label":Ljava/lang/String;
    .local v5, "label":Ljava/lang/String;
    invoke-virtual {v0, v5, v4, v1, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2109
    move-object/from16 v1, v93

    invoke-virtual {v0, v5, v4, v1, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2110
    move-object/from16 v7, v92

    invoke-virtual {v0, v5, v4, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2111
    move-object/from16 v9, v91

    invoke-virtual {v0, v5, v4, v9, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2112
    move-object/from16 v1, v54

    .end local v54    # "rsrqArrays":[Ljava/lang/String;
    .local v1, "rsrqArrays":[Ljava/lang/String;
    invoke-virtual {v0, v5, v4, v15, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2113
    move v2, v4

    move-object v4, v5

    move-object/from16 v90, v10

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move-object/from16 v6, v67

    move/from16 v13, v69

    move-object/from16 v1, v89

    goto/16 :goto_86

    .line 2051
    .end local v1    # "rsrqArrays":[Ljava/lang/String;
    .end local v2    # "pciArrays":[Ljava/lang/String;
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v12    # "arfcnArrays":[Ljava/lang/String;
    .end local v13    # "indexArrays":[Ljava/lang/String;
    .end local v67    # "coName":Ljava/lang/String;
    .end local v88    # "emType":I
    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .local v5, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v17    # "label":Ljava/lang/String;
    .restart local v85    # "coName":Ljava/lang/String;
    :pswitch_13
    move/from16 v88, v4

    move-object/from16 v89, v5

    move-object v5, v10

    move-object v8, v13

    move v4, v1

    move-object v10, v3

    .end local v3    # "data":Lcom/mediatek/mdml/Msg;
    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v88    # "emType":I
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    const/4 v1, 0x5

    aget-object v1, p1, v1

    .line 2052
    .end local v17    # "label":Ljava/lang/String;
    .local v1, "label":Ljava/lang/String;
    move-object/from16 v2, v89

    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v2, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    invoke-virtual {v2, v1, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2053
    invoke-virtual {v0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->resetHashMapKeyValues(Ljava/lang/String;I)V

    .line 2054
    const-string v3, "gcell"

    .line 2055
    .end local v85    # "coName":Ljava/lang/String;
    .local v3, "coName":Ljava/lang/String;
    const-string v7, "total_gcell_num"

    invoke-virtual {v0, v10, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 2057
    .end local v25    # "cellNum":I
    .restart local v14    # "cellNum":I
    const/4 v7, 0x6

    if-ge v14, v7, :cond_32

    move v8, v14

    goto :goto_21

    :cond_32
    move v8, v7

    :goto_21
    new-array v8, v8, [Ljava/lang/String;

    .line 2058
    .local v8, "indexArrays":[Ljava/lang/String;
    if-ge v14, v7, :cond_33

    move v9, v14

    goto :goto_22

    :cond_33
    move v9, v7

    :goto_22
    new-array v9, v9, [Ljava/lang/String;

    .line 2059
    .local v9, "arfcnArrays":[Ljava/lang/String;
    if-ge v14, v7, :cond_34

    move v12, v14

    goto :goto_23

    :cond_34
    move v12, v7

    :goto_23
    new-array v12, v12, [Ljava/lang/String;

    .line 2060
    .local v12, "bsicArrays":[Ljava/lang/String;
    if-ge v14, v7, :cond_35

    move v7, v14

    goto :goto_24

    :cond_35
    const/4 v7, 0x6

    :goto_24
    new-array v7, v7, [Ljava/lang/String;

    .line 2061
    .local v7, "rssiArrays":[Ljava/lang/String;
    const/4 v13, 0x0

    .local v13, "i":I
    :goto_25
    if-ge v13, v14, :cond_39

    const/4 v15, 0x6

    if-ge v13, v15, :cond_39

    .line 2062
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v17, v14

    .end local v14    # "cellNum":I
    .local v17, "cellNum":I
    const-string v14, "valid"

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v0, v10, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 2064
    .local v14, "valid":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v89, v2

    .end local v2    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    const-string v2, "band_ind"

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v10, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 2066
    .local v2, "band":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v25, v2

    .end local v2    # "band":I
    .local v25, "band":I
    const-string v2, "arfcn"

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v10, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 2068
    .local v2, "arfcn":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v54, v1

    .end local v1    # "label":Ljava/lang/String;
    .local v54, "label":Ljava/lang/String;
    const-string v1, "bsic"

    invoke-virtual {v15, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v10, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    .line 2070
    .local v1, "bsic":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v67, v3

    .end local v3    # "coName":Ljava/lang/String;
    .restart local v67    # "coName":Ljava/lang/String;
    const-string v3, "rssi"

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v15, 0x1

    invoke-virtual {v0, v10, v3, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v3

    .line 2072
    .local v3, "rssi":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    aput-object v15, v8, v13

    .line 2073
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-lez v14, :cond_36

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v75

    move-object/from16 v100, v75

    move/from16 v75, v2

    move-object/from16 v2, v100

    goto :goto_26

    :cond_36
    move/from16 v75, v2

    move-object v2, v6

    .end local v2    # "arfcn":I
    .local v75, "arfcn":I
    :goto_26
    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v9, v13

    .line 2074
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-lez v14, :cond_37

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    goto :goto_27

    :cond_37
    move-object v15, v6

    :goto_27
    invoke-virtual {v2, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v12, v13

    .line 2075
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-lez v14, :cond_38

    int-to-float v15, v3

    div-float v15, v15, v78

    invoke-static {v15}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v15

    goto :goto_28

    :cond_38
    move-object v15, v6

    :goto_28
    invoke-virtual {v2, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v7, v13

    .line 2061
    .end local v14    # "valid":I
    add-int/lit8 v13, v13, 0x1

    move/from16 v14, v17

    move-object/from16 v1, v54

    move-object/from16 v3, v67

    move-object/from16 v2, v89

    goto/16 :goto_25

    .end local v17    # "cellNum":I
    .end local v25    # "band":I
    .end local v54    # "label":Ljava/lang/String;
    .end local v67    # "coName":Ljava/lang/String;
    .end local v75    # "arfcn":I
    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v1, "label":Ljava/lang/String;
    .local v2, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v3, "coName":Ljava/lang/String;
    .local v14, "cellNum":I
    :cond_39
    move-object/from16 v54, v1

    move-object/from16 v89, v2

    move-object/from16 v67, v3

    move/from16 v17, v14

    .line 2077
    .end local v1    # "label":Ljava/lang/String;
    .end local v2    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v3    # "coName":Ljava/lang/String;
    .end local v13    # "i":I
    .end local v14    # "cellNum":I
    .restart local v17    # "cellNum":I
    .restart local v54    # "label":Ljava/lang/String;
    .restart local v67    # "coName":Ljava/lang/String;
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    const-string v1, "GSM"

    move-object/from16 v2, v54

    .end local v54    # "label":Ljava/lang/String;
    .local v2, "label":Ljava/lang/String;
    invoke-virtual {v0, v2, v4, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2078
    const-string v1, "ARFCN"

    invoke-virtual {v0, v2, v4, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2079
    const-string v1, "BSIC"

    invoke-virtual {v0, v2, v4, v1, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2080
    const-string v1, "RSSI"

    invoke-virtual {v0, v2, v4, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2081
    move-object/from16 v90, v10

    move/from16 v25, v17

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move-object/from16 v6, v67

    move/from16 v13, v69

    move-object/from16 v1, v89

    move/from16 v100, v4

    move-object v4, v2

    move/from16 v2, v100

    goto/16 :goto_86

    .line 2005
    .end local v2    # "label":Ljava/lang/String;
    .end local v7    # "rssiArrays":[Ljava/lang/String;
    .end local v8    # "indexArrays":[Ljava/lang/String;
    .end local v9    # "arfcnArrays":[Ljava/lang/String;
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v12    # "bsicArrays":[Ljava/lang/String;
    .end local v67    # "coName":Ljava/lang/String;
    .end local v88    # "emType":I
    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .restart local v4    # "emType":I
    .restart local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v17, "label":Ljava/lang/String;
    .local v25, "cellNum":I
    .restart local v85    # "coName":Ljava/lang/String;
    :pswitch_14
    move/from16 v88, v4

    move-object/from16 v89, v5

    move-object v5, v10

    move-object v8, v13

    move v4, v1

    move-object v10, v3

    .end local v3    # "data":Lcom/mediatek/mdml/Msg;
    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v88    # "emType":I
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    const/4 v1, 0x4

    aget-object v1, p1, v1

    .line 2006
    .end local v17    # "label":Ljava/lang/String;
    .restart local v1    # "label":Ljava/lang/String;
    move-object/from16 v2, v89

    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v2, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    invoke-virtual {v2, v1, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2007
    invoke-virtual {v0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->resetHashMapKeyValues(Ljava/lang/String;I)V

    .line 2008
    const-string v3, "freq_num"

    invoke-virtual {v0, v10, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 2010
    .local v3, "umtsfreqNum":I
    const-string v7, "inter_freq["

    .line 2012
    .end local v85    # "coName":Ljava/lang/String;
    .local v7, "coName":Ljava/lang/String;
    const/4 v8, 0x0

    move/from16 v14, v25

    .end local v25    # "cellNum":I
    .local v8, "i":I
    .restart local v14    # "cellNum":I
    :goto_29
    if-ge v8, v3, :cond_45

    const/16 v12, 0x10

    if-ge v8, v12, :cond_45

    .line 2013
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "valid"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v10, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 2015
    .local v12, "valid":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "uarfcn"

    invoke-virtual {v13, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v10, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 2017
    .local v13, "uarfcn":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v17, v3

    .end local v3    # "umtsfreqNum":I
    .local v17, "umtsfreqNum":I
    const-string v3, "ucell_num"

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v10, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 2019
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "ucell"

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 2021
    .local v3, "secName":Ljava/lang/String;
    const/4 v15, 0x6

    if-ge v14, v15, :cond_3a

    move v15, v14

    :cond_3a
    new-array v15, v15, [Ljava/lang/String;

    .line 2022
    .local v15, "index":[Ljava/lang/String;
    move-object/from16 v54, v7

    const/4 v7, 0x6

    .end local v7    # "coName":Ljava/lang/String;
    .local v54, "coName":Ljava/lang/String;
    if-ge v14, v7, :cond_3b

    move v7, v14

    :cond_3b
    new-array v7, v7, [Ljava/lang/String;

    .line 2023
    .local v7, "pscArray":[Ljava/lang/String;
    move-object/from16 v89, v11

    const/4 v11, 0x6

    if-ge v14, v11, :cond_3c

    move v11, v14

    :cond_3c
    new-array v11, v11, [Ljava/lang/String;

    .line 2024
    .local v11, "rscpArray":[Ljava/lang/String;
    move-object/from16 v90, v2

    const/4 v2, 0x6

    .end local v2    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v90, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    if-ge v14, v2, :cond_3d

    move v2, v14

    :cond_3d
    new-array v2, v2, [Ljava/lang/String;

    .line 2025
    .local v2, "ecnArray":[Ljava/lang/String;
    move/from16 v25, v8

    const/4 v8, 0x6

    .end local v8    # "i":I
    .local v25, "i":I
    if-ge v14, v8, :cond_3e

    move v8, v14

    goto :goto_2a

    :cond_3e
    const/4 v8, 0x6

    :goto_2a
    new-array v8, v8, [Ljava/lang/String;

    .line 2026
    .local v8, "uarfcnArray":[Ljava/lang/String;
    const/16 v67, 0x0

    move-object/from16 v80, v9

    move/from16 v9, v67

    .local v9, "j":I
    :goto_2b
    if-ge v9, v14, :cond_44

    move/from16 v67, v14

    const/4 v14, 0x6

    .end local v14    # "cellNum":I
    .local v67, "cellNum":I
    if-ge v9, v14, :cond_43

    .line 2027
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v75, v1

    .end local v1    # "label":Ljava/lang/String;
    .local v75, "label":Ljava/lang/String;
    const-string v1, "valid"

    invoke-virtual {v14, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v10, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    .line 2029
    .local v1, "valid2":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "psc"

    invoke-virtual {v14, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v10, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 2031
    .local v4, "psc":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v76, v2

    .end local v2    # "ecnArray":[Ljava/lang/String;
    .local v76, "ecnArray":[Ljava/lang/String;
    const-string v2, "rscp"

    invoke-virtual {v14, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v10, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    int-to-float v2, v2

    .line 2033
    .local v2, "rscp":F
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v79, v3

    .end local v3    # "secName":Ljava/lang/String;
    .local v79, "secName":Ljava/lang/String;
    const-string v3, "ec_n0"

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v10, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    int-to-float v3, v3

    .line 2035
    .local v3, "ecn0":F
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    aput-object v14, v15, v9

    .line 2036
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-lez v12, :cond_3f

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v82

    move-object/from16 v100, v82

    move/from16 v82, v12

    move-object/from16 v12, v100

    goto :goto_2c

    :cond_3f
    move/from16 v82, v12

    move-object v12, v6

    .end local v12    # "valid":I
    .local v82, "valid":I
    :goto_2c
    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    aput-object v12, v8, v9

    .line 2037
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-lez v1, :cond_40

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    goto :goto_2d

    :cond_40
    move-object v14, v6

    :goto_2d
    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    aput-object v12, v7, v9

    .line 2038
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-lez v1, :cond_41

    const/high16 v14, -0x40800000    # -1.0f

    cmpl-float v14, v2, v14

    if-eqz v14, :cond_41

    .line 2039
    div-float v14, v2, v78

    invoke-static {v14}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v14

    goto :goto_2e

    :cond_41
    move-object v14, v6

    :goto_2e
    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    aput-object v12, v11, v9

    .line 2040
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-lez v1, :cond_42

    const/high16 v14, -0x40800000    # -1.0f

    cmpl-float v14, v3, v14

    if-eqz v14, :cond_42

    .line 2041
    div-float v14, v3, v78

    invoke-static {v14}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v14

    goto :goto_2f

    :cond_42
    move-object v14, v6

    :goto_2f
    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    aput-object v12, v76, v9

    .line 2026
    .end local v1    # "valid2":I
    add-int/lit8 v9, v9, 0x1

    move/from16 v4, p2

    move/from16 v14, v67

    move-object/from16 v1, v75

    move-object/from16 v2, v76

    move-object/from16 v3, v79

    move/from16 v12, v82

    goto/16 :goto_2b

    .end local v4    # "psc":I
    .end local v75    # "label":Ljava/lang/String;
    .end local v76    # "ecnArray":[Ljava/lang/String;
    .end local v79    # "secName":Ljava/lang/String;
    .end local v82    # "valid":I
    .local v1, "label":Ljava/lang/String;
    .local v2, "ecnArray":[Ljava/lang/String;
    .local v3, "secName":Ljava/lang/String;
    .restart local v12    # "valid":I
    :cond_43
    move-object/from16 v75, v1

    move-object/from16 v76, v2

    move-object/from16 v79, v3

    move/from16 v82, v12

    .end local v1    # "label":Ljava/lang/String;
    .end local v2    # "ecnArray":[Ljava/lang/String;
    .end local v3    # "secName":Ljava/lang/String;
    .end local v12    # "valid":I
    .restart local v75    # "label":Ljava/lang/String;
    .restart local v76    # "ecnArray":[Ljava/lang/String;
    .restart local v79    # "secName":Ljava/lang/String;
    .restart local v82    # "valid":I
    goto :goto_30

    .end local v67    # "cellNum":I
    .end local v75    # "label":Ljava/lang/String;
    .end local v76    # "ecnArray":[Ljava/lang/String;
    .end local v79    # "secName":Ljava/lang/String;
    .end local v82    # "valid":I
    .restart local v1    # "label":Ljava/lang/String;
    .restart local v2    # "ecnArray":[Ljava/lang/String;
    .restart local v3    # "secName":Ljava/lang/String;
    .restart local v12    # "valid":I
    .restart local v14    # "cellNum":I
    :cond_44
    move-object/from16 v75, v1

    move-object/from16 v76, v2

    move-object/from16 v79, v3

    move/from16 v82, v12

    move/from16 v67, v14

    .line 2043
    .end local v1    # "label":Ljava/lang/String;
    .end local v2    # "ecnArray":[Ljava/lang/String;
    .end local v3    # "secName":Ljava/lang/String;
    .end local v9    # "j":I
    .end local v12    # "valid":I
    .end local v14    # "cellNum":I
    .restart local v67    # "cellNum":I
    .restart local v75    # "label":Ljava/lang/String;
    .restart local v76    # "ecnArray":[Ljava/lang/String;
    .restart local v79    # "secName":Ljava/lang/String;
    .restart local v82    # "valid":I
    :goto_30
    const-string v1, "UMTS"

    move/from16 v2, p2

    move-object/from16 v3, v75

    .end local v75    # "label":Ljava/lang/String;
    .local v3, "label":Ljava/lang/String;
    invoke-virtual {v0, v3, v2, v1, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2044
    move-object/from16 v1, v80

    invoke-virtual {v0, v3, v2, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2045
    const-string v4, "PSC"

    invoke-virtual {v0, v3, v2, v4, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2046
    const-string v4, "RSCP"

    invoke-virtual {v0, v3, v2, v4, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2047
    const-string v4, "Ec/No"

    move-object/from16 v9, v76

    .end local v76    # "ecnArray":[Ljava/lang/String;
    .local v9, "ecnArray":[Ljava/lang/String;
    invoke-virtual {v0, v3, v2, v4, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2012
    .end local v7    # "pscArray":[Ljava/lang/String;
    .end local v8    # "uarfcnArray":[Ljava/lang/String;
    .end local v9    # "ecnArray":[Ljava/lang/String;
    .end local v11    # "rscpArray":[Ljava/lang/String;
    .end local v15    # "index":[Ljava/lang/String;
    .end local v79    # "secName":Ljava/lang/String;
    .end local v82    # "valid":I
    add-int/lit8 v8, v25, 0x1

    move-object v9, v1

    move v4, v2

    move-object v1, v3

    move/from16 v3, v17

    move-object/from16 v7, v54

    move/from16 v14, v67

    move-object/from16 v11, v89

    move-object/from16 v2, v90

    .end local v25    # "i":I
    .local v8, "i":I
    goto/16 :goto_29

    .end local v13    # "uarfcn":I
    .end local v17    # "umtsfreqNum":I
    .end local v54    # "coName":Ljava/lang/String;
    .end local v67    # "cellNum":I
    .end local v90    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v1    # "label":Ljava/lang/String;
    .local v2, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v3, "umtsfreqNum":I
    .local v7, "coName":Ljava/lang/String;
    .restart local v14    # "cellNum":I
    :cond_45
    move-object/from16 v90, v2

    move/from16 v17, v3

    move v2, v4

    move-object/from16 v54, v7

    move/from16 v25, v8

    move-object v3, v1

    .line 2049
    .end local v1    # "label":Ljava/lang/String;
    .end local v2    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v7    # "coName":Ljava/lang/String;
    .end local v8    # "i":I
    .local v3, "label":Ljava/lang/String;
    .restart local v17    # "umtsfreqNum":I
    .restart local v54    # "coName":Ljava/lang/String;
    .restart local v90    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    move-object v4, v3

    move/from16 v25, v14

    move/from16 v9, v20

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move-object/from16 v6, v54

    move/from16 v13, v69

    move-object/from16 v1, v90

    move-object/from16 v90, v10

    move/from16 v10, v21

    goto/16 :goto_86

    .line 1999
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v14    # "cellNum":I
    .end local v54    # "coName":Ljava/lang/String;
    .end local v88    # "emType":I
    .end local v90    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .restart local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v17, "label":Ljava/lang/String;
    .local v25, "cellNum":I
    .restart local v85    # "coName":Ljava/lang/String;
    :pswitch_15
    move v2, v1

    move-object v10, v3

    move/from16 v88, v4

    move-object/from16 v90, v5

    move-object v8, v13

    .end local v3    # "data":Lcom/mediatek/mdml/Msg;
    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v88    # "emType":I
    .restart local v90    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    const/16 v1, 0xe

    aget-object v4, p1, v1

    .line 2000
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    move-object/from16 v3, v90

    .end local v90    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v3, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    invoke-virtual {v3, v4, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2001
    const-string v1, "EcIo"

    const/4 v5, 0x1

    invoke-virtual {v0, v10, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v1

    .line 2002
    .local v1, "ecio":I
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    const-string v6, "ecio"

    invoke-virtual {v0, v4, v2, v6, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2003
    move-object v1, v3

    move-object/from16 v90, v10

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    move-object/from16 v6, v85

    goto/16 :goto_86

    .line 1993
    .end local v1    # "ecio":I
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v88    # "emType":I
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .restart local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v17    # "label":Ljava/lang/String;
    :pswitch_16
    move v2, v1

    move-object v10, v3

    move/from16 v88, v4

    move-object v3, v5

    move-object v8, v13

    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v3, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v88    # "emType":I
    const/16 v1, 0xd

    aget-object v4, p1, v1

    .line 1994
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    invoke-virtual {v3, v4, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1995
    const-string v1, "Pilot_Energy"

    invoke-virtual {v0, v10, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    .line 1996
    .restart local v1    # "ecio":I
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    const-string v6, "ecio"

    invoke-virtual {v0, v4, v2, v6, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1997
    move-object v1, v3

    move-object/from16 v90, v10

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    move-object/from16 v6, v85

    goto/16 :goto_86

    .line 1962
    .end local v1    # "ecio":I
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v88    # "emType":I
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .restart local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v17    # "label":Ljava/lang/String;
    :pswitch_17
    move v2, v1

    move-object v10, v3

    move/from16 v88, v4

    move-object v3, v5

    move-object v8, v13

    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v3, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v88    # "emType":I
    const/16 v1, 0x8

    aget-object v4, p1, v1

    .line 1963
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    invoke-virtual {v3, v4, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1964
    const-string v1, "rr_em_lai_info."

    .line 1965
    .end local v85    # "coName":Ljava/lang/String;
    .local v1, "coName":Ljava/lang/String;
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "lac"

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "[0]"

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v10, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 1966
    .local v5, "lac0":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "lac"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "[1]"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v10, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 1967
    .local v7, "lac1":I
    const/4 v8, 0x1

    new-array v9, v8, [Ljava/lang/Object;

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    aput-object v11, v9, v82

    const-string v11, "%d"

    invoke-static {v11, v9}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v9

    .line 1968
    .local v9, "lac":Ljava/lang/String;
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v8, v8, [Ljava/lang/Object;

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    aput-object v12, v8, v82

    const-string v12, "%d"

    invoke-static {v12, v8}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    .line 1969
    .end local v9    # "lac":Ljava/lang/String;
    .local v8, "lac":Ljava/lang/String;
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "cell_id"

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v10, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 1970
    .local v9, "cellId":I
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v12, v87

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "[0]"

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v10, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 1972
    .local v11, "mcc1":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "[1]"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v10, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 1974
    .local v13, "mcc2":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "[2]"

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v10, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 1976
    .local v12, "mcc3":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v15, v86

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v17, v5

    .end local v5    # "lac0":I
    .local v17, "lac0":I
    const-string v5, "[0]"

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v10, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 1978
    .local v5, "mnc1":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v54, v7

    .end local v7    # "lac1":I
    .local v54, "lac1":I
    const-string v7, "[1]"

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v10, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 1980
    .local v7, "mnc2":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "[2]"

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v0, v10, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 1982
    .local v14, "mnc3":I
    const/16 v15, 0xf

    if-ne v11, v15, :cond_46

    if-ne v13, v15, :cond_46

    if-ne v12, v15, :cond_46

    if-ne v5, v15, :cond_46

    if-ne v7, v15, :cond_46

    if-ne v14, v15, :cond_46

    .line 1984
    const-string v6, "PLMN"

    const-string v15, "-"

    invoke-virtual {v0, v4, v2, v6, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    move-object/from16 v67, v1

    goto :goto_32

    .line 1986
    :cond_46
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 1987
    move-object/from16 v67, v1

    const/16 v1, 0xf

    .end local v1    # "coName":Ljava/lang/String;
    .local v67, "coName":Ljava/lang/String;
    if-ne v14, v1, :cond_47

    goto :goto_31

    :cond_47
    invoke-static {v14}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    :goto_31
    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 1986
    const-string v6, "PLMN"

    invoke-virtual {v0, v4, v2, v6, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1989
    :goto_32
    const-string v1, "LAC"

    invoke-virtual {v0, v4, v2, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1990
    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v6, "Cell ID"

    invoke-virtual {v0, v4, v2, v6, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1991
    move-object v1, v3

    move-object/from16 v90, v10

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move-object/from16 v6, v67

    move/from16 v13, v69

    goto/16 :goto_86

    .line 1950
    .end local v7    # "mnc2":I
    .end local v8    # "lac":Ljava/lang/String;
    .end local v9    # "cellId":I
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v11    # "mcc1":I
    .end local v12    # "mcc3":I
    .end local v13    # "mcc2":I
    .end local v14    # "mnc3":I
    .end local v54    # "lac1":I
    .end local v67    # "coName":Ljava/lang/String;
    .end local v88    # "emType":I
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .local v5, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v17, "label":Ljava/lang/String;
    .restart local v85    # "coName":Ljava/lang/String;
    :pswitch_18
    move v2, v1

    move-object v10, v3

    move/from16 v88, v4

    move-object v3, v5

    move-object/from16 v89, v11

    move-object v8, v13

    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v3, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v88    # "emType":I
    const/16 v1, 0x10

    aget-object v4, p1, v1

    .line 1951
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    invoke-virtual {v3, v4, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1952
    const-string v6, "uas_3g_general_status.umts_rrc_state"

    .line 1953
    .end local v85    # "coName":Ljava/lang/String;
    .local v6, "coName":Ljava/lang/String;
    invoke-virtual {v0, v10, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    .line 1954
    .local v1, "rrState":I
    const/4 v5, 0x6

    if-eq v1, v5, :cond_51

    .line 1955
    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mStateMapping:Ljava/util/HashMap;

    invoke-direct {v0, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v5

    .line 1956
    .local v5, "state":Ljava/lang/String;
    const-string v7, "RRC state"

    invoke-virtual {v0, v4, v2, v7, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1957
    invoke-virtual {v3, v4, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1958
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v11, v89

    invoke-virtual {v7, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "]RRC State : "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const-string v8, "EmInfo/MDMComponent"

    invoke-static {v8, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_3b

    .line 1915
    .end local v1    # "rrState":I
    .end local v6    # "coName":Ljava/lang/String;
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v88    # "emType":I
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .local v5, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v17    # "label":Ljava/lang/String;
    .restart local v85    # "coName":Ljava/lang/String;
    :pswitch_19
    move v2, v1

    move-object v10, v3

    move/from16 v88, v4

    move-object v3, v5

    move-object v8, v13

    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v3, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v88    # "emType":I
    const/16 v1, 0x17

    aget-object v1, p1, v1

    .line 1916
    .end local v17    # "label":Ljava/lang/String;
    .local v1, "label":Ljava/lang/String;
    invoke-virtual {v3, v1, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1917
    const-string v4, "EmUl1Tas."

    .line 1918
    .end local v85    # "coName":Ljava/lang/String;
    .local v4, "coName":Ljava/lang/String;
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v5

    if-eqz v5, :cond_48

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "tas_enable"

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v10, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    goto :goto_33

    .line 1919
    :cond_48
    const/4 v5, 0x2

    :goto_33
    move v13, v5

    .line 1920
    .end local v24    # "tasidx":I
    .local v13, "tasidx":I
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v5

    if-eqz v5, :cond_49

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "band"

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v10, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    goto :goto_34

    .line 1921
    :cond_49
    const/4 v5, -0x1

    :goto_34
    nop

    .line 1922
    .local v5, "band_class":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "main_ant_idx"

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v10, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 1924
    .end local v19    # "antidx":I
    .local v7, "antidx":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "tx_pwr"

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    const/4 v11, 0x1

    invoke-virtual {v0, v10, v9, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    .line 1927
    .end local v23    # "tx_pwr":I
    .local v12, "tx_pwr":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "rscp_0"

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v10, v9, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v9

    .line 1929
    .local v9, "rscp_0":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "rscp_1"

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v0, v10, v14, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v14

    .line 1931
    .local v14, "rscp_1":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "rscp_2"

    invoke-virtual {v15, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    const/4 v15, 0x1

    invoke-virtual {v0, v10, v11, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v11

    .line 1933
    .local v11, "rscp_2":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v17, v4

    .end local v4    # "coName":Ljava/lang/String;
    .local v17, "coName":Ljava/lang/String;
    const-string v4, "tas_version"

    invoke-virtual {v15, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v15, 0x1

    invoke-virtual {v0, v10, v4, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v4

    const/4 v15, 0x2

    if-ne v4, v15, :cond_4a

    .line 1934
    const/4 v4, 0x2

    goto :goto_35

    :cond_4a
    const/4 v4, 0x1

    :goto_35
    iput v4, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->TasVersion:I

    .line 1935
    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->tasEableMapping(I)Ljava/lang/String;

    move-result-object v4

    const-string v15, "TAS Enable"

    invoke-virtual {v0, v1, v2, v15, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1936
    invoke-virtual {v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->antidxMapping(I)Ljava/lang/String;

    move-result-object v4

    const-string v15, "TX Antenna"

    invoke-virtual {v0, v1, v2, v15, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1937
    const/16 v4, -0x80

    if-ne v12, v4, :cond_4b

    move-object v4, v6

    goto :goto_36

    :cond_4b
    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    :goto_36
    const-string v15, "TX Power"

    invoke-virtual {v0, v1, v2, v15, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1938
    const/16 v4, -0x1e0

    if-ne v9, v4, :cond_4c

    move-object v4, v6

    goto :goto_37

    :cond_4c
    div-int/lit8 v4, v9, 0x4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    :goto_37
    const-string v15, "RSRP_LANT"

    invoke-virtual {v0, v1, v2, v15, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1939
    const/16 v4, -0x1e0

    if-ne v14, v4, :cond_4d

    move-object v4, v6

    goto :goto_38

    :cond_4d
    div-int/lit8 v4, v14, 0x4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    :goto_38
    const-string v15, "RSRP_UANT"

    invoke-virtual {v0, v1, v2, v15, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1940
    iget v4, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->TasVersion:I

    const/4 v15, 0x2

    if-ne v4, v15, :cond_4f

    .line 1941
    nop

    .line 1942
    const/16 v4, -0x1e0

    if-ne v11, v4, :cond_4e

    goto :goto_39

    :cond_4e
    div-int/lit8 v4, v11, 0x4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    .line 1941
    :goto_39
    const-string v4, "RSRP_UANT(\')"

    invoke-virtual {v0, v1, v2, v4, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1944
    :cond_4f
    const/16 v4, 0x15

    aget-object v4, p1, v4

    .line 1945
    .end local v1    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    invoke-virtual {v3, v4, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1946
    nop

    .line 1947
    const/4 v1, -0x1

    if-ne v5, v1, :cond_50

    const-string v1, "="

    goto :goto_3a

    :cond_50
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "Band"

    invoke-virtual {v1, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 1946
    :goto_3a
    const-string v6, "band"

    invoke-virtual {v0, v4, v2, v6, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1948
    move-object v1, v3

    move/from16 v19, v7

    move-object/from16 v90, v10

    move/from16 v24, v13

    move-object/from16 v6, v17

    move/from16 v9, v20

    move/from16 v10, v21

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    goto/16 :goto_86

    .line 1901
    .end local v7    # "antidx":I
    .end local v9    # "rscp_0":I
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v11    # "rscp_2":I
    .end local v12    # "tx_pwr":I
    .end local v13    # "tasidx":I
    .end local v14    # "rscp_1":I
    .end local v88    # "emType":I
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .local v5, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v17, "label":Ljava/lang/String;
    .restart local v19    # "antidx":I
    .restart local v23    # "tx_pwr":I
    .restart local v24    # "tasidx":I
    .restart local v85    # "coName":Ljava/lang/String;
    :pswitch_1a
    move v2, v1

    move-object v10, v3

    move/from16 v88, v4

    move-object v3, v5

    move-object v8, v13

    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v3, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v88    # "emType":I
    const/16 v1, 0x15

    aget-object v4, p1, v1

    .line 1902
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    const-string v6, "uas_3g_general_status."

    .line 1904
    .end local v85    # "coName":Ljava/lang/String;
    .restart local v6    # "coName":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "umts_rrc_state"

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v10, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    .line 1906
    .local v1, "rrState":I
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "]rrState: "

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const-string v7, "EmInfo/MDMComponent"

    invoke-static {v7, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1907
    const/4 v5, 0x6

    if-eq v1, v5, :cond_51

    .line 1908
    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mStateMapping:Ljava/util/HashMap;

    invoke-direct {v0, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v5

    .line 1909
    .local v5, "state":Ljava/lang/String;
    const-string v7, "RRC state"

    invoke-virtual {v0, v4, v2, v7, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1910
    invoke-virtual {v3, v4, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1911
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "]RRC State : "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const-string v8, "EmInfo/MDMComponent"

    invoke-static {v8, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2600
    .end local v1    # "rrState":I
    .end local v5    # "state":Ljava/lang/String;
    :cond_51
    :goto_3b
    move-object v1, v3

    move-object/from16 v90, v10

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    goto/16 :goto_86

    .line 1851
    .end local v6    # "coName":Ljava/lang/String;
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v88    # "emType":I
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .local v5, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v17    # "label":Ljava/lang/String;
    .restart local v85    # "coName":Ljava/lang/String;
    :pswitch_1b
    move v2, v1

    move/from16 v88, v4

    move-object v1, v9

    move-object v8, v13

    move-object/from16 v100, v10

    move-object v10, v3

    move-object v3, v5

    move-object/from16 v5, v100

    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v3, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v88    # "emType":I
    const/16 v4, 0x16

    aget-object v4, p1, v4

    .line 1852
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    invoke-virtual {v3, v4, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1853
    const-string v7, "umts_cell_list["

    .line 1854
    .end local v85    # "coName":Ljava/lang/String;
    .local v7, "coName":Ljava/lang/String;
    const-string v9, "num_cells"

    invoke-virtual {v0, v10, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 1855
    .end local v25    # "cellNum":I
    .local v9, "cellNum":I
    invoke-virtual {v0, v4, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->resetHashMapKeyValues(Ljava/lang/String;I)V

    .line 1856
    const/16 v11, 0x20

    if-ge v9, v11, :cond_52

    move v11, v9

    goto :goto_3c

    :cond_52
    const/16 v11, 0x20

    :goto_3c
    const/4 v12, 0x2

    new-array v13, v12, [I

    const/4 v12, 0x1

    aput v11, v13, v12

    const/4 v11, 0x4

    aput v11, v13, v82

    const-class v11, Ljava/lang/String;

    invoke-static {v11, v13}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, [[Ljava/lang/String;

    .line 1857
    .local v11, "values":[[Ljava/lang/String;
    const/4 v12, 0x0

    .local v12, "i":I
    :goto_3d
    if-ge v12, v9, :cond_53

    const/16 v13, 0x20

    if-ge v12, v13, :cond_53

    .line 1858
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v10, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 1860
    .local v13, "uarfcn":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "PSC"

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v0, v10, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 1862
    .local v14, "psc":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v17, v9

    .end local v9    # "cellNum":I
    .local v17, "cellNum":I
    const-string v9, "RSCP"

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    const/4 v15, 0x1

    invoke-virtual {v0, v10, v9, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v9

    int-to-float v9, v9

    .line 1864
    .local v9, "rscp":F
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v67, v7

    .end local v7    # "coName":Ljava/lang/String;
    .restart local v67    # "coName":Ljava/lang/String;
    const-string v7, "ECN0"

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v15, 0x1

    invoke-virtual {v0, v10, v7, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    int-to-float v7, v7

    .line 1866
    .local v7, "ecn0":F
    aget-object v25, v11, v82

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    aput-object v15, v25, v12

    .line 1867
    const/4 v15, 0x1

    aget-object v25, v11, v15

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    aput-object v15, v25, v12

    .line 1868
    const/4 v15, 0x2

    aget-object v25, v11, v15

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    aput-object v15, v25, v12

    .line 1869
    const/4 v15, 0x3

    aget-object v25, v11, v15

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    aput-object v15, v25, v12

    .line 1857
    add-int/lit8 v12, v12, 0x1

    move/from16 v9, v17

    move-object/from16 v7, v67

    goto/16 :goto_3d

    .end local v13    # "uarfcn":I
    .end local v14    # "psc":I
    .end local v17    # "cellNum":I
    .end local v67    # "coName":Ljava/lang/String;
    .local v7, "coName":Ljava/lang/String;
    .local v9, "cellNum":I
    :cond_53
    move-object/from16 v67, v7

    move/from16 v17, v9

    .line 1871
    .end local v7    # "coName":Ljava/lang/String;
    .end local v9    # "cellNum":I
    .end local v12    # "i":I
    .restart local v17    # "cellNum":I
    .restart local v67    # "coName":Ljava/lang/String;
    aget-object v7, v11, v82

    invoke-virtual {v0, v4, v2, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 1872
    const/4 v7, 0x1

    aget-object v9, v11, v7

    const-string v7, "PSC"

    invoke-virtual {v0, v4, v2, v7, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 1873
    const/4 v7, 0x2

    aget-object v7, v11, v7

    const-string v9, "RSCP"

    invoke-virtual {v0, v4, v2, v9, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 1874
    const/4 v7, 0x3

    aget-object v7, v11, v7

    const-string v9, "Ec/No"

    invoke-virtual {v0, v4, v2, v9, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 1875
    const/16 v7, 0x1b

    aget-object v4, p1, v7

    .line 1876
    invoke-virtual {v3, v4, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1877
    invoke-virtual {v0, v4, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->resetHashMapKeyValues(Ljava/lang/String;I)V

    .line 1878
    const-string v7, "num_cells"

    invoke-virtual {v0, v10, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 1880
    .end local v17    # "cellNum":I
    .local v14, "cellNum":I
    const-string v7, "umts_cell_list["

    .line 1882
    .end local v67    # "coName":Ljava/lang/String;
    .restart local v7    # "coName":Ljava/lang/String;
    const/4 v8, 0x0

    .local v8, "i":I
    :goto_3e
    if-ge v8, v14, :cond_54

    const/16 v9, 0x20

    if-ge v8, v9, :cond_54

    .line 1883
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "cell_type"

    invoke-virtual {v9, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v10, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 1885
    .local v9, "cellType":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v10, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 1887
    .local v12, "uarfcn":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "PSC"

    invoke-virtual {v13, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v10, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 1889
    .local v13, "psc":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v17, v9

    .end local v9    # "cellType":I
    .local v17, "cellType":I
    const-string v9, "RSCP"

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    const/4 v15, 0x1

    invoke-virtual {v0, v10, v9, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v9

    int-to-float v9, v9

    .line 1891
    .local v9, "rscp":F
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v25, v7

    .end local v7    # "coName":Ljava/lang/String;
    .local v25, "coName":Ljava/lang/String;
    const-string v7, "ECN0"

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v15, 0x1

    invoke-virtual {v0, v10, v7, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    int-to-float v7, v7

    .line 1893
    .local v7, "ecn0":F
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    move-object/from16 v54, v11

    .end local v11    # "values":[[Ljava/lang/String;
    .local v54, "values":[[Ljava/lang/String;
    const-string v11, "UMTS"

    invoke-virtual {v0, v4, v2, v11, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1894
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v4, v2, v1, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1895
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    const-string v15, "PSC"

    invoke-virtual {v0, v4, v2, v15, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1896
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    const-string v15, "RSCP"

    invoke-virtual {v0, v4, v2, v15, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1897
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    const-string v15, "Ec/No"

    invoke-virtual {v0, v4, v2, v15, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1882
    .end local v17    # "cellType":I
    add-int/lit8 v8, v8, 0x1

    move-object/from16 v7, v25

    move-object/from16 v11, v54

    goto/16 :goto_3e

    .end local v9    # "rscp":F
    .end local v12    # "uarfcn":I
    .end local v13    # "psc":I
    .end local v25    # "coName":Ljava/lang/String;
    .end local v54    # "values":[[Ljava/lang/String;
    .local v7, "coName":Ljava/lang/String;
    .restart local v11    # "values":[[Ljava/lang/String;
    :cond_54
    move-object/from16 v25, v7

    move-object/from16 v54, v11

    .line 1899
    .end local v7    # "coName":Ljava/lang/String;
    .end local v8    # "i":I
    .end local v11    # "values":[[Ljava/lang/String;
    .restart local v25    # "coName":Ljava/lang/String;
    .restart local v54    # "values":[[Ljava/lang/String;
    move-object v1, v3

    move-object/from16 v90, v10

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-object/from16 v6, v25

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v13, v69

    move/from16 v25, v14

    move/from16 v14, v44

    goto/16 :goto_86

    .line 1791
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v14    # "cellNum":I
    .end local v54    # "values":[[Ljava/lang/String;
    .end local v88    # "emType":I
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .restart local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v17, "label":Ljava/lang/String;
    .local v25, "cellNum":I
    .restart local v85    # "coName":Ljava/lang/String;
    :pswitch_1c
    move v2, v1

    move/from16 v88, v4

    move-object v1, v9

    move-object v8, v13

    move-object/from16 v15, v86

    move-object/from16 v12, v87

    move-object/from16 v100, v10

    move-object v10, v3

    move-object v3, v5

    move-object/from16 v5, v100

    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v3, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v88    # "emType":I
    const/16 v4, 0x15

    aget-object v4, p1, v4

    .line 1792
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    invoke-virtual {v3, v4, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1793
    const-string v7, "serv_cell."

    .line 1794
    .end local v85    # "coName":Ljava/lang/String;
    .restart local v7    # "coName":Ljava/lang/String;
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "multi_plmn_count"

    invoke-virtual {v9, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v10, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 1796
    .local v9, "count":I
    const/4 v13, 0x0

    .local v13, "i":I
    :goto_3f
    if-ge v13, v9, :cond_57

    const/4 v14, 0x6

    if-ge v13, v14, :cond_57

    .line 1797
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v17, v7

    .end local v7    # "coName":Ljava/lang/String;
    .local v17, "coName":Ljava/lang/String;
    const-string v7, "multi_plmn_id"

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    .line 1800
    .local v7, "secName":Ljava/lang/String;
    const-string v16, ""

    .line 1801
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v67, v9

    const/4 v9, 0x1

    .end local v9    # "count":I
    .local v67, "count":I
    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v10, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 1803
    .local v9, "mcc1":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v90, v5

    const/4 v5, 0x2

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v10, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 1805
    .local v5, "mcc2":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v89, v11

    const/4 v11, 0x3

    invoke-virtual {v14, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v10, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 1807
    .local v11, "mcc3":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v87, v12

    const/4 v12, 0x1

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v10, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 1809
    .local v12, "mnc1":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v86, v3

    const/4 v3, 0x2

    .end local v3    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v86, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v10, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 1811
    .local v3, "mnc2":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v75, v7

    const/4 v7, 0x3

    .end local v7    # "secName":Ljava/lang/String;
    .local v75, "secName":Ljava/lang/String;
    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v10, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 1813
    .local v7, "mnc3":I
    const/16 v14, 0xf

    if-ne v9, v14, :cond_55

    if-ne v5, v14, :cond_55

    if-ne v11, v14, :cond_55

    if-ne v12, v14, :cond_55

    if-ne v3, v14, :cond_55

    if-ne v7, v14, :cond_55

    .line 1815
    const-string v14, "PLMN"

    move-object/from16 v76, v15

    const-string v15, "-"

    invoke-virtual {v0, v4, v2, v14, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    goto :goto_41

    .line 1813
    :cond_55
    move-object/from16 v76, v15

    .line 1817
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 1818
    const/16 v15, 0xf

    if-ne v7, v15, :cond_56

    move-object v15, v6

    goto :goto_40

    :cond_56
    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    :goto_40
    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    .line 1817
    const-string v15, "PLMN"

    invoke-virtual {v0, v4, v2, v15, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1796
    .end local v75    # "secName":Ljava/lang/String;
    :goto_41
    add-int/lit8 v13, v13, 0x1

    move-object/from16 v7, v17

    move/from16 v9, v67

    move-object/from16 v15, v76

    move-object/from16 v3, v86

    move-object/from16 v12, v87

    move-object/from16 v11, v89

    move-object/from16 v5, v90

    goto/16 :goto_3f

    .end local v5    # "mcc2":I
    .end local v11    # "mcc3":I
    .end local v12    # "mnc1":I
    .end local v17    # "coName":Ljava/lang/String;
    .end local v67    # "count":I
    .end local v86    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v3, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v7, "coName":Ljava/lang/String;
    .local v9, "count":I
    :cond_57
    move-object/from16 v86, v3

    move-object/from16 v17, v7

    move/from16 v67, v9

    .line 1821
    .end local v3    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v7    # "coName":Ljava/lang/String;
    .end local v9    # "count":I
    .end local v13    # "i":I
    .restart local v17    # "coName":Ljava/lang/String;
    .restart local v67    # "count":I
    .restart local v86    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    const-string v6, "serv_cell."

    .line 1822
    .end local v17    # "coName":Ljava/lang/String;
    .restart local v6    # "coName":Ljava/lang/String;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "uarfcn_DL"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v10, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 1824
    .local v3, "uarfcn":I
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "psc"

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v10, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 1826
    .local v5, "psc":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "rscp"

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v9, 0x1

    invoke-virtual {v0, v10, v7, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    int-to-float v7, v7

    const/high16 v11, 0x45800000    # 4096.0f

    div-float/2addr v7, v11

    .line 1828
    .local v7, "rscp":F
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "ec_no"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v10, v11, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v11

    int-to-float v9, v11

    const/high16 v11, 0x45800000    # 4096.0f

    div-float/2addr v9, v11

    .line 1830
    .local v9, "ecn0":F
    const/high16 v11, -0x3d100000    # -120.0f

    cmpl-float v11, v7, v11

    if-lez v11, :cond_58

    const/high16 v11, -0x3e380000    # -25.0f

    cmpl-float v11, v9, v11

    if-lez v11, :cond_58

    .line 1831
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    invoke-virtual {v0, v4, v2, v1, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1832
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v11, "PSC"

    invoke-virtual {v0, v4, v2, v11, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1833
    invoke-static {v7}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v1

    const-string v11, "RSCP"

    invoke-virtual {v0, v4, v2, v11, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1834
    invoke-static {v9}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v1

    const-string v11, "Ec/No"

    invoke-virtual {v0, v4, v2, v11, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1836
    :cond_58
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "cell_identity"

    invoke-virtual {v1, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v10, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    .line 1837
    .local v1, "cellId":I
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    const-string v12, "Cell ID"

    invoke-virtual {v0, v4, v2, v12, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1838
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "rssi"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v10, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 1839
    .local v11, "iRssi":I
    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    const-string v13, "RSSI"

    invoke-virtual {v0, v4, v2, v13, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1840
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "rac_valid"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v10, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 1841
    .local v12, "racValid":I
    const/4 v13, 0x1

    if-ne v12, v13, :cond_59

    .line 1842
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "rac"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v10, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 1843
    .local v13, "rac":I
    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    const-string v15, "RAC"

    invoke-virtual {v0, v4, v2, v15, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1845
    .end local v13    # "rac":I
    :cond_59
    const/16 v13, 0x18

    aget-object v4, p1, v13

    .line 1846
    move-object/from16 v13, v86

    .end local v86    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v13, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    invoke-virtual {v13, v4, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1847
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    const-string v14, "P-carrier UARFCN"

    invoke-virtual {v0, v4, v2, v14, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1848
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    const-string v14, "P-carrier PSC"

    invoke-virtual {v0, v4, v2, v14, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1849
    move-object/from16 v90, v10

    move-object v1, v13

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    goto/16 :goto_86

    .line 1771
    .end local v1    # "cellId":I
    .end local v6    # "coName":Ljava/lang/String;
    .end local v7    # "rscp":F
    .end local v9    # "ecn0":F
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v11    # "iRssi":I
    .end local v12    # "racValid":I
    .end local v13    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v67    # "count":I
    .end local v88    # "emType":I
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .local v5, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v17, "label":Ljava/lang/String;
    .restart local v85    # "coName":Ljava/lang/String;
    :pswitch_1d
    move v2, v1

    move-object v10, v3

    move/from16 v88, v4

    move-object v8, v13

    move-object v13, v5

    .end local v3    # "data":Lcom/mediatek/mdml/Msg;
    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v13    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v88    # "emType":I
    const/16 v1, 0x10

    aget-object v1, p1, v1

    .line 1772
    .end local v17    # "label":Ljava/lang/String;
    .local v1, "label":Ljava/lang/String;
    invoke-virtual {v13, v1, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1773
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v3

    if-eqz v3, :cond_5a

    .line 1774
    const-string v3, "current_serving_band"

    invoke-virtual {v0, v10, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    goto :goto_42

    :cond_5a
    const/4 v3, 0x2

    .line 1775
    .local v3, "band":I
    :goto_42
    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->servingBandMapping(I)Ljava/lang/String;

    move-result-object v4

    const-string v5, "band"

    invoke-virtual {v0, v1, v2, v5, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1776
    const/16 v4, 0x11

    aget-object v4, p1, v4

    .line 1777
    .end local v1    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    invoke-virtual {v13, v4, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1778
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v1

    if-eqz v1, :cond_5b

    .line 1779
    const-string v1, "tas_enable_info"

    invoke-virtual {v0, v10, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    goto :goto_43

    :cond_5b
    const/4 v1, 0x2

    .line 1780
    .end local v24    # "tasidx":I
    .local v1, "tasidx":I
    :goto_43
    const-string v5, "tx_pwr"

    const/4 v6, 0x1

    invoke-virtual {v0, v10, v5, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    .line 1781
    .end local v23    # "tx_pwr":I
    .local v12, "tx_pwr":I
    const-string v5, "force_ant_state"

    invoke-virtual {v0, v10, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 1782
    .local v5, "force_ant_idx":I
    const-string v7, "ant0_rscp"

    invoke-virtual {v0, v10, v7, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    .line 1783
    .local v7, "ant0_rscp":I
    const-string v8, "ant1_rscp"

    invoke-virtual {v0, v10, v8, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v6

    .line 1784
    .local v6, "ant1_rscp":I
    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->tasEableMapping(I)Ljava/lang/String;

    move-result-object v8

    const-string v9, "TAS Enable"

    invoke-virtual {v0, v4, v2, v9, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1785
    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->antidxMapping(I)Ljava/lang/String;

    move-result-object v8

    const-string v9, "TX Antenna"

    invoke-virtual {v0, v4, v2, v9, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1786
    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    const-string v9, "TX Power"

    invoke-virtual {v0, v4, v2, v9, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1787
    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    const-string v9, "RSRP_LANT"

    invoke-virtual {v0, v4, v2, v9, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1788
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    const-string v9, "RSRP_UANT"

    invoke-virtual {v0, v4, v2, v9, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1789
    move/from16 v24, v1

    move-object/from16 v90, v10

    move-object v1, v13

    move/from16 v9, v20

    move/from16 v10, v21

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    move-object/from16 v6, v85

    goto/16 :goto_86

    .line 1744
    .end local v1    # "tasidx":I
    .end local v6    # "ant1_rscp":I
    .end local v7    # "ant0_rscp":I
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v12    # "tx_pwr":I
    .end local v13    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v88    # "emType":I
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .local v5, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v17    # "label":Ljava/lang/String;
    .restart local v23    # "tx_pwr":I
    .restart local v24    # "tasidx":I
    :pswitch_1e
    move v2, v1

    move-object v10, v3

    move/from16 v88, v4

    move-object v1, v9

    move-object v8, v13

    move-object v13, v5

    .end local v3    # "data":Lcom/mediatek/mdml/Msg;
    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v13    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v88    # "emType":I
    const/16 v3, 0x10

    aget-object v3, p1, v3

    .line 1745
    .end local v17    # "label":Ljava/lang/String;
    .local v3, "label":Ljava/lang/String;
    invoke-virtual {v13, v3, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1746
    const-string v6, "serv_cell."

    .line 1747
    .end local v85    # "coName":Ljava/lang/String;
    .local v6, "coName":Ljava/lang/String;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "uarfcn_DL"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v10, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 1749
    .local v4, "uarfcn":I
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "psc"

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v10, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 1751
    .local v5, "cellParaId":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "rscp"

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v9, 0x1

    invoke-virtual {v0, v10, v7, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    int-to-float v7, v7

    .line 1753
    .local v7, "rscp":F
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "cell_identity"

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v10, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 1755
    .local v9, "cellId":I
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "rssi"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v10, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 1757
    .restart local v11    # "iRssi":I
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    const-string v14, "PSC"

    invoke-virtual {v0, v3, v2, v14, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1758
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    invoke-virtual {v0, v3, v2, v1, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1759
    const/high16 v12, 0x45800000    # 4096.0f

    div-float v12, v7, v12

    invoke-static {v12}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v12

    const-string v14, "RSCP"

    invoke-virtual {v0, v3, v2, v14, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1760
    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    const-string v14, "Cell ID"

    invoke-virtual {v0, v3, v2, v14, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1761
    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    const-string v14, "RSSI"

    invoke-virtual {v0, v3, v2, v14, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1762
    const/16 v12, 0x13

    aget-object v3, p1, v12

    .line 1763
    invoke-virtual {v13, v3, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1764
    invoke-virtual {v0, v3, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->resetHashMapKeyValues(Ljava/lang/String;I)V

    .line 1765
    const-string v8, "UMTS"

    const-string v12, "0"

    invoke-virtual {v0, v3, v2, v8, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1766
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    invoke-virtual {v0, v3, v2, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1767
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v8, "PSC"

    invoke-virtual {v0, v3, v2, v8, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1768
    const/high16 v1, 0x45800000    # 4096.0f

    div-float v1, v7, v1

    invoke-static {v1}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v1

    const-string v8, "RSCP"

    invoke-virtual {v0, v3, v2, v8, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1769
    move-object v4, v3

    move-object/from16 v90, v10

    move-object v1, v13

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    goto/16 :goto_86

    .line 1713
    .end local v6    # "coName":Ljava/lang/String;
    .end local v7    # "rscp":F
    .end local v9    # "cellId":I
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v11    # "iRssi":I
    .end local v13    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v88    # "emType":I
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .local v5, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v17    # "label":Ljava/lang/String;
    .restart local v85    # "coName":Ljava/lang/String;
    :pswitch_1f
    move v2, v1

    move-object v10, v3

    move/from16 v88, v4

    move-object v8, v13

    move-object/from16 v76, v86

    move-object v13, v5

    .end local v3    # "data":Lcom/mediatek/mdml/Msg;
    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v13    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v88    # "emType":I
    const/16 v1, 0x10

    aget-object v1, p1, v1

    .line 1714
    .end local v17    # "label":Ljava/lang/String;
    .local v1, "label":Ljava/lang/String;
    invoke-virtual {v13, v1, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1715
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v4, v85

    .end local v85    # "coName":Ljava/lang/String;
    .local v4, "coName":Ljava/lang/String;
    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v5, v87

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "[0]"

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v10, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 1717
    .local v3, "mcc1":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "[1]"

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v10, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 1719
    .local v7, "mcc2":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "[2]"

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v10, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 1721
    .local v5, "mcc3":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v11, v76

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "[0]"

    invoke-virtual {v9, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v10, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 1723
    .local v9, "mnc1":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "[1]"

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v10, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 1725
    .local v12, "mnc2":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "[2]"

    invoke-virtual {v14, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v10, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 1727
    .local v11, "mnc3":I
    const/16 v14, 0xf

    if-ne v3, v14, :cond_5c

    if-ne v7, v14, :cond_5c

    if-ne v5, v14, :cond_5c

    if-ne v9, v14, :cond_5c

    if-ne v12, v14, :cond_5c

    if-ne v11, v14, :cond_5c

    .line 1729
    const-string v6, "PLMN"

    const-string v14, "-"

    invoke-virtual {v0, v1, v2, v6, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    goto :goto_45

    .line 1731
    :cond_5c
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 1732
    const/16 v15, 0xf

    if-ne v11, v15, :cond_5d

    goto :goto_44

    :cond_5d
    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    :goto_44
    invoke-virtual {v14, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    .line 1731
    const-string v14, "PLMN"

    invoke-virtual {v0, v1, v2, v14, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1734
    :goto_45
    const/4 v6, 0x1

    new-array v14, v6, [Ljava/lang/Object;

    .line 1735
    const-string v15, "loc[0]"

    invoke-virtual {v0, v10, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v15

    invoke-static {v15}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    aput-object v15, v14, v82

    .line 1734
    const-string v15, "%d"

    invoke-static {v15, v14}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v14

    .line 1736
    .local v14, "loc0":Ljava/lang/String;
    new-array v6, v6, [Ljava/lang/Object;

    .line 1737
    const-string v15, "loc[1]"

    invoke-virtual {v0, v10, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v15

    invoke-static {v15}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    aput-object v15, v6, v82

    .line 1736
    const-string v15, "%d"

    invoke-static {v15, v6}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    .line 1738
    .local v6, "loc1":Ljava/lang/String;
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    move/from16 v17, v3

    .end local v3    # "mcc1":I
    .local v17, "mcc1":I
    const-string v3, "LAC"

    invoke-virtual {v0, v1, v2, v3, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1739
    const/16 v3, 0x15

    aget-object v1, p1, v3

    .line 1740
    invoke-virtual {v13, v1, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1741
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v8, "LAC"

    invoke-virtual {v0, v1, v2, v8, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1742
    move-object v6, v4

    move-object/from16 v90, v10

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move-object v4, v1

    move-object v1, v13

    move/from16 v13, v69

    goto/16 :goto_86

    .line 1682
    .end local v1    # "label":Ljava/lang/String;
    .end local v6    # "loc1":Ljava/lang/String;
    .end local v7    # "mcc2":I
    .end local v9    # "mnc1":I
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v11    # "mnc3":I
    .end local v12    # "mnc2":I
    .end local v13    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v14    # "loc0":Ljava/lang/String;
    .end local v88    # "emType":I
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .local v5, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v17, "label":Ljava/lang/String;
    .restart local v85    # "coName":Ljava/lang/String;
    :pswitch_20
    move v2, v1

    move-object v10, v3

    move/from16 v88, v4

    move-object v8, v13

    move-object/from16 v4, v85

    move-object v13, v5

    .end local v3    # "data":Lcom/mediatek/mdml/Msg;
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v85    # "coName":Ljava/lang/String;
    .local v4, "coName":Ljava/lang/String;
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v13    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v88    # "emType":I
    const/16 v1, 0xe

    aget-object v1, p1, v1

    .line 1683
    .end local v17    # "label":Ljava/lang/String;
    .restart local v1    # "label":Ljava/lang/String;
    invoke-virtual {v13, v1, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1684
    const-string v3, "channel"

    invoke-virtual {v0, v10, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 1685
    .local v3, "channel":I
    const-string v5, "band_class"

    invoke-virtual {v0, v10, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 1686
    .local v5, "band_class":I
    const-string v7, "pilot_pn_offset"

    invoke-virtual {v0, v10, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 1687
    .local v7, "pilot_pn_offset":I
    const-string v9, "rx_power"

    const/4 v11, 0x1

    invoke-virtual {v0, v10, v9, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v9

    .line 1688
    .local v9, "iRssi":I
    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    const-string v12, "RSSI"

    invoke-virtual {v0, v1, v2, v12, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1689
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    const-string v12, "Channel"

    invoke-virtual {v0, v1, v2, v12, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1690
    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    const-string v12, "pilotPN"

    invoke-virtual {v0, v1, v2, v12, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1691
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    const-string v12, "band_class"

    invoke-virtual {v0, v1, v2, v12, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1692
    const/16 v11, 0xf

    aget-object v1, p1, v11

    .line 1693
    invoke-virtual {v13, v1, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1694
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v8

    if-eqz v8, :cond_5e

    const-string v8, "tas_enable"

    invoke-virtual {v0, v10, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    move/from16 v84, v8

    goto :goto_46

    :cond_5e
    const/16 v84, 0x2

    :goto_46
    move/from16 v8, v84

    .line 1695
    .end local v24    # "tasidx":I
    .local v8, "tasidx":I
    const-string v11, "tx_ant"

    const/4 v12, 0x1

    invoke-virtual {v0, v10, v11, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v11

    .line 1696
    .local v11, "tx_ant_id":I
    const-string v14, "rx_power_dbmL"

    invoke-virtual {v0, v10, v14, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v14

    .line 1697
    .local v14, "rx_power_dbmL":I
    const-string v15, "rx_power_dbmU"

    invoke-virtual {v0, v10, v15, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v15

    .line 1698
    .local v15, "rx_power_dbmU":I
    move/from16 v17, v3

    .end local v3    # "channel":I
    .local v17, "channel":I
    const-string v3, "rx_power_dbmLp"

    invoke-virtual {v0, v10, v3, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v3

    .line 1699
    .local v3, "rx_power_dbmLp":I
    move-object/from16 v85, v4

    .end local v4    # "coName":Ljava/lang/String;
    .restart local v85    # "coName":Ljava/lang/String;
    const-string v4, "tas_ver"

    invoke-virtual {v0, v10, v4, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v4

    .line 1701
    .local v4, "tas_ver":I
    if-eq v4, v12, :cond_62

    .line 1702
    nop

    .line 1703
    const/16 v12, -0x96

    if-ne v14, v12, :cond_5f

    move-object v12, v6

    goto :goto_47

    :cond_5f
    invoke-static {v14}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    .line 1702
    :goto_47
    move/from16 v24, v4

    .end local v4    # "tas_ver":I
    .local v24, "tas_ver":I
    const-string v4, "rxPower_LANT"

    invoke-virtual {v0, v1, v2, v4, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1704
    nop

    .line 1705
    const/16 v4, -0x96

    if-ne v15, v4, :cond_60

    move-object v4, v6

    goto :goto_48

    :cond_60
    invoke-static {v15}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    .line 1704
    :goto_48
    const-string v12, "rxPower_UANT"

    invoke-virtual {v0, v1, v2, v12, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1706
    nop

    .line 1707
    const/16 v4, -0x96

    if-ne v3, v4, :cond_61

    goto :goto_49

    :cond_61
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    .line 1706
    :goto_49
    const-string v4, "rxPower_UANT(\')"

    invoke-virtual {v0, v1, v2, v4, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    goto :goto_4a

    .line 1701
    .end local v24    # "tas_ver":I
    .restart local v4    # "tas_ver":I
    :cond_62
    move/from16 v24, v4

    .line 1709
    .end local v4    # "tas_ver":I
    .restart local v24    # "tas_ver":I
    :goto_4a
    invoke-virtual {v0, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->tasEableMapping(I)Ljava/lang/String;

    move-result-object v4

    const-string v6, "TAS Enable"

    invoke-virtual {v0, v1, v2, v6, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1710
    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    const-string v6, "tx_Ant"

    invoke-virtual {v0, v1, v2, v6, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1711
    move-object v4, v1

    move/from16 v24, v8

    move-object/from16 v90, v10

    move-object v1, v13

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    move-object/from16 v6, v85

    goto/16 :goto_86

    .line 1670
    .end local v1    # "label":Ljava/lang/String;
    .end local v7    # "pilot_pn_offset":I
    .end local v8    # "tasidx":I
    .end local v9    # "iRssi":I
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v11    # "tx_ant_id":I
    .end local v13    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v14    # "rx_power_dbmL":I
    .end local v15    # "rx_power_dbmU":I
    .end local v88    # "emType":I
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .local v5, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v17, "label":Ljava/lang/String;
    .local v24, "tasidx":I
    :pswitch_21
    move v2, v1

    move-object v10, v3

    move/from16 v88, v4

    move-object v8, v13

    move-object v13, v5

    .end local v3    # "data":Lcom/mediatek/mdml/Msg;
    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v13    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v88    # "emType":I
    const/16 v1, 0xd

    aget-object v4, p1, v1

    .line 1671
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    invoke-virtual {v13, v4, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1672
    const-string v1, "rssi_dbm"

    const/4 v3, 0x1

    invoke-virtual {v0, v10, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v1

    div-int/lit16 v1, v1, 0x80

    .line 1673
    .local v1, "rssi_dbm":I
    const-string v3, "bandClass"

    invoke-virtual {v0, v10, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 1674
    .local v3, "band_class":I
    const-string v5, "channel"

    invoke-virtual {v0, v10, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 1675
    .local v5, "channel":I
    const-string v6, "pilotPN"

    invoke-virtual {v0, v10, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 1676
    .local v6, "pilotPN":I
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    const-string v8, "Channel"

    invoke-virtual {v0, v4, v2, v8, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1677
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    const-string v8, "pilotPN"

    invoke-virtual {v0, v4, v2, v8, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1678
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    const-string v8, "band_class"

    invoke-virtual {v0, v4, v2, v8, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1679
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    const-string v8, "RSSI"

    invoke-virtual {v0, v4, v2, v8, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1680
    move-object/from16 v90, v10

    move-object v1, v13

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    move-object/from16 v6, v85

    goto/16 :goto_86

    .line 1655
    .end local v1    # "rssi_dbm":I
    .end local v6    # "pilotPN":I
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v13    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v88    # "emType":I
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .local v5, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v17    # "label":Ljava/lang/String;
    :pswitch_22
    move v2, v1

    move-object v10, v3

    move/from16 v88, v4

    move-object v8, v13

    move-object v13, v5

    .end local v3    # "data":Lcom/mediatek/mdml/Msg;
    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v13    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v88    # "emType":I
    const/16 v1, 0x9

    aget-object v4, p1, v1

    .line 1656
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    invoke-virtual {v13, v4, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1657
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v1

    if-eqz v1, :cond_63

    .line 1658
    const-string v1, "tas_enable"

    invoke-virtual {v0, v10, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    goto :goto_4b

    :cond_63
    const/4 v1, 0x2

    .line 1659
    .end local v24    # "tasidx":I
    .local v1, "tasidx":I
    :goto_4b
    const-string v3, "gsm_antenna"

    invoke-virtual {v0, v10, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 1660
    .end local v19    # "antidx":I
    .local v8, "antidx":I
    const-string v3, "gsm_current_antenna_rxLevel"

    const/4 v5, 0x1

    invoke-virtual {v0, v10, v3, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v3

    .line 1662
    .local v3, "currentAntRxLevel":I
    const-string v7, "gsm_other_antenna_rxLevel"

    invoke-virtual {v0, v10, v7, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    .line 1664
    .local v7, "otherAntRxLevel":I
    const/4 v9, 0x4

    new-array v9, v9, [Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->tasEableMapping(I)Ljava/lang/String;

    move-result-object v11

    aput-object v11, v9, v82

    .line 1665
    invoke-virtual {v0, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->antidxMapping(I)Ljava/lang/String;

    move-result-object v11

    aput-object v11, v9, v5

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const/4 v11, 0x2

    aput-object v5, v9, v11

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x3

    aput-object v5, v9, v6

    .line 1664
    invoke-virtual {v0, v4, v2, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1668
    move/from16 v24, v1

    move/from16 v19, v8

    move-object/from16 v90, v10

    move-object v1, v13

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move/from16 v13, v69

    move-object/from16 v6, v85

    goto/16 :goto_86

    .line 1601
    .end local v1    # "tasidx":I
    .end local v7    # "otherAntRxLevel":I
    .end local v8    # "antidx":I
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v13    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v88    # "emType":I
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .restart local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v17    # "label":Ljava/lang/String;
    .restart local v19    # "antidx":I
    .restart local v24    # "tasidx":I
    :pswitch_23
    move v2, v1

    move-object v10, v3

    move/from16 v88, v4

    move-object/from16 v89, v11

    move-object v8, v13

    move-object v13, v5

    .end local v3    # "data":Lcom/mediatek/mdml/Msg;
    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v13    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v88    # "emType":I
    const/16 v1, 0x8

    aget-object v1, p1, v1

    .line 1602
    .end local v17    # "label":Ljava/lang/String;
    .local v1, "label":Ljava/lang/String;
    invoke-virtual {v13, v1, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1603
    const-string v3, "rr_em_measurement_report_info."

    .line 1604
    .end local v85    # "coName":Ljava/lang/String;
    .local v3, "coName":Ljava/lang/String;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "rr_state"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v10, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 1606
    .local v4, "rrState":I
    const/4 v5, 0x3

    if-lt v4, v5, :cond_66

    const/4 v5, 0x7

    if-gt v4, v5, :cond_66

    .line 1607
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "serving_current_band"

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v10, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 1609
    .local v5, "band":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "serving_arfcn"

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v10, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 1611
    .local v7, "arfcn":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "serving_bsic"

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v10, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 1613
    .local v9, "bsic":I
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "serv_rla_in_quarter_dbm"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    const/4 v12, 0x1

    invoke-virtual {v0, v10, v11, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v11

    .line 1617
    .local v11, "rla":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "rxqual_sub"

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v10, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 1619
    .local v12, "rxSub":I
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mRrStateMapping:Ljava/util/Map;

    const-string v15, "rr_em_measurement_report_info.rr_state"

    invoke-virtual {v0, v10, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v15

    invoke-static {v15}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    invoke-interface {v14, v15}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Ljava/lang/String;

    .line 1623
    .local v14, "state":Ljava/lang/String;
    const/16 v15, -0x3e8

    if-ne v11, v15, :cond_64

    const-string v15, "-"

    move-object/from16 v17, v3

    goto :goto_4c

    .line 1624
    :cond_64
    move-object/from16 v17, v3

    const/4 v15, 0x1

    .end local v3    # "coName":Ljava/lang/String;
    .local v17, "coName":Ljava/lang/String;
    new-array v3, v15, [Ljava/lang/Object;

    int-to-float v15, v11

    div-float v15, v15, v78

    invoke-static {v15}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v15

    aput-object v15, v3, v82

    const-string v15, "%.2f"

    invoke-static {v15, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v15

    .line 1623
    :goto_4c
    const-string v3, "RLA"

    invoke-virtual {v0, v1, v2, v3, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1625
    nop

    .line 1626
    const/16 v3, 0xff

    if-ne v12, v3, :cond_65

    const-string v3, "-"

    goto :goto_4d

    :cond_65
    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    .line 1625
    :goto_4d
    const-string v15, "RX quality sub"

    invoke-virtual {v0, v1, v2, v15, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1627
    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    const-string v15, "ARFCN"

    invoke-virtual {v0, v1, v2, v15, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1628
    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    const-string v15, "BSIC"

    invoke-virtual {v0, v1, v2, v15, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1629
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->bandMapping:Ljava/util/HashMap;

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    invoke-virtual {v3, v15}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    const-string v15, "band"

    invoke-virtual {v0, v1, v2, v15, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1630
    const-string v3, "RR state"

    invoke-virtual {v0, v1, v2, v3, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    goto :goto_4e

    .line 1606
    .end local v5    # "band":I
    .end local v7    # "arfcn":I
    .end local v9    # "bsic":I
    .end local v11    # "rla":I
    .end local v12    # "rxSub":I
    .end local v14    # "state":Ljava/lang/String;
    .end local v17    # "coName":Ljava/lang/String;
    .restart local v3    # "coName":Ljava/lang/String;
    :cond_66
    move-object/from16 v17, v3

    .line 1632
    .end local v3    # "coName":Ljava/lang/String;
    .restart local v17    # "coName":Ljava/lang/String;
    :goto_4e
    const/16 v3, 0xc

    aget-object v1, p1, v3

    .line 1633
    invoke-virtual {v13, v1, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1634
    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->resetHashMapKeyValues(Ljava/lang/String;I)V

    .line 1635
    const-string v3, "rr_em_measurement_report_info."

    .line 1636
    .end local v17    # "coName":Ljava/lang/String;
    .restart local v3    # "coName":Ljava/lang/String;
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "num_of_carriers"

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v10, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 1638
    .end local v25    # "cellNum":I
    .local v14, "cellNum":I
    const/4 v5, 0x0

    .local v5, "i":I
    :goto_4f
    if-ge v5, v14, :cond_67

    const/16 v7, 0x20

    if-ge v5, v7, :cond_67

    .line 1639
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "nc_arfcn"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v11, v89

    invoke-virtual {v8, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, "]"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v10, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 1642
    .local v8, "arfcn":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "nc_bsic"

    invoke-virtual {v9, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v12, "]"

    invoke-virtual {v9, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v10, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 1645
    .restart local v9    # "bsic":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "rla_in_quarter_dbm"

    invoke-virtual {v12, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v15, "]"

    invoke-virtual {v12, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const/4 v15, 0x1

    invoke-virtual {v0, v10, v12, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    .line 1648
    .local v12, "rssi":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    const-string v7, "GSM"

    invoke-virtual {v0, v1, v2, v7, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1649
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const-string v15, "ARFCN"

    invoke-virtual {v0, v1, v2, v15, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1650
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const-string v15, "BSIC"

    invoke-virtual {v0, v1, v2, v15, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1651
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    int-to-float v15, v12

    move-object/from16 v54, v3

    move/from16 v17, v4

    .end local v3    # "coName":Ljava/lang/String;
    .end local v4    # "rrState":I
    .local v17, "rrState":I
    .local v54, "coName":Ljava/lang/String;
    float-to-double v3, v15

    const-wide/high16 v77, 0x4010000000000000L    # 4.0

    div-double v3, v3, v77

    invoke-virtual {v7, v3, v4}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "RSSI"

    invoke-virtual {v0, v1, v2, v4, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1638
    add-int/lit8 v5, v5, 0x1

    move/from16 v4, v17

    move-object/from16 v3, v54

    goto/16 :goto_4f

    .end local v8    # "arfcn":I
    .end local v9    # "bsic":I
    .end local v12    # "rssi":I
    .end local v17    # "rrState":I
    .end local v54    # "coName":Ljava/lang/String;
    .restart local v3    # "coName":Ljava/lang/String;
    .restart local v4    # "rrState":I
    :cond_67
    move-object/from16 v54, v3

    move/from16 v17, v4

    .line 1653
    .end local v3    # "coName":Ljava/lang/String;
    .end local v4    # "rrState":I
    .end local v5    # "i":I
    .restart local v17    # "rrState":I
    .restart local v54    # "coName":Ljava/lang/String;
    move-object v4, v1

    move-object/from16 v90, v10

    move-object v1, v13

    move/from16 v25, v14

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v15, v40

    move/from16 v14, v44

    move-object/from16 v6, v54

    move/from16 v13, v69

    goto/16 :goto_86

    .line 1342
    .end local v1    # "label":Ljava/lang/String;
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v13    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v14    # "cellNum":I
    .end local v54    # "coName":Ljava/lang/String;
    .end local v88    # "emType":I
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .local v5, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v17, "label":Ljava/lang/String;
    .restart local v25    # "cellNum":I
    .restart local v85    # "coName":Ljava/lang/String;
    :pswitch_24
    move v2, v1

    move/from16 v88, v4

    move-object v1, v7

    move-object v9, v8

    move-object/from16 v90, v10

    move-object v8, v13

    move-object v7, v15

    move-object v10, v3

    move-object v13, v5

    move-object v15, v12

    .end local v3    # "data":Lcom/mediatek/mdml/Msg;
    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v13    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v88    # "emType":I
    const/4 v3, 0x2

    aget-object v4, p1, v3

    .line 1343
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    invoke-virtual {v13, v4, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1344
    invoke-virtual {v0, v4, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->resetHashMapKeyValues(Ljava/lang/String;I)V

    .line 1345
    const-string v3, "scell_info_list.scell_info"

    .line 1347
    .end local v85    # "coName":Ljava/lang/String;
    .local v3, "coName":Ljava/lang/String;
    const-string v5, "scell_info_list.num_scell"

    invoke-virtual {v0, v10, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 1350
    .end local v25    # "cellNum":I
    .local v5, "cellNum":I
    const/4 v12, 0x0

    .local v12, "i":I
    :goto_50
    if-ge v12, v5, :cond_6f

    .line 1351
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move/from16 v17, v5

    move-object/from16 v5, v90

    .end local v5    # "cellNum":I
    .local v17, "cellNum":I
    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v76, v6

    const-string v6, "earfcn"

    invoke-virtual {v14, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v0, v10, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 1354
    .local v6, "earfcn":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v90, v8

    const-string v8, "pci"

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v10, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 1357
    .local v8, "pci":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v89, v13

    .end local v13    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    const-string v13, "rsrp"

    invoke-virtual {v14, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    const/4 v14, 0x1

    invoke-virtual {v0, v10, v13, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v13

    .line 1360
    .local v13, "rsrp":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v79, v15

    const-string v15, "rsrq"

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    const/4 v15, 0x1

    invoke-virtual {v0, v10, v14, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v14

    .line 1363
    .local v14, "rsrq":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v25, v14

    .end local v14    # "rsrq":I
    .local v25, "rsrq":I
    const-string v14, "rs_snr_in_qdb"

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    const/4 v15, 0x1

    invoke-virtual {v0, v10, v14, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v14

    .line 1366
    .local v14, "sinr":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v85, v3

    .end local v3    # "coName":Ljava/lang/String;
    .restart local v85    # "coName":Ljava/lang/String;
    const-string v3, "serv_lte_band"

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v10, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 1369
    .local v3, "band":I
    if-eqz v6, :cond_6e

    if-eqz v8, :cond_6e

    const/4 v15, -0x1

    if-eq v6, v15, :cond_6e

    .line 1370
    nop

    .line 1371
    if-ne v6, v15, :cond_68

    move-object/from16 v15, v76

    goto :goto_51

    :cond_68
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v75

    move-object/from16 v15, v75

    .line 1370
    :goto_51
    invoke-virtual {v0, v4, v2, v1, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1372
    nop

    .line 1373
    const/4 v15, -0x1

    if-ne v6, v15, :cond_69

    move-object/from16 v15, v76

    goto :goto_52

    :cond_69
    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    .line 1372
    :goto_52
    invoke-virtual {v0, v4, v2, v7, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1374
    nop

    .line 1375
    const v15, 0xffff

    if-ne v3, v15, :cond_6a

    move-object/from16 v15, v76

    goto :goto_53

    :cond_6a
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    .line 1374
    :goto_53
    move/from16 v86, v3

    .end local v3    # "band":I
    .local v86, "band":I
    const-string v3, "Band"

    invoke-virtual {v0, v4, v2, v3, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1376
    nop

    .line 1377
    const/4 v3, -0x1

    if-ne v13, v3, :cond_6b

    move-object/from16 v3, v76

    goto :goto_54

    :cond_6b
    int-to-float v3, v13

    div-float v3, v3, v78

    invoke-static {v3}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v3

    .line 1376
    :goto_54
    invoke-virtual {v0, v4, v2, v9, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1378
    nop

    .line 1379
    move/from16 v3, v25

    const/4 v15, -0x1

    .end local v25    # "rsrq":I
    .local v3, "rsrq":I
    if-ne v3, v15, :cond_6c

    move-object/from16 v15, v76

    goto :goto_55

    :cond_6c
    int-to-float v15, v3

    div-float v15, v15, v78

    invoke-static {v15}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v15

    .line 1378
    :goto_55
    move/from16 v25, v3

    move-object/from16 v3, v79

    .end local v3    # "rsrq":I
    .restart local v25    # "rsrq":I
    invoke-virtual {v0, v4, v2, v3, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1380
    nop

    .line 1381
    const/4 v15, -0x1

    if-ne v14, v15, :cond_6d

    move-object/from16 v15, v76

    goto :goto_56

    :cond_6d
    int-to-float v15, v14

    div-float v15, v15, v78

    invoke-static {v15}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v15

    .line 1380
    :goto_56
    move/from16 v79, v6

    .end local v6    # "earfcn":I
    .local v79, "earfcn":I
    const-string v6, "SINR"

    invoke-virtual {v0, v4, v2, v6, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    goto :goto_57

    .line 1369
    .end local v79    # "earfcn":I
    .end local v86    # "band":I
    .local v3, "band":I
    .restart local v6    # "earfcn":I
    :cond_6e
    move/from16 v86, v3

    move-object/from16 v3, v79

    move/from16 v79, v6

    .line 1350
    .end local v3    # "band":I
    .end local v6    # "earfcn":I
    .restart local v79    # "earfcn":I
    .restart local v86    # "band":I
    :goto_57
    add-int/lit8 v12, v12, 0x1

    move-object v15, v3

    move-object/from16 v6, v76

    move-object/from16 v3, v85

    move-object/from16 v13, v89

    move-object/from16 v8, v90

    move-object/from16 v90, v5

    move/from16 v5, v17

    goto/16 :goto_50

    .end local v8    # "pci":I
    .end local v14    # "sinr":I
    .end local v17    # "cellNum":I
    .end local v25    # "rsrq":I
    .end local v79    # "earfcn":I
    .end local v85    # "coName":Ljava/lang/String;
    .end local v86    # "band":I
    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v3, "coName":Ljava/lang/String;
    .restart local v5    # "cellNum":I
    .local v13, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    :cond_6f
    move-object/from16 v85, v3

    move/from16 v17, v5

    move-object/from16 v76, v6

    move-object/from16 v89, v13

    move-object v3, v15

    move-object/from16 v5, v90

    move-object/from16 v90, v8

    .line 1384
    .end local v3    # "coName":Ljava/lang/String;
    .end local v5    # "cellNum":I
    .end local v12    # "i":I
    .end local v13    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v17    # "cellNum":I
    .restart local v85    # "coName":Ljava/lang/String;
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    const/4 v6, 0x3

    aget-object v4, p1, v6

    .line 1385
    move-object/from16 v6, v89

    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v6, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    invoke-virtual {v6, v4, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1386
    invoke-virtual {v0, v4, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->resetHashMapKeyValues(Ljava/lang/String;I)V

    .line 1387
    const-string v12, "inter_info."

    .line 1388
    .end local v85    # "coName":Ljava/lang/String;
    .local v12, "coName":Ljava/lang/String;
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "freq_num"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v10, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 1390
    .local v13, "freqNum":I
    const/4 v14, 0x0

    .line 1391
    .end local v26    # "indexTotal":I
    .local v14, "indexTotal":I
    const/4 v15, 0x0

    .local v15, "i":I
    :goto_58
    if-ge v15, v13, :cond_7b

    move/from16 v25, v13

    const/4 v13, 0x4

    .end local v13    # "freqNum":I
    .local v25, "freqNum":I
    if-ge v15, v13, :cond_7a

    .line 1392
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v79, v12

    .end local v12    # "coName":Ljava/lang/String;
    .local v79, "coName":Ljava/lang/String;
    const-string v12, "inter_freq"

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    .line 1394
    .local v12, "coNameNew":Ljava/lang/String;
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v26, v14

    .end local v14    # "indexTotal":I
    .restart local v26    # "indexTotal":I
    const-string v14, "valid"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v10, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 1396
    .local v13, "valid":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v89, v6

    .end local v6    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    const-string v6, "earfcn"

    invoke-virtual {v14, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v0, v10, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 1398
    .local v6, "earfcn":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v90, v8

    const-string v8, "cell_num"

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v10, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 1400
    .end local v17    # "cellNum":I
    .local v8, "cellNum":I
    const/4 v14, 0x6

    if-ge v8, v14, :cond_70

    move v14, v8

    :cond_70
    new-array v14, v14, [Ljava/lang/String;

    .line 1401
    .local v14, "indexArrays":[Ljava/lang/String;
    move-object/from16 v86, v3

    const/4 v3, 0x6

    if-ge v8, v3, :cond_71

    move v3, v8

    :cond_71
    new-array v3, v3, [Ljava/lang/String;

    .line 1402
    .local v3, "pciArrays":[Ljava/lang/String;
    move-object/from16 v91, v9

    const/4 v9, 0x6

    if-ge v8, v9, :cond_72

    move v9, v8

    :cond_72
    new-array v9, v9, [Ljava/lang/String;

    .line 1403
    .local v9, "rsrpArrays":[Ljava/lang/String;
    move-object/from16 v92, v7

    const/4 v7, 0x6

    if-ge v8, v7, :cond_73

    move v7, v8

    :cond_73
    new-array v7, v7, [Ljava/lang/String;

    .line 1404
    .local v7, "rsrqArrays":[Ljava/lang/String;
    move-object/from16 v93, v1

    const/4 v1, 0x6

    if-ge v8, v1, :cond_74

    move v1, v8

    goto :goto_59

    :cond_74
    const/4 v1, 0x6

    :goto_59
    new-array v1, v1, [Ljava/lang/String;

    .line 1405
    .local v1, "arfcnArrays":[Ljava/lang/String;
    const/16 v17, 0x0

    move-object/from16 v85, v4

    move/from16 v4, v17

    move/from16 v2, v26

    .end local v26    # "indexTotal":I
    .local v2, "indexTotal":I
    .local v4, "j":I
    .local v85, "label":Ljava/lang/String;
    :goto_5a
    if-ge v4, v8, :cond_79

    move/from16 v17, v8

    const/4 v8, 0x6

    .end local v8    # "cellNum":I
    .restart local v17    # "cellNum":I
    if-ge v4, v8, :cond_78

    .line 1406
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v87, v12

    .end local v12    # "coNameNew":Ljava/lang/String;
    .local v87, "coNameNew":Ljava/lang/String;
    const-string v12, "inter_cell"

    invoke-virtual {v8, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    .line 1409
    .local v8, "interName":Ljava/lang/String;
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v94, v5

    const-string v5, "pci"

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v10, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 1411
    .local v5, "pci":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v95, v11

    const-string v11, "rsrp"

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    const/4 v12, 0x1

    invoke-virtual {v0, v10, v11, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v11

    .line 1413
    .local v11, "rsrp":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v26, v8

    .end local v8    # "interName":Ljava/lang/String;
    .local v26, "interName":Ljava/lang/String;
    const-string v8, "rsrq"

    invoke-virtual {v12, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    const/4 v12, 0x1

    invoke-virtual {v0, v10, v8, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v8

    .line 1415
    .local v8, "rsrq":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v96, v10

    move-object/from16 v10, v76

    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .local v96, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual {v12, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    aput-object v12, v14, v4

    .line 1416
    if-lez v13, :cond_77

    .line 1417
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    aput-object v12, v1, v4

    .line 1418
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    aput-object v12, v3, v4

    .line 1419
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v76, v5

    const/4 v5, -0x1

    .end local v5    # "pci":I
    .local v76, "pci":I
    if-eq v11, v5, :cond_75

    int-to-float v5, v11

    div-float v5, v5, v78

    invoke-static {v5}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v5

    goto :goto_5b

    :cond_75
    move-object v5, v10

    :goto_5b
    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v9, v4

    .line 1420
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v12, -0x1

    if-eq v8, v12, :cond_76

    int-to-float v12, v8

    div-float v12, v12, v78

    invoke-static {v12}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v12

    goto :goto_5c

    :cond_76
    move-object v12, v10

    :goto_5c
    invoke-virtual {v5, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v7, v4

    goto :goto_5d

    .line 1422
    .end local v76    # "pci":I
    .restart local v5    # "pci":I
    :cond_77
    move/from16 v76, v5

    .end local v5    # "pci":I
    .restart local v76    # "pci":I
    aput-object v10, v7, v15

    aput-object v10, v9, v15

    aput-object v10, v3, v15

    aput-object v10, v1, v15

    aput-object v10, v14, v15

    .line 1425
    :goto_5d
    nop

    .end local v26    # "interName":Ljava/lang/String;
    add-int/lit8 v2, v2, 0x1

    .line 1405
    add-int/lit8 v4, v4, 0x1

    move-object/from16 v76, v10

    move/from16 v8, v17

    move-object/from16 v12, v87

    move-object/from16 v5, v94

    move-object/from16 v11, v95

    move-object/from16 v10, v96

    goto/16 :goto_5a

    .end local v8    # "rsrq":I
    .end local v11    # "rsrp":I
    .end local v76    # "pci":I
    .end local v87    # "coNameNew":Ljava/lang/String;
    .end local v96    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v12    # "coNameNew":Ljava/lang/String;
    :cond_78
    move-object/from16 v94, v5

    move-object/from16 v96, v10

    move-object/from16 v95, v11

    move-object/from16 v87, v12

    move-object/from16 v10, v76

    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v12    # "coNameNew":Ljava/lang/String;
    .restart local v87    # "coNameNew":Ljava/lang/String;
    .restart local v96    # "data":Lcom/mediatek/mdml/Msg;
    goto :goto_5e

    .end local v17    # "cellNum":I
    .end local v87    # "coNameNew":Ljava/lang/String;
    .end local v96    # "data":Lcom/mediatek/mdml/Msg;
    .local v8, "cellNum":I
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v12    # "coNameNew":Ljava/lang/String;
    :cond_79
    move-object/from16 v94, v5

    move/from16 v17, v8

    move-object/from16 v96, v10

    move-object/from16 v95, v11

    move-object/from16 v87, v12

    move-object/from16 v10, v76

    .line 1427
    .end local v4    # "j":I
    .end local v8    # "cellNum":I
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v12    # "coNameNew":Ljava/lang/String;
    .restart local v17    # "cellNum":I
    .restart local v87    # "coNameNew":Ljava/lang/String;
    .restart local v96    # "data":Lcom/mediatek/mdml/Msg;
    :goto_5e
    const-string v4, "LTE"

    move/from16 v26, v2

    move-object/from16 v5, v85

    move/from16 v2, p2

    .end local v2    # "indexTotal":I
    .end local v85    # "label":Ljava/lang/String;
    .local v5, "label":Ljava/lang/String;
    .local v26, "indexTotal":I
    invoke-virtual {v0, v5, v2, v4, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 1428
    move-object/from16 v4, v93

    invoke-virtual {v0, v5, v2, v4, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 1429
    move-object/from16 v8, v92

    invoke-virtual {v0, v5, v2, v8, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 1430
    move-object/from16 v11, v91

    invoke-virtual {v0, v5, v2, v11, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 1431
    move-object/from16 v12, v86

    invoke-virtual {v0, v5, v2, v12, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 1391
    .end local v13    # "valid":I
    .end local v87    # "coNameNew":Ljava/lang/String;
    add-int/lit8 v15, v15, 0x1

    move-object v1, v4

    move-object v4, v5

    move-object v7, v8

    move-object/from16 v76, v10

    move-object v9, v11

    move-object v3, v12

    move/from16 v13, v25

    move/from16 v14, v26

    move-object/from16 v12, v79

    move-object/from16 v6, v89

    move-object/from16 v8, v90

    move-object/from16 v5, v94

    move-object/from16 v11, v95

    move-object/from16 v10, v96

    goto/16 :goto_58

    .end local v1    # "arfcnArrays":[Ljava/lang/String;
    .end local v3    # "pciArrays":[Ljava/lang/String;
    .end local v5    # "label":Ljava/lang/String;
    .end local v7    # "rsrqArrays":[Ljava/lang/String;
    .end local v9    # "rsrpArrays":[Ljava/lang/String;
    .end local v26    # "indexTotal":I
    .end local v79    # "coName":Ljava/lang/String;
    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v96    # "data":Lcom/mediatek/mdml/Msg;
    .local v4, "label":Ljava/lang/String;
    .local v6, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .local v12, "coName":Ljava/lang/String;
    .local v14, "indexTotal":I
    :cond_7a
    move-object/from16 v94, v5

    move-object/from16 v89, v6

    move-object/from16 v90, v8

    move-object/from16 v96, v10

    move-object/from16 v95, v11

    move-object/from16 v79, v12

    move/from16 v26, v14

    move-object/from16 v10, v76

    move-object v12, v3

    move-object v5, v4

    move-object v8, v7

    move-object v11, v9

    move-object v4, v1

    .end local v4    # "label":Ljava/lang/String;
    .end local v6    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v12    # "coName":Ljava/lang/String;
    .end local v14    # "indexTotal":I
    .restart local v5    # "label":Ljava/lang/String;
    .restart local v26    # "indexTotal":I
    .restart local v79    # "coName":Ljava/lang/String;
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v96    # "data":Lcom/mediatek/mdml/Msg;
    goto :goto_5f

    .end local v5    # "label":Ljava/lang/String;
    .end local v25    # "freqNum":I
    .end local v26    # "indexTotal":I
    .end local v79    # "coName":Ljava/lang/String;
    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v96    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v4    # "label":Ljava/lang/String;
    .restart local v6    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v10    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v12    # "coName":Ljava/lang/String;
    .local v13, "freqNum":I
    .restart local v14    # "indexTotal":I
    :cond_7b
    move-object/from16 v94, v5

    move-object/from16 v89, v6

    move-object/from16 v90, v8

    move-object/from16 v96, v10

    move-object/from16 v95, v11

    move-object/from16 v79, v12

    move/from16 v25, v13

    move/from16 v26, v14

    move-object/from16 v10, v76

    move-object v12, v3

    move-object v5, v4

    move-object v8, v7

    move-object v11, v9

    move-object v4, v1

    .line 1433
    .end local v4    # "label":Ljava/lang/String;
    .end local v6    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v10    # "data":Lcom/mediatek/mdml/Msg;
    .end local v12    # "coName":Ljava/lang/String;
    .end local v13    # "freqNum":I
    .end local v14    # "indexTotal":I
    .end local v15    # "i":I
    .restart local v5    # "label":Ljava/lang/String;
    .restart local v25    # "freqNum":I
    .restart local v26    # "indexTotal":I
    .restart local v79    # "coName":Ljava/lang/String;
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v96    # "data":Lcom/mediatek/mdml/Msg;
    :goto_5f
    const-string v1, "intra_info."

    .line 1434
    .end local v79    # "coName":Ljava/lang/String;
    .local v1, "coName":Ljava/lang/String;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "cell_num"

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    move-object/from16 v6, v96

    .end local v96    # "data":Lcom/mediatek/mdml/Msg;
    .local v6, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual {v0, v6, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 1436
    .end local v17    # "cellNum":I
    .local v14, "cellNum":I
    const/16 v3, 0x10

    if-ge v14, v3, :cond_7c

    move v7, v14

    goto :goto_60

    :cond_7c
    move v7, v3

    :goto_60
    new-array v7, v7, [Ljava/lang/String;

    .line 1437
    .local v7, "indexArrays":[Ljava/lang/String;
    if-ge v14, v3, :cond_7d

    move v9, v14

    goto :goto_61

    :cond_7d
    move v9, v3

    :goto_61
    new-array v9, v9, [Ljava/lang/String;

    .line 1438
    .local v9, "arfcnArrays":[Ljava/lang/String;
    if-ge v14, v3, :cond_7e

    move v13, v14

    goto :goto_62

    :cond_7e
    move v13, v3

    :goto_62
    new-array v13, v13, [Ljava/lang/String;

    .line 1439
    .local v13, "pciArrays":[Ljava/lang/String;
    if-ge v14, v3, :cond_7f

    move v15, v14

    goto :goto_63

    :cond_7f
    move v15, v3

    :goto_63
    new-array v15, v15, [Ljava/lang/String;

    .line 1440
    .local v15, "rsrpArrays":[Ljava/lang/String;
    if-ge v14, v3, :cond_80

    move v3, v14

    goto :goto_64

    :cond_80
    const/16 v3, 0x10

    :goto_64
    new-array v3, v3, [Ljava/lang/String;

    .line 1441
    .local v3, "rsrqArrays":[Ljava/lang/String;
    move-object/from16 v79, v12

    const-string v12, "serving_info.earfcn"

    invoke-virtual {v0, v6, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 1443
    .local v12, "earfcn":I
    const/16 v17, 0x0

    move-object/from16 v92, v8

    move-object/from16 v91, v11

    move/from16 v8, v17

    move/from16 v11, v26

    .end local v26    # "indexTotal":I
    .local v8, "i":I
    .local v11, "indexTotal":I
    :goto_65
    if-ge v8, v14, :cond_85

    move/from16 v17, v14

    const/16 v14, 0x10

    .end local v14    # "cellNum":I
    .restart local v17    # "cellNum":I
    if-ge v8, v14, :cond_84

    .line 1444
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v26, v1

    .end local v1    # "coName":Ljava/lang/String;
    .local v26, "coName":Ljava/lang/String;
    const-string v1, "intra_cell"

    invoke-virtual {v14, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v1, v95

    invoke-virtual {v14, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-object/from16 v1, v94

    invoke-virtual {v14, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    .line 1447
    .local v14, "coNameNew":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v93, v4

    const-string v4, "valid"

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v6, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    .line 1449
    .local v1, "valid":I
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "pci"

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v6, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 1451
    .local v2, "pci":I
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v85, v5

    .end local v5    # "label":Ljava/lang/String;
    .restart local v85    # "label":Ljava/lang/String;
    const-string v5, "rsrp"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x1

    invoke-virtual {v0, v6, v4, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v4

    .line 1454
    .local v4, "rsrp":I
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v76, v14

    .end local v14    # "coNameNew":Ljava/lang/String;
    .local v76, "coNameNew":Ljava/lang/String;
    const-string v14, "rsrq"

    invoke-virtual {v5, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const/4 v14, 0x1

    invoke-virtual {v0, v6, v5, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v5

    .line 1457
    .local v5, "rsrq":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    aput-object v14, v7, v8

    .line 1458
    if-lez v1, :cond_83

    .line 1459
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    aput-object v14, v9, v8

    .line 1460
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    aput-object v14, v13, v8

    .line 1461
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v86, v1

    const/4 v1, -0x1

    .end local v1    # "valid":I
    .local v86, "valid":I
    if-eq v4, v1, :cond_81

    int-to-float v1, v4

    div-float v1, v1, v78

    invoke-static {v1}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v1

    goto :goto_66

    :cond_81
    move-object v1, v10

    :goto_66
    invoke-virtual {v14, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    aput-object v1, v15, v8

    .line 1462
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v14, -0x1

    if-eq v5, v14, :cond_82

    int-to-float v14, v5

    div-float v14, v14, v78

    invoke-static {v14}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v14

    goto :goto_67

    :cond_82
    move-object v14, v10

    :goto_67
    invoke-virtual {v1, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    aput-object v1, v3, v8

    goto :goto_68

    .line 1464
    .end local v86    # "valid":I
    .restart local v1    # "valid":I
    :cond_83
    move/from16 v86, v1

    .end local v1    # "valid":I
    .restart local v86    # "valid":I
    aput-object v10, v3, v8

    aput-object v10, v15, v8

    aput-object v10, v13, v8

    aput-object v10, v9, v8

    aput-object v10, v7, v8

    .line 1467
    :goto_68
    nop

    .end local v76    # "coNameNew":Ljava/lang/String;
    .end local v86    # "valid":I
    add-int/lit8 v11, v11, 0x1

    .line 1443
    add-int/lit8 v8, v8, 0x1

    move/from16 v2, p2

    move/from16 v14, v17

    move-object/from16 v1, v26

    move-object/from16 v5, v85

    move-object/from16 v4, v93

    goto/16 :goto_65

    .end local v2    # "pci":I
    .end local v4    # "rsrp":I
    .end local v26    # "coName":Ljava/lang/String;
    .end local v85    # "label":Ljava/lang/String;
    .local v1, "coName":Ljava/lang/String;
    .local v5, "label":Ljava/lang/String;
    :cond_84
    move-object/from16 v26, v1

    move-object/from16 v93, v4

    move-object/from16 v85, v5

    .end local v1    # "coName":Ljava/lang/String;
    .end local v5    # "label":Ljava/lang/String;
    .restart local v26    # "coName":Ljava/lang/String;
    .restart local v85    # "label":Ljava/lang/String;
    goto :goto_69

    .end local v17    # "cellNum":I
    .end local v26    # "coName":Ljava/lang/String;
    .end local v85    # "label":Ljava/lang/String;
    .restart local v1    # "coName":Ljava/lang/String;
    .restart local v5    # "label":Ljava/lang/String;
    .local v14, "cellNum":I
    :cond_85
    move-object/from16 v26, v1

    move-object/from16 v93, v4

    move-object/from16 v85, v5

    move/from16 v17, v14

    .line 1469
    .end local v1    # "coName":Ljava/lang/String;
    .end local v5    # "label":Ljava/lang/String;
    .end local v8    # "i":I
    .end local v14    # "cellNum":I
    .restart local v17    # "cellNum":I
    .restart local v26    # "coName":Ljava/lang/String;
    .restart local v85    # "label":Ljava/lang/String;
    :goto_69
    const-string v1, "LTE"

    move/from16 v2, p2

    move-object/from16 v4, v85

    .end local v85    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    invoke-virtual {v0, v4, v2, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1470
    move-object/from16 v1, v93

    invoke-virtual {v0, v4, v2, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1471
    move-object/from16 v5, v92

    invoke-virtual {v0, v4, v2, v5, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1472
    move-object/from16 v8, v91

    invoke-virtual {v0, v4, v2, v8, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1473
    move-object/from16 v14, v79

    invoke-virtual {v0, v4, v2, v14, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1475
    const/16 v75, 0x6

    aget-object v4, p1, v75

    .line 1476
    move-object/from16 v76, v3

    move-object/from16 v77, v7

    move-object/from16 v3, v89

    move-object/from16 v7, v90

    .end local v7    # "indexArrays":[Ljava/lang/String;
    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v3, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v76, "rsrqArrays":[Ljava/lang/String;
    .local v77, "indexArrays":[Ljava/lang/String;
    invoke-virtual {v3, v4, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1477
    invoke-virtual {v0, v4, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->resetHashMapKeyValues(Ljava/lang/String;I)V

    .line 1478
    const-string v7, "serving_info."

    .line 1479
    .end local v26    # "coName":Ljava/lang/String;
    .local v7, "coName":Ljava/lang/String;
    move-object/from16 v26, v9

    .end local v9    # "arfcnArrays":[Ljava/lang/String;
    .local v26, "arfcnArrays":[Ljava/lang/String;
    const-string v9, "scell_info_list.scell_info["

    .line 1481
    .end local v18    # "coName1":Ljava/lang/String;
    .local v9, "coName1":Ljava/lang/String;
    move/from16 v79, v11

    .end local v11    # "indexTotal":I
    .local v79, "indexTotal":I
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v83, v12

    .end local v12    # "earfcn":I
    .local v83, "earfcn":I
    const-string v12, "earfcn"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v6, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    int-to-long v11, v11

    .line 1483
    .end local v27    # "earfcnPcell":J
    .local v11, "earfcnPcell":J
    move-object/from16 v85, v13

    .end local v13    # "pciArrays":[Ljava/lang/String;
    .local v85, "pciArrays":[Ljava/lang/String;
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v86, v15

    .end local v15    # "rsrpArrays":[Ljava/lang/String;
    .local v86, "rsrpArrays":[Ljava/lang/String;
    const-string v15, "pci"

    invoke-virtual {v13, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v6, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 1485
    .end local v31    # "pciPcell":I
    .local v13, "pciPcell":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .end local v3    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    const-string v3, "rsrp"

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v15, 0x1

    invoke-virtual {v0, v6, v3, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v3

    .line 1487
    .end local v39    # "rsrpPcell":I
    .local v3, "rsrpPcell":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v75, v14

    const-string v14, "rsrq"

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    const/4 v15, 0x1

    invoke-virtual {v0, v6, v14, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v14

    .line 1489
    .end local v41    # "rsrqPcell":I
    .local v14, "rsrqPcell":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v18, v14

    .end local v14    # "rsrqPcell":I
    .local v18, "rsrqPcell":I
    const-string v14, "rs_snr_in_qdb"

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    const/4 v15, 0x1

    invoke-virtual {v0, v6, v14, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v14

    .line 1491
    .end local v33    # "snrPcell":I
    .local v14, "snrPcell":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v87, v7

    .end local v7    # "coName":Ljava/lang/String;
    .local v87, "coName":Ljava/lang/String;
    const-string v7, "serv_lte_band"

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v6, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 1493
    .end local v29    # "bandPcell":I
    .local v7, "bandPcell":I
    const/4 v15, 0x0

    .local v15, "i":I
    :goto_6a
    move/from16 v27, v3

    const/4 v3, 0x3

    .end local v3    # "rsrpPcell":I
    .local v27, "rsrpPcell":I
    if-ge v15, v3, :cond_86

    .line 1494
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-object/from16 v91, v8

    move-object/from16 v8, v94

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v28, v14

    .end local v14    # "snrPcell":I
    .local v28, "snrPcell":I
    const-string v14, "earfcn"

    invoke-virtual {v3, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v6, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    move-wide/from16 v92, v11

    .end local v11    # "earfcnPcell":J
    .local v92, "earfcnPcell":J
    int-to-long v11, v3

    aput-wide v11, v81, v15

    .line 1496
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "pci"

    invoke-virtual {v3, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v6, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    aput v3, v74, v15

    .line 1498
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "rsrp"

    invoke-virtual {v3, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v11, 0x1

    invoke-virtual {v0, v6, v3, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v3

    aput v3, v73, v15

    .line 1500
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "rsrq"

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v6, v3, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v3

    aput v3, v72, v15

    .line 1502
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "rs_snr_in_qdb"

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v6, v3, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v3

    aput v3, v71, v15

    .line 1504
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "serv_lte_band"

    invoke-virtual {v3, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v6, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    aput v3, v70, v15

    .line 1493
    add-int/lit8 v15, v15, 0x1

    move/from16 v3, v27

    move/from16 v14, v28

    move-object/from16 v8, v91

    move-wide/from16 v11, v92

    goto/16 :goto_6a

    .end local v28    # "snrPcell":I
    .end local v92    # "earfcnPcell":J
    .restart local v11    # "earfcnPcell":J
    .restart local v14    # "snrPcell":I
    :cond_86
    move-object/from16 v91, v8

    move-wide/from16 v92, v11

    move/from16 v28, v14

    .line 1508
    .end local v11    # "earfcnPcell":J
    .end local v14    # "snrPcell":I
    .end local v15    # "i":I
    .restart local v28    # "snrPcell":I
    .restart local v92    # "earfcnPcell":J
    const/4 v3, 0x5

    new-array v8, v3, [Ljava/lang/String;

    const-string v3, "Band"

    aput-object v3, v8, v82

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v11, 0x1

    aput-object v3, v8, v11

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    aget v12, v70, v82

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v12, 0x2

    aput-object v3, v8, v12

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    aget v14, v70, v11

    invoke-virtual {v3, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v11, 0x3

    aput-object v3, v8, v11

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    aget v11, v70, v12

    invoke-virtual {v3, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v11, 0x4

    aput-object v3, v8, v11

    invoke-virtual {v0, v4, v2, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1515
    const/4 v3, 0x5

    new-array v8, v3, [Ljava/lang/String;

    const-string v3, "DL BW(MHz)"

    aput-object v3, v8, v82

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingBW:Ljava/util/HashMap;

    .line 1516
    move/from16 v12, v69

    .end local v69    # "dlBandwidthPcell":I
    .local v12, "dlBandwidthPcell":I
    invoke-direct {v0, v12, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v3

    const/4 v11, 0x1

    aput-object v3, v8, v11

    aget v3, v43, v82

    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingBW:Ljava/util/HashMap;

    .line 1517
    invoke-direct {v0, v3, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v3

    const/4 v14, 0x2

    aput-object v3, v8, v14

    aget v3, v43, v11

    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingBW:Ljava/util/HashMap;

    .line 1518
    invoke-direct {v0, v3, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v3

    const/4 v11, 0x3

    aput-object v3, v8, v11

    aget v3, v43, v14

    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingBW:Ljava/util/HashMap;

    .line 1519
    invoke-direct {v0, v3, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v3

    const/4 v11, 0x4

    aput-object v3, v8, v11

    .line 1515
    invoke-virtual {v0, v4, v2, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1521
    const/4 v3, 0x5

    new-array v8, v3, [Ljava/lang/String;

    const-string v3, "UL BW(MHz)"

    aput-object v3, v8, v82

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingBW:Ljava/util/HashMap;

    .line 1522
    move/from16 v14, v40

    .end local v40    # "ulBandwidthPcell":I
    .local v14, "ulBandwidthPcell":I
    invoke-direct {v0, v14, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v3

    const/4 v11, 0x1

    aput-object v3, v8, v11

    aget v3, v34, v82

    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingBW:Ljava/util/HashMap;

    .line 1523
    invoke-direct {v0, v3, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v3

    const/4 v15, 0x2

    aput-object v3, v8, v15

    aget v3, v34, v11

    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingBW:Ljava/util/HashMap;

    .line 1524
    invoke-direct {v0, v3, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v3

    const/4 v11, 0x3

    aput-object v3, v8, v11

    aget v3, v34, v15

    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingBW:Ljava/util/HashMap;

    .line 1525
    invoke-direct {v0, v3, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v3

    const/4 v11, 0x4

    aput-object v3, v8, v11

    .line 1521
    invoke-virtual {v0, v4, v2, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1527
    const/4 v3, 0x5

    new-array v8, v3, [Ljava/lang/String;

    const-string v3, "TM"

    aput-object v3, v8, v82

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v15, v32

    .end local v32    # "tmPcell":I
    .local v15, "tmPcell":I
    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v11, 0x1

    aput-object v3, v8, v11

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    aget v11, v30, v82

    invoke-virtual {v3, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v11, 0x2

    aput-object v3, v8, v11

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const/16 v29, 0x1

    aget v11, v30, v29

    invoke-virtual {v3, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v11, 0x3

    aput-object v3, v8, v11

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v29, v7

    const/4 v11, 0x2

    .end local v7    # "bandPcell":I
    .restart local v29    # "bandPcell":I
    aget v7, v30, v11

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v7, 0x4

    aput-object v3, v8, v7

    invoke-virtual {v0, v4, v2, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1531
    const/4 v3, 0x5

    new-array v7, v3, [Ljava/lang/String;

    aput-object v5, v7, v82

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v5, 0x1

    aput-object v3, v7, v5

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    aget v8, v74, v82

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v8, 0x2

    aput-object v3, v7, v8

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    aget v11, v74, v5

    invoke-virtual {v3, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v5, 0x3

    aput-object v3, v7, v5

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    aget v5, v74, v8

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v5, 0x4

    aput-object v3, v7, v5

    invoke-virtual {v0, v4, v2, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1538
    const/4 v3, 0x5

    new-array v5, v3, [Ljava/lang/String;

    aput-object v1, v5, v82

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    move-wide/from16 v7, v92

    .end local v92    # "earfcnPcell":J
    .local v7, "earfcnPcell":J
    invoke-virtual {v1, v7, v8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v3, 0x1

    aput-object v1, v5, v3

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    move-object v11, v4

    .end local v4    # "label":Ljava/lang/String;
    .local v11, "label":Ljava/lang/String;
    aget-wide v3, v81, v82

    invoke-virtual {v1, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v3, 0x2

    aput-object v1, v5, v3

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v4, 0x1

    .end local v7    # "earfcnPcell":J
    .restart local v92    # "earfcnPcell":J
    aget-wide v7, v81, v4

    invoke-virtual {v1, v7, v8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v4, 0x3

    aput-object v1, v5, v4

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    aget-wide v7, v81, v3

    invoke-virtual {v1, v7, v8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v3, 0x4

    aput-object v1, v5, v3

    move-object v1, v11

    .end local v11    # "label":Ljava/lang/String;
    .local v1, "label":Ljava/lang/String;
    invoke-virtual {v0, v1, v2, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1545
    const/4 v3, 0x5

    new-array v4, v3, [Ljava/lang/String;

    const-string v3, "RS_SNR"

    aput-object v3, v4, v82

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v5, v28

    .end local v28    # "snrPcell":I
    .local v5, "snrPcell":I
    int-to-float v7, v5

    div-float v7, v7, v78

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v7, 0x1

    aput-object v3, v4, v7

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    aget v7, v71, v82

    int-to-float v7, v7

    div-float v7, v7, v78

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v7, 0x2

    aput-object v3, v4, v7

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v7, 0x1

    aget v8, v71, v7

    int-to-float v7, v8

    div-float v7, v7, v78

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v7, 0x3

    aput-object v3, v4, v7

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v7, 0x2

    aget v8, v71, v7

    int-to-float v7, v8

    div-float v7, v7, v78

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v7, 0x4

    aput-object v3, v4, v7

    invoke-virtual {v0, v1, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1553
    const/4 v3, 0x5

    new-array v4, v3, [Ljava/lang/String;

    const-string v3, "DL Freq"

    aput-object v3, v4, v82

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v11, v35

    .end local v35    # "dlFreqPcell":I
    .local v11, "dlFreqPcell":I
    invoke-virtual {v3, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v7, 0x1

    aput-object v3, v4, v7

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    aget v8, v36, v82

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v8, 0x2

    aput-object v3, v4, v8

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    aget v8, v36, v7

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v7, 0x3

    aput-object v3, v4, v7

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v7, 0x2

    aget v8, v36, v7

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v7, 0x4

    aput-object v3, v4, v7

    invoke-virtual {v0, v1, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1559
    const/4 v3, 0x5

    new-array v4, v3, [Ljava/lang/String;

    const-string v3, "UL Freq"

    aput-object v3, v4, v82

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v8, v37

    .end local v37    # "ulFreqPcell":I
    .local v8, "ulFreqPcell":I
    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v7, 0x1

    aput-object v3, v4, v7

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    aget v7, v38, v82

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v7, 0x2

    aput-object v3, v4, v7

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const/16 v28, 0x1

    aget v7, v38, v28

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v7, 0x3

    aput-object v3, v4, v7

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v28, v5

    const/4 v7, 0x2

    .end local v5    # "snrPcell":I
    .restart local v28    # "snrPcell":I
    aget v5, v38, v7

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v5, 0x4

    aput-object v3, v4, v5

    invoke-virtual {v0, v1, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1566
    const/4 v3, 0x5

    new-array v4, v3, [Ljava/lang/String;

    aput-object v91, v4, v82

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v5, v27

    .end local v27    # "rsrpPcell":I
    .local v5, "rsrpPcell":I
    int-to-float v7, v5

    div-float v7, v7, v78

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v7, 0x1

    aput-object v3, v4, v7

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    aget v7, v73, v82

    int-to-float v7, v7

    div-float v7, v7, v78

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v7, 0x2

    aput-object v3, v4, v7

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v7, 0x1

    .end local v5    # "rsrpPcell":I
    .restart local v27    # "rsrpPcell":I
    aget v5, v73, v7

    int-to-float v5, v5

    div-float v5, v5, v78

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v5, 0x3

    aput-object v3, v4, v5

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v5, 0x2

    aget v7, v73, v5

    int-to-float v5, v7

    div-float v5, v5, v78

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v5, 0x4

    aput-object v3, v4, v5

    invoke-virtual {v0, v1, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1573
    const/4 v3, 0x5

    new-array v4, v3, [Ljava/lang/String;

    aput-object v75, v4, v82

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v5, v18

    .end local v18    # "rsrqPcell":I
    .local v5, "rsrqPcell":I
    int-to-float v7, v5

    div-float v7, v7, v78

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v7, 0x1

    aput-object v3, v4, v7

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    aget v7, v72, v82

    int-to-float v7, v7

    div-float v7, v7, v78

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v7, 0x2

    aput-object v3, v4, v7

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v7, 0x1

    .end local v5    # "rsrqPcell":I
    .restart local v18    # "rsrqPcell":I
    aget v5, v72, v7

    int-to-float v5, v5

    div-float v5, v5, v78

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v5, 0x3

    aput-object v3, v4, v5

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v5, 0x2

    aget v7, v72, v5

    int-to-float v5, v7

    div-float v5, v5, v78

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v5, 0x4

    aput-object v3, v4, v5

    invoke-virtual {v0, v1, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1580
    const/4 v3, 0x5

    new-array v4, v3, [Ljava/lang/String;

    const-string v3, "DL Mod TB1"

    aput-object v3, v4, v82

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLteMappingQam:Ljava/util/HashMap;

    .line 1581
    move/from16 v5, v44

    .end local v44    # "oldDlMod0Pcell":I
    .local v5, "oldDlMod0Pcell":I
    invoke-direct {v0, v5, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v3

    const/4 v7, 0x1

    aput-object v3, v4, v7

    aget v3, v47, v82

    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLteMappingQam:Ljava/util/HashMap;

    .line 1582
    invoke-direct {v0, v3, v10}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v3

    const/4 v10, 0x2

    aput-object v3, v4, v10

    aget v3, v47, v7

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLteMappingQam:Ljava/util/HashMap;

    .line 1583
    invoke-direct {v0, v3, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v3

    const/4 v7, 0x3

    aput-object v3, v4, v7

    aget v3, v47, v10

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLteMappingQam:Ljava/util/HashMap;

    .line 1584
    invoke-direct {v0, v3, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v3

    const/4 v7, 0x4

    aput-object v3, v4, v7

    .line 1580
    invoke-virtual {v0, v1, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1587
    const/4 v3, 0x5

    new-array v4, v3, [Ljava/lang/String;

    const-string v3, "DL Mod TB2"

    aput-object v3, v4, v82

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLteMappingQam:Ljava/util/HashMap;

    .line 1588
    move/from16 v10, v48

    .end local v48    # "oldDlMod1Pcell":I
    .local v10, "oldDlMod1Pcell":I
    invoke-direct {v0, v10, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v3

    const/4 v7, 0x1

    aput-object v3, v4, v7

    aget v3, v51, v82

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLteMappingQam:Ljava/util/HashMap;

    .line 1589
    invoke-direct {v0, v3, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v3

    const/4 v7, 0x2

    aput-object v3, v4, v7

    const/4 v3, 0x1

    aget v7, v51, v3

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLteMappingQam:Ljava/util/HashMap;

    .line 1590
    invoke-direct {v0, v7, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v3

    const/4 v7, 0x3

    aput-object v3, v4, v7

    const/4 v3, 0x2

    aget v7, v51, v3

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLteMappingQam:Ljava/util/HashMap;

    .line 1591
    invoke-direct {v0, v7, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v3

    const/4 v7, 0x4

    aput-object v3, v4, v7

    .line 1587
    invoke-virtual {v0, v1, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1594
    const/4 v3, 0x5

    new-array v3, v3, [Ljava/lang/String;

    const-string v4, "UL Mod"

    aput-object v4, v3, v82

    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLteMappingQam:Ljava/util/HashMap;

    .line 1595
    move/from16 v7, v52

    .end local v52    # "oldUlPcell":I
    .local v7, "oldUlPcell":I
    invoke-direct {v0, v7, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v4

    const/16 v31, 0x1

    aput-object v4, v3, v31

    aget v4, v55, v82

    .end local v5    # "oldDlMod0Pcell":I
    .restart local v44    # "oldDlMod0Pcell":I
    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLteMappingQam:Ljava/util/HashMap;

    .line 1596
    invoke-direct {v0, v4, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x2

    aput-object v4, v3, v5

    aget v4, v55, v31

    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLteMappingQam:Ljava/util/HashMap;

    .line 1597
    invoke-direct {v0, v4, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x3

    aput-object v4, v3, v5

    const/4 v4, 0x2

    aget v4, v55, v4

    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLteMappingQam:Ljava/util/HashMap;

    .line 1598
    invoke-direct {v0, v4, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x4

    aput-object v4, v3, v5

    .line 1594
    invoke-virtual {v0, v1, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1599
    move-object v4, v1

    move-object/from16 v90, v6

    move/from16 v31, v13

    move/from16 v25, v17

    move/from16 v41, v18

    move/from16 v10, v21

    move/from16 v39, v27

    move/from16 v33, v28

    move/from16 v11, v29

    move/from16 v26, v79

    move-object/from16 v6, v87

    move-object/from16 v1, v89

    move-wide/from16 v7, v92

    move-object/from16 v18, v9

    move v13, v12

    move v15, v14

    move/from16 v9, v20

    move/from16 v12, v23

    move/from16 v14, v44

    goto/16 :goto_86

    .line 1333
    .end local v1    # "label":Ljava/lang/String;
    .end local v6    # "data":Lcom/mediatek/mdml/Msg;
    .end local v7    # "oldUlPcell":I
    .end local v8    # "ulFreqPcell":I
    .end local v9    # "coName1":Ljava/lang/String;
    .end local v10    # "oldDlMod1Pcell":I
    .end local v11    # "dlFreqPcell":I
    .end local v12    # "dlBandwidthPcell":I
    .end local v13    # "pciPcell":I
    .end local v14    # "ulBandwidthPcell":I
    .end local v15    # "tmPcell":I
    .end local v28    # "snrPcell":I
    .end local v76    # "rsrqArrays":[Ljava/lang/String;
    .end local v77    # "indexArrays":[Ljava/lang/String;
    .end local v79    # "indexTotal":I
    .end local v83    # "earfcn":I
    .end local v86    # "rsrpArrays":[Ljava/lang/String;
    .end local v87    # "coName":Ljava/lang/String;
    .end local v88    # "emType":I
    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v92    # "earfcnPcell":J
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .local v5, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v17, "label":Ljava/lang/String;
    .local v18, "coName1":Ljava/lang/String;
    .local v25, "cellNum":I
    .local v26, "indexTotal":I
    .local v27, "earfcnPcell":J
    .restart local v31    # "pciPcell":I
    .restart local v32    # "tmPcell":I
    .restart local v33    # "snrPcell":I
    .restart local v35    # "dlFreqPcell":I
    .restart local v37    # "ulFreqPcell":I
    .restart local v39    # "rsrpPcell":I
    .restart local v40    # "ulBandwidthPcell":I
    .restart local v41    # "rsrqPcell":I
    .restart local v48    # "oldDlMod1Pcell":I
    .restart local v52    # "oldUlPcell":I
    .restart local v69    # "dlBandwidthPcell":I
    .local v85, "coName":Ljava/lang/String;
    :pswitch_25
    move v2, v1

    move-object v6, v3

    move/from16 v88, v4

    move-object/from16 v89, v5

    move-object/from16 v95, v11

    move-object v7, v13

    move/from16 v15, v32

    move/from16 v11, v35

    move/from16 v8, v37

    move/from16 v14, v40

    move/from16 v10, v48

    move/from16 v3, v52

    move/from16 v12, v69

    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v32    # "tmPcell":I
    .end local v35    # "dlFreqPcell":I
    .end local v37    # "ulFreqPcell":I
    .end local v40    # "ulBandwidthPcell":I
    .end local v48    # "oldDlMod1Pcell":I
    .end local v52    # "oldUlPcell":I
    .end local v69    # "dlBandwidthPcell":I
    .local v3, "oldUlPcell":I
    .restart local v6    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v8    # "ulFreqPcell":I
    .restart local v10    # "oldDlMod1Pcell":I
    .restart local v11    # "dlFreqPcell":I
    .restart local v12    # "dlBandwidthPcell":I
    .restart local v14    # "ulBandwidthPcell":I
    .restart local v15    # "tmPcell":I
    .restart local v88    # "emType":I
    .restart local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    aget-object v4, p1, v82

    .line 1334
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    move-object/from16 v9, v89

    .end local v89    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v9, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    invoke-virtual {v9, v4, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1335
    const-string v1, "errc_sts"

    invoke-virtual {v0, v6, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    .line 1337
    .local v1, "errc_state":I
    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->ERRCStateMapping:Ljava/util/HashMap;

    invoke-direct {v0, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v5

    .line 1338
    .local v5, "state":Ljava/lang/String;
    const-string v7, "ERRC State"

    invoke-virtual {v0, v4, v2, v7, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1339
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v13, v95

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "]ERRC State : "

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, ",state: "

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const-string v13, "EmInfo/MDMComponent"

    invoke-static {v13, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1340
    move-object/from16 v90, v6

    move-object v1, v9

    move v13, v12

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move-object/from16 v6, v85

    move v15, v14

    move/from16 v14, v44

    goto/16 :goto_86

    .line 1047
    .end local v1    # "errc_state":I
    .end local v6    # "data":Lcom/mediatek/mdml/Msg;
    .end local v8    # "ulFreqPcell":I
    .end local v9    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v10    # "oldDlMod1Pcell":I
    .end local v11    # "dlFreqPcell":I
    .end local v12    # "dlBandwidthPcell":I
    .end local v14    # "ulBandwidthPcell":I
    .end local v15    # "tmPcell":I
    .end local v88    # "emType":I
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .local v5, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v17    # "label":Ljava/lang/String;
    .restart local v32    # "tmPcell":I
    .restart local v35    # "dlFreqPcell":I
    .restart local v37    # "ulFreqPcell":I
    .restart local v40    # "ulBandwidthPcell":I
    .restart local v48    # "oldDlMod1Pcell":I
    .restart local v52    # "oldUlPcell":I
    .restart local v69    # "dlBandwidthPcell":I
    :pswitch_26
    move v2, v1

    move/from16 v88, v4

    move-object v9, v5

    move-object v1, v7

    move-object/from16 v91, v8

    move-object v8, v10

    move-object/from16 v75, v12

    move-object v7, v13

    move-object v5, v15

    move/from16 v15, v32

    move/from16 v14, v40

    move/from16 v4, v44

    move/from16 v32, v48

    move/from16 v12, v69

    move-object v10, v6

    move-object v13, v11

    move/from16 v11, v35

    move/from16 v35, v37

    move-object v6, v3

    move/from16 v3, v52

    .end local v3    # "data":Lcom/mediatek/mdml/Msg;
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v37    # "ulFreqPcell":I
    .end local v40    # "ulBandwidthPcell":I
    .end local v44    # "oldDlMod0Pcell":I
    .end local v48    # "oldDlMod1Pcell":I
    .end local v69    # "dlBandwidthPcell":I
    .local v4, "oldDlMod0Pcell":I
    .restart local v6    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v9    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v11    # "dlFreqPcell":I
    .restart local v12    # "dlBandwidthPcell":I
    .restart local v14    # "ulBandwidthPcell":I
    .restart local v15    # "tmPcell":I
    .local v32, "oldDlMod1Pcell":I
    .local v35, "ulFreqPcell":I
    .restart local v88    # "emType":I
    aget-object v3, p1, v82

    .line 1048
    .end local v17    # "label":Ljava/lang/String;
    .local v3, "label":Ljava/lang/String;
    invoke-virtual {v9, v3, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1049
    nop

    .end local v4    # "oldDlMod0Pcell":I
    .restart local v44    # "oldDlMod0Pcell":I
    const-string v4, "cell_info[0].dl_bw"

    invoke-virtual {v0, v6, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 1051
    .local v4, "bw":I
    nop

    .line 1052
    move/from16 v37, v11

    .end local v11    # "dlFreqPcell":I
    .local v37, "dlFreqPcell":I
    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingBW:Ljava/util/HashMap;

    .end local v12    # "dlBandwidthPcell":I
    .restart local v69    # "dlBandwidthPcell":I
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    invoke-virtual {v11, v12}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v11

    if-eqz v11, :cond_87

    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingBW:Ljava/util/HashMap;

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    invoke-virtual {v11, v12}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v11

    goto :goto_6b

    :cond_87
    move-object v11, v10

    .line 1051
    :goto_6b
    const-string v12, "DL_BW"

    invoke-virtual {v0, v3, v2, v12, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1054
    const-string v11, "dl_info[0]."

    .line 1055
    .end local v85    # "coName":Ljava/lang/String;
    .local v11, "coName":Ljava/lang/String;
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v17, v4

    .end local v4    # "bw":I
    .local v17, "bw":I
    const-string v4, "rsrp"

    invoke-virtual {v12, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v12, 0x1

    invoke-virtual {v0, v6, v4, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v4

    .line 1057
    .local v4, "rsrp":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    move/from16 v40, v4

    move-object/from16 v4, v91

    .end local v4    # "rsrp":I
    .local v40, "rsrp":I
    invoke-virtual {v0, v3, v2, v4, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1059
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v48, v14

    .end local v14    # "ulBandwidthPcell":I
    .local v48, "ulBandwidthPcell":I
    const-string v14, "rsrq"

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const/4 v14, 0x1

    invoke-virtual {v0, v6, v12, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    .line 1061
    .local v12, "rsrq":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    move/from16 v76, v12

    move-object/from16 v12, v75

    .end local v12    # "rsrq":I
    .local v76, "rsrq":I
    invoke-virtual {v0, v3, v2, v12, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1063
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v77, v15

    .end local v15    # "tmPcell":I
    .local v77, "tmPcell":I
    const-string v15, "sinr"

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    const/4 v15, 0x1

    invoke-virtual {v0, v6, v14, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v14

    .line 1065
    .local v14, "sinr":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    move/from16 v75, v14

    .end local v14    # "sinr":I
    .local v75, "sinr":I
    const-string v14, "SINR"

    invoke-virtual {v0, v3, v2, v14, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1067
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "dl_rssi"

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "[0]"

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    const/4 v15, 0x1

    invoke-virtual {v0, v6, v14, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v14

    .line 1069
    .local v14, "iRssi0":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v79, v12

    const-string v12, "dl_rssi"

    invoke-virtual {v15, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "[1]"

    invoke-virtual {v15, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const/4 v15, 0x1

    invoke-virtual {v0, v6, v12, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    .line 1071
    .local v12, "iRssi1":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move/from16 v85, v14

    .end local v14    # "iRssi0":I
    .local v85, "iRssi0":I
    const-string v14, ","

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    const-string v15, "RSSI"

    invoke-virtual {v0, v3, v2, v15, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1073
    const-string v14, "cell_info[0].ant_port"

    invoke-virtual {v0, v6, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 1075
    .local v14, "ant_port":I
    const/4 v15, 0x0

    .line 1076
    .local v15, "rssi_num":I
    const/16 v86, 0x0

    move/from16 v100, v86

    move/from16 v86, v12

    move/from16 v12, v100

    .local v12, "i":I
    .local v86, "iRssi1":I
    :goto_6c
    move-object/from16 v91, v4

    const/4 v4, 0x2

    if-ge v12, v4, :cond_8a

    .line 1077
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v93, v1

    const-string v1, "dl_rssi"

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "]"

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v4, 0x1

    invoke-virtual {v0, v6, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v1

    .line 1079
    .local v1, "dl_rssi":I
    const/16 v4, 0x12

    if-le v1, v4, :cond_88

    const/16 v4, -0x8c

    if-lt v1, v4, :cond_89

    .line 1080
    :cond_88
    add-int/lit8 v15, v15, 0x1

    .line 1076
    .end local v1    # "dl_rssi":I
    :cond_89
    add-int/lit8 v12, v12, 0x1

    move-object/from16 v4, v91

    move-object/from16 v1, v93

    goto :goto_6c

    :cond_8a
    move-object/from16 v93, v1

    .line 1083
    .end local v12    # "i":I
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "x"

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v4, "Antenna"

    invoke-virtual {v0, v3, v2, v4, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1085
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "ri"

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v4, 0x1

    invoke-virtual {v0, v6, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v1

    .line 1087
    .local v1, "ri":I
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v12, "RI"

    invoke-virtual {v0, v3, v2, v12, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1089
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "tm"

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v12, 0x1

    invoke-virtual {v0, v6, v4, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v4

    .line 1091
    .local v4, "tm":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "TM"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const-string v13, "TM"

    invoke-virtual {v0, v3, v2, v13, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1093
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "DL_Imcs"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const/4 v13, 0x1

    invoke-virtual {v0, v6, v12, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    .line 1095
    .local v12, "dl_imcs":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    move/from16 v87, v1

    .end local v1    # "ri":I
    .local v87, "ri":I
    const-string v1, "DL Imcs"

    invoke-virtual {v0, v3, v2, v1, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1097
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "DL_Mod0"

    invoke-virtual {v1, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v6, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    .line 1099
    .end local v42    # "dlMod0Pcell":I
    .local v1, "dlMod0Pcell":I
    const/16 v13, 0xff

    if-ne v1, v13, :cond_8b

    move/from16 v13, v44

    goto :goto_6d

    .line 1100
    :cond_8b
    move v13, v1

    :goto_6d
    nop

    .line 1101
    .end local v44    # "oldDlMod0Pcell":I
    .local v13, "oldDlMod0Pcell":I
    nop

    .line 1102
    move/from16 v42, v1

    .end local v1    # "dlMod0Pcell":I
    .restart local v42    # "dlMod0Pcell":I
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingQam:Ljava/util/HashMap;

    move/from16 v89, v4

    .end local v4    # "tm":I
    .local v89, "tm":I
    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_8c

    .line 1103
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingQam:Ljava/util/HashMap;

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    goto :goto_6e

    :cond_8c
    move-object v1, v10

    .line 1101
    :goto_6e
    const-string v4, "DL Mod TB1"

    invoke-virtual {v0, v3, v2, v4, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1105
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "DL_Mod1"

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v6, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    .line 1107
    .end local v46    # "dlMod1Pcell":I
    .local v1, "dlMod1Pcell":I
    const/16 v4, 0xff

    if-ne v1, v4, :cond_8d

    move/from16 v4, v32

    goto :goto_6f

    .line 1108
    :cond_8d
    move v4, v1

    :goto_6f
    nop

    .line 1109
    .end local v32    # "oldDlMod1Pcell":I
    .local v4, "oldDlMod1Pcell":I
    nop

    .line 1110
    move/from16 v44, v1

    .end local v1    # "dlMod1Pcell":I
    .local v44, "dlMod1Pcell":I
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingQam:Ljava/util/HashMap;

    move-object/from16 v90, v11

    .end local v11    # "coName":Ljava/lang/String;
    .local v90, "coName":Ljava/lang/String;
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    invoke-virtual {v1, v11}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_8e

    .line 1111
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingQam:Ljava/util/HashMap;

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    invoke-virtual {v1, v11}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    goto :goto_70

    :cond_8e
    move-object v1, v10

    .line 1109
    :goto_70
    const-string v11, "DL Mod TB2"

    invoke-virtual {v0, v3, v2, v11, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1113
    const-string v1, "ul_info[0].UL_Imcs"

    const/4 v11, 0x1

    invoke-virtual {v0, v6, v1, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v1

    .line 1115
    .local v1, "ul_imcs":I
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    move/from16 v32, v1

    .end local v1    # "ul_imcs":I
    .local v32, "ul_imcs":I
    const-string v1, "UL Imcs"

    invoke-virtual {v0, v3, v2, v1, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1117
    const-string v1, "ul_info[0].UL_Mod"

    const/4 v11, 0x1

    invoke-virtual {v0, v6, v1, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v1

    .line 1119
    .local v1, "ul_mode":I
    const/16 v11, 0xff

    if-ne v1, v11, :cond_8f

    iget v11, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->oldUlMode:I

    goto :goto_71

    :cond_8f
    move v11, v1

    :goto_71
    iput v11, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->oldUlMode:I

    .line 1120
    nop

    .line 1121
    move/from16 v46, v1

    .end local v1    # "ul_mode":I
    .local v46, "ul_mode":I
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingQam:Ljava/util/HashMap;

    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    invoke-virtual {v1, v11}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_90

    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingQam:Ljava/util/HashMap;

    iget v11, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->oldUlMode:I

    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    invoke-virtual {v1, v11}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    goto :goto_72

    :cond_90
    move-object v1, v10

    .line 1120
    :goto_72
    const-string v11, "UL Mod"

    invoke-virtual {v0, v3, v2, v11, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1123
    const/4 v1, 0x1

    aget-object v3, p1, v1

    .line 1124
    invoke-virtual {v9, v3, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1125
    invoke-virtual {v0, v3, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->resetHashMapKeyValues(Ljava/lang/String;I)V

    .line 1126
    const-string v1, "dl_cc_count"

    invoke-virtual {v0, v6, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    .line 1127
    .local v1, "dl_cc_count":I
    const-string v11, "ul_cc_count"

    invoke-virtual {v0, v6, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 1128
    .local v11, "ul_cc_count":I
    move/from16 v92, v4

    .end local v4    # "oldDlMod1Pcell":I
    .local v92, "oldDlMod1Pcell":I
    const-string v4, "tas_version"

    invoke-virtual {v0, v6, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    iput v4, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->TasVersion:I

    .line 1129
    if-nez v4, :cond_91

    const/4 v4, 0x1

    goto :goto_73

    :cond_91
    const/4 v4, 0x2

    :goto_73
    iput v4, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->TasVersion:I

    .line 1131
    const-string v4, "ul_info[0].tx_ant_type"

    move/from16 v94, v12

    const/4 v12, 0x1

    .end local v12    # "dl_imcs":I
    .local v94, "dl_imcs":I
    invoke-virtual {v0, v6, v4, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v4

    .line 1132
    .end local v19    # "antidx":I
    .local v4, "antidx":I
    move/from16 v95, v13

    .end local v13    # "oldDlMod0Pcell":I
    .local v95, "oldDlMod0Pcell":I
    const-string v13, "ul_info[0].rsrp_l_ant"

    invoke-virtual {v0, v6, v13, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v13

    .line 1133
    .end local v20    # "rsrp_l_ant":I
    .local v13, "rsrp_l_ant":I
    move/from16 v96, v14

    .end local v14    # "ant_port":I
    .local v96, "ant_port":I
    const-string v14, "ul_info[0].rsrp_u_ant"

    invoke-virtual {v0, v6, v14, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v14

    .line 1134
    .end local v21    # "rsrp_u_ant":I
    .local v14, "rsrp_u_ant":I
    move/from16 v97, v15

    .end local v15    # "rssi_num":I
    .local v97, "rssi_num":I
    const-string v15, "ul_info[0].tx_power"

    invoke-virtual {v0, v6, v15, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v15

    .line 1136
    .end local v23    # "tx_pwr":I
    .local v15, "tx_pwr":I
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v12

    if-eqz v12, :cond_92

    .line 1137
    const-string v12, "ul_info[0].tas_status"

    invoke-virtual {v0, v6, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    goto :goto_74

    :cond_92
    const/4 v12, 0x2

    .line 1138
    .end local v24    # "tasidx":I
    .local v12, "tasidx":I
    :goto_74
    if-nez v1, :cond_93

    .line 1139
    move-object/from16 v98, v5

    const/4 v5, 0x1

    iput v5, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->TasVersion:I

    .line 1140
    move-object/from16 v99, v8

    const/4 v5, 0x5

    new-array v8, v5, [Ljava/lang/String;

    .line 1141
    invoke-virtual {v0, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->tasEableMapping(I)Ljava/lang/String;

    move-result-object v5

    aput-object v5, v8, v82

    const/4 v5, 0x1

    aput-object v10, v8, v5

    const/16 v19, 0x2

    aput-object v10, v8, v19

    const/16 v19, 0x3

    aput-object v10, v8, v19

    const/16 v19, 0x4

    aput-object v10, v8, v19

    .line 1140
    invoke-virtual {v0, v3, v2, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    goto :goto_75

    .line 1143
    :cond_93
    move-object/from16 v98, v5

    move-object/from16 v99, v8

    const/4 v5, 0x1

    if-ne v1, v5, :cond_94

    if-nez v11, :cond_94

    .line 1144
    const/4 v8, 0x5

    new-array v5, v8, [Ljava/lang/String;

    .line 1145
    invoke-virtual {v0, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->tasEableMapping(I)Ljava/lang/String;

    move-result-object v8

    aput-object v8, v5, v82

    const/4 v8, 0x1

    aput-object v10, v5, v8

    const/4 v8, 0x2

    aput-object v10, v5, v8

    .line 1146
    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v8

    const/16 v19, 0x3

    aput-object v8, v5, v19

    .line 1147
    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v8

    const/16 v19, 0x4

    aput-object v8, v5, v19

    .line 1144
    invoke-virtual {v0, v3, v2, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    goto :goto_75

    .line 1148
    :cond_94
    const/4 v5, 0x1

    if-lt v1, v5, :cond_95

    if-lt v11, v5, :cond_95

    .line 1149
    const/4 v8, 0x5

    new-array v5, v8, [Ljava/lang/String;

    .line 1150
    invoke-virtual {v0, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->tasEableMapping(I)Ljava/lang/String;

    move-result-object v8

    aput-object v8, v5, v82

    .line 1151
    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->antidxMapping(I)Ljava/lang/String;

    move-result-object v8

    const/16 v19, 0x1

    aput-object v8, v5, v19

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    const/16 v19, 0x2

    aput-object v8, v5, v19

    .line 1153
    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v8

    const/16 v19, 0x3

    aput-object v8, v5, v19

    .line 1154
    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v8

    const/16 v19, 0x4

    aput-object v8, v5, v19

    .line 1149
    invoke-virtual {v0, v3, v2, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1156
    :cond_95
    :goto_75
    const/4 v5, 0x6

    aget-object v3, p1, v5

    .line 1157
    invoke-virtual {v9, v3, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1158
    invoke-virtual {v0, v3, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->resetHashMapKeyValues(Ljava/lang/String;I)V

    .line 1159
    const-string v5, "cell_info[0]."

    .line 1160
    .end local v90    # "coName":Ljava/lang/String;
    .local v5, "coName":Ljava/lang/String;
    const-string v7, "cell_info["

    .line 1161
    .end local v18    # "coName1":Ljava/lang/String;
    .local v7, "coName1":Ljava/lang/String;
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v83, v1

    .end local v1    # "dl_cc_count":I
    .local v83, "dl_cc_count":I
    const-string v1, "dl_bw"

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v6, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    .line 1163
    .end local v69    # "dlBandwidthPcell":I
    .local v1, "dlBandwidthPcell":I
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v19, v4

    .end local v4    # "antidx":I
    .restart local v19    # "antidx":I
    const-string v4, "ul_bw"

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v6, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 1165
    .end local v48    # "ulBandwidthPcell":I
    .local v4, "ulBandwidthPcell":I
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v90, v11

    .end local v11    # "ul_cc_count":I
    .local v90, "ul_cc_count":I
    const-string v11, "tm"

    invoke-virtual {v8, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v6, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 1167
    .end local v77    # "tmPcell":I
    .local v8, "tmPcell":I
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v20, v12

    .end local v12    # "tasidx":I
    .local v20, "tasidx":I
    const-string v12, "dlFreq"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v6, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 1168
    .end local v37    # "dlFreqPcell":I
    .local v11, "dlFreqPcell":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v21, v5

    .end local v5    # "coName":Ljava/lang/String;
    .local v21, "coName":Ljava/lang/String;
    const-string v5, "ulFreq"

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v6, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 1169
    .end local v35    # "ulFreqPcell":I
    .local v5, "ulFreqPcell":I
    const-string v12, "dl_info[0].DL_Mod0"

    invoke-virtual {v0, v6, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 1170
    .end local v42    # "dlMod0Pcell":I
    .local v12, "dlMod0Pcell":I
    move/from16 v42, v13

    .end local v13    # "rsrp_l_ant":I
    .local v42, "rsrp_l_ant":I
    const/16 v13, 0xff

    if-ne v12, v13, :cond_96

    .line 1171
    move/from16 v13, v95

    goto :goto_76

    :cond_96
    move v13, v12

    .line 1173
    .end local v95    # "oldDlMod0Pcell":I
    .local v13, "oldDlMod0Pcell":I
    :goto_76
    move/from16 v18, v12

    .end local v12    # "dlMod0Pcell":I
    .local v18, "dlMod0Pcell":I
    const-string v12, "dl_info[0].DL_Mod1"

    invoke-virtual {v0, v6, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 1174
    .end local v44    # "dlMod1Pcell":I
    .local v12, "dlMod1Pcell":I
    move/from16 v44, v14

    .end local v14    # "rsrp_u_ant":I
    .local v44, "rsrp_u_ant":I
    const/16 v14, 0xff

    if-ne v12, v14, :cond_97

    .line 1175
    move/from16 v14, v92

    goto :goto_77

    :cond_97
    move v14, v12

    .line 1177
    .end local v92    # "oldDlMod1Pcell":I
    .local v14, "oldDlMod1Pcell":I
    :goto_77
    move/from16 v23, v12

    .end local v12    # "dlMod1Pcell":I
    .local v23, "dlMod1Pcell":I
    const-string v12, "ul_info[0].UL_Mod"

    invoke-virtual {v0, v6, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 1178
    .end local v50    # "ulPcell":I
    .local v12, "ulPcell":I
    move/from16 v92, v15

    .end local v15    # "tx_pwr":I
    .local v92, "tx_pwr":I
    const/16 v15, 0xff

    if-ne v12, v15, :cond_98

    .line 1179
    move/from16 v15, v52

    goto :goto_78

    :cond_98
    move v15, v12

    .line 1181
    .end local v52    # "oldUlPcell":I
    .local v15, "oldUlPcell":I
    :goto_78
    const/16 v24, 0x0

    move/from16 v35, v12

    move/from16 v12, v24

    .local v12, "i":I
    .local v35, "ulPcell":I
    :goto_79
    move-object/from16 v95, v9

    const/4 v9, 0x3

    .end local v9    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v95, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    if-ge v12, v9, :cond_9d

    .line 1182
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v24, v15

    .end local v15    # "oldUlPcell":I
    .local v24, "oldUlPcell":I
    add-int/lit8 v15, v12, 0x1

    invoke-virtual {v9, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-object/from16 v15, v99

    invoke-virtual {v9, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v37, v14

    .end local v14    # "oldDlMod1Pcell":I
    .local v37, "oldDlMod1Pcell":I
    const-string v14, "dl_bw"

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v6, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    aput v9, v43, v12

    .line 1184
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v14, v12, 0x1

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "ul_bw"

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v6, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    aput v9, v34, v12

    .line 1186
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v14, v12, 0x1

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "tm"

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v6, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    aput v9, v30, v12

    .line 1188
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v14, v12, 0x1

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v14, "].dlFreq"

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v6, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    aput v9, v36, v12

    .line 1189
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v14, v12, 0x1

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v14, "].ulFreq"

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v6, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    aput v9, v38, v12

    .line 1190
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v14, "dl_info["

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v14, v12, 0x1

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v14, "].DL_Mod0"

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v6, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    aput v9, v45, v12

    .line 1192
    aget v9, v45, v12

    const/16 v14, 0xff

    if-ne v9, v14, :cond_99

    .line 1193
    aget v9, v47, v12

    goto :goto_7a

    :cond_99
    aget v9, v45, v12

    :goto_7a
    aput v9, v47, v12

    .line 1194
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v14, "dl_info["

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v14, v12, 0x1

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v14, "].DL_Mod1"

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v6, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    aput v9, v49, v12

    .line 1196
    aget v9, v49, v12

    const/16 v14, 0xff

    if-ne v9, v14, :cond_9a

    .line 1197
    aget v9, v51, v12

    goto :goto_7b

    :cond_9a
    aget v9, v49, v12

    :goto_7b
    aput v9, v51, v12

    .line 1198
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v14, "ul_info["

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v14, v12, 0x1

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v14, "].UL_Mod"

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v6, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    aput v9, v53, v12

    .line 1200
    aget v9, v53, v12

    const/16 v14, 0xff

    if-ne v9, v14, :cond_9b

    .line 1201
    aget v9, v55, v12

    goto :goto_7c

    :cond_9b
    aget v9, v53, v12

    :goto_7c
    aput v9, v55, v12

    .line 1202
    aget v9, v70, v12

    if-nez v9, :cond_9c

    .line 1203
    aput v82, v47, v12

    .line 1204
    aput v82, v51, v12

    .line 1205
    aput v82, v55, v12

    .line 1181
    :cond_9c
    add-int/lit8 v12, v12, 0x1

    move-object/from16 v99, v15

    move/from16 v15, v24

    move/from16 v14, v37

    move-object/from16 v9, v95

    goto/16 :goto_79

    .end local v24    # "oldUlPcell":I
    .end local v37    # "oldDlMod1Pcell":I
    .restart local v14    # "oldDlMod1Pcell":I
    .restart local v15    # "oldUlPcell":I
    :cond_9d
    move/from16 v37, v14

    move/from16 v24, v15

    move-object/from16 v15, v99

    .line 1209
    .end local v12    # "i":I
    .end local v14    # "oldDlMod1Pcell":I
    .end local v15    # "oldUlPcell":I
    .restart local v24    # "oldUlPcell":I
    .restart local v37    # "oldDlMod1Pcell":I
    const/4 v9, 0x0

    .local v9, "i":I
    :goto_7d
    const/4 v12, 0x4

    if-ge v9, v12, :cond_9e

    .line 1210
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    const-string v14, "dl_info["

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    .line 1211
    .local v12, "coNamedl":Ljava/lang/String;
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v99, v7

    .end local v7    # "coName1":Ljava/lang/String;
    .local v99, "coName1":Ljava/lang/String;
    const-string v7, "ul_info["

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    .line 1212
    .local v7, "coNameul":Ljava/lang/String;
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v48, v13

    .end local v13    # "oldDlMod0Pcell":I
    .local v48, "oldDlMod0Pcell":I
    const-string v13, "cell_info["

    invoke-virtual {v14, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    .line 1214
    .local v13, "coNamecell":Ljava/lang/String;
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v50, v13

    .end local v13    # "coNamecell":Ljava/lang/String;
    .local v50, "coNamecell":Ljava/lang/String;
    const-string v13, "ant_port"

    invoke-virtual {v14, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    const/4 v14, 0x1

    invoke-virtual {v0, v6, v13, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v13

    aput v13, v56, v9

    .line 1216
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "DL_Tput"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v6, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    aput v13, v57, v9

    .line 1218
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "UL_Tput"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v6, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    aput v13, v58, v9

    .line 1220
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "DL_Imcs"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    const/4 v14, 0x1

    invoke-virtual {v0, v6, v13, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v13

    aput v13, v59, v9

    .line 1222
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "UL_Imcs"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    const/4 v14, 0x1

    invoke-virtual {v0, v6, v13, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v13

    aput v13, v60, v9

    .line 1224
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "DL_bler"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    const/4 v14, 0x1

    invoke-virtual {v0, v6, v13, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v13

    aput v13, v61, v9

    .line 1226
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "UL_bler"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    const/4 v14, 0x1

    invoke-virtual {v0, v6, v13, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v13

    aput v13, v62, v9

    .line 1228
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "DL_rb"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    const/4 v14, 0x1

    invoke-virtual {v0, v6, v13, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v13

    aput v13, v63, v9

    .line 1230
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "UL_rb"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    const/4 v14, 0x1

    invoke-virtual {v0, v6, v13, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v13

    aput v13, v64, v9

    .line 1232
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "cqi_cw0"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    const/4 v14, 0x1

    invoke-virtual {v0, v6, v13, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v13

    aput v13, v65, v9

    .line 1234
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "cqi_cw1"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    const/4 v14, 0x1

    invoke-virtual {v0, v6, v13, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v13

    aput v13, v66, v9

    .line 1236
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "ri"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v6, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    aput v13, v68, v9

    .line 1209
    .end local v7    # "coNameul":Ljava/lang/String;
    .end local v12    # "coNamedl":Ljava/lang/String;
    .end local v50    # "coNamecell":Ljava/lang/String;
    add-int/lit8 v9, v9, 0x1

    move/from16 v13, v48

    move-object/from16 v7, v99

    goto/16 :goto_7d

    .end local v48    # "oldDlMod0Pcell":I
    .end local v99    # "coName1":Ljava/lang/String;
    .local v7, "coName1":Ljava/lang/String;
    .local v13, "oldDlMod0Pcell":I
    :cond_9e
    move-object/from16 v99, v7

    move/from16 v48, v13

    .line 1240
    .end local v7    # "coName1":Ljava/lang/String;
    .end local v9    # "i":I
    .end local v13    # "oldDlMod0Pcell":I
    .restart local v48    # "oldDlMod0Pcell":I
    .restart local v99    # "coName1":Ljava/lang/String;
    const/4 v7, 0x5

    new-array v9, v7, [Ljava/lang/String;

    const-string v7, "Band"

    aput-object v7, v9, v82

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v12, v29

    .end local v29    # "bandPcell":I
    .local v12, "bandPcell":I
    invoke-virtual {v7, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v13, 0x1

    aput-object v7, v9, v13

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    aget v14, v70, v82

    invoke-virtual {v7, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v14, 0x2

    aput-object v7, v9, v14

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    aget v15, v70, v13

    invoke-virtual {v7, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v13, 0x3

    aput-object v7, v9, v13

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    aget v13, v70, v14

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v13, 0x4

    aput-object v7, v9, v13

    invoke-virtual {v0, v3, v2, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1247
    const/4 v7, 0x5

    new-array v9, v7, [Ljava/lang/String;

    const-string v7, "DL BW(MHz)"

    aput-object v7, v9, v82

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingBW:Ljava/util/HashMap;

    .line 1248
    invoke-direct {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v7

    const/4 v13, 0x1

    aput-object v7, v9, v13

    aget v7, v43, v82

    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingBW:Ljava/util/HashMap;

    .line 1249
    invoke-direct {v0, v7, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v7

    const/4 v14, 0x2

    aput-object v7, v9, v14

    aget v7, v43, v13

    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingBW:Ljava/util/HashMap;

    .line 1250
    invoke-direct {v0, v7, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v7

    const/4 v13, 0x3

    aput-object v7, v9, v13

    aget v7, v43, v14

    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingBW:Ljava/util/HashMap;

    .line 1251
    invoke-direct {v0, v7, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v7

    const/4 v13, 0x4

    aput-object v7, v9, v13

    .line 1247
    invoke-virtual {v0, v3, v2, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1253
    const/4 v7, 0x5

    new-array v9, v7, [Ljava/lang/String;

    const-string v7, "UL BW(MHz)"

    aput-object v7, v9, v82

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingBW:Ljava/util/HashMap;

    .line 1254
    invoke-direct {v0, v4, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v7

    const/4 v13, 0x1

    aput-object v7, v9, v13

    aget v7, v34, v82

    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingBW:Ljava/util/HashMap;

    .line 1255
    invoke-direct {v0, v7, v14}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v7

    const/4 v14, 0x2

    aput-object v7, v9, v14

    aget v7, v34, v13

    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingBW:Ljava/util/HashMap;

    .line 1256
    invoke-direct {v0, v7, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v7

    const/4 v13, 0x3

    aput-object v7, v9, v13

    aget v7, v34, v14

    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mMappingBW:Ljava/util/HashMap;

    .line 1257
    invoke-direct {v0, v7, v13}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v7

    const/4 v13, 0x4

    aput-object v7, v9, v13

    .line 1253
    invoke-virtual {v0, v3, v2, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1259
    const/4 v7, 0x5

    new-array v9, v7, [Ljava/lang/String;

    const-string v7, "TM"

    aput-object v7, v9, v82

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v13, 0x1

    aput-object v7, v9, v13

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    aget v14, v30, v82

    invoke-virtual {v7, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v14, 0x2

    aput-object v7, v9, v14

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    aget v15, v30, v13

    invoke-virtual {v7, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v13, 0x3

    aput-object v7, v9, v13

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    aget v13, v30, v14

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v13, 0x4

    aput-object v7, v9, v13

    invoke-virtual {v0, v3, v2, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1263
    const/4 v7, 0x5

    new-array v9, v7, [Ljava/lang/String;

    aput-object v98, v9, v82

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v13, v31

    .end local v31    # "pciPcell":I
    .local v13, "pciPcell":I
    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v14, 0x1

    aput-object v7, v9, v14

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    aget v15, v74, v82

    invoke-virtual {v7, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v15, 0x2

    aput-object v7, v9, v15

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    aget v15, v74, v14

    invoke-virtual {v7, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v14, 0x3

    aput-object v7, v9, v14

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v14, 0x2

    aget v15, v74, v14

    invoke-virtual {v7, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v14, 0x4

    aput-object v7, v9, v14

    invoke-virtual {v0, v3, v2, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1270
    const/4 v7, 0x5

    new-array v9, v7, [Ljava/lang/String;

    aput-object v93, v9, v82

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    move-wide/from16 v14, v27

    .end local v27    # "earfcnPcell":J
    .local v14, "earfcnPcell":J
    invoke-virtual {v7, v14, v15}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/16 v27, 0x1

    aput-object v7, v9, v27

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    .end local v12    # "bandPcell":I
    .end local v13    # "pciPcell":I
    .restart local v29    # "bandPcell":I
    .restart local v31    # "pciPcell":I
    aget-wide v12, v81, v82

    invoke-virtual {v7, v12, v13}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v12, 0x2

    aput-object v7, v9, v12

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    aget-wide v12, v81, v27

    invoke-virtual {v7, v12, v13}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v12, 0x3

    aput-object v7, v9, v12

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    move-wide/from16 v27, v14

    const/4 v12, 0x2

    .end local v14    # "earfcnPcell":J
    .restart local v27    # "earfcnPcell":J
    aget-wide v13, v81, v12

    invoke-virtual {v7, v13, v14}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v12, 0x4

    aput-object v7, v9, v12

    invoke-virtual {v0, v3, v2, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1277
    const/4 v7, 0x5

    new-array v9, v7, [Ljava/lang/String;

    const-string v7, "RS_SNR"

    aput-object v7, v9, v82

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v12, v33

    .end local v33    # "snrPcell":I
    .local v12, "snrPcell":I
    int-to-float v13, v12

    div-float v13, v13, v78

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v13, 0x1

    aput-object v7, v9, v13

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    aget v13, v71, v82

    int-to-float v13, v13

    div-float v13, v13, v78

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v13, 0x2

    aput-object v7, v9, v13

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v13, 0x1

    aget v14, v71, v13

    int-to-float v13, v14

    div-float v13, v13, v78

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v13, 0x3

    aput-object v7, v9, v13

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v13, 0x2

    aget v14, v71, v13

    int-to-float v13, v14

    div-float v13, v13, v78

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v13, 0x4

    aput-object v7, v9, v13

    invoke-virtual {v0, v3, v2, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1285
    const/4 v7, 0x5

    new-array v9, v7, [Ljava/lang/String;

    const-string v7, "DL Freq"

    aput-object v7, v9, v82

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v13, 0x1

    aput-object v7, v9, v13

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    aget v14, v36, v82

    invoke-virtual {v7, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v14, 0x2

    aput-object v7, v9, v14

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    aget v15, v36, v13

    invoke-virtual {v7, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v13, 0x3

    aput-object v7, v9, v13

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    aget v13, v36, v14

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v13, 0x4

    aput-object v7, v9, v13

    invoke-virtual {v0, v3, v2, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1291
    const/4 v7, 0x5

    new-array v9, v7, [Ljava/lang/String;

    const-string v7, "UL Freq"

    aput-object v7, v9, v82

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v13, 0x1

    aput-object v7, v9, v13

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    aget v14, v38, v82

    invoke-virtual {v7, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v14, 0x2

    aput-object v7, v9, v14

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    aget v15, v38, v13

    invoke-virtual {v7, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v13, 0x3

    aput-object v7, v9, v13

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    aget v13, v38, v14

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v13, 0x4

    aput-object v7, v9, v13

    invoke-virtual {v0, v3, v2, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1298
    const/4 v7, 0x5

    new-array v9, v7, [Ljava/lang/String;

    aput-object v91, v9, v82

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v13, v39

    .end local v39    # "rsrpPcell":I
    .local v13, "rsrpPcell":I
    int-to-float v14, v13

    div-float v14, v14, v78

    invoke-virtual {v7, v14}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v14, 0x1

    aput-object v7, v9, v14

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    aget v14, v73, v82

    int-to-float v14, v14

    div-float v14, v14, v78

    invoke-virtual {v7, v14}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v14, 0x2

    aput-object v7, v9, v14

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v14, 0x1

    aget v15, v73, v14

    int-to-float v14, v15

    div-float v14, v14, v78

    invoke-virtual {v7, v14}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v14, 0x3

    aput-object v7, v9, v14

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v14, 0x2

    aget v15, v73, v14

    int-to-float v14, v15

    div-float v14, v14, v78

    invoke-virtual {v7, v14}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v14, 0x4

    aput-object v7, v9, v14

    invoke-virtual {v0, v3, v2, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1305
    const/4 v7, 0x5

    new-array v9, v7, [Ljava/lang/String;

    aput-object v79, v9, v82

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v14, v41

    .end local v41    # "rsrqPcell":I
    .local v14, "rsrqPcell":I
    int-to-float v15, v14

    div-float v15, v15, v78

    invoke-virtual {v7, v15}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v15, 0x1

    aput-object v7, v9, v15

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    aget v15, v72, v82

    int-to-float v15, v15

    div-float v15, v15, v78

    invoke-virtual {v7, v15}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v15, 0x2

    aput-object v7, v9, v15

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v33, v1

    const/4 v15, 0x1

    .end local v1    # "dlBandwidthPcell":I
    .local v33, "dlBandwidthPcell":I
    aget v1, v72, v15

    int-to-float v1, v1

    div-float v1, v1, v78

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v7, 0x3

    aput-object v1, v9, v7

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v7, 0x2

    aget v15, v72, v7

    int-to-float v7, v15

    div-float v7, v7, v78

    invoke-virtual {v1, v7}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v7, 0x4

    aput-object v1, v9, v7

    invoke-virtual {v0, v3, v2, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1312
    const/4 v1, 0x5

    new-array v7, v1, [Ljava/lang/String;

    const-string v1, "DL Mod TB1"

    aput-object v1, v7, v82

    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLteMappingQam:Ljava/util/HashMap;

    .line 1313
    move/from16 v9, v48

    .end local v48    # "oldDlMod0Pcell":I
    .local v9, "oldDlMod0Pcell":I
    invoke-direct {v0, v9, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v1

    const/4 v10, 0x1

    aput-object v1, v7, v10

    aget v1, v47, v82

    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLteMappingQam:Ljava/util/HashMap;

    .line 1314
    invoke-direct {v0, v1, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v1

    const/4 v15, 0x2

    aput-object v1, v7, v15

    aget v1, v47, v10

    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLteMappingQam:Ljava/util/HashMap;

    .line 1315
    invoke-direct {v0, v1, v10}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v1

    const/4 v10, 0x3

    aput-object v1, v7, v10

    aget v1, v47, v15

    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLteMappingQam:Ljava/util/HashMap;

    .line 1316
    invoke-direct {v0, v1, v10}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v1

    const/4 v10, 0x4

    aput-object v1, v7, v10

    .line 1312
    invoke-virtual {v0, v3, v2, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1319
    const/4 v1, 0x5

    new-array v7, v1, [Ljava/lang/String;

    const-string v1, "DL Mod TB2"

    aput-object v1, v7, v82

    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLteMappingQam:Ljava/util/HashMap;

    .line 1320
    move/from16 v10, v37

    .end local v37    # "oldDlMod1Pcell":I
    .restart local v10    # "oldDlMod1Pcell":I
    invoke-direct {v0, v10, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v1

    const/4 v15, 0x1

    aput-object v1, v7, v15

    aget v1, v51, v82

    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLteMappingQam:Ljava/util/HashMap;

    .line 1321
    invoke-direct {v0, v1, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v1

    const/4 v15, 0x2

    aput-object v1, v7, v15

    const/4 v1, 0x1

    aget v15, v51, v1

    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLteMappingQam:Ljava/util/HashMap;

    .line 1322
    invoke-direct {v0, v15, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v1

    const/4 v15, 0x3

    aput-object v1, v7, v15

    const/4 v1, 0x2

    aget v15, v51, v1

    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLteMappingQam:Ljava/util/HashMap;

    .line 1323
    invoke-direct {v0, v15, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v1

    const/4 v15, 0x4

    aput-object v1, v7, v15

    .line 1319
    invoke-virtual {v0, v3, v2, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1326
    const/4 v1, 0x5

    new-array v1, v1, [Ljava/lang/String;

    const-string v7, "UL Mod"

    aput-object v7, v1, v82

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLteMappingQam:Ljava/util/HashMap;

    .line 1327
    move/from16 v15, v24

    .end local v24    # "oldUlPcell":I
    .restart local v15    # "oldUlPcell":I
    invoke-direct {v0, v15, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v7

    const/16 v24, 0x1

    aput-object v7, v1, v24

    aget v7, v55, v82

    move/from16 v39, v4

    .end local v4    # "ulBandwidthPcell":I
    .local v39, "ulBandwidthPcell":I
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLteMappingQam:Ljava/util/HashMap;

    .line 1328
    invoke-direct {v0, v7, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v4

    const/4 v7, 0x2

    aput-object v4, v1, v7

    aget v4, v55, v24

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLteMappingQam:Ljava/util/HashMap;

    .line 1329
    invoke-direct {v0, v4, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v4

    const/4 v7, 0x3

    aput-object v4, v1, v7

    const/4 v4, 0x2

    aget v4, v55, v4

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLteMappingQam:Ljava/util/HashMap;

    .line 1330
    invoke-direct {v0, v4, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getValueFromMapping(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v4

    const/4 v7, 0x4

    aput-object v4, v1, v7

    .line 1326
    invoke-virtual {v0, v3, v2, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->addHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;)V

    .line 1331
    move-object v4, v3

    move/from16 v37, v5

    move-object/from16 v90, v6

    move/from16 v32, v8

    move/from16 v48, v10

    move/from16 v52, v15

    move/from16 v24, v20

    move-object/from16 v6, v21

    move/from16 v46, v23

    move-wide/from16 v7, v27

    move/from16 v50, v35

    move/from16 v15, v39

    move/from16 v10, v44

    move-object/from16 v1, v95

    move v14, v9

    move/from16 v35, v11

    move/from16 v39, v13

    move/from16 v11, v29

    move/from16 v13, v33

    move/from16 v9, v42

    move/from16 v33, v12

    move/from16 v42, v18

    move/from16 v12, v92

    move-object/from16 v18, v99

    goto/16 :goto_86

    .line 1035
    .end local v6    # "data":Lcom/mediatek/mdml/Msg;
    .end local v8    # "tmPcell":I
    .end local v9    # "oldDlMod0Pcell":I
    .end local v10    # "oldDlMod1Pcell":I
    .end local v11    # "dlFreqPcell":I
    .end local v12    # "snrPcell":I
    .end local v13    # "rsrpPcell":I
    .end local v14    # "rsrqPcell":I
    .end local v15    # "oldUlPcell":I
    .end local v75    # "sinr":I
    .end local v76    # "rsrq":I
    .end local v83    # "dl_cc_count":I
    .end local v86    # "iRssi1":I
    .end local v87    # "ri":I
    .end local v88    # "emType":I
    .end local v89    # "tm":I
    .end local v90    # "ul_cc_count":I
    .end local v92    # "tx_pwr":I
    .end local v94    # "dl_imcs":I
    .end local v95    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v96    # "ant_port":I
    .end local v97    # "rssi_num":I
    .end local v99    # "coName1":Ljava/lang/String;
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .local v5, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v17, "label":Ljava/lang/String;
    .local v18, "coName1":Ljava/lang/String;
    .local v20, "rsrp_l_ant":I
    .local v21, "rsrp_u_ant":I
    .local v23, "tx_pwr":I
    .local v24, "tasidx":I
    .local v32, "tmPcell":I
    .local v33, "snrPcell":I
    .local v35, "dlFreqPcell":I
    .local v37, "ulFreqPcell":I
    .local v39, "rsrpPcell":I
    .local v40, "ulBandwidthPcell":I
    .restart local v41    # "rsrqPcell":I
    .local v42, "dlMod0Pcell":I
    .local v44, "oldDlMod0Pcell":I
    .local v46, "dlMod1Pcell":I
    .local v48, "oldDlMod1Pcell":I
    .local v50, "ulPcell":I
    .restart local v52    # "oldUlPcell":I
    .restart local v69    # "dlBandwidthPcell":I
    .local v85, "coName":Ljava/lang/String;
    :pswitch_27
    move v2, v1

    move/from16 v88, v4

    move-object/from16 v95, v5

    move-object v10, v6

    move-object/from16 v93, v7

    move-object v7, v13

    move-object/from16 v98, v15

    move/from16 v77, v32

    move/from16 v12, v33

    move/from16 v13, v39

    move/from16 v14, v41

    move/from16 v32, v48

    move-object v6, v3

    move/from16 v48, v40

    move/from16 v100, v37

    move/from16 v37, v35

    move/from16 v35, v100

    .end local v3    # "data":Lcom/mediatek/mdml/Msg;
    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v33    # "snrPcell":I
    .end local v39    # "rsrpPcell":I
    .end local v40    # "ulBandwidthPcell":I
    .end local v41    # "rsrqPcell":I
    .restart local v6    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v12    # "snrPcell":I
    .restart local v13    # "rsrpPcell":I
    .restart local v14    # "rsrqPcell":I
    .local v32, "oldDlMod1Pcell":I
    .local v35, "ulFreqPcell":I
    .local v37, "dlFreqPcell":I
    .local v48, "ulBandwidthPcell":I
    .restart local v77    # "tmPcell":I
    .restart local v88    # "emType":I
    .restart local v95    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    aget-object v4, p1, v82

    .line 1036
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    move-object/from16 v1, v95

    .end local v95    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v1, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    invoke-virtual {v1, v4, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1037
    const-string v3, "serv_inf.dl_earfcn"

    invoke-virtual {v0, v6, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 1038
    .local v3, "earfcn":I
    const-string v5, "serv_inf.pci"

    invoke-virtual {v0, v6, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 1039
    .local v5, "pci":I
    const-string v7, "serv_inf.band"

    invoke-virtual {v0, v6, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 1040
    .local v7, "band":I
    const-string v8, "serv_inf.cell_id"

    invoke-virtual {v0, v6, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 1041
    .local v8, "cellId":I
    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    const-string v11, "Cell ID"

    invoke-virtual {v0, v4, v2, v11, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1042
    const/4 v9, -0x1

    if-ne v3, v9, :cond_9f

    move-object v11, v10

    goto :goto_7e

    :cond_9f
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    :goto_7e
    move-object/from16 v15, v93

    invoke-virtual {v0, v4, v2, v15, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1043
    if-ne v3, v9, :cond_a0

    move-object v9, v10

    goto :goto_7f

    :cond_a0
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    :goto_7f
    move-object/from16 v11, v98

    invoke-virtual {v0, v4, v2, v11, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1044
    const v9, 0xffff

    if-ne v7, v9, :cond_a1

    move-object v9, v10

    goto :goto_80

    :cond_a1
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "Band"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    :goto_80
    const-string v10, "Band"

    invoke-virtual {v0, v4, v2, v10, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1045
    move-object/from16 v90, v6

    move/from16 v33, v12

    move/from16 v39, v13

    move/from16 v41, v14

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v14, v44

    move/from16 v15, v48

    move/from16 v13, v69

    move-object/from16 v6, v85

    move/from16 v48, v32

    move/from16 v32, v77

    move/from16 v100, v37

    move/from16 v37, v35

    move/from16 v35, v100

    goto/16 :goto_86

    .line 1002
    .end local v1    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v6    # "data":Lcom/mediatek/mdml/Msg;
    .end local v7    # "band":I
    .end local v8    # "cellId":I
    .end local v12    # "snrPcell":I
    .end local v13    # "rsrpPcell":I
    .end local v14    # "rsrqPcell":I
    .end local v77    # "tmPcell":I
    .end local v88    # "emType":I
    .local v3, "data":Lcom/mediatek/mdml/Msg;
    .local v4, "emType":I
    .local v5, "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .restart local v17    # "label":Ljava/lang/String;
    .local v32, "tmPcell":I
    .restart local v33    # "snrPcell":I
    .local v35, "dlFreqPcell":I
    .local v37, "ulFreqPcell":I
    .restart local v39    # "rsrpPcell":I
    .restart local v40    # "ulBandwidthPcell":I
    .restart local v41    # "rsrqPcell":I
    .local v48, "oldDlMod1Pcell":I
    :pswitch_28
    move v2, v1

    move/from16 v88, v4

    move-object v1, v5

    move-object v10, v6

    move-object v7, v13

    move/from16 v77, v32

    move/from16 v12, v33

    move/from16 v13, v39

    move/from16 v14, v41

    move/from16 v32, v48

    move-object/from16 v11, v86

    move-object/from16 v5, v87

    move-object v6, v3

    move/from16 v3, v35

    move/from16 v35, v37

    move/from16 v48, v40

    .end local v4    # "emType":I
    .end local v5    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .end local v33    # "snrPcell":I
    .end local v37    # "ulFreqPcell":I
    .end local v39    # "rsrpPcell":I
    .end local v40    # "ulBandwidthPcell":I
    .end local v41    # "rsrqPcell":I
    .restart local v1    # "updateLabels":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;"
    .local v3, "dlFreqPcell":I
    .restart local v6    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v12    # "snrPcell":I
    .restart local v13    # "rsrpPcell":I
    .restart local v14    # "rsrqPcell":I
    .local v32, "oldDlMod1Pcell":I
    .local v35, "ulFreqPcell":I
    .local v48, "ulBandwidthPcell":I
    .restart local v77    # "tmPcell":I
    .restart local v88    # "emType":I
    aget-object v4, p1, v82

    .line 1003
    .end local v17    # "label":Ljava/lang/String;
    .local v4, "label":Ljava/lang/String;
    invoke-virtual {v1, v4, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1004
    const-string v7, "selectedPlmn."

    .line 1005
    .end local v85    # "coName":Ljava/lang/String;
    .local v7, "coName":Ljava/lang/String;
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v9, 0x1

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v6, v8}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 1007
    .local v8, "mcc1":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v15, 0x2

    invoke-virtual {v9, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v6, v9}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 1009
    .local v9, "mcc2":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v5, 0x3

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v6, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 1011
    .local v5, "mcc3":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v37, v3

    const/4 v3, 0x1

    .end local v3    # "dlFreqPcell":I
    .local v37, "dlFreqPcell":I
    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v6, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 1013
    .local v3, "mnc1":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v12, 0x2

    .end local v12    # "snrPcell":I
    .restart local v33    # "snrPcell":I
    invoke-virtual {v15, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v6, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 1015
    .local v12, "mnc2":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v11, 0x3

    invoke-virtual {v15, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v6, v11}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 1017
    .local v11, "mnc3":I
    const-string v15, "tac"

    invoke-virtual {v0, v6, v15}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v15

    .line 1019
    .local v15, "tac":I
    move-object/from16 v90, v6

    const/16 v6, 0xf

    .end local v6    # "data":Lcom/mediatek/mdml/Msg;
    .local v90, "data":Lcom/mediatek/mdml/Msg;
    if-ne v8, v6, :cond_a2

    if-ne v9, v6, :cond_a2

    if-ne v5, v6, :cond_a2

    if-ne v3, v6, :cond_a2

    if-ne v12, v6, :cond_a2

    if-ne v11, v6, :cond_a2

    .line 1021
    const-string v6, "PLMN"

    const-string v10, "-"

    invoke-virtual {v0, v4, v2, v6, v10}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    move/from16 v17, v3

    goto :goto_82

    .line 1023
    :cond_a2
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 1024
    move/from16 v17, v3

    const/16 v3, 0xf

    .end local v3    # "mnc1":I
    .local v17, "mnc1":I
    if-ne v11, v3, :cond_a3

    move-object v3, v10

    goto :goto_81

    :cond_a3
    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    :goto_81
    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 1023
    const-string v6, "PLMN"

    invoke-virtual {v0, v4, v2, v6, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1026
    :goto_82
    const v3, 0xfffe

    if-eq v15, v3, :cond_a5

    if-nez v15, :cond_a4

    goto :goto_83

    .line 1029
    :cond_a4
    invoke-static {v15}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    const-string v6, "TAC"

    invoke-virtual {v0, v4, v2, v6, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 1031
    goto :goto_84

    .line 1027
    :cond_a5
    :goto_83
    const-string v3, "TAC"

    const-string v6, "-"

    invoke-virtual {v0, v4, v2, v3, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 2600
    .end local v5    # "mcc3":I
    .end local v8    # "mcc1":I
    .end local v9    # "mcc2":I
    .end local v11    # "mnc3":I
    .end local v12    # "mnc2":I
    .end local v15    # "tac":I
    .end local v17    # "mnc1":I
    :goto_84
    move-object v6, v7

    move/from16 v39, v13

    move/from16 v41, v14

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v14, v44

    move/from16 v15, v48

    move/from16 v13, v69

    move/from16 v48, v32

    move/from16 v32, v77

    move/from16 v100, v37

    move/from16 v37, v35

    move/from16 v35, v100

    goto :goto_86

    .end local v4    # "label":Ljava/lang/String;
    .end local v7    # "coName":Ljava/lang/String;
    .local v17, "label":Ljava/lang/String;
    .restart local v85    # "coName":Ljava/lang/String;
    :goto_85
    move/from16 v39, v13

    move/from16 v41, v14

    move-object/from16 v4, v17

    move/from16 v9, v20

    move/from16 v10, v21

    move/from16 v12, v23

    move-wide/from16 v7, v27

    move/from16 v11, v29

    move/from16 v14, v44

    move/from16 v15, v48

    move/from16 v13, v69

    move-object/from16 v6, v85

    move/from16 v48, v32

    move/from16 v32, v77

    move/from16 v100, v37

    move/from16 v37, v35

    move/from16 v35, v100

    .end local v17    # "label":Ljava/lang/String;
    .end local v20    # "rsrp_l_ant":I
    .end local v21    # "rsrp_u_ant":I
    .end local v23    # "tx_pwr":I
    .end local v27    # "earfcnPcell":J
    .end local v29    # "bandPcell":I
    .end local v44    # "oldDlMod0Pcell":I
    .end local v69    # "dlBandwidthPcell":I
    .end local v77    # "tmPcell":I
    .end local v85    # "coName":Ljava/lang/String;
    .restart local v4    # "label":Ljava/lang/String;
    .local v6, "coName":Ljava/lang/String;
    .local v7, "earfcnPcell":J
    .local v9, "rsrp_l_ant":I
    .local v10, "rsrp_u_ant":I
    .local v11, "bandPcell":I
    .local v12, "tx_pwr":I
    .local v13, "dlBandwidthPcell":I
    .local v14, "oldDlMod0Pcell":I
    .local v15, "ulBandwidthPcell":I
    .local v32, "tmPcell":I
    .local v35, "dlFreqPcell":I
    .local v37, "ulFreqPcell":I
    .restart local v39    # "rsrpPcell":I
    .restart local v41    # "rsrqPcell":I
    .local v48, "oldDlMod1Pcell":I
    :goto_86
    return-object v1

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_28
        :pswitch_0
        :pswitch_27
        :pswitch_26
        :pswitch_25
        :pswitch_24
        :pswitch_23
        :pswitch_22
        :pswitch_21
        :pswitch_20
        :pswitch_1f
        :pswitch_1e
        :pswitch_1d
        :pswitch_1c
        :pswitch_1b
        :pswitch_1a
        :pswitch_19
        :pswitch_18
        :pswitch_17
        :pswitch_16
        :pswitch_15
        :pswitch_14
        :pswitch_13
        :pswitch_12
        :pswitch_11
        :pswitch_10
        :pswitch_f
        :pswitch_e
        :pswitch_d
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_0
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_6
        :pswitch_6
        :pswitch_6
        :pswitch_6
        :pswitch_6
        :pswitch_6
        :pswitch_6
        :pswitch_6
        :pswitch_6
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
    .end packed-switch
.end method

.method initHashMapValues()Ljava/util/ArrayList;
    .locals 38
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/util/LinkedHashMap;",
            ">;"
        }
    .end annotation

    .line 749
    move-object/from16 v0, p0

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 750
    .local v1, "valuesHashMap":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/util/LinkedHashMap;>;"
    const-string v2, "PLMN"

    const-string v3, "TAC"

    const-string v4, "Cell ID"

    const-string v5, "EARFCN"

    const-string v6, "PCI"

    const-string v7, "Band"

    const-string v8, "DL_BW"

    const-string v9, "RSRP"

    const-string v10, "RSRQ"

    const-string v11, "SINR"

    const-string v12, "RSSI"

    const-string v13, "ERRC State"

    const-string v14, "Antenna"

    const-string v15, "RI"

    const-string v16, "TM"

    const-string v17, "DL Imcs"

    const-string v18, "DL Mod TB1"

    const-string v19, "DL Mod TB2"

    const-string v20, "UL Imcs"

    const-string v21, "UL Mod"

    const-string v22, "UL speech codec"

    const-string v23, "DL speech codec"

    const-string v24, "Attach Type"

    const-string v25, "TAU Type"

    filled-new-array/range {v2 .. v25}, [Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 755
    const-string v2, "TAS Enable"

    const-string v3, "TX Antenna"

    const-string v4, "TX Power"

    const-string v5, "RSRP_LANT"

    const-string v6, "RSRP_UANT"

    filled-new-array {v2, v3, v4, v5, v6}, [Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v7

    invoke-virtual {v1, v7}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 757
    const-string v8, "EARFCN"

    const-string v9, "PCI"

    const-string v10, "Band"

    const-string v11, "RSRP"

    const-string v12, "RSRQ"

    const-string v13, "SINR"

    filled-new-array/range {v8 .. v13}, [Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v7

    invoke-virtual {v1, v7}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 759
    const-string v7, "LTE"

    const-string v8, "EARFCN"

    const-string v9, "PCI"

    const-string v10, "RSRP"

    const-string v11, "RSRQ"

    filled-new-array {v7, v8, v9, v10, v11}, [Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v12

    invoke-virtual {v1, v12}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 760
    const-string v12, "UMTS"

    const-string v13, "UARFCN"

    const-string v14, "PSC"

    const-string v15, "RSCP"

    move-object/from16 v16, v3

    const-string v3, "Ec/No"

    move-object/from16 v17, v4

    filled-new-array {v12, v13, v14, v15, v3}, [Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 761
    const-string v4, "GSM"

    move-object/from16 v18, v5

    const-string v5, "ARFCN"

    move-object/from16 v19, v6

    const-string v6, "BSIC"

    move-object/from16 v20, v3

    const-string v3, "RSSI"

    move-object/from16 v21, v12

    filled-new-array {v4, v5, v6, v3}, [Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v12

    invoke-virtual {v1, v12}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 762
    const-string v12, ""

    move-object/from16 v22, v3

    const-string v3, "Pcell"

    move-object/from16 v23, v4

    const-string v4, "Scell0"

    move-object/from16 v24, v5

    const-string v5, "Scell1"

    move-object/from16 v25, v6

    const-string v6, "Scell2"

    filled-new-array {v12, v3, v4, v5, v6}, [Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 763
    const-string v3, "Index"

    const-string v4, "APN"

    const-string v5, "Bearer ID"

    const-string v6, "Dedicated Bearer ID"

    const-string v12, "Dedicated Linked Bearer ID"

    filled-new-array {v3, v4, v5, v6, v12}, [Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 765
    const-string v26, "PLMN"

    const-string v27, "LAC"

    const-string v28, "Cell ID"

    const-string v29, "ARFCN"

    const-string v30, "BSIC"

    const-string v31, "band"

    const-string v32, "RLA"

    const-string v33, "RX quality sub"

    const-string v34, "RR state"

    const-string v35, "gmm state"

    const-string v36, "UL speech codec"

    const-string v37, "DL speech codec"

    filled-new-array/range {v26 .. v37}, [Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 768
    const-string v3, "Antenna Index"

    const-string v5, "Current Antenna Power"

    const-string v6, "Other Antenna Power"

    filled-new-array {v2, v3, v5, v6}, [Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 770
    filled-new-array {v7, v8, v9, v10, v11}, [Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 771
    move-object/from16 v3, v20

    move-object/from16 v5, v21

    filled-new-array {v5, v13, v14, v15, v3}, [Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v6

    invoke-virtual {v1, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 772
    move-object/from16 v21, v3

    move-object/from16 v20, v4

    move-object/from16 v3, v22

    move-object/from16 v4, v23

    move-object/from16 v12, v24

    move-object/from16 v6, v25

    move-object/from16 v22, v5

    filled-new-array {v4, v12, v6, v3}, [Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v5

    invoke-virtual {v1, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 773
    const-string v5, "Channel"

    const-string v4, "pilotPN"

    const-string v6, "band_class"

    const-string v12, "ecio"

    filled-new-array {v5, v4, v6, v3, v12}, [Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v6

    invoke-virtual {v1, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 775
    const-string v6, "band_class"

    const-string v12, "ecio"

    filled-new-array {v5, v4, v6, v3, v12}, [Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 777
    const-string v4, "tx_Ant"

    const-string v5, "rxPower_LANT"

    const-string v6, "rxPower_UANT"

    filled-new-array {v2, v4, v5, v6}, [Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 779
    const-string v26, "PLMN"

    const-string v27, "LAC"

    const-string v28, "Cell ID"

    const-string v29, "UARFCN"

    const-string v30, "PSC"

    const-string v31, "band"

    const-string v32, "RSCP"

    const-string v33, "RSSI"

    const-string v34, "RRC state"

    filled-new-array/range {v26 .. v34}, [Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 782
    move-object/from16 v12, v16

    move-object/from16 v6, v17

    move-object/from16 v5, v18

    move-object/from16 v4, v19

    filled-new-array {v2, v12, v6, v5, v4}, [Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 784
    filled-new-array {v7, v8, v9, v10, v11}, [Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 785
    move-object/from16 v2, v22

    filled-new-array {v2, v13, v14, v15}, [Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 786
    move-object/from16 v6, v23

    move-object/from16 v5, v24

    move-object/from16 v4, v25

    filled-new-array {v6, v5, v4, v3}, [Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v12

    invoke-virtual {v1, v12}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 787
    const-string v22, "PLMN"

    const-string v23, "LAC"

    const-string v24, "Cell ID"

    const-string v25, "UARFCN"

    const-string v26, "PSC"

    const-string v27, "band"

    const-string v28, "RSCP"

    const-string v29, "Ec/No"

    const-string v30, "RSSI"

    const-string v31, "RRC state"

    const-string v32, "RAC"

    const-string v33, "UL speech codec"

    const-string v34, "DL speech codec"

    const-string v35, "Attach Type"

    const-string v36, "Location Update Type"

    filled-new-array/range {v22 .. v36}, [Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v12}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v12

    invoke-virtual {v1, v12}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 791
    move-object/from16 v22, v3

    move-object/from16 v12, v21

    filled-new-array {v13, v14, v15, v12}, [Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 793
    const-string v23, "TAS Enable"

    const-string v24, "TX Antenna"

    const-string v25, "TX Power"

    const-string v26, "RSRP_LANT"

    const-string v27, "RSRP_UANT"

    const-string v28, "RSRP_UANT(\')"

    filled-new-array/range {v23 .. v28}, [Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 795
    const-string v3, "State"

    move-object/from16 v25, v4

    const-string v4, "P-carrier UARFCN"

    move-object/from16 v24, v5

    const-string v5, "P-carrier PSC"

    move-object/from16 v23, v6

    const-string v6, "S-carrier UARFCN"

    move-object/from16 v21, v2

    const-string v2, "S-carrier PSC"

    filled-new-array {v3, v4, v5, v6, v2}, [Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 797
    const-string v2, "NSAPI Index"

    const-string v3, "State"

    const-string v4, "Cid"

    const-string v5, "Linked Cid"

    move-object/from16 v6, v20

    filled-new-array {v2, v6, v3, v4, v5}, [Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 798
    filled-new-array {v7, v8, v9, v10, v11}, [Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 799
    move-object/from16 v2, v21

    filled-new-array {v2, v13, v14, v15, v12}, [Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 800
    move-object/from16 v5, v22

    move-object/from16 v4, v23

    move-object/from16 v3, v24

    move-object/from16 v2, v25

    filled-new-array {v4, v3, v2, v5}, [Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 801
    return-object v1
.end method

.method initImsiList(I)V
    .locals 6
    .param p1, "simID"    # I

    .line 604
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mActivity:Landroid/app/Activity;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mActivity:Landroid/app/Activity;

    .line 605
    const-string v1, "phone"

    invoke-virtual {v0, v1}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/telephony/TelephonyManager;

    .line 606
    .local v0, "telephonyManager":Landroid/telephony/TelephonyManager;
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->isValidSimID(I)Z

    move-result v1

    const-string v2, ""

    if-eqz v1, :cond_3

    .line 607
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->imsi:[Ljava/lang/String;

    array-length v1, v1

    if-lt p1, v1, :cond_0

    .line 608
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->imsi:[Ljava/lang/String;

    .line 609
    .local v1, "oldImsi":[Ljava/lang/String;
    new-array v3, p1, [Ljava/lang/String;

    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->imsi:[Ljava/lang/String;

    .line 610
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->imsi:[Ljava/lang/String;

    array-length v4, v1

    const/4 v5, 0x0

    invoke-static {v1, v5, v3, v5, v4}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 612
    .end local v1    # "oldImsi":[Ljava/lang/String;
    :cond_0
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->isSimCardAbsent(I)Z

    move-result v1

    if-nez v1, :cond_1

    .line 613
    invoke-virtual {v0, p1}, Landroid/telephony/TelephonyManager;->getSubscriberId(I)Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_1
    move-object v1, v2

    .line 614
    .local v1, "mImsi":Ljava/lang/String;
    :goto_0
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->imsi:[Ljava/lang/String;

    if-eqz v1, :cond_2

    move-object v2, v1

    :cond_2
    aput-object v2, v3, p1

    .line 615
    .end local v1    # "mImsi":Ljava/lang/String;
    goto :goto_4

    .line 616
    :cond_3
    const/4 v1, 0x0

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->imsi:[Ljava/lang/String;

    .line 617
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getSupportSimCount()I

    move-result v1

    new-array v1, v1, [Ljava/lang/String;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->imsi:[Ljava/lang/String;

    .line 618
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_1
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getSupportSimCount()I

    move-result v3

    if-ge v1, v3, :cond_6

    .line 619
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->isSimCardAbsent(I)Z

    move-result v3

    if-nez v3, :cond_4

    .line 620
    invoke-virtual {v0, v1}, Landroid/telephony/TelephonyManager;->getSubscriberId(I)Ljava/lang/String;

    move-result-object v3

    goto :goto_2

    :cond_4
    move-object v3, v2

    .line 621
    .local v3, "mImsi":Ljava/lang/String;
    :goto_2
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->imsi:[Ljava/lang/String;

    if-eqz v3, :cond_5

    move-object v5, v3

    goto :goto_3

    :cond_5
    move-object v5, v2

    :goto_3
    aput-object v5, v4, v1

    .line 618
    .end local v3    # "mImsi":Ljava/lang/String;
    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    .line 624
    .end local v1    # "i":I
    :cond_6
    :goto_4
    return-void
.end method

.method initLabels()[Ljava/lang/String;
    .locals 29

    .line 734
    const-string v0, "LTE-Pcell"

    const-string v1, "LTE-Tas Info"

    const-string v2, "LTE-Scell"

    const-string v3, "LTE-Neighbor Cell"

    const-string v4, "LTE-Neighbor Cell.1"

    const-string v5, "LTE-Neighbor Cell.2"

    const-string v6, "LTE-Pcell and Scell basic info"

    const-string v7, "LTE-PDP Context Information"

    const-string v8, "GSM-Serving Cell"

    const-string v9, "GSM-Tas Info"

    const-string v10, "GSM-Neighbor Cell"

    const-string v11, "GSM-Neighbor Cell.1"

    const-string v12, "GSM-Neighbor Cell.2"

    const-string v13, "EVDO-Basic Info"

    const-string v14, "1xRTT-Basic Info"

    const-string v15, "1xRTT-Tas Info"

    const-string v16, "UMTS TDD-Serving cell"

    const-string v17, "UMTS TDD-Tas Info"

    const-string v18, "UMTS TDD-Neighbor Cell"

    const-string v19, "UMTS TDD-Neighbor Cell.1"

    const-string v20, "UMTS TDD-Neighbor Cell.2"

    const-string v21, "UMTS FDD-Serving cell"

    const-string v22, "UMTS FDD-Active Set"

    const-string v23, "UMTS FDD-Tas Info"

    const-string v24, "UMTS FDD-DC Info"

    const-string v25, "UMTS FDD-PDN Context List"

    const-string v26, "UMTS FDD-Neighbor Cell"

    const-string v27, "UMTS FDD-Neighbor Cell.1"

    const-string v28, "UMTS FDD-Neighbor Cell.2"

    filled-new-array/range {v0 .. v28}, [Ljava/lang/String;

    move-result-object v0

    .line 744
    .local v0, "labelKeys":[Ljava/lang/String;
    return-object v0
.end method

.method public initLocation()V
    .locals 10

    .line 680
    const-string v0, "network"

    const-string v1, "gps"

    const-string v2, "EmInfo/MDMComponent"

    const/4 v3, 0x0

    :try_start_0
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mContext:Landroid/app/Activity;

    const-string v5, "location"

    invoke-virtual {v4, v5}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/location/LocationManager;

    iput-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->locationManager:Landroid/location/LocationManager;

    .line 681
    if-eqz v4, :cond_3

    .line 682
    invoke-virtual {v4, v1}, Landroid/location/LocationManager;->isProviderEnabled(Ljava/lang/String;)Z

    move-result v4
    :try_end_0
    .catch Ljava/lang/SecurityException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/IllegalArgumentException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v5, ":"

    if-eqz v4, :cond_0

    .line 683
    :try_start_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->locationManager:Landroid/location/LocationManager;

    .line 684
    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->getLastKnownLocation(Ljava/lang/String;)Landroid/location/Location;

    move-result-object v0

    .line 685
    .local v0, "mLocation":Landroid/location/Location;
    if-eqz v0, :cond_2

    .line 686
    invoke-virtual {v0}, Landroid/location/Location;->getLatitude()D

    move-result-wide v6

    .line 687
    .local v6, "latitude":D
    invoke-virtual {v0}, Landroid/location/Location;->getLongitude()D

    move-result-wide v8

    .line 688
    .local v8, "longitude":D
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v6, v7}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v8, v9}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->location:Ljava/lang/String;

    goto :goto_0

    .line 690
    .end local v0    # "mLocation":Landroid/location/Location;
    .end local v6    # "latitude":D
    .end local v8    # "longitude":D
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->locationManager:Landroid/location/LocationManager;

    invoke-virtual {v1, v0}, Landroid/location/LocationManager;->isProviderEnabled(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 691
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->locationManager:Landroid/location/LocationManager;

    .line 692
    invoke-virtual {v1, v0}, Landroid/location/LocationManager;->getLastKnownLocation(Ljava/lang/String;)Landroid/location/Location;

    move-result-object v0

    .line 693
    .restart local v0    # "mLocation":Landroid/location/Location;
    if-eqz v0, :cond_1

    .line 694
    invoke-virtual {v0}, Landroid/location/Location;->getLatitude()D

    move-result-wide v6

    .line 695
    .restart local v6    # "latitude":D
    invoke-virtual {v0}, Landroid/location/Location;->getLongitude()D

    move-result-wide v8

    .line 696
    .restart local v8    # "longitude":D
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v6, v7}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v8, v9}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->location:Ljava/lang/String;

    .line 698
    .end local v0    # "mLocation":Landroid/location/Location;
    .end local v6    # "latitude":D
    .end local v8    # "longitude":D
    :cond_1
    goto :goto_1

    .line 690
    :cond_2
    :goto_0
    goto :goto_1

    .line 700
    :cond_3
    const-string v0, "[initLocation]new mLocationManager failed"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/SecurityException; {:try_start_1 .. :try_end_1} :catch_1
    .catch Ljava/lang/IllegalArgumentException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 709
    :goto_1
    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->locationManager:Landroid/location/LocationManager;

    .line 710
    goto :goto_2

    .line 709
    :catchall_0
    move-exception v0

    goto :goto_3

    .line 706
    :catch_0
    move-exception v0

    .line 707
    .local v0, "e":Ljava/lang/IllegalArgumentException;
    :try_start_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "[initLocation]IllegalArgumentException: "

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/IllegalArgumentException;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .end local v0    # "e":Ljava/lang/IllegalArgumentException;
    goto :goto_1

    .line 702
    :catch_1
    move-exception v0

    .line 703
    .local v0, "e":Ljava/lang/SecurityException;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mContext:Landroid/app/Activity;

    const-string v4, "security exception"

    const/4 v5, 0x1

    invoke-static {v1, v4, v5}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    .line 704
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 705
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "[initLocation]SecurityException: "

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/SecurityException;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .end local v0    # "e":Ljava/lang/SecurityException;
    goto :goto_1

    .line 711
    :goto_2
    return-void

    .line 709
    :goto_3
    iput-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->locationManager:Landroid/location/LocationManager;

    .line 710
    throw v0
.end method

.method isLabelArrayType(Ljava/lang/String;)Z
    .locals 4
    .param p1, "label"    # Ljava/lang/String;

    .line 2830
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getArrayTypeLabels()Ljava/util/ArrayList;

    move-result-object v0

    const-string v1, "."

    invoke-virtual {p1, v1}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v2

    const/4 v3, 0x0

    if-lez v2, :cond_0

    .line 2831
    invoke-virtual {p1, v1}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v3, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_0
    move-object v1, p1

    .line 2830
    :goto_0
    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 2832
    const/4 v0, 0x1

    return v0

    .line 2834
    :cond_1
    return v3
.end method

.method public isSimCardAbsent(I)Z
    .locals 3
    .param p1, "simID"    # I

    .line 627
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mActivity:Landroid/app/Activity;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mActivity:Landroid/app/Activity;

    .line 628
    const-string v1, "phone"

    invoke-virtual {v0, v1}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/telephony/TelephonyManager;

    .line 629
    .local v0, "telephonyManager":Landroid/telephony/TelephonyManager;
    invoke-virtual {v0}, Landroid/telephony/TelephonyManager;->getSimState()I

    move-result v1

    const/4 v2, 0x1

    if-eq v1, v2, :cond_1

    .line 630
    invoke-virtual {v0}, Landroid/telephony/TelephonyManager;->getSimState()I

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    nop

    .line 629
    :goto_1
    return v2
.end method

.method parsIndex(Ljava/lang/String;)I
    .locals 3
    .param p1, "name"    # Ljava/lang/String;

    .line 844
    const/4 v0, 0x0

    .line 845
    .local v0, "index":I
    const/16 v1, 0x12

    invoke-virtual {p1, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "_"

    invoke-virtual {v1, v2}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    aget-object v1, v1, v2

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    .line 847
    add-int/lit8 v1, v0, -0x5

    return v1
.end method

.method registSimReceiver(Landroid/content/Context;)V
    .locals 2
    .param p1, "context"    # Landroid/content/Context;

    .line 879
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    .line 880
    .local v0, "intentFilter":Landroid/content/IntentFilter;
    const-string v1, "android.intent.action.SIM_STATE_CHANGED"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 881
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$23;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$23;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->SimCardChangedReceiver:Landroid/content/BroadcastReceiver;

    .line 901
    invoke-virtual {p1, v1, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    .line 902
    return-void
.end method

.method public registeListener()V
    .locals 1

    .line 575
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getSupportSimCount()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initImsiList(I)V

    .line 576
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initLocation()V

    .line 577
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->startLocation()V

    .line 578
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mContext:Landroid/app/Activity;

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->registSimReceiver(Landroid/content/Context;)V

    .line 579
    return-void
.end method

.method public resetPublicValues()V
    .locals 2

    .line 191
    const/4 v0, 0x1

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->TasVersion:I

    .line 192
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->oldDlMod0Pcell:I

    .line 193
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->oldDlMod1Pcell:I

    .line 194
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->oldUlMode:I

    .line 195
    const/16 v0, 0xb

    new-array v1, v0, [Ljava/lang/String;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->pdpIndex:[Ljava/lang/String;

    .line 196
    new-array v1, v0, [Ljava/lang/String;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->pdpapn_s:[Ljava/lang/String;

    .line 197
    new-array v1, v0, [Ljava/lang/String;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->pdpStatus:[Ljava/lang/String;

    .line 198
    new-array v1, v0, [Ljava/lang/String;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->cids:[Ljava/lang/String;

    .line 199
    new-array v1, v0, [Ljava/lang/String;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->linkedCids:[Ljava/lang/String;

    .line 200
    new-array v1, v0, [Z

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->status:[Z

    .line 201
    new-array v1, v0, [Ljava/lang/String;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_pdpapn_s:[Ljava/lang/String;

    .line 202
    new-array v0, v0, [Ljava/lang/String;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_ebi_s:[Ljava/lang/String;

    .line 203
    const/16 v0, 0xf

    new-array v1, v0, [Ljava/lang/String;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_index_s:[Ljava/lang/String;

    .line 204
    new-array v1, v0, [Ljava/lang/String;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_ptebi_s:[Ljava/lang/String;

    .line 205
    new-array v0, v0, [Ljava/lang/String;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->lte_ptlinkebi_s:[Ljava/lang/String;

    .line 206
    return-void
.end method

.method rscpCheck(I)Ljava/lang/String;
    .locals 2
    .param p1, "value"    # I

    .line 819
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    .line 820
    .local v0, "value_s":Ljava/lang/String;
    const/16 v1, -0xff

    if-ne p1, v1, :cond_0

    .line 821
    const-string v0, " "

    .line 822
    :cond_0
    return-object v0
.end method

.method servingBandMapping(I)Ljava/lang/String;
    .locals 4
    .param p1, "bandidx"    # I

    .line 851
    const-string v0, ""

    .line 852
    .local v0, "bandidx_s":Ljava/lang/String;
    if-ltz p1, :cond_0

    const/4 v1, 0x1

    if-gt p1, v1, :cond_0

    .line 853
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->ServingBandMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    goto :goto_0

    .line 855
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->ServingBandMapping:Ljava/util/HashMap;

    const/4 v3, 0x2

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "("

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ")"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 856
    :goto_0
    return-object v0
.end method

.method public startLocation()V
    .locals 7

    .line 641
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mContext:Landroid/app/Activity;

    const-string v1, "location"

    invoke-virtual {v0, v1}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/location/LocationManager;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->locationManager:Landroid/location/LocationManager;

    .line 642
    if-eqz v0, :cond_1

    .line 643
    const-string v1, "gps"

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->isProviderEnabled(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 644
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->locationManager:Landroid/location/LocationManager;

    const-wide/16 v3, 0x0

    const/4 v5, 0x0

    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLocListener:Landroid/location/LocationListener;

    const-string v2, "gps"

    invoke-virtual/range {v1 .. v6}, Landroid/location/LocationManager;->requestLocationUpdates(Ljava/lang/String;JFLandroid/location/LocationListener;)V

    .line 646
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->locationManager:Landroid/location/LocationManager;

    const-string v1, "network"

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->isProviderEnabled(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 647
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->locationManager:Landroid/location/LocationManager;

    const-wide/16 v3, 0x0

    const/4 v5, 0x0

    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLocListener:Landroid/location/LocationListener;

    const-string v2, "network"

    invoke-virtual/range {v1 .. v6}, Landroid/location/LocationManager;->requestLocationUpdates(Ljava/lang/String;JFLandroid/location/LocationListener;)V

    .line 651
    :cond_1
    return-void
.end method

.method startUpdateProcess(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;)V
    .locals 3
    .param p1, "task"    # Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;

    .line 922
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;-><init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$1;)V

    const/4 v1, 0x1

    new-array v1, v1, [Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$UpdateViewTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 923
    return-void
.end method

.method public stopGetLocation()V
    .locals 2

    .line 634
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->locationManager:Landroid/location/LocationManager;

    if-eqz v0, :cond_0

    .line 635
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLocListener:Landroid/location/LocationListener;

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->removeUpdates(Landroid/location/LocationListener;)V

    .line 636
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->locationManager:Landroid/location/LocationManager;

    .line 638
    :cond_0
    return-void
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 730
    const/4 v0, 0x1

    return v0
.end method

.method tasEableMapping(I)Ljava/lang/String;
    .locals 3
    .param p1, "tasidx"    # I

    .line 835
    const-string v0, ""

    .line 836
    .local v0, "tasidx_s":Ljava/lang/String;
    if-ltz p1, :cond_0

    const/4 v1, 0x1

    if-gt p1, v1, :cond_0

    .line 837
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->TasEnableMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    goto :goto_0

    .line 839
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->TasEnableMapping:Ljava/util/HashMap;

    const/4 v2, 0x2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    .line 840
    :goto_0
    return-object v0
.end method

.method public unRegisteListener()V
    .locals 5

    .line 582
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->getSupportSimCount()I

    move-result v0

    new-array v0, v0, [Ljava/lang/String;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->imsi:[Ljava/lang/String;

    .line 583
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->SimCardChangedReceiver:Landroid/content/BroadcastReceiver;

    const-string v1, "EmInfo/MDMComponent"

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    .line 585
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mContext:Landroid/app/Activity;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->SimCardChangedReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v3}, Landroid/app/Activity;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 589
    :goto_0
    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->SimCardChangedReceiver:Landroid/content/BroadcastReceiver;

    .line 590
    goto :goto_2

    .line 589
    :catchall_0
    move-exception v0

    goto :goto_1

    .line 586
    :catch_0
    move-exception v0

    .line 587
    .local v0, "e":Ljava/lang/Exception;
    :try_start_1
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "mContext.unregisterReceiver SimCardChangedReceiver: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .end local v0    # "e":Ljava/lang/Exception;
    goto :goto_0

    .line 589
    :goto_1
    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->SimCardChangedReceiver:Landroid/content/BroadcastReceiver;

    .line 590
    throw v0

    .line 592
    :cond_0
    :goto_2
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->locationManager:Landroid/location/LocationManager;

    if-eqz v0, :cond_1

    .line 594
    :try_start_2
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mLocListener:Landroid/location/LocationListener;

    invoke-virtual {v0, v3}, Landroid/location/LocationManager;->removeUpdates(Landroid/location/LocationListener;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 598
    :goto_3
    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->locationManager:Landroid/location/LocationManager;

    .line 599
    goto :goto_5

    .line 598
    :catchall_1
    move-exception v0

    goto :goto_4

    .line 595
    :catch_1
    move-exception v0

    .line 596
    .restart local v0    # "e":Ljava/lang/Exception;
    :try_start_3
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "locationManager.removeUpdates : "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    .end local v0    # "e":Ljava/lang/Exception;
    goto :goto_3

    .line 598
    :goto_4
    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->locationManager:Landroid/location/LocationManager;

    .line 599
    throw v0

    .line 601
    :cond_1
    :goto_5
    return-void
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 16
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 906
    move-object/from16 v12, p0

    move-object/from16 v13, p2

    check-cast v13, Lcom/mediatek/mdml/Msg;

    .line 907
    .local v13, "data":Lcom/mediatek/mdml/Msg;
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v14

    .line 908
    .local v14, "curTime":J
    iget-object v0, v12, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->Labels:[Ljava/lang/String;

    if-nez v0, :cond_0

    .line 909
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->initLabels()[Ljava/lang/String;

    move-result-object v0

    iput-object v0, v12, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->Labels:[Ljava/lang/String;

    .line 911
    :cond_0
    invoke-virtual {v13}, Lcom/mediatek/mdml/Msg;->getSimIdx()I

    move-result v0

    add-int/lit8 v0, v0, -0x1

    rem-int/lit8 v0, v0, 0x2

    if-nez v0, :cond_1

    .line 912
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCapabilitySim()I

    move-result v0

    rem-int/lit8 v0, v0, 0x2

    move v5, v0

    goto :goto_0

    .line 913
    :cond_1
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCapabilitySim()I

    move-result v0

    add-int/lit8 v0, v0, 0x1

    rem-int/lit8 v0, v0, 0x2

    move v5, v0

    :goto_0
    nop

    .line 914
    .local v5, "simID":I
    iget-object v0, v12, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->repeateMsgArray:Ljava/util/Set;

    move-object/from16 v11, p1

    invoke-interface {v0, v11}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 915
    new-instance v7, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;

    const/4 v2, 0x1

    const/4 v6, 0x1

    move-object v0, v7

    move-object/from16 v1, p0

    move-object/from16 v3, p1

    move-object v4, v13

    invoke-direct/range {v0 .. v6}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;ILjava/lang/String;Lcom/mediatek/mdml/Msg;IZ)V

    goto :goto_1

    .line 916
    :cond_2
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;

    const/4 v8, 0x1

    move-object v6, v0

    move-object/from16 v7, p0

    move-object/from16 v9, p1

    move-object v10, v13

    move v11, v5

    invoke-direct/range {v6 .. v11}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent;ILjava/lang/String;Lcom/mediatek/mdml/Msg;I)V

    move-object v7, v0

    :goto_1
    move-object v0, v7

    .line 917
    .local v0, "task":Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;
    iget-object v1, v12, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;->mUpdateTaskDriven:Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$UpdateTaskDriven;->appendTask(Lcom/mediatek/engineermode/mdmcomponent/CombinationViewComponent$Task;)V

    .line 918
    return-void
.end method
