.class Lcom/mediatek/lbs/em2/ui/LbsFlow$DelayShowHandler;
.super Landroid/os/Handler;
.source "LbsFlow.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsFlow;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "DelayShowHandler"
.end annotation


# instance fields
.field protected stringList:Lcom/mediatek/lbs/em2/ui/StringList;

.field protected textViewMessage:Landroid/widget/TextView;


# direct methods
.method public constructor <init>(Lcom/mediatek/lbs/em2/ui/StringList;Landroid/widget/TextView;)V
    .locals 0

    .line 111
    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    .line 112
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow$DelayShowHandler;->stringList:Lcom/mediatek/lbs/em2/ui/StringList;

    .line 113
    iput-object p2, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow$DelayShowHandler;->textViewMessage:Landroid/widget/TextView;

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 1

    .line 118
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow$DelayShowHandler;->textViewMessage:Landroid/widget/TextView;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow$DelayShowHandler;->stringList:Lcom/mediatek/lbs/em2/ui/StringList;

    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/StringList;->get()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/Html;->fromHtml(Ljava/lang/String;)Landroid/text/Spanned;

    move-result-object p0

    sget-object v0, Landroid/widget/TextView$BufferType;->SPANNABLE:Landroid/widget/TextView$BufferType;

    invoke-virtual {p1, p0, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V

    return-void
.end method
