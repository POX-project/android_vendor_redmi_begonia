.class public Lcom/mediatek/engineermode/networkinfo/NetworkInfoSimType;
.super Landroid/app/Activity;
.source "NetworkInfoSimType.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemClickListener;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 55
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 4
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 60
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 61
    const v0, 0x7f08004b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoSimType;->setContentView(I)V

    .line 62
    const v0, 0x7f060076

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoSimType;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ListView;

    .line 64
    .local v0, "simTypeListView":Landroid/widget/ListView;
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 65
    .local v1, "items":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    const v2, 0x7f0a047f

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoSimType;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 67
    const v2, 0x7f0a0480

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoSimType;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 69
    new-instance v2, Landroid/widget/ArrayAdapter;

    const v3, 0x1090003

    invoke-direct {v2, p0, v3, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;ILjava/util/List;)V

    .line 71
    .local v2, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    invoke-virtual {v0, v2}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 72
    invoke-virtual {v0, p0}, Landroid/widget/ListView;->setOnItemClickListener(Landroid/widget/AdapterView$OnItemClickListener;)V

    .line 73
    return-void
.end method

.method public onItemClick(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 5
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

    .line 88
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 90
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "com.mediatek.engineermode.networkinfo.CdmaNetworkInfo"

    const-string v2, "mSimType"

    const-string v3, "com.mediatek.engineermode.networkinfo.NetworkInfo"

    if-eqz p3, :cond_3

    const/4 v4, 0x1

    if-eq p3, v4, :cond_0

    goto :goto_4

    .line 104
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is90Modem()Z

    move-result v4

    if-nez v4, :cond_2

    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is3GOnlyModem()Z

    move-result v4

    if-eqz v4, :cond_1

    goto :goto_0

    .line 109
    :cond_1
    invoke-virtual {v0, p0, v1}, Landroid/content/Intent;->setClassName(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    goto :goto_1

    .line 105
    :cond_2
    :goto_0
    invoke-virtual {v0, p0, v3}, Landroid/content/Intent;->setClassName(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    .line 112
    :goto_1
    const/4 v1, 0x1

    .line 113
    .local v1, "simType":I
    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 114
    goto :goto_4

    .line 92
    .end local v1    # "simType":I
    :cond_3
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is90Modem()Z

    move-result v4

    if-nez v4, :cond_5

    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is3GOnlyModem()Z

    move-result v4

    if-eqz v4, :cond_4

    goto :goto_2

    .line 96
    :cond_4
    invoke-virtual {v0, p0, v1}, Landroid/content/Intent;->setClassName(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    goto :goto_3

    .line 93
    :cond_5
    :goto_2
    invoke-virtual {v0, p0, v3}, Landroid/content/Intent;->setClassName(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    .line 99
    :goto_3
    const/4 v1, 0x0

    .line 100
    .restart local v1    # "simType":I
    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 102
    nop

    .line 119
    .end local v1    # "simType":I
    :goto_4
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoSimType;->startActivity(Landroid/content/Intent;)V

    .line 120
    return-void
.end method
