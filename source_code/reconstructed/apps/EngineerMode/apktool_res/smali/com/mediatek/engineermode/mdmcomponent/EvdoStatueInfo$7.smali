.class Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo$7;
.super Ljava/util/HashMap;
.source "MDMComponentC2k.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;

    .line 1067
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo$7;->this$0:Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 1069
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CSP_INACTIVE_STATE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo$7;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1070
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CSP_CLOSING_STATE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo$7;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1071
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "CSP_OPEN_STATE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EvdoStatueInfo$7;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1072
    return-void
.end method
