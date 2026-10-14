.class public Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;
.super Landroid/app/Activity;
.source "McfSimSelectActivity.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemClickListener;


# static fields
.field public static SHOW_CERTIFICATION_VIEW:I = 0x0

.field public static SHOW_GENERAL_VIEW:I = 0x0

.field private static final TAG:Ljava/lang/String; = "McfConfig/McfSimSelectActivity"


# instance fields
.field adapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field items:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field simTypeListView:Landroid/widget/ListView;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 59
    const/4 v0, -0x1

    sput v0, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->SHOW_GENERAL_VIEW:I

    .line 60
    const/4 v0, -0x2

    sput v0, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->SHOW_CERTIFICATION_VIEW:I

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 57
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 61
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->items:Ljava/util/ArrayList;

    .line 62
    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->simTypeListView:Landroid/widget/ListView;

    .line 63
    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->adapter:Landroid/widget/ArrayAdapter;

    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 66
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 67
    const v0, 0x7f08004b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->setContentView(I)V

    .line 68
    const v0, 0x7f060076

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ListView;

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->simTypeListView:Landroid/widget/ListView;

    .line 69
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->items:Ljava/util/ArrayList;

    .line 70
    new-instance v0, Landroid/widget/ArrayAdapter;

    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->items:Ljava/util/ArrayList;

    const v2, 0x1090003

    invoke-direct {v0, p0, v2, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;ILjava/util/List;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->adapter:Landroid/widget/ArrayAdapter;

    .line 72
    iget-object v1, p0, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->simTypeListView:Landroid/widget/ListView;

    invoke-virtual {v1, v0}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 73
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->simTypeListView:Landroid/widget/ListView;

    invoke-virtual {v0, p0}, Landroid/widget/ListView;->setOnItemClickListener(Landroid/widget/AdapterView$OnItemClickListener;)V

    .line 74
    return-void
.end method

.method public onItemClick(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 3
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

    .line 94
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 95
    .local v0, "intent":Landroid/content/Intent;
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is95Modem()Z

    move-result v1

    const-string v2, "McfConfig/McfSimSelectActivity"

    if-nez v1, :cond_1

    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is97Modem()Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    .line 100
    :cond_0
    const-string v1, "support modem < 95"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 101
    const-string v1, "com.mediatek.engineermode.mcfconfig.McfConfigActivity93"

    invoke-virtual {v0, p0, v1}, Landroid/content/Intent;->setClassName(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    goto :goto_1

    .line 96
    :cond_1
    :goto_0
    const-string v1, "support modem > 95"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 97
    const-string v1, "com.mediatek.engineermode.mcfconfig.McfConfigActivity"

    invoke-virtual {v0, p0, v1}, Landroid/content/Intent;->setClassName(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    .line 105
    :goto_1
    const-string v1, "mSimType"

    if-eqz p3, :cond_5

    const/4 v2, 0x1

    if-eq p3, v2, :cond_4

    const/4 v2, 0x2

    if-eq p3, v2, :cond_3

    const/4 v2, 0x3

    if-eq p3, v2, :cond_2

    goto :goto_2

    .line 118
    :cond_2
    sget v2, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->SHOW_CERTIFICATION_VIEW:I

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 119
    goto :goto_2

    .line 115
    :cond_3
    sget v2, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->SHOW_GENERAL_VIEW:I

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 116
    goto :goto_2

    .line 111
    :cond_4
    const/4 v2, 0x1

    .line 112
    .local v2, "simType":I
    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 113
    goto :goto_2

    .line 107
    .end local v2    # "simType":I
    :cond_5
    const/4 v2, 0x0

    .line 108
    .restart local v2    # "simType":I
    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 109
    nop

    .line 124
    .end local v2    # "simType":I
    :goto_2
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->startActivity(Landroid/content/Intent;)V

    .line 125
    return-void
.end method

.method protected onResume()V
    .locals 6

    .line 78
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 79
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->items:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    .line 80
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCapabilitySim()I

    move-result v0

    const v1, 0x7f0a041c

    const-string v2, "Sim2: "

    const v3, 0x7f0a041b

    const-string v4, "Sim1: "

    if-nez v0, :cond_0

    .line 81
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->items:Ljava/util/ArrayList;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 82
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->items:Ljava/util/ArrayList;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 83
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCapabilitySim()I

    move-result v0

    const/4 v5, 0x1

    if-ne v0, v5, :cond_1

    .line 84
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->items:Ljava/util/ArrayList;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 85
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->items:Ljava/util/ArrayList;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 87
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->items:Ljava/util/ArrayList;

    const-string v1, "General"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 88
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->items:Ljava/util/ArrayList;

    const-string v1, "Certification"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 89
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfSimSelectActivity;->adapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0}, Landroid/widget/ArrayAdapter;->notifyDataSetInvalidated()V

    .line 90
    return-void
.end method
