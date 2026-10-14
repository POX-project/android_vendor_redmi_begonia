.class Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$MsgHandler;
.super Landroid/os/Handler;
.source "OtaAirplaneModeActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "MsgHandler"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;)V
    .locals 0

    .line 374
    iput-object p1, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$MsgHandler;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;
    .param p2, "x1"    # Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;

    .line 374
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$MsgHandler;-><init>(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 3
    .param p1, "msg"    # Landroid/os/Message;

    .line 377
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 385
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$MsgHandler;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    const/high16 v1, -0x10000

    const-string v2, "PSD disabled timeout:Call OTA Request"

    invoke-static {v0, v2, v1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$300(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Ljava/lang/String;I)V

    .line 386
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$MsgHandler;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$500(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;)V

    goto :goto_0

    .line 379
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$MsgHandler;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$900(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Z)V

    .line 380
    invoke-static {}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$1004()I

    .line 381
    invoke-static {}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$1100()Landroid/widget/TextView;

    move-result-object v0

    invoke-static {}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$1000()I

    move-result v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 382
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$MsgHandler;->this$0:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Set AirplaneMode off, mCount: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$1000()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->access$1200(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Ljava/lang/String;)V

    .line 383
    nop

    .line 389
    :goto_0
    return-void
.end method
