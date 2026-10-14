.class public Lcom/mediatek/engineermode/wificalling/WifiCallingConfigActivity;
.super Landroid/app/Activity;
.source "WifiCallingConfigActivity.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemClickListener;


# static fields
.field private static TAG:Ljava/lang/String;


# instance fields
.field private itemListView:Landroid/widget/ListView;

.field private items:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 55
    const-string v0, "WifiCallingConfigActivity"

    sput-object v0, Lcom/mediatek/engineermode/wificalling/WifiCallingConfigActivity;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 53
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 62
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 63
    invoke-static {p0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    const v1, 0x7f08001d

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    .line 64
    .local v0, "view":Landroid/view/View;
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wificalling/WifiCallingConfigActivity;->setContentView(Landroid/view/View;)V

    .line 65
    const v1, 0x7f0601f5

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wificalling/WifiCallingConfigActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ListView;

    iput-object v1, p0, Lcom/mediatek/engineermode/wificalling/WifiCallingConfigActivity;->itemListView:Landroid/widget/ListView;

    .line 66
    return-void
.end method

.method public onItemClick(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 2
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

    .line 85
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 86
    .local v0, "intent":Landroid/content/Intent;
    if-eqz p3, :cond_1

    const/4 v1, 0x1

    if-eq p3, v1, :cond_0

    goto :goto_0

    .line 92
    :cond_0
    const-string v1, "com.mediatek.engineermode.epdgconfig.epdgConfigSimSelect"

    invoke-virtual {v0, p0, v1}, Landroid/content/Intent;->setClassName(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    .line 94
    goto :goto_0

    .line 88
    :cond_1
    const-string v1, "com.mediatek.engineermode.wificalling.EntitlementConfigActivity"

    invoke-virtual {v0, p0, v1}, Landroid/content/Intent;->setClassName(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    .line 90
    nop

    .line 98
    :goto_0
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wificalling/WifiCallingConfigActivity;->startActivity(Landroid/content/Intent;)V

    .line 99
    return-void
.end method

.method protected onResume()V
    .locals 3

    .line 70
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 71
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/wificalling/WifiCallingConfigActivity;->items:Ljava/util/ArrayList;

    .line 72
    const v1, 0x7f0a02f6

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wificalling/WifiCallingConfigActivity;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 73
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 74
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->isSupportWfc()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 75
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->isUserLoad()Z

    move-result v0

    if-nez v0, :cond_0

    .line 76
    iget-object v0, p0, Lcom/mediatek/engineermode/wificalling/WifiCallingConfigActivity;->items:Ljava/util/ArrayList;

    const v1, 0x7f0a02fb

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wificalling/WifiCallingConfigActivity;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 78
    :cond_0
    new-instance v0, Landroid/widget/ArrayAdapter;

    const v1, 0x1090003

    iget-object v2, p0, Lcom/mediatek/engineermode/wificalling/WifiCallingConfigActivity;->items:Ljava/util/ArrayList;

    invoke-direct {v0, p0, v1, v2}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;ILjava/util/List;)V

    .line 80
    .local v0, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    iget-object v1, p0, Lcom/mediatek/engineermode/wificalling/WifiCallingConfigActivity;->itemListView:Landroid/widget/ListView;

    invoke-virtual {v1, v0}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 81
    iget-object v1, p0, Lcom/mediatek/engineermode/wificalling/WifiCallingConfigActivity;->itemListView:Landroid/widget/ListView;

    invoke-virtual {v1, p0}, Landroid/widget/ListView;->setOnItemClickListener(Landroid/widget/AdapterView$OnItemClickListener;)V

    .line 82
    return-void
.end method
