.class public Lcom/mediatek/lbs/em2/utils/AgpsProfilingInfo$ProfileElement;
.super Ljava/lang/Object;
.source "AgpsProfilingInfo.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/utils/AgpsProfilingInfo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "ProfileElement"
.end annotation


# instance fields
.field protected message:Ljava/lang/String;

.field protected timestamp:J

.field protected type:I


# direct methods
.method public constructor <init>(IJLjava/lang/String;)V
    .locals 0

    .line 50
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 51
    iput p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsProfilingInfo$ProfileElement;->type:I

    .line 52
    iput-wide p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsProfilingInfo$ProfileElement;->timestamp:J

    .line 53
    iput-object p4, p0, Lcom/mediatek/lbs/em2/utils/AgpsProfilingInfo$ProfileElement;->message:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public getMessage()Ljava/lang/String;
    .locals 0

    .line 65
    iget-object p0, p0, Lcom/mediatek/lbs/em2/utils/AgpsProfilingInfo$ProfileElement;->message:Ljava/lang/String;

    return-object p0
.end method

.method public getTimestamp()J
    .locals 2

    .line 61
    iget-wide v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsProfilingInfo$ProfileElement;->timestamp:J

    return-wide v0
.end method

.method public getType()I
    .locals 0

    .line 57
    iget p0, p0, Lcom/mediatek/lbs/em2/utils/AgpsProfilingInfo$ProfileElement;->type:I

    return p0
.end method

.method public toString()Ljava/lang/String;
    .locals 5

    .line 82
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "type=["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsProfilingInfo$ProfileElement;->type:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 83
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "timestamp=["

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v3, p0, Lcom/mediatek/lbs/em2/utils/AgpsProfilingInfo$ProfileElement;->timestamp:J

    invoke-virtual {v2, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 84
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "message=["

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/utils/AgpsProfilingInfo$ProfileElement;->message:Ljava/lang/String;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method
