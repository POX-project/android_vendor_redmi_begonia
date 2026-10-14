.class Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$3;
.super Ljava/util/HashMap;
.source "McfConfigActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 204
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$3;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 206
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SUCCESS"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 207
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "MCF_DSBP_ONGOING"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 208
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SIM_SWITCH_ONGOING"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 209
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ONGOING_CALL_OR_ECBM"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 210
    const/4 v0, 0x4

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "NO_SIM"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 211
    const/4 v0, 0x5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "NOT_MODE2"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 212
    const/4 v0, 0x6

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "SIM_ERROR"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 213
    const/4 v0, 0x7

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "UNKNOWN"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 214
    return-void
.end method
