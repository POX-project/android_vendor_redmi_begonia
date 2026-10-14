.class Lcom/mediatek/mdml/InfoDat;
.super Ljava/lang/Object;
.source "PlainDataDecoder.java"


# instance fields
.field globalID:Lcom/mediatek/mdml/GlobalID;

.field msgInfo:Lcom/mediatek/mdml/CommonMsgInfo;

.field otaInfo:Lcom/mediatek/mdml/CommonMsgInfo;

.field simInfo:Lcom/mediatek/mdml/SimInfo;


# direct methods
.method constructor <init>()V
    .locals 2

    .line 561
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 562
    new-instance v0, Lcom/mediatek/mdml/CommonMsgInfo;

    sget-object v1, Lcom/mediatek/mdml/InfoType;->OTA_INFO:Lcom/mediatek/mdml/InfoType;

    invoke-direct {v0, v1}, Lcom/mediatek/mdml/CommonMsgInfo;-><init>(Lcom/mediatek/mdml/InfoType;)V

    iput-object v0, p0, Lcom/mediatek/mdml/InfoDat;->otaInfo:Lcom/mediatek/mdml/CommonMsgInfo;

    .line 563
    new-instance v0, Lcom/mediatek/mdml/CommonMsgInfo;

    sget-object v1, Lcom/mediatek/mdml/InfoType;->MSG_INFO:Lcom/mediatek/mdml/InfoType;

    invoke-direct {v0, v1}, Lcom/mediatek/mdml/CommonMsgInfo;-><init>(Lcom/mediatek/mdml/InfoType;)V

    iput-object v0, p0, Lcom/mediatek/mdml/InfoDat;->msgInfo:Lcom/mediatek/mdml/CommonMsgInfo;

    .line 564
    new-instance v0, Lcom/mediatek/mdml/GlobalID;

    invoke-direct {v0}, Lcom/mediatek/mdml/GlobalID;-><init>()V

    iput-object v0, p0, Lcom/mediatek/mdml/InfoDat;->globalID:Lcom/mediatek/mdml/GlobalID;

    .line 565
    new-instance v0, Lcom/mediatek/mdml/SimInfo;

    invoke-direct {v0}, Lcom/mediatek/mdml/SimInfo;-><init>()V

    iput-object v0, p0, Lcom/mediatek/mdml/InfoDat;->simInfo:Lcom/mediatek/mdml/SimInfo;

    return-void
.end method
