.class Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$4;
.super Ljava/util/HashMap;
.source "MDMComponentFT.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V
    .locals 4
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    .line 225
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$4;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 227
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Initial"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 228
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Standby"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 229
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Idle"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 230
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v2, "Connected"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 231
    const/4 v0, 0x4

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v3, "Flight"

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 232
    const/4 v0, 0x5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 233
    const/4 v0, 0x6

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 234
    return-void
.end method
