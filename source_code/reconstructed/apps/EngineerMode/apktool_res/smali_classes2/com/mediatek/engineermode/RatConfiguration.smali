.class public Lcom/mediatek/engineermode/RatConfiguration;
.super Ljava/lang/Object;
.source "RatConfiguration.java"


# static fields
.field static final CDMA:Ljava/lang/String; = "C"

.field static final DELIMITER:Ljava/lang/String; = "/"

.field static final GSM:Ljava/lang/String; = "G"

.field private static final LOG_TAG:Ljava/lang/String; = "RatConfig"

.field static final LteFdd:Ljava/lang/String; = "Lf"

.field static final LteTdd:Ljava/lang/String; = "Lt"

.field public static final MASK_CDMA:I = 0x20

.field public static final MASK_GSM:I = 0x1

.field public static final MASK_LteFdd:I = 0x10

.field public static final MASK_LteTdd:I = 0x8

.field public static final MASK_NR:I = 0x40

.field public static final MASK_TDSCDMA:I = 0x2

.field public static final MASK_WCDMA:I = 0x4

.field protected static final MD_MODE_LCTG:I = 0x10

.field protected static final MD_MODE_LFWCG:I = 0xf

.field protected static final MD_MODE_LFWG:I = 0xe

.field protected static final MD_MODE_LTCTG:I = 0x11

.field protected static final MD_MODE_LTG:I = 0x8

.field protected static final MD_MODE_LTTG:I = 0xd

.field protected static final MD_MODE_LWCG:I = 0xb

.field protected static final MD_MODE_LWCTG:I = 0xc

.field protected static final MD_MODE_LWG:I = 0x9

.field protected static final MD_MODE_LWTG:I = 0xa

.field protected static final MD_MODE_UNKNOWN:I = 0x0

.field static final NR:Ljava/lang/String; = "N"

.field static final PROPERTY_BUILD_RAT_CONFIG:Ljava/lang/String; = "ro.vendor.mtk_protocol1_rat_config"

.field static final PROPERTY_IS_USING_DEFAULT_CONFIG:Ljava/lang/String; = "ro.boot.opt_using_default"

.field static final PROPERTY_RAT_CONFIG:Ljava/lang/String; = "ro.vendor.mtk_ps1_rat"

.field static final TDSCDMA:Ljava/lang/String; = "T"

.field static final WCDMA:Ljava/lang/String; = "W"

.field private static actived_rat:I

.field private static is_default_config:Z

.field private static max_rat:I

.field private static max_rat_initialized:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 76
    const/4 v0, 0x0

    sput v0, Lcom/mediatek/engineermode/RatConfiguration;->max_rat:I

    .line 77
    sput-boolean v0, Lcom/mediatek/engineermode/RatConfiguration;->max_rat_initialized:Z

    .line 78
    sput v0, Lcom/mediatek/engineermode/RatConfiguration;->actived_rat:I

    .line 79
    const/4 v0, 0x1

    sput-boolean v0, Lcom/mediatek/engineermode/RatConfiguration;->is_default_config:Z

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 39
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method protected static checkRatConfig(I)Z
    .locals 3
    .param p0, "iRat"    # I

    .line 138
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->getMaxRat()I

    move-result v0

    .line 139
    .local v0, "maxrat":I
    or-int v1, p0, v0

    if-ne v1, v0, :cond_0

    .line 140
    const/4 v1, 0x1

    return v1

    .line 142
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "checkRatConfig: FAIL with "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/mediatek/engineermode/RatConfiguration;->logd(Ljava/lang/String;)V

    .line 143
    const/4 v1, 0x0

    return v1
.end method

.method public static getActiveRatConfig()Ljava/lang/String;
    .locals 3

    .line 289
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->getRatConfig()I

    move-result v0

    invoke-static {v0}, Lcom/mediatek/engineermode/RatConfiguration;->ratToString(I)Ljava/lang/String;

    move-result-object v0

    .line 290
    .local v0, "rat":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getActiveRatConfig: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/mediatek/engineermode/RatConfiguration;->logd(Ljava/lang/String;)V

    .line 291
    return-object v0
.end method

