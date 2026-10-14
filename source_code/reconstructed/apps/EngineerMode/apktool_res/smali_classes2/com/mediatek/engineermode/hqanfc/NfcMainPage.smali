.class public Lcom/mediatek/engineermode/hqanfc/NfcMainPage;
.super Landroid/preference/PreferenceActivity;
.source "NfcMainPage.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/hqanfc/NfcMainPage$ConnectServerTask;
    }
.end annotation


# static fields
.field private static final DIALOG_WAIT:I = 0x1

.field private static final DLG_NOT_SUPPORT:I = 0x2

.field private static final KILL_LIB_COMMAND:Ljava/lang/String; = "kill -9 nfcstackp"

.field private static final QUICK_MODE_FILE:Ljava/lang/String; = "/sdcard/mtknfcSyncQuickMode"

.field private static final START_LIB_COMMAND:Ljava/lang/String; = "./system/bin/nfcstackp"

.field public static final TAG:Ljava/lang/String; = "Nfc"


# instance fields
.field private mIsSupport:Z

.field private mTask:Lcom/mediatek/engineermode/hqanfc/NfcMainPage$ConnectServerTask;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 28
    invoke-direct {p0}, Landroid/preference/PreferenceActivity;-><init>()V

    .line 36
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/NfcMainPage;->mIsSupport:Z

    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/hqanfc/NfcMainPage;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/NfcMainPage;

    .line 28
    invoke-direct {p0}, Lcom/mediatek/engineermode/hqanfc/NfcMainPage;->init()V

    return-void
.end method

.method private closeNFCServiceAtStart()V
    .locals 3

    .line 93
    invoke-virtual {p0}, Lcom/mediatek/engineermode/hqanfc/NfcMainPage;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Landroid/nfc/NfcAdapter;->getDefaultAdapter(Landroid/content/Context;)Landroid/nfc/NfcAdapter;

    move-result-object v0

    .line 94
    .local v0, "adp":Landroid/nfc/NfcAdapter;
    invoke-virtual {v0}, Landroid/nfc/NfcAdapter;->isEnabled()Z

    move-result v1

    const-string v2, "Nfc"

    if-eqz v1, :cond_1

    .line 95
    invoke-virtual {v0}, Landroid/nfc/NfcAdapter;->disable()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 96
    const-string v1, "[NfcMainPage]Nfc service set off."

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 98
    :cond_0
    const-string v1, "[NfcMainPage]Nfc service set off Fail."

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 101
    :cond_1
    const-string v1, "[NfcMainPage]Nfc service is off"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 103
    :goto_0
    return-void
.end method

.method private executeXbinFile(Ljava/lang/String;I)V
    .locals 3
    .param p1, "command"    # Ljava/lang/String;
    .param p2, "sleepTime"    # I

    .line 106
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/NfcMainPage$2;

    invoke-direct {v0, p0, p1}, Lcom/mediatek/engineermode/hqanfc/NfcMainPage$2;-><init>(Lcom/mediatek/engineermode/hqanfc/NfcMainPage;Ljava/lang/String;)V

    .line 118
    invoke-virtual {v0}, Lcom/mediatek/engineermode/hqanfc/NfcMainPage$2;->start()V

    .line 120
    const-wide/16 v0, 0x1f4

    :try_start_0
    invoke-static {v0, v1}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    .line 123
    goto :goto_0

    .line 121
    :catch_0
    move-exception v0

    .line 122
    .local v0, "e":Ljava/lang/InterruptedException;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[NfcMainPage]executeXbinFile InterruptedException: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/InterruptedException;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "Nfc"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 124
    .end local v0    # "e":Ljava/lang/InterruptedException;
    :goto_0
    return-void
.end method

