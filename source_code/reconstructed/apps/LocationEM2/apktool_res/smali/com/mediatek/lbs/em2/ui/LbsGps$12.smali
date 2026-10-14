.class Lcom/mediatek/lbs/em2/ui/LbsGps$12;
.super Ljava/lang/Object;
.source "LbsGps.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsGps;->initWidget()V
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

    .line 402
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$12;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 0

    .line 404
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$12;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$1500(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/CheckBox;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p1

    invoke-static {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$1402(Lcom/mediatek/lbs/em2/ui/LbsGps;Z)Z

    return-void
.end method
