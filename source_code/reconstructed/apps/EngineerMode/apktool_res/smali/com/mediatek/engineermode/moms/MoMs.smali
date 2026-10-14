.class public Lcom/mediatek/engineermode/moms/MoMs;
.super Landroid/app/Activity;
.source "MoMs.java"


# static fields
.field private static final DISABLE_MOMS:Ljava/lang/String; = "1"

.field private static final REENABLE_MOMS:Ljava/lang/String; = "0"

.field private static final TAG:Ljava/lang/String; = "MOMS"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 53
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method


# virtual methods
.method public onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 61
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 62
    const v0, 0x7f0800a4

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/moms/MoMs;->setContentView(I)V

    .line 63
    const v0, 0x7f060328

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/moms/MoMs;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    .line 64
    .local v0, "mDisableMoMs":Landroid/widget/Button;
    new-instance v1, Lcom/mediatek/engineermode/moms/MoMs$1;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/moms/MoMs$1;-><init>(Lcom/mediatek/engineermode/moms/MoMs;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 82
    const v1, 0x7f060667

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/moms/MoMs;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    .line 83
    .local v1, "mReenableMoMs":Landroid/widget/Button;
    new-instance v2, Lcom/mediatek/engineermode/moms/MoMs$2;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/moms/MoMs$2;-><init>(Lcom/mediatek/engineermode/moms/MoMs;)V

    invoke-virtual {v1, v2}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 102
    return-void
.end method
