.class public Lcom/mediatek/engineermode/bypass/BypassSettings;
.super Landroid/app/Activity;
.source "BypassSettings.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter;
    }
.end annotation


# static fields
.field private static final ACTION_MTK_LOGGER:Ljava/lang/String; = "com.mediatek.mtklogger.bypass"

.field private static final ACTION_MTK_LOGGER_RESULT:Ljava/lang/String; = "com.via.bypass.loggerui"

.field private static final ACTION_USB_BYPASS_GETBYPASS:Ljava/lang/String; = "com.via.bypass.action.getbypass"

.field private static final ACTION_USB_BYPASS_GETBYPASS_RESULT:Ljava/lang/String; = "com.via.bypass.action.getbypass_result"

.field private static final ACTION_USB_BYPASS_SETBYPASS:Ljava/lang/String; = "com.via.bypass.action.setbypass"

.field private static final ACTION_USB_BYPASS_SETBYPASS_RESULT:Ljava/lang/String; = "com.via.bypass.action.setbypass_result"

.field private static final ACTION_USB_BYPASS_SETFUNCTION:Ljava/lang/String; = "com.via.bypass.action.setfunction"

.field private static final ACTION_USB_BYPASS_SETTETHERFUNCTION:Ljava/lang/String; = "com.via.bypass.action.settetherfunction"

.field private static final BYPASS_CODE_ETS:I = 0x8

.field private static final CMD_CODE:Ljava/lang/String; = "cmd_code"

.field private static final CMD_CODE_ALL:Ljava/lang/String; = "all"

.field private static final CMD_FILE:Ljava/lang/String; = "cmd_file"

.field private static final CMD_NAME:Ljava/lang/String; = "cmd_name"

.field private static final CMD_NAME_C2K_STATUS:Ljava/lang/String; = "get_c2klog_status"

.field private static final CMD_NAME_DISABLE:Ljava/lang/String; = "disable"

.field private static final CMD_NAME_ENABLE:Ljava/lang/String; = "enable"

.field private static final CMD_NAME_QUERY:Ljava/lang/String; = "query"

.field private static final CMD_RESULT:Ljava/lang/String; = "cmd_result"

.field private static final DBG:Z = true

.field private static final DIALOG_WARNING:I = 0x1

.field private static final OPT_MENU_ITEM_BYPASS_ALL:I = 0x1

.field private static final OPT_MENU_ITEM_CLOSS_BYPASS:I = 0x2

.field public static final PREF_SERV_ENABLE:Ljava/lang/String; = "service_enable"

.field private static final TAG:Ljava/lang/String; = "BypassSettings"

.field public static final USBMANAGER_ACTION_USB_STATE:Ljava/lang/String; = "android.hardware.usb.action.USB_STATE"

.field private static final USBMANAGER_USB_CONNECTED:Ljava/lang/String; = "connected"

.field private static final USB_FUNCTION_BYPASS:Ljava/lang/String; = "via_bypass"

.field private static final VALUE_BYPASS_CODE:Ljava/lang/String; = "com.via.bypass.bypass_code"

.field private static final VALUE_ENABLE_BYPASS:Ljava/lang/String; = "com.via.bypass.enable_bypass"

.field private static final VALUE_ISSET_BYPASS:Ljava/lang/String; = "com.via.bypass.isset_bypass"


# instance fields
.field private mBypassAdapter:Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mBypassAllCode:I

.field private mBypassCode:I

