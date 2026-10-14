.class Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$3;
.super Ljava/lang/Object;
.source "MDMComponentDetailActivity.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->onCreateDialog(ILandroid/os/Bundle;)Landroid/app/Dialog;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    .line 474
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$3;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 1
    .param p1, "dialog"    # Landroid/content/DialogInterface;
    .param p2, "which"    # I

    .line 476
    invoke-interface {p1}, Landroid/content/DialogInterface;->dismiss()V

    .line 477
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$3;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->finish()V

    .line 478
    return-void
.end method
