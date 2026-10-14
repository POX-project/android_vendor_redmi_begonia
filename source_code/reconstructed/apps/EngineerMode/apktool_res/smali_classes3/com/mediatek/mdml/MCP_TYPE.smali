.class final enum Lcom/mediatek/mdml/MCP_TYPE;
.super Ljava/lang/Enum;
.source "MCP_TYPE.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/mediatek/mdml/MCP_TYPE;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/mediatek/mdml/MCP_TYPE;

.field public static final enum MCP_TYPE_JSON_CMD:Lcom/mediatek/mdml/MCP_TYPE;

.field public static final enum MCP_TYPE_JSON_CMD_RESP:Lcom/mediatek/mdml/MCP_TYPE;

.field public static final enum MCP_TYPE_SIZE:Lcom/mediatek/mdml/MCP_TYPE;

.field public static final enum MCP_TYPE_TRAP:Lcom/mediatek/mdml/MCP_TYPE;

.field public static final enum MCP_TYPE_UNDEFINED:Lcom/mediatek/mdml/MCP_TYPE;


# direct methods
.method static constructor <clinit>()V
    .locals 8

    .line 9
    new-instance v0, Lcom/mediatek/mdml/MCP_TYPE;

    const-string v1, "MCP_TYPE_UNDEFINED"

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mediatek/mdml/MCP_TYPE;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MCP_TYPE;->MCP_TYPE_UNDEFINED:Lcom/mediatek/mdml/MCP_TYPE;

    .line 10
    new-instance v0, Lcom/mediatek/mdml/MCP_TYPE;

    const-string v1, "MCP_TYPE_JSON_CMD"

    const/4 v3, 0x1

    invoke-direct {v0, v1, v3}, Lcom/mediatek/mdml/MCP_TYPE;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MCP_TYPE;->MCP_TYPE_JSON_CMD:Lcom/mediatek/mdml/MCP_TYPE;

    .line 11
    new-instance v0, Lcom/mediatek/mdml/MCP_TYPE;

    const-string v1, "MCP_TYPE_JSON_CMD_RESP"

    const/4 v4, 0x2

    invoke-direct {v0, v1, v4}, Lcom/mediatek/mdml/MCP_TYPE;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MCP_TYPE;->MCP_TYPE_JSON_CMD_RESP:Lcom/mediatek/mdml/MCP_TYPE;

    .line 12
    new-instance v0, Lcom/mediatek/mdml/MCP_TYPE;

    const-string v1, "MCP_TYPE_TRAP"

    const/4 v5, 0x3

    invoke-direct {v0, v1, v5}, Lcom/mediatek/mdml/MCP_TYPE;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MCP_TYPE;->MCP_TYPE_TRAP:Lcom/mediatek/mdml/MCP_TYPE;

    .line 15
    new-instance v0, Lcom/mediatek/mdml/MCP_TYPE;

    const-string v1, "MCP_TYPE_SIZE"

    const/4 v6, 0x4

    invoke-direct {v0, v1, v6}, Lcom/mediatek/mdml/MCP_TYPE;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/MCP_TYPE;->MCP_TYPE_SIZE:Lcom/mediatek/mdml/MCP_TYPE;

    .line 8
    const/4 v1, 0x5

    new-array v1, v1, [Lcom/mediatek/mdml/MCP_TYPE;

    sget-object v7, Lcom/mediatek/mdml/MCP_TYPE;->MCP_TYPE_UNDEFINED:Lcom/mediatek/mdml/MCP_TYPE;

    aput-object v7, v1, v2

    sget-object v2, Lcom/mediatek/mdml/MCP_TYPE;->MCP_TYPE_JSON_CMD:Lcom/mediatek/mdml/MCP_TYPE;

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/mdml/MCP_TYPE;->MCP_TYPE_JSON_CMD_RESP:Lcom/mediatek/mdml/MCP_TYPE;

    aput-object v2, v1, v4

    sget-object v2, Lcom/mediatek/mdml/MCP_TYPE;->MCP_TYPE_TRAP:Lcom/mediatek/mdml/MCP_TYPE;

    aput-object v2, v1, v5

    aput-object v0, v1, v6

    sput-object v1, Lcom/mediatek/mdml/MCP_TYPE;->$VALUES:[Lcom/mediatek/mdml/MCP_TYPE;

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

.method public static valueOf(Ljava/lang/String;)Lcom/mediatek/mdml/MCP_TYPE;
    .locals 1
    .param p0, "name"    # Ljava/lang/String;

    .line 8
    const-class v0, Lcom/mediatek/mdml/MCP_TYPE;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/mediatek/mdml/MCP_TYPE;

    return-object v0
.end method

.method public static values()[Lcom/mediatek/mdml/MCP_TYPE;
    .locals 1

    .line 8
    sget-object v0, Lcom/mediatek/mdml/MCP_TYPE;->$VALUES:[Lcom/mediatek/mdml/MCP_TYPE;

    invoke-virtual {v0}, [Lcom/mediatek/mdml/MCP_TYPE;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/mediatek/mdml/MCP_TYPE;

    return-object v0
.end method
