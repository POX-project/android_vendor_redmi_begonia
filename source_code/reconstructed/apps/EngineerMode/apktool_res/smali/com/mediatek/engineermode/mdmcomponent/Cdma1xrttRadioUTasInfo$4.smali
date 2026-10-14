.class Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$4;
.super Ljava/util/ArrayList;
.source "MDMComponentC2k.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;)V
    .locals 3
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;

    .line 275
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$4;->this$0:Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;

    invoke-direct {p0}, Ljava/util/ArrayList;-><init>()V

    .line 276
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$4;->this$0:Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;

    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->labelsList:Ljava/util/List;

    const/4 v2, 0x0

    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [Ljava/lang/Object;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$4;->add(Ljava/lang/Object;)Z

    .line 277
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$4;->this$0:Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;

    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->labelsList:Ljava/util/List;

    const/4 v2, 0x1

    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [Ljava/lang/Object;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$4;->add(Ljava/lang/Object;)Z

    .line 278
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$4;->this$0:Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;

    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->labelsList:Ljava/util/List;

    const/4 v2, 0x2

    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [Ljava/lang/Object;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->initArrayHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$4;->add(Ljava/lang/Object;)Z

    .line 279
    return-void
.end method
