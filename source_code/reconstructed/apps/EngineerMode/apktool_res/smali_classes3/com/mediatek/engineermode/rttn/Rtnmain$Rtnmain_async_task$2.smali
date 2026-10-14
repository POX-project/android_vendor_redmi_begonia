.class Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$2;
.super Ljava/lang/Object;
.source "Rtnmain.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->onPostExecute(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;)V
    .locals 0
    .param p1, "this$1"    # Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;

    .line 193
    iput-object p1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$2;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 1
    .param p1, "dialog"    # Landroid/content/DialogInterface;
    .param p2, "which"    # I

    .line 196
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task$2;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;

    iget-object v0, v0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->finish()V

    .line 197
    return-void
.end method
