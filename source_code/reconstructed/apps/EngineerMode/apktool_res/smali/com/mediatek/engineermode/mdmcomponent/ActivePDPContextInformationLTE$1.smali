.class Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE$1;
.super Ljava/util/HashMap;
.source "MDMComponent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;

    .line 6154
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 6156
    const/16 v0, 0x21

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "IPV4"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 6157
    const/16 v0, 0x57

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "IPV6"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 6158
    const/16 v0, 0x8d

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "IPV4V6"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 6159
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "PPP"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 6160
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "OSP_IMOSS"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 6161
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "NULL_PDP"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ActivePDPContextInformationLTE$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 6162
    return-void
.end method