.method private init()V
    .locals 6

    .line 147
    invoke-virtual {p0}, Lcom/mediatek/engineermode/hqanfc/NfcMainPage;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Landroid/nfc/NfcAdapter;->getDefaultAdapter(Landroid/content/Context;)Landroid/nfc/NfcAdapter;

    move-result-object v0

    .line 148
    .local v0, "adp":Landroid/nfc/NfcAdapter;
    const-string v1, "Nfc"

    if-nez v0, :cond_0

    .line 149
    const-string v2, "adp == null"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 150
    return-void

    .line 152
    :cond_0
    const-string v2, "[QE]Engineer Mode clear all."

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 153
    const/4 v2, 0x0

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/hqanfc/NfcMainPage;->setNfcQuickMode(I)V

    .line 154
    const-string v2, "[QE]set file"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 155
    const/4 v2, 0x1

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/hqanfc/NfcMainPage;->setNfcQuickMode(I)V

    .line 156
    const-string v2, "[QE]NFC Disable."

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 157
    invoke-virtual {v0}, Landroid/nfc/NfcAdapter;->isEnabled()Z

    move-result v2

    const-string v3, "InterruptedException"

    if-eqz v2, :cond_1

    .line 158
    const-string v2, "[QE] force NFC Disable."

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 159
    invoke-virtual {v0}, Landroid/nfc/NfcAdapter;->disable()Z

    goto :goto_1

    .line 161
    :cond_1
    const-string v2, "[QE]NFC Enable -->Disable."

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 162
    invoke-virtual {v0}, Landroid/nfc/NfcAdapter;->enable()Z

    .line 164
    const-wide/16 v4, 0x64

    :try_start_0
    invoke-static {v4, v5}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    .line 167
    goto :goto_0

    .line 165
    :catch_0
    move-exception v2

    .line 166
    .local v2, "e":Ljava/lang/InterruptedException;
    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 168
    .end local v2    # "e":Ljava/lang/InterruptedException;
    :goto_0
    invoke-virtual {v0}, Landroid/nfc/NfcAdapter;->disable()Z

    .line 172
    :goto_1
    const-wide/16 v4, 0x3e8

    :try_start_1
    invoke-static {v4, v5}, Ljava/lang/Thread;->sleep(J)V
    :try_end_1
    .catch Ljava/lang/InterruptedException; {:try_start_1 .. :try_end_1} :catch_1

    .line 175
    goto :goto_2

    .line 173
    :catch_1
    move-exception v2

    .line 174
    .restart local v2    # "e":Ljava/lang/InterruptedException;
    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 176
    .end local v2    # "e":Ljava/lang/InterruptedException;
    :goto_2
    invoke-virtual {v0}, Landroid/nfc/NfcAdapter;->isEnabled()Z

    move-result v2

    if-nez v2, :cond_2

    .line 177
    return-void

    .line 176
    :cond_2
    goto :goto_1
.end method

.method private setNfcQuickMode(I)V
    .locals 5
    .param p1, "mode"    # I

    .line 127
    const-string v0, "[QE]setNfcQuickMode("

    const-string v1, "Nfc"

    new-instance v2, Ljava/io/File;

    const-string v3, "/sdcard/mtknfcSyncQuickMode"

    invoke-direct {v2, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 128
    .local v2, "file":Ljava/io/File;
    const/4 v3, 0x0

    .line 130
    .local v3, "result":Z
    :try_start_0
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v4}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 131
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v4

    if-nez v4, :cond_0

    .line 132
    const/4 v4, 0x1

    if-ne p1, v4, :cond_1

    .line 133
    invoke-virtual {v2}, Ljava/io/File;->createNewFile()Z

    move-result v4

    move v3, v4

    goto :goto_0

    .line 136
    :cond_0
    if-nez p1, :cond_1

    .line 137
    invoke-virtual {v2}, Ljava/io/File;->delete()Z

    move-result v4

    move v3, v4

    .line 140
    :cond_1
    :goto_0
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, ") result:"

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    .line 143
    goto :goto_1

    .line 141
    :catch_0
    move-exception v0

    .line 142
    .local v0, "e":Ljava/io/IOException;
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    .line 144
    .end local v0    # "e":Ljava/io/IOException;
    :goto_1
    return-void
.end method


