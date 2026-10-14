.class Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;
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

    .line 331
    invoke-direct {p0}, Ljava/util/LinkedHashMap;-><init>()V

    .line 333
    const-string v0, "XCAP Protocol"

    const-string v1, "persist.vendor.ss.xcap.xcap_protocol"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 334
    const-string v0, "XCAP Root"

    const-string v1, "persist.vendor.ss.xcap.xcap_url"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 335
    const-string v0, "AUID"

    const-string v1, "persist.vendor.ss.xcap.auid"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 336
    const-string v0, "Digest User ID"

    const-string v1, "persist.vendor.ss.xcap.digest_id"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 337
    const-string v0, "Digest User Password"

    const-string v1, "persist.vendor.ss.xcap.digest_pwd"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 338
    const-string v0, "Phone Context Domain"

    const-string v1, "persist.vendor.ss.xcap.phone_context"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 339
    const-string v0, "Rule ID for CFU"

    const-string v1, "persist.vendor.ss.xcap.ruleid_cfu"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 340
    const-string v0, "Rule ID for CFB"

    const-string v1, "persist.vendor.ss.xcap.ruleid_cfb"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 341
    const-string v0, "Rule ID for CFNRY"

    const-string v1, "persist.vendor.ss.xcap.ruleid_cfnry"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 342
    const-string v0, "Rule ID for CFNRC"

    const-string v1, "persist.vendor.ss.xcap.ruleid_cfnrc"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 343
    const-string v0, "Rule ID for CFNL"

    const-string v1, "persist.vendor.ss.xcap.ruleid_cfnl"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 344
    const-string v0, "Rule ID for BAOC"

    const-string v1, "persist.vendor.ss.xcap.ruleid_baoc"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 345
    const-string v0, "Rule ID for BAOIC"

    const-string v1, "persist.vendor.ss.xcap.ruleid_baoic"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 346
    const-string v0, "Rule ID for BAOICxh"

    const-string v1, "persist.vendor.ss.xcap.ruleid_baoicxh"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 347
    const-string v0, "Rule ID for BAIC"

    const-string v1, "persist.vendor.ss.xcap.ruleid_baic"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 348
    const-string v0, "Rule ID for BAICr"

    const-string v1, "persist.vendor.ss.xcap.ruleid_baicr"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 350
    const-string v0, "GBA Protocol"

    const-string v1, "persist.vendor.ss.gba.gba_protocol"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 351
    const-string v0, "GBA BSF URL"

    const-string v1, "persist.vendor.ss.gba.gba_url"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 352
    const-string v0, "GBA BSF Path"

    const-string v1, "persist.vendor.ss.gba.gba_url_path"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 353
    const-string v0, "IMEI Header"

    const-string v1, "persist.vendor.ss.gba.imei_header"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 354
    const-string v0, "GBA Type"

    const-string v1, "persist.vendor.ss.gba.gba_type"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 355
    const-string v0, "GBA Port"

    const-string v1, "persist.vendor.ss.gba.gba_port"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 356
    const-string v0, "GBA Connection Timeout"

    const-string v1, "persist.vendor.ss.gba.gba_connection_timeout"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 357
    const-string v0, "GBA Retry Times"

    const-string v1, "persist.vendor.ss.gba.gba_retry_times"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 358
    const-string v0, "GBA REALM"

    const-string v1, "persist.vendor.ss.gba.gba_realm"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 360
    const-string v0, "User Agent Prefix"

    const-string v1, "persist.vendor.ss.xcap.user_agent_prefix"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 361
    const-string v0, "User Agent Model"

    const-string v1, "persist.vendor.ss.xcap.user_agent_model"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 362
    const-string v0, "User Agent default String"

    const-string v1, "persist.vendor.ss.xcap.user_agent_default"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 363
    const-string v0, "XCAP Cache Level"

    const-string v1, "persist.vendor.ss.xcap.cache_level"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 364
    const-string v0, "XCAP Port"

    const-string v1, "persist.vendor.ss.xcap.xcap_port"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 365
    const-string v0, "Media Type"

    const-string v1, "persist.vendor.ss.xcap.media_type"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 366
    const-string v0, "URL Encoding"

    const-string v1, "persist.vendor.ss.xcap.url_encoding"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 367
    const-string v0, "XCAP Connection Timeout"

    const-string v1, "persist.vendor.ss.xcap.xcap_connection_timeout"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 368
    const-string v0, "XCAP Retry Times"

    const-string v1, "persist.vendor.ss.xcap.xcap_retry_times"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 370
    const-string v0, "APN Selection Rule"

    const-string v1, "persist.vendor.ss.cm.apn_selection_rule"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 371
    const-string v0, "PDN Releasing Timer"

    const-string v1, "persist.vendor.ss.cm.pdn_releasing_timer"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 372
    const-string v0, "PDN wait PS Registered time"

    const-string v1, "persist.vendor.ss.cm.pdn_wait_ps_reg_time"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 373
    const-string v0, "PDN Retry Times"

    const-string v1, "persist.vendor.ss.cm.pdn_retry_times"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 374
    const-string v0, "PDN REJECT CODE 0 FOR CSFB"

    const-string v1, "persist.vendor.ss.cm.pdn_reject_code_0"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 375
    const-string v0, "PDN REJECT CODE 1 FOR CSFB"

    const-string v1, "persist.vendor.ss.cm.pdn_reject_code_1"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 376
    const-string v0, "PDN REJECT CODE 2 FOR CSFB"

    const-string v1, "persist.vendor.ss.cm.pdn_reject_code_2"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 377
    const-string v0, "PDN REJECT CODE 3 FOR CSFB"

    const-string v1, "persist.vendor.ss.cm.pdn_reject_code_3"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 378
    const-string v0, "PDN REJECT CODE 4 FOR CSFB"

    const-string v1, "persist.vendor.ss.cm.pdn_reject_code_4"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 379
    const-string v0, "PDN REJECT CODE 5 FOR CSFB"

    const-string v1, "persist.vendor.ss.cm.pdn_reject_code_5"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 380
    const-string v0, "PDN REJECT CODE 6 FOR CSFB"

    const-string v1, "persist.vendor.ss.cm.pdn_reject_code_6"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 381
    const-string v0, "PDN REJECT CODE 7 FOR CSFB"

    const-string v1, "persist.vendor.ss.cm.pdn_reject_code_7"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 382
    const-string v0, "PDN REJECT CODE 8 FOR CSFB"

    const-string v1, "persist.vendor.ss.cm.pdn_reject_code_8"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 383
    const-string v0, "PDN REJECT CODE 9 FOR CSFB"

    const-string v1, "persist.vendor.ss.cm.pdn_reject_code_9"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 384
    const-string v0, "PDN REJECT CODE 10 FOR CSFB"

    const-string v1, "persist.vendor.ss.cm.pdn_reject_code_10"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 385
    const-string v0, "PDN REJECT CODE 11 FOR CSFB"

    const-string v1, "persist.vendor.ss.cm.pdn_reject_code_11"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 386
    const-string v0, "PDN REJECT CODE 12 FOR CSFB"

    const-string v1, "persist.vendor.ss.cm.pdn_reject_code_12"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 387
    const-string v0, "PDN REJECT CODE 13 FOR CSFB"

    const-string v1, "persist.vendor.ss.cm.pdn_reject_code_13"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 388
    const-string v0, "PDN REJECT CODE 14 FOR CSFB"

    const-string v1, "persist.vendor.ss.cm.pdn_reject_code_14"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 389
    const-string v0, "PDN REJECT CODE 15 FOR CSFB"

    const-string v1, "persist.vendor.ss.cm.pdn_reject_code_15"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 391
    const-string v0, "DNS IPv4/v6 Preference"

    const-string v1, "persist.vendor.ss.http.dns_server_ipv4v6_priority"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant$5;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 392
    return-void
.end method
