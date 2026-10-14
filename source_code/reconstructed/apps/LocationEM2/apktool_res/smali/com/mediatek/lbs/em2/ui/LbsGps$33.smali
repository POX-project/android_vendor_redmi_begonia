.class Lcom/mediatek/lbs/em2/ui/LbsGps$33;
.super Ljava/lang/Object;
.source "LbsGps.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsGps;->showLogNmeaConfirmDialog()V
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

    .line 1393
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$33;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 0

    .line 1395
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$33;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$1500(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/CheckBox;

    move-result-object p1

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$33;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$5300(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/CheckBox;

    move-result-object p0

    invoke-virtual {p0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p0

    invoke-virtual {p1, p0}, Landroid/widget/CheckBox;->setEnabled(Z)V

    return-void
.end method
