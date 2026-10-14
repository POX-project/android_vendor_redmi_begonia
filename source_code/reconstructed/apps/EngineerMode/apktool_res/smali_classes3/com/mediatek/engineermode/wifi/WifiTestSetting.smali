.class public Lcom/mediatek/engineermode/wifi/WifiTestSetting;
.super Landroid/app/ListActivity;
.source "WifiTestSetting.java"


# static fields
.field public static final CTIA_TEST:Ljava/lang/String; = "mtk_wifi_ctia_test"

.field private static final DIALOG_WIFI_CTIA:I = 0x1


# instance fields
.field private mItemList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 53
    invoke-direct {p0}, Landroid/app/ListActivity;-><init>()V

    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 59
    invoke-super {p0, p1}, Landroid/app/ListActivity;->onCreate(Landroid/os/Bundle;)V

    .line 60
    const v0, 0x7f08010a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WifiTestSetting;->setContentView(I)V

    .line 61
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiTestSetting;->mItemList:Ljava/util/ArrayList;

    .line 62
    const v1, 0x7f0a0711

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WifiTestSetting;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 63
    new-instance v0, Landroid/widget/ArrayAdapter;

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WifiTestSetting;->mItemList:Ljava/util/ArrayList;

    const v2, 0x1090003

    invoke-direct {v0, p0, v2, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;ILjava/util/List;)V

    .line 65
    .local v0, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WifiTestSetting;->setListAdapter(Landroid/widget/ListAdapter;)V

    .line 66
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 2
    .param p1, "id"    # I

    .line 79
    const/4 v0, 0x0

    .line 80
    .local v0, "dialog":Landroid/app/Dialog;
    const/4 v1, 0x1

    if-ne p1, v1, :cond_0

    .line 81
    new-instance v1, Lcom/mediatek/engineermode/wifi/MtkCTIATestDialog;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/wifi/MtkCTIATestDialog;-><init>(Landroid/content/Context;)V

    move-object v0, v1

    .line 83
    :cond_0
    return-object v0
.end method

.method protected onListItemClick(Landroid/widget/ListView;Landroid/view/View;IJ)V
    .locals 2
    .param p1, "l"    # Landroid/widget/ListView;
    .param p2, "v"    # Landroid/view/View;
    .param p3, "position"    # I
    .param p4, "id"    # J

    .line 71
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiTestSetting;->mItemList:Ljava/util/ArrayList;

    invoke-virtual {v0, p3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    const v1, 0x7f0a0711

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WifiTestSetting;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 72
    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WifiTestSetting;->removeDialog(I)V

    .line 73
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WifiTestSetting;->showDialog(I)V

    .line 75
    :cond_0
    return-void
.end method

.method protected onPause()V
    .locals 1

    .line 88
    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WifiTestSetting;->removeDialog(I)V

    .line 89
    invoke-super {p0}, Landroid/app/ListActivity;->onPause()V

    .line 90
    return-void
.end method
