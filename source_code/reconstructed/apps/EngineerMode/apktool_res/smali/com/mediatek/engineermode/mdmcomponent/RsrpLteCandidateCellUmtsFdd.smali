.class Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFdd;
.super Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field private mArrayComponent:Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddArray;

.field private mComponentView:Landroid/widget/LinearLayout;

.field private mCurveComponent:Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddCurve;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 9050
    const-string v0, "MSG_ID_FDD_EM_CSCE_NEIGH_CELL_S_STATUS_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFdd;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 9057
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;-><init>(Landroid/app/Activity;)V

    .line 9058
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddArray;

    invoke-direct {v0, p1}, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddArray;-><init>(Landroid/app/Activity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFdd;->mArrayComponent:Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddArray;

    .line 9059
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddCurve;

    invoke-direct {v0, p1}, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddCurve;-><init>(Landroid/app/Activity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFdd;->mCurveComponent:Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddCurve;

    .line 9060
    return-void
.end method


# virtual methods
.method clearData()V
    .locals 0

    .line 9088
    return-void
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 9102
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFdd;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 9097
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 9092
    const-string v0, "RSRP (LTE candidate cell)(UMTS FDD)"

    return-object v0
.end method

.method getView()Landroid/view/View;
    .locals 5

    .line 9064
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFdd;->mComponentView:Landroid/widget/LinearLayout;

    if-nez v0, :cond_0

    .line 9065
    new-instance v0, Landroid/widget/LinearLayout;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFdd;->mActivity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFdd;->mComponentView:Landroid/widget/LinearLayout;

    .line 9066
    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setOrientation(I)V

    goto :goto_0

    .line 9068
    :cond_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFdd;->removeView()V

    .line 9070
    :goto_0
    new-instance v0, Landroid/widget/LinearLayout$LayoutParams;

    const/high16 v1, 0x3f800000    # 1.0f

    const/4 v2, -0x1

    const/4 v3, 0x0

    invoke-direct {v0, v2, v3, v1}, Landroid/widget/LinearLayout$LayoutParams;-><init>(IIF)V

    .line 9072
    .local v0, "layoutParams":Landroid/widget/LinearLayout$LayoutParams;
    new-instance v1, Landroid/widget/LinearLayout$LayoutParams;

    const/high16 v4, 0x40000000    # 2.0f

    invoke-direct {v1, v2, v3, v4}, Landroid/widget/LinearLayout$LayoutParams;-><init>(IIF)V

    .line 9074
    .local v1, "layoutParams2":Landroid/widget/LinearLayout$LayoutParams;
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFdd;->mComponentView:Landroid/widget/LinearLayout;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFdd;->mArrayComponent:Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddArray;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddArray;->getView()Landroid/view/View;

    move-result-object v3

    invoke-virtual {v2, v3, v0}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 9075
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFdd;->mComponentView:Landroid/widget/LinearLayout;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFdd;->mCurveComponent:Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddCurve;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddCurve;->getView()Landroid/view/View;

    move-result-object v3

    invoke-virtual {v2, v3, v1}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 9076
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFdd;->mComponentView:Landroid/widget/LinearLayout;

    return-object v2
.end method

.method removeView()V
    .locals 1

    .line 9081
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFdd;->mArrayComponent:Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddArray;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddArray;->removeView()V

    .line 9082
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFdd;->mCurveComponent:Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddCurve;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddCurve;->removeView()V

    .line 9083
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFdd;->mComponentView:Landroid/widget/LinearLayout;

    invoke-virtual {v0}, Landroid/widget/LinearLayout;->removeAllViews()V

    .line 9084
    return-void
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 9107
    const/4 v0, 0x0

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 1
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 9112
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFdd;->mArrayComponent:Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddArray;

    invoke-virtual {v0, p1, p2}, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddArray;->update(Ljava/lang/String;Ljava/lang/Object;)V

    .line 9113
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFdd;->mCurveComponent:Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddCurve;

    invoke-virtual {v0, p1, p2}, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddCurve;->update(Ljava/lang/String;Ljava/lang/Object;)V

    .line 9114
    return-void
.end method
