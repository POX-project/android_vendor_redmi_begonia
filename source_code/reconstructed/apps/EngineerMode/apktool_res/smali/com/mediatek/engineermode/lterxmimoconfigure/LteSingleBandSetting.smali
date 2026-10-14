.class public Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;
.super Landroid/app/Activity;
.source "LteSingleBandSetting.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$BandModeMap;
    }
.end annotation


# static fields
.field public static final CMD_SB_4RX_SET:Ljava/lang/String; = "\"sb_4rx_set\""

.field public static final CMD_SB_MIMO_SET:Ljava/lang/String; = "\"sb_mimo_set\""

.field private static final LTE_BAND_NUM:I = 0x100

.field private static final LTE_BAND_QUERY_MODE:I = 0x0

.field public static final LTE_BAND_SETTING_MODE_4RX:I = 0x1

.field public static final LTE_BAND_SETTING_MODE_4X4MIMO:I = 0x0

.field private static LteBandSettingMode:I = 0x0

.field public static LteBandSettingModeHistory:I = 0x0

.field private static final TAG:Ljava/lang/String; = "LteRx/SingleBandSetting"

.field public static mSbMimoSetString:[Ljava/lang/String;


# instance fields
.field private mBtnSet:Landroid/widget/Button;

.field private final mModeArray:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$BandModeMap;",
            ">;"
        }
    .end annotation
.end field

.field private mResponseHander:Landroid/os/Handler;

