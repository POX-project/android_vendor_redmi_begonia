.class Lcom/mediatek/lbs/em2/ui/LbsRawData$2;
.super Landroid/location/GnssNavigationMessage$Callback;
.source "LbsRawData.java"


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

    .line 133
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$2;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-direct {p0}, Landroid/location/GnssNavigationMessage$Callback;-><init>()V

    return-void
.end method


# virtual methods
.method public onGnssNavigationMessageReceived(Landroid/location/GnssNavigationMessage;)V
    .locals 9

    .line 137
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$2;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$408(Lcom/mediatek/lbs/em2/ui/LbsRawData;)I

    .line 140
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0}, Ljava/lang/String;-><init>()V

    .line 141
    new-instance v1, Ljava/lang/String;

    invoke-direct {v1}, Ljava/lang/String;-><init>()V

    .line 142
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$2;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    new-instance v3, Ljava/util/Date;

    invoke-direct {v3}, Ljava/util/Date;-><init>()V

    invoke-virtual {v3}, Ljava/util/Date;->getTime()J

    move-result-wide v3

    invoke-static {v2, v3, v4}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$100(Lcom/mediatek/lbs/em2/ui/LbsRawData;J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ":"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v2, "\n"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    .line 143
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$2;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "NAVI_"

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$2;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$500(Lcom/mediatek/lbs/em2/ui/LbsRawData;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ".txt"

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const-string v4, "NAVI"

    const/4 v7, 0x1

    const/4 v8, 0x0

    invoke-virtual/range {v3 .. v8}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->write2File(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZ)Z

    .line 145
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "Navigation Count="

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$2;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$400(Lcom/mediatek/lbs/em2/ui/LbsRawData;)I

    move-result v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " Svid="

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/location/GnssNavigationMessage;->getSvid()I

    move-result v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " Type="

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 146
    invoke-virtual {p1}, Landroid/location/GnssNavigationMessage;->getType()I

    move-result p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 147
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->log(Ljava/lang/Object;)V

    .line 148
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$2;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    const/4 v0, 0x2

    const/4 v1, 0x0

    invoke-static {p0, v0, v1, v1, p1}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$300(Lcom/mediatek/lbs/em2/ui/LbsRawData;IIILjava/lang/Object;)V

    return-void
.end method

.method public onStatusChanged(I)V
    .locals 0

    return-void
.end method
