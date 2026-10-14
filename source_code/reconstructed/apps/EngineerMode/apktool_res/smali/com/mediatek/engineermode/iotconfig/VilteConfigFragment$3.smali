.class Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$3;
.super Ljava/lang/Object;
.source "VilteConfigFragment.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    .line 144
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$3;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 4
    .param p1, "v"    # Landroid/view/View;

    .line 149
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    const/4 v1, 0x0

    packed-switch v0, :pswitch_data_0

    :pswitch_0
    goto :goto_0

    .line 163
    :pswitch_1
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$3;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$3;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v2

    invoke-virtual {v2}, Landroid/support/v4/app/FragmentActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const v3, 0x7f0a066d

    .line 164
    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 163
    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->showInfoDialog(Landroid/content/Context;Ljava/lang/String;)V

    .line 165
    goto :goto_0

    .line 154
    :pswitch_2
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$3;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-static {v0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->access$100(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;)Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->getList()Ljava/util/ArrayList;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->access$200(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;Ljava/util/ArrayList;)V

    .line 155
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$3;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->access$300(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;Z)V

    .line 156
    new-instance v0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;

    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$3;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-direct {v0, v2, v1}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;-><init>(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;I)V

    invoke-virtual {v0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->start()V

    .line 157
    goto :goto_0

    .line 159
    :pswitch_3
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$3;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    const-string v2, "viLTE_media_profiles.xml"

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->deleteFileFromInnerSDCard(Ljava/lang/String;)Z

    .line 160
    new-instance v0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;

    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$3;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-direct {v0, v2, v1}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;-><init>(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;I)V

    invoke-virtual {v0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->start()V

    .line 161
    goto :goto_0

    .line 151
    :pswitch_4
    new-instance v0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;

    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$3;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-direct {v0, v2, v1}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;-><init>(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;I)V

    invoke-virtual {v0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->start()V

    .line 152
    nop

    .line 169
    :goto_0
    return-void

    :pswitch_data_0
    .packed-switch 0x7f06024c
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_0
        :pswitch_1
    .end packed-switch
.end method
