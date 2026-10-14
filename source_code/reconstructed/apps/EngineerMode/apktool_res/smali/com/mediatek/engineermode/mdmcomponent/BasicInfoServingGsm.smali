.class Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field mGprsMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field mMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field mPbcchMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 8828
    const-string v0, "MSG_ID_EM_RRM_MEASUREMENT_REPORT_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 8856
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 8830
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;->mMapping:Ljava/util/HashMap;

    .line 8842
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;->mGprsMapping:Ljava/util/HashMap;

    .line 8848
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm$3;-><init>(Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;->mPbcchMapping:Ljava/util/HashMap;

    .line 8857
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 8871
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 8866
    const-string v0, "2. GSM EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 5

    .line 8875
    const-string v0, "Band"

    const-string v1, "ARFCN"

    const-string v2, "BSIC"

    const-string v3, "GPRS supported"

    const-string v4, "PBCCH present"

    filled-new-array {v0, v1, v2, v3, v4}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 8861
    const-string v0, "Basic Info (Serving) (GSM)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 8881
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 12
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 8886
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 8887
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "rr_em_measurement_report_info."

    .line 8888
    .local v1, "coName":Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "rr_state"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 8890
    .local v2, "rrState":I
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;->clearData()V

    .line 8891
    const/4 v3, 0x3

    if-lt v2, v3, :cond_0

    const/4 v3, 0x7

    if-gt v2, v3, :cond_0

    .line 8892
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "serving_current_band"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 8896
    .local v3, "band":I
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "serving_arfcn"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 8898
    .local v4, "arfcn":I
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "serving_bsic"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p0, v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 8900
    .local v5, "bsic":I
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "serv_gprs_supported"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {p0, v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 8904
    .local v6, "gprs":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "gprs_pbcch_present"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {p0, v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 8908
    .local v7, "pbcch":I
    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;->mMapping:Ljava/util/HashMap;

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/String;

    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;->addData(Ljava/lang/String;)V

    .line 8909
    const/4 v8, 0x1

    new-array v9, v8, [Ljava/lang/Object;

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    const/4 v11, 0x0

    aput-object v10, v9, v11

    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;->addData([Ljava/lang/Object;)V

    .line 8910
    new-array v8, v8, [Ljava/lang/Object;

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    aput-object v9, v8, v11

    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;->addData([Ljava/lang/Object;)V

    .line 8911
    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;->mGprsMapping:Ljava/util/HashMap;

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/String;

    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;->addData(Ljava/lang/String;)V

    .line 8912
    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;->mPbcchMapping:Ljava/util/HashMap;

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/String;

    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;->addData(Ljava/lang/String;)V

    .line 8914
    .end local v3    # "band":I
    .end local v4    # "arfcn":I
    .end local v5    # "bsic":I
    .end local v6    # "gprs":I
    .end local v7    # "pbcch":I
    :cond_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/BasicInfoServingGsm;->notifyDataSetChanged()V

    .line 8915
    return-void
.end method
