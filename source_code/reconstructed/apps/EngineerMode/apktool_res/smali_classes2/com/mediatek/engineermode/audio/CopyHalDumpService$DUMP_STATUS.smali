.class final enum Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;
.super Ljava/lang/Enum;
.source "CopyHalDumpService.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/audio/CopyHalDumpService;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4018
    name = "DUMP_STATUS"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

.field public static final enum COPY_DUMP_DONE:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

.field public static final enum COPY_HAL_DUMP:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

.field public static final enum DEFAULT:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

.field public static final enum DELETE_DUMP_DONE:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

.field public static final enum DELETE_HAL_DUMP:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;


# direct methods
.method static constructor <clinit>()V
    .locals 8

    .line 60
    new-instance v0, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    const-string v1, "DEFAULT"

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;->DEFAULT:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    .line 61
    new-instance v0, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    const-string v1, "COPY_HAL_DUMP"

    const/4 v3, 0x1

    invoke-direct {v0, v1, v3}, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;->COPY_HAL_DUMP:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    .line 62
    new-instance v0, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    const-string v1, "DELETE_HAL_DUMP"

    const/4 v4, 0x2

    invoke-direct {v0, v1, v4}, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;->DELETE_HAL_DUMP:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    .line 63
    new-instance v0, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    const-string v1, "COPY_DUMP_DONE"

    const/4 v5, 0x3

    invoke-direct {v0, v1, v5}, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;->COPY_DUMP_DONE:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    .line 64
    new-instance v0, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    const-string v1, "DELETE_DUMP_DONE"

    const/4 v6, 0x4

    invoke-direct {v0, v1, v6}, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;->DELETE_DUMP_DONE:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    .line 59
    const/4 v1, 0x5

    new-array v1, v1, [Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    sget-object v7, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;->DEFAULT:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    aput-object v7, v1, v2

    sget-object v2, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;->COPY_HAL_DUMP:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;->DELETE_HAL_DUMP:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    aput-object v2, v1, v4

    sget-object v2, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;->COPY_DUMP_DONE:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    aput-object v2, v1, v5

    aput-object v0, v1, v6

    sput-object v1, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;->$VALUES:[Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 59
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;
    .locals 1
    .param p0, "name"    # Ljava/lang/String;

    .line 59
    const-class v0, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    return-object v0
.end method

.method public static values()[Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;
    .locals 1

    .line 59
    sget-object v0, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;->$VALUES:[Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    invoke-virtual {v0}, [Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    return-object v0
.end method
