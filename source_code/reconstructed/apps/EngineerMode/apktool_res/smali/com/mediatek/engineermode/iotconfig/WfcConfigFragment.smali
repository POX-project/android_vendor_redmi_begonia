.class public Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;
.super Landroid/support/v4/app/Fragment;
.source "WfcConfigFragment.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$SetMccMncThread;
    }
.end annotation


# static fields
.field private static final TAG:Ljava/lang/String; = "Iot/WfcConfigFragment"

.field public static final UNKNOW:I = 0x2

.field public static final WFC_ACTION_RESET_MCCMNC:I = 0x1

.field public static final WFC_ACTION_SET_MCCMNC:I = 0x0

.field public static final WFC_SET_MCCMNC_FAILED:I = 0x4

.field public static final WFC_SET_MCCMNC_INPUT_ILLEGAL:I = 0x2

.field public static final WFC_SET_MCCMNC_LENGTH_TOO_LONG:I = 0x1

.field public static final WFC_SET_MCCMNC_OK:I = 0x3

.field public static final WFC_SHOW_ADDED_MCCMNC_LIST:I = 0x1

.field public static final WFC_SHOW_ALL_MCCMNC_LIST:I = 0x2

.field public static final WFC_SHOW_EXISTED_MCCMNC_LIST:I


# instance fields
.field private addMccMncLayout:Landroid/widget/LinearLayout;

.field private btnAddCancel:Landroid/widget/Button;

.field private btnAddMccMnc:Landroid/widget/Button;

.field private btnAddOk:Landroid/widget/Button;

.field private btnResetMccMnc:Landroid/widget/Button;

.field private currentList:I

.field private defaultAddMccMncLayout:Landroid/widget/LinearLayout;

.field private inputMccMnc:Landroid/widget/EditText;

.field private mAdapter:Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;

.field private mHandler:Landroid/os/Handler;

.field private mWfoService:Lcom/mediatek/wfo/IWifiOffloadService;

.field private mccMncListView:Landroid/widget/ListView;

