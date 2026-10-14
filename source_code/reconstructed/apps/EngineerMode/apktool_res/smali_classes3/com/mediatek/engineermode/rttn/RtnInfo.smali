.class public Lcom/mediatek/engineermode/rttn/RtnInfo;
.super Landroid/app/Activity;
.source "RtnInfo.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;
    }
.end annotation


# static fields
.field public static final HARDWARE_DEFAULT:Ljava/lang/String; = "V1"

.field private static final PRLVERSION:Ljava/lang/String; = "cdma.prl.version"

.field public static RIL_NV_CDMA_MDN:I

.field public static RIL_NV_CDMA_MEID:I

.field public static RIL_NV_CDMA_MIN:I

.field public static RIL_NV_CDMA_PRL_VERSION:I

.field public static RIL_NV_OMADM_HFA_LEVEL:I

.field public static RIL_NV_RTN_ACTIVATION_DATE:I

.field public static RIL_NV_RTN_LIFE_CALLS:I

.field public static RIL_NV_RTN_LIFE_DATA_RX:I

.field public static RIL_NV_RTN_LIFE_DATA_TX:I

.field public static RIL_NV_RTN_LIFE_TIMER:I

.field public static RIL_NV_RTN_RECONDITIONED_STATUS:I

.field private static TAG:Ljava/lang/String;


# instance fields
.field protected MyPhoneNumber:Ljava/lang/String;

.field protected Subscriber_id:Ljava/lang/String;

.field protected bucket:Landroid/app/usage/NetworkStats$Bucket;

.field protected call_count:J

.field protected call_duration:J

.field protected mobileBytes:J

.field protected mobileBytes_rx:J

.field protected mobileBytes_tx:J

.field protected rtn_activation_date:Ljava/lang/String;

.field protected rtn_life_calls:Ljava/lang/String;

.field protected rtn_life_data_rx:Ljava/lang/String;

.field protected rtn_life_data_tx:Ljava/lang/String;

.field protected rtn_life_hfa:Ljava/lang/String;

.field protected rtn_life_timer:Ljava/lang/String;

.field protected rtn_prl_version:Ljava/lang/String;

.field protected rtn_reconditioned_status:Ljava/lang/String;

.field protected temp_row:Landroid/widget/TableRow;

.field protected temp_text:Ljava/lang/String;

.field protected tm:Landroid/telephony/TelephonyManager;

.field protected tmp_text_view:Landroid/widget/TextView;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 26
    const-string v0, "EM/Rtninfo"

    sput-object v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->TAG:Ljava/lang/String;

    .line 40
    const/4 v0, 0x1

    sput v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->RIL_NV_CDMA_MEID:I

    .line 41
    const/4 v0, 0x2

    sput v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->RIL_NV_CDMA_MIN:I

    .line 42
    const/4 v0, 0x3

    sput v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->RIL_NV_CDMA_MDN:I

    .line 44
    const/16 v0, 0xc

    sput v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->RIL_NV_RTN_RECONDITIONED_STATUS:I

    .line 45
    const/16 v0, 0xd

    sput v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->RIL_NV_RTN_ACTIVATION_DATE:I

    .line 47
    const/16 v0, 0x33

    sput v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->RIL_NV_CDMA_PRL_VERSION:I

    .line 48
    const/16 v0, 0xe

    sput v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->RIL_NV_RTN_LIFE_TIMER:I

    .line 49
    const/16 v0, 0xf

    sput v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->RIL_NV_RTN_LIFE_CALLS:I

    .line 50
    const/16 v0, 0x10

    sput v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->RIL_NV_RTN_LIFE_DATA_TX:I

    .line 51
    const/16 v0, 0x11

    sput v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->RIL_NV_RTN_LIFE_DATA_RX:I

    .line 52
    const/16 v0, 0x12

    sput v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->RIL_NV_OMADM_HFA_LEVEL:I

    return-void
.end method

.method public constructor <init>()V
    .locals 3

    .line 25
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 33
    const-string v0, "0"

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->rtn_life_data_rx:Ljava/lang/String;

    .line 34
    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->rtn_life_data_tx:Ljava/lang/String;

    .line 37
    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->mobileBytes:J

    .line 38
    iput-wide v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->mobileBytes_tx:J

    .line 39
    iput-wide v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->mobileBytes_rx:J

    .line 53
    const-string v2, "0000000000000"

    iput-object v2, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->MyPhoneNumber:Ljava/lang/String;

    .line 58
    const/4 v2, 0x0

    iput-object v2, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->bucket:Landroid/app/usage/NetworkStats$Bucket;

    .line 59
    iput-wide v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->call_duration:J

    .line 60
    iput-wide v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->call_count:J

    return-void
.end method


