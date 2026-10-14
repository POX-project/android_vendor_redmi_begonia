.class Lcom/mediatek/engineermode/dyndebugctrl/DynDebugCtrl$1;
.super Ljava/lang/Object;
.source "DynDebugCtrl.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/dyndebugctrl/DynDebugCtrl;->onCreate(Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/dyndebugctrl/DynDebugCtrl;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/dyndebugctrl/DynDebugCtrl;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/dyndebugctrl/DynDebugCtrl;

    .line 30
    iput-object p1, p0, Lcom/mediatek/engineermode/dyndebugctrl/DynDebugCtrl$1;->this$0:Lcom/mediatek/engineermode/dyndebugctrl/DynDebugCtrl;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 3
    .param p1, "v"    # Landroid/view/View;

    .line 36
    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    const-string v1, "persist.vendor.em.dy.debug"

    .line 37
    iget-object v2, p0, Lcom/mediatek/engineermode/dyndebugctrl/DynDebugCtrl$1;->this$0:Lcom/mediatek/engineermode/dyndebugctrl/DynDebugCtrl;

    invoke-static {v2}, Lcom/mediatek/engineermode/dyndebugctrl/DynDebugCtrl;->access$000(Lcom/mediatek/engineermode/dyndebugctrl/DynDebugCtrl;)Landroid/widget/CheckBox;

    move-result-object v2

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    if-eqz v2, :cond_0

    const-string v2, "1"

    goto :goto_0

    :cond_0
    const-string v2, "0"

    .line 36
    :goto_0
    invoke-interface {v0, v1, v2}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 40
    goto :goto_1

    .line 38
    :catch_0
    move-exception v0

    .line 39
    .local v0, "e":Landroid/os/RemoteException;
    invoke-virtual {v0}, Landroid/os/RemoteException;->printStackTrace()V

    .line 41
    .end local v0    # "e":Landroid/os/RemoteException;
    :goto_1
    return-void
.end method
