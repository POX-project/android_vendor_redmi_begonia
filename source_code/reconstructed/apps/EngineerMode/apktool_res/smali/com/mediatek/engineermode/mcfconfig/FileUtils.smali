.class public final Lcom/mediatek/engineermode/mcfconfig/FileUtils;
.super Ljava/lang/Object;
.source "FileUtils.java"


# static fields
.field private static final DECIMAL_NUMBER:I = 0x64

.field private static final ROUNDING_OFF:D = 0.005

.field public static final SEPARATOR:Ljava/lang/String; = "/"

.field private static final TAG:Ljava/lang/String; = "McfConfig/FileUtils"

.field public static final UNIT_B:Ljava/lang/String; = "B"

.field public static final UNIT_GB:Ljava/lang/String; = "GB"

.field private static final UNIT_INTERVAL:I = 0x400

.field public static final UNIT_KB:Ljava/lang/String; = "KB"

.field public static final UNIT_MB:Ljava/lang/String; = "MB"

.field public static final UNIT_TB:Ljava/lang/String; = "TB"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 50
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static fadeOutLongString(Landroid/widget/TextView;)V
    .locals 2
    .param p0, "textView"    # Landroid/widget/TextView;

    .line 177
    const-string v0, "McfConfig/FileUtils"

    if-nez p0, :cond_0

    .line 178
    const-string v1, "#adjustWithLongString(),the view is to be set is null"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 179
    return-void

    .line 181
    :cond_0
    instance-of v1, p0, Landroid/widget/TextView;

    if-nez v1, :cond_1

    .line 182
    const-string v1, "#adjustWithLongString(),the view instance is not right,execute failed!"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 184
    return-void

    .line 187
    :cond_1
    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Landroid/widget/TextView;->setHorizontalFadingEdgeEnabled(Z)V

    .line 188
    invoke-virtual {p0, v0}, Landroid/widget/TextView;->setSingleLine(Z)V

    .line 189
    const/4 v0, 0x3

    invoke-virtual {p0, v0}, Landroid/widget/TextView;->setGravity(I)V

    .line 190
    const/16 v0, 0x10

    invoke-virtual {p0, v0}, Landroid/widget/TextView;->setGravity(I)V

    .line 191
    return-void
.end method

.method public static getFileExtension(Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .param p0, "fileName"    # Ljava/lang/String;

    .line 71
    if-nez p0, :cond_0

    .line 72
    const/4 v0, 0x0

    return-object v0

    .line 74
    :cond_0
    const/4 v0, 0x0

    .line 75
    .local v0, "extension":Ljava/lang/String;
    const/16 v1, 0x2e

    invoke-virtual {p0, v1}, Ljava/lang/String;->lastIndexOf(I)I

    move-result v1

    .line 76
    .local v1, "lastDot":I
    if-ltz v1, :cond_1

    .line 77
    add-int/lit8 v2, v1, 0x1

    invoke-virtual {p0, v2}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v0

    .line 79
    :cond_1
    return-object v0
.end method

.method public static getFileName(Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .param p0, "absolutePath"    # Ljava/lang/String;

    .line 90
    const-string v0, "/"

    invoke-virtual {p0, v0}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v0

    .line 91
    .local v0, "sepIndex":I
    if-ltz v0, :cond_0

    .line 92
    add-int/lit8 v1, v0, 0x1

    invoke-virtual {p0, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 94
    :cond_0
    return-object p0
.end method

.method public static getFilePath(Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .param p0, "filePath"    # Ljava/lang/String;

    .line 106
    const-string v0, "/"

    invoke-virtual {p0, v0}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v0

    .line 107
    .local v0, "sepIndex":I
    if-ltz v0, :cond_0

    .line 108
    const/4 v1, 0x0

    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 110
    :cond_0
    const-string v1, ""

    return-object v1
.end method

.method public static isFileExist(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 2
    .param p0, "filePath"    # Ljava/lang/String;
    .param p1, "file"    # Ljava/lang/String;

    .line 115
    invoke-virtual {p0, p1}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v0

    .line 116
    .local v0, "sepIndex":I
    if-ltz v0, :cond_0

    .line 117
    const/4 v1, 0x1

    return v1

    .line 119
    :cond_0
    const/4 v1, 0x0

    return v1
.end method

.method public static sizeToString(J)Ljava/lang/String;
    .locals 14
    .param p0, "size"    # J

    .line 131
    const-string v0, "B"

    .line 132
    .local v0, "unit":Ljava/lang/String;
    const-wide/16 v1, 0x0

    cmp-long v1, p0, v1

    const-string v2, "0 "

    const-string v3, "sizeToString(),size = "

    const-string v4, "McfConfig/FileUtils"

    if-gez v1, :cond_0

    .line 133
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0, p1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v4, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 134
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 136
    :cond_0
    const-wide/16 v5, 0x64

    cmp-long v1, p0, v5

    const-string v5, " "

    if-gez v1, :cond_1

    .line 137
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0, p1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v4, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 138
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {p0, p1}, Ljava/lang/Long;->toString(J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 141
    :cond_1
    const-string v0, "KB"

    .line 142
    long-to-double v6, p0

    const-wide/high16 v8, 0x4090000000000000L    # 1024.0

    div-double/2addr v6, v8

    .line 143
    .local v6, "sizeDouble":D
    cmpl-double v1, v6, v8

    if-lez v1, :cond_2

    .line 144
    div-double/2addr v6, v8

    .line 145
    const-string v0, "MB"

    .line 147
    :cond_2
    cmpl-double v1, v6, v8

    if-lez v1, :cond_3

    .line 148
    div-double/2addr v6, v8

    .line 149
    const-string v0, "GB"

    .line 151
    :cond_3
    cmpl-double v1, v6, v8

    if-lez v1, :cond_4

    .line 152
    div-double/2addr v6, v8

    .line 153
    const-string v0, "TB"

    .line 157
    :cond_4
    const-wide v8, 0x3f747ae147ae147bL    # 0.005

    add-double/2addr v8, v6

    const-wide/high16 v10, 0x4059000000000000L    # 100.0

    mul-double/2addr v8, v10

    double-to-long v8, v8

    .line 161
    .local v8, "sizeInt":J
    long-to-double v12, v8

    div-double/2addr v12, v10

    .line 162
    .local v12, "formatedSize":D
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "sizeToString(): "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v12, v13}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v4, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 164
    const-wide/16 v3, 0x0

    cmpl-double v1, v12, v3

    if-nez v1, :cond_5

    .line 165
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 167
    :cond_5
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {v12, v13}, Ljava/lang/Double;->toString(D)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method