.field private mSbMimoSet:[[J


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 65
    const/4 v0, 0x0

    sput v0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->LteBandSettingModeHistory:I

    .line 66
    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/String;

    sput-object v1, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->mSbMimoSetString:[Ljava/lang/String;

    .line 67
    sput v0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->LteBandSettingMode:I

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 57
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 68
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->mModeArray:Ljava/util/ArrayList;

    .line 69
    const/4 v0, 0x2

    new-array v0, v0, [I

    fill-array-data v0, :array_0

    const-class v1, J

    invoke-static {v1, v0}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [[J

    iput-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->mSbMimoSet:[[J

    .line 71
    new-instance v0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$1;-><init>(Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->mResponseHander:Landroid/os/Handler;

    return-void

    :array_0
    .array-data 4
        0x2
        0x8
    .end array-data
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;
    .param p1, "x1"    # Ljava/lang/String;

    .line 57
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->updateCurrentMode(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$100()I
    .locals 1

    .line 57
    sget v0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->LteBandSettingMode:I

    return v0
.end method

.method private addCheckboxToTable(I)Ljava/util/ArrayList;
    .locals 8
    .param p1, "tableResId"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/ArrayList<",
            "Landroid/widget/CheckBox;",
            ">;"
        }
    .end annotation

    .line 103
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TableLayout;

    .line 104
    .local v0, "table":Landroid/widget/TableLayout;
    new-instance v1, Ljava/util/ArrayList;

    const/16 v2, 0x100

    invoke-direct {v1, v2}, Ljava/util/ArrayList;-><init>(I)V

    .line 106
    .local v1, "ret":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/widget/CheckBox;>;"
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    if-ge v3, v2, :cond_0

    .line 107
    new-instance v4, Landroid/widget/TableRow;

    invoke-direct {v4, p0}, Landroid/widget/TableRow;-><init>(Landroid/content/Context;)V

    .line 108
    .local v4, "row":Landroid/widget/TableRow;
    new-instance v5, Landroid/widget/CheckBox;

    invoke-direct {v5, p0}, Landroid/widget/CheckBox;-><init>(Landroid/content/Context;)V

    .line 109
    .local v5, "checkBox":Landroid/widget/CheckBox;
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "band "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v7, v3, 0x1

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Landroid/widget/CheckBox;->setText(Ljava/lang/CharSequence;)V

    .line 110
    invoke-virtual {v4, v5}, Landroid/widget/TableRow;->addView(Landroid/view/View;)V

    .line 111
    invoke-virtual {v0, v4}, Landroid/widget/TableLayout;->addView(Landroid/view/View;)V

    .line 112
    invoke-virtual {v1, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 106
    .end local v4    # "row":Landroid/widget/TableRow;
    .end local v5    # "checkBox":Landroid/widget/CheckBox;
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 114
    .end local v3    # "i":I
    :cond_0
    return-object v1
.end method

.method private getValFromBox()V
    .locals 10

    .line 163
    const/4 v0, 0x0

    .line 164
    .local v0, "count":I
    const-string v1, "LteRx/SingleBandSetting"

    const-string v2, "getValFromBox:"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 165
    iget-object v2, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->mModeArray:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$BandModeMap;

    .line 166
    .local v3, "m":Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$BandModeMap;
    iget-object v4, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->mSbMimoSet:[[J

    sget v5, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->LteBandSettingMode:I

    aget-object v4, v4, v5

    const-wide/16 v6, 0x0

    aput-wide v6, v4, v0

    .line 167
    sget-object v4, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->mSbMimoSetString:[Ljava/lang/String;

    const-string v6, ""

    aput-object v6, v4, v5

    .line 168
    .end local v3    # "m":Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$BandModeMap;
    goto :goto_0

    .line 169
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->mModeArray:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$BandModeMap;

    .line 170
    .restart local v3    # "m":Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$BandModeMap;
    iget-object v4, v3, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    invoke-virtual {v4}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v4

    if-eqz v4, :cond_1

    .line 171
    iget-object v4, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->mSbMimoSet:[[J

    sget v5, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->LteBandSettingMode:I

    aget-object v4, v4, v5

    aget-wide v5, v4, v0

    const-wide/16 v7, 0x1

    iget v9, v3, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$BandModeMap;->mBit:I

    shl-long/2addr v7, v9

    or-long/2addr v5, v7

    aput-wide v5, v4, v0

    .line 173
    :cond_1
    iget v4, v3, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$BandModeMap;->mBit:I

    const/16 v5, 0x1f

    if-ne v4, v5, :cond_2

    .line 175
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v5, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->mSbMimoSetString:[Ljava/lang/String;

    sget v6, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->LteBandSettingMode:I

    aget-object v7, v5, v6

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, ","

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->mSbMimoSet:[[J

    sget v8, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->LteBandSettingMode:I

    aget-object v7, v7, v8

    aget-wide v7, v7, v0

    invoke-virtual {v4, v7, v8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    aput-object v4, v5, v6

    .line 176
    add-int/lit8 v0, v0, 0x1

    .line 178
    .end local v3    # "m":Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$BandModeMap;
    :cond_2
    goto :goto_1

    .line 179
    :cond_3
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mSbMimoSetString: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->mSbMimoSetString:[Ljava/lang/String;

    sget v4, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->LteBandSettingMode:I

    aget-object v3, v3, v4

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 181
    return-void
.end method

.method private initLteArray()V
    .locals 5

    .line 118
    const v0, 0x7f0600cb

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->addCheckboxToTable(I)Ljava/util/ArrayList;

    move-result-object v0

    .line 119
    .local v0, "checkBox":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/widget/CheckBox;>;"
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-ge v1, v2, :cond_0

    .line 120
    iget-object v2, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->mModeArray:Ljava/util/ArrayList;

    new-instance v3, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$BandModeMap;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/widget/CheckBox;

    invoke-direct {v3, v4, v1}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$BandModeMap;-><init>(Landroid/widget/CheckBox;I)V

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 119
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 122
    .end local v1    # "i":I
    :cond_0
    return-void
.end method

.method private queryCurrentMode()V
    .locals 5

    .line 147
    const-string v0, ""

    .line 148
    .local v0, "queryCmd":Ljava/lang/String;
    sget v1, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->LteBandSettingMode:I

    if-nez v1, :cond_0

    .line 149
    const-string v0, "\"sb_mimo_set\""

    goto :goto_0

    .line 151
    :cond_0
    const-string v0, "\"sb_4rx_set\""

    .line 153
    :goto_0
    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "AT+EGMC=0,"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    const/4 v2, 0x1

    const-string v4, "+EGMC:"

    aput-object v4, v1, v2

    .line 154
    .local v1, "modeString":[Ljava/lang/String;
    invoke-direct {p0, v1, v3}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->sendATCommand([Ljava/lang/String;I)V

    .line 155
    return-void
.end method

.method private sendATCommand([Ljava/lang/String;I)V
    .locals 2
    .param p1, "atCommand"    # [Ljava/lang/String;
    .param p2, "msg"    # I

    .line 158
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "atCommand = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v1, 0x0

    aget-object v1, p1, v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "LteRx/SingleBandSetting"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 159
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->mResponseHander:Landroid/os/Handler;

    invoke-virtual {v0, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 160
    return-void
.end method

.method private updateCurrentMode(Ljava/lang/String;)V
    .locals 10
    .param p1, "result"    # Ljava/lang/String;

    .line 184
    const-string v0, ","

    const/4 v1, 0x1

    .line 185
    .local v1, "count":I
    const/4 v2, 0x0

    .line 187
    .local v2, "info":[Ljava/lang/String;
    :try_start_0
    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v2, v3

    .line 191
    nop

    .line 192
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "LteBandSettingMode = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v4, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->LteBandSettingMode:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "LteRx/SingleBandSetting"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 193
    sget-object v3, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->mSbMimoSetString:[Ljava/lang/String;

    sget v5, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->LteBandSettingMode:I

    const-string v6, ""

    aput-object v6, v3, v5

    .line 194
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    array-length v5, v2

    const/4 v6, 0x1

    sub-int/2addr v5, v6

    if-ge v3, v5, :cond_0

    .line 195
    iget-object v5, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->mSbMimoSet:[[J

    sget v6, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->LteBandSettingMode:I

    aget-object v5, v5, v6

    add-int/lit8 v6, v3, 0x1

    aget-object v6, v2, v6

    invoke-static {v6}, Ljava/lang/Long;->valueOf(Ljava/lang/String;)Ljava/lang/Long;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Long;->longValue()J

    move-result-wide v6

    aput-wide v6, v5, v3

    .line 196
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v6, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->mSbMimoSetString:[Ljava/lang/String;

    sget v7, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->LteBandSettingMode:I

    aget-object v8, v6, v7

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->mSbMimoSet:[[J

    sget v9, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->LteBandSettingMode:I

    aget-object v8, v8, v9

    aget-wide v8, v8, v3

    invoke-virtual {v5, v8, v9}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v6, v7

    .line 194
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 199
    .end local v3    # "i":I
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mSbMimoSetString = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->mSbMimoSetString:[Ljava/lang/String;

    sget v5, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->LteBandSettingMode:I

    aget-object v3, v3, v5

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 200
    iget-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->mModeArray:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$BandModeMap;

    .line 201
    .local v3, "m":Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$BandModeMap;
    aget-object v4, v2, v1

    invoke-static {v4}, Ljava/lang/Long;->valueOf(Ljava/lang/String;)Ljava/lang/Long;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Long;->longValue()J

    move-result-wide v4

    const-wide/16 v7, 0x1

    iget v9, v3, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$BandModeMap;->mBit:I

    shl-long/2addr v7, v9

    and-long/2addr v4, v7

    const-wide/16 v7, 0x0

    cmp-long v4, v4, v7

    if-nez v4, :cond_1

    .line 202
    iget-object v4, v3, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    const/4 v5, 0x0

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_2

    .line 204
    :cond_1
    iget-object v4, v3, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$BandModeMap;->mChkBox:Landroid/widget/CheckBox;

    invoke-virtual {v4, v6}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 206
    :goto_2
    iget v4, v3, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$BandModeMap;->mBit:I

    const/16 v5, 0x1f

    if-ne v4, v5, :cond_2

    .line 207
    add-int/lit8 v1, v1, 0x1

    .line 209
    .end local v3    # "m":Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting$BandModeMap;
    :cond_2
    goto :goto_1

    .line 210
    :cond_3
    return-void

    .line 188
    :catch_0
    move-exception v0

    .line 189
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 190
    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2
    .param p1, "arg0"    # Landroid/view/View;

    .line 214
    const-string v0, "LteRx/SingleBandSetting"

    const-string v1, "Band setting button click"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 215
    invoke-direct {p0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->getValFromBox()V

    .line 216
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 4
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 126
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 127
    const v0, 0x7f08008c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->setContentView(I)V

    .line 128
    const v0, 0x7f06004f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->mBtnSet:Landroid/widget/Button;

    .line 129
    invoke-virtual {p0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->getIntent()Landroid/content/Intent;

    move-result-object v0

    .line 130
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "band_setting_type"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->LteBandSettingMode:I

    .line 132
    sget v2, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->LteBandSettingModeHistory:I

    const/4 v3, 0x1

    shl-int v1, v3, v1

    or-int/2addr v1, v2

    sput v1, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->LteBandSettingModeHistory:I

    .line 133
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "LteBandSettingMode = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v2, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->LteBandSettingMode:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "LteRx/SingleBandSetting"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 134
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "LteBandSettingModeHistory = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v3, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->LteBandSettingModeHistory:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 135
    invoke-direct {p0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->initLteArray()V

    .line 136
    iget-object v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->mBtnSet:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 137
    return-void
.end method

.method public onDestroy()V
    .locals 2

    .line 220
    const-string v0, "LteRx/SingleBandSetting"

    const-string v1, "onDestroy"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 221
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 222
    return-void
.end method

.method protected onResume()V
    .locals 2

    .line 141
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 142
    const-string v0, "LteRx/SingleBandSetting"

    const-string v1, "onResume"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 143
    invoke-direct {p0}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteSingleBandSetting;->queryCurrentMode()V

    .line 144
    return-void
.end method
