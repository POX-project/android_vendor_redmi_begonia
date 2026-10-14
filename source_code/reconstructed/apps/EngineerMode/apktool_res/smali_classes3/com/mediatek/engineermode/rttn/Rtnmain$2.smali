.class Lcom/mediatek/engineermode/rttn/Rtnmain$2;
.super Ljava/lang/Object;
.source "Rtnmain.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/rttn/Rtnmain;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rttn/Rtnmain;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/rttn/Rtnmain;

    .line 875
    iput-object p1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$2;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 878
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Runnable called after 2s expiry waiting for polling result"

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 879
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$2;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-static {v0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1600(Lcom/mediatek/engineermode/rttn/Rtnmain;)Z

    .line 880
    return-void
.end method
