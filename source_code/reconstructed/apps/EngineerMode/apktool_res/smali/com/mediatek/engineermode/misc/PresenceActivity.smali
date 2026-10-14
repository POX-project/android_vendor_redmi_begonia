.class public Lcom/mediatek/engineermode/misc/PresenceActivity;
.super Landroid/app/Activity;
.source "PresenceActivity.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemClickListener;


# static fields
.field private static final ITEM_INTENT_STRING:[Ljava/lang/String;

.field private static final ITEM_STRINGS:[Ljava/lang/String;

.field private static final PACKAGE_NAME:Ljava/lang/String; = "com.mediatek.engineermode.misc"

.field private static final TAG:Ljava/lang/String; = "Presence/Activity"


# instance fields
.field private mListData:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mMenuListView:Landroid/widget/ListView;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 21
    const-string v0, "Presence Setting"

    const-string v1, "AOSP Presence Test"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/misc/PresenceActivity;->ITEM_STRINGS:[Ljava/lang/String;

    .line 22
    const-string v0, "PresenceSet"

    const-string v1, "AospPresenceTestActivity"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/misc/PresenceActivity;->ITEM_INTENT_STRING:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 18
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method

.method private getData()Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 62
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 63
    .local v0, "items":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    const/4 v1, 0x0

    .line 64
    .local v1, "i":I
    :goto_0
    sget-object v2, Lcom/mediatek/engineermode/misc/PresenceActivity;->ITEM_STRINGS:[Ljava/lang/String;

    array-length v3, v2

    if-ge v1, v3, :cond_0

    .line 65
    aget-object v2, v2, v1

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 64
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 67
    :cond_0
    return-object v0
.end method


# virtual methods
.method public onCreate(Landroid/os/Bundle;)V
    .locals 2
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 29
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 30
    const v0, 0x7f0800c7

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/misc/PresenceActivity;->setContentView(I)V

    .line 31
    const v0, 0x7f06006f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/misc/PresenceActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ListView;

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/PresenceActivity;->mMenuListView:Landroid/widget/ListView;

    .line 32
    const-string v1, "Presence/Activity"

    if-nez v0, :cond_0

    .line 33
    const-string v0, "Resource could not be allocated"

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 35
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/PresenceActivity;->mMenuListView:Landroid/widget/ListView;

    invoke-virtual {v0, p0}, Landroid/widget/ListView;->setOnItemClickListener(Landroid/widget/AdapterView$OnItemClickListener;)V

    .line 36
    const-string v0, "onCreate in dsActivity"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 37
    return-void
.end method

.method public onItemClick(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 4
    .param p2, "view"    # Landroid/view/View;
    .param p3, "menuId"    # I
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

    .line 49
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    const/4 v0, 0x0

    .line 50
    .local v0, "i":I
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    .line 51
    .local v1, "intent":Landroid/content/Intent;
    const/4 v0, 0x0

    :goto_0
    sget-object v2, Lcom/mediatek/engineermode/misc/PresenceActivity;->ITEM_STRINGS:[Ljava/lang/String;

    array-length v3, v2

    if-ge v0, v3, :cond_1

    .line 52
    aget-object v2, v2, v0

    iget-object v3, p0, Lcom/mediatek/engineermode/misc/PresenceActivity;->mListData:Ljava/util/List;

    invoke-interface {v3, p3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    if-ne v2, v3, :cond_0

    .line 53
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "com.mediatek.engineermode.misc."

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/mediatek/engineermode/misc/PresenceActivity;->ITEM_INTENT_STRING:[Ljava/lang/String;

    aget-object v3, v3, v0

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, p0, v2}, Landroid/content/Intent;->setClassName(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    .line 54
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Start activity:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/mediatek/engineermode/misc/PresenceActivity;->ITEM_STRINGS:[Ljava/lang/String;

    aget-object v3, v3, v0

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " inent:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/mediatek/engineermode/misc/PresenceActivity;->ITEM_INTENT_STRING:[Ljava/lang/String;

    aget-object v3, v3, v0

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "Presence/Activity"

    invoke-static {v3, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 56
    goto :goto_1

    .line 51
    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 59
    :cond_1
    :goto_1
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/misc/PresenceActivity;->startActivity(Landroid/content/Intent;)V

    .line 60
    return-void
.end method

.method protected onResume()V
    .locals 3

    .line 41
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 42
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/PresenceActivity;->getData()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/PresenceActivity;->mListData:Ljava/util/List;

    .line 43
    new-instance v0, Landroid/widget/ArrayAdapter;

    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceActivity;->mListData:Ljava/util/List;

    const v2, 0x1090003

    invoke-direct {v0, p0, v2, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;ILjava/util/List;)V

    .line 45
    .local v0, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/PresenceActivity;->mMenuListView:Landroid/widget/ListView;

    invoke-virtual {v1, v0}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 46
    return-void
.end method
