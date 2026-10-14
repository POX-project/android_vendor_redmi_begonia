.class Lcom/mediatek/lbs/em2/ui/LbsAgps$30;
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

    .line 698
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$30;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 1

    .line 701
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$30;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    const/4 v0, 0x2

    invoke-virtual {p1, v0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setSuplVersion(I)V

    .line 702
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$30;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->setLayoutDependency()V

    return-void
.end method
