.class Lcom/mediatek/lbs/em2/ui/LbsMisc$4;
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

    .line 173
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 1

    .line 175
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    new-instance p1, Landroid/content/Intent;

    const-string v0, "android.settings.WIFI_SETTINGS"

    invoke-direct {p1, v0}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0, p1}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    return-void
.end method
