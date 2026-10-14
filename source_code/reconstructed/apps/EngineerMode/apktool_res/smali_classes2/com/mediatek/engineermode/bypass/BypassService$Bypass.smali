.class final Lcom/mediatek/engineermode/bypass/BypassService$Bypass;
.super Ljava/lang/Object;
.source "BypassService.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bypass/BypassService;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "Bypass"
.end annotation


# static fields
.field private static final ACTION_RADIO_AVAILABLE:Ljava/lang/String; = "android.intent.action.RADIO_AVAILABLE"

.field private static final ACTION_USB_BYPASS_GETBYPASS:Ljava/lang/String; = "com.via.bypass.action.getbypass"

.field private static final ACTION_USB_BYPASS_GETBYPASS_RESULT:Ljava/lang/String; = "com.via.bypass.action.getbypass_result"

.field private static final ACTION_USB_BYPASS_SETBYPASS:Ljava/lang/String; = "com.via.bypass.action.setbypass"

.field private static final ACTION_USB_BYPASS_SETBYPASS_RESULT:Ljava/lang/String; = "com.via.bypass.action.setbypass_result"

.field private static final ACTION_USB_BYPASS_SETFUNCTION:Ljava/lang/String; = "com.via.bypass.action.setfunction"

.field private static final ACTION_USB_BYPASS_SETTETHERFUNCTION:Ljava/lang/String; = "com.via.bypass.action.settetherfunction"

.field private static final ACTION_VIA_ETS_DEV_CHANGED:Ljava/lang/String; = "via.cdma.action.ets.dev.changed"

.field private static final ACTION_VIA_SET_ETS_DEV:Ljava/lang/String; = "via.cdma.action.set.ets.dev"

.field private static final EXTRAL_VIA_ETS_DEV:Ljava/lang/String; = "via.cdma.extral.ets.dev"

.field private static final VALUE_BYPASS_CODE:Ljava/lang/String; = "com.via.bypass.bypass_code"

.field private static final VALUE_ENABLE_BYPASS:Ljava/lang/String; = "com.via.bypass.enable_bypass"

.field private static final VALUE_ISSET_BYPASS:Ljava/lang/String; = "com.via.bypass.isset_bypass"


# instance fields
.field private mBypassAll:I

