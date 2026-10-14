.class public Lcom/mediatek/engineermode/vilte/VilteImsFramework;
.super Landroid/app/Activity;
.source "VilteImsFramework.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field private final PROP_VILTE_CONFERENCE_SUPPORT:Ljava/lang/String;

.field private final TAG:Ljava/lang/String;

.field private mVilte_operator_imsframework_video_conference_disable:Landroid/widget/Button;

.field private mVilte_operator_imsframework_video_conference_enable:Landroid/widget/Button;

.field private mVilte_video_conference_view:Landroid/widget/TextView;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 16
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 17
    const-string v0, "Vilte/ImsFramework"

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteImsFramework;->TAG:Ljava/lang/String;

    .line 19
    const-string v0, "persist.vendor.vt.video_conference_support"

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteImsFramework;->PROP_VILTE_CONFERENCE_SUPPORT:Ljava/lang/String;

    return-void
.end method

.method private bindViews()V
    .locals 1

    .line 35
    const v0, 0x7f060791

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteImsFramework;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteImsFramework;->mVilte_operator_imsframework_video_conference_enable:Landroid/widget/Button;

    .line 37
    const v0, 0x7f060790

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteImsFramework;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteImsFramework;->mVilte_operator_imsframework_video_conference_disable:Landroid/widget/Button;

    .line 39
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteImsFramework;->mVilte_operator_imsframework_video_conference_enable:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 40
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteImsFramework;->mVilte_operator_imsframework_video_conference_disable:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 42
    const v0, 0x7f0607b6

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteImsFramework;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteImsFramework;->mVilte_video_conference_view:Landroid/widget/TextView;

    .line 43
    return-void
.end method

.method private queryCurrentValue()V
    .locals 4

    .line 53
    nop

    .line 54
    const-string v0, "persist.vendor.vt.video_conference_support"

    const-string v1, ""

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 55
    .local v0, "videoConferenceSupport":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/vilte/VilteImsFramework;->mVilte_video_conference_view:Landroid/widget/TextView;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "persist.vendor.vt.video_conference_support = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 57
    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 5
    .param p1, "v"    # Landroid/view/View;

    .line 60
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteImsFramework;->mVilte_operator_imsframework_video_conference_enable:Landroid/widget/Button;

    const-string v1, "set property failed ..."

    const-string v2, "persist.vendor.vt.video_conference_support"

    const-string v3, "Vilte/ImsFramework"

    if-ne p1, v0, :cond_0

    .line 61
    const-string v0, "Set persist.vendor.vt.video_conference_support = 1"

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 63
    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    const-string v4, "1"

    invoke-interface {v0, v2, v4}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 65
    :catch_0
    move-exception v0

    .line 66
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 67
    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 68
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    goto :goto_1

    .line 70
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteImsFramework;->mVilte_operator_imsframework_video_conference_disable:Landroid/widget/Button;

    if-ne p1, v0, :cond_1

    .line 71
    const-string v0, "Set persist.vendor.vt.video_conference_support = 0"

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 73
    :try_start_1
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    const-string v4, "0"

    invoke-interface {v0, v2, v4}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 78
    goto :goto_1

    .line 75
    :catch_1
    move-exception v0

    .line 76
    .restart local v0    # "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 77
    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 80
    .end local v0    # "e":Ljava/lang/Exception;
    :cond_1
    :goto_1
    invoke-direct {p0}, Lcom/mediatek/engineermode/vilte/VilteImsFramework;->queryCurrentValue()V

    .line 81
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 1
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 29
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 30
    const v0, 0x7f0800ec

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteImsFramework;->setContentView(I)V

    .line 31
    invoke-direct {p0}, Lcom/mediatek/engineermode/vilte/VilteImsFramework;->bindViews()V

    .line 32
    return-void
.end method

.method protected onResume()V
    .locals 2

    .line 47
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 48
    const-string v0, "Vilte/ImsFramework"

    const-string v1, "onResume()"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 49
    invoke-direct {p0}, Lcom/mediatek/engineermode/vilte/VilteImsFramework;->queryCurrentValue()V

    .line 50
    return-void
.end method
