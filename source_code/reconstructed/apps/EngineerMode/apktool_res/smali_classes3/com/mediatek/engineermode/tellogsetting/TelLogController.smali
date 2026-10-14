.class public Lcom/mediatek/engineermode/tellogsetting/TelLogController;
.super Ljava/lang/Object;
.source "TelLogController.java"


# static fields
.field private static final LOG_INTERNAL_PROP:Ljava/lang/String; = "ro.vendor.mtklog_internal"

.field private static final LOG_MUCH_DISABLE:Ljava/lang/String; = "false"

.field private static final LOG_MUCH_ENABLE:Ljava/lang/String; = "true"

.field private static final LOG_MUCH_PROP:Ljava/lang/String; = "persist.vendor.logmuch"

.field private static final PREF_LOG_ENABLE:Ljava/lang/String; = "log_enable"

.field private static final PREF_NAME:Ljava/lang/String; = "tel_log"

.field private static final PROPERTY_M_LOG_TAG:[Ljava/lang/String;

.field private static final PROPERTY_M_LOG_TAG_COMMON_RIL:[Ljava/lang/String;

.field private static final PROPERTY_M_LOG_TAG_OFF_D:[Ljava/lang/String;

.field private static final PROPERTY_M_LOG_TAG_V:[Ljava/lang/String;

.field private static final PROP_DISABLE:Ljava/lang/String; = "0"

.field private static final PROP_ENABLE:Ljava/lang/String; = "1"

.field static final TAG:Ljava/lang/String; = "telLogSetting"

.field private static final TEL_LOG_PROP:Ljava/lang/String; = "persist.vendor.log.tel_dbg"

.field private static final TIMEOUT_PERIOD:I = 0x1388

.field private static final WAIT_TIME:I = 0x12c


# direct methods
.method static constructor <clinit>()V
    .locals 42

    .line 115
    const-string v0, "persist.log.tag.AT"

    const-string v1, "persist.log.tag.RILMUXD"

    const-string v2, "persist.log.tag.RILC-MTK"

    const-string v3, "persist.log.tag.RILC"

    const-string v4, "persist.log.tag.RfxMainThread"

    const-string v5, "persist.log.tag.RfxRoot"

    const-string v6, "persist.log.tag.RfxRilAdapter"

    const-string v7, "persist.log.tag.RfxController"

    const-string v8, "persist.log.tag.RILC-RP"

    const-string v9, "persist.log.tag.RfxTransUtils"

    const-string v10, "persist.log.tag.RfxMclDisThread"

    const-string v11, "persist.log.tag.RfxCloneMgr"

    const-string v12, "persist.log.tag.RfxHandlerMgr"

    const-string v13, "persist.log.tag.RfxIdToStr"

    const-string v14, "persist.log.tag.RfxDisThread"

    const-string v15, "persist.log.tag.RfxMclStatusMgr"

    const-string v16, "persist.log.tag.RIL-Fusion"

    const-string v17, "persist.log.tag.RfxContFactory"

    const-string v18, "persist.log.tag.RfxChannelMgr"

    const-string v19, "persist.log.tag.RIL-Parcel"

    const-string v20, "persist.log.tag.RIL-Socket"

    filled-new-array/range {v0 .. v20}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/tellogsetting/TelLogController;->PROPERTY_M_LOG_TAG_COMMON_RIL:[Ljava/lang/String;

    .line 143
    const/16 v0, 0xdd

    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    const-string v2, "persist.log.tag.MtkDct"

    aput-object v2, v0, v1

    const/4 v1, 0x1

    const-string v2, "persist.log.tag.MtkDc"

    aput-object v2, v0, v1

    const/4 v1, 0x2

    const-string v2, "persist.log.tag.MtkDcc"

    aput-object v2, v0, v1

    const/4 v1, 0x3

    const-string v2, "persist.log.tag.RIL-DATA"

    aput-object v2, v0, v1

    const/4 v1, 0x4

    const-string v2, "persist.log.tag.C2K_RIL-DATA"

    aput-object v2, v0, v1

    const/4 v1, 0x5

    const-string v2, "persist.log.tag.GsmCdmaPhone"

    aput-object v2, v0, v1

    const/4 v1, 0x6

    const-string v3, "persist.log.tag.RILMD2-SS"

    aput-object v3, v0, v1

    const/4 v1, 0x7

    const-string v3, "persist.log.tag.CapaSwitch"

    aput-object v3, v0, v1

    const/16 v1, 0x8

    const-string v3, "persist.log.tag.DSSelector"

    aput-object v3, v0, v1

    const/16 v1, 0x9

    const-string v3, "persist.log.tag.DSSExt"

    aput-object v3, v0, v1

    const/16 v1, 0xa

    const-string v3, "persist.log.tag.Op01DSSExt"

    aput-object v3, v0, v1

    const/16 v1, 0xb

    const-string v3, "persist.log.tag.Op02DSSExt"

    aput-object v3, v0, v1

    const/16 v1, 0xc

    const-string v3, "persist.log.tag.Op09DSSExt"

    aput-object v3, v0, v1

    const/16 v1, 0xd

    const-string v3, "persist.log.tag.Op18DSSExt"

    aput-object v3, v0, v1

    const/16 v1, 0xe

    const-string v3, "persist.log.tag.DSSelectorUtil"

    aput-object v3, v0, v1

    const/16 v1, 0xf

    const-string v3, "persist.log.tag.Op01SimSwitch"

    aput-object v3, v0, v1

    const/16 v1, 0x10

    const-string v3, "persist.log.tag.Op02SimSwitch"

    aput-object v3, v0, v1

    const/16 v1, 0x11

    const-string v3, "persist.log.tag.Op18SimSwitch"

    aput-object v3, v0, v1

    const/16 v1, 0x12

    const-string v3, "persist.log.tag.DcFcMgr"

    aput-object v3, v0, v1

    const/16 v1, 0x13

    const-string v3, "persist.log.tag.RetryManager"

    aput-object v3, v0, v1

    const/16 v1, 0x14

    const-string v3, "persist.log.tag.IccProvider"

    aput-object v3, v0, v1

    const/16 v1, 0x15

    const-string v3, "persist.log.tag.IccPhoneBookIM"

    aput-object v3, v0, v1

    const/16 v1, 0x16

    const-string v3, "persist.log.tag.AdnRecordCache"

    aput-object v3, v0, v1

    const/16 v1, 0x17

    const-string v3, "persist.log.tag.AdnRecordLoader"

    aput-object v3, v0, v1

    const/16 v1, 0x18

    const-string v3, "persist.log.tag.AdnRecord"

    aput-object v3, v0, v1

    const/16 v1, 0x19

    const-string v3, "persist.log.tag.RIL-PHB"

    aput-object v3, v0, v1

    const/16 v1, 0x1a

    const-string v3, "persist.log.tag.MtkIccProvider"

    aput-object v3, v0, v1

    const/16 v1, 0x1b

    const-string v3, "persist.log.tag.MtkIccPHBIM"

    aput-object v3, v0, v1

    const/16 v1, 0x1c

    const-string v3, "persist.log.tag.MtkAdnRecord"

    aput-object v3, v0, v1

    const/16 v1, 0x1d

    const-string v3, "persist.log.tag.MtkRecordLoader"

    aput-object v3, v0, v1

    const/16 v1, 0x1e

    const-string v3, "persist.log.tag.RpPhbController"

    aput-object v3, v0, v1

    const/16 v1, 0x1f

    const-string v3, "persist.log.tag.RmcPhbReq"

    aput-object v3, v0, v1

    const/16 v1, 0x20

    const-string v3, "persist.log.tag.RmcPhbUrc"

    aput-object v3, v0, v1

    const/16 v1, 0x21

    const-string v3, "persist.log.tag.RtcPhb"

    aput-object v3, v0, v1

    const/16 v1, 0x22

    const-string v3, "persist.log.tag.VT"

    aput-object v3, v0, v1

    const/16 v1, 0x23

    const-string v3, "persist.log.tag.ImsVTProvider"

    aput-object v3, v0, v1

    const/16 v1, 0x24

    const-string v3, "persist.log.tag.IccCardProxy"

    aput-object v3, v0, v1

    const/16 v1, 0x25

    const-string v3, "persist.log.tag.IsimFileHandler"

    aput-object v3, v0, v1

    const/16 v1, 0x26

    const-string v3, "persist.log.tag.IsimRecords"

    aput-object v3, v0, v1

    const/16 v1, 0x27

    const-string v3, "persist.log.tag.SIMRecords"

    aput-object v3, v0, v1

    const/16 v1, 0x28

    const-string v3, "persist.log.tag.SpnOverride"

    aput-object v3, v0, v1

    const/16 v1, 0x29

    const-string v4, "persist.log.tag.UiccCard"

    aput-object v4, v0, v1

    const/16 v1, 0x2a

    const-string v4, "persist.log.tag.UiccController"

    aput-object v4, v0, v1

    const/16 v1, 0x2b

    const-string v4, "persist.log.tag.RIL-SIM"

    aput-object v4, v0, v1

    const/16 v1, 0x2c

    const-string v4, "persist.log.tag.CountryDetector"

    aput-object v4, v0, v1

    const/16 v1, 0x2d

    const-string v4, "persist.log.tag.DataDispatcher"

    aput-object v4, v0, v1

    const/16 v1, 0x2e

    const-string v4, "persist.log.tag.ImsService"

    aput-object v4, v0, v1

    const/16 v1, 0x2f

    const-string v4, "persist.log.tag.IMS_RILA"

    aput-object v4, v0, v1

    const/16 v1, 0x30

    const-string v4, "persist.log.tag.IMSRILRequest"

    aput-object v4, v0, v1

    const/16 v1, 0x31

    const-string v4, "persist.log.tag.ImsManager"

    aput-object v4, v0, v1

    const/16 v1, 0x32

    const-string v4, "persist.log.tag.ImsApp"

    aput-object v4, v0, v1

    const/16 v1, 0x33

    const-string v4, "persist.log.tag.ImsBaseCommands"

    aput-object v4, v0, v1

    const/16 v1, 0x34

    const-string v4, "persist.log.tag.MtkImsManager"

    aput-object v4, v0, v1

    const/16 v1, 0x35

    const-string v4, "persist.log.tag.MtkImsService"

    aput-object v4, v0, v1

    const/16 v1, 0x36

    const-string v4, "persist.log.tag.RP_IMS"

    aput-object v4, v0, v1

    const/16 v1, 0x37

    const-string v4, "persist.log.tag.RtcIms"

    aput-object v4, v0, v1

    const/16 v1, 0x38

    const-string v4, "persist.log.tag.RtcImsConference"

    aput-object v4, v0, v1

    const/16 v1, 0x39

    const-string v4, "persist.log.tag.RtcImsDialog"

    aput-object v4, v0, v1

    const/16 v1, 0x3a

    const-string v4, "persist.log.tag.RmcImsCtlUrcHdl"

    aput-object v4, v0, v1

    const/16 v1, 0x3b

    const-string v4, "persist.log.tag.RmcImsCtlReqHdl"

    aput-object v4, v0, v1

    const/16 v1, 0x3c

    const-string v4, "persist.log.tag.ImsCall"

    aput-object v4, v0, v1

    const/16 v1, 0x3d

    const-string v4, "persist.log.tag.ImsPhone"

    aput-object v4, v0, v1

    const/16 v1, 0x3e

    const-string v4, "persist.log.tag.ImsPhoneCall"

    aput-object v4, v0, v1

    const/16 v1, 0x3f

    const-string v4, "persist.log.tag.ImsPhoneBase"

    aput-object v4, v0, v1

    const/16 v1, 0x40

    const-string v4, "persist.log.tag.ImsCallSession"

    aput-object v4, v0, v1

    const/16 v1, 0x41

    const-string v4, "persist.log.tag.ImsCallProfile"

    aput-object v4, v0, v1

    const/16 v1, 0x42

    const-string v4, "persist.log.tag.ImsEcbm"

    aput-object v4, v0, v1

    const/16 v1, 0x43

    const-string v4, "persist.log.tag.ImsEcbmProxy"

    aput-object v4, v0, v1

    const/16 v1, 0x44

    const-string v4, "persist.log.tag.OperatorUtils"

    aput-object v4, v0, v1

    const/16 v1, 0x45

    const-string v4, "persist.log.tag.WfoApp"

    aput-object v4, v0, v1

    const/16 v1, 0x46

    const-string v4, "persist.log.tag.GsmCdmaConn"

    aput-object v4, v0, v1

    const/16 v1, 0x47

    aput-object v2, v0, v1

    const/16 v1, 0x48

    const-string v2, "persist.log.tag.Phone"

    aput-object v2, v0, v1

    const/16 v1, 0x49

    const-string v2, "persist.log.tag.RIL-CC"

    aput-object v2, v0, v1

    const/16 v1, 0x4a

    const-string v2, "persist.log.tag.RpCallControl"

    aput-object v2, v0, v1

    const/16 v1, 0x4b

    const-string v2, "persist.log.tag.RpAudioControl"

    aput-object v2, v0, v1

    const/16 v1, 0x4c

    const-string v2, "persist.log.tag.GsmCallTkrHlpr"

    aput-object v2, v0, v1

    const/16 v1, 0x4d

    const-string v2, "persist.log.tag.MtkPhoneNotifr"

    aput-object v2, v0, v1

    const/16 v1, 0x4e

    const-string v2, "persist.log.tag.MtkGsmCdmaConn"

    aput-object v2, v0, v1

    const/16 v1, 0x4f

    const-string v2, "persist.log.tag.RadioManager"

    aput-object v2, v0, v1

    const/16 v1, 0x50

    const-string v2, "persist.log.tag.RIL_Mux"

    aput-object v2, v0, v1

    const/16 v1, 0x51

    const-string v2, "persist.log.tag.RIL-OEM"

    aput-object v2, v0, v1

    const/16 v1, 0x52

    const-string v2, "persist.log.tag.RIL"

    aput-object v2, v0, v1

    const/16 v1, 0x53

    const-string v2, "persist.log.tag.RIL_UIM_SOCKET"

    aput-object v2, v0, v1

    const/16 v1, 0x54

    const-string v2, "persist.log.tag.RILD"

    aput-object v2, v0, v1

    const/16 v1, 0x55

    const-string v2, "persist.log.tag.RIL-RP"

    aput-object v2, v0, v1

    const/16 v1, 0x56

    const-string v2, "persist.log.tag.RfxMessage"

    aput-object v2, v0, v1

    const/16 v1, 0x57

    const-string v2, "persist.log.tag.RfxDebugInfo"

    aput-object v2, v0, v1

    const/16 v1, 0x58

    const-string v2, "persist.log.tag.RfxTimer"

    aput-object v2, v0, v1

    const/16 v1, 0x59

    const-string v2, "persist.log.tag.RfxObject"

    aput-object v2, v0, v1

    const/16 v1, 0x5a

    const-string v2, "persist.log.tag.SlotQueueEntry"

    aput-object v2, v0, v1

    const/16 v1, 0x5b

    const-string v2, "persist.log.tag.RfxAction"

    aput-object v2, v0, v1

    const/16 v1, 0x5c

    const-string v2, "persist.log.tag.RFX"

    aput-object v2, v0, v1

    const/16 v1, 0x5d

    const-string v2, "persist.log.tag.RpRadioMessage"

    aput-object v2, v0, v1

    const/16 v1, 0x5e

    const-string v2, "persist.log.tag.RpModemMessage"

    aput-object v2, v0, v1

    const/16 v1, 0x5f

    const-string v2, "persist.log.tag.PhoneFactory"

    aput-object v2, v0, v1

    const/16 v1, 0x60

    const-string v2, "persist.log.tag.ProxyController"

    aput-object v2, v0, v1

    const/16 v1, 0x61

    aput-object v3, v0, v1

    const/16 v1, 0x62

    const-string v2, "persist.log.tag.RfxDefDestUtils"

    aput-object v2, v0, v1

    const/16 v1, 0x63

    const-string v2, "persist.log.tag.RfxSM"

    aput-object v2, v0, v1

    const/16 v1, 0x64

    const-string v2, "persist.log.tag.RfxSocketSM"

    aput-object v2, v0, v1

    const/16 v1, 0x65

    const-string v2, "persist.log.tag.RfxDT"

    aput-object v2, v0, v1

    const/16 v1, 0x66

    const-string v2, "persist.log.tag.RpCdmaOemCtrl"

    aput-object v2, v0, v1

    const/16 v1, 0x67

    const-string v2, "persist.log.tag.RpRadioCtrl"

    aput-object v2, v0, v1

    const/16 v1, 0x68

    const-string v2, "persist.log.tag.RpMDCtrl"

    aput-object v2, v0, v1

    const/16 v1, 0x69

    const-string v2, "persist.log.tag.RpCdmaRadioCtrl"

    aput-object v2, v0, v1

    const/16 v1, 0x6a

    const-string v2, "persist.log.tag.RpFOUtils"

    aput-object v2, v0, v1

    const/16 v1, 0x6b

    const-string v2, "persist.log.tag.C2K_RIL-SIM"

    aput-object v2, v0, v1

    const/16 v1, 0x6c

    const-string v2, "persist.log.tag.MtkGsmCdmaPhone"

    aput-object v2, v0, v1

    const/16 v1, 0x6d

    const-string v2, "persist.log.tag.MtkRILJ"

    aput-object v2, v0, v1

    const/16 v1, 0x6e

    const-string v2, "persist.log.tag.MtkRadioInd"

    aput-object v2, v0, v1

    const/16 v1, 0x6f

    const-string v2, "persist.log.tag.MtkRadioResp"

    aput-object v2, v0, v1

    const/16 v1, 0x70

    const-string v2, "persist.log.tag.ExternalSimMgr"

    aput-object v2, v0, v1

    const/16 v1, 0x71

    const-string v2, "persist.log.tag.VsimAdaptor"

    aput-object v2, v0, v1

    const/16 v1, 0x72

    const-string v2, "persist.log.tag.MtkCsimFH"

    aput-object v2, v0, v1

    const/16 v1, 0x73

    const-string v2, "persist.log.tag.MtkIsimFH"

    aput-object v2, v0, v1

    const/16 v1, 0x74

    const-string v2, "persist.log.tag.MtkRuimFH"

    aput-object v2, v0, v1

    const/16 v1, 0x75

    const-string v2, "persist.log.tag.MtkSIMFH"

    aput-object v2, v0, v1

    const/16 v1, 0x76

    const-string v2, "persist.log.tag.MtkSIMRecords"

    aput-object v2, v0, v1

    const/16 v1, 0x77

    const-string v2, "persist.log.tag.MtkSmsCbHeader"

    aput-object v2, v0, v1

    const/16 v1, 0x78

    const-string v2, "persist.log.tag.MtkSmsManager"

    aput-object v2, v0, v1

    const/16 v1, 0x79

    const-string v2, "persist.log.tag.MtkSmsMessage"

    aput-object v2, v0, v1

    const/16 v1, 0x7a

    const-string v2, "persist.log.tag.MtkSpnOverride"

    aput-object v2, v0, v1

    const/16 v1, 0x7b

    const-string v2, "persist.log.tag.MtkUiccCardApp"

    aput-object v2, v0, v1

    const/16 v1, 0x7c

    const-string v2, "persist.log.tag.MtkUiccCtrl"

    aput-object v2, v0, v1

    const/16 v1, 0x7d

    const-string v2, "persist.log.tag.MtkUsimFH"

    aput-object v2, v0, v1

    const/16 v1, 0x7e

    const-string v2, "persist.log.tag.RpRilClientCtrl"

    aput-object v2, v0, v1

    const/16 v1, 0x7f

    const-string v2, "persist.log.tag.RilMalClient"

    aput-object v2, v0, v1

    const/16 v1, 0x80

    const-string v2, "persist.log.tag.RpSimController"

    aput-object v2, v0, v1

    const/16 v1, 0x81

    const-string v2, "persist.log.tag.MtkSubCtrl"

    aput-object v2, v0, v1

    const/16 v1, 0x82

    const-string v2, "persist.log.tag.RP_DAC"

    aput-object v2, v0, v1

    const/16 v1, 0x83

    const-string v2, "persist.log.tag.RP_DC"

    aput-object v2, v0, v1

    const/16 v1, 0x84

    const-string v3, "persist.log.tag.NetAgentService"

    aput-object v3, v0, v1

    const/16 v1, 0x85

    const-string v3, "persist.log.tag.NetAgent_IO"

    aput-object v3, v0, v1

    const/16 v1, 0x86

    const-string v3, "persist.log.tag.NetLnkEventHdlr"

    aput-object v3, v0, v1

    const/16 v1, 0x87

    const-string v3, "persist.log.tag.RmcDcCommon"

    aput-object v3, v0, v1

    const/16 v1, 0x88

    const-string v3, "persist.log.tag.RmcDcDefault"

    aput-object v3, v0, v1

    const/16 v1, 0x89

    const-string v3, "persist.log.tag.RtcDC"

    aput-object v3, v0, v1

    const/16 v1, 0x8a

    const-string v3, "persist.log.tag.RilClient"

    aput-object v3, v0, v1

    const/16 v1, 0x8b

    const-string v3, "persist.log.tag.RmcCommSimReq"

    aput-object v3, v0, v1

    const/16 v1, 0x8c

    const-string v3, "persist.log.tag.RmcCdmaSimRequest"

    aput-object v3, v0, v1

    const/16 v1, 0x8d

    const-string v3, "persist.log.tag.RmcGsmSimRequest"

    aput-object v3, v0, v1

    const/16 v1, 0x8e

    const-string v3, "persist.log.tag.RmcCommSimUrc"

    aput-object v3, v0, v1

    const/16 v1, 0x8f

    const-string v3, "persist.log.tag.RmcGsmSimUrc"

    aput-object v3, v0, v1

    const/16 v1, 0x90

    const-string v3, "persist.log.tag.RtcCommSimCtrl"

    aput-object v3, v0, v1

    const/16 v1, 0x91

    const-string v3, "persist.log.tag.RmcCommSimOpReq"

    aput-object v3, v0, v1

    const/16 v1, 0x92

    const-string v3, "persist.log.tag.RtcRadioCont"

    aput-object v3, v0, v1

    const/16 v1, 0x93

    const-string v3, "persist.log.tag.MtkRetryManager"

    aput-object v3, v0, v1

    const/16 v1, 0x94

    const-string v3, "persist.log.tag.RmcDcPdnManager"

    aput-object v3, v0, v1

    const/16 v1, 0x95

    const-string v3, "persist.log.tag.RmcDcReqHandler"

    aput-object v3, v0, v1

    const/16 v1, 0x96

    const-string v3, "persist.log.tag.RmcDcUtility"

    aput-object v3, v0, v1

    const/16 v1, 0x97

    const-string v3, "persist.log.tag.RfxIdToMsgId"

    aput-object v3, v0, v1

    const/16 v1, 0x98

    const-string v3, "persist.log.tag.RfxOpUtils"

    aput-object v3, v0, v1

    const/16 v1, 0x99

    const-string v3, "persist.log.tag.RfxMclMessenger"

    aput-object v3, v0, v1

    const/16 v1, 0x9a

    const-string v3, "persist.log.tag.RfxRilAdapter"

    aput-object v3, v0, v1

    const/16 v1, 0x9b

    const-string v3, "persist.log.tag.RfxFragEnc"

    aput-object v3, v0, v1

    const/16 v1, 0x9c

    const-string v3, "persist.log.tag.RfxStatusMgr"

    aput-object v3, v0, v1

    const/16 v1, 0x9d

    const-string v3, "persist.log.tag.RmcRadioReq"

    aput-object v3, v0, v1

    const/16 v1, 0x9e

    const-string v3, "persist.log.tag.RmcCapa"

    aput-object v3, v0, v1

    const/16 v1, 0x9f

    const-string v3, "persist.log.tag.RtcCapa"

    aput-object v3, v0, v1

    const/16 v1, 0xa0

    const-string v3, "persist.log.tag.RpMalController"

    aput-object v3, v0, v1

    const/16 v1, 0xa1

    const-string v3, "persist.log.tag.WORLDMODE"

    aput-object v3, v0, v1

    const/16 v1, 0xa2

    const-string v3, "persist.log.tag.RtcWp"

    aput-object v3, v0, v1

    const/16 v1, 0xa3

    const-string v3, "persist.log.tag.RmcWp"

    aput-object v3, v0, v1

    const/16 v1, 0xa4

    const-string v3, "persist.log.tag.RmcOpRadioReq"

    aput-object v3, v0, v1

    const/16 v1, 0xa5

    aput-object v2, v0, v1

    const/16 v1, 0xa6

    const-string v2, "persist.log.tag.RfxRilUtils"

    aput-object v2, v0, v1

    const/16 v1, 0xa7

    const-string v2, "persist.log.tag.RmcCdmaSimUrc"

    aput-object v2, v0, v1

    const/16 v1, 0xa8

    const-string v2, "persist.log.tag.MtkPhoneNumberUtils"

    aput-object v2, v0, v1

    const/16 v1, 0xa9

    const-string v2, "persist.log.tag.RmcOemHandler"

    aput-object v2, v0, v1

    const/16 v1, 0xaa

    const-string v2, "persist.log.tag.CarrierExpressServiceImpl"

    aput-object v2, v0, v1

    const/16 v1, 0xab

    const-string v2, "persist.log.tag.CarrierExpressServiceImplExt"

    aput-object v2, v0, v1

    const/16 v1, 0xac

    const-string v2, "persist.log.tag.PhoneConfigurationSettings"

    aput-object v2, v0, v1

    const/16 v1, 0xad

    const-string v2, "persist.log.tag.RfxContFactory"

    aput-object v2, v0, v1

    const/16 v1, 0xae

    const-string v2, "persist.log.tag.RfxChannelMgr"

    aput-object v2, v0, v1

    const/16 v1, 0xaf

    const-string v2, "persist.log.tag.RfxMclDisThread"

    aput-object v2, v0, v1

    const/16 v1, 0xb0

    const-string v2, "persist.log.tag.RfxCloneMgr"

    aput-object v2, v0, v1

    const/16 v1, 0xb1

    const-string v2, "persist.log.tag.RfxHandlerMgr"

    aput-object v2, v0, v1

    const/16 v1, 0xb2

    const-string v2, "persist.log.tag.RtcModeCont"

    aput-object v2, v0, v1

    const/16 v1, 0xb3

    const-string v2, "persist.log.tag.RIL-SocListen"

    aput-object v2, v0, v1

    const/16 v1, 0xb4

    const-string v2, "persist.log.tag.RIL-Netlink"

    aput-object v2, v0, v1

    const/16 v1, 0xb5

    const-string v2, "persist.log.tag.RfxVersionMgr"

    aput-object v2, v0, v1

    const/16 v1, 0xb6

    const-string v2, "persist.log.tag.RilOpProxy"

    aput-object v2, v0, v1

    const/16 v1, 0xb7

    const-string v2, "persist.log.tag.RILC-OP"

    aput-object v2, v0, v1

    const/16 v1, 0xb8

    const-string v2, "persist.log.tag.RilOemClient"

    aput-object v2, v0, v1

    const/16 v1, 0xb9

    const-string v2, "persist.log.tag.Telecom"

    aput-object v2, v0, v1

    const/16 v1, 0xba

    const-string v2, "persist.log.tag.MwiRIL"

    aput-object v2, v0, v1

    const/16 v1, 0xbb

    const-string v2, "persist.log.tag.SmartRatController"

    aput-object v2, v0, v1

    const/16 v1, 0xbc

    const-string v2, "persist.log.tag.SmartGearsController"

    aput-object v2, v0, v1

    const/16 v1, 0xbd

    const-string v2, "persist.log.tag.SocketStatusProvider"

    aput-object v2, v0, v1

    const/16 v1, 0xbe

    const-string v2, "persist.log.tag.AppStatusProvider"

    aput-object v2, v0, v1

    const/16 v1, 0xbf

    const-string v2, "persist.log.tag.InformationUtil"

    aput-object v2, v0, v1

    const/16 v1, 0xc0

    const-string v2, "persist.log.tag.SmartRatDummyUsageGenerator"

    aput-object v2, v0, v1

    const/16 v1, 0xc1

    const-string v2, "persist.log.tag.SmartRatSwitchIntfMgr"

    aput-object v2, v0, v1

    const/16 v1, 0xc2

    const-string v2, "persist.log.tag.SmartRatSwitcher"

    aput-object v2, v0, v1

    const/16 v1, 0xc3

    const-string v2, "persist.log.tag.RtcCodec"

    aput-object v2, v0, v1

    const/16 v1, 0xc4

    const-string v2, "persist.log.tag.SmRATCdcNoti"

    aput-object v2, v0, v1

    const/16 v1, 0xc5

    const-string v2, "persist.log.tag.SmartRatInd"

    aput-object v2, v0, v1

    const/16 v1, 0xc6

    const-string v2, "persist.log.tag.WpfaCcciDataHeaderEncoder"

    aput-object v2, v0, v1

    const/16 v1, 0xc7

    const-string v2, "persist.log.tag.WpfaCcciReader"

    aput-object v2, v0, v1

    const/16 v1, 0xc8

    const-string v2, "persist.log.tag.WpfaCcciSender"

    aput-object v2, v0, v1

    const/16 v1, 0xc9

    const-string v2, "persist.log.tag.WpfaControlMsgHandler"

    aput-object v2, v0, v1

    const/16 v1, 0xca

    const-string v2, "persist.log.tag.WpfaDriver"

    aput-object v2, v0, v1

    const/16 v1, 0xcb

    const-string v2, "persist.log.tag.WpfaDriverAccept"

    aput-object v2, v0, v1

    const/16 v1, 0xcc

    const-string v2, "persist.log.tag.WpfaDriverAdapter"

    aput-object v2, v0, v1

    const/16 v1, 0xcd

    const-string v2, "persist.log.tag.WpfaDriverDeReg"

    aput-object v2, v0, v1

    const/16 v1, 0xce

    const-string v2, "persist.log.tag.WpfaDriverMessage"

    aput-object v2, v0, v1

    const/16 v1, 0xcf

    const-string v2, "persist.log.tag.WpfaDriverRegFilter"

    aput-object v2, v0, v1

    const/16 v1, 0xd0

    const-string v2, "persist.log.tag.WpfaDriverULIpPkt"

    aput-object v2, v0, v1

    const/16 v1, 0xd1

    const-string v2, "persist.log.tag.WpfaDriverUtilis"

    aput-object v2, v0, v1

    const/16 v1, 0xd2

    const-string v2, "persist.log.tag.WpfaDriverVersion"

    aput-object v2, v0, v1

    const/16 v1, 0xd3

    const-string v2, "persist.log.tag.WpfaFilterRuleReqHandler"

    aput-object v2, v0, v1

    const/16 v1, 0xd4

    const-string v2, "persist.log.tag.WpfaRingBuffer"

    aput-object v2, v0, v1

    const/16 v1, 0xd5

    const-string v2, "persist.log.tag.WpfaShmAccessController"

    aput-object v2, v0, v1

    const/16 v1, 0xd6

    const-string v2, "persist.log.tag.WpfaShmReadMsgHandler"

    aput-object v2, v0, v1

    const/16 v1, 0xd7

    const-string v2, "persist.log.tag.WpfaShmSynchronizer"

    aput-object v2, v0, v1

    const/16 v1, 0xd8

    const-string v2, "persist.log.tag.WpfaShmWriteMsgHandler"

    aput-object v2, v0, v1

    const/16 v1, 0xd9

    const-string v2, "persist.log.tag.wpfa_iptable_android"

    aput-object v2, v0, v1

    const/16 v1, 0xda

    const-string v2, "persist.log.tag.WpfaRuleRegister"

    aput-object v2, v0, v1

    const/16 v1, 0xdb

    const-string v2, "persist.log.tag.WpfaParsing"

    aput-object v2, v0, v1

    const/16 v1, 0xdc

    const-string v2, "persist.log.tag.WpfaRuleContainer"

    aput-object v2, v0, v1

    sput-object v0, Lcom/mediatek/engineermode/tellogsetting/TelLogController;->PROPERTY_M_LOG_TAG:[Ljava/lang/String;

    .line 367
    const-string v3, "persist.log.tag.NetworkStats"

    const-string v4, "persist.log.tag.NetworkPolicy"

    const-string v5, "persist.log.tag.RTC_DAC"

    const-string v6, "persist.log.tag.RmcEmbmsReq"

    const-string v7, "persist.log.tag.RmcEmbmsUrc"

    const-string v8, "persist.log.tag.RtcEmbmsUtil"

    const-string v9, "persist.log.tag.RtcEmbmsAt"

    const-string v10, "persist.log.tag.MtkEmbmsAdaptor"

    const-string v11, "persist.log.tag.MTKSST"

    const-string v12, "persist.log.tag.RmcNwHdlr"

    const-string v13, "persist.log.tag.RmcNwReqHdlr"

    const-string v14, "persist.log.tag.RmcNwRTReqHdlr"

    const-string v15, "persist.log.tag.RmcRatSwHdlr"

    const-string v16, "persist.log.tag.RtcRatSwCtrl"

    const-string v17, "persist.log.tag.RtcNwCtrl"

    const-string v18, "persist.log.tag.MtkPhoneSwitcher"

    const-string v19, "persist.log.tag.VoLTE_Stack"

    const-string v20, "persist.log.tag.VoLTE_IF_CH"

    const-string v21, "persist.log.tag.VoLTE_WAKELOCK"

    const-string v22, "persist.log.tag.VoLTE_CONFPKG"

    const-string v23, "persist.log.tag.VoLTE_DISP"

    const-string v24, "persist.log.tag.VoLTE_UA"

    const-string v25, "persist.log.tag.VoLTE_MWI"

    const-string v26, "persist.log.tag.VoLTE_REG"

    const-string v27, "persist.log.tag.VoLTE_Service"

    const-string v28, "persist.log.tag.VoLTE_SIPTimer"

    const-string v29, "persist.log.tag.VoLTE_TRANS"

    const-string v30, "persist.log.tag.VoLTE_SIPTX"

    const-string v31, "persist.log.tag.VoLTE_SMS"

    const-string v32, "persist.log.tag.VoLTE_SOC"

    const-string v33, "persist.log.tag.VoLTE_DNS"

    const-string v34, "persist.log.tag.VoLTE_IF_SERVICE"

    const-string v35, "persist.log.tag.VoLTE_IF_CORE"

    const-string v36, "persist.log.tag.VoLTE_Auto_Testing"

    const-string v37, "persist.log.tag.VoLTE_IMCB"

    const-string v38, "persist.log.tag.VoLTE_IMCB-CM"

    const-string v39, "persist.log.tag.VoLTE_IMCB-0"

    const-string v40, "persist.log.tag.VoLTE_IMCB-1"

    const-string v41, "persist.log.tag.VoLTE_IMCB-2"

    filled-new-array/range {v3 .. v41}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/tellogsetting/TelLogController;->PROPERTY_M_LOG_TAG_V:[Ljava/lang/String;

    .line 409
    const-string v1, "persist.log.tag.VoLTE_Stack"

    const-string v2, "persist.log.tag.VoLTE_IF_CH"

    const-string v3, "persist.log.tag.VoLTE_WAKELOCK"

    const-string v4, "persist.log.tag.VoLTE_CONFPKG"

    const-string v5, "persist.log.tag.VoLTE_DISP"

    const-string v6, "persist.log.tag.VoLTE_UA"

    const-string v7, "persist.log.tag.VoLTE_MWI"

    const-string v8, "persist.log.tag.VoLTE_REG"

    const-string v9, "persist.log.tag.VoLTE_Service"

    const-string v10, "persist.log.tag.VoLTE_SIPTimer"

    const-string v11, "persist.log.tag.VoLTE_TRANS"

    const-string v12, "persist.log.tag.VoLTE_SIPTX"

    const-string v13, "persist.log.tag.VoLTE_SMS"

    const-string v14, "persist.log.tag.VoLTE_SOC"

    const-string v15, "persist.log.tag.VoLTE_DNS"

    const-string v16, "persist.log.tag.VoLTE_IF_SERVICE"

    const-string v17, "persist.log.tag.VoLTE_IF_CORE"

    const-string v18, "persist.log.tag.VoLTE_Auto_Testing"

    const-string v19, "persist.log.tag.VoLTE_IMCB"

    const-string v20, "persist.log.tag.VoLTE_IMCB-CM"

    const-string v21, "persist.log.tag.VoLTE_IMCB-0"

    const-string v22, "persist.log.tag.VoLTE_IMCB-1"

    const-string v23, "persist.log.tag.VoLTE_IMCB-2"

    filled-new-array/range {v1 .. v23}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/tellogsetting/TelLogController;->PROPERTY_M_LOG_TAG_OFF_D:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private showDebugLog(Z)V
    .locals 7
    .param p1, "enable"    # Z

    .line 83
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "showDebugLog enable = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "telLogSetting"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 84
    const-string v0, "D"

    const/4 v1, 0x0

    if-eqz p1, :cond_2

    .line 85
    sget-object v2, Lcom/mediatek/engineermode/tellogsetting/TelLogController;->PROPERTY_M_LOG_TAG_COMMON_RIL:[Ljava/lang/String;

    array-length v3, v2

    move v4, v1

    :goto_0
    if-ge v4, v3, :cond_0

    aget-object v5, v2, v4

    .line 86
    .local v5, "telLogTag":Ljava/lang/String;
    invoke-static {v5, v0}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 85
    .end local v5    # "telLogTag":Ljava/lang/String;
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 88
    :cond_0
    sget-object v2, Lcom/mediatek/engineermode/tellogsetting/TelLogController;->PROPERTY_M_LOG_TAG:[Ljava/lang/String;

    array-length v3, v2

    move v4, v1

    :goto_1
    if-ge v4, v3, :cond_1

    aget-object v5, v2, v4

    .line 89
    .restart local v5    # "telLogTag":Ljava/lang/String;
    invoke-static {v5, v0}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 88
    .end local v5    # "telLogTag":Ljava/lang/String;
    add-int/lit8 v4, v4, 0x1

    goto :goto_1

    .line 91
    :cond_1
    sget-object v0, Lcom/mediatek/engineermode/tellogsetting/TelLogController;->PROPERTY_M_LOG_TAG_V:[Ljava/lang/String;

    array-length v2, v0

    :goto_2
    if-ge v1, v2, :cond_6

    aget-object v3, v0, v1

    .line 92
    .local v3, "telLogTag":Ljava/lang/String;
    const-string v4, "V"

    invoke-static {v3, v4}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 91
    .end local v3    # "telLogTag":Ljava/lang/String;
    add-int/lit8 v1, v1, 0x1

    goto :goto_2

    .line 96
    :cond_2
    sget-object v2, Lcom/mediatek/engineermode/tellogsetting/TelLogController;->PROPERTY_M_LOG_TAG_COMMON_RIL:[Ljava/lang/String;

    array-length v3, v2

    move v4, v1

    :goto_3
    const-string v5, "I"

    if-ge v4, v3, :cond_3

    aget-object v6, v2, v4

    .line 97
    .local v6, "telLogTag":Ljava/lang/String;
    invoke-static {v6, v5}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 96
    .end local v6    # "telLogTag":Ljava/lang/String;
    add-int/lit8 v4, v4, 0x1

    goto :goto_3

    .line 99
    :cond_3
    const-string v2, "ro.build.type"

    invoke-static {v2}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "eng"

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_5

    .line 100
    sget-object v0, Lcom/mediatek/engineermode/tellogsetting/TelLogController;->PROPERTY_M_LOG_TAG:[Ljava/lang/String;

    array-length v2, v0

    move v3, v1

    :goto_4
    if-ge v3, v2, :cond_4

    aget-object v4, v0, v3

    .line 101
    .local v4, "telLogTag":Ljava/lang/String;
    invoke-static {v4, v5}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 100
    .end local v4    # "telLogTag":Ljava/lang/String;
    add-int/lit8 v3, v3, 0x1

    goto :goto_4

    .line 103
    :cond_4
    sget-object v0, Lcom/mediatek/engineermode/tellogsetting/TelLogController;->PROPERTY_M_LOG_TAG_V:[Ljava/lang/String;

    array-length v2, v0

    :goto_5
    if-ge v1, v2, :cond_6

    aget-object v3, v0, v1

    .line 104
    .restart local v3    # "telLogTag":Ljava/lang/String;
    invoke-static {v3, v5}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 103
    .end local v3    # "telLogTag":Ljava/lang/String;
    add-int/lit8 v1, v1, 0x1

    goto :goto_5

    .line 108
    :cond_5
    sget-object v2, Lcom/mediatek/engineermode/tellogsetting/TelLogController;->PROPERTY_M_LOG_TAG_OFF_D:[Ljava/lang/String;

    array-length v3, v2

    :goto_6
    if-ge v1, v3, :cond_6

    aget-object v4, v2, v1

    .line 109
    .restart local v4    # "telLogTag":Ljava/lang/String;
    invoke-static {v4, v0}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 108
    .end local v4    # "telLogTag":Ljava/lang/String;
    add-int/lit8 v1, v1, 0x1

    goto :goto_6

    .line 113
    :cond_6
    return-void
.end method


# virtual methods
.method getTelLogStatus(Landroid/content/Context;)Z
    .locals 3
    .param p1, "context"    # Landroid/content/Context;

    .line 36
    const-string v0, "tel_log"

    const/4 v1, 0x0

    invoke-virtual {p1, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 37
    .local v0, "preferences":Landroid/content/SharedPreferences;
    const-string v2, "log_enable"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v1

    return v1
.end method

.method switchTelLog(Landroid/content/Context;Z)Z
    .locals 8
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "enable"    # Z

    .line 41
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "switchTelLog "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "telLogSetting"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 42
    if-eqz p2, :cond_0

    const-string v0, "1"

    goto :goto_0

    :cond_0
    const-string v0, "0"

    .line 43
    .local v0, "telLogProTar":Ljava/lang/String;
    :goto_0
    if-eqz p2, :cond_1

    const-string v2, "false"

    goto :goto_1

    :cond_1
    const-string v2, "true"

    .line 44
    .local v2, "logMuchProTar":Ljava/lang/String;
    :goto_1
    const-string v3, "persist.vendor.log.tel_dbg"

    invoke-static {v3, v0}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 47
    const-string v3, "persist.vendor.logmuch"

    invoke-static {v3, v2}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 50
    const/4 v4, 0x0

    .line 51
    .local v4, "logMuchSetSuccess":Z
    const/4 v5, 0x0

    .local v5, "time":I
    :cond_2
    const/16 v6, 0x1388

    if-ge v5, v6, :cond_3

    .line 53
    const-wide/16 v6, 0x12c

    :try_start_0
    invoke-static {v6, v7}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    .line 56
    goto :goto_2

    .line 54
    :catch_0
    move-exception v6

    .line 55
    .local v6, "e":Ljava/lang/InterruptedException;
    invoke-virtual {v6}, Ljava/lang/InterruptedException;->printStackTrace()V

    .line 57
    .end local v6    # "e":Ljava/lang/InterruptedException;
    :goto_2
    add-int/lit16 v5, v5, 0x12c

    .line 58
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "sleep:"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v1, v6}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 59
    invoke-static {v3}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_2

    .line 60
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "set success:"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v3}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 61
    const/4 v4, 0x1

    .line 66
    .end local v5    # "time":I
    :cond_3
    const/4 v1, 0x0

    if-nez v4, :cond_4

    .line 67
    return v1

    .line 69
    :cond_4
    invoke-direct {p0, p2}, Lcom/mediatek/engineermode/tellogsetting/TelLogController;->showDebugLog(Z)V

    .line 70
    nop

    .line 71
    const-string v3, "tel_log"

    invoke-virtual {p1, v3, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v1

    .line 72
    .local v1, "settings":Landroid/content/SharedPreferences;
    invoke-interface {v1}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v3

    .line 73
    .local v3, "editor":Landroid/content/SharedPreferences$Editor;
    const-string v5, "log_enable"

    invoke-interface {v3, v5, p2}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    .line 74
    invoke-interface {v3}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 75
    const/4 v5, 0x1

    return v5
.end method
