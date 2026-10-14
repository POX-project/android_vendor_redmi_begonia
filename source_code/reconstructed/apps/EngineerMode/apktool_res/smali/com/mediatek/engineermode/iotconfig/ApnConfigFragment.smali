.class public Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;
.super Landroid/support/v4/app/Fragment;
.source "ApnConfigFragment.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemClickListener;


# static fields
.field private static final DIALOG_MCCMNC_INVALID:I = 0x1

.field private static final DIALOG_MCCMNC_READFAIL:I = 0x0

.field private static final IOT_APN_DEFAULT_LABLES:[Ljava/lang/String;

.field private static final MCC_LENGTH:I = 0x3

.field private static final SIM_CARD_INVALID:I = -0x1

.field private static final TAG:Ljava/lang/String; = "Iot/ApnConfigFragment"


# instance fields
.field private btnCancel:Landroid/widget/Button;

.field private btnConfirm:Landroid/widget/Button;

.field private items:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mAdapter:Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;

.field private mEtMccMnc:Landroid/widget/EditText;

.field private mInfoFrameLayout:Landroid/widget/FrameLayout;

.field private mListView:Landroid/widget/ListView;

.field private mMccMncReadSim:Z

.field private mMccMncText:Ljava/lang/String;

.field private mSimMccMnc:Ljava/lang/String;

.field private mSimType:I

.field private mSpinner:Landroid/widget/Spinner;

.field private mSubId:I


# direct methods
.method static constructor <clinit>()V
    .locals 6

    .line 46
    const-string v0, "mcc"

    const-string v1, "mnc"

    const-string v2, "apn"

    const-string v3, "type"

    const-string v4, "protocol"

    const-string v5, "roaming_protocol"

    filled-new-array/range {v0 .. v5}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->IOT_APN_DEFAULT_LABLES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 39
    invoke-direct {p0}, Landroid/support/v4/app/Fragment;-><init>()V

    .line 51
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mMccMncReadSim:Z

    return-void
.end method

.method static synthetic access$002(Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;
    .param p1, "x1"    # Z

    .line 39
    iput-boolean p1, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mMccMncReadSim:Z

    return p1
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;)Landroid/widget/EditText;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;

    .line 39
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mEtMccMnc:Landroid/widget/EditText;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;

    .line 39
    iget v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mSimType:I

    return v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;

    .line 39
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mSimMccMnc:Ljava/lang/String;

    return-object v0
.end method

.method private checkValidMCCMNC(Ljava/lang/String;)Z
    .locals 2
    .param p1, "text"    # Ljava/lang/String;

    .line 244
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v0

    const/4 v1, 0x5

    if-gt v1, v0, :cond_1

    const/4 v0, 0x6

    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v1

    if-ge v0, v1, :cond_0

    goto :goto_0

    .line 247
    :cond_0
    const/4 v0, 0x1

    return v0

    .line 245
    :cond_1
    :goto_0
    const/4 v0, 0x0

    return v0
.end method


# virtual methods
.method public getListView()Landroid/view/View;
    .locals 5

    .line 226
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mAdapter:Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;

    if-nez v0, :cond_0

    .line 227
    new-instance v0, Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;-><init>(Landroid/app/Activity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mAdapter:Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;

    .line 229
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mListView:Landroid/widget/ListView;

    if-nez v0, :cond_1

    .line 230
    new-instance v0, Landroid/widget/ListView;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/ListView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mListView:Landroid/widget/ListView;

    .line 232
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mAdapter:Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;->getCount()I

    move-result v0

    if-nez v0, :cond_2

    .line 234
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    sget-object v1, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->IOT_APN_DEFAULT_LABLES:[Ljava/lang/String;

    array-length v2, v1

    if-ge v0, v2, :cond_2

    .line 235
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mAdapter:Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;

    const/4 v3, 0x2

    new-array v3, v3, [Ljava/lang/String;

    const/4 v4, 0x0

    aget-object v1, v1, v0

    aput-object v1, v3, v4

    const-string v1, ""

    const/4 v4, 0x1

    aput-object v1, v3, v4

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 234
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 238
    .end local v0    # "i":I
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mListView:Landroid/widget/ListView;

    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mAdapter:Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;

    invoke-virtual {v0, v1}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 239
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mAdapter:Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;->notifyDataSetChanged()V

    .line 240
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mListView:Landroid/widget/ListView;

    return-object v0
.end method

.method public hideInputMethod(Landroid/view/View;)V
    .locals 3
    .param p1, "view"    # Landroid/view/View;

    .line 150
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v0

    if-eqz v0, :cond_0

    if-nez p1, :cond_0

    .line 151
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v0

    invoke-virtual {v0}, Landroid/support/v4/app/FragmentActivity;->getCurrentFocus()Landroid/view/View;

    move-result-object p1

    .line 153
    :cond_0
    if-eqz p1, :cond_1

    .line 154
    invoke-virtual {p1}, Landroid/view/View;->clearFocus()V

    .line 155
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v0

    .line 156
    const-string v1, "input_method"

    invoke-virtual {v0, v1}, Landroid/support/v4/app/FragmentActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/inputmethod/InputMethodManager;

    .line 157
    .local v0, "imm":Landroid/view/inputmethod/InputMethodManager;
    invoke-virtual {v0}, Landroid/view/inputmethod/InputMethodManager;->isActive()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 158
    invoke-virtual {p1}, Landroid/view/View;->getWindowToken()Landroid/os/IBinder;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/view/inputmethod/InputMethodManager;->hideSoftInputFromWindow(Landroid/os/IBinder;I)Z

    .line 161
    .end local v0    # "imm":Landroid/view/inputmethod/InputMethodManager;
    :cond_1
    return-void
.end method

.method public initMccMncValue()V
    .locals 4

    .line 292
    invoke-static {}, Landroid/telephony/TelephonyManager;->getDefault()Landroid/telephony/TelephonyManager;

    move-result-object v0

    invoke-virtual {v0}, Landroid/telephony/TelephonyManager;->getPhoneCount()I

    move-result v0

    const/4 v1, -0x1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-lt v0, v3, :cond_0

    .line 293
    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->isSimReady(I)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 294
    iput v2, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mSimType:I

    goto :goto_0

    .line 295
    :cond_0
    invoke-static {}, Landroid/telephony/TelephonyManager;->getDefault()Landroid/telephony/TelephonyManager;

    move-result-object v0

    invoke-virtual {v0}, Landroid/telephony/TelephonyManager;->getPhoneCount()I

    move-result v0

    if-le v0, v3, :cond_1

    .line 296
    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->isSimReady(I)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 297
    iput v3, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mSimType:I

    goto :goto_0

    .line 299
    :cond_1
    iput v1, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mSimType:I

    .line 301
    :goto_0
    iget v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mSimType:I

    if-eq v0, v1, :cond_3

    .line 302
    invoke-static {v0}, Landroid/telephony/SubscriptionManager;->getSubId(I)[I

    move-result-object v0

    .line 303
    .local v0, "SubId":[I
    if-eqz v0, :cond_2

    array-length v1, v0

    if-lez v1, :cond_2

    .line 304
    aget v1, v0, v2

    iput v1, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mSubId:I

    .line 306
    :cond_2
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v1

    .line 307
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    const-string v2, "phone"

    invoke-virtual {v1, v2}, Landroid/support/v4/app/FragmentActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/telephony/TelephonyManager;

    .line 308
    .local v1, "telephonyManager":Landroid/telephony/TelephonyManager;
    iget v2, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mSubId:I

    invoke-virtual {v1, v2}, Landroid/telephony/TelephonyManager;->getSimOperator(I)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mSimMccMnc:Ljava/lang/String;

    .line 310
    .end local v0    # "SubId":[I
    .end local v1    # "telephonyManager":Landroid/telephony/TelephonyManager;
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mSimMccMnc:Ljava/lang/String;

    const-string v1, "Iot/ApnConfigFragment"

    if-nez v0, :cond_4

    .line 311
    const-string v0, "Fail to read SIM MCC+MNC!"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 313
    :cond_4
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Read SIM MCC+MNC: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mSimMccMnc:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 315
    :goto_1
    return-void
.end method

.method public initView(Landroid/view/View;)V
    .locals 4
    .param p1, "view"    # Landroid/view/View;

    .line 79
    const v0, 0x7f0606c5

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mSpinner:Landroid/widget/Spinner;

    .line 80
    const v0, 0x7f060509

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mEtMccMnc:Landroid/widget/EditText;

    .line 81
    const/4 v1, 0x6

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->limitEditText(Landroid/widget/EditText;I)V

    .line 82
    nop

    .line 83
    const v0, 0x7f06031e

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mInfoFrameLayout:Landroid/widget/FrameLayout;

    .line 85
    const v0, 0x7f060249

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->btnConfirm:Landroid/widget/Button;

    .line 86
    const v0, 0x7f060248

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->btnCancel:Landroid/widget/Button;

    .line 87
    nop

    .line 88
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v0

    .line 87
    const v1, 0x7f010052

    const v2, 0x1090008

    invoke-static {v0, v1, v2}, Landroid/widget/ArrayAdapter;->createFromResource(Landroid/content/Context;II)Landroid/widget/ArrayAdapter;

    move-result-object v0

    .line 90
    .local v0, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/CharSequence;>;"
    const v1, 0x1090009

    invoke-virtual {v0, v1}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 91
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mSpinner:Landroid/widget/Spinner;

    invoke-virtual {v1, v0}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 92
    const/4 v1, 0x1

    iput-boolean v1, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mMccMncReadSim:Z

    .line 94
    new-instance v1, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$1;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$1;-><init>(Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;)V

    .line 113
    .local v1, "l":Landroid/widget/AdapterView$OnItemSelectedListener;
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mSpinner:Landroid/widget/Spinner;

    invoke-virtual {v2, v1}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 115
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mAdapter:Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;

    if-nez v2, :cond_0

    .line 116
    new-instance v2, Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v3

    invoke-direct {v2, v3}, Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;-><init>(Landroid/app/Activity;)V

    iput-object v2, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mAdapter:Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;

    .line 118
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->btnCancel:Landroid/widget/Button;

    new-instance v3, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$2;

    invoke-direct {v3, p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$2;-><init>(Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;)V

    invoke-virtual {v2, v3}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 127
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->btnConfirm:Landroid/widget/Button;

    new-instance v3, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$3;

    invoke-direct {v3, p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$3;-><init>(Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;)V

    invoke-virtual {v2, v3}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 133
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mEtMccMnc:Landroid/widget/EditText;

    new-instance v3, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$4;

    invoke-direct {v3, p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$4;-><init>(Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;)V

    invoke-virtual {v2, v3}, Landroid/widget/EditText;->setOnEditorActionListener(Landroid/widget/TextView$OnEditorActionListener;)V

    .line 147
    return-void
.end method

.method protected isSimReady(I)Z
    .locals 3
    .param p1, "mSlotId"    # I

    .line 318
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v0

    .line 319
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    const-string v1, "phone"

    invoke-virtual {v0, v1}, Landroid/support/v4/app/FragmentActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/telephony/TelephonyManager;

    .line 320
    .local v0, "telephonyManager":Landroid/telephony/TelephonyManager;
    nop

    .line 321
    invoke-virtual {v0, p1}, Landroid/telephony/TelephonyManager;->getSimState(I)I

    move-result v1

    const/4 v2, 0x1

    if-ne v2, v1, :cond_0

    .line 322
    const/4 v1, 0x0

    return v1

    .line 324
    :cond_0
    return v2
.end method

.method public limitEditText(Landroid/widget/EditText;I)V
    .locals 3
    .param p1, "et"    # Landroid/widget/EditText;
    .param p2, "limitLength"    # I

    .line 252
    const/4 v0, 0x1

    new-array v0, v0, [Landroid/text/InputFilter;

    new-instance v1, Landroid/text/InputFilter$LengthFilter;

    invoke-direct {v1, p2}, Landroid/text/InputFilter$LengthFilter;-><init>(I)V

    const/4 v2, 0x0

    aput-object v1, v0, v2

    invoke-virtual {p1, v0}, Landroid/widget/EditText;->setFilters([Landroid/text/InputFilter;)V

    .line 254
    new-instance v0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$5;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$5;-><init>(Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;)V

    invoke-virtual {p1, v0}, Landroid/widget/EditText;->setKeyListener(Landroid/text/method/KeyListener;)V

    .line 267
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 0
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 66
    invoke-super {p0, p1}, Landroid/support/v4/app/Fragment;->onCreate(Landroid/os/Bundle;)V

    .line 67
    return-void
.end method

.method public onCreateView(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;
    .locals 2
    .param p1, "inflater"    # Landroid/view/LayoutInflater;
    .param p2, "container"    # Landroid/view/ViewGroup;
    .param p3, "savedInstanceState"    # Landroid/os/Bundle;

    .line 73
    const v0, 0x7f08007c

    const/4 v1, 0x0

    invoke-virtual {p1, v0, p2, v1}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object v0

    .line 74
    .local v0, "view":Landroid/view/View;
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->initView(Landroid/view/View;)V

    .line 75
    return-object v0
.end method

.method public onItemClick(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 0
    .param p2, "view"    # Landroid/view/View;
    .param p3, "position"    # I
    .param p4, "id"    # J
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;",
            "Landroid/view/View;",
            "IJ)V"
        }
    .end annotation

    .line 332
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    return-void
.end method

.method public onResume()V
    .locals 3

    .line 280
    invoke-super {p0}, Landroid/support/v4/app/Fragment;->onResume()V

    .line 281
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->initMccMncValue()V

    .line 282
    iget-boolean v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mMccMncReadSim:Z

    if-eqz v0, :cond_0

    iget v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mSimType:I

    const/4 v1, -0x1

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mSimMccMnc:Ljava/lang/String;

    if-eqz v0, :cond_0

    .line 284
    const-string v1, " "

    const-string v2, ""

    invoke-virtual {v0, v1, v2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 285
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mEtMccMnc:Landroid/widget/EditText;

    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mSimMccMnc:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 286
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->queryAndShowApn()V

    .line 289
    :cond_0
    return-void
.end method

.method public queryAndShowApn()V
    .locals 13

    .line 164
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mEtMccMnc:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, " "

    const-string v2, ""

    invoke-virtual {v0, v1, v2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mMccMncText:Ljava/lang/String;

    .line 165
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->checkValidMCCMNC(Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_0

    .line 166
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const v2, 0x7f0a03cd

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mMccMncText:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->showDialog(ILjava/lang/String;)Landroid/app/Dialog;

    goto/16 :goto_2

    .line 169
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mAdapter:Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;->clear()V

    .line 170
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mMccMncText:Ljava/lang/String;

    const/4 v2, 0x0

    const/4 v3, 0x3

    invoke-virtual {v0, v2, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    .line 171
    .local v0, "mcc":Ljava/lang/String;
    iget-object v4, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mMccMncText:Ljava/lang/String;

    .line 172
    invoke-virtual {v4}, Ljava/lang/String;->length()I

    move-result v5

    invoke-virtual {v4, v3, v5}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v3

    .line 173
    .local v3, "mnc":Ljava/lang/String;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "mcc: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "mnc: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, "Iot/ApnConfigFragment"

    invoke-static {v5, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 174
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "numeric=\""

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mMccMncText:Ljava/lang/String;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "\""

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 175
    .local v4, "queryAPn":Ljava/lang/String;
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "queryAPn: "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v5, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 176
    const-string v6, "name ASC"

    .line 177
    .local v6, "order":Ljava/lang/String;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v7

    invoke-virtual {v7}, Landroid/support/v4/app/FragmentActivity;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v7

    sget-object v8, Landroid/provider/Telephony$Carriers;->CONTENT_URI:Landroid/net/Uri;

    const/4 v9, 0x0

    const/4 v11, 0x0

    .line 178
    move-object v10, v4

    move-object v12, v6

    invoke-virtual/range {v7 .. v12}, Landroid/content/ContentResolver;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v7

    .line 181
    .local v7, "apns":Landroid/database/Cursor;
    if-eqz v7, :cond_4

    .line 182
    :try_start_0
    invoke-interface {v7}, Landroid/database/Cursor;->moveToFirst()Z

    move-result v8

    if-eqz v8, :cond_4

    invoke-interface {v7}, Landroid/database/Cursor;->getCount()I

    move-result v8

    if-lez v8, :cond_4

    .line 183
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "[queryAndShowApn]apns count is: "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v7}, Landroid/database/Cursor;->getCount()I

    move-result v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v5, v8}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 184
    const/4 v5, 0x0

    .line 185
    .local v5, "apnNum":I
    iget-object v8, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mSpinner:Landroid/widget/Spinner;

    invoke-virtual {v8}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v8

    if-nez v8, :cond_1

    iget-object v8, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mMccMncText:Ljava/lang/String;

    iget-object v9, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mSimMccMnc:Ljava/lang/String;

    .line 186
    invoke-virtual {v8, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_1

    .line 187
    iget-object v8, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mAdapter:Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;

    new-array v9, v1, [Ljava/lang/String;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "Read from  Sim"

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v11, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mSimType:I

    add-int/2addr v11, v1

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    aput-object v10, v9, v2

    invoke-virtual {v8, v9}, Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 191
    :cond_1
    add-int/2addr v5, v1

    .line 192
    iget-object v8, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mAdapter:Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;

    new-array v9, v1, [Ljava/lang/String;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "APN "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    aput-object v10, v9, v2

    invoke-virtual {v8, v9}, Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 193
    const/4 v8, 0x0

    .local v8, "i":I
    :goto_0
    sget-object v9, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->IOT_APN_DEFAULT_LABLES:[Ljava/lang/String;

    array-length v9, v9

    if-ge v8, v9, :cond_3

    .line 194
    sget-object v9, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->IOT_APN_DEFAULT_LABLES:[Ljava/lang/String;

    aget-object v9, v9, v8

    .line 195
    invoke-interface {v7, v9}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v9

    .line 196
    .local v9, "index":I
    const/4 v10, -0x1

    if-eq v9, v10, :cond_2

    .line 197
    iget-object v10, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mAdapter:Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;

    const/4 v11, 0x2

    new-array v11, v11, [Ljava/lang/String;

    .line 198
    invoke-interface {v7}, Landroid/database/Cursor;->getColumnNames()[Ljava/lang/String;

    move-result-object v12

    aget-object v12, v12, v9

    aput-object v12, v11, v2

    .line 199
    invoke-interface {v7, v9}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v12

    aput-object v12, v11, v1

    .line 197
    invoke-virtual {v10, v11}, Lcom/mediatek/engineermode/iotconfig/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 193
    .end local v9    # "index":I
    :cond_2
    add-int/lit8 v8, v8, 0x1

    goto :goto_0

    .line 203
    .end local v8    # "i":I
    :cond_3
    invoke-interface {v7}, Landroid/database/Cursor;->moveToNext()Z

    move-result v8
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v8, :cond_1

    goto :goto_1

    .line 207
    .end local v5    # "apnNum":I
    :catchall_0
    move-exception v1

    invoke-interface {v7}, Landroid/database/Cursor;->close()V

    .line 208
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->updateUI()V

    .line 209
    throw v1

    .line 207
    :cond_4
    :goto_1
    invoke-interface {v7}, Landroid/database/Cursor;->close()V

    .line 208
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->updateUI()V

    .line 209
    nop

    .line 212
    .end local v0    # "mcc":Ljava/lang/String;
    .end local v3    # "mnc":Ljava/lang/String;
    .end local v4    # "queryAPn":Ljava/lang/String;
    .end local v6    # "order":Ljava/lang/String;
    .end local v7    # "apns":Landroid/database/Cursor;
    :goto_2
    return-void
.end method

.method public setUserVisibleHint(Z)V
    .locals 1
    .param p1, "isVisibleToUser"    # Z

    .line 271
    invoke-super {p0, p1}, Landroid/support/v4/app/Fragment;->setUserVisibleHint(Z)V

    .line 272
    if-nez p1, :cond_0

    .line 273
    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->hideInputMethod(Landroid/view/View;)V

    .line 275
    :cond_0
    return-void
.end method

.method protected showDialog(ILjava/lang/String;)Landroid/app/Dialog;
    .locals 3
    .param p1, "id"    # I
    .param p2, "info"    # Ljava/lang/String;

    .line 335
    const-string v0, "OK"

    if-eqz p1, :cond_1

    const/4 v1, 0x1

    if-eq p1, v1, :cond_0

    .line 358
    const/4 v0, 0x0

    return-object v0

    .line 348
    :cond_0
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 349
    invoke-virtual {v1, p2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    new-instance v2, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$7;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$7;-><init>(Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;)V

    .line 350
    invoke-virtual {v1, v0, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 356
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->show()Landroid/app/AlertDialog;

    move-result-object v0

    .line 348
    return-object v0

    .line 337
    :cond_1
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 338
    invoke-virtual {v1, p2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    new-instance v2, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$6;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$6;-><init>(Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;)V

    .line 339
    invoke-virtual {v1, v0, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 346
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->show()Landroid/app/AlertDialog;

    move-result-object v0

    .line 337
    return-object v0
.end method

.method public updateUI()V
    .locals 2

    .line 215
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mInfoFrameLayout:Landroid/widget/FrameLayout;

    invoke-virtual {v0}, Landroid/widget/FrameLayout;->removeAllViews()V

    .line 216
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->getListView()Landroid/view/View;

    move-result-object v0

    .line 217
    .local v0, "listView":Landroid/view/View;
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mInfoFrameLayout:Landroid/widget/FrameLayout;

    invoke-virtual {v1}, Landroid/widget/FrameLayout;->getChildCount()I

    move-result v1

    if-gtz v1, :cond_1

    .line 218
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 219
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    check-cast v1, Landroid/view/ViewGroup;

    invoke-virtual {v1, v0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 221
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->mInfoFrameLayout:Landroid/widget/FrameLayout;

    invoke-virtual {v1, v0}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    .line 223
    :cond_1
    return-void
.end method
