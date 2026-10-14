.class Lcom/mediatek/emcamera/Utils$2;
.super Ljava/lang/Object;
.source "Utils.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/emcamera/Utils;->toastOnUiThread(Landroid/app/Activity;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic val$activity:Landroid/app/Activity;

.field final synthetic val$msgId:I


# direct methods
.method constructor <init>(Landroid/app/Activity;I)V
    .locals 0

    .line 379
    iput-object p1, p0, Lcom/mediatek/emcamera/Utils$2;->val$activity:Landroid/app/Activity;

    iput p2, p0, Lcom/mediatek/emcamera/Utils$2;->val$msgId:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 382
    iget-object v0, p0, Lcom/mediatek/emcamera/Utils$2;->val$activity:Landroid/app/Activity;

    iget v1, p0, Lcom/mediatek/emcamera/Utils$2;->val$msgId:I

    const/4 v2, 0x1

    invoke-static {v0, v1, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 383
    return-void
.end method