# virtual methods
.method protected isValidFragment(Ljava/lang/String;)Z
    .locals 2
    .param p1, "fragmentName"    # Ljava/lang/String;

    .line 209
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "fragmentName is "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Nfc"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 210
    const/4 v0, 0x0

    return v0
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 40
    invoke-super {p0, p1}, Landroid/preference/PreferenceActivity;->onCreate(Landroid/os/Bundle;)V

    .line 41
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->isNfcSupport()Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 42
    const/4 v0, 0x2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/NfcMainPage;->showDialog(I)V

    .line 43
    iput-boolean v1, p0, Lcom/mediatek/engineermode/hqanfc/NfcMainPage;->mIsSupport:Z

    .line 44
    return-void

    .line 46
    :cond_0
    const v0, 0x7f0d0003

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/NfcMainPage;->addPreferencesFromResource(I)V

    .line 47
    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/NfcMainPage;->showDialog(I)V

    .line 48
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/NfcMainPage$ConnectServerTask;

    const/4 v2, 0x0

    invoke-direct {v0, p0, v2}, Lcom/mediatek/engineermode/hqanfc/NfcMainPage$ConnectServerTask;-><init>(Lcom/mediatek/engineermode/hqanfc/NfcMainPage;Lcom/mediatek/engineermode/hqanfc/NfcMainPage$1;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/NfcMainPage;->mTask:Lcom/mediatek/engineermode/hqanfc/NfcMainPage$ConnectServerTask;

    .line 49
    new-array v1, v1, [Ljava/lang/Void;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/hqanfc/NfcMainPage$ConnectServerTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 50
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 4
    .param p1, "id"    # I

    .line 68
    const/4 v0, 0x0

    const/4 v1, 0x1

    if-eq p1, v1, :cond_1

    const/4 v1, 0x2

    if-eq p1, v1, :cond_0

    .line 86
    const-string v0, "Nfc"

    const-string v1, "error dialog ID"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 89
    invoke-super {p0, p1}, Landroid/preference/PreferenceActivity;->onCreateDialog(I)Landroid/app/Dialog;

    move-result-object v0

    return-object v0

    .line 76
    :cond_0
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const v2, 0x7f0a0482

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 77
    invoke-virtual {v1, v0}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const v1, 0x7f0a0483

    .line 78
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/NfcMainPage;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const v1, 0x7f0a02e8

    new-instance v2, Lcom/mediatek/engineermode/hqanfc/NfcMainPage$1;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/hqanfc/NfcMainPage$1;-><init>(Lcom/mediatek/engineermode/hqanfc/NfcMainPage;)V

    .line 79
    invoke-virtual {v0, v1, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 84
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 76
    return-object v0

    .line 70
    :cond_1
    new-instance v2, Landroid/app/ProgressDialog;

    invoke-direct {v2, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    .line 71
    .local v2, "dialog":Landroid/app/ProgressDialog;
    const-string v3, "Please Wait..."

    invoke-virtual {v2, v3}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 72
    invoke-virtual {v2, v0}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 73
    invoke-virtual {v2, v1}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 74
    return-object v2
.end method

.method protected onDestroy()V
    .locals 3

    .line 53
    iget-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/NfcMainPage;->mIsSupport:Z

    if-eqz v0, :cond_0

    .line 54
    const-string v0, "Nfc"

    const-string v1, "[NfcMainPage]Nfc main page onDestroy()."

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 56
    invoke-static {}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->getInstance()Lcom/mediatek/engineermode/hqanfc/NfcClient;

    move-result-object v0

    const/16 v1, 0x87

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->sendCommand(ILcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmReq;)I

    .line 58
    invoke-static {}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->getInstance()Lcom/mediatek/engineermode/hqanfc/NfcClient;

    move-result-object v0

    const/16 v1, 0x78

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->sendCommand(ILcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmReq;)I

    .line 59
    invoke-static {}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->getInstance()Lcom/mediatek/engineermode/hqanfc/NfcClient;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->closeConnection()Z

    .line 60
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/NfcMainPage;->mTask:Lcom/mediatek/engineermode/hqanfc/NfcMainPage$ConnectServerTask;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/hqanfc/NfcMainPage$ConnectServerTask;->cancel(Z)Z

    .line 63
    :cond_0
    invoke-super {p0}, Landroid/preference/PreferenceActivity;->onDestroy()V

    .line 64
    return-void
.end method
