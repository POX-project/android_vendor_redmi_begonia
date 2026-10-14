.class Lcom/mediatek/lbs/em2/ui/LbsGps$29;
.super Ljava/lang/Object;
.source "LbsGps.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsGps;->openDialogLatlng(Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

.field final synthetic val$dialog:Landroid/app/Dialog;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsGps;Landroid/app/Dialog;)V
    .locals 0

    .line 1048
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$29;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    iput-object p2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$29;->val$dialog:Landroid/app/Dialog;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 0

    .line 1050
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$29;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$6100(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    .line 1051
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$29;->val$dialog:Landroid/app/Dialog;

    invoke-virtual {p0}, Landroid/app/Dialog;->dismiss()V

    return-void
.end method
