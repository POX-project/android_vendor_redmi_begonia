.class public Lcom/mediatek/engineermode/networkselect/NetworkSelectSimType;
.super Landroid/app/Activity;
.source "NetworkSelectSimType.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemClickListener;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 56
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 4
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 61
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 62
    const v0, 0x7f0800a6

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectSimType;->setContentView(I)V

    .line 63
    const v0, 0x7f060074

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectSimType;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ListView;

    .line 65
    .local v0, "simTypeListView":Landroid/widget/ListView;
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 66
    .local v1, "items":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    const v2, 0x7f0a047f

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/networkselect/NetworkSelectSimType;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 67
    invoke-static {}, Landroid/telephony/TelephonyManager;->getDefault()Landroid/telephony/TelephonyManager;

    move-result-object v2

    invoke-virtual {v2}, Landroid/telephony/TelephonyManager;->getSimCount()I

    move-result v2

    const/4 v3, 0x1

    if-le v2, v3, :cond_0

    .line 68
    const v2, 0x7f0a0480

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/networkselect/NetworkSelectSimType;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 70
    :cond_0
    new-instance v2, Landroid/widget/ArrayAdapter;

    const v3, 0x1090003

    invoke-direct {v2, p0, v3, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;ILjava/util/List;)V

    .line 72
    .local v2, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    invoke-virtual {v0, v2}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 73
    invoke-virtual {v0, p0}, Landroid/widget/ListView;->setOnItemClickListener(Landroid/widget/AdapterView$OnItemClickListener;)V

    .line 74
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

    .line 77
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 79
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "com.mediatek.engineermode.networkselect.NetworkSelectActivity"

    .line 81
    .local v1, "className":Ljava/lang/String;
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 82
    const-string v1, "com.mediatek.engineermode.networkselect.NetworkSelectActivity93"

    .line 85
    :cond_0
    const-string v2, "mSimType"

    if-eqz p3, :cond_2

    const/4 v3, 0x1

    if-eq p3, v3, :cond_1

    goto :goto_0

    .line 92
    :cond_1
    invoke-virtual {v0, p0, v1}, Landroid/content/Intent;->setClassName(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    .line 93
    const/4 v3, 0x1

    .line 94
    .local v3, "simType":I
    invoke-virtual {v0, v2, v3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 95
    goto :goto_0

    .line 87
    .end local v3    # "simType":I
    :cond_2
    invoke-virtual {v0, p0, v1}, Landroid/content/Intent;->setClassName(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    .line 88
    const/4 v3, 0x0

    .line 89
    .restart local v3    # "simType":I
    invoke-virtual {v0, v2, v3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 90
    nop

    .line 100
    .end local v3    # "simType":I
    :goto_0
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectSimType;->startActivity(Landroid/content/Intent;)V

    .line 101
    return-void
.end method
