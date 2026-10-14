.class public Lcom/mediatek/engineermode/ChipSupport;
.super Ljava/lang/Object;
.source "ChipSupport.java"


# static fields
.field public static final MTK_6580_SUPPORT:I = 0x2

.field public static final MTK_6735_SUPPORT:I = 0x1

.field public static final MTK_COMMON_CHIP_SUPPORT:I = 0x14

.field public static final MTK_INIERNAL_LOAD:I = 0x0

.field public static final MTK_TC1_COMMON_SERVICE:I = 0x1


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 143
    const-string v0, "em_support_jni"

    invoke-static {v0}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V

    .line 144
    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 102
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 104
    return-void
.end method

.method public static native getAudioTuningVersion()Ljava/lang/String;
.end method

.method public static native getChip()I
.end method

.method public static isCurrentChipEquals(I)Z
    .locals 2
    .param p0, "targetChip"    # I

    .line 97
    invoke-static {}, Lcom/mediatek/engineermode/ChipSupport;->getChip()I

    move-result v0

    .line 99
    .local v0, "chip":I
    if-ne v0, p0, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method public static native isFeatureSupported(I)Z
.end method

.method public static native lcmOff()I
.end method

.method public static native lcmOn()I
.end method
