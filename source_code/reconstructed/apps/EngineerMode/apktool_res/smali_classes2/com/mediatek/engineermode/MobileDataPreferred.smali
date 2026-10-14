.class public Lcom/mediatek/engineermode/MobileDataPreferred;
.super Landroid/preference/PreferenceActivity;
.source "MobileDataPreferred.java"


# static fields
.field private static final DATA_PREFER_KEY:Ljava/lang/String; = "data_prefer_key"

.field private static final MOBILE_DATA_PREF_DIALOG:I = 0xa

.field private static final PCH_CALL_PREFER:I = 0x1

.field private static final PCH_DATA_PREFER:I = 0x0

.field private static final TAG:Ljava/lang/String; = "CallDataPreferred"


# instance fields
.field private mMobileDataPref:Landroid/preference/CheckBoxPreference;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 52
    invoke-direct {p0}, Landroid/preference/PreferenceActivity;-><init>()V

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/MobileDataPreferred;)Landroid/preference/CheckBoxPreference;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/MobileDataPreferred;

    .line 52
    iget-object v0, p0, Lcom/mediatek/engineermode/MobileDataPreferred;->mMobileDataPref:Landroid/preference/CheckBoxPreference;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/MobileDataPreferred;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/MobileDataPreferred;
    .param p1, "x1"    # I

    .line 52
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/MobileDataPreferred;->setGprsTransferType(I)V

    return-void
.end method

