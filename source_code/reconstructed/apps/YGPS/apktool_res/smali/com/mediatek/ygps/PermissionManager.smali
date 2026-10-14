.class public Lcom/mediatek/ygps/PermissionManager;
.super Ljava/lang/Object;
.source "PermissionManager.java"


# instance fields
.field private final mActivity:Landroid/app/Activity;

.field private mLaunchPermissionList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1

    .line 29
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 22
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/ygps/PermissionManager;->mLaunchPermissionList:Ljava/util/List;

    .line 30
    iput-object p1, p0, Lcom/mediatek/ygps/PermissionManager;->mActivity:Landroid/app/Activity;

    .line 31
    invoke-direct {p0}, Lcom/mediatek/ygps/PermissionManager;->initLocationLaunchPermissionList()V

    return-void
.end method

.method private getNeedCheckPermissionList(Ljava/util/List;)Ljava/util/List;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 48
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-gtz v0, :cond_0

    return-object p1

    .line 51
    :cond_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 52
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_1
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    const-string v2, "YGPS/Permission"

    if-eqz v1, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 53
    iget-object v3, p0, Lcom/mediatek/ygps/PermissionManager;->mActivity:Landroid/app/Activity;

    invoke-static {v3, v1}, Landroid/support/v4/content/ContextCompat;->checkSelfPermission(Landroid/content/Context;Ljava/lang/String;)I

    move-result v3

    if-eqz v3, :cond_1

    .line 55
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "getNeedCheckPermissionList() permission ="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 57
    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 60
    :cond_2
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p1, "getNeedCheckPermissionList() listSize ="

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 61
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result p1

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 60
    invoke-static {v2, p0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-object v0
.end method

.method private initLocationLaunchPermissionList()V
    .locals 2

    .line 35
    iget-object v0, p0, Lcom/mediatek/ygps/PermissionManager;->mLaunchPermissionList:Ljava/util/List;

    const-string v1, "android.permission.ACCESS_FINE_LOCATION"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 36
    iget-object p0, p0, Lcom/mediatek/ygps/PermissionManager;->mLaunchPermissionList:Ljava/util/List;

    const-string v0, "android.permission.ACCESS_COARSE_LOCATION"

    invoke-interface {p0, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method


# virtual methods
.method public getLocationLaunchPermissionRequestCode()I
    .locals 0

    const/16 p0, 0x64

    return p0
.end method

.method public isLocationLaunchPermissionsResultReady([Ljava/lang/String;[I)Z
    .locals 2

    const/4 p0, 0x0

    move v0, p0

    .line 125
    :goto_0
    array-length v1, p2

    if-ge v0, v1, :cond_1

    .line 126
    aget v1, p2, v0

    if-eqz v1, :cond_0

    .line 127
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "permissions not granted for "

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object p1, p1, v0

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "YGPS/Permission"

    invoke-static {p2, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return p0

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    const/4 p0, 0x1

    return p0
.end method

.method public requestLocationLaunchPermissions()Z
    .locals 3

    .line 91
    iget-object v0, p0, Lcom/mediatek/ygps/PermissionManager;->mLaunchPermissionList:Ljava/util/List;

    invoke-direct {p0, v0}, Lcom/mediatek/ygps/PermissionManager;->getNeedCheckPermissionList(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    .line 92
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    const-string v2, "YGPS/Permission"

    if-lez v1, :cond_0

    const-string v1, "requestLocationLaunchPermissions(), user check"

    .line 94
    invoke-static {v2, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 95
    iget-object p0, p0, Lcom/mediatek/ygps/PermissionManager;->mActivity:Landroid/app/Activity;

    .line 99
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    new-array v1, v1, [Ljava/lang/String;

    .line 98
    invoke-interface {v0, v1}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Ljava/lang/String;

    const/16 v1, 0x64

    .line 95
    invoke-static {p0, v0, v1}, Landroid/support/v4/app/ActivityCompat;->requestPermissions(Landroid/app/Activity;[Ljava/lang/String;I)V

    const/4 p0, 0x0

    return p0

    :cond_0
    const-string p0, "requestLocationLaunchPermissions(), all on"

    .line 102
    invoke-static {v2, p0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const/4 p0, 0x1

    return p0
.end method
