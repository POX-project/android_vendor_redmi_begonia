.class public final Lcom/mediatek/engineermode/Manifest$permission;
.super Ljava/lang/Object;
.source "Manifest.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/Manifest;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "permission"
.end annotation


# static fields
.field public static final RECEIVE_UCE_EVENT:Ljava/lang/String; = "com.mediatek.uce.permission.RECEIVE_UCE_EVENT"

.field public static final USAGE:Ljava/lang/String; = "com.mediatek.engineermode.permission.USAGE"

.field public static final WIFI_LOG:Ljava/lang/String; = "com.mediatek.engineermode.permission.WIFI_LOG"

.field public static final permission:Ljava/lang/String; = "com.mediatek.engineermode.rfdesenseService.permission"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
