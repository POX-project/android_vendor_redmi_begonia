.class Lcom/mediatek/lbs/em2/ui/LbsGps$1;
.super Ljava/lang/Object;
.source "LbsGps.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsGps;->isGPSProviderEnable()Z
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

    .line 203
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 0

    .line 205
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$1;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    new-instance p1, Landroid/content/Intent;

    const-string p2, "android.settings.LOCATION_SOURCE_SETTINGS"

    invoke-direct {p1, p2}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0, p1}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    return-void
.end method
