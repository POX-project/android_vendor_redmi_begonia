.class Lcom/mediatek/lbs/em2/ui/FileBrowser$2;
.super Ljava/lang/Object;
.source "FileBrowser.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/FileBrowser;->initWidget()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/FileBrowser;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/FileBrowser;)V
    .locals 0

    .line 57
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser$2;->this$0:Lcom/mediatek/lbs/em2/ui/FileBrowser;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 1

    .line 59
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser$2;->this$0:Lcom/mediatek/lbs/em2/ui/FileBrowser;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/mediatek/lbs/em2/ui/FileBrowser;->access$002(Lcom/mediatek/lbs/em2/ui/FileBrowser;Z)Z

    .line 60
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/FileBrowser$2;->this$0:Lcom/mediatek/lbs/em2/ui/FileBrowser;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/FileBrowser;->access$300(Lcom/mediatek/lbs/em2/ui/FileBrowser;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/mediatek/lbs/em2/ui/FileBrowser;->access$200(Lcom/mediatek/lbs/em2/ui/FileBrowser;Ljava/lang/String;)V

    return-void
.end method
