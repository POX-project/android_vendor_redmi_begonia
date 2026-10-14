.class Lcom/mediatek/engineermode/antenna/AntennaActivity$4;
.super Ljava/lang/Object;
.source "AntennaActivity.java"

# interfaces
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


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

    .line 538
    iput-object p1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$4;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 6
    .param p1, "buttonView"    # Landroid/widget/CompoundButton;
    .param p2, "isChecked"    # Z

    .line 543
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$4;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$4;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1200(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    move-result-object v0

    goto :goto_0

    .line 544
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$4;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1400(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    move-result-object v0

    :goto_0
    nop

    .line 545
    .local v0, "antEgmcObj":Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;
    if-nez v0, :cond_1

    .line 546
    new-instance v1, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    invoke-direct {v1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;-><init>()V

    move-object v0, v1

    .line 548
    :cond_1
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getId()I

    move-result v1

    const/4 v2, 0x3

    const/4 v3, 0x2

    const/4 v4, 0x1

    const/4 v5, 0x0

    packed-switch v1, :pswitch_data_0

    packed-switch v1, :pswitch_data_1

    goto :goto_1

    .line 583
    :pswitch_0
    invoke-virtual {v0, p2, v2}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->updateSCell4Rx(ZI)V

    .line 584
    goto :goto_1

    .line 580
    :pswitch_1
    invoke-virtual {v0, p2, v3}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->updateSCell4Rx(ZI)V

    .line 581
    goto :goto_1

    .line 577
    :pswitch_2
    invoke-virtual {v0, p2, v4}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->updateSCell4Rx(ZI)V

    .line 578
    goto :goto_1

    .line 574
    :pswitch_3
    invoke-virtual {v0, p2, v5}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->updateSCell4Rx(ZI)V

    .line 575
    goto :goto_1

    .line 571
    :pswitch_4
    invoke-virtual {v0, p2, v4}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->updateSCell2Rx(ZI)V

    .line 572
    goto :goto_1

    .line 568
    :pswitch_5
    invoke-virtual {v0, p2, v5}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->updateSCell2Rx(ZI)V

    .line 569
    goto :goto_1

    .line 565
    :pswitch_6
    invoke-virtual {v0, p2, v2}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->updatePCell4Rx(ZI)V

    .line 566
    goto :goto_1

    .line 562
    :pswitch_7
    invoke-virtual {v0, p2, v3}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->updatePCell4Rx(ZI)V

    .line 563
    goto :goto_1

    .line 559
    :pswitch_8
    invoke-virtual {v0, p2, v4}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->updatePCell4Rx(ZI)V

    .line 560
    goto :goto_1

    .line 556
    :pswitch_9
    invoke-virtual {v0, p2, v5}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->updatePCell4Rx(ZI)V

    .line 557
    goto :goto_1

    .line 553
    :pswitch_a
    invoke-virtual {v0, p2, v4}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->updatePCell2Rx(ZI)V

    .line 554
    goto :goto_1

    .line 550
    :pswitch_b
    invoke-virtual {v0, p2, v5}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->updatePCell2Rx(ZI)V

    .line 551
    nop

    .line 588
    :goto_1
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$4;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v1

    if-nez v1, :cond_2

    .line 589
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$4;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1202(Lcom/mediatek/engineermode/antenna/AntennaActivity;Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;)Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    goto :goto_2

    .line 591
    :cond_2
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$4;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1402(Lcom/mediatek/engineermode/antenna/AntennaActivity;Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;)Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    .line 593
    :goto_2
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x7f0605f8
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x7f060694
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
