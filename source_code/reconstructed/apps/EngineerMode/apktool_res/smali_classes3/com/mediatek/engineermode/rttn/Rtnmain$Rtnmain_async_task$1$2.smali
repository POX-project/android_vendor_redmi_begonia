.class Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1$2;
.super Ljava/lang/Object;
.source "Rtnmain.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;->onClick(Landroid/content/DialogInterface;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$2:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;)V
    .locals 0
    .param p1, "this$2"    # Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;

    .line 177
    iput-object p1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1$2;->this$2:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 1
    .param p1, "dialog"    # Landroid/content/DialogInterface;
    .param p2, "which"    # I

    .line 180
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1$2;->this$2:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;

    iget-object v0, v0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$1;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;

    iget-object v0, v0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->finish()V

    .line 181
    return-void
.end method
