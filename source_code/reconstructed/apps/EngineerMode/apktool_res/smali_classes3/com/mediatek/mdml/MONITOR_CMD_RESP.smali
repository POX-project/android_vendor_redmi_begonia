.class public final enum Lcom/mediatek/mdml/MONITOR_CMD_RESP;
.super Ljava/lang/Enum;
.source "MONITOR_CMD_RESP.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/mediatek/mdml/MONITOR_CMD_RESP;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/mediatek/mdml/MONITOR_CMD_RESP;

.field public static final enum MONITOR_CMD_RESP_BAD_CMD_FMT:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

.field public static final enum MONITOR_CMD_RESP_BAD_PARAMETERS:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

.field public static final enum MONITOR_CMD_RESP_BAD_REPLY:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

.field public static final enum MONITOR_CMD_RESP_DOER_NOT_EXIST:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

.field public static final enum MONITOR_CMD_RESP_INTERNAL_ERROR:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

.field public static final enum MONITOR_CMD_RESP_NOT_IMPLEMENT:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

.field public static final enum MONITOR_CMD_RESP_NO_CONNECTION:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

.field public static final enum MONITOR_CMD_RESP_NO_SUCH_SESSION:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

.field public static final enum MONITOR_CMD_RESP_NO_SUCH_TRAP_MESSAGE:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

.field public static final enum MONITOR_CMD_RESP_OP_FAILED:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

.field public static final enum MONITOR_CMD_RESP_OP_TIMEOUT:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

.field public static final enum MONITOR_CMD_RESP_PERMISSION_DENIED:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

.field public static final enum MONITOR_CMD_RESP_SESSION_EXPIRED:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

.field public static final enum MONITOR_CMD_RESP_SIZE:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

.field public static final enum MONITOR_CMD_RESP_SUCCESS:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

.field public static final enum MONITOR_CMD_RESP_UNAUTHORIZED:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

.field public static final enum MONITOR_CMD_RESP_UNDEFINED_CMD:Lcom/mediatek/mdml/MONITOR_CMD_RESP;


