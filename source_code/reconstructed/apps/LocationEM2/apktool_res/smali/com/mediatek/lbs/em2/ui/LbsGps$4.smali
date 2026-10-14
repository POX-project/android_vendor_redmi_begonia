.class Lcom/mediatek/lbs/em2/ui/LbsGps$4;
.super Ljava/lang/Object;
.source "LbsGps.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsGps;->isBackgroundPermissionGranted()Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V
    .locals 0

    .line 236
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 0

    .line 238
    invoke-interface {p1}, Landroid/content/DialogInterface;->cancel()V

    return-void
.end method
