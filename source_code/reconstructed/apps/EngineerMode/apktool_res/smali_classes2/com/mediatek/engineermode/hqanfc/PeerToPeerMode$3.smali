.class Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode$3;
.super Ljava/lang/Object;
.source "PeerToPeerMode.java"

# interfaces
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;

    .line 146
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode$3;->this$0:Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 2
    .param p1, "buttonView"    # Landroid/widget/CompoundButton;
    .param p2, "checked"    # Z

    .line 148
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[PeerToPeerMode]onCheckedChanged view is "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getText()Ljava/lang/CharSequence;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, " value is "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Nfc"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 150
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode$3;->this$0:Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;->access$700(Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;)[Landroid/widget/CheckBox;

    move-result-object v0

    const/4 v1, 0x0

    aget-object v0, v0, v1

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 151
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode$3;->this$0:Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;->access$800(Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;)Landroid/widget/RadioGroup;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/RadioGroup;->getChildCount()I

    move-result v1

    if-ge v0, v1, :cond_0

    .line 152
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode$3;->this$0:Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;->access$800(Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;)Landroid/widget/RadioGroup;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/widget/RadioGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1, p2}, Landroid/view/View;->setEnabled(Z)V

    .line 151
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .end local v0    # "i":I
    :cond_0
    goto :goto_2

    .line 154
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode$3;->this$0:Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;->access$700(Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;)[Landroid/widget/CheckBox;

    move-result-object v0

    const/4 v1, 0x1

    aget-object v0, v0, v1

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 155
    const/4 v0, 0x0

    .restart local v0    # "i":I
    :goto_1
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode$3;->this$0:Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;->access$900(Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;)Landroid/widget/RadioGroup;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/RadioGroup;->getChildCount()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 156
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode$3;->this$0:Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;->access$900(Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;)Landroid/widget/RadioGroup;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/widget/RadioGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1, p2}, Landroid/view/View;->setEnabled(Z)V

    .line 155
    add-int/lit8 v0, v0, 0x1

    goto :goto_1

    .line 159
    .end local v0    # "i":I
    :cond_2
    :goto_2
    return-void
.end method
