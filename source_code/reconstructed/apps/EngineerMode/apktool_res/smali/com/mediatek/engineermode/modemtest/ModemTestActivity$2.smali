.class Lcom/mediatek/engineermode/modemtest/ModemTestActivity$2;
.super Ljava/lang/Object;
.source "ModemTestActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->onCreate(Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    .line 254
    iput-object p1, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$2;->this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 6
    .param p1, "v"    # Landroid/view/View;

    .line 257
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    const/4 v1, 0x2

    const/4 v2, 0x1

    const/4 v3, 0x0

    packed-switch v0, :pswitch_data_0

    :pswitch_0
    goto :goto_0

    .line 277
    :pswitch_1
    iget-object v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$2;->this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    const/4 v1, 0x5

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->showDialog(I)V

    .line 278
    goto :goto_0

    .line 259
    :pswitch_2
    iget-object v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$2;->this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    const-string v4, "0"

    invoke-static {v0, v4, v3, v3}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->access$800(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;Ljava/lang/String;II)V

    .line 260
    iget-object v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$2;->this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->access$900(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)I

    move-result v0

    if-ne v0, v1, :cond_0

    .line 261
    iget-object v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$2;->this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->access$1000(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;I)V

    goto :goto_0

    .line 274
    :pswitch_3
    iget-object v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$2;->this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    const/4 v1, 0x3

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->showDialog(I)V

    .line 275
    goto :goto_0

    .line 271
    :pswitch_4
    iget-object v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$2;->this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->showDialog(I)V

    .line 272
    goto :goto_0

    .line 280
    :pswitch_5
    iget-object v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$2;->this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    const/4 v4, 0x6

    const-string v5, "5"

    invoke-static {v0, v5, v3, v4}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->access$800(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;Ljava/lang/String;II)V

    .line 281
    iget-object v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$2;->this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->access$900(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)I

    move-result v0

    if-ne v0, v1, :cond_0

    .line 282
    iget-object v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$2;->this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->access$1000(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;I)V

    goto :goto_0

    .line 265
    :pswitch_6
    iget-object v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$2;->this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    const-string v4, "1"

    invoke-static {v0, v4, v3, v2}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->access$800(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;Ljava/lang/String;II)V

    .line 266
    iget-object v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$2;->this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->access$900(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)I

    move-result v0

    if-ne v0, v1, :cond_0

    .line 267
    iget-object v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$2;->this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->access$1000(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;I)V

    goto :goto_0

    .line 286
    :pswitch_7
    iget-object v0, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$2;->this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->showDialog(I)V

    .line 287
    nop

    .line 291
    :cond_0
    :goto_0
    return-void

    :pswitch_data_0
    .packed-switch 0x7f060598
        :pswitch_7
        :pswitch_0
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_0
        :pswitch_2
        :pswitch_1
    .end packed-switch
.end method
