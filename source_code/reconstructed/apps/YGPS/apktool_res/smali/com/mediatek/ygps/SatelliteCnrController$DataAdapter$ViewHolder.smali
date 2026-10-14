.class Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter$ViewHolder;
.super Ljava/lang/Object;
.source "SatelliteCnrController.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "ViewHolder"
.end annotation


# instance fields
.field mTvAm:Landroid/widget/TextView;

.field mTvEv:Landroid/widget/TextView;

.field mTvFq:Landroid/widget/TextView;

.field mTvSvId:Landroid/widget/TextView;

.field mViewCnr:Lcom/mediatek/ygps/CnrBarView;

.field mViewSys:Landroid/view/View;


# direct methods
.method private constructor <init>(Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter;)V
    .locals 0

    .line 213
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter;Lcom/mediatek/ygps/SatelliteCnrController$1;)V
    .locals 0

    .line 213
    invoke-direct {p0, p1}, Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter$ViewHolder;-><init>(Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter;)V

    return-void
.end method
