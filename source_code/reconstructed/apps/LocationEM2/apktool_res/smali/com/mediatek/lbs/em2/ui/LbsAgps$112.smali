.class Lcom/mediatek/lbs/em2/ui/LbsAgps$112;
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

    .line 1306
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$112;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 0

    .line 1309
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$112;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {p1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setResetToDefault()V

    .line 1310
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$112;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->applyAgpsConfigToUI()V

    return-void
.end method
