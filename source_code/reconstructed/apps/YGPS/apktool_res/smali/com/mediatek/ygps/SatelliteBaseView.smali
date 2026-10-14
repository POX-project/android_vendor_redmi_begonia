.class public Lcom/mediatek/ygps/SatelliteBaseView;
.super Landroid/view/View;
.source "SatelliteBaseView.java"


# instance fields
.field private mSiManager:Lcom/mediatek/ygps/SatelliteInfoManager;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    const/4 v0, 0x0

    const/4 v1, 0x0

    .line 54
    invoke-direct {p0, p1, v0, v1}, Lcom/mediatek/ygps/SatelliteBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 p2, 0x0

    const/4 v0, 0x0

    .line 63
    invoke-direct {p0, p1, p2, v0}, Lcom/mediatek/ygps/SatelliteBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 74
    invoke-direct {p0, p1, p2, p3}, Landroid/view/View;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/4 p1, 0x0

    .line 81
    iput-object p1, p0, Lcom/mediatek/ygps/SatelliteBaseView;->mSiManager:Lcom/mediatek/ygps/SatelliteInfoManager;

    return-void
.end method


# virtual methods
.method protected getSatelliteInfoManager()Lcom/mediatek/ygps/SatelliteInfoManager;
    .locals 0

    .line 94
    iget-object p0, p0, Lcom/mediatek/ygps/SatelliteBaseView;->mSiManager:Lcom/mediatek/ygps/SatelliteInfoManager;

    return-object p0
.end method

.method requestUpdate(Lcom/mediatek/ygps/SatelliteInfoManager;)V
    .locals 0

    .line 89
    iput-object p1, p0, Lcom/mediatek/ygps/SatelliteBaseView;->mSiManager:Lcom/mediatek/ygps/SatelliteInfoManager;

    .line 90
    invoke-virtual {p0}, Landroid/view/View;->postInvalidate()V

    return-void
.end method
