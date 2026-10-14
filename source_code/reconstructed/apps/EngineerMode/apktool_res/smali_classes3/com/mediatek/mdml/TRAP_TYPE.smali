.class public final enum Lcom/mediatek/mdml/TRAP_TYPE;
.super Ljava/lang/Enum;
.source "TRAP_TYPE.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/mdml/TRAP_TYPE$TrapMap;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/mediatek/mdml/TRAP_TYPE;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/mediatek/mdml/TRAP_TYPE;

.field public static final enum TRAP_TYPE_DISCARDINFO:Lcom/mediatek/mdml/TRAP_TYPE;

.field public static final enum TRAP_TYPE_EM:Lcom/mediatek/mdml/TRAP_TYPE;

.field public static final enum TRAP_TYPE_ICD_EVENT:Lcom/mediatek/mdml/TRAP_TYPE;

.field public static final enum TRAP_TYPE_ICD_RECORD:Lcom/mediatek/mdml/TRAP_TYPE;

.field public static final enum TRAP_TYPE_OTA:Lcom/mediatek/mdml/TRAP_TYPE;

.field public static final enum TRAP_TYPE_PHASEOUT_1:Lcom/mediatek/mdml/TRAP_TYPE;

.field public static final enum TRAP_TYPE_PHASEOUT_2:Lcom/mediatek/mdml/TRAP_TYPE;

.field public static final enum TRAP_TYPE_PSTIME:Lcom/mediatek/mdml/TRAP_TYPE;

.field public static final enum TRAP_TYPE_SIZE:Lcom/mediatek/mdml/TRAP_TYPE;

.field public static final enum TRAP_TYPE_UNDEFINED:Lcom/mediatek/mdml/TRAP_TYPE;

