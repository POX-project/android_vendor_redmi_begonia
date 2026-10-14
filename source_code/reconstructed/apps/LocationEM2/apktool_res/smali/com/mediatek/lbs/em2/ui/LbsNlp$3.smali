.class Lcom/mediatek/lbs/em2/ui/LbsNlp$3;
.super Ljava/lang/Object;
.source "LbsNlp.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsNlp;->initUI()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsNlp;)V
    .locals 0

    .line 208
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 1

    .line 211
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->access$400(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Lcom/mediatek/lbs/em2/ui/StringList;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mediatek/lbs/em2/ui/StringList;->clear()V

    .line 212
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->access$500(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Lcom/mediatek/lbs/em2/ui/StringList;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mediatek/lbs/em2/ui/StringList;->clear()V

    .line 213
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->access$600(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Landroid/widget/TextView;

    move-result-object p1

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->access$400(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Lcom/mediatek/lbs/em2/ui/StringList;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/ui/StringList;->get()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 214
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->access$700(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Landroid/widget/TextView;

    move-result-object p1

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->access$500(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Lcom/mediatek/lbs/em2/ui/StringList;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/ui/StringList;->get()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 215
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNlp;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->access$800(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Landroid/widget/TextView;

    move-result-object p0

    const-string p1, ""

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method
