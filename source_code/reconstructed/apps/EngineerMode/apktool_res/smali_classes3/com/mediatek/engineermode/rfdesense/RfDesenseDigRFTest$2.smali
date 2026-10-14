.class Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$2;
.super Ljava/lang/Object;
.source "RfDesenseDigRFTest.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


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

    .line 162
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$2;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2
    .param p1, "v"    # Landroid/view/View;

    .line 167
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    const v1, 0x7f060257

    if-eq v0, v1, :cond_1

    const v1, 0x7f06025b

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 169
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$2;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-static {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)V

    .line 170
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$2;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-static {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$100(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)V

    .line 171
    goto :goto_0

    .line 173
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$2;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    invoke-static {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;)V

    .line 174
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest$2;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;

    const/4 v1, 0x2

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;->access$202(Lcom/mediatek/engineermode/rfdesense/RfDesenseDigRFTest;I)I

    .line 175
    nop

    .line 179
    :goto_0
    return-void
.end method
