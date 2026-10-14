.class Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo$4;
.super Ljava/util/HashMap;
.source "MDMComponent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;

    .line 1945
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo$4;->this$0:Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 1947
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "RRC Idle"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1948
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "RRC Connected"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1949
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "-"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LteUTasInfo$4;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1950
    return-void
.end method