# virtual methods
.method protected InitRtnInfo()V
    .locals 5

    .line 132
    const v0, 0x7f06058d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rttn/RtnInfo;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TableRow;

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->temp_row:Landroid/widget/TableRow;

    .line 133
    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/TableRow;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tmp_text_view:Landroid/widget/TextView;

    .line 137
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tm:Landroid/telephony/TelephonyManager;

    sget v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->sim_id:I

    invoke-virtual {v0, v2}, Landroid/telephony/TelephonyManager;->getLine1Number(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->MyPhoneNumber:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/NullPointerException; {:try_start_0 .. :try_end_0} :catch_0

    .line 139
    goto :goto_0

    .line 138
    :catch_0
    move-exception v0

    .line 142
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tmp_text_view:Landroid/widget/TextView;

    iget-object v2, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->MyPhoneNumber:Ljava/lang/String;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 143
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tm:Landroid/telephony/TelephonyManager;

    sget v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->sim_id:I

    invoke-virtual {v0, v2}, Landroid/telephony/TelephonyManager;->getSubscriberId(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->Subscriber_id:Ljava/lang/String;

    .line 144
    sget-object v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->TAG:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Telephone number as follow "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tm:Landroid/telephony/TelephonyManager;

    sget v4, Lcom/mediatek/engineermode/rttn/Rtnmain;->sim_id:I

    invoke-virtual {v3, v4}, Landroid/telephony/TelephonyManager;->getLine1Number(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 146
    const v0, 0x7f0605a8

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rttn/RtnInfo;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TableRow;

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->temp_row:Landroid/widget/TableRow;

    .line 147
    invoke-virtual {v0, v1}, Landroid/widget/TableRow;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tmp_text_view:Landroid/widget/TextView;

    .line 148
    iget-object v2, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tm:Landroid/telephony/TelephonyManager;

    sget v3, Lcom/mediatek/engineermode/rttn/Rtnmain;->sim_id:I

    invoke-virtual {v2, v3}, Landroid/telephony/TelephonyManager;->getSubscriberId(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 151
    const v0, 0x7f0606d9

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rttn/RtnInfo;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TableRow;

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->temp_row:Landroid/widget/TableRow;

    .line 152
    invoke-virtual {v0, v1}, Landroid/widget/TableRow;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tmp_text_view:Landroid/widget/TextView;

    .line 153
    iget-object v2, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tm:Landroid/telephony/TelephonyManager;

    sget v3, Lcom/mediatek/engineermode/rttn/Rtnmain;->sim_id:I

    invoke-virtual {v2, v3}, Landroid/telephony/TelephonyManager;->getDeviceSoftwareVersion(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 154
    sget-object v0, Lcom/mediatek/engineermode/rttn/RtnInfo;->TAG:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Device software  as follow "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tm:Landroid/telephony/TelephonyManager;

    sget v4, Lcom/mediatek/engineermode/rttn/Rtnmain;->sim_id:I

    invoke-virtual {v3, v4}, Landroid/telephony/TelephonyManager;->getDeviceSoftwareVersion(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 156
    new-instance v0, Landroid/icu/text/SimpleDateFormat;

    const-string v2, "MM/dd/yyyy"

    invoke-direct {v0, v2}, Landroid/icu/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    sget-wide v2, Landroid/os/Build;->TIME:J

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/icu/text/SimpleDateFormat;->format(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    .line 157
    .local v0, "strTime":Ljava/lang/String;
    const v2, 0x7f0602e9

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/rttn/RtnInfo;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TableRow;

    iput-object v2, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->temp_row:Landroid/widget/TableRow;

    .line 158
    invoke-virtual {v2, v1}, Landroid/widget/TableRow;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    iput-object v2, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tmp_text_view:Landroid/widget/TextView;

    .line 159
    invoke-virtual {v2, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 162
    const v2, 0x7f0605e4

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/rttn/RtnInfo;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TableRow;

    iput-object v2, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->temp_row:Landroid/widget/TableRow;

    .line 163
    invoke-virtual {v2, v1}, Landroid/widget/TableRow;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    iput-object v2, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tmp_text_view:Landroid/widget/TextView;

    .line 164
    sget-object v3, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 165
    sget-object v2, Lcom/mediatek/engineermode/rttn/RtnInfo;->TAG:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "base os version as follow "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v4, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 167
    const v2, 0x7f0604b5

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/rttn/RtnInfo;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TableRow;

    iput-object v2, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->temp_row:Landroid/widget/TableRow;

    .line 168
    invoke-virtual {v2, v1}, Landroid/widget/TableRow;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    iput-object v2, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tmp_text_view:Landroid/widget/TextView;

    .line 169
    const-string v3, "dm Hw verV1"

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 172
    const v2, 0x7f06038e

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/rttn/RtnInfo;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TableRow;

    iput-object v2, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->temp_row:Landroid/widget/TableRow;

    .line 173
    invoke-virtual {v2, v1}, Landroid/widget/TableRow;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    iput-object v2, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tmp_text_view:Landroid/widget/TextView;

    .line 174
    iget-object v3, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tm:Landroid/telephony/TelephonyManager;

    sget v4, Lcom/mediatek/engineermode/rttn/Rtnmain;->sim_id:I

    invoke-virtual {v3, v4}, Landroid/telephony/TelephonyManager;->getDeviceId(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 177
    const v2, 0x7f06064d

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/rttn/RtnInfo;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TableRow;

    iput-object v2, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->temp_row:Landroid/widget/TableRow;

    .line 178
    invoke-virtual {v2, v1}, Landroid/widget/TableRow;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tmp_text_view:Landroid/widget/TextView;

    .line 179
    const/high16 v2, 0x20000

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setInputType(I)V

    .line 180
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tmp_text_view:Landroid/widget/TextView;

    invoke-static {}, Landroid/os/Build;->getRadioVersion()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 182
    new-instance v1, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;-><init>(Lcom/mediatek/engineermode/rttn/RtnInfo;)V

    const-string v2, "rtn_reconditioned_status"

    filled-new-array {v2}, [Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/rttn/RtnInfo$Rtn_async_task;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 183
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 1
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 124
    const-string v0, "phone"

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rttn/RtnInfo;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/telephony/TelephonyManager;

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tm:Landroid/telephony/TelephonyManager;

    .line 125
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 126
    const v0, 0x7f0800d4

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rttn/RtnInfo;->setContentView(I)V

    .line 127
    const-string v0, "Allow EngineerMode to access your personal data?"

    invoke-virtual {p0, p0, v0}, Lcom/mediatek/engineermode/rttn/RtnInfo;->showInfoDialog(Landroid/content/Context;Ljava/lang/String;)V

    .line 129
    return-void
.end method

.method protected onResume()V
    .locals 5

    .line 66
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 67
    const v0, 0x7f060663

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rttn/RtnInfo;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TableRow;

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->temp_row:Landroid/widget/TableRow;

    .line 68
    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/TableRow;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tmp_text_view:Landroid/widget/TextView;

    .line 69
    iget-object v2, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->rtn_reconditioned_status:Ljava/lang/String;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 73
    const v0, 0x7f060526

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rttn/RtnInfo;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TableRow;

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->temp_row:Landroid/widget/TableRow;

    .line 74
    invoke-virtual {v0, v1}, Landroid/widget/TableRow;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tmp_text_view:Landroid/widget/TextView;

    .line 75
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-wide v3, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->mobileBytes:J

    invoke-virtual {v2, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v3, "kB"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 79
    const v0, 0x7f060527

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rttn/RtnInfo;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TableRow;

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->temp_row:Landroid/widget/TableRow;

    .line 80
    invoke-virtual {v0, v1}, Landroid/widget/TableRow;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tmp_text_view:Landroid/widget/TextView;

    .line 81
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->rtn_life_timer:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " Minutes"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 83
    const v0, 0x7f060525

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rttn/RtnInfo;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TableRow;

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->temp_row:Landroid/widget/TableRow;

    .line 84
    invoke-virtual {v0, v1}, Landroid/widget/TableRow;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tmp_text_view:Landroid/widget/TextView;

    .line 85
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->rtn_life_calls:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " Calls"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 87
    const v0, 0x7f0600b4

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rttn/RtnInfo;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TableRow;

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->temp_row:Landroid/widget/TableRow;

    .line 88
    invoke-virtual {v0, v1}, Landroid/widget/TableRow;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tmp_text_view:Landroid/widget/TextView;

    .line 89
    iget-object v2, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->rtn_prl_version:Ljava/lang/String;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 91
    const v0, 0x7f06017a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rttn/RtnInfo;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TableRow;

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->temp_row:Landroid/widget/TableRow;

    .line 92
    invoke-virtual {v0, v1}, Landroid/widget/TableRow;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->tmp_text_view:Landroid/widget/TextView;

    .line 93
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/RtnInfo;->rtn_activation_date:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 94
    return-void
.end method

.method public showInfoDialog(Landroid/content/Context;Ljava/lang/String;)V
    .locals 4
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "content"    # Ljava/lang/String;

    .line 97
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p1}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 99
    .local v0, "builder":Landroid/app/AlertDialog$Builder;
    const-string v1, "Warning"

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 101
    invoke-virtual {v0, p2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    new-instance v2, Lcom/mediatek/engineermode/rttn/RtnInfo$2;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/rttn/RtnInfo$2;-><init>(Lcom/mediatek/engineermode/rttn/RtnInfo;)V

    .line 102
    const-string v3, "OK"

    invoke-virtual {v1, v3, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    new-instance v2, Lcom/mediatek/engineermode/rttn/RtnInfo$1;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/rttn/RtnInfo$1;-><init>(Lcom/mediatek/engineermode/rttn/RtnInfo;)V

    .line 109
    const-string v3, "Cancel"

    invoke-virtual {v1, v3, v2}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 117
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v1

    .line 118
    .local v1, "alertDialog":Landroid/app/AlertDialog;
    invoke-virtual {v1}, Landroid/app/AlertDialog;->show()V

    .line 119
    return-void
.end method
