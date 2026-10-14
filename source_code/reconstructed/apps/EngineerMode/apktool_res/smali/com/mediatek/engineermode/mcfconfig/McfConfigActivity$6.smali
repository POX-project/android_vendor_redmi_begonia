.class Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;
.super Ljava/lang/Object;
.source "McfConfigActivity.java"

# interfaces
.implements Landroid/widget/RadioGroup$OnCheckedChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 653
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/RadioGroup;I)V
    .locals 5
    .param p1, "group"    # Landroid/widget/RadioGroup;
    .param p2, "checkedId"    # I

    .line 655
    const-string v0, ""

    const/4 v1, 0x0

    const/4 v2, 0x1

    .line 691
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    .line 655
    sparse-switch p2, :sswitch_data_0

    goto/16 :goto_0

    .line 666
    :sswitch_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2602(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Z)Z

    .line 667
    goto/16 :goto_0

    .line 674
    :sswitch_1
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v4, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2702(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Z)Z

    .line 675
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$500(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/TextView;

    move-result-object v4

    invoke-virtual {v4, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 676
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;

    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-direct {v0, v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    new-array v2, v2, [Ljava/lang/Integer;

    aput-object v3, v2, v1

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 677
    goto/16 :goto_0

    .line 663
    :sswitch_2
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2602(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Z)Z

    .line 664
    goto/16 :goto_0

    .line 669
    :sswitch_3
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2702(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Z)Z

    .line 670
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$500(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/TextView;

    move-result-object v4

    invoke-virtual {v4, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 671
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;

    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-direct {v0, v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    new-array v2, v2, [Ljava/lang/Integer;

    aput-object v3, v2, v1

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 672
    goto/16 :goto_0

    .line 684
    :sswitch_4
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v4, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2802(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Z)Z

    .line 685
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$700(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/TextView;

    move-result-object v4

    invoke-virtual {v4, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 686
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;

    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-direct {v0, v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    new-array v2, v2, [Ljava/lang/Integer;

    aput-object v3, v2, v1

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 687
    goto :goto_0

    .line 679
    :sswitch_5
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2802(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Z)Z

    .line 680
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$700(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/TextView;

    move-result-object v4

    invoke-virtual {v4, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 681
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;

    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-direct {v0, v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    new-array v2, v2, [Ljava/lang/Integer;

    aput-object v3, v2, v1

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 682
    goto :goto_0

    .line 660
    :sswitch_6
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2502(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;I)I

    .line 661
    goto :goto_0

    .line 657
    :sswitch_7
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2502(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;I)I

    .line 658
    goto :goto_0

    .line 694
    :sswitch_8
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v4, v1}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2902(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Z)Z

    .line 695
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$900(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/TextView;

    move-result-object v4

    invoke-virtual {v4, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 696
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;

    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-direct {v0, v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    new-array v2, v2, [Ljava/lang/Integer;

    aput-object v3, v2, v1

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 697
    goto :goto_0

    .line 689
    :sswitch_9
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2902(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Z)Z

    .line 690
    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$900(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/TextView;

    move-result-object v4

    invoke-virtual {v4, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 691
    new-instance v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;

    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$6;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-direct {v0, v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    new-array v2, v2, [Ljava/lang/Integer;

    aput-object v3, v2, v1

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$loadOTAPathTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 692
    nop

    .line 701
    :goto_0
    return-void

    :sswitch_data_0
    .sparse-switch
        0x7f0603d8 -> :sswitch_9
        0x7f0603da -> :sswitch_8
        0x7f060504 -> :sswitch_7
        0x7f060505 -> :sswitch_6
        0x7f0605df -> :sswitch_5
        0x7f0605e2 -> :sswitch_4
        0x7f0605e9 -> :sswitch_3
        0x7f0605ea -> :sswitch_2
        0x7f0605ec -> :sswitch_1
        0x7f060685 -> :sswitch_0
    .end sparse-switch
.end method
