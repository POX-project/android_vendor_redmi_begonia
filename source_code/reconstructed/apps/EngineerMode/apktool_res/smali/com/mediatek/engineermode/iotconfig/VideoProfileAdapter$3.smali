.class Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$3;
.super Ljava/lang/Object;
.source "VilteConfigFragment.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->showSpinnerDialog(Landroid/view/View;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    .line 736
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$3;->this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 0
    .param p1, "dialog"    # Landroid/content/DialogInterface;
    .param p2, "id"    # I

    .line 738
    invoke-interface {p1}, Landroid/content/DialogInterface;->cancel()V

    .line 739
    return-void
.end method
