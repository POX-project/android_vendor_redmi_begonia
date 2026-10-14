.class public abstract Lcom/mediatek/emcamera/ActivityBase;
.super Landroid/app/Activity;
.source "ActivityBase.java"

# interfaces
.implements Landroid/support/v4/app/ActivityCompat$OnRequestPermissionsResultCallback;


# static fields
.field private static final TAG:Ljava/lang/String; = "ActivityBase"


# instance fields
.field protected mCameraDevice:Landroid/hardware/camera2/CameraDevice;

.field private mOnResumePending:Z

.field private mPermissionManager:Lcom/mediatek/emcamera/PermissionManager;

.field private mPermissionPending:Z

.field private mResultCodeForTesting:I

.field private mResultDataForTesting:Landroid/content/Intent;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 53
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method

.method private isKeyguardLocked()Z
    .locals 3

    .line 164
    const-string v0, "keyguard"

    invoke-virtual {p0, v0}, Lcom/mediatek/emcamera/ActivityBase;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/KeyguardManager;

    .line 165
    .local v0, "kgm":Landroid/app/KeyguardManager;
    if-eqz v0, :cond_0

    .line 166
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "kgm.isKeyguardLocked()="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Landroid/app/KeyguardManager;->isKeyguardLocked()Z

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v2, ". kgm.isKeyguardSecure()="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 167
    invoke-virtual {v0}, Landroid/app/KeyguardManager;->isKeyguardSecure()Z

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 166
    const-string v2, "ActivityBase"

    invoke-static {v2, v1}, Lcom/mediatek/emcamera/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 170
    :cond_0
    if-eqz v0, :cond_1

    invoke-virtual {v0}, Landroid/app/KeyguardManager;->isKeyguardLocked()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-virtual {v0}, Landroid/app/KeyguardManager;->isKeyguardSecure()Z

    move-result v1

    if-eqz v1, :cond_1

    const/4 v1, 0x1

    goto :goto_0

    :cond_1
    const/4 v1, 0x0

    :goto_0
    return v1
.end method


# virtual methods
.method protected abstract doOnResume()V
.end method

.method public getResultCode()I
    .locals 1

    .line 96
    iget v0, p0, Lcom/mediatek/emcamera/ActivityBase;->mResultCodeForTesting:I

    return v0
.end method

.method public getResultData()Landroid/content/Intent;
    .locals 1

    .line 100
    iget-object v0, p0, Lcom/mediatek/emcamera/ActivityBase;->mResultDataForTesting:Landroid/content/Intent;

    return-object v0
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 2
    .param p1, "icicle"    # Landroid/os/Bundle;

    .line 69
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 70
    invoke-static {}, Lcom/mediatek/emcamera/Utils;->isAutoTest()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 71
    const-string v0, "ActivityBase"

    const-string v1, "Monkey running."

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 72
    invoke-virtual {p0}, Lcom/mediatek/emcamera/ActivityBase;->finish()V

    .line 73
    return-void

    .line 75
    :cond_0
    new-instance v0, Lcom/mediatek/emcamera/PermissionManager;

    invoke-direct {v0, p0}, Lcom/mediatek/emcamera/PermissionManager;-><init>(Landroid/app/Activity;)V

    iput-object v0, p0, Lcom/mediatek/emcamera/ActivityBase;->mPermissionManager:Lcom/mediatek/emcamera/PermissionManager;

    .line 76
    return-void
.end method

.method protected onDestroy()V
    .locals 0

    .line 160
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 161
    return-void
.end method

.method protected onPause()V
    .locals 2

    .line 137
    const-string v0, "ActivityBase"

    const-string v1, "onPause"

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 138
    invoke-super {p0}, Landroid/app/Activity;->onPause()V

    .line 139
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/emcamera/ActivityBase;->mOnResumePending:Z

    .line 140
    invoke-virtual {p0}, Lcom/mediatek/emcamera/ActivityBase;->getWindow()Landroid/view/Window;

    move-result-object v0

    const/16 v1, 0x80

    invoke-virtual {v0, v1}, Landroid/view/Window;->clearFlags(I)V

    .line 141
    return-void
.end method

