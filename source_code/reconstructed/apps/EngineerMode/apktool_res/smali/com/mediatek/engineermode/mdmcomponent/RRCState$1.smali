.class Lcom/mediatek/engineermode/mdmcomponent/RRCState$1;
.super Ljava/util/HashMap;
.source "MDMComponent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/RRCState;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/RRCState;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/RRCState;)V
    .locals 5
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/RRCState;

    .line 2164
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCState$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/RRCState;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 2166
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Idle"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/RRCState$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2167
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Cell FACH"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/RRCState$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2168
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v2, "Cell PCH"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/RRCState$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2169
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v3, "URA PCH"

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/RRCState$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2170
    const/4 v0, 0x4

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v4, "Cell DCH"

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/RRCState$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2171
    const/4 v0, 0x5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v4, ""

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/RRCState$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2172
    const/4 v0, 0x6

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v4, "NO_CHANGE"

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/RRCState$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2173
    const/4 v0, 0x7

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/RRCState$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2174
    const/16 v0, 0x8

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/RRCState$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2175
    const/16 v0, 0x9

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/RRCState$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2176
    const/16 v0, 0xa

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/RRCState$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2177
    const/16 v0, 0xb

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/RRCState$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2178
    const/16 v0, 0xc

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/RRCState$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2179
    const/16 v0, 0xd

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/RRCState$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2181
    return-void
.end method
