.class Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$4;
.super Ljava/lang/Object;
.source "LbsNiStatistic.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->initUI()V
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

    .line 279
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 1

    .line 282
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    const-string p1, "com.mediatek.autodialer"

    const-string v0, "com.mediatek.autodialer.AutoDialerActivity"

    invoke-static {p0, p1, v0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->access$900(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
