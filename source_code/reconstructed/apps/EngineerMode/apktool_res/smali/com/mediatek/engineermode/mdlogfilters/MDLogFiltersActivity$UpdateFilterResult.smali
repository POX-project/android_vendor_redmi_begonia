.class final enum Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;
.super Ljava/lang/Enum;
.source "MDLogFiltersActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4018
    name = "UpdateFilterResult"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

.field public static final enum UPDATE_FILTER_RESULT_DONE:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

.field public static final enum UPDATE_FILTER_RESULT_IO_ERROR:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

.field public static final enum UPDATE_FILTER_RESULT_NO_RECORD_FILE:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    .line 401
    new-instance v0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

    const-string v1, "UPDATE_FILTER_RESULT_DONE"

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;->UPDATE_FILTER_RESULT_DONE:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

    .line 402
    new-instance v0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

    const-string v1, "UPDATE_FILTER_RESULT_NO_RECORD_FILE"

    const/4 v3, 0x1

    invoke-direct {v0, v1, v3}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;->UPDATE_FILTER_RESULT_NO_RECORD_FILE:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

    .line 403
    new-instance v0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

    const-string v1, "UPDATE_FILTER_RESULT_IO_ERROR"

    const/4 v4, 0x2

    invoke-direct {v0, v1, v4}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;->UPDATE_FILTER_RESULT_IO_ERROR:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

    .line 400
    const/4 v1, 0x3

    new-array v1, v1, [Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

    sget-object v5, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;->UPDATE_FILTER_RESULT_DONE:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

    aput-object v5, v1, v2

    sget-object v2, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;->UPDATE_FILTER_RESULT_NO_RECORD_FILE:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

    aput-object v2, v1, v3

    aput-object v0, v1, v4

    sput-object v1, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;->$VALUES:[Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 400
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;
    .locals 1
    .param p0, "name"    # Ljava/lang/String;

    .line 400
    const-class v0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

    return-object v0
.end method

.method public static values()[Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;
    .locals 1

    .line 400
    sget-object v0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;->$VALUES:[Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

    invoke-virtual {v0}, [Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

    return-object v0
.end method
