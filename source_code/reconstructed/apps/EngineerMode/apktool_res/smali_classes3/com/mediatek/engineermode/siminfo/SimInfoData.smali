.class public Lcom/mediatek/engineermode/siminfo/SimInfoData;
.super Ljava/lang/Object;
.source "SimInfoData.java"


# instance fields
.field EF_Path:[Ljava/lang/String;

.field EF_id:I

.field Family:I

.field name:Ljava/lang/String;

.field need_to_check:Z

.field num:Ljava/lang/String;

.field type:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 12
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 13
    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;I[Ljava/lang/String;ILjava/lang/String;Z)V
    .locals 0
    .param p1, "num"    # Ljava/lang/String;
    .param p2, "name"    # Ljava/lang/String;
    .param p3, "EF_id"    # I
    .param p4, "EF_Path"    # [Ljava/lang/String;
    .param p5, "Family"    # I
    .param p6, "type"    # Ljava/lang/String;
    .param p7, "need_to_check"    # Z

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 17
    iput-object p1, p0, Lcom/mediatek/engineermode/siminfo/SimInfoData;->num:Ljava/lang/String;

    .line 18
    iput-object p2, p0, Lcom/mediatek/engineermode/siminfo/SimInfoData;->name:Ljava/lang/String;

    .line 19
    iput p3, p0, Lcom/mediatek/engineermode/siminfo/SimInfoData;->EF_id:I

    .line 20
    iput-object p4, p0, Lcom/mediatek/engineermode/siminfo/SimInfoData;->EF_Path:[Ljava/lang/String;

    .line 21
    iput p5, p0, Lcom/mediatek/engineermode/siminfo/SimInfoData;->Family:I

    .line 22
    iput-object p6, p0, Lcom/mediatek/engineermode/siminfo/SimInfoData;->type:Ljava/lang/String;

    .line 23
    iput-boolean p7, p0, Lcom/mediatek/engineermode/siminfo/SimInfoData;->need_to_check:Z

    .line 24
    return-void
.end method
