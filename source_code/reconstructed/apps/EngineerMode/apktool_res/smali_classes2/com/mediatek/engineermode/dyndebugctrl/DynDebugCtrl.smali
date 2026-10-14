.class public Lcom/mediatek/engineermode/dyndebugctrl/DynDebugCtrl;
.super Landroid/app/Activity;
.source "DynDebugCtrl.java"


# static fields
.field private static final PROPERY_NAME:Ljava/lang/String; = "persist.vendor.em.dy.debug"

.field private static final VALUE_DISABLE:Ljava/lang/String; = "0"

.field private static final VALUE_ENABLE:Ljava/lang/String; = "1"


# instance fields
.field private mCbEnable:Landroid/widget/CheckBox;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 18
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/dyndebugctrl/DynDebugCtrl;)Landroid/widget/CheckBox;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/dyndebugctrl/DynDebugCtrl;

    .line 18
    iget-object v0, p0, Lcom/mediatek/engineermode/dyndebugctrl/DynDebugCtrl;->mCbEnable:Landroid/widget/CheckBox;

    return-object v0
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 2
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 27
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 28
    const v0, 0x7f08004c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/dyndebugctrl/DynDebugCtrl;->setContentView(I)V

    .line 29
    const v0, 0x7f060342

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/dyndebugctrl/DynDebugCtrl;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/dyndebugctrl/DynDebugCtrl;->mCbEnable:Landroid/widget/CheckBox;

    .line 30
    new-instance v1, Lcom/mediatek/engineermode/dyndebugctrl/DynDebugCtrl$1;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/dyndebugctrl/DynDebugCtrl$1;-><init>(Lcom/mediatek/engineermode/dyndebugctrl/DynDebugCtrl;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 43
    return-void
.end method

.method protected onResume()V
    .locals 2

    .line 48
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 49
    const-string v0, "persist.vendor.em.dy.debug"

    const-string v1, "0"

    invoke-static {v0, v1}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "1"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    .line 50
    .local v0, "isEnable":Z
    iget-object v1, p0, Lcom/mediatek/engineermode/dyndebugctrl/DynDebugCtrl;->mCbEnable:Landroid/widget/CheckBox;

    invoke-virtual {v1, v0}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 51
    return-void
.end method
