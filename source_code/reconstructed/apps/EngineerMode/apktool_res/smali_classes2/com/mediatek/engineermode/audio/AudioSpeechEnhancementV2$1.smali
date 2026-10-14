.class Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$1;
.super Ljava/lang/Object;
.source "AudioSpeechEnhancementV2.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemSelectedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->initComponents()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    .line 393
    iput-object p1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onItemSelected(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 4
    .param p2, "arg1"    # Landroid/view/View;
    .param p3, "arg2"    # I
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

    .line 395
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    invoke-static {v0, p3}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->access$302(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;I)I

    .line 396
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->access$300(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;)I

    move-result v0

    const/16 v1, 0x8

    if-eqz v0, :cond_2

    const/4 v2, 0x1

    if-eq v0, v2, :cond_1

    .line 408
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    const-string v2, "APP_GET_CATEGORY=Speech#Profile"

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->access$400(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->access$800(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;Ljava/lang/String;)Z

    move-result v0

    const/4 v2, 0x0

    if-nez v0, :cond_0

    .line 409
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    const-string v3, "Wrong format"

    invoke-static {v0, v3, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 410
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 411
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->access$600(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;)Landroid/widget/Spinner;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setVisibility(I)V

    .line 412
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->access$700(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;)Landroid/widget/Spinner;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setVisibility(I)V

    goto :goto_0

    .line 414
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->access$600(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;)Landroid/widget/Spinner;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/Spinner;->setVisibility(I)V

    .line 415
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->access$700(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;)Landroid/widget/Spinner;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/Spinner;->setVisibility(I)V

    goto :goto_0

    .line 403
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    const-string v2, "APP_GET_PARAM=SpeechGeneral#CategoryLayer,Common#debug_info"

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->access$400(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->access$500(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;Ljava/lang/String;)V

    .line 404
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->access$600(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;)Landroid/widget/Spinner;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setVisibility(I)V

    .line 405
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->access$700(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;)Landroid/widget/Spinner;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setVisibility(I)V

    .line 406
    goto :goto_0

    .line 398
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    const-string v2, "APP_GET_PARAM=SpeechGeneral#CategoryLayer,Common#speech_common_para"

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->access$400(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->access$500(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;Ljava/lang/String;)V

    .line 399
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->access$600(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;)Landroid/widget/Spinner;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setVisibility(I)V

    .line 400
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2$1;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;->access$700(Lcom/mediatek/engineermode/audio/AudioSpeechEnhancementV2;)Landroid/widget/Spinner;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setVisibility(I)V

    .line 401
    nop

    .line 419
    :goto_0
    return-void
.end method

.method public onNothingSelected(Landroid/widget/AdapterView;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;)V"
        }
    .end annotation

    .line 422
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    const-string v0, "Audio/SpeechEnhancement2"

    const-string v1, "do noting..."

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 423
    return-void
.end method
