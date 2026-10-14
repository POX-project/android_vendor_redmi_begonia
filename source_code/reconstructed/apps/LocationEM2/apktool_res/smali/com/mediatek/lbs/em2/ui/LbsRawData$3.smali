.class Lcom/mediatek/lbs/em2/ui/LbsRawData$3;
.super Ljava/lang/Object;
.source "LbsRawData.java"

# interfaces
.implements Landroid/location/GnssAntennaInfo$Listener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsRawData;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsRawData;)V
    .locals 0

    .line 154
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onGnssAntennaInfoReceived(Ljava/util/List;)V
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Landroid/location/GnssAntennaInfo;",
            ">;)V"
        }
    .end annotation

    .line 157
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$608(Lcom/mediatek/lbs/em2/ui/LbsRawData;)I

    .line 160
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0}, Ljava/lang/String;-><init>()V

    .line 161
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0}, Ljava/lang/String;-><init>()V

    .line 162
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    new-instance v3, Ljava/util/Date;

    invoke-direct {v3}, Ljava/util/Date;-><init>()V

    invoke-virtual {v3}, Ljava/util/Date;->getTime()J

    move-result-wide v3

    invoke-static {v2, v3, v4}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$100(Lcom/mediatek/lbs/em2/ui/LbsRawData;J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "\n"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 165
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    const/4 v3, 0x0

    move-object v7, v1

    move v1, v3

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/location/GnssAntennaInfo;

    .line 166
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "AntennaInfo:["

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, "] :"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    add-int/lit8 v1, v1, 0x1

    move-object v0, v7

    goto :goto_0

    .line 170
    :cond_0
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "ANTENNA_"

    invoke-virtual {p1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-static {v5}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$700(Lcom/mediatek/lbs/em2/ui/LbsRawData;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ".txt"

    invoke-virtual {p1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    const/4 v8, 0x1

    const/4 v9, 0x0

    const-string v5, "ANTENNA"

    invoke-virtual/range {v4 .. v9}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->write2File(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZ)Z

    .line 172
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "AntennaInfo Update Count="

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$600(Lcom/mediatek/lbs/em2/ui/LbsRawData;)I

    move-result v4

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "\nAntennaInfo Num="

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 174
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->log(Ljava/lang/Object;)V

    .line 175
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    const/4 v0, 0x3

    invoke-static {p0, v0, v3, v3, p1}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$300(Lcom/mediatek/lbs/em2/ui/LbsRawData;IIILjava/lang/Object;)V

    return-void
.end method
