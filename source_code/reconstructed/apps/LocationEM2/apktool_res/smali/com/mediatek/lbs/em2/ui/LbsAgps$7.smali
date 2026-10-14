.class Lcom/mediatek/lbs/em2/ui/LbsAgps$7;
.super Ljava/lang/Object;
.source "LbsAgps.java"

# interfaces
.implements Landroid/widget/PopupMenu$OnMenuItemClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsAgps;->initPopupMenu()V
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

    .line 468
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onMenuItemClick(Landroid/view/MenuItem;)Z
    .locals 1

    .line 471
    invoke-interface {p1}, Landroid/view/MenuItem;->getItemId()I

    move-result p1

    if-eqz p1, :cond_2

    const/4 v0, 0x1

    if-eq p1, v0, :cond_1

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 483
    :cond_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    const/16 p1, 0x3039

    const/4 v0, 0x5

    new-array v0, v0, [B

    fill-array-data v0, :array_0

    invoke-virtual {p0, p1, v0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setNiRequest(I[B)V

    goto :goto_0

    .line 480
    :cond_1
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->agpsInterfaceAutoUT()V

    goto :goto_0

    .line 474
    :cond_2
    :try_start_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->coderTest()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 476
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :goto_0
    const/4 p0, 0x0

    return p0

    nop

    :array_0
    .array-data 1
        0x1t
        0x2t
        0x3t
        0x4t
        0x5t
    .end array-data
.end method
