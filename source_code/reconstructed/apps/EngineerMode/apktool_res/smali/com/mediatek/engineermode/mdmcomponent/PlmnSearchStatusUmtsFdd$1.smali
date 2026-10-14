.class Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd$1;
.super Ljava/util/HashMap;
.source "MDMComponent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd;

    .line 5813
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 5815
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, ""

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5816
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Search any PLMN"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5817
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Search given PLMN"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5818
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Search any PLMN success"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5819
    const/4 v0, 0x4

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Search any PLMN failure"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5820
    const/4 v0, 0x5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Search given PLMN success"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5821
    const/4 v0, 0x6

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Search given PLMN failure"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5822
    const/4 v0, 0x7

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "Search PLMN abort"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/PlmnSearchStatusUmtsFdd$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5823
    return-void
.end method
