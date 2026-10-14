.class Lcom/mediatek/engineermode/antenna/AntennaActivity$3;
.super Ljava/lang/Object;
.source "AntennaActivity.java"

# interfaces
.implements Landroid/widget/RadioGroup$OnCheckedChangeListener;


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

    .line 507
    iput-object p1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$3;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/RadioGroup;I)V
    .locals 3
    .param p1, "group"    # Landroid/widget/RadioGroup;
    .param p2, "checkedId"    # I

    .line 511
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$3;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$3;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1200(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    move-result-object v0

    goto :goto_0

    .line 512
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$3;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1400(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    move-result-object v0

    :goto_0
    nop

    .line 513
    .local v0, "antEgmcObj":Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;
    if-nez v0, :cond_1

    .line 514
    return-void

    .line 515
    :cond_1
    const/4 v1, 0x1

    const/4 v2, 0x0

    sparse-switch p2, :sswitch_data_0

    goto :goto_1

    .line 523
    :sswitch_0
    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setCssFollowPcc(Z)V

    .line 524
    goto :goto_1

    .line 526
    :sswitch_1
    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setCssFollowPcc(Z)V

    .line 527
    goto :goto_1

    .line 517
    :sswitch_2
    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setForceRx(Z)V

    .line 518
    goto :goto_1

    .line 520
    :sswitch_3
    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setForceRx(Z)V

    .line 521
    nop

    .line 531
    :goto_1
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$3;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v1

    if-nez v1, :cond_2

    .line 532
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$3;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1202(Lcom/mediatek/engineermode/antenna/AntennaActivity;Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;)Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    goto :goto_2

    .line 534
    :cond_2
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$3;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1402(Lcom/mediatek/engineermode/antenna/AntennaActivity;Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;)Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    .line 536
    :goto_2
    return-void

    nop

    :sswitch_data_0
    .sparse-switch
        0x7f0603c1 -> :sswitch_3
        0x7f0603c2 -> :sswitch_2
        0x7f060691 -> :sswitch_1
        0x7f060692 -> :sswitch_0
    .end sparse-switch
.end method