.field private final mBypassCodes:[I

.field private mBypassFiles:[Ljava/io/File;

.field private final mBypassName:[Ljava/lang/String;

.field private final mBypassReceiver:Landroid/content/BroadcastReceiver;

.field private mBypassToSet:I

.field private mEtsDevInUse:Z

.field private mUsbManager:Landroid/hardware/usb/UsbManager;

.field final synthetic this$0:Lcom/mediatek/engineermode/bypass/BypassService;


# direct methods
.method public constructor <init>(Lcom/mediatek/engineermode/bypass/BypassService;)V
    .locals 5

    .line 153
    iput-object p1, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->this$0:Lcom/mediatek/engineermode/bypass/BypassService;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 84
    const/4 v0, 0x5

    new-array v0, v0, [I

    fill-array-data v0, :array_0

    iput-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassCodes:[I

    .line 85
    const-string v0, "gps"

    const-string v1, "pcv"

    const-string v2, "atc"

    const-string v3, "ets"

    const-string v4, "data"

    filled-new-array {v0, v1, v2, v3, v4}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassName:[Ljava/lang/String;

    .line 86
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassAll:I

    .line 88
    iput-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mEtsDevInUse:Z

    .line 90
    new-instance v0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass$1;-><init>(Lcom/mediatek/engineermode/bypass/BypassService$Bypass;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassReceiver:Landroid/content/BroadcastReceiver;

    .line 155
    const-class v0, Landroid/hardware/usb/UsbManager;

    invoke-virtual {p1, v0}, Lcom/mediatek/engineermode/bypass/BypassService;->getSystemService(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/hardware/usb/UsbManager;

    iput-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mUsbManager:Landroid/hardware/usb/UsbManager;

    .line 157
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassName:[Ljava/lang/String;

    array-length v0, v0

    new-array v0, v0, [Ljava/io/File;

    iput-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassFiles:[Ljava/io/File;

    .line 158
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassName:[Ljava/lang/String;

    array-length v1, v1

    if-ge v0, v1, :cond_0

    .line 159
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "/sys/class/usb_rawbulk/"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassName:[Ljava/lang/String;

    aget-object v2, v2, v0

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "/enable"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 161
    .local v1, "path":Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassFiles:[Ljava/io/File;

    new-instance v3, Ljava/io/File;

    invoke-direct {v3, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    aput-object v3, v2, v0

    .line 162
    iget v2, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassAll:I

    iget-object v3, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassCodes:[I

    aget v3, v3, v0

    add-int/2addr v2, v3

    iput v2, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassAll:I

    .line 158
    .end local v1    # "path":Ljava/lang/String;
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 165
    .end local v0    # "i":I
    :cond_0
    new-instance v0, Landroid/content/IntentFilter;

    const-string v1, "com.via.bypass.action.setfunction"

    invoke-direct {v0, v1}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    .line 167
    .local v0, "intent":Landroid/content/IntentFilter;
    const-string v1, "com.via.bypass.action.settetherfunction"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 168
    const-string v1, "com.via.bypass.action.setbypass"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 169
    const-string v1, "com.via.bypass.action.getbypass"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 170
    const-string v1, "via.cdma.action.ets.dev.changed"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 171
    const-string v1, "android.intent.action.RADIO_AVAILABLE"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 172
    const-string v1, "android.hardware.usb.action.USB_STATE"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 174
    invoke-static {p1}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object p1

    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassReceiver:Landroid/content/BroadcastReceiver;

    .line 175
    invoke-virtual {p1, v1, v0}, Landroid/support/v4/content/LocalBroadcastManager;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V

    .line 176
    return-void

    :array_0
    .array-data 4
        0x1
        0x2
        0x4
        0x8
        0x10
    .end array-data
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/bypass/BypassService$Bypass;)Landroid/hardware/usb/UsbManager;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    .line 53
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mUsbManager:Landroid/hardware/usb/UsbManager;

    return-object v0
.end method

.method static synthetic access$002(Lcom/mediatek/engineermode/bypass/BypassService$Bypass;Landroid/hardware/usb/UsbManager;)Landroid/hardware/usb/UsbManager;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassService$Bypass;
    .param p1, "x1"    # Landroid/hardware/usb/UsbManager;

    .line 53
    iput-object p1, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mUsbManager:Landroid/hardware/usb/UsbManager;

    return-object p1
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/bypass/BypassService$Bypass;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    .line 53
    invoke-direct {p0}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->closeBypassFunction()V

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/bypass/BypassService$Bypass;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    .line 53
    iget v0, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassAll:I

    return v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/bypass/BypassService$Bypass;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassService$Bypass;
    .param p1, "x1"    # I

    .line 53
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->setBypassMode(I)V

    return-void
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/bypass/BypassService$Bypass;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    .line 53
    invoke-direct {p0}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->getCurrentBypassMode()I

    move-result v0

    return v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/bypass/BypassService$Bypass;Ljava/lang/Boolean;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassService$Bypass;
    .param p1, "x1"    # Ljava/lang/Boolean;
    .param p2, "x2"    # I

    .line 53
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->notifySetBypassResult(Ljava/lang/Boolean;I)V

    return-void
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/bypass/BypassService$Bypass;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    .line 53
    iget v0, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassToSet:I

    return v0
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/bypass/BypassService$Bypass;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassService$Bypass;
    .param p1, "x1"    # I

    .line 53
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->setBypass(I)V

    return-void
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/bypass/BypassService$Bypass;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    .line 53
    iget-boolean v0, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mEtsDevInUse:Z

    return v0
.end method

.method private closeBypassFunction()V
    .locals 3

    .line 304
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mUsbManager:Landroid/hardware/usb/UsbManager;

    const/4 v1, 0x0

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/hardware/usb/UsbManager;->setCurrentFunction(Ljava/lang/String;Z)V

    .line 305
    return-void
.end method

.method private getCurrentBypassMode()I
    .locals 6

    .line 178
    const/4 v0, 0x0

    .line 179
    .local v0, "bypassmode":I
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassCodes:[I

    array-length v2, v2

    const-string v3, "BypassService"

    if-ge v1, v2, :cond_1

    .line 180
    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->readTextFile(I)Ljava/lang/String;

    move-result-object v2

    .line 182
    .local v2, "code":Ljava/lang/String;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "\'"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassFiles:[Ljava/io/File;

    aget-object v5, v5, v1

    invoke-virtual {v5}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "\' value is "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 184
    if-eqz v2, :cond_0

    invoke-virtual {v2}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v3

    const-string v4, "1"

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 185
    iget-object v3, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassCodes:[I

    aget v3, v3, v1

    or-int/2addr v0, v3

    .line 179
    .end local v2    # "code":Ljava/lang/String;
    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 189
    .end local v1    # "i":I
    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getCurrentBypassMode()="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 191
    return v0
.end method

.method private notifySetBypassResult(Ljava/lang/Boolean;I)V
    .locals 2
    .param p1, "isset"    # Ljava/lang/Boolean;
    .param p2, "bypassCode"    # I

    .line 297
    new-instance v0, Landroid/content/Intent;

    const-string v1, "com.via.bypass.action.setbypass_result"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 298
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "com.via.bypass.isset_bypass"

    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/io/Serializable;)Landroid/content/Intent;

    .line 299
    const-string v1, "com.via.bypass.bypass_code"

    invoke-virtual {v0, v1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 300
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->this$0:Lcom/mediatek/engineermode/bypass/BypassService;

    invoke-static {v1}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/support/v4/content/LocalBroadcastManager;->sendBroadcast(Landroid/content/Intent;)Z

    .line 301
    return-void
.end method

.method private readTextFile(I)Ljava/lang/String;
    .locals 3
    .param p1, "index"    # I

    .line 195
    const/4 v0, 0x0

    .line 197
    .local v0, "result":Ljava/lang/String;
    :try_start_0
    invoke-static {p1}, Lcom/mediatek/engineermode/bypass/ShellExe;->readTextFile(I)I

    move-result v1

    .line 198
    .local v1, "ret":I
    if-nez v1, :cond_0

    .line 199
    invoke-static {}, Lcom/mediatek/engineermode/bypass/ShellExe;->getOutput()Ljava/lang/String;

    move-result-object v2

    move-object v0, v2

    goto :goto_0

    .line 202
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/bypass/ShellExe;->getOutput()Ljava/lang/String;

    move-result-object v2
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, v2

    .line 206
    .end local v1    # "ret":I
    :goto_0
    goto :goto_1

    .line 204
    :catch_0
    move-exception v1

    .line 205
    .local v1, "e":Ljava/io/IOException;
    const-string v0, "ERROR.IO_JE"

    .line 207
    .end local v1    # "e":Ljava/io/IOException;
    :goto_1
    return-object v0
.end method

.method private setBypass(I)V
    .locals 8
    .param p1, "bypassmode"    # I

    .line 211
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setBypass bypass = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BypassService"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 212
    invoke-direct {p0}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->getCurrentBypassMode()I

    move-result v0

    .line 213
    .local v0, "bypassResult":I
    const/4 v2, 0x1

    .line 215
    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    .line 213
    if-ne p1, v0, :cond_0

    .line 214
    const-string v3, "setBypass bypass == oldbypass!!"

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 215
    invoke-direct {p0, v2, v0}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->notifySetBypassResult(Ljava/lang/Boolean;I)V

    .line 216
    return-void

    .line 219
    :cond_0
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    iget-object v4, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassCodes:[I

    array-length v5, v4

    if-ge v3, v5, :cond_3

    .line 220
    aget v4, v4, v3

    and-int/2addr v4, p1

    const-string v5, "set property failed ..."

    const-string v6, "Write \'"

    if-eqz v4, :cond_1

    .line 222
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassFiles:[Ljava/io/File;

    aget-object v7, v7, v3

    invoke-virtual {v7}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "1"

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 225
    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v4

    invoke-static {v3}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v7

    invoke-interface {v4, v7}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setBypassEn(Ljava/lang/String;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 229
    goto :goto_1

    .line 226
    :catch_0
    move-exception v4

    .line 227
    .local v4, "e":Ljava/lang/Exception;
    invoke-static {v1, v5}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 228
    invoke-virtual {v4}, Ljava/lang/Exception;->printStackTrace()V

    .line 230
    .end local v4    # "e":Ljava/lang/Exception;
    :goto_1
    iget-object v4, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassCodes:[I

    aget v4, v4, v3

    or-int/2addr v0, v4

    goto :goto_3

    .line 233
    :cond_1
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassFiles:[Ljava/io/File;

    aget-object v7, v7, v3

    invoke-virtual {v7}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "0"

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 236
    :try_start_1
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v4

    invoke-static {v3}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v7

    invoke-interface {v4, v7}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setBypassDis(Ljava/lang/String;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 240
    goto :goto_2

    .line 237
    :catch_1
    move-exception v4

    .line 238
    .restart local v4    # "e":Ljava/lang/Exception;
    invoke-static {v1, v5}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 239
    invoke-virtual {v4}, Ljava/lang/Exception;->printStackTrace()V

    .line 241
    .end local v4    # "e":Ljava/lang/Exception;
    :goto_2
    iget-object v4, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassCodes:[I

    aget v5, v4, v3

    and-int/2addr v5, v0

    if-eqz v5, :cond_2

    .line 242
    aget v4, v4, v3

    xor-int/2addr v0, v4

    .line 246
    :cond_2
    :goto_3
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassFiles:[Ljava/io/File;

    aget-object v5, v5, v3

    invoke-virtual {v5}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "\' successsfully!"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 219
    add-int/lit8 v3, v3, 0x1

    goto/16 :goto_0

    .line 250
    .end local v3    # "i":I
    :cond_3
    invoke-direct {p0, v2, v0}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->notifySetBypassResult(Ljava/lang/Boolean;I)V

    .line 251
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "setBypass success bypassResult = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 252
    return-void
.end method

.method private setBypassMode(I)V
    .locals 2
    .param p1, "bypassmode"    # I

    .line 292
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setBypassMode()="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BypassService"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 294
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->updateBypassMode(I)V

    .line 295
    return-void
.end method

.method private setEtsDev(I)Z
    .locals 9
    .param p1, "bypass"    # I

    .line 267
    invoke-direct {p0}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->getCurrentBypassMode()I

    move-result v0

    .line 268
    .local v0, "oldBypass":I
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "setEtsDev bypass = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " oldBypass = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "BypassService"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 269
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassCodes:[I

    const/4 v3, 0x3

    aget v4, v1, v3

    and-int/2addr v4, p1

    const-string v5, "via.cdma.extral.ets.dev"

    const-string v6, "via.cdma.action.set.ets.dev"

    const/4 v7, 0x1

    if-eqz v4, :cond_0

    aget v1, v1, v3

    and-int/2addr v1, v0

    if-nez v1, :cond_0

    .line 270
    const-string v1, "setEtsDev mEtsDevInUse = true"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 271
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1, v6}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 272
    .local v1, "reintent":Landroid/content/Intent;
    invoke-virtual {v1, v5, v7}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 273
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->this$0:Lcom/mediatek/engineermode/bypass/BypassService;

    invoke-static {v2}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/support/v4/content/LocalBroadcastManager;->sendBroadcast(Landroid/content/Intent;)Z

    .line 274
    iput-boolean v7, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mEtsDevInUse:Z

    .line 275
    return v7

    .line 276
    .end local v1    # "reintent":Landroid/content/Intent;
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassCodes:[I

    aget v4, v1, v3

    and-int/2addr v4, p1

    const/4 v8, 0x0

    if-nez v4, :cond_1

    aget v1, v1, v3

    and-int/2addr v1, v0

    if-eqz v1, :cond_1

    .line 278
    const-string v1, "setEtsDev mEtsDevInUse = false"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 279
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1, v6}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 280
    .restart local v1    # "reintent":Landroid/content/Intent;
    invoke-virtual {v1, v5, v8}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 281
    iget-object v2, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->this$0:Lcom/mediatek/engineermode/bypass/BypassService;

    invoke-static {v2}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/support/v4/content/LocalBroadcastManager;->sendBroadcast(Landroid/content/Intent;)Z

    .line 282
    iput-boolean v8, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mEtsDevInUse:Z

    .line 283
    return v7

    .line 285
    .end local v1    # "reintent":Landroid/content/Intent;
    :cond_1
    return v8
.end method


# virtual methods
.method updateBypassMode(I)V
    .locals 3
    .param p1, "bypassmode"    # I

    .line 255
    const-string v0, "BypassService"

    const-string v1, "updateBypassMode"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 257
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->setEtsDev(I)Z

    move-result v1

    if-nez v1, :cond_0

    .line 259
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->setBypass(I)V

    goto :goto_0

    .line 261
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "updateBypassMode mBypassToSet = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassToSet:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 262
    iput p1, p0, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;->mBypassToSet:I

    .line 264
    :goto_0
    return-void
.end method
