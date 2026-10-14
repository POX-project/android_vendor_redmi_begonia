.class Lcom/mediatek/engineermode/rttn/RtnInfo$1;
.super Ljava/lang/Object;
.source "RtnInfo.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/rttn/RtnInfo;->showInfoDialog(Landroid/content/Context;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rttn/RtnInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rttn/RtnInfo;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/rttn/RtnInfo;

    .line 110
    iput-object p1, p0, Lcom/mediatek/engineermode/rttn/RtnInfo$1;->this$0:Lcom/mediatek/engineermode/rttn/RtnInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 1
    .param p1, "dialog"    # Landroid/content/DialogInterface;
    .param p2, "id"    # I

    .line 112
    invoke-interface {p1}, Landroid/content/DialogInterface;->cancel()V

    .line 113
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/RtnInfo$1;->this$0:Lcom/mediatek/engineermode/rttn/RtnInfo;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/rttn/RtnInfo;->finish()V

    .line 114
    return-void
.end method
