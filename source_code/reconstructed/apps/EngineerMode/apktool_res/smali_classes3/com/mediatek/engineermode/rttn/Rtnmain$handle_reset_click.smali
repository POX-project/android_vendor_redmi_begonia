.class Lcom/mediatek/engineermode/rttn/Rtnmain$handle_reset_click;
.super Ljava/lang/Object;
.source "Rtnmain.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/rttn/Rtnmain;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "handle_reset_click"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/rttn/Rtnmain;)V
    .locals 0

    .line 1141
    iput-object p1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_reset_click;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/rttn/Rtnmain;Lcom/mediatek/engineermode/rttn/Rtnmain$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/rttn/Rtnmain;
    .param p2, "x1"    # Lcom/mediatek/engineermode/rttn/Rtnmain$1;

    .line 1141
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_reset_click;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain;)V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2
    .param p1, "view"    # Landroid/view/View;

    .line 1144
    new-instance v0, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;

    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_reset_click;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-direct {v0, v1}, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain;)V

    const-string v1, "Rtn_msl"

    filled-new-array {v1}, [Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 1145
    return-void
.end method
