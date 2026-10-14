.class public abstract Lcom/mediatek/engineermode/wifi/WiFiTestActivity;
.super Landroid/app/Activity;
.source "WiFiTestActivity.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;
    }
.end annotation


# static fields
.field static final ATPARAM_INDEX_ANTENNA:I = 0x5

.field static final ATPARAM_INDEX_ANTENNA_SWAP:I = 0x99

.field static final ATPARAM_INDEX_BANDWIDTH:I = 0xf

.field static final ATPARAM_INDEX_CHANNEL0:J = 0x12L

.field static final ATPARAM_INDEX_CHANNEL1:J = 0x10012L

.field static final ATPARAM_INDEX_CHANNEL_BANDWIDTH:I = 0x47

.field static final ATPARAM_INDEX_COMMAND:I = 0x1

.field static final ATPARAM_INDEX_CWMODE:I = 0x41

.field static final ATPARAM_INDEX_DATA_BANDWIDTH:I = 0x48

.field static final ATPARAM_INDEX_GI:I = 0x10

.field static final ATPARAM_INDEX_NSS:I = 0x72

.field static final ATPARAM_INDEX_PACKCONTENT:I = 0xc

.field static final ATPARAM_INDEX_PACKCOUNT:I = 0x7

.field static final ATPARAM_INDEX_PACKINTERVAL:I = 0x8

.field static final ATPARAM_INDEX_PACKLENGTH:I = 0x6

.field static final ATPARAM_INDEX_POWER:I = 0x2

.field static final ATPARAM_INDEX_POWER_UNIT:I = 0x1f

.field static final ATPARAM_INDEX_PREAMBLE:I = 0x4

.field static final ATPARAM_INDEX_PRIMARY_SETTING:I = 0x49

.field static final ATPARAM_INDEX_QOS_QUEUE:I = 0xe

.field static final ATPARAM_INDEX_RATE:I = 0x3

.field static final ATPARAM_INDEX_RETRY_LIMIT:I = 0xd

.field static final ATPARAM_INDEX_RX:I = 0x6a

.field static final ATPARAM_INDEX_SET_DBDC_BAND_IDX:I = 0x68

.field static final ATPARAM_INDEX_SET_DBDC_ENABLE:I = 0x6e

.field static final ATPARAM_INDEX_TEMP_COMPENSATION:I = 0x9

.field static final ATPARAM_INDEX_TRANSMITCOUNT_BAND0:I = 0x20

.field static final ATPARAM_INDEX_TRANSMITCOUNT_BAND1:I = 0x120

.field static final ATPARAM_INDEX_TXOP_LIMIT:I = 0xa

.field static final ATPARAM_INDEX_TX_POWER:I = 0x88

.field static final ATPARAM_INDEX_WF0:I = 0x71

.field private static final DIALOG_STOP_TEST:I = 0x4

.field private static final DIALOG_WIFI_FAIL:I = 0x2

.field private static final DIALOG_WIFI_MODE_ERROR:I = 0x3

.field private static final TAG:Ljava/lang/String; = "WifiTestActivity"

.field private static final TIME_1000:J = 0x3e8L


# instance fields
.field private mWifiManager:Landroid/net/wifi/WifiManager;

.field private mWifiStateReceiver:Landroid/content/BroadcastReceiver;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 58
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 110
    new-instance v0, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$1;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTestActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->mWifiStateReceiver:Landroid/content/BroadcastReceiver;

    return-void
.end method

