.class public Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;
.super Landroid/app/Activity;
.source "AospPresenceTestActivity.java"


# static fields
.field public static final FUNCTION_OPTIONS_ADDLISTENER:Ljava/lang/String; = "[OPTIONS]addListener"

.field public static final FUNCTION_OPTIONS_GETCONTACTCAP:Ljava/lang/String; = "[OPTIONS]getContactCap"

.field public static final FUNCTION_OPTIONS_GETCONTACTLISTCAP:Ljava/lang/String; = "[OPTIONS]getContactListCap"

.field public static final FUNCTION_OPTIONS_GETMYINFO:Ljava/lang/String; = "[OPTIONS]getMyInfo"

.field public static final FUNCTION_OPTIONS_GETVERSION:Ljava/lang/String; = "[OPTIONS]getVersion"

.field public static final FUNCTION_OPTIONS_REMOVELISTENER:Ljava/lang/String; = "[OPTIONS]removeListener"

.field public static final FUNCTION_OPTIONS_RESPONSEINCOMINGOPTIONS:Ljava/lang/String; = "[OPTIONS]responseIncomingOptions"

.field public static final FUNCTION_OPTIONS_SETMYINFO:Ljava/lang/String; = "[OPTIONS]setMyInfo"

.field public static final FUNCTION_PRESENCE_ADDLISTENER:Ljava/lang/String; = "[PRESENCE]addListener"

.field public static final FUNCTION_PRESENCE_GETCONTACTCAP:Ljava/lang/String; = "[PRESENCE]getContactCap"

.field public static final FUNCTION_PRESENCE_GETCONTACTLISTCAP:Ljava/lang/String; = "[PRESENCE]getContactListCap"

.field public static final FUNCTION_PRESENCE_GETVERSION:Ljava/lang/String; = "[PRESENCE]getVersion"

.field public static final FUNCTION_PRESENCE_PUBLISHMYCAP:Ljava/lang/String; = "[PRESENCE]publishMyCap"

.field public static final FUNCTION_PRESENCE_REENABLESERVICE:Ljava/lang/String; = "[PRESENCE]reenableService"

.field public static final FUNCTION_PRESENCE_REMOVELISTENER:Ljava/lang/String; = "[PRESENCE]removeListener"

.field public static final FUNCTION_UCE_CREATEOPTIONSSERVICE:Ljava/lang/String; = "[UCE]createOptionsService"

.field public static final FUNCTION_UCE_CREATEPRESENCESERVICE:Ljava/lang/String; = "[UCE]createPresenceService"

.field public static final FUNCTION_UCE_DESTROYOPTIONSSERVICE:Ljava/lang/String; = "[UCE]destroyOptionsService"

.field public static final FUNCTION_UCE_DESTROYPRESENCESERVICE:Ljava/lang/String; = "[UCE]destroyPresenceService"

.field public static final FUNCTION_UCE_GETOPTIONSSERVICE:Ljava/lang/String; = "[UCE]getOptionsService"

.field public static final FUNCTION_UCE_GETPRESENCESERVICE:Ljava/lang/String; = "[UCE]getPresenceService"

.field public static final FUNCTION_UCE_GETSERVICESTATUS:Ljava/lang/String; = "[UCE]getServiceStatus"

.field public static final FUNCTION_UCE_ISSERVICESTARTED:Ljava/lang/String; = "[UCE]isServiceStarted"

.field public static final FUNCTION_UCE_STARTSERVICE:Ljava/lang/String; = "[UCE]startService"

.field public static final FUNCTION_UCE_STOPSERVICE:Ljava/lang/String; = "[UCE]stopService"

.field public static final PREF_KEY_CONTACT1:Ljava/lang/String; = "Contact1PhoneNum"

.field public static final PREF_KEY_CONTACT2:Ljava/lang/String; = "Contact2PhoneNum"

.field public static final PREF_NAME:Ljava/lang/String; = "PhoneNum"

.field public static final TAG:Ljava/lang/String; = "AospPresenceTestActivity"


# instance fields
.field private mButtonContact1:Landroid/widget/Button;

