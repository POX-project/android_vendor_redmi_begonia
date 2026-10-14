.class Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo$1;
.super Ljava/util/HashMap;
.source "MDMComponentC2k.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;

    .line 1235
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 1237
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "INACTIVE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1238
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ACQUISITION"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1239
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SYNC"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1240
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "IDLE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1241
    const/4 v0, 0x4

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ACCESS"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1242
    const/4 v0, 0x5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CONNECTED"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1243
    const/4 v0, 0x6

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "STATE NUM"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1244
    return-void
.end method
