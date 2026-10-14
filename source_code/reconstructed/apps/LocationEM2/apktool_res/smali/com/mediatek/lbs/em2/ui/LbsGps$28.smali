.class Lcom/mediatek/lbs/em2/ui/LbsGps$28;
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
.field final synthetic val$dialog:Landroid/app/Dialog;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsGps;Landroid/app/Dialog;)V
    .locals 0

    .line 1043
    iput-object p2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$28;->val$dialog:Landroid/app/Dialog;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 0

    .line 1045
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$28;->val$dialog:Landroid/app/Dialog;

    invoke-virtual {p0}, Landroid/app/Dialog;->dismiss()V

    return-void
.end method
