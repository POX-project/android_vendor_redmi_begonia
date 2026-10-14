.class synthetic Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$3;
.super Ljava/lang/Object;
.source "MDLogFiltersActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1008
    name = null
.end annotation


# static fields
.field static final synthetic $SwitchMap$com$mediatek$engineermode$mdlogfilters$MDLogFiltersActivity$UpdateFilterResult:[I


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 449
    invoke-static {}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;->values()[Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

    move-result-object v0

    array-length v0, v0

    new-array v0, v0, [I

    sput-object v0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$3;->$SwitchMap$com$mediatek$engineermode$mdlogfilters$MDLogFiltersActivity$UpdateFilterResult:[I

    :try_start_0
    sget-object v1, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;->UPDATE_FILTER_RESULT_DONE:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;->ordinal()I

    move-result v1

    const/4 v2, 0x1

    aput v2, v0, v1
    :try_end_0
    .catch Ljava/lang/NoSuchFieldError; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    :goto_0
    :try_start_1
    sget-object v0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$3;->$SwitchMap$com$mediatek$engineermode$mdlogfilters$MDLogFiltersActivity$UpdateFilterResult:[I

    sget-object v1, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;->UPDATE_FILTER_RESULT_IO_ERROR:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;->ordinal()I

    move-result v1

    const/4 v2, 0x2

    aput v2, v0, v1
    :try_end_1
    .catch Ljava/lang/NoSuchFieldError; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    :goto_1
    :try_start_2
    sget-object v0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$3;->$SwitchMap$com$mediatek$engineermode$mdlogfilters$MDLogFiltersActivity$UpdateFilterResult:[I

    sget-object v1, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;->UPDATE_FILTER_RESULT_NO_RECORD_FILE:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;->ordinal()I

    move-result v1

    const/4 v2, 0x3

    aput v2, v0, v1
    :try_end_2
    .catch Ljava/lang/NoSuchFieldError; {:try_start_2 .. :try_end_2} :catch_2

    goto :goto_2

    :catch_2
    move-exception v0

    :goto_2
    return-void
.end method
