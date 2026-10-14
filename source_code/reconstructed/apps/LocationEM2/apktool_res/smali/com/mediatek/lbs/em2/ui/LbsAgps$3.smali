.class Lcom/mediatek/lbs/em2/ui/LbsAgps$3;
.super Landroid/os/Handler;
.source "LbsAgps.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsAgps;
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

    .line 206
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 1

    .line 208
    iget p1, p1, Landroid/os/Message;->what:I

    if-eqz p1, :cond_0

    goto :goto_0

    :cond_0
    const-string p1, "handle SHOW_PROXY_APP_PERMISSION_DIALOG"

    .line 210
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->log(Ljava/lang/Object;)V

    .line 211
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    const-string p1, "MTK Non-Framework LBS"

    const-string v0, "Non-Framework LBS LOCATION permission is not granted. Some AGPS NI test cases may be failed if it is not granted. Would you like to launch the APP?"

    invoke-static {p0, p1, v0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->access$300(Lcom/mediatek/lbs/em2/ui/LbsAgps;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V

    :goto_0
    return-void
.end method
