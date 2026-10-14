.class Lcom/mediatek/emcamera/Utils$1;
.super Ljava/lang/Object;
.source "Utils.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/emcamera/Utils;->showErrorAndFinish(Landroid/app/Activity;I)V
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

    .line 361
    iput-object p1, p0, Lcom/mediatek/emcamera/Utils$1;->val$activity:Landroid/app/Activity;

    iput p2, p0, Lcom/mediatek/emcamera/Utils$1;->val$msgId:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 364
    new-instance v0, Landroid/app/AlertDialog$Builder;

    iget-object v1, p0, Lcom/mediatek/emcamera/Utils$1;->val$activity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 365
    const v1, 0x1010355

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setIconAttribute(I)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 366
    const v1, 0x7f0d002e

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    iget v1, p0, Lcom/mediatek/emcamera/Utils$1;->val$msgId:I

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(I)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    new-instance v1, Lcom/mediatek/emcamera/Utils$1$1;

    invoke-direct {v1, p0}, Lcom/mediatek/emcamera/Utils$1$1;-><init>(Lcom/mediatek/emcamera/Utils$1;)V

    .line 367
    const v2, 0x104000a

    invoke-virtual {v0, v2, v1}, Landroid/app/AlertDialog$Builder;->setNeutralButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 372
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 373
    .local v0, "dialog":Landroid/app/AlertDialog;
    invoke-virtual {v0}, Landroid/app/AlertDialog;->show()V

    .line 374
    return-void
.end method
