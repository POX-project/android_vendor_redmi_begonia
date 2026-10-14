.class Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$8;
.super Ljava/lang/Object;
.source "LbsNiStatistic.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->showConfirmDialog()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)V
    .locals 0

    .line 342
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 0

    .line 344
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->deleteReportFiles()V

    return-void
.end method
