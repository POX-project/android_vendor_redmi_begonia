.class Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$1;
.super Ljava/util/LinkedHashMap;
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
        "Ljava/util/LinkedHashMap<",
        "Ljava/lang/String;",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# direct methods
.method constructor <init>()V
    .locals 2

    .line 157
    invoke-direct {p0}, Ljava/util/LinkedHashMap;-><init>()V

    .line 159
    const-string v0, "Element content type"

    const-string v1, "persist.vendor.ss.contenttype"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 160
    const-string v0, "AUID"

    const-string v1, "persist.vendor.ss.auid"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 161
    const-string v0, "XCAP Root"

    const-string v1, "persist.vendor.ss.xcaproot"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 162
    const-string v0, "RuleID CFU"

    const-string v1, "persist.vendor.ss.ruleid.cfu"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 163
    const-string v0, "RuleID CFB"

    const-string v1, "persist.vendor.ss.ruleid.cfb"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 164
    const-string v0, "RuleID CFNRy"

    const-string v1, "persist.vendor.ss.ruleid.cfnry"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 165
    const-string v0, "RuleID CFNRc"

    const-string v1, "persist.vendor.ss.ruleid.cfnrc"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 166
    const-string v0, "RuleID CFNL"

    const-string v1, "persist.vendor.ss.ruleid.cfnl"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 167
    const-string v0, "Digest user ID"

    const-string v1, "persist.vendor.ss.digest.id"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 168
    const-string v0, "Digest Password"

    const-string v1, "persist.vendor.ss.digest.pwd"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 169
    const-string v0, "XCAP port"

    const-string v1, "persist.vendor.ss.xcapport"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 170
    const-string v0, "Media type"

    const-string v1, "persist.vendor.ss.mediatype"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 171
    const-string v0, "Data keep alive timer"

    const-string v1, "persist.vendor.ss.alivetimer"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 172
    const-string v0, "Data connection time out"

    const-string v1, "persist.vendor.ss.reqtimer"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 173
    const-string v0, "Disconnect data PDN timer"

    const-string v1, "persist.vendor.ss.cdtimer"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 174
    const-string v0, "Gba Bsf server Url"

    const-string v1, "persist.vendor.ss.gba.bsfserverurl"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 175
    const-string v0, "Gba trust all"

    const-string v1, "persist.vendor.ss.gba.enablegbatrustall"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 176
    const-string v0, "Gba force run"

    const-string v1, "persist.vendor.ss.gba.enablegbaforcerun"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 177
    const-string v0, "Gba type"

    const-string v1, "persist.vendor.ss.gba.gbatype"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 178
    return-void
.end method
