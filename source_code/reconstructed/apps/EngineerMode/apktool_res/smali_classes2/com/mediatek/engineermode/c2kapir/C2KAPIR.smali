.class public Lcom/mediatek/engineermode/c2kapir/C2KAPIR;
.super Landroid/preference/PreferenceActivity;
.source "C2KAPIR.java"


# static fields
.field private static final C2K_AP_IR_PROPERTY:Ljava/lang/String; = "persist.vendor.sys.ct.ir.switcher"

.field private static final TAG:Ljava/lang/String; = "C2KAPIR"

.field private static final WARNING:Ljava/lang/String; = "It will take effect after you reboot the device!"


# instance fields
.field private mPreferences:[Landroid/preference/CheckBoxPreference;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 49
    invoke-direct {p0}, Landroid/preference/PreferenceActivity;-><init>()V

    return-void
.end method


# virtual methods
.method protected isValidFragment(Ljava/lang/String;)Z
    .locals 2
    .param p1, "fragmentName"    # Ljava/lang/String;

    .line 108
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "fragmentName is "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "C2KAPIR"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 109
    const/4 v0, 0x0

    return v0
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 4
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 58
    invoke-super {p0, p1}, Landroid/preference/PreferenceActivity;->onCreate(Landroid/os/Bundle;)V

    .line 59
    const v0, 0x7f0d0007

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/c2kapir/C2KAPIR;->addPreferencesFromResource(I)V

    .line 61
    invoke-virtual {p0}, Lcom/mediatek/engineermode/c2kapir/C2KAPIR;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const v1, 0x7f010022

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v0

    .line 62
    .local v0, "features":[Ljava/lang/String;
    array-length v1, v0

    new-array v1, v1, [Landroid/preference/CheckBoxPreference;

    iput-object v1, p0, Lcom/mediatek/engineermode/c2kapir/C2KAPIR;->mPreferences:[Landroid/preference/CheckBoxPreference;

    .line 63
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, v0

    if-ge v1, v2, :cond_0

    .line 64
    iget-object v2, p0, Lcom/mediatek/engineermode/c2kapir/C2KAPIR;->mPreferences:[Landroid/preference/CheckBoxPreference;

    new-instance v3, Landroid/preference/CheckBoxPreference;

    invoke-direct {v3, p0}, Landroid/preference/CheckBoxPreference;-><init>(Landroid/content/Context;)V

    aput-object v3, v2, v1

    .line 65
    iget-object v2, p0, Lcom/mediatek/engineermode/c2kapir/C2KAPIR;->mPreferences:[Landroid/preference/CheckBoxPreference;

    aget-object v2, v2, v1

    aget-object v3, v0, v1

    invoke-virtual {v2, v3}, Landroid/preference/CheckBoxPreference;->setTitle(Ljava/lang/CharSequence;)V

    .line 66
    iget-object v2, p0, Lcom/mediatek/engineermode/c2kapir/C2KAPIR;->mPreferences:[Landroid/preference/CheckBoxPreference;

    aget-object v2, v2, v1

    const-string v3, "It will take effect after you reboot the device!"

    invoke-virtual {v2, v3}, Landroid/preference/CheckBoxPreference;->setSummary(Ljava/lang/CharSequence;)V

    .line 67
    iget-object v2, p0, Lcom/mediatek/engineermode/c2kapir/C2KAPIR;->mPreferences:[Landroid/preference/CheckBoxPreference;

    aget-object v2, v2, v1

    const/4 v3, 0x0

    invoke-virtual {v2, v3}, Landroid/preference/CheckBoxPreference;->setPersistent(Z)V

    .line 68
    invoke-virtual {p0}, Lcom/mediatek/engineermode/c2kapir/C2KAPIR;->getPreferenceScreen()Landroid/preference/PreferenceScreen;

    move-result-object v2

    iget-object v3, p0, Lcom/mediatek/engineermode/c2kapir/C2KAPIR;->mPreferences:[Landroid/preference/CheckBoxPreference;

    aget-object v3, v3, v1

    invoke-virtual {v2, v3}, Landroid/preference/PreferenceScreen;->addPreference(Landroid/preference/Preference;)Z

    .line 63
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 70
    .end local v1    # "i":I
    :cond_0
    return-void
.end method

.method public onPreferenceTreeClick(Landroid/preference/PreferenceScreen;Landroid/preference/Preference;)Z
    .locals 5
    .param p1, "preferenceScreen"    # Landroid/preference/PreferenceScreen;
    .param p2, "preference"    # Landroid/preference/Preference;

    .line 86
    const-string v0, "C2KAPIR"

    const-string v1, "Enter onPreferenceTreeClick()"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 87
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    iget-object v2, p0, Lcom/mediatek/engineermode/c2kapir/C2KAPIR;->mPreferences:[Landroid/preference/CheckBoxPreference;

    array-length v3, v2

    if-ge v1, v3, :cond_2

    .line 88
    aget-object v2, v2, v1

    invoke-virtual {v2, p2}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 90
    :try_start_0
    iget-object v2, p0, Lcom/mediatek/engineermode/c2kapir/C2KAPIR;->mPreferences:[Landroid/preference/CheckBoxPreference;

    aget-object v2, v2, v1

    invoke-virtual {v2}, Landroid/preference/CheckBoxPreference;->isChecked()Z

    move-result v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v3, "persist.vendor.sys.ct.ir.switcher"

    if-eqz v2, :cond_0

    .line 91
    :try_start_1
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v2

    const-string v4, "1"

    invoke-interface {v2, v3, v4}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z

    goto :goto_1

    .line 93
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v2

    const-string v4, "0"

    invoke-interface {v2, v3, v4}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    .line 98
    :goto_1
    goto :goto_2

    .line 95
    :catch_0
    move-exception v2

    .line 96
    .local v2, "e":Ljava/lang/Exception;
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    .line 97
    const-string v3, "set property failed ..."

    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 99
    .end local v2    # "e":Ljava/lang/Exception;
    :goto_2
    const/4 v0, 0x1

    return v0

    .line 87
    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 102
    .end local v1    # "i":I
    :cond_2
    invoke-super {p0, p1, p2}, Landroid/preference/PreferenceActivity;->onPreferenceTreeClick(Landroid/preference/PreferenceScreen;Landroid/preference/Preference;)Z

    move-result v0

    return v0
.end method

.method public onResume()V
    .locals 3

    .line 74
    invoke-super {p0}, Landroid/preference/PreferenceActivity;->onResume()V

    .line 75
    const-string v0, "persist.vendor.sys.ct.ir.switcher"

    const-string v1, "1"

    invoke-static {v0, v1}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 77
    .local v0, "apIrState":Ljava/lang/String;
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 78
    iget-object v1, p0, Lcom/mediatek/engineermode/c2kapir/C2KAPIR;->mPreferences:[Landroid/preference/CheckBoxPreference;

    aget-object v1, v1, v2

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Landroid/preference/CheckBoxPreference;->setChecked(Z)V

    goto :goto_0

    .line 80
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/c2kapir/C2KAPIR;->mPreferences:[Landroid/preference/CheckBoxPreference;

    aget-object v1, v1, v2

    invoke-virtual {v1, v2}, Landroid/preference/CheckBoxPreference;->setChecked(Z)V

    .line 82
    :goto_0
    return-void
.end method