.field private mBypassCodes:[I

.field private mBypassEnabled:Z

.field private mBypassNames:[Ljava/lang/String;

.field private final mBypassNone:I

.field private mCBBypassServiceEnable:Landroid/widget/CheckBox;

.field private mCbRndis:Landroid/widget/CheckBox;

.field private mCheckedChangeListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

.field private mCmdCode:Ljava/lang/String;

.field private mCmdFile:Ljava/lang/String;

.field private mCmdName:Ljava/lang/String;

.field private mDialog:Landroid/app/Dialog;

.field private mIsBypassMode:Z

.field private mIsPreparingForRndis:Z

.field private mIsQueryingBypass:Z

.field private mIsQueryingMtkLogger:Z

.field private mIsSettingBypass:Z

.field private mIsSettingRndis:Z

.field private mIsSettingUsb:Z

.field private mLaunchByCommand:Z

.field private mListener:Landroid/widget/AdapterView$OnItemClickListener;

.field private mLock:Ljava/lang/Object;

.field private mLvBypass:Landroid/widget/ListView;

.field private mPendingBypassCode:I

.field private final mReceiver:Landroid/content/BroadcastReceiver;

.field private mServEnablePressed:Landroid/view/View$OnClickListener;

.field private mUsbConnected:Z


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 80
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 128
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassNone:I

    .line 134
    iput-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassEnabled:Z

    .line 135
    iput v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassAllCode:I

    .line 136
    iput v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassCode:I

    .line 137
    iput-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsBypassMode:Z

    .line 138
    iput-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mUsbConnected:Z

    .line 139
    iput-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsSettingBypass:Z

    .line 140
    iput-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsSettingUsb:Z

    .line 141
    iput-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsQueryingBypass:Z

    .line 142
    new-instance v1, Ljava/lang/Object;

    invoke-direct {v1}, Ljava/lang/Object;-><init>()V

    iput-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mLock:Ljava/lang/Object;

    .line 143
    const/4 v1, 0x0

    iput-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mDialog:Landroid/app/Dialog;

    .line 147
    iput-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsQueryingMtkLogger:Z

    .line 148
    iput v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mPendingBypassCode:I

    .line 149
    iput-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsPreparingForRndis:Z

    .line 150
    iput-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsSettingRndis:Z

    .line 156
    new-instance v0, Lcom/mediatek/engineermode/bypass/BypassSettings$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/bypass/BypassSettings$1;-><init>(Lcom/mediatek/engineermode/bypass/BypassSettings;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mReceiver:Landroid/content/BroadcastReceiver;

    .line 230
    new-instance v0, Lcom/mediatek/engineermode/bypass/BypassSettings$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/bypass/BypassSettings$2;-><init>(Lcom/mediatek/engineermode/bypass/BypassSettings;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mListener:Landroid/widget/AdapterView$OnItemClickListener;

    .line 258
    new-instance v0, Lcom/mediatek/engineermode/bypass/BypassSettings$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/bypass/BypassSettings$3;-><init>(Lcom/mediatek/engineermode/bypass/BypassSettings;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCheckedChangeListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    .line 281
    new-instance v0, Lcom/mediatek/engineermode/bypass/BypassSettings$4;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/bypass/BypassSettings$4;-><init>(Lcom/mediatek/engineermode/bypass/BypassSettings;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mServEnablePressed:Landroid/view/View$OnClickListener;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/bypass/BypassSettings;)Ljava/lang/Object;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;

    .line 80
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mLock:Ljava/lang/Object;

    return-object v0
.end method

.method static synthetic access$1002(Lcom/mediatek/engineermode/bypass/BypassSettings;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;
    .param p1, "x1"    # Z

    .line 80
    iput-boolean p1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsQueryingBypass:Z

    return p1
.end method

.method static synthetic access$102(Lcom/mediatek/engineermode/bypass/BypassSettings;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;
    .param p1, "x1"    # Z

    .line 80
    iput-boolean p1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsSettingUsb:Z

    return p1
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/bypass/BypassSettings;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;

    .line 80
    iget-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mLaunchByCommand:Z

    return v0
.end method

.method static synthetic access$1200(Lcom/mediatek/engineermode/bypass/BypassSettings;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;

    .line 80
    invoke-direct {p0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->doCommand()V

    return-void
.end method

.method static synthetic access$1300(Lcom/mediatek/engineermode/bypass/BypassSettings;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;

    .line 80
    iget-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsQueryingMtkLogger:Z

    return v0
.end method

.method static synthetic access$1302(Lcom/mediatek/engineermode/bypass/BypassSettings;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;
    .param p1, "x1"    # Z

    .line 80
    iput-boolean p1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsQueryingMtkLogger:Z

    return p1
.end method

.method static synthetic access$1400(Lcom/mediatek/engineermode/bypass/BypassSettings;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;

    .line 80
    iget-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsSettingRndis:Z

    return v0
.end method

.method static synthetic access$1402(Lcom/mediatek/engineermode/bypass/BypassSettings;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;
    .param p1, "x1"    # Z

    .line 80
    iput-boolean p1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsSettingRndis:Z

    return p1
.end method

.method static synthetic access$1500(Lcom/mediatek/engineermode/bypass/BypassSettings;Ljava/lang/Boolean;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;
    .param p1, "x1"    # Ljava/lang/Boolean;

    .line 80
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->enableBypassTether(Ljava/lang/Boolean;)V

    return-void
.end method

.method static synthetic access$1600(Lcom/mediatek/engineermode/bypass/BypassSettings;Ljava/lang/Boolean;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;
    .param p1, "x1"    # Ljava/lang/Boolean;

    .line 80
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->enableBypass(Ljava/lang/Boolean;)V

    return-void
.end method

.method static synthetic access$1700(Lcom/mediatek/engineermode/bypass/BypassSettings;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;

    .line 80
    iget v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mPendingBypassCode:I

    return v0
.end method

.method static synthetic access$1702(Lcom/mediatek/engineermode/bypass/BypassSettings;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;
    .param p1, "x1"    # I

    .line 80
    iput p1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mPendingBypassCode:I

    return p1
.end method

.method static synthetic access$1800(Lcom/mediatek/engineermode/bypass/BypassSettings;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;
    .param p1, "x1"    # I

    .line 80
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->setBypassMode(I)V

    return-void
.end method

.method static synthetic access$1900(Lcom/mediatek/engineermode/bypass/BypassSettings;)[I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;

    .line 80
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassCodes:[I

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/bypass/BypassSettings;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;

    .line 80
    iget-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mUsbConnected:Z

    return v0
.end method

.method static synthetic access$2000(Lcom/mediatek/engineermode/bypass/BypassSettings;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;

    .line 80
    invoke-direct {p0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->queryMtkLogger()V

    return-void
.end method

.method static synthetic access$202(Lcom/mediatek/engineermode/bypass/BypassSettings;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;
    .param p1, "x1"    # Z

    .line 80
    iput-boolean p1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mUsbConnected:Z

    return p1
.end method

.method static synthetic access$2100(Lcom/mediatek/engineermode/bypass/BypassSettings;)Landroid/widget/ListView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;

    .line 80
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mLvBypass:Landroid/widget/ListView;

    return-object v0
.end method

.method static synthetic access$2200(Lcom/mediatek/engineermode/bypass/BypassSettings;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;

    .line 80
    invoke-direct {p0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->savePrefs()V

    return-void
.end method

.method static synthetic access$2300(Lcom/mediatek/engineermode/bypass/BypassSettings;)[Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;

    .line 80
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassNames:[Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$2400(Lcom/mediatek/engineermode/bypass/BypassSettings;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;

    .line 80
    iget-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassEnabled:Z

    return v0
.end method

.method static synthetic access$2500(Lcom/mediatek/engineermode/bypass/BypassSettings;)Landroid/widget/CheckBox;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;

    .line 80
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCbRndis:Landroid/widget/CheckBox;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/bypass/BypassSettings;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;

    .line 80
    iget-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsBypassMode:Z

    return v0
.end method

.method static synthetic access$302(Lcom/mediatek/engineermode/bypass/BypassSettings;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;
    .param p1, "x1"    # Z

    .line 80
    iput-boolean p1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsBypassMode:Z

    return p1
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/bypass/BypassSettings;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;

    .line 80
    invoke-direct {p0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->queryBypassMode()V

    return-void
.end method

.method static synthetic access$502(Lcom/mediatek/engineermode/bypass/BypassSettings;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;
    .param p1, "x1"    # Z

    .line 80
    iput-boolean p1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsSettingBypass:Z

    return p1
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/bypass/BypassSettings;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;

    .line 80
    iget v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassCode:I

    return v0
.end method

.method static synthetic access$602(Lcom/mediatek/engineermode/bypass/BypassSettings;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;
    .param p1, "x1"    # I

    .line 80
    iput p1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassCode:I

    return p1
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/bypass/BypassSettings;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;
    .param p1, "x1"    # I

    .line 80
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->updateBypassList(I)V

    return-void
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/bypass/BypassSettings;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;

    .line 80
    iget-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsPreparingForRndis:Z

    return v0
.end method

.method static synthetic access$802(Lcom/mediatek/engineermode/bypass/BypassSettings;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;
    .param p1, "x1"    # Z

    .line 80
    iput-boolean p1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsPreparingForRndis:Z

    return p1
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/bypass/BypassSettings;Ljava/lang/Boolean;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;
    .param p1, "x1"    # Ljava/lang/Boolean;

    .line 80
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->enableRndis(Ljava/lang/Boolean;)V

    return-void
.end method

.method private doCommand()V
    .locals 16

    .line 560
    move-object/from16 v1, p0

    iget-object v0, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCmdName:Ljava/lang/String;

    if-eqz v0, :cond_23

    iget-object v0, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCmdCode:Ljava/lang/String;

    if-eqz v0, :cond_23

    iget-object v0, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCmdFile:Ljava/lang/String;

    if-nez v0, :cond_0

    goto/16 :goto_d

    .line 563
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "mCmdName is "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCmdName:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "BypassSettings"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 564
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mCmdCode is "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCmdCode:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 565
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mCmdFile is "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCmdFile:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 567
    const/4 v0, -0x1

    .line 568
    .local v0, "ret":I
    const-string v3, "sys.usb.config"

    invoke-static {v3}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 569
    .local v3, "config":Ljava/lang/String;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "sys.usb.config: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 570
    const-string v4, "rndis"

    invoke-virtual {v3, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v5

    const/4 v6, 0x0

    const/4 v7, 0x1

    if-eqz v5, :cond_1

    const-string v5, "via_bypass"

    invoke-virtual {v3, v5}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_1

    move v5, v7

    goto :goto_0

    :cond_1
    move v5, v6

    .line 572
    .local v5, "rndisEnable":Z
    :goto_0
    iget-object v8, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCmdCode:Ljava/lang/String;

    invoke-virtual {v8, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    const-string v8, "disable"

    const-string v9, "query"

    const-string v10, "enable"

    const v11, 0x639e22e8

    const v12, 0x66f18c8

    const v13, -0x4d6ada7d

    const/4 v14, -0x1

    const/4 v15, 0x2

    if-eqz v4, :cond_d

    .line 573
    iget-object v2, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCmdName:Ljava/lang/String;

    invoke-virtual {v2}, Ljava/lang/String;->hashCode()I

    move-result v4

    if-eq v4, v13, :cond_5

    if-eq v4, v12, :cond_4

    if-eq v4, v11, :cond_3

    :cond_2
    goto :goto_1

    :cond_3
    invoke-virtual {v2, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    move v14, v15

    goto :goto_1

    :cond_4
    invoke-virtual {v2, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    move v14, v6

    goto :goto_1

    :cond_5
    invoke-virtual {v2, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    move v14, v7

    :goto_1
    if-eqz v14, :cond_b

    if-eq v14, v7, :cond_8

    if-eq v14, v15, :cond_6

    goto :goto_3

    .line 593
    :cond_6
    if-eqz v5, :cond_7

    .line 594
    iget-object v2, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mLvBypass:Landroid/widget/ListView;

    invoke-virtual {v2, v7}, Landroid/widget/ListView;->setEnabled(Z)V

    .line 595
    invoke-static {v6}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->enableRndis(Ljava/lang/Boolean;)V

    .line 597
    :cond_7
    const/4 v0, 0x0

    .line 598
    goto :goto_3

    .line 578
    :cond_8
    if-nez v5, :cond_a

    .line 579
    iget-object v2, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mLvBypass:Landroid/widget/ListView;

    invoke-virtual {v2, v6}, Landroid/widget/ListView;->setEnabled(Z)V

    .line 580
    iget v2, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassCode:I

    if-lez v2, :cond_9

    .line 582
    invoke-static {v6}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->enableBypass(Ljava/lang/Boolean;)V

    .line 583
    invoke-direct {v1, v6}, Lcom/mediatek/engineermode/bypass/BypassSettings;->setBypassMode(I)V

    .line 584
    invoke-direct {v1, v6}, Lcom/mediatek/engineermode/bypass/BypassSettings;->updateBypassList(I)V

    .line 585
    iput-boolean v7, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsPreparingForRndis:Z

    goto :goto_2

    .line 587
    :cond_9
    invoke-static {v7}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->enableRndis(Ljava/lang/Boolean;)V

    .line 590
    :cond_a
    :goto_2
    const/4 v0, 0x0

    .line 591
    goto :goto_3

    .line 575
    :cond_b
    if-eqz v5, :cond_c

    move v6, v7

    :cond_c
    move v0, v6

    .line 576
    nop

    .line 600
    :goto_3
    move v2, v0

    goto/16 :goto_8

    .line 603
    :cond_d
    const/4 v4, -0x1

    .line 604
    .local v4, "code":I
    iget-object v6, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCmdCode:Ljava/lang/String;

    const-string v15, "all"

    invoke-virtual {v6, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_e

    .line 605
    iget v4, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassAllCode:I

    goto :goto_5

    .line 607
    :cond_e
    const/4 v6, 0x0

    .local v6, "i":I
    :goto_4
    iget-object v15, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassNames:[Ljava/lang/String;

    array-length v7, v15

    if-ge v6, v7, :cond_10

    .line 608
    iget-object v7, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCmdCode:Ljava/lang/String;

    aget-object v15, v15, v6

    invoke-virtual {v7, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_f

    .line 609
    iget-object v7, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassCodes:[I

    aget v4, v7, v6

    .line 607
    :cond_f
    add-int/lit8 v6, v6, 0x1

    const/4 v7, 0x1

    goto :goto_4

    .line 613
    .end local v6    # "i":I
    :cond_10
    :goto_5
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "code is "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v6}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 614
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "mBypassCode is "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v7, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassCode:I

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v6}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 615
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "mBypassAllCode is "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v7, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassAllCode:I

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v6}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 617
    if-eq v4, v14, :cond_20

    .line 618
    iget v2, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassCode:I

    .line 619
    .local v2, "bypassSet":I
    iget-object v6, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCmdName:Ljava/lang/String;

    invoke-virtual {v6}, Ljava/lang/String;->hashCode()I

    move-result v7

    if-eq v7, v13, :cond_14

    if-eq v7, v12, :cond_13

    if-eq v7, v11, :cond_12

    :cond_11
    goto :goto_6

    :cond_12
    invoke-virtual {v6, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_11

    const/4 v14, 0x2

    goto :goto_6

    :cond_13
    invoke-virtual {v6, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_11

    const/4 v14, 0x0

    goto :goto_6

    :cond_14
    invoke-virtual {v6, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_11

    const/4 v14, 0x1

    :goto_6
    if-eqz v14, :cond_1d

    const/4 v6, 0x1

    if-eq v14, v6, :cond_19

    const/4 v6, 0x2

    if-eq v14, v6, :cond_15

    goto :goto_7

    .line 642
    :cond_15
    if-eqz v5, :cond_16

    .line 643
    const/4 v0, -0x1

    .line 644
    move v2, v0

    goto :goto_8

    .line 646
    :cond_16
    iget v6, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassCode:I

    and-int/2addr v6, v4

    if-eqz v6, :cond_18

    .line 647
    not-int v6, v4

    and-int/2addr v2, v6

    .line 648
    iget-boolean v6, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsBypassMode:Z

    if-eqz v6, :cond_17

    if-nez v2, :cond_17

    .line 649
    const/4 v6, 0x0

    invoke-static {v6}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v6

    invoke-direct {v1, v6}, Lcom/mediatek/engineermode/bypass/BypassSettings;->enableBypass(Ljava/lang/Boolean;)V

    .line 651
    :cond_17
    invoke-direct {v1, v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->setBypassMode(I)V

    .line 653
    :cond_18
    const/4 v0, 0x0

    .line 654
    move v2, v0

    goto :goto_8

    .line 628
    :cond_19
    if-eqz v5, :cond_1a

    .line 629
    const/4 v0, -0x1

    .line 630
    move v2, v0

    goto :goto_8

    .line 632
    :cond_1a
    iget v6, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassCode:I

    and-int/2addr v6, v4

    if-eq v6, v4, :cond_1c

    .line 633
    or-int/2addr v2, v4

    .line 634
    iget-boolean v6, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsBypassMode:Z

    if-nez v6, :cond_1b

    .line 635
    const/4 v6, 0x1

    invoke-static {v6}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v7

    invoke-direct {v1, v7}, Lcom/mediatek/engineermode/bypass/BypassSettings;->enableBypass(Ljava/lang/Boolean;)V

    .line 637
    :cond_1b
    invoke-direct {v1, v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->setBypassMode(I)V

    .line 639
    :cond_1c
    const/4 v0, 0x0

    .line 640
    move v2, v0

    goto :goto_8

    .line 621
    :cond_1d
    const/4 v6, 0x0

    iget v7, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassAllCode:I

    if-ne v4, v7, :cond_1e

    .line 622
    iget v0, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassCode:I

    move v2, v0

    goto :goto_8

    .line 624
    :cond_1e
    iget v7, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassCode:I

    and-int/2addr v7, v4

    if-lez v7, :cond_1f

    const/4 v6, 0x1

    :cond_1f
    move v0, v6

    .line 626
    move v2, v0

    goto :goto_8

    .line 661
    .end local v2    # "bypassSet":I
    .end local v4    # "code":I
    :cond_20
    :goto_7
    move v2, v0

    .end local v0    # "ret":I
    .local v2, "ret":I
    :goto_8
    new-instance v0, Ljava/io/File;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCmdFile:Ljava/lang/String;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, ".tmp"

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v0, v4}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    move-object v4, v0

    .line 662
    .local v4, "handle":Ljava/io/File;
    const/4 v6, 0x0

    .line 664
    .local v6, "bos":Ljava/io/OutputStream;
    :try_start_0
    new-instance v0, Ljava/io/FileOutputStream;

    const/4 v7, 0x1

    invoke-direct {v0, v4, v7}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;Z)V

    move-object v6, v0

    .line 665
    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-virtual {v6, v0}, Ljava/io/OutputStream;->write([B)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 670
    nop

    .line 672
    :try_start_1
    invoke-virtual {v6}, Ljava/io/OutputStream;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    .line 675
    :goto_9
    goto :goto_a

    .line 673
    :catch_0
    move-exception v0

    move-object v7, v0

    move-object v0, v7

    .line 674
    .local v0, "ex":Ljava/io/IOException;
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    .end local v0    # "ex":Ljava/io/IOException;
    goto :goto_9

    .line 670
    :catchall_0
    move-exception v0

    move-object v7, v0

    goto :goto_b

    .line 666
    :catch_1
    move-exception v0

    .line 667
    .restart local v0    # "ex":Ljava/io/IOException;
    :try_start_2
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    .line 668
    invoke-virtual {v4}, Ljava/io/File;->delete()Z
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 670
    nop

    .end local v0    # "ex":Ljava/io/IOException;
    if-eqz v6, :cond_21

    .line 672
    :try_start_3
    invoke-virtual {v6}, Ljava/io/OutputStream;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_0

    goto :goto_9

    .line 678
    :cond_21
    :goto_a
    new-instance v0, Ljava/io/File;

    iget-object v7, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCmdFile:Ljava/lang/String;

    invoke-direct {v0, v7}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v0}, Ljava/io/File;->renameTo(Ljava/io/File;)Z

    .line 680
    const/4 v0, 0x0

    iput-object v0, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCmdName:Ljava/lang/String;

    .line 681
    iput-object v0, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCmdCode:Ljava/lang/String;

    .line 682
    iput-object v0, v1, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCmdFile:Ljava/lang/String;

    .line 683
    return-void

    .line 670
    :goto_b
    if-eqz v6, :cond_22

    .line 672
    :try_start_4
    invoke-virtual {v6}, Ljava/io/OutputStream;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_2

    .line 675
    goto :goto_c

    .line 673
    :catch_2
    move-exception v0

    move-object v8, v0

    move-object v0, v8

    .line 674
    .restart local v0    # "ex":Ljava/io/IOException;
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    .line 677
    .end local v0    # "ex":Ljava/io/IOException;
    :cond_22
    :goto_c
    throw v7

    .line 561
    .end local v2    # "ret":I
    .end local v3    # "config":Ljava/lang/String;
    .end local v4    # "handle":Ljava/io/File;
    .end local v5    # "rndisEnable":Z
    .end local v6    # "bos":Ljava/io/OutputStream;
    :cond_23
    :goto_d
    return-void
.end method

.method private enableBypass(Ljava/lang/Boolean;)V
    .locals 2
    .param p1, "enable"    # Ljava/lang/Boolean;

    .line 507
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "enableBypass("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, ")"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BypassSettings"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 509
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsSettingUsb:Z

    .line 510
    new-instance v0, Landroid/content/Intent;

    const-string v1, "com.via.bypass.action.setfunction"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 511
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "com.via.bypass.enable_bypass"

    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/io/Serializable;)Landroid/content/Intent;

    .line 512
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/support/v4/content/LocalBroadcastManager;->sendBroadcast(Landroid/content/Intent;)Z

    .line 513
    return-void
.end method

.method private enableBypassTether(Ljava/lang/Boolean;)V
    .locals 2
    .param p1, "enable"    # Ljava/lang/Boolean;

    .line 517
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "enableBypassTether("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, ")"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BypassSettings"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 519
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsSettingUsb:Z

    .line 520
    new-instance v0, Landroid/content/Intent;

    const-string v1, "com.via.bypass.action.settetherfunction"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 521
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "com.via.bypass.enable_bypass"

    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/io/Serializable;)Landroid/content/Intent;

    .line 522
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/support/v4/content/LocalBroadcastManager;->sendBroadcast(Landroid/content/Intent;)Z

    .line 523
    return-void
.end method

.method private enableRndis(Ljava/lang/Boolean;)V
    .locals 3
    .param p1, "enable"    # Ljava/lang/Boolean;

    .line 527
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "enableRndis("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, ")"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BypassSettings"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 529
    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 530
    iget-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mLaunchByCommand:Z

    const/4 v1, 0x1

    const/16 v2, 0x8

    if-nez v0, :cond_0

    .line 532
    iput v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mPendingBypassCode:I

    .line 533
    iput-boolean v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsSettingRndis:Z

    .line 534
    invoke-direct {p0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->queryMtkLogger()V

    .line 535
    iget v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassCode:I

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->updateBypassList(I)V

    goto :goto_0

    .line 537
    :cond_0
    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->enableBypassTether(Ljava/lang/Boolean;)V

    .line 538
    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->setBypassMode(I)V

    .line 539
    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->updateBypassList(I)V

    goto :goto_0

    .line 542
    :cond_1
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->enableBypassTether(Ljava/lang/Boolean;)V

    .line 543
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->setBypassMode(I)V

    .line 544
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->updateBypassList(I)V

    .line 546
    :goto_0
    return-void
.end method

.method private queryBypassMode()V
    .locals 2

    .line 388
    const-string v0, "BypassSettings"

    const-string v1, "queryBypassMode()"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 389
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsQueryingBypass:Z

    .line 390
    new-instance v0, Landroid/content/Intent;

    const-string v1, "com.via.bypass.action.getbypass"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 391
    .local v0, "intent":Landroid/content/Intent;
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/support/v4/content/LocalBroadcastManager;->sendBroadcast(Landroid/content/Intent;)Z

    .line 392
    return-void
.end method

.method private queryMtkLogger()V
    .locals 3

    .line 395
    const-string v0, "BypassSettings"

    const-string v1, "queryBypassMode()"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 396
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsQueryingMtkLogger:Z

    .line 397
    new-instance v0, Landroid/content/Intent;

    const-string v1, "com.mediatek.mtklogger.bypass"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 398
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "cmd_name"

    const-string v2, "get_c2klog_status"

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 399
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/support/v4/content/LocalBroadcastManager;->sendBroadcast(Landroid/content/Intent;)Z

    .line 400
    const-string v1, "Checking MTK logger status..."

    const/4 v2, 0x0

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 401
    return-void
.end method

.method private restorePrefsAndUpdateCheckBox()V
    .locals 5

    .line 299
    const-string v0, "service_enable"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v2

    .line 300
    .local v2, "settings":Landroid/content/SharedPreferences;
    invoke-interface {v2, v0, v1}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v0

    .line 301
    .local v0, "prefServEnable":Z
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "prefServEnable : "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "BypassSettings"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 303
    if-eqz v0, :cond_0

    .line 304
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCBBypassServiceEnable:Landroid/widget/CheckBox;

    const/4 v3, 0x1

    invoke-virtual {v1, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_0

    .line 306
    :cond_0
    iget-object v3, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCBBypassServiceEnable:Landroid/widget/CheckBox;

    invoke-virtual {v3, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 308
    :goto_0
    return-void
.end method

.method private savePrefs()V
    .locals 4

    .line 291
    const-string v0, "service_enable"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v1

    .line 292
    .local v1, "settings":Landroid/content/SharedPreferences;
    invoke-interface {v1}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v2

    .line 294
    .local v2, "editor":Landroid/content/SharedPreferences$Editor;
    iget-object v3, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCBBypassServiceEnable:Landroid/widget/CheckBox;

    invoke-virtual {v3}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v3

    invoke-interface {v2, v0, v3}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    .line 295
    invoke-interface {v2}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 296
    return-void
.end method

.method private setBypassMode(I)V
    .locals 2
    .param p1, "bypassmode"    # I

    .line 550
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setBypassMode("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ")"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BypassSettings"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 552
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsSettingBypass:Z

    .line 553
    new-instance v0, Landroid/content/Intent;

    const-string v1, "com.via.bypass.action.setbypass"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 554
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "com.via.bypass.bypass_code"

    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 555
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/support/v4/content/LocalBroadcastManager;->sendBroadcast(Landroid/content/Intent;)Z

    .line 556
    return-void
.end method

.method private setBypassStatus(I)V
    .locals 3
    .param p1, "bypassmode"    # I

    .line 378
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setEnabled "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassEnabled:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BypassSettings"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 379
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mLvBypass:Landroid/widget/ListView;

    iget-boolean v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassEnabled:Z

    invoke-virtual {v0, v1}, Landroid/widget/ListView;->setEnabled(Z)V

    .line 382
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mLvBypass:Landroid/widget/ListView;

    invoke-virtual {v1}, Landroid/widget/ListView;->getCount()I

    move-result v1

    if-ge v0, v1, :cond_1

    .line 383
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mLvBypass:Landroid/widget/ListView;

    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassCodes:[I

    aget v2, v2, v0

    and-int/2addr v2, p1

    if-eqz v2, :cond_0

    const/4 v2, 0x1

    goto :goto_1

    :cond_0
    const/4 v2, 0x0

    :goto_1
    invoke-virtual {v1, v0, v2}, Landroid/widget/ListView;->setItemChecked(IZ)V

    .line 382
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 385
    .end local v0    # "i":I
    :cond_1
    return-void
.end method

.method private updateBypassList(I)V
    .locals 3
    .param p1, "bypassmode"    # I

    .line 445
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "updateBypassList() mUsbConnected = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mUsbConnected:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", mIsSettingBypass = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsSettingBypass:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", mIsSettingUsb = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsSettingUsb:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", mIsQueryingBypass = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsQueryingBypass:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", mIsQueryingMtkLogger = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsQueryingMtkLogger:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BypassSettings"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 450
    iget-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mUsbConnected:Z

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsSettingBypass:Z

    if-nez v0, :cond_0

    iget-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsSettingUsb:Z

    if-nez v0, :cond_0

    iget-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsQueryingBypass:Z

    if-nez v0, :cond_0

    iget-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsQueryingMtkLogger:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    iput-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassEnabled:Z

    .line 453
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "updateBypassList() bypassmode = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", mBypassEnabled = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassEnabled:Z

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 456
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->setBypassStatus(I)V

    .line 457
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassAdapter:Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter;->notifyDataSetChanged()V

    .line 458
    return-void
.end method

.method private waitForFinished()V
    .locals 3

    .line 755
    :goto_0
    iget-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsSettingBypass:Z

    if-nez v0, :cond_1

    iget-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsSettingUsb:Z

    if-nez v0, :cond_1

    iget-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsQueryingBypass:Z

    if-eqz v0, :cond_0

    goto :goto_1

    .line 764
    :cond_0
    return-void

    .line 756
    :cond_1
    :goto_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "wait... "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsSettingBypass:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, " "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsSettingUsb:Z

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsQueryingBypass:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BypassSettings"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 759
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mLock:Ljava/lang/Object;

    const-wide/16 v1, 0x64

    invoke-virtual {v0, v1, v2}, Ljava/lang/Object;->wait(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    .line 762
    goto :goto_0

    .line 760
    :catch_0
    move-exception v0

    .line 761
    .local v0, "e":Ljava/lang/InterruptedException;
    goto :goto_0
.end method


# virtual methods
.method public disableBypassModeWait(I)I
    .locals 4
    .param p1, "mask"    # I

    .line 711
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mLock:Ljava/lang/Object;

    monitor-enter v0

    .line 712
    :try_start_0
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->queryBypassModeWait(I)I

    .line 713
    iget v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassCode:I

    not-int v2, p1

    and-int/2addr v1, v2

    .line 714
    .local v1, "newMode":I
    const/4 v2, 0x0

    if-nez v1, :cond_0

    .line 715
    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/bypass/BypassSettings;->enableBypass(Ljava/lang/Boolean;)V

    .line 717
    :cond_0
    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->setBypassMode(I)V

    .line 718
    invoke-direct {p0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->waitForFinished()V

    .line 719
    iget v3, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassCode:I

    and-int/2addr v3, p1

    if-nez v3, :cond_1

    goto :goto_0

    :cond_1
    const/4 v2, -0x1

    :goto_0
    monitor-exit v0

    return v2

    .line 720
    .end local v1    # "newMode":I
    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public enableBypassModeWait(I)I
    .locals 3
    .param p1, "mask"    # I

    .line 692
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mLock:Ljava/lang/Object;

    monitor-enter v0

    .line 693
    :try_start_0
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->queryBypassModeWait(I)I

    .line 694
    iget v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassCode:I

    or-int/2addr v1, p1

    .line 695
    .local v1, "newMode":I
    iget-boolean v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsBypassMode:Z

    if-nez v2, :cond_0

    .line 696
    const/4 v2, 0x1

    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->enableBypass(Ljava/lang/Boolean;)V

    .line 698
    :cond_0
    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->setBypassMode(I)V

    .line 699
    invoke-direct {p0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->waitForFinished()V

    .line 700
    iget v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassCode:I

    and-int/2addr v2, p1

    if-eqz v2, :cond_1

    const/4 v2, 0x0

    goto :goto_0

    :cond_1
    const/4 v2, -0x1

    :goto_0
    monitor-exit v0

    return v2

    .line 701
    .end local v1    # "newMode":I
    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 312
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 313
    const v0, 0x7f080029

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->setContentView(I)V

    .line 315
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const v1, 0x7f010021

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassNames:[Ljava/lang/String;

    .line 316
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const v1, 0x7f010020

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getIntArray(I)[I

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassCodes:[I

    .line 317
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassCodes:[I

    array-length v2, v1

    if-ge v0, v2, :cond_0

    .line 318
    iget v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassAllCode:I

    aget v1, v1, v0

    add-int/2addr v2, v1

    iput v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassAllCode:I

    .line 317
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 321
    .end local v0    # "i":I
    :cond_0
    const v0, 0x7f060556

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ListView;

    iput-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mLvBypass:Landroid/widget/ListView;

    .line 322
    new-instance v0, Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter;

    invoke-direct {v0, p0, p0}, Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter;-><init>(Lcom/mediatek/engineermode/bypass/BypassSettings;Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassAdapter:Lcom/mediatek/engineermode/bypass/BypassSettings$BypassAdapter;

    .line 323
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mLvBypass:Landroid/widget/ListView;

    invoke-virtual {v1, v0}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 325
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mLvBypass:Landroid/widget/ListView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ListView;->setItemsCanFocus(Z)V

    .line 326
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mLvBypass:Landroid/widget/ListView;

    const/4 v2, 0x2

    invoke-virtual {v0, v2}, Landroid/widget/ListView;->setChoiceMode(I)V

    .line 327
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mLvBypass:Landroid/widget/ListView;

    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mListener:Landroid/widget/AdapterView$OnItemClickListener;

    invoke-virtual {v0, v2}, Landroid/widget/ListView;->setOnItemClickListener(Landroid/widget/AdapterView$OnItemClickListener;)V

    .line 329
    const v0, 0x7f06026b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCbRndis:Landroid/widget/CheckBox;

    .line 330
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCheckedChangeListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 332
    const v0, 0x7f06025f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCBBypassServiceEnable:Landroid/widget/CheckBox;

    .line 333
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mServEnablePressed:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 334
    invoke-direct {p0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->restorePrefsAndUpdateCheckBox()V

    .line 336
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCbRndis:Landroid/widget/CheckBox;

    const/16 v2, 0x8

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 338
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->getIntent()Landroid/content/Intent;

    move-result-object v0

    const-string v2, "cmd_name"

    invoke-virtual {v0, v2}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCmdName:Ljava/lang/String;

    .line 339
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->getIntent()Landroid/content/Intent;

    move-result-object v0

    const-string v2, "cmd_code"

    invoke-virtual {v0, v2}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCmdCode:Ljava/lang/String;

    .line 340
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->getIntent()Landroid/content/Intent;

    move-result-object v0

    const-string v2, "cmd_file"

    invoke-virtual {v0, v2}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCmdFile:Ljava/lang/String;

    .line 341
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCmdName:Ljava/lang/String;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v0

    if-lez v0, :cond_1

    const/4 v1, 0x1

    :cond_1
    iput-boolean v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mLaunchByCommand:Z

    .line 342
    return-void
.end method

.method public onCreateDialog(I)Landroid/app/Dialog;
    .locals 3
    .param p1, "dialogId"    # I

    .line 346
    const/4 v0, 0x1

    if-eq p1, v0, :cond_0

    .line 370
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreateDialog(I)Landroid/app/Dialog;

    move-result-object v0

    return-object v0

    .line 348
    :cond_0
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 349
    const-string v1, "Warning"

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 350
    const-string v1, "MD logger is running, enable ETS may cause Elog lost. Please stop MD logger first.\n\nEnable ETS anyway? (Not recommended)"

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const/4 v1, 0x0

    .line 353
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    new-instance v1, Lcom/mediatek/engineermode/bypass/BypassSettings$5;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/bypass/BypassSettings$5;-><init>(Lcom/mediatek/engineermode/bypass/BypassSettings;)V

    .line 354
    const-string v2, "Yes"

    invoke-virtual {v0, v2, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const/4 v1, 0x0

    .line 366
    const-string v2, "No"

    invoke-virtual {v0, v2, v1}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 367
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mDialog:Landroid/app/Dialog;

    .line 368
    return-object v0
.end method

.method public onCreateOptionsMenu(Landroid/view/Menu;)Z
    .locals 3
    .param p1, "menu"    # Landroid/view/Menu;

    .line 405
    const/4 v0, 0x0

    const/4 v1, 0x1

    const-string v2, "Bypass all"

    invoke-interface {p1, v0, v1, v0, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 406
    const/4 v1, 0x2

    const-string v2, "Close bypass"

    invoke-interface {p1, v0, v1, v0, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 407
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreateOptionsMenu(Landroid/view/Menu;)Z

    move-result v0

    return v0
.end method

.method protected onDestroy()V
    .locals 2

    .line 499
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 500
    iget-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mLaunchByCommand:Z

    if-eqz v0, :cond_0

    .line 501
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v1}, Landroid/support/v4/content/LocalBroadcastManager;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 503
    :cond_0
    return-void
.end method

.method public onOptionsItemSelected(Landroid/view/MenuItem;)Z
    .locals 4
    .param p1, "item"    # Landroid/view/MenuItem;

    .line 422
    const-string v0, "BypassSettings"

    const-string v1, "onOptionsItemSelected"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 423
    invoke-interface {p1}, Landroid/view/MenuItem;->getItemId()I

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-ne v0, v1, :cond_2

    iget v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassCode:I

    iget v3, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassAllCode:I

    if-eq v0, v3, :cond_2

    .line 424
    and-int/lit8 v0, v0, 0x8

    if-nez v0, :cond_0

    .line 426
    iput v3, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mPendingBypassCode:I

    .line 427
    iput-boolean v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsSettingRndis:Z

    .line 428
    invoke-direct {p0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->queryMtkLogger()V

    .line 429
    iget v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassCode:I

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->updateBypassList(I)V

    .line 430
    invoke-super {p0, p1}, Landroid/app/Activity;->onOptionsItemSelected(Landroid/view/MenuItem;)Z

    move-result v0

    return v0

    .line 432
    :cond_0
    iget-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsBypassMode:Z

    if-nez v0, :cond_1

    .line 433
    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->enableBypass(Ljava/lang/Boolean;)V

    .line 435
    :cond_1
    iget v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassAllCode:I

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->setBypassMode(I)V

    goto :goto_0

    .line 437
    :cond_2
    invoke-interface {p1}, Landroid/view/MenuItem;->getItemId()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_3

    iget-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mIsBypassMode:Z

    if-eqz v0, :cond_3

    .line 438
    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->enableBypass(Ljava/lang/Boolean;)V

    .line 439
    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/bypass/BypassSettings;->setBypassMode(I)V

    .line 441
    :cond_3
    :goto_0
    invoke-super {p0, p1}, Landroid/app/Activity;->onOptionsItemSelected(Landroid/view/MenuItem;)Z

    move-result v0

    return v0
.end method

.method public onPause()V
    .locals 2

    .line 485
    invoke-super {p0}, Landroid/app/Activity;->onPause()V

    .line 487
    const-string v0, "BypassSettings"

    const-string v1, "onPause()"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 489
    iget-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mLaunchByCommand:Z

    if-nez v0, :cond_0

    .line 490
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v1}, Landroid/support/v4/content/LocalBroadcastManager;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 492
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mDialog:Landroid/app/Dialog;

    if-eqz v0, :cond_1

    .line 493
    invoke-virtual {v0}, Landroid/app/Dialog;->dismiss()V

    .line 495
    :cond_1
    return-void
.end method

.method public onPrepareOptionsMenu(Landroid/view/Menu;)Z
    .locals 4
    .param p1, "menu"    # Landroid/view/Menu;

    .line 412
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onPrepareOptionsMenu() Enable = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassEnabled:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BypassSettings"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 413
    const/4 v0, 0x1

    invoke-interface {p1, v0}, Landroid/view/Menu;->findItem(I)Landroid/view/MenuItem;

    move-result-object v1

    iget-boolean v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassEnabled:Z

    const/4 v3, 0x0

    if-eqz v2, :cond_0

    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCbRndis:Landroid/widget/CheckBox;

    .line 414
    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    if-nez v2, :cond_0

    move v2, v0

    goto :goto_0

    :cond_0
    move v2, v3

    :goto_0
    invoke-interface {v1, v2}, Landroid/view/MenuItem;->setEnabled(Z)Landroid/view/MenuItem;

    .line 415
    const/4 v1, 0x2

    invoke-interface {p1, v1}, Landroid/view/Menu;->findItem(I)Landroid/view/MenuItem;

    move-result-object v1

    iget-boolean v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassEnabled:Z

    if-eqz v2, :cond_1

    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mCbRndis:Landroid/widget/CheckBox;

    .line 416
    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    if-nez v2, :cond_1

    goto :goto_1

    :cond_1
    move v0, v3

    :goto_1
    invoke-interface {v1, v0}, Landroid/view/MenuItem;->setEnabled(Z)Landroid/view/MenuItem;

    .line 417
    invoke-super {p0, p1}, Landroid/app/Activity;->onPrepareOptionsMenu(Landroid/view/Menu;)Z

    move-result v0

    return v0
.end method

.method public onResume()V
    .locals 4

    .line 462
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 464
    const-string v0, "BypassSettings"

    const-string v1, "onResume()"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 467
    invoke-direct {p0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->queryBypassMode()V

    .line 469
    iget v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassCode:I

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->updateBypassList(I)V

    .line 471
    invoke-direct {p0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->restorePrefsAndUpdateCheckBox()V

    .line 474
    new-instance v0, Landroid/content/IntentFilter;

    const-string v1, "android.hardware.usb.action.USB_STATE"

    invoke-direct {v0, v1}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    .line 475
    .local v0, "intentFilter":Landroid/content/IntentFilter;
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    .line 477
    new-instance v1, Landroid/content/IntentFilter;

    const-string v2, "com.via.bypass.action.setbypass_result"

    invoke-direct {v1, v2}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    .line 478
    .local v1, "bypass_intentFilter":Landroid/content/IntentFilter;
    const-string v2, "com.via.bypass.action.getbypass_result"

    invoke-virtual {v1, v2}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 479
    const-string v2, "com.via.bypass.loggerui"

    invoke-virtual {v1, v2}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 480
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v2

    iget-object v3, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v2, v3, v1}, Landroid/support/v4/content/LocalBroadcastManager;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V

    .line 481
    return-void
.end method

.method public queryBypassModeWait(I)I
    .locals 6
    .param p1, "mask"    # I

    .line 730
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mLock:Ljava/lang/Object;

    monitor-enter v0

    .line 731
    :try_start_0
    new-instance v1, Landroid/content/IntentFilter;

    const-string v2, "android.hardware.usb.action.USB_STATE"

    invoke-direct {v1, v2}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    .line 732
    .local v1, "intentFilter":Landroid/content/IntentFilter;
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {p0, v2, v1}, Lcom/mediatek/engineermode/bypass/BypassSettings;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    .line 734
    new-instance v2, Landroid/content/IntentFilter;

    const-string v3, "com.via.bypass.action.setbypass_result"

    invoke-direct {v2, v3}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    .line 735
    .local v2, "bypass_intentFilter":Landroid/content/IntentFilter;
    const-string v3, "com.via.bypass.action.getbypass_result"

    invoke-virtual {v2, v3}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 736
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v3

    iget-object v4, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mReceiver:Landroid/content/BroadcastReceiver;

    .line 737
    invoke-virtual {v3, v4, v2}, Landroid/support/v4/content/LocalBroadcastManager;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V

    .line 738
    const-string v3, "BypassSettings"

    const-string v4, "registerReceiver"

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 740
    invoke-direct {p0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->queryBypassMode()V

    .line 741
    invoke-direct {p0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->waitForFinished()V

    .line 742
    iget v3, p0, Lcom/mediatek/engineermode/bypass/BypassSettings;->mBypassCode:I

    and-int/2addr v3, p1

    .line 743
    .local v3, "ret":I
    and-int/lit8 v4, p1, 0xf

    const/16 v5, 0xf

    if-eq v4, v5, :cond_1

    .line 745
    if-lez v3, :cond_0

    const/4 v4, 0x1

    goto :goto_0

    :cond_0
    const/4 v4, 0x0

    :goto_0
    monitor-exit v0

    return v4

    .line 748
    :cond_1
    monitor-exit v0

    return v3

    .line 750
    .end local v1    # "intentFilter":Landroid/content/IntentFilter;
    .end local v2    # "bypass_intentFilter":Landroid/content/IntentFilter;
    .end local v3    # "ret":I
    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method
