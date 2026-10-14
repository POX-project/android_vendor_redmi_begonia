.class Lcom/mediatek/engineermode/mdmcomponent/DRDSDS;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field drAllowedAddr:[[I

.field drAllowedMapping:Ljava/util/HashMap;
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
    .locals 2

    .line 5571
    const-string v0, "type_icd_record"

    const-string v1, "9000"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/DRDSDS;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 3
    .param p1, "context"    # Landroid/app/Activity;

    .line 5589
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 5577
    const/4 v0, 0x1

    new-array v0, v0, [[I

    const/4 v1, 0x3

    new-array v1, v1, [I

    fill-array-data v1, :array_0

    const/4 v2, 0x0

    aput-object v1, v0, v2

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/DRDSDS;->drAllowedAddr:[[I

    .line 5581
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/DRDSDS$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/DRDSDS$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/DRDSDS;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/DRDSDS;->drAllowedMapping:Ljava/util/HashMap;

    .line 5590
    return-void

    nop

    :array_0
    .array-data 4
        0x8
        0x0
        0x1
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 5604
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/DRDSDS;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 5599
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 5608
    const-string v0, "DR Allowed"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 5594
    const-string v0, "DR-DSDS"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 5613
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 7
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 5617
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 5618
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    const-string v1, "9600"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 5619
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/DRDSDS;->drAllowedAddr:[[I

    array-length v2, v1

    add-int/lit8 v2, v2, -0x1

    aget-object v1, v1, v2

    const/4 v2, 0x0

    aget v1, v1, v2

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/DRDSDS;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 5620
    .local v1, "version":I
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/DRDSDS;->drAllowedAddr:[[I

    invoke-virtual {p0, v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/DRDSDS;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v3

    .line 5621
    .local v3, "drAllowed":I
    sget-object v4, Lcom/mediatek/engineermode/mdmcomponent/DRDSDS;->icdLogInfo:[Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/DRDSDS;->getName()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " update,name id = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, ", version = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ", value = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const-string v6, "EmInfo/MDMComponent"

    invoke-static {v6, v4, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 5624
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/DRDSDS;->drAllowedMapping:Ljava/util/HashMap;

    invoke-virtual {p0, v4, v3}, Lcom/mediatek/engineermode/mdmcomponent/DRDSDS;->getValueByMapping(Ljava/util/HashMap;I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p0, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/DRDSDS;->setData(ILjava/lang/Object;)V

    .line 5626
    .end local v1    # "version":I
    .end local v3    # "drAllowed":I
    :cond_0
    return-void
.end method
