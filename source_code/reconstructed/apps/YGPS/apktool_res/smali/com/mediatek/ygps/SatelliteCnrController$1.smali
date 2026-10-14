.class Lcom/mediatek/ygps/SatelliteCnrController$1;
.super Ljava/lang/Object;
.source "SatelliteCnrController.java"

# interfaces
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/ygps/SatelliteCnrController;-><init>(Landroid/view/View;Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/ygps/SatelliteCnrController;


# direct methods
.method constructor <init>(Lcom/mediatek/ygps/SatelliteCnrController;)V
    .locals 0

    .line 54
    iput-object p1, p0, Lcom/mediatek/ygps/SatelliteCnrController$1;->this$0:Lcom/mediatek/ygps/SatelliteCnrController;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 3

    .line 60
    iget-object p1, p0, Lcom/mediatek/ygps/SatelliteCnrController$1;->this$0:Lcom/mediatek/ygps/SatelliteCnrController;

    iget-object p1, p1, Lcom/mediatek/ygps/SatelliteCnrController;->mLlOnePageTitle:Landroid/view/View;

    const/4 v0, 0x0

    const/16 v1, 0x8

    if-eqz p2, :cond_0

    move v2, v0

    goto :goto_0

    :cond_0
    move v2, v1

    :goto_0
    invoke-virtual {p1, v2}, Landroid/view/View;->setVisibility(I)V

    .line 61
    iget-object p1, p0, Lcom/mediatek/ygps/SatelliteCnrController$1;->this$0:Lcom/mediatek/ygps/SatelliteCnrController;

    iget-object p1, p1, Lcom/mediatek/ygps/SatelliteCnrController;->mGlOnePage:Landroid/widget/GridLayout;

    if-eqz p2, :cond_1

    move v2, v0

    goto :goto_1

    :cond_1
    move v2, v1

    :goto_1
    invoke-virtual {p1, v2}, Landroid/widget/GridLayout;->setVisibility(I)V

    .line 62
    iget-object p1, p0, Lcom/mediatek/ygps/SatelliteCnrController$1;->this$0:Lcom/mediatek/ygps/SatelliteCnrController;

    iget-object p1, p1, Lcom/mediatek/ygps/SatelliteCnrController;->mLlDetail:Landroid/view/View;

    if-eqz p2, :cond_2

    move v2, v1

    goto :goto_2

    :cond_2
    move v2, v0

    :goto_2
    invoke-virtual {p1, v2}, Landroid/view/View;->setVisibility(I)V

    .line 63
    iget-object p0, p0, Lcom/mediatek/ygps/SatelliteCnrController$1;->this$0:Lcom/mediatek/ygps/SatelliteCnrController;

    iget-object p0, p0, Lcom/mediatek/ygps/SatelliteCnrController;->mLvCnr:Landroid/widget/ListView;

    if-eqz p2, :cond_3

    move v0, v1

    :cond_3
    invoke-virtual {p0, v0}, Landroid/widget/ListView;->setVisibility(I)V

    return-void
.end method
