.class Lcom/mediatek/ygps/YgpsActivity$3;
.super Ljava/lang/Object;
.source "YgpsActivity.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/ygps/YgpsActivity;->setSlLocLayout()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/ygps/YgpsActivity;

.field final synthetic val$glSummary:Landroid/widget/GridLayout;


# direct methods
.method constructor <init>(Lcom/mediatek/ygps/YgpsActivity;Landroid/widget/GridLayout;)V
    .locals 0

    .line 346
    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$3;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    iput-object p2, p0, Lcom/mediatek/ygps/YgpsActivity$3;->val$glSummary:Landroid/widget/GridLayout;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 11

    .line 351
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$3;->val$glSummary:Landroid/widget/GridLayout;

    invoke-virtual {v0}, Landroid/widget/GridLayout;->getColumnCount()I

    move-result v0

    .line 352
    iget-object v1, p0, Lcom/mediatek/ygps/YgpsActivity$3;->val$glSummary:Landroid/widget/GridLayout;

    invoke-virtual {v1}, Landroid/widget/GridLayout;->getWidth()I

    move-result v1

    div-int/2addr v1, v0

    .line 353
    invoke-static {}, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->values()[Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    move-result-object v2

    const/4 v3, 0x0

    .line 354
    :goto_0
    array-length v4, v2

    if-ge v3, v4, :cond_0

    .line 355
    aget-object v4, v2, v3

    mul-int/lit8 v5, v3, 0x2

    .line 356
    div-int v6, v5, v0

    invoke-static {v6}, Landroid/widget/GridLayout;->spec(I)Landroid/widget/GridLayout$Spec;

    move-result-object v7

    .line 357
    rem-int/2addr v5, v0

    invoke-static {v5}, Landroid/widget/GridLayout;->spec(I)Landroid/widget/GridLayout$Spec;

    move-result-object v8

    .line 358
    new-instance v9, Landroid/widget/GridLayout$LayoutParams;

    invoke-direct {v9, v7, v8}, Landroid/widget/GridLayout$LayoutParams;-><init>(Landroid/widget/GridLayout$Spec;Landroid/widget/GridLayout$Spec;)V

    .line 360
    new-instance v7, Landroid/widget/TextView;

    iget-object v8, p0, Lcom/mediatek/ygps/YgpsActivity$3;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-direct {v7, v8}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 361
    invoke-virtual {v4}, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->getName()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 362
    invoke-virtual {v7, v1}, Landroid/widget/TextView;->setWidth(I)V

    const/16 v8, 0x32

    .line 363
    invoke-virtual {v7, v8}, Landroid/widget/TextView;->setHeight(I)V

    .line 364
    iget-object v10, p0, Lcom/mediatek/ygps/YgpsActivity$3;->val$glSummary:Landroid/widget/GridLayout;

    invoke-virtual {v10, v7, v9}, Landroid/widget/GridLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 366
    invoke-static {v6}, Landroid/widget/GridLayout;->spec(I)Landroid/widget/GridLayout$Spec;

    move-result-object v6

    add-int/lit8 v5, v5, 0x1

    .line 367
    invoke-static {v5}, Landroid/widget/GridLayout;->spec(I)Landroid/widget/GridLayout$Spec;

    move-result-object v5

    .line 368
    new-instance v7, Landroid/widget/GridLayout$LayoutParams;

    invoke-direct {v7, v6, v5}, Landroid/widget/GridLayout$LayoutParams;-><init>(Landroid/widget/GridLayout$Spec;Landroid/widget/GridLayout$Spec;)V

    .line 369
    new-instance v5, Landroid/widget/TextView;

    iget-object v6, p0, Lcom/mediatek/ygps/YgpsActivity$3;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-direct {v5, v6}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 370
    invoke-virtual {v4}, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->getColor()I

    move-result v4

    invoke-virtual {v5, v4}, Landroid/widget/TextView;->setBackgroundColor(I)V

    .line 371
    invoke-virtual {v5, v1}, Landroid/widget/TextView;->setWidth(I)V

    .line 372
    invoke-virtual {v5, v8}, Landroid/widget/TextView;->setHeight(I)V

    .line 373
    iget-object v4, p0, Lcom/mediatek/ygps/YgpsActivity$3;->val$glSummary:Landroid/widget/GridLayout;

    invoke-virtual {v4, v5, v7}, Landroid/widget/GridLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method
