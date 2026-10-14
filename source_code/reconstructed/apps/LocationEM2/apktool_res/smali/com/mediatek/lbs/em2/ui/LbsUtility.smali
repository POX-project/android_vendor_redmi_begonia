.class public Lcom/mediatek/lbs/em2/ui/LbsUtility;
.super Ljava/lang/Object;
.source "LbsUtility.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;
    }
.end annotation


# direct methods
.method private static frequencyToGnssBand(F)Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;
    .locals 2

    const v0, 0x49742400    # 1000000.0f

    div-float/2addr p0, v0

    const v0, 0x448fe000    # 1151.0f

    cmpl-float v0, p0, v0

    const v1, 0x4497c000    # 1214.0f

    if-ltz v0, :cond_0

    cmpg-float v0, p0, v1

    if-gtz v0, :cond_0

    .line 152
    sget-object p0, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;->GNSS_L5:Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    return-object p0

    :cond_0
    cmpl-float v0, p0, v1

    const v1, 0x449ce000    # 1255.0f

    if-lez v0, :cond_1

    cmpg-float v0, p0, v1

    if-gtz v0, :cond_1

    .line 155
    sget-object p0, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;->GNSS_L2:Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    return-object p0

    :cond_1
    cmpl-float v0, p0, v1

    if-lez v0, :cond_2

    const v0, 0x44a28000    # 1300.0f

    cmpg-float p0, p0, v0

    if-gtz p0, :cond_2

    .line 158
    sget-object p0, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;->GNSS_E6:Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    return-object p0

    .line 160
    :cond_2
    sget-object p0, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;->GNSS_L1:Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    return-object p0
.end method

.method static getEm2LaunchIntent(Landroid/content/Context;)Landroid/content/Intent;
    .locals 2

    .line 208
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/mediatek/lbs/em2/ui/MyTabActivity;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 p0, 0x10000000

    .line 209
    invoke-virtual {v0, p0}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    return-object v0
.end method