.field private mButtonContact2:Landroid/widget/Button;

.field private mEditTextContact1:Landroid/widget/EditText;

.field private mEditTextContact2:Landroid/widget/EditText;

.field private mFunctionList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mListView:Landroid/widget/ListView;

.field private sharedPreferences:Landroid/content/SharedPreferences;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 23
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;)Landroid/widget/EditText;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;

    .line 23
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mEditTextContact1:Landroid/widget/EditText;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;)Landroid/content/SharedPreferences;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;

    .line 23
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->sharedPreferences:Landroid/content/SharedPreferences;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;)Landroid/widget/EditText;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;

    .line 23
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mEditTextContact2:Landroid/widget/EditText;

    return-object v0
.end method

.method private initClickListener()V
    .locals 2

    .line 109
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mButtonContact1:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity$1;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity$1;-><init>(Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 119
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mButtonContact2:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity$2;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity$2;-><init>(Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 128
    return-void
.end method

.method private initFunctionList()V
    .locals 2

    .line 80
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    .line 81
    const-string v1, "[UCE]startService"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 82
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    const-string v1, "[UCE]stopService"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 83
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    const-string v1, "[UCE]isServiceStarted"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 84
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    const-string v1, "[UCE]createOptionsService"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 85
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    const-string v1, "[UCE]destroyOptionsService"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 86
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    const-string v1, "[UCE]createPresenceService"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 87
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    const-string v1, "[UCE]destroyPresenceService"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 88
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    const-string v1, "[UCE]getServiceStatus"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 89
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    const-string v1, "[UCE]getPresenceService"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 90
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    const-string v1, "[UCE]getOptionsService"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 91
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    const-string v1, "[PRESENCE]addListener"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 92
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    const-string v1, "[PRESENCE]removeListener"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 93
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    const-string v1, "[PRESENCE]getVersion"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 94
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    const-string v1, "[PRESENCE]reenableService"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 95
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    const-string v1, "[PRESENCE]publishMyCap"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 96
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    const-string v1, "[PRESENCE]getContactCap"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 97
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    const-string v1, "[PRESENCE]getContactListCap"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 98
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    const-string v1, "[OPTIONS]addListener"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 99
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    const-string v1, "[OPTIONS]removeListener"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 100
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    const-string v1, "[OPTIONS]getVersion"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 101
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    const-string v1, "[OPTIONS]setMyInfo"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 102
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    const-string v1, "[OPTIONS]getMyInfo"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 103
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    const-string v1, "[OPTIONS]getContactCap"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 104
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    const-string v1, "[OPTIONS]getContactListCap"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 105
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    const-string v1, "[OPTIONS]responseIncomingOptions"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 106
    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 2
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 64
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 65
    const v0, 0x7f080008

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->setContentView(I)V

    .line 66
    const v0, 0x7f060005

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ListView;

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mListView:Landroid/widget/ListView;

    .line 67
    const v0, 0x7f060055

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mButtonContact1:Landroid/widget/Button;

    .line 68
    const v0, 0x7f060057

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mButtonContact2:Landroid/widget/Button;

    .line 69
    const v0, 0x7f060056

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mEditTextContact1:Landroid/widget/EditText;

    .line 70
    const v0, 0x7f060058

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mEditTextContact2:Landroid/widget/EditText;

    .line 71
    const-string v0, "PhoneNum"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->sharedPreferences:Landroid/content/SharedPreferences;

    .line 72
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->initClickListener()V

    .line 73
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->initFunctionList()V

    .line 74
    const-string v0, "AospPresenceTestActivity"

    const-string v1, "onCreate"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 75
    new-instance v0, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;

    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mFunctionList:Ljava/util/List;

    invoke-direct {v0, v1}, Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;-><init>(Ljava/util/List;)V

    .line 76
    .local v0, "adapter":Lcom/mediatek/engineermode/misc/AospPresenceListAdapter;
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/AospPresenceTestActivity;->mListView:Landroid/widget/ListView;

    invoke-virtual {v1, v0}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 77
    return-void
.end method
