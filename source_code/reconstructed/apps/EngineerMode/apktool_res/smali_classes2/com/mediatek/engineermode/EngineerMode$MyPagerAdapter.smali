.class Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;
.super Landroid/support/v4/view/PagerAdapter;
.source "EngineerMode.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/EngineerMode;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "MyPagerAdapter"
.end annotation


# instance fields
.field private mCurPrimaryItem:Landroid/app/Fragment;

.field private mCurTransaction:Landroid/app/FragmentTransaction;

.field private final mFragmentManager:Landroid/app/FragmentManager;

.field final synthetic this$0:Lcom/mediatek/engineermode/EngineerMode;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/EngineerMode;)V
    .locals 1
    .param p1, "this$0"    # Lcom/mediatek/engineermode/EngineerMode;

    .line 233
    iput-object p1, p0, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;->this$0:Lcom/mediatek/engineermode/EngineerMode;

    invoke-direct {p0}, Landroid/support/v4/view/PagerAdapter;-><init>()V

    .line 230
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;->mCurTransaction:Landroid/app/FragmentTransaction;

    .line 234
    invoke-virtual {p1}, Lcom/mediatek/engineermode/EngineerMode;->getFragmentManager()Landroid/app/FragmentManager;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;->mFragmentManager:Landroid/app/FragmentManager;

    .line 235
    return-void
.end method

