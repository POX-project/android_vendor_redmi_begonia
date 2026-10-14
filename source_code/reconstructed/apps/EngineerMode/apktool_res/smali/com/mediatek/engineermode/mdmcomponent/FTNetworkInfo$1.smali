.class Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$1;
.super Ljava/util/HashSet;
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
        "Ljava/util/HashSet<",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;)V
    .locals 1
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    .line 183
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo;

    invoke-direct {p0}, Ljava/util/HashSet;-><init>()V

    .line 185
    const-string v0, "MSG_ID_FDD_EM_URR_3G_GENERAL_STATUS_IND"

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$1;->add(Ljava/lang/Object;)Z

    .line 186
    const-string v0, "MSG_ID_TDD_EM_URR_3G_GENERAL_STATUS_IND"

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/FTNetworkInfo$1;->add(Ljava/lang/Object;)Z

    .line 187
    return-void
.end method
