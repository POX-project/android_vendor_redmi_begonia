.class Lcom/mediatek/lbs/em2/ui/LbsGps$3;
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


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

.field final synthetic val$pkg:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsGps;Ljava/lang/String;)V
    .locals 0

    .line 241
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    iput-object p2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$3;->val$pkg:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 0

    .line 243
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$3;->val$pkg:Ljava/lang/String;

    invoke-static {p1, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$000(Lcom/mediatek/lbs/em2/ui/LbsGps;Ljava/lang/String;)V

    return-void
.end method
