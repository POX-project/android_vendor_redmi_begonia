.class Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;
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
    .locals 9
    .param p1, "this$0"    # Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    .line 73
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->this$0:Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    invoke-direct {p0}, Ljava/util/LinkedHashMap;-><init>()V

    .line 75
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "1M"

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 76
    const/4 v1, 0x1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "2M"

    invoke-virtual {p0, v2, v1}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 77
    const/4 v2, 0x2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const-string v3, "5.5M"

    invoke-virtual {p0, v3, v2}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 78
    const/4 v3, 0x3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    const-string v4, "11M"

    invoke-virtual {p0, v4, v3}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 79
    const-string v4, "6M"

    invoke-virtual {p0, v4, v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 80
    const-string v4, "9M"

    invoke-virtual {p0, v4, v1}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 81
    const-string v4, "12M"

    invoke-virtual {p0, v4, v2}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 82
    const-string v4, "18M"

    invoke-virtual {p0, v4, v3}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 83
    const/4 v4, 0x4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    const-string v5, "24M"

    invoke-virtual {p0, v5, v4}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 84
    const/4 v5, 0x5

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    const-string v6, "36M"

    invoke-virtual {p0, v6, v5}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 85
    const/4 v6, 0x6

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    const-string v7, "48M"

    invoke-virtual {p0, v7, v6}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 86
    const/4 v7, 0x7

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    const-string v8, "54M"

    invoke-virtual {p0, v8, v7}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 87
    const-string v8, "MCS0"

    invoke-virtual {p0, v8, v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 88
    const-string v0, "MCS1"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 89
    const-string v0, "MCS2"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 90
    const-string v0, "MCS3"

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 91
    const-string v0, "MCS4"

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 92
    const-string v0, "MCS5"

    invoke-virtual {p0, v0, v5}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 93
    const-string v0, "MCS6"

    invoke-virtual {p0, v0, v6}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 94
    const-string v0, "MCS7"

    invoke-virtual {p0, v0, v7}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 95
    const/16 v0, 0x8

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "MCS8"

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 96
    const/16 v0, 0x9

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "MCS9"

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 97
    const/16 v0, 0xa

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "MCS10"

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 98
    const/16 v0, 0xb

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "MCS11"

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 99
    const/16 v0, 0xc

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "MCS12"

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 100
    const/16 v0, 0xd

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "MCS13"

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 101
    const/16 v0, 0xe

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "MCS14"

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 102
    const/16 v0, 0xf

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "MCS15"

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 103
    const/16 v0, 0x20

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "MCS32"

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 104
    const-string v1, "MCS0 DCM"

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 105
    const/16 v1, 0x21

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "MCS1 DCM"

    invoke-virtual {p0, v2, v1}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 106
    const-string v2, "MCS0-242 DCM"

    invoke-virtual {p0, v2, v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 107
    const-string v0, "MCS1-242 DCM"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 108
    const/16 v0, 0x30

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "MCS0-106 DCM"

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 109
    return-void
.end method
