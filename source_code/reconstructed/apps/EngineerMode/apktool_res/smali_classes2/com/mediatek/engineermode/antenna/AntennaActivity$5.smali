.class Lcom/mediatek/engineermode/antenna/AntennaActivity$5;
.super Ljava/lang/Object;
.source "AntennaActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/antenna/AntennaActivity;->initAntEgmcView()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/antenna/AntennaActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;

    .line 595
    iput-object p1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$5;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2
    .param p1, "v"    # Landroid/view/View;

    .line 600
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    packed-switch v0, :pswitch_data_0

    .line 616
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "OnClickListener: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/view/View;->getLabelFor()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "AntennaActivity"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 609
    :pswitch_0
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$5;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v0

    if-nez v0, :cond_0

    .line 610
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$5;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->setEgmcAnt4G()V

    goto :goto_0

    .line 612
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$5;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->setEgmcAntNR()V

    .line 614
    goto :goto_0

    .line 602
    :pswitch_1
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$5;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v0

    if-nez v0, :cond_1

    .line 603
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$5;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->queryEgmcAnt4G()V

    goto :goto_0

    .line 605
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$5;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->queryEgmcAntNR()V

    .line 607
    nop

    .line 619
    :goto_0
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x7f0601ca
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