.method private getFragment(I)Landroid/app/Fragment;
    .locals 3
    .param p1, "position"    # I

    .line 295
    iget-object v0, p0, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;->this$0:Lcom/mediatek/engineermode/EngineerMode;

    invoke-static {v0}, Lcom/mediatek/engineermode/EngineerMode;->access$000(Lcom/mediatek/engineermode/EngineerMode;)I

    move-result v0

    if-ge p1, v0, :cond_0

    .line 296
    iget-object v0, p0, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;->this$0:Lcom/mediatek/engineermode/EngineerMode;

    invoke-static {v0}, Lcom/mediatek/engineermode/EngineerMode;->access$200(Lcom/mediatek/engineermode/EngineerMode;)[Lcom/mediatek/engineermode/PrefsFragment;

    move-result-object v0

    aget-object v0, v0, p1

    return-object v0

    .line 298
    :cond_0
    new-instance v0, Ljava/lang/IllegalArgumentException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "position: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0
.end method


# virtual methods
.method public destroyItem(Landroid/view/View;ILjava/lang/Object;)V
    .locals 2
    .param p1, "container"    # Landroid/view/View;
    .param p2, "position"    # I
    .param p3, "object"    # Ljava/lang/Object;

    .line 244
    iget-object v0, p0, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;->mCurTransaction:Landroid/app/FragmentTransaction;

    if-nez v0, :cond_0

    .line 245
    iget-object v0, p0, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;->mFragmentManager:Landroid/app/FragmentManager;

    invoke-virtual {v0}, Landroid/app/FragmentManager;->beginTransaction()Landroid/app/FragmentTransaction;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;->mCurTransaction:Landroid/app/FragmentTransaction;

    .line 247
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;->mCurTransaction:Landroid/app/FragmentTransaction;

    move-object v1, p3

    check-cast v1, Landroid/app/Fragment;

    invoke-virtual {v0, v1}, Landroid/app/FragmentTransaction;->hide(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;

    .line 248
    return-void
.end method

.method public finishUpdate(Landroid/view/View;)V
    .locals 1
    .param p1, "container"    # Landroid/view/View;

    .line 270
    iget-object v0, p0, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;->mCurTransaction:Landroid/app/FragmentTransaction;

    if-eqz v0, :cond_0

    .line 271
    invoke-virtual {v0}, Landroid/app/FragmentTransaction;->commitAllowingStateLoss()I

    .line 272
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;->mCurTransaction:Landroid/app/FragmentTransaction;

    .line 273
    iget-object v0, p0, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;->mFragmentManager:Landroid/app/FragmentManager;

    invoke-virtual {v0}, Landroid/app/FragmentManager;->executePendingTransactions()Z

    .line 275
    :cond_0
    return-void
.end method

.method public getCount()I
    .locals 1

    .line 239
    iget-object v0, p0, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;->this$0:Lcom/mediatek/engineermode/EngineerMode;

    invoke-static {v0}, Lcom/mediatek/engineermode/EngineerMode;->access$000(Lcom/mediatek/engineermode/EngineerMode;)I

    move-result v0

    return v0
.end method

.method public getPageTitle(I)Ljava/lang/CharSequence;
    .locals 2
    .param p1, "position"    # I

    .line 252
    iget-object v0, p0, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;->this$0:Lcom/mediatek/engineermode/EngineerMode;

    invoke-static {v0}, Lcom/mediatek/engineermode/EngineerMode;->access$100(Lcom/mediatek/engineermode/EngineerMode;)[I

    move-result-object v1

    aget v1, v1, p1

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/EngineerMode;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public instantiateItem(Landroid/view/View;I)Ljava/lang/Object;
    .locals 2
    .param p1, "container"    # Landroid/view/View;
    .param p2, "position"    # I

    .line 257
    iget-object v0, p0, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;->mCurTransaction:Landroid/app/FragmentTransaction;

    if-nez v0, :cond_0

    .line 258
    iget-object v0, p0, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;->mFragmentManager:Landroid/app/FragmentManager;

    invoke-virtual {v0}, Landroid/app/FragmentManager;->beginTransaction()Landroid/app/FragmentTransaction;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;->mCurTransaction:Landroid/app/FragmentTransaction;

    .line 260
    :cond_0
    invoke-direct {p0, p2}, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;->getFragment(I)Landroid/app/Fragment;

    move-result-object v0

    .line 261
    .local v0, "fragment":Landroid/app/Fragment;
    iget-object v1, p0, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;->mCurTransaction:Landroid/app/FragmentTransaction;

    invoke-virtual {v1, v0}, Landroid/app/FragmentTransaction;->show(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;

    .line 264
    iget-object v1, p0, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;->mCurPrimaryItem:Landroid/app/Fragment;

    invoke-virtual {v0, v1}, Landroid/app/Fragment;->equals(Ljava/lang/Object;)Z

    move-result v1

    invoke-virtual {v0, v1}, Landroid/app/Fragment;->setUserVisibleHint(Z)V

    .line 265
    return-object v0
.end method

.method public isViewFromObject(Landroid/view/View;Ljava/lang/Object;)Z
    .locals 1
    .param p1, "view"    # Landroid/view/View;
    .param p2, "object"    # Ljava/lang/Object;

    .line 279
    move-object v0, p2

    check-cast v0, Landroid/app/Fragment;

    invoke-virtual {v0}, Landroid/app/Fragment;->getView()Landroid/view/View;

    move-result-object v0

    if-ne v0, p1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public setPrimaryItem(Landroid/view/View;ILjava/lang/Object;)V
    .locals 3
    .param p1, "container"    # Landroid/view/View;
    .param p2, "position"    # I
    .param p3, "object"    # Ljava/lang/Object;

    .line 284
    move-object v0, p3

    check-cast v0, Landroid/app/Fragment;

    .line 285
    .local v0, "fragment":Landroid/app/Fragment;
    iget-object v1, p0, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;->mCurPrimaryItem:Landroid/app/Fragment;

    invoke-virtual {v0, v1}, Landroid/app/Fragment;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 286
    iget-object v1, p0, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;->mCurPrimaryItem:Landroid/app/Fragment;

    if-eqz v1, :cond_0

    .line 287
    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/app/Fragment;->setUserVisibleHint(Z)V

    .line 289
    :cond_0
    iput-object v0, p0, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;->mCurPrimaryItem:Landroid/app/Fragment;

    .line 290
    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/app/Fragment;->setUserVisibleHint(Z)V

    .line 292
    :cond_1
    return-void
.end method

.method public updateCurrentFragment()V
    .locals 2

    .line 302
    iget-object v0, p0, Lcom/mediatek/engineermode/EngineerMode$MyPagerAdapter;->mCurPrimaryItem:Landroid/app/Fragment;

    if-eqz v0, :cond_0

    .line 303
    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/app/Fragment;->setUserVisibleHint(Z)V

    .line 306
    :cond_0
    return-void
.end method
