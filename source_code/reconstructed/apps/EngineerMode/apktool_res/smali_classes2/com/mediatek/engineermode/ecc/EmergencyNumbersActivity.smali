.class public Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;
.super Landroid/app/Activity;
.source "EmergencyNumbersActivity.java"


# static fields
.field private static final ECC_PROP_KEY:Ljava/lang/String; = "persist.vendor.em.hidl.testecc"

.field private static final TAG:Ljava/lang/String; = "EmergencyNumbersActivity"


# instance fields
.field private mContext:Landroid/content/Context;

.field private mEccNumTextView:Landroid/widget/EditText;

.field private mOkCmd:Landroid/widget/Button;

.field mSaveEccNums:Landroid/view/View$OnClickListener;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 55
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 87
    new-instance v0, Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity$1;-><init>(Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;->mSaveEccNums:Landroid/view/View$OnClickListener;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;)Landroid/widget/EditText;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;

    .line 55
    iget-object v0, p0, Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;->mEccNumTextView:Landroid/widget/EditText;

    return-object v0
.end method


# virtual methods
.method public onCreate(Landroid/os/Bundle;)V
    .locals 2
    .param p1, "icicle"    # Landroid/os/Bundle;

    .line 66
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 67
    invoke-virtual {p0}, Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;->getBaseContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;->mContext:Landroid/content/Context;

    .line 68
    const v0, 0x7f08004d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;->setContentView(I)V

    .line 70
    const v0, 0x7f0605d8

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;->mOkCmd:Landroid/widget/Button;

    .line 71
    iget-object v1, p0, Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;->mSaveEccNums:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 72
    const v0, 0x7f060344

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;->mEccNumTextView:Landroid/widget/EditText;

    .line 74
    return-void
.end method

.method protected onResume()V
    .locals 4

    .line 78
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 79
    const-string v0, "persist.vendor.em.hidl.testecc"

    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 80
    .local v0, "eccNum":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "get persist.vendor.em.hidl.testecc : "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "EmergencyNumbersActivity"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 81
    invoke-virtual {p0}, Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "Enter Numbers separated by ;"

    const/4 v3, 0x0

    invoke-static {v1, v2, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    .line 82
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 83
    iget-object v1, p0, Lcom/mediatek/engineermode/ecc/EmergencyNumbersActivity;->mEccNumTextView:Landroid/widget/EditText;

    invoke-virtual {v1, v0}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 84
    return-void
.end method
