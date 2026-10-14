.class public Lcom/mediatek/engineermode/bandselect/BandSelect;
.super Landroid/app/Activity;
.source "BandSelect.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;
    }
.end annotation


# static fields
.field private static final INDEX_BAND_MAX:I = 0xb

.field private static final INDEX_CDMA_BAND:I = 0xa

.field private static final INDEX_GSM_BAND:I = 0x0

.field private static final INDEX_LTE_BAND_128:I = 0x5

.field private static final INDEX_LTE_BAND_160:I = 0x6

.field private static final INDEX_LTE_BAND_192:I = 0x7

.field private static final INDEX_LTE_BAND_224:I = 0x8

.field private static final INDEX_LTE_BAND_256:I = 0x9

.field private static final INDEX_LTE_BAND_96:I = 0x4

.field private static final INDEX_LTE_FDD_BAND:I = 0x2

.field private static final INDEX_LTE_TDD_BAND:I = 0x3

.field private static final INDEX_NR_BAND:I = 0xc

.field private static final INDEX_UMTS_BAND:I = 0x1

.field private static final NR_VALUES:I = 0x3

.field private static final PREF_FILE:Ljava/lang/String; = "band_select_"

.field private static final PREF_KEYS:[Ljava/lang/String;

.field private static final TAG:Ljava/lang/String; = "BandSelect"

.field private static final TDSCDMA:I = 0x2

.field private static final WCDMA:I = 0x1

.field private static mSimType:I


# instance fields
.field private mBtnReset:Landroid/widget/Button;

.field private mBtnSet:Landroid/widget/Button;

.field private final mCdmaModeArray:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;",
            ">;"
        }
    .end annotation
.end field

.field private mCurrentCdmaValues:J

