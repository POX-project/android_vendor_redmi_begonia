.class Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$2;
.super Ljava/util/HashMap;
.source "IotConfigConstant.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/iotconfig/IotConfigConstant;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/util/HashMap<",
        "Ljava/lang/String;",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# direct methods
.method constructor <init>()V
    .locals 3

    .line 181
    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 183
    const-string v0, "Element content type"

    const-string v1, "String"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 184
    const-string v0, "AUID"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 185
    const-string v0, "XCAP Root"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 186
    const-string v0, "RuleID CFU"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 187
    const-string v0, "RuleID CFB"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 188
    const-string v0, "RuleID CFNRy"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 189
    const-string v0, "RuleID CFNRc"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 190
    const-string v0, "RuleID CFNL"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 191
    const-string v0, "Digest user ID"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 192
    const-string v0, "Digest Password"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 193
    const-string v0, "XCAP port"

    const-string v2, "int"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 194
    const-string v0, "Media type"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 195
    const-string v0, "Data keep alive timer"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 196
    const-string v0, "Data connection time out"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 197
    const-string v0, "Disconnect data PDN timer"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 198
    const-string v0, "Gba Bsf server Url"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 199
    const-string v0, "Gba trust all"

    const-string v2, "boolean"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 200
    const-string v0, "Gba force run"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 201
    const-string v0, "Gba type"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$2;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 202
    return-void
.end method
