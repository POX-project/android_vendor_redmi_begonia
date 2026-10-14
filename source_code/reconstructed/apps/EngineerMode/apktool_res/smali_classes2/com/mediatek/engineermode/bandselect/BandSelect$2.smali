.class Lcom/mediatek/engineermode/bandselect/BandSelect$2;
.super Ljava/lang/Object;
.source "BandSelect.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/bandselect/BandSelect;->onCreateDialog(I)Landroid/app/Dialog;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bandselect/BandSelect;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/bandselect/BandSelect;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/bandselect/BandSelect;

    .line 911
    iput-object p1, p0, Lcom/mediatek/engineermode/bandselect/BandSelect$2;->this$0:Lcom/mediatek/engineermode/bandselect/BandSelect;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 3
    .param p1, "dialog"    # Landroid/content/DialogInterface;
    .param p2, "which"    # I

    .line 914
    iget-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect$2;->this$0:Lcom/mediatek/engineermode/bandselect/BandSelect;

    invoke-static {v0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->access$1100(Lcom/mediatek/engineermode/bandselect/BandSelect;)[J

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/bandselect/BandSelect;->access$1002(Lcom/mediatek/engineermode/bandselect/BandSelect;[J)[J

    .line 915
    iget-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect$2;->this$0:Lcom/mediatek/engineermode/bandselect/BandSelect;

    invoke-static {v0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->access$1200(Lcom/mediatek/engineermode/bandselect/BandSelect;)J

    move-result-wide v1

    invoke-static {v0, v1, v2}, Lcom/mediatek/engineermode/bandselect/BandSelect;->access$802(Lcom/mediatek/engineermode/bandselect/BandSelect;J)J

    .line 916
    iget-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect$2;->this$0:Lcom/mediatek/engineermode/bandselect/BandSelect;

    invoke-static {v0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->access$1300(Lcom/mediatek/engineermode/bandselect/BandSelect;)V

    .line 917
    iget-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect$2;->this$0:Lcom/mediatek/engineermode/bandselect/BandSelect;

    invoke-static {v0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->access$1000(Lcom/mediatek/engineermode/bandselect/BandSelect;)[J

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/bandselect/BandSelect;->access$1400(Lcom/mediatek/engineermode/bandselect/BandSelect;[J)V

    .line 918
    invoke-interface {p1}, Landroid/content/DialogInterface;->dismiss()V

    .line 919
    return-void
.end method
