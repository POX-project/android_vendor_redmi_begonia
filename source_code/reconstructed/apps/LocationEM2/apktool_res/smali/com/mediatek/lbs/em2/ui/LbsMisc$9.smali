.class Lcom/mediatek/lbs/em2/ui/LbsMisc$9;
.super Ljava/lang/Object;
.source "LbsMisc.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsMisc;->onCreate(Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsMisc;)V
    .locals 0

    .line 235
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 0

    .line 238
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$1000(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/widget/CheckBox;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 239
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$1100(Lcom/mediatek/lbs/em2/ui/LbsMisc;Landroid/content/Context;)V

    goto :goto_0

    .line 241
    :cond_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$9;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$1200(Lcom/mediatek/lbs/em2/ui/LbsMisc;Landroid/content/Context;)V

    :goto_0
    return-void
.end method
