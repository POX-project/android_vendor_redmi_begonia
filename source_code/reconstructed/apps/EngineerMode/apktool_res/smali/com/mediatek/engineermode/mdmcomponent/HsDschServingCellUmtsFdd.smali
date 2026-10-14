.class Lcom/mediatek/engineermode/mdmcomponent/HsDschServingCellUmtsFdd;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 8720
    const-string v0, "MSG_ID_FDD_EM_MEME_DCH_H_SERVING_CELL_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/HsDschServingCellUmtsFdd;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 8724
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 8725
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 8739
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/HsDschServingCellUmtsFdd;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 8734
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 8743
    const-string v0, "HS-DSCH Serving Cell"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 8729
    const-string v0, "HS-DSCH Serving cell (UMTS FDD)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 8748
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 8
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 8753
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 8754
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "HSDSCH_Serving_UARFCN"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/HsDschServingCellUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    .line 8756
    .local v1, "uarfcn":I
    const-string v2, "HSDSCH_Serving_PSC"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/HsDschServingCellUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 8758
    .local v2, "psc":I
    const-string v3, ""

    .line 8759
    .local v3, "value":Ljava/lang/String;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "-"

    const v6, 0xffff

    if-ne v1, v6, :cond_0

    move-object v7, v5

    goto :goto_0

    :cond_0
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    :goto_0
    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 8760
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, " / "

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-ne v2, v6, :cond_1

    goto :goto_1

    :cond_1
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    :goto_1
    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 8761
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/HsDschServingCellUmtsFdd;->clearData()V

    .line 8762
    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/mdmcomponent/HsDschServingCellUmtsFdd;->addData(Ljava/lang/String;)V

    .line 8763
    return-void
.end method
