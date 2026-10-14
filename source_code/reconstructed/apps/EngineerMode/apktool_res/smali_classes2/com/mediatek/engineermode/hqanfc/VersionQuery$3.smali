.class Lcom/mediatek/engineermode/hqanfc/VersionQuery$3;
.super Ljava/lang/Object;
.source "VersionQuery.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/hqanfc/VersionQuery;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/hqanfc/VersionQuery;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/hqanfc/VersionQuery;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/hqanfc/VersionQuery;

    .line 83
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/VersionQuery$3;->this$0:Lcom/mediatek/engineermode/hqanfc/VersionQuery;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2
    .param p1, "arg0"    # Landroid/view/View;

    .line 87
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[VersionQuery]onClick button view is "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object v1, p1

    check-cast v1, Landroid/widget/Button;

    .line 88
    invoke-virtual {v1}, Landroid/widget/Button;->getText()Ljava/lang/CharSequence;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 87
    const-string v1, "Nfc"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 89
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VersionQuery$3;->this$0:Lcom/mediatek/engineermode/hqanfc/VersionQuery;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/VersionQuery;->access$600(Lcom/mediatek/engineermode/hqanfc/VersionQuery;)Landroid/widget/Button;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 90
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VersionQuery$3;->this$0:Lcom/mediatek/engineermode/hqanfc/VersionQuery;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/hqanfc/VersionQuery;->onBackPressed()V

    .line 92
    :cond_0
    return-void
.end method
