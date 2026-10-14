.class Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo$3;
.super Ljava/util/HashMap;
.source "MDMComponentICD.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;

    .line 4112
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo$3;->this$0:Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 4114
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "DISABLE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 4115
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ENABLE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo$3;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 4116
    return-void
.end method
