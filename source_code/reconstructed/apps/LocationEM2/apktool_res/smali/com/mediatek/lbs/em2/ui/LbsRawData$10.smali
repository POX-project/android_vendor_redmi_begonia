.class Lcom/mediatek/lbs/em2/ui/LbsRawData$10;
.super Ljava/lang/Object;
.source "LbsRawData.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsRawData;->showMeasConfirmDialog()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsRawData;)V
    .locals 0

    .line 334
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$10;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 0

    .line 336
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$10;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mToggleButtonMeasurement:Landroid/widget/ToggleButton;

    const/4 p1, 0x0

    invoke-virtual {p0, p1}, Landroid/widget/ToggleButton;->setChecked(Z)V

    return-void
.end method
