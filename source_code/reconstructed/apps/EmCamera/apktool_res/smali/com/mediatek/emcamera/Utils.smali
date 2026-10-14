.class public Lcom/mediatek/emcamera/Utils;
.super Ljava/lang/Object;
.source "Utils.java"


# static fields
.field public static final ACTION_CAPTURE:I = 0x0

.field public static final ACTION_GIS_CALIBRATION:I = 0x1

.field public static final ACTION_START_CAPTURE_ACTIVITY:Ljava/lang/String; = "com.mediatek.emcamera.key_action"

.field private static final DEFAULT_CAMERA_BRIGHTNESS:F = 0.7f

.field public static final ORIENTATION_HYSTERESIS:I = 0x5

.field public static final PREFERENCE_KEY:Ljava/lang/String; = "camera_inter_settings"

.field private static final PROP_MONKEY:Ljava/lang/String; = "ro.monkey"

.field private static final RATIOS:[D

.field public static final ROTATION_0:I = 0x0

.field public static final ROTATION_180:I = 0xb4

.field public static final ROTATION_270:I = 0x10e

.field public static final ROTATION_90:I = 0x5a

.field private static final TAG:Ljava/lang/String; = "Utils"


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 95
    const/4 v0, 0x4

    new-array v0, v0, [D

    fill-array-data v0, :array_0

    sput-object v0, Lcom/mediatek/emcamera/Utils;->RATIOS:[D

    return-void

    nop

    :array_0
    .array-data 8
        0x3ff55532617c1bdaL    # 1.3333
        0x3ff8000000000000L    # 1.5
        0x3ffaaacd9e83e426L    # 1.6667
        0x3ffc71de69ad42c4L    # 1.7778
    .end array-data
.end method

.method public constructor <init>()V
    .locals 0

    .line 76
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static clamp(III)I
    .locals 0
    .param p0, "x"    # I
    .param p1, "min"    # I
    .param p2, "max"    # I

    .line 98
    if-le p0, p2, :cond_0

    .line 99
    return p2

    .line 101
    :cond_0
    if-ge p0, p1, :cond_1

    .line 102
    return p1

    .line 104
    :cond_1
    return p0
.end method

.method public static copyFile(Ljava/lang/String;Ljava/lang/String;)V
    .locals 5
    .param p0, "oldPath"    # Ljava/lang/String;
    .param p1, "newPath"    # Ljava/lang/String;

    .line 162
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 163
    .local v0, "oldfile":Ljava/io/File;
    invoke-virtual {v0}, Ljava/io/File;->isFile()Z

    move-result v1

    if-eqz v1, :cond_4

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_4

    .line 165
    const/4 v1, 0x0

    .line 166
    .local v1, "fis":Ljava/io/FileInputStream;
    const/4 v2, 0x0

    .line 168
    .local v2, "fos":Ljava/io/FileOutputStream;
    :try_start_0
    new-instance v3, Ljava/io/FileInputStream;

    invoke-direct {v3, v0}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    move-object v1, v3

    .line 169
    new-instance v3, Ljava/io/FileOutputStream;

    invoke-direct {v3, p1}, Ljava/io/FileOutputStream;-><init>(Ljava/lang/String;)V

    move-object v2, v3

    .line 170
    invoke-virtual {v1}, Ljava/io/FileInputStream;->available()I

    move-result v3

    .line 171
    .local v3, "length":I
    new-array v4, v3, [B

    .line 172
    .local v4, "buffer":[B
    invoke-virtual {v1, v4}, Ljava/io/FileInputStream;->read([B)I

    .line 173
    invoke-virtual {v2, v4}, Ljava/io/FileOutputStream;->write([B)V

    .line 174
    invoke-virtual {v1}, Ljava/io/FileInputStream;->close()V

    .line 175
    invoke-virtual {v2}, Ljava/io/FileOutputStream;->close()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 180
    .end local v3    # "length":I
    .end local v4    # "buffer":[B
    nop

    .line 181
    :try_start_1
    invoke-virtual {v1}, Ljava/io/FileInputStream;->close()V

    .line 183
    nop

    .line 184
    invoke-virtual {v2}, Ljava/io/FileOutputStream;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_2

    .line 179
    :catchall_0
    move-exception v3

    goto :goto_3

    .line 176
    :catch_0
    move-exception v3

    .line 177
    .local v3, "ex":Ljava/io/IOException;
    :try_start_2
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 180
    .end local v3    # "ex":Ljava/io/IOException;
    if-eqz v1, :cond_0

    .line 181
    :try_start_3
    invoke-virtual {v1}, Ljava/io/FileInputStream;->close()V

    goto :goto_0

    .line 186
    :catch_1
    move-exception v3

    goto :goto_1

    .line 183
    :cond_0
    :goto_0
    if-eqz v2, :cond_1

    .line 184
    invoke-virtual {v2}, Ljava/io/FileOutputStream;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_1

    goto :goto_2

    .line 187
    .restart local v3    # "ex":Ljava/io/IOException;
    :goto_1
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V

    .line 189
    .end local v3    # "ex":Ljava/io/IOException;
    goto :goto_8

    .line 188
    :cond_1
    :goto_2
    goto :goto_8

    .line 180
    :goto_3
    if-eqz v1, :cond_2

    .line 181
    :try_start_4
    invoke-virtual {v1}, Ljava/io/FileInputStream;->close()V

    goto :goto_4

    .line 186
    :catch_2
    move-exception v4

    goto :goto_5

    .line 183
    :cond_2
    :goto_4
    if-eqz v2, :cond_3

    .line 184
    invoke-virtual {v2}, Ljava/io/FileOutputStream;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_2

    goto :goto_6

    .line 187
    .local v4, "ex":Ljava/io/IOException;
    :goto_5
    invoke-virtual {v4}, Ljava/io/IOException;->printStackTrace()V

    goto :goto_7

    .line 188
    .end local v4    # "ex":Ljava/io/IOException;
    :cond_3
    :goto_6
    nop

    .line 189
    :goto_7
    throw v3

    .line 191
    .end local v1    # "fis":Ljava/io/FileInputStream;
    .end local v2    # "fos":Ljava/io/FileOutputStream;
    :cond_4
    :goto_8
    return-void
.end method

.method public static createDir(Ljava/lang/String;)Z
    .locals 3
    .param p0, "folderName"    # Ljava/lang/String;

    .line 116
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 117
    .local v0, "dir":Ljava/io/File;
    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    .line 118
    invoke-virtual {v0}, Ljava/io/File;->isDirectory()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-virtual {v0}, Ljava/io/File;->canWrite()Z

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    .line 122
    :cond_0
    const/4 v1, 0x1

    return v1

    .line 119
    :cond_1
    :goto_0
    const-string v1, "Utils"

    const-string v2, "create GIS calibration folder fail"

    invoke-static {v1, v2}, Lcom/mediatek/emcamera/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 120
    const/4 v1, 0x0

    return v1
.end method

.method public static deleteFile(Ljava/lang/String;)V
    .locals 2
    .param p0, "fileName"    # Ljava/lang/String;

    .line 126
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 127
    .local v0, "f":Ljava/io/File;
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 128
    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    .line 130
    :cond_0
    return-void
.end method

.method public static dumpRect(Landroid/graphics/RectF;Ljava/lang/String;)V
    .locals 3
    .param p0, "rect"    # Landroid/graphics/RectF;
    .param p1, "msg"    # Ljava/lang/String;

    .line 225
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "=("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Landroid/graphics/RectF;->left:F

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    const-string v1, ","

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Landroid/graphics/RectF;->top:F

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Landroid/graphics/RectF;->right:F

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Landroid/graphics/RectF;->bottom:F

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    const-string v1, ")"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Utils"

    invoke-static {v1, v0}, Lcom/mediatek/emcamera/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 230
    return-void
.end method

.method public static getIntegerFromEdit(Landroid/widget/EditText;IZIZ)I
    .locals 6
    .param p0, "edit"    # Landroid/widget/EditText;
    .param p1, "from"    # I
    .param p2, "includeFrom"    # Z
    .param p3, "end"    # I
    .param p4, "includeEnd"    # Z

    .line 272
    const-string v0, "Utils"

    invoke-virtual {p0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 273
    .local v1, "editStr":Ljava/lang/String;
    const/4 v2, -0x1

    .line 275
    .local v2, "value":I
    :try_start_0
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    move v2, v3

    .line 278
    goto :goto_0

    .line 276
    :catch_0
    move-exception v3

    .line 277
    .local v3, "e":Ljava/lang/NumberFormatException;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "getIntegerFromEditTrunc NumberFormatException:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/NumberFormatException;->getMessage()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/mediatek/emcamera/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 280
    .end local v3    # "e":Ljava/lang/NumberFormatException;
    :goto_0
    const/4 v3, 0x0

    .line 281
    .local v3, "isCrossed":Z
    const-string v4, "getIntegerFromEditTrunc, value is smaller than min value!"

    if-ge v2, p1, :cond_0

    if-eqz p2, :cond_0

    .line 282
    move v2, p1

    .line 283
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/mediatek/emcamera/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 284
    const/4 v3, 0x1

    goto :goto_1

    .line 285
    :cond_0
    const-string v5, "getIntegerFromEditTrunc, value is larger than max value!"

    if-le v2, p3, :cond_1

    if-eqz p4, :cond_1

    .line 286
    move v2, p3

    .line 287
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/mediatek/emcamera/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 288
    const/4 v3, 0x1

    goto :goto_1

    .line 289
    :cond_1
    if-nez p2, :cond_2

    if-gt v2, p1, :cond_2

    .line 290
    add-int/lit8 v2, p1, 0x1

    .line 291
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/mediatek/emcamera/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 292
    const/4 v3, 0x1

    goto :goto_1

    .line 293
    :cond_2
    if-nez p4, :cond_3

    if-lt v2, p3, :cond_3

    .line 294
    add-int/lit8 v2, p3, -0x1

    .line 295
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/mediatek/emcamera/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 296
    const/4 v3, 0x1

    .line 298
    :cond_3
    :goto_1
    if-eqz v3, :cond_4

    .line 299
    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 300
    const/4 v2, -0x1

    .line 302
    :cond_4
    return v2
.end method

.method public static getProperty(Ljava/lang/String;)Ljava/lang/String;
    .locals 8
    .param p0, "key"    # Ljava/lang/String;

    .line 441
    const-string v0, ""

    .line 443
    .local v0, "value":Ljava/lang/String;
    :try_start_0
    const-string v1, "android.os.SystemProperties"

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    .line 444
    .local v1, "c":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    const-string v2, "get"

    const/4 v3, 0x2

    new-array v4, v3, [Ljava/lang/Class;

    const-class v5, Ljava/lang/String;

    const/4 v6, 0x0

    aput-object v5, v4, v6

    const-class v5, Ljava/lang/String;

    const/4 v7, 0x1

    aput-object v5, v4, v7

    invoke-virtual {v1, v2, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    .line 445
    .local v2, "get":Ljava/lang/reflect/Method;
    new-array v3, v3, [Ljava/lang/Object;

    aput-object p0, v3, v6

    const-string v4, ""

    aput-object v4, v3, v7

    invoke-virtual {v2, v1, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-object v0, v3

    .line 449
    .end local v1    # "c":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    .end local v2    # "get":Ljava/lang/reflect/Method;
    :goto_0
    return-object v0

    :catchall_0
    move-exception v1

    goto :goto_1

    .line 446
    :catch_0
    move-exception v1

    .line 447
    .local v1, "e":Ljava/lang/Exception;
    :try_start_1
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .end local v1    # "e":Ljava/lang/Exception;
    goto :goto_0

    .line 449
    :goto_1
    return-object v0
.end method

.method public static initializeScreenBrightness(Landroid/view/Window;Landroid/content/ContentResolver;)V
    .locals 3
    .param p0, "win"    # Landroid/view/Window;
    .param p1, "resolver"    # Landroid/content/ContentResolver;

    .line 261
    const-string v0, "screen_brightness_mode"

    const/4 v1, 0x0

    invoke-static {p1, v0, v1}, Landroid/provider/Settings$System;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;I)I

    move-result v0

    .line 263
    .local v0, "mode":I
    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    .line 264
    invoke-virtual {p0}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v1

    .line 265
    .local v1, "winParams":Landroid/view/WindowManager$LayoutParams;
    const v2, 0x3f333333    # 0.7f

    iput v2, v1, Landroid/view/WindowManager$LayoutParams;->screenBrightness:F

    .line 266
    invoke-virtual {p0, v1}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    .line 268
    .end local v1    # "winParams":Landroid/view/WindowManager$LayoutParams;
    :cond_0
    return-void
.end method

.method public static isActivityAvailable(Landroid/content/Context;Landroid/content/Intent;)Z
    .locals 2
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "intent"    # Landroid/content/Intent;

    .line 351
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1}, Landroid/content/pm/PackageManager;->resolveActivity(Landroid/content/Intent;I)Landroid/content/pm/ResolveInfo;

    move-result-object v0

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    :cond_0
    return v1
.end method

.method public static isAutoTest()Z
    .locals 8

    .line 419
    const-string v0, "ro.monkey"

    invoke-static {v0}, Lcom/mediatek/emcamera/Utils;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 420
    .local v0, "monkeyProp":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "isAutoTest()-> Monkey running flag is "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "Utils"

    invoke-static {v2, v1}, Lcom/mediatek/emcamera/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 421
    const-string v1, "true"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const/4 v3, 0x0

    const/4 v4, 0x1

    if-nez v1, :cond_1

    .line 422
    const-string v1, "y"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 423
    const-string v1, "yes"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 424
    const-string v1, "1"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 425
    const-string v1, "on"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    move v1, v3

    goto :goto_1

    :cond_1
    :goto_0
    move v1, v4

    .line 428
    .local v1, "isMonkey":Z
    :goto_1
    invoke-static {}, Landroid/app/ActivityManager;->isUserAMonkey()Z

    move-result v5

    .line 429
    .local v5, "isUserAMonkey":Z
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "isAutoTest()-> isUserAMonkey="

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v6}, Lcom/mediatek/emcamera/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 430
    if-nez v1, :cond_2

    if-eqz v5, :cond_3

    :cond_2
    move v3, v4

    :cond_3
    return v3
.end method

.method public static isToleranceAllow(FFF)Z
    .locals 2
    .param p0, "target"    # F
    .param p1, "candidate"    # F
    .param p2, "tolerance"    # F

    .line 108
    const/4 v0, 0x1

    .line 109
    .local v0, "isToleranceAllow":Z
    const/4 v1, 0x0

    cmpl-float v1, p1, v1

    if-lez v1, :cond_1

    .line 110
    sub-float v1, p0, p1

    invoke-static {v1}, Ljava/lang/Math;->abs(F)F

    move-result v1

    cmpg-float v1, v1, p2

    if-gtz v1, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    move v0, v1

    .line 112
    :cond_1
    return v0
.end method

.method public static prepareMatrix(Landroid/graphics/Matrix;ZIII)V
    .locals 3
    .param p0, "matrix"    # Landroid/graphics/Matrix;
    .param p1, "mirror"    # Z
    .param p2, "displayOrientation"    # I
    .param p3, "viewWidth"    # I
    .param p4, "viewHeight"    # I

    .line 250
    const/high16 v0, 0x3f800000    # 1.0f

    if-eqz p1, :cond_0

    const/high16 v1, -0x40800000    # -1.0f

    goto :goto_0

    :cond_0
    move v1, v0

    :goto_0
    invoke-virtual {p0, v1, v0}, Landroid/graphics/Matrix;->setScale(FF)V

    .line 252
    int-to-float v0, p2

    invoke-virtual {p0, v0}, Landroid/graphics/Matrix;->postRotate(F)Z

    .line 255
    int-to-float v0, p3

    const/high16 v1, 0x44fa0000    # 2000.0f

    div-float/2addr v0, v1

    int-to-float v2, p4

    div-float/2addr v2, v1

    invoke-virtual {p0, v0, v2}, Landroid/graphics/Matrix;->postScale(FF)Z

    .line 256
    int-to-float v0, p3

    const/high16 v1, 0x40000000    # 2.0f

    div-float/2addr v0, v1

    int-to-float v2, p4

    div-float/2addr v2, v1

    invoke-virtual {p0, v0, v2}, Landroid/graphics/Matrix;->postTranslate(FF)Z

    .line 257
    return-void
.end method

.method public static readFile(Ljava/lang/String;)Ljava/lang/String;
    .locals 6
    .param p0, "fileName"    # Ljava/lang/String;

    .line 133
    const-string v0, ""

    .line 135
    .local v0, "res":Ljava/lang/String;
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 136
    .local v1, "file":Ljava/io/File;
    invoke-virtual {v1}, Ljava/io/File;->isFile()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_2

    .line 137
    const/4 v2, 0x0

    .line 140
    .local v2, "fis":Ljava/io/FileInputStream;
    :try_start_0
    new-instance v3, Ljava/io/FileInputStream;

    invoke-direct {v3, v1}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    move-object v2, v3

    .line 141
    invoke-virtual {v2}, Ljava/io/FileInputStream;->available()I

    move-result v3

    .line 142
    .local v3, "length":I
    new-array v4, v3, [B

    .line 143
    .local v4, "buffer":[B
    invoke-virtual {v2, v4}, Ljava/io/FileInputStream;->read([B)I

    .line 144
    new-instance v5, Ljava/lang/String;

    invoke-direct {v5, v4}, Ljava/lang/String;-><init>([B)V

    move-object v0, v5

    .line 145
    invoke-virtual {v2}, Ljava/io/FileInputStream;->close()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 150
    .end local v3    # "length":I
    .end local v4    # "buffer":[B
    nop

    .line 151
    :try_start_1
    invoke-virtual {v2}, Ljava/io/FileInputStream;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    .line 155
    :cond_0
    :goto_0
    goto :goto_4

    .line 153
    :catch_0
    move-exception v3

    .line 154
    .local v3, "ex":Ljava/io/IOException;
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V

    .line 156
    .end local v3    # "ex":Ljava/io/IOException;
    goto :goto_4

    .line 149
    :catchall_0
    move-exception v3

    goto :goto_1

    .line 146
    :catch_1
    move-exception v3

    .line 147
    .restart local v3    # "ex":Ljava/io/IOException;
    :try_start_2
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 150
    .end local v3    # "ex":Ljava/io/IOException;
    if-eqz v2, :cond_0

    .line 151
    :try_start_3
    invoke-virtual {v2}, Ljava/io/FileInputStream;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_0

    goto :goto_0

    .line 150
    :goto_1
    if-eqz v2, :cond_1

    .line 151
    :try_start_4
    invoke-virtual {v2}, Ljava/io/FileInputStream;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_2

    goto :goto_2

    .line 153
    :catch_2
    move-exception v4

    .line 154
    .local v4, "ex":Ljava/io/IOException;
    invoke-virtual {v4}, Ljava/io/IOException;->printStackTrace()V

    goto :goto_3

    .line 155
    .end local v4    # "ex":Ljava/io/IOException;
    :cond_1
    :goto_2
    nop

    .line 156
    :goto_3
    throw v3

    .line 158
    .end local v2    # "fis":Ljava/io/FileInputStream;
    :cond_2
    :goto_4
    return-object v0
.end method

.method public static rectFToRect(Landroid/graphics/RectF;)Landroid/graphics/Rect;
    .locals 2
    .param p0, "rectF"    # Landroid/graphics/RectF;

    .line 233
    new-instance v0, Landroid/graphics/Rect;

    invoke-direct {v0}, Landroid/graphics/Rect;-><init>()V

    .line 234
    .local v0, "rect":Landroid/graphics/Rect;
    iget v1, p0, Landroid/graphics/RectF;->left:F

    invoke-static {v1}, Ljava/lang/Math;->round(F)I

    move-result v1

    iput v1, v0, Landroid/graphics/Rect;->left:I

    .line 235
    iget v1, p0, Landroid/graphics/RectF;->top:F

    invoke-static {v1}, Ljava/lang/Math;->round(F)I

    move-result v1

    iput v1, v0, Landroid/graphics/Rect;->top:I

    .line 236
    iget v1, p0, Landroid/graphics/RectF;->right:F

    invoke-static {v1}, Ljava/lang/Math;->round(F)I

    move-result v1

    iput v1, v0, Landroid/graphics/Rect;->right:I

    .line 237
    iget v1, p0, Landroid/graphics/RectF;->bottom:F

    invoke-static {v1}, Ljava/lang/Math;->round(F)I

    move-result v1

    iput v1, v0, Landroid/graphics/Rect;->bottom:I

    .line 238
    return-object v0
.end method

.method public static rectFToRect(Landroid/graphics/RectF;Landroid/graphics/Rect;)V
    .locals 1
    .param p0, "rectF"    # Landroid/graphics/RectF;
    .param p1, "rect"    # Landroid/graphics/Rect;

    .line 242
    iget v0, p0, Landroid/graphics/RectF;->left:F

    invoke-static {v0}, Ljava/lang/Math;->round(F)I

    move-result v0

    iput v0, p1, Landroid/graphics/Rect;->left:I

    .line 243
    iget v0, p0, Landroid/graphics/RectF;->top:F

    invoke-static {v0}, Ljava/lang/Math;->round(F)I

    move-result v0

    iput v0, p1, Landroid/graphics/Rect;->top:I

    .line 244
    iget v0, p0, Landroid/graphics/RectF;->right:F

    invoke-static {v0}, Ljava/lang/Math;->round(F)I

    move-result v0

    iput v0, p1, Landroid/graphics/Rect;->right:I

    .line 245
    iget v0, p0, Landroid/graphics/RectF;->bottom:F

    invoke-static {v0}, Ljava/lang/Math;->round(F)I

    move-result v0

    iput v0, p1, Landroid/graphics/Rect;->bottom:I

    .line 246
    return-void
.end method

.method public static sendNotification(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 5
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "title"    # Ljava/lang/String;
    .param p2, "ContentText"    # Ljava/lang/String;

    .line 403
    const-string v0, "Utils"

    const-string v1, "!! sendNotification !!"

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 404
    new-instance v0, Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-direct {v0, p0}, Landroid/support/v4/app/NotificationCompat$Builder;-><init>(Landroid/content/Context;)V

    .line 405
    const v1, 0x7f070059

    invoke-virtual {v0, v1}, Landroid/support/v4/app/NotificationCompat$Builder;->setSmallIcon(I)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentTitle(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/support/v4/app/NotificationCompat$Builder;->setAutoCancel(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object v0

    .line 406
    invoke-virtual {v0, p2}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentText(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object v0

    .line 408
    .local v0, "mBuilder":Landroid/support/v4/app/NotificationCompat$Builder;
    nop

    .line 409
    const-string v2, "notification"

    invoke-virtual {p0, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/app/NotificationManager;

    .line 411
    .local v2, "mNotificationManager":Landroid/app/NotificationManager;
    invoke-virtual {v0}, Landroid/support/v4/app/NotificationCompat$Builder;->build()Landroid/app/Notification;

    move-result-object v3

    .line 412
    .local v3, "notification":Landroid/app/Notification;
    iget v4, v3, Landroid/app/Notification;->defaults:I

    or-int/2addr v1, v4

    iput v1, v3, Landroid/app/Notification;->defaults:I

    .line 413
    const/16 v1, 0x63

    invoke-virtual {v2, v1, v3}, Landroid/app/NotificationManager;->notify(ILandroid/app/Notification;)V

    .line 414
    return-void
.end method

.method public static setCheckedRadioGroup([Landroid/widget/RadioButton;Landroid/widget/RadioButton;)V
    .locals 5
    .param p0, "allRadios"    # [Landroid/widget/RadioButton;
    .param p1, "checkedRadio"    # Landroid/widget/RadioButton;

    .line 341
    array-length v0, p0

    const/4 v1, 0x0

    move v2, v1

    :goto_0
    if-ge v2, v0, :cond_1

    aget-object v3, p0, v2

    .line 342
    .local v3, "radio":Landroid/widget/RadioButton;
    if-ne v3, p1, :cond_0

    .line 343
    const/4 v4, 0x1

    invoke-virtual {v3, v4}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_1

    .line 345
    :cond_0
    invoke-virtual {v3, v1}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 341
    .end local v3    # "radio":Landroid/widget/RadioButton;
    :goto_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 348
    :cond_1
    return-void
.end method

.method public static setLvHeight(Landroid/widget/ListView;)V
    .locals 5
    .param p0, "listView"    # Landroid/widget/ListView;

    .line 307
    invoke-virtual {p0}, Landroid/widget/ListView;->getAdapter()Landroid/widget/ListAdapter;

    move-result-object v0

    .line 308
    .local v0, "adapter":Landroid/widget/ListAdapter;
    if-nez v0, :cond_0

    .line 309
    const-string v1, "Utils"

    const-string v2, "no data in ListView"

    invoke-static {v1, v2}, Lcom/mediatek/emcamera/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 310
    return-void

    .line 312
    :cond_0
    const/4 v1, 0x0

    .line 313
    .local v1, "totalHeight":I
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    invoke-interface {v0}, Landroid/widget/ListAdapter;->getCount()I

    move-result v3

    if-ge v2, v3, :cond_1

    .line 314
    const/4 v3, 0x0

    invoke-interface {v0, v2, v3, p0}, Landroid/widget/ListAdapter;->getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v3

    .line 315
    .local v3, "itemView":Landroid/view/View;
    const/4 v4, 0x0

    invoke-virtual {v3, v4, v4}, Landroid/view/View;->measure(II)V

    .line 316
    invoke-virtual {v3}, Landroid/view/View;->getMeasuredHeight()I

    move-result v4

    add-int/2addr v1, v4

    .line 313
    .end local v3    # "itemView":Landroid/view/View;
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 318
    .end local v2    # "i":I
    :cond_1
    invoke-virtual {p0}, Landroid/widget/ListView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    .line 319
    .local v2, "layoutParams":Landroid/view/ViewGroup$LayoutParams;
    nop

    .line 320
    invoke-virtual {p0}, Landroid/widget/ListView;->getDividerHeight()I

    move-result v3

    invoke-interface {v0}, Landroid/widget/ListAdapter;->getCount()I

    move-result v4

    add-int/lit8 v4, v4, -0x1

    mul-int/2addr v3, v4

    add-int/2addr v3, v1

    iput v3, v2, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 321
    invoke-virtual {p0, v2}, Landroid/widget/ListView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 322
    return-void
.end method

.method public static setProperty(Ljava/lang/String;Ljava/lang/String;)V
    .locals 7
    .param p0, "key"    # Ljava/lang/String;
    .param p1, "value"    # Ljava/lang/String;

    .line 463
    :try_start_0
    const-string v0, "android.os.SystemProperties"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    .line 464
    .local v0, "c":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    const-string v1, "set"

    const/4 v2, 0x2

    new-array v3, v2, [Ljava/lang/Class;

    const-class v4, Ljava/lang/String;

    const/4 v5, 0x0

    aput-object v4, v3, v5

    const-class v4, Ljava/lang/String;

    const/4 v6, 0x1

    aput-object v4, v3, v6

    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    .line 465
    .local v1, "set":Ljava/lang/reflect/Method;
    new-array v2, v2, [Ljava/lang/Object;

    aput-object p0, v2, v5

    aput-object p1, v2, v6

    invoke-virtual {v1, v0, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 468
    nop

    .end local v0    # "c":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    .end local v1    # "set":Ljava/lang/reflect/Method;
    goto :goto_0

    .line 466
    :catch_0
    move-exception v0

    .line 467
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 469
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public static setVisibleLayout([Landroid/view/View;[Landroid/view/View;)V
    .locals 8
    .param p0, "allLayouts"    # [Landroid/view/View;
    .param p1, "visibleLayouts"    # [Landroid/view/View;

    .line 325
    const/4 v0, 0x0

    .line 326
    .local v0, "inVisible":Z
    array-length v1, p0

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_3

    aget-object v4, p0, v3

    .line 327
    .local v4, "view":Landroid/view/View;
    const/4 v0, 0x0

    .line 328
    if-eqz p1, :cond_1

    .line 329
    array-length v5, p1

    move v6, v2

    :goto_1
    if-ge v6, v5, :cond_1

    aget-object v7, p1, v6

    .line 330
    .local v7, "visiLayout":Landroid/view/View;
    if-ne v7, v4, :cond_0

    .line 331
    const/4 v0, 0x1

    .line 332
    goto :goto_2

    .line 329
    .end local v7    # "visiLayout":Landroid/view/View;
    :cond_0
    add-int/lit8 v6, v6, 0x1

    goto :goto_1

    .line 336
    :cond_1
    :goto_2
    if-eqz v0, :cond_2

    move v5, v2

    goto :goto_3

    :cond_2
    const/16 v5, 0x8

    :goto_3
    invoke-virtual {v4, v5}, Landroid/view/View;->setVisibility(I)V

    .line 326
    .end local v4    # "view":Landroid/view/View;
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 338
    :cond_3
    return-void
.end method

.method public static showErrorAndFinish(Landroid/app/Activity;I)V
    .locals 1
    .param p0, "activity"    # Landroid/app/Activity;
    .param p1, "msgId"    # I

    .line 361
    new-instance v0, Lcom/mediatek/emcamera/Utils$1;

    invoke-direct {v0, p0, p1}, Lcom/mediatek/emcamera/Utils$1;-><init>(Landroid/app/Activity;I)V

    invoke-virtual {p0, v0}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 376
    return-void
.end method

.method public static showMsgDialog(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "title"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/String;

    .line 355
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0, p1}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    invoke-virtual {v0, p2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 356
    const v1, 0x104000a

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 357
    .local v0, "dialog":Landroid/app/AlertDialog;
    invoke-virtual {v0}, Landroid/app/AlertDialog;->show()V

    .line 358
    return-void
.end method

.method public static showToast(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 1
    .param p0, "activity"    # Landroid/app/Activity;
    .param p1, "msg"    # Ljava/lang/String;

    .line 399
    const/4 v0, 0x1

    invoke-static {p0, p1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 400
    return-void
.end method

.method public static timeFormat(J)Ljava/lang/String;
    .locals 1
    .param p0, "dateTaken"    # J

    .line 215
    const-string v0, "yyyyMMdd-kkmmss"

    invoke-static {v0, p0, p1}, Landroid/text/format/DateFormat;->format(Ljava/lang/CharSequence;J)Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static toastOnUiThread(Landroid/app/Activity;I)V
    .locals 1
    .param p0, "activity"    # Landroid/app/Activity;
    .param p1, "msgId"    # I

    .line 379
    new-instance v0, Lcom/mediatek/emcamera/Utils$2;

    invoke-direct {v0, p0, p1}, Lcom/mediatek/emcamera/Utils$2;-><init>(Landroid/app/Activity;I)V

    invoke-virtual {p0, v0}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 386
    return-void
.end method

.method public static toastOnUiThread(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 1
    .param p0, "activity"    # Landroid/app/Activity;
    .param p1, "msg"    # Ljava/lang/String;

    .line 389
    new-instance v0, Lcom/mediatek/emcamera/Utils$3;

    invoke-direct {v0, p0, p1}, Lcom/mediatek/emcamera/Utils$3;-><init>(Landroid/app/Activity;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 396
    return-void
.end method

.method public static writeData(Ljava/lang/String;[B)V
    .locals 4
    .param p0, "fileName"    # Ljava/lang/String;
    .param p1, "data"    # [B

    .line 194
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 195
    .local v0, "fHandle":Ljava/io/File;
    const/4 v1, 0x0

    .line 197
    .local v1, "bos":Ljava/io/OutputStream;
    :try_start_0
    new-instance v2, Ljava/io/FileOutputStream;

    invoke-direct {v2, v0}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V

    move-object v1, v2

    .line 198
    invoke-virtual {v1, p1}, Ljava/io/OutputStream;->write([B)V

    .line 199
    invoke-virtual {v1}, Ljava/io/OutputStream;->close()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 205
    nop

    .line 206
    :try_start_1
    invoke-virtual {v1}, Ljava/io/OutputStream;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    .line 210
    :cond_0
    :goto_0
    goto :goto_1

    .line 208
    :catch_0
    move-exception v2

    .line 209
    .local v2, "e":Ljava/io/IOException;
    invoke-virtual {v2}, Ljava/io/IOException;->printStackTrace()V

    .line 211
    .end local v2    # "e":Ljava/io/IOException;
    goto :goto_1

    .line 204
    :catchall_0
    move-exception v2

    goto :goto_2

    .line 200
    :catch_1
    move-exception v2

    .line 201
    .local v2, "ex":Ljava/io/IOException;
    :try_start_2
    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    .line 202
    invoke-virtual {v2}, Ljava/io/IOException;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 205
    .end local v2    # "ex":Ljava/io/IOException;
    if-eqz v1, :cond_0

    .line 206
    :try_start_3
    invoke-virtual {v1}, Ljava/io/OutputStream;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_0

    goto :goto_0

    .line 212
    :goto_1
    return-void

    .line 205
    :goto_2
    if-eqz v1, :cond_1

    .line 206
    :try_start_4
    invoke-virtual {v1}, Ljava/io/OutputStream;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_2

    goto :goto_3

    .line 208
    :catch_2
    move-exception v3

    .line 209
    .local v3, "e":Ljava/io/IOException;
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V

    goto :goto_4

    .line 210
    .end local v3    # "e":Ljava/io/IOException;
    :cond_1
    :goto_3
    nop

    .line 211
    :goto_4
    throw v2
.end method
