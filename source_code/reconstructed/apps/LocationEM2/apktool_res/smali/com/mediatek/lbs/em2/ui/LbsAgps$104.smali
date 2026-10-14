.class Lcom/mediatek/lbs/em2/ui/LbsAgps$104;
.super Ljava/lang/Object;
.source "LbsAgps.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsAgps;->addOnClickListener()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V
    .locals 0

    .line 1254
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$104;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 1

    .line 1257
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$104;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object v0, p1, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAgpsEnable:Landroid/widget/CheckBox;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxGpsSatelliteEnable:Landroid/widget/CheckBox;

    invoke-virtual {p1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p1

    invoke-virtual {v0, p1}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 1258
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$104;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxGpsSatelliteEnable:Landroid/widget/CheckBox;

    invoke-virtual {p0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p0

    invoke-virtual {p1, p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setGpsSatelliteEnable(Z)V

    return-void
.end method