.method protected static declared-synchronized getMaxRat()I
    .locals 4

    const-class v0, Lcom/mediatek/engineermode/RatConfiguration;

    monitor-enter v0

    .line 117
    :try_start_0
    sget-boolean v1, Lcom/mediatek/engineermode/RatConfiguration;->max_rat_initialized:Z

    if-nez v1, :cond_1

    .line 118
    const-string v1, "ro.vendor.mtk_protocol1_rat_config"

    const-string v2, ""

    invoke-static {v1, v2}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 119
    .local v1, "sMaxRat":Ljava/lang/String;
    invoke-static {v1}, Lcom/mediatek/engineermode/RatConfiguration;->ratToBitmask(Ljava/lang/String;)I

    move-result v2

    sput v2, Lcom/mediatek/engineermode/RatConfiguration;->max_rat:I

    .line 121
    const-string v2, "ro.boot.opt_using_default"

    const/4 v3, 0x1

    invoke-static {v2, v3}, Landroid/os/SystemProperties;->getInt(Ljava/lang/String;I)I

    move-result v2

    if-eqz v2, :cond_0

    .line 122
    move v2, v3

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    :goto_0
    sput-boolean v2, Lcom/mediatek/engineermode/RatConfiguration;->is_default_config:Z

    .line 123
    sput-boolean v3, Lcom/mediatek/engineermode/RatConfiguration;->max_rat_initialized:Z

    .line 127
    .end local v1    # "sMaxRat":Ljava/lang/String;
    :cond_1
    sget v1, Lcom/mediatek/engineermode/RatConfiguration;->max_rat:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return v1

    .line 116
    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method protected static getRatConfig()I
    .locals 3

    .line 152
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->getMaxRat()I

    move-result v0

    .line 153
    .local v0, "default_rat_config":I
    if-nez v0, :cond_0

    .line 154
    const/4 v1, 0x0

    sput v1, Lcom/mediatek/engineermode/RatConfiguration;->actived_rat:I

    .line 155
    return v1

    .line 157
    :cond_0
    sget-boolean v1, Lcom/mediatek/engineermode/RatConfiguration;->is_default_config:Z

    if-eqz v1, :cond_1

    .line 158
    sput v0, Lcom/mediatek/engineermode/RatConfiguration;->actived_rat:I

    .line 159
    return v0

    .line 161
    :cond_1
    const-string v1, "ro.vendor.mtk_ps1_rat"

    const-string v2, ""

    invoke-static {v1, v2}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 162
    .local v1, "rat":Ljava/lang/String;
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v2

    if-lez v2, :cond_2

    .line 163
    invoke-static {v1}, Lcom/mediatek/engineermode/RatConfiguration;->ratToBitmask(Ljava/lang/String;)I

    move-result v2

    sput v2, Lcom/mediatek/engineermode/RatConfiguration;->actived_rat:I

    .line 164
    invoke-static {v2}, Lcom/mediatek/engineermode/RatConfiguration;->checkRatConfig(I)Z

    move-result v2

    if-nez v2, :cond_3

    .line 165
    const-string v2, "getRatConfig: invalid PROPERTY_RAT_CONFIG, set to max_rat"

    invoke-static {v2}, Lcom/mediatek/engineermode/RatConfiguration;->logd(Ljava/lang/String;)V

    .line 166
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->getMaxRat()I

    move-result v2

    sput v2, Lcom/mediatek/engineermode/RatConfiguration;->actived_rat:I

    goto :goto_0

    .line 169
    :cond_2
    const-string v2, "getRatConfig: ger property PROPERTY_RAT_CONFIG fail, initialize"

    invoke-static {v2}, Lcom/mediatek/engineermode/RatConfiguration;->logd(Ljava/lang/String;)V

    .line 170
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->getMaxRat()I

    move-result v2

    sput v2, Lcom/mediatek/engineermode/RatConfiguration;->actived_rat:I

    .line 172
    :cond_3
    :goto_0
    sget v2, Lcom/mediatek/engineermode/RatConfiguration;->actived_rat:I

    return v2
.end method

