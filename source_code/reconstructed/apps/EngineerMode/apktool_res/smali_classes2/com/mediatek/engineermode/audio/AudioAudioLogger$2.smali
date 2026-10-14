.class Lcom/mediatek/engineermode/audio/AudioAudioLogger$2;
.super Ljava/lang/Object;
.source "AudioAudioLogger.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemSelectedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/audio/AudioAudioLogger;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    .line 206
    iput-object p1, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$2;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onItemSelected(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 2
    .param p2, "view"    # Landroid/view/View;
    .param p3, "position"    # I
    .param p4, "id"    # J
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;",
            "Landroid/view/View;",
            "IJ)V"
        }
    .end annotation

    .line 208
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "id:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/widget/AdapterView;->getId()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Audio/AudioLogger"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 209
    invoke-virtual {p1}, Landroid/widget/AdapterView;->getId()I

    move-result v0

    sparse-switch v0, :sswitch_data_0

    goto :goto_0

    .line 223
    :sswitch_0
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$2;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$600(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Landroid/widget/EditText;

    move-result-object v0

    invoke-virtual {p1, p3}, Landroid/widget/AdapterView;->getItemAtPosition(I)Ljava/lang/Object;

    move-result-object v1

    .line 224
    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 223
    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 225
    goto :goto_0

    .line 211
    :sswitch_1
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$2;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$100(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Landroid/widget/EditText;

    move-result-object v0

    invoke-virtual {p1, p3}, Landroid/widget/AdapterView;->getItemAtPosition(I)Ljava/lang/Object;

    move-result-object v1

    .line 212
    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 211
    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 213
    goto :goto_0

    .line 219
    :sswitch_2
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$2;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$700(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Landroid/widget/EditText;

    move-result-object v0

    invoke-virtual {p1, p3}, Landroid/widget/AdapterView;->getItemAtPosition(I)Ljava/lang/Object;

    move-result-object v1

    .line 220
    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 219
    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 221
    goto :goto_0

    .line 215
    :sswitch_3
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioAudioLogger$2;->this$0:Lcom/mediatek/engineermode/audio/AudioAudioLogger;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioAudioLogger;->access$400(Lcom/mediatek/engineermode/audio/AudioAudioLogger;)Landroid/widget/EditText;

    move-result-object v0

    invoke-virtual {p1, p3}, Landroid/widget/AdapterView;->getItemAtPosition(I)Ljava/lang/Object;

    move-result-object v1

    .line 216
    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 215
    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 217
    nop

    .line 229
    :goto_0
    return-void

    nop

    :sswitch_data_0
    .sparse-switch
        0x7f06001b -> :sswitch_3
        0x7f06001d -> :sswitch_2
        0x7f06003a -> :sswitch_1
        0x7f06003c -> :sswitch_0
    .end sparse-switch
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

    .line 232
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    return-void
.end method
