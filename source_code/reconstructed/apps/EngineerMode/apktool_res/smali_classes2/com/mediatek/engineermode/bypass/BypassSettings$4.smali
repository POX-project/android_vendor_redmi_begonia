.class Lcom/mediatek/engineermode/bypass/BypassSettings$4;
.super Ljava/lang/Object;
.source "BypassSettings.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bypass/BypassSettings;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/bypass/BypassSettings;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/bypass/BypassSettings;

    .line 281
    iput-object p1, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$4;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2
    .param p1, "v"    # Landroid/view/View;

    .line 284
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "isChecked "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object v1, p1

    check-cast v1, Landroid/widget/CheckBox;

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BypassSettings"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 285
    iget-object v0, p0, Lcom/mediatek/engineermode/bypass/BypassSettings$4;->this$0:Lcom/mediatek/engineermode/bypass/BypassSettings;

    invoke-static {v0}, Lcom/mediatek/engineermode/bypass/BypassSettings;->access$2200(Lcom/mediatek/engineermode/bypass/BypassSettings;)V

    .line 286
    const-string v0, "reboot to make change available"

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 287
    return-void
.end method
