.class Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$6;
.super Ljava/lang/Object;
.source "ApnConfigFragment.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->showDialog(ILjava/lang/String;)Landroid/app/Dialog;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;

    .line 340
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$6;->this$0:Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 2
    .param p1, "dialog"    # Landroid/content/DialogInterface;
    .param p2, "id"    # I

    .line 343
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment$6;->this$0:Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;

    invoke-static {v0}, Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;->access$100(Lcom/mediatek/engineermode/iotconfig/ApnConfigFragment;)Landroid/widget/EditText;

    move-result-object v0

    const-string v1, ""

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 344
    invoke-interface {p1}, Landroid/content/DialogInterface;->cancel()V

    .line 345
    return-void
.end method
