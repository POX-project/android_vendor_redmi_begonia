.class Lcom/mediatek/lbs/em2/ui/LbsMisc$CellStateListener;
.super Landroid/telephony/PhoneStateListener;
.source "LbsMisc.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsMisc;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "CellStateListener"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsMisc;)V
    .locals 0

    .line 377
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$CellStateListener;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-direct {p0}, Landroid/telephony/PhoneStateListener;-><init>()V

    return-void
.end method


# virtual methods
.method public onCallStateChanged(ILjava/lang/String;)V
    .locals 2

    .line 395
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$CellStateListener;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onCallStateChanged state="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, " incomingNumber="

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$1700(Lcom/mediatek/lbs/em2/ui/LbsMisc;Ljava/lang/String;)V

    return-void
.end method

.method public onCellLocationChanged(Landroid/telephony/CellLocation;)V
    .locals 3

    .line 380
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$CellStateListener;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onCellLocationChanged location="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$1700(Lcom/mediatek/lbs/em2/ui/LbsMisc;Ljava/lang/String;)V

    .line 381
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$CellStateListener;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$1800(Lcom/mediatek/lbs/em2/ui/LbsMisc;)V

    return-void
.end method

.method public onDataConnectionStateChanged(II)V
    .locals 3

    .line 385
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$CellStateListener;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onDataConnectionStateChanged state="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, " networkType="

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$1700(Lcom/mediatek/lbs/em2/ui/LbsMisc;Ljava/lang/String;)V

    .line 386
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$CellStateListener;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$1800(Lcom/mediatek/lbs/em2/ui/LbsMisc;)V

    return-void
.end method

.method public onServiceStateChanged(Landroid/telephony/ServiceState;)V
    .locals 3

    .line 390
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$CellStateListener;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onServiceStateChanged serviceState="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$1700(Lcom/mediatek/lbs/em2/ui/LbsMisc;Ljava/lang/String;)V

    .line 391
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$CellStateListener;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$1800(Lcom/mediatek/lbs/em2/ui/LbsMisc;)V

    return-void
.end method