.method public static isC2kSupported()Z
    .locals 2

    .line 217
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->getMaxRat()I

    move-result v0

    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->getRatConfig()I

    move-result v1

    and-int/2addr v0, v1

    const/16 v1, 0x20

    and-int/2addr v0, v1

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public static isGsmSupported()Z
    .locals 2

    .line 267
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->getMaxRat()I

    move-result v0

    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->getRatConfig()I

    move-result v1

    and-int/2addr v0, v1

    const/4 v1, 0x1

    and-int/2addr v0, v1

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method public static isLteFddSupported()Z
    .locals 2

    .line 227
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->getMaxRat()I

    move-result v0

    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->getRatConfig()I

    move-result v1

    and-int/2addr v0, v1

    const/16 v1, 0x10

    and-int/2addr v0, v1

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public static isLteTddSupported()Z
    .locals 2

    .line 237
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->getMaxRat()I

    move-result v0

    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->getRatConfig()I

    move-result v1

    and-int/2addr v0, v1

    const/16 v1, 0x8

    and-int/2addr v0, v1

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public static isNrSupported()Z
    .locals 3

    .line 277
    const-string v0, "vendor.em.nr.test"

    const-string v1, "0"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "1"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    .line 278
    return v1

    .line 280
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->getMaxRat()I

    move-result v0

    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->getRatConfig()I

    move-result v2

    and-int/2addr v0, v2

    const/16 v2, 0x40

    and-int/2addr v0, v2

    if-ne v0, v2, :cond_1

    goto :goto_0

    :cond_1
    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method public static isTdscdmaSupported()Z
    .locals 2

    .line 257
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->getMaxRat()I

    move-result v0

    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->getRatConfig()I

    move-result v1

    and-int/2addr v0, v1

    const/4 v1, 0x2

    and-int/2addr v0, v1

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public static isWcdmaSupported()Z
    .locals 2

    .line 247
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->getMaxRat()I

    move-result v0

    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->getRatConfig()I

    move-result v1

    and-int/2addr v0, v1

    const/4 v1, 0x4

    and-int/2addr v0, v1

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method private static logd(Ljava/lang/String;)V
    .locals 1
    .param p0, "msg"    # Ljava/lang/String;

    .line 295
    const-string v0, "RatConfig"

    invoke-static {v0, p0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 296
    return-void
.end method

.method protected static ratToBitmask(Ljava/lang/String;)I
    .locals 2
    .param p0, "rat"    # Ljava/lang/String;

    .line 87
    const/4 v0, 0x0

    .line 88
    .local v0, "iRat":I
    const-string v1, "C"

    invoke-virtual {p0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 89
    or-int/lit8 v0, v0, 0x20

    .line 91
    :cond_0
    const-string v1, "Lf"

    invoke-virtual {p0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 92
    or-int/lit8 v0, v0, 0x10

    .line 94
    :cond_1
    const-string v1, "Lt"

    invoke-virtual {p0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 95
    or-int/lit8 v0, v0, 0x8

    .line 97
    :cond_2
    const-string v1, "W"

    invoke-virtual {p0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 98
    or-int/lit8 v0, v0, 0x4

    .line 100
    :cond_3
    const-string v1, "T"

    invoke-virtual {p0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 101
    or-int/lit8 v0, v0, 0x2

    .line 103
    :cond_4
    const-string v1, "G"

    invoke-virtual {p0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_5

    .line 104
    or-int/lit8 v0, v0, 0x1

    .line 106
    :cond_5
    const-string v1, "N"

    invoke-virtual {p0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_6

    .line 107
    or-int/lit8 v0, v0, 0x40

    .line 109
    :cond_6
    return v0
.end method

.method protected static ratToString(I)Ljava/lang/String;
    .locals 4
    .param p0, "iRat"    # I

    .line 181
    const-string v0, ""

    .line 182
    .local v0, "rat":Ljava/lang/String;
    and-int/lit8 v1, p0, 0x20

    const/16 v2, 0x20

    if-ne v1, v2, :cond_0

    .line 183
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "/C"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 185
    :cond_0
    and-int/lit8 v1, p0, 0x10

    const/16 v2, 0x10

    if-ne v1, v2, :cond_1

    .line 186
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "/Lf"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 188
    :cond_1
    and-int/lit8 v1, p0, 0x8

    const/16 v2, 0x8

    if-ne v1, v2, :cond_2

    .line 189
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "/Lt"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 191
    :cond_2
    and-int/lit8 v1, p0, 0x4

    const/4 v2, 0x4

    if-ne v1, v2, :cond_3

    .line 192
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "/W"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 194
    :cond_3
    and-int/lit8 v1, p0, 0x2

    const/4 v2, 0x2

    if-ne v1, v2, :cond_4

    .line 195
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "/T"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 197
    :cond_4
    and-int/lit8 v1, p0, 0x1

    const/4 v2, 0x1

    if-ne v1, v2, :cond_5

    .line 198
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "/G"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 200
    :cond_5
    and-int/lit8 v1, p0, 0x40

    const/16 v3, 0x40

    if-ne v1, v3, :cond_6

    .line 201
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "/N"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 203
    :cond_6
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    if-lez v1, :cond_7

    .line 205
    invoke-virtual {v0, v2}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v0

    .line 207
    :cond_7
    return-object v0
.end method
