.class public Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity$FragPagerAdapter;
.super Landroid/support/v4/app/FragmentPagerAdapter;
.source "IotConfigurationActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "FragPagerAdapter"
.end annotation


# instance fields
.field private mFragments:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/support/v4/app/Fragment;",
            ">;"
        }
    .end annotation
.end field

.field private mTitle:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field final synthetic this$0:Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;


# direct methods
.method public constructor <init>(Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;Landroid/support/v4/app/FragmentManager;Ljava/util/List;Ljava/util/List;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;
    .param p2, "fm"    # Landroid/support/v4/app/FragmentManager;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/support/v4/app/FragmentManager;",
            "Ljava/util/List<",
            "Landroid/support/v4/app/Fragment;",
            ">;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 65
    .local p3, "mFragments":Ljava/util/List;, "Ljava/util/List<Landroid/support/v4/app/Fragment;>;"
    .local p4, "title":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity$FragPagerAdapter;->this$0:Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;

    .line 66
    invoke-direct {p0, p2}, Landroid/support/v4/app/FragmentPagerAdapter;-><init>(Landroid/support/v4/app/FragmentManager;)V

    .line 68
    iput-object p3, p0, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity$FragPagerAdapter;->mFragments:Ljava/util/List;

    .line 69
    iput-object p4, p0, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity$FragPagerAdapter;->mTitle:Ljava/util/List;

    .line 70
    return-void
.end method


# virtual methods
.method public getCount()I
    .locals 1

    .line 81
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity$FragPagerAdapter;->mFragments:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    return v0
.end method

.method public getItem(I)Landroid/support/v4/app/Fragment;
    .locals 1
    .param p1, "arg0"    # I

    .line 75
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity$FragPagerAdapter;->mFragments:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/support/v4/app/Fragment;

    return-object v0
.end method

.method public getPageTitle(I)Ljava/lang/CharSequence;
    .locals 2
    .param p1, "position"    # I

    .line 87
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity$FragPagerAdapter;->this$0:Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;

    invoke-static {}, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->access$000()[I

    move-result-object v1

    aget v1, v1, p1

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
