.class Lcom/mediatek/engineermode/wifi/WifiFormatConfig$1;
.super Ljava/util/LinkedHashMap;
.source "WifiFormatConfig.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/wifi/WifiFormatConfig;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/util/LinkedHashMap<",
        "Ljava/lang/String;",
        "Ljava/lang/Integer;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/wifi/WifiFormatConfig;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/wifi/WifiFormatConfig;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    .line 21
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$1;->this$0:Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    invoke-direct {p0}, Ljava/util/LinkedHashMap;-><init>()V

    .line 23
    const/4 v0, 0x4

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "BW5"

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 24
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "BW10"

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 25
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "BW20"

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 26
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "BW40"

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 27
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "BW80"

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 28
    const/4 v0, 0x5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "BW160c"

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 30
    return-void
.end method
