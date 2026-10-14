.class Lcom/mediatek/lbs/em2/ui/LbsMisc$8;
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

    .line 226
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 1

    .line 229
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$900(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/location/LocationManager;

    move-result-object p1

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    .line 230
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$800(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/widget/CheckBox;

    move-result-object p0

    invoke-virtual {p0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p0

    .line 231
    invoke-static {}, Landroid/os/Process;->myUserHandle()Landroid/os/UserHandle;

    move-result-object v0

    .line 229
    invoke-virtual {p1, p0, v0}, Landroid/location/LocationManager;->setLocationEnabledForUser(ZLandroid/os/UserHandle;)V

    return-void
.end method
