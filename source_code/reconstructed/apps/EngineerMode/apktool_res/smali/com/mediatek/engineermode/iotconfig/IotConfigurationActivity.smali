.class public Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;
.super Landroid/support/v4/app/FragmentActivity;
.source "IotConfigurationActivity.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity$FragPagerAdapter;
    }
.end annotation


# static fields
.field private static TAB_TITLE_IOT:[I

.field private static TAB_TITLE_IOT_NO_WFC:[I

.field private static TAB_TITLE_IOT_WFC:[I

.field private static TAG:Ljava/lang/String;


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

.field private mViewPager:Lcom/mediatek/engineermode/iotconfig/IotViewPager;

.field private pagerTitleStrip:Landroid/support/v4/view/PagerTitleStrip;

.field private titleList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 17
    const-string v0, "Iot/IotConfigurationActivity"

    sput-object v0, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->TAG:Ljava/lang/String;

    .line 18
    const/4 v0, 0x3

    new-array v0, v0, [I

    fill-array-data v0, :array_0

    sput-object v0, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->TAB_TITLE_IOT_WFC:[I

    .line 20
    const/4 v0, 0x2

    new-array v0, v0, [I

    fill-array-data v0, :array_1

    sput-object v0, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->TAB_TITLE_IOT_NO_WFC:[I

    return-void

    nop

    :array_0
    .array-data 4
        0x7f0a03d3
        0x7f0a03d2
        0x7f0a03d1
    .end array-data

    :array_1
    .array-data 4
        0x7f0a03d3
        0x7f0a03d1
    .end array-data
.end method

.method public constructor <init>()V
    .locals 0

    .line 16
    invoke-direct {p0}, Landroid/support/v4/app/FragmentActivity;-><init>()V

    return-void
.end method

.method static synthetic access$000()[I
    .locals 1

    .line 16
    sget-object v0, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->TAB_TITLE_IOT:[I

    return-object v0
.end method


# virtual methods
.method public isSupportWFC()Z
    .locals 1

    .line 53
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->isSupportWfc()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v0

    if-nez v0, :cond_0

    .line 54
    const/4 v0, 0x1

    return v0

    .line 56
    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 4
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 29
    invoke-super {p0, p1}, Landroid/support/v4/app/FragmentActivity;->onCreate(Landroid/os/Bundle;)V

    .line 30
    const v0, 0x7f08007d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->setContentView(I)V

    .line 32
    const v0, 0x7f060778

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/iotconfig/IotViewPager;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->mViewPager:Lcom/mediatek/engineermode/iotconfig/IotViewPager;

    .line 33
    const v0, 0x7f0605f2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/support/v4/view/PagerTitleStrip;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->pagerTitleStrip:Landroid/support/v4/view/PagerTitleStrip;

    .line 34
    const/16 v1, 0x64

    invoke-virtual {v0, v1}, Landroid/support/v4/view/PagerTitleStrip;->setTextSpacing(I)V

    .line 35
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->titleList:Ljava/util/List;

    .line 36
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->isSupportWFC()Z

    move-result v0

    if-eqz v0, :cond_0

    sget-object v0, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->TAB_TITLE_IOT_WFC:[I

    goto :goto_0

    :cond_0
    sget-object v0, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->TAB_TITLE_IOT_NO_WFC:[I

    :goto_0
    sput-object v0, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->TAB_TITLE_IOT:[I

    .line 37
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_1
    sget-object v1, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->TAB_TITLE_IOT:[I

    array-length v2, v1

    if-ge v0, v2, :cond_1

    .line 38
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->titleList:Ljava/util/List;

    aget v1, v1, v0

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v2, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 37
    add-int/lit8 v0, v0, 0x1

    goto :goto_1

    .line 40
    .end local v0    # "i":I
    :cond_1
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->mFragments:Ljava/util/List;

    .line 41
    new-instance v1, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;

    invoke-direct {v1}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;-><init>()V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 43
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->isSupportWFC()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 44
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->mFragments:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;

    invoke-direct {v1}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;-><init>()V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 46
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->mFragments:Ljava/util/List;

    new-instance v1, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-direct {v1}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;-><init>()V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 47
    new-instance v0, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity$FragPagerAdapter;

    .line 48
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->getSupportFragmentManager()Landroid/support/v4/app/FragmentManager;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->mFragments:Ljava/util/List;

    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->titleList:Ljava/util/List;

    invoke-direct {v0, p0, v1, v2, v3}, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity$FragPagerAdapter;-><init>(Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;Landroid/support/v4/app/FragmentManager;Ljava/util/List;Ljava/util/List;)V

    .line 49
    .local v0, "adapter":Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity$FragPagerAdapter;
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/IotConfigurationActivity;->mViewPager:Lcom/mediatek/engineermode/iotconfig/IotViewPager;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/iotconfig/IotViewPager;->setAdapter(Landroid/support/v4/view/PagerAdapter;)V

    .line 50
    return-void
.end method
