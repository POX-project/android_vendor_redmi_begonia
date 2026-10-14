.class Lcom/mediatek/engineermode/wifi/WifiFormatConfig$6;
.super Ljava/util/LinkedHashMap;
.source "WifiFormatConfig.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->initRuConfigList()Ljava/util/HashMap;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/util/LinkedHashMap<",
        "Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;",
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

    .line 168
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$6;->this$0:Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    invoke-direct {p0}, Ljava/util/LinkedHashMap;-><init>()V

    .line 170
    sget-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->RU_CONFIG_26by9:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    const/16 v1, 0x49

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$6;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 171
    sget-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->RU_CONFIG_52by4:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    const/16 v1, 0x1f

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$6;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 172
    sget-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->RU_CONFIG_106by2:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    const/16 v1, 0xf

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$6;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 173
    sget-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->RU_CONFIG_242by1:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    const/4 v1, 0x7

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$6;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 174
    sget-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->RU_CONFIG_484by1:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    const/4 v1, 0x3

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$6;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 175
    sget-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->RU_CONFIG_996by1:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    const/4 v1, 0x1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$6;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 176
    return-void
.end method