.field private mCurrentGsmValues:[J

.field private mCurrentNRValues:[J

.field private mDefaultNRValues:[J

.field private final mGsmModeArray:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;",
            ">;"
        }
    .end annotation
.end field

.field private mIsCdmaValid:Z

.field private mIsLteExtend:Z

.field private mIsLteValid:Z

.field private mIsNRValid:Z

.field private mIsThisAlive:Z

.field private final mNRModeArray:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;",
            ">;"
        }
    .end annotation
.end field

.field private mRadioStateManager:Lcom/mediatek/engineermode/RadioStateManager;

.field private final mResponseHander:Landroid/os/Handler;

.field private mSetCdmaValues:J

.field private mSetGsmValues:[J

.field private mSetNRValues:[J


# direct methods
.method static constructor <clinit>()V
    .locals 11

    .line 72
    const-string v0, "gsm"

    const-string v1, "umts"

    const-string v2, "lte_fdd"

    const-string v3, "lte_tdd"

    const-string v4, "lte_96"

    const-string v5, "lte_128"

    const-string v6, "lte_160"

    const-string v7, "lte_192"

    const-string v8, "lte_224"

    const-string v9, "lte_256"

    const-string v10, "cdma"

    filled-new-array/range {v0 .. v10}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/bandselect/BandSelect;->PREF_KEYS:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 5

    .line 67
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 92
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mGsmModeArray:Ljava/util/ArrayList;

    .line 93
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mCdmaModeArray:Ljava/util/ArrayList;

    .line 94
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mNRModeArray:Ljava/util/ArrayList;

    .line 95
    const/16 v0, 0xb

    new-array v1, v0, [J

    iput-object v1, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSetGsmValues:[J

    .line 96
    const-wide/16 v1, 0x0

    iput-wide v1, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSetCdmaValues:J

    .line 97
    const/4 v3, 0x3

    new-array v4, v3, [J

    iput-object v4, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSetNRValues:[J

    .line 98
    new-array v0, v0, [J

    iput-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mCurrentGsmValues:[J

    .line 99
    iput-wide v1, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mCurrentCdmaValues:J

    .line 100
    new-array v0, v3, [J

    iput-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mCurrentNRValues:[J

    .line 101
    new-array v0, v3, [J

    iput-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mDefaultNRValues:[J

    .line 102
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsNRValid:Z

    .line 105
    iput-boolean v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsThisAlive:Z

    .line 106
    iput-boolean v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsCdmaValid:Z

    .line 107
    iput-boolean v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsLteValid:Z

    .line 108
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsLteExtend:Z

    .line 109
    new-instance v0, Lcom/mediatek/engineermode/bandselect/BandSelect$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/bandselect/BandSelect$1;-><init>(Lcom/mediatek/engineermode/bandselect/BandSelect;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mResponseHander:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/bandselect/BandSelect;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bandselect/BandSelect;

    .line 67
    iget-boolean v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsThisAlive:Z

    return v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/bandselect/BandSelect;Landroid/os/AsyncResult;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bandselect/BandSelect;
    .param p1, "x1"    # Landroid/os/AsyncResult;
    .param p2, "x2"    # I

    .line 67
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/bandselect/BandSelect;->showBandModeGsm(Landroid/os/AsyncResult;I)V

    return-void
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/bandselect/BandSelect;)[J
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bandselect/BandSelect;

    .line 67
    iget-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSetGsmValues:[J

    return-object v0
.end method

.method static synthetic access$1002(Lcom/mediatek/engineermode/bandselect/BandSelect;[J)[J
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bandselect/BandSelect;
    .param p1, "x1"    # [J

    .line 67
    iput-object p1, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSetGsmValues:[J

    return-object p1
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/bandselect/BandSelect;)[J
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bandselect/BandSelect;

    .line 67
    invoke-direct {p0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->getDefaultValueGsm()[J

    move-result-object v0

    return-object v0
.end method

.method static synthetic access$1200(Lcom/mediatek/engineermode/bandselect/BandSelect;)J
    .locals 2
    .param p0, "x0"    # Lcom/mediatek/engineermode/bandselect/BandSelect;

    .line 67
    invoke-direct {p0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->getDefaultValueCdma()J

    move-result-wide v0

    return-wide v0
.end method

.method static synthetic access$1300(Lcom/mediatek/engineermode/bandselect/BandSelect;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bandselect/BandSelect;

    .line 67
    invoke-direct {p0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->getDefaultValueNR()V

    return-void
.end method

.method static synthetic access$1400(Lcom/mediatek/engineermode/bandselect/BandSelect;[J)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bandselect/BandSelect;
    .param p1, "x1"    # [J

    .line 67
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/bandselect/BandSelect;->setBandModeGsm([J)V

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/bandselect/BandSelect;Landroid/os/AsyncResult;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bandselect/BandSelect;
    .param p1, "x1"    # Landroid/os/AsyncResult;
    .param p2, "x2"    # I

    .line 67
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/bandselect/BandSelect;->showBandModeNR(Landroid/os/AsyncResult;I)V

    return-void
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/bandselect/BandSelect;Landroid/os/AsyncResult;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bandselect/BandSelect;
    .param p1, "x1"    # Landroid/os/AsyncResult;
    .param p2, "x2"    # I

    .line 67
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/bandselect/BandSelect;->showBandModeCdma(Landroid/os/AsyncResult;I)V

    return-void
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/bandselect/BandSelect;)Lcom/mediatek/engineermode/RadioStateManager;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bandselect/BandSelect;

    .line 67
    iget-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mRadioStateManager:Lcom/mediatek/engineermode/RadioStateManager;

    return-object v0
.end method

.method static synthetic access$500()I
    .locals 1

    .line 67
    sget v0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSimType:I

    return v0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/bandselect/BandSelect;)[J
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bandselect/BandSelect;

    .line 67
    iget-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSetNRValues:[J

    return-object v0
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/bandselect/BandSelect;[J)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bandselect/BandSelect;
    .param p1, "x1"    # [J

    .line 67
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/bandselect/BandSelect;->setBandModeNR([J)V

    return-void
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/bandselect/BandSelect;)J
    .locals 2
    .param p0, "x0"    # Lcom/mediatek/engineermode/bandselect/BandSelect;

    .line 67
    iget-wide v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSetCdmaValues:J

    return-wide v0
.end method

.method static synthetic access$802(Lcom/mediatek/engineermode/bandselect/BandSelect;J)J
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bandselect/BandSelect;
    .param p1, "x1"    # J

    .line 67
    iput-wide p1, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSetCdmaValues:J

    return-wide p1
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/bandselect/BandSelect;J)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bandselect/BandSelect;
    .param p1, "x1"    # J

    .line 67
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/bandselect/BandSelect;->setBandModeCdma(J)V

    return-void
.end method

.method private addCheckboxToTable(Ljava/lang/String;II)Ljava/util/ArrayList;
    .locals 8
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "tableResId"    # I
    .param p3, "arrayResId"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "II)",
            "Ljava/util/ArrayList<",
            "Landroid/widget/CheckBox;",
            ">;"
        }
    .end annotation

    .line 205
    invoke-virtual {p0, p2}, Lcom/mediatek/engineermode/bandselect/BandSelect;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TableLayout;

    .line 206
    .local v0, "table":Landroid/widget/TableLayout;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1, p3}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v1

    .line 207
    .local v1, "labels":[Ljava/lang/String;
    new-instance v2, Ljava/util/ArrayList;

    array-length v3, v1

    invoke-direct {v2, v3}, Ljava/util/ArrayList;-><init>(I)V

    .line 209
    .local v2, "ret":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/widget/CheckBox;>;"
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    array-length v4, v1

    if-ge v3, v4, :cond_0

    .line 210
    new-instance v4, Landroid/widget/TableRow;

    invoke-direct {v4, p0}, Landroid/widget/TableRow;-><init>(Landroid/content/Context;)V

    .line 211
    .local v4, "row":Landroid/widget/TableRow;
    new-instance v5, Landroid/widget/TextView;

    invoke-direct {v5, p0}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 212
    .local v5, "textView":Landroid/widget/TextView;
    invoke-virtual {v5, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 213
    new-instance v6, Landroid/widget/CheckBox;

    invoke-direct {v6, p0}, Landroid/widget/CheckBox;-><init>(Landroid/content/Context;)V

    .line 214
    .local v6, "checkBox":Landroid/widget/CheckBox;
    aget-object v7, v1, v3

    invoke-virtual {v6, v7}, Landroid/widget/CheckBox;->setText(Ljava/lang/CharSequence;)V

    .line 215
    invoke-virtual {v4, v5}, Landroid/widget/TableRow;->addView(Landroid/view/View;)V

    .line 216
    invoke-virtual {v4, v6}, Landroid/widget/TableRow;->addView(Landroid/view/View;)V

    .line 217
    invoke-virtual {v0, v4}, Landroid/widget/TableLayout;->addView(Landroid/view/View;)V

    .line 218
    invoke-virtual {v2, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 209
    .end local v4    # "row":Landroid/widget/TableRow;
    .end local v5    # "textView":Landroid/widget/TextView;
    .end local v6    # "checkBox":Landroid/widget/CheckBox;
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 221
    .end local v3    # "i":I
    :cond_0
    return-object v2
.end method

.method private getDefaultValueCdma()J
    .locals 5

    .line 886
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "band_select_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v1, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSimType:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/bandselect/BandSelect;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 887
    .local v0, "pref":Landroid/content/SharedPreferences;
    sget-object v1, Lcom/mediatek/engineermode/bandselect/BandSelect;->PREF_KEYS:[Ljava/lang/String;

    const/16 v2, 0xa

    aget-object v1, v1, v2

    const-wide/16 v2, 0x0

    invoke-interface {v0, v1, v2, v3}, Landroid/content/SharedPreferences;->getLong(Ljava/lang/String;J)J

    move-result-wide v1

    .line 888
    .local v1, "value":J
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "getDefaultValueCdma: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "BandSelect"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 889
    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/bandselect/BandSelect;->setCurrentModeCdma(J)V

    .line 890
    return-wide v1
.end method

.method private getDefaultValueGsm()[J
    .locals 14

    .line 822
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "band_select_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v1, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSimType:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/bandselect/BandSelect;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 823
    .local v0, "pref":Landroid/content/SharedPreferences;
    const/16 v2, 0xb

    new-array v3, v2, [J

    .line 824
    .local v3, "values":[J
    new-array v2, v2, [J

    .line 825
    .local v2, "values_temp":[J
    const-string v4, "BandSelect"

    const-string v5, "getDefaultValueGsm: "

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 826
    const/4 v5, 0x0

    .local v5, "i":I
    :goto_0
    const/16 v6, 0xa

    const-wide/16 v7, 0x0

    if-ge v5, v6, :cond_0

    .line 827
    sget-object v6, Lcom/mediatek/engineermode/bandselect/BandSelect;->PREF_KEYS:[Ljava/lang/String;

    aget-object v6, v6, v5

    invoke-interface {v0, v6, v7, v8}, Landroid/content/SharedPreferences;->getLong(Ljava/lang/String;J)J

    move-result-wide v9

    aput-wide v9, v3, v5

    .line 828
    sget-object v6, Lcom/mediatek/engineermode/bandselect/BandSelect;->PREF_KEYS:[Ljava/lang/String;

    aget-object v6, v6, v5

    invoke-interface {v0, v6, v7, v8}, Landroid/content/SharedPreferences;->getLong(Ljava/lang/String;J)J

    move-result-wide v6

    aput-wide v6, v2, v5

    .line 829
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "values["

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, "] = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-wide v7, v3, v5

    invoke-virtual {v6, v7, v8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v4, v6}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 826
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 832
    .end local v5    # "i":I
    :cond_0
    const/4 v5, 0x4

    .restart local v5    # "i":I
    :goto_1
    const/16 v6, 0x9

    const/4 v9, 0x2

    if-gt v5, v6, :cond_1

    .line 833
    aget-wide v10, v2, v9

    aget-wide v12, v2, v5

    or-long/2addr v10, v12

    aput-wide v10, v2, v9

    .line 832
    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    .line 838
    .end local v5    # "i":I
    :cond_1
    aget-wide v5, v3, v1

    cmp-long v5, v5, v7

    if-nez v5, :cond_2

    .line 839
    const-wide/16 v5, 0xff

    aput-wide v5, v3, v1

    .line 841
    :cond_2
    const/4 v1, 0x1

    aget-wide v5, v3, v1

    cmp-long v5, v5, v7

    if-nez v5, :cond_3

    .line 842
    const-wide/32 v5, 0xffff

    aput-wide v5, v3, v1

    .line 844
    :cond_3
    aget-wide v5, v2, v9

    cmp-long v1, v5, v7

    if-nez v1, :cond_4

    const/4 v1, 0x3

    aget-wide v5, v2, v1

    cmp-long v5, v5, v7

    if-nez v5, :cond_4

    .line 845
    const-wide v5, 0xffffffffL

    aput-wide v5, v3, v9

    .line 846
    aput-wide v5, v3, v1

    .line 847
    const-string v1, "getDefaultValue,lte not to null"

    invoke-static {v4, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 849
    :cond_4
    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/bandselect/BandSelect;->setCurrentModeGsm([J)V

    .line 850
    return-object v3
.end method

.method private getDefaultValueNR()V
    .locals 5

    .line 861
    iget-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mCurrentNRValues:[J

    iget-object v1, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mDefaultNRValues:[J

    const/4 v2, 0x0

    aget-wide v3, v1, v2

    aput-wide v3, v0, v2

    .line 862
    const/4 v2, 0x1

    aget-wide v3, v1, v2

    aput-wide v3, v0, v2

    .line 863
    const/4 v2, 0x2

    aget-wide v3, v1, v2

    aput-wide v3, v0, v2

    .line 864
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->setCurrentModeNR([J)V

    .line 865
    invoke-direct {p0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->getValFromBoxNR()[J

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSetNRValues:[J

    .line 866
    return-void
.end method

.method private getValFromBoxCdma()J
    .locals 7

    .line 611
    const-wide/16 v0, 0x0

    .line 612
    .local v0, "value":J
    iget-object v2, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mCdmaModeArray:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;

    .line 613
    .local v3, "m":Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;
    iget-object v4, v3, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    invoke-virtual {v4}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v4

    if-eqz v4, :cond_0

    .line 614
    const-wide/16 v4, 0x1

    iget v6, v3, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mBit:I

    shl-long/2addr v4, v6

    or-long/2addr v0, v4

    .line 616
    :cond_0
    iget-boolean v4, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsCdmaValid:Z

    if-nez v4, :cond_1

    .line 617
    const/4 v4, 0x1

    iput-boolean v4, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsCdmaValid:Z

    .line 619
    .end local v3    # "m":Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;
    :cond_1
    goto :goto_0

    .line 620
    :cond_2
    const-wide/16 v2, 0x0

    cmp-long v4, v0, v2

    if-nez v4, :cond_3

    iget-wide v4, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mCurrentCdmaValues:J

    cmp-long v2, v4, v2

    if-eqz v2, :cond_3

    .line 621
    const/4 v2, 0x0

    iput-boolean v2, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsCdmaValid:Z

    .line 622
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mIsCdmaValid:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v3, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsCdmaValid:Z

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "BandSelect"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 624
    :cond_3
    return-wide v0
.end method

.method private getValFromBoxGsm(Z)[J
    .locals 14
    .param p1, "judge"    # Z

    .line 529
    const/16 v0, 0xb

    new-array v1, v0, [J

    .line 530
    .local v1, "values":[J
    new-array v0, v0, [J

    .line 531
    .local v0, "values_temp":[J
    iget-object v2, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mGsmModeArray:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;

    .line 532
    .local v3, "m":Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;
    iget-object v4, v3, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    invoke-virtual {v4}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v4

    if-eqz v4, :cond_0

    .line 533
    iget v4, v3, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mIndex:I

    aget-wide v5, v1, v4

    iget v7, v3, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mBit:I

    const-wide/16 v8, 0x1

    shl-long v10, v8, v7

    or-long/2addr v5, v10

    aput-wide v5, v1, v4

    .line 534
    iget v4, v3, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mIndex:I

    aget-wide v5, v0, v4

    iget v7, v3, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mBit:I

    shl-long v7, v8, v7

    or-long/2addr v5, v7

    aput-wide v5, v0, v4

    .line 536
    .end local v3    # "m":Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;
    :cond_0
    goto :goto_0

    .line 538
    :cond_1
    if-eqz p1, :cond_8

    .line 540
    const/4 v2, 0x4

    .local v2, "i":I
    :goto_1
    const/16 v3, 0x9

    const/4 v4, 0x2

    if-gt v2, v3, :cond_2

    .line 541
    aget-wide v5, v0, v4

    aget-wide v7, v0, v2

    or-long/2addr v5, v7

    aput-wide v5, v0, v4

    .line 540
    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    .line 545
    .end local v2    # "i":I
    :cond_2
    aget-wide v2, v0, v4

    const/4 v5, 0x3

    aget-wide v6, v0, v5

    or-long/2addr v2, v6

    aput-wide v2, v0, v4

    .line 547
    aget-wide v2, v0, v4

    aput-wide v2, v0, v5

    .line 549
    const/4 v2, 0x0

    .restart local v2    # "i":I
    :goto_2
    const-string v3, "BandSelect"

    const/4 v6, 0x0

    const/4 v7, 0x1

    const-wide/16 v8, 0x0

    if-gt v2, v5, :cond_5

    .line 550
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "mCurrentGsmValues["

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v11, "] = "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v12, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mCurrentGsmValues:[J

    aget-wide v12, v12, v2

    invoke-virtual {v10, v12, v13}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v12, ", to values["

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-wide v11, v1, v2

    invoke-virtual {v10, v11, v12}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-static {v3, v10}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 552
    aget-wide v10, v0, v2

    cmp-long v10, v10, v8

    if-nez v10, :cond_3

    iget-object v10, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mCurrentGsmValues:[J

    aget-wide v10, v10, v2

    cmp-long v10, v10, v8

    if-eqz v10, :cond_3

    .line 553
    iput-boolean v6, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsLteValid:Z

    .line 554
    goto :goto_3

    .line 555
    :cond_3
    iget-boolean v3, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsLteValid:Z

    if-nez v3, :cond_4

    .line 556
    iput-boolean v7, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsLteValid:Z

    .line 549
    :cond_4
    add-int/lit8 v2, v2, 0x1

    goto :goto_2

    .line 561
    .end local v2    # "i":I
    :cond_5
    :goto_3
    aget-wide v10, v1, v6

    cmp-long v2, v10, v8

    if-nez v2, :cond_6

    .line 562
    const-wide/16 v10, 0xff

    aput-wide v10, v1, v6

    .line 564
    :cond_6
    aget-wide v10, v1, v7

    cmp-long v2, v10, v8

    if-nez v2, :cond_7

    .line 565
    const-wide/32 v10, 0xffff

    aput-wide v10, v1, v7

    .line 567
    :cond_7
    aget-wide v6, v0, v4

    cmp-long v2, v6, v8

    if-nez v2, :cond_8

    aget-wide v6, v0, v5

    cmp-long v2, v6, v8

    if-nez v2, :cond_8

    .line 568
    const-wide v6, 0xffffffffL

    aput-wide v6, v1, v4

    .line 569
    aput-wide v6, v1, v5

    .line 570
    const-string v2, "lte not to null"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 573
    :cond_8
    return-object v1
.end method

.method private getValFromBoxNR()[J
    .locals 11

    .line 577
    const/4 v0, 0x3

    new-array v0, v0, [J

    .line 578
    .local v0, "values":[J
    const/4 v1, 0x0

    .line 579
    .local v1, "temp":I
    iget-object v2, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mNRModeArray:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    const/4 v4, 0x2

    const/4 v5, 0x1

    const/4 v6, 0x0

    if-eqz v3, :cond_6

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;

    .line 580
    .local v3, "m":Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;
    iget v7, v3, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mBit:I

    const/16 v8, 0x20

    const-wide/16 v9, 0x1

    if-ge v7, v8, :cond_0

    .line 581
    iget-object v4, v3, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    invoke-virtual {v4}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v4

    if-eqz v4, :cond_4

    .line 582
    aget-wide v7, v0, v6

    iget v4, v3, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mBit:I

    shl-long/2addr v9, v4

    or-long/2addr v7, v9

    aput-wide v7, v0, v6

    goto :goto_1

    .line 584
    :cond_0
    iget v6, v3, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mBit:I

    const/16 v7, 0x40

    if-ge v6, v7, :cond_2

    .line 585
    iget v4, v3, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mBit:I

    sub-int/2addr v4, v8

    .line 586
    .end local v1    # "temp":I
    .local v4, "temp":I
    iget-object v1, v3, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 587
    aget-wide v6, v0, v5

    shl-long v8, v9, v4

    or-long/2addr v6, v8

    aput-wide v6, v0, v5

    .line 596
    :cond_1
    move v1, v4

    goto :goto_1

    .line 590
    .end local v4    # "temp":I
    .restart local v1    # "temp":I
    :cond_2
    iget v6, v3, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mBit:I

    sub-int/2addr v6, v7

    .line 591
    .end local v1    # "temp":I
    .local v6, "temp":I
    iget-object v1, v3, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    if-eqz v1, :cond_3

    .line 592
    aget-wide v7, v0, v4

    shl-long/2addr v9, v6

    or-long/2addr v7, v9

    aput-wide v7, v0, v4

    .line 596
    :cond_3
    move v1, v6

    .end local v6    # "temp":I
    .restart local v1    # "temp":I
    :cond_4
    :goto_1
    iget-boolean v4, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsNRValid:Z

    if-nez v4, :cond_5

    .line 597
    iput-boolean v5, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsNRValid:Z

    .line 599
    .end local v3    # "m":Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;
    :cond_5
    goto :goto_0

    .line 600
    :cond_6
    aget-wide v2, v0, v6

    const-wide/16 v7, 0x0

    cmp-long v2, v2, v7

    if-nez v2, :cond_8

    aget-wide v2, v0, v5

    cmp-long v2, v2, v7

    if-nez v2, :cond_8

    aget-wide v2, v0, v4

    cmp-long v2, v2, v7

    if-nez v2, :cond_8

    iget-object v2, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mCurrentNRValues:[J

    aget-wide v3, v2, v6

    cmp-long v3, v3, v7

    if-nez v3, :cond_7

    aget-wide v3, v2, v5

    cmp-long v3, v3, v7

    if-nez v3, :cond_7

    aget-wide v2, v2, v6

    cmp-long v2, v2, v7

    if-eqz v2, :cond_8

    .line 603
    :cond_7
    iput-boolean v6, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsNRValid:Z

    .line 604
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mIsNRValid:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v3, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsNRValid:Z

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "BandSelect"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 606
    :cond_8
    return-object v0
.end method

.method private initCdmaArray()V
    .locals 6

    .line 253
    const v0, 0x7f0600c8

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->findViewById(I)Landroid/view/View;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/view/View;->setVisibility(I)V

    .line 254
    const-string v1, "CDMA"

    const v2, 0x7f010009

    invoke-direct {p0, v1, v0, v2}, Lcom/mediatek/engineermode/bandselect/BandSelect;->addCheckboxToTable(Ljava/lang/String;II)Ljava/util/ArrayList;

    move-result-object v0

    .line 256
    .local v0, "checkBox":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/widget/CheckBox;>;"
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-ge v1, v2, :cond_0

    .line 257
    iget-object v2, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mCdmaModeArray:Ljava/util/ArrayList;

    new-instance v3, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/widget/CheckBox;

    const/16 v5, 0xa

    invoke-direct {v3, v4, v5, v1}, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;-><init>(Landroid/widget/CheckBox;II)V

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 256
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 259
    .end local v1    # "i":I
    :cond_0
    return-void
.end method

.method private initGsmArray()V
    .locals 7

    .line 225
    const v0, 0x7f0600c9

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->findViewById(I)Landroid/view/View;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/view/View;->setVisibility(I)V

    .line 226
    const-string v1, "GSM"

    const v3, 0x7f01000a

    invoke-direct {p0, v1, v0, v3}, Lcom/mediatek/engineermode/bandselect/BandSelect;->addCheckboxToTable(Ljava/lang/String;II)Ljava/util/ArrayList;

    move-result-object v0

    .line 228
    .local v0, "checkBox":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/widget/CheckBox;>;"
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v3

    if-ge v1, v3, :cond_0

    .line 229
    iget-object v3, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mGsmModeArray:Ljava/util/ArrayList;

    new-instance v4, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Landroid/widget/CheckBox;

    sget-object v6, Lcom/mediatek/engineermode/bandselect/BandModeContent;->GSM_BAND_BIT:[I

    aget v6, v6, v1

    invoke-direct {v4, v5, v2, v6}, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;-><init>(Landroid/widget/CheckBox;II)V

    invoke-virtual {v3, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 228
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 232
    .end local v1    # "i":I
    :cond_0
    return-void
.end method

.method private initLteArray()V
    .locals 8

    .line 271
    const v0, 0x7f0600ca

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->findViewById(I)Landroid/view/View;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/view/View;->setVisibility(I)V

    .line 272
    nop

    .line 273
    const-string v1, "LTE_FDD"

    const v2, 0x7f010011

    invoke-direct {p0, v1, v0, v2}, Lcom/mediatek/engineermode/bandselect/BandSelect;->addCheckboxToTable(Ljava/lang/String;II)Ljava/util/ArrayList;

    move-result-object v2

    .line 274
    .local v2, "checkBox":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/widget/CheckBox;>;"
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v4

    if-ge v3, v4, :cond_0

    .line 275
    iget-object v4, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mGsmModeArray:Ljava/util/ArrayList;

    new-instance v5, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Landroid/widget/CheckBox;

    const/4 v7, 0x2

    invoke-direct {v5, v6, v7, v3}, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;-><init>(Landroid/widget/CheckBox;II)V

    invoke-virtual {v4, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 274
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 277
    .end local v3    # "i":I
    :cond_0
    const v3, 0x7f010012

    const-string v4, "LTE_TDD"

    invoke-direct {p0, v4, v0, v3}, Lcom/mediatek/engineermode/bandselect/BandSelect;->addCheckboxToTable(Ljava/lang/String;II)Ljava/util/ArrayList;

    move-result-object v2

    .line 278
    const/4 v3, 0x0

    .restart local v3    # "i":I
    :goto_1
    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v4

    if-ge v3, v4, :cond_1

    .line 279
    iget-object v4, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mGsmModeArray:Ljava/util/ArrayList;

    new-instance v5, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Landroid/widget/CheckBox;

    const/4 v7, 0x3

    invoke-direct {v5, v6, v7, v3}, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;-><init>(Landroid/widget/CheckBox;II)V

    invoke-virtual {v4, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 278
    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    .line 281
    .end local v3    # "i":I
    :cond_1
    const v3, 0x7f010010

    invoke-direct {p0, v1, v0, v3}, Lcom/mediatek/engineermode/bandselect/BandSelect;->addCheckboxToTable(Ljava/lang/String;II)Ljava/util/ArrayList;

    move-result-object v0

    .line 282
    .end local v2    # "checkBox":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/widget/CheckBox;>;"
    .local v0, "checkBox":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/widget/CheckBox;>;"
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_2
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-ge v1, v2, :cond_2

    .line 283
    iget-object v2, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mGsmModeArray:Ljava/util/ArrayList;

    new-instance v3, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/widget/CheckBox;

    const/4 v5, 0x4

    invoke-direct {v3, v4, v5, v1}, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;-><init>(Landroid/widget/CheckBox;II)V

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 282
    add-int/lit8 v1, v1, 0x1

    goto :goto_2

    .line 305
    .end local v1    # "i":I
    :cond_2
    return-void
.end method

.method private initNRArray()V
    .locals 6

    .line 262
    const v0, 0x7f0600cc

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->findViewById(I)Landroid/view/View;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/view/View;->setVisibility(I)V

    .line 263
    const-string v1, "NR"

    const v2, 0x7f010013

    invoke-direct {p0, v1, v0, v2}, Lcom/mediatek/engineermode/bandselect/BandSelect;->addCheckboxToTable(Ljava/lang/String;II)Ljava/util/ArrayList;

    move-result-object v0

    .line 265
    .local v0, "checkBox":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/widget/CheckBox;>;"
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-ge v1, v2, :cond_0

    .line 266
    iget-object v2, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mNRModeArray:Ljava/util/ArrayList;

    new-instance v3, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/widget/CheckBox;

    const/16 v5, 0xc

    invoke-direct {v3, v4, v5, v1}, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;-><init>(Landroid/widget/CheckBox;II)V

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 265
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 268
    .end local v1    # "i":I
    :cond_0
    return-void
.end method

.method private initTdscdmaArray()V
    .locals 6

    .line 244
    const v0, 0x7f0600cf

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->findViewById(I)Landroid/view/View;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/view/View;->setVisibility(I)V

    .line 245
    const-string v1, "TDSCDMA"

    const v2, 0x7f010014

    invoke-direct {p0, v1, v0, v2}, Lcom/mediatek/engineermode/bandselect/BandSelect;->addCheckboxToTable(Ljava/lang/String;II)Ljava/util/ArrayList;

    move-result-object v0

    .line 247
    .local v0, "checkBox":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/widget/CheckBox;>;"
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-ge v1, v2, :cond_0

    .line 248
    iget-object v2, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mGsmModeArray:Ljava/util/ArrayList;

    new-instance v3, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/widget/CheckBox;

    const/4 v5, 0x1

    invoke-direct {v3, v4, v5, v1}, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;-><init>(Landroid/widget/CheckBox;II)V

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 247
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 250
    .end local v1    # "i":I
    :cond_0
    return-void
.end method

.method private initWcdmaArray()V
    .locals 6

    .line 235
    const v0, 0x7f0600cf

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->findViewById(I)Landroid/view/View;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/view/View;->setVisibility(I)V

    .line 236
    const-string v1, "WCDMA"

    const v2, 0x7f010015

    invoke-direct {p0, v1, v0, v2}, Lcom/mediatek/engineermode/bandselect/BandSelect;->addCheckboxToTable(Ljava/lang/String;II)Ljava/util/ArrayList;

    move-result-object v0

    .line 238
    .local v0, "checkBox":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/widget/CheckBox;>;"
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-ge v1, v2, :cond_0

    .line 239
    iget-object v2, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mGsmModeArray:Ljava/util/ArrayList;

    new-instance v3, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/widget/CheckBox;

    const/4 v5, 0x1

    invoke-direct {v3, v4, v5, v1}, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;-><init>(Landroid/widget/CheckBox;II)V

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 238
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 241
    .end local v1    # "i":I
    :cond_0
    return-void
.end method

.method private queryCurrentModeCdma()V
    .locals 4

    .line 762
    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/String;

    .line 763
    .local v0, "cmd":[Ljava/lang/String;
    const/4 v1, 0x0

    const-string v2, "AT+ECBANDCFG?"

    aput-object v2, v0, v1

    .line 764
    const/4 v1, 0x1

    const-string v2, "+ECBANDCFG:"

    aput-object v2, v0, v1

    .line 765
    const/4 v1, 0x2

    const-string v2, "DESTRILD:C2K"

    aput-object v2, v0, v1

    .line 766
    invoke-static {v0}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaCmdArr([Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 767
    .local v1, "cmd_s":[Ljava/lang/String;
    const-string v2, "BandSelect"

    const-string v3, "queryCurrentModeCdma: "

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 768
    const/16 v2, 0x66

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/bandselect/BandSelect;->sendATCommandCdma([Ljava/lang/String;I)V

    .line 769
    return-void
.end method

.method private queryCurrentModeGsm()V
    .locals 3

    .line 452
    const-string v0, "AT+EPBSE?"

    const-string v1, "+EPBSE:"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    .line 454
    .local v0, "modeString":[Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "queryCurrentGSMMode AT String:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v2, 0x0

    aget-object v2, v0, v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "BandSelect"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 455
    const/16 v1, 0x65

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/bandselect/BandSelect;->sendATCommand([Ljava/lang/String;I)V

    .line 456
    return-void
.end method

.method private queryCurrentModeNR()V
    .locals 3

    .line 498
    const-string v0, "AT+EPBSEH?"

    const-string v1, "+EPBSEH:"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    .line 500
    .local v0, "modeString":[Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "queryCurrentNRMode AT String:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v2, 0x0

    aget-object v2, v0, v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "BandSelect"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 501
    const/16 v1, 0x68

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/bandselect/BandSelect;->sendATCommand([Ljava/lang/String;I)V

    .line 502
    return-void
.end method

.method private querySupportModeGsm()V
    .locals 3

    .line 442
    const-string v0, "AT+EPBSE=?"

    const-string v1, "+EPBSE:"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    .line 444
    .local v0, "modeString":[Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "querySupportGsmMode AT String:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v2, 0x0

    aget-object v2, v0, v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "BandSelect"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 445
    const/16 v1, 0x64

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/bandselect/BandSelect;->sendATCommand([Ljava/lang/String;I)V

    .line 446
    return-void
.end method

.method private querySupportModeNR()V
    .locals 3

    .line 488
    const-string v0, "AT+EPBSEH=?"

    const-string v1, "+EPBSEH:"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    .line 490
    .local v0, "modeString":[Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "querySupportNRMode AT String:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v2, 0x0

    aget-object v2, v0, v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "BandSelect"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 491
    const/16 v1, 0x67

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/bandselect/BandSelect;->sendATCommand([Ljava/lang/String;I)V

    .line 492
    return-void
.end method

.method private saveDefaultValueIfNeedCdma(J)V
    .locals 4
    .param p1, "value"    # J

    .line 894
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "band_select_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v1, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSimType:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/bandselect/BandSelect;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 895
    .local v0, "pref":Landroid/content/SharedPreferences;
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    .line 896
    .local v1, "editor":Landroid/content/SharedPreferences$Editor;
    sget-object v2, Lcom/mediatek/engineermode/bandselect/BandSelect;->PREF_KEYS:[Ljava/lang/String;

    const/16 v3, 0xa

    aget-object v2, v2, v3

    invoke-interface {v0, v2}, Landroid/content/SharedPreferences;->contains(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 897
    sget-object v2, Lcom/mediatek/engineermode/bandselect/BandSelect;->PREF_KEYS:[Ljava/lang/String;

    aget-object v2, v2, v3

    invoke-interface {v1, v2, p1, p2}, Landroid/content/SharedPreferences$Editor;->putLong(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;

    .line 898
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "save cdam default value: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "BandSelect"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 900
    :cond_0
    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 901
    return-void
.end method

.method private saveDefaultValueIfNeedGsm([J)V
    .locals 6
    .param p1, "values"    # [J

    .line 874
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "band_select_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v1, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSimType:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/bandselect/BandSelect;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 875
    .local v0, "pref":Landroid/content/SharedPreferences;
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    .line 876
    .local v1, "editor":Landroid/content/SharedPreferences$Editor;
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    const/16 v3, 0xa

    if-ge v2, v3, :cond_1

    .line 877
    sget-object v3, Lcom/mediatek/engineermode/bandselect/BandSelect;->PREF_KEYS:[Ljava/lang/String;

    aget-object v3, v3, v2

    invoke-interface {v0, v3}, Landroid/content/SharedPreferences;->contains(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_0

    .line 878
    sget-object v3, Lcom/mediatek/engineermode/bandselect/BandSelect;->PREF_KEYS:[Ljava/lang/String;

    aget-object v3, v3, v2

    aget-wide v4, p1, v2

    invoke-interface {v1, v3, v4, v5}, Landroid/content/SharedPreferences$Editor;->putLong(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;

    .line 879
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "save gsm default values["

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "] = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-wide v4, p1, v2

    invoke-virtual {v3, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "BandSelect"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 876
    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 882
    .end local v2    # "i":I
    :cond_1
    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 883
    return-void
.end method

.method private saveDefaultValueNR([J)V
    .locals 4
    .param p1, "values"    # [J

    .line 855
    iget-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mDefaultNRValues:[J

    const/4 v1, 0x0

    aget-wide v2, p1, v1

    aput-wide v2, v0, v1

    .line 856
    const/4 v1, 0x1

    aget-wide v2, p1, v1

    aput-wide v2, v0, v1

    .line 857
    const/4 v1, 0x2

    aget-wide v2, p1, v1

    aput-wide v2, v0, v1

    .line 858
    return-void
.end method

.method private sendATCommand([Ljava/lang/String;I)V
    .locals 2
    .param p1, "atCommand"    # [Ljava/lang/String;
    .param p2, "msg"    # I

    .line 480
    sget v0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSimType:I

    iget-object v1, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mResponseHander:Landroid/os/Handler;

    .line 481
    invoke-virtual {v1, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v1

    .line 480
    invoke-static {v0, p1, v1}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 482
    return-void
.end method

.method private sendATCommandCdma([Ljava/lang/String;I)V
    .locals 2
    .param p1, "atCommand"    # [Ljava/lang/String;
    .param p2, "msg"    # I

    .line 798
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "c2k AT String:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v1, 0x0

    aget-object v1, p1, v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ",atCommand.size = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v1, p1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BandSelect"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 800
    iget-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mResponseHander:Landroid/os/Handler;

    invoke-virtual {v0, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    const/4 v1, 0x1

    invoke-static {v1, p1, v0}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(Z[Ljava/lang/String;Landroid/os/Message;)V

    .line 801
    return-void
.end method

.method private setBandModeCdma(J)V
    .locals 4
    .param p1, "value"    # J

    .line 804
    const-string v0, "BandSelect"

    const-string v1, "setCdmaBandMode: "

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 805
    iget-boolean v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsCdmaValid:Z

    if-nez v0, :cond_0

    iget-boolean v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsLteValid:Z

    if-nez v0, :cond_0

    .line 806
    return-void

    .line 808
    :cond_0
    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/String;

    .line 809
    .local v0, "cmd":[Ljava/lang/String;
    const/4 v1, 0x0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "AT+ECBANDCFG="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v0, v1

    .line 810
    const/4 v1, 0x1

    const-string v2, ""

    aput-object v2, v0, v1

    .line 811
    const/4 v1, 0x2

    const-string v2, "DESTRILD:C2K"

    aput-object v2, v0, v1

    .line 812
    invoke-static {v0}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaCmdArr([Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 813
    .local v1, "cmd_s":[Ljava/lang/String;
    const/16 v2, 0x6f

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/bandselect/BandSelect;->sendATCommandCdma([Ljava/lang/String;I)V

    .line 814
    return-void
.end method

.method private setBandModeGsm([J)V
    .locals 8
    .param p1, "values"    # [J

    .line 465
    const/4 v0, 0x2

    new-array v1, v0, [Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "AT+EPBSE="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v3, 0x0

    aget-wide v4, p1, v3

    invoke-virtual {v2, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v4, ","

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v5, 0x1

    aget-wide v6, p1, v5

    invoke-virtual {v2, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v1, v3

    const-string v2, ""

    aput-object v2, v1, v5

    .line 467
    .local v1, "modeString":[Ljava/lang/String;
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isLteSupport()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 468
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    aget-object v5, v1, v3

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-wide v5, p1, v0

    invoke-virtual {v2, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v0, 0x3

    aget-wide v5, p1, v0

    invoke-virtual {v2, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    aput-object v0, v1, v3

    .line 469
    iget-boolean v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsLteExtend:Z

    if-eqz v0, :cond_0

    .line 470
    const/4 v0, 0x4

    .local v0, "i":I
    :goto_0
    const/16 v2, 0xa

    if-ge v0, v2, :cond_0

    .line 471
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    aget-object v5, v1, v3

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-wide v5, p1, v0

    invoke-virtual {v2, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v1, v3

    .line 470
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 475
    .end local v0    # "i":I
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "setGsmBandMode AT String:"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v2, v1, v3

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "BandSelect"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 476
    const/16 v0, 0x6e

    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->sendATCommand([Ljava/lang/String;I)V

    .line 477
    return-void
.end method

.method private setBandModeNR([J)V
    .locals 11
    .param p1, "value"    # [J

    .line 506
    const/4 v0, 0x2

    new-array v1, v0, [Ljava/lang/String;

    .line 507
    .local v1, "cmd":[Ljava/lang/String;
    const-string v2, "AT+EPBSEH="

    const/4 v3, 0x0

    aput-object v2, v1, v3

    .line 508
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    aget-object v4, v1, v3

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "\""

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v5, 0x1

    new-array v6, v5, [Ljava/lang/Object;

    iget-object v7, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSetGsmValues:[J

    aget-wide v7, v7, v3

    invoke-static {v7, v8}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v7

    aput-object v7, v6, v3

    const-string v7, "%08x"

    invoke-static {v7, v6}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "\",\""

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v8, v5, [Ljava/lang/Object;

    iget-object v9, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSetGsmValues:[J

    aget-wide v9, v9, v5

    .line 509
    invoke-static {v9, v10}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v9

    aput-object v9, v8, v3

    invoke-static {v7, v8}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v8, v5, [Ljava/lang/Object;

    iget-object v9, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSetGsmValues:[J

    aget-wide v9, v9, v0

    .line 510
    invoke-static {v9, v10}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v9

    aput-object v9, v8, v3

    invoke-static {v7, v8}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v8, v5, [Ljava/lang/Object;

    iget-object v9, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSetGsmValues:[J

    const/4 v10, 0x3

    aget-wide v9, v9, v10

    .line 511
    invoke-static {v9, v10}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v9

    aput-object v9, v8, v3

    invoke-static {v7, v8}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v8, v5, [Ljava/lang/Object;

    iget-object v9, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSetGsmValues:[J

    const/4 v10, 0x4

    aget-wide v9, v9, v10

    .line 512
    invoke-static {v9, v10}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v9

    aput-object v9, v8, v3

    invoke-static {v7, v8}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v1, v3

    .line 514
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    aget-object v6, v1, v3

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v6, v5, [Ljava/lang/Object;

    iget-object v8, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSetNRValues:[J

    aget-wide v8, v8, v3

    invoke-static {v8, v9}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v8

    aput-object v8, v6, v3

    invoke-static {v7, v6}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v6, v5, [Ljava/lang/Object;

    iget-object v8, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSetNRValues:[J

    aget-wide v8, v8, v5

    .line 515
    invoke-static {v8, v9}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v8

    aput-object v8, v6, v3

    invoke-static {v7, v6}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v6, v5, [Ljava/lang/Object;

    iget-object v8, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSetNRValues:[J

    aget-wide v8, v8, v0

    .line 516
    invoke-static {v8, v9}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    aput-object v0, v6, v3

    invoke-static {v7, v6}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    aput-object v0, v1, v3

    .line 517
    const-string v0, ""

    aput-object v0, v1, v5

    .line 518
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "setNrBandMode AT String:"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v2, v1, v3

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "BandSelect"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 519
    const/16 v0, 0x70

    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->sendATCommand([Ljava/lang/String;I)V

    .line 520
    return-void
.end method

.method private setCurrentModeCdma(J)V
    .locals 6
    .param p1, "value"    # J

    .line 711
    iget-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mCdmaModeArray:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;

    .line 712
    .local v1, "m":Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;
    const-wide/16 v2, 0x1

    iget v4, v1, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mBit:I

    shl-long/2addr v2, v4

    and-long/2addr v2, p1

    const-wide/16 v4, 0x0

    cmp-long v2, v2, v4

    if-nez v2, :cond_0

    .line 713
    iget-object v2, v1, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    const/4 v3, 0x0

    invoke-virtual {v2, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_1

    .line 715
    :cond_0
    iget-object v2, v1, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isEnabled()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 716
    iget-object v2, v1, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    const/4 v3, 0x1

    invoke-virtual {v2, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 719
    .end local v1    # "m":Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;
    :cond_1
    :goto_1
    goto :goto_0

    .line 720
    :cond_2
    return-void
.end method

.method private setCurrentModeGsm([J)V
    .locals 7
    .param p1, "values"    # [J

    .line 629
    iget-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mGsmModeArray:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;

    .line 630
    .local v1, "m":Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;
    iget v2, v1, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mIndex:I

    aget-wide v2, p1, v2

    const-wide/16 v4, 0x1

    iget v6, v1, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mBit:I

    shl-long/2addr v4, v6

    and-long/2addr v2, v4

    const-wide/16 v4, 0x0

    cmp-long v2, v2, v4

    if-nez v2, :cond_0

    .line 631
    iget-object v2, v1, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    const/4 v3, 0x0

    invoke-virtual {v2, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_1

    .line 633
    :cond_0
    iget-object v2, v1, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isEnabled()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 634
    iget-object v2, v1, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    const/4 v3, 0x1

    invoke-virtual {v2, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 637
    .end local v1    # "m":Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;
    :cond_1
    :goto_1
    goto :goto_0

    .line 638
    :cond_2
    return-void
.end method

.method private setCurrentModeNR([J)V
    .locals 13
    .param p1, "values"    # [J

    .line 651
    const/4 v0, 0x0

    .line 652
    .local v0, "temp":I
    iget-object v1, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mNRModeArray:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_7

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;

    .line 653
    .local v2, "m":Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;
    iget v3, v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mBit:I

    const/16 v4, 0x20

    const-wide/16 v5, 0x0

    const-wide/16 v7, 0x1

    const/4 v9, 0x1

    const/4 v10, 0x0

    if-ge v3, v4, :cond_1

    .line 654
    aget-wide v3, p1, v10

    iget v11, v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mBit:I

    shl-long/2addr v7, v11

    and-long/2addr v3, v7

    cmp-long v3, v3, v5

    if-nez v3, :cond_0

    .line 655
    iget-object v3, v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    invoke-virtual {v3, v10}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_2

    .line 657
    :cond_0
    iget-object v3, v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    invoke-virtual {v3}, Landroid/widget/CheckBox;->isEnabled()Z

    move-result v3

    if-eqz v3, :cond_6

    .line 658
    iget-object v3, v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    invoke-virtual {v3, v9}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_2

    .line 661
    :cond_1
    iget v3, v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mBit:I

    const/16 v11, 0x40

    if-ge v3, v11, :cond_3

    .line 662
    iget v3, v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mBit:I

    sub-int/2addr v3, v4

    .line 663
    .end local v0    # "temp":I
    .local v3, "temp":I
    aget-wide v11, p1, v9

    shl-long/2addr v7, v3

    and-long/2addr v7, v11

    cmp-long v0, v7, v5

    if-nez v0, :cond_2

    .line 664
    iget-object v0, v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    invoke-virtual {v0, v10}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_1

    .line 666
    :cond_2
    iget-object v0, v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isEnabled()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 667
    iget-object v0, v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    invoke-virtual {v0, v9}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_1

    .line 671
    .end local v3    # "temp":I
    .restart local v0    # "temp":I
    :cond_3
    iget v3, v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mBit:I

    sub-int/2addr v3, v11

    .line 672
    .end local v0    # "temp":I
    .restart local v3    # "temp":I
    const/4 v0, 0x2

    aget-wide v11, p1, v0

    shl-long/2addr v7, v3

    and-long/2addr v7, v11

    cmp-long v0, v7, v5

    if-nez v0, :cond_4

    .line 673
    iget-object v0, v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    invoke-virtual {v0, v10}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_1

    .line 675
    :cond_4
    iget-object v0, v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isEnabled()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 676
    iget-object v0, v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    invoke-virtual {v0, v9}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 680
    .end local v2    # "m":Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;
    :cond_5
    :goto_1
    move v0, v3

    .end local v3    # "temp":I
    .restart local v0    # "temp":I
    :cond_6
    :goto_2
    goto :goto_0

    .line 681
    :cond_7
    return-void
.end method

.method private setSupportedModeCdma(J)V
    .locals 6
    .param p1, "value"    # J

    .line 723
    iget-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mCdmaModeArray:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;

    .line 724
    .local v1, "m":Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;
    const-wide/16 v2, 0x1

    iget v4, v1, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mBit:I

    shl-long/2addr v2, v4

    and-long/2addr v2, p1

    const-wide/16 v4, 0x0

    cmp-long v2, v2, v4

    if-nez v2, :cond_0

    .line 725
    iget-object v2, v1, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    const/4 v3, 0x0

    invoke-virtual {v2, v3}, Landroid/widget/CheckBox;->setEnabled(Z)V

    goto :goto_1

    .line 727
    :cond_0
    iget-object v2, v1, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    const/4 v3, 0x1

    invoke-virtual {v2, v3}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 729
    .end local v1    # "m":Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;
    :goto_1
    goto :goto_0

    .line 730
    :cond_1
    return-void
.end method

.method private setSupportedModeGsm([J)V
    .locals 7
    .param p1, "values"    # [J

    .line 641
    iget-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mGsmModeArray:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;

    .line 642
    .local v1, "m":Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;
    iget v2, v1, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mIndex:I

    aget-wide v2, p1, v2

    const-wide/16 v4, 0x1

    iget v6, v1, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mBit:I

    shl-long/2addr v4, v6

    and-long/2addr v2, v4

    const-wide/16 v4, 0x0

    cmp-long v2, v2, v4

    if-nez v2, :cond_0

    .line 643
    iget-object v2, v1, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    const/4 v3, 0x0

    invoke-virtual {v2, v3}, Landroid/widget/CheckBox;->setEnabled(Z)V

    goto :goto_1

    .line 645
    :cond_0
    iget-object v2, v1, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    const/4 v3, 0x1

    invoke-virtual {v2, v3}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 647
    .end local v1    # "m":Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;
    :goto_1
    goto :goto_0

    .line 648
    :cond_1
    return-void
.end method

.method private setSupportedModeNR([J)V
    .locals 13
    .param p1, "values"    # [J

    .line 684
    const/4 v0, 0x0

    .line 685
    .local v0, "temp":I
    iget-object v1, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mNRModeArray:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_5

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;

    .line 686
    .local v2, "m":Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;
    iget v3, v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mBit:I

    const/16 v4, 0x20

    const-wide/16 v5, 0x0

    const-wide/16 v7, 0x1

    const/4 v9, 0x1

    const/4 v10, 0x0

    if-ge v3, v4, :cond_1

    .line 687
    aget-wide v3, p1, v10

    iget v11, v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mBit:I

    shl-long/2addr v7, v11

    and-long/2addr v3, v7

    cmp-long v3, v3, v5

    if-nez v3, :cond_0

    .line 688
    iget-object v3, v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    invoke-virtual {v3, v10}, Landroid/widget/CheckBox;->setEnabled(Z)V

    goto :goto_2

    .line 690
    :cond_0
    iget-object v3, v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    invoke-virtual {v3, v9}, Landroid/widget/CheckBox;->setEnabled(Z)V

    goto :goto_2

    .line 692
    :cond_1
    iget v3, v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mBit:I

    const/16 v11, 0x40

    if-ge v3, v11, :cond_3

    .line 693
    iget v3, v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mBit:I

    sub-int/2addr v3, v4

    .line 694
    .end local v0    # "temp":I
    .local v3, "temp":I
    aget-wide v11, p1, v9

    shl-long/2addr v7, v3

    and-long/2addr v7, v11

    cmp-long v0, v7, v5

    if-nez v0, :cond_2

    .line 695
    iget-object v0, v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    invoke-virtual {v0, v10}, Landroid/widget/CheckBox;->setEnabled(Z)V

    goto :goto_1

    .line 697
    :cond_2
    iget-object v0, v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    invoke-virtual {v0, v9}, Landroid/widget/CheckBox;->setEnabled(Z)V

    goto :goto_1

    .line 700
    .end local v3    # "temp":I
    .restart local v0    # "temp":I
    :cond_3
    iget v3, v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mBit:I

    sub-int/2addr v3, v11

    .line 701
    .end local v0    # "temp":I
    .restart local v3    # "temp":I
    const/4 v0, 0x2

    aget-wide v11, p1, v0

    shl-long/2addr v7, v3

    and-long/2addr v7, v11

    cmp-long v0, v7, v5

    if-nez v0, :cond_4

    .line 702
    iget-object v0, v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    invoke-virtual {v0, v10}, Landroid/widget/CheckBox;->setEnabled(Z)V

    goto :goto_1

    .line 704
    :cond_4
    iget-object v0, v2, Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    invoke-virtual {v0, v9}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 707
    .end local v2    # "m":Lcom/mediatek/engineermode/bandselect/BandSelect$BandModeMap;
    :goto_1
    move v0, v3

    .end local v3    # "temp":I
    .restart local v0    # "temp":I
    :goto_2
    goto :goto_0

    .line 708
    :cond_5
    return-void
.end method

.method private showBandModeCdma(Landroid/os/AsyncResult;I)V
    .locals 17
    .param p1, "aSyncResult"    # Landroid/os/AsyncResult;
    .param p2, "msg"    # I

    .line 772
    move-object/from16 v1, p0

    move-object/from16 v2, p1

    iget-object v0, v2, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    move-object v3, v0

    check-cast v3, [Ljava/lang/String;

    .line 773
    .local v3, "result":[Ljava/lang/String;
    array-length v4, v3

    const/4 v6, 0x0

    :goto_0
    if-ge v6, v4, :cond_4

    aget-object v7, v3, v6

    .line 774
    .local v7, "string":Ljava/lang/String;
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "cdma --.>"

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v8, "BandSelect"

    invoke-static {v8, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 775
    const-string v0, "+ECBANDCFG:"

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v0

    invoke-virtual {v7, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v8

    .line 776
    .local v8, "splitString":Ljava/lang/String;
    const/16 v0, 0x66

    move/from16 v9, p2

    if-ne v9, v0, :cond_3

    .line 777
    const-string v0, ","

    invoke-virtual {v8, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v10

    .line 778
    .local v10, "getDigitalVal":[Ljava/lang/String;
    const/4 v0, 0x2

    new-array v11, v0, [J

    .line 780
    .local v11, "value":[J
    const/4 v12, 0x0

    .local v12, "i":I
    :goto_1
    const-wide/16 v13, 0x0

    if-ge v12, v0, :cond_1

    .line 781
    :try_start_0
    aget-object v15, v10, v12

    if-eqz v15, :cond_0

    .line 782
    aget-object v15, v10, v12

    invoke-virtual {v15, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v15

    const/16 v0, 0x10

    invoke-static {v15, v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;I)I

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    move/from16 v16, v6

    int-to-long v5, v0

    :try_start_1
    aput-wide v5, v11, v12
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_2

    .line 785
    .end local v12    # "i":I
    :catch_0
    move-exception v0

    goto :goto_3

    .line 781
    .restart local v12    # "i":I
    :cond_0
    move/from16 v16, v6

    .line 780
    :goto_2
    add-int/lit8 v12, v12, 0x1

    move/from16 v6, v16

    const/4 v0, 0x2

    goto :goto_1

    .line 785
    .end local v12    # "i":I
    :catch_1
    move-exception v0

    move/from16 v16, v6

    .line 786
    .local v0, "e":Ljava/lang/Exception;
    :goto_3
    const/4 v5, 0x0

    aput-wide v13, v11, v5

    goto :goto_4

    .line 780
    .end local v0    # "e":Ljava/lang/Exception;
    .restart local v12    # "i":I
    :cond_1
    move/from16 v16, v6

    const/4 v5, 0x0

    .line 787
    .end local v12    # "i":I
    nop

    .line 788
    :goto_4
    aget-wide v13, v11, v5

    invoke-direct {v1, v13, v14}, Lcom/mediatek/engineermode/bandselect/BandSelect;->setSupportedModeCdma(J)V

    .line 789
    const/4 v0, 0x1

    aget-wide v5, v11, v0

    invoke-direct {v1, v5, v6}, Lcom/mediatek/engineermode/bandselect/BandSelect;->setCurrentModeCdma(J)V

    .line 790
    aget-wide v5, v11, v0

    iput-wide v5, v1, Lcom/mediatek/engineermode/bandselect/BandSelect;->mCurrentCdmaValues:J

    .line 791
    aget-wide v5, v11, v0

    const-wide/16 v12, 0x0

    cmp-long v5, v5, v12

    if-nez v5, :cond_2

    const/4 v5, 0x0

    aget-wide v12, v11, v5

    goto :goto_5

    :cond_2
    const/4 v5, 0x0

    aget-wide v12, v11, v0

    .line 792
    .local v12, "valueCur":J
    :goto_5
    invoke-direct {v1, v12, v13}, Lcom/mediatek/engineermode/bandselect/BandSelect;->saveDefaultValueIfNeedCdma(J)V

    goto :goto_6

    .line 776
    .end local v10    # "getDigitalVal":[Ljava/lang/String;
    .end local v11    # "value":[J
    .end local v12    # "valueCur":J
    :cond_3
    move/from16 v16, v6

    const/4 v5, 0x0

    .line 773
    .end local v7    # "string":Ljava/lang/String;
    .end local v8    # "splitString":Ljava/lang/String;
    :goto_6
    add-int/lit8 v6, v16, 0x1

    goto/16 :goto_0

    .line 795
    :cond_4
    move/from16 v9, p2

    return-void
.end method

.method private showBandModeGsm(Landroid/os/AsyncResult;I)V
    .locals 20
    .param p1, "aSyncResult"    # Landroid/os/AsyncResult;
    .param p2, "msg"    # I

    .line 364
    move-object/from16 v1, p0

    move/from16 v2, p2

    move-object/from16 v3, p1

    iget-object v0, v3, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    move-object v4, v0

    check-cast v4, [Ljava/lang/String;

    .line 366
    .local v4, "result":[Ljava/lang/String;
    array-length v5, v4

    const/4 v6, 0x0

    move v7, v6

    :goto_0
    if-ge v7, v5, :cond_7

    aget-object v8, v4, v7

    .line 367
    .local v8, "value":Ljava/lang/String;
    const/16 v9, 0x64

    const-string v10, "BandSelect"

    if-ne v2, v9, :cond_0

    .line 368
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "gsm support --.>"

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v10, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 370
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "gsm current --.>"

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v10, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 372
    :goto_1
    const-string v0, "+EPBSE:"

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v0

    invoke-virtual {v8, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v11

    .line 373
    .local v11, "splitString":Ljava/lang/String;
    const-string v0, ","

    invoke-virtual {v11, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v12

    .line 375
    .local v12, "getDigitalVal":[Ljava/lang/String;
    if-eqz v12, :cond_6

    array-length v0, v12

    const/4 v13, 0x1

    if-le v0, v13, :cond_6

    .line 376
    const/16 v0, 0xb

    new-array v14, v0, [J

    .line 377
    .local v14, "values":[J
    const/4 v0, 0x0

    move v15, v0

    .local v15, "i":I
    :goto_2
    array-length v0, v14

    if-ge v15, v0, :cond_3

    .line 378
    array-length v0, v12

    const-wide/16 v16, 0x0

    if-le v0, v15, :cond_2

    aget-object v0, v12, v15

    if-nez v0, :cond_1

    goto :goto_3

    .line 383
    :cond_1
    :try_start_0
    aget-object v0, v12, v15

    invoke-virtual {v0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Long;->valueOf(Ljava/lang/String;)Ljava/lang/Long;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v18

    aput-wide v18, v14, v15
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 386
    goto :goto_4

    .line 384
    :catch_0
    move-exception v0

    .line 385
    .local v0, "e":Ljava/lang/NumberFormatException;
    aput-wide v16, v14, v15

    goto :goto_4

    .line 379
    .end local v0    # "e":Ljava/lang/NumberFormatException;
    :cond_2
    :goto_3
    aput-wide v16, v14, v15

    .line 380
    nop

    .line 377
    :goto_4
    add-int/lit8 v15, v15, 0x1

    goto :goto_2

    .line 388
    .end local v15    # "i":I
    :cond_3
    if-ne v2, v9, :cond_5

    .line 389
    invoke-direct {v1, v14}, Lcom/mediatek/engineermode/bandselect/BandSelect;->setSupportedModeGsm([J)V

    .line 390
    array-length v0, v12

    const/4 v9, 0x5

    if-le v0, v9, :cond_4

    .line 391
    const-string v0, "The Modem support Lte extend band"

    invoke-static {v10, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 392
    iput-boolean v13, v1, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsLteExtend:Z

    goto :goto_5

    .line 394
    :cond_4
    const-string v0, "The Modem not support Lte extend band"

    invoke-static {v10, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 395
    iput-boolean v6, v1, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsLteExtend:Z

    goto :goto_5

    .line 398
    :cond_5
    invoke-direct {v1, v14}, Lcom/mediatek/engineermode/bandselect/BandSelect;->setCurrentModeGsm([J)V

    .line 399
    invoke-direct {v1, v6}, Lcom/mediatek/engineermode/bandselect/BandSelect;->getValFromBoxGsm(Z)[J

    move-result-object v0

    iput-object v0, v1, Lcom/mediatek/engineermode/bandselect/BandSelect;->mCurrentGsmValues:[J

    .line 400
    invoke-direct {v1, v14}, Lcom/mediatek/engineermode/bandselect/BandSelect;->saveDefaultValueIfNeedGsm([J)V

    .line 366
    .end local v8    # "value":Ljava/lang/String;
    .end local v11    # "splitString":Ljava/lang/String;
    .end local v12    # "getDigitalVal":[Ljava/lang/String;
    .end local v14    # "values":[J
    :cond_6
    :goto_5
    add-int/lit8 v7, v7, 0x1

    goto/16 :goto_0

    .line 404
    :cond_7
    return-void
.end method

.method private showBandModeNR(Landroid/os/AsyncResult;I)V
    .locals 18
    .param p1, "aSyncResult"    # Landroid/os/AsyncResult;
    .param p2, "msg"    # I

    .line 407
    move-object/from16 v1, p0

    move/from16 v2, p2

    move-object/from16 v3, p1

    iget-object v0, v3, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    move-object v4, v0

    check-cast v4, [Ljava/lang/String;

    .line 409
    .local v4, "result":[Ljava/lang/String;
    array-length v5, v4

    const/4 v6, 0x0

    move v7, v6

    :goto_0
    if-ge v7, v5, :cond_2

    aget-object v8, v4, v7

    .line 410
    .local v8, "value":Ljava/lang/String;
    const/16 v9, 0x67

    const-string v10, "BandSelect"

    if-ne v2, v9, :cond_0

    .line 411
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "NR support --.>"

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v10, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 413
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "NR current --.>"

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v10, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 415
    :goto_1
    const-string v0, "+EPBSEH:"

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v0

    invoke-virtual {v8, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v11

    .line 416
    .local v11, "splitString":Ljava/lang/String;
    const-string v0, ","

    invoke-virtual {v11, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v12

    .line 418
    .local v12, "getDigitalVal":[Ljava/lang/String;
    const/4 v0, 0x3

    new-array v13, v0, [J

    .line 420
    .local v13, "bandNRValue":[J
    :try_start_0
    aget-object v0, v12, v0

    const-string v14, "\""

    const-string v15, ""

    invoke-virtual {v0, v14, v15}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    const/16 v14, 0x18

    invoke-static {v0, v14}, Lcom/mediatek/engineermode/EmUtils;->addZeroForNum(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v0

    .line 421
    .local v0, "info":Ljava/lang/String;
    const/16 v15, 0x8

    invoke-virtual {v0, v6, v15}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v9

    const/16 v14, 0x10

    invoke-static {v9, v14}, Ljava/lang/Long;->parseLong(Ljava/lang/String;I)J

    move-result-wide v16

    aput-wide v16, v13, v6

    .line 422
    invoke-virtual {v0, v15, v14}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v9

    invoke-static {v9, v14}, Ljava/lang/Long;->parseLong(Ljava/lang/String;I)J

    move-result-wide v16

    const/4 v9, 0x1

    aput-wide v16, v13, v9

    .line 423
    const/4 v9, 0x2

    const/16 v15, 0x18

    invoke-virtual {v0, v14, v15}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v15

    invoke-static {v15, v14}, Ljava/lang/Long;->parseLong(Ljava/lang/String;I)J

    move-result-wide v14

    aput-wide v14, v13, v9
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 426
    .end local v0    # "info":Ljava/lang/String;
    goto :goto_2

    .line 424
    :catch_0
    move-exception v0

    .line 425
    .local v0, "e":Ljava/lang/Exception;
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v14, "NR parse failed,"

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v10, v9}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 428
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_2
    const/16 v9, 0x67

    if-ne v2, v9, :cond_1

    .line 429
    invoke-direct {v1, v13}, Lcom/mediatek/engineermode/bandselect/BandSelect;->setSupportedModeNR([J)V

    .line 430
    invoke-direct {v1, v13}, Lcom/mediatek/engineermode/bandselect/BandSelect;->saveDefaultValueNR([J)V

    goto :goto_3

    .line 432
    :cond_1
    invoke-direct {v1, v13}, Lcom/mediatek/engineermode/bandselect/BandSelect;->setCurrentModeNR([J)V

    .line 433
    iput-object v13, v1, Lcom/mediatek/engineermode/bandselect/BandSelect;->mCurrentNRValues:[J

    .line 409
    .end local v8    # "value":Ljava/lang/String;
    .end local v11    # "splitString":Ljava/lang/String;
    .end local v12    # "getDigitalVal":[Ljava/lang/String;
    .end local v13    # "bandNRValue":[J
    :goto_3
    add-int/lit8 v7, v7, 0x1

    goto/16 :goto_0

    .line 436
    :cond_2
    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2
    .param p1, "arg0"    # Landroid/view/View;

    .line 738
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    iget-object v1, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mBtnSet:Landroid/widget/Button;

    invoke-virtual {v1}, Landroid/widget/Button;->getId()I

    move-result v1

    if-ne v0, v1, :cond_2

    .line 739
    invoke-direct {p0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->getValFromBoxCdma()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSetCdmaValues:J

    .line 740
    invoke-direct {p0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->getValFromBoxNR()[J

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSetNRValues:[J

    .line 741
    const/4 v0, 0x1

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->getValFromBoxGsm(Z)[J

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSetGsmValues:[J

    .line 742
    iget-boolean v1, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsLteValid:Z

    if-eqz v1, :cond_1

    iget-boolean v1, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsCdmaValid:Z

    if-eqz v1, :cond_1

    iget-boolean v1, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsNRValid:Z

    if-nez v1, :cond_0

    goto :goto_0

    .line 747
    :cond_0
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->setBandModeGsm([J)V

    goto :goto_1

    .line 743
    :cond_1
    :goto_0
    const-string v0, "BandSelect"

    const-string v1, "!mIsLteValid || !mIsCdmaValid || !mIsNRValid"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 744
    const-string v0, "the band settings is forbid"

    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 745
    return-void

    .line 748
    :cond_2
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    iget-object v1, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mBtnReset:Landroid/widget/Button;

    invoke-virtual {v1}, Landroid/widget/Button;->getId()I

    move-result v1

    if-ne v0, v1, :cond_3

    .line 749
    const/4 v0, 0x2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->showDialog(I)V

    .line 751
    :cond_3
    :goto_1
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 4
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 309
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 310
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->getIntent()Landroid/content/Intent;

    move-result-object v0

    .line 311
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "mSimType"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSimType:I

    .line 312
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getModemType()I

    move-result v1

    .line 314
    .local v1, "modemType":I
    const v2, 0x7f08001b

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/bandselect/BandSelect;->setContentView(I)V

    .line 315
    const v2, 0x7f06004f

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/bandselect/BandSelect;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/Button;

    iput-object v2, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mBtnSet:Landroid/widget/Button;

    .line 316
    const v2, 0x7f06004e

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/bandselect/BandSelect;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/Button;

    iput-object v2, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mBtnReset:Landroid/widget/Button;

    .line 317
    iget-object v2, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mBtnSet:Landroid/widget/Button;

    invoke-virtual {v2, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 318
    iget-object v2, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mBtnReset:Landroid/widget/Button;

    invoke-virtual {v2, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 320
    invoke-direct {p0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->initGsmArray()V

    .line 322
    sget v2, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSimType:I

    invoke-static {v2}, Lcom/mediatek/engineermode/ModemCategory;->isCapabilitySim(I)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 323
    const/4 v2, 0x2

    if-ne v1, v2, :cond_0

    .line 324
    invoke-direct {p0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->initTdscdmaArray()V

    .line 325
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isLteSupport()Z

    move-result v2

    if-eqz v2, :cond_3

    .line 326
    invoke-direct {p0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->initLteArray()V

    goto :goto_0

    .line 328
    :cond_0
    const/4 v2, 0x1

    if-ne v1, v2, :cond_3

    .line 329
    invoke-direct {p0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->initWcdmaArray()V

    .line 330
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isLteSupport()Z

    move-result v2

    if-eqz v2, :cond_3

    .line 331
    invoke-direct {p0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->initLteArray()V

    goto :goto_0

    .line 335
    :cond_1
    sget v2, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSimType:I

    const/4 v3, 0x4

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/ModemCategory;->checkViceSimCapability(II)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 336
    invoke-direct {p0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->initWcdmaArray()V

    .line 338
    :cond_2
    sget v2, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSimType:I

    const/16 v3, 0x1000

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/ModemCategory;->checkViceSimCapability(II)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 339
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isLteSupport()Z

    move-result v2

    if-eqz v2, :cond_3

    .line 340
    invoke-direct {p0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->initLteArray()V

    .line 343
    :cond_3
    :goto_0
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isCdma()Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is90Modem()Z

    move-result v2

    if-nez v2, :cond_4

    .line 344
    invoke-direct {p0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->initCdmaArray()V

    .line 345
    invoke-direct {p0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->queryCurrentModeCdma()V

    .line 346
    sget v2, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSimType:I

    invoke-static {v2}, Lcom/mediatek/engineermode/ModemCategory;->CheckViceSimCdmaCapability(I)Z

    move-result v2

    if-nez v2, :cond_4

    .line 347
    const v2, 0x7f0600c8

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/bandselect/BandSelect;->findViewById(I)Landroid/view/View;

    move-result-object v2

    const/16 v3, 0x8

    invoke-virtual {v2, v3}, Landroid/view/View;->setVisibility(I)V

    .line 351
    :cond_4
    invoke-direct {p0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->querySupportModeGsm()V

    .line 352
    invoke-direct {p0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->queryCurrentModeGsm()V

    .line 354
    sget v2, Lcom/mediatek/engineermode/bandselect/BandSelect;->mSimType:I

    invoke-static {v2}, Lcom/mediatek/engineermode/ModemCategory;->CheckViceSimNRCapability(I)Z

    move-result v2

    if-eqz v2, :cond_5

    .line 355
    invoke-direct {p0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->initNRArray()V

    .line 356
    invoke-direct {p0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->querySupportModeNR()V

    .line 357
    invoke-direct {p0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->queryCurrentModeNR()V

    .line 359
    :cond_5
    new-instance v2, Lcom/mediatek/engineermode/RadioStateManager;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/RadioStateManager;-><init>(Landroid/app/Activity;)V

    iput-object v2, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mRadioStateManager:Lcom/mediatek/engineermode/RadioStateManager;

    .line 360
    const/4 v3, 0x0

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/RadioStateManager;->registerRadioStateChanged(Lcom/mediatek/engineermode/RadioStateManager$RadioListener;)V

    .line 361
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 4
    .param p1, "dialogId"    # I

    .line 905
    const/4 v0, 0x0

    const/4 v1, 0x2

    if-ne v1, p1, :cond_0

    .line 906
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 908
    .local v1, "builder":Landroid/app/AlertDialog$Builder;
    const v2, 0x7f0a050f

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    .line 909
    const v2, 0x7f0a050e

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setMessage(I)Landroid/app/AlertDialog$Builder;

    .line 910
    const v2, 0x104000a

    new-instance v3, Lcom/mediatek/engineermode/bandselect/BandSelect$2;

    invoke-direct {v3, p0}, Lcom/mediatek/engineermode/bandselect/BandSelect$2;-><init>(Lcom/mediatek/engineermode/bandselect/BandSelect;)V

    invoke-virtual {v1, v2, v3}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 922
    const/high16 v2, 0x1040000

    invoke-virtual {v1, v2, v0}, Landroid/app/AlertDialog$Builder;->setNegativeButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 923
    invoke-virtual {v1}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/AlertDialog;->show()V

    .line 924
    .end local v1    # "builder":Landroid/app/AlertDialog$Builder;
    goto :goto_0

    :cond_0
    const/4 v1, 0x1

    const v2, 0x7f0a05ae

    if-ne v1, p1, :cond_1

    .line 925
    const-string v1, "BandSelect"

    const-string v3, "band set failed"

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 926
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 928
    .restart local v1    # "builder":Landroid/app/AlertDialog$Builder;
    const v3, 0x7f0a06c7

    invoke-virtual {v1, v3}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    .line 929
    const-string v3, "please wait for reboot airplane finish and try again"

    invoke-virtual {v1, v3}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 930
    invoke-virtual {v1, v2, v0}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 931
    invoke-virtual {v1}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/AlertDialog;->show()V

    .line 932
    .end local v1    # "builder":Landroid/app/AlertDialog$Builder;
    goto :goto_0

    :cond_1
    const/16 v1, 0x3e9

    if-ne v1, p1, :cond_2

    .line 933
    iget-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mRadioStateManager:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/RadioStateManager;->getRebootModemDialog()Landroid/app/ProgressDialog;

    move-result-object v0

    return-object v0

    .line 935
    :cond_2
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 937
    .restart local v1    # "builder":Landroid/app/AlertDialog$Builder;
    const v3, 0x7f0a05af

    invoke-virtual {v1, v3}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    .line 938
    const v3, 0x7f0a05ad

    invoke-virtual {v1, v3}, Landroid/app/AlertDialog$Builder;->setMessage(I)Landroid/app/AlertDialog$Builder;

    .line 939
    invoke-virtual {v1, v2, v0}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 940
    invoke-virtual {v1}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/AlertDialog;->show()V

    .line 942
    .end local v1    # "builder":Landroid/app/AlertDialog$Builder;
    :goto_0
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreateDialog(I)Landroid/app/Dialog;

    move-result-object v0

    return-object v0
.end method

.method public onDestroy()V
    .locals 2

    .line 755
    const-string v0, "BandSelect"

    const-string v1, "onDestroy"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 756
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mIsThisAlive:Z

    .line 757
    iget-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect;->mRadioStateManager:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/RadioStateManager;->unregisterRadioStateChanged()V

    .line 758
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 759
    return-void
.end method
