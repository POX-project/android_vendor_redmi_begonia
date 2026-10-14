.class public Lcom/mediatek/engineermode/EngineerMode;
.super Landroid/app/Activity;
.source "EngineerMode.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;
    }
.end annotation


# static fields
.field private static final DIALOG_BACKGROUD_PERMISSION_WARNING:I = 0x1

.field private static final DIALOG_DEVELOPMENT_SETTINGS_DISABLED:I = 0x0

.field private static final PROP_MONKEY:Ljava/lang/String; = "ro.monkey"

.field private static final RUNTIME_PERMISSION_REQUEST_CODE:I = 0x64

.field private static final TAB_COUNT:I = 0x6

.field private static final TAB_COUNT_WIFIONLY:I = 0x5

.field private static final TAB_TITLE_IDS:[I

.field private static final TAB_TITLE_IDS_WIFIONLY:[I

.field private static final TAG:Ljava/lang/String; = "MainEntrance"

.field public static sWifiOnly:Z


# instance fields
.field private mAllRuntimePermissionGranted:Z

.field private mLastEnabledState:Z

.field private mPagerAdapter:Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;

.field private mPermissionMgr:Lcom/mediatek/engineermode/RuntimePermissionManager;

.field private mRestore:Z

.field private mTabCount:I

.field private mTabTitleList:[I

.field private mTabs:[Lcom/mediatek/engineermode/PrefsFragment;

.field private mViewPager:Landroid/support/v4/view/ViewPager;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 97
    const/4 v0, 0x6

    new-array v0, v0, [I

    fill-array-data v0, :array_0

    sput-object v0, Lcom/mediatek/engineermode/EngineerMode;->TAB_TITLE_IDS:[I

    .line 102
    const/4 v0, 0x5

    new-array v0, v0, [I

    fill-array-data v0, :array_1

    sput-object v0, Lcom/mediatek/engineermode/EngineerMode;->TAB_TITLE_IDS_WIFIONLY:[I

    .line 108
    const/4 v0, 0x0

    sput-boolean v0, Lcom/mediatek/engineermode/EngineerMode;->sWifiOnly:Z

    return-void

    :array_0
    .array-data 4
        0x7f0a0605
        0x7f0a0600
        0x7f0a0601
        0x7f0a0602
        0x7f0a0603
        0x7f0a0604
    .end array-data

    :array_1
    .array-data 4
        0x7f0a0600
        0x7f0a0601
        0x7f0a0602
        0x7f0a0603
        0x7f0a0604
    .end array-data
.end method

.method public constructor <init>()V
    .locals 3

    .line 77
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 85
    const/4 v0, 0x6

    new-array v0, v0, [Lcom/mediatek/engineermode/PrefsFragment;

    iput-object v0, p0, Lcom/mediatek/engineermode/EngineerMode;->mTabs:[Lcom/mediatek/engineermode/PrefsFragment;

    .line 91
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/EngineerMode;->mAllRuntimePermissionGranted:Z

    .line 92
    new-instance v1, Lcom/mediatek/engineermode/RuntimePermissionManager;

    const/16 v2, 0x64

    invoke-direct {v1, p0, v2}, Lcom/mediatek/engineermode/RuntimePermissionManager;-><init>(Landroid/app/Activity;I)V

    iput-object v1, p0, Lcom/mediatek/engineermode/EngineerMode;->mPermissionMgr:Lcom/mediatek/engineermode/RuntimePermissionManager;

    .line 109
    iput-boolean v0, p0, Lcom/mediatek/engineermode/EngineerMode;->mRestore:Z

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/EngineerMode;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/EngineerMode;

    .line 77
    iget v0, p0, Lcom/mediatek/engineermode/EngineerMode;->mTabCount:I

    return v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/EngineerMode;)[I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/EngineerMode;

    .line 77
    iget-object v0, p0, Lcom/mediatek/engineermode/EngineerMode;->mTabTitleList:[I

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/EngineerMode;)[Lcom/mediatek/engineermode/PrefsFragment;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/EngineerMode;

    .line 77
    iget-object v0, p0, Lcom/mediatek/engineermode/EngineerMode;->mTabs:[Lcom/mediatek/engineermode/PrefsFragment;

    return-object v0
.end method

.method private initFragment()V
    .locals 7

    .line 146
    const-string v0, "MainEntrance"

    const-string v1, "initFragment"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 147
    const v1, 0x7f08008f

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/EngineerMode;->setContentView(I)V

    .line 148
    invoke-virtual {p0}, Lcom/mediatek/engineermode/EngineerMode;->getFragmentManager()Landroid/app/FragmentManager;

    move-result-object v1

    .line 149
    .local v1, "fragmentManager":Landroid/app/FragmentManager;
    nop

    .line 150
    invoke-virtual {v1}, Landroid/app/FragmentManager;->beginTransaction()Landroid/app/FragmentTransaction;

    move-result-object v2

    .line 152
    .local v2, "transaction":Landroid/app/FragmentTransaction;
    invoke-direct {p0}, Lcom/mediatek/engineermode/EngineerMode;->isWifiOnly()Z

    move-result v3

    const/4 v4, 0x5

    if-eqz v3, :cond_0

    .line 153
    sget-object v3, Lcom/mediatek/engineermode/EngineerMode;->TAB_TITLE_IDS_WIFIONLY:[I

    iput-object v3, p0, Lcom/mediatek/engineermode/EngineerMode;->mTabTitleList:[I

    .line 154
    iput v4, p0, Lcom/mediatek/engineermode/EngineerMode;->mTabCount:I

    goto :goto_0

    .line 155
    :cond_0
    invoke-static {}, Landroid/os/UserManager;->supportsMultipleUsers()Z

    move-result v3

    if-eqz v3, :cond_1

    .line 156
    invoke-static {p0}, Landroid/os/UserManager;->get(Landroid/content/Context;)Landroid/os/UserManager;

    move-result-object v3

    invoke-virtual {v3}, Landroid/os/UserManager;->getUserHandle()I

    move-result v3

    if-eqz v3, :cond_1

    .line 157
    sget-object v3, Lcom/mediatek/engineermode/EngineerMode;->TAB_TITLE_IDS_WIFIONLY:[I

    iput-object v3, p0, Lcom/mediatek/engineermode/EngineerMode;->mTabTitleList:[I

    .line 158
    iput v4, p0, Lcom/mediatek/engineermode/EngineerMode;->mTabCount:I

    goto :goto_0

    .line 160
    :cond_1
    sget-object v3, Lcom/mediatek/engineermode/EngineerMode;->TAB_TITLE_IDS:[I

    iput-object v3, p0, Lcom/mediatek/engineermode/EngineerMode;->mTabTitleList:[I

    .line 161
    const/4 v3, 0x6

    iput v3, p0, Lcom/mediatek/engineermode/EngineerMode;->mTabCount:I

    .line 164
    :goto_0
    iget-boolean v3, p0, Lcom/mediatek/engineermode/EngineerMode;->mRestore:Z

    if-eqz v3, :cond_3

    .line 165
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_1
    iget v4, p0, Lcom/mediatek/engineermode/EngineerMode;->mTabCount:I

    if-ge v3, v4, :cond_3

    .line 166
    nop

    .line 167
    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    .line 166
    invoke-virtual {v1, v4}, Landroid/app/FragmentManager;->findFragmentByTag(Ljava/lang/String;)Landroid/app/Fragment;

    move-result-object v4

    check-cast v4, Lcom/mediatek/engineermode/PrefsFragment;

    .line 168
    .local v4, "fragment":Lcom/mediatek/engineermode/PrefsFragment;
    if-eqz v4, :cond_2

    .line 169
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "old fragment:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v0, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 170
    invoke-virtual {v2, v4}, Landroid/app/FragmentTransaction;->remove(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;

    .line 165
    .end local v4    # "fragment":Lcom/mediatek/engineermode/PrefsFragment;
    :cond_2
    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    .line 174
    .end local v3    # "i":I
    :cond_3
    const/4 v3, 0x0

    .restart local v3    # "i":I
    :goto_2
    iget v4, p0, Lcom/mediatek/engineermode/EngineerMode;->mTabCount:I

    const v5, 0x7f060778

    if-ge v3, v4, :cond_4

    .line 176
    iget-object v4, p0, Lcom/mediatek/engineermode/EngineerMode;->mTabs:[Lcom/mediatek/engineermode/PrefsFragment;

    new-instance v6, Lcom/mediatek/engineermode/PrefsFragment;

    invoke-direct {v6}, Lcom/mediatek/engineermode/PrefsFragment;-><init>()V

    aput-object v6, v4, v3

    .line 177
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "mTabs[i]:"

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/mediatek/engineermode/EngineerMode;->mTabs:[Lcom/mediatek/engineermode/PrefsFragment;

    aget-object v6, v6, v3

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 178
    iget-object v4, p0, Lcom/mediatek/engineermode/EngineerMode;->mTabs:[Lcom/mediatek/engineermode/PrefsFragment;

    aget-object v4, v4, v3

    invoke-virtual {v4, v3}, Lcom/mediatek/engineermode/PrefsFragment;->setResource(I)V

    .line 179
    iget-object v4, p0, Lcom/mediatek/engineermode/EngineerMode;->mTabs:[Lcom/mediatek/engineermode/PrefsFragment;

    aget-object v4, v4, v3

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v5, v4, v6}, Landroid/app/FragmentTransaction;->add(ILandroid/app/Fragment;Ljava/lang/String;)Landroid/app/FragmentTransaction;

    .line 180
    iget-object v4, p0, Lcom/mediatek/engineermode/EngineerMode;->mTabs:[Lcom/mediatek/engineermode/PrefsFragment;

    aget-object v4, v4, v3

    invoke-virtual {v2, v4}, Landroid/app/FragmentTransaction;->hide(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;

    .line 174
    add-int/lit8 v3, v3, 0x1

    goto :goto_2

    .line 185
    .end local v3    # "i":I
    :cond_4
    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/EngineerMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/support/v4/view/ViewPager;

    iput-object v0, p0, Lcom/mediatek/engineermode/EngineerMode;->mViewPager:Landroid/support/v4/view/ViewPager;

    .line 186
    const v0, 0x7f0605f2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/EngineerMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/support/v4/view/PagerTitleStrip;

    .line 187
    .local v0, "pagerTitleStrip":Landroid/support/v4/view/PagerTitleStrip;
    const/16 v3, 0x64

    invoke-virtual {v0, v3}, Landroid/support/v4/view/PagerTitleStrip;->setTextSpacing(I)V

    .line 189
    invoke-virtual {v2}, Landroid/app/FragmentTransaction;->commitAllowingStateLoss()I

    .line 191
    new-instance v3, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;

    invoke-direct {v3, p0}, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;-><init>(Lcom/mediatek/engineermode/EngineerMode;)V

    iput-object v3, p0, Lcom/mediatek/engineermode/EngineerMode;->mPagerAdapter:Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;

    .line 192
    iget-object v4, p0, Lcom/mediatek/engineermode/EngineerMode;->mViewPager:Landroid/support/v4/view/ViewPager;

    invoke-virtual {v4, v3}, Landroid/support/v4/view/ViewPager;->setAdapter(Landroid/support/v4/view/PagerAdapter;)V

    .line 193
    iget-object v3, p0, Lcom/mediatek/engineermode/EngineerMode;->mViewPager:Landroid/support/v4/view/ViewPager;

    const/4 v4, 0x0

    invoke-virtual {v3, v4}, Landroid/support/v4/view/ViewPager;->setSaveEnabled(Z)V

    .line 194
    iget-object v3, p0, Lcom/mediatek/engineermode/EngineerMode;->mViewPager:Landroid/support/v4/view/ViewPager;

    invoke-virtual {v3, v4}, Landroid/support/v4/view/ViewPager;->setCurrentItem(I)V

    .line 195
    return-void
.end method

.method public static isAutoTest()Z
    .locals 6

    .line 380
    const-string v0, "ro.monkey"

    const/4 v1, 0x0

    invoke-static {v0, v1}, Landroid/os/SystemProperties;->getBoolean(Ljava/lang/String;Z)Z

    move-result v0

    .line 381
    .local v0, "isMonkeyRunning":Z
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "isAutoTest()-> Monkey running flag is "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "MainEntrance"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 384
    invoke-static {}, Landroid/app/ActivityManager;->isUserAMonkey()Z

    move-result v2

    .line 385
    .local v2, "isUserAMonkey":Z
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "isAutoTest()-> isUserAMonkey="

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 387
    if-nez v0, :cond_0

    if-eqz v2, :cond_1

    :cond_0
    const/4 v1, 0x1

    :cond_1
    return v1
.end method

.method private isWifiOnly()Z
    .locals 3

    .line 198
    nop

    .line 199
    const-string v0, "connectivity"

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/EngineerMode;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/net/ConnectivityManager;

    .line 201
    .local v0, "connManager":Landroid/net/ConnectivityManager;
    if-eqz v0, :cond_0

    .line 202
    const/4 v1, 0x0

    .line 203
    invoke-virtual {v0, v1}, Landroid/net/ConnectivityManager;->isNetworkSupported(I)Z

    move-result v1

    xor-int/lit8 v1, v1, 0x1

    sput-boolean v1, Lcom/mediatek/engineermode/EngineerMode;->sWifiOnly:Z

    .line 204
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "sWifiOnly: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v2, Lcom/mediatek/engineermode/EngineerMode;->sWifiOnly:Z

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "MainEntrance"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 206
    :cond_0
    sget-boolean v1, Lcom/mediatek/engineermode/EngineerMode;->sWifiOnly:Z

    return v1
.end method

.method private showUI()V
    .locals 1

    .line 369
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/EngineerMode;->mAllRuntimePermissionGranted:Z

    .line 370
    invoke-direct {p0}, Lcom/mediatek/engineermode/EngineerMode;->initFragment()V

    .line 371
    invoke-direct {p0}, Lcom/mediatek/engineermode/EngineerMode;->updateFragment()V

    .line 372
    return-void
.end method

.method private updateFragment()V
    .locals 1

    .line 218
    iget-boolean v0, p0, Lcom/mediatek/engineermode/EngineerMode;->mLastEnabledState:Z

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/mediatek/engineermode/EngineerMode;->mAllRuntimePermissionGranted:Z

    if-eqz v0, :cond_0

    .line 219
    iget-object v0, p0, Lcom/mediatek/engineermode/EngineerMode;->mPagerAdapter:Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;->updateCurrentFragment()V

    .line 221
    :cond_0
    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 7
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 112
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 113
    invoke-static {}, Lcom/mediatek/engineermode/EngineerMode;->isAutoTest()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 114
    invoke-virtual {p0}, Lcom/mediatek/engineermode/EngineerMode;->finish()V

    .line 115
    return-void

    .line 117
    :cond_0
    new-instance v0, Landroid/util/LogWriter;

    const/4 v1, 0x5

    const-string v2, "MainEntrance"

    invoke-direct {v0, v1, v2}, Landroid/util/LogWriter;-><init>(ILjava/lang/String;)V

    .line 118
    .local v0, "writer":Landroid/util/LogWriter;
    new-instance v1, Lcom/android/internal/util/IndentingPrintWriter;

    const-string v3, "  "

    invoke-direct {v1, v0, v3}, Lcom/android/internal/util/IndentingPrintWriter;-><init>(Ljava/io/Writer;Ljava/lang/String;)V

    .line 119
    .local v1, "pw":Lcom/android/internal/util/IndentingPrintWriter;
    const-string v3, "Bundle stats:"

    invoke-virtual {v1, v3}, Lcom/android/internal/util/IndentingPrintWriter;->println(Ljava/lang/String;)V

    .line 120
    invoke-static {v1, p1}, Landroid/os/Bundle;->dumpStats(Lcom/android/internal/util/IndentingPrintWriter;Landroid/os/BaseBundle;)V

    .line 121
    const/4 v4, 0x1

    if-eqz p1, :cond_1

    .line 122
    iput-boolean v4, p0, Lcom/mediatek/engineermode/EngineerMode;->mRestore:Z

    .line 123
    const-string v5, "android:fragments"

    invoke-virtual {p1, v5}, Landroid/os/Bundle;->remove(Ljava/lang/String;)V

    .line 124
    invoke-virtual {v1, v3}, Lcom/android/internal/util/IndentingPrintWriter;->println(Ljava/lang/String;)V

    .line 125
    invoke-static {v1, p1}, Landroid/os/Bundle;->dumpStats(Lcom/android/internal/util/IndentingPrintWriter;Landroid/os/BaseBundle;)V

    .line 127
    :cond_1
    invoke-virtual {p0}, Lcom/mediatek/engineermode/EngineerMode;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v3

    const-string v5, "development_settings_enabled"

    const/4 v6, 0x0

    invoke-static {v3, v5, v6}, Landroid/provider/Settings$Global;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;I)I

    move-result v3

    if-eqz v3, :cond_2

    move v3, v4

    goto :goto_0

    :cond_2
    move v3, v6

    :goto_0
    iput-boolean v3, p0, Lcom/mediatek/engineermode/EngineerMode;->mLastEnabledState:Z

    .line 129
    if-nez v3, :cond_4

    .line 130
    invoke-static {v6}, Lcom/mediatek/engineermode/ChipSupport;->isFeatureSupported(I)Z

    move-result v3

    if-nez v3, :cond_4

    .line 131
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->isEngLoad()Z

    move-result v3

    if-nez v3, :cond_4

    .line 132
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->isUserDebugLoad()Z

    move-result v3

    if-eqz v3, :cond_3

    goto :goto_1

    .line 139
    :cond_3
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "you must a developer,mLastEnabledState="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v4, p0, Lcom/mediatek/engineermode/EngineerMode;->mLastEnabledState:Z

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 140
    invoke-virtual {p0, v6}, Lcom/mediatek/engineermode/EngineerMode;->showDialog(I)V

    goto :goto_2

    .line 133
    :cond_4
    :goto_1
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "mLastEnabledState="

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v5, p0, Lcom/mediatek/engineermode/EngineerMode;->mLastEnabledState:Z

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 134
    iget-object v2, p0, Lcom/mediatek/engineermode/EngineerMode;->mPermissionMgr:Lcom/mediatek/engineermode/RuntimePermissionManager;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/RuntimePermissionManager;->requestRuntimePermissions()Z

    move-result v2

    if-eqz v2, :cond_5

    .line 135
    iput-boolean v4, p0, Lcom/mediatek/engineermode/EngineerMode;->mAllRuntimePermissionGranted:Z

    .line 136
    invoke-direct {p0}, Lcom/mediatek/engineermode/EngineerMode;->initFragment()V

    .line 142
    :cond_5
    :goto_2
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 4
    .param p1, "id"    # I

    .line 310
    const/4 v0, 0x0

    .line 311
    .local v0, "dialog":Landroid/app/Dialog;
    const/4 v1, 0x0

    .line 312
    .local v1, "builder":Landroid/app/AlertDialog$Builder;
    const v2, 0x7f0a02e8

    if-eqz p1, :cond_1

    const/4 v3, 0x1

    if-eq p1, v3, :cond_0

    .line 335
    const-string v2, "MainEntrance"

    const-string v3, "error dialog ID"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 329
    :cond_0
    new-instance v3, Landroid/app/AlertDialog$Builder;

    invoke-direct {v3, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    move-object v1, v3

    .line 330
    const v3, 0x7f0a02e9

    invoke-virtual {v1, v3}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    .line 331
    const v3, 0x7f0a027c

    invoke-virtual {v1, v3}, Landroid/app/AlertDialog$Builder;->setMessage(I)Landroid/app/AlertDialog$Builder;

    .line 332
    const/4 v3, 0x0

    invoke-virtual {v1, v2, v3}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 333
    invoke-virtual {v1}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v2

    return-object v2

    .line 314
    :cond_1
    new-instance v3, Landroid/app/AlertDialog$Builder;

    invoke-direct {v3, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    move-object v1, v3

    .line 315
    const-string v3, "Notice:"

    invoke-virtual {v1, v3}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 316
    const/4 v3, 0x0

    invoke-virtual {v1, v3}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    .line 317
    const-string v3, "EM is an advanced debug mode. if you want to entry the EM,please entry the Developer options at settings!"

    invoke-virtual {v1, v3}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 320
    new-instance v3, Lcom/mediatek/engineermode/EngineerMode$1;

    invoke-direct {v3, p0}, Lcom/mediatek/engineermode/EngineerMode$1;-><init>(Lcom/mediatek/engineermode/EngineerMode;)V

    invoke-virtual {v1, v2, v3}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 326
    invoke-virtual {v1}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 327
    nop

    .line 338
    :goto_0
    return-object v0
.end method

.method public onRequestPermissionsResult(I[Ljava/lang/String;[I)V
    .locals 4
    .param p1, "requestCode"    # I
    .param p2, "permissions"    # [Ljava/lang/String;
    .param p3, "grantResults"    # [I

    .line 345
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onRequestPermissionsResult(), requestCode = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MainEntrance"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 346
    if-eqz p3, :cond_5

    array-length v0, p3

    if-nez v0, :cond_0

    goto :goto_3

    .line 349
    :cond_0
    const/16 v0, 0x64

    if-ne p1, v0, :cond_4

    .line 350
    iget-object v0, p0, Lcom/mediatek/engineermode/EngineerMode;->mPermissionMgr:Lcom/mediatek/engineermode/RuntimePermissionManager;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/RuntimePermissionManager;->getPermissionNotGranted()Ljava/util/List;

    move-result-object v0

    .line 352
    .local v0, "permission":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    if-eqz v0, :cond_3

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_1

    goto :goto_0

    .line 354
    :cond_1
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    const/4 v2, 0x1

    if-ne v1, v2, :cond_2

    const/4 v1, 0x0

    .line 355
    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    const-string v3, "android.permission.ACCESS_BACKGROUND_LOCATION"

    invoke-virtual {v3, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 356
    invoke-direct {p0}, Lcom/mediatek/engineermode/EngineerMode;->showUI()V

    .line 357
    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/EngineerMode;->showDialog(I)V

    goto :goto_1

    .line 359
    :cond_2
    const v1, 0x7f0a027d

    invoke-static {p0, v1, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v1

    .line 360
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 361
    invoke-virtual {p0}, Lcom/mediatek/engineermode/EngineerMode;->finish()V

    goto :goto_1

    .line 353
    :cond_3
    :goto_0
    invoke-direct {p0}, Lcom/mediatek/engineermode/EngineerMode;->showUI()V

    .line 363
    .end local v0    # "permission":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    :goto_1
    goto :goto_2

    .line 364
    :cond_4
    invoke-super {p0, p1, p2, p3}, Landroid/app/Activity;->onRequestPermissionsResult(I[Ljava/lang/String;[I)V

    .line 366
    :goto_2
    return-void

    .line 347
    :cond_5
    :goto_3
    return-void
.end method

.method protected onResume()V
    .locals 0

    .line 212
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 213
    invoke-direct {p0}, Lcom/mediatek/engineermode/EngineerMode;->updateFragment()V

    .line 214
    return-void
.end method
