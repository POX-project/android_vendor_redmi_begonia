.class Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$10;
.super Ljava/lang/Object;
.source "LbsC2kDbg.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->showConfirmDialog()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V
    .locals 0

    .line 341
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$10;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 0

    .line 343
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$10;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->deleteReportFiles()V

    return-void
.end method
