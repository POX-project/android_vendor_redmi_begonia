.class Lcom/mediatek/engineermode/forceant/ForceTx97$3;
.super Ljava/lang/Object;
.source "ForceTx97.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/forceant/ForceTx97;->onCreateDialog(I)Landroid/app/Dialog;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/forceant/ForceTx97;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/forceant/ForceTx97;

    .line 782
    iput-object p1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$3;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 1
    .param p1, "dialog"    # Landroid/content/DialogInterface;
    .param p2, "which"    # I

    .line 785
    const/4 v0, -0x1

    if-ne p2, v0, :cond_0

    .line 786
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$3;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->execTheCmd()V

    .line 788
    :cond_0
    invoke-interface {p1}, Landroid/content/DialogInterface;->dismiss()V

    .line 789
    return-void
.end method
