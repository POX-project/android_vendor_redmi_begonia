.class Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter;
.super Landroid/widget/ArrayAdapter;
.source "SatelliteCnrController.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/ygps/SatelliteCnrController;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "DataAdapter"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter$ViewHolder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/widget/ArrayAdapter<",
        "Lcom/mediatek/ygps/SatelliteInfo;",
        ">;"
    }
.end annotation


# instance fields
.field private mParent:Landroid/app/Activity;


# direct methods
.method public constructor <init>(Lcom/mediatek/ygps/SatelliteCnrController;Landroid/app/Activity;)V
    .locals 0

    const/4 p1, 0x0

    .line 176
    invoke-direct {p0, p2, p1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    .line 178
    iput-object p2, p0, Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter;->mParent:Landroid/app/Activity;

    return-void
.end method


# virtual methods
.method public getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;
    .locals 4

    .line 183
    iget-object p3, p0, Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter;->mParent:Landroid/app/Activity;

    invoke-virtual {p3}, Landroid/app/Activity;->getLayoutInflater()Landroid/view/LayoutInflater;

    move-result-object p3

    if-nez p2, :cond_0

    const/high16 p2, 0x7f070000

    const/4 v0, 0x0

    .line 186
    invoke-virtual {p3, p2, v0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p2

    .line 187
    invoke-virtual {p2}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p3

    check-cast p3, Landroid/widget/AbsListView$LayoutParams;

    .line 190
    new-instance p3, Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter$ViewHolder;

    invoke-direct {p3, p0, v0}, Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter$ViewHolder;-><init>(Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter;Lcom/mediatek/ygps/SatelliteCnrController$1;)V

    const v0, 0x7f05005a

    .line 191
    invoke-virtual {p2, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p3, Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter$ViewHolder;->mViewSys:Landroid/view/View;

    const v0, 0x7f050059

    .line 192
    invoke-virtual {p2, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p3, Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter$ViewHolder;->mTvSvId:Landroid/widget/TextView;

    const v0, 0x7f050058

    .line 193
    invoke-virtual {p2, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p3, Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter$ViewHolder;->mTvFq:Landroid/widget/TextView;

    const v0, 0x7f050056

    .line 194
    invoke-virtual {p2, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/mediatek/ygps/CnrBarView;

    iput-object v0, p3, Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter$ViewHolder;->mViewCnr:Lcom/mediatek/ygps/CnrBarView;

    const v0, 0x7f050057

    .line 195
    invoke-virtual {p2, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p3, Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter$ViewHolder;->mTvEv:Landroid/widget/TextView;

    const v0, 0x7f050054

    .line 196
    invoke-virtual {p2, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p3, Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter$ViewHolder;->mTvAm:Landroid/widget/TextView;

    .line 197
    invoke-virtual {p2, p3}, Landroid/view/View;->setTag(Ljava/lang/Object;)V

    goto :goto_0

    .line 199
    :cond_0
    invoke-virtual {p2}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter$ViewHolder;

    .line 201
    :goto_0
    invoke-virtual {p0, p1}, Landroid/widget/ArrayAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/mediatek/ygps/SatelliteInfo;

    .line 202
    iget-object p1, p3, Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter$ViewHolder;->mViewSys:Landroid/view/View;

    invoke-virtual {p0}, Lcom/mediatek/ygps/SatelliteInfo;->getIcon()I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/view/View;->setBackgroundResource(I)V

    .line 203
    iget-object p1, p3, Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter$ViewHolder;->mTvSvId:Landroid/widget/TextView;

    iget v0, p0, Lcom/mediatek/ygps/SatelliteInfo;->mPrn:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 204
    iget-object p1, p3, Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter$ViewHolder;->mTvFq:Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/mediatek/ygps/SatelliteInfo;->getFq()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 205
    iget-object p1, p3, Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter$ViewHolder;->mTvAm:Landroid/widget/TextView;

    const/4 v0, 0x1

    new-array v1, v0, [Ljava/lang/Object;

    iget v2, p0, Lcom/mediatek/ygps/SatelliteInfo;->mAzimuth:F

    invoke-static {v2}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    const-string v2, "%1.2f"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 206
    iget-object p1, p3, Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter$ViewHolder;->mTvEv:Landroid/widget/TextView;

    new-array v0, v0, [Ljava/lang/Object;

    iget v1, p0, Lcom/mediatek/ygps/SatelliteInfo;->mElevation:F

    invoke-static {v1}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v1

    aput-object v1, v0, v3

    invoke-static {v2, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 208
    iget-object p1, p3, Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter$ViewHolder;->mViewCnr:Lcom/mediatek/ygps/CnrBarView;

    iget v0, p0, Lcom/mediatek/ygps/SatelliteInfo;->mSnr:F

    invoke-virtual {p0}, Lcom/mediatek/ygps/SatelliteInfo;->getColor()I

    move-result v1

    iget-boolean p0, p0, Lcom/mediatek/ygps/SatelliteInfo;->mUsedInFix:Z

    invoke-virtual {p1, v0, v1, p0}, Lcom/mediatek/ygps/CnrBarView;->setValue(FIZ)V

    .line 209
    iget-object p0, p3, Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter$ViewHolder;->mViewCnr:Lcom/mediatek/ygps/CnrBarView;

    invoke-virtual {p0}, Landroid/view/View;->invalidate()V

    return-object p2
.end method
