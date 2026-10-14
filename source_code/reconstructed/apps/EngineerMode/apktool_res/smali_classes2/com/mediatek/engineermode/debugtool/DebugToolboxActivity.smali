.class public Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;
.super Landroid/preference/PreferenceActivity;
.source "DebugToolboxActivity.java"

# interfaces
.implements Landroid/content/SharedPreferences$OnSharedPreferenceChangeListener;
.implements Landroid/preference/Preference$OnPreferenceClickListener;


# static fields
.field private static final TAG:Ljava/lang/String; = "DebugToolboxActivity/Debugutils"

.field private static final sAEE_BUILD_INFO:Ljava/lang/String; = "ro.vendor.aee.build.info"

.field private static final sAEE_MODE:Ljava/lang/String; = "persist.vendor.mtk.aee.mode"

.field private static final sAEE_MODE_STRING:[Ljava/lang/String;

.field private static final sDAL_OPTION_STRING:[Ljava/lang/String;

.field private static final sDAL_SETTING:Ljava/lang/String; = "persist.vendor.mtk.aee.dal"


# instance fields
.field private mBoundService:Lcom/mediatek/engineermode/debugtool/AEEControlService;

.field mCleanData:Landroid/preference/PreferenceScreen;

.field mClearDAL:Landroid/preference/PreferenceScreen;

.field private mConnection:Landroid/content/ServiceConnection;

.field private mIsBound:Z

.field mPrefAeemode:Landroid/preference/ListPreference;

.field mPrefDaloption:Landroid/preference/ListPreference;


# direct methods
.method static constructor <clinit>()V
    .locals 5

    .line 84
    const-string v0, ""

    const-string v1, "MediatekEngineer"

    const-string v2, "MediatekUser"

    const-string v3, "CustomerEngineer"

    const-string v4, "CustomerUser"

    filled-new-array {v0, v1, v2, v3, v4}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->sAEE_MODE_STRING:[Ljava/lang/String;

    .line 89
    const-string v0, "EnableDAL"

    const-string v1, "DisableDAL"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->sDAL_OPTION_STRING:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 65
    invoke-direct {p0}, Landroid/preference/PreferenceActivity;-><init>()V

    .line 228
    new-instance v0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity$1;-><init>(Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mConnection:Landroid/content/ServiceConnection;

    return-void
.end method

.method static synthetic access$002(Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;Lcom/mediatek/engineermode/debugtool/AEEControlService;)Lcom/mediatek/engineermode/debugtool/AEEControlService;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;
    .param p1, "x1"    # Lcom/mediatek/engineermode/debugtool/AEEControlService;

    .line 65
    iput-object p1, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mBoundService:Lcom/mediatek/engineermode/debugtool/AEEControlService;

    return-object p1
.end method

.method private static currentAEEMode()Ljava/lang/String;
    .locals 6

    .line 281
    const-string v0, "persist.vendor.mtk.aee.mode"

    invoke-static {v0}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 282
    .local v0, "aeemodeIndexString":Ljava/lang/String;
    const/4 v1, 0x4

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v2

    if-nez v2, :cond_0

    .line 283
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    .line 284
    .local v2, "aeemodeIndex":I
    const/4 v3, 0x1

    if-lt v2, v3, :cond_0

    if-gt v2, v1, :cond_0

    .line 285
    sget-object v1, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->sAEE_MODE_STRING:[Ljava/lang/String;

    aget-object v1, v1, v2

    .line 286
    .local v1, "aeemode":Ljava/lang/String;
    return-object v1

    .line 289
    .end local v1    # "aeemode":Ljava/lang/String;
    .end local v2    # "aeemodeIndex":I
    :cond_0
    const-string v2, "ro.vendor.aee.build.info"

    invoke-static {v2}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 290
    .local v2, "aeebuildinfo":Ljava/lang/String;
    const-string v3, "mtk"

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    const/4 v1, 0x2

    .line 291
    .local v1, "aeebuildinfoInt":I
    :cond_1
    sget-object v3, Landroid/os/Build;->TYPE:Ljava/lang/String;

    const-string v4, "eng"

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    .line 292
    .local v3, "robuildtypeInt":I
    sget-object v4, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->sAEE_MODE_STRING:[Ljava/lang/String;

    sub-int v5, v1, v3

    aget-object v4, v4, v5

    return-object v4
.end method

.method private static currentDalOption()Ljava/lang/String;
    .locals 4

    .line 296
    const-string v0, "persist.vendor.mtk.aee.dal"

    invoke-static {v0}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 297
    .local v0, "dalOptionIndexString":Ljava/lang/String;
    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_1

    .line 298
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    .line 299
    .local v1, "dalOptionIndex":I
    const/4 v2, 0x1

    if-nez v1, :cond_0

    .line 300
    sget-object v3, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->sDAL_OPTION_STRING:[Ljava/lang/String;

    aget-object v2, v3, v2

    return-object v2

    .line 302
    :cond_0
    if-ne v1, v2, :cond_1

    .line 303
    sget-object v2, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->sDAL_OPTION_STRING:[Ljava/lang/String;

    const/4 v3, 0x0

    aget-object v2, v2, v3

    return-object v2

    .line 306
    .end local v1    # "dalOptionIndex":I
    :cond_1
    const-string v1, ""

    return-object v1
.end method

.method private static getProperty(Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p0, "prop"    # Ljava/lang/String;

    .line 310
    invoke-static {p0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method doBindService()V
    .locals 3

    .line 261
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/mediatek/engineermode/debugtool/AEEControlService;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    iget-object v1, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mConnection:Landroid/content/ServiceConnection;

    const/4 v2, 0x1

    invoke-virtual {p0, v0, v1, v2}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    .line 263
    iput-boolean v2, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mIsBound:Z

    .line 264
    return-void
.end method

.method doUnbindService()V
    .locals 1

    .line 267
    iget-boolean v0, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mIsBound:Z

    if-eqz v0, :cond_0

    .line 269
    iget-object v0, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mConnection:Landroid/content/ServiceConnection;

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->unbindService(Landroid/content/ServiceConnection;)V

    .line 270
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mIsBound:Z

    .line 272
    :cond_0
    return-void
.end method

.method protected isValidFragment(Ljava/lang/String;)Z
    .locals 1
    .param p1, "fragmentName"    # Ljava/lang/String;

    .line 315
    const/4 v0, 0x0

    return v0
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 6
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 93
    invoke-super {p0, p1}, Landroid/preference/PreferenceActivity;->onCreate(Landroid/os/Bundle;)V

    .line 96
    const v0, 0x7f0d0009

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->addPreferencesFromResource(I)V

    .line 99
    nop

    .line 100
    invoke-virtual {p0}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->getPreferenceScreen()Landroid/preference/PreferenceScreen;

    move-result-object v0

    .line 101
    const v1, 0x7f0a04df

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 100
    invoke-virtual {v0, v1}, Landroid/preference/PreferenceScreen;->findPreference(Ljava/lang/CharSequence;)Landroid/preference/Preference;

    move-result-object v0

    check-cast v0, Landroid/preference/ListPreference;

    iput-object v0, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mPrefAeemode:Landroid/preference/ListPreference;

    .line 102
    const-string v0, "ro.vendor.aee.build.info"

    invoke-static {v0}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 103
    .local v0, "aeebuildinfo":Ljava/lang/String;
    const-string v1, "mtk"

    if-eqz v0, :cond_0

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 104
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mPrefAeemode:Landroid/preference/ListPreference;

    const v3, 0x7f01003d

    invoke-virtual {v2, v3}, Landroid/preference/ListPreference;->setEntries(I)V

    .line 105
    iget-object v2, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mPrefAeemode:Landroid/preference/ListPreference;

    const v3, 0x7f010040

    invoke-virtual {v2, v3}, Landroid/preference/ListPreference;->setEntryValues(I)V

    .line 108
    :cond_1
    invoke-static {}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->currentAEEMode()Ljava/lang/String;

    move-result-object v2

    .line 109
    .local v2, "deviceAEEmode":Ljava/lang/String;
    iget-object v3, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mPrefAeemode:Landroid/preference/ListPreference;

    invoke-virtual {v3, v2}, Landroid/preference/ListPreference;->setValue(Ljava/lang/String;)V

    .line 110
    iget-object v3, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mPrefAeemode:Landroid/preference/ListPreference;

    invoke-virtual {v3, v2}, Landroid/preference/ListPreference;->setSummary(Ljava/lang/CharSequence;)V

    .line 112
    nop

    .line 113
    invoke-virtual {p0}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->getPreferenceScreen()Landroid/preference/PreferenceScreen;

    move-result-object v3

    const v4, 0x7f0a04e2

    .line 114
    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->getString(I)Ljava/lang/String;

    move-result-object v4

    .line 113
    invoke-virtual {v3, v4}, Landroid/preference/PreferenceScreen;->findPreference(Ljava/lang/CharSequence;)Landroid/preference/Preference;

    move-result-object v3

    check-cast v3, Landroid/preference/ListPreference;

    iput-object v3, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mPrefDaloption:Landroid/preference/ListPreference;

    .line 115
    invoke-static {}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->currentDalOption()Ljava/lang/String;

    move-result-object v3

    .line 116
    .local v3, "deviceDalOption":Ljava/lang/String;
    iget-object v4, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mPrefDaloption:Landroid/preference/ListPreference;

    invoke-virtual {v4, v3}, Landroid/preference/ListPreference;->setValue(Ljava/lang/String;)V

    .line 117
    iget-object v4, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mPrefDaloption:Landroid/preference/ListPreference;

    invoke-virtual {v4, v3}, Landroid/preference/ListPreference;->setSummary(Ljava/lang/CharSequence;)V

    .line 119
    const/4 v4, 0x0

    if-eqz v0, :cond_2

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 120
    :cond_2
    iget-object v1, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mPrefDaloption:Landroid/preference/ListPreference;

    invoke-virtual {v1, v4}, Landroid/preference/ListPreference;->setSelectable(Z)V

    .line 123
    :cond_3
    nop

    .line 124
    invoke-virtual {p0}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->getPreferenceScreen()Landroid/preference/PreferenceScreen;

    move-result-object v1

    const v5, 0x7f0a04e1

    .line 125
    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->getString(I)Ljava/lang/String;

    move-result-object v5

    .line 124
    invoke-virtual {v1, v5}, Landroid/preference/PreferenceScreen;->findPreference(Ljava/lang/CharSequence;)Landroid/preference/Preference;

    move-result-object v1

    check-cast v1, Landroid/preference/PreferenceScreen;

    iput-object v1, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mClearDAL:Landroid/preference/PreferenceScreen;

    .line 126
    invoke-virtual {v1, p0}, Landroid/preference/PreferenceScreen;->setOnPreferenceClickListener(Landroid/preference/Preference$OnPreferenceClickListener;)V

    .line 128
    nop

    .line 129
    invoke-virtual {p0}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->getPreferenceScreen()Landroid/preference/PreferenceScreen;

    move-result-object v1

    const v5, 0x7f0a04e0

    .line 130
    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->getString(I)Ljava/lang/String;

    move-result-object v5

    .line 129
    invoke-virtual {v1, v5}, Landroid/preference/PreferenceScreen;->findPreference(Ljava/lang/CharSequence;)Landroid/preference/Preference;

    move-result-object v1

    check-cast v1, Landroid/preference/PreferenceScreen;

    iput-object v1, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mCleanData:Landroid/preference/PreferenceScreen;

    .line 131
    invoke-virtual {v1, p0}, Landroid/preference/PreferenceScreen;->setOnPreferenceClickListener(Landroid/preference/Preference$OnPreferenceClickListener;)V

    .line 132
    sget-object v1, Landroid/os/Build;->TYPE:Ljava/lang/String;

    const-string v5, "eng"

    invoke-virtual {v1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_4

    .line 134
    iget-object v1, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mCleanData:Landroid/preference/PreferenceScreen;

    invoke-virtual {v1, v4}, Landroid/preference/PreferenceScreen;->setEnabled(Z)V

    .line 137
    :cond_4
    nop

    .line 138
    invoke-virtual {p0}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->getPreferenceScreen()Landroid/preference/PreferenceScreen;

    move-result-object v1

    const v4, 0x7f0a04e4

    .line 139
    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->getString(I)Ljava/lang/String;

    move-result-object v4

    .line 138
    invoke-virtual {v1, v4}, Landroid/preference/PreferenceScreen;->findPreference(Ljava/lang/CharSequence;)Landroid/preference/Preference;

    move-result-object v1

    check-cast v1, Landroid/preference/PreferenceCategory;

    .line 140
    .local v1, "deviceMaintain":Landroid/preference/PreferenceCategory;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->getPreferenceScreen()Landroid/preference/PreferenceScreen;

    move-result-object v4

    invoke-virtual {v4, v1}, Landroid/preference/PreferenceScreen;->removePreference(Landroid/preference/Preference;)Z

    .line 142
    invoke-virtual {p0}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->doBindService()V

    .line 143
    return-void
.end method

.method protected onDestroy()V
    .locals 0

    .line 276
    invoke-super {p0}, Landroid/preference/PreferenceActivity;->onDestroy()V

    .line 277
    invoke-virtual {p0}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->doUnbindService()V

    .line 278
    return-void
.end method

.method protected onPause()V
    .locals 1

    .line 154
    invoke-super {p0}, Landroid/preference/PreferenceActivity;->onPause()V

    .line 156
    invoke-virtual {p0}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->getPreferenceScreen()Landroid/preference/PreferenceScreen;

    move-result-object v0

    invoke-virtual {v0}, Landroid/preference/PreferenceScreen;->getSharedPreferences()Landroid/content/SharedPreferences;

    move-result-object v0

    invoke-interface {v0, p0}, Landroid/content/SharedPreferences;->unregisterOnSharedPreferenceChangeListener(Landroid/content/SharedPreferences$OnSharedPreferenceChangeListener;)V

    .line 158
    return-void
.end method

.method public onPreferenceClick(Landroid/preference/Preference;)Z
    .locals 4
    .param p1, "preference"    # Landroid/preference/Preference;

    .line 210
    iget-object v0, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mClearDAL:Landroid/preference/PreferenceScreen;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x1

    const-string v2, "AEE Service is not started"

    const-string v3, "DebugToolboxActivity/Debugutils"

    if-eqz v0, :cond_0

    .line 212
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mBoundService:Lcom/mediatek/engineermode/debugtool/AEEControlService;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/debugtool/AEEControlService;->clearDAL()V
    :try_end_0
    .catch Ljava/lang/NullPointerException; {:try_start_0 .. :try_end_0} :catch_0

    .line 213
    return v1

    .line 214
    :catch_0
    move-exception v0

    .line 215
    .local v0, "e":Ljava/lang/NullPointerException;
    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 216
    .end local v0    # "e":Ljava/lang/NullPointerException;
    goto :goto_0

    .line 217
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mCleanData:Landroid/preference/PreferenceScreen;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 219
    :try_start_1
    iget-object v0, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mBoundService:Lcom/mediatek/engineermode/debugtool/AEEControlService;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/debugtool/AEEControlService;->cleanData()V
    :try_end_1
    .catch Ljava/lang/NullPointerException; {:try_start_1 .. :try_end_1} :catch_1

    .line 220
    return v1

    .line 221
    :catch_1
    move-exception v0

    .line 222
    .restart local v0    # "e":Ljava/lang/NullPointerException;
    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 225
    .end local v0    # "e":Ljava/lang/NullPointerException;
    :cond_1
    :goto_0
    const/4 v0, 0x0

    return v0
.end method

.method protected onResume()V
    .locals 1

    .line 147
    invoke-super {p0}, Landroid/preference/PreferenceActivity;->onResume()V

    .line 149
    invoke-virtual {p0}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->getPreferenceScreen()Landroid/preference/PreferenceScreen;

    move-result-object v0

    invoke-virtual {v0}, Landroid/preference/PreferenceScreen;->getSharedPreferences()Landroid/content/SharedPreferences;

    move-result-object v0

    invoke-interface {v0, p0}, Landroid/content/SharedPreferences;->registerOnSharedPreferenceChangeListener(Landroid/content/SharedPreferences$OnSharedPreferenceChangeListener;)V

    .line 150
    return-void
.end method

.method public onSharedPreferenceChanged(Landroid/content/SharedPreferences;Ljava/lang/String;)V
    .locals 6
    .param p1, "sharedPreferences"    # Landroid/content/SharedPreferences;
    .param p2, "key"    # Ljava/lang/String;

    .line 166
    const v0, 0x7f0a04df

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x0

    const-string v2, "DebugToolboxActivity/Debugutils"

    if-eqz v0, :cond_2

    .line 167
    invoke-interface {p1, p2, v1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 168
    .local v0, "modevalue":Ljava/lang/String;
    if-nez v0, :cond_0

    .line 169
    const-string v1, "AEE working mode is set to NULL."

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 170
    return-void

    .line 173
    :cond_0
    :try_start_0
    iget-object v3, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mBoundService:Lcom/mediatek/engineermode/debugtool/AEEControlService;

    invoke-virtual {v3, v0}, Lcom/mediatek/engineermode/debugtool/AEEControlService;->changeAEEMode(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/NullPointerException; {:try_start_0 .. :try_end_0} :catch_0

    .line 176
    goto :goto_0

    .line 174
    :catch_0
    move-exception v3

    .line 175
    .local v3, "e":Ljava/lang/NullPointerException;
    const-string v4, "AEE Service is not started"

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 177
    .end local v3    # "e":Ljava/lang/NullPointerException;
    :goto_0
    invoke-static {}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->currentAEEMode()Ljava/lang/String;

    move-result-object v3

    .line 178
    .local v3, "deviceAEEmode":Ljava/lang/String;
    invoke-virtual {v3, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_1

    .line 179
    iget-object v4, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mPrefAeemode:Landroid/preference/ListPreference;

    invoke-virtual {v4, v3}, Landroid/preference/ListPreference;->setValue(Ljava/lang/String;)V

    .line 180
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Change debug level ["

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "-->"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "] too fequent, please retry later."

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 183
    .local v4, "errorString":Ljava/lang/String;
    invoke-static {v2, v4}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 184
    const/4 v5, 0x0

    invoke-static {p0, v4, v5}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v5

    invoke-virtual {v5}, Landroid/widget/Toast;->show()V

    .line 186
    .end local v4    # "errorString":Ljava/lang/String;
    :cond_1
    iget-object v4, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mPrefAeemode:Landroid/preference/ListPreference;

    invoke-virtual {v4, v3}, Landroid/preference/ListPreference;->setSummary(Ljava/lang/CharSequence;)V

    .line 189
    .end local v0    # "modevalue":Ljava/lang/String;
    .end local v3    # "deviceAEEmode":Ljava/lang/String;
    :cond_2
    const v0, 0x7f0a04e2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 190
    invoke-interface {p1, p2, v1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 191
    .local v0, "dalOption":Ljava/lang/String;
    if-nez v0, :cond_3

    .line 192
    const-string v1, "DAL setting mode is set to NULL."

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 193
    return-void

    .line 196
    :cond_3
    :try_start_1
    iget-object v1, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mBoundService:Lcom/mediatek/engineermode/debugtool/AEEControlService;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/debugtool/AEEControlService;->dalSetting(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/NullPointerException; {:try_start_1 .. :try_end_1} :catch_1

    .line 199
    goto :goto_1

    .line 197
    :catch_1
    move-exception v1

    .line 198
    .local v1, "e":Ljava/lang/NullPointerException;
    const-string v3, "DAL setting error"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 200
    .end local v1    # "e":Ljava/lang/NullPointerException;
    :goto_1
    invoke-static {}, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->currentDalOption()Ljava/lang/String;

    move-result-object v1

    .line 201
    .local v1, "deviceDalOption":Ljava/lang/String;
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_4

    .line 202
    iget-object v2, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mPrefDaloption:Landroid/preference/ListPreference;

    invoke-virtual {v2, v1}, Landroid/preference/ListPreference;->setValue(Ljava/lang/String;)V

    .line 204
    :cond_4
    iget-object v2, p0, Lcom/mediatek/engineermode/debugtool/DebugToolboxActivity;->mPrefDaloption:Landroid/preference/ListPreference;

    invoke-virtual {v2, v1}, Landroid/preference/ListPreference;->setSummary(Ljava/lang/CharSequence;)V

    .line 206
    .end local v0    # "dalOption":Ljava/lang/String;
    .end local v1    # "deviceDalOption":Ljava/lang/String;
    :cond_5
    return-void
.end method
