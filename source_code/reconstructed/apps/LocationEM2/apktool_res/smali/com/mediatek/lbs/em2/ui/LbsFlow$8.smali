.class Lcom/mediatek/lbs/em2/ui/LbsFlow$8;
.super Ljava/lang/Object;
.source "LbsFlow.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsFlow;->addOnClickListener()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsFlow;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsFlow;)V
    .locals 0

    .line 205
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsFlow;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 1

    .line 208
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsFlow;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsFlow;->stringList:Lcom/mediatek/lbs/em2/ui/StringList;

    invoke-virtual {p1}, Lcom/mediatek/lbs/em2/ui/StringList;->clear()V

    .line 209
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsFlow;

    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->textViewMessage:Landroid/widget/TextView;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->stringList:Lcom/mediatek/lbs/em2/ui/StringList;

    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/StringList;->get()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/Html;->fromHtml(Ljava/lang/String;)Landroid/text/Spanned;

    move-result-object p0

    sget-object v0, Landroid/widget/TextView$BufferType;->SPANNABLE:Landroid/widget/TextView$BufferType;

    invoke-virtual {p1, p0, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V

    return-void
.end method
