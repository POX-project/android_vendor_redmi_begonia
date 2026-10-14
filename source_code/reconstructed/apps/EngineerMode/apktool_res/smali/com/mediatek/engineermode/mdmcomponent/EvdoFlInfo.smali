.class Lcom/mediatek/engineermode/mdmcomponent/EvdoFlInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentC2k.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 889
    const-string v0, "MSG_ID_EM_C2K_L4_EVDO_FL_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoFlInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 893
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 894
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 908
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoFlInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 903
    const-string v0, "7. CDMA EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 5

    .line 912
    const-string v0, "c_i"

    const-string v1, "drcAverageValue"

    const-string v2, "ftcCrcErrorCount"

    const-string v3, "ftcTotalCount"

    const-string v4, "syncCrcErrorRatio"

    filled-new-array {v0, v1, v2, v3, v4}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 898
    const-string v0, "EVDO FL info"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 918
    const/4 v0, 0x0

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 12
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 922
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 923
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "c_i"

    const/4 v2, 0x1

    invoke-virtual {p0, v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/EvdoFlInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v1

    .line 924
    .local v1, "c_i":I
    const-string v3, "drcAverageValue"

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/EvdoFlInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 925
    .local v3, "drcAverageValue":I
    const-string v4, "ftcCrcErrorCount"

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/EvdoFlInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 926
    .local v4, "ftcCrcErrorCount":I
    const-string v5, "ftcTotalCount"

    invoke-virtual {p0, v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/EvdoFlInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 927
    .local v5, "ftcTotalCount":I
    const-string v6, "syncCrcErrorRatio"

    invoke-virtual {p0, v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoFlInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 929
    .local v6, "syncCrcErrorRatio":I
    new-instance v7, Ljava/text/DecimalFormat;

    const-string v8, "#0.00"

    invoke-direct {v7, v8}, Ljava/text/DecimalFormat;-><init>(Ljava/lang/String;)V

    .line 930
    .local v7, "df":Ljava/text/DecimalFormat;
    int-to-float v8, v1

    const/high16 v9, 0x42800000    # 64.0f

    div-float/2addr v8, v9

    float-to-double v8, v8

    invoke-virtual {v7, v8, v9}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object v8

    .line 932
    .local v8, "c_iFloat":Ljava/lang/String;
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "syncCrcErrorRatio = "

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    const-string v10, "EmInfo/MDMComponent"

    invoke-static {v10, v9}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 933
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoFlInfo;->clearData()V

    .line 935
    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/mdmcomponent/EvdoFlInfo;->addData(Ljava/lang/String;)V

    .line 936
    new-array v9, v2, [Ljava/lang/Object;

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    const/4 v11, 0x0

    aput-object v10, v9, v11

    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/mdmcomponent/EvdoFlInfo;->addData([Ljava/lang/Object;)V

    .line 937
    new-array v9, v2, [Ljava/lang/Object;

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    aput-object v10, v9, v11

    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/mdmcomponent/EvdoFlInfo;->addData([Ljava/lang/Object;)V

    .line 938
    new-array v9, v2, [Ljava/lang/Object;

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    aput-object v10, v9, v11

    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/mdmcomponent/EvdoFlInfo;->addData([Ljava/lang/Object;)V

    .line 939
    new-array v2, v2, [Ljava/lang/Object;

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    aput-object v9, v2, v11

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/EvdoFlInfo;->addData([Ljava/lang/Object;)V

    .line 940
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoFlInfo;->notifyDataSetChanged()V

    .line 941
    return-void
.end method
