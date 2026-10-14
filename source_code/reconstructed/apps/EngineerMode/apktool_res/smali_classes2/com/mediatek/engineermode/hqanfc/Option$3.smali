.class Lcom/mediatek/engineermode/hqanfc/Option$3;
.super Ljava/lang/Object;
.source "Option.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/hqanfc/Option;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/hqanfc/Option;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/hqanfc/Option;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/hqanfc/Option;

    .line 84
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/Option$3;->this$0:Lcom/mediatek/engineermode/hqanfc/Option;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2
    .param p1, "arg0"    # Landroid/view/View;

    .line 88
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[Option]onClick button view is "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object v1, p1

    check-cast v1, Landroid/widget/Button;

    .line 89
    invoke-virtual {v1}, Landroid/widget/Button;->getText()Ljava/lang/CharSequence;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 88
    const-string v1, "Nfc"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 90
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/Option$3;->this$0:Lcom/mediatek/engineermode/hqanfc/Option;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/Option;->access$300(Lcom/mediatek/engineermode/hqanfc/Option;)Landroid/widget/Button;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 91
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/Option$3;->this$0:Lcom/mediatek/engineermode/hqanfc/Option;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/hqanfc/Option;->showDialog(I)V

    .line 92
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/Option$3;->this$0:Lcom/mediatek/engineermode/hqanfc/Option;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/Option;->access$400(Lcom/mediatek/engineermode/hqanfc/Option;)V

    goto :goto_0

    .line 93
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/Option$3;->this$0:Lcom/mediatek/engineermode/hqanfc/Option;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/Option;->access$500(Lcom/mediatek/engineermode/hqanfc/Option;)Landroid/widget/Button;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 94
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/Option$3;->this$0:Lcom/mediatek/engineermode/hqanfc/Option;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/hqanfc/Option;->onBackPressed()V

    .line 96
    :cond_1
    :goto_0
    return-void
.end method