.method private initTest()Z
    .locals 6

    .line 197
    const-string v0, "WifiTestActivity"

    const-string v1, "oncreate and start test mode"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 198
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->mWifiManager:Landroid/net/wifi/WifiManager;

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/EMWifi;->startTestMode(Landroid/net/wifi/WifiManager;)Lcom/mediatek/engineermode/wifi/WifiEmState;

    move-result-object v0

    .line 199
    .local v0, "state":Lcom/mediatek/engineermode/wifi/WifiEmState;
    sget-object v1, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$4;->$SwitchMap$com$mediatek$engineermode$wifi$WifiEmState:[I

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WifiEmState;->ordinal()I

    move-result v2

    aget v1, v1, v2

    const/4 v2, 0x2

    const/4 v3, 0x1

    const/4 v4, 0x0

    if-eq v1, v3, :cond_2

    const/4 v5, 0x3

    if-eq v1, v2, :cond_1

    if-eq v1, v5, :cond_0

    .line 209
    return v4

    .line 207
    :cond_0
    return v3

    .line 204
    :cond_1
    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->showDialog(I)V

    .line 205
    return v4

    .line 201
    :cond_2
    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->showDialog(I)V

    .line 202
    return v4
.end method


# virtual methods
.method abstract isInTestProcess()Z
.end method

.method public onBackPressed()V
    .locals 2

    .line 153
    const-string v0, "WifiTestActivity"

    const-string v1, "onBackPressed"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 154
    invoke-virtual {p0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->isInTestProcess()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 155
    const/4 v0, 0x4

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->showDialog(I)V

    goto :goto_0

    .line 157
    :cond_0
    invoke-super {p0}, Landroid/app/Activity;->onBackPressed()V

    .line 160
    :goto_0
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 129
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 130
    const-string v0, "wifi"

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/net/wifi/WifiManager;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->mWifiManager:Landroid/net/wifi/WifiManager;

    .line 131
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->initTest()Z

    move-result v0

    if-nez v0, :cond_0

    .line 132
    invoke-virtual {p0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->finish()V

    .line 135
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->mWifiStateReceiver:Landroid/content/BroadcastReceiver;

    new-instance v1, Landroid/content/IntentFilter;

    const-string v2, "android.net.wifi.WIFI_STATE_CHANGED"

    invoke-direct {v1, v2}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    .line 138
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 6
    .param p1, "id"    # I

    .line 215
    const/4 v0, 0x0

    .line 216
    .local v0, "dialog":Landroid/app/Dialog;
    const/4 v1, 0x0

    .line 217
    .local v1, "builder":Landroid/app/AlertDialog$Builder;
    const/4 v2, 0x2

    const v3, 0x7f0a0714

    const v4, 0x7f0a02e8

    const/4 v5, 0x0

    if-eq p1, v2, :cond_2

    const/4 v2, 0x3

    if-eq p1, v2, :cond_1

    const/4 v2, 0x4

    if-eq p1, v2, :cond_0

    goto :goto_0

    .line 245
    :cond_0
    new-instance v2, Landroid/app/AlertDialog$Builder;

    invoke-direct {v2, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    move-object v1, v2

    .line 246
    const v2, 0x7f0a06f1

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    .line 247
    invoke-virtual {v1, v5}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    .line 248
    const v2, 0x7f0a0754

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 249
    const/4 v2, 0x0

    invoke-virtual {v1, v4, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 250
    invoke-virtual {v1}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 251
    goto :goto_0

    .line 232
    :cond_1
    new-instance v2, Landroid/app/AlertDialog$Builder;

    invoke-direct {v2, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    move-object v1, v2

    .line 233
    invoke-virtual {v1, v3}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    .line 234
    invoke-virtual {v1, v5}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    .line 235
    const v2, 0x7f0a0746

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 236
    new-instance v2, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$3;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$3;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTestActivity;)V

    invoke-virtual {v1, v4, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 242
    invoke-virtual {v1}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 243
    goto :goto_0

    .line 219
    :cond_2
    new-instance v2, Landroid/app/AlertDialog$Builder;

    invoke-direct {v2, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    move-object v1, v2

    .line 220
    invoke-virtual {v1, v3}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    .line 221
    invoke-virtual {v1, v5}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    .line 222
    const v2, 0x7f0a0715

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 223
    new-instance v2, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$2;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$2;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTestActivity;)V

    invoke-virtual {v1, v4, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 229
    invoke-virtual {v1}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 230
    nop

    .line 255
    :goto_0
    return-object v0
.end method

.method protected onDestroy()V
    .locals 2

    .line 144
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->mWifiStateReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 145
    const-string v0, "WifiTestActivity"

    const-string v1, "ondestroy and stop test mode"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 146
    invoke-static {}, Lcom/mediatek/engineermode/wifi/EMWifi;->stopTestMode()V

    .line 147
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 148
    return-void
.end method

.method protected showWifiModeErrDlg()V
    .locals 1

    .line 166
    const/4 v0, 0x3

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->showDialog(I)V

    .line 167
    return-void
.end method

.method protected updateWifiChannel(Lcom/mediatek/engineermode/wifi/ChannelInfo;Landroid/widget/ArrayAdapter;Landroid/widget/Spinner;)V
    .locals 7
    .param p1, "channel"    # Lcom/mediatek/engineermode/wifi/ChannelInfo;
    .param p3, "channelSpinner"    # Landroid/widget/Spinner;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/mediatek/engineermode/wifi/ChannelInfo;",
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;",
            "Landroid/widget/Spinner;",
            ")V"
        }
    .end annotation

    .line 177
    .local p2, "channelAdapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    invoke-virtual {p1}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getSelectedChannelId()I

    move-result v0

    .line 178
    .local v0, "selectedId":I
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "enter updateWifiChannel: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "WifiTestActivity"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 179
    invoke-static {}, Lcom/mediatek/engineermode/wifi/EMWifi;->isInTestMode()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 180
    invoke-virtual {p2}, Landroid/widget/ArrayAdapter;->getCount()I

    move-result v1

    if-nez v1, :cond_0

    .line 181
    return-void

    .line 183
    :cond_0
    const/4 v1, 0x0

    invoke-virtual {p3, v1}, Landroid/widget/Spinner;->setSelection(I)V

    .line 184
    invoke-virtual {p2, v1}, Landroid/widget/ArrayAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 185
    .local v1, "name":Ljava/lang/String;
    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->parseChannelId(Ljava/lang/String;)I

    move-result v3

    .line 186
    .local v3, "chId":I
    invoke-virtual {p1, v1}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->setSelectedChannel(Ljava/lang/String;)V

    .line 187
    invoke-static {v3}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getChannelFrequency(I)I

    move-result v4

    .line 188
    .local v4, "number":I
    int-to-long v5, v4

    invoke-static {v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setChannel(J)I

    .line 189
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "The channel freq ="

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v2, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 190
    .end local v1    # "name":Ljava/lang/String;
    .end local v3    # "chId":I
    .end local v4    # "number":I
    goto :goto_0

    .line 191
    :cond_1
    const-string v1, "Wifi is not initialized"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 192
    const/4 v1, 0x3

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->showDialog(I)V

    .line 194
    :goto_0
    return-void
.end method
