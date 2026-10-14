.class Lcom/mediatek/emcamera/CaptureActivity$1;
.super Ljava/lang/Object;
.source "CaptureActivity.java"

# interfaces
.implements Landroid/view/TextureView$SurfaceTextureListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/emcamera/CaptureActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/emcamera/CaptureActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/emcamera/CaptureActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/emcamera/CaptureActivity;

    .line 97
    iput-object p1, p0, Lcom/mediatek/emcamera/CaptureActivity$1;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onSurfaceTextureAvailable(Landroid/graphics/SurfaceTexture;II)V
    .locals 3
    .param p1, "texture"    # Landroid/graphics/SurfaceTexture;
    .param p2, "width"    # I
    .param p3, "height"    # I

    .line 101
    invoke-static {}, Lcom/mediatek/emcamera/CaptureActivity;->access$000()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onSurfaceTextureAvailable, width="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ",height="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 103
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$1;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-static {v0, p2, p3}, Lcom/mediatek/emcamera/CaptureActivity;->access$100(Lcom/mediatek/emcamera/CaptureActivity;II)V

    .line 104
    return-void
.end method

.method public onSurfaceTextureDestroyed(Landroid/graphics/SurfaceTexture;)Z
    .locals 1
    .param p1, "texture"    # Landroid/graphics/SurfaceTexture;

    .line 114
    const/4 v0, 0x1

    return v0
.end method

.method public onSurfaceTextureSizeChanged(Landroid/graphics/SurfaceTexture;II)V
    .locals 3
    .param p1, "texture"    # Landroid/graphics/SurfaceTexture;
    .param p2, "width"    # I
    .param p3, "height"    # I

    .line 108
    invoke-static {}, Lcom/mediatek/emcamera/CaptureActivity;->access$000()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onSurfaceTextureSizeChanged, width="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ",height="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 109
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$1;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-static {v0, p2, p3}, Lcom/mediatek/emcamera/CaptureActivity;->access$200(Lcom/mediatek/emcamera/CaptureActivity;II)V

    .line 110
    return-void
.end method

.method public onSurfaceTextureUpdated(Landroid/graphics/SurfaceTexture;)V
    .locals 0
    .param p1, "texture"    # Landroid/graphics/SurfaceTexture;

    .line 119
    return-void
.end method
