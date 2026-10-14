.class public Lcom/mediatek/engineermode/iotconfig/VideoQualityModel;
.super Ljava/lang/Object;
.source "VideoQualityModel.java"


# instance fields
.field private format:Ljava/lang/String;

.field private level:Ljava/lang/String;

.field private name:Ljava/lang/String;

.field private profile:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "format"    # Ljava/lang/String;
    .param p3, "profile"    # Ljava/lang/String;
    .param p4, "level"    # Ljava/lang/String;

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 12
    iput-object p2, p0, Lcom/mediatek/engineermode/iotconfig/VideoQualityModel;->format:Ljava/lang/String;

    .line 13
    iput-object p4, p0, Lcom/mediatek/engineermode/iotconfig/VideoQualityModel;->level:Ljava/lang/String;

    .line 14
    iput-object p3, p0, Lcom/mediatek/engineermode/iotconfig/VideoQualityModel;->profile:Ljava/lang/String;

    .line 15
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VideoQualityModel;->name:Ljava/lang/String;

    .line 16
    return-void
.end method


# virtual methods
.method public getFormat()Ljava/lang/String;
    .locals 1

    .line 27
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoQualityModel;->format:Ljava/lang/String;

    return-object v0
.end method

.method public getLevel()Ljava/lang/String;
    .locals 1

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoQualityModel;->level:Ljava/lang/String;

    return-object v0
.end method

.method public getName()Ljava/lang/String;
    .locals 1

    .line 19
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoQualityModel;->name:Ljava/lang/String;

    return-object v0
.end method

.method public getProfile()Ljava/lang/String;
    .locals 1

    .line 43
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoQualityModel;->profile:Ljava/lang/String;

    return-object v0
.end method

.method public setFormat(Ljava/lang/String;)V
    .locals 0
    .param p1, "format"    # Ljava/lang/String;

    .line 31
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VideoQualityModel;->format:Ljava/lang/String;

    .line 32
    return-void
.end method

.method public setLevel(Ljava/lang/String;)V
    .locals 0
    .param p1, "level"    # Ljava/lang/String;

    .line 39
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VideoQualityModel;->level:Ljava/lang/String;

    .line 40
    return-void
.end method

.method public setName(Ljava/lang/String;)V
    .locals 0
    .param p1, "name"    # Ljava/lang/String;

    .line 23
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VideoQualityModel;->name:Ljava/lang/String;

    .line 24
    return-void
.end method

.method public setProfile(Ljava/lang/String;)V
    .locals 0
    .param p1, "profile"    # Ljava/lang/String;

    .line 47
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VideoQualityModel;->profile:Ljava/lang/String;

    .line 48
    return-void
.end method
