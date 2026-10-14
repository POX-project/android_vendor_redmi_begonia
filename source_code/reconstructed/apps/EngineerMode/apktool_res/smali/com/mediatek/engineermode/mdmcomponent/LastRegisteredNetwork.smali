.class Lcom/mediatek/engineermode/mdmcomponent/LastRegisteredNetwork;
.super Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 6461
    const-string v0, "MSG_ID_EM_NWSEL_PLMN_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/LastRegisteredNetwork;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 6465
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;-><init>(Landroid/app/Activity;)V

    .line 6466
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 6480
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/LastRegisteredNetwork;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 6475
    const-string v0, "3. UMTS FDD EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 2

    .line 6489
    const-string v0, "name"

    const-string v1, "value"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 6470
    const-string v0, "Last Registered Network(s)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 6485
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 6
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 6494
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 6495
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LastRegisteredNetwork;->clearData()V

    .line 6496
    const-string v1, ""

    .line 6497
    .local v1, "rplmn":Ljava/lang/String;
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    const/4 v3, 0x6

    if-ge v2, v3, :cond_0

    .line 6498
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "rplmn["

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "]"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/LastRegisteredNetwork;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 6499
    .local v3, "value":I
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v3}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 6497
    .end local v3    # "value":I
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 6501
    .end local v2    # "i":I
    :cond_0
    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    const-string v4, "rplmn"

    aput-object v4, v2, v3

    const/4 v3, 0x1

    aput-object v1, v2, v3

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/LastRegisteredNetwork;->addData([Ljava/lang/Object;)V

    .line 6502
    return-void
.end method
