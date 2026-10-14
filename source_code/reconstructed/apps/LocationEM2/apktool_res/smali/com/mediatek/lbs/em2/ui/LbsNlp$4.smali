.class Lcom/mediatek/lbs/em2/ui/LbsNlp$4;
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

    .line 219
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 1

    .line 222
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->access$900(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Landroid/location/Location;

    move-result-object p1

    if-nez p1, :cond_0

    .line 223
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    const/4 p1, 0x1

    const-string v0, "Before using Geolocation, you need to have NLP position. Please turn on NLP for getting a NLP location."

    invoke-static {p0, v0, p1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p0

    .line 226
    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    goto :goto_0

    .line 228
    :cond_0
    new-instance p1, Lcom/mediatek/lbs/em2/ui/LbsNlp$GeolocationThread;

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-direct {p1, v0}, Lcom/mediatek/lbs/em2/ui/LbsNlp$GeolocationThread;-><init>(Lcom/mediatek/lbs/em2/ui/LbsNlp;)V

    .line 229
    invoke-virtual {p1}, Lcom/mediatek/lbs/em2/ui/LbsNlp$GeolocationThread;->getGeolocation()V

    .line 230
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->access$800(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Landroid/widget/TextView;

    move-result-object p0

    const-string p1, "Waiting..."

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :goto_0
    return-void
.end method
