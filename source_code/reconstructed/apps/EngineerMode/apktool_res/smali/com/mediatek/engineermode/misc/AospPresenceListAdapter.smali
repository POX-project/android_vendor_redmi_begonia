.class public Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;
.super Landroid/widget/BaseAdapter;
.source "AospPresenceListAdapter.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$ViewHolder;
    }
.end annotation


# instance fields
.field private final EVENT_SHOW_TOAST:I

.field private final TOASTINFO:Ljava/lang/String;

.field private mContactUriList:[Ljava/lang/String;

.field private mContext:Landroid/content/Context;

.field private mData:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mHandler:Landroid/os/Handler;

.field private final mId:I

.field private mImsUceManager:Lcom/android/ims/internal/uce/uceservice/ImsUceManager;

.field private mOptionsListener:Lcom/android/ims/internal/uce/options/IOptionsListener;

.field private mOptionsService:Lcom/android/ims/internal/uce/options/IOptionsService;

.field private mOptionsServiceHandle:I

.field private mOptionsServiceListenerHdl:Lcom/android/ims/internal/uce/common/UceLong;

.field private mPresenceListener:Lcom/android/ims/internal/uce/presence/IPresenceListener;

.field private mPresenceService:Lcom/android/ims/internal/uce/presence/IPresenceService;

.field private mPresenceServiceHandle:I

.field private mPresenceServiceListenerHdl:Lcom/android/ims/internal/uce/common/UceLong;

.field private final mReasonPhrase:Ljava/lang/String;

.field private final mSipResponseCode:I

.field private mUceListener:Lcom/android/ims/internal/uce/uceservice/IUceListener;

.field private mUceService:Lcom/android/ims/internal/uce/uceservice/IUceService;

.field private final mUserData:I

.field private prefListener:Landroid/content/SharedPreferences$OnSharedPreferenceChangeListener;


# direct methods
.method public constructor <init>(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 94
    .local p1, "data":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    invoke-direct {p0}, Landroid/widget/BaseAdapter;-><init>()V

    .line 56
    const/4 v0, -0x1

    iput v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsServiceHandle:I

    .line 57
    iput v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceServiceHandle:I

    .line 64
    const/16 v0, 0xa

    iput v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mUserData:I

    .line 65
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->EVENT_SHOW_TOAST:I

    .line 66
    const/4 v0, 0x1

    iput v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mId:I

    .line 67
    const/16 v0, 0xc8

    iput v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mSipResponseCode:I

    .line 68
    const-string v0, "no reason phrase"

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mReasonPhrase:Ljava/lang/String;

    .line 69
    const-string v0, "toastInfo"

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->TOASTINFO:Ljava/lang/String;

    .line 70
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mContactUriList:[Ljava/lang/String;

    .line 71
    new-instance v0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$1;-><init>(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mHandler:Landroid/os/Handler;

    .line 81
    new-instance v0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$2;-><init>(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->prefListener:Landroid/content/SharedPreferences$OnSharedPreferenceChangeListener;

    .line 95
    iput-object p1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mData:Ljava/util/List;

    .line 96
    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;
    .param p1, "x1"    # Ljava/lang/String;

    .line 50
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;)[Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    .line 50
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mContactUriList:[Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;
    .param p1, "x1"    # Ljava/lang/String;

    .line 50
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->sendMessageToHandler(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;Lcom/android/ims/internal/uce/common/CapInfo;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;
    .param p1, "x1"    # Lcom/android/ims/internal/uce/common/CapInfo;

    .line 50
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->transferCapInfoToString(Lcom/android/ims/internal/uce/common/CapInfo;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private createOptionsCapInfo()Lcom/android/ims/internal/uce/options/OptionsCapInfo;
    .locals 3

    .line 783
    new-instance v0, Lcom/android/ims/internal/uce/options/OptionsCapInfo;

    invoke-direct {v0}, Lcom/android/ims/internal/uce/options/OptionsCapInfo;-><init>()V

    .line 784
    .local v0, "optionsCapInfo":Lcom/android/ims/internal/uce/options/OptionsCapInfo;
    new-instance v1, Lcom/android/ims/internal/uce/common/CapInfo;

    invoke-direct {v1}, Lcom/android/ims/internal/uce/common/CapInfo;-><init>()V

    .line 785
    .local v1, "capInfo":Lcom/android/ims/internal/uce/common/CapInfo;
    const-string v2, "test"

    invoke-virtual {v0, v2}, Lcom/android/ims/internal/uce/options/OptionsCapInfo;->setSdp(Ljava/lang/String;)V

    .line 786
    invoke-virtual {v0, v1}, Lcom/android/ims/internal/uce/options/OptionsCapInfo;->setCapInfo(Lcom/android/ims/internal/uce/common/CapInfo;)V

    .line 787
    return-object v0
.end method

.method private createPresCapInfo()Lcom/android/ims/internal/uce/presence/PresCapInfo;
    .locals 3

    .line 775
    new-instance v0, Lcom/android/ims/internal/uce/presence/PresCapInfo;

    invoke-direct {v0}, Lcom/android/ims/internal/uce/presence/PresCapInfo;-><init>()V

    .line 776
    .local v0, "presCapInfo":Lcom/android/ims/internal/uce/presence/PresCapInfo;
    new-instance v1, Lcom/android/ims/internal/uce/common/CapInfo;

    invoke-direct {v1}, Lcom/android/ims/internal/uce/common/CapInfo;-><init>()V

    .line 777
    .local v1, "capInfo":Lcom/android/ims/internal/uce/common/CapInfo;
    invoke-virtual {v0, v1}, Lcom/android/ims/internal/uce/presence/PresCapInfo;->setCapInfo(Lcom/android/ims/internal/uce/common/CapInfo;)V

    .line 778
    const-string v2, "test"

    invoke-virtual {v0, v2}, Lcom/android/ims/internal/uce/presence/PresCapInfo;->setContactUri(Ljava/lang/String;)V

    .line 779
    return-object v0
.end method

.method private initContactUriList()V
    .locals 10

    .line 153
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mContext:Landroid/content/Context;

    invoke-static {v0}, Landroid/telephony/TelephonyManager;->from(Landroid/content/Context;)Landroid/telephony/TelephonyManager;

    move-result-object v0

    .line 154
    .local v0, "telephonyManager":Landroid/telephony/TelephonyManager;
    invoke-virtual {v0}, Landroid/telephony/TelephonyManager;->getMsisdn()Ljava/lang/String;

    move-result-object v1

    .line 155
    .local v1, "msisdn":Ljava/lang/String;
    const/4 v2, 0x1

    if-nez v1, :cond_0

    .line 156
    const-string v1, ""

    goto :goto_0

    .line 157
    :cond_0
    const-string v3, "+"

    invoke-virtual {v1, v3}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 158
    invoke-virtual {v1, v2}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v1

    .line 160
    :cond_1
    :goto_0
    iget-object v3, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mContext:Landroid/content/Context;

    const-string v4, "PhoneNum"

    const/4 v5, 0x0

    invoke-virtual {v3, v4, v5}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v3

    .line 162
    .local v3, "sharedPreferences":Landroid/content/SharedPreferences;
    const-string v4, "Contact1PhoneNum"

    invoke-interface {v3, v4, v1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 164
    .local v4, "contact1PhoneNum":Ljava/lang/String;
    const-string v6, "Contact2PhoneNum"

    invoke-interface {v3, v6, v1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 166
    .local v6, "contact2PhoneNum":Ljava/lang/String;
    iget-object v7, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mContactUriList:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "tel:"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v7, v5

    .line 167
    iget-object v5, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mContactUriList:[Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    aput-object v7, v5, v2

    .line 168
    iget-object v2, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->prefListener:Landroid/content/SharedPreferences$OnSharedPreferenceChangeListener;

    invoke-interface {v3, v2}, Landroid/content/SharedPreferences;->registerOnSharedPreferenceChangeListener(Landroid/content/SharedPreferences$OnSharedPreferenceChangeListener;)V

    .line 170
    return-void
.end method

.method private initUce()V
    .locals 2

    .line 173
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/android/ims/internal/uce/uceservice/ImsUceManager;->getInstance(Landroid/content/Context;)Lcom/android/ims/internal/uce/uceservice/ImsUceManager;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mImsUceManager:Lcom/android/ims/internal/uce/uceservice/ImsUceManager;

    .line 174
    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/android/ims/internal/uce/uceservice/ImsUceManager;->createUceService(Z)V

    .line 175
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mImsUceManager:Lcom/android/ims/internal/uce/uceservice/ImsUceManager;

    invoke-virtual {v0}, Lcom/android/ims/internal/uce/uceservice/ImsUceManager;->getUceServiceInstance()Lcom/android/ims/internal/uce/uceservice/IUceService;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mUceService:Lcom/android/ims/internal/uce/uceservice/IUceService;

    .line 176
    new-instance v0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$3;-><init>(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mUceListener:Lcom/android/ims/internal/uce/uceservice/IUceListener;

    .line 184
    new-instance v0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$4;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$4;-><init>(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceListener:Lcom/android/ims/internal/uce/presence/IPresenceListener;

    .line 291
    new-instance v0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$5;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$5;-><init>(Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsListener:Lcom/android/ims/internal/uce/options/IOptionsListener;

    .line 342
    return-void
.end method

.method private sendMessageToHandler(Ljava/lang/String;)V
    .locals 3
    .param p1, "info"    # Ljava/lang/String;

    .line 805
    new-instance v0, Landroid/os/Message;

    invoke-direct {v0}, Landroid/os/Message;-><init>()V

    .line 806
    .local v0, "msg":Landroid/os/Message;
    const/4 v1, 0x0

    iput v1, v0, Landroid/os/Message;->what:I

    .line 807
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 808
    .local v1, "bundle":Landroid/os/Bundle;
    const-string v2, "toastInfo"

    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 809
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 810
    iget-object v2, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mHandler:Landroid/os/Handler;

    invoke-virtual {v2, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 811
    return-void
.end method

.method private showToast(Ljava/lang/String;)V
    .locals 2
    .param p1, "info"    # Ljava/lang/String;

    .line 791
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mContext:Landroid/content/Context;

    const/4 v1, 0x0

    invoke-static {v0, p1, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 792
    return-void
.end method

.method private showToastWithStatusCode(Ljava/lang/String;I)V
    .locals 5
    .param p1, "functionName"    # Ljava/lang/String;
    .param p2, "statusCode"    # I

    .line 795
    const/4 v0, 0x0

    const-string v1, "] statusCode = "

    if-nez p2, :cond_0

    .line 796
    iget-object v2, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mContext:Landroid/content/Context;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "SUCCESS!! [ "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 797
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    goto :goto_0

    .line 799
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mContext:Landroid/content/Context;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "FAIL!! [ "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 800
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 802
    :goto_0
    return-void
.end method

.method private startTestApi(Ljava/lang/String;)V
    .locals 1
    .param p1, "apiName"    # Ljava/lang/String;

    .line 345
    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v0

    sparse-switch v0, :sswitch_data_0

    :cond_0
    goto/16 :goto_0

    :sswitch_0
    const-string v0, "[UCE]destroyPresenceService"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x6

    goto/16 :goto_1

    :sswitch_1
    const-string v0, "[OPTIONS]removeListener"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x13

    goto/16 :goto_1

    :sswitch_2
    const-string v0, "[OPTIONS]getContactCap"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x16

    goto/16 :goto_1

    :sswitch_3
    const-string v0, "[PRESENCE]getVersion"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0xa

    goto/16 :goto_1

    :sswitch_4
    const-string v0, "[PRESENCE]getContactCap"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0xf

    goto/16 :goto_1

    :sswitch_5
    const-string v0, "[UCE]getOptionsService"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x9

    goto/16 :goto_1

    :sswitch_6
    const-string v0, "[OPTIONS]responseIncomingOptions"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x18

    goto/16 :goto_1

    :sswitch_7
    const-string v0, "[UCE]stopService"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto/16 :goto_1

    :sswitch_8
    const-string v0, "[PRESENCE]addListener"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0xb

    goto/16 :goto_1

    :sswitch_9
    const-string v0, "[OPTIONS]getContactListCap"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x17

    goto/16 :goto_1

    :sswitch_a
    const-string v0, "[OPTIONS]getMyInfo"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x15

    goto/16 :goto_1

    :sswitch_b
    const-string v0, "[UCE]isServiceStarted"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x2

    goto/16 :goto_1

    :sswitch_c
    const-string v0, "[OPTIONS]setMyInfo"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x14

    goto/16 :goto_1

    :sswitch_d
    const-string v0, "[PRESENCE]publishMyCap"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0xe

    goto/16 :goto_1

    :sswitch_e
    const-string v0, "[PRESENCE]removeListener"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0xc

    goto/16 :goto_1

    :sswitch_f
    const-string v0, "[UCE]destroyOptionsService"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x4

    goto :goto_1

    :sswitch_10
    const-string v0, "[UCE]startService"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    goto :goto_1

    :sswitch_11
    const-string v0, "[PRESENCE]reenableService"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0xd

    goto :goto_1

    :sswitch_12
    const-string v0, "[OPTIONS]getVersion"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x11

    goto :goto_1

    :sswitch_13
    const-string v0, "[OPTIONS]addListener"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x12

    goto :goto_1

    :sswitch_14
    const-string v0, "[UCE]getServiceStatus"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x7

    goto :goto_1

    :sswitch_15
    const-string v0, "[UCE]getPresenceService"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x8

    goto :goto_1

    :sswitch_16
    const-string v0, "[PRESENCE]getContactListCap"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x10

    goto :goto_1

    :sswitch_17
    const-string v0, "[UCE]createPresenceService"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x5

    goto :goto_1

    :sswitch_18
    const-string v0, "[UCE]createOptionsService"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x3

    goto :goto_1

    :goto_0
    const/4 v0, -0x1

    :goto_1
    packed-switch v0, :pswitch_data_0

    goto/16 :goto_2

    .line 419
    :pswitch_0
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->testOptionsResponseIncomingOptions()V

    goto/16 :goto_2

    .line 416
    :pswitch_1
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->testOptionsGetContactListCap()V

    .line 417
    goto/16 :goto_2

    .line 413
    :pswitch_2
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->testOptionsGetContactCap()V

    .line 414
    goto/16 :goto_2

    .line 410
    :pswitch_3
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->testOptionsGetMyInfo()V

    .line 411
    goto :goto_2

    .line 407
    :pswitch_4
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->testOptionsSetMyInfo()V

    .line 408
    goto :goto_2

    .line 404
    :pswitch_5
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->testOptionsRemoveListener()V

    .line 405
    goto :goto_2

    .line 401
    :pswitch_6
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->testOptionsAddListener()V

    .line 402
    goto :goto_2

    .line 398
    :pswitch_7
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->testOptionsGetVersion()V

    .line 399
    goto :goto_2

    .line 395
    :pswitch_8
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->testPresenceGetContactListCap()V

    .line 396
    goto :goto_2

    .line 392
    :pswitch_9
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->testPresenceGetContactCap()V

    .line 393
    goto :goto_2

    .line 389
    :pswitch_a
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->testPresencePublshMyCap()V

    .line 390
    goto :goto_2

    .line 386
    :pswitch_b
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->testPresenceReenableService()V

    .line 387
    goto :goto_2

    .line 383
    :pswitch_c
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->testPresenceRemoveLitener()V

    .line 384
    goto :goto_2

    .line 380
    :pswitch_d
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->testPresenceAddLitener()V

    .line 381
    goto :goto_2

    .line 377
    :pswitch_e
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->testPresenceGetVersion()V

    .line 378
    goto :goto_2

    .line 374
    :pswitch_f
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->testUceGetOptionsService()V

    .line 375
    goto :goto_2

    .line 371
    :pswitch_10
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->testUceGetPresenceService()V

    .line 372
    goto :goto_2

    .line 368
    :pswitch_11
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->testUceGetServiceStatus()V

    .line 369
    goto :goto_2

    .line 365
    :pswitch_12
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->testUceDestroyPresenceService()V

    .line 366
    goto :goto_2

    .line 362
    :pswitch_13
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->testUceCreatePresenceService()V

    .line 363
    goto :goto_2

    .line 359
    :pswitch_14
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->testUceDestroyOptionsService()V

    .line 360
    goto :goto_2

    .line 356
    :pswitch_15
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->testUceCreateOptionsService()V

    .line 357
    goto :goto_2

    .line 353
    :pswitch_16
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->testUceIsServiceStarted()V

    .line 354
    goto :goto_2

    .line 350
    :pswitch_17
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->testUceStopService()V

    .line 351
    goto :goto_2

    .line 347
    :pswitch_18
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->testUceStartService()V

    .line 348
    nop

    .line 422
    :goto_2
    return-void

    nop

    :sswitch_data_0
    .sparse-switch
        -0x64bac98c -> :sswitch_18
        -0x57b6a363 -> :sswitch_17
        -0x4bd8fadd -> :sswitch_16
        -0x4b34f09b -> :sswitch_15
        -0x3e13bc0e -> :sswitch_14
        -0x378102c5 -> :sswitch_13
        -0x1b19e4e4 -> :sswitch_12
        -0x13216348 -> :sswitch_11
        0xade6114 -> :sswitch_10
        0x157054d0 -> :sswitch_f
        0x2ba43ddf -> :sswitch_e
        0x305ca4fe -> :sswitch_d
        0x36958dc2 -> :sswitch_c
        0x3bd03477 -> :sswitch_b
        0x436059b6 -> :sswitch_a
        0x5453e750 -> :sswitch_9
        0x5525b54e -> :sswitch_8
        0x60496f12 -> :sswitch_7
        0x60d0dcdd -> :sswitch_6
        0x61de0aac -> :sswitch_5
        0x63d41a21 -> :sswitch_4
        0x654e94a9 -> :sswitch_3
        0x65fb1ace -> :sswitch_2
        0x6e5d52d2 -> :sswitch_1
        0x738209c1 -> :sswitch_0
    .end sparse-switch

    :pswitch_data_0
    .packed-switch 0x0
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
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method private testOptionsAddListener()V
    .locals 4

    .line 646
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsService:Lcom/android/ims/internal/uce/options/IOptionsService;

    if-nez v0, :cond_0

    .line 647
    const-string v0, "FAIL!! Please Step1. Click createOptionsService\nStep2. Click getOptionsService"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 649
    return-void

    .line 651
    :cond_0
    new-instance v0, Lcom/android/ims/internal/uce/common/UceLong;

    invoke-direct {v0}, Lcom/android/ims/internal/uce/common/UceLong;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsServiceListenerHdl:Lcom/android/ims/internal/uce/common/UceLong;

    .line 652
    const-wide/16 v1, 0x64

    invoke-virtual {v0, v1, v2}, Lcom/android/ims/internal/uce/common/UceLong;->setUceLong(J)V

    .line 653
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsService:Lcom/android/ims/internal/uce/options/IOptionsService;

    iget v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsServiceHandle:I

    iget-object v2, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsListener:Lcom/android/ims/internal/uce/options/IOptionsListener;

    iget-object v3, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsServiceListenerHdl:Lcom/android/ims/internal/uce/common/UceLong;

    invoke-interface {v0, v1, v2, v3}, Lcom/android/ims/internal/uce/options/IOptionsService;->addListener(ILcom/android/ims/internal/uce/options/IOptionsListener;Lcom/android/ims/internal/uce/common/UceLong;)Lcom/android/ims/internal/uce/common/StatusCode;

    move-result-object v0

    .line 655
    .local v0, "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    invoke-virtual {v0}, Lcom/android/ims/internal/uce/common/StatusCode;->getStatusCode()I

    move-result v1

    .line 656
    .local v1, "statusCode":I
    const-string v2, "AddListener"

    invoke-direct {p0, v2, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToastWithStatusCode(Ljava/lang/String;I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 659
    .end local v0    # "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    .end local v1    # "statusCode":I
    goto :goto_0

    .line 657
    :catch_0
    move-exception v0

    .line 658
    .local v0, "e":Landroid/os/RemoteException;
    const-string v1, "FAIL!! The connection between client and server is lost"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 660
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_0
    return-void
.end method

.method private testOptionsGetContactCap()V
    .locals 4

    .line 727
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsService:Lcom/android/ims/internal/uce/options/IOptionsService;

    if-nez v0, :cond_0

    .line 728
    const-string v0, "FAIL!! Please Step1. Click createOptionsService\nStep2. Click getOptionsService"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 730
    return-void

    .line 732
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsService:Lcom/android/ims/internal/uce/options/IOptionsService;

    iget v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsServiceHandle:I

    iget-object v2, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mContactUriList:[Ljava/lang/String;

    const/4 v3, 0x0

    aget-object v2, v2, v3

    const/16 v3, 0xa

    invoke-interface {v0, v1, v2, v3}, Lcom/android/ims/internal/uce/options/IOptionsService;->getContactCap(ILjava/lang/String;I)Lcom/android/ims/internal/uce/common/StatusCode;

    move-result-object v0

    .line 734
    .local v0, "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    invoke-virtual {v0}, Lcom/android/ims/internal/uce/common/StatusCode;->getStatusCode()I

    move-result v1

    .line 735
    .local v1, "statusCode":I
    const-string v2, "GetContactCap"

    invoke-direct {p0, v2, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToastWithStatusCode(Ljava/lang/String;I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 738
    .end local v0    # "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    .end local v1    # "statusCode":I
    goto :goto_0

    .line 736
    :catch_0
    move-exception v0

    .line 737
    .local v0, "e":Landroid/os/RemoteException;
    const-string v1, "FAIL!! The connection between client and server is lost"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 739
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_0
    return-void
.end method

.method private testOptionsGetContactListCap()V
    .locals 4

    .line 743
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsService:Lcom/android/ims/internal/uce/options/IOptionsService;

    if-nez v0, :cond_0

    .line 744
    const-string v0, "FAIL!! Please Step1. Click createOptionsService\nStep2. Click getOptionsService"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 746
    return-void

    .line 748
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsService:Lcom/android/ims/internal/uce/options/IOptionsService;

    iget v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsServiceHandle:I

    iget-object v2, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mContactUriList:[Ljava/lang/String;

    const/16 v3, 0xa

    invoke-interface {v0, v1, v2, v3}, Lcom/android/ims/internal/uce/options/IOptionsService;->getContactListCap(I[Ljava/lang/String;I)Lcom/android/ims/internal/uce/common/StatusCode;

    move-result-object v0

    .line 750
    .local v0, "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    invoke-virtual {v0}, Lcom/android/ims/internal/uce/common/StatusCode;->getStatusCode()I

    move-result v1

    .line 751
    .local v1, "statusCode":I
    const-string v2, "GetContactListCap"

    invoke-direct {p0, v2, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToastWithStatusCode(Ljava/lang/String;I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 754
    .end local v0    # "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    .end local v1    # "statusCode":I
    goto :goto_0

    .line 752
    :catch_0
    move-exception v0

    .line 753
    .local v0, "e":Landroid/os/RemoteException;
    const-string v1, "FAIL!! The connection between client and server is lost"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 755
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_0
    return-void
.end method

.method private testOptionsGetMyInfo()V
    .locals 4

    .line 711
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsService:Lcom/android/ims/internal/uce/options/IOptionsService;

    if-nez v0, :cond_0

    .line 712
    const-string v0, "FAIL!! Please Step1. Click createOptionsService\nStep2. Click getOptionsService"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 714
    return-void

    .line 716
    :cond_0
    new-instance v0, Lcom/android/ims/internal/uce/common/CapInfo;

    invoke-direct {v0}, Lcom/android/ims/internal/uce/common/CapInfo;-><init>()V

    .line 717
    .local v0, "capInfo":Lcom/android/ims/internal/uce/common/CapInfo;
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsService:Lcom/android/ims/internal/uce/options/IOptionsService;

    iget v2, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsServiceHandle:I

    const/16 v3, 0xa

    invoke-interface {v1, v2, v3}, Lcom/android/ims/internal/uce/options/IOptionsService;->getMyInfo(II)Lcom/android/ims/internal/uce/common/StatusCode;

    move-result-object v1

    .line 718
    .local v1, "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    invoke-virtual {v1}, Lcom/android/ims/internal/uce/common/StatusCode;->getStatusCode()I

    move-result v2

    .line 719
    .local v2, "statusCode":I
    const-string v3, "GetMyInfo"

    invoke-direct {p0, v3, v2}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToastWithStatusCode(Ljava/lang/String;I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 722
    .end local v0    # "capInfo":Lcom/android/ims/internal/uce/common/CapInfo;
    .end local v1    # "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    .end local v2    # "statusCode":I
    goto :goto_0

    .line 720
    :catch_0
    move-exception v0

    .line 721
    .local v0, "e":Landroid/os/RemoteException;
    const-string v1, "FAIL!! The connection between client and server is lost"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 723
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_0
    return-void
.end method

.method private testOptionsGetVersion()V
    .locals 3

    .line 680
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsService:Lcom/android/ims/internal/uce/options/IOptionsService;

    if-nez v0, :cond_0

    .line 681
    const-string v0, "FAIL!! Please Step1. Click createOptionsService\nStep2. Click getOptionsService"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 683
    return-void

    .line 685
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsService:Lcom/android/ims/internal/uce/options/IOptionsService;

    iget v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsServiceHandle:I

    invoke-interface {v0, v1}, Lcom/android/ims/internal/uce/options/IOptionsService;->getVersion(I)Lcom/android/ims/internal/uce/common/StatusCode;

    move-result-object v0

    .line 686
    .local v0, "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    invoke-virtual {v0}, Lcom/android/ims/internal/uce/common/StatusCode;->getStatusCode()I

    move-result v1

    .line 687
    .local v1, "statusCode":I
    const-string v2, "GetVersion"

    invoke-direct {p0, v2, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToastWithStatusCode(Ljava/lang/String;I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 690
    .end local v0    # "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    .end local v1    # "statusCode":I
    goto :goto_0

    .line 688
    :catch_0
    move-exception v0

    .line 689
    .local v0, "e":Landroid/os/RemoteException;
    const-string v1, "FAIL!! The connection between client and server is lost"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 691
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_0
    return-void
.end method

.method private testOptionsRemoveListener()V
    .locals 3

    .line 664
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsService:Lcom/android/ims/internal/uce/options/IOptionsService;

    if-nez v0, :cond_0

    .line 665
    const-string v0, "FAIL!! Please Step1. Click createOptionsService\nStep2. Click getOptionsService"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 667
    return-void

    .line 669
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsService:Lcom/android/ims/internal/uce/options/IOptionsService;

    iget v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsServiceHandle:I

    iget-object v2, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsServiceListenerHdl:Lcom/android/ims/internal/uce/common/UceLong;

    invoke-interface {v0, v1, v2}, Lcom/android/ims/internal/uce/options/IOptionsService;->removeListener(ILcom/android/ims/internal/uce/common/UceLong;)Lcom/android/ims/internal/uce/common/StatusCode;

    move-result-object v0

    .line 671
    .local v0, "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    invoke-virtual {v0}, Lcom/android/ims/internal/uce/common/StatusCode;->getStatusCode()I

    move-result v1

    .line 672
    .local v1, "statusCode":I
    const-string v2, "RemoveListener"

    invoke-direct {p0, v2, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToastWithStatusCode(Ljava/lang/String;I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 675
    .end local v0    # "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    .end local v1    # "statusCode":I
    goto :goto_0

    .line 673
    :catch_0
    move-exception v0

    .line 674
    .local v0, "e":Landroid/os/RemoteException;
    const-string v1, "FAIL!! The connection between client and server is lost"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 676
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_0
    return-void
.end method

.method private testOptionsResponseIncomingOptions()V
    .locals 8

    .line 759
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsService:Lcom/android/ims/internal/uce/options/IOptionsService;

    if-nez v0, :cond_0

    .line 760
    const-string v0, "FAIL!! Please Step1. Click createOptionsService\nStep2. Click getOptionsService"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 762
    return-void

    .line 764
    :cond_0
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->createOptionsCapInfo()Lcom/android/ims/internal/uce/options/OptionsCapInfo;

    move-result-object v6

    .line 765
    .local v6, "optionsCapInfo":Lcom/android/ims/internal/uce/options/OptionsCapInfo;
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsService:Lcom/android/ims/internal/uce/options/IOptionsService;

    iget v2, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsServiceHandle:I

    const/4 v3, 0x1

    const/16 v4, 0xc8

    const-string v5, "no reason phrase"

    const/4 v7, 0x0

    invoke-interface/range {v1 .. v7}, Lcom/android/ims/internal/uce/options/IOptionsService;->responseIncomingOptions(IIILjava/lang/String;Lcom/android/ims/internal/uce/options/OptionsCapInfo;Z)Lcom/android/ims/internal/uce/common/StatusCode;

    move-result-object v0

    .line 767
    .local v0, "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    invoke-virtual {v0}, Lcom/android/ims/internal/uce/common/StatusCode;->getStatusCode()I

    move-result v1

    .line 768
    .local v1, "statusCode":I
    const-string v2, "ResponseIncomingOptions"

    invoke-direct {p0, v2, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToastWithStatusCode(Ljava/lang/String;I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 771
    .end local v0    # "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    .end local v1    # "statusCode":I
    .end local v6    # "optionsCapInfo":Lcom/android/ims/internal/uce/options/OptionsCapInfo;
    goto :goto_0

    .line 769
    :catch_0
    move-exception v0

    .line 770
    .local v0, "e":Landroid/os/RemoteException;
    const-string v1, "FAIL!! The connection between client and server is lost"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 772
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_0
    return-void
.end method

.method private testOptionsSetMyInfo()V
    .locals 4

    .line 695
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsService:Lcom/android/ims/internal/uce/options/IOptionsService;

    if-nez v0, :cond_0

    .line 696
    const-string v0, "FAIL!! Please Step1. Click createOptionsService\nStep2. Click getOptionsService"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 698
    return-void

    .line 700
    :cond_0
    new-instance v0, Lcom/android/ims/internal/uce/common/CapInfo;

    invoke-direct {v0}, Lcom/android/ims/internal/uce/common/CapInfo;-><init>()V

    .line 701
    .local v0, "capInfo":Lcom/android/ims/internal/uce/common/CapInfo;
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsService:Lcom/android/ims/internal/uce/options/IOptionsService;

    iget v2, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsServiceHandle:I

    const/16 v3, 0xa

    invoke-interface {v1, v2, v0, v3}, Lcom/android/ims/internal/uce/options/IOptionsService;->setMyInfo(ILcom/android/ims/internal/uce/common/CapInfo;I)Lcom/android/ims/internal/uce/common/StatusCode;

    move-result-object v1

    .line 702
    .local v1, "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    invoke-virtual {v1}, Lcom/android/ims/internal/uce/common/StatusCode;->getStatusCode()I

    move-result v2

    .line 703
    .local v2, "statusCode":I
    const-string v3, "SetMyInfo"

    invoke-direct {p0, v3, v2}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToastWithStatusCode(Ljava/lang/String;I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 706
    .end local v0    # "capInfo":Lcom/android/ims/internal/uce/common/CapInfo;
    .end local v1    # "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    .end local v2    # "statusCode":I
    goto :goto_0

    .line 704
    :catch_0
    move-exception v0

    .line 705
    .local v0, "e":Landroid/os/RemoteException;
    const-string v1, "FAIL!! The connection between client and server is lost"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 707
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_0
    return-void
.end method

.method private testPresenceAddLitener()V
    .locals 4

    .line 533
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceService:Lcom/android/ims/internal/uce/presence/IPresenceService;

    if-nez v0, :cond_0

    .line 534
    const-string v0, "FAIL!! Please Step1. Click createPresenceService\nStep2. Click getPresenceService"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 536
    return-void

    .line 538
    :cond_0
    new-instance v0, Lcom/android/ims/internal/uce/common/UceLong;

    invoke-direct {v0}, Lcom/android/ims/internal/uce/common/UceLong;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceServiceListenerHdl:Lcom/android/ims/internal/uce/common/UceLong;

    .line 539
    const-wide/16 v1, 0x64

    invoke-virtual {v0, v1, v2}, Lcom/android/ims/internal/uce/common/UceLong;->setUceLong(J)V

    .line 540
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceService:Lcom/android/ims/internal/uce/presence/IPresenceService;

    iget v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceServiceHandle:I

    iget-object v2, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceListener:Lcom/android/ims/internal/uce/presence/IPresenceListener;

    iget-object v3, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceServiceListenerHdl:Lcom/android/ims/internal/uce/common/UceLong;

    invoke-interface {v0, v1, v2, v3}, Lcom/android/ims/internal/uce/presence/IPresenceService;->addListener(ILcom/android/ims/internal/uce/presence/IPresenceListener;Lcom/android/ims/internal/uce/common/UceLong;)Lcom/android/ims/internal/uce/common/StatusCode;

    move-result-object v0

    .line 542
    .local v0, "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    invoke-virtual {v0}, Lcom/android/ims/internal/uce/common/StatusCode;->getStatusCode()I

    move-result v1

    .line 543
    .local v1, "statusCode":I
    const-string v2, "AddListener"

    invoke-direct {p0, v2, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToastWithStatusCode(Ljava/lang/String;I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 546
    .end local v0    # "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    .end local v1    # "statusCode":I
    goto :goto_0

    .line 544
    :catch_0
    move-exception v0

    .line 545
    .local v0, "e":Landroid/os/RemoteException;
    const-string v1, "FAIL!! The connection between client and server is lost"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 547
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_0
    return-void
.end method

.method private testPresenceGetContactCap()V
    .locals 4

    .line 614
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceService:Lcom/android/ims/internal/uce/presence/IPresenceService;

    if-nez v0, :cond_0

    .line 615
    const-string v0, "FAIL!! Please Step1. Click createPresenceService\nStep2. Click getPresenceService"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 617
    return-void

    .line 619
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceService:Lcom/android/ims/internal/uce/presence/IPresenceService;

    iget v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceServiceHandle:I

    iget-object v2, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mContactUriList:[Ljava/lang/String;

    const/4 v3, 0x0

    aget-object v2, v2, v3

    const/16 v3, 0xa

    invoke-interface {v0, v1, v2, v3}, Lcom/android/ims/internal/uce/presence/IPresenceService;->getContactCap(ILjava/lang/String;I)Lcom/android/ims/internal/uce/common/StatusCode;

    move-result-object v0

    .line 621
    .local v0, "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    invoke-virtual {v0}, Lcom/android/ims/internal/uce/common/StatusCode;->getStatusCode()I

    move-result v1

    .line 622
    .local v1, "statusCode":I
    const-string v2, "GetContactCap"

    invoke-direct {p0, v2, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToastWithStatusCode(Ljava/lang/String;I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 625
    .end local v0    # "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    .end local v1    # "statusCode":I
    goto :goto_0

    .line 623
    :catch_0
    move-exception v0

    .line 624
    .local v0, "e":Landroid/os/RemoteException;
    const-string v1, "FAIL!! The connection between client and server is lost"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 626
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_0
    return-void
.end method

.method private testPresenceGetContactListCap()V
    .locals 4

    .line 630
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceService:Lcom/android/ims/internal/uce/presence/IPresenceService;

    if-nez v0, :cond_0

    .line 631
    const-string v0, "FAIL!! Please Step1. Click createPresenceService\nStep2. Click getPresenceService"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 633
    return-void

    .line 635
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceService:Lcom/android/ims/internal/uce/presence/IPresenceService;

    iget v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceServiceHandle:I

    iget-object v2, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mContactUriList:[Ljava/lang/String;

    const/16 v3, 0xa

    invoke-interface {v0, v1, v2, v3}, Lcom/android/ims/internal/uce/presence/IPresenceService;->getContactListCap(I[Ljava/lang/String;I)Lcom/android/ims/internal/uce/common/StatusCode;

    move-result-object v0

    .line 637
    .local v0, "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    invoke-virtual {v0}, Lcom/android/ims/internal/uce/common/StatusCode;->getStatusCode()I

    move-result v1

    .line 638
    .local v1, "statusCode":I
    const-string v2, "GetContactListCap"

    invoke-direct {p0, v2, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToastWithStatusCode(Ljava/lang/String;I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 641
    .end local v0    # "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    .end local v1    # "statusCode":I
    goto :goto_0

    .line 639
    :catch_0
    move-exception v0

    .line 640
    .local v0, "e":Landroid/os/RemoteException;
    const-string v1, "FAIL!! The connection between client and server is lost"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 642
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_0
    return-void
.end method

.method private testPresenceGetVersion()V
    .locals 3

    .line 567
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceService:Lcom/android/ims/internal/uce/presence/IPresenceService;

    if-nez v0, :cond_0

    .line 568
    const-string v0, "FAIL!! Please Step1. Click createPresenceService\nStep2. Click getPresenceService"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 570
    return-void

    .line 572
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceService:Lcom/android/ims/internal/uce/presence/IPresenceService;

    iget v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceServiceHandle:I

    invoke-interface {v0, v1}, Lcom/android/ims/internal/uce/presence/IPresenceService;->getVersion(I)Lcom/android/ims/internal/uce/common/StatusCode;

    move-result-object v0

    .line 573
    .local v0, "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    invoke-virtual {v0}, Lcom/android/ims/internal/uce/common/StatusCode;->getStatusCode()I

    move-result v1

    .line 574
    .local v1, "statusCode":I
    const-string v2, "GetVersion"

    invoke-direct {p0, v2, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToastWithStatusCode(Ljava/lang/String;I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 577
    .end local v0    # "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    .end local v1    # "statusCode":I
    goto :goto_0

    .line 575
    :catch_0
    move-exception v0

    .line 576
    .local v0, "e":Landroid/os/RemoteException;
    const-string v1, "FAIL!! The connection between client and server is lost"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 578
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_0
    return-void
.end method

.method private testPresencePublshMyCap()V
    .locals 4

    .line 597
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceService:Lcom/android/ims/internal/uce/presence/IPresenceService;

    if-nez v0, :cond_0

    .line 598
    const-string v0, "FAIL!! Please Step1. Click createPresenceService\nStep2. Click getPresenceService"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 600
    return-void

    .line 602
    :cond_0
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->createPresCapInfo()Lcom/android/ims/internal/uce/presence/PresCapInfo;

    move-result-object v0

    .line 603
    .local v0, "presCapInfo":Lcom/android/ims/internal/uce/presence/PresCapInfo;
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceService:Lcom/android/ims/internal/uce/presence/IPresenceService;

    iget v2, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceServiceHandle:I

    const/16 v3, 0xa

    invoke-interface {v1, v2, v0, v3}, Lcom/android/ims/internal/uce/presence/IPresenceService;->publishMyCap(ILcom/android/ims/internal/uce/presence/PresCapInfo;I)Lcom/android/ims/internal/uce/common/StatusCode;

    move-result-object v1

    .line 605
    .local v1, "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    invoke-virtual {v1}, Lcom/android/ims/internal/uce/common/StatusCode;->getStatusCode()I

    move-result v2

    .line 606
    .local v2, "statusCode":I
    const-string v3, "PublishMyCap"

    invoke-direct {p0, v3, v2}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToastWithStatusCode(Ljava/lang/String;I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 609
    .end local v0    # "presCapInfo":Lcom/android/ims/internal/uce/presence/PresCapInfo;
    .end local v1    # "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    .end local v2    # "statusCode":I
    goto :goto_0

    .line 607
    :catch_0
    move-exception v0

    .line 608
    .local v0, "e":Landroid/os/RemoteException;
    const-string v1, "FAIL!! The connection between client and server is lost"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 610
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_0
    return-void
.end method

.method private testPresenceReenableService()V
    .locals 3

    .line 582
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceService:Lcom/android/ims/internal/uce/presence/IPresenceService;

    if-nez v0, :cond_0

    .line 583
    const-string v0, "FAIL!! Please Step1. Click createPresenceService\nStep2. Click getPresenceService"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 585
    return-void

    .line 587
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceService:Lcom/android/ims/internal/uce/presence/IPresenceService;

    iget v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceServiceHandle:I

    const/16 v2, 0xa

    invoke-interface {v0, v1, v2}, Lcom/android/ims/internal/uce/presence/IPresenceService;->reenableService(II)Lcom/android/ims/internal/uce/common/StatusCode;

    move-result-object v0

    .line 588
    .local v0, "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    invoke-virtual {v0}, Lcom/android/ims/internal/uce/common/StatusCode;->getStatusCode()I

    move-result v1

    .line 589
    .local v1, "statusCode":I
    const-string v2, "ReenableService"

    invoke-direct {p0, v2, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToastWithStatusCode(Ljava/lang/String;I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 592
    .end local v0    # "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    .end local v1    # "statusCode":I
    goto :goto_0

    .line 590
    :catch_0
    move-exception v0

    .line 591
    .local v0, "e":Landroid/os/RemoteException;
    const-string v1, "FAIL!! The connection between client and server is lost"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 593
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_0
    return-void
.end method

.method private testPresenceRemoveLitener()V
    .locals 3

    .line 551
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceService:Lcom/android/ims/internal/uce/presence/IPresenceService;

    if-nez v0, :cond_0

    .line 552
    const-string v0, "FAIL!! Please Step1. Click createPresenceService\nStep2. Click getPresenceService"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 554
    return-void

    .line 556
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceService:Lcom/android/ims/internal/uce/presence/IPresenceService;

    iget v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceServiceHandle:I

    iget-object v2, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceServiceListenerHdl:Lcom/android/ims/internal/uce/common/UceLong;

    invoke-interface {v0, v1, v2}, Lcom/android/ims/internal/uce/presence/IPresenceService;->removeListener(ILcom/android/ims/internal/uce/common/UceLong;)Lcom/android/ims/internal/uce/common/StatusCode;

    move-result-object v0

    .line 558
    .local v0, "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    invoke-virtual {v0}, Lcom/android/ims/internal/uce/common/StatusCode;->getStatusCode()I

    move-result v1

    .line 559
    .local v1, "statusCode":I
    const-string v2, "RemoveListener"

    invoke-direct {p0, v2, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToastWithStatusCode(Ljava/lang/String;I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 562
    .end local v0    # "ret":Lcom/android/ims/internal/uce/common/StatusCode;
    .end local v1    # "statusCode":I
    goto :goto_0

    .line 560
    :catch_0
    move-exception v0

    .line 561
    .local v0, "e":Landroid/os/RemoteException;
    const-string v1, "FAIL!! The connection between client and server is lost"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 563
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_0
    return-void
.end method

.method private testUceCreateOptionsService()V
    .locals 2

    .line 461
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mUceService:Lcom/android/ims/internal/uce/uceservice/IUceService;

    const/4 v1, 0x0

    invoke-interface {v0, v1, v1}, Lcom/android/ims/internal/uce/uceservice/IUceService;->createOptionsService(Lcom/android/ims/internal/uce/options/IOptionsListener;Lcom/android/ims/internal/uce/common/UceLong;)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsServiceHandle:I

    .line 462
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "SUCCESS!! [createOptionsService]  ret = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsServiceHandle:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 465
    goto :goto_0

    .line 463
    :catch_0
    move-exception v0

    .line 464
    .local v0, "e":Landroid/os/RemoteException;
    const-string v1, "FAIL!! The connection between client and server is lost"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 466
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_0
    return-void
.end method

.method private testUceCreatePresenceService()V
    .locals 2

    .line 479
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mUceService:Lcom/android/ims/internal/uce/uceservice/IUceService;

    const/4 v1, 0x0

    invoke-interface {v0, v1, v1}, Lcom/android/ims/internal/uce/uceservice/IUceService;->createPresenceService(Lcom/android/ims/internal/uce/presence/IPresenceListener;Lcom/android/ims/internal/uce/common/UceLong;)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceServiceHandle:I

    .line 480
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "SUCCESS!! [createPresenceService] presenceServiceHandle = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceServiceHandle:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 484
    goto :goto_0

    .line 482
    :catch_0
    move-exception v0

    .line 483
    .local v0, "e":Landroid/os/RemoteException;
    const-string v1, "FAIL!! The connection between client and server is lost"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 485
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_0
    return-void
.end method

.method private testUceDestroyOptionsService()V
    .locals 2

    .line 470
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mUceService:Lcom/android/ims/internal/uce/uceservice/IUceService;

    iget v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsServiceHandle:I

    invoke-interface {v0, v1}, Lcom/android/ims/internal/uce/uceservice/IUceService;->destroyOptionsService(I)V

    .line 471
    const-string v0, "SUCCESS!! [destroyOptionsService]"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 474
    goto :goto_0

    .line 472
    :catch_0
    move-exception v0

    .line 473
    .local v0, "e":Landroid/os/RemoteException;
    const-string v1, "FAIL!! The connection between client and server is lost"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 475
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_0
    return-void
.end method

.method private testUceDestroyPresenceService()V
    .locals 2

    .line 489
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mUceService:Lcom/android/ims/internal/uce/uceservice/IUceService;

    iget v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsServiceHandle:I

    invoke-interface {v0, v1}, Lcom/android/ims/internal/uce/uceservice/IUceService;->destroyPresenceService(I)V

    .line 490
    const-string v0, "SUCCESS!! [destroyPresenceService] "

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 493
    goto :goto_0

    .line 491
    :catch_0
    move-exception v0

    .line 492
    .local v0, "e":Landroid/os/RemoteException;
    const-string v1, "FAIL!! The connection between client and server is lost"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 494
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_0
    return-void
.end method

.method private testUceGetOptionsService()V
    .locals 2

    .line 520
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mUceService:Lcom/android/ims/internal/uce/uceservice/IUceService;

    invoke-interface {v0}, Lcom/android/ims/internal/uce/uceservice/IUceService;->getOptionsService()Lcom/android/ims/internal/uce/options/IOptionsService;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mOptionsService:Lcom/android/ims/internal/uce/options/IOptionsService;

    .line 521
    if-eqz v0, :cond_0

    .line 522
    const-string v0, "SUCCESS!! [GetOptionsService] mOptionsService is not null"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    goto :goto_0

    .line 524
    :cond_0
    const-string v0, "SUCCESS!! [GetOptionsService] mOptionsService is null"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 528
    :goto_0
    goto :goto_1

    .line 526
    :catch_0
    move-exception v0

    .line 527
    .local v0, "e":Landroid/os/RemoteException;
    const-string v1, "FAIL!! The connection between client and server is lost"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 529
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_1
    return-void
.end method

.method private testUceGetPresenceService()V
    .locals 2

    .line 507
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mUceService:Lcom/android/ims/internal/uce/uceservice/IUceService;

    invoke-interface {v0}, Lcom/android/ims/internal/uce/uceservice/IUceService;->getPresenceService()Lcom/android/ims/internal/uce/presence/IPresenceService;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mPresenceService:Lcom/android/ims/internal/uce/presence/IPresenceService;

    .line 508
    if-eqz v0, :cond_0

    .line 509
    const-string v0, "SUCCESS!! [GetPresenceService] mPresenceService is not null"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    goto :goto_0

    .line 511
    :cond_0
    const-string v0, "SUCCESS!! [GetPresenceService] mPresenceService is null"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 515
    :goto_0
    goto :goto_1

    .line 513
    :catch_0
    move-exception v0

    .line 514
    .local v0, "e":Landroid/os/RemoteException;
    const-string v1, "FAIL!! The connection between client and server is lost"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 516
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_1
    return-void
.end method

.method private testUceGetServiceStatus()V
    .locals 3

    .line 498
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mUceService:Lcom/android/ims/internal/uce/uceservice/IUceService;

    invoke-interface {v0}, Lcom/android/ims/internal/uce/uceservice/IUceService;->getServiceStatus()Z

    move-result v0

    .line 499
    .local v0, "ret":Z
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "SUCCESS!! [getServiceStatus] ret = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 502
    .end local v0    # "ret":Z
    goto :goto_0

    .line 500
    :catch_0
    move-exception v0

    .line 501
    .local v0, "e":Landroid/os/RemoteException;
    const-string v1, "FAIL!! The connection between client and server is lost"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 503
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_0
    return-void
.end method

.method private testUceIsServiceStarted()V
    .locals 3

    .line 452
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mUceService:Lcom/android/ims/internal/uce/uceservice/IUceService;

    invoke-interface {v0}, Lcom/android/ims/internal/uce/uceservice/IUceService;->isServiceStarted()Z

    move-result v0

    .line 453
    .local v0, "ret":Z
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "SUCCESS!! [isServiceStarted] ret = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 456
    .end local v0    # "ret":Z
    goto :goto_0

    .line 454
    :catch_0
    move-exception v0

    .line 455
    .local v0, "e":Landroid/os/RemoteException;
    const-string v1, "FAIL!! The connection between client and server is lost"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 457
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_0
    return-void
.end method

.method private testUceStartService()V
    .locals 2

    .line 426
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mUceService:Lcom/android/ims/internal/uce/uceservice/IUceService;

    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mUceListener:Lcom/android/ims/internal/uce/uceservice/IUceListener;

    invoke-interface {v0, v1}, Lcom/android/ims/internal/uce/uceservice/IUceService;->startService(Lcom/android/ims/internal/uce/uceservice/IUceListener;)Z

    move-result v0

    .line 427
    .local v0, "ret":Z
    if-eqz v0, :cond_0

    .line 428
    const-string v1, "SUCCESS!! [startService]"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    goto :goto_0

    .line 430
    :cond_0
    const-string v1, "FAIL!! [startService]"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 434
    .end local v0    # "ret":Z
    :goto_0
    goto :goto_1

    .line 432
    :catch_0
    move-exception v0

    .line 433
    .local v0, "e":Landroid/os/RemoteException;
    const-string v1, "FAIL!! The connection between client and server is lost"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 435
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_1
    return-void
.end method

.method private testUceStopService()V
    .locals 2

    .line 439
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mUceService:Lcom/android/ims/internal/uce/uceservice/IUceService;

    invoke-interface {v0}, Lcom/android/ims/internal/uce/uceservice/IUceService;->stopService()Z

    move-result v0

    .line 440
    .local v0, "ret":Z
    if-eqz v0, :cond_0

    .line 441
    const-string v1, "SUCCESS!! [stopService]"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    goto :goto_0

    .line 443
    :cond_0
    const-string v1, "FAIL!! [stopService]"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 447
    .end local v0    # "ret":Z
    :goto_0
    goto :goto_1

    .line 445
    :catch_0
    move-exception v0

    .line 446
    .local v0, "e":Landroid/os/RemoteException;
    const-string v1, "FAIL!! The connection between client and server is lost"

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->showToast(Ljava/lang/String;)V

    .line 448
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_1
    return-void
.end method

.method private transferCapInfoToString(Lcom/android/ims/internal/uce/common/CapInfo;)Ljava/lang/String;
    .locals 5
    .param p1, "capInfo"    # Lcom/android/ims/internal/uce/common/CapInfo;

    .line 814
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, ", isImsSupported = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/android/ims/internal/uce/common/CapInfo;->isImSupported()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", isFtThumbSupported = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 815
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/common/CapInfo;->isFtThumbSupported()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", isFtSnFSupported = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 816
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/common/CapInfo;->isFtSnFSupported()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", isFtHttpSupported = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 817
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/common/CapInfo;->isFtHttpSupported()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", isFtSupported = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 818
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/common/CapInfo;->isFtSupported()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", isIsSupported = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 819
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/common/CapInfo;->isIsSupported()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", isVsDuringCSSupported = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 820
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/common/CapInfo;->isVsDuringCSSupported()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", isVsSupported = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 821
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/common/CapInfo;->isVsSupported()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", isSpSupported = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 822
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/common/CapInfo;->isSpSupported()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", isCdViaPresenceSupported = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 823
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/common/CapInfo;->isCdViaPresenceSupported()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", isIpVideoSupported = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 824
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/common/CapInfo;->isIpVideoSupported()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", isGeoPullFtSupported = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 825
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/common/CapInfo;->isGeoPullFtSupported()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", isGeoPullSupported = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 826
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/common/CapInfo;->isGeoPullSupported()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", isGeoPushSupported = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 827
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/common/CapInfo;->isGeoPushSupported()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", isSmSupported = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 828
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/common/CapInfo;->isSmSupported()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", isFullSnFGroupChatSupported = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 829
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/common/CapInfo;->isFullSnFGroupChatSupported()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", isRcsIpVoiceCallSupported = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 830
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/common/CapInfo;->isRcsIpVoiceCallSupported()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", isRcsIpVideoCallSupported = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 831
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/common/CapInfo;->isRcsIpVideoCallSupported()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", isRcsIpVideoOnlyCallSupported = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 832
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/common/CapInfo;->isRcsIpVideoOnlyCallSupported()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", timestamp = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 833
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/common/CapInfo;->getCapTimestamp()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 834
    .local v0, "info":Ljava/lang/String;
    invoke-virtual {p1}, Lcom/android/ims/internal/uce/common/CapInfo;->getExts()[Ljava/lang/String;

    move-result-object v1

    .line 835
    .local v1, "extensions":[Ljava/lang/String;
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    array-length v3, v1

    if-ge v2, v3, :cond_0

    .line 836
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ","

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 837
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v4, v1, v2

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 835
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 839
    .end local v2    # "i":I
    :cond_0
    return-object v0
.end method


# virtual methods
.method public getCount()I
    .locals 1

    .line 100
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mData:Ljava/util/List;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    goto :goto_0

    :cond_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    :goto_0
    return v0
.end method

.method public getItem(I)Ljava/lang/Object;
    .locals 1
    .param p1, "position"    # I

    .line 104
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mData:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    return-object v0
.end method

.method public getItemId(I)J
    .locals 2
    .param p1, "position"    # I

    .line 109
    int-to-long v0, p1

    return-wide v0
.end method

.method public getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;
    .locals 4
    .param p1, "position"    # I
    .param p2, "view"    # Landroid/view/View;
    .param p3, "viewGroup"    # Landroid/view/ViewGroup;

    .line 114
    const/4 v0, 0x0

    .line 115
    .local v0, "viewHolder":Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$ViewHolder;
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mContext:Landroid/content/Context;

    if-nez v1, :cond_0

    .line 116
    invoke-virtual {p3}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mContext:Landroid/content/Context;

    .line 117
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->initContactUriList()V

    .line 118
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->initUce()V

    .line 120
    :cond_0
    if-nez p2, :cond_1

    .line 121
    invoke-virtual {p3}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v1

    const v2, 0x7f080009

    const/4 v3, 0x0

    invoke-virtual {v1, v2, v3}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p2

    .line 123
    new-instance v1, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$ViewHolder;

    invoke-direct {v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$ViewHolder;-><init>()V

    move-object v0, v1

    .line 124
    const v1, 0x7f060558

    invoke-virtual {p2, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, v0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$ViewHolder;->mTv:Landroid/widget/TextView;

    .line 125
    const v1, 0x7f060557

    invoke-virtual {p2, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, v0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$ViewHolder;->mBtn:Landroid/widget/Button;

    .line 126
    invoke-virtual {p2, v0}, Landroid/view/View;->setTag(Ljava/lang/Object;)V

    .line 129
    :cond_1
    invoke-virtual {p2}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$ViewHolder;

    .line 130
    iget-object v1, v0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$ViewHolder;->mBtn:Landroid/widget/Button;

    const-string v2, "Test"

    invoke-virtual {v1, v2}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    .line 131
    iget-object v1, v0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$ViewHolder;->mBtn:Landroid/widget/Button;

    const v2, 0x7f060245

    iget-object v3, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mData:Ljava/util/List;

    invoke-interface {v3, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Landroid/widget/Button;->setTag(ILjava/lang/Object;)V

    .line 132
    iget-object v1, v0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$ViewHolder;->mBtn:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 133
    iget-object v1, v0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter$ViewHolder;->mTv:Landroid/widget/TextView;

    iget-object v2, p0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->mData:Ljava/util/List;

    invoke-interface {v2, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/CharSequence;

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 134
    return-object p2
.end method

.method public onClick(Landroid/view/View;)V
    .locals 2
    .param p1, "view"    # Landroid/view/View;

    .line 139
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    const v1, 0x7f060557

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 141
    :cond_0
    const v0, 0x7f060245

    invoke-virtual {p1, v0}, Landroid/view/View;->getTag(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 142
    .local v0, "apiName":Ljava/lang/String;
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;->startTestApi(Ljava/lang/String;)V

    .line 145
    .end local v0    # "apiName":Ljava/lang/String;
    :goto_0
    return-void
.end method
