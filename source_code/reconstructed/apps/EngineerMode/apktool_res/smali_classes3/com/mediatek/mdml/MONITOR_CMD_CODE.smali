.class final enum Lcom/mediatek/mdml/MONITOR_CMD_CODE;
.super Ljava/lang/Enum;
.source "MONITOR_CMD_CODE.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/mediatek/mdml/MONITOR_CMD_CODE;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/mediatek/mdml/MONITOR_CMD_CODE;

.field public static final enum MONITOR_CMD_CODE_SESSION_CLOSE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

.field public static final enum MONITOR_CMD_CODE_SESSION_CREATE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

.field public static final enum MONITOR_CMD_CODE_SIZE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

.field public static final enum MONITOR_CMD_CODE_TRAP_DISABLE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

.field public static final enum MONITOR_CMD_CODE_TRAP_ENABLE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

.field public static final enum MONITOR_CMD_CODE_TRAP_RECEIVER_SET:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

.field public static final enum MONITOR_CMD_CODE_TRAP_SUBSCRIBE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

.field public static final enum MONITOR_CMD_CODE_TRAP_UNSUBSCRIBE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

.field public static final enum MONITOR_CMD_CODE_UNDEFINED:Lcom/mediatek/mdml/MONITOR_CMD_CODE;


# direct methods
.method static constructor <clinit>()V
    .locals 12

    .line 9
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const-string v1, "MONITOR_CMD_CODE_UNDEFINED"

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mediatek/mdml/MONITOR_CMD_CODE;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_UNDEFINED:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    .line 10
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const-string v1, "MONITOR_CMD_CODE_SESSION_CREATE"

    const/4 v3, 0x1

    invoke-direct {v0, v1, v3}, Lcom/mediatek/mdml/MONITOR_CMD_CODE;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_SESSION_CREATE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    .line 11
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const-string v1, "MONITOR_CMD_CODE_SESSION_CLOSE"

    const/4 v4, 0x2

    invoke-direct {v0, v1, v4}, Lcom/mediatek/mdml/MONITOR_CMD_CODE;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_SESSION_CLOSE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    .line 12
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const-string v1, "MONITOR_CMD_CODE_TRAP_SUBSCRIBE"

    const/4 v5, 0x3

    invoke-direct {v0, v1, v5}, Lcom/mediatek/mdml/MONITOR_CMD_CODE;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_TRAP_SUBSCRIBE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    .line 13
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const-string v1, "MONITOR_CMD_CODE_TRAP_UNSUBSCRIBE"

    const/4 v6, 0x4

    invoke-direct {v0, v1, v6}, Lcom/mediatek/mdml/MONITOR_CMD_CODE;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_TRAP_UNSUBSCRIBE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    .line 14
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const-string v1, "MONITOR_CMD_CODE_TRAP_ENABLE"

    const/4 v7, 0x5

    invoke-direct {v0, v1, v7}, Lcom/mediatek/mdml/MONITOR_CMD_CODE;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_TRAP_ENABLE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    .line 15
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const-string v1, "MONITOR_CMD_CODE_TRAP_DISABLE"

    const/4 v8, 0x6

    invoke-direct {v0, v1, v8}, Lcom/mediatek/mdml/MONITOR_CMD_CODE;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_TRAP_DISABLE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    .line 16
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const-string v1, "MONITOR_CMD_CODE_TRAP_RECEIVER_SET"

    const/4 v9, 0x7

    invoke-direct {v0, v1, v9}, Lcom/mediatek/mdml/MONITOR_CMD_CODE;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_TRAP_RECEIVER_SET:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    .line 17
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    const-string v1, "MONITOR_CMD_CODE_SIZE"

    const/16 v10, 0x8

    invoke-direct {v0, v1, v10}, Lcom/mediatek/mdml/MONITOR_CMD_CODE;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_SIZE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    .line 8
    const/16 v1, 0x9

    new-array v1, v1, [Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    sget-object v11, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_UNDEFINED:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    aput-object v11, v1, v2

    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_SESSION_CREATE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_SESSION_CLOSE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    aput-object v2, v1, v4

    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_TRAP_SUBSCRIBE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    aput-object v2, v1, v5

    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_TRAP_UNSUBSCRIBE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    aput-object v2, v1, v6

    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_TRAP_ENABLE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    aput-object v2, v1, v7

    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_TRAP_DISABLE:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    aput-object v2, v1, v8

    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->MONITOR_CMD_CODE_TRAP_RECEIVER_SET:Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    aput-object v2, v1, v9

    aput-object v0, v1, v10

    sput-object v1, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->$VALUES:[Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 8
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/mediatek/mdml/MONITOR_CMD_CODE;
    .locals 1
    .param p0, "name"    # Ljava/lang/String;

    .line 8
    const-class v0, Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    return-object v0
.end method

.method public static values()[Lcom/mediatek/mdml/MONITOR_CMD_CODE;
    .locals 1

    .line 8
    sget-object v0, Lcom/mediatek/mdml/MONITOR_CMD_CODE;->$VALUES:[Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    invoke-virtual {v0}, [Lcom/mediatek/mdml/MONITOR_CMD_CODE;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/mediatek/mdml/MONITOR_CMD_CODE;

    return-object v0
.end method