.method private setGprsTransferType(I)V
    .locals 9
    .param p1, "type"    # I

    .line 111
    if-nez p1, :cond_0

    const-string v0, "1"

    goto :goto_0

    :cond_0
    const-string v0, "0"

    .line 112
    .local v0, "property":Ljava/lang/String;
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Change persist.radio.gprs.prefer to "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "CallDataPreferred"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 114
    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    invoke-interface {v1, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setPreferGprsMode(Ljava/lang/String;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 118
    goto :goto_1

    .line 115
    :catch_0
    move-exception v1

    .line 116
    .local v1, "e":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 117
    const-string v3, "set property failed ..."

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 120
    .end local v1    # "e":Ljava/lang/Exception;
    :goto_1
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_2
    invoke-static {}, Landroid/telephony/TelephonyManager;->getDefault()Landroid/telephony/TelephonyManager;

    move-result-object v2

    invoke-virtual {v2}, Landroid/telephony/TelephonyManager;->getPhoneCount()I

    move-result v2

    if-ge v1, v2, :cond_1

    .line 121
    const/4 v2, 0x2

    new-array v3, v2, [Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "AT+EGTP="

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    aput-object v4, v3, v5

    const/4 v4, 0x1

    const-string v6, ""

    aput-object v6, v3, v4

    const/4 v7, 0x0

    invoke-static {v1, v3, v7}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 122
    new-array v2, v2, [Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "AT+EMPPCH="

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v2, v5

    aput-object v6, v2, v4

    invoke-static {v1, v2, v7}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 120
    add-int/lit8 v1, v1, 0x1

    goto :goto_2

    .line 124
    .end local v1    # "i":I
    :cond_1
    return-void
.end method


# virtual methods
.method protected isValidFragment(Ljava/lang/String;)Z
    .locals 2
    .param p1, "fragmentName"    # Ljava/lang/String;

    .line 129
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "fragmentName is "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "CallDataPreferred"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 130
    const/4 v0, 0x0

    return v0
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 5
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 62
    invoke-super {p0, p1}, Landroid/preference/PreferenceActivity;->onCreate(Landroid/os/Bundle;)V

    .line 63
    const v0, 0x7f0d0001

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/MobileDataPreferred;->addPreferencesFromResource(I)V

    .line 65
    invoke-virtual {p0}, Lcom/mediatek/engineermode/MobileDataPreferred;->getPreferenceScreen()Landroid/preference/PreferenceScreen;

    move-result-object v0

    .line 66
    .local v0, "prefSet":Landroid/preference/PreferenceScreen;
    const-string v1, "data_prefer_key"

    invoke-virtual {v0, v1}, Landroid/preference/PreferenceScreen;->findPreference(Ljava/lang/CharSequence;)Landroid/preference/Preference;

    move-result-object v1

    check-cast v1, Landroid/preference/CheckBoxPreference;

    iput-object v1, p0, Lcom/mediatek/engineermode/MobileDataPreferred;->mMobileDataPref:Landroid/preference/CheckBoxPreference;

    .line 68
    const-string v1, "persist.vendor.radio.gprs.prefer"

    const/4 v2, 0x0

    invoke-static {v1, v2}, Landroid/os/SystemProperties;->getInt(Ljava/lang/String;I)I

    move-result v1

    .line 69
    .local v1, "pchFlag":I
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Orgin value persist.vendor.radio.gprs.prefer = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "CallDataPreferred"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 70
    iget-object v3, p0, Lcom/mediatek/engineermode/MobileDataPreferred;->mMobileDataPref:Landroid/preference/CheckBoxPreference;

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v2, 0x1

    :goto_0
    invoke-virtual {v3, v2}, Landroid/preference/CheckBoxPreference;->setChecked(Z)V

    .line 71
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 3
    .param p1, "id"    # I

    .line 75
    const/16 v0, 0xa

    if-ne p1, v0, :cond_0

    .line 76
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const v1, 0x1040014

    .line 77
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const/4 v1, 0x0

    .line 78
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const v1, 0x1080027

    .line 79
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setIcon(I)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const v1, 0x7f0a04cb

    .line 80
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(I)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const v1, 0x1040013

    new-instance v2, Lcom/mediatek/engineermode/MobileDataPreferred$2;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/MobileDataPreferred$2;-><init>(Lcom/mediatek/engineermode/MobileDataPreferred;)V

    .line 81
    invoke-virtual {v0, v1, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const v1, 0x1040009

    new-instance v2, Lcom/mediatek/engineermode/MobileDataPreferred$1;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/MobileDataPreferred$1;-><init>(Lcom/mediatek/engineermode/MobileDataPreferred;)V

    .line 86
    invoke-virtual {v0, v1, v2}, Landroid/app/AlertDialog$Builder;->setNegativeButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 91
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 76
    return-object v0

    .line 93
    :cond_0
    invoke-super {p0, p1}, Landroid/preference/PreferenceActivity;->onCreateDialog(I)Landroid/app/Dialog;

    move-result-object v0

    return-object v0
.end method

.method public onPreferenceTreeClick(Landroid/preference/PreferenceScreen;Landroid/preference/Preference;)Z
    .locals 2
    .param p1, "preferenceScreen"    # Landroid/preference/PreferenceScreen;
    .param p2, "preference"    # Landroid/preference/Preference;

    .line 99
    iget-object v0, p0, Lcom/mediatek/engineermode/MobileDataPreferred;->mMobileDataPref:Landroid/preference/CheckBoxPreference;

    invoke-virtual {v0, p2}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 100
    iget-object v0, p0, Lcom/mediatek/engineermode/MobileDataPreferred;->mMobileDataPref:Landroid/preference/CheckBoxPreference;

    invoke-virtual {v0}, Landroid/preference/CheckBoxPreference;->isChecked()Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    .line 101
    const/16 v0, 0xa

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/MobileDataPreferred;->showDialog(I)V

    goto :goto_0

    .line 103
    :cond_0
    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/MobileDataPreferred;->setGprsTransferType(I)V

    .line 105
    :goto_0
    return v1

    .line 107
    :cond_1
    invoke-super {p0, p1, p2}, Landroid/preference/PreferenceActivity;->onPreferenceTreeClick(Landroid/preference/PreferenceScreen;Landroid/preference/Preference;)Z

    move-result v0

    return v0
.end method
