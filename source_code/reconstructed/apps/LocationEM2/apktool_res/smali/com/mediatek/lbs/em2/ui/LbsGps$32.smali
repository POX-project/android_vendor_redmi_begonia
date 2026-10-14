.class Lcom/mediatek/lbs/em2/ui/LbsGps$32;
.super Ljava/lang/Object;
.source "LbsGps.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsGps;->openBlackSvSelectDialog(ILjava/lang/String;)V
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

    .line 1337
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$32;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 4

    .line 1339
    check-cast p1, Landroid/widget/CheckBox;

    .line 1340
    invoke-virtual {p1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p1

    const/4 v0, 0x1

    move v1, v0

    :goto_0
    const/16 v2, 0x29

    if-ge v1, v2, :cond_0

    .line 1342
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$32;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {v2}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$6300(Lcom/mediatek/lbs/em2/ui/LbsGps;)[Landroid/widget/CheckBox;

    move-result-object v2

    aget-object v2, v2, v1

    xor-int/lit8 v3, p1, 0x1

    invoke-virtual {v2, v3}, Landroid/widget/CheckBox;->setEnabled(Z)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method
