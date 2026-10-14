.class Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction$3;
.super Ljava/lang/Object;
.source "VirtualCardFunction.java"

# interfaces
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;

    .line 118
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction$3;->this$0:Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 2
    .param p1, "buttonView"    # Landroid/widget/CompoundButton;
    .param p2, "checked"    # Z

    .line 120
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[VirtualCardFunction]onCheckedChanged view is "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 121
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getText()Ljava/lang/CharSequence;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, " value is "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 120
    const-string v1, "Nfc"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 131
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction$3;->this$0:Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->access$500(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;)[Landroid/widget/CheckBox;

    move-result-object v0

    const/4 v1, 0x2

    aget-object v0, v0, v1

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 135
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction$3;->this$0:Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->access$500(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;)[Landroid/widget/CheckBox;

    move-result-object v0

    const/4 v1, 0x3

    aget-object v0, v0, v1

    invoke-virtual {v0, p2}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 136
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction$3;->this$0:Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->access$500(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;)[Landroid/widget/CheckBox;

    move-result-object v0

    const/4 v1, 0x4

    aget-object v0, v0, v1

    invoke-virtual {v0, p2}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 138
    :cond_0
    return-void
.end method
