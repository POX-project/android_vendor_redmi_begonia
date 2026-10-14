.class final enum Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;
.super Ljava/lang/Enum;
.source "BtTest.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bluetooth/BtTest;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4018
    name = "BtTestResult"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

.field public static final enum RESULT_ANT_INIT_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

.field public static final enum RESULT_ANT_SWAP_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

.field public static final enum RESULT_CHANNEL_HOP_20_NO_SUPPORT:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

.field public static final enum RESULT_CHANNEL_HOP_20_SUPPORT:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

.field public static final enum RESULT_SUCCESS:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

.field public static final enum RESULT_TEST_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;


# direct methods
.method static constructor <clinit>()V
    .locals 9

    .line 86
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    const-string v1, "RESULT_SUCCESS"

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_SUCCESS:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    .line 87
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    const-string v1, "RESULT_ANT_INIT_FAIL"

    const/4 v3, 0x1

    invoke-direct {v0, v1, v3}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_ANT_INIT_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    .line 88
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    const-string v1, "RESULT_ANT_SWAP_FAIL"

    const/4 v4, 0x2

    invoke-direct {v0, v1, v4}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_ANT_SWAP_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    .line 89
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    const-string v1, "RESULT_CHANNEL_HOP_20_NO_SUPPORT"

    const/4 v5, 0x3

    invoke-direct {v0, v1, v5}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_CHANNEL_HOP_20_NO_SUPPORT:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    .line 90
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    const-string v1, "RESULT_CHANNEL_HOP_20_SUPPORT"

    const/4 v6, 0x4

    invoke-direct {v0, v1, v6}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_CHANNEL_HOP_20_SUPPORT:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    .line 91
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    const-string v1, "RESULT_TEST_FAIL"

    const/4 v7, 0x5

    invoke-direct {v0, v1, v7}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_TEST_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    .line 85
    const/4 v1, 0x6

    new-array v1, v1, [Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    sget-object v8, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_SUCCESS:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    aput-object v8, v1, v2

    sget-object v2, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_ANT_INIT_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_ANT_SWAP_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    aput-object v2, v1, v4

    sget-object v2, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_CHANNEL_HOP_20_NO_SUPPORT:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    aput-object v2, v1, v5

    sget-object v2, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_CHANNEL_HOP_20_SUPPORT:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    aput-object v2, v1, v6

    aput-object v0, v1, v7

    sput-object v1, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->$VALUES:[Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 85
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;
    .locals 1
    .param p0, "name"    # Ljava/lang/String;

    .line 85
    const-class v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    return-object v0
.end method

.method public static values()[Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;
    .locals 1

    .line 85
    sget-object v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->$VALUES:[Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    invoke-virtual {v0}, [Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    return-object v0
.end method
