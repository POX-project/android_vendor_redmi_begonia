.class Lcom/mediatek/engineermode/hqanfc/PollingLoopMode$4;
.super Ljava/lang/Object;
.source "PollingLoopMode.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    .line 277
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode$4;->this$0:Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 4
    .param p1, "arg0"    # Landroid/view/View;

    .line 281
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[PollingLoopMode]onClick button view is "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object v1, p1

    check-cast v1, Landroid/widget/Button;

    invoke-virtual {v1}, Landroid/widget/Button;->getText()Ljava/lang/CharSequence;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Nfc"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 282
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode$4;->this$0:Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->access$400(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Landroid/widget/Button;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_1

    .line 283
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode$4;->this$0:Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->access$2000(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 284
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode$4;->this$0:Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    const v2, 0x7f0a036c

    invoke-static {v0, v2, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    goto/16 :goto_0

    .line 286
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode$4;->this$0:Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->showDialog(I)V

    .line 287
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode$4;->this$0:Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->access$400(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Landroid/widget/Button;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/Button;->getText()Ljava/lang/CharSequence;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode$4;->this$0:Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    const v3, 0x7f0a0383

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->access$2100(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;Ljava/lang/Boolean;)V

    goto :goto_0

    .line 289
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode$4;->this$0:Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->access$2200(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Landroid/widget/Button;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 290
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode$4;->this$0:Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->access$2300(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;Z)V

    goto :goto_0

    .line 291
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode$4;->this$0:Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->access$2400(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Landroid/widget/Button;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 292
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode$4;->this$0:Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->access$2300(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;Z)V

    goto :goto_0

    .line 293
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode$4;->this$0:Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->access$2500(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Landroid/widget/Button;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 294
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode$4;->this$0:Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->onBackPressed()V

    goto :goto_0

    .line 295
    :cond_4
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode$4;->this$0:Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->access$2600(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Landroid/widget/Button;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 296
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode$4;->this$0:Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->access$2100(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;Ljava/lang/Boolean;)V

    .line 297
    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.intent.action.MAIN"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 298
    .local v0, "intent":Landroid/content/Intent;
    const/high16 v1, 0x10000000

    invoke-virtual {v0, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 299
    const-string v1, "android.intent.category.HOME"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->addCategory(Ljava/lang/String;)Landroid/content/Intent;

    .line 300
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode$4;->this$0:Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->startActivity(Landroid/content/Intent;)V

    .line 302
    .end local v0    # "intent":Landroid/content/Intent;
    :cond_5
    :goto_0
    return-void
.end method
