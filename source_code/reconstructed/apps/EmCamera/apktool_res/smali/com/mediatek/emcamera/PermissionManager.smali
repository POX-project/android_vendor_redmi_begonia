.class public Lcom/mediatek/emcamera/PermissionManager;
.super Ljava/lang/Object;
.source "PermissionManager.java"


# static fields
.field private static final CAM_REQUEST_CODE_ASK_LAUNCH_PERMISSIONS:I = 0x64

.field private static final TAG:Ljava/lang/String; = "PermissionManager"


# instance fields
.field private final mActivity:Landroid/app/Activity;

.field private mLauchPermissionList:Ljava/util/List;
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
    .param p1, "activity"    # Landroid/app/Activity;

    .line 66
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 59
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/emcamera/PermissionManager;->mLauchPermissionList:Ljava/util/List;

    .line 67
    iput-object p1, p0, Lcom/mediatek/emcamera/PermissionManager;->mActivity:Landroid/app/Activity;

    .line 68
    invoke-direct {p0}, Lcom/mediatek/emcamera/PermissionManager;->initCameraLaunchPermissionList()V

    .line 69
    return-void
.end method

.method private getNeedCheckPermissionList(Ljava/util/List;)Ljava/util/List;
    .locals 6
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

    .line 84
    .local p1, "permissionList":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-gtz v0, :cond_0

    .line 85
    return-object p1

    .line 87
    :cond_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 88
    .local v0, "needCheckPermissionsList":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    const-string v3, "PermissionManager"

    if-eqz v2, :cond_2

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 89
    .local v2, "permission":Ljava/lang/String;
    iget-object v4, p0, Lcom/mediatek/emcamera/PermissionManager;->mActivity:Landroid/app/Activity;

    invoke-static {v4, v2}, Landroid/support/v4/content/ContextCompat;->checkSelfPermission(Landroid/content/Context;Ljava/lang/String;)I

    move-result v4

    if-eqz v4, :cond_1

    .line 91
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "getNeedCheckPermissionList() permission ="

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/mediatek/emcamera/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 93
    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 95
    .end local v2    # "permission":Ljava/lang/String;
    :cond_1
    goto :goto_0

    .line 96
    :cond_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getNeedCheckPermissionList() listSize ="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 97
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 96
    invoke-static {v3, v1}, Lcom/mediatek/emcamera/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 98
    return-object v0
.end method

.method private initCameraLaunchPermissionList()V
    .locals 2

    .line 72
    iget-object v0, p0, Lcom/mediatek/emcamera/PermissionManager;->mLauchPermissionList:Ljava/util/List;

    const-string v1, "android.permission.CAMERA"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 73
    return-void
.end method


# virtual methods
.method public checkCameraLaunchPermissions()Z
    .locals 3

    .line 107
    iget-object v0, p0, Lcom/mediatek/emcamera/PermissionManager;->mLauchPermissionList:Ljava/util/List;

    invoke-direct {p0, v0}, Lcom/mediatek/emcamera/PermissionManager;->getNeedCheckPermissionList(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    .line 108
    .local v0, "needCheckPermissionsList":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 109
    const/4 v1, 0x0

    return v1

    .line 111
    :cond_0
    const-string v1, "PermissionManager"

    const-string v2, "CheckCameraPermissions(), all on"

    invoke-static {v1, v2}, Lcom/mediatek/emcamera/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 112
    const/4 v1, 0x1

    return v1
.end method

.method public getCameraLaunchPermissionRequestCode()I
    .locals 1

    .line 148
    const/16 v0, 0x64

    return v0
.end method

.method public isCameraLaunchPermissionsResultReady([Ljava/lang/String;[I)Z
    .locals 6
    .param p1, "permissions"    # [Ljava/lang/String;
    .param p2, "grantResults"    # [I

    .line 161
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 162
    .local v0, "perms":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;"
    nop

    .line 163
    const/4 v1, 0x0

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    .line 162
    const-string v3, "android.permission.CAMERA"

    invoke-interface {v0, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 164
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    array-length v4, p1

    if-ge v2, v4, :cond_0

    .line 165
    aget-object v4, p1, v2

    aget v5, p2, v2

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-interface {v0, v4, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 164
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 167
    .end local v2    # "i":I
    :cond_0
    invoke-interface {v0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    if-nez v2, :cond_1

    .line 169
    const-string v1, "PermissionManager"

    const-string v2, "isCameraLaunchPermissionsResultReady(),true"

    invoke-static {v1, v2}, Lcom/mediatek/emcamera/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 170
    const/4 v1, 0x1

    return v1

    .line 172
    :cond_1
    return v1
.end method

.method public requestCameraLaunchPermissions()Z
    .locals 4

    .line 127
    iget-object v0, p0, Lcom/mediatek/emcamera/PermissionManager;->mLauchPermissionList:Ljava/util/List;

    invoke-direct {p0, v0}, Lcom/mediatek/emcamera/PermissionManager;->getNeedCheckPermissionList(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    .line 128
    .local v0, "needCheckPermissionsList":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    const-string v2, "PermissionManager"

    if-lez v1, :cond_0

    .line 130
    const-string v1, "requestCameraLaunchPermissions(), user check"

    invoke-static {v2, v1}, Lcom/mediatek/emcamera/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 131
    iget-object v1, p0, Lcom/mediatek/emcamera/PermissionManager;->mActivity:Landroid/app/Activity;

    .line 135
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    new-array v2, v2, [Ljava/lang/String;

    .line 134
    invoke-interface {v0, v2}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v2

    check-cast v2, [Ljava/lang/String;

    const/16 v3, 0x64

    .line 131
    invoke-static {v1, v2, v3}, Landroid/support/v4/app/ActivityCompat;->requestPermissions(Landroid/app/Activity;[Ljava/lang/String;I)V

    .line 136
    const/4 v1, 0x0

    return v1

    .line 138
    :cond_0
    const-string v1, "requestCameraLaunchPermissions(), all on"

    invoke-static {v2, v1}, Lcom/mediatek/emcamera/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 139
    const/4 v1, 0x1

    return v1
.end method
