.class public Lcom/mediatek/ygps/GpsMnlSetting;
.super Ljava/lang/Object;
.source "GpsMnlSetting.java"


# static fields
.field private static final HIDDEN_PROP_VALUE:Ljava/lang/String;

.field private static sKeyList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private static sLogHidden:Z


# direct methods
.method static constructor <clinit>()V
    .locals 2

    const-string v0, "ro.vendor.mtk_log_hide_gps"

    .line 81
    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/ygps/GpsMnlSetting;->HIDDEN_PROP_VALUE:Ljava/lang/String;

    const-string v1, "1"

    .line 83
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    sget-object v0, Lcom/mediatek/ygps/GpsMnlSetting;->HIDDEN_PROP_VALUE:Ljava/lang/String;

    const-string v1, "2"

    .line 84
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    sput-boolean v0, Lcom/mediatek/ygps/GpsMnlSetting;->sLogHidden:Z

    return-void
.end method

.method static getChipVersion(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    const-string v0, "vendor.gps.gps.version"

    .line 94
    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 95
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    move-object p0, v0

    :cond_1
    :goto_0
    return-object p0
.end method

.method static getClockProp(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    const-string v0, "vendor.gps.clock.type"

    .line 162
    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 163
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    move-object p0, v0

    :cond_1
    :goto_0
    return-object p0
.end method

.method static getMnlProp(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    const-string v0, "persist.vendor.radio.mnl.prop"

    .line 112
    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 113
    sget-object v1, Lcom/mediatek/ygps/GpsMnlSetting;->sKeyList:Ljava/util/ArrayList;

    if-nez v1, :cond_0

    .line 114
    invoke-static {}, Lcom/mediatek/ygps/GpsMnlSetting;->initList()V

    .line 116
    :cond_0
    sget-object v1, Lcom/mediatek/ygps/GpsMnlSetting;->sKeyList:Ljava/util/ArrayList;

    invoke-virtual {v1, p0}, Ljava/util/ArrayList;->indexOf(Ljava/lang/Object;)I

    move-result p0

    .line 117
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getMnlProp: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "YGPS/MnlSetting"

    invoke-static {v2, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz v0, :cond_2

    .line 118
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_2

    const/4 v1, -0x1

    if-eq v1, p0, :cond_2

    .line 119
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    if-lt p0, v1, :cond_1

    goto :goto_0

    .line 122
    :cond_1
    invoke-virtual {v0, p0}, Ljava/lang/String;->charAt(I)C

    move-result p0

    .line 123
    invoke-static {p0}, Ljava/lang/String;->valueOf(C)Ljava/lang/String;

    move-result-object p1

    .line 125
    :cond_2
    :goto_0
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "getMnlProp result: "

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-object p1
.end method

.method private static initList()V
    .locals 2

    .line 175
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/mediatek/ygps/GpsMnlSetting;->sKeyList:Ljava/util/ArrayList;

    const-string v1, "debug.dbg2socket"

    .line 176
    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 177
    sget-object v0, Lcom/mediatek/ygps/GpsMnlSetting;->sKeyList:Ljava/util/ArrayList;

    const-string v1, "debug.nmea2socket"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 178
    sget-object v0, Lcom/mediatek/ygps/GpsMnlSetting;->sKeyList:Ljava/util/ArrayList;

    const-string v1, "debug.dbg2file"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 179
    sget-object v0, Lcom/mediatek/ygps/GpsMnlSetting;->sKeyList:Ljava/util/ArrayList;

    const-string v1, "debug.debug_nmea"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 180
    sget-object v0, Lcom/mediatek/ygps/GpsMnlSetting;->sKeyList:Ljava/util/ArrayList;

    const-string v1, "BEE_enabled"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 181
    sget-object v0, Lcom/mediatek/ygps/GpsMnlSetting;->sKeyList:Ljava/util/ArrayList;

    const-string v1, "test.mode"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 182
    sget-object v0, Lcom/mediatek/ygps/GpsMnlSetting;->sKeyList:Ljava/util/ArrayList;

    const-string v1, "gpslog_enabled"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 183
    sget-object v0, Lcom/mediatek/ygps/GpsMnlSetting;->sKeyList:Ljava/util/ArrayList;

    const-string v1, "gps.epo"

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method static isLogHidden()Z
    .locals 2

    .line 170
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sLogHidden: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v1, Lcom/mediatek/ygps/GpsMnlSetting;->sLogHidden:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "YGPS/MnlSetting"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 171
    sget-boolean v0, Lcom/mediatek/ygps/GpsMnlSetting;->sLogHidden:Z

    return v0
.end method

.method static setMnlProp(Lcom/mediatek/ygps/MnldConn;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 136
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setMnlProp: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "YGPS/MnlSetting"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const-string v0, "persist.vendor.radio.mnl.prop"

    .line 137
    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 138
    sget-object v2, Lcom/mediatek/ygps/GpsMnlSetting;->sKeyList:Ljava/util/ArrayList;

    if-nez v2, :cond_0

    .line 139
    invoke-static {}, Lcom/mediatek/ygps/GpsMnlSetting;->initList()V

    .line 141
    :cond_0
    sget-object v2, Lcom/mediatek/ygps/GpsMnlSetting;->sKeyList:Ljava/util/ArrayList;

    invoke-virtual {v2, p1}, Ljava/util/ArrayList;->indexOf(Ljava/lang/Object;)I

    move-result p1

    const/4 v2, -0x1

    if-eq p1, v2, :cond_3

    if-eqz v0, :cond_1

    .line 143
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v2

    if-eqz v2, :cond_2

    :cond_1
    const-string v0, "00000001"

    .line 146
    :cond_2
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v2

    if-le v2, p1, :cond_3

    .line 147
    invoke-virtual {v0}, Ljava/lang/String;->toCharArray()[C

    move-result-object v0

    const/4 v2, 0x0

    .line 148
    invoke-virtual {p2, v2}, Ljava/lang/String;->charAt(I)C

    move-result p2

    aput-char p2, v0, p1

    .line 149
    invoke-static {v0}, Ljava/lang/String;->valueOf([C)Ljava/lang/String;

    move-result-object p1

    .line 150
    invoke-virtual {p0, p1}, Lcom/mediatek/ygps/MnldConn;->setMnldProp(Ljava/lang/String;)V

    .line 151
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "setMnlProp newProp: "

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_3
    return-void
.end method