.method public static getFrequencyBand(F)Ljava/lang/String;
    .locals 1

    .line 164
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->frequencyToGnssBand(F)Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    move-result-object p0

    .line 166
    sget-object v0, Lcom/mediatek/lbs/em2/ui/LbsUtility$1;->$SwitchMap$com$mediatek$lbs$em2$ui$LbsUtility$GnssBand:[I

    invoke-virtual {p0}, Ljava/lang/Enum;->ordinal()I

    move-result p0

    aget p0, v0, p0

    const/4 v0, 0x1

    if-eq p0, v0, :cond_3

    const/4 v0, 0x2

    if-eq p0, v0, :cond_2

    const/4 v0, 0x3

    if-eq p0, v0, :cond_1

    const/4 v0, 0x4

    if-eq p0, v0, :cond_0

    const-string p0, "UN"

    goto :goto_0

    :cond_0
    const-string p0, "E6"

    goto :goto_0

    :cond_1
    const-string p0, "L5"

    goto :goto_0

    :cond_2
    const-string p0, "L2"

    goto :goto_0

    :cond_3
    const-string p0, "L1"

    :goto_0
    return-object p0
.end method

.method public static getTimeString(J)Ljava/lang/String;
    .locals 2

    .line 63
    new-instance v0, Ljava/util/Date;

    invoke-direct {v0, p0, p1}, Ljava/util/Date;-><init>(J)V

    .line 64
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Ljava/util/Date;->getYear()I

    move-result p1

    add-int/lit16 p1, p1, 0x76c

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "/"

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/util/Date;->getMonth()I

    move-result v1

    add-int/lit8 v1, v1, 0x1

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/util/Date;->getDate()I

    move-result p1

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, " "

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 65
    invoke-virtual {v0}, Ljava/util/Date;->getHours()I

    move-result p1

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ":"

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/util/Date;->getMinutes()I

    move-result v1

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/util/Date;->getSeconds()I

    move-result p1

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getTimeString2(J)Ljava/lang/String;
    .locals 2

    .line 71
    new-instance v0, Ljava/util/Date;

    invoke-direct {v0, p0, p1}, Ljava/util/Date;-><init>(J)V

    const/4 p0, 0x6

    new-array p0, p0, [Ljava/lang/Object;

    .line 73
    invoke-virtual {v0}, Ljava/util/Date;->getYear()I

    move-result p1

    add-int/lit16 p1, p1, 0x76c

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const/4 v1, 0x0

    aput-object p1, p0, v1

    .line 74
    invoke-virtual {v0}, Ljava/util/Date;->getMonth()I

    move-result p1

    const/4 v1, 0x1

    add-int/2addr p1, v1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, p0, v1

    .line 75
    invoke-virtual {v0}, Ljava/util/Date;->getDate()I

    move-result p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const/4 v1, 0x2

    aput-object p1, p0, v1

    .line 76
    invoke-virtual {v0}, Ljava/util/Date;->getHours()I

    move-result p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const/4 v1, 0x3

    aput-object p1, p0, v1

    .line 77
    invoke-virtual {v0}, Ljava/util/Date;->getMinutes()I

    move-result p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const/4 v1, 0x4

    aput-object p1, p0, v1

    .line 78
    invoke-virtual {v0}, Ljava/util/Date;->getSeconds()I

    move-result p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const/4 v0, 0x5

    aput-object p1, p0, v0

    const-string p1, "%04d%02d%02d_%02d%02d%02d"

    .line 72
    invoke-static {p1, p0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getTimeString3(J)Ljava/lang/String;
    .locals 3

    .line 83
    new-instance v0, Ljava/util/Date;

    invoke-direct {v0, p0, p1}, Ljava/util/Date;-><init>(J)V

    const/4 p0, 0x6

    new-array p0, p0, [Ljava/lang/Object;

    .line 85
    invoke-virtual {v0}, Ljava/util/Date;->getMonth()I

    move-result p1

    const/4 v1, 0x1

    add-int/2addr p1, v1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const/4 v2, 0x0

    aput-object p1, p0, v2

    .line 86
    invoke-virtual {v0}, Ljava/util/Date;->getDate()I

    move-result p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, p0, v1

    .line 87
    invoke-virtual {v0}, Ljava/util/Date;->getYear()I

    move-result p1

    add-int/lit16 p1, p1, 0x76c

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const/4 v1, 0x2

    aput-object p1, p0, v1

    .line 88
    invoke-virtual {v0}, Ljava/util/Date;->getHours()I

    move-result p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const/4 v1, 0x3

    aput-object p1, p0, v1

    .line 89
    invoke-virtual {v0}, Ljava/util/Date;->getMinutes()I

    move-result p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const/4 v1, 0x4

    aput-object p1, p0, v1

    .line 90
    invoke-virtual {v0}, Ljava/util/Date;->getSeconds()I

    move-result p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const/4 v0, 0x5

    aput-object p1, p0, v0

    const-string p1, "%02d/%02d/%04d %02d:%02d:%02d"

    .line 84
    invoke-static {p1, p0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static isDebugModeEnabled(Landroid/content/Context;)Z
    .locals 2

    .line 213
    new-instance v0, Ljava/io/File;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p0, "/../show"

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 214
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p0

    return p0
.end method

.method static launchLocationEM(Landroid/content/Context;)V
    .locals 1

    .line 204
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->getEm2LaunchIntent(Landroid/content/Context;)Landroid/content/Intent;

    move-result-object v0

    invoke-virtual {p0, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    return-void
.end method

.method static map2SvTypes(I)Ljava/lang/String;
    .locals 1

    const/4 v0, 0x1

    if-ne p0, v0, :cond_0

    const-string p0, "G"

    goto :goto_0

    :cond_0
    const/4 v0, 0x2

    if-ne p0, v0, :cond_1

    const-string p0, "S"

    goto :goto_0

    :cond_1
    const/4 v0, 0x3

    if-ne p0, v0, :cond_2

    const-string p0, "R"

    goto :goto_0

    :cond_2
    const/4 v0, 0x4

    if-ne p0, v0, :cond_3

    const-string p0, "Q"

    goto :goto_0

    :cond_3
    const/4 v0, 0x5

    if-ne p0, v0, :cond_4

    const-string p0, "B"

    goto :goto_0

    :cond_4
    const/4 v0, 0x6

    if-ne p0, v0, :cond_5

    const-string p0, "E"

    goto :goto_0

    :cond_5
    const/4 v0, 0x7

    if-ne p0, v0, :cond_6

    const-string p0, "I"

    goto :goto_0

    :cond_6
    const-string p0, ""

    :goto_0
    return-object p0
.end method

.method public static parseInt(Ljava/lang/String;)I
    .locals 3

    const-string v0, ""

    .line 108
    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    .line 111
    :cond_0
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->removeFirstZero(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 114
    :try_start_0
    invoke-static {p0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 117
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "parseDouble:"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "nmeaParser"

    invoke-static {v0, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return v1
.end method

.method private static removeFirstZero(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    const/4 v0, 0x0

    :goto_0
    add-int/lit8 v1, v0, 0x1

    .line 125
    invoke-virtual {p0, v0}, Ljava/lang/String;->charAt(I)C

    move-result v0

    const/16 v2, 0x30

    if-ne v0, v2, :cond_1

    .line 126
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    if-ne v1, v0, :cond_0

    goto :goto_1

    :cond_0
    move v0, v1

    goto :goto_0

    :cond_1
    :goto_1
    if-eqz v1, :cond_2

    add-int/lit8 v1, v1, -0x1

    .line 130
    invoke-virtual {p0, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p0

    :cond_2
    return-object p0
.end method

.method public static split(Ljava/lang/String;)[Ljava/lang/String;
    .locals 2

    :try_start_0
    const-string v0, "[,]"

    .line 98
    invoke-virtual {p0, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 100
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "split:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "nmeaParser"

    invoke-static {v0, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const/4 p0, 0x0

    :goto_0
    return-object p0
.end method

.method public static write2File(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Z
    .locals 1

    .line 27
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "/sdcard"

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 30
    new-instance p1, Ljava/io/File;

    invoke-direct {p1, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 31
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_0

    .line 32
    invoke-virtual {p1}, Ljava/io/File;->mkdirs()Z

    :cond_0
    const-string p1, "/"

    if-eqz p2, :cond_1

    .line 36
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 37
    new-instance p2, Ljava/io/File;

    invoke-direct {p2, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 38
    invoke-virtual {p2}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_1

    .line 39
    invoke-virtual {p2}, Ljava/io/File;->mkdirs()Z

    .line 43
    :cond_1
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 44
    new-instance p1, Ljava/io/File;

    invoke-direct {p1, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    const/4 p2, 0x1

    const/4 p3, 0x0

    if-eqz p5, :cond_2

    .line 47
    :try_start_0
    new-instance p1, Ljava/io/DataOutputStream;

    new-instance p5, Ljava/io/FileOutputStream;

    invoke-direct {p5, p0, p2}, Ljava/io/FileOutputStream;-><init>(Ljava/lang/String;Z)V

    invoke-direct {p1, p5}, Ljava/io/DataOutputStream;-><init>(Ljava/io/OutputStream;)V

    goto :goto_0

    .line 49
    :cond_2
    new-instance p0, Ljava/io/DataOutputStream;

    new-instance p5, Ljava/io/FileOutputStream;

    invoke-direct {p5, p1}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V

    invoke-direct {p0, p5}, Ljava/io/DataOutputStream;-><init>(Ljava/io/OutputStream;)V

    move-object p1, p0

    .line 50
    :goto_0
    invoke-virtual {p1, p4}, Ljava/io/DataOutputStream;->writeBytes(Ljava/lang/String;)V

    .line 51
    invoke-virtual {p1}, Ljava/io/DataOutputStream;->close()V
    :try_end_0
    .catch Ljava/io/FileNotFoundException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return p2

    :catch_0
    move-exception p0

    .line 56
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    return p3

    :catch_1
    move-exception p0

    .line 53
    invoke-virtual {p0}, Ljava/io/FileNotFoundException;->printStackTrace()V

    return p3
.end method
