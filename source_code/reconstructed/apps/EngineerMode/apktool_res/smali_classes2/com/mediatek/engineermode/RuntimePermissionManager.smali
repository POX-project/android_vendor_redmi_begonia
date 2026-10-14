.class Lcom/mediatek/engineermode/RuntimePermissionManager;
.super Ljava/lang/Object;
.source "RuntimePermissionManager.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "RuntimePermissionManager"


# instance fields
.field private final mActivity:Landroid/app/Activity;

.field private mRequestCode:I

.field private mRuntimePermissionList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method constructor <init>(Landroid/app/Activity;I)V
    .locals 1
    .param p1, "activity"    # Landroid/app/Activity;
    .param p2, "requestCode"    # I

    .line 29
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 18
    const/16 v0, 0x64

    iput v0, p0, Lcom/mediatek/engineermode/RuntimePermissionManager;->mRequestCode:I

    .line 20
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/RuntimePermissionManager;->mRuntimePermissionList:Ljava/util/List;

    .line 30
    iput-object p1, p0, Lcom/mediatek/engineermode/RuntimePermissionManager;->mActivity:Landroid/app/Activity;

    .line 31
    iput p2, p0, Lcom/mediatek/engineermode/RuntimePermissionManager;->mRequestCode:I

    .line 32
    invoke-direct {p0}, Lcom/mediatek/engineermode/RuntimePermissionManager;->initPermissionList()V

    .line 33
    return-void
.end method

.method private initPermissionList()V
    .locals 2

    .line 36
    iget-object v0, p0, Lcom/mediatek/engineermode/RuntimePermissionManager;->mRuntimePermissionList:Ljava/util/List;

    const-string v1, "android.permission.ACCESS_FINE_LOCATION"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 37
    iget-object v0, p0, Lcom/mediatek/engineermode/RuntimePermissionManager;->mRuntimePermissionList:Ljava/util/List;

    const-string v1, "android.permission.ACCESS_COARSE_LOCATION"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 38
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->isUserLoad()Z

    move-result v0

    if-nez v0, :cond_0

    .line 39
    iget-object v0, p0, Lcom/mediatek/engineermode/RuntimePermissionManager;->mRuntimePermissionList:Ljava/util/List;

    const-string v1, "android.permission.ACCESS_BACKGROUND_LOCATION"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 41
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/RuntimePermissionManager;->mRuntimePermissionList:Ljava/util/List;

    const-string v1, "android.permission.WRITE_EXTERNAL_STORAGE"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 42
    iget-object v0, p0, Lcom/mediatek/engineermode/RuntimePermissionManager;->mRuntimePermissionList:Ljava/util/List;

    const-string v1, "android.permission.CAMERA"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 43
    return-void
.end method


# virtual methods
.method getPermissionNotGranted()Ljava/util/List;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 47
    iget-object v0, p0, Lcom/mediatek/engineermode/RuntimePermissionManager;->mRuntimePermissionList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    .line 48
    const/4 v0, 0x0

    return-object v0

    .line 50
    :cond_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 51
    .local v0, "permList":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    iget-object v1, p0, Lcom/mediatek/engineermode/RuntimePermissionManager;->mRuntimePermissionList:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    const-string v3, "RuntimePermissionManager"

    if-eqz v2, :cond_2

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 52
    .local v2, "permission":Ljava/lang/String;
    iget-object v4, p0, Lcom/mediatek/engineermode/RuntimePermissionManager;->mActivity:Landroid/app/Activity;

    invoke-static {v4, v2}, Landroid/support/v4/content/ContextCompat;->checkSelfPermission(Landroid/content/Context;Ljava/lang/String;)I

    move-result v4

    if-eqz v4, :cond_1

    .line 54
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "getNeedCheckPermissionList() permission ="

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 56
    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 58
    .end local v2    # "permission":Ljava/lang/String;
    :cond_1
    goto :goto_0

    .line 59
    :cond_2
    const-string v1, "Permission not granted:"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 60
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 61
    .local v2, "str":Ljava/lang/String;
    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 62
    .end local v2    # "str":Ljava/lang/String;
    goto :goto_1

    .line 63
    :cond_3
    return-object v0
.end method

.method isPermissionsResultReady([Ljava/lang/String;[I)Z
    .locals 3
    .param p1, "permissions"    # [Ljava/lang/String;
    .param p2, "grantResults"    # [I

    .line 103
    const/4 v0, 0x0

    .local v0, "k":I
    :goto_0
    array-length v1, p2

    if-ge v0, v1, :cond_1

    .line 104
    aget v1, p2, v0

    if-eqz v1, :cond_0

    .line 105
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "permissions not granted for "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v2, p1, v0

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "RuntimePermissionManager"

    invoke-static {v2, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 106
    const/4 v1, 0x0

    return v1

    .line 103
    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 109
    .end local v0    # "k":I
    :cond_1
    const/4 v0, 0x1

    return v0
.end method

.method requestRuntimePermissions()Z
    .locals 4

    .line 79
    invoke-virtual {p0}, Lcom/mediatek/engineermode/RuntimePermissionManager;->getPermissionNotGranted()Ljava/util/List;

    move-result-object v0

    .line 80
    .local v0, "permList":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 82
    iget-object v1, p0, Lcom/mediatek/engineermode/RuntimePermissionManager;->mActivity:Landroid/app/Activity;

    .line 86
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    new-array v2, v2, [Ljava/lang/String;

    .line 85
    invoke-interface {v0, v2}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v2

    check-cast v2, [Ljava/lang/String;

    iget v3, p0, Lcom/mediatek/engineermode/RuntimePermissionManager;->mRequestCode:I

    .line 82
    invoke-static {v1, v2, v3}, Landroid/support/v4/app/ActivityCompat;->requestPermissions(Landroid/app/Activity;[Ljava/lang/String;I)V

    .line 87
    const/4 v1, 0x0

    return v1

    .line 89
    :cond_0
    const-string v1, "RuntimePermissionManager"

    const-string v2, "requestLocationLaunchPermissions(), all on"

    invoke-static {v1, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 90
    const/4 v1, 0x1

    return v1
.end method
