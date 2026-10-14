.class Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$1;
.super Ljava/util/HashMap;
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
        "Ljava/util/HashMap<",
        "Ljava/lang/Integer;",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;

    .line 227
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 229
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "B34"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 230
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "B39"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 231
    const/4 v0, 0x5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "-"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 232
    return-void
.end method