.field private mccMncSpinner:Landroid/widget/Spinner;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 44
    invoke-direct {p0}, Landroid/support/v4/app/Fragment;-><init>()V

    .line 68
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->currentList:I

    .line 69
    new-instance v0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$1;-><init>(Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->mHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;

    .line 44
    iget v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->currentList:I

    return v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;)Landroid/widget/EditText;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;

    .line 44
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->inputMccMnc:Landroid/widget/EditText;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;)Lcom/mediatek/wfo/IWifiOffloadService;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;

    .line 44
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->mWfoService:Lcom/mediatek/wfo/IWifiOffloadService;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;

    .line 44
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method private initView(Landroid/view/View;)V
    .locals 6
    .param p1, "view"    # Landroid/view/View;

    .line 136
    const v0, 0x7f06055c

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->mccMncSpinner:Landroid/widget/Spinner;

    .line 137
    const v0, 0x7f06017d

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->btnAddMccMnc:Landroid/widget/Button;

    .line 138
    const v0, 0x7f06066c

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->btnResetMccMnc:Landroid/widget/Button;

    .line 139
    const v0, 0x7f06055b

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ListView;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->mccMncListView:Landroid/widget/ListView;

    .line 140
    nop

    .line 141
    const v0, 0x7f06017f

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->addMccMncLayout:Landroid/widget/LinearLayout;

    .line 142
    nop

    .line 143
    const v0, 0x7f06066d

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->defaultAddMccMncLayout:Landroid/widget/LinearLayout;

    .line 144
    const v0, 0x7f060180

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->btnAddOk:Landroid/widget/Button;

    .line 145
    const v0, 0x7f06017e

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->btnAddCancel:Landroid/widget/Button;

    .line 146
    nop

    .line 147
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v0

    .line 146
    const v1, 0x7f010055

    const v2, 0x1090008

    invoke-static {v0, v1, v2}, Landroid/widget/ArrayAdapter;->createFromResource(Landroid/content/Context;II)Landroid/widget/ArrayAdapter;

    move-result-object v0

    .line 149
    .local v0, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/CharSequence;>;"
    const v1, 0x1090009

    invoke-virtual {v0, v1}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 150
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->mccMncSpinner:Landroid/widget/Spinner;

    invoke-virtual {v1, v0}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 152
    new-instance v1, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$2;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$2;-><init>(Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;)V

    .line 175
    .local v1, "l":Landroid/widget/AdapterView$OnItemSelectedListener;
    const v2, 0x7f060809

    invoke-virtual {p1, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/EditText;

    iput-object v2, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->inputMccMnc:Landroid/widget/EditText;

    .line 176
    const/4 v2, 0x0

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->setAddMccMncLayoutVisibility(Z)V

    .line 177
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->mccMncSpinner:Landroid/widget/Spinner;

    invoke-virtual {v2, v1}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 178
    const-string v2, "wfo"

    invoke-static {v2}, Landroid/os/ServiceManager;->getService(Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object v2

    .line 179
    .local v2, "b":Landroid/os/IBinder;
    invoke-static {v2}, Lcom/mediatek/wfo/IWifiOffloadService$Stub;->asInterface(Landroid/os/IBinder;)Lcom/mediatek/wfo/IWifiOffloadService;

    move-result-object v3

    iput-object v3, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->mWfoService:Lcom/mediatek/wfo/IWifiOffloadService;

    .line 180
    new-instance v3, Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v4

    iget v5, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->currentList:I

    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->getMccMncList(I)Ljava/util/ArrayList;

    move-result-object v5

    invoke-direct {v3, v4, v5}, Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;-><init>(Landroid/app/Activity;Ljava/util/ArrayList;)V

    iput-object v3, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->mAdapter:Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;

    .line 181
    iget-object v4, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->mccMncListView:Landroid/widget/ListView;

    invoke-virtual {v4, v3}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 182
    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->btnAddMccMnc:Landroid/widget/Button;

    invoke-virtual {v3, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 183
    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->btnResetMccMnc:Landroid/widget/Button;

    invoke-virtual {v3, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 184
    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->btnAddOk:Landroid/widget/Button;

    invoke-virtual {v3, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 185
    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->btnAddCancel:Landroid/widget/Button;

    invoke-virtual {v3, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 186
    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->inputMccMnc:Landroid/widget/EditText;

    new-instance v4, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$3;

    invoke-direct {v4, p0}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$3;-><init>(Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;)V

    invoke-virtual {v3, v4}, Landroid/widget/EditText;->setOnEditorActionListener(Landroid/widget/TextView$OnEditorActionListener;)V

    .line 200
    return-void
.end method


# virtual methods
.method public checkInputMccMnc([Ljava/lang/String;)Z
    .locals 6
    .param p1, "mccMncArray"    # [Ljava/lang/String;

    .line 315
    array-length v0, p1

    const/4 v1, 0x0

    move v2, v1

    :goto_0
    if-ge v2, v0, :cond_2

    aget-object v3, p1, v2

    .line 316
    .local v3, "mccMnc":Ljava/lang/String;
    const/4 v4, 0x5

    invoke-virtual {v3}, Ljava/lang/String;->length()I

    move-result v5

    if-gt v4, v5, :cond_1

    const/4 v4, 0x6

    invoke-virtual {v3}, Ljava/lang/String;->length()I

    move-result v5

    if-ge v4, v5, :cond_0

    goto :goto_1

    .line 315
    .end local v3    # "mccMnc":Ljava/lang/String;
    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 317
    .restart local v3    # "mccMnc":Ljava/lang/String;
    :cond_1
    :goto_1
    return v1

    .line 320
    .end local v3    # "mccMnc":Ljava/lang/String;
    :cond_2
    const/4 v0, 0x1

    return v0
.end method

.method public getMccMncList(I)Ljava/util/ArrayList;
    .locals 5
    .param p1, "type"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 324
    const-string v0, "Iot/WfcConfigFragment"

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 325
    .local v1, "mMccMncList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->mWfoService:Lcom/mediatek/wfo/IWifiOffloadService;

    if-eqz v2, :cond_1

    .line 327
    :try_start_0
    invoke-interface {v2, p1}, Lcom/mediatek/wfo/IWifiOffloadService;->getMccMncAllowList(I)[Ljava/lang/String;

    move-result-object v2

    .line 328
    .local v2, "mccMncResult":[Ljava/lang/String;
    if-eqz v2, :cond_0

    .line 329
    new-instance v3, Ljava/util/ArrayList;

    invoke-static {v2}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v4

    invoke-direct {v3, v4}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    move-object v1, v3

    .line 330
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Read MccMncList : "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/util/ArrayList;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 336
    .end local v2    # "mccMncResult":[Ljava/lang/String;
    goto :goto_0

    .line 332
    .restart local v2    # "mccMncResult":[Ljava/lang/String;
    :cond_0
    const/4 v0, 0x0

    return-object v0

    .line 334
    .end local v2    # "mccMncResult":[Ljava/lang/String;
    :catch_0
    move-exception v2

    .line 335
    .local v2, "e":Landroid/os/RemoteException;
    const-string v3, "RemoteException ImsCallSessionProxy()"

    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 338
    .end local v2    # "e":Landroid/os/RemoteException;
    :cond_1
    :goto_0
    return-object v1
.end method

.method public hideInputMethod(Landroid/view/View;)V
    .locals 3
    .param p1, "view"    # Landroid/view/View;

    .line 112
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v0

    if-eqz v0, :cond_0

    if-nez p1, :cond_0

    .line 113
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v0

    invoke-virtual {v0}, Landroid/support/v4/app/FragmentActivity;->getCurrentFocus()Landroid/view/View;

    move-result-object p1

    .line 115
    :cond_0
    if-eqz p1, :cond_1

    .line 116
    invoke-virtual {p1}, Landroid/view/View;->clearFocus()V

    .line 117
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v0

    .line 118
    const-string v1, "input_method"

    invoke-virtual {v0, v1}, Landroid/support/v4/app/FragmentActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/inputmethod/InputMethodManager;

    .line 119
    .local v0, "imm":Landroid/view/inputmethod/InputMethodManager;
    invoke-virtual {v0}, Landroid/view/inputmethod/InputMethodManager;->isActive()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 120
    invoke-virtual {p1}, Landroid/view/View;->getWindowToken()Landroid/os/IBinder;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/view/inputmethod/InputMethodManager;->hideSoftInputFromWindow(Landroid/os/IBinder;I)Z

    .line 123
    .end local v0    # "imm":Landroid/view/inputmethod/InputMethodManager;
    :cond_1
    return-void
.end method

.method public limitEditText(Landroid/widget/EditText;I)V
    .locals 3
    .param p1, "et"    # Landroid/widget/EditText;
    .param p2, "limitLength"    # I

    .line 203
    const/4 v0, 0x1

    new-array v0, v0, [Landroid/text/InputFilter;

    new-instance v1, Landroid/text/InputFilter$LengthFilter;

    invoke-direct {v1, p2}, Landroid/text/InputFilter$LengthFilter;-><init>(I)V

    const/4 v2, 0x0

    aput-object v1, v0, v2

    invoke-virtual {p1, v0}, Landroid/widget/EditText;->setFilters([Landroid/text/InputFilter;)V

    .line 205
    new-instance v0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$4;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$4;-><init>(Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;)V

    invoke-virtual {p1, v0}, Landroid/widget/EditText;->setKeyListener(Landroid/text/method/KeyListener;)V

    .line 217
    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 4
    .param p1, "v"    # Landroid/view/View;

    .line 230
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    sparse-switch v0, :sswitch_data_0

    goto :goto_0

    .line 246
    :sswitch_0
    const-string v0, ""

    .line 247
    .local v0, "mccMncContent":Ljava/lang/String;
    new-instance v1, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$SetMccMncThread;

    invoke-direct {v1, p0, v2, v0}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$SetMccMncThread;-><init>(Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;ILjava/lang/String;)V

    invoke-virtual {v1}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$SetMccMncThread;->start()V

    goto :goto_0

    .line 232
    .end local v0    # "mccMncContent":Ljava/lang/String;
    :sswitch_1
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->inputMccMnc:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 233
    const-string v2, " "

    const-string v3, ""

    invoke-virtual {v0, v2, v3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    .line 234
    .restart local v0    # "mccMncContent":Ljava/lang/String;
    if-eqz v0, :cond_0

    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 235
    new-instance v2, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$SetMccMncThread;

    invoke-direct {v2, p0, v1, v0}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$SetMccMncThread;-><init>(Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;ILjava/lang/String;)V

    .line 236
    invoke-virtual {v2}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$SetMccMncThread;->start()V

    goto :goto_0

    .line 240
    .end local v0    # "mccMncContent":Ljava/lang/String;
    :sswitch_2
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->setAddMccMncLayoutVisibility(Z)V

    .line 241
    goto :goto_0

    .line 243
    :sswitch_3
    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->setAddMccMncLayoutVisibility(Z)V

    .line 244
    nop

    .line 251
    :cond_0
    :goto_0
    return-void

    nop

    :sswitch_data_0
    .sparse-switch
        0x7f06017d -> :sswitch_3
        0x7f06017e -> :sswitch_2
        0x7f060180 -> :sswitch_1
        0x7f06066c -> :sswitch_0
    .end sparse-switch
.end method

.method public onCreateView(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;
    .locals 2
    .param p1, "inflater"    # Landroid/view/LayoutInflater;
    .param p2, "container"    # Landroid/view/ViewGroup;
    .param p3, "savedInstanceState"    # Landroid/os/Bundle;

    .line 129
    const v0, 0x7f080082

    const/4 v1, 0x0

    invoke-virtual {p1, v0, p2, v1}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object v0

    .line 130
    .local v0, "view":Landroid/view/View;
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->initView(Landroid/view/View;)V

    .line 131
    return-object v0
.end method

.method public onResume()V
    .locals 1

    .line 362
    invoke-super {p0}, Landroid/support/v4/app/Fragment;->onResume()V

    .line 363
    iget v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->currentList:I

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->updateUI(I)V

    .line 364
    return-void
.end method

.method public setAddMccMncLayoutVisibility(Z)V
    .locals 5
    .param p1, "visibility"    # Z

    .line 93
    const/4 v0, 0x0

    const/16 v1, 0x8

    if-eqz p1, :cond_1

    .line 94
    const-string v2, ""

    .line 95
    .local v2, "mccMncContent":Ljava/lang/String;
    const/4 v3, 0x1

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->getMccMncList(I)Ljava/util/ArrayList;

    move-result-object v4

    if-eqz v4, :cond_0

    .line 96
    nop

    .line 97
    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->getMccMncList(I)Ljava/util/ArrayList;

    move-result-object v3

    .line 96
    const-string v4, ","

    invoke-static {v4, v3}, Landroid/text/TextUtils;->join(Ljava/lang/CharSequence;Ljava/lang/Iterable;)Ljava/lang/String;

    move-result-object v2

    .line 99
    :cond_0
    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->inputMccMnc:Landroid/widget/EditText;

    invoke-virtual {v3, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 100
    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->addMccMncLayout:Landroid/widget/LinearLayout;

    invoke-virtual {v3, v0}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 101
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->defaultAddMccMncLayout:Landroid/widget/LinearLayout;

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 102
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->inputMccMnc:Landroid/widget/EditText;

    const/16 v1, 0x5c

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->limitEditText(Landroid/widget/EditText;I)V

    .line 103
    .end local v2    # "mccMncContent":Ljava/lang/String;
    goto :goto_0

    .line 104
    :cond_1
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->inputMccMnc:Landroid/widget/EditText;

    const-string v3, ""

    invoke-virtual {v2, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 105
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->addMccMncLayout:Landroid/widget/LinearLayout;

    invoke-virtual {v2, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 106
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->defaultAddMccMncLayout:Landroid/widget/LinearLayout;

    invoke-virtual {v1, v0}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 107
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->inputMccMnc:Landroid/widget/EditText;

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->hideInputMethod(Landroid/view/View;)V

    .line 109
    :goto_0
    return-void
.end method

.method public setUserVisibleHint(Z)V
    .locals 1
    .param p1, "isVisibleToUser"    # Z

    .line 221
    invoke-super {p0, p1}, Landroid/support/v4/app/Fragment;->setUserVisibleHint(Z)V

    .line 222
    if-nez p1, :cond_0

    .line 223
    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->hideInputMethod(Landroid/view/View;)V

    .line 225
    :cond_0
    return-void
.end method

.method public showToast(Ljava/lang/String;)V
    .locals 2
    .param p1, "content"    # Ljava/lang/String;

    .line 311
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {v0, p1, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 312
    return-void
.end method

.method public updateUI(I)V
    .locals 3
    .param p1, "type"    # I

    .line 343
    iput p1, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->currentList:I

    .line 344
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->mAdapter:Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;

    if-nez v0, :cond_0

    .line 345
    new-instance v0, Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v1

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->getMccMncList(I)Ljava/util/ArrayList;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;-><init>(Landroid/app/Activity;Ljava/util/ArrayList;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->mAdapter:Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;

    goto :goto_1

    .line 347
    :cond_0
    invoke-virtual {v0}, Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;->clear()V

    .line 348
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->getMccMncList(I)Ljava/util/ArrayList;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 349
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->getMccMncList(I)Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 350
    .local v1, "mccMnc":Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->mAdapter:Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;

    invoke-virtual {v2, v1}, Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;->add(Ljava/lang/Object;)V

    .line 351
    .end local v1    # "mccMnc":Ljava/lang/String;
    goto :goto_0

    .line 353
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->mAdapter:Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->getMccMncList(I)Ljava/util/ArrayList;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;->refresh(Ljava/util/ArrayList;)V

    .line 355
    :goto_1
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->mccMncListView:Landroid/widget/ListView;

    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->mAdapter:Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;

    invoke-virtual {v0, v1}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 356
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->mAdapter:Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/iotconfig/MccMncAdapter;->notifyDataSetChanged()V

    .line 357
    return-void
.end method
