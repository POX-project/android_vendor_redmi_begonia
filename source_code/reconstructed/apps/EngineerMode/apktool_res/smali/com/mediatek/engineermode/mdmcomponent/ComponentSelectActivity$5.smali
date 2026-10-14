.class Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;
.super Ljava/lang/Object;
.source "ComponentSelectActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->showMultiInputDlg(Ljava/lang/CharSequence;Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$InputDialogOnClickListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

.field final synthetic val$dialog:Landroid/app/AlertDialog;

.field final synthetic val$listener:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$InputDialogOnClickListener;

.field final synthetic val$mediumweakPoint1XEdit:Landroid/widget/EditText;

.field final synthetic val$mediumweakPoint1YEdit:Landroid/widget/EditText;

.field final synthetic val$mediumweakPoint2XEdit:Landroid/widget/EditText;

.field final synthetic val$mediumweakPoint2YEdit:Landroid/widget/EditText;

.field final synthetic val$mediumweakPoint3XEdit:Landroid/widget/EditText;

.field final synthetic val$mediumweakPoint3YEdit:Landroid/widget/EditText;

.field final synthetic val$strongPoint1XEdit:Landroid/widget/EditText;

.field final synthetic val$strongPoint1YEdit:Landroid/widget/EditText;

.field final synthetic val$strongPoint2XEdit:Landroid/widget/EditText;

.field final synthetic val$strongPoint2YEdit:Landroid/widget/EditText;

.field final synthetic val$strongPoint3XEdit:Landroid/widget/EditText;

.field final synthetic val$strongPoint3YEdit:Landroid/widget/EditText;

.field final synthetic val$weakPoint1XEdit:Landroid/widget/EditText;

.field final synthetic val$weakPoint1YEdit:Landroid/widget/EditText;

.field final synthetic val$weakPoint2XEdit:Landroid/widget/EditText;

.field final synthetic val$weakPoint2YEdit:Landroid/widget/EditText;

.field final synthetic val$weakPoint3XEdit:Landroid/widget/EditText;

.field final synthetic val$weakPoint3YEdit:Landroid/widget/EditText;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$InputDialogOnClickListener;Landroid/app/AlertDialog;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/widget/EditText;)V
    .locals 3
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    .line 678
    move-object v0, p0

    move-object v1, p1

    iput-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;

    move-object v2, p2

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$listener:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$InputDialogOnClickListener;

    move-object v2, p3

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$dialog:Landroid/app/AlertDialog;

    move-object v2, p4

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$strongPoint1XEdit:Landroid/widget/EditText;

    move-object v2, p5

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$strongPoint1YEdit:Landroid/widget/EditText;

    move-object v2, p6

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$strongPoint2XEdit:Landroid/widget/EditText;

    move-object v2, p7

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$strongPoint2YEdit:Landroid/widget/EditText;

    move-object v2, p8

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$strongPoint3XEdit:Landroid/widget/EditText;

    move-object v2, p9

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$strongPoint3YEdit:Landroid/widget/EditText;

    move-object v2, p10

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$mediumweakPoint1XEdit:Landroid/widget/EditText;

    move-object v2, p11

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$mediumweakPoint1YEdit:Landroid/widget/EditText;

    move-object v2, p12

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$mediumweakPoint2XEdit:Landroid/widget/EditText;

    move-object/from16 v2, p13

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$mediumweakPoint2YEdit:Landroid/widget/EditText;

    move-object/from16 v2, p14

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$mediumweakPoint3XEdit:Landroid/widget/EditText;

    move-object/from16 v2, p15

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$mediumweakPoint3YEdit:Landroid/widget/EditText;

    move-object/from16 v2, p16

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$weakPoint1XEdit:Landroid/widget/EditText;

    move-object/from16 v2, p17

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$weakPoint1YEdit:Landroid/widget/EditText;

    move-object/from16 v2, p18

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$weakPoint2XEdit:Landroid/widget/EditText;

    move-object/from16 v2, p19

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$weakPoint2YEdit:Landroid/widget/EditText;

    move-object/from16 v2, p20

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$weakPoint3XEdit:Landroid/widget/EditText;

    move-object/from16 v2, p21

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$weakPoint3YEdit:Landroid/widget/EditText;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 22
    .param p1, "view"    # Landroid/view/View;

    .line 681
    move-object/from16 v0, p0

    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$listener:Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$InputDialogOnClickListener;

    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$dialog:Landroid/app/AlertDialog;

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$strongPoint1XEdit:Landroid/widget/EditText;

    .line 682
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$strongPoint1YEdit:Landroid/widget/EditText;

    .line 683
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$strongPoint2XEdit:Landroid/widget/EditText;

    .line 684
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v6

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$strongPoint2YEdit:Landroid/widget/EditText;

    .line 685
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v7

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$strongPoint3XEdit:Landroid/widget/EditText;

    .line 686
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v8

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$strongPoint3YEdit:Landroid/widget/EditText;

    .line 687
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v9

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$mediumweakPoint1XEdit:Landroid/widget/EditText;

    .line 688
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v10

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$mediumweakPoint1YEdit:Landroid/widget/EditText;

    .line 689
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v11

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$mediumweakPoint2XEdit:Landroid/widget/EditText;

    .line 690
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v12

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$mediumweakPoint2YEdit:Landroid/widget/EditText;

    .line 691
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v13

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$mediumweakPoint3XEdit:Landroid/widget/EditText;

    .line 692
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v14

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$mediumweakPoint3YEdit:Landroid/widget/EditText;

    .line 693
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v15

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$weakPoint1XEdit:Landroid/widget/EditText;

    .line 694
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v16

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$weakPoint1YEdit:Landroid/widget/EditText;

    .line 695
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v17

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$weakPoint2XEdit:Landroid/widget/EditText;

    .line 696
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v18

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$weakPoint2YEdit:Landroid/widget/EditText;

    .line 697
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v19

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$weakPoint3XEdit:Landroid/widget/EditText;

    .line 698
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v20

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$5;->val$weakPoint3YEdit:Landroid/widget/EditText;

    .line 699
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v21

    .line 681
    const/4 v3, -0x1

    invoke-interface/range {v1 .. v21}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity$InputDialogOnClickListener;->onClick(Landroid/content/DialogInterface;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 700
    return-void
.end method
