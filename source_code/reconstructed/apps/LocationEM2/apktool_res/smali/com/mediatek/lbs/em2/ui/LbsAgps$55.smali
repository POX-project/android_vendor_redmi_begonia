.class Lcom/mediatek/lbs/em2/ui/LbsAgps$55;
.super Ljava/lang/Object;
.source "LbsAgps.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsAgps;->addOnClickListener()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V
    .locals 0

    .line 880
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$55;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 3

    .line 883
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$55;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-boolean v0, p1, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mIsKValueUnit:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    .line 884
    iput-boolean v0, p1, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mIsKValueUnit:Z

    .line 886
    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewHAcc:Landroid/widget/TextView;

    .line 887
    invoke-virtual {p1}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object p1

    invoke-interface {p1}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object p1

    .line 886
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->calcKFromMeter(I)I

    move-result p1

    .line 888
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$55;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object v0, v0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewHAcc:Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, ""

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 889
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$55;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewVAcc:Landroid/widget/TextView;

    .line 890
    invoke-virtual {p1}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object p1

    invoke-interface {p1}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object p1

    .line 889
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->calcKFromMeter(I)I

    move-result p1

    .line 891
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$55;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewVAcc:Landroid/widget/TextView;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method
