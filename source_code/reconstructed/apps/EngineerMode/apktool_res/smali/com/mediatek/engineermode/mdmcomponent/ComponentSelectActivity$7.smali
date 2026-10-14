.class Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$7;
.super Ljava/lang/Object;
.source "ComponentSelectActivity.java"

# interfaces
.implements Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$InputDialogOnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->showRsrpSinrConfigDlg(Ljava/util/ArrayList;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

.field final synthetic val$bNeedShowSimConfig:Z


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;Z)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    .line 733
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$7;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    iput-boolean p2, p0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$7;->val$bNeedShowSimConfig:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 29
    .param p1, "dialog"    # Landroid/content/DialogInterface;
    .param p2, "which"    # I
    .param p3, "inputStrong1XStr"    # Ljava/lang/String;
    .param p4, "inputStrong1YStr"    # Ljava/lang/String;
    .param p5, "inputStrong2XStr"    # Ljava/lang/String;
    .param p6, "inputStrong2YStr"    # Ljava/lang/String;
    .param p7, "inputStrong3XStr"    # Ljava/lang/String;
    .param p8, "inputStrong3YStr"    # Ljava/lang/String;
    .param p9, "inputMediumWeak1XStr"    # Ljava/lang/String;
    .param p10, "inputMediumWeak1YStr"    # Ljava/lang/String;
    .param p11, "inputMediumWeak2XStr"    # Ljava/lang/String;
    .param p12, "inputMediumWeak2YStr"    # Ljava/lang/String;
    .param p13, "inputMediumWeak3XStr"    # Ljava/lang/String;
    .param p14, "inputMediumWeak3YStr"    # Ljava/lang/String;
    .param p15, "inputWeak1XStr"    # Ljava/lang/String;
    .param p16, "inputWeak1YStr"    # Ljava/lang/String;
    .param p17, "inputWeak2XStr"    # Ljava/lang/String;
    .param p18, "inputWeak2YStr"    # Ljava/lang/String;
    .param p19, "inputWeak3XStr"    # Ljava/lang/String;
    .param p20, "inputWeak3YStr"    # Ljava/lang/String;

    .line 747
    move-object/from16 v1, p0

    move/from16 v2, p2

    const v3, 0x7f010099

    const/4 v4, 0x1

    const/16 v5, -0x1e

    const/16 v6, 0x1e

    const/16 v7, -0x14

    const/16 v8, -0x8c

    const/4 v0, -0x1

    if-ne v2, v0, :cond_6

    .line 748
    const/4 v9, 0x1

    .line 750
    .local v9, "validInput":Z
    :try_start_0
    invoke-static/range {p3 .. p3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$402(I)I

    .line 751
    invoke-static/range {p4 .. p4}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$502(I)I

    .line 752
    invoke-static/range {p5 .. p5}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$602(I)I

    .line 753
    invoke-static/range {p6 .. p6}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$702(I)I

    .line 754
    invoke-static/range {p7 .. p7}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$802(I)I

    .line 755
    invoke-static/range {p8 .. p8}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$902(I)I

    .line 756
    invoke-static/range {p9 .. p9}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1002(I)I

    .line 757
    invoke-static/range {p10 .. p10}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1102(I)I

    .line 758
    invoke-static/range {p11 .. p11}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1202(I)I

    .line 759
    invoke-static/range {p12 .. p12}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1302(I)I

    .line 760
    invoke-static/range {p13 .. p13}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1402(I)I

    .line 761
    invoke-static/range {p14 .. p14}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1502(I)I

    .line 762
    invoke-static/range {p15 .. p15}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1602(I)I

    .line 763
    invoke-static/range {p16 .. p16}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1702(I)I

    .line 764
    invoke-static/range {p17 .. p17}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1802(I)I

    .line 765
    invoke-static/range {p18 .. p18}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1902(I)I

    .line 766
    invoke-static/range {p19 .. p19}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$2002(I)I

    .line 767
    invoke-static/range {p20 .. p20}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$2102(I)I
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 770
    goto :goto_0

    .line 768
    :catch_0
    move-exception v0

    .line 769
    .local v0, "e":Ljava/lang/NumberFormatException;
    const/4 v9, 0x0

    .line 771
    .end local v0    # "e":Ljava/lang/NumberFormatException;
    :goto_0
    const/4 v0, 0x0

    if-eqz v9, :cond_5

    .line 772
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$400()I

    move-result v10

    if-lt v10, v8, :cond_4

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$400()I

    move-result v10

    if-gt v10, v5, :cond_4

    .line 773
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$600()I

    move-result v10

    if-lt v10, v8, :cond_4

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$600()I

    move-result v10

    if-gt v10, v5, :cond_4

    .line 774
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$800()I

    move-result v10

    if-lt v10, v8, :cond_4

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$800()I

    move-result v10

    if-gt v10, v5, :cond_4

    .line 775
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1000()I

    move-result v10

    if-lt v10, v8, :cond_4

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1000()I

    move-result v10

    if-gt v10, v5, :cond_4

    .line 776
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1200()I

    move-result v10

    if-lt v10, v8, :cond_4

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1200()I

    move-result v10

    if-gt v10, v5, :cond_4

    .line 777
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1400()I

    move-result v10

    if-lt v10, v8, :cond_4

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1400()I

    move-result v10

    if-gt v10, v5, :cond_4

    .line 778
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1600()I

    move-result v10

    if-lt v10, v8, :cond_4

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1600()I

    move-result v10

    if-gt v10, v5, :cond_4

    .line 779
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1800()I

    move-result v10

    if-lt v10, v8, :cond_4

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1800()I

    move-result v10

    if-gt v10, v5, :cond_4

    .line 780
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$2000()I

    move-result v10

    if-lt v10, v8, :cond_4

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$2000()I

    move-result v8

    if-le v8, v5, :cond_0

    goto/16 :goto_2

    .line 784
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$500()I

    move-result v5

    if-lt v5, v7, :cond_3

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$500()I

    move-result v5

    if-gt v5, v6, :cond_3

    .line 785
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$700()I

    move-result v5

    if-lt v5, v7, :cond_3

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$700()I

    move-result v5

    if-gt v5, v6, :cond_3

    .line 786
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$900()I

    move-result v5

    if-lt v5, v7, :cond_3

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$900()I

    move-result v5

    if-gt v5, v6, :cond_3

    .line 787
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1100()I

    move-result v5

    if-lt v5, v7, :cond_3

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1100()I

    move-result v5

    if-gt v5, v6, :cond_3

    .line 788
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1300()I

    move-result v5

    if-lt v5, v7, :cond_3

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1300()I

    move-result v5

    if-gt v5, v6, :cond_3

    .line 789
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1500()I

    move-result v5

    if-lt v5, v7, :cond_3

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1500()I

    move-result v5

    if-gt v5, v6, :cond_3

    .line 790
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1700()I

    move-result v5

    if-lt v5, v7, :cond_3

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1700()I

    move-result v5

    if-gt v5, v6, :cond_3

    .line 791
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1900()I

    move-result v5

    if-lt v5, v7, :cond_3

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1900()I

    move-result v5

    if-gt v5, v6, :cond_3

    .line 792
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$2100()I

    move-result v5

    if-lt v5, v7, :cond_3

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$2100()I

    move-result v5

    if-le v5, v6, :cond_1

    goto :goto_1

    .line 797
    :cond_1
    invoke-interface/range {p1 .. p1}, Landroid/content/DialogInterface;->dismiss()V

    .line 798
    iget-object v10, v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$7;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$400()I

    move-result v11

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$500()I

    move-result v12

    .line 799
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$600()I

    move-result v13

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$700()I

    move-result v14

    .line 800
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$800()I

    move-result v15

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$900()I

    move-result v16

    .line 801
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1000()I

    move-result v17

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1100()I

    move-result v18

    .line 802
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1200()I

    move-result v19

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1300()I

    move-result v20

    .line 803
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1400()I

    move-result v21

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1500()I

    move-result v22

    .line 804
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1600()I

    move-result v23

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1700()I

    move-result v24

    .line 805
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1800()I

    move-result v25

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1900()I

    move-result v26

    .line 806
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$2000()I

    move-result v27

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$2100()I

    move-result v28

    .line 798
    invoke-static/range {v10 .. v28}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$2200(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;IIIIIIIIIIIIIIIIII)V

    .line 807
    iget-boolean v0, v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$7;->val$bNeedShowSimConfig:Z

    if-eqz v0, :cond_2

    .line 808
    iget-object v0, v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$7;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    invoke-virtual {v4, v3}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$2300(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;[Ljava/lang/String;)V

    goto/16 :goto_3

    .line 811
    :cond_2
    iget-object v0, v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$7;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->showDialog(I)V

    .line 812
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;

    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$7;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    invoke-direct {v0, v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;-><init>(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;I)V

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;->start()V

    goto/16 :goto_3

    .line 793
    :cond_3
    :goto_1
    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$7;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    const-string v4, "The Point Y must be -20 ~ 30"

    invoke-static {v3, v4, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 795
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    goto/16 :goto_3

    .line 781
    :cond_4
    :goto_2
    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$7;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    const-string v4, "The Point X must be -140 ~ -30"

    invoke-static {v3, v4, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 783
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    goto/16 :goto_3

    .line 816
    :cond_5
    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$7;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    const-string v4, "Invalid RSRP/SINR"

    invoke-static {v3, v4, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 817
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    goto/16 :goto_3

    .line 819
    .end local v9    # "validInput":Z
    :cond_6
    const/4 v0, -0x2

    if-ne v2, v0, :cond_8

    .line 820
    const/16 v0, -0x50

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$402(I)I

    .line 821
    invoke-static {v6}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$502(I)I

    .line 822
    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$602(I)I

    .line 823
    const/16 v0, 0x14

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$702(I)I

    .line 824
    invoke-static {v5}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$802(I)I

    .line 825
    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$902(I)I

    .line 826
    invoke-static {v8}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1002(I)I

    .line 827
    const/16 v0, 0xa

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1102(I)I

    .line 828
    const/16 v5, -0x5a

    invoke-static {v5}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1202(I)I

    .line 829
    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1302(I)I

    .line 830
    invoke-static {v5}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1402(I)I

    .line 831
    invoke-static {v7}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1502(I)I

    .line 832
    invoke-static {v8}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1602(I)I

    .line 833
    const/4 v0, 0x5

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1702(I)I

    .line 834
    const/16 v5, -0x64

    invoke-static {v5}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1802(I)I

    .line 835
    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1902(I)I

    .line 836
    invoke-static {v5}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$2002(I)I

    .line 837
    invoke-static {v7}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$2102(I)I

    .line 838
    invoke-interface/range {p1 .. p1}, Landroid/content/DialogInterface;->dismiss()V

    .line 839
    iget-object v8, v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$7;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$400()I

    move-result v9

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$500()I

    move-result v10

    .line 840
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$600()I

    move-result v11

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$700()I

    move-result v12

    .line 841
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$800()I

    move-result v13

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$900()I

    move-result v14

    .line 842
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1000()I

    move-result v15

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1100()I

    move-result v16

    .line 843
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1200()I

    move-result v17

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1300()I

    move-result v18

    .line 844
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1400()I

    move-result v19

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1500()I

    move-result v20

    .line 845
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1600()I

    move-result v21

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1700()I

    move-result v22

    .line 846
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1800()I

    move-result v23

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$1900()I

    move-result v24

    .line 847
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$2000()I

    move-result v25

    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$2100()I

    move-result v26

    .line 839
    invoke-static/range {v8 .. v26}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$2200(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;IIIIIIIIIIIIIIIIII)V

    .line 848
    iget-boolean v0, v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$7;->val$bNeedShowSimConfig:Z

    if-eqz v0, :cond_7

    .line 849
    iget-object v0, v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$7;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    invoke-virtual {v4, v3}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->access$2300(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;[Ljava/lang/String;)V

    goto :goto_4

    .line 852
    :cond_7
    iget-object v0, v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$7;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->showDialog(I)V

    .line 853
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;

    iget-object v3, v1, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$7;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    invoke-direct {v0, v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;-><init>(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;I)V

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$MdmCoreThread;->start()V

    goto :goto_4

    .line 819
    :cond_8
    :goto_3
    nop

    .line 856
    :goto_4
    return-void
.end method
