.class Lcom/mediatek/emcamera/Utils$1$1;
.super Ljava/lang/Object;
.source "Utils.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/emcamera/Utils$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/emcamera/Utils$1;


# direct methods
.method constructor <init>(Lcom/mediatek/emcamera/Utils$1;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/emcamera/Utils$1;

    .line 367
    iput-object p1, p0, Lcom/mediatek/emcamera/Utils$1$1;->this$0:Lcom/mediatek/emcamera/Utils$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 1
    .param p1, "dialog"    # Landroid/content/DialogInterface;
    .param p2, "which"    # I

    .line 369
    iget-object v0, p0, Lcom/mediatek/emcamera/Utils$1$1;->this$0:Lcom/mediatek/emcamera/Utils$1;

    iget-object v0, v0, Lcom/mediatek/emcamera/Utils$1;->val$activity:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->finish()V

    .line 370
    return-void
.end method
