.class public Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;
.super Landroid/app/Activity;
.source "EntitlementConfigActivity.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$DoSystemPropTask;
    }
.end annotation


# static fields
.field private static final KEY_ENTITLEMENT_ENABLES:Ljava/lang/String; = "persist.vendor.entitlement_enabled"

.field private static final KEY_ENTITLEMENT_SERVER:Ljava/lang/String; = "persist.vendor.entitlement.sesurl"

.field private static final KEY_EPDG_ADDRESS:Ljava/lang/String; = "persist.vendor.net.wo.epdg_fqdn"

.field private static final TAG:Ljava/lang/String; = "EM/WifiCallingConfigActivity"


# instance fields
.field private entitlementEnable:Z

.field private entitlementServer:Ljava/lang/String;

.field private entitlementServerEt:Landroid/widget/EditText;

.field private entitlementStatus:Landroid/widget/RadioGroup;

.field private getBtn:Landroid/widget/Button;

.field private setBtn:Landroid/widget/Button;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 19
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;

    .line 19
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->entitlementEnable:Z

    return v0
.end method

.method static synthetic access$002(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;
    .param p1, "x1"    # Z

    .line 19
    iput-boolean p1, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->entitlementEnable:Z

    return p1
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;

    .line 19
    iget-object v0, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->entitlementServer:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$102(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;
    .param p1, "x1"    # Ljava/lang/String;

    .line 19
    iput-object p1, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->entitlementServer:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;)Landroid/widget/EditText;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;

    .line 19
    iget-object v0, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->entitlementServerEt:Landroid/widget/EditText;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;

    .line 19
    iget-object v0, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->entitlementStatus:Landroid/widget/RadioGroup;

    return-object v0
.end method

.method private initView()V
    .locals 3

    .line 41
    const v0, 0x7f060387

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->entitlementStatus:Landroid/widget/RadioGroup;

    .line 42
    new-instance v0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$1;-><init>(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;)V

    .line 59
    .local v0, "mCheckedChangeListener":Landroid/widget/RadioGroup$OnCheckedChangeListener;
    iget-object v1, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->entitlementStatus:Landroid/widget/RadioGroup;

    invoke-virtual {v1, v0}, Landroid/widget/RadioGroup;->setOnCheckedChangeListener(Landroid/widget/RadioGroup$OnCheckedChangeListener;)V

    .line 60
    const v1, 0x7f060386

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    iput-object v1, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->entitlementServerEt:Landroid/widget/EditText;

    .line 61
    const v1, 0x7f060875

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->setBtn:Landroid/widget/Button;

    .line 62
    new-instance v2, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$2;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$2;-><init>(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;)V

    invoke-virtual {v1, v2}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 70
    const v1, 0x7f060874

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->getBtn:Landroid/widget/Button;

    .line 71
    new-instance v2, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$3;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$3;-><init>(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;)V

    invoke-virtual {v1, v2}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 78
    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 2
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 33
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 34
    const v0, 0x7f08010f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->setContentView(I)V

    .line 35
    invoke-direct {p0}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;->initView()V

    .line 36
    new-instance v0, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$DoSystemPropTask;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$DoSystemPropTask;-><init>(Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity;)V

    const-string v1, "get"

    filled-new-array {v1}, [Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/wificalling/EntitlementConfigActivity$DoSystemPropTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 37
    return-void
.end method
