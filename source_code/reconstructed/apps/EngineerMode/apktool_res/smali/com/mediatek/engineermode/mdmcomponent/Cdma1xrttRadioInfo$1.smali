.class Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo$1;
.super Ljava/util/HashMap;
.source "MDMComponentC2k.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;)V
    .locals 3
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;

    .line 62
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 64
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "LANT"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 65
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "UANT"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 66
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v2, "LANT(\')"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 67
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 68
    const/4 v0, 0x4

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "-"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 69
    return-void
.end method
