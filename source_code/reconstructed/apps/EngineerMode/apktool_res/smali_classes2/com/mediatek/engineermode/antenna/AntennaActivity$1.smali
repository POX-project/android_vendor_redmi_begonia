.class Lcom/mediatek/engineermode/antenna/AntennaActivity$1;
.super Ljava/lang/Object;
.source "AntennaActivity.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemSelectedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/antenna/AntennaActivity;
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

    .line 134
    iput-object p1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onItemSelected(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 3
    .param p2, "arg1"    # Landroid/view/View;
    .param p3, "pos"    # I
    .param p4, "arg3"    # J
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;",
            "Landroid/view/View;",
            "IJ)V"
        }
    .end annotation

    .line 138
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$000(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Landroid/widget/Spinner;

    move-result-object v0

    if-ne p1, v0, :cond_1

    .line 139
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v0

    invoke-virtual {p1}, Landroid/widget/AdapterView;->getSelectedItemPosition()I

    move-result v1

    if-ne v0, v1, :cond_0

    .line 140
    return-void

    .line 142
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-virtual {p1}, Landroid/widget/AdapterView;->getSelectedItemPosition()I

    move-result v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$102(Lcom/mediatek/engineermode/antenna/AntennaActivity;I)I

    .line 143
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0, p3}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$200(Lcom/mediatek/engineermode/antenna/AntennaActivity;I)V

    goto/16 :goto_2

    .line 144
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$300(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Landroid/widget/Spinner;

    move-result-object v0

    const/4 v1, 0x1

    if-ne p1, v0, :cond_4

    .line 145
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$400(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v0

    invoke-virtual {p1}, Landroid/widget/AdapterView;->getSelectedItemPosition()I

    move-result v2

    if-eq v0, v2, :cond_3

    if-nez p3, :cond_2

    goto :goto_0

    .line 148
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-virtual {p1}, Landroid/widget/AdapterView;->getSelectedItemPosition()I

    move-result v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$402(Lcom/mediatek/engineermode/antenna/AntennaActivity;I)I

    .line 149
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    add-int/lit8 v2, p3, 0xa

    sub-int/2addr v2, v1

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$200(Lcom/mediatek/engineermode/antenna/AntennaActivity;I)V

    goto/16 :goto_2

    .line 146
    :cond_3
    :goto_0
    return-void

    .line 150
    :cond_4
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$500(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Landroid/widget/Spinner;

    move-result-object v0

    if-ne p1, v0, :cond_6

    .line 151
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$600(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v0

    invoke-virtual {p1}, Landroid/widget/AdapterView;->getSelectedItemPosition()I

    move-result v1

    if-ne v0, v1, :cond_5

    .line 152
    return-void

    .line 154
    :cond_5
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-virtual {p1}, Landroid/widget/AdapterView;->getSelectedItemPosition()I

    move-result v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$602(Lcom/mediatek/engineermode/antenna/AntennaActivity;I)I

    .line 155
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0, p3}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$700(Lcom/mediatek/engineermode/antenna/AntennaActivity;I)V

    goto/16 :goto_2

    .line 156
    :cond_6
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$800(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Landroid/widget/Spinner;

    move-result-object v0

    if-ne p1, v0, :cond_9

    .line 157
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$900(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v0

    invoke-virtual {p1}, Landroid/widget/AdapterView;->getSelectedItemPosition()I

    move-result v2

    if-eq v0, v2, :cond_8

    if-nez p3, :cond_7

    goto :goto_1

    .line 160
    :cond_7
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-virtual {p1}, Landroid/widget/AdapterView;->getSelectedItemPosition()I

    move-result v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$902(Lcom/mediatek/engineermode/antenna/AntennaActivity;I)I

    .line 161
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    add-int/lit8 v2, p3, 0x14

    sub-int/2addr v2, v1

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$200(Lcom/mediatek/engineermode/antenna/AntennaActivity;I)V

    goto/16 :goto_2

    .line 158
    :cond_8
    :goto_1
    return-void

    .line 162
    :cond_9
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1000(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Landroid/widget/Spinner;

    move-result-object v0

    if-ne p1, v0, :cond_c

    .line 163
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v0

    invoke-virtual {p1}, Landroid/widget/AdapterView;->getSelectedItemPosition()I

    move-result v2

    if-ne v0, v2, :cond_a

    .line 164
    return-void

    .line 166
    :cond_a
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onItemSelected : "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 167
    invoke-virtual {p1}, Landroid/widget/AdapterView;->getSelectedItemPosition()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 166
    const-string v2, "AntennaActivity"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 168
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-virtual {p1}, Landroid/widget/AdapterView;->getSelectedItemPosition()I

    move-result v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1102(Lcom/mediatek/engineermode/antenna/AntennaActivity;I)I

    .line 169
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v0

    if-nez v0, :cond_b

    .line 170
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1200(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->updateAntEgmcView(Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;)V

    .line 171
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1300(Lcom/mediatek/engineermode/antenna/AntennaActivity;)V

    .line 172
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1200(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->show()V

    .line 173
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1400(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->hide()V

    goto :goto_2

    .line 174
    :cond_b
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v0

    if-ne v0, v1, :cond_c

    .line 175
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1400(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->updateAntEgmcView(Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;)V

    .line 176
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->queryEgmcAntNR()V

    .line 177
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1200(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->hide()V

    .line 178
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1400(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->show()V

    .line 181
    :cond_c
    :goto_2
    return-void
.end method

.method public onNothingSelected(Landroid/widget/AdapterView;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;)V"
        }
    .end annotation

    .line 186
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    return-void
.end method
