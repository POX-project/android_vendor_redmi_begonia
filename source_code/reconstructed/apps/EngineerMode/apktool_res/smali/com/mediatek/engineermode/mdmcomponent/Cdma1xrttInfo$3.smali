.class Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$3;
.super Ljava/util/HashMap;
.source "MDMComponentC2k.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/util/HashMap<",
        "Ljava/lang/Integer;",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;

    .line 516
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$3;->this$0:Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 518
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CP_DISABLED"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 519
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CP_SYS_DETERMINATION"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 520
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CP_PILOT_ACQUISITION"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 521
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CP_SYNC_ACQUISITION"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 522
    const/4 v0, 0x4

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CP_TIMING_CHANGE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 523
    const/4 v0, 0x5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CP_IDLE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 524
    const/4 v0, 0x6

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CP_UPDATE_OHD_INFO"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 525
    const/4 v0, 0x7

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CP_ORD_MSG_RESP"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 526
    const/16 v0, 0x8

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CP_ORIGINATION"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 527
    const/16 v0, 0x9

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CP_REGISTRATION"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 529
    const/16 v0, 0xa

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CP_MSG_TRANSMISSION"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 530
    const/16 v0, 0xb

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CP_TC_INIT"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 531
    const/16 v0, 0xc

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CP_TC_WAIT_ORDER"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 532
    const/16 v0, 0xd

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CP_TC_WAIT_ANSWER"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 533
    const/16 v0, 0xe

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CP_TC_CONVERSATION"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 535
    const/16 v0, 0xf

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CP_TC_RELEASE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 536
    const/16 v0, 0x10

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CP_NST"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 537
    const/16 v0, 0x11

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CP_FROZEN"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 538
    const/16 v0, 0x12

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CP_TC_FROZEN"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 540
    return-void
.end method
