.class public Lcom/mediatek/engineermode/cfu/CfuSimInfoData;
.super Ljava/lang/Object;
.source "CfuSimInfoData.java"


# instance fields
.field EF_Path:[Ljava/lang/String;

.field EF_id:I

.field Family:I

.field name:Ljava/lang/String;

.field type:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;I[Ljava/lang/String;ILjava/lang/String;)V
    .locals 0
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "EF_id"    # I
    .param p3, "EF_Path"    # [Ljava/lang/String;
    .param p4, "Family"    # I
    .param p5, "type"    # Ljava/lang/String;

    .line 10
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 11
    iput-object p1, p0, Lcom/mediatek/engineermode/cfu/CfuSimInfoData;->name:Ljava/lang/String;

    .line 12
    iput p2, p0, Lcom/mediatek/engineermode/cfu/CfuSimInfoData;->EF_id:I

    .line 13
    iput-object p3, p0, Lcom/mediatek/engineermode/cfu/CfuSimInfoData;->EF_Path:[Ljava/lang/String;

    .line 14
    iput p4, p0, Lcom/mediatek/engineermode/cfu/CfuSimInfoData;->Family:I

    .line 15
    iput-object p5, p0, Lcom/mediatek/engineermode/cfu/CfuSimInfoData;->type:Ljava/lang/String;

    .line 16
    return-void
.end method
