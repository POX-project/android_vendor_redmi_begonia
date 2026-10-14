.class public Lcom/mediatek/engineermode/apc/ApcFeatureSimType;
.super Landroid/app/Activity;
.source "ApcFeatureSimType.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemClickListener;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 54
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 4
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 59
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 60
    const v0, 0x7f08000c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/apc/ApcFeatureSimType;->setContentView(I)V

    .line 61
    const v0, 0x7f060074

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/apc/ApcFeatureSimType;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ListView;

    .line 63
    .local v0, "simTypeListView":Landroid/widget/ListView;
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 64
    .local v1, "items":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    const v2, 0x7f0a047f

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/apc/ApcFeatureSimType;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 65
    const v2, 0x7f0a0480

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/apc/ApcFeatureSimType;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 67
    new-instance v2, Landroid/widget/ArrayAdapter;

    const v3, 0x1090003

    invoke-direct {v2, p0, v3, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;ILjava/util/List;)V

    .line 69
    .local v2, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    invoke-virtual {v0, v2}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 70
    invoke-virtual {v0, p0}, Landroid/widget/ListView;->setOnItemClickListener(Landroid/widget/AdapterView$OnItemClickListener;)V

    .line 71
    return-void
.end method

.method public onItemClick(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 4
    .param p2, "arg1"    # Landroid/view/View;
    .param p3, "position"    # I
    .param p4, "arg3"    # J
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;",
            "Landroid/view/View;",
            "IJ)V"
        }
    .end annotation

    .line 74
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 76
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "mSimType"

    const-string v2, "com.mediatek.engineermode.apc.ApcFeature"

    if-eqz p3, :cond_1

    const/4 v3, 0x1

    if-eq p3, v3, :cond_0

    goto :goto_0

    .line 84
    :cond_0
    invoke-virtual {v0, p0, v2}, Landroid/content/Intent;->setClassName(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    .line 86
    const/4 v2, 0x1

    .line 87
    .local v2, "simType":I
    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 88
    goto :goto_0

    .line 78
    .end local v2    # "simType":I
    :cond_1
    invoke-virtual {v0, p0, v2}, Landroid/content/Intent;->setClassName(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    .line 80
    const/4 v2, 0x0

    .line 81
    .restart local v2    # "simType":I
    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 82
    nop

    .line 93
    .end local v2    # "simType":I
    :goto_0
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/apc/ApcFeatureSimType;->startActivity(Landroid/content/Intent;)V

    .line 94
    return-void
.end method
