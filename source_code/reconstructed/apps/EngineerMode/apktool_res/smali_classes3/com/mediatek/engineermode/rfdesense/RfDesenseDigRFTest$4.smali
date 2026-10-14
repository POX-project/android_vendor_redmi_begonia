.class Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$4;
.super Ljava/lang/Object;
.source "RfDesenseDigRFTest.java"

# interfaces
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    .line 196
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$4;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 1
    .param p1, "buttonView"    # Landroid/widget/CompoundButton;
    .param p2, "isChecked"    # Z

    .line 202
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getId()I

    move-result v0

    packed-switch v0, :pswitch_data_0

    goto :goto_0

    .line 207
    :pswitch_0
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$4;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    iput-boolean p2, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->isRound:Z

    goto :goto_0

    .line 204
    :pswitch_1
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$4;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    iput-boolean p2, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->isPeriod:Z

    .line 205
    nop

    .line 210
    :goto_0
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x7f060657
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
