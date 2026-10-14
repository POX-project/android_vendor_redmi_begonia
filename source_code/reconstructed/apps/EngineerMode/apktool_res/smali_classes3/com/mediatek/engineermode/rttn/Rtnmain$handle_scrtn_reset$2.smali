.class Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset$2;
.super Ljava/lang/Object;
.source "Rtnmain.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;->onClick(Landroid/view/View;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;)V
    .locals 0
    .param p1, "this$1"    # Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;

    .line 1119
    iput-object p1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset$2;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 1
    .param p1, "dialog"    # Landroid/content/DialogInterface;
    .param p2, "which"    # I

    .line 1122
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset$2;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;

    iget-object v0, v0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->finish()V

    .line 1123
    return-void
.end method
