.class Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;
.super Ljava/lang/Object;
.source "MDLogFiltersActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    .line 333
    iput-object p1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 6
    .param p1, "v"    # Landroid/view/View;

    .line 336
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$300(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)Landroid/widget/Button;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 337
    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.intent.action.GET_CONTENT"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 338
    .local v0, "it":Landroid/content/Intent;
    const-string v1, "*/*"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setType(Ljava/lang/String;)Landroid/content/Intent;

    .line 339
    iget-object v1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    const/4 v2, 0x1

    invoke-virtual {v1, v0, v2}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->startActivityForResult(Landroid/content/Intent;I)V

    .line 340
    .end local v0    # "it":Landroid/content/Intent;
    goto :goto_1

    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$400(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)Landroid/widget/Button;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    .line 342
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$500(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)Landroid/widget/RadioGroup;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/RadioGroup;->getCheckedRadioButtonId()I

    move-result v0

    .line 343
    .local v0, "btnID":I
    iget-object v2, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-virtual {v2, v0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RadioButton;

    .line 344
    .local v2, "rb":Landroid/widget/RadioButton;
    if-eqz v2, :cond_1

    .line 345
    invoke-virtual {v2}, Landroid/widget/RadioButton;->getTag()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FilterInfo;

    .line 346
    .local v3, "fileFilter":Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FilterInfo;
    iget-object v4, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FilterInfo;->getBinName()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$602(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;Ljava/lang/String;)Ljava/lang/String;

    .line 347
    .end local v3    # "fileFilter":Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FilterInfo;
    nop

    .line 354
    iget-object v3, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$700(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;Z)V

    .line 355
    new-instance v1, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2$1;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2$1;-><init>(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;)V

    .line 370
    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2$1;->start()V

    .end local v0    # "btnID":I
    .end local v2    # "rb":Landroid/widget/RadioButton;
    goto :goto_0

    .line 348
    .restart local v0    # "btnID":I
    .restart local v2    # "rb":Landroid/widget/RadioButton;
    :cond_1
    iget-object v3, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    const v4, 0x7f0a0407

    invoke-static {v3, v4, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v1

    .line 350
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 351
    return-void

    .line 372
    .end local v0    # "btnID":I
    .end local v2    # "rb":Landroid/widget/RadioButton;
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$1100(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)Landroid/widget/Button;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 373
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;->this$0:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->access$700(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;Z)V

    .line 374
    new-instance v0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2$2;-><init>(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;)V

    .line 381
    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2$2;->start()V

    goto :goto_1

    .line 372
    :cond_3
    :goto_0
    nop

    .line 383
    :goto_1
    return-void
.end method
