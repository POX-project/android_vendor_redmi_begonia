.class Lcom/mediatek/engineermode/wifi/ChannelDataFormat;
.super Ljava/lang/Object;
.source "ChannelInfo.java"


# instance fields
.field private mId:I

.field private mIs5G:Z

.field private mName:Ljava/lang/String;


# direct methods
.method public constructor <init>(ILjava/lang/String;Z)V
    .locals 0
    .param p1, "id"    # I
    .param p2, "name"    # Ljava/lang/String;
    .param p3, "is5g"    # Z

    .line 885
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 886
    iput p1, p0, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;->mId:I

    .line 887
    iput-object p2, p0, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;->mName:Ljava/lang/String;

    .line 888
    iput-boolean p3, p0, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;->mIs5G:Z

    .line 889
    return-void
.end method


# virtual methods
.method getId()I
    .locals 1

    .line 894
    iget v0, p0, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;->mId:I

    return v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 891
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;->mName:Ljava/lang/String;

    return-object v0
.end method

.method is5G()Z
    .locals 1

    .line 897
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;->mIs5G:Z

    return v0
.end method