.method public onRequestPermissionsResult(I[Ljava/lang/String;[I)V
    .locals 2
    .param p1, "requestCode"    # I
    .param p2, "permissions"    # [Ljava/lang/String;
    .param p3, "grantResults"    # [I

    .line 174
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onRequestPermissionsResult(), requestCode = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ActivityBase"

    invoke-static {v1, v0}, Lcom/mediatek/emcamera/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 175
    if-eqz p3, :cond_4

    array-length v0, p3

    if-gtz v0, :cond_0

    goto :goto_1

    .line 178
    :cond_0
    iget-object v0, p0, Lcom/mediatek/emcamera/ActivityBase;->mPermissionManager:Lcom/mediatek/emcamera/PermissionManager;

    invoke-virtual {v0}, Lcom/mediatek/emcamera/PermissionManager;->getCameraLaunchPermissionRequestCode()I

    move-result v0

    if-ne v0, p1, :cond_2

    .line 179
    iget-object v0, p0, Lcom/mediatek/emcamera/ActivityBase;->mPermissionManager:Lcom/mediatek/emcamera/PermissionManager;

    invoke-virtual {v0, p2, p3}, Lcom/mediatek/emcamera/PermissionManager;->isCameraLaunchPermissionsResultReady([Ljava/lang/String;[I)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 182
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/emcamera/ActivityBase;->mPermissionPending:Z

    .line 183
    iget-boolean v1, p0, Lcom/mediatek/emcamera/ActivityBase;->mOnResumePending:Z

    if-nez v1, :cond_3

    if-nez v0, :cond_3

    .line 184
    invoke-virtual {p0}, Lcom/mediatek/emcamera/ActivityBase;->doOnResume()V

    goto :goto_0

    .line 189
    :cond_1
    const v0, 0x7f0d0035

    const/4 v1, 0x1

    invoke-static {p0, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    .line 190
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 191
    invoke-virtual {p0}, Lcom/mediatek/emcamera/ActivityBase;->finish()V

    goto :goto_0

    .line 194
    :cond_2
    invoke-super {p0, p1, p2, p3}, Landroid/app/Activity;->onRequestPermissionsResult(I[Ljava/lang/String;[I)V

    .line 196
    :cond_3
    :goto_0
    return-void

    .line 176
    :cond_4
    :goto_1
    return-void
.end method

.method protected onResume()V
    .locals 5

    .line 105
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 113
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onResume. hasWindowFocus()="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/mediatek/emcamera/ActivityBase;->hasWindowFocus()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ActivityBase"

    invoke-static {v1, v0}, Lcom/mediatek/emcamera/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 114
    iget-object v0, p0, Lcom/mediatek/emcamera/ActivityBase;->mCameraDevice:Landroid/hardware/camera2/CameraDevice;

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eqz v0, :cond_1

    invoke-direct {p0}, Lcom/mediatek/emcamera/ActivityBase;->isKeyguardLocked()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 118
    :cond_0
    const-string v0, "onResume. mOnResumePending=false"

    invoke-static {v1, v0}, Lcom/mediatek/emcamera/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 119
    iput-boolean v2, p0, Lcom/mediatek/emcamera/ActivityBase;->mOnResumePending:Z

    goto :goto_1

    .line 115
    :cond_1
    :goto_0
    const-string v0, "onResume. mOnResumePending=true"

    invoke-static {v1, v0}, Lcom/mediatek/emcamera/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 116
    iput-boolean v3, p0, Lcom/mediatek/emcamera/ActivityBase;->mOnResumePending:Z

    .line 121
    :goto_1
    invoke-virtual {p0}, Lcom/mediatek/emcamera/ActivityBase;->getWindow()Landroid/view/Window;

    move-result-object v0

    const/16 v4, 0x80

    invoke-virtual {v0, v4}, Landroid/view/Window;->addFlags(I)V

    .line 123
    iget-object v0, p0, Lcom/mediatek/emcamera/ActivityBase;->mPermissionManager:Lcom/mediatek/emcamera/PermissionManager;

    invoke-virtual {v0}, Lcom/mediatek/emcamera/PermissionManager;->requestCameraLaunchPermissions()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 124
    const-string v0, "requestCameraLaunchPermissions return true"

    invoke-static {v1, v0}, Lcom/mediatek/emcamera/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 125
    iput-boolean v2, p0, Lcom/mediatek/emcamera/ActivityBase;->mPermissionPending:Z

    goto :goto_2

    .line 127
    :cond_2
    iput-boolean v3, p0, Lcom/mediatek/emcamera/ActivityBase;->mPermissionPending:Z

    .line 130
    :goto_2
    iget-boolean v0, p0, Lcom/mediatek/emcamera/ActivityBase;->mOnResumePending:Z

    if-nez v0, :cond_3

    iget-boolean v0, p0, Lcom/mediatek/emcamera/ActivityBase;->mPermissionPending:Z

    if-nez v0, :cond_3

    .line 131
    invoke-virtual {p0}, Lcom/mediatek/emcamera/ActivityBase;->doOnResume()V

    .line 133
    :cond_3
    return-void
.end method

.method public onSearchRequested()Z
    .locals 1

    .line 92
    const/4 v0, 0x0

    return v0
.end method

.method public onWindowFocusChanged(Z)V
    .locals 2
    .param p1, "hasFocus"    # Z

    .line 80
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onWindowFocusChanged.hasFocus="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ".mOnResumePending="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/mediatek/emcamera/ActivityBase;->mOnResumePending:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ".mPermissionPending="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/mediatek/emcamera/ActivityBase;->mPermissionPending:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ActivityBase"

    invoke-static {v1, v0}, Lcom/mediatek/emcamera/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 82
    if-eqz p1, :cond_0

    iget-boolean v0, p0, Lcom/mediatek/emcamera/ActivityBase;->mOnResumePending:Z

    if-eqz v0, :cond_0

    .line 83
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/emcamera/ActivityBase;->mOnResumePending:Z

    .line 84
    if-nez v0, :cond_0

    iget-boolean v0, p0, Lcom/mediatek/emcamera/ActivityBase;->mPermissionPending:Z

    if-nez v0, :cond_0

    .line 85
    invoke-virtual {p0}, Lcom/mediatek/emcamera/ActivityBase;->doOnResume()V

    .line 88
    :cond_0
    return-void
.end method

.method protected setResultEx(I)V
    .locals 0
    .param p1, "resultCode"    # I

    .line 147
    iput p1, p0, Lcom/mediatek/emcamera/ActivityBase;->mResultCodeForTesting:I

    .line 148
    invoke-virtual {p0, p1}, Lcom/mediatek/emcamera/ActivityBase;->setResult(I)V

    .line 149
    return-void
.end method

.method protected setResultEx(ILandroid/content/Intent;)V
    .locals 0
    .param p1, "resultCode"    # I
    .param p2, "data"    # Landroid/content/Intent;

    .line 152
    iput p1, p0, Lcom/mediatek/emcamera/ActivityBase;->mResultCodeForTesting:I

    .line 153
    iput-object p2, p0, Lcom/mediatek/emcamera/ActivityBase;->mResultDataForTesting:Landroid/content/Intent;

    .line 154
    invoke-virtual {p0, p1, p2}, Lcom/mediatek/emcamera/ActivityBase;->setResult(ILandroid/content/Intent;)V

    .line 155
    return-void
.end method
