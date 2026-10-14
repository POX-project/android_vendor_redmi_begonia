.class Lcom/mediatek/ygps/YgpsActivity$8;
.super Landroid/os/Handler;
.source "YgpsActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/ygps/YgpsActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/ygps/YgpsActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/ygps/YgpsActivity;)V
    .locals 0

    .line 817
    iput-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$8;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 4

    .line 819
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x0

    const/4 v2, 0x1

    packed-switch v0, :pswitch_data_0

    goto/16 :goto_1

    .line 845
    :pswitch_0
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$8;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1}, Lcom/mediatek/ygps/YgpsActivity;->access$1000(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/Button;->isEnabled()Z

    move-result p1

    if-nez p1, :cond_2

    .line 846
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$8;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1, v2}, Lcom/mediatek/ygps/YgpsActivity;->access$1400(Lcom/mediatek/ygps/YgpsActivity;Z)V

    .line 847
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$8;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-virtual {p1, v1}, Landroid/app/TabActivity;->removeDialog(I)V

    .line 848
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$8;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p1, v1}, Lcom/mediatek/ygps/YgpsActivity;->access$1502(Lcom/mediatek/ygps/YgpsActivity;Z)Z

    .line 849
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$8;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0, v1}, Lcom/mediatek/ygps/YgpsActivity;->access$1602(Lcom/mediatek/ygps/YgpsActivity;Z)Z

    goto/16 :goto_1

    .line 834
    :pswitch_1
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$8;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    const v0, 0x7f080064

    new-array v3, v2, [Ljava/lang/Object;

    iget p1, p1, Landroid/os/Message;->arg1:I

    .line 837
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Integer;->toString()Ljava/lang/String;

    move-result-object p1

    aput-object p1, v3, v1

    .line 836
    invoke-virtual {p0, v0, v3}, Landroid/app/TabActivity;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    new-array v0, v1, [Ljava/lang/Object;

    invoke-static {p1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    .line 834
    invoke-static {p0, p1, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p0

    .line 838
    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    goto/16 :goto_1

    .line 841
    :pswitch_2
    iget-object p1, p0, Lcom/mediatek/ygps/YgpsActivity$8;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    const v0, 0x7f05006c

    invoke-virtual {p1, v0}, Landroid/app/TabActivity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$8;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    .line 842
    invoke-static {p0}, Lcom/mediatek/ygps/YgpsActivity;->access$1300(Lcom/mediatek/ygps/YgpsActivity;)F

    move-result p0

    invoke-static {p0}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/Float;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_1

    .line 824
    :pswitch_3
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$8;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0}, Lcom/mediatek/ygps/YgpsActivity;->access$900(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/TextView;

    move-result-object p0

    iget p1, p1, Landroid/os/Message;->arg1:I

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Integer;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_1

    .line 827
    :pswitch_4
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$8;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0}, Lcom/mediatek/ygps/YgpsActivity;->access$1000(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;

    move-result-object v0

    iget v3, p1, Landroid/os/Message;->arg1:I

    if-ne v2, v3, :cond_0

    move v3, v2

    goto :goto_0

    :cond_0
    move v3, v1

    :goto_0
    invoke-virtual {v0, v3}, Landroid/widget/Button;->setEnabled(Z)V

    .line 828
    iget-object v0, p0, Lcom/mediatek/ygps/YgpsActivity$8;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {v0}, Lcom/mediatek/ygps/YgpsActivity;->access$1100(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/Button;

    move-result-object v0

    iget v3, p1, Landroid/os/Message;->arg1:I

    if-nez v3, :cond_1

    move v1, v2

    :cond_1
    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 829
    iget p1, p1, Landroid/os/Message;->arg1:I

    if-ne p1, v2, :cond_2

    .line 830
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$8;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    sget-object p1, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-static {p0, p1}, Lcom/mediatek/ygps/YgpsActivity;->access$1200(Lcom/mediatek/ygps/YgpsActivity;Ljava/lang/Boolean;)V

    goto :goto_1

    .line 821
    :pswitch_5
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsActivity$8;->this$0:Lcom/mediatek/ygps/YgpsActivity;

    invoke-static {p0}, Lcom/mediatek/ygps/YgpsActivity;->access$800(Lcom/mediatek/ygps/YgpsActivity;)Landroid/widget/TextView;

    move-result-object p0

    iget p1, p1, Landroid/os/Message;->arg1:I

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Integer;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_2
    :goto_1
    return-void

    :pswitch_data_0
    .packed-switch 0x3ec
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
