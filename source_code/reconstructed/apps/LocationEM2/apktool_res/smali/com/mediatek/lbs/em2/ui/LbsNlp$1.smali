.class Lcom/mediatek/lbs/em2/ui/LbsNlp$1;
.super Ljava/lang/Object;
.source "LbsNlp.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsNlp;->initUI()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsNlp;)V
    .locals 0

    .line 160
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 4

    .line 163
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mToggleButtonNlp:Landroid/widget/ToggleButton;

    invoke-virtual {p1}, Landroid/widget/ToggleButton;->isChecked()Z

    move-result p1

    if-eqz p1, :cond_0

    :try_start_0
    const-string p1, "network"

    const-wide/16 v0, 0x3e8

    const/4 v2, 0x0

    const/4 v3, 0x0

    .line 166
    invoke-static {p1, v0, v1, v2, v3}, Landroid/location/LocationRequest;->createFromDeprecatedProvider(Ljava/lang/String;JFZ)Landroid/location/LocationRequest;

    move-result-object p1

    const/4 v0, 0x1

    .line 169
    invoke-virtual {p1, v0}, Landroid/location/LocationRequest;->setLocationSettingsIgnored(Z)Landroid/location/LocationRequest;

    .line 170
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->access$200(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Landroid/location/LocationManager;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    .line 172
    invoke-static {v1}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->access$000(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Landroid/location/LocationListener;

    move-result-object v1

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    .line 173
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->access$100(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Landroid/os/Handler;

    move-result-object p0

    invoke-virtual {p0}, Landroid/os/Handler;->getLooper()Landroid/os/Looper;

    move-result-object p0

    .line 170
    invoke-virtual {v0, p1, v1, p0}, Landroid/location/LocationManager;->requestLocationUpdates(Landroid/location/LocationRequest;Landroid/location/LocationListener;Landroid/os/Looper;)V
    :try_end_0
    .catch Ljava/lang/IllegalArgumentException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string p0, "requestLocationUpdates to unexisted provider"

    .line 175
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->log(Ljava/lang/Object;)V

    goto :goto_0

    .line 178
    :cond_0
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->access$200(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Landroid/location/LocationManager;

    move-result-object p1

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->access$000(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Landroid/location/LocationListener;

    move-result-object p0

    invoke-virtual {p1, p0}, Landroid/location/LocationManager;->removeUpdates(Landroid/location/LocationListener;)V

    :goto_0
    return-void
.end method
