.class Lcom/mediatek/lbs/em2/ui/LbsGps$8;
.super Ljava/lang/Object;
.source "LbsGps.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsGps;->initWidget()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V
    .locals 0

    .line 378
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2

    .line 380
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$800(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    .line 381
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    const-wide/16 v0, 0x12c

    invoke-static {p1, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$900(Lcom/mediatek/lbs/em2/ui/LbsGps;J)V

    .line 383
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$1000(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    return-void
.end method