.field private static final trapTable:[Lcom/mediatek/mdml/TRAP_TYPE$TrapMap;


# direct methods
.method static constructor <clinit>()V
    .locals 14

    .line 9
    new-instance v0, Lcom/mediatek/mdml/TRAP_TYPE;

    const-string v1, "TRAP_TYPE_UNDEFINED"

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mediatek/mdml/TRAP_TYPE;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_UNDEFINED:Lcom/mediatek/mdml/TRAP_TYPE;

    .line 10
    new-instance v0, Lcom/mediatek/mdml/TRAP_TYPE;

    const-string v1, "TRAP_TYPE_DISCARDINFO"

    const/4 v3, 0x1

    invoke-direct {v0, v1, v3}, Lcom/mediatek/mdml/TRAP_TYPE;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_DISCARDINFO:Lcom/mediatek/mdml/TRAP_TYPE;

    .line 11
    new-instance v0, Lcom/mediatek/mdml/TRAP_TYPE;

    const-string v1, "TRAP_TYPE_OTA"

    const/4 v4, 0x2

    invoke-direct {v0, v1, v4}, Lcom/mediatek/mdml/TRAP_TYPE;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_OTA:Lcom/mediatek/mdml/TRAP_TYPE;

    .line 12
    new-instance v0, Lcom/mediatek/mdml/TRAP_TYPE;

    const-string v1, "TRAP_TYPE_EM"

    const/4 v5, 0x3

    invoke-direct {v0, v1, v5}, Lcom/mediatek/mdml/TRAP_TYPE;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_EM:Lcom/mediatek/mdml/TRAP_TYPE;

    .line 13
    new-instance v0, Lcom/mediatek/mdml/TRAP_TYPE;

    const-string v1, "TRAP_TYPE_PHASEOUT_1"

    const/4 v6, 0x4

    invoke-direct {v0, v1, v6}, Lcom/mediatek/mdml/TRAP_TYPE;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_PHASEOUT_1:Lcom/mediatek/mdml/TRAP_TYPE;

    .line 14
    new-instance v0, Lcom/mediatek/mdml/TRAP_TYPE;

    const-string v1, "TRAP_TYPE_PSTIME"

    const/4 v7, 0x5

    invoke-direct {v0, v1, v7}, Lcom/mediatek/mdml/TRAP_TYPE;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_PSTIME:Lcom/mediatek/mdml/TRAP_TYPE;

    .line 15
    new-instance v0, Lcom/mediatek/mdml/TRAP_TYPE;

    const-string v1, "TRAP_TYPE_PHASEOUT_2"

    const/4 v8, 0x6

    invoke-direct {v0, v1, v8}, Lcom/mediatek/mdml/TRAP_TYPE;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_PHASEOUT_2:Lcom/mediatek/mdml/TRAP_TYPE;

    .line 16
    new-instance v0, Lcom/mediatek/mdml/TRAP_TYPE;

    const-string v1, "TRAP_TYPE_ICD_RECORD"

    const/4 v9, 0x7

    invoke-direct {v0, v1, v9}, Lcom/mediatek/mdml/TRAP_TYPE;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_ICD_RECORD:Lcom/mediatek/mdml/TRAP_TYPE;

    .line 17
    new-instance v0, Lcom/mediatek/mdml/TRAP_TYPE;

    const-string v1, "TRAP_TYPE_ICD_EVENT"

    const/16 v10, 0x8

    invoke-direct {v0, v1, v10}, Lcom/mediatek/mdml/TRAP_TYPE;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_ICD_EVENT:Lcom/mediatek/mdml/TRAP_TYPE;

    .line 21
    new-instance v0, Lcom/mediatek/mdml/TRAP_TYPE;

    const-string v1, "TRAP_TYPE_SIZE"

    const/16 v11, 0x9

    invoke-direct {v0, v1, v11}, Lcom/mediatek/mdml/TRAP_TYPE;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_SIZE:Lcom/mediatek/mdml/TRAP_TYPE;

    .line 8
    const/16 v1, 0xa

    new-array v1, v1, [Lcom/mediatek/mdml/TRAP_TYPE;

    sget-object v12, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_UNDEFINED:Lcom/mediatek/mdml/TRAP_TYPE;

    aput-object v12, v1, v2

    sget-object v12, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_DISCARDINFO:Lcom/mediatek/mdml/TRAP_TYPE;

    aput-object v12, v1, v3

    sget-object v12, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_OTA:Lcom/mediatek/mdml/TRAP_TYPE;

    aput-object v12, v1, v4

    sget-object v13, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_EM:Lcom/mediatek/mdml/TRAP_TYPE;

    aput-object v13, v1, v5

    sget-object v13, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_PHASEOUT_1:Lcom/mediatek/mdml/TRAP_TYPE;

    aput-object v13, v1, v6

    sget-object v13, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_PSTIME:Lcom/mediatek/mdml/TRAP_TYPE;

    aput-object v13, v1, v7

    sget-object v13, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_PHASEOUT_2:Lcom/mediatek/mdml/TRAP_TYPE;

    aput-object v13, v1, v8

    sget-object v13, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_ICD_RECORD:Lcom/mediatek/mdml/TRAP_TYPE;

    aput-object v13, v1, v9

    sget-object v13, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_ICD_EVENT:Lcom/mediatek/mdml/TRAP_TYPE;

    aput-object v13, v1, v10

    aput-object v0, v1, v11

    sput-object v1, Lcom/mediatek/mdml/TRAP_TYPE;->$VALUES:[Lcom/mediatek/mdml/TRAP_TYPE;

    .line 34
    new-array v0, v9, [Lcom/mediatek/mdml/TRAP_TYPE$TrapMap;

    new-instance v1, Lcom/mediatek/mdml/TRAP_TYPE$TrapMap;

    const-string v9, "OTA"

    invoke-direct {v1, v12, v9}, Lcom/mediatek/mdml/TRAP_TYPE$TrapMap;-><init>(Lcom/mediatek/mdml/TRAP_TYPE;Ljava/lang/String;)V

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/mdml/TRAP_TYPE$TrapMap;

    sget-object v2, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_EM:Lcom/mediatek/mdml/TRAP_TYPE;

    const-string v9, "EM"

    invoke-direct {v1, v2, v9}, Lcom/mediatek/mdml/TRAP_TYPE$TrapMap;-><init>(Lcom/mediatek/mdml/TRAP_TYPE;Ljava/lang/String;)V

    aput-object v1, v0, v3

    new-instance v1, Lcom/mediatek/mdml/TRAP_TYPE$TrapMap;

    sget-object v2, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_PHASEOUT_1:Lcom/mediatek/mdml/TRAP_TYPE;

    const-string v3, "PHASEOUT_1"

    invoke-direct {v1, v2, v3}, Lcom/mediatek/mdml/TRAP_TYPE$TrapMap;-><init>(Lcom/mediatek/mdml/TRAP_TYPE;Ljava/lang/String;)V

    aput-object v1, v0, v4

    new-instance v1, Lcom/mediatek/mdml/TRAP_TYPE$TrapMap;

    sget-object v2, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_PSTIME:Lcom/mediatek/mdml/TRAP_TYPE;

    const-string v3, "PSTIME"

    invoke-direct {v1, v2, v3}, Lcom/mediatek/mdml/TRAP_TYPE$TrapMap;-><init>(Lcom/mediatek/mdml/TRAP_TYPE;Ljava/lang/String;)V

    aput-object v1, v0, v5

    new-instance v1, Lcom/mediatek/mdml/TRAP_TYPE$TrapMap;

    sget-object v2, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_PHASEOUT_2:Lcom/mediatek/mdml/TRAP_TYPE;

    const-string v3, "PHASEOUT_2"

    invoke-direct {v1, v2, v3}, Lcom/mediatek/mdml/TRAP_TYPE$TrapMap;-><init>(Lcom/mediatek/mdml/TRAP_TYPE;Ljava/lang/String;)V

    aput-object v1, v0, v6

    new-instance v1, Lcom/mediatek/mdml/TRAP_TYPE$TrapMap;

    sget-object v2, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_ICD_RECORD:Lcom/mediatek/mdml/TRAP_TYPE;

    const-string v3, "ICD_RECORD"

    invoke-direct {v1, v2, v3}, Lcom/mediatek/mdml/TRAP_TYPE$TrapMap;-><init>(Lcom/mediatek/mdml/TRAP_TYPE;Ljava/lang/String;)V

    aput-object v1, v0, v7

    new-instance v1, Lcom/mediatek/mdml/TRAP_TYPE$TrapMap;

    sget-object v2, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_ICD_EVENT:Lcom/mediatek/mdml/TRAP_TYPE;

    const-string v3, "ICD_EVENT"

    invoke-direct {v1, v2, v3}, Lcom/mediatek/mdml/TRAP_TYPE$TrapMap;-><init>(Lcom/mediatek/mdml/TRAP_TYPE;Ljava/lang/String;)V

    aput-object v1, v0, v8

    sput-object v0, Lcom/mediatek/mdml/TRAP_TYPE;->trapTable:[Lcom/mediatek/mdml/TRAP_TYPE$TrapMap;

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

.method public static ToTrapStr(Lcom/mediatek/mdml/TRAP_TYPE;)Ljava/lang/String;
    .locals 3
    .param p0, "type"    # Lcom/mediatek/mdml/TRAP_TYPE;

    .line 45
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    sget-object v1, Lcom/mediatek/mdml/TRAP_TYPE;->trapTable:[Lcom/mediatek/mdml/TRAP_TYPE$TrapMap;

    array-length v2, v1

    if-ge v0, v2, :cond_1

    .line 46
    aget-object v1, v1, v0

    iget-object v1, v1, Lcom/mediatek/mdml/TRAP_TYPE$TrapMap;->m_type:Lcom/mediatek/mdml/TRAP_TYPE;

    invoke-virtual {p0, v1}, Lcom/mediatek/mdml/TRAP_TYPE;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 47
    sget-object v1, Lcom/mediatek/mdml/TRAP_TYPE;->trapTable:[Lcom/mediatek/mdml/TRAP_TYPE$TrapMap;

    aget-object v1, v1, v0

    iget-object v1, v1, Lcom/mediatek/mdml/TRAP_TYPE$TrapMap;->m_szType:Ljava/lang/String;

    return-object v1

    .line 45
    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 50
    .end local v0    # "i":I
    :cond_1
    const/4 v0, 0x0

    return-object v0
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/mediatek/mdml/TRAP_TYPE;
    .locals 1
    .param p0, "name"    # Ljava/lang/String;

    .line 8
    const-class v0, Lcom/mediatek/mdml/TRAP_TYPE;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/mediatek/mdml/TRAP_TYPE;

    return-object v0
.end method

.method public static values()[Lcom/mediatek/mdml/TRAP_TYPE;
    .locals 1

    .line 8
    sget-object v0, Lcom/mediatek/mdml/TRAP_TYPE;->$VALUES:[Lcom/mediatek/mdml/TRAP_TYPE;

    invoke-virtual {v0}, [Lcom/mediatek/mdml/TRAP_TYPE;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/mediatek/mdml/TRAP_TYPE;

    return-object v0
.end method


# virtual methods
.method public GetValue()I
    .locals 1

    .line 23
    invoke-virtual {p0}, Lcom/mediatek/mdml/TRAP_TYPE;->ordinal()I

    move-result v0

    return v0
.end method
