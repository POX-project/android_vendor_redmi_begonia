.class Lcom/mediatek/lbs/em2/ui/LbsGps$7;
.super Ljava/lang/Object;
.source "LbsGps.java"

# interfaces
.implements Landroid/widget/PopupMenu$OnMenuItemClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsGps;->initWidget()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V
    .locals 0

    .line 352
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onMenuItemClick(Landroid/view/MenuItem;)Z
    .locals 1

    .line 355
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-interface {p1}, Landroid/view/MenuItem;->getItemId()I

    move-result p1

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$602(Lcom/mediatek/lbs/em2/ui/LbsGps;I)I

    .line 356
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$600(Lcom/mediatek/lbs/em2/ui/LbsGps;)I

    move-result p1

    if-nez p1, :cond_0

    .line 357
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$700(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;

    move-result-object p0

    const-string p1, "Hot Start"

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto/16 :goto_0

    .line 358
    :cond_0
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$600(Lcom/mediatek/lbs/em2/ui/LbsGps;)I

    move-result p1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_1

    .line 359
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$700(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;

    move-result-object p0

    const-string p1, "Warm Start"

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto/16 :goto_0

    .line 360
    :cond_1
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$600(Lcom/mediatek/lbs/em2/ui/LbsGps;)I

    move-result p1

    const/4 v0, 0x2

    if-ne p1, v0, :cond_2

    .line 361
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$700(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;

    move-result-object p0

    const-string p1, "Cold Start"

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto/16 :goto_0

    .line 362
    :cond_2
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$600(Lcom/mediatek/lbs/em2/ui/LbsGps;)I

    move-result p1

    const/4 v0, 0x3

    if-ne p1, v0, :cond_3

    .line 363
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$700(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;

    move-result-object p0

    const-string p1, "Full Start"

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    .line 364
    :cond_3
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$600(Lcom/mediatek/lbs/em2/ui/LbsGps;)I

    move-result p1

    const/4 v0, 0x4

    if-ne p1, v0, :cond_4

    .line 365
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$700(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;

    move-result-object p0

    const-string p1, "delete ALM, EPH"

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    .line 366
    :cond_4
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$600(Lcom/mediatek/lbs/em2/ui/LbsGps;)I

    move-result p1

    const/4 v0, 0x5

    if-ne p1, v0, :cond_5

    .line 367
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$700(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;

    move-result-object p0

    const-string p1, "delete EPH"

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    .line 368
    :cond_5
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$600(Lcom/mediatek/lbs/em2/ui/LbsGps;)I

    move-result p1

    const/4 v0, 0x6

    if-ne p1, v0, :cond_6

    .line 369
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$700(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;

    move-result-object p0

    const-string p1, "delete Time"

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    .line 370
    :cond_6
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$600(Lcom/mediatek/lbs/em2/ui/LbsGps;)I

    move-result p1

    const/4 v0, 0x7

    if-ne p1, v0, :cond_7

    .line 371
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$700(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;

    move-result-object p0

    const-string p1, "delete all except Time, ALM"

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    .line 372
    :cond_7
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$600(Lcom/mediatek/lbs/em2/ui/LbsGps;)I

    move-result p1

    const/16 v0, 0x8

    if-ne p1, v0, :cond_8

    .line 373
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$700(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;

    move-result-object p0

    const-string p1, "delete all except Time, ALM, EPO"

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_8
    :goto_0
    const/4 p0, 0x0

    return p0
.end method
