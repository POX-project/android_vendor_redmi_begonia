.class Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$2;
.super Ljava/lang/Object;
.source "RfDesenseTxTest.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->onCreateDialog(I)Landroid/app/Dialog;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    .line 852
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$2;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 1
    .param p1, "dialog"    # Landroid/content/DialogInterface;
    .param p2, "which"    # I

    .line 855
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$2;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->finish()V

    .line 856
    return-void
.end method
