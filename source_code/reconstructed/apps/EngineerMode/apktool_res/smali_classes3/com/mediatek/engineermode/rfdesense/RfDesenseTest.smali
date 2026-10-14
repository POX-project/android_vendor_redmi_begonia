.class public Lcom/mediatek/engineermode/rfdesense/RfDesenseTest;
.super Landroid/app/Activity;
.source "RfDesenseTest.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemClickListener;


# static fields
.field public static final TAG:Ljava/lang/String; = "RfDesense/TestMenu"


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
    const v0, 0x7f0800cc

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTest;->setContentView(I)V

    .line 63
    const v0, 0x7f060533

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTest;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ListView;

    .line 65
    .local v0, "simTypeListView":Landroid/widget/ListView;
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 66
    .local v1, "items":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    const v2, 0x7f0a0551

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTest;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 67
    const v2, 0x7f0a052e

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTest;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 68
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is95Modem()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 69
    const v2, 0x7f0a0556

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTest;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 71
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is97Modem()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 72
    const v2, 0x7f0a0525

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTest;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 74
    :cond_1
    new-instance v2, Landroid/widget/ArrayAdapter;

    const v3, 0x1090003

    invoke-direct {v2, p0, v3, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;ILjava/util/List;)V

    .line 76
    .local v2, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    invoke-virtual {v0, v2}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 77
    invoke-virtual {v0, p0}, Landroid/widget/ListView;->setOnItemClickListener(Landroid/widget/AdapterView$OnItemClickListener;)V

    .line 78
    return-void
.end method

.method public onItemClick(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 2
    .param p2, "view"    # Landroid/view/View;
    .param p3, "position"    # I
    .param p4, "id"    # J
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;",
            "Landroid/view/View;",
            "IJ)V"
        }
    .end annotation

    .line 82
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 83
    .local v0, "intent":Landroid/content/Intent;
    if-eqz p3, :cond_5

    const/4 v1, 0x1

    if-eq p3, v1, :cond_4

    const/4 v1, 0x2

    if-eq p3, v1, :cond_1

    const/4 v1, 0x3

    if-eq p3, v1, :cond_0

    goto :goto_1

    .line 101
    :cond_0
    const-class v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-virtual {v0, p0, v1}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    .line 102
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTest;->startActivity(Landroid/content/Intent;)V

    .line 103
    goto :goto_1

    .line 93
    :cond_1
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is95Modem()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 94
    const-class v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLteCA;

    invoke-virtual {v0, p0, v1}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    goto :goto_0

    .line 95
    :cond_2
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is97Modem()Z

    move-result v1

    if-eqz v1, :cond_3

    .line 96
    const-class v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-virtual {v0, p0, v1}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    .line 98
    :cond_3
    :goto_0
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTest;->startActivity(Landroid/content/Intent;)V

    .line 99
    goto :goto_1

    .line 89
    :cond_4
    const-class v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseGsmPowerControl;

    invoke-virtual {v0, p0, v1}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    .line 90
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTest;->startActivity(Landroid/content/Intent;)V

    .line 91
    goto :goto_1

    .line 85
    :cond_5
    const-class v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-virtual {v0, p0, v1}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    .line 86
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTest;->startActivity(Landroid/content/Intent;)V

    .line 87
    nop

    .line 107
    :goto_1
    return-void
.end method