# direct methods
.method static constructor <clinit>()V
    .locals 17

    .line 9
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    const-string v1, "MONITOR_CMD_RESP_SUCCESS"

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mediatek/mdml/MONITOR_CMD_RESP;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_SUCCESS:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 10
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    const-string v1, "MONITOR_CMD_RESP_INTERNAL_ERROR"

    const/4 v3, 0x1

    invoke-direct {v0, v1, v3}, Lcom/mediatek/mdml/MONITOR_CMD_RESP;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_INTERNAL_ERROR:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 11
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    const-string v1, "MONITOR_CMD_RESP_UNDEFINED_CMD"

    const/4 v4, 0x2

    invoke-direct {v0, v1, v4}, Lcom/mediatek/mdml/MONITOR_CMD_RESP;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_UNDEFINED_CMD:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 12
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    const-string v1, "MONITOR_CMD_RESP_BAD_PARAMETERS"

    const/4 v5, 0x3

    invoke-direct {v0, v1, v5}, Lcom/mediatek/mdml/MONITOR_CMD_RESP;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_BAD_PARAMETERS:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 13
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    const-string v1, "MONITOR_CMD_RESP_BAD_CMD_FMT"

    const/4 v6, 0x4

    invoke-direct {v0, v1, v6}, Lcom/mediatek/mdml/MONITOR_CMD_RESP;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_BAD_CMD_FMT:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 14
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    const-string v1, "MONITOR_CMD_RESP_NO_SUCH_SESSION"

    const/4 v7, 0x5

    invoke-direct {v0, v1, v7}, Lcom/mediatek/mdml/MONITOR_CMD_RESP;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_NO_SUCH_SESSION:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 15
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    const-string v1, "MONITOR_CMD_RESP_SESSION_EXPIRED"

    const/4 v8, 0x6

    invoke-direct {v0, v1, v8}, Lcom/mediatek/mdml/MONITOR_CMD_RESP;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_SESSION_EXPIRED:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 16
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    const-string v1, "MONITOR_CMD_RESP_DOER_NOT_EXIST"

    const/4 v9, 0x7

    invoke-direct {v0, v1, v9}, Lcom/mediatek/mdml/MONITOR_CMD_RESP;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_DOER_NOT_EXIST:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 17
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    const-string v1, "MONITOR_CMD_RESP_PERMISSION_DENIED"

    const/16 v10, 0x8

    invoke-direct {v0, v1, v10}, Lcom/mediatek/mdml/MONITOR_CMD_RESP;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_PERMISSION_DENIED:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 18
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    const-string v1, "MONITOR_CMD_RESP_NO_CONNECTION"

    const/16 v11, 0x9

    invoke-direct {v0, v1, v11}, Lcom/mediatek/mdml/MONITOR_CMD_RESP;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_NO_CONNECTION:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 19
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    const-string v1, "MONITOR_CMD_RESP_BAD_REPLY"

    const/16 v12, 0xa

    invoke-direct {v0, v1, v12}, Lcom/mediatek/mdml/MONITOR_CMD_RESP;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_BAD_REPLY:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 20
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    const-string v1, "MONITOR_CMD_RESP_OP_FAILED"

    const/16 v13, 0xb

    invoke-direct {v0, v1, v13}, Lcom/mediatek/mdml/MONITOR_CMD_RESP;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_OP_FAILED:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 21
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    const-string v1, "MONITOR_CMD_RESP_NO_SUCH_TRAP_MESSAGE"

    const/16 v14, 0xc

    invoke-direct {v0, v1, v14}, Lcom/mediatek/mdml/MONITOR_CMD_RESP;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_NO_SUCH_TRAP_MESSAGE:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 22
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    const-string v1, "MONITOR_CMD_RESP_NOT_IMPLEMENT"

    const/16 v15, 0xd

    invoke-direct {v0, v1, v15}, Lcom/mediatek/mdml/MONITOR_CMD_RESP;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_NOT_IMPLEMENT:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 23
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    const-string v1, "MONITOR_CMD_RESP_UNAUTHORIZED"

    const/16 v15, 0xe

    invoke-direct {v0, v1, v15}, Lcom/mediatek/mdml/MONITOR_CMD_RESP;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_UNAUTHORIZED:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 24
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    const-string v1, "MONITOR_CMD_RESP_OP_TIMEOUT"

    const/16 v15, 0xf

    invoke-direct {v0, v1, v15}, Lcom/mediatek/mdml/MONITOR_CMD_RESP;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_OP_TIMEOUT:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 28
    new-instance v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    const-string v1, "MONITOR_CMD_RESP_SIZE"

    const/16 v15, 0x10

    invoke-direct {v0, v1, v15}, Lcom/mediatek/mdml/MONITOR_CMD_RESP;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_SIZE:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    .line 8
    const/16 v1, 0x11

    new-array v1, v1, [Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    sget-object v16, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_SUCCESS:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    aput-object v16, v1, v2

    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_INTERNAL_ERROR:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_UNDEFINED_CMD:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    aput-object v2, v1, v4

    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_BAD_PARAMETERS:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    aput-object v2, v1, v5

    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_BAD_CMD_FMT:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    aput-object v2, v1, v6

    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_NO_SUCH_SESSION:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    aput-object v2, v1, v7

    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_SESSION_EXPIRED:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    aput-object v2, v1, v8

    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_DOER_NOT_EXIST:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    aput-object v2, v1, v9

    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_PERMISSION_DENIED:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    aput-object v2, v1, v10

    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_NO_CONNECTION:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    aput-object v2, v1, v11

    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_BAD_REPLY:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    aput-object v2, v1, v12

    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_OP_FAILED:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    aput-object v2, v1, v13

    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_NO_SUCH_TRAP_MESSAGE:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    aput-object v2, v1, v14

    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_NOT_IMPLEMENT:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    const/16 v3, 0xd

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_UNAUTHORIZED:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    const/16 v3, 0xe

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->MONITOR_CMD_RESP_OP_TIMEOUT:Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    const/16 v3, 0xf

    aput-object v2, v1, v3

    aput-object v0, v1, v15

    sput-object v1, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->$VALUES:[Lcom/mediatek/mdml/MONITOR_CMD_RESP;

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

.method public static valueOf(Ljava/lang/String;)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    .locals 1
    .param p0, "name"    # Ljava/lang/String;

    .line 8
    const-class v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    return-object v0
.end method

.method public static values()[Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    .locals 1

    .line 8
    sget-object v0, Lcom/mediatek/mdml/MONITOR_CMD_RESP;->$VALUES:[Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    invoke-virtual {v0}, [Lcom/mediatek/mdml/MONITOR_CMD_RESP;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/mediatek/mdml/MONITOR_CMD_RESP;

    return-object v0
.end method
