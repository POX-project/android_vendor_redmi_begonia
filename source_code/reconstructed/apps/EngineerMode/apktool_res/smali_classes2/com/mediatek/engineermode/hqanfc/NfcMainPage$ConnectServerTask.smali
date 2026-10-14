.class Lcom/mediatek/engineermode/hqanfc/NfcMainPage$ConnectServerTask;
.super Landroid/os/AsyncTask;
.source "NfcMainPage.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/hqanfc/NfcMainPage;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "ConnectServerTask"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/os/AsyncTask<",
        "Ljava/lang/Void;",
        "Ljava/lang/Void;",
        "Ljava/lang/Boolean;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/hqanfc/NfcMainPage;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/hqanfc/NfcMainPage;)V
    .locals 0

    .line 179
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/NfcMainPage$ConnectServerTask;->this$0:Lcom/mediatek/engineermode/hqanfc/NfcMainPage;

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/hqanfc/NfcMainPage;Lcom/mediatek/engineermode/hqanfc/NfcMainPage$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/hqanfc/NfcMainPage;
    .param p2, "x1"    # Lcom/mediatek/engineermode/hqanfc/NfcMainPage$1;

    .line 179
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/NfcMainPage$ConnectServerTask;-><init>(Lcom/mediatek/engineermode/hqanfc/NfcMainPage;)V

    return-void
.end method


# virtual methods
.method protected varargs doInBackground([Ljava/lang/Void;)Ljava/lang/Boolean;
    .locals 2
    .param p1, "params"    # [Ljava/lang/Void;

    .line 183
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/NfcMainPage$ConnectServerTask;->this$0:Lcom/mediatek/engineermode/hqanfc/NfcMainPage;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/NfcMainPage;->access$100(Lcom/mediatek/engineermode/hqanfc/NfcMainPage;)V

    .line 184
    invoke-static {}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->getInstance()Lcom/mediatek/engineermode/hqanfc/NfcClient;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/NfcMainPage$ConnectServerTask;->this$0:Lcom/mediatek/engineermode/hqanfc/NfcMainPage;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->createConnection(Landroid/content/Context;)Z

    move-result v0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    return-object v0
.end method

.method protected bridge synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 179
    check-cast p1, [Ljava/lang/Void;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/hqanfc/NfcMainPage$ConnectServerTask;->doInBackground([Ljava/lang/Void;)Ljava/lang/Boolean;

    move-result-object p1

    return-object p1
.end method

.method protected onPostExecute(Ljava/lang/Boolean;)V
    .locals 6
    .param p1, "result"    # Ljava/lang/Boolean;

    .line 189
    const/4 v0, 0x1

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 190
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/NfcMainPage$ConnectServerTask;->this$0:Lcom/mediatek/engineermode/hqanfc/NfcMainPage;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/hqanfc/NfcMainPage;->getPreferenceScreen()Landroid/preference/PreferenceScreen;

    move-result-object v1

    .line 191
    .local v1, "screen":Landroid/preference/PreferenceScreen;
    invoke-virtual {v1}, Landroid/preference/PreferenceScreen;->getPreferenceCount()I

    move-result v2

    .line 192
    .local v2, "count":I
    const/4 v3, 0x0

    .local v3, "index":I
    :goto_0
    if-ge v3, v2, :cond_0

    .line 193
    invoke-virtual {v1, v3}, Landroid/preference/PreferenceScreen;->getPreference(I)Landroid/preference/Preference;

    move-result-object v4

    invoke-virtual {v4, v0}, Landroid/preference/Preference;->setEnabled(Z)V

    .line 192
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 196
    .end local v3    # "index":I
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->getInstance()Lcom/mediatek/engineermode/hqanfc/NfcClient;

    move-result-object v3

    const/16 v4, 0x64

    const/4 v5, 0x0

    invoke-virtual {v3, v4, v5}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->sendCommand(ILcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmReq;)I

    .line 198
    invoke-static {}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->getInstance()Lcom/mediatek/engineermode/hqanfc/NfcClient;

    move-result-object v3

    const/16 v4, 0x87

    invoke-virtual {v3, v4, v5}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->sendCommand(ILcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmReq;)I

    .line 199
    .end local v1    # "screen":Landroid/preference/PreferenceScreen;
    .end local v2    # "count":I
    goto :goto_1

    .line 200
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/NfcMainPage$ConnectServerTask;->this$0:Lcom/mediatek/engineermode/hqanfc/NfcMainPage;

    const v2, 0x7f0a0357

    const/4 v3, 0x0

    invoke-static {v1, v2, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 202
    :goto_1
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/NfcMainPage$ConnectServerTask;->this$0:Lcom/mediatek/engineermode/hqanfc/NfcMainPage;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/hqanfc/NfcMainPage;->dismissDialog(I)V

    .line 203
    return-void
.end method

.method protected bridge synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 0

    .line 179
    check-cast p1, Ljava/lang/Boolean;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/hqanfc/NfcMainPage$ConnectServerTask;->onPostExecute(Ljava/lang/Boolean;)V

    return-void
.end method
