.class Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field ucDlBandWidth:I

.field ucFreqBandInd:I

.field ucUlBandWidth:I

.field wMCC:I

.field wMNC:I

.field wServEarfcn:I

.field wServPhysCellId:I

.field wServRsrp:I

.field wServRsrq:I

.field wServRssnr:I


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 53
    const-string v0, "type_icd_record"

    const-string v1, "7100"

    const-string v2, "7101"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 72
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 58
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->wMCC:I

    .line 59
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->wMNC:I

    .line 60
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->ucFreqBandInd:I

    .line 61
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->ucDlBandWidth:I

    .line 62
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->ucUlBandWidth:I

    .line 64
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->wServEarfcn:I

    .line 65
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->wServPhysCellId:I

    .line 66
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->wServRsrp:I

    .line 67
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->wServRsrq:I

    .line 68
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->wServRssnr:I

    .line 73
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 87
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 82
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 10

    .line 91
    const-string v0, "MCC"

    const-string v1, "MNC"

    const-string v2, "ucFreqBandInd"

    const-string v3, "ucDlBandwidth"

    const-string v4, "ucUlBandwidth"

    const-string v5, "wServEarfcn"

    const-string v6, "wServPhysCellId"

    const-string v7, "ucServRsrp"

    const-string v8, "ucServRsrq"

    const-string v9, "ucServRssnr"

    filled-new-array/range {v0 .. v9}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 77
    const-string v0, "EUTRAMeasurementReport"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 100
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 10
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 104
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 105
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->clearData()V

    .line 106
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "EUTRAMeasurementReport update,name id = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "EmInfo/MDMComponent"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 108
    const-string v1, "7100"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v3, "version = "

    const/16 v4, 0x50

    const/16 v5, 0x40

    const/16 v6, 0x10

    const/16 v7, 0x8

    const/4 v8, 0x0

    if-eqz v1, :cond_0

    .line 109
    invoke-virtual {p0, v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 110
    .local v1, "version":I
    invoke-virtual {p0, v0, v5, v6, v8}, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->getFieldValueIcd(Ljava/nio/ByteBuffer;IIZ)I

    move-result v5

    iput v5, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->wMCC:I

    .line 111
    invoke-virtual {p0, v0, v4, v6, v8}, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->getFieldValueIcd(Ljava/nio/ByteBuffer;IIZ)I

    move-result v4

    iput v4, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->wMNC:I

    .line 112
    invoke-virtual {p0, v0, v6, v6, v8}, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->getFieldValueIcd(Ljava/nio/ByteBuffer;IIZ)I

    move-result v4

    iput v4, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->ucFreqBandInd:I

    .line 113
    const/16 v4, 0x68

    invoke-virtual {p0, v0, v4, v7, v8}, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->getFieldValueIcd(Ljava/nio/ByteBuffer;IIZ)I

    move-result v4

    iput v4, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->ucDlBandWidth:I

    .line 114
    const/16 v4, 0x70

    invoke-virtual {p0, v0, v4, v7, v8}, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->getFieldValueIcd(Ljava/nio/ByteBuffer;IIZ)I

    move-result v4

    iput v4, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->ucUlBandWidth:I

    .line 115
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .end local v1    # "version":I
    goto :goto_0

    .line 116
    :cond_0
    const-string v1, "7101"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 117
    invoke-virtual {p0, v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 118
    .restart local v1    # "version":I
    const/16 v9, 0x20

    invoke-virtual {p0, v0, v9, v9, v8}, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->getFieldValueIcd(Ljava/nio/ByteBuffer;IIZ)I

    move-result v9

    iput v9, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->wServEarfcn:I

    .line 119
    invoke-virtual {p0, v0, v6, v6, v8}, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->getFieldValueIcd(Ljava/nio/ByteBuffer;IIZ)I

    move-result v6

    iput v6, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->wServPhysCellId:I

    .line 120
    invoke-virtual {p0, v0, v5, v7, v8}, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->getFieldValueIcd(Ljava/nio/ByteBuffer;IIZ)I

    move-result v5

    iput v5, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->wServRsrp:I

    .line 121
    const/16 v5, 0x48

    invoke-virtual {p0, v0, v5, v7, v8}, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->getFieldValueIcd(Ljava/nio/ByteBuffer;IIZ)I

    move-result v5

    iput v5, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->wServRsrq:I

    .line 122
    invoke-virtual {p0, v0, v4, v7, v8}, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->getFieldValueIcd(Ljava/nio/ByteBuffer;IIZ)I

    move-result v4

    iput v4, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->wServRssnr:I

    .line 123
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 116
    .end local v1    # "version":I
    :cond_1
    :goto_0
    nop

    .line 125
    :goto_1
    const/4 v1, 0x1

    new-array v2, v1, [Ljava/lang/Object;

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->wMCC:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v2, v8

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->addData([Ljava/lang/Object;)V

    .line 126
    new-array v2, v1, [Ljava/lang/Object;

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->wMNC:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v2, v8

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->addData([Ljava/lang/Object;)V

    .line 127
    new-array v2, v1, [Ljava/lang/Object;

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->ucFreqBandInd:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v2, v8

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->addData([Ljava/lang/Object;)V

    .line 128
    new-array v2, v1, [Ljava/lang/Object;

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->ucDlBandWidth:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v2, v8

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->addData([Ljava/lang/Object;)V

    .line 129
    new-array v2, v1, [Ljava/lang/Object;

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->ucUlBandWidth:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v2, v8

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->addData([Ljava/lang/Object;)V

    .line 131
    new-array v2, v1, [Ljava/lang/Object;

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->wServEarfcn:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v2, v8

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->addData([Ljava/lang/Object;)V

    .line 132
    new-array v2, v1, [Ljava/lang/Object;

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->wServPhysCellId:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v2, v8

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->addData([Ljava/lang/Object;)V

    .line 133
    new-array v2, v1, [Ljava/lang/Object;

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->wServRsrp:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v2, v8

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->addData([Ljava/lang/Object;)V

    .line 134
    new-array v2, v1, [Ljava/lang/Object;

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->wServRsrq:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v2, v8

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->addData([Ljava/lang/Object;)V

    .line 135
    new-array v1, v1, [Ljava/lang/Object;

    iget v2, p0, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->wServRssnr:I

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v1, v8

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EUTRAMeasurementReport;->addData([Ljava/lang/Object;)V

    .line 137
    return-void
.end method
