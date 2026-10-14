.class Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo$2;
.super Ljava/util/ArrayList;
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
        "Ljava/util/ArrayList<",
        "Ljava/util/LinkedHashMap;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;)V
    .locals 3
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;

    .line 4107
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo$2;->this$0:Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;

    invoke-direct {p0}, Ljava/util/ArrayList;-><init>()V

    .line 4108
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo$2;->this$0:Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;

    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelsList:Ljava/util/List;

    const/4 v2, 0x0

    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [Ljava/lang/Object;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo$2;->add(Ljava/lang/Object;)Z

    .line 4109
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo$2;->this$0:Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;

    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelsList:Ljava/util/List;

    const/4 v2, 0x1

    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [Ljava/lang/Object;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo$2;->add(Ljava/lang/Object;)Z

    .line 4110
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo$2;->this$0:Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;

    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelsList:Ljava/util/List;

    const/4 v2, 0x2

    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [Ljava/lang/Object;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->initArrayHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo$2;->add(Ljava/lang/Object;)Z

    .line 4111
    return-void
.end method
