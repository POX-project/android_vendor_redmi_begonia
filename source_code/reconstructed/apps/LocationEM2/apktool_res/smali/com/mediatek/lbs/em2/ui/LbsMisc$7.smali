.class Lcom/mediatek/lbs/em2/ui/LbsMisc$7;
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

    .line 208
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 5

    .line 211
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    const-string v0, "locationem2.data"

    const/4 v1, 0x0

    .line 212
    invoke-virtual {p1, v0, v1}, Landroid/app/Activity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p1

    .line 213
    invoke-interface {p1}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p1

    .line 214
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$700(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/widget/CheckBox;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    const-string v2, "launchForegroundService"

    if-eqz v0, :cond_0

    .line 216
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    const-class v3, Lcom/mediatek/lbs/em2/ui/LocationEMService;

    invoke-virtual {v1, p0, v3}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    move-result-object p0

    invoke-virtual {v0, p0}, Landroid/app/Activity;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;

    const/4 p0, 0x1

    .line 217
    invoke-interface {p1, v2, p0}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    goto :goto_0

    .line 220
    :cond_0
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    new-instance v3, Landroid/content/Intent;

    invoke-direct {v3}, Landroid/content/Intent;-><init>()V

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    const-class v4, Lcom/mediatek/lbs/em2/ui/LocationEMService;

    invoke-virtual {v3, p0, v4}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    move-result-object p0

    invoke-virtual {v0, p0}, Landroid/app/Activity;->stopService(Landroid/content/Intent;)Z

    .line 221
    invoke-interface {p1, v2, v1}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    .line 223
    :goto_0
    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    return-void
.end method
