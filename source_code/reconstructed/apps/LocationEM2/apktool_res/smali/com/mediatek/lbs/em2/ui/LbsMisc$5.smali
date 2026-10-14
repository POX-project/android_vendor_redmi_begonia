.class Lcom/mediatek/lbs/em2/ui/LbsMisc$5;
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

    .line 178
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 5

    .line 180
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$300(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/widget/ToggleButton;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/ToggleButton;->isChecked()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 182
    :try_start_0
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$200(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/widget/EditText;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    .line 183
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$100(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/widget/EditText;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v0

    if-lez v0, :cond_0

    if-ltz p1, :cond_0

    const v0, 0xffff

    if-gt p1, v0, :cond_0

    .line 187
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-static {v3}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$100(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/widget/EditText;

    move-result-object v3

    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    .line 188
    invoke-static {v4}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$500(Lcom/mediatek/lbs/em2/ui/LbsMisc;)I

    move-result v4

    invoke-direct {v1, v2, v3, p1, v4}, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;-><init>(Lcom/mediatek/lbs/em2/ui/LbsMisc;Ljava/lang/String;II)V

    .line 187
    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$402(Lcom/mediatek/lbs/em2/ui/LbsMisc;Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;)Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;

    .line 189
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$400(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->start()V

    goto :goto_0

    .line 185
    :cond_0
    new-instance p1, Ljava/lang/NumberFormatException;

    invoke-direct {p1}, Ljava/lang/NumberFormatException;-><init>()V

    throw p1
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 191
    :catch_0
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-virtual {p1}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    const-string v0, "ERR: Parameters error!!"

    const/4 v1, 0x0

    invoke-static {p1, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p1

    .line 192
    invoke-virtual {p1}, Landroid/widget/Toast;->show()V

    .line 193
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$300(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/widget/ToggleButton;

    move-result-object p1

    invoke-virtual {p1, v1}, Landroid/widget/ToggleButton;->setChecked(Z)V

    .line 196
    :goto_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$508(Lcom/mediatek/lbs/em2/ui/LbsMisc;)I

    goto :goto_1

    .line 198
    :cond_1
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$400(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->stop()V

    :goto_1
    return-void
.end method
